// Lean compiler output
// Module: Lean.Elab.StructInst
// Imports: Init Lean.Util.FindExpr Lean.Parser.Term Lean.Elab.App Lean.Elab.Binders
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
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnexpectedExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFields(lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__2(lean_object*, lean_object*);
lean_object* l_Std_HashMap_toList___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__6(lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(lean_object*, lean_object*);
uint8_t l_List_foldr___at_Lean_Elab_Term_StructInst_Struct_allDefault___spec__1(uint8_t, lean_object*);
size_t l_USize_add(size_t, size_t);
extern lean_object* l_Lean_fieldIdxKind;
lean_object* l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__3(lean_object*);
lean_object* l_List_tail_x21___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_expr_x3f___default;
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst_match__2(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_instInhabitedField(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_StructInst_DefaultFields_reduce___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__2___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__8(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce___boxed__const__1;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__1;
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax_match__1(lean_object*);
uint8_t l_Lean_Elab_Term_StructInst_Struct_allDefault(lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Elab_Term_StructInst_instToFormatFieldLHS_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_mdata(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__3;
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_instToFormatStruct;
lean_object* l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__7(lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___lambda__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields_match__1(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnknownExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkProjStx(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__1;
lean_object* l_List_forIn_loop___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_Context_allStructNames___default;
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f_match__1(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__1(lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_markDefaultMissing(lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_initFn____x40_Lean_Elab_StructInst___hyg_7210_(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__2;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__2(lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Monad_seqRight___default___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__1(lean_object*);
lean_object* l_List_append___rarg(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__1(lean_object*, lean_object*);
lean_object* l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(lean_object*);
lean_object* l_Lean_annotation_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___boxed(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst(lean_object*);
lean_object* l_Std_HashMapImp_expand___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__5(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_ref(lean_object*);
lean_object* l_Lean_Elab_Term_getMVarDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__1(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_instInhabitedStruct;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_expandStructInstExpectedType(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_setFields(lean_object*, lean_object*);
lean_object* l_Std_HashMap_toList___rarg(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__1(lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_max(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatField(lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__1(lean_object*);
lean_object* l_Std_Format_joinSep___at_instReprProd___spec__1(lean_object*, lean_object*);
lean_object* l_Std_AssocList_contains___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__4___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeAppInstMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst_match__1(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_List_head_x21___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedTermElabM(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_StructInst_Field_toSyntax___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_toList___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__6___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_elabNumLit___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__3(lean_object*);
extern lean_object* l_Lean_levelZero;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_foldl___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionStructureName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_ensureHasType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___lambda__1___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple___rarg___boxed(lean_object*);
lean_object* l_Std_Format_joinSep___at_Lean_Elab_Term_StructInst_formatField___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__1(lean_object*);
lean_object* l_List_foldl___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_UInt64_toUSize(uint64_t);
lean_object* l_Lean_Elab_Term_StructInst_Source_isNone___boxed(lean_object*);
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_structName(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MetavarContext_isExprAssigned(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_defaultMissing_x3f___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_StructInst_throwFailedToElabField___spec__1(lean_object*);
lean_object* l_Lean_Meta_project_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__2(lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_StructInst_throwFailedToElabField___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_instToStringStruct;
lean_object* l_Std_HashMapImp_moveEntries___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__5;
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___boxed(lean_object*);
lean_object* l_Lean_Elab_throwAbortTerm___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__4___rarg(lean_object*);
lean_object* l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__2(lean_object*);
lean_object* l_List_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__4(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux_match__1(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_instToStringFieldStruct;
lean_object* l_Lean_Elab_Term_StructInst_instToFormatFieldStruct;
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatStruct(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple(lean_object*);
lean_object* l_List_map___at_Lean_Elab_Term_StructInst_formatStruct___spec__1(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__3(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_fields___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_Context_structs___default;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax(uint8_t, lean_object*);
lean_object* l_Lean_mkAnnotation(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Source_isNone_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashMapImp___rarg(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__2(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabited___rarg(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__3;
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_instantiate_type_lparams(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatField_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Name_hash(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___rarg(lean_object*, lean_object*);
lean_object* l_List_findSome_x3f___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_prettyPrint(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__1(lean_object*);
uint8_t l_Array_contains___at_Lean_findField_x3f___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource_match__1(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_getStructureFields(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_abortTermExceptionId;
lean_object* l_Lean_Elab_Term_StructInst_CtorHeaderResult_instMVars___default;
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnknownExpectedType___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* l_Std_fmt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__1(lean_object*);
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_defaultMissing_x3f(lean_object*);
lean_object* l_Lean_getPathToBaseStructure_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__2(lean_object*);
size_t lean_usize_modn(size_t, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_setStructSourceSyntax_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___boxed(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__4;
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1(lean_object*, lean_object*);
lean_object* l_Std_mkHashMap___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__11(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_instInhabitedFieldLHS;
extern lean_object* l_Lean_instInhabitedSyntax;
lean_object* l_Lean_Meta_synthInstance_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__2___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1(lean_object*, lean_object*);
lean_object* l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__3___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__1(lean_object*);
uint8_t l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__3(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_fields(lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault___boxed(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f_match__1(lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_structName___boxed(lean_object*);
lean_object* l_EStateM_instMonadEStateM(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_setStructSourceSyntax(lean_object*, lean_object*);
lean_object* lean_expr_update_proj(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_formatField_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__3___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop_match__1(lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVarsFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__3(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody_match__1(lean_object*);
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnknownExpectedType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(lean_object*);
lean_object* l_List_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_groupKind;
uint8_t l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___lambda__1(lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_instToFormatFieldLHS(lean_object*);
extern lean_object* l_Lean_Expr_FindImpl_initCache;
lean_object* l_Lean_Meta_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__2;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_redLength___rarg(lean_object*);
lean_object* l_Std_AssocList_replace___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__8(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_StructInst_Field_toSyntax___spec__1(size_t, size_t, lean_object*);
lean_object* l_Lean_Macro_throwError___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_instantiate_value_lparams(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_expandStructInstExpectedType___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwAbortTerm___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___spec__1___rarg(lean_object*);
lean_object* l_List_find_x3f___rarg(lean_object*, lean_object*);
lean_object* l_Lean_mkHole(lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__1(lean_object*);
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_main_module(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
extern lean_object* l_Id_instMonadId;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_source___boxed(lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_instToStringSyntax___lambda__1(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* l_instInhabitedReaderT___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__2(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource_match__1(lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__3(lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_ref___boxed(lean_object*);
lean_object* l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__7(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_adaptExpander___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isExprMVarAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_ofSubarray___rarg(lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getStructureCtor(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_source(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__3(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnexpectedExpectedType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__2(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnknownExpectedType___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toArrayAux___rarg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwAbortTerm___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isSubobjectField_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_setStructSourceSyntax_match__1(lean_object*);
uint8_t l_Lean_Elab_Term_StructInst_Source_isNone(lean_object*);
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName(lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__7___boxed(lean_object*, lean_object*);
lean_object* l_Lean_findField_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadReaderT___rarg(lean_object*);
lean_object* l_Lean_Expr_FindImpl_findM_x3f_visit(lean_object*, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__3___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__4(lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_instInhabitedFieldVal(lean_object*);
lean_object* l_Array_findIdx_x3f_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthAux___rarg(lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_structInst___closed__2;
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f___boxed(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_instToFormatFieldLHS_match__1(lean_object*);
lean_object* l_List_foldl___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__2___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Term_StructInst_DefaultFields_State_progress___default;
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__2(lean_object*);
uint8_t l_Lean_isStructureLike(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_setMCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax_match__1(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Source_isNone_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax(lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isLocalIdent_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax(lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields_match__1(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__3___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Name_components(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__2(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instInhabitedPUnit;
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_Context_maxDistance___default;
lean_object* l_List_foldr___at_Lean_Elab_Term_StructInst_Struct_allDefault___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple_match__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_instInhabitedSource;
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_StructInst_DefaultFields_reduce___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
uint8_t l_Std_AssocList_contains___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__4(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_StructInst_throwFailedToElabField___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___boxed__const__1;
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_StructInst_expandStructInstExpectedType(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_unsigned_to_nat(4u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_isNone(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = l_Lean_Syntax_getArg(x_5, x_7);
lean_dec(x_5);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_mk_empty_array_with_capacity(x_9);
x_11 = l_Lean_nullKind;
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = l_Lean_Syntax_setArg(x_1, x_4, x_12);
x_14 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_box(0);
x_18 = lean_mk_string("Lean");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = lean_mk_string("Parser");
x_21 = lean_name_mk_string(x_19, x_20);
x_22 = lean_mk_string("Term");
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = lean_mk_string("paren");
lean_inc(x_23);
x_25 = lean_name_mk_string(x_23, x_24);
x_26 = lean_mk_string("(");
lean_inc(x_16);
x_27 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_27, 0, x_16);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_mk_string("null");
x_29 = lean_name_mk_string(x_17, x_28);
x_30 = lean_mk_string("typeAscription");
x_31 = lean_name_mk_string(x_23, x_30);
x_32 = lean_mk_string(":");
lean_inc(x_16);
x_33 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_33, 0, x_16);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_unsigned_to_nat(2u);
x_35 = lean_mk_empty_array_with_capacity(x_34);
lean_inc(x_35);
x_36 = lean_array_push(x_35, x_33);
x_37 = lean_array_push(x_36, x_8);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_31);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_mk_empty_array_with_capacity(x_7);
x_40 = lean_array_push(x_39, x_38);
lean_inc(x_29);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_29);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_array_push(x_35, x_13);
x_43 = lean_array_push(x_42, x_41);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_29);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_mk_string(")");
x_46 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_46, 0, x_16);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_unsigned_to_nat(3u);
x_48 = lean_mk_empty_array_with_capacity(x_47);
x_49 = lean_array_push(x_48, x_27);
x_50 = lean_array_push(x_49, x_44);
x_51 = lean_array_push(x_50, x_46);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_25);
lean_ctor_set(x_52, 1, x_51);
lean_ctor_set(x_14, 0, x_52);
return x_14;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_53 = lean_ctor_get(x_14, 0);
x_54 = lean_ctor_get(x_14, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_14);
x_55 = lean_box(0);
x_56 = lean_mk_string("Lean");
x_57 = lean_name_mk_string(x_55, x_56);
x_58 = lean_mk_string("Parser");
x_59 = lean_name_mk_string(x_57, x_58);
x_60 = lean_mk_string("Term");
x_61 = lean_name_mk_string(x_59, x_60);
x_62 = lean_mk_string("paren");
lean_inc(x_61);
x_63 = lean_name_mk_string(x_61, x_62);
x_64 = lean_mk_string("(");
lean_inc(x_53);
x_65 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_65, 0, x_53);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_mk_string("null");
x_67 = lean_name_mk_string(x_55, x_66);
x_68 = lean_mk_string("typeAscription");
x_69 = lean_name_mk_string(x_61, x_68);
x_70 = lean_mk_string(":");
lean_inc(x_53);
x_71 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_71, 0, x_53);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_unsigned_to_nat(2u);
x_73 = lean_mk_empty_array_with_capacity(x_72);
lean_inc(x_73);
x_74 = lean_array_push(x_73, x_71);
x_75 = lean_array_push(x_74, x_8);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_69);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_mk_empty_array_with_capacity(x_7);
x_78 = lean_array_push(x_77, x_76);
lean_inc(x_67);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_67);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_array_push(x_73, x_13);
x_81 = lean_array_push(x_80, x_79);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_67);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_mk_string(")");
x_84 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_84, 0, x_53);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_unsigned_to_nat(3u);
x_86 = lean_mk_empty_array_with_capacity(x_85);
x_87 = lean_array_push(x_86, x_65);
x_88 = lean_array_push(x_87, x_82);
x_89 = lean_array_push(x_88, x_84);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_63);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_54);
return x_91;
}
}
else
{
lean_object* x_92; lean_object* x_93; 
lean_dec(x_5);
lean_dec(x_1);
x_92 = lean_box(1);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_3);
return x_93;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_expandStructInstExpectedType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Term_StructInst_expandStructInstExpectedType(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("StructInst");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expandStructInstExpectedType");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__2;
x_2 = l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_expandStructInstExpectedType___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_structInst___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__4;
x_5 = l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__5;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_throwAbortTerm___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = l_Lean_Elab_abortTermExceptionId;
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_throwAbortTerm___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwAbortTerm___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___spec__1___rarg), 1, 0);
return x_7;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_368; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_Syntax_isNone(x_10);
x_368 = lean_st_ref_take(x_7, x_8);
if (x_11 == 0)
{
lean_object* x_369; lean_object* x_370; uint8_t x_371; 
x_369 = lean_ctor_get(x_368, 0);
lean_inc(x_369);
x_370 = lean_ctor_get(x_368, 1);
lean_inc(x_370);
lean_dec(x_368);
x_371 = 0;
x_12 = x_371;
x_13 = x_369;
x_14 = x_370;
goto block_367;
}
else
{
lean_object* x_372; lean_object* x_373; uint8_t x_374; 
x_372 = lean_ctor_get(x_368, 0);
lean_inc(x_372);
x_373 = lean_ctor_get(x_368, 1);
lean_inc(x_373);
lean_dec(x_368);
x_374 = 1;
x_12 = x_374;
x_13 = x_372;
x_14 = x_373;
goto block_367;
}
block_367:
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_13, 1);
x_17 = lean_nat_add(x_16, x_9);
lean_ctor_set(x_13, 1, x_17);
x_18 = lean_st_ref_set(x_7, x_13, x_14);
if (x_12 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = !lean_is_exclusive(x_2);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_2, 4);
lean_dec(x_21);
lean_ctor_set(x_2, 4, x_16);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Lean_Syntax_getArg(x_10, x_22);
lean_inc(x_4);
lean_inc(x_23);
x_24 = l_Lean_Elab_Term_isLocalIdent_x3f(x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Syntax_isMissing(x_23);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_28 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_26);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_30);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_33);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_mk_string("src");
x_38 = lean_string_utf8_byte_size(x_37);
lean_inc(x_37);
x_39 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_22);
lean_ctor_set(x_39, 2, x_38);
x_40 = lean_box(0);
x_41 = lean_name_mk_string(x_40, x_37);
lean_inc(x_41);
x_42 = l_Lean_addMacroScope(x_35, x_41, x_32);
x_43 = lean_box(0);
lean_inc(x_39);
x_44 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_44, 0, x_29);
lean_ctor_set(x_44, 1, x_39);
lean_ctor_set(x_44, 2, x_42);
lean_ctor_set(x_44, 3, x_43);
x_45 = l_Lean_Syntax_setArg(x_10, x_22, x_44);
x_46 = l_Lean_Syntax_setArg(x_1, x_9, x_45);
x_47 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_36);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_49);
lean_dec(x_4);
lean_dec(x_2);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_52);
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_55 = lean_ctor_get(x_53, 0);
x_56 = lean_mk_string("Lean");
x_57 = lean_name_mk_string(x_40, x_56);
x_58 = lean_mk_string("Parser");
x_59 = lean_name_mk_string(x_57, x_58);
x_60 = lean_mk_string("Term");
x_61 = lean_name_mk_string(x_59, x_60);
x_62 = lean_mk_string("let");
lean_inc(x_62);
lean_inc(x_61);
x_63 = lean_name_mk_string(x_61, x_62);
lean_inc(x_48);
x_64 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_64, 0, x_48);
lean_ctor_set(x_64, 1, x_62);
x_65 = lean_mk_string("letDecl");
lean_inc(x_61);
x_66 = lean_name_mk_string(x_61, x_65);
x_67 = lean_mk_string("letIdDecl");
x_68 = lean_name_mk_string(x_61, x_67);
x_69 = l_Lean_addMacroScope(x_55, x_41, x_51);
lean_inc(x_48);
x_70 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_70, 0, x_48);
lean_ctor_set(x_70, 1, x_39);
lean_ctor_set(x_70, 2, x_69);
lean_ctor_set(x_70, 3, x_43);
x_71 = lean_mk_string("null");
x_72 = lean_name_mk_string(x_40, x_71);
x_73 = lean_mk_empty_array_with_capacity(x_22);
lean_inc(x_72);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_mk_string(":=");
lean_inc(x_48);
x_76 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_76, 0, x_48);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_unsigned_to_nat(5u);
x_78 = lean_mk_empty_array_with_capacity(x_77);
x_79 = lean_array_push(x_78, x_70);
lean_inc(x_74);
x_80 = lean_array_push(x_79, x_74);
x_81 = lean_array_push(x_80, x_74);
x_82 = lean_array_push(x_81, x_76);
x_83 = lean_array_push(x_82, x_23);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_68);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_mk_empty_array_with_capacity(x_9);
lean_inc(x_85);
x_86 = lean_array_push(x_85, x_84);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_66);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_mk_string(";");
x_89 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_89, 0, x_48);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_array_push(x_85, x_89);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_72);
lean_ctor_set(x_91, 1, x_90);
x_92 = lean_unsigned_to_nat(4u);
x_93 = lean_mk_empty_array_with_capacity(x_92);
x_94 = lean_array_push(x_93, x_64);
x_95 = lean_array_push(x_94, x_87);
x_96 = lean_array_push(x_95, x_91);
x_97 = lean_array_push(x_96, x_46);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_63);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_53, 0, x_99);
return x_53;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_100 = lean_ctor_get(x_53, 0);
x_101 = lean_ctor_get(x_53, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_53);
x_102 = lean_mk_string("Lean");
x_103 = lean_name_mk_string(x_40, x_102);
x_104 = lean_mk_string("Parser");
x_105 = lean_name_mk_string(x_103, x_104);
x_106 = lean_mk_string("Term");
x_107 = lean_name_mk_string(x_105, x_106);
x_108 = lean_mk_string("let");
lean_inc(x_108);
lean_inc(x_107);
x_109 = lean_name_mk_string(x_107, x_108);
lean_inc(x_48);
x_110 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_110, 0, x_48);
lean_ctor_set(x_110, 1, x_108);
x_111 = lean_mk_string("letDecl");
lean_inc(x_107);
x_112 = lean_name_mk_string(x_107, x_111);
x_113 = lean_mk_string("letIdDecl");
x_114 = lean_name_mk_string(x_107, x_113);
x_115 = l_Lean_addMacroScope(x_100, x_41, x_51);
lean_inc(x_48);
x_116 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_116, 0, x_48);
lean_ctor_set(x_116, 1, x_39);
lean_ctor_set(x_116, 2, x_115);
lean_ctor_set(x_116, 3, x_43);
x_117 = lean_mk_string("null");
x_118 = lean_name_mk_string(x_40, x_117);
x_119 = lean_mk_empty_array_with_capacity(x_22);
lean_inc(x_118);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
x_121 = lean_mk_string(":=");
lean_inc(x_48);
x_122 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_122, 0, x_48);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_unsigned_to_nat(5u);
x_124 = lean_mk_empty_array_with_capacity(x_123);
x_125 = lean_array_push(x_124, x_116);
lean_inc(x_120);
x_126 = lean_array_push(x_125, x_120);
x_127 = lean_array_push(x_126, x_120);
x_128 = lean_array_push(x_127, x_122);
x_129 = lean_array_push(x_128, x_23);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_114);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_mk_empty_array_with_capacity(x_9);
lean_inc(x_131);
x_132 = lean_array_push(x_131, x_130);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_112);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_mk_string(";");
x_135 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_135, 0, x_48);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_array_push(x_131, x_135);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_118);
lean_ctor_set(x_137, 1, x_136);
x_138 = lean_unsigned_to_nat(4u);
x_139 = lean_mk_empty_array_with_capacity(x_138);
x_140 = lean_array_push(x_139, x_110);
x_141 = lean_array_push(x_140, x_133);
x_142 = lean_array_push(x_141, x_137);
x_143 = lean_array_push(x_142, x_46);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_109);
lean_ctor_set(x_144, 1, x_143);
x_145 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_145, 0, x_144);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_101);
return x_146;
}
}
else
{
lean_object* x_147; 
lean_dec(x_23);
lean_dec(x_2);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_1);
x_147 = l_Lean_Elab_throwAbortTerm___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___spec__1___rarg(x_26);
return x_147;
}
}
else
{
uint8_t x_148; 
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_2);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_1);
x_148 = !lean_is_exclusive(x_24);
if (x_148 == 0)
{
lean_object* x_149; lean_object* x_150; 
x_149 = lean_ctor_get(x_24, 0);
lean_dec(x_149);
x_150 = lean_box(0);
lean_ctor_set(x_24, 0, x_150);
return x_24;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_151 = lean_ctor_get(x_24, 1);
lean_inc(x_151);
lean_dec(x_24);
x_152 = lean_box(0);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_151);
return x_153;
}
}
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; uint8_t x_158; uint8_t x_159; uint8_t x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; uint8_t x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_154 = lean_ctor_get(x_2, 0);
x_155 = lean_ctor_get(x_2, 1);
x_156 = lean_ctor_get(x_2, 2);
x_157 = lean_ctor_get(x_2, 3);
x_158 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_159 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
x_160 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 2);
x_161 = lean_ctor_get(x_2, 5);
x_162 = lean_ctor_get(x_2, 6);
x_163 = lean_ctor_get(x_2, 7);
x_164 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 3);
lean_inc(x_163);
lean_inc(x_162);
lean_inc(x_161);
lean_inc(x_157);
lean_inc(x_156);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_2);
x_165 = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(x_165, 0, x_154);
lean_ctor_set(x_165, 1, x_155);
lean_ctor_set(x_165, 2, x_156);
lean_ctor_set(x_165, 3, x_157);
lean_ctor_set(x_165, 4, x_16);
lean_ctor_set(x_165, 5, x_161);
lean_ctor_set(x_165, 6, x_162);
lean_ctor_set(x_165, 7, x_163);
lean_ctor_set_uint8(x_165, sizeof(void*)*8, x_158);
lean_ctor_set_uint8(x_165, sizeof(void*)*8 + 1, x_159);
lean_ctor_set_uint8(x_165, sizeof(void*)*8 + 2, x_160);
lean_ctor_set_uint8(x_165, sizeof(void*)*8 + 3, x_164);
x_166 = lean_unsigned_to_nat(0u);
x_167 = l_Lean_Syntax_getArg(x_10, x_166);
lean_inc(x_4);
lean_inc(x_167);
x_168 = l_Lean_Elab_Term_isLocalIdent_x3f(x_167, x_165, x_3, x_4, x_5, x_6, x_7, x_19);
x_169 = lean_ctor_get(x_168, 0);
lean_inc(x_169);
if (lean_obj_tag(x_169) == 0)
{
lean_object* x_170; uint8_t x_171; 
x_170 = lean_ctor_get(x_168, 1);
lean_inc(x_170);
lean_dec(x_168);
x_171 = l_Lean_Syntax_isMissing(x_167);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_172 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_170);
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
lean_dec(x_172);
x_175 = l_Lean_Elab_Term_getCurrMacroScope(x_165, x_3, x_4, x_5, x_6, x_7, x_174);
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
lean_dec(x_175);
x_178 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_177);
x_179 = lean_ctor_get(x_178, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_178, 1);
lean_inc(x_180);
lean_dec(x_178);
x_181 = lean_mk_string("src");
x_182 = lean_string_utf8_byte_size(x_181);
lean_inc(x_181);
x_183 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_183, 0, x_181);
lean_ctor_set(x_183, 1, x_166);
lean_ctor_set(x_183, 2, x_182);
x_184 = lean_box(0);
x_185 = lean_name_mk_string(x_184, x_181);
lean_inc(x_185);
x_186 = l_Lean_addMacroScope(x_179, x_185, x_176);
x_187 = lean_box(0);
lean_inc(x_183);
x_188 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_188, 0, x_173);
lean_ctor_set(x_188, 1, x_183);
lean_ctor_set(x_188, 2, x_186);
lean_ctor_set(x_188, 3, x_187);
x_189 = l_Lean_Syntax_setArg(x_10, x_166, x_188);
x_190 = l_Lean_Syntax_setArg(x_1, x_9, x_189);
x_191 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_180);
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_191, 1);
lean_inc(x_193);
lean_dec(x_191);
x_194 = l_Lean_Elab_Term_getCurrMacroScope(x_165, x_3, x_4, x_5, x_6, x_7, x_193);
lean_dec(x_4);
lean_dec(x_165);
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_194, 1);
lean_inc(x_196);
lean_dec(x_194);
x_197 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_196);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
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
x_201 = lean_mk_string("Lean");
x_202 = lean_name_mk_string(x_184, x_201);
x_203 = lean_mk_string("Parser");
x_204 = lean_name_mk_string(x_202, x_203);
x_205 = lean_mk_string("Term");
x_206 = lean_name_mk_string(x_204, x_205);
x_207 = lean_mk_string("let");
lean_inc(x_207);
lean_inc(x_206);
x_208 = lean_name_mk_string(x_206, x_207);
lean_inc(x_192);
x_209 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_209, 0, x_192);
lean_ctor_set(x_209, 1, x_207);
x_210 = lean_mk_string("letDecl");
lean_inc(x_206);
x_211 = lean_name_mk_string(x_206, x_210);
x_212 = lean_mk_string("letIdDecl");
x_213 = lean_name_mk_string(x_206, x_212);
x_214 = l_Lean_addMacroScope(x_198, x_185, x_195);
lean_inc(x_192);
x_215 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_215, 0, x_192);
lean_ctor_set(x_215, 1, x_183);
lean_ctor_set(x_215, 2, x_214);
lean_ctor_set(x_215, 3, x_187);
x_216 = lean_mk_string("null");
x_217 = lean_name_mk_string(x_184, x_216);
x_218 = lean_mk_empty_array_with_capacity(x_166);
lean_inc(x_217);
x_219 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_219, 0, x_217);
lean_ctor_set(x_219, 1, x_218);
x_220 = lean_mk_string(":=");
lean_inc(x_192);
x_221 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_221, 0, x_192);
lean_ctor_set(x_221, 1, x_220);
x_222 = lean_unsigned_to_nat(5u);
x_223 = lean_mk_empty_array_with_capacity(x_222);
x_224 = lean_array_push(x_223, x_215);
lean_inc(x_219);
x_225 = lean_array_push(x_224, x_219);
x_226 = lean_array_push(x_225, x_219);
x_227 = lean_array_push(x_226, x_221);
x_228 = lean_array_push(x_227, x_167);
x_229 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_229, 0, x_213);
lean_ctor_set(x_229, 1, x_228);
x_230 = lean_mk_empty_array_with_capacity(x_9);
lean_inc(x_230);
x_231 = lean_array_push(x_230, x_229);
x_232 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_232, 0, x_211);
lean_ctor_set(x_232, 1, x_231);
x_233 = lean_mk_string(";");
x_234 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_234, 0, x_192);
lean_ctor_set(x_234, 1, x_233);
x_235 = lean_array_push(x_230, x_234);
x_236 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_236, 0, x_217);
lean_ctor_set(x_236, 1, x_235);
x_237 = lean_unsigned_to_nat(4u);
x_238 = lean_mk_empty_array_with_capacity(x_237);
x_239 = lean_array_push(x_238, x_209);
x_240 = lean_array_push(x_239, x_232);
x_241 = lean_array_push(x_240, x_236);
x_242 = lean_array_push(x_241, x_190);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_208);
lean_ctor_set(x_243, 1, x_242);
x_244 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_244, 0, x_243);
if (lean_is_scalar(x_200)) {
 x_245 = lean_alloc_ctor(0, 2, 0);
} else {
 x_245 = x_200;
}
lean_ctor_set(x_245, 0, x_244);
lean_ctor_set(x_245, 1, x_199);
return x_245;
}
else
{
lean_object* x_246; 
lean_dec(x_167);
lean_dec(x_165);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_1);
x_246 = l_Lean_Elab_throwAbortTerm___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___spec__1___rarg(x_170);
return x_246;
}
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; 
lean_dec(x_169);
lean_dec(x_167);
lean_dec(x_165);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_1);
x_247 = lean_ctor_get(x_168, 1);
lean_inc(x_247);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 x_248 = x_168;
} else {
 lean_dec_ref(x_168);
 x_248 = lean_box(0);
}
x_249 = lean_box(0);
if (lean_is_scalar(x_248)) {
 x_250 = lean_alloc_ctor(0, 2, 0);
} else {
 x_250 = x_248;
}
lean_ctor_set(x_250, 0, x_249);
lean_ctor_set(x_250, 1, x_247);
return x_250;
}
}
}
else
{
uint8_t x_251; 
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_251 = !lean_is_exclusive(x_18);
if (x_251 == 0)
{
lean_object* x_252; lean_object* x_253; 
x_252 = lean_ctor_get(x_18, 0);
lean_dec(x_252);
x_253 = lean_box(0);
lean_ctor_set(x_18, 0, x_253);
return x_18;
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; 
x_254 = lean_ctor_get(x_18, 1);
lean_inc(x_254);
lean_dec(x_18);
x_255 = lean_box(0);
x_256 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_256, 0, x_255);
lean_ctor_set(x_256, 1, x_254);
return x_256;
}
}
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
x_257 = lean_ctor_get(x_13, 0);
x_258 = lean_ctor_get(x_13, 1);
x_259 = lean_ctor_get(x_13, 2);
x_260 = lean_ctor_get(x_13, 3);
lean_inc(x_260);
lean_inc(x_259);
lean_inc(x_258);
lean_inc(x_257);
lean_dec(x_13);
x_261 = lean_nat_add(x_258, x_9);
x_262 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_262, 0, x_257);
lean_ctor_set(x_262, 1, x_261);
lean_ctor_set(x_262, 2, x_259);
lean_ctor_set(x_262, 3, x_260);
x_263 = lean_st_ref_set(x_7, x_262, x_14);
if (x_12 == 0)
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; uint8_t x_269; uint8_t x_270; uint8_t x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; uint8_t x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; 
x_264 = lean_ctor_get(x_263, 1);
lean_inc(x_264);
lean_dec(x_263);
x_265 = lean_ctor_get(x_2, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_2, 1);
lean_inc(x_266);
x_267 = lean_ctor_get(x_2, 2);
lean_inc(x_267);
x_268 = lean_ctor_get(x_2, 3);
lean_inc(x_268);
x_269 = lean_ctor_get_uint8(x_2, sizeof(void*)*8);
x_270 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 1);
x_271 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 2);
x_272 = lean_ctor_get(x_2, 5);
lean_inc(x_272);
x_273 = lean_ctor_get(x_2, 6);
lean_inc(x_273);
x_274 = lean_ctor_get(x_2, 7);
lean_inc(x_274);
x_275 = lean_ctor_get_uint8(x_2, sizeof(void*)*8 + 3);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 lean_ctor_release(x_2, 3);
 lean_ctor_release(x_2, 4);
 lean_ctor_release(x_2, 5);
 lean_ctor_release(x_2, 6);
 lean_ctor_release(x_2, 7);
 x_276 = x_2;
} else {
 lean_dec_ref(x_2);
 x_276 = lean_box(0);
}
if (lean_is_scalar(x_276)) {
 x_277 = lean_alloc_ctor(0, 8, 4);
} else {
 x_277 = x_276;
}
lean_ctor_set(x_277, 0, x_265);
lean_ctor_set(x_277, 1, x_266);
lean_ctor_set(x_277, 2, x_267);
lean_ctor_set(x_277, 3, x_268);
lean_ctor_set(x_277, 4, x_258);
lean_ctor_set(x_277, 5, x_272);
lean_ctor_set(x_277, 6, x_273);
lean_ctor_set(x_277, 7, x_274);
lean_ctor_set_uint8(x_277, sizeof(void*)*8, x_269);
lean_ctor_set_uint8(x_277, sizeof(void*)*8 + 1, x_270);
lean_ctor_set_uint8(x_277, sizeof(void*)*8 + 2, x_271);
lean_ctor_set_uint8(x_277, sizeof(void*)*8 + 3, x_275);
x_278 = lean_unsigned_to_nat(0u);
x_279 = l_Lean_Syntax_getArg(x_10, x_278);
lean_inc(x_4);
lean_inc(x_279);
x_280 = l_Lean_Elab_Term_isLocalIdent_x3f(x_279, x_277, x_3, x_4, x_5, x_6, x_7, x_264);
x_281 = lean_ctor_get(x_280, 0);
lean_inc(x_281);
if (lean_obj_tag(x_281) == 0)
{
lean_object* x_282; uint8_t x_283; 
x_282 = lean_ctor_get(x_280, 1);
lean_inc(x_282);
lean_dec(x_280);
x_283 = l_Lean_Syntax_isMissing(x_279);
if (x_283 == 0)
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; 
x_284 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_282);
x_285 = lean_ctor_get(x_284, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_284, 1);
lean_inc(x_286);
lean_dec(x_284);
x_287 = l_Lean_Elab_Term_getCurrMacroScope(x_277, x_3, x_4, x_5, x_6, x_7, x_286);
x_288 = lean_ctor_get(x_287, 0);
lean_inc(x_288);
x_289 = lean_ctor_get(x_287, 1);
lean_inc(x_289);
lean_dec(x_287);
x_290 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_289);
x_291 = lean_ctor_get(x_290, 0);
lean_inc(x_291);
x_292 = lean_ctor_get(x_290, 1);
lean_inc(x_292);
lean_dec(x_290);
x_293 = lean_mk_string("src");
x_294 = lean_string_utf8_byte_size(x_293);
lean_inc(x_293);
x_295 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_295, 0, x_293);
lean_ctor_set(x_295, 1, x_278);
lean_ctor_set(x_295, 2, x_294);
x_296 = lean_box(0);
x_297 = lean_name_mk_string(x_296, x_293);
lean_inc(x_297);
x_298 = l_Lean_addMacroScope(x_291, x_297, x_288);
x_299 = lean_box(0);
lean_inc(x_295);
x_300 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_300, 0, x_285);
lean_ctor_set(x_300, 1, x_295);
lean_ctor_set(x_300, 2, x_298);
lean_ctor_set(x_300, 3, x_299);
x_301 = l_Lean_Syntax_setArg(x_10, x_278, x_300);
x_302 = l_Lean_Syntax_setArg(x_1, x_9, x_301);
x_303 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_6, x_7, x_292);
x_304 = lean_ctor_get(x_303, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_303, 1);
lean_inc(x_305);
lean_dec(x_303);
x_306 = l_Lean_Elab_Term_getCurrMacroScope(x_277, x_3, x_4, x_5, x_6, x_7, x_305);
lean_dec(x_4);
lean_dec(x_277);
x_307 = lean_ctor_get(x_306, 0);
lean_inc(x_307);
x_308 = lean_ctor_get(x_306, 1);
lean_inc(x_308);
lean_dec(x_306);
x_309 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_308);
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
x_313 = lean_mk_string("Lean");
x_314 = lean_name_mk_string(x_296, x_313);
x_315 = lean_mk_string("Parser");
x_316 = lean_name_mk_string(x_314, x_315);
x_317 = lean_mk_string("Term");
x_318 = lean_name_mk_string(x_316, x_317);
x_319 = lean_mk_string("let");
lean_inc(x_319);
lean_inc(x_318);
x_320 = lean_name_mk_string(x_318, x_319);
lean_inc(x_304);
x_321 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_321, 0, x_304);
lean_ctor_set(x_321, 1, x_319);
x_322 = lean_mk_string("letDecl");
lean_inc(x_318);
x_323 = lean_name_mk_string(x_318, x_322);
x_324 = lean_mk_string("letIdDecl");
x_325 = lean_name_mk_string(x_318, x_324);
x_326 = l_Lean_addMacroScope(x_310, x_297, x_307);
lean_inc(x_304);
x_327 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_327, 0, x_304);
lean_ctor_set(x_327, 1, x_295);
lean_ctor_set(x_327, 2, x_326);
lean_ctor_set(x_327, 3, x_299);
x_328 = lean_mk_string("null");
x_329 = lean_name_mk_string(x_296, x_328);
x_330 = lean_mk_empty_array_with_capacity(x_278);
lean_inc(x_329);
x_331 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_331, 0, x_329);
lean_ctor_set(x_331, 1, x_330);
x_332 = lean_mk_string(":=");
lean_inc(x_304);
x_333 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_333, 0, x_304);
lean_ctor_set(x_333, 1, x_332);
x_334 = lean_unsigned_to_nat(5u);
x_335 = lean_mk_empty_array_with_capacity(x_334);
x_336 = lean_array_push(x_335, x_327);
lean_inc(x_331);
x_337 = lean_array_push(x_336, x_331);
x_338 = lean_array_push(x_337, x_331);
x_339 = lean_array_push(x_338, x_333);
x_340 = lean_array_push(x_339, x_279);
x_341 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_341, 0, x_325);
lean_ctor_set(x_341, 1, x_340);
x_342 = lean_mk_empty_array_with_capacity(x_9);
lean_inc(x_342);
x_343 = lean_array_push(x_342, x_341);
x_344 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_344, 0, x_323);
lean_ctor_set(x_344, 1, x_343);
x_345 = lean_mk_string(";");
x_346 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_346, 0, x_304);
lean_ctor_set(x_346, 1, x_345);
x_347 = lean_array_push(x_342, x_346);
x_348 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_348, 0, x_329);
lean_ctor_set(x_348, 1, x_347);
x_349 = lean_unsigned_to_nat(4u);
x_350 = lean_mk_empty_array_with_capacity(x_349);
x_351 = lean_array_push(x_350, x_321);
x_352 = lean_array_push(x_351, x_344);
x_353 = lean_array_push(x_352, x_348);
x_354 = lean_array_push(x_353, x_302);
x_355 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_355, 0, x_320);
lean_ctor_set(x_355, 1, x_354);
x_356 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_356, 0, x_355);
if (lean_is_scalar(x_312)) {
 x_357 = lean_alloc_ctor(0, 2, 0);
} else {
 x_357 = x_312;
}
lean_ctor_set(x_357, 0, x_356);
lean_ctor_set(x_357, 1, x_311);
return x_357;
}
else
{
lean_object* x_358; 
lean_dec(x_279);
lean_dec(x_277);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_1);
x_358 = l_Lean_Elab_throwAbortTerm___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___spec__1___rarg(x_282);
return x_358;
}
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; 
lean_dec(x_281);
lean_dec(x_279);
lean_dec(x_277);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_1);
x_359 = lean_ctor_get(x_280, 1);
lean_inc(x_359);
if (lean_is_exclusive(x_280)) {
 lean_ctor_release(x_280, 0);
 lean_ctor_release(x_280, 1);
 x_360 = x_280;
} else {
 lean_dec_ref(x_280);
 x_360 = lean_box(0);
}
x_361 = lean_box(0);
if (lean_is_scalar(x_360)) {
 x_362 = lean_alloc_ctor(0, 2, 0);
} else {
 x_362 = x_360;
}
lean_ctor_set(x_362, 0, x_361);
lean_ctor_set(x_362, 1, x_359);
return x_362;
}
}
else
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; 
lean_dec(x_258);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_363 = lean_ctor_get(x_263, 1);
lean_inc(x_363);
if (lean_is_exclusive(x_263)) {
 lean_ctor_release(x_263, 0);
 lean_ctor_release(x_263, 1);
 x_364 = x_263;
} else {
 lean_dec_ref(x_263);
 x_364 = lean_box(0);
}
x_365 = lean_box(0);
if (lean_is_scalar(x_364)) {
 x_366 = lean_alloc_ctor(0, 2, 0);
} else {
 x_366 = x_364;
}
lean_ctor_set(x_366, 0, x_365);
lean_ctor_set(x_366, 1, x_363);
return x_366;
}
}
}
}
}
lean_object* l_Lean_Elab_throwAbortTerm___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwAbortTerm___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_9;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_instInhabitedSource() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Source_isNone_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_StructInst_Source_isNone_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Source_isNone_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_Elab_Term_StructInst_Source_isNone(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Source_isNone___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_StructInst_Source_isNone(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_setStructSourceSyntax_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_2(x_4, x_9, x_10);
return x_11;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_setStructSourceSyntax_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_setStructSourceSyntax_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_setStructSourceSyntax(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_mk_empty_array_with_capacity(x_3);
x_5 = l_Lean_nullKind;
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_unsigned_to_nat(1u);
lean_inc(x_6);
x_8 = l_Lean_Syntax_setArg(x_1, x_7, x_6);
x_9 = lean_unsigned_to_nat(3u);
x_10 = l_Lean_Syntax_setArg(x_8, x_9, x_6);
return x_10;
}
case 1:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_mk_empty_array_with_capacity(x_12);
x_14 = l_Lean_nullKind;
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = lean_unsigned_to_nat(1u);
x_17 = l_Lean_Syntax_setArg(x_1, x_16, x_15);
x_18 = lean_unsigned_to_nat(3u);
x_19 = l_Lean_Syntax_setArg(x_17, x_18, x_11);
return x_19;
}
default: 
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_2, 0);
lean_inc(x_20);
lean_dec(x_2);
x_21 = lean_unsigned_to_nat(1u);
x_22 = l_Lean_Syntax_setArg(x_1, x_21, x_20);
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_mk_empty_array_with_capacity(x_23);
x_25 = l_Lean_nullKind;
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = lean_unsigned_to_nat(3u);
x_28 = l_Lean_Syntax_setArg(x_22, x_27, x_26);
return x_28;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = lean_unsigned_to_nat(3u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = l_Lean_Syntax_isNone(x_10);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_6);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_6, 3);
x_16 = l_Lean_replaceRef(x_1, x_15);
lean_dec(x_15);
lean_ctor_set(x_6, 3, x_16);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Lean_Syntax_getArg(x_12, x_17);
lean_dec(x_12);
x_19 = l_Lean_Syntax_isNone(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_10);
x_20 = lean_mk_string("invalid structure instance `with` and `..` cannot be used together");
x_21 = l_Lean_stringToMessageData(x_20);
lean_dec(x_20);
x_22 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___spec__1(x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = l_Lean_Syntax_getArg(x_10, x_17);
lean_inc(x_4);
x_24 = l_Lean_Elab_Term_isLocalIdent_x3f(x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_10);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Elab_Term_instInhabitedTermElabM(lean_box(0));
x_28 = lean_mk_string("Lean.Elab.StructInst");
x_29 = lean_mk_string("_private.Lean.Elab.StructInst.0.Lean.Elab.Term.StructInst.getStructSource");
x_30 = lean_unsigned_to_nat(84u);
x_31 = lean_unsigned_to_nat(21u);
x_32 = lean_mk_string("unreachable code has been reached");
x_33 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_28, x_29, x_30, x_31, x_32);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_28);
x_34 = lean_panic_fn(x_27, x_33);
x_35 = lean_apply_7(x_34, x_2, x_3, x_4, x_5, x_6, x_7, x_26);
return x_35;
}
else
{
uint8_t x_36; 
lean_dec(x_6);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_36 = !lean_is_exclusive(x_24);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_24, 0);
lean_dec(x_37);
x_38 = lean_ctor_get(x_25, 0);
lean_inc(x_38);
lean_dec(x_25);
x_39 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_39, 0, x_10);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_24, 0, x_39);
return x_24;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_24, 1);
lean_inc(x_40);
lean_dec(x_24);
x_41 = lean_ctor_get(x_25, 0);
lean_inc(x_41);
lean_dec(x_25);
x_42 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_42, 0, x_10);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_40);
return x_43;
}
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_44 = lean_ctor_get(x_6, 0);
x_45 = lean_ctor_get(x_6, 1);
x_46 = lean_ctor_get(x_6, 2);
x_47 = lean_ctor_get(x_6, 3);
x_48 = lean_ctor_get(x_6, 4);
x_49 = lean_ctor_get(x_6, 5);
x_50 = lean_ctor_get(x_6, 6);
x_51 = lean_ctor_get(x_6, 7);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_6);
x_52 = l_Lean_replaceRef(x_1, x_47);
lean_dec(x_47);
x_53 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_53, 0, x_44);
lean_ctor_set(x_53, 1, x_45);
lean_ctor_set(x_53, 2, x_46);
lean_ctor_set(x_53, 3, x_52);
lean_ctor_set(x_53, 4, x_48);
lean_ctor_set(x_53, 5, x_49);
lean_ctor_set(x_53, 6, x_50);
lean_ctor_set(x_53, 7, x_51);
x_54 = lean_unsigned_to_nat(0u);
x_55 = l_Lean_Syntax_getArg(x_12, x_54);
lean_dec(x_12);
x_56 = l_Lean_Syntax_isNone(x_55);
lean_dec(x_55);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_10);
x_57 = lean_mk_string("invalid structure instance `with` and `..` cannot be used together");
x_58 = l_Lean_stringToMessageData(x_57);
lean_dec(x_57);
x_59 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___spec__1(x_58, x_2, x_3, x_4, x_5, x_53, x_7, x_8);
lean_dec(x_7);
lean_dec(x_53);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = l_Lean_Syntax_getArg(x_10, x_54);
lean_inc(x_4);
x_61 = l_Lean_Elab_Term_isLocalIdent_x3f(x_60, x_2, x_3, x_4, x_5, x_53, x_7, x_8);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_10);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = l_Lean_Elab_Term_instInhabitedTermElabM(lean_box(0));
x_65 = lean_mk_string("Lean.Elab.StructInst");
x_66 = lean_mk_string("_private.Lean.Elab.StructInst.0.Lean.Elab.Term.StructInst.getStructSource");
x_67 = lean_unsigned_to_nat(84u);
x_68 = lean_unsigned_to_nat(21u);
x_69 = lean_mk_string("unreachable code has been reached");
x_70 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_65, x_66, x_67, x_68, x_69);
lean_dec(x_69);
lean_dec(x_66);
lean_dec(x_65);
x_71 = lean_panic_fn(x_64, x_70);
x_72 = lean_apply_7(x_71, x_2, x_3, x_4, x_5, x_53, x_7, x_63);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_53);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_73 = lean_ctor_get(x_61, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_74 = x_61;
} else {
 lean_dec_ref(x_61);
 x_74 = lean_box(0);
}
x_75 = lean_ctor_get(x_62, 0);
lean_inc(x_75);
lean_dec(x_62);
x_76 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_76, 0, x_10);
lean_ctor_set(x_76, 1, x_75);
if (lean_is_scalar(x_74)) {
 x_77 = lean_alloc_ctor(0, 2, 0);
} else {
 x_77 = x_74;
}
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_73);
return x_77;
}
}
}
}
else
{
lean_object* x_78; lean_object* x_79; uint8_t x_80; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_78 = lean_unsigned_to_nat(0u);
x_79 = l_Lean_Syntax_getArg(x_12, x_78);
x_80 = l_Lean_Syntax_isNone(x_79);
lean_dec(x_79);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_81, 0, x_12);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_8);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; 
lean_dec(x_12);
x_83 = lean_box(0);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_8);
return x_84;
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
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
x_13 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
x_24 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__2(x_2, x_3, x_4, x_5, x_6, x_23, x_8, x_9);
lean_dec(x_23);
return x_24;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_13 = lean_array_uget(x_1, x_2);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lean_Syntax_getArg(x_13, x_14);
lean_dec(x_13);
lean_inc(x_15);
x_16 = l_Lean_Syntax_getKind(x_15);
x_17 = lean_box(0);
x_18 = lean_mk_string("Lean");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = lean_mk_string("Parser");
x_21 = lean_name_mk_string(x_19, x_20);
x_22 = lean_mk_string("Term");
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = lean_mk_string("structInstField");
lean_inc(x_23);
x_25 = lean_name_mk_string(x_23, x_24);
x_26 = lean_name_eq(x_16, x_25);
lean_dec(x_25);
lean_dec(x_16);
if (x_26 == 0)
{
size_t x_27; size_t x_28; 
lean_dec(x_23);
lean_dec(x_15);
x_27 = 1;
x_28 = x_2 + x_27;
x_2 = x_28;
goto _start;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = l_Lean_Syntax_getArg(x_15, x_14);
x_31 = l_Lean_Syntax_getArg(x_30, x_14);
lean_dec(x_30);
x_32 = l_Lean_Syntax_getKind(x_31);
x_33 = lean_mk_string("structInstArrayRef");
x_34 = lean_name_mk_string(x_23, x_33);
x_35 = lean_name_eq(x_32, x_34);
lean_dec(x_32);
if (x_35 == 0)
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_36; size_t x_37; size_t x_38; 
lean_dec(x_34);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_15);
x_37 = 1;
x_38 = x_2 + x_37;
x_2 = x_38;
x_4 = x_36;
goto _start;
}
else
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_40 = lean_ctor_get(x_4, 0);
lean_inc(x_40);
x_41 = l_Lean_Syntax_getKind(x_40);
x_42 = lean_name_eq(x_41, x_34);
lean_dec(x_34);
lean_dec(x_41);
if (x_42 == 0)
{
size_t x_43; size_t x_44; 
lean_dec(x_15);
x_43 = 1;
x_44 = x_2 + x_43;
x_2 = x_44;
goto _start;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
lean_dec(x_4);
x_46 = lean_mk_string("invalid {...} notation, can't mix field and `[..]` at a given level");
x_47 = l_Lean_stringToMessageData(x_46);
lean_dec(x_46);
x_48 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1(x_15, x_47, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_15);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
return x_48;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_48, 0);
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_48);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
else
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_53; size_t x_54; size_t x_55; 
lean_dec(x_34);
x_53 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_53, 0, x_15);
x_54 = 1;
x_55 = x_2 + x_54;
x_2 = x_55;
x_4 = x_53;
goto _start;
}
else
{
lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_57 = lean_ctor_get(x_4, 0);
lean_inc(x_57);
lean_dec(x_4);
x_58 = l_Lean_Syntax_getKind(x_57);
x_59 = lean_name_eq(x_58, x_34);
lean_dec(x_34);
lean_dec(x_58);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_mk_string("invalid {...} notation, can't mix field and `[..]` at a given level");
x_61 = l_Lean_stringToMessageData(x_60);
lean_dec(x_60);
x_62 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1(x_15, x_61, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_15);
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
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_67 = lean_mk_string("invalid {...} notation, at most one `[..]` at a given level");
x_68 = l_Lean_stringToMessageData(x_67);
lean_dec(x_67);
x_69 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1(x_15, x_68, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_15);
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
return x_69;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_69, 0);
x_72 = lean_ctor_get(x_69, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_69);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
}
}
else
{
lean_object* x_74; 
lean_dec(x_9);
lean_dec(x_5);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_4);
lean_ctor_set(x_74, 1, x_11);
return x_74;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_9 = lean_box(0);
x_31 = lean_unsigned_to_nat(2u);
x_32 = l_Lean_Syntax_getArg(x_1, x_31);
x_33 = l_Lean_Syntax_getArgs(x_32);
lean_dec(x_32);
x_34 = lean_array_get_size(x_33);
x_35 = lean_unsigned_to_nat(0u);
x_36 = lean_nat_dec_lt(x_35, x_34);
if (x_36 == 0)
{
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_6);
lean_dec(x_2);
x_10 = x_9;
x_11 = x_8;
goto block_30;
}
else
{
uint8_t x_37; 
x_37 = lean_nat_dec_le(x_34, x_34);
if (x_37 == 0)
{
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_6);
lean_dec(x_2);
x_10 = x_9;
x_11 = x_8;
goto block_30;
}
else
{
size_t x_38; size_t x_39; lean_object* x_40; 
x_38 = 0;
x_39 = lean_usize_of_nat(x_34);
lean_dec(x_34);
x_40 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__3(x_33, x_38, x_39, x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_33);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_10 = x_41;
x_11 = x_42;
goto block_30;
}
else
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_40);
if (x_43 == 0)
{
return x_40;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_40, 0);
x_45 = lean_ctor_get(x_40, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_40);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
block_30:
{
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lean_Syntax_getArg(x_13, x_14);
lean_dec(x_13);
x_16 = l_Lean_Syntax_getArg(x_15, x_14);
lean_dec(x_15);
x_17 = l_Lean_Syntax_getKind(x_16);
x_18 = lean_box(0);
x_19 = lean_mk_string("Lean");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_mk_string("Parser");
x_22 = lean_name_mk_string(x_20, x_21);
x_23 = lean_mk_string("Term");
x_24 = lean_name_mk_string(x_22, x_23);
x_25 = lean_mk_string("structInstArrayRef");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = lean_name_eq(x_17, x_26);
lean_dec(x_26);
lean_dec(x_17);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_10);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_9);
lean_ctor_set(x_28, 1, x_11);
return x_28;
}
else
{
lean_object* x_29; 
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_10);
lean_ctor_set(x_29, 1, x_11);
return x_29;
}
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___spec__3(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_14;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_369; lean_object* x_370; lean_object* x_384; lean_object* x_385; lean_object* x_386; uint8_t x_387; 
x_12 = lean_box(0);
x_13 = lean_mk_string("Elab");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_mk_string("struct");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_mk_string("modifyOp");
lean_inc(x_17);
x_18 = lean_name_mk_string(x_16, x_17);
x_384 = lean_st_ref_get(x_10, x_11);
x_385 = lean_ctor_get(x_384, 0);
lean_inc(x_385);
x_386 = lean_ctor_get(x_385, 3);
lean_inc(x_386);
lean_dec(x_385);
x_387 = lean_ctor_get_uint8(x_386, sizeof(void*)*1);
lean_dec(x_386);
if (x_387 == 0)
{
lean_object* x_388; uint8_t x_389; 
x_388 = lean_ctor_get(x_384, 1);
lean_inc(x_388);
lean_dec(x_384);
x_389 = 0;
x_369 = x_389;
x_370 = x_388;
goto block_383;
}
else
{
lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; uint8_t x_394; 
x_390 = lean_ctor_get(x_384, 1);
lean_inc(x_390);
lean_dec(x_384);
lean_inc(x_18);
x_391 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_390);
x_392 = lean_ctor_get(x_391, 0);
lean_inc(x_392);
x_393 = lean_ctor_get(x_391, 1);
lean_inc(x_393);
lean_dec(x_391);
x_394 = lean_unbox(x_392);
lean_dec(x_392);
x_369 = x_394;
x_370 = x_393;
goto block_383;
}
block_368:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_Lean_Syntax_getArg(x_2, x_20);
x_22 = lean_unsigned_to_nat(1u);
x_23 = l_Lean_Syntax_getArg(x_21, x_22);
x_24 = l_Lean_Syntax_isNone(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_25 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_9, x_10, x_19);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_30);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_mk_string("s");
x_35 = lean_string_utf8_byte_size(x_34);
lean_inc(x_34);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_20);
lean_ctor_set(x_36, 2, x_35);
x_37 = lean_name_mk_string(x_12, x_34);
lean_inc(x_37);
x_38 = l_Lean_addMacroScope(x_32, x_37, x_29);
x_39 = lean_box(0);
lean_inc(x_36);
x_40 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_40, 0, x_26);
lean_ctor_set(x_40, 1, x_36);
lean_ctor_set(x_40, 2, x_38);
lean_ctor_set(x_40, 3, x_39);
x_41 = l_Lean_Syntax_getArg(x_23, x_20);
lean_inc(x_41);
x_42 = l_Lean_Syntax_getKind(x_41);
x_43 = lean_mk_string("Lean");
x_44 = lean_name_mk_string(x_12, x_43);
x_45 = lean_mk_string("Parser");
x_46 = lean_name_mk_string(x_44, x_45);
x_47 = lean_mk_string("Term");
x_48 = lean_name_mk_string(x_46, x_47);
x_49 = lean_mk_string("structInstArrayRef");
lean_inc(x_48);
x_50 = lean_name_mk_string(x_48, x_49);
x_51 = lean_name_eq(x_42, x_50);
lean_dec(x_50);
lean_dec(x_42);
x_52 = l_Lean_Syntax_getArgs(x_23);
lean_dec(x_23);
x_53 = lean_array_get_size(x_52);
x_54 = l_Array_toSubarray___rarg(x_52, x_22, x_53);
x_55 = l_Array_ofSubarray___rarg(x_54);
lean_dec(x_54);
x_56 = l_Lean_nullKind;
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
x_58 = lean_mk_string("structInstLVal");
lean_inc(x_48);
x_59 = lean_name_mk_string(x_48, x_58);
x_60 = lean_unsigned_to_nat(2u);
x_61 = lean_mk_empty_array_with_capacity(x_60);
x_62 = lean_mk_empty_array_with_capacity(x_20);
lean_inc(x_62);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_56);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_mk_empty_array_with_capacity(x_22);
x_65 = lean_st_ref_get(x_10, x_33);
if (x_51 == 0)
{
lean_object* x_234; 
x_234 = l_Lean_Syntax_getArg(x_41, x_22);
lean_dec(x_41);
x_66 = x_234;
goto block_233;
}
else
{
x_66 = x_41;
goto block_233;
}
block_233:
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_inc(x_61);
x_67 = lean_array_push(x_61, x_66);
x_68 = lean_array_push(x_67, x_57);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_59);
lean_ctor_set(x_69, 1, x_68);
x_70 = l_Lean_Syntax_setArg(x_2, x_20, x_69);
lean_inc(x_61);
x_71 = lean_array_push(x_61, x_70);
x_72 = lean_array_push(x_71, x_63);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_56);
lean_ctor_set(x_73, 1, x_72);
lean_inc(x_64);
x_74 = lean_array_push(x_64, x_73);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_56);
lean_ctor_set(x_75, 1, x_74);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; uint8_t x_227; 
x_224 = lean_ctor_get(x_3, 0);
lean_inc(x_224);
x_225 = lean_ctor_get(x_3, 1);
lean_inc(x_225);
x_226 = lean_array_get_size(x_225);
x_227 = lean_nat_dec_lt(x_20, x_226);
lean_dec(x_226);
if (x_227 == 0)
{
lean_object* x_228; 
lean_dec(x_40);
x_228 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_228, 0, x_224);
lean_ctor_set(x_228, 1, x_225);
x_76 = x_228;
goto block_223;
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_229 = lean_box(0);
x_230 = lean_array_fset(x_225, x_20, x_229);
x_231 = lean_array_fset(x_230, x_20, x_40);
x_232 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_232, 0, x_224);
lean_ctor_set(x_232, 1, x_231);
x_76 = x_232;
goto block_223;
}
}
else
{
lean_dec(x_40);
lean_inc(x_3);
x_76 = x_3;
goto block_223;
}
block_223:
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_198; lean_object* x_199; lean_object* x_213; lean_object* x_214; uint8_t x_215; 
lean_inc(x_1);
x_77 = l_Lean_Syntax_setArg(x_1, x_22, x_76);
x_78 = l_Lean_Syntax_setArg(x_77, x_60, x_75);
x_213 = lean_ctor_get(x_65, 0);
lean_inc(x_213);
x_214 = lean_ctor_get(x_213, 3);
lean_inc(x_214);
lean_dec(x_213);
x_215 = lean_ctor_get_uint8(x_214, sizeof(void*)*1);
lean_dec(x_214);
if (x_215 == 0)
{
lean_object* x_216; uint8_t x_217; 
x_216 = lean_ctor_get(x_65, 1);
lean_inc(x_216);
lean_dec(x_65);
x_217 = 0;
x_198 = x_217;
x_199 = x_216;
goto block_212;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; uint8_t x_222; 
x_218 = lean_ctor_get(x_65, 1);
lean_inc(x_218);
lean_dec(x_65);
lean_inc(x_18);
x_219 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_218);
x_220 = lean_ctor_get(x_219, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_219, 1);
lean_inc(x_221);
lean_dec(x_219);
x_222 = lean_unbox(x_220);
lean_dec(x_220);
x_198 = x_222;
x_199 = x_221;
goto block_212;
}
block_197:
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; uint8_t x_167; lean_object* x_168; lean_object* x_186; lean_object* x_187; lean_object* x_188; uint8_t x_189; 
x_80 = l_Lean_Syntax_getArg(x_21, x_20);
lean_dec(x_21);
x_81 = l_Lean_Syntax_getArg(x_80, x_22);
lean_dec(x_80);
x_82 = l_Lean_Syntax_getArg(x_3, x_20);
lean_dec(x_3);
x_83 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_9, x_10, x_79);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_86 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_85);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_88);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_mk_string("app");
lean_inc(x_48);
x_93 = lean_name_mk_string(x_48, x_92);
x_94 = lean_mk_string("proj");
lean_inc(x_48);
x_95 = lean_name_mk_string(x_48, x_94);
x_96 = lean_mk_string(".");
lean_inc(x_84);
x_97 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_97, 0, x_84);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_string_utf8_byte_size(x_17);
lean_inc(x_17);
x_99 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_99, 0, x_17);
lean_ctor_set(x_99, 1, x_20);
lean_ctor_set(x_99, 2, x_98);
x_100 = lean_name_mk_string(x_12, x_17);
lean_inc(x_87);
lean_inc(x_90);
x_101 = l_Lean_addMacroScope(x_90, x_100, x_87);
lean_inc(x_84);
x_102 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_102, 0, x_84);
lean_ctor_set(x_102, 1, x_99);
lean_ctor_set(x_102, 2, x_101);
lean_ctor_set(x_102, 3, x_39);
x_103 = lean_unsigned_to_nat(3u);
x_104 = lean_mk_empty_array_with_capacity(x_103);
lean_inc(x_104);
x_105 = lean_array_push(x_104, x_82);
x_106 = lean_array_push(x_105, x_97);
x_107 = lean_array_push(x_106, x_102);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_95);
lean_ctor_set(x_108, 1, x_107);
x_109 = lean_mk_string("null");
x_110 = lean_name_mk_string(x_12, x_109);
x_111 = lean_mk_string("namedArgument");
lean_inc(x_48);
x_112 = lean_name_mk_string(x_48, x_111);
x_113 = lean_mk_string("(");
lean_inc(x_84);
x_114 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_114, 0, x_84);
lean_ctor_set(x_114, 1, x_113);
x_115 = lean_mk_string("idx");
x_116 = lean_string_utf8_byte_size(x_115);
lean_inc(x_115);
x_117 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_20);
lean_ctor_set(x_117, 2, x_116);
x_118 = lean_name_mk_string(x_12, x_115);
lean_inc(x_87);
lean_inc(x_90);
x_119 = l_Lean_addMacroScope(x_90, x_118, x_87);
lean_inc(x_84);
x_120 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_120, 0, x_84);
lean_ctor_set(x_120, 1, x_117);
lean_ctor_set(x_120, 2, x_119);
lean_ctor_set(x_120, 3, x_39);
x_121 = lean_mk_string(":=");
lean_inc(x_84);
x_122 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_122, 0, x_84);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_mk_string(")");
lean_inc(x_84);
x_124 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_124, 0, x_84);
lean_ctor_set(x_124, 1, x_123);
x_125 = lean_unsigned_to_nat(5u);
x_126 = lean_mk_empty_array_with_capacity(x_125);
lean_inc(x_114);
x_127 = lean_array_push(x_126, x_114);
x_128 = lean_array_push(x_127, x_120);
x_129 = lean_array_push(x_128, x_122);
x_130 = lean_array_push(x_129, x_81);
lean_inc(x_124);
x_131 = lean_array_push(x_130, x_124);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_112);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_mk_string("paren");
lean_inc(x_48);
x_134 = lean_name_mk_string(x_48, x_133);
x_135 = lean_mk_string("fun");
lean_inc(x_135);
lean_inc(x_48);
x_136 = lean_name_mk_string(x_48, x_135);
lean_inc(x_84);
x_137 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_137, 0, x_84);
lean_ctor_set(x_137, 1, x_135);
x_138 = lean_mk_string("basicFun");
x_139 = lean_name_mk_string(x_48, x_138);
x_140 = l_Lean_addMacroScope(x_90, x_37, x_87);
lean_inc(x_84);
x_141 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_141, 0, x_84);
lean_ctor_set(x_141, 1, x_36);
lean_ctor_set(x_141, 2, x_140);
lean_ctor_set(x_141, 3, x_39);
x_142 = lean_array_push(x_64, x_141);
lean_inc(x_110);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_110);
lean_ctor_set(x_143, 1, x_142);
x_144 = lean_mk_string("=>");
x_145 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_145, 0, x_84);
lean_ctor_set(x_145, 1, x_144);
lean_inc(x_104);
x_146 = lean_array_push(x_104, x_143);
x_147 = lean_array_push(x_146, x_145);
x_148 = lean_array_push(x_147, x_78);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_139);
lean_ctor_set(x_149, 1, x_148);
lean_inc(x_61);
x_150 = lean_array_push(x_61, x_137);
x_151 = lean_array_push(x_150, x_149);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_136);
lean_ctor_set(x_152, 1, x_151);
lean_inc(x_110);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_110);
lean_ctor_set(x_153, 1, x_62);
lean_inc(x_61);
x_154 = lean_array_push(x_61, x_152);
x_155 = lean_array_push(x_154, x_153);
lean_inc(x_110);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_110);
lean_ctor_set(x_156, 1, x_155);
x_157 = lean_array_push(x_104, x_114);
x_158 = lean_array_push(x_157, x_156);
x_159 = lean_array_push(x_158, x_124);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_134);
lean_ctor_set(x_160, 1, x_159);
lean_inc(x_61);
x_161 = lean_array_push(x_61, x_132);
x_162 = lean_array_push(x_161, x_160);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_110);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_array_push(x_61, x_108);
x_165 = lean_array_push(x_164, x_163);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_93);
lean_ctor_set(x_166, 1, x_165);
x_186 = lean_st_ref_get(x_10, x_91);
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_187, 3);
lean_inc(x_188);
lean_dec(x_187);
x_189 = lean_ctor_get_uint8(x_188, sizeof(void*)*1);
lean_dec(x_188);
if (x_189 == 0)
{
lean_object* x_190; uint8_t x_191; 
x_190 = lean_ctor_get(x_186, 1);
lean_inc(x_190);
lean_dec(x_186);
x_191 = 0;
x_167 = x_191;
x_168 = x_190;
goto block_185;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; uint8_t x_196; 
x_192 = lean_ctor_get(x_186, 1);
lean_inc(x_192);
lean_dec(x_186);
lean_inc(x_18);
x_193 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_192);
x_194 = lean_ctor_get(x_193, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_193, 1);
lean_inc(x_195);
lean_dec(x_193);
x_196 = lean_unbox(x_194);
lean_dec(x_194);
x_167 = x_196;
x_168 = x_195;
goto block_185;
}
block_185:
{
if (x_167 == 0)
{
lean_object* x_169; lean_object* x_170; 
lean_dec(x_18);
lean_inc(x_166);
lean_inc(x_1);
x_169 = lean_alloc_closure((void*)(l_Lean_Elab_Term_adaptExpander___lambda__1), 10, 3);
lean_closure_set(x_169, 0, x_1);
lean_closure_set(x_169, 1, x_166);
lean_closure_set(x_169, 2, x_4);
x_170 = l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_1, x_166, x_169, x_5, x_6, x_7, x_8, x_9, x_10, x_168);
return x_170;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_171 = lean_mk_string("");
x_172 = l_Lean_stringToMessageData(x_171);
lean_dec(x_171);
lean_inc(x_1);
x_173 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_173, 0, x_1);
lean_inc(x_172);
x_174 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_173);
x_175 = lean_mk_string("\n===>\n");
x_176 = l_Lean_stringToMessageData(x_175);
lean_dec(x_175);
x_177 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_177, 0, x_174);
lean_ctor_set(x_177, 1, x_176);
lean_inc(x_166);
x_178 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_178, 0, x_166);
x_179 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_179, 0, x_177);
lean_ctor_set(x_179, 1, x_178);
x_180 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_180, 0, x_179);
lean_ctor_set(x_180, 1, x_172);
x_181 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_18, x_180, x_5, x_6, x_7, x_8, x_9, x_10, x_168);
x_182 = lean_ctor_get(x_181, 1);
lean_inc(x_182);
lean_dec(x_181);
lean_inc(x_166);
lean_inc(x_1);
x_183 = lean_alloc_closure((void*)(l_Lean_Elab_Term_adaptExpander___lambda__1), 10, 3);
lean_closure_set(x_183, 0, x_1);
lean_closure_set(x_183, 1, x_166);
lean_closure_set(x_183, 2, x_4);
x_184 = l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_1, x_166, x_183, x_5, x_6, x_7, x_8, x_9, x_10, x_182);
return x_184;
}
}
}
block_212:
{
if (x_198 == 0)
{
x_79 = x_199;
goto block_197;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_200 = lean_mk_string("");
x_201 = l_Lean_stringToMessageData(x_200);
lean_dec(x_200);
lean_inc(x_1);
x_202 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_202, 0, x_1);
lean_inc(x_201);
x_203 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_203, 0, x_201);
lean_ctor_set(x_203, 1, x_202);
x_204 = lean_mk_string("\nval: ");
x_205 = l_Lean_stringToMessageData(x_204);
lean_dec(x_204);
x_206 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_206, 0, x_203);
lean_ctor_set(x_206, 1, x_205);
lean_inc(x_78);
x_207 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_207, 0, x_78);
x_208 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_208, 0, x_206);
lean_ctor_set(x_208, 1, x_207);
x_209 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_209, 0, x_208);
lean_ctor_set(x_209, 1, x_201);
lean_inc(x_18);
x_210 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_18, x_209, x_5, x_6, x_7, x_8, x_9, x_10, x_199);
x_211 = lean_ctor_get(x_210, 1);
lean_inc(x_211);
lean_dec(x_210);
x_79 = x_211;
goto block_197;
}
}
}
}
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; uint8_t x_338; lean_object* x_339; lean_object* x_357; lean_object* x_358; lean_object* x_359; uint8_t x_360; 
lean_dec(x_23);
x_235 = lean_unsigned_to_nat(2u);
x_236 = l_Lean_Syntax_getArg(x_2, x_235);
lean_dec(x_2);
x_237 = l_Lean_Syntax_getArg(x_21, x_20);
lean_dec(x_21);
x_238 = l_Lean_Syntax_getArg(x_237, x_22);
lean_dec(x_237);
x_239 = l_Lean_Syntax_getArg(x_3, x_20);
lean_dec(x_3);
x_240 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_9, x_10, x_19);
x_241 = lean_ctor_get(x_240, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_240, 1);
lean_inc(x_242);
lean_dec(x_240);
x_243 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_242);
x_244 = lean_ctor_get(x_243, 0);
lean_inc(x_244);
x_245 = lean_ctor_get(x_243, 1);
lean_inc(x_245);
lean_dec(x_243);
x_246 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_245);
x_247 = lean_ctor_get(x_246, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_246, 1);
lean_inc(x_248);
lean_dec(x_246);
x_249 = lean_mk_string("Lean");
x_250 = lean_name_mk_string(x_12, x_249);
x_251 = lean_mk_string("Parser");
x_252 = lean_name_mk_string(x_250, x_251);
x_253 = lean_mk_string("Term");
x_254 = lean_name_mk_string(x_252, x_253);
x_255 = lean_mk_string("app");
lean_inc(x_254);
x_256 = lean_name_mk_string(x_254, x_255);
x_257 = lean_mk_string("proj");
lean_inc(x_254);
x_258 = lean_name_mk_string(x_254, x_257);
x_259 = lean_mk_string(".");
lean_inc(x_241);
x_260 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_260, 0, x_241);
lean_ctor_set(x_260, 1, x_259);
x_261 = lean_string_utf8_byte_size(x_17);
lean_inc(x_17);
x_262 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_262, 0, x_17);
lean_ctor_set(x_262, 1, x_20);
lean_ctor_set(x_262, 2, x_261);
x_263 = lean_name_mk_string(x_12, x_17);
lean_inc(x_244);
lean_inc(x_247);
x_264 = l_Lean_addMacroScope(x_247, x_263, x_244);
x_265 = lean_box(0);
lean_inc(x_241);
x_266 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_266, 0, x_241);
lean_ctor_set(x_266, 1, x_262);
lean_ctor_set(x_266, 2, x_264);
lean_ctor_set(x_266, 3, x_265);
x_267 = lean_unsigned_to_nat(3u);
x_268 = lean_mk_empty_array_with_capacity(x_267);
lean_inc(x_268);
x_269 = lean_array_push(x_268, x_239);
x_270 = lean_array_push(x_269, x_260);
x_271 = lean_array_push(x_270, x_266);
x_272 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_272, 0, x_258);
lean_ctor_set(x_272, 1, x_271);
x_273 = lean_mk_string("null");
x_274 = lean_name_mk_string(x_12, x_273);
x_275 = lean_mk_string("namedArgument");
lean_inc(x_254);
x_276 = lean_name_mk_string(x_254, x_275);
x_277 = lean_mk_string("(");
lean_inc(x_241);
x_278 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_278, 0, x_241);
lean_ctor_set(x_278, 1, x_277);
x_279 = lean_mk_string("idx");
x_280 = lean_string_utf8_byte_size(x_279);
lean_inc(x_279);
x_281 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_281, 0, x_279);
lean_ctor_set(x_281, 1, x_20);
lean_ctor_set(x_281, 2, x_280);
x_282 = lean_name_mk_string(x_12, x_279);
lean_inc(x_244);
lean_inc(x_247);
x_283 = l_Lean_addMacroScope(x_247, x_282, x_244);
lean_inc(x_241);
x_284 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_284, 0, x_241);
lean_ctor_set(x_284, 1, x_281);
lean_ctor_set(x_284, 2, x_283);
lean_ctor_set(x_284, 3, x_265);
x_285 = lean_mk_string(":=");
lean_inc(x_241);
x_286 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_286, 0, x_241);
lean_ctor_set(x_286, 1, x_285);
x_287 = lean_mk_string(")");
lean_inc(x_241);
x_288 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_288, 0, x_241);
lean_ctor_set(x_288, 1, x_287);
x_289 = lean_unsigned_to_nat(5u);
x_290 = lean_mk_empty_array_with_capacity(x_289);
lean_inc(x_278);
x_291 = lean_array_push(x_290, x_278);
x_292 = lean_array_push(x_291, x_284);
x_293 = lean_array_push(x_292, x_286);
x_294 = lean_array_push(x_293, x_238);
lean_inc(x_288);
x_295 = lean_array_push(x_294, x_288);
x_296 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_296, 0, x_276);
lean_ctor_set(x_296, 1, x_295);
x_297 = lean_mk_string("paren");
lean_inc(x_254);
x_298 = lean_name_mk_string(x_254, x_297);
x_299 = lean_mk_string("fun");
lean_inc(x_299);
lean_inc(x_254);
x_300 = lean_name_mk_string(x_254, x_299);
lean_inc(x_241);
x_301 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_301, 0, x_241);
lean_ctor_set(x_301, 1, x_299);
x_302 = lean_mk_string("basicFun");
x_303 = lean_name_mk_string(x_254, x_302);
x_304 = lean_mk_string("s");
x_305 = lean_string_utf8_byte_size(x_304);
lean_inc(x_304);
x_306 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_306, 0, x_304);
lean_ctor_set(x_306, 1, x_20);
lean_ctor_set(x_306, 2, x_305);
x_307 = lean_name_mk_string(x_12, x_304);
x_308 = l_Lean_addMacroScope(x_247, x_307, x_244);
lean_inc(x_241);
x_309 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_309, 0, x_241);
lean_ctor_set(x_309, 1, x_306);
lean_ctor_set(x_309, 2, x_308);
lean_ctor_set(x_309, 3, x_265);
x_310 = lean_mk_empty_array_with_capacity(x_22);
x_311 = lean_array_push(x_310, x_309);
lean_inc(x_274);
x_312 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_312, 0, x_274);
lean_ctor_set(x_312, 1, x_311);
x_313 = lean_mk_string("=>");
x_314 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_314, 0, x_241);
lean_ctor_set(x_314, 1, x_313);
lean_inc(x_268);
x_315 = lean_array_push(x_268, x_312);
x_316 = lean_array_push(x_315, x_314);
x_317 = lean_array_push(x_316, x_236);
x_318 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_318, 0, x_303);
lean_ctor_set(x_318, 1, x_317);
x_319 = lean_mk_empty_array_with_capacity(x_235);
lean_inc(x_319);
x_320 = lean_array_push(x_319, x_301);
x_321 = lean_array_push(x_320, x_318);
x_322 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_322, 0, x_300);
lean_ctor_set(x_322, 1, x_321);
x_323 = lean_mk_empty_array_with_capacity(x_20);
lean_inc(x_274);
x_324 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_324, 0, x_274);
lean_ctor_set(x_324, 1, x_323);
lean_inc(x_319);
x_325 = lean_array_push(x_319, x_322);
x_326 = lean_array_push(x_325, x_324);
lean_inc(x_274);
x_327 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_327, 0, x_274);
lean_ctor_set(x_327, 1, x_326);
x_328 = lean_array_push(x_268, x_278);
x_329 = lean_array_push(x_328, x_327);
x_330 = lean_array_push(x_329, x_288);
x_331 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_331, 0, x_298);
lean_ctor_set(x_331, 1, x_330);
lean_inc(x_319);
x_332 = lean_array_push(x_319, x_296);
x_333 = lean_array_push(x_332, x_331);
x_334 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_334, 0, x_274);
lean_ctor_set(x_334, 1, x_333);
x_335 = lean_array_push(x_319, x_272);
x_336 = lean_array_push(x_335, x_334);
x_337 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_337, 0, x_256);
lean_ctor_set(x_337, 1, x_336);
x_357 = lean_st_ref_get(x_10, x_248);
x_358 = lean_ctor_get(x_357, 0);
lean_inc(x_358);
x_359 = lean_ctor_get(x_358, 3);
lean_inc(x_359);
lean_dec(x_358);
x_360 = lean_ctor_get_uint8(x_359, sizeof(void*)*1);
lean_dec(x_359);
if (x_360 == 0)
{
lean_object* x_361; uint8_t x_362; 
x_361 = lean_ctor_get(x_357, 1);
lean_inc(x_361);
lean_dec(x_357);
x_362 = 0;
x_338 = x_362;
x_339 = x_361;
goto block_356;
}
else
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; uint8_t x_367; 
x_363 = lean_ctor_get(x_357, 1);
lean_inc(x_363);
lean_dec(x_357);
lean_inc(x_18);
x_364 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_363);
x_365 = lean_ctor_get(x_364, 0);
lean_inc(x_365);
x_366 = lean_ctor_get(x_364, 1);
lean_inc(x_366);
lean_dec(x_364);
x_367 = lean_unbox(x_365);
lean_dec(x_365);
x_338 = x_367;
x_339 = x_366;
goto block_356;
}
block_356:
{
if (x_338 == 0)
{
lean_object* x_340; lean_object* x_341; 
lean_dec(x_18);
lean_inc(x_337);
lean_inc(x_1);
x_340 = lean_alloc_closure((void*)(l_Lean_Elab_Term_adaptExpander___lambda__1), 10, 3);
lean_closure_set(x_340, 0, x_1);
lean_closure_set(x_340, 1, x_337);
lean_closure_set(x_340, 2, x_4);
x_341 = l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_1, x_337, x_340, x_5, x_6, x_7, x_8, x_9, x_10, x_339);
return x_341;
}
else
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; 
x_342 = lean_mk_string("");
x_343 = l_Lean_stringToMessageData(x_342);
lean_dec(x_342);
lean_inc(x_1);
x_344 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_344, 0, x_1);
lean_inc(x_343);
x_345 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_345, 0, x_343);
lean_ctor_set(x_345, 1, x_344);
x_346 = lean_mk_string("\n===>\n");
x_347 = l_Lean_stringToMessageData(x_346);
lean_dec(x_346);
x_348 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_348, 0, x_345);
lean_ctor_set(x_348, 1, x_347);
lean_inc(x_337);
x_349 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_349, 0, x_337);
x_350 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_350, 0, x_348);
lean_ctor_set(x_350, 1, x_349);
x_351 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_351, 0, x_350);
lean_ctor_set(x_351, 1, x_343);
x_352 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_18, x_351, x_5, x_6, x_7, x_8, x_9, x_10, x_339);
x_353 = lean_ctor_get(x_352, 1);
lean_inc(x_353);
lean_dec(x_352);
lean_inc(x_337);
lean_inc(x_1);
x_354 = lean_alloc_closure((void*)(l_Lean_Elab_Term_adaptExpander___lambda__1), 10, 3);
lean_closure_set(x_354, 0, x_1);
lean_closure_set(x_354, 1, x_337);
lean_closure_set(x_354, 2, x_4);
x_355 = l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_1, x_337, x_354, x_5, x_6, x_7, x_8, x_9, x_10, x_353);
return x_355;
}
}
}
}
block_383:
{
if (x_369 == 0)
{
x_19 = x_370;
goto block_368;
}
else
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; 
x_371 = lean_mk_string("");
x_372 = l_Lean_stringToMessageData(x_371);
lean_dec(x_371);
lean_inc(x_2);
x_373 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_373, 0, x_2);
lean_inc(x_372);
x_374 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_374, 0, x_372);
lean_ctor_set(x_374, 1, x_373);
x_375 = lean_mk_string("\nSource: ");
x_376 = l_Lean_stringToMessageData(x_375);
lean_dec(x_375);
x_377 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_377, 0, x_374);
lean_ctor_set(x_377, 1, x_376);
lean_inc(x_3);
x_378 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_378, 0, x_3);
x_379 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_379, 0, x_377);
lean_ctor_set(x_379, 1, x_378);
x_380 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_380, 0, x_379);
lean_ctor_set(x_380, 1, x_372);
lean_inc(x_18);
x_381 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_18, x_380, x_5, x_6, x_7, x_8, x_9, x_10, x_370);
x_382 = lean_ctor_get(x_381, 1);
lean_inc(x_382);
lean_dec(x_381);
x_19 = x_382;
goto block_368;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_3(x_3, x_6, x_7, x_2);
return x_8;
}
else
{
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; 
lean_dec(x_4);
x_9 = lean_apply_1(x_5, x_1);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_apply_2(x_4, x_1, x_10);
return x_11;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_match__2___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnknownExpectedType___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnknownExpectedType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_mk_string("invalid {...} notation, expected type is not known");
x_9 = l_Lean_stringToMessageData(x_8);
lean_dec(x_8);
x_10 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnknownExpectedType___spec__1(x_9, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnknownExpectedType___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnknownExpectedType___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnknownExpectedType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnknownExpectedType(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnexpectedExpectedType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Meta_instantiateMVars(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Expr_getAppFn(x_11);
x_14 = l_Lean_Expr_isMVar(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_15 = lean_mk_string("invalid {...} notation, ");
x_16 = l_Lean_stringToMessageData(x_15);
lean_dec(x_15);
x_17 = l_Lean_stringToMessageData(x_2);
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_mk_string(" type is not of the form (C ...)");
x_20 = l_Lean_stringToMessageData(x_19);
lean_dec(x_19);
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_indentExpr(x_11);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_mk_string("");
x_25 = l_Lean_stringToMessageData(x_24);
lean_dec(x_24);
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnknownExpectedType___spec__1(x_26, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_27;
}
else
{
lean_object* x_28; 
lean_dec(x_11);
x_28 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnknownExpectedType(x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_29 = !lean_is_exclusive(x_10);
if (x_29 == 0)
{
return x_10;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_10, 0);
x_31 = lean_ctor_get(x_10, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_10);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnexpectedExpectedType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnexpectedExpectedType(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_10 = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l_Lean_Meta_inferType(x_12, x_5, x_6, x_7, x_8, x_11);
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
x_16 = l_Lean_Meta_whnf(x_14, x_5, x_6, x_7, x_8, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_17);
x_19 = l_Lean_Elab_Term_tryPostponeIfMVar(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 1);
x_22 = lean_ctor_get(x_19, 0);
lean_dec(x_22);
x_23 = l_Lean_Expr_getAppFn(x_17);
if (lean_obj_tag(x_23) == 4)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_17);
lean_ctor_set(x_19, 0, x_25);
return x_19;
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_23);
lean_free_object(x_19);
x_26 = lean_mk_string("source");
x_27 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnexpectedExpectedType(x_17, x_26, x_3, x_4, x_5, x_6, x_7, x_8, x_21);
lean_dec(x_26);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_dec(x_19);
x_29 = l_Lean_Expr_getAppFn(x_17);
if (lean_obj_tag(x_29) == 4)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_17);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_28);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_29);
x_33 = lean_mk_string("source");
x_34 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnexpectedExpectedType(x_17, x_33, x_3, x_4, x_5, x_6, x_7, x_8, x_28);
lean_dec(x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_17);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_35 = !lean_is_exclusive(x_19);
if (x_35 == 0)
{
return x_19;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_19, 0);
x_37 = lean_ctor_get(x_19, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_19);
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
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
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
else
{
uint8_t x_43; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_43 = !lean_is_exclusive(x_13);
if (x_43 == 0)
{
return x_13;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_13, 0);
x_45 = lean_ctor_get(x_13, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_13);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_2);
x_47 = lean_ctor_get(x_10, 1);
lean_inc(x_47);
lean_dec(x_10);
x_48 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnknownExpectedType(x_3, x_4, x_5, x_6, x_7, x_8, x_47);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_10, 1);
lean_inc(x_49);
lean_dec(x_10);
x_50 = lean_ctor_get(x_1, 0);
lean_inc(x_50);
lean_dec(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_50);
x_51 = l_Lean_Meta_whnf(x_50, x_5, x_6, x_7, x_8, x_49);
if (lean_obj_tag(x_51) == 0)
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_51, 0);
x_54 = lean_ctor_get(x_51, 1);
x_55 = l_Lean_Expr_getAppFn(x_53);
if (lean_obj_tag(x_55) == 4)
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_50);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
lean_dec(x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_53);
lean_ctor_set(x_51, 0, x_57);
return x_51;
}
else
{
lean_dec(x_55);
lean_free_object(x_51);
lean_dec(x_53);
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_50);
x_58 = lean_ctor_get(x_2, 1);
lean_inc(x_58);
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_59 = l_Lean_Meta_inferType(x_58, x_5, x_6, x_7, x_8, x_54);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_62 = l_Lean_Meta_whnf(x_60, x_5, x_6, x_7, x_8, x_61);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_63);
x_65 = l_Lean_Elab_Term_tryPostponeIfMVar(x_63, x_3, x_4, x_5, x_6, x_7, x_8, x_64);
if (lean_obj_tag(x_65) == 0)
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_65);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_65, 1);
x_68 = lean_ctor_get(x_65, 0);
lean_dec(x_68);
x_69 = l_Lean_Expr_getAppFn(x_63);
if (lean_obj_tag(x_69) == 4)
{
lean_object* x_70; lean_object* x_71; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
lean_dec(x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_63);
lean_ctor_set(x_65, 0, x_71);
return x_65;
}
else
{
lean_object* x_72; lean_object* x_73; 
lean_dec(x_69);
lean_free_object(x_65);
x_72 = lean_mk_string("source");
x_73 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnexpectedExpectedType(x_63, x_72, x_3, x_4, x_5, x_6, x_7, x_8, x_67);
lean_dec(x_72);
return x_73;
}
}
else
{
lean_object* x_74; lean_object* x_75; 
x_74 = lean_ctor_get(x_65, 1);
lean_inc(x_74);
lean_dec(x_65);
x_75 = l_Lean_Expr_getAppFn(x_63);
if (lean_obj_tag(x_75) == 4)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
lean_dec(x_75);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_63);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_74);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; 
lean_dec(x_75);
x_79 = lean_mk_string("source");
x_80 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnexpectedExpectedType(x_63, x_79, x_3, x_4, x_5, x_6, x_7, x_8, x_74);
lean_dec(x_79);
return x_80;
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_63);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_81 = !lean_is_exclusive(x_65);
if (x_81 == 0)
{
return x_65;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_65, 0);
x_83 = lean_ctor_get(x_65, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_65);
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
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_85 = !lean_is_exclusive(x_62);
if (x_85 == 0)
{
return x_62;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_62, 0);
x_87 = lean_ctor_get(x_62, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_62);
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
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
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
else
{
lean_object* x_93; lean_object* x_94; 
lean_dec(x_2);
x_93 = lean_mk_string("expected");
x_94 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnexpectedExpectedType(x_50, x_93, x_3, x_4, x_5, x_6, x_7, x_8, x_54);
lean_dec(x_93);
return x_94;
}
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_51, 0);
x_96 = lean_ctor_get(x_51, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_51);
x_97 = l_Lean_Expr_getAppFn(x_95);
if (lean_obj_tag(x_97) == 4)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_50);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
lean_dec(x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_95);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_96);
return x_100;
}
else
{
lean_dec(x_97);
lean_dec(x_95);
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_101; lean_object* x_102; 
lean_dec(x_50);
x_101 = lean_ctor_get(x_2, 1);
lean_inc(x_101);
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_102 = l_Lean_Meta_inferType(x_101, x_5, x_6, x_7, x_8, x_96);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_105 = l_Lean_Meta_whnf(x_103, x_5, x_6, x_7, x_8, x_104);
if (lean_obj_tag(x_105) == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_106);
x_108 = l_Lean_Elab_Term_tryPostponeIfMVar(x_106, x_3, x_4, x_5, x_6, x_7, x_8, x_107);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
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
x_111 = l_Lean_Expr_getAppFn(x_106);
if (lean_obj_tag(x_111) == 4)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
lean_dec(x_111);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_106);
if (lean_is_scalar(x_110)) {
 x_114 = lean_alloc_ctor(0, 2, 0);
} else {
 x_114 = x_110;
}
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_109);
return x_114;
}
else
{
lean_object* x_115; lean_object* x_116; 
lean_dec(x_111);
lean_dec(x_110);
x_115 = lean_mk_string("source");
x_116 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnexpectedExpectedType(x_106, x_115, x_3, x_4, x_5, x_6, x_7, x_8, x_109);
lean_dec(x_115);
return x_116;
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
lean_dec(x_106);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_117 = lean_ctor_get(x_108, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_108, 1);
lean_inc(x_118);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 x_119 = x_108;
} else {
 lean_dec_ref(x_108);
 x_119 = lean_box(0);
}
if (lean_is_scalar(x_119)) {
 x_120 = lean_alloc_ctor(1, 2, 0);
} else {
 x_120 = x_119;
}
lean_ctor_set(x_120, 0, x_117);
lean_ctor_set(x_120, 1, x_118);
return x_120;
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_121 = lean_ctor_get(x_105, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_105, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_123 = x_105;
} else {
 lean_dec_ref(x_105);
 x_123 = lean_box(0);
}
if (lean_is_scalar(x_123)) {
 x_124 = lean_alloc_ctor(1, 2, 0);
} else {
 x_124 = x_123;
}
lean_ctor_set(x_124, 0, x_121);
lean_ctor_set(x_124, 1, x_122);
return x_124;
}
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_125 = lean_ctor_get(x_102, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_102, 1);
lean_inc(x_126);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_127 = x_102;
} else {
 lean_dec_ref(x_102);
 x_127 = lean_box(0);
}
if (lean_is_scalar(x_127)) {
 x_128 = lean_alloc_ctor(1, 2, 0);
} else {
 x_128 = x_127;
}
lean_ctor_set(x_128, 0, x_125);
lean_ctor_set(x_128, 1, x_126);
return x_128;
}
}
else
{
lean_object* x_129; lean_object* x_130; 
lean_dec(x_2);
x_129 = lean_mk_string("expected");
x_130 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName_throwUnexpectedExpectedType(x_50, x_129, x_3, x_4, x_5, x_6, x_7, x_8, x_96);
lean_dec(x_129);
return x_130;
}
}
}
}
else
{
uint8_t x_131; 
lean_dec(x_50);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_131 = !lean_is_exclusive(x_51);
if (x_131 == 0)
{
return x_51;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_51, 0);
x_133 = lean_ctor_get(x_51, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_51);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
return x_134;
}
}
}
}
else
{
uint8_t x_135; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_135 = !lean_is_exclusive(x_10);
if (x_135 == 0)
{
return x_10;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_136 = lean_ctor_get(x_10, 0);
x_137 = lean_ctor_get(x_10, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_10);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_137);
return x_138;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_instInhabitedFieldLHS() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_instToFormatFieldLHS_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_2, x_5, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_2(x_3, x_8, x_9);
return x_10;
}
default: 
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
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
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_instToFormatFieldLHS_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_instToFormatFieldLHS_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_instToFormatFieldLHS(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(x_2);
return x_3;
}
case 1:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_4);
return x_5;
}
default: 
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Lean_Syntax_prettyPrint(x_6);
x_8 = lean_mk_string("[");
x_9 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
x_11 = lean_mk_string("]");
x_12 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_instInhabitedFieldVal(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_Field_expr_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_Lean_Elab_Term_StructInst_instInhabitedField(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_box(0);
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_4);
lean_ctor_set(x_6, 3, x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_apply_1(x_3, x_1);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_apply_4(x_2, x_10, x_7, x_8, x_9);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_12 = lean_apply_1(x_3, x_1);
return x_12;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Field_isSimple_match__1___rarg), 3, 0);
return x_3;
}
}
uint8_t l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 1);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Field_isSimple___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_isSimple___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_instInhabitedStruct() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_box(0);
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_1);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_4, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Struct_allDefault_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Struct_allDefault_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__3___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Struct_allDefault_match__3___rarg), 2, 0);
return x_2;
}
}
uint8_t l_List_foldr___at_Lean_Elab_Term_StructInst_Struct_allDefault___spec__1(uint8_t x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_List_foldr___at_Lean_Elab_Term_StructInst_Struct_allDefault___spec__1(x_1, x_4);
x_6 = lean_ctor_get(x_3, 2);
switch (lean_obj_tag(x_6)) {
case 0:
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
case 1:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = l_Lean_Elab_Term_StructInst_Struct_allDefault(x_8);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
else
{
return x_5;
}
}
default: 
{
return x_5;
}
}
}
}
}
uint8_t l_Lean_Elab_Term_StructInst_Struct_allDefault(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = 1;
x_4 = l_List_foldr___at_Lean_Elab_Term_StructInst_Struct_allDefault___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_List_foldr___at_Lean_Elab_Term_StructInst_Struct_allDefault___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_foldr___at_Lean_Elab_Term_StructInst_Struct_allDefault___spec__1(x_3, x_2);
lean_dec(x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_allDefault___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_StructInst_Struct_allDefault(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_ref(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_ref___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_structName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_structName___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_fields(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_fields___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_source(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 3);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_source___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_formatField_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_4, x_9);
return x_10;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_formatField_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_formatField_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Std_Format_joinSep___at_Lean_Elab_Term_StructInst_formatField___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
switch (lean_obj_tag(x_5)) {
case 0:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_8);
return x_9;
}
default: 
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = l_Lean_Syntax_prettyPrint(x_10);
x_12 = lean_mk_string("[");
x_13 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
x_15 = lean_mk_string("]");
x_16 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
lean_inc(x_2);
x_19 = l_Std_Format_joinSep___at_Lean_Elab_Term_StructInst_formatField___spec__1(x_4, x_2);
switch (lean_obj_tag(x_18)) {
case 0:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(x_20);
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_2);
x_23 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_19);
return x_23;
}
case 1:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_dec(x_18);
x_25 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_24);
x_26 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_2);
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_19);
return x_27;
}
default: 
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_28 = lean_ctor_get(x_18, 1);
lean_inc(x_28);
lean_dec(x_18);
x_29 = l_Lean_Syntax_prettyPrint(x_28);
x_30 = lean_mk_string("[");
x_31 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_29);
x_33 = lean_mk_string("]");
x_34 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_2);
x_37 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_19);
return x_37;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_formatField(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_4 = lean_mk_string(" . ");
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = l_Std_Format_joinSep___at_Lean_Elab_Term_StructInst_formatField___spec__1(x_3, x_5);
x_7 = lean_mk_string(" := ");
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_ctor_get(x_2, 2);
lean_inc(x_10);
lean_dec(x_2);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_1);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_Syntax_prettyPrint(x_11);
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
case 1:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_apply_1(x_1, x_14);
x_16 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
default: 
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_1);
x_17 = lean_mk_string("<default>");
x_18 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l_List_map___at_Lean_Elab_Term_StructInst_formatStruct___spec__1(lean_object* x_1) {
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_formatStruct), 1, 0);
x_7 = l_Lean_Elab_Term_StructInst_formatField(x_6, x_4);
x_8 = l_List_map___at_Lean_Elab_Term_StructInst_formatStruct___spec__1(x_5);
lean_ctor_set(x_1, 1, x_8);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_formatStruct), 1, 0);
x_12 = l_Lean_Elab_Term_StructInst_formatField(x_11, x_9);
x_13 = l_List_map___at_Lean_Elab_Term_StructInst_formatStruct___spec__1(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_formatStruct(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_List_map___at_Lean_Elab_Term_StructInst_formatStruct___spec__1(x_2);
x_5 = lean_mk_string(", ");
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = l_Std_Format_joinSep___at_instReprProd___spec__1(x_4, x_6);
lean_dec(x_4);
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_mk_string("{");
x_9 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
x_11 = lean_mk_string("}");
x_12 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
case 1:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_3);
x_14 = lean_mk_string("{");
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_7);
x_17 = lean_mk_string(" .. }");
x_18 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
default: 
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_20 = lean_ctor_get(x_3, 1);
lean_inc(x_20);
lean_dec(x_3);
x_21 = lean_expr_dbg_to_string(x_20);
lean_dec(x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_mk_string("{");
x_24 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
x_26 = lean_mk_string(" with ");
x_27 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_7);
x_30 = lean_mk_string("}");
x_31 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_instToFormatStruct() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_formatStruct), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_instToStringStruct() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_alloc_closure((void*)(l_Lean_Syntax_instToStringSyntax___lambda__1), 1, 0);
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_formatStruct), 1, 0);
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_instToFormatFieldStruct() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_formatStruct), 1, 0);
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_formatField), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_instToStringFieldStruct() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_formatStruct), 1, 0);
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_formatField), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_Syntax_instToStringSyntax___lambda__1), 1, 0);
x_4 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_3, x_5, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_2(x_4, x_8, x_9);
return x_10;
}
default: 
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_2(x_2, x_11, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax(uint8_t x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
if (x_1 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_mk_string(".");
x_6 = l_Lean_mkAtomFrom(x_3, x_5);
x_7 = l_Lean_mkIdentFrom(x_3, x_4);
lean_dec(x_3);
x_8 = lean_unsigned_to_nat(2u);
x_9 = lean_mk_empty_array_with_capacity(x_8);
x_10 = lean_array_push(x_9, x_6);
x_11 = lean_array_push(x_10, x_7);
x_12 = l_Lean_groupKind;
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_dec(x_2);
x_16 = l_Lean_mkIdentFrom(x_14, x_15);
lean_dec(x_14);
return x_16;
}
}
case 1:
{
if (x_1 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
lean_dec(x_2);
x_18 = lean_mk_string(".");
x_19 = l_Lean_mkAtomFrom(x_17, x_18);
x_20 = lean_unsigned_to_nat(2u);
x_21 = lean_mk_empty_array_with_capacity(x_20);
x_22 = lean_array_push(x_21, x_19);
x_23 = lean_array_push(x_22, x_17);
x_24 = l_Lean_groupKind;
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
else
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_dec(x_2);
return x_26;
}
}
default: 
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_2, 0);
lean_inc(x_27);
lean_dec(x_2);
return x_27;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_FieldVal_toSyntax_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_mk_string("Lean.Elab.StructInst");
x_4 = lean_mk_string("Lean.Elab.Term.StructInst.FieldVal.toSyntax");
x_5 = lean_unsigned_to_nat(277u);
x_6 = lean_unsigned_to_nat(25u);
x_7 = lean_mk_string("unreachable code has been reached");
x_8 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = l_Lean_instInhabitedSyntax;
x_10 = lean_panic_fn(x_9, x_8);
return x_10;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_FieldVal_toSyntax___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_FieldVal_toSyntax(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_2, x_5, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Field_toSyntax_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_StructInst_Field_toSyntax___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = 0;
x_11 = l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax(x_10, x_9);
x_12 = 1;
x_13 = x_2 + x_12;
x_14 = x_11;
x_15 = lean_array_uset(x_8, x_2, x_14);
x_2 = x_13;
x_3 = x_15;
goto _start;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Field_toSyntax(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_1);
x_3 = lean_mk_string("Lean.Elab.StructInst");
x_4 = lean_mk_string("Lean.Elab.Term.StructInst.Field.toSyntax");
x_5 = lean_unsigned_to_nat(285u);
x_6 = lean_unsigned_to_nat(11u);
x_7 = lean_mk_string("unreachable code has been reached");
x_8 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = l_Lean_instInhabitedSyntax;
x_10 = lean_panic_fn(x_9, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 2);
lean_inc(x_14);
lean_dec(x_1);
x_15 = l_Lean_Elab_Term_StructInst_FieldVal_toSyntax(x_14);
lean_dec(x_14);
x_16 = lean_unsigned_to_nat(2u);
x_17 = l_Lean_Syntax_setArg(x_13, x_16, x_15);
x_18 = 1;
x_19 = l_Lean_Elab_Term_StructInst_FieldLHS_toSyntax(x_18, x_11);
x_20 = l_List_redLength___rarg(x_12);
x_21 = lean_mk_empty_array_with_capacity(x_20);
lean_dec(x_20);
x_22 = l_List_toArrayAux___rarg(x_12, x_21);
x_23 = lean_array_get_size(x_22);
x_24 = lean_usize_of_nat(x_23);
lean_dec(x_23);
x_25 = 0;
x_26 = x_22;
x_27 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_StructInst_Field_toSyntax___spec__1(x_24, x_25, x_26);
x_28 = x_27;
x_29 = l_Lean_nullKind;
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = lean_mk_empty_array_with_capacity(x_16);
x_32 = lean_array_push(x_31, x_19);
x_33 = lean_array_push(x_32, x_30);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_unsigned_to_nat(0u);
x_36 = l_Lean_Syntax_setArg(x_17, x_35, x_34);
return x_36;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_StructInst_Field_toSyntax___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_StructInst_Field_toSyntax___spec__1(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_inc(x_1);
x_4 = l_Lean_Syntax_getKind(x_1);
x_5 = lean_box(0);
x_6 = lean_mk_string("Lean");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Parser");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("Term");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_mk_string("structInstArrayRef");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_name_eq(x_4, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = l_Lean_groupKind;
x_16 = lean_name_eq(x_4, x_15);
lean_dec(x_4);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = l_Lean_Syntax_isIdent(x_1);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = l_Lean_fieldIdxKind;
x_19 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_18, x_1);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_1);
x_20 = lean_mk_string("unexpected structure syntax");
x_21 = l_Lean_Macro_throwError___rarg(x_20, x_2, x_3);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_3);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = l_Lean_Syntax_getId(x_1);
x_26 = lean_erase_macro_scopes(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_1);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_3);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_unsigned_to_nat(1u);
x_30 = l_Lean_Syntax_getArg(x_1, x_29);
lean_dec(x_1);
x_31 = l_Lean_Syntax_isIdent(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = l_Lean_fieldIdxKind;
x_33 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_32, x_30);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_30);
x_34 = lean_mk_string("unexpected structure syntax");
x_35 = l_Lean_Macro_throwError___rarg(x_34, x_2, x_3);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_33, 0);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_30);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_3);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = l_Lean_Syntax_getId(x_30);
x_40 = lean_erase_macro_scopes(x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_30);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_3);
return x_42;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_4);
x_43 = lean_unsigned_to_nat(1u);
x_44 = l_Lean_Syntax_getArg(x_1, x_43);
x_45 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_45, 0, x_1);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_3);
return x_46;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_2 < x_1;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = x_3;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_9 = lean_array_uget(x_3, x_2);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_array_uset(x_3, x_2, x_10);
x_12 = x_9;
x_13 = l_Lean_Syntax_getArg(x_12, x_10);
lean_dec(x_12);
lean_inc(x_13);
x_14 = l_Lean_Syntax_getKind(x_13);
x_15 = lean_box(0);
x_16 = lean_mk_string("Lean");
x_17 = lean_name_mk_string(x_15, x_16);
x_18 = lean_mk_string("Parser");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = lean_mk_string("Term");
x_21 = lean_name_mk_string(x_19, x_20);
x_22 = lean_mk_string("structInstField");
lean_inc(x_21);
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = lean_name_eq(x_14, x_23);
lean_dec(x_14);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; size_t x_48; size_t x_49; lean_object* x_50; lean_object* x_51; 
x_25 = l_Lean_Syntax_getArg(x_13, x_10);
lean_dec(x_13);
x_26 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_4, x_5);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_mk_string("structInstLVal");
x_30 = lean_name_mk_string(x_21, x_29);
x_31 = lean_mk_string("null");
x_32 = lean_name_mk_string(x_15, x_31);
x_33 = lean_mk_empty_array_with_capacity(x_10);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_unsigned_to_nat(2u);
x_36 = lean_mk_empty_array_with_capacity(x_35);
lean_inc(x_25);
x_37 = lean_array_push(x_36, x_25);
x_38 = lean_array_push(x_37, x_34);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_30);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_mk_string(":=");
x_41 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_41, 0, x_27);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_unsigned_to_nat(3u);
x_43 = lean_mk_empty_array_with_capacity(x_42);
x_44 = lean_array_push(x_43, x_39);
x_45 = lean_array_push(x_44, x_41);
x_46 = lean_array_push(x_45, x_25);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_23);
lean_ctor_set(x_47, 1, x_46);
x_48 = 1;
x_49 = x_2 + x_48;
x_50 = x_47;
x_51 = lean_array_uset(x_11, x_2, x_50);
x_2 = x_49;
x_3 = x_51;
x_5 = x_28;
goto _start;
}
else
{
size_t x_53; size_t x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_23);
lean_dec(x_21);
x_53 = 1;
x_54 = x_2 + x_53;
x_55 = x_13;
x_56 = lean_array_uset(x_11, x_2, x_55);
x_2 = x_54;
x_3 = x_56;
goto _start;
}
}
}
}
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS(x_7, x_2, x_3);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2(x_8, x_2, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_12, 0);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_10);
lean_ctor_set(x_12, 0, x_1);
return x_12;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_12);
lean_ctor_set(x_1, 1, x_15);
lean_ctor_set(x_1, 0, x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_10);
lean_free_object(x_1);
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
uint8_t x_22; 
lean_free_object(x_1);
lean_dec(x_8);
x_22 = !lean_is_exclusive(x_9);
if (x_22 == 0)
{
return x_9;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_9, 0);
x_24 = lean_ctor_get(x_9, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_9);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_1, 0);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_1);
x_28 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS(x_26, x_2, x_3);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2(x_27, x_2, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
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
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_32);
if (lean_is_scalar(x_34)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_34;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_29);
x_37 = lean_ctor_get(x_31, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_39 = x_31;
} else {
 lean_dec_ref(x_31);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(1, 2, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_27);
x_41 = lean_ctor_get(x_28, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_28, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_43 = x_28;
} else {
 lean_dec_ref(x_28);
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
}
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_unsigned_to_nat(2u);
x_10 = l_Lean_Syntax_getArg(x_7, x_9);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_7, x_11);
x_13 = l_Lean_Syntax_getArg(x_12, x_11);
x_14 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS(x_13, x_2, x_3);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(1u);
x_18 = l_Lean_Syntax_getArg(x_12, x_17);
lean_dec(x_12);
x_19 = l_Lean_Syntax_getArgs(x_18);
lean_dec(x_18);
x_20 = lean_array_to_list(lean_box(0), x_19);
x_21 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2(x_20, x_2, x_16);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_ctor_set(x_1, 1, x_22);
lean_ctor_set(x_1, 0, x_15);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_10);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_7);
lean_ctor_set(x_26, 1, x_1);
lean_ctor_set(x_26, 2, x_24);
lean_ctor_set(x_26, 3, x_25);
x_27 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__3(x_8, x_2, x_23);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_26);
lean_ctor_set(x_30, 1, x_29);
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
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_26);
lean_ctor_set(x_33, 1, x_31);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_26);
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
lean_dec(x_15);
lean_dec(x_10);
lean_free_object(x_1);
lean_dec(x_8);
lean_dec(x_7);
x_39 = !lean_is_exclusive(x_21);
if (x_39 == 0)
{
return x_21;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_21, 0);
x_41 = lean_ctor_get(x_21, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_21);
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
lean_dec(x_10);
lean_free_object(x_1);
lean_dec(x_8);
lean_dec(x_7);
x_43 = !lean_is_exclusive(x_14);
if (x_43 == 0)
{
return x_14;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_14, 0);
x_45 = lean_ctor_get(x_14, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_14);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_47 = lean_ctor_get(x_1, 0);
x_48 = lean_ctor_get(x_1, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_1);
x_49 = lean_unsigned_to_nat(2u);
x_50 = l_Lean_Syntax_getArg(x_47, x_49);
x_51 = lean_unsigned_to_nat(0u);
x_52 = l_Lean_Syntax_getArg(x_47, x_51);
x_53 = l_Lean_Syntax_getArg(x_52, x_51);
x_54 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_toFieldLHS(x_53, x_2, x_3);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_unsigned_to_nat(1u);
x_58 = l_Lean_Syntax_getArg(x_52, x_57);
lean_dec(x_52);
x_59 = l_Lean_Syntax_getArgs(x_58);
lean_dec(x_58);
x_60 = lean_array_to_list(lean_box(0), x_59);
x_61 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2(x_60, x_2, x_56);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_55);
lean_ctor_set(x_64, 1, x_62);
x_65 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_65, 0, x_50);
x_66 = lean_box(0);
x_67 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_67, 0, x_47);
lean_ctor_set(x_67, 1, x_64);
lean_ctor_set(x_67, 2, x_65);
lean_ctor_set(x_67, 3, x_66);
x_68 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__3(x_48, x_2, x_63);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_71 = x_68;
} else {
 lean_dec_ref(x_68);
 x_71 = lean_box(0);
}
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_67);
lean_ctor_set(x_72, 1, x_69);
if (lean_is_scalar(x_71)) {
 x_73 = lean_alloc_ctor(0, 2, 0);
} else {
 x_73 = x_71;
}
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_70);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_67);
x_74 = lean_ctor_get(x_68, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_68, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_76 = x_68;
} else {
 lean_dec_ref(x_68);
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
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_55);
lean_dec(x_50);
lean_dec(x_48);
lean_dec(x_47);
x_78 = lean_ctor_get(x_61, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_61, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_80 = x_61;
} else {
 lean_dec_ref(x_61);
 x_80 = lean_box(0);
}
if (lean_is_scalar(x_80)) {
 x_81 = lean_alloc_ctor(1, 2, 0);
} else {
 x_81 = x_80;
}
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_52);
lean_dec(x_50);
lean_dec(x_48);
lean_dec(x_47);
x_82 = lean_ctor_get(x_54, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_54, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_84 = x_54;
} else {
 lean_dec_ref(x_54);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(1, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = lean_unsigned_to_nat(2u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
x_8 = l_Lean_Syntax_getArgs(x_7);
lean_dec(x_7);
x_9 = lean_array_get_size(x_8);
x_10 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_11 = x_8;
x_12 = lean_box_usize(x_10);
x_13 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___boxed__const__1;
x_14 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__1___boxed), 5, 3);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_13);
lean_closure_set(x_14, 2, x_11);
x_15 = x_14;
lean_inc(x_4);
x_16 = lean_apply_2(x_15, x_4, x_5);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_array_to_list(lean_box(0), x_17);
x_20 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__3(x_19, x_4, x_18);
lean_dec(x_4);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_2);
lean_ctor_set(x_23, 2, x_22);
lean_ctor_set(x_23, 3, x_3);
lean_ctor_set(x_20, 0, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_20);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_1);
lean_ctor_set(x_26, 1, x_2);
lean_ctor_set(x_26, 2, x_24);
lean_ctor_set(x_26, 3, x_3);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
uint8_t x_28; 
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
else
{
uint8_t x_32; 
lean_dec(x_4);
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
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__1(x_6, x_7, x_3, x_4, x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___spec__3(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
lean_ctor_set(x_8, 2, x_5);
lean_ctor_set(x_8, 3, x_4);
x_9 = lean_apply_2(x_7, lean_box(0), x_8);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 3);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_apply_1(x_3, x_6);
x_10 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg___lambda__1), 5, 4);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_4);
lean_closure_set(x_10, 2, x_5);
lean_closure_set(x_10, 3, x_7);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 2);
x_5 = lean_apply_1(x_2, x_4);
lean_ctor_set(x_1, 2, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 2);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_10 = lean_apply_1(x_2, x_8);
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_7);
lean_ctor_set(x_11, 2, x_10);
lean_ctor_set(x_11, 3, x_9);
return x_11;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFields(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_setFields(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Monad_seqRight___default___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(x_1, x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_apply_1(x_4, x_1);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 1)
{
lean_object* x_9; 
lean_dec(x_4);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint64_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 3);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_5, 1);
lean_inc(x_13);
lean_dec(x_5);
x_14 = lean_ctor_get(x_7, 0);
lean_inc(x_14);
lean_dec(x_7);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
x_16 = lean_ctor_get_uint64(x_8, sizeof(void*)*2);
lean_dec(x_8);
x_17 = lean_box_uint64(x_16);
x_18 = lean_apply_7(x_2, x_14, x_15, x_17, x_13, x_10, x_11, x_12);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint64_t x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_2);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 3);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_ctor_get(x_5, 1);
lean_inc(x_22);
lean_dec(x_5);
x_23 = lean_ctor_get(x_7, 0);
lean_inc(x_23);
lean_dec(x_7);
x_24 = lean_ctor_get(x_8, 1);
lean_inc(x_24);
x_25 = lean_ctor_get_uint64(x_8, sizeof(void*)*2);
x_26 = lean_box_uint64(x_25);
x_27 = lean_apply_9(x_3, x_23, x_8, x_9, x_24, x_26, x_22, x_19, x_20, x_21);
return x_27;
}
}
else
{
lean_object* x_28; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_28 = lean_apply_1(x_4, x_1);
return x_28;
}
}
else
{
lean_object* x_29; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_29 = lean_apply_1(x_4, x_1);
return x_29;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_5);
x_8 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__1(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
lean_inc(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__1(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_5);
x_8 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__2(x_1, x_6);
lean_ctor_set(x_2, 1, x_8);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
lean_inc(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__2(x_1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__3(lean_object* x_1) {
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
x_6 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__3(x_5);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_ctor_set(x_1, 1, x_6);
return x_1;
}
else
{
lean_object* x_8; 
lean_free_object(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
switch (lean_obj_tag(x_10)) {
case 0:
{
uint8_t x_11; 
lean_dec(x_9);
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_7, 1);
lean_dec(x_12);
x_13 = lean_ctor_get(x_7, 0);
lean_dec(x_13);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
else
{
lean_object* x_14; 
lean_dec(x_7);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_6);
return x_14;
}
}
case 1:
{
uint8_t x_15; 
lean_dec(x_10);
x_15 = !lean_is_exclusive(x_4);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_4, 1);
lean_dec(x_16);
x_17 = !lean_is_exclusive(x_7);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_7, 1);
x_19 = lean_ctor_get(x_7, 0);
lean_dec(x_19);
x_20 = lean_ctor_get(x_8, 0);
lean_inc(x_20);
lean_dec(x_8);
x_21 = l_Lean_Name_components(x_9);
x_22 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__1(x_20, x_21);
x_23 = l_List_append___rarg(x_22, x_18);
lean_ctor_set(x_4, 1, x_23);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = lean_ctor_get(x_7, 1);
lean_inc(x_24);
lean_dec(x_7);
x_25 = lean_ctor_get(x_8, 0);
lean_inc(x_25);
lean_dec(x_8);
x_26 = l_Lean_Name_components(x_9);
x_27 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__1(x_25, x_26);
x_28 = l_List_append___rarg(x_27, x_24);
lean_ctor_set(x_4, 1, x_28);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_4);
lean_ctor_set(x_29, 1, x_6);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_30 = lean_ctor_get(x_4, 0);
x_31 = lean_ctor_get(x_4, 2);
x_32 = lean_ctor_get(x_4, 3);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_4);
x_33 = lean_ctor_get(x_7, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_34 = x_7;
} else {
 lean_dec_ref(x_7);
 x_34 = lean_box(0);
}
x_35 = lean_ctor_get(x_8, 0);
lean_inc(x_35);
lean_dec(x_8);
x_36 = l_Lean_Name_components(x_9);
x_37 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__1(x_35, x_36);
x_38 = l_List_append___rarg(x_37, x_33);
x_39 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_39, 0, x_30);
lean_ctor_set(x_39, 1, x_38);
lean_ctor_set(x_39, 2, x_31);
lean_ctor_set(x_39, 3, x_32);
if (lean_is_scalar(x_34)) {
 x_40 = lean_alloc_ctor(1, 2, 0);
} else {
 x_40 = x_34;
}
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_6);
return x_40;
}
}
default: 
{
uint8_t x_41; 
lean_dec(x_10);
x_41 = !lean_is_exclusive(x_4);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_4, 1);
lean_dec(x_42);
x_43 = !lean_is_exclusive(x_7);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_ctor_get(x_7, 1);
x_45 = lean_ctor_get(x_7, 0);
lean_dec(x_45);
x_46 = lean_ctor_get(x_8, 0);
lean_inc(x_46);
lean_dec(x_8);
x_47 = l_Lean_Name_components(x_9);
x_48 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__2(x_46, x_47);
x_49 = l_List_append___rarg(x_48, x_44);
lean_ctor_set(x_4, 1, x_49);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_50 = lean_ctor_get(x_7, 1);
lean_inc(x_50);
lean_dec(x_7);
x_51 = lean_ctor_get(x_8, 0);
lean_inc(x_51);
lean_dec(x_8);
x_52 = l_Lean_Name_components(x_9);
x_53 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__2(x_51, x_52);
x_54 = l_List_append___rarg(x_53, x_50);
lean_ctor_set(x_4, 1, x_54);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_4);
lean_ctor_set(x_55, 1, x_6);
return x_55;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_56 = lean_ctor_get(x_4, 0);
x_57 = lean_ctor_get(x_4, 2);
x_58 = lean_ctor_get(x_4, 3);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_4);
x_59 = lean_ctor_get(x_7, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_60 = x_7;
} else {
 lean_dec_ref(x_7);
 x_60 = lean_box(0);
}
x_61 = lean_ctor_get(x_8, 0);
lean_inc(x_61);
lean_dec(x_8);
x_62 = l_Lean_Name_components(x_9);
x_63 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__2(x_61, x_62);
x_64 = l_List_append___rarg(x_63, x_59);
x_65 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_65, 0, x_56);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set(x_65, 2, x_57);
lean_ctor_set(x_65, 3, x_58);
if (lean_is_scalar(x_60)) {
 x_66 = lean_alloc_ctor(1, 2, 0);
} else {
 x_66 = x_60;
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_6);
return x_66;
}
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_9);
lean_dec(x_8);
x_67 = !lean_is_exclusive(x_7);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_7, 1);
lean_dec(x_68);
x_69 = lean_ctor_get(x_7, 0);
lean_dec(x_69);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
else
{
lean_object* x_70; 
lean_dec(x_7);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_4);
lean_ctor_set(x_70, 1, x_6);
return x_70;
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_8);
x_71 = !lean_is_exclusive(x_7);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_7, 1);
lean_dec(x_72);
x_73 = lean_ctor_get(x_7, 0);
lean_dec(x_73);
lean_ctor_set(x_7, 1, x_6);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
else
{
lean_object* x_74; 
lean_dec(x_7);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_4);
lean_ctor_set(x_74, 1, x_6);
return x_74;
}
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_75 = lean_ctor_get(x_1, 0);
x_76 = lean_ctor_get(x_1, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_1);
x_77 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__3(x_76);
x_78 = lean_ctor_get(x_75, 1);
lean_inc(x_78);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; 
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_75);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
else
{
lean_object* x_80; 
x_80 = lean_ctor_get(x_78, 0);
lean_inc(x_80);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; 
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
if (lean_obj_tag(x_81) == 1)
{
lean_object* x_82; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
switch (lean_obj_tag(x_82)) {
case 0:
{
lean_object* x_83; lean_object* x_84; 
lean_dec(x_81);
lean_dec(x_80);
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
lean_ctor_set(x_84, 0, x_75);
lean_ctor_set(x_84, 1, x_77);
return x_84;
}
case 1:
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_82);
x_85 = lean_ctor_get(x_75, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_75, 2);
lean_inc(x_86);
x_87 = lean_ctor_get(x_75, 3);
lean_inc(x_87);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 lean_ctor_release(x_75, 2);
 lean_ctor_release(x_75, 3);
 x_88 = x_75;
} else {
 lean_dec_ref(x_75);
 x_88 = lean_box(0);
}
x_89 = lean_ctor_get(x_78, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_90 = x_78;
} else {
 lean_dec_ref(x_78);
 x_90 = lean_box(0);
}
x_91 = lean_ctor_get(x_80, 0);
lean_inc(x_91);
lean_dec(x_80);
x_92 = l_Lean_Name_components(x_81);
x_93 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__1(x_91, x_92);
x_94 = l_List_append___rarg(x_93, x_89);
if (lean_is_scalar(x_88)) {
 x_95 = lean_alloc_ctor(0, 4, 0);
} else {
 x_95 = x_88;
}
lean_ctor_set(x_95, 0, x_85);
lean_ctor_set(x_95, 1, x_94);
lean_ctor_set(x_95, 2, x_86);
lean_ctor_set(x_95, 3, x_87);
if (lean_is_scalar(x_90)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_90;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_77);
return x_96;
}
default: 
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_82);
x_97 = lean_ctor_get(x_75, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_75, 2);
lean_inc(x_98);
x_99 = lean_ctor_get(x_75, 3);
lean_inc(x_99);
if (lean_is_exclusive(x_75)) {
 lean_ctor_release(x_75, 0);
 lean_ctor_release(x_75, 1);
 lean_ctor_release(x_75, 2);
 lean_ctor_release(x_75, 3);
 x_100 = x_75;
} else {
 lean_dec_ref(x_75);
 x_100 = lean_box(0);
}
x_101 = lean_ctor_get(x_78, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_102 = x_78;
} else {
 lean_dec_ref(x_78);
 x_102 = lean_box(0);
}
x_103 = lean_ctor_get(x_80, 0);
lean_inc(x_103);
lean_dec(x_80);
x_104 = l_Lean_Name_components(x_81);
x_105 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__2(x_103, x_104);
x_106 = l_List_append___rarg(x_105, x_101);
if (lean_is_scalar(x_100)) {
 x_107 = lean_alloc_ctor(0, 4, 0);
} else {
 x_107 = x_100;
}
lean_ctor_set(x_107, 0, x_97);
lean_ctor_set(x_107, 1, x_106);
lean_ctor_set(x_107, 2, x_98);
lean_ctor_set(x_107, 3, x_99);
if (lean_is_scalar(x_102)) {
 x_108 = lean_alloc_ctor(1, 2, 0);
} else {
 x_108 = x_102;
}
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_77);
return x_108;
}
}
}
else
{
lean_object* x_109; lean_object* x_110; 
lean_dec(x_81);
lean_dec(x_80);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_109 = x_78;
} else {
 lean_dec_ref(x_78);
 x_109 = lean_box(0);
}
if (lean_is_scalar(x_109)) {
 x_110 = lean_alloc_ctor(1, 2, 0);
} else {
 x_110 = x_109;
}
lean_ctor_set(x_110, 0, x_75);
lean_ctor_set(x_110, 1, x_77);
return x_110;
}
}
else
{
lean_object* x_111; lean_object* x_112; 
lean_dec(x_80);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_111 = x_78;
} else {
 lean_dec_ref(x_78);
 x_111 = lean_box(0);
}
if (lean_is_scalar(x_111)) {
 x_112 = lean_alloc_ctor(1, 2, 0);
} else {
 x_112 = x_111;
}
lean_ctor_set(x_112, 0, x_75);
lean_ctor_set(x_112, 1, x_77);
return x_112;
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__3), 1, 0);
x_3 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_apply_1(x_3, x_1);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 1)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_dec(x_6);
x_13 = lean_apply_6(x_2, x_11, x_12, x_10, x_7, x_8, x_9);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_14 = lean_apply_1(x_3, x_1);
return x_14;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
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
x_13 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
x_24 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__2(x_2, x_3, x_4, x_5, x_6, x_23, x_8, x_9);
lean_dec(x_23);
return x_24;
}
}
}
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_3);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_30; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_14 = x_2;
} else {
 lean_dec_ref(x_2);
 x_14 = lean_box(0);
}
x_30 = lean_ctor_get(x_12, 1);
lean_inc(x_30);
if (lean_obj_tag(x_30) == 0)
{
x_15 = x_12;
x_16 = x_9;
goto block_29;
}
else
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
if (lean_obj_tag(x_31) == 1)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_12);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_33 = lean_ctor_get(x_12, 0);
x_34 = lean_ctor_get(x_12, 2);
x_35 = lean_ctor_get(x_12, 3);
x_36 = lean_ctor_get(x_12, 1);
lean_dec(x_36);
x_37 = !lean_is_exclusive(x_30);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_30, 1);
x_39 = lean_ctor_get(x_30, 0);
lean_dec(x_39);
x_40 = !lean_is_exclusive(x_31);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_41 = lean_ctor_get(x_31, 0);
x_42 = lean_ctor_get(x_31, 1);
x_43 = lean_unsigned_to_nat(0u);
x_44 = lean_nat_dec_eq(x_42, x_43);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
x_45 = lean_array_get_size(x_1);
x_46 = lean_nat_dec_lt(x_45, x_42);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_45);
x_47 = lean_unsigned_to_nat(1u);
x_48 = lean_nat_sub(x_42, x_47);
lean_dec(x_42);
x_49 = l_Lean_instInhabitedName;
x_50 = lean_array_get(x_49, x_1, x_48);
lean_dec(x_48);
lean_ctor_set_tag(x_31, 0);
lean_ctor_set(x_31, 1, x_50);
x_15 = x_12;
x_16 = x_9;
goto block_29;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
lean_free_object(x_31);
lean_dec(x_42);
lean_free_object(x_30);
lean_dec(x_38);
lean_free_object(x_12);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_14);
lean_dec(x_13);
x_51 = lean_mk_string("invalid field index, structure has only #");
x_52 = l_Lean_stringToMessageData(x_51);
lean_dec(x_51);
x_53 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_45);
x_54 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_54, 0, x_53);
x_55 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_mk_string(" fields");
x_57 = l_Lean_stringToMessageData(x_56);
lean_dec(x_56);
x_58 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_57);
x_59 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(x_41, x_58, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_41);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
return x_59;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_59, 0);
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_59);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
lean_free_object(x_31);
lean_dec(x_42);
lean_free_object(x_30);
lean_dec(x_38);
lean_free_object(x_12);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_14);
lean_dec(x_13);
x_64 = lean_mk_string("invalid field index, index must be greater than 0");
x_65 = l_Lean_stringToMessageData(x_64);
lean_dec(x_64);
x_66 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(x_41, x_65, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_41);
x_67 = !lean_is_exclusive(x_66);
if (x_67 == 0)
{
return x_66;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_66, 0);
x_69 = lean_ctor_get(x_66, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_66);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_71 = lean_ctor_get(x_31, 0);
x_72 = lean_ctor_get(x_31, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_31);
x_73 = lean_unsigned_to_nat(0u);
x_74 = lean_nat_dec_eq(x_72, x_73);
if (x_74 == 0)
{
lean_object* x_75; uint8_t x_76; 
x_75 = lean_array_get_size(x_1);
x_76 = lean_nat_dec_lt(x_75, x_72);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_75);
x_77 = lean_unsigned_to_nat(1u);
x_78 = lean_nat_sub(x_72, x_77);
lean_dec(x_72);
x_79 = l_Lean_instInhabitedName;
x_80 = lean_array_get(x_79, x_1, x_78);
lean_dec(x_78);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_71);
lean_ctor_set(x_81, 1, x_80);
lean_ctor_set(x_30, 0, x_81);
x_15 = x_12;
x_16 = x_9;
goto block_29;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_72);
lean_free_object(x_30);
lean_dec(x_38);
lean_free_object(x_12);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_14);
lean_dec(x_13);
x_82 = lean_mk_string("invalid field index, structure has only #");
x_83 = l_Lean_stringToMessageData(x_82);
lean_dec(x_82);
x_84 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_75);
x_85 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_85, 0, x_84);
x_86 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_mk_string(" fields");
x_88 = l_Lean_stringToMessageData(x_87);
lean_dec(x_87);
x_89 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_88);
x_90 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(x_71, x_89, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_71);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_93 = x_90;
} else {
 lean_dec_ref(x_90);
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
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_72);
lean_free_object(x_30);
lean_dec(x_38);
lean_free_object(x_12);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_14);
lean_dec(x_13);
x_95 = lean_mk_string("invalid field index, index must be greater than 0");
x_96 = l_Lean_stringToMessageData(x_95);
lean_dec(x_95);
x_97 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(x_71, x_96, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_71);
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_97, 1);
lean_inc(x_99);
if (lean_is_exclusive(x_97)) {
 lean_ctor_release(x_97, 0);
 lean_ctor_release(x_97, 1);
 x_100 = x_97;
} else {
 lean_dec_ref(x_97);
 x_100 = lean_box(0);
}
if (lean_is_scalar(x_100)) {
 x_101 = lean_alloc_ctor(1, 2, 0);
} else {
 x_101 = x_100;
}
lean_ctor_set(x_101, 0, x_98);
lean_ctor_set(x_101, 1, x_99);
return x_101;
}
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_102 = lean_ctor_get(x_30, 1);
lean_inc(x_102);
lean_dec(x_30);
x_103 = lean_ctor_get(x_31, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_31, 1);
lean_inc(x_104);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_105 = x_31;
} else {
 lean_dec_ref(x_31);
 x_105 = lean_box(0);
}
x_106 = lean_unsigned_to_nat(0u);
x_107 = lean_nat_dec_eq(x_104, x_106);
if (x_107 == 0)
{
lean_object* x_108; uint8_t x_109; 
x_108 = lean_array_get_size(x_1);
x_109 = lean_nat_dec_lt(x_108, x_104);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_108);
x_110 = lean_unsigned_to_nat(1u);
x_111 = lean_nat_sub(x_104, x_110);
lean_dec(x_104);
x_112 = l_Lean_instInhabitedName;
x_113 = lean_array_get(x_112, x_1, x_111);
lean_dec(x_111);
if (lean_is_scalar(x_105)) {
 x_114 = lean_alloc_ctor(0, 2, 0);
} else {
 x_114 = x_105;
 lean_ctor_set_tag(x_114, 0);
}
lean_ctor_set(x_114, 0, x_103);
lean_ctor_set(x_114, 1, x_113);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_102);
lean_ctor_set(x_12, 1, x_115);
x_15 = x_12;
x_16 = x_9;
goto block_29;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_102);
lean_free_object(x_12);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_14);
lean_dec(x_13);
x_116 = lean_mk_string("invalid field index, structure has only #");
x_117 = l_Lean_stringToMessageData(x_116);
lean_dec(x_116);
x_118 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_108);
x_119 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_119, 0, x_118);
x_120 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_120, 0, x_117);
lean_ctor_set(x_120, 1, x_119);
x_121 = lean_mk_string(" fields");
x_122 = l_Lean_stringToMessageData(x_121);
lean_dec(x_121);
x_123 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_123, 0, x_120);
lean_ctor_set(x_123, 1, x_122);
x_124 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(x_103, x_123, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_103);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_127 = x_124;
} else {
 lean_dec_ref(x_124);
 x_127 = lean_box(0);
}
if (lean_is_scalar(x_127)) {
 x_128 = lean_alloc_ctor(1, 2, 0);
} else {
 x_128 = x_127;
}
lean_ctor_set(x_128, 0, x_125);
lean_ctor_set(x_128, 1, x_126);
return x_128;
}
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
lean_dec(x_105);
lean_dec(x_104);
lean_dec(x_102);
lean_free_object(x_12);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_14);
lean_dec(x_13);
x_129 = lean_mk_string("invalid field index, index must be greater than 0");
x_130 = l_Lean_stringToMessageData(x_129);
lean_dec(x_129);
x_131 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(x_103, x_130, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_103);
x_132 = lean_ctor_get(x_131, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_131, 1);
lean_inc(x_133);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 x_134 = x_131;
} else {
 lean_dec_ref(x_131);
 x_134 = lean_box(0);
}
if (lean_is_scalar(x_134)) {
 x_135 = lean_alloc_ctor(1, 2, 0);
} else {
 x_135 = x_134;
}
lean_ctor_set(x_135, 0, x_132);
lean_ctor_set(x_135, 1, x_133);
return x_135;
}
}
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; uint8_t x_145; 
x_136 = lean_ctor_get(x_12, 0);
x_137 = lean_ctor_get(x_12, 2);
x_138 = lean_ctor_get(x_12, 3);
lean_inc(x_138);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_12);
x_139 = lean_ctor_get(x_30, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_140 = x_30;
} else {
 lean_dec_ref(x_30);
 x_140 = lean_box(0);
}
x_141 = lean_ctor_get(x_31, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_31, 1);
lean_inc(x_142);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_143 = x_31;
} else {
 lean_dec_ref(x_31);
 x_143 = lean_box(0);
}
x_144 = lean_unsigned_to_nat(0u);
x_145 = lean_nat_dec_eq(x_142, x_144);
if (x_145 == 0)
{
lean_object* x_146; uint8_t x_147; 
x_146 = lean_array_get_size(x_1);
x_147 = lean_nat_dec_lt(x_146, x_142);
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
lean_dec(x_146);
x_148 = lean_unsigned_to_nat(1u);
x_149 = lean_nat_sub(x_142, x_148);
lean_dec(x_142);
x_150 = l_Lean_instInhabitedName;
x_151 = lean_array_get(x_150, x_1, x_149);
lean_dec(x_149);
if (lean_is_scalar(x_143)) {
 x_152 = lean_alloc_ctor(0, 2, 0);
} else {
 x_152 = x_143;
 lean_ctor_set_tag(x_152, 0);
}
lean_ctor_set(x_152, 0, x_141);
lean_ctor_set(x_152, 1, x_151);
if (lean_is_scalar(x_140)) {
 x_153 = lean_alloc_ctor(1, 2, 0);
} else {
 x_153 = x_140;
}
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_139);
x_154 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_154, 0, x_136);
lean_ctor_set(x_154, 1, x_153);
lean_ctor_set(x_154, 2, x_137);
lean_ctor_set(x_154, 3, x_138);
x_15 = x_154;
x_16 = x_9;
goto block_29;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
lean_dec(x_143);
lean_dec(x_142);
lean_dec(x_140);
lean_dec(x_139);
lean_dec(x_138);
lean_dec(x_137);
lean_dec(x_136);
lean_dec(x_14);
lean_dec(x_13);
x_155 = lean_mk_string("invalid field index, structure has only #");
x_156 = l_Lean_stringToMessageData(x_155);
lean_dec(x_155);
x_157 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_146);
x_158 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_158, 0, x_157);
x_159 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_159, 0, x_156);
lean_ctor_set(x_159, 1, x_158);
x_160 = lean_mk_string(" fields");
x_161 = l_Lean_stringToMessageData(x_160);
lean_dec(x_160);
x_162 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_162, 0, x_159);
lean_ctor_set(x_162, 1, x_161);
x_163 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(x_141, x_162, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_141);
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
if (lean_is_scalar(x_166)) {
 x_167 = lean_alloc_ctor(1, 2, 0);
} else {
 x_167 = x_166;
}
lean_ctor_set(x_167, 0, x_164);
lean_ctor_set(x_167, 1, x_165);
return x_167;
}
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
lean_dec(x_143);
lean_dec(x_142);
lean_dec(x_140);
lean_dec(x_139);
lean_dec(x_138);
lean_dec(x_137);
lean_dec(x_136);
lean_dec(x_14);
lean_dec(x_13);
x_168 = lean_mk_string("invalid field index, index must be greater than 0");
x_169 = l_Lean_stringToMessageData(x_168);
lean_dec(x_168);
x_170 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(x_141, x_169, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_141);
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
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
}
else
{
lean_dec(x_31);
lean_dec(x_30);
x_15 = x_12;
x_16 = x_9;
goto block_29;
}
}
block_29:
{
lean_object* x_17; 
x_17 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__3(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
if (lean_is_scalar(x_14)) {
 x_20 = lean_alloc_ctor(1, 2, 0);
} else {
 x_20 = x_14;
}
lean_ctor_set(x_20, 0, x_15);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_17, 0);
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_17);
if (lean_is_scalar(x_14)) {
 x_23 = lean_alloc_ctor(1, 2, 0);
} else {
 x_23 = x_14;
}
lean_ctor_set(x_23, 0, x_15);
lean_ctor_set(x_23, 1, x_21);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_15);
lean_dec(x_14);
x_25 = !lean_is_exclusive(x_17);
if (x_25 == 0)
{
return x_17;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_17);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_ctor_get(x_1, 2);
x_14 = lean_ctor_get(x_1, 3);
x_15 = lean_apply_8(x_2, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_ctor_set(x_1, 2, x_17);
lean_ctor_set(x_15, 0, x_1);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_15, 0);
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_15);
lean_ctor_set(x_1, 2, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_1);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
else
{
uint8_t x_21; 
lean_free_object(x_1);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
x_21 = !lean_is_exclusive(x_15);
if (x_21 == 0)
{
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_1, 0);
x_26 = lean_ctor_get(x_1, 1);
x_27 = lean_ctor_get(x_1, 2);
x_28 = lean_ctor_get(x_1, 3);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_1);
x_29 = lean_apply_8(x_2, x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_32 = x_29;
} else {
 lean_dec_ref(x_29);
 x_32 = lean_box(0);
}
x_33 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_33, 0, x_25);
lean_ctor_set(x_33, 1, x_26);
lean_ctor_set(x_33, 2, x_30);
lean_ctor_set(x_33, 3, x_28);
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
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_25);
x_35 = lean_ctor_get(x_29, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_37 = x_29;
} else {
 lean_dec_ref(x_29);
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
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
x_15 = l_Lean_getStructureFields(x_13, x_14);
x_16 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__3(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_15);
return x_16;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___lambda__1___boxed), 9, 1);
lean_closure_set(x_9, 0, x_1);
x_10 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__4(x_1, x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_apply_1(x_3, x_1);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_dec(x_6);
x_13 = lean_apply_6(x_2, x_11, x_12, x_10, x_7, x_8, x_9);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_14 = lean_apply_1(x_3, x_1);
return x_14;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields_match__4___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
x_7 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1(x_1, x_6);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_box(0);
x_10 = lean_name_mk_string(x_9, x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set(x_2, 1, x_7);
lean_ctor_set(x_2, 0, x_11);
return x_2;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_1);
x_12 = lean_mk_string("Lean.Elab.StructInst");
x_13 = lean_mk_string("_private.Lean.Elab.StructInst.0.Lean.Elab.Term.StructInst.expandParentFields");
x_14 = lean_unsigned_to_nat(385u);
x_15 = lean_unsigned_to_nat(34u);
x_16 = lean_mk_string("unreachable code has been reached");
x_17 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_12, x_13, x_14, x_15, x_16);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
x_18 = l_Lean_Elab_Term_StructInst_instInhabitedFieldLHS;
x_19 = lean_panic_fn(x_18, x_17);
lean_ctor_set(x_2, 1, x_7);
lean_ctor_set(x_2, 0, x_19);
return x_2;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_2, 0);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_2);
lean_inc(x_1);
x_22 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1(x_1, x_21);
if (lean_obj_tag(x_20) == 1)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_box(0);
x_25 = lean_name_mk_string(x_24, x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_1);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_22);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_20);
lean_dec(x_1);
x_28 = lean_mk_string("Lean.Elab.StructInst");
x_29 = lean_mk_string("_private.Lean.Elab.StructInst.0.Lean.Elab.Term.StructInst.expandParentFields");
x_30 = lean_unsigned_to_nat(385u);
x_31 = lean_unsigned_to_nat(34u);
x_32 = lean_mk_string("unreachable code has been reached");
x_33 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_28, x_29, x_30, x_31, x_32);
lean_dec(x_32);
lean_dec(x_29);
lean_dec(x_28);
x_34 = l_Lean_Elab_Term_StructInst_instInhabitedFieldLHS;
x_35 = lean_panic_fn(x_34, x_33);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_22);
return x_36;
}
}
}
}
}
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_31; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_15 = x_3;
} else {
 lean_dec_ref(x_3);
 x_15 = lean_box(0);
}
x_31 = lean_ctor_get(x_13, 1);
lean_inc(x_31);
if (lean_obj_tag(x_31) == 0)
{
x_16 = x_13;
x_17 = x_10;
goto block_30;
}
else
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_33 = lean_ctor_get(x_13, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_13, 2);
lean_inc(x_34);
x_35 = lean_ctor_get(x_13, 3);
lean_inc(x_35);
x_36 = lean_ctor_get(x_32, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_dec(x_32);
x_38 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_inc(x_38);
lean_inc(x_2);
x_39 = l_Lean_findField_x3f(x_2, x_38, x_37);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_2);
x_40 = lean_mk_string("'");
x_41 = l_Lean_stringToMessageData(x_40);
lean_dec(x_40);
x_42 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_42, 0, x_37);
lean_inc(x_41);
x_43 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_mk_string("' is not a field of structure '");
x_45 = l_Lean_stringToMessageData(x_44);
lean_dec(x_44);
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_47, 0, x_38);
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_41);
x_50 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(x_36, x_49, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_36);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
return x_50;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = lean_ctor_get(x_50, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_50);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
else
{
lean_object* x_55; uint8_t x_56; 
x_55 = lean_ctor_get(x_39, 0);
lean_inc(x_55);
lean_dec(x_39);
x_56 = lean_name_eq(x_55, x_38);
if (x_56 == 0)
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_13);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_58 = lean_ctor_get(x_13, 3);
lean_dec(x_58);
x_59 = lean_ctor_get(x_13, 2);
lean_dec(x_59);
x_60 = lean_ctor_get(x_13, 1);
lean_dec(x_60);
x_61 = lean_ctor_get(x_13, 0);
lean_dec(x_61);
lean_inc(x_2);
x_62 = l_Lean_getPathToBaseStructure_x3f(x_2, x_55, x_38);
lean_dec(x_55);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
lean_free_object(x_13);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_2);
x_63 = lean_mk_string("failed to access field '");
x_64 = l_Lean_stringToMessageData(x_63);
lean_dec(x_63);
x_65 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_65, 0, x_37);
x_66 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_mk_string("' in parent structure");
x_68 = l_Lean_stringToMessageData(x_67);
lean_dec(x_67);
x_69 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_68);
x_70 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(x_36, x_69, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_36);
x_71 = !lean_is_exclusive(x_70);
if (x_71 == 0)
{
return x_70;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_70, 0);
x_73 = lean_ctor_get(x_70, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_70);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_37);
x_75 = lean_ctor_get(x_62, 0);
lean_inc(x_75);
lean_dec(x_62);
x_76 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1(x_36, x_75);
x_77 = l_List_append___rarg(x_76, x_31);
lean_ctor_set(x_13, 1, x_77);
x_16 = x_13;
x_17 = x_10;
goto block_30;
}
}
else
{
lean_object* x_78; 
lean_dec(x_13);
lean_inc(x_2);
x_78 = l_Lean_getPathToBaseStructure_x3f(x_2, x_55, x_38);
lean_dec(x_55);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_2);
x_79 = lean_mk_string("failed to access field '");
x_80 = l_Lean_stringToMessageData(x_79);
lean_dec(x_79);
x_81 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_81, 0, x_37);
x_82 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_mk_string("' in parent structure");
x_84 = l_Lean_stringToMessageData(x_83);
lean_dec(x_83);
x_85 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_84);
x_86 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__1(x_36, x_85, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_36);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 lean_ctor_release(x_86, 1);
 x_89 = x_86;
} else {
 lean_dec_ref(x_86);
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
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_37);
x_91 = lean_ctor_get(x_78, 0);
lean_inc(x_91);
lean_dec(x_78);
x_92 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__1(x_36, x_91);
x_93 = l_List_append___rarg(x_92, x_31);
x_94 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_94, 0, x_33);
lean_ctor_set(x_94, 1, x_93);
lean_ctor_set(x_94, 2, x_34);
lean_ctor_set(x_94, 3, x_35);
x_16 = x_94;
x_17 = x_10;
goto block_30;
}
}
}
else
{
lean_dec(x_55);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_31);
x_16 = x_13;
x_17 = x_10;
goto block_30;
}
}
}
else
{
lean_dec(x_32);
lean_dec(x_31);
x_16 = x_13;
x_17 = x_10;
goto block_30;
}
}
block_30:
{
lean_object* x_18; 
x_18 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2(x_1, x_2, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_17);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
if (lean_is_scalar(x_15)) {
 x_21 = lean_alloc_ctor(1, 2, 0);
} else {
 x_21 = x_15;
}
lean_ctor_set(x_21, 0, x_16);
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
if (lean_is_scalar(x_15)) {
 x_24 = lean_alloc_ctor(1, 2, 0);
} else {
 x_24 = x_15;
}
lean_ctor_set(x_24, 0, x_16);
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
lean_dec(x_16);
lean_dec(x_15);
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
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___boxed), 10, 2);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_12);
x_14 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__4(x_1, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
return x_14;
}
}
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_apply_3(x_2, x_7, x_8, x_6);
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_AssocList_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__2(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_name_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Name_hash(x_2);
x_6 = (size_t)x_5;
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
x_9 = l_Std_AssocList_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__2(x_2, x_8);
lean_dec(x_8);
return x_9;
}
}
uint8_t l_Std_AssocList_contains___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_name_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Name_hash(x_4);
x_8 = (size_t)x_7;
x_9 = lean_usize_modn(x_8, x_6);
lean_dec(x_6);
x_10 = lean_array_uget(x_1, x_9);
lean_ctor_set(x_2, 2, x_10);
x_11 = lean_array_uset(x_1, x_9, x_2);
x_1 = x_11;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_16 = lean_array_get_size(x_1);
x_17 = l_Lean_Name_hash(x_13);
x_18 = (size_t)x_17;
x_19 = lean_usize_modn(x_18, x_16);
lean_dec(x_16);
x_20 = lean_array_uget(x_1, x_19);
x_21 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_uset(x_1, x_19, x_21);
x_1 = x_22;
x_2 = x_15;
goto _start;
}
}
}
}
lean_object* l_Std_HashMapImp_moveEntries___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__7(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_Std_HashMapImp_expand___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__6(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Std_AssocList_replace___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_name_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_AssocList_replace___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__8(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_name_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_AssocList_replace___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__8(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
lean_object* l_Std_HashMapImp_insert___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; size_t x_9; size_t x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Name_hash(x_2);
x_9 = (size_t)x_8;
x_10 = lean_usize_modn(x_9, x_7);
x_11 = lean_array_uget(x_6, x_10);
x_12 = l_Std_AssocList_contains___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__4(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set(x_15, 2, x_11);
x_16 = lean_array_uset(x_6, x_10, x_15);
x_17 = lean_nat_dec_le(x_14, x_7);
lean_dec(x_7);
if (x_17 == 0)
{
lean_object* x_18; 
lean_free_object(x_1);
x_18 = l_Std_HashMapImp_expand___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__5(x_14, x_16);
return x_18;
}
else
{
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_7);
x_19 = l_Std_AssocList_replace___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__8(x_2, x_3, x_11);
x_20 = lean_array_uset(x_6, x_10, x_19);
lean_ctor_set(x_1, 1, x_20);
return x_1;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint64_t x_24; size_t x_25; size_t x_26; lean_object* x_27; uint8_t x_28; 
x_21 = lean_ctor_get(x_1, 0);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_1);
x_23 = lean_array_get_size(x_22);
x_24 = l_Lean_Name_hash(x_2);
x_25 = (size_t)x_24;
x_26 = lean_usize_modn(x_25, x_23);
x_27 = lean_array_uget(x_22, x_26);
x_28 = l_Std_AssocList_contains___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__4(x_2, x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_21, x_29);
lean_dec(x_21);
x_31 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_31, 0, x_2);
lean_ctor_set(x_31, 1, x_3);
lean_ctor_set(x_31, 2, x_27);
x_32 = lean_array_uset(x_22, x_26, x_31);
x_33 = lean_nat_dec_le(x_30, x_23);
lean_dec(x_23);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = l_Std_HashMapImp_expand___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__5(x_30, x_32);
return x_34;
}
else
{
lean_object* x_35; 
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_30);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_23);
x_36 = l_Std_AssocList_replace___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__8(x_2, x_3, x_27);
x_37 = lean_array_uset(x_22, x_26, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_21);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
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
x_13 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
x_24 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10(x_2, x_3, x_4, x_5, x_6, x_23, x_8, x_9);
lean_dec(x_23);
return x_24;
}
}
}
lean_object* l_Std_mkHashMap___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__11(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_List_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_11);
lean_dec(x_1);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_dec(x_2);
x_14 = l_Lean_Elab_Term_instInhabitedTermElabM(lean_box(0));
x_15 = lean_mk_string("Lean.Elab.StructInst");
x_16 = lean_mk_string("_private.Lean.Elab.StructInst.0.Lean.Elab.Term.StructInst.mkFieldMap");
x_17 = lean_unsigned_to_nat(403u);
x_18 = lean_unsigned_to_nat(11u);
x_19 = lean_mk_string("unreachable code has been reached");
x_20 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_15, x_16, x_17, x_18, x_19);
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_15);
x_21 = lean_panic_fn(x_14, x_20);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_22 = lean_apply_7(x_21, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_1 = x_23;
x_2 = x_13;
x_9 = x_24;
goto _start;
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
else
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_12);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_12, 0);
x_32 = lean_ctor_get(x_12, 1);
lean_dec(x_32);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_2, 1);
lean_inc(x_33);
lean_dec(x_2);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__1(x_1, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_box(0);
lean_ctor_set(x_12, 1, x_36);
lean_ctor_set(x_12, 0, x_11);
x_37 = l_Std_HashMapImp_insert___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__3(x_1, x_34, x_12);
x_1 = x_37;
x_2 = x_33;
goto _start;
}
else
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_35, 0);
lean_inc(x_39);
lean_dec(x_35);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_box(0);
lean_ctor_set(x_12, 1, x_40);
lean_ctor_set(x_12, 0, x_11);
x_41 = l_Std_HashMapImp_insert___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__3(x_1, x_34, x_12);
x_1 = x_41;
x_2 = x_33;
goto _start;
}
else
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_39);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = lean_ctor_get(x_39, 0);
x_45 = lean_ctor_get(x_39, 1);
x_46 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_11);
if (x_46 == 0)
{
uint8_t x_47; 
x_47 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_44);
if (x_47 == 0)
{
lean_object* x_48; 
lean_ctor_set(x_12, 1, x_39);
lean_ctor_set(x_12, 0, x_11);
x_48 = l_Std_HashMapImp_insert___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__3(x_1, x_34, x_12);
x_1 = x_48;
x_2 = x_33;
goto _start;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
lean_free_object(x_39);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_33);
lean_free_object(x_12);
lean_dec(x_1);
x_50 = lean_ctor_get(x_11, 0);
lean_inc(x_50);
lean_dec(x_11);
x_51 = lean_mk_string("field '");
x_52 = l_Lean_stringToMessageData(x_51);
lean_dec(x_51);
x_53 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_53, 0, x_34);
x_54 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_mk_string("' has already beed specified");
x_56 = l_Lean_stringToMessageData(x_55);
lean_dec(x_55);
x_57 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_57, 0, x_54);
lean_ctor_set(x_57, 1, x_56);
x_58 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__9(x_50, x_57, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_50);
x_59 = !lean_is_exclusive(x_58);
if (x_59 == 0)
{
return x_58;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_58, 0);
x_61 = lean_ctor_get(x_58, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_58);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
lean_free_object(x_39);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_33);
lean_free_object(x_12);
lean_dec(x_1);
x_63 = lean_ctor_get(x_11, 0);
lean_inc(x_63);
lean_dec(x_11);
x_64 = lean_mk_string("field '");
x_65 = l_Lean_stringToMessageData(x_64);
lean_dec(x_64);
x_66 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_66, 0, x_34);
x_67 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_mk_string("' has already beed specified");
x_69 = l_Lean_stringToMessageData(x_68);
lean_dec(x_68);
x_70 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_69);
x_71 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__9(x_63, x_70, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_63);
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
else
{
lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_76 = lean_ctor_get(x_39, 0);
x_77 = lean_ctor_get(x_39, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_39);
x_78 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_11);
if (x_78 == 0)
{
uint8_t x_79; 
x_79 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_76);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; 
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_76);
lean_ctor_set(x_80, 1, x_77);
lean_ctor_set(x_12, 1, x_80);
lean_ctor_set(x_12, 0, x_11);
x_81 = l_Std_HashMapImp_insert___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__3(x_1, x_34, x_12);
x_1 = x_81;
x_2 = x_33;
goto _start;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_33);
lean_free_object(x_12);
lean_dec(x_1);
x_83 = lean_ctor_get(x_11, 0);
lean_inc(x_83);
lean_dec(x_11);
x_84 = lean_mk_string("field '");
x_85 = l_Lean_stringToMessageData(x_84);
lean_dec(x_84);
x_86 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_86, 0, x_34);
x_87 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_mk_string("' has already beed specified");
x_89 = l_Lean_stringToMessageData(x_88);
lean_dec(x_88);
x_90 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_90, 0, x_87);
lean_ctor_set(x_90, 1, x_89);
x_91 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__9(x_83, x_90, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_83);
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
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_77);
lean_dec(x_76);
lean_dec(x_33);
lean_free_object(x_12);
lean_dec(x_1);
x_96 = lean_ctor_get(x_11, 0);
lean_inc(x_96);
lean_dec(x_11);
x_97 = lean_mk_string("field '");
x_98 = l_Lean_stringToMessageData(x_97);
lean_dec(x_97);
x_99 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_99, 0, x_34);
x_100 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
x_101 = lean_mk_string("' has already beed specified");
x_102 = l_Lean_stringToMessageData(x_101);
lean_dec(x_101);
x_103 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_103, 0, x_100);
lean_ctor_set(x_103, 1, x_102);
x_104 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__9(x_96, x_103, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_96);
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_104, 1);
lean_inc(x_106);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_107 = x_104;
} else {
 lean_dec_ref(x_104);
 x_107 = lean_box(0);
}
if (lean_is_scalar(x_107)) {
 x_108 = lean_alloc_ctor(1, 2, 0);
} else {
 x_108 = x_107;
}
lean_ctor_set(x_108, 0, x_105);
lean_ctor_set(x_108, 1, x_106);
return x_108;
}
}
}
}
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_free_object(x_12);
lean_dec(x_31);
lean_dec(x_11);
lean_dec(x_1);
x_109 = lean_ctor_get(x_2, 1);
lean_inc(x_109);
lean_dec(x_2);
x_110 = l_Lean_Elab_Term_instInhabitedTermElabM(lean_box(0));
x_111 = lean_mk_string("Lean.Elab.StructInst");
x_112 = lean_mk_string("_private.Lean.Elab.StructInst.0.Lean.Elab.Term.StructInst.mkFieldMap");
x_113 = lean_unsigned_to_nat(403u);
x_114 = lean_unsigned_to_nat(11u);
x_115 = lean_mk_string("unreachable code has been reached");
x_116 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_111, x_112, x_113, x_114, x_115);
lean_dec(x_115);
lean_dec(x_112);
lean_dec(x_111);
x_117 = lean_panic_fn(x_110, x_116);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_118 = lean_apply_7(x_117, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_118) == 0)
{
lean_object* x_119; lean_object* x_120; 
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
lean_dec(x_118);
x_1 = x_119;
x_2 = x_109;
x_9 = x_120;
goto _start;
}
else
{
uint8_t x_122; 
lean_dec(x_109);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_122 = !lean_is_exclusive(x_118);
if (x_122 == 0)
{
return x_118;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_118, 0);
x_124 = lean_ctor_get(x_118, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_118);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
}
}
else
{
lean_object* x_126; 
x_126 = lean_ctor_get(x_12, 0);
lean_inc(x_126);
lean_dec(x_12);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_127 = lean_ctor_get(x_2, 1);
lean_inc(x_127);
lean_dec(x_2);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
lean_dec(x_126);
x_129 = l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__1(x_1, x_128);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_box(0);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_11);
lean_ctor_set(x_131, 1, x_130);
x_132 = l_Std_HashMapImp_insert___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__3(x_1, x_128, x_131);
x_1 = x_132;
x_2 = x_127;
goto _start;
}
else
{
lean_object* x_134; 
x_134 = lean_ctor_get(x_129, 0);
lean_inc(x_134);
lean_dec(x_129);
if (lean_obj_tag(x_134) == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_box(0);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_11);
lean_ctor_set(x_136, 1, x_135);
x_137 = l_Std_HashMapImp_insert___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__3(x_1, x_128, x_136);
x_1 = x_137;
x_2 = x_127;
goto _start;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; uint8_t x_142; 
x_139 = lean_ctor_get(x_134, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_134, 1);
lean_inc(x_140);
if (lean_is_exclusive(x_134)) {
 lean_ctor_release(x_134, 0);
 lean_ctor_release(x_134, 1);
 x_141 = x_134;
} else {
 lean_dec_ref(x_134);
 x_141 = lean_box(0);
}
x_142 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_11);
if (x_142 == 0)
{
uint8_t x_143; 
x_143 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_139);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
if (lean_is_scalar(x_141)) {
 x_144 = lean_alloc_ctor(1, 2, 0);
} else {
 x_144 = x_141;
}
lean_ctor_set(x_144, 0, x_139);
lean_ctor_set(x_144, 1, x_140);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_11);
lean_ctor_set(x_145, 1, x_144);
x_146 = l_Std_HashMapImp_insert___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__3(x_1, x_128, x_145);
x_1 = x_146;
x_2 = x_127;
goto _start;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_141);
lean_dec(x_140);
lean_dec(x_139);
lean_dec(x_127);
lean_dec(x_1);
x_148 = lean_ctor_get(x_11, 0);
lean_inc(x_148);
lean_dec(x_11);
x_149 = lean_mk_string("field '");
x_150 = l_Lean_stringToMessageData(x_149);
lean_dec(x_149);
x_151 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_151, 0, x_128);
x_152 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_151);
x_153 = lean_mk_string("' has already beed specified");
x_154 = l_Lean_stringToMessageData(x_153);
lean_dec(x_153);
x_155 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_155, 0, x_152);
lean_ctor_set(x_155, 1, x_154);
x_156 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__9(x_148, x_155, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_148);
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_156, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_156)) {
 lean_ctor_release(x_156, 0);
 lean_ctor_release(x_156, 1);
 x_159 = x_156;
} else {
 lean_dec_ref(x_156);
 x_159 = lean_box(0);
}
if (lean_is_scalar(x_159)) {
 x_160 = lean_alloc_ctor(1, 2, 0);
} else {
 x_160 = x_159;
}
lean_ctor_set(x_160, 0, x_157);
lean_ctor_set(x_160, 1, x_158);
return x_160;
}
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_dec(x_141);
lean_dec(x_140);
lean_dec(x_139);
lean_dec(x_127);
lean_dec(x_1);
x_161 = lean_ctor_get(x_11, 0);
lean_inc(x_161);
lean_dec(x_11);
x_162 = lean_mk_string("field '");
x_163 = l_Lean_stringToMessageData(x_162);
lean_dec(x_162);
x_164 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_164, 0, x_128);
x_165 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
x_166 = lean_mk_string("' has already beed specified");
x_167 = l_Lean_stringToMessageData(x_166);
lean_dec(x_166);
x_168 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_168, 0, x_165);
lean_ctor_set(x_168, 1, x_167);
x_169 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__9(x_161, x_168, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_161);
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_169, 1);
lean_inc(x_171);
if (lean_is_exclusive(x_169)) {
 lean_ctor_release(x_169, 0);
 lean_ctor_release(x_169, 1);
 x_172 = x_169;
} else {
 lean_dec_ref(x_169);
 x_172 = lean_box(0);
}
if (lean_is_scalar(x_172)) {
 x_173 = lean_alloc_ctor(1, 2, 0);
} else {
 x_173 = x_172;
}
lean_ctor_set(x_173, 0, x_170);
lean_ctor_set(x_173, 1, x_171);
return x_173;
}
}
}
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
lean_dec(x_126);
lean_dec(x_11);
lean_dec(x_1);
x_174 = lean_ctor_get(x_2, 1);
lean_inc(x_174);
lean_dec(x_2);
x_175 = l_Lean_Elab_Term_instInhabitedTermElabM(lean_box(0));
x_176 = lean_mk_string("Lean.Elab.StructInst");
x_177 = lean_mk_string("_private.Lean.Elab.StructInst.0.Lean.Elab.Term.StructInst.mkFieldMap");
x_178 = lean_unsigned_to_nat(403u);
x_179 = lean_unsigned_to_nat(11u);
x_180 = lean_mk_string("unreachable code has been reached");
x_181 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_176, x_177, x_178, x_179, x_180);
lean_dec(x_180);
lean_dec(x_177);
lean_dec(x_176);
x_182 = lean_panic_fn(x_175, x_181);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_183 = lean_apply_7(x_182, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_183) == 0)
{
lean_object* x_184; lean_object* x_185; 
x_184 = lean_ctor_get(x_183, 0);
lean_inc(x_184);
x_185 = lean_ctor_get(x_183, 1);
lean_inc(x_185);
lean_dec(x_183);
x_1 = x_184;
x_2 = x_174;
x_9 = x_185;
goto _start;
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
lean_dec(x_174);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_187 = lean_ctor_get(x_183, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_183, 1);
lean_inc(x_188);
if (lean_is_exclusive(x_183)) {
 lean_ctor_release(x_183, 0);
 lean_ctor_release(x_183, 1);
 x_189 = x_183;
} else {
 lean_dec_ref(x_183);
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
}
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(8u);
x_10 = l_Std_mkHashMapImp___rarg(x_9);
x_11 = l_List_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__12(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l_Std_AssocList_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_find_x3f___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_AssocList_contains___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f(lean_object* x_1) {
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
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = l_Lean_Elab_Term_StructInst_Field_isSimple___rarg(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; 
lean_inc(x_4);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_4);
return x_7;
}
}
else
{
lean_object* x_8; 
x_8 = lean_box(0);
return x_8;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
uint8_t l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_name_eq(x_2, x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_3);
x_11 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___lambda__1___boxed), 2, 1);
lean_closure_set(x_11, 0, x_3);
x_12 = lean_array_get_size(x_2);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_findIdx_x3f_loop___rarg(x_2, x_11, x_12, x_13, lean_box(0));
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_15 = lean_mk_string("field '");
x_16 = l_Lean_stringToMessageData(x_15);
lean_dec(x_15);
x_17 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_17, 0, x_3);
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_mk_string("' is not a valid field of '");
x_20 = l_Lean_stringToMessageData(x_19);
lean_dec(x_19);
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_22, 0, x_1);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_mk_string("'");
x_25 = l_Lean_stringToMessageData(x_24);
lean_dec(x_24);
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_throwError___at_Lean_Elab_Term_elabNumLit___spec__2(x_26, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_28 = lean_ctor_get(x_14, 0);
lean_inc(x_28);
lean_dec(x_14);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_10);
return x_29;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_11;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkProjStx(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_3 = lean_box(0);
x_4 = lean_mk_string("Lean");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Parser");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Term");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("proj");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_mk_string(".");
x_13 = l_Lean_mkAtomFrom(x_1, x_12);
x_14 = l_Lean_mkIdentFrom(x_1, x_2);
x_15 = lean_unsigned_to_nat(3u);
x_16 = lean_mk_empty_array_with_capacity(x_15);
x_17 = lean_array_push(x_16, x_1);
x_18 = lean_array_push(x_17, x_13);
x_19 = lean_array_push(x_18, x_14);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_11);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 2)
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_4) == 2)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_4);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_3);
lean_inc(x_1);
x_15 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx(x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = l_Lean_mkProj(x_1, x_17, x_14);
if (lean_obj_tag(x_13) == 1)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_13);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_13, 1);
x_21 = lean_array_get_size(x_20);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_nat_dec_lt(x_22, x_21);
lean_dec(x_21);
if (x_23 == 0)
{
lean_dec(x_3);
lean_ctor_set(x_4, 1, x_18);
lean_ctor_set(x_15, 0, x_4);
return x_15;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_array_fget(x_20, x_22);
x_25 = lean_box(0);
x_26 = lean_array_fset(x_20, x_22, x_25);
x_27 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkProjStx(x_24, x_3);
x_28 = lean_array_fset(x_26, x_22, x_27);
lean_ctor_set(x_13, 1, x_28);
lean_ctor_set(x_4, 1, x_18);
lean_ctor_set(x_15, 0, x_4);
return x_15;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_13, 0);
x_30 = lean_ctor_get(x_13, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_13);
x_31 = lean_array_get_size(x_30);
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_nat_dec_lt(x_32, x_31);
lean_dec(x_31);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_3);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_30);
lean_ctor_set(x_4, 1, x_18);
lean_ctor_set(x_4, 0, x_34);
lean_ctor_set(x_15, 0, x_4);
return x_15;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_array_fget(x_30, x_32);
x_36 = lean_box(0);
x_37 = lean_array_fset(x_30, x_32, x_36);
x_38 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkProjStx(x_35, x_3);
x_39 = lean_array_fset(x_37, x_32, x_38);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_29);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_4, 1, x_18);
lean_ctor_set(x_4, 0, x_40);
lean_ctor_set(x_15, 0, x_4);
return x_15;
}
}
}
else
{
lean_dec(x_3);
lean_ctor_set(x_4, 1, x_18);
lean_ctor_set(x_15, 0, x_4);
return x_15;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_15, 0);
x_42 = lean_ctor_get(x_15, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_15);
x_43 = l_Lean_mkProj(x_1, x_41, x_14);
if (lean_obj_tag(x_13) == 1)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_44 = lean_ctor_get(x_13, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_13, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 x_46 = x_13;
} else {
 lean_dec_ref(x_13);
 x_46 = lean_box(0);
}
x_47 = lean_array_get_size(x_45);
x_48 = lean_unsigned_to_nat(0u);
x_49 = lean_nat_dec_lt(x_48, x_47);
lean_dec(x_47);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_3);
if (lean_is_scalar(x_46)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_46;
}
lean_ctor_set(x_50, 0, x_44);
lean_ctor_set(x_50, 1, x_45);
lean_ctor_set(x_4, 1, x_43);
lean_ctor_set(x_4, 0, x_50);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_4);
lean_ctor_set(x_51, 1, x_42);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_52 = lean_array_fget(x_45, x_48);
x_53 = lean_box(0);
x_54 = lean_array_fset(x_45, x_48, x_53);
x_55 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkProjStx(x_52, x_3);
x_56 = lean_array_fset(x_54, x_48, x_55);
if (lean_is_scalar(x_46)) {
 x_57 = lean_alloc_ctor(1, 2, 0);
} else {
 x_57 = x_46;
}
lean_ctor_set(x_57, 0, x_44);
lean_ctor_set(x_57, 1, x_56);
lean_ctor_set(x_4, 1, x_43);
lean_ctor_set(x_4, 0, x_57);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_4);
lean_ctor_set(x_58, 1, x_42);
return x_58;
}
}
else
{
lean_object* x_59; 
lean_dec(x_3);
lean_ctor_set(x_4, 1, x_43);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_4);
lean_ctor_set(x_59, 1, x_42);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_free_object(x_4);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_15);
if (x_60 == 0)
{
return x_15;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_15, 0);
x_62 = lean_ctor_get(x_15, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_15);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_4, 0);
x_65 = lean_ctor_get(x_4, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_66 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getFieldIdx(x_1, x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_69 = x_66;
} else {
 lean_dec_ref(x_66);
 x_69 = lean_box(0);
}
x_70 = l_Lean_mkProj(x_1, x_67, x_65);
if (lean_obj_tag(x_64) == 1)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_71 = lean_ctor_get(x_64, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_64, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_73 = x_64;
} else {
 lean_dec_ref(x_64);
 x_73 = lean_box(0);
}
x_74 = lean_array_get_size(x_72);
x_75 = lean_unsigned_to_nat(0u);
x_76 = lean_nat_dec_lt(x_75, x_74);
lean_dec(x_74);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_3);
if (lean_is_scalar(x_73)) {
 x_77 = lean_alloc_ctor(1, 2, 0);
} else {
 x_77 = x_73;
}
lean_ctor_set(x_77, 0, x_71);
lean_ctor_set(x_77, 1, x_72);
x_78 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_70);
if (lean_is_scalar(x_69)) {
 x_79 = lean_alloc_ctor(0, 2, 0);
} else {
 x_79 = x_69;
}
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_68);
return x_79;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_80 = lean_array_fget(x_72, x_75);
x_81 = lean_box(0);
x_82 = lean_array_fset(x_72, x_75, x_81);
x_83 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkProjStx(x_80, x_3);
x_84 = lean_array_fset(x_82, x_75, x_83);
if (lean_is_scalar(x_73)) {
 x_85 = lean_alloc_ctor(1, 2, 0);
} else {
 x_85 = x_73;
}
lean_ctor_set(x_85, 0, x_71);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_70);
if (lean_is_scalar(x_69)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_69;
}
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_68);
return x_87;
}
}
else
{
lean_object* x_88; lean_object* x_89; 
lean_dec(x_3);
x_88 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_88, 0, x_64);
lean_ctor_set(x_88, 1, x_70);
if (lean_is_scalar(x_69)) {
 x_89 = lean_alloc_ctor(0, 2, 0);
} else {
 x_89 = x_69;
}
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_68);
return x_89;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_3);
lean_dec(x_1);
x_90 = lean_ctor_get(x_66, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_66, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 x_92 = x_66;
} else {
 lean_dec_ref(x_66);
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
}
else
{
lean_object* x_94; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_4);
lean_ctor_set(x_94, 1, x_11);
return x_94;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__3___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = l_List_tail_x21___rarg(x_3);
lean_dec(x_3);
lean_ctor_set(x_1, 1, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 2);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_9 = l_List_tail_x21___rarg(x_6);
lean_dec(x_6);
x_10 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_9);
lean_ctor_set(x_10, 2, x_7);
lean_ctor_set(x_10, 3, x_8);
return x_10;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_Lean_Elab_Term_StructInst_Field_toSyntax(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_mk_empty_array_with_capacity(x_4);
x_6 = lean_array_push(x_5, x_3);
x_7 = lean_array_push(x_6, x_1);
x_8 = l_Lean_nullKind;
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_7, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_7, 1);
lean_inc(x_16);
lean_dec(x_7);
x_17 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f(x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__1), 1, 0);
lean_inc(x_16);
x_19 = l_List_map___rarg(x_18, x_16);
x_20 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_inc(x_8);
lean_inc(x_15);
lean_inc(x_2);
x_21 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource(x_2, x_3, x_15, x_20, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
x_25 = l_Lean_Elab_Term_StructInst_instInhabitedField(lean_box(0));
x_26 = l_List_head_x21___rarg(x_25, x_16);
lean_dec(x_16);
x_27 = l_Lean_isSubobjectField_x3f(x_4, x_2, x_15);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; size_t x_39; size_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
x_28 = lean_unsigned_to_nat(0u);
x_29 = lean_mk_empty_array_with_capacity(x_28);
x_30 = l_Lean_nullKind;
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
x_32 = lean_unsigned_to_nat(4u);
lean_inc(x_31);
x_33 = l_Lean_Syntax_setArg(x_5, x_32, x_31);
x_34 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__2), 2, 1);
lean_closure_set(x_34, 0, x_31);
x_35 = l_List_redLength___rarg(x_19);
x_36 = lean_mk_empty_array_with_capacity(x_35);
lean_dec(x_35);
x_37 = l_List_toArrayAux___rarg(x_19, x_36);
x_38 = lean_array_get_size(x_37);
x_39 = lean_usize_of_nat(x_38);
lean_dec(x_38);
x_40 = 0;
x_41 = x_37;
x_42 = l_Id_instMonadId;
x_43 = l_Array_mapMUnsafe_map___rarg(x_42, x_34, x_39, x_40, x_41);
x_44 = x_43;
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_30);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_unsigned_to_nat(2u);
x_47 = l_Lean_Syntax_setArg(x_33, x_46, x_45);
x_48 = l_Lean_Elab_Term_StructInst_setStructSourceSyntax(x_47, x_23);
x_49 = !lean_is_exclusive(x_26);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_50 = lean_ctor_get(x_26, 1);
x_51 = lean_ctor_get(x_26, 2);
lean_dec(x_51);
x_52 = l_Lean_Elab_Term_StructInst_instInhabitedFieldLHS;
x_53 = l_List_head_x21___rarg(x_52, x_50);
lean_dec(x_50);
x_54 = lean_box(0);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_48);
lean_ctor_set(x_26, 2, x_56);
lean_ctor_set(x_26, 1, x_55);
lean_ctor_set(x_21, 0, x_26);
return x_21;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_57 = lean_ctor_get(x_26, 0);
x_58 = lean_ctor_get(x_26, 1);
x_59 = lean_ctor_get(x_26, 3);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_26);
x_60 = l_Lean_Elab_Term_StructInst_instInhabitedFieldLHS;
x_61 = l_List_head_x21___rarg(x_60, x_58);
lean_dec(x_58);
x_62 = lean_box(0);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_64, 0, x_48);
x_65 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_65, 0, x_57);
lean_ctor_set(x_65, 1, x_63);
lean_ctor_set(x_65, 2, x_64);
lean_ctor_set(x_65, 3, x_59);
lean_ctor_set(x_21, 0, x_65);
return x_21;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_free_object(x_21);
x_66 = lean_ctor_get(x_27, 0);
lean_inc(x_66);
lean_dec(x_27);
x_67 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_67, 0, x_5);
lean_ctor_set(x_67, 1, x_66);
lean_ctor_set(x_67, 2, x_19);
lean_ctor_set(x_67, 3, x_23);
x_68 = lean_apply_8(x_6, x_67, x_8, x_9, x_10, x_11, x_12, x_13, x_24);
if (lean_obj_tag(x_68) == 0)
{
uint8_t x_69; 
x_69 = !lean_is_exclusive(x_68);
if (x_69 == 0)
{
uint8_t x_70; 
x_70 = !lean_is_exclusive(x_26);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_68, 0);
x_72 = lean_ctor_get(x_26, 1);
x_73 = lean_ctor_get(x_26, 2);
lean_dec(x_73);
x_74 = l_Lean_Elab_Term_StructInst_instInhabitedFieldLHS;
x_75 = l_List_head_x21___rarg(x_74, x_72);
lean_dec(x_72);
x_76 = lean_box(0);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_78, 0, x_71);
lean_ctor_set(x_26, 2, x_78);
lean_ctor_set(x_26, 1, x_77);
lean_ctor_set(x_68, 0, x_26);
return x_68;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_79 = lean_ctor_get(x_68, 0);
x_80 = lean_ctor_get(x_26, 0);
x_81 = lean_ctor_get(x_26, 1);
x_82 = lean_ctor_get(x_26, 3);
lean_inc(x_82);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_26);
x_83 = l_Lean_Elab_Term_StructInst_instInhabitedFieldLHS;
x_84 = l_List_head_x21___rarg(x_83, x_81);
lean_dec(x_81);
x_85 = lean_box(0);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_87, 0, x_79);
x_88 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_88, 0, x_80);
lean_ctor_set(x_88, 1, x_86);
lean_ctor_set(x_88, 2, x_87);
lean_ctor_set(x_88, 3, x_82);
lean_ctor_set(x_68, 0, x_88);
return x_68;
}
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_89 = lean_ctor_get(x_68, 0);
x_90 = lean_ctor_get(x_68, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_68);
x_91 = lean_ctor_get(x_26, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_26, 1);
lean_inc(x_92);
x_93 = lean_ctor_get(x_26, 3);
lean_inc(x_93);
if (lean_is_exclusive(x_26)) {
 lean_ctor_release(x_26, 0);
 lean_ctor_release(x_26, 1);
 lean_ctor_release(x_26, 2);
 lean_ctor_release(x_26, 3);
 x_94 = x_26;
} else {
 lean_dec_ref(x_26);
 x_94 = lean_box(0);
}
x_95 = l_Lean_Elab_Term_StructInst_instInhabitedFieldLHS;
x_96 = l_List_head_x21___rarg(x_95, x_92);
lean_dec(x_92);
x_97 = lean_box(0);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_99, 0, x_89);
if (lean_is_scalar(x_94)) {
 x_100 = lean_alloc_ctor(0, 4, 0);
} else {
 x_100 = x_94;
}
lean_ctor_set(x_100, 0, x_91);
lean_ctor_set(x_100, 1, x_98);
lean_ctor_set(x_100, 2, x_99);
lean_ctor_set(x_100, 3, x_93);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_90);
return x_101;
}
}
else
{
uint8_t x_102; 
lean_dec(x_26);
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
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_106 = lean_ctor_get(x_21, 0);
x_107 = lean_ctor_get(x_21, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_21);
x_108 = l_Lean_Elab_Term_StructInst_instInhabitedField(lean_box(0));
x_109 = l_List_head_x21___rarg(x_108, x_16);
lean_dec(x_16);
x_110 = l_Lean_isSubobjectField_x3f(x_4, x_2, x_15);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; size_t x_122; size_t x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
x_111 = lean_unsigned_to_nat(0u);
x_112 = lean_mk_empty_array_with_capacity(x_111);
x_113 = l_Lean_nullKind;
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_112);
x_115 = lean_unsigned_to_nat(4u);
lean_inc(x_114);
x_116 = l_Lean_Syntax_setArg(x_5, x_115, x_114);
x_117 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__2), 2, 1);
lean_closure_set(x_117, 0, x_114);
x_118 = l_List_redLength___rarg(x_19);
x_119 = lean_mk_empty_array_with_capacity(x_118);
lean_dec(x_118);
x_120 = l_List_toArrayAux___rarg(x_19, x_119);
x_121 = lean_array_get_size(x_120);
x_122 = lean_usize_of_nat(x_121);
lean_dec(x_121);
x_123 = 0;
x_124 = x_120;
x_125 = l_Id_instMonadId;
x_126 = l_Array_mapMUnsafe_map___rarg(x_125, x_117, x_122, x_123, x_124);
x_127 = x_126;
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_113);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_unsigned_to_nat(2u);
x_130 = l_Lean_Syntax_setArg(x_116, x_129, x_128);
x_131 = l_Lean_Elab_Term_StructInst_setStructSourceSyntax(x_130, x_106);
x_132 = lean_ctor_get(x_109, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_109, 1);
lean_inc(x_133);
x_134 = lean_ctor_get(x_109, 3);
lean_inc(x_134);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 lean_ctor_release(x_109, 2);
 lean_ctor_release(x_109, 3);
 x_135 = x_109;
} else {
 lean_dec_ref(x_109);
 x_135 = lean_box(0);
}
x_136 = l_Lean_Elab_Term_StructInst_instInhabitedFieldLHS;
x_137 = l_List_head_x21___rarg(x_136, x_133);
lean_dec(x_133);
x_138 = lean_box(0);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_137);
lean_ctor_set(x_139, 1, x_138);
x_140 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_140, 0, x_131);
if (lean_is_scalar(x_135)) {
 x_141 = lean_alloc_ctor(0, 4, 0);
} else {
 x_141 = x_135;
}
lean_ctor_set(x_141, 0, x_132);
lean_ctor_set(x_141, 1, x_139);
lean_ctor_set(x_141, 2, x_140);
lean_ctor_set(x_141, 3, x_134);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_107);
return x_142;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_143 = lean_ctor_get(x_110, 0);
lean_inc(x_143);
lean_dec(x_110);
x_144 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_144, 0, x_5);
lean_ctor_set(x_144, 1, x_143);
lean_ctor_set(x_144, 2, x_19);
lean_ctor_set(x_144, 3, x_106);
x_145 = lean_apply_8(x_6, x_144, x_8, x_9, x_10, x_11, x_12, x_13, x_107);
if (lean_obj_tag(x_145) == 0)
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
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
x_149 = lean_ctor_get(x_109, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_109, 1);
lean_inc(x_150);
x_151 = lean_ctor_get(x_109, 3);
lean_inc(x_151);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 lean_ctor_release(x_109, 2);
 lean_ctor_release(x_109, 3);
 x_152 = x_109;
} else {
 lean_dec_ref(x_109);
 x_152 = lean_box(0);
}
x_153 = l_Lean_Elab_Term_StructInst_instInhabitedFieldLHS;
x_154 = l_List_head_x21___rarg(x_153, x_150);
lean_dec(x_150);
x_155 = lean_box(0);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
x_157 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_157, 0, x_146);
if (lean_is_scalar(x_152)) {
 x_158 = lean_alloc_ctor(0, 4, 0);
} else {
 x_158 = x_152;
}
lean_ctor_set(x_158, 0, x_149);
lean_ctor_set(x_158, 1, x_156);
lean_ctor_set(x_158, 2, x_157);
lean_ctor_set(x_158, 3, x_151);
if (lean_is_scalar(x_148)) {
 x_159 = lean_alloc_ctor(0, 2, 0);
} else {
 x_159 = x_148;
}
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_147);
return x_159;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
lean_dec(x_109);
x_160 = lean_ctor_get(x_145, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_145, 1);
lean_inc(x_161);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_162 = x_145;
} else {
 lean_dec_ref(x_145);
 x_162 = lean_box(0);
}
if (lean_is_scalar(x_162)) {
 x_163 = lean_alloc_ctor(1, 2, 0);
} else {
 x_163 = x_162;
}
lean_ctor_set(x_163, 0, x_160);
lean_ctor_set(x_163, 1, x_161);
return x_163;
}
}
}
}
else
{
uint8_t x_164; 
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_15);
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
x_164 = !lean_is_exclusive(x_21);
if (x_164 == 0)
{
return x_21;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_165 = lean_ctor_get(x_21, 0);
x_166 = lean_ctor_get(x_21, 1);
lean_inc(x_166);
lean_inc(x_165);
lean_dec(x_21);
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
}
else
{
lean_object* x_168; lean_object* x_169; 
lean_dec(x_16);
lean_dec(x_15);
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
x_168 = lean_ctor_get(x_17, 0);
lean_inc(x_168);
lean_dec(x_17);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_14);
return x_169;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_16 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap(x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___boxed), 14, 6);
lean_closure_set(x_19, 0, x_1);
lean_closure_set(x_19, 1, x_2);
lean_closure_set(x_19, 2, x_3);
lean_closure_set(x_19, 3, x_4);
lean_closure_set(x_19, 4, x_5);
lean_closure_set(x_19, 5, x_6);
x_20 = l_Std_HashMap_toList___rarg(x_17);
lean_dec(x_17);
x_21 = l_List_mapM___rarg(x_7, lean_box(0), lean_box(0), x_19, x_20);
x_22 = lean_apply_7(x_21, x_9, x_10, x_11, x_12, x_13, x_14, x_18);
return x_22;
}
else
{
uint8_t x_23; 
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
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_16);
if (x_23 == 0)
{
return x_16;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_16, 0);
x_25 = lean_ctor_get(x_16, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_16);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_10 = l_EStateM_instMonadEStateM(lean_box(0), lean_box(0));
x_11 = l_ReaderT_instMonadReaderT___rarg(x_10);
x_12 = l_ReaderT_instMonadReaderT___rarg(x_11);
x_13 = l_ReaderT_instMonadReaderT___rarg(x_12);
x_14 = l_ReaderT_instMonadReaderT___rarg(x_13);
x_15 = l_ReaderT_instMonadReaderT___rarg(x_14);
x_16 = l_ReaderT_instMonadReaderT___rarg(x_15);
x_17 = lean_st_ref_get(x_8, x_9);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_Term_StructInst_Struct_structName(x_2);
lean_inc(x_21);
lean_inc(x_20);
x_22 = l_Lean_getStructureFields(x_20, x_21);
x_23 = l_Lean_Elab_Term_StructInst_Struct_ref(x_2);
lean_inc(x_16);
lean_inc(x_23);
lean_inc(x_2);
x_24 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__4), 15, 7);
lean_closure_set(x_24, 0, x_2);
lean_closure_set(x_24, 1, x_21);
lean_closure_set(x_24, 2, x_22);
lean_closure_set(x_24, 3, x_20);
lean_closure_set(x_24, 4, x_23);
lean_closure_set(x_24, 5, x_1);
lean_closure_set(x_24, 6, x_16);
x_25 = !lean_is_exclusive(x_7);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_7, 3);
x_27 = l_Lean_replaceRef(x_23, x_26);
lean_dec(x_26);
lean_dec(x_23);
lean_ctor_set(x_7, 3, x_27);
x_28 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg(x_16, x_2, x_24);
x_29 = lean_apply_7(x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_30 = lean_ctor_get(x_7, 0);
x_31 = lean_ctor_get(x_7, 1);
x_32 = lean_ctor_get(x_7, 2);
x_33 = lean_ctor_get(x_7, 3);
x_34 = lean_ctor_get(x_7, 4);
x_35 = lean_ctor_get(x_7, 5);
x_36 = lean_ctor_get(x_7, 6);
x_37 = lean_ctor_get(x_7, 7);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_7);
x_38 = l_Lean_replaceRef(x_23, x_33);
lean_dec(x_33);
lean_dec(x_23);
x_39 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_39, 0, x_30);
lean_ctor_set(x_39, 1, x_31);
lean_ctor_set(x_39, 2, x_32);
lean_ctor_set(x_39, 3, x_38);
lean_ctor_set(x_39, 4, x_34);
lean_ctor_set(x_39, 5, x_35);
lean_ctor_set(x_39, 6, x_36);
lean_ctor_set(x_39, 7, x_37);
x_40 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___rarg(x_16, x_2, x_24);
x_41 = lean_apply_7(x_40, x_3, x_4, x_5, x_6, x_39, x_8, x_19);
return x_41;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_3);
lean_dec(x_1);
return x_15;
}
}
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
else
{
lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_2);
x_11 = lean_apply_1(x_3, x_1);
return x_11;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_findField_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 0);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_3, 1);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_5, 1);
x_8 = lean_name_eq(x_7, x_1);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = 0;
return x_9;
}
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
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_List_find_x3f___rarg(x_3, x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Elab_Term_StructInst_findField_x3f___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; 
x_16 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
lean_inc(x_8);
x_17 = l_Lean_Elab_Term_StructInst_findField_x3f(x_16, x_8);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
lean_inc(x_8);
lean_inc(x_3);
x_18 = l_Lean_isSubobjectField_x3f(x_2, x_3, x_8);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
x_19 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
switch (lean_obj_tag(x_19)) {
case 0:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_20 = lean_box(2);
lean_inc(x_4);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_4);
lean_ctor_set(x_21, 1, x_8);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_4);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set(x_25, 2, x_20);
lean_ctor_set(x_25, 3, x_24);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_7);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_15);
return x_27;
}
case 1:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_19);
x_28 = l_Lean_mkHole(x_4);
x_29 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_29, 0, x_28);
lean_inc(x_4);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_4);
lean_ctor_set(x_30, 1, x_8);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_34, 0, x_4);
lean_ctor_set(x_34, 1, x_32);
lean_ctor_set(x_34, 2, x_29);
lean_ctor_set(x_34, 3, x_33);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_7);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_15);
return x_36;
}
default: 
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_37 = lean_ctor_get(x_19, 0);
lean_inc(x_37);
lean_dec(x_19);
x_38 = lean_unsigned_to_nat(0u);
x_39 = l_Lean_Syntax_getArg(x_37, x_38);
lean_dec(x_37);
lean_inc(x_8);
x_40 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkProjStx(x_39, x_8);
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_40);
lean_inc(x_4);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_4);
lean_ctor_set(x_42, 1, x_8);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_box(0);
x_46 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_46, 0, x_4);
lean_ctor_set(x_46, 1, x_44);
lean_ctor_set(x_46, 2, x_41);
lean_ctor_set(x_46, 3, x_45);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_7);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_15);
return x_48;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_18, 0);
lean_inc(x_49);
lean_dec(x_18);
x_50 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_inc(x_9);
lean_inc(x_8);
x_51 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource(x_3, x_5, x_8, x_50, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = lean_box(0);
lean_inc(x_4);
x_55 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_55, 0, x_4);
lean_ctor_set(x_55, 1, x_49);
lean_ctor_set(x_55, 2, x_54);
lean_ctor_set(x_55, 3, x_52);
x_56 = lean_apply_8(x_6, x_55, x_9, x_10, x_11, x_12, x_13, x_14, x_53);
if (lean_obj_tag(x_56) == 0)
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_58 = lean_ctor_get(x_56, 0);
x_59 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_59, 0, x_58);
lean_inc(x_4);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_4);
lean_ctor_set(x_60, 1, x_8);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_54);
x_62 = lean_box(0);
x_63 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_63, 0, x_4);
lean_ctor_set(x_63, 1, x_61);
lean_ctor_set(x_63, 2, x_59);
lean_ctor_set(x_63, 3, x_62);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_7);
lean_ctor_set(x_56, 0, x_64);
return x_56;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_65 = lean_ctor_get(x_56, 0);
x_66 = lean_ctor_get(x_56, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_56);
x_67 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_67, 0, x_65);
lean_inc(x_4);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_8);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_54);
x_70 = lean_box(0);
x_71 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_71, 0, x_4);
lean_ctor_set(x_71, 1, x_69);
lean_ctor_set(x_71, 2, x_67);
lean_ctor_set(x_71, 3, x_70);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_7);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_66);
return x_73;
}
}
else
{
uint8_t x_74; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
x_74 = !lean_is_exclusive(x_56);
if (x_74 == 0)
{
return x_56;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_56, 0);
x_76 = lean_ctor_get(x_56, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_56);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_49);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_78 = !lean_is_exclusive(x_51);
if (x_78 == 0)
{
return x_51;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_51, 0);
x_80 = lean_ctor_get(x_51, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_51);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_14);
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
x_82 = lean_ctor_get(x_17, 0);
lean_inc(x_82);
lean_dec(x_17);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_7);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_15);
return x_84;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_10 = l_EStateM_instMonadEStateM(lean_box(0), lean_box(0));
x_11 = l_ReaderT_instMonadReaderT___rarg(x_10);
x_12 = l_ReaderT_instMonadReaderT___rarg(x_11);
x_13 = l_ReaderT_instMonadReaderT___rarg(x_12);
x_14 = l_ReaderT_instMonadReaderT___rarg(x_13);
x_15 = l_ReaderT_instMonadReaderT___rarg(x_14);
x_16 = l_ReaderT_instMonadReaderT___rarg(x_15);
x_17 = lean_st_ref_get(x_8, x_9);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Elab_Term_StructInst_Struct_structName(x_2);
lean_inc(x_22);
lean_inc(x_21);
x_23 = l_Lean_getStructureFields(x_21, x_22);
x_24 = l_Lean_Elab_Term_StructInst_Struct_ref(x_2);
lean_inc(x_23);
lean_inc(x_24);
lean_inc(x_2);
x_25 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___lambda__1___boxed), 15, 6);
lean_closure_set(x_25, 0, x_2);
lean_closure_set(x_25, 1, x_21);
lean_closure_set(x_25, 2, x_22);
lean_closure_set(x_25, 3, x_24);
lean_closure_set(x_25, 4, x_23);
lean_closure_set(x_25, 5, x_1);
x_26 = lean_box(0);
x_27 = lean_array_get_size(x_23);
x_28 = lean_unsigned_to_nat(0u);
x_29 = lean_nat_dec_lt(x_28, x_27);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_30 = l_List_reverse___rarg(x_26);
x_31 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_2, x_30);
lean_ctor_set(x_17, 0, x_31);
return x_17;
}
else
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_7);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_7, 3);
x_34 = l_Lean_replaceRef(x_24, x_33);
lean_dec(x_33);
lean_dec(x_24);
lean_ctor_set(x_7, 3, x_34);
x_35 = lean_nat_dec_le(x_27, x_27);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_7);
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_36 = l_List_reverse___rarg(x_26);
x_37 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_2, x_36);
lean_ctor_set(x_17, 0, x_37);
return x_17;
}
else
{
size_t x_38; size_t x_39; lean_object* x_40; lean_object* x_41; 
lean_free_object(x_17);
x_38 = 0;
x_39 = lean_usize_of_nat(x_27);
lean_dec(x_27);
x_40 = l_Array_foldlMUnsafe_fold___rarg(x_16, x_25, x_23, x_38, x_39, x_26);
x_41 = lean_apply_7(x_40, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_41, 0);
x_44 = l_List_reverse___rarg(x_43);
x_45 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_2, x_44);
lean_ctor_set(x_41, 0, x_45);
return x_41;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_41, 0);
x_47 = lean_ctor_get(x_41, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_41);
x_48 = l_List_reverse___rarg(x_46);
x_49 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_2, x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_47);
return x_50;
}
}
else
{
uint8_t x_51; 
lean_dec(x_2);
x_51 = !lean_is_exclusive(x_41);
if (x_51 == 0)
{
return x_41;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_41, 0);
x_53 = lean_ctor_get(x_41, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_41);
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
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_55 = lean_ctor_get(x_7, 0);
x_56 = lean_ctor_get(x_7, 1);
x_57 = lean_ctor_get(x_7, 2);
x_58 = lean_ctor_get(x_7, 3);
x_59 = lean_ctor_get(x_7, 4);
x_60 = lean_ctor_get(x_7, 5);
x_61 = lean_ctor_get(x_7, 6);
x_62 = lean_ctor_get(x_7, 7);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_7);
x_63 = l_Lean_replaceRef(x_24, x_58);
lean_dec(x_58);
lean_dec(x_24);
x_64 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_64, 0, x_55);
lean_ctor_set(x_64, 1, x_56);
lean_ctor_set(x_64, 2, x_57);
lean_ctor_set(x_64, 3, x_63);
lean_ctor_set(x_64, 4, x_59);
lean_ctor_set(x_64, 5, x_60);
lean_ctor_set(x_64, 6, x_61);
lean_ctor_set(x_64, 7, x_62);
x_65 = lean_nat_dec_le(x_27, x_27);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; 
lean_dec(x_64);
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_66 = l_List_reverse___rarg(x_26);
x_67 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_2, x_66);
lean_ctor_set(x_17, 0, x_67);
return x_17;
}
else
{
size_t x_68; size_t x_69; lean_object* x_70; lean_object* x_71; 
lean_free_object(x_17);
x_68 = 0;
x_69 = lean_usize_of_nat(x_27);
lean_dec(x_27);
x_70 = l_Array_foldlMUnsafe_fold___rarg(x_16, x_25, x_23, x_68, x_69, x_26);
x_71 = lean_apply_7(x_70, x_3, x_4, x_5, x_6, x_64, x_8, x_20);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_74 = x_71;
} else {
 lean_dec_ref(x_71);
 x_74 = lean_box(0);
}
x_75 = l_List_reverse___rarg(x_72);
x_76 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_2, x_75);
if (lean_is_scalar(x_74)) {
 x_77 = lean_alloc_ctor(0, 2, 0);
} else {
 x_77 = x_74;
}
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_73);
return x_77;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_2);
x_78 = lean_ctor_get(x_71, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_71, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_80 = x_71;
} else {
 lean_dec_ref(x_71);
 x_80 = lean_box(0);
}
if (lean_is_scalar(x_80)) {
 x_81 = lean_alloc_ctor(1, 2, 0);
} else {
 x_81 = x_80;
}
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
}
}
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; 
x_82 = lean_ctor_get(x_17, 0);
x_83 = lean_ctor_get(x_17, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_17);
x_84 = lean_ctor_get(x_82, 0);
lean_inc(x_84);
lean_dec(x_82);
x_85 = l_Lean_Elab_Term_StructInst_Struct_structName(x_2);
lean_inc(x_85);
lean_inc(x_84);
x_86 = l_Lean_getStructureFields(x_84, x_85);
x_87 = l_Lean_Elab_Term_StructInst_Struct_ref(x_2);
lean_inc(x_86);
lean_inc(x_87);
lean_inc(x_2);
x_88 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___lambda__1___boxed), 15, 6);
lean_closure_set(x_88, 0, x_2);
lean_closure_set(x_88, 1, x_84);
lean_closure_set(x_88, 2, x_85);
lean_closure_set(x_88, 3, x_87);
lean_closure_set(x_88, 4, x_86);
lean_closure_set(x_88, 5, x_1);
x_89 = lean_box(0);
x_90 = lean_array_get_size(x_86);
x_91 = lean_unsigned_to_nat(0u);
x_92 = lean_nat_dec_lt(x_91, x_90);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_90);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_93 = l_List_reverse___rarg(x_89);
x_94 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_2, x_93);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_83);
return x_95;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_96 = lean_ctor_get(x_7, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_7, 1);
lean_inc(x_97);
x_98 = lean_ctor_get(x_7, 2);
lean_inc(x_98);
x_99 = lean_ctor_get(x_7, 3);
lean_inc(x_99);
x_100 = lean_ctor_get(x_7, 4);
lean_inc(x_100);
x_101 = lean_ctor_get(x_7, 5);
lean_inc(x_101);
x_102 = lean_ctor_get(x_7, 6);
lean_inc(x_102);
x_103 = lean_ctor_get(x_7, 7);
lean_inc(x_103);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 lean_ctor_release(x_7, 5);
 lean_ctor_release(x_7, 6);
 lean_ctor_release(x_7, 7);
 x_104 = x_7;
} else {
 lean_dec_ref(x_7);
 x_104 = lean_box(0);
}
x_105 = l_Lean_replaceRef(x_87, x_99);
lean_dec(x_99);
lean_dec(x_87);
if (lean_is_scalar(x_104)) {
 x_106 = lean_alloc_ctor(0, 8, 0);
} else {
 x_106 = x_104;
}
lean_ctor_set(x_106, 0, x_96);
lean_ctor_set(x_106, 1, x_97);
lean_ctor_set(x_106, 2, x_98);
lean_ctor_set(x_106, 3, x_105);
lean_ctor_set(x_106, 4, x_100);
lean_ctor_set(x_106, 5, x_101);
lean_ctor_set(x_106, 6, x_102);
lean_ctor_set(x_106, 7, x_103);
x_107 = lean_nat_dec_le(x_90, x_90);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_106);
lean_dec(x_90);
lean_dec(x_88);
lean_dec(x_86);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_108 = l_List_reverse___rarg(x_89);
x_109 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_2, x_108);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_83);
return x_110;
}
else
{
size_t x_111; size_t x_112; lean_object* x_113; lean_object* x_114; 
x_111 = 0;
x_112 = lean_usize_of_nat(x_90);
lean_dec(x_90);
x_113 = l_Array_foldlMUnsafe_fold___rarg(x_16, x_88, x_86, x_111, x_112, x_89);
x_114 = lean_apply_7(x_113, x_3, x_4, x_5, x_6, x_106, x_8, x_83);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_117 = x_114;
} else {
 lean_dec_ref(x_114);
 x_117 = lean_box(0);
}
x_118 = l_List_reverse___rarg(x_115);
x_119 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_2, x_118);
if (lean_is_scalar(x_117)) {
 x_120 = lean_alloc_ctor(0, 2, 0);
} else {
 x_120 = x_117;
}
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_116);
return x_120;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
lean_dec(x_2);
x_121 = lean_ctor_get(x_114, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_114, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_123 = x_114;
} else {
 lean_dec_ref(x_114);
 x_123 = lean_box(0);
}
if (lean_is_scalar(x_123)) {
 x_124 = lean_alloc_ctor(1, 2, 0);
} else {
 x_124 = x_123;
}
lean_ctor_set(x_124, 0, x_121);
lean_ctor_set(x_124, 1, x_122);
return x_124;
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_5);
lean_dec(x_1);
return x_16;
}
}
lean_object* l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__2(lean_object* x_1) {
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
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_4, 1);
x_8 = l_List_tail_x21___rarg(x_7);
lean_dec(x_7);
lean_ctor_set(x_4, 1, x_8);
x_9 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__2(x_6);
lean_ctor_set(x_1, 1, x_9);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_ctor_get(x_4, 2);
x_14 = lean_ctor_get(x_4, 3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
x_15 = l_List_tail_x21___rarg(x_12);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_16, 2, x_13);
lean_ctor_set(x_16, 3, x_14);
x_17 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__2(x_10);
lean_ctor_set(x_1, 1, x_17);
lean_ctor_set(x_1, 0, x_16);
return x_1;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_18, 2);
lean_inc(x_22);
x_23 = lean_ctor_get(x_18, 3);
lean_inc(x_23);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 lean_ctor_release(x_18, 2);
 lean_ctor_release(x_18, 3);
 x_24 = x_18;
} else {
 lean_dec_ref(x_18);
 x_24 = lean_box(0);
}
x_25 = l_List_tail_x21___rarg(x_21);
lean_dec(x_21);
if (lean_is_scalar(x_24)) {
 x_26 = lean_alloc_ctor(0, 4, 0);
} else {
 x_26 = x_24;
}
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_22);
lean_ctor_set(x_26, 3, x_23);
x_27 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__2(x_19);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__3(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = l_Lean_Elab_Term_StructInst_instInhabitedField(lean_box(0));
x_3 = lean_mk_string("Init.Data.List.BasicAux");
x_4 = lean_mk_string("List.head!");
x_5 = lean_unsigned_to_nat(30u);
x_6 = lean_unsigned_to_nat(12u);
x_7 = lean_mk_string("empty list");
x_8 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_panic_fn(x_2, x_8);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
return x_10;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
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
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
x_11 = l_Lean_Elab_Term_StructInst_Field_toSyntax(x_10);
x_12 = lean_unsigned_to_nat(2u);
x_13 = lean_mk_empty_array_with_capacity(x_12);
x_14 = lean_array_push(x_13, x_11);
lean_inc(x_1);
x_15 = lean_array_push(x_14, x_1);
x_16 = l_Lean_nullKind;
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = 1;
x_19 = x_3 + x_18;
x_20 = x_17;
x_21 = lean_array_uset(x_9, x_3, x_20);
x_3 = x_19;
x_4 = x_21;
goto _start;
}
}
}
lean_object* l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_mk_string("Init.Data.List.BasicAux");
x_3 = lean_mk_string("List.head!");
x_4 = lean_unsigned_to_nat(30u);
x_5 = lean_unsigned_to_nat(12u);
x_6 = lean_mk_string("empty list");
x_7 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_8 = l_Lean_Elab_Term_StructInst_instInhabitedFieldLHS;
x_9 = lean_panic_fn(x_8, x_7);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
return x_10;
}
}
}
lean_object* l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_1);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__8(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__7(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = x_2 + x_8;
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
lean_object* l_Std_HashMap_toList___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
return x_2;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_4, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
return x_2;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__8(x_3, x_8, x_9, x_2);
return x_10;
}
}
}
}
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_6);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_6, 0);
x_18 = lean_ctor_get(x_6, 1);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_inc(x_20);
x_22 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__2(x_20);
x_23 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_inc(x_7);
lean_inc(x_19);
lean_inc(x_3);
x_24 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource(x_3, x_4, x_19, x_23, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__3(x_20);
lean_dec(x_20);
lean_inc(x_3);
lean_inc(x_2);
x_28 = l_Lean_isSubobjectField_x3f(x_2, x_3, x_19);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; size_t x_39; size_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_mk_empty_array_with_capacity(x_29);
x_31 = l_Lean_nullKind;
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_unsigned_to_nat(4u);
lean_inc(x_32);
lean_inc(x_5);
x_34 = l_Lean_Syntax_setArg(x_5, x_33, x_32);
x_35 = l_List_redLength___rarg(x_22);
x_36 = lean_mk_empty_array_with_capacity(x_35);
lean_dec(x_35);
x_37 = l_List_toArrayAux___rarg(x_22, x_36);
x_38 = lean_array_get_size(x_37);
x_39 = lean_usize_of_nat(x_38);
lean_dec(x_38);
x_40 = 0;
x_41 = x_37;
x_42 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__4(x_32, x_39, x_40, x_41);
x_43 = x_42;
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_31);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_unsigned_to_nat(2u);
x_46 = l_Lean_Syntax_setArg(x_34, x_45, x_44);
x_47 = l_Lean_Elab_Term_StructInst_setStructSourceSyntax(x_46, x_25);
x_48 = !lean_is_exclusive(x_27);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_49 = lean_ctor_get(x_27, 1);
x_50 = lean_ctor_get(x_27, 2);
lean_dec(x_50);
x_51 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(x_49);
lean_dec(x_49);
x_52 = lean_box(0);
lean_ctor_set(x_6, 1, x_52);
lean_ctor_set(x_6, 0, x_51);
x_53 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_53, 0, x_47);
lean_ctor_set(x_27, 2, x_53);
lean_ctor_set(x_27, 1, x_6);
x_54 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
if (lean_obj_tag(x_54) == 0)
{
uint8_t x_55; 
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_54, 0);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_27);
lean_ctor_set(x_57, 1, x_56);
lean_ctor_set(x_54, 0, x_57);
return x_54;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_58 = lean_ctor_get(x_54, 0);
x_59 = lean_ctor_get(x_54, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_54);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_27);
lean_ctor_set(x_60, 1, x_58);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
return x_61;
}
}
else
{
uint8_t x_62; 
lean_dec(x_27);
x_62 = !lean_is_exclusive(x_54);
if (x_62 == 0)
{
return x_54;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_54, 0);
x_64 = lean_ctor_get(x_54, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_54);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_66 = lean_ctor_get(x_27, 0);
x_67 = lean_ctor_get(x_27, 1);
x_68 = lean_ctor_get(x_27, 3);
lean_inc(x_68);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_27);
x_69 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(x_67);
lean_dec(x_67);
x_70 = lean_box(0);
lean_ctor_set(x_6, 1, x_70);
lean_ctor_set(x_6, 0, x_69);
x_71 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_71, 0, x_47);
x_72 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_72, 0, x_66);
lean_ctor_set(x_72, 1, x_6);
lean_ctor_set(x_72, 2, x_71);
lean_ctor_set(x_72, 3, x_68);
x_73 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_76 = x_73;
} else {
 lean_dec_ref(x_73);
 x_76 = lean_box(0);
}
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_72);
lean_ctor_set(x_77, 1, x_74);
if (lean_is_scalar(x_76)) {
 x_78 = lean_alloc_ctor(0, 2, 0);
} else {
 x_78 = x_76;
}
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_75);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_72);
x_79 = lean_ctor_get(x_73, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_73, 1);
lean_inc(x_80);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_81 = x_73;
} else {
 lean_dec_ref(x_73);
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
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_28, 0);
lean_inc(x_83);
lean_dec(x_28);
lean_inc(x_5);
x_84 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_84, 0, x_5);
lean_ctor_set(x_84, 1, x_83);
lean_ctor_set(x_84, 2, x_22);
lean_ctor_set(x_84, 3, x_25);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_85 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct(x_84, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = !lean_is_exclusive(x_27);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_89 = lean_ctor_get(x_27, 1);
x_90 = lean_ctor_get(x_27, 2);
lean_dec(x_90);
x_91 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(x_89);
lean_dec(x_89);
x_92 = lean_box(0);
lean_ctor_set(x_6, 1, x_92);
lean_ctor_set(x_6, 0, x_91);
x_93 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_93, 0, x_86);
lean_ctor_set(x_27, 2, x_93);
lean_ctor_set(x_27, 1, x_6);
x_94 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_87);
if (lean_obj_tag(x_94) == 0)
{
uint8_t x_95; 
x_95 = !lean_is_exclusive(x_94);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; 
x_96 = lean_ctor_get(x_94, 0);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_27);
lean_ctor_set(x_97, 1, x_96);
lean_ctor_set(x_94, 0, x_97);
return x_94;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_98 = lean_ctor_get(x_94, 0);
x_99 = lean_ctor_get(x_94, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_94);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_27);
lean_ctor_set(x_100, 1, x_98);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
return x_101;
}
}
else
{
uint8_t x_102; 
lean_dec(x_27);
x_102 = !lean_is_exclusive(x_94);
if (x_102 == 0)
{
return x_94;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_94, 0);
x_104 = lean_ctor_get(x_94, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_94);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_106 = lean_ctor_get(x_27, 0);
x_107 = lean_ctor_get(x_27, 1);
x_108 = lean_ctor_get(x_27, 3);
lean_inc(x_108);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_27);
x_109 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(x_107);
lean_dec(x_107);
x_110 = lean_box(0);
lean_ctor_set(x_6, 1, x_110);
lean_ctor_set(x_6, 0, x_109);
x_111 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_111, 0, x_86);
x_112 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_112, 0, x_106);
lean_ctor_set(x_112, 1, x_6);
lean_ctor_set(x_112, 2, x_111);
lean_ctor_set(x_112, 3, x_108);
x_113 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_87);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
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
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_112);
lean_ctor_set(x_117, 1, x_114);
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
lean_dec(x_112);
x_119 = lean_ctor_get(x_113, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_113, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_121 = x_113;
} else {
 lean_dec_ref(x_113);
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
uint8_t x_123; 
lean_dec(x_27);
lean_free_object(x_6);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_123 = !lean_is_exclusive(x_85);
if (x_123 == 0)
{
return x_85;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_85, 0);
x_125 = lean_ctor_get(x_85, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_85);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
}
else
{
uint8_t x_127; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_19);
lean_free_object(x_6);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_127 = !lean_is_exclusive(x_24);
if (x_127 == 0)
{
return x_24;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_24, 0);
x_129 = lean_ctor_get(x_24, 1);
lean_inc(x_129);
lean_inc(x_128);
lean_dec(x_24);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_128);
lean_ctor_set(x_130, 1, x_129);
return x_130;
}
}
}
else
{
lean_object* x_131; lean_object* x_132; 
lean_dec(x_20);
lean_dec(x_19);
x_131 = lean_ctor_get(x_21, 0);
lean_inc(x_131);
lean_dec(x_21);
x_132 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_132) == 0)
{
uint8_t x_133; 
x_133 = !lean_is_exclusive(x_132);
if (x_133 == 0)
{
lean_object* x_134; 
x_134 = lean_ctor_get(x_132, 0);
lean_ctor_set(x_6, 1, x_134);
lean_ctor_set(x_6, 0, x_131);
lean_ctor_set(x_132, 0, x_6);
return x_132;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_132, 0);
x_136 = lean_ctor_get(x_132, 1);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_132);
lean_ctor_set(x_6, 1, x_135);
lean_ctor_set(x_6, 0, x_131);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_6);
lean_ctor_set(x_137, 1, x_136);
return x_137;
}
}
else
{
uint8_t x_138; 
lean_dec(x_131);
lean_free_object(x_6);
x_138 = !lean_is_exclusive(x_132);
if (x_138 == 0)
{
return x_132;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_139 = lean_ctor_get(x_132, 0);
x_140 = lean_ctor_get(x_132, 1);
lean_inc(x_140);
lean_inc(x_139);
lean_dec(x_132);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_139);
lean_ctor_set(x_141, 1, x_140);
return x_141;
}
}
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_142 = lean_ctor_get(x_6, 0);
x_143 = lean_ctor_get(x_6, 1);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_6);
x_144 = lean_ctor_get(x_142, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_142, 1);
lean_inc(x_145);
lean_dec(x_142);
x_146 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isSimpleField_x3f(x_145);
if (lean_obj_tag(x_146) == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_inc(x_145);
x_147 = l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__2(x_145);
x_148 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_inc(x_7);
lean_inc(x_144);
lean_inc(x_3);
x_149 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource(x_3, x_4, x_144, x_148, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
lean_dec(x_149);
x_152 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__3(x_145);
lean_dec(x_145);
lean_inc(x_3);
lean_inc(x_2);
x_153 = l_Lean_isSubobjectField_x3f(x_2, x_3, x_144);
if (lean_obj_tag(x_153) == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; size_t x_164; size_t x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_154 = lean_unsigned_to_nat(0u);
x_155 = lean_mk_empty_array_with_capacity(x_154);
x_156 = l_Lean_nullKind;
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_155);
x_158 = lean_unsigned_to_nat(4u);
lean_inc(x_157);
lean_inc(x_5);
x_159 = l_Lean_Syntax_setArg(x_5, x_158, x_157);
x_160 = l_List_redLength___rarg(x_147);
x_161 = lean_mk_empty_array_with_capacity(x_160);
lean_dec(x_160);
x_162 = l_List_toArrayAux___rarg(x_147, x_161);
x_163 = lean_array_get_size(x_162);
x_164 = lean_usize_of_nat(x_163);
lean_dec(x_163);
x_165 = 0;
x_166 = x_162;
x_167 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__4(x_157, x_164, x_165, x_166);
x_168 = x_167;
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_156);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_unsigned_to_nat(2u);
x_171 = l_Lean_Syntax_setArg(x_159, x_170, x_169);
x_172 = l_Lean_Elab_Term_StructInst_setStructSourceSyntax(x_171, x_150);
x_173 = lean_ctor_get(x_152, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_152, 1);
lean_inc(x_174);
x_175 = lean_ctor_get(x_152, 3);
lean_inc(x_175);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 lean_ctor_release(x_152, 2);
 lean_ctor_release(x_152, 3);
 x_176 = x_152;
} else {
 lean_dec_ref(x_152);
 x_176 = lean_box(0);
}
x_177 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(x_174);
lean_dec(x_174);
x_178 = lean_box(0);
x_179 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_179, 0, x_177);
lean_ctor_set(x_179, 1, x_178);
x_180 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_180, 0, x_172);
if (lean_is_scalar(x_176)) {
 x_181 = lean_alloc_ctor(0, 4, 0);
} else {
 x_181 = x_176;
}
lean_ctor_set(x_181, 0, x_173);
lean_ctor_set(x_181, 1, x_179);
lean_ctor_set(x_181, 2, x_180);
lean_ctor_set(x_181, 3, x_175);
x_182 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_143, x_7, x_8, x_9, x_10, x_11, x_12, x_151);
if (lean_obj_tag(x_182) == 0)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_182, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 x_185 = x_182;
} else {
 lean_dec_ref(x_182);
 x_185 = lean_box(0);
}
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_181);
lean_ctor_set(x_186, 1, x_183);
if (lean_is_scalar(x_185)) {
 x_187 = lean_alloc_ctor(0, 2, 0);
} else {
 x_187 = x_185;
}
lean_ctor_set(x_187, 0, x_186);
lean_ctor_set(x_187, 1, x_184);
return x_187;
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
lean_dec(x_181);
x_188 = lean_ctor_get(x_182, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_182, 1);
lean_inc(x_189);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 x_190 = x_182;
} else {
 lean_dec_ref(x_182);
 x_190 = lean_box(0);
}
if (lean_is_scalar(x_190)) {
 x_191 = lean_alloc_ctor(1, 2, 0);
} else {
 x_191 = x_190;
}
lean_ctor_set(x_191, 0, x_188);
lean_ctor_set(x_191, 1, x_189);
return x_191;
}
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_192 = lean_ctor_get(x_153, 0);
lean_inc(x_192);
lean_dec(x_153);
lean_inc(x_5);
x_193 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_193, 0, x_5);
lean_ctor_set(x_193, 1, x_192);
lean_ctor_set(x_193, 2, x_147);
lean_ctor_set(x_193, 3, x_150);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_194 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct(x_193, x_7, x_8, x_9, x_10, x_11, x_12, x_151);
if (lean_obj_tag(x_194) == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_194, 1);
lean_inc(x_196);
lean_dec(x_194);
x_197 = lean_ctor_get(x_152, 0);
lean_inc(x_197);
x_198 = lean_ctor_get(x_152, 1);
lean_inc(x_198);
x_199 = lean_ctor_get(x_152, 3);
lean_inc(x_199);
if (lean_is_exclusive(x_152)) {
 lean_ctor_release(x_152, 0);
 lean_ctor_release(x_152, 1);
 lean_ctor_release(x_152, 2);
 lean_ctor_release(x_152, 3);
 x_200 = x_152;
} else {
 lean_dec_ref(x_152);
 x_200 = lean_box(0);
}
x_201 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(x_198);
lean_dec(x_198);
x_202 = lean_box(0);
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_201);
lean_ctor_set(x_203, 1, x_202);
x_204 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_204, 0, x_195);
if (lean_is_scalar(x_200)) {
 x_205 = lean_alloc_ctor(0, 4, 0);
} else {
 x_205 = x_200;
}
lean_ctor_set(x_205, 0, x_197);
lean_ctor_set(x_205, 1, x_203);
lean_ctor_set(x_205, 2, x_204);
lean_ctor_set(x_205, 3, x_199);
x_206 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_143, x_7, x_8, x_9, x_10, x_11, x_12, x_196);
if (lean_obj_tag(x_206) == 0)
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_207 = lean_ctor_get(x_206, 0);
lean_inc(x_207);
x_208 = lean_ctor_get(x_206, 1);
lean_inc(x_208);
if (lean_is_exclusive(x_206)) {
 lean_ctor_release(x_206, 0);
 lean_ctor_release(x_206, 1);
 x_209 = x_206;
} else {
 lean_dec_ref(x_206);
 x_209 = lean_box(0);
}
x_210 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_210, 0, x_205);
lean_ctor_set(x_210, 1, x_207);
if (lean_is_scalar(x_209)) {
 x_211 = lean_alloc_ctor(0, 2, 0);
} else {
 x_211 = x_209;
}
lean_ctor_set(x_211, 0, x_210);
lean_ctor_set(x_211, 1, x_208);
return x_211;
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; 
lean_dec(x_205);
x_212 = lean_ctor_get(x_206, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_206, 1);
lean_inc(x_213);
if (lean_is_exclusive(x_206)) {
 lean_ctor_release(x_206, 0);
 lean_ctor_release(x_206, 1);
 x_214 = x_206;
} else {
 lean_dec_ref(x_206);
 x_214 = lean_box(0);
}
if (lean_is_scalar(x_214)) {
 x_215 = lean_alloc_ctor(1, 2, 0);
} else {
 x_215 = x_214;
}
lean_ctor_set(x_215, 0, x_212);
lean_ctor_set(x_215, 1, x_213);
return x_215;
}
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; 
lean_dec(x_152);
lean_dec(x_143);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_216 = lean_ctor_get(x_194, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_194, 1);
lean_inc(x_217);
if (lean_is_exclusive(x_194)) {
 lean_ctor_release(x_194, 0);
 lean_ctor_release(x_194, 1);
 x_218 = x_194;
} else {
 lean_dec_ref(x_194);
 x_218 = lean_box(0);
}
if (lean_is_scalar(x_218)) {
 x_219 = lean_alloc_ctor(1, 2, 0);
} else {
 x_219 = x_218;
}
lean_ctor_set(x_219, 0, x_216);
lean_ctor_set(x_219, 1, x_217);
return x_219;
}
}
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; 
lean_dec(x_147);
lean_dec(x_145);
lean_dec(x_144);
lean_dec(x_143);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_220 = lean_ctor_get(x_149, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_149, 1);
lean_inc(x_221);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 lean_ctor_release(x_149, 1);
 x_222 = x_149;
} else {
 lean_dec_ref(x_149);
 x_222 = lean_box(0);
}
if (lean_is_scalar(x_222)) {
 x_223 = lean_alloc_ctor(1, 2, 0);
} else {
 x_223 = x_222;
}
lean_ctor_set(x_223, 0, x_220);
lean_ctor_set(x_223, 1, x_221);
return x_223;
}
}
else
{
lean_object* x_224; lean_object* x_225; 
lean_dec(x_145);
lean_dec(x_144);
x_224 = lean_ctor_get(x_146, 0);
lean_inc(x_224);
lean_dec(x_146);
x_225 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_143, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_225) == 0)
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; 
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
x_229 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_229, 0, x_224);
lean_ctor_set(x_229, 1, x_226);
if (lean_is_scalar(x_228)) {
 x_230 = lean_alloc_ctor(0, 2, 0);
} else {
 x_230 = x_228;
}
lean_ctor_set(x_230, 0, x_229);
lean_ctor_set(x_230, 1, x_227);
return x_230;
}
else
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
lean_dec(x_224);
x_231 = lean_ctor_get(x_225, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_225, 1);
lean_inc(x_232);
if (lean_is_exclusive(x_225)) {
 lean_ctor_release(x_225, 0);
 lean_ctor_release(x_225, 1);
 x_233 = x_225;
} else {
 lean_dec_ref(x_225);
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
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_14 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkFieldMap(x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Std_HashMap_toList___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__6(x_15);
lean_dec(x_15);
x_18 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_17, x_7, x_8, x_9, x_10, x_11, x_12, x_16);
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
lean_dec(x_5);
lean_dec(x_3);
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_inc(x_13);
lean_inc(x_12);
x_14 = l_Lean_getStructureFields(x_12, x_13);
x_15 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
lean_inc(x_15);
lean_inc(x_1);
x_16 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1___lambda__1___boxed), 13, 5);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_12);
lean_closure_set(x_16, 2, x_13);
lean_closure_set(x_16, 3, x_14);
lean_closure_set(x_16, 4, x_15);
x_17 = !lean_is_exclusive(x_6);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_6, 3);
x_19 = l_Lean_replaceRef(x_15, x_18);
lean_dec(x_18);
lean_dec(x_15);
lean_ctor_set(x_6, 3, x_19);
x_20 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__4(x_1, x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_ctor_get(x_6, 0);
x_22 = lean_ctor_get(x_6, 1);
x_23 = lean_ctor_get(x_6, 2);
x_24 = lean_ctor_get(x_6, 3);
x_25 = lean_ctor_get(x_6, 4);
x_26 = lean_ctor_get(x_6, 5);
x_27 = lean_ctor_get(x_6, 6);
x_28 = lean_ctor_get(x_6, 7);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_6);
x_29 = l_Lean_replaceRef(x_15, x_24);
lean_dec(x_24);
lean_dec(x_15);
x_30 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_30, 0, x_21);
lean_ctor_set(x_30, 1, x_22);
lean_ctor_set(x_30, 2, x_23);
lean_ctor_set(x_30, 3, x_29);
lean_ctor_set(x_30, 4, x_25);
lean_ctor_set(x_30, 5, x_26);
lean_ctor_set(x_30, 6, x_27);
lean_ctor_set(x_30, 7, x_28);
x_31 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields___spec__4(x_1, x_16, x_2, x_3, x_4, x_5, x_30, x_7, x_11);
return x_31;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, size_t x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; 
x_17 = x_7 == x_8;
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_array_uget(x_6, x_7);
x_19 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
lean_inc(x_18);
x_20 = l_Lean_Elab_Term_StructInst_findField_x3f(x_19, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
lean_inc(x_18);
lean_inc(x_3);
lean_inc(x_2);
x_21 = l_Lean_isSubobjectField_x3f(x_2, x_3, x_18);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
x_22 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
switch (lean_obj_tag(x_22)) {
case 0:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; 
x_23 = lean_box(2);
lean_inc(x_5);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_5);
lean_ctor_set(x_24, 1, x_18);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_box(0);
lean_inc(x_5);
x_28 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_28, 0, x_5);
lean_ctor_set(x_28, 1, x_26);
lean_ctor_set(x_28, 2, x_23);
lean_ctor_set(x_28, 3, x_27);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_9);
x_30 = 1;
x_31 = x_7 + x_30;
x_7 = x_31;
x_9 = x_29;
goto _start;
}
case 1:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; size_t x_41; size_t x_42; 
lean_dec(x_22);
x_33 = l_Lean_mkHole(x_5);
x_34 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_34, 0, x_33);
lean_inc(x_5);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_5);
lean_ctor_set(x_35, 1, x_18);
x_36 = lean_box(0);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_box(0);
lean_inc(x_5);
x_39 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_39, 0, x_5);
lean_ctor_set(x_39, 1, x_37);
lean_ctor_set(x_39, 2, x_34);
lean_ctor_set(x_39, 3, x_38);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_9);
x_41 = 1;
x_42 = x_7 + x_41;
x_7 = x_42;
x_9 = x_40;
goto _start;
}
default: 
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; size_t x_55; size_t x_56; 
x_44 = lean_ctor_get(x_22, 0);
lean_inc(x_44);
lean_dec(x_22);
x_45 = lean_unsigned_to_nat(0u);
x_46 = l_Lean_Syntax_getArg(x_44, x_45);
lean_dec(x_44);
lean_inc(x_18);
x_47 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkProjStx(x_46, x_18);
x_48 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_48, 0, x_47);
lean_inc(x_5);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_5);
lean_ctor_set(x_49, 1, x_18);
x_50 = lean_box(0);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_box(0);
lean_inc(x_5);
x_53 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_53, 0, x_5);
lean_ctor_set(x_53, 1, x_51);
lean_ctor_set(x_53, 2, x_48);
lean_ctor_set(x_53, 3, x_52);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_9);
x_55 = 1;
x_56 = x_7 + x_55;
x_7 = x_56;
x_9 = x_54;
goto _start;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_21, 0);
lean_inc(x_58);
lean_dec(x_21);
x_59 = l_Lean_Elab_Term_StructInst_Struct_source(x_1);
lean_inc(x_10);
lean_inc(x_18);
lean_inc(x_3);
x_60 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkSubstructSource(x_3, x_4, x_18, x_59, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = lean_box(0);
lean_inc(x_5);
x_64 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_64, 0, x_5);
lean_ctor_set(x_64, 1, x_58);
lean_ctor_set(x_64, 2, x_63);
lean_ctor_set(x_64, 3, x_61);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_65 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct(x_64, x_10, x_11, x_12, x_13, x_14, x_15, x_62);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; size_t x_74; size_t x_75; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_68, 0, x_66);
lean_inc(x_5);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_5);
lean_ctor_set(x_69, 1, x_18);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_63);
x_71 = lean_box(0);
lean_inc(x_5);
x_72 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_72, 0, x_5);
lean_ctor_set(x_72, 1, x_70);
lean_ctor_set(x_72, 2, x_68);
lean_ctor_set(x_72, 3, x_71);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_9);
x_74 = 1;
x_75 = x_7 + x_74;
x_7 = x_75;
x_9 = x_73;
x_16 = x_67;
goto _start;
}
else
{
uint8_t x_77; 
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_77 = !lean_is_exclusive(x_65);
if (x_77 == 0)
{
return x_65;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_65, 0);
x_79 = lean_ctor_get(x_65, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_65);
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
lean_dec(x_58);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_81 = !lean_is_exclusive(x_60);
if (x_81 == 0)
{
return x_60;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_60, 0);
x_83 = lean_ctor_get(x_60, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_60);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
}
else
{
lean_object* x_85; lean_object* x_86; size_t x_87; size_t x_88; 
lean_dec(x_18);
x_85 = lean_ctor_get(x_20, 0);
lean_inc(x_85);
lean_dec(x_20);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_9);
x_87 = 1;
x_88 = x_7 + x_87;
x_7 = x_88;
x_9 = x_86;
goto _start;
}
}
else
{
lean_object* x_90; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_9);
lean_ctor_set(x_90, 1, x_16);
return x_90;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_inc(x_14);
lean_inc(x_13);
x_15 = l_Lean_getStructureFields(x_13, x_14);
x_16 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
x_17 = lean_box(0);
x_18 = lean_array_get_size(x_15);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_lt(x_19, x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = l_List_reverse___rarg(x_17);
x_22 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_21);
lean_ctor_set(x_9, 0, x_22);
return x_9;
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_6);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_ctor_get(x_6, 3);
x_25 = l_Lean_replaceRef(x_16, x_24);
lean_dec(x_24);
lean_ctor_set(x_6, 3, x_25);
x_26 = lean_nat_dec_le(x_18, x_18);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_6);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_27 = l_List_reverse___rarg(x_17);
x_28 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_27);
lean_ctor_set(x_9, 0, x_28);
return x_9;
}
else
{
size_t x_29; size_t x_30; lean_object* x_31; 
lean_free_object(x_9);
x_29 = 0;
x_30 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_31 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__11(x_1, x_13, x_14, x_15, x_16, x_15, x_29, x_30, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_12);
lean_dec(x_15);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = l_List_reverse___rarg(x_33);
x_35 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_34);
lean_ctor_set(x_31, 0, x_35);
return x_31;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_31, 0);
x_37 = lean_ctor_get(x_31, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_31);
x_38 = l_List_reverse___rarg(x_36);
x_39 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_37);
return x_40;
}
}
else
{
uint8_t x_41; 
lean_dec(x_1);
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
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_45 = lean_ctor_get(x_6, 0);
x_46 = lean_ctor_get(x_6, 1);
x_47 = lean_ctor_get(x_6, 2);
x_48 = lean_ctor_get(x_6, 3);
x_49 = lean_ctor_get(x_6, 4);
x_50 = lean_ctor_get(x_6, 5);
x_51 = lean_ctor_get(x_6, 6);
x_52 = lean_ctor_get(x_6, 7);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_6);
x_53 = l_Lean_replaceRef(x_16, x_48);
lean_dec(x_48);
x_54 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_54, 0, x_45);
lean_ctor_set(x_54, 1, x_46);
lean_ctor_set(x_54, 2, x_47);
lean_ctor_set(x_54, 3, x_53);
lean_ctor_set(x_54, 4, x_49);
lean_ctor_set(x_54, 5, x_50);
lean_ctor_set(x_54, 6, x_51);
lean_ctor_set(x_54, 7, x_52);
x_55 = lean_nat_dec_le(x_18, x_18);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_54);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_56 = l_List_reverse___rarg(x_17);
x_57 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_56);
lean_ctor_set(x_9, 0, x_57);
return x_9;
}
else
{
size_t x_58; size_t x_59; lean_object* x_60; 
lean_free_object(x_9);
x_58 = 0;
x_59 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_60 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__11(x_1, x_13, x_14, x_15, x_16, x_15, x_58, x_59, x_17, x_2, x_3, x_4, x_5, x_54, x_7, x_12);
lean_dec(x_15);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_63 = x_60;
} else {
 lean_dec_ref(x_60);
 x_63 = lean_box(0);
}
x_64 = l_List_reverse___rarg(x_61);
x_65 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_64);
if (lean_is_scalar(x_63)) {
 x_66 = lean_alloc_ctor(0, 2, 0);
} else {
 x_66 = x_63;
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_62);
return x_66;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_1);
x_67 = lean_ctor_get(x_60, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_60, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_69 = x_60;
} else {
 lean_dec_ref(x_60);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(1, 2, 0);
} else {
 x_70 = x_69;
}
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
}
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_71 = lean_ctor_get(x_9, 0);
x_72 = lean_ctor_get(x_9, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_9);
x_73 = lean_ctor_get(x_71, 0);
lean_inc(x_73);
lean_dec(x_71);
x_74 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_inc(x_74);
lean_inc(x_73);
x_75 = l_Lean_getStructureFields(x_73, x_74);
x_76 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
x_77 = lean_box(0);
x_78 = lean_array_get_size(x_75);
x_79 = lean_unsigned_to_nat(0u);
x_80 = lean_nat_dec_lt(x_79, x_78);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_78);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_81 = l_List_reverse___rarg(x_77);
x_82 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_81);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_72);
return x_83;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; 
x_84 = lean_ctor_get(x_6, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_6, 1);
lean_inc(x_85);
x_86 = lean_ctor_get(x_6, 2);
lean_inc(x_86);
x_87 = lean_ctor_get(x_6, 3);
lean_inc(x_87);
x_88 = lean_ctor_get(x_6, 4);
lean_inc(x_88);
x_89 = lean_ctor_get(x_6, 5);
lean_inc(x_89);
x_90 = lean_ctor_get(x_6, 6);
lean_inc(x_90);
x_91 = lean_ctor_get(x_6, 7);
lean_inc(x_91);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 lean_ctor_release(x_6, 5);
 lean_ctor_release(x_6, 6);
 lean_ctor_release(x_6, 7);
 x_92 = x_6;
} else {
 lean_dec_ref(x_6);
 x_92 = lean_box(0);
}
x_93 = l_Lean_replaceRef(x_76, x_87);
lean_dec(x_87);
if (lean_is_scalar(x_92)) {
 x_94 = lean_alloc_ctor(0, 8, 0);
} else {
 x_94 = x_92;
}
lean_ctor_set(x_94, 0, x_84);
lean_ctor_set(x_94, 1, x_85);
lean_ctor_set(x_94, 2, x_86);
lean_ctor_set(x_94, 3, x_93);
lean_ctor_set(x_94, 4, x_88);
lean_ctor_set(x_94, 5, x_89);
lean_ctor_set(x_94, 6, x_90);
lean_ctor_set(x_94, 7, x_91);
x_95 = lean_nat_dec_le(x_78, x_78);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_94);
lean_dec(x_78);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_96 = l_List_reverse___rarg(x_77);
x_97 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_96);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_72);
return x_98;
}
else
{
size_t x_99; size_t x_100; lean_object* x_101; 
x_99 = 0;
x_100 = lean_usize_of_nat(x_78);
lean_dec(x_78);
x_101 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__11(x_1, x_73, x_74, x_75, x_76, x_75, x_99, x_100, x_77, x_2, x_3, x_4, x_5, x_94, x_7, x_72);
lean_dec(x_75);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_104 = x_101;
} else {
 lean_dec_ref(x_101);
 x_104 = lean_box(0);
}
x_105 = l_List_reverse___rarg(x_102);
x_106 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_105);
if (lean_is_scalar(x_104)) {
 x_107 = lean_alloc_ctor(0, 2, 0);
} else {
 x_107 = x_104;
}
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_103);
return x_107;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_1);
x_108 = lean_ctor_get(x_101, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_101, 1);
lean_inc(x_109);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_110 = x_101;
} else {
 lean_dec_ref(x_101);
 x_110 = lean_box(0);
}
if (lean_is_scalar(x_110)) {
 x_111 = lean_alloc_ctor(1, 2, 0);
} else {
 x_111 = x_110;
}
lean_ctor_set(x_111, 0, x_108);
lean_ctor_set(x_111, 1, x_109);
return x_111;
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_alloc_closure((void*)(l_List_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandCompositeFields___spec__3), 1, 0);
x_10 = l_Lean_Elab_Term_StructInst_Struct_modifyFieldsM___at_Lean_Elab_Term_StructInst_Struct_modifyFields___spec__1(x_1, x_9);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNumLitFields(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_14 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandParentFields(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_17 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_addMissingFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__10(x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_19);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
else
{
uint8_t x_25; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_14);
if (x_25 == 0)
{
return x_14;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_14, 0);
x_27 = lean_ctor_get(x_14, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_14);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = !lean_is_exclusive(x_11);
if (x_29 == 0)
{
return x_11;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_11, 0);
x_31 = lean_ctor_get(x_11, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_11);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
lean_object* l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__4(x_1, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_head_x21___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__5(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__7___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__7(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__8(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Std_HashMap_toList___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__6___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_HashMap_toList___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__6(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_List_mapM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__9(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_4);
lean_dec(x_1);
return x_14;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_groupFields___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_4);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
size_t x_17; size_t x_18; lean_object* x_19; 
x_17 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_18 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_19 = l_Array_foldlMUnsafe_fold___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct___spec__11(x_1, x_2, x_3, x_4, x_5, x_6, x_17, x_18, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_19;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_CtorHeaderResult_instMVars___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(x_1);
if (lean_obj_tag(x_4) == 3)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_1, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_1, x_9);
x_11 = lean_apply_4(x_6, x_10, x_2, x_3, x_4);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_6);
x_12 = lean_apply_3(x_5, x_2, x_3, x_4);
return x_12;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__3___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux_match__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_1, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_1, x_14);
lean_dec(x_1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_16 = l_Lean_Meta_whnfForall(x_2, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 7)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint64_t x_21; uint8_t x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 2);
lean_inc(x_20);
x_21 = lean_ctor_get_uint64(x_17, sizeof(void*)*3);
lean_dec(x_17);
x_22 = (uint8_t)((x_21 << 24) >> 61);
x_23 = lean_box(x_22);
if (lean_obj_tag(x_23) == 3)
{
lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_19);
x_25 = 1;
x_26 = lean_box(0);
lean_inc(x_7);
x_27 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_24, x_25, x_26, x_7, x_8, x_9, x_10, x_18);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_expr_instantiate1(x_20, x_28);
lean_dec(x_20);
lean_inc(x_28);
x_31 = l_Lean_mkApp(x_3, x_28);
x_32 = l_Lean_Expr_mvarId_x21(x_28);
lean_dec(x_28);
x_33 = lean_array_push(x_4, x_32);
x_1 = x_15;
x_2 = x_30;
x_3 = x_31;
x_4 = x_33;
x_11 = x_29;
goto _start;
}
else
{
lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_23);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_19);
x_36 = 0;
x_37 = lean_box(0);
lean_inc(x_7);
x_38 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_35, x_36, x_37, x_7, x_8, x_9, x_10, x_18);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_expr_instantiate1(x_20, x_39);
lean_dec(x_20);
x_42 = l_Lean_mkApp(x_3, x_39);
x_1 = x_15;
x_2 = x_41;
x_3 = x_42;
x_11 = x_40;
goto _start;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
x_44 = lean_ctor_get(x_16, 1);
lean_inc(x_44);
lean_dec(x_16);
x_45 = lean_mk_string("unexpected constructor type");
x_46 = l_Lean_stringToMessageData(x_45);
lean_dec(x_45);
x_47 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___spec__1(x_46, x_5, x_6, x_7, x_8, x_9, x_10, x_44);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_48 = !lean_is_exclusive(x_16);
if (x_48 == 0)
{
return x_16;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_16, 0);
x_50 = lean_ctor_get(x_16, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_16);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_52 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_52, 0, x_3);
lean_ctor_set(x_52, 1, x_2);
lean_ctor_set(x_52, 2, x_4);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_11);
return x_53;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
return x_12;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_1, x_8);
if (lean_obj_tag(x_2) == 7)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint64_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
x_13 = lean_ctor_get_uint64(x_2, sizeof(void*)*3);
lean_dec(x_2);
x_14 = lean_box_uint64(x_13);
x_15 = lean_apply_5(x_3, x_9, x_10, x_11, x_12, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_3);
x_16 = lean_apply_2(x_4, x_9, x_2);
return x_16;
}
}
else
{
lean_object* x_17; 
lean_dec(x_4);
lean_dec(x_3);
x_17 = lean_apply_1(x_5, x_2);
return x_17;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody_match__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody_match__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_1, x_3);
if (x_4 == 0)
{
if (lean_obj_tag(x_2) == 7)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
lean_dec(x_1);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
return x_9;
}
}
else
{
lean_object* x_10; 
lean_dec(x_1);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_2);
return x_10;
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
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
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
lean_dec(x_3);
x_14 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getForallBody(x_2, x_1);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_10);
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec(x_14);
x_18 = l_Lean_Expr_hasLooseBVars(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = l_Lean_Meta_isExprDefEq(x_13, x_17, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
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
lean_object* x_30; lean_object* x_31; 
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_10);
return x_31;
}
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_List_lengthAux___rarg(x_11, x_12);
lean_dec(x_11);
x_14 = l_Lean_Meta_mkFreshLevelMVars(x_13, x_5, x_6, x_7, x_8, x_9);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_10, 0);
lean_inc(x_17);
lean_dec(x_10);
lean_inc(x_15);
x_18 = l_Lean_mkConst(x_17, x_15);
lean_inc(x_1);
x_19 = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(x_19, 0, x_1);
x_20 = lean_instantiate_type_lparams(x_19, x_15);
lean_dec(x_15);
lean_dec(x_19);
x_21 = lean_ctor_get(x_1, 3);
lean_inc(x_21);
x_22 = lean_mk_empty_array_with_capacity(x_12);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_23 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeaderAux(x_21, x_20, x_18, x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 4);
lean_inc(x_27);
lean_dec(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_28 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_propagateExpectedType(x_26, x_27, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_25);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_ctor_get(x_24, 2);
lean_inc(x_30);
x_31 = l_Lean_Elab_Term_synthesizeAppInstMVars(x_30, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_30);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set(x_31, 0, x_24);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_24);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_24);
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
lean_dec(x_24);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
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
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_23);
if (x_44 == 0)
{
return x_23;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_23, 0);
x_46 = lean_ctor_get(x_23, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_23);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_StructInst_markDefaultMissing(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = lean_mk_string("structInstDefault");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = l_Lean_mkAnnotation(x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_defaultMissing_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = lean_mk_string("structInstDefault");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = l_Lean_annotation_x3f(x_4, x_1);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_defaultMissing_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_defaultMissing_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_StructInst_throwFailedToElabField___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* l_Lean_throwError___at_Lean_Elab_Term_StructInst_throwFailedToElabField___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Lean_Elab_Term_StructInst_throwFailedToElabField___spec__1___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_11 = lean_mk_string("failed to elaborate field '");
x_12 = l_Lean_stringToMessageData(x_11);
lean_dec(x_11);
x_13 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_13, 0, x_1);
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_mk_string("' of '");
x_16 = l_Lean_stringToMessageData(x_15);
lean_dec(x_15);
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_18, 0, x_2);
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_mk_string(", ");
x_21 = l_Lean_stringToMessageData(x_20);
lean_dec(x_20);
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_3);
x_24 = lean_mk_string("");
x_25 = l_Lean_stringToMessageData(x_24);
lean_dec(x_24);
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_throwError___at_Lean_Elab_Term_StructInst_throwFailedToElabField___spec__1___rarg(x_26, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_27;
}
}
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_StructInst_throwFailedToElabField___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Term_StructInst_throwFailedToElabField___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = l_Lean_Elab_Term_StructInst_Struct_allDefault(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l_Lean_Meta_synthInstance_x3f(x_2, x_13, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_14) == 0)
{
return x_14;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
lean_ctor_set_tag(x_14, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__3___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
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
x_13 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
x_24 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__2(x_2, x_3, x_4, x_5, x_6, x_23, x_8, x_9);
lean_dec(x_23);
return x_24;
}
}
}
lean_object* l_List_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_11; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_24; lean_object* x_25; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_13, 1);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_24);
lean_free_object(x_3);
lean_dec(x_2);
x_26 = lean_ctor_get(x_13, 0);
lean_inc(x_26);
lean_dec(x_13);
x_27 = lean_mk_string("unexpected unexpanded structure field");
x_28 = l_Lean_stringToMessageData(x_27);
lean_dec(x_27);
lean_inc(x_8);
lean_inc(x_4);
x_29 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1(x_26, x_28, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_26);
x_15 = x_29;
goto block_23;
}
else
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_25, 0);
lean_inc(x_30);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_2);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_2, 0);
x_34 = lean_ctor_get(x_2, 1);
lean_dec(x_34);
x_35 = !lean_is_exclusive(x_24);
if (x_35 == 0)
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_13);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_37 = lean_ctor_get(x_24, 0);
x_38 = lean_ctor_get(x_24, 1);
x_39 = lean_ctor_get(x_13, 0);
x_40 = lean_ctor_get(x_13, 2);
x_41 = lean_ctor_get(x_13, 3);
lean_dec(x_41);
x_42 = lean_ctor_get(x_13, 1);
lean_dec(x_42);
x_43 = lean_ctor_get(x_30, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_30, 1);
lean_inc(x_44);
lean_dec(x_30);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_45 = l_Lean_Meta_whnfForall(x_37, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
if (lean_obj_tag(x_46) == 7)
{
switch (lean_obj_tag(x_40)) {
case 0:
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; 
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
x_49 = lean_ctor_get(x_46, 2);
lean_inc(x_49);
lean_dec(x_46);
x_50 = lean_ctor_get(x_40, 0);
lean_inc(x_50);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_48);
x_52 = lean_box(0);
x_53 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_54 = l_Lean_Elab_Term_elabTermEnsuringType(x_50, x_51, x_53, x_53, x_52, x_4, x_5, x_6, x_7, x_8, x_9, x_47);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; size_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_ctor_get(x_6, 1);
lean_inc(x_57);
lean_inc(x_55);
x_58 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_58, 0, x_44);
lean_ctor_set(x_58, 1, x_57);
lean_ctor_set(x_58, 2, x_55);
lean_ctor_set(x_58, 3, x_43);
x_59 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_59, 0, x_58);
x_60 = lean_unsigned_to_nat(32u);
x_61 = lean_mk_empty_array_with_capacity(x_60);
lean_inc(x_61);
x_62 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_62, 0, x_61);
x_63 = 5;
x_64 = lean_unsigned_to_nat(0u);
x_65 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_61);
lean_ctor_set(x_65, 2, x_64);
lean_ctor_set(x_65, 3, x_64);
lean_ctor_set_usize(x_65, 4, x_63);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_59);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_66, x_4, x_5, x_6, x_7, x_8, x_9, x_56);
x_68 = !lean_is_exclusive(x_67);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_69 = lean_ctor_get(x_67, 0);
lean_dec(x_69);
lean_inc(x_55);
x_70 = l_Lean_mkApp(x_33, x_55);
x_71 = lean_expr_instantiate1(x_49, x_55);
lean_dec(x_49);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_55);
lean_ctor_set(x_13, 3, x_72);
lean_ctor_set(x_3, 1, x_38);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_71);
lean_ctor_set(x_2, 0, x_70);
lean_ctor_set(x_67, 0, x_2);
x_15 = x_67;
goto block_23;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_73 = lean_ctor_get(x_67, 1);
lean_inc(x_73);
lean_dec(x_67);
lean_inc(x_55);
x_74 = l_Lean_mkApp(x_33, x_55);
x_75 = lean_expr_instantiate1(x_49, x_55);
lean_dec(x_49);
x_76 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_76, 0, x_55);
lean_ctor_set(x_13, 3, x_76);
lean_ctor_set(x_3, 1, x_38);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_75);
lean_ctor_set(x_2, 0, x_74);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_2);
lean_ctor_set(x_77, 1, x_73);
x_15 = x_77;
goto block_23;
}
}
else
{
uint8_t x_78; 
lean_dec(x_49);
lean_dec(x_44);
lean_dec(x_43);
lean_free_object(x_13);
lean_dec(x_40);
lean_dec(x_39);
lean_free_object(x_24);
lean_dec(x_38);
lean_free_object(x_2);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_78 = !lean_is_exclusive(x_54);
if (x_78 == 0)
{
x_15 = x_54;
goto block_23;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_54, 0);
x_80 = lean_ctor_get(x_54, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_54);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_15 = x_81;
goto block_23;
}
}
}
case 1:
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_82 = lean_ctor_get(x_45, 1);
lean_inc(x_82);
lean_dec(x_45);
x_83 = lean_ctor_get(x_46, 1);
lean_inc(x_83);
x_84 = lean_ctor_get(x_46, 2);
lean_inc(x_84);
lean_dec(x_46);
x_85 = !lean_is_exclusive(x_40);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; 
x_86 = lean_ctor_get(x_40, 0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_83);
x_87 = l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(x_86, x_83, x_4, x_5, x_6, x_7, x_8, x_9, x_82);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_free_object(x_2);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_90, 0, x_83);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_90);
x_91 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(x_86, x_90, x_4, x_5, x_6, x_7, x_8, x_9, x_89);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = !lean_is_exclusive(x_92);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_95 = lean_ctor_get(x_92, 0);
x_96 = lean_ctor_get(x_92, 1);
x_97 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_98 = l_Lean_Elab_Term_ensureHasType(x_90, x_95, x_97, x_4, x_5, x_6, x_7, x_8, x_9, x_93);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; size_t x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
lean_ctor_set(x_40, 0, x_96);
x_101 = lean_ctor_get(x_6, 1);
lean_inc(x_101);
lean_inc(x_99);
x_102 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_102, 0, x_44);
lean_ctor_set(x_102, 1, x_101);
lean_ctor_set(x_102, 2, x_99);
lean_ctor_set(x_102, 3, x_43);
x_103 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_103, 0, x_102);
x_104 = lean_unsigned_to_nat(32u);
x_105 = lean_mk_empty_array_with_capacity(x_104);
lean_inc(x_105);
x_106 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_106, 0, x_105);
x_107 = 5;
x_108 = lean_unsigned_to_nat(0u);
x_109 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_109, 0, x_106);
lean_ctor_set(x_109, 1, x_105);
lean_ctor_set(x_109, 2, x_108);
lean_ctor_set(x_109, 3, x_108);
lean_ctor_set_usize(x_109, 4, x_107);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_103);
lean_ctor_set(x_110, 1, x_109);
x_111 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_110, x_4, x_5, x_6, x_7, x_8, x_9, x_100);
x_112 = !lean_is_exclusive(x_111);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_113 = lean_ctor_get(x_111, 0);
lean_dec(x_113);
lean_inc(x_99);
x_114 = l_Lean_mkApp(x_33, x_99);
x_115 = lean_expr_instantiate1(x_84, x_99);
lean_dec(x_84);
x_116 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_116, 0, x_99);
lean_ctor_set(x_13, 3, x_116);
lean_ctor_set(x_3, 1, x_38);
lean_ctor_set(x_92, 1, x_3);
lean_ctor_set(x_92, 0, x_115);
lean_ctor_set(x_24, 1, x_92);
lean_ctor_set(x_24, 0, x_114);
lean_ctor_set(x_111, 0, x_24);
x_15 = x_111;
goto block_23;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_117 = lean_ctor_get(x_111, 1);
lean_inc(x_117);
lean_dec(x_111);
lean_inc(x_99);
x_118 = l_Lean_mkApp(x_33, x_99);
x_119 = lean_expr_instantiate1(x_84, x_99);
lean_dec(x_84);
x_120 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_120, 0, x_99);
lean_ctor_set(x_13, 3, x_120);
lean_ctor_set(x_3, 1, x_38);
lean_ctor_set(x_92, 1, x_3);
lean_ctor_set(x_92, 0, x_119);
lean_ctor_set(x_24, 1, x_92);
lean_ctor_set(x_24, 0, x_118);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_24);
lean_ctor_set(x_121, 1, x_117);
x_15 = x_121;
goto block_23;
}
}
else
{
uint8_t x_122; 
lean_free_object(x_92);
lean_dec(x_96);
lean_free_object(x_40);
lean_dec(x_84);
lean_dec(x_44);
lean_dec(x_43);
lean_free_object(x_13);
lean_dec(x_39);
lean_free_object(x_24);
lean_dec(x_38);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_122 = !lean_is_exclusive(x_98);
if (x_122 == 0)
{
x_15 = x_98;
goto block_23;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_98, 0);
x_124 = lean_ctor_get(x_98, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_98);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
x_15 = x_125;
goto block_23;
}
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_126 = lean_ctor_get(x_92, 0);
x_127 = lean_ctor_get(x_92, 1);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_92);
x_128 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_129 = l_Lean_Elab_Term_ensureHasType(x_90, x_126, x_128, x_4, x_5, x_6, x_7, x_8, x_9, x_93);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; size_t x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_129, 1);
lean_inc(x_131);
lean_dec(x_129);
lean_ctor_set(x_40, 0, x_127);
x_132 = lean_ctor_get(x_6, 1);
lean_inc(x_132);
lean_inc(x_130);
x_133 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_133, 0, x_44);
lean_ctor_set(x_133, 1, x_132);
lean_ctor_set(x_133, 2, x_130);
lean_ctor_set(x_133, 3, x_43);
x_134 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_134, 0, x_133);
x_135 = lean_unsigned_to_nat(32u);
x_136 = lean_mk_empty_array_with_capacity(x_135);
lean_inc(x_136);
x_137 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_137, 0, x_136);
x_138 = 5;
x_139 = lean_unsigned_to_nat(0u);
x_140 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_140, 0, x_137);
lean_ctor_set(x_140, 1, x_136);
lean_ctor_set(x_140, 2, x_139);
lean_ctor_set(x_140, 3, x_139);
lean_ctor_set_usize(x_140, 4, x_138);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_134);
lean_ctor_set(x_141, 1, x_140);
x_142 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_141, x_4, x_5, x_6, x_7, x_8, x_9, x_131);
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
lean_inc(x_130);
x_145 = l_Lean_mkApp(x_33, x_130);
x_146 = lean_expr_instantiate1(x_84, x_130);
lean_dec(x_84);
x_147 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_147, 0, x_130);
lean_ctor_set(x_13, 3, x_147);
lean_ctor_set(x_3, 1, x_38);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_146);
lean_ctor_set(x_148, 1, x_3);
lean_ctor_set(x_24, 1, x_148);
lean_ctor_set(x_24, 0, x_145);
if (lean_is_scalar(x_144)) {
 x_149 = lean_alloc_ctor(0, 2, 0);
} else {
 x_149 = x_144;
}
lean_ctor_set(x_149, 0, x_24);
lean_ctor_set(x_149, 1, x_143);
x_15 = x_149;
goto block_23;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
lean_dec(x_127);
lean_free_object(x_40);
lean_dec(x_84);
lean_dec(x_44);
lean_dec(x_43);
lean_free_object(x_13);
lean_dec(x_39);
lean_free_object(x_24);
lean_dec(x_38);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_150 = lean_ctor_get(x_129, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_129, 1);
lean_inc(x_151);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 lean_ctor_release(x_129, 1);
 x_152 = x_129;
} else {
 lean_dec_ref(x_129);
 x_152 = lean_box(0);
}
if (lean_is_scalar(x_152)) {
 x_153 = lean_alloc_ctor(1, 2, 0);
} else {
 x_153 = x_152;
}
lean_ctor_set(x_153, 0, x_150);
lean_ctor_set(x_153, 1, x_151);
x_15 = x_153;
goto block_23;
}
}
}
else
{
uint8_t x_154; 
lean_dec(x_90);
lean_free_object(x_40);
lean_dec(x_84);
lean_dec(x_44);
lean_dec(x_43);
lean_free_object(x_13);
lean_dec(x_39);
lean_free_object(x_24);
lean_dec(x_38);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_154 = !lean_is_exclusive(x_91);
if (x_154 == 0)
{
x_15 = x_91;
goto block_23;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_91, 0);
x_156 = lean_ctor_get(x_91, 1);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_91);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_155);
lean_ctor_set(x_157, 1, x_156);
x_15 = x_157;
goto block_23;
}
}
}
else
{
lean_object* x_158; uint8_t x_159; 
lean_dec(x_86);
lean_dec(x_83);
x_158 = lean_ctor_get(x_87, 1);
lean_inc(x_158);
lean_dec(x_87);
x_159 = !lean_is_exclusive(x_88);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; size_t x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; uint8_t x_173; 
x_160 = lean_ctor_get(x_88, 0);
x_161 = l_Lean_mkHole(x_39);
lean_ctor_set_tag(x_40, 0);
lean_ctor_set(x_40, 0, x_161);
x_162 = lean_ctor_get(x_6, 1);
lean_inc(x_162);
lean_inc(x_160);
x_163 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_163, 0, x_44);
lean_ctor_set(x_163, 1, x_162);
lean_ctor_set(x_163, 2, x_160);
lean_ctor_set(x_163, 3, x_43);
x_164 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_164, 0, x_163);
x_165 = lean_unsigned_to_nat(32u);
x_166 = lean_mk_empty_array_with_capacity(x_165);
lean_inc(x_166);
x_167 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_167, 0, x_166);
x_168 = 5;
x_169 = lean_unsigned_to_nat(0u);
x_170 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_170, 0, x_167);
lean_ctor_set(x_170, 1, x_166);
lean_ctor_set(x_170, 2, x_169);
lean_ctor_set(x_170, 3, x_169);
lean_ctor_set_usize(x_170, 4, x_168);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_164);
lean_ctor_set(x_171, 1, x_170);
x_172 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_171, x_4, x_5, x_6, x_7, x_8, x_9, x_158);
x_173 = !lean_is_exclusive(x_172);
if (x_173 == 0)
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_174 = lean_ctor_get(x_172, 0);
lean_dec(x_174);
lean_inc(x_160);
x_175 = l_Lean_mkApp(x_33, x_160);
x_176 = lean_expr_instantiate1(x_84, x_160);
lean_dec(x_84);
lean_ctor_set(x_13, 3, x_88);
lean_ctor_set(x_3, 1, x_38);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_176);
lean_ctor_set(x_2, 0, x_175);
lean_ctor_set(x_172, 0, x_2);
x_15 = x_172;
goto block_23;
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_177 = lean_ctor_get(x_172, 1);
lean_inc(x_177);
lean_dec(x_172);
lean_inc(x_160);
x_178 = l_Lean_mkApp(x_33, x_160);
x_179 = lean_expr_instantiate1(x_84, x_160);
lean_dec(x_84);
lean_ctor_set(x_13, 3, x_88);
lean_ctor_set(x_3, 1, x_38);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_179);
lean_ctor_set(x_2, 0, x_178);
x_180 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_180, 0, x_2);
lean_ctor_set(x_180, 1, x_177);
x_15 = x_180;
goto block_23;
}
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; size_t x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_181 = lean_ctor_get(x_88, 0);
lean_inc(x_181);
lean_dec(x_88);
x_182 = l_Lean_mkHole(x_39);
lean_ctor_set_tag(x_40, 0);
lean_ctor_set(x_40, 0, x_182);
x_183 = lean_ctor_get(x_6, 1);
lean_inc(x_183);
lean_inc(x_181);
x_184 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_184, 0, x_44);
lean_ctor_set(x_184, 1, x_183);
lean_ctor_set(x_184, 2, x_181);
lean_ctor_set(x_184, 3, x_43);
x_185 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_185, 0, x_184);
x_186 = lean_unsigned_to_nat(32u);
x_187 = lean_mk_empty_array_with_capacity(x_186);
lean_inc(x_187);
x_188 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_188, 0, x_187);
x_189 = 5;
x_190 = lean_unsigned_to_nat(0u);
x_191 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_191, 0, x_188);
lean_ctor_set(x_191, 1, x_187);
lean_ctor_set(x_191, 2, x_190);
lean_ctor_set(x_191, 3, x_190);
lean_ctor_set_usize(x_191, 4, x_189);
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_185);
lean_ctor_set(x_192, 1, x_191);
x_193 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_192, x_4, x_5, x_6, x_7, x_8, x_9, x_158);
x_194 = lean_ctor_get(x_193, 1);
lean_inc(x_194);
if (lean_is_exclusive(x_193)) {
 lean_ctor_release(x_193, 0);
 lean_ctor_release(x_193, 1);
 x_195 = x_193;
} else {
 lean_dec_ref(x_193);
 x_195 = lean_box(0);
}
lean_inc(x_181);
x_196 = l_Lean_mkApp(x_33, x_181);
x_197 = lean_expr_instantiate1(x_84, x_181);
lean_dec(x_84);
x_198 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_198, 0, x_181);
lean_ctor_set(x_13, 3, x_198);
lean_ctor_set(x_3, 1, x_38);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_197);
lean_ctor_set(x_2, 0, x_196);
if (lean_is_scalar(x_195)) {
 x_199 = lean_alloc_ctor(0, 2, 0);
} else {
 x_199 = x_195;
}
lean_ctor_set(x_199, 0, x_2);
lean_ctor_set(x_199, 1, x_194);
x_15 = x_199;
goto block_23;
}
}
}
else
{
uint8_t x_200; 
lean_free_object(x_40);
lean_dec(x_86);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_44);
lean_dec(x_43);
lean_free_object(x_13);
lean_dec(x_39);
lean_free_object(x_24);
lean_dec(x_38);
lean_free_object(x_2);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_200 = !lean_is_exclusive(x_87);
if (x_200 == 0)
{
x_15 = x_87;
goto block_23;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_201 = lean_ctor_get(x_87, 0);
x_202 = lean_ctor_get(x_87, 1);
lean_inc(x_202);
lean_inc(x_201);
lean_dec(x_87);
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_201);
lean_ctor_set(x_203, 1, x_202);
x_15 = x_203;
goto block_23;
}
}
}
else
{
lean_object* x_204; lean_object* x_205; 
x_204 = lean_ctor_get(x_40, 0);
lean_inc(x_204);
lean_dec(x_40);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_83);
x_205 = l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(x_204, x_83, x_4, x_5, x_6, x_7, x_8, x_9, x_82);
if (lean_obj_tag(x_205) == 0)
{
lean_object* x_206; 
x_206 = lean_ctor_get(x_205, 0);
lean_inc(x_206);
if (lean_obj_tag(x_206) == 0)
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; 
lean_free_object(x_2);
x_207 = lean_ctor_get(x_205, 1);
lean_inc(x_207);
lean_dec(x_205);
x_208 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_208, 0, x_83);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_208);
x_209 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(x_204, x_208, x_4, x_5, x_6, x_7, x_8, x_9, x_207);
if (lean_obj_tag(x_209) == 0)
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_210 = lean_ctor_get(x_209, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_209, 1);
lean_inc(x_211);
lean_dec(x_209);
x_212 = lean_ctor_get(x_210, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_210, 1);
lean_inc(x_213);
if (lean_is_exclusive(x_210)) {
 lean_ctor_release(x_210, 0);
 lean_ctor_release(x_210, 1);
 x_214 = x_210;
} else {
 lean_dec_ref(x_210);
 x_214 = lean_box(0);
}
x_215 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_216 = l_Lean_Elab_Term_ensureHasType(x_208, x_212, x_215, x_4, x_5, x_6, x_7, x_8, x_9, x_211);
if (lean_obj_tag(x_216) == 0)
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; size_t x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_217 = lean_ctor_get(x_216, 0);
lean_inc(x_217);
x_218 = lean_ctor_get(x_216, 1);
lean_inc(x_218);
lean_dec(x_216);
x_219 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_219, 0, x_213);
x_220 = lean_ctor_get(x_6, 1);
lean_inc(x_220);
lean_inc(x_217);
x_221 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_221, 0, x_44);
lean_ctor_set(x_221, 1, x_220);
lean_ctor_set(x_221, 2, x_217);
lean_ctor_set(x_221, 3, x_43);
x_222 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_222, 0, x_221);
x_223 = lean_unsigned_to_nat(32u);
x_224 = lean_mk_empty_array_with_capacity(x_223);
lean_inc(x_224);
x_225 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_225, 0, x_224);
x_226 = 5;
x_227 = lean_unsigned_to_nat(0u);
x_228 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_228, 0, x_225);
lean_ctor_set(x_228, 1, x_224);
lean_ctor_set(x_228, 2, x_227);
lean_ctor_set(x_228, 3, x_227);
lean_ctor_set_usize(x_228, 4, x_226);
x_229 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_229, 0, x_222);
lean_ctor_set(x_229, 1, x_228);
x_230 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_229, x_4, x_5, x_6, x_7, x_8, x_9, x_218);
x_231 = lean_ctor_get(x_230, 1);
lean_inc(x_231);
if (lean_is_exclusive(x_230)) {
 lean_ctor_release(x_230, 0);
 lean_ctor_release(x_230, 1);
 x_232 = x_230;
} else {
 lean_dec_ref(x_230);
 x_232 = lean_box(0);
}
lean_inc(x_217);
x_233 = l_Lean_mkApp(x_33, x_217);
x_234 = lean_expr_instantiate1(x_84, x_217);
lean_dec(x_84);
x_235 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_235, 0, x_217);
lean_ctor_set(x_13, 3, x_235);
lean_ctor_set(x_13, 2, x_219);
lean_ctor_set(x_3, 1, x_38);
if (lean_is_scalar(x_214)) {
 x_236 = lean_alloc_ctor(0, 2, 0);
} else {
 x_236 = x_214;
}
lean_ctor_set(x_236, 0, x_234);
lean_ctor_set(x_236, 1, x_3);
lean_ctor_set(x_24, 1, x_236);
lean_ctor_set(x_24, 0, x_233);
if (lean_is_scalar(x_232)) {
 x_237 = lean_alloc_ctor(0, 2, 0);
} else {
 x_237 = x_232;
}
lean_ctor_set(x_237, 0, x_24);
lean_ctor_set(x_237, 1, x_231);
x_15 = x_237;
goto block_23;
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
lean_dec(x_214);
lean_dec(x_213);
lean_dec(x_84);
lean_dec(x_44);
lean_dec(x_43);
lean_free_object(x_13);
lean_dec(x_39);
lean_free_object(x_24);
lean_dec(x_38);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_238 = lean_ctor_get(x_216, 0);
lean_inc(x_238);
x_239 = lean_ctor_get(x_216, 1);
lean_inc(x_239);
if (lean_is_exclusive(x_216)) {
 lean_ctor_release(x_216, 0);
 lean_ctor_release(x_216, 1);
 x_240 = x_216;
} else {
 lean_dec_ref(x_216);
 x_240 = lean_box(0);
}
if (lean_is_scalar(x_240)) {
 x_241 = lean_alloc_ctor(1, 2, 0);
} else {
 x_241 = x_240;
}
lean_ctor_set(x_241, 0, x_238);
lean_ctor_set(x_241, 1, x_239);
x_15 = x_241;
goto block_23;
}
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
lean_dec(x_208);
lean_dec(x_84);
lean_dec(x_44);
lean_dec(x_43);
lean_free_object(x_13);
lean_dec(x_39);
lean_free_object(x_24);
lean_dec(x_38);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_242 = lean_ctor_get(x_209, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_209, 1);
lean_inc(x_243);
if (lean_is_exclusive(x_209)) {
 lean_ctor_release(x_209, 0);
 lean_ctor_release(x_209, 1);
 x_244 = x_209;
} else {
 lean_dec_ref(x_209);
 x_244 = lean_box(0);
}
if (lean_is_scalar(x_244)) {
 x_245 = lean_alloc_ctor(1, 2, 0);
} else {
 x_245 = x_244;
}
lean_ctor_set(x_245, 0, x_242);
lean_ctor_set(x_245, 1, x_243);
x_15 = x_245;
goto block_23;
}
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; size_t x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; 
lean_dec(x_204);
lean_dec(x_83);
x_246 = lean_ctor_get(x_205, 1);
lean_inc(x_246);
lean_dec(x_205);
x_247 = lean_ctor_get(x_206, 0);
lean_inc(x_247);
if (lean_is_exclusive(x_206)) {
 lean_ctor_release(x_206, 0);
 x_248 = x_206;
} else {
 lean_dec_ref(x_206);
 x_248 = lean_box(0);
}
x_249 = l_Lean_mkHole(x_39);
x_250 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_250, 0, x_249);
x_251 = lean_ctor_get(x_6, 1);
lean_inc(x_251);
lean_inc(x_247);
x_252 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_252, 0, x_44);
lean_ctor_set(x_252, 1, x_251);
lean_ctor_set(x_252, 2, x_247);
lean_ctor_set(x_252, 3, x_43);
x_253 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_253, 0, x_252);
x_254 = lean_unsigned_to_nat(32u);
x_255 = lean_mk_empty_array_with_capacity(x_254);
lean_inc(x_255);
x_256 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_256, 0, x_255);
x_257 = 5;
x_258 = lean_unsigned_to_nat(0u);
x_259 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_259, 0, x_256);
lean_ctor_set(x_259, 1, x_255);
lean_ctor_set(x_259, 2, x_258);
lean_ctor_set(x_259, 3, x_258);
lean_ctor_set_usize(x_259, 4, x_257);
x_260 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_260, 0, x_253);
lean_ctor_set(x_260, 1, x_259);
x_261 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_260, x_4, x_5, x_6, x_7, x_8, x_9, x_246);
x_262 = lean_ctor_get(x_261, 1);
lean_inc(x_262);
if (lean_is_exclusive(x_261)) {
 lean_ctor_release(x_261, 0);
 lean_ctor_release(x_261, 1);
 x_263 = x_261;
} else {
 lean_dec_ref(x_261);
 x_263 = lean_box(0);
}
lean_inc(x_247);
x_264 = l_Lean_mkApp(x_33, x_247);
x_265 = lean_expr_instantiate1(x_84, x_247);
lean_dec(x_84);
if (lean_is_scalar(x_248)) {
 x_266 = lean_alloc_ctor(1, 1, 0);
} else {
 x_266 = x_248;
}
lean_ctor_set(x_266, 0, x_247);
lean_ctor_set(x_13, 3, x_266);
lean_ctor_set(x_13, 2, x_250);
lean_ctor_set(x_3, 1, x_38);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_265);
lean_ctor_set(x_2, 0, x_264);
if (lean_is_scalar(x_263)) {
 x_267 = lean_alloc_ctor(0, 2, 0);
} else {
 x_267 = x_263;
}
lean_ctor_set(x_267, 0, x_2);
lean_ctor_set(x_267, 1, x_262);
x_15 = x_267;
goto block_23;
}
}
else
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; 
lean_dec(x_204);
lean_dec(x_84);
lean_dec(x_83);
lean_dec(x_44);
lean_dec(x_43);
lean_free_object(x_13);
lean_dec(x_39);
lean_free_object(x_24);
lean_dec(x_38);
lean_free_object(x_2);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_268 = lean_ctor_get(x_205, 0);
lean_inc(x_268);
x_269 = lean_ctor_get(x_205, 1);
lean_inc(x_269);
if (lean_is_exclusive(x_205)) {
 lean_ctor_release(x_205, 0);
 lean_ctor_release(x_205, 1);
 x_270 = x_205;
} else {
 lean_dec_ref(x_205);
 x_270 = lean_box(0);
}
if (lean_is_scalar(x_270)) {
 x_271 = lean_alloc_ctor(1, 2, 0);
} else {
 x_271 = x_270;
}
lean_ctor_set(x_271, 0, x_268);
lean_ctor_set(x_271, 1, x_269);
x_15 = x_271;
goto block_23;
}
}
}
default: 
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; uint8_t x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; size_t x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; uint8_t x_303; 
x_272 = lean_ctor_get(x_45, 1);
lean_inc(x_272);
lean_dec(x_45);
x_273 = lean_ctor_get(x_46, 1);
lean_inc(x_273);
x_274 = lean_ctor_get(x_46, 2);
lean_inc(x_274);
lean_dec(x_46);
x_275 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_275, 0, x_273);
x_276 = lean_ctor_get(x_8, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_8, 1);
lean_inc(x_277);
x_278 = lean_ctor_get(x_8, 2);
lean_inc(x_278);
x_279 = lean_ctor_get(x_8, 3);
lean_inc(x_279);
x_280 = lean_ctor_get(x_8, 4);
lean_inc(x_280);
x_281 = lean_ctor_get(x_8, 5);
lean_inc(x_281);
x_282 = lean_ctor_get(x_8, 6);
lean_inc(x_282);
x_283 = lean_ctor_get(x_8, 7);
lean_inc(x_283);
x_284 = l_Lean_replaceRef(x_39, x_279);
lean_dec(x_279);
x_285 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_285, 0, x_276);
lean_ctor_set(x_285, 1, x_277);
lean_ctor_set(x_285, 2, x_278);
lean_ctor_set(x_285, 3, x_284);
lean_ctor_set(x_285, 4, x_280);
lean_ctor_set(x_285, 5, x_281);
lean_ctor_set(x_285, 6, x_282);
lean_ctor_set(x_285, 7, x_283);
x_286 = 0;
x_287 = lean_box(0);
lean_inc(x_6);
x_288 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_275, x_286, x_287, x_6, x_7, x_285, x_9, x_272);
lean_dec(x_285);
x_289 = lean_ctor_get(x_288, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_288, 1);
lean_inc(x_290);
lean_dec(x_288);
x_291 = l_Lean_Elab_Term_StructInst_markDefaultMissing(x_289);
x_292 = lean_ctor_get(x_6, 1);
lean_inc(x_292);
lean_inc(x_291);
x_293 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_293, 0, x_44);
lean_ctor_set(x_293, 1, x_292);
lean_ctor_set(x_293, 2, x_291);
lean_ctor_set(x_293, 3, x_43);
x_294 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_294, 0, x_293);
x_295 = lean_unsigned_to_nat(32u);
x_296 = lean_mk_empty_array_with_capacity(x_295);
lean_inc(x_296);
x_297 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_297, 0, x_296);
x_298 = 5;
x_299 = lean_unsigned_to_nat(0u);
x_300 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_300, 0, x_297);
lean_ctor_set(x_300, 1, x_296);
lean_ctor_set(x_300, 2, x_299);
lean_ctor_set(x_300, 3, x_299);
lean_ctor_set_usize(x_300, 4, x_298);
x_301 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_301, 0, x_294);
lean_ctor_set(x_301, 1, x_300);
x_302 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_301, x_4, x_5, x_6, x_7, x_8, x_9, x_290);
x_303 = !lean_is_exclusive(x_302);
if (x_303 == 0)
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; 
x_304 = lean_ctor_get(x_302, 0);
lean_dec(x_304);
lean_inc(x_291);
x_305 = l_Lean_mkApp(x_33, x_291);
x_306 = lean_expr_instantiate1(x_274, x_291);
lean_dec(x_274);
x_307 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_307, 0, x_291);
lean_ctor_set(x_13, 3, x_307);
lean_ctor_set(x_3, 1, x_38);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_306);
lean_ctor_set(x_2, 0, x_305);
lean_ctor_set(x_302, 0, x_2);
x_15 = x_302;
goto block_23;
}
else
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; 
x_308 = lean_ctor_get(x_302, 1);
lean_inc(x_308);
lean_dec(x_302);
lean_inc(x_291);
x_309 = l_Lean_mkApp(x_33, x_291);
x_310 = lean_expr_instantiate1(x_274, x_291);
lean_dec(x_274);
x_311 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_311, 0, x_291);
lean_ctor_set(x_13, 3, x_311);
lean_ctor_set(x_3, 1, x_38);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_310);
lean_ctor_set(x_2, 0, x_309);
x_312 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_312, 0, x_2);
lean_ctor_set(x_312, 1, x_308);
x_15 = x_312;
goto block_23;
}
}
}
}
else
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; 
lean_dec(x_43);
lean_free_object(x_13);
lean_dec(x_40);
lean_free_object(x_24);
lean_dec(x_38);
lean_free_object(x_2);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_313 = lean_ctor_get(x_45, 1);
lean_inc(x_313);
lean_dec(x_45);
x_314 = lean_mk_string("unexpected constructor type");
x_315 = l_Lean_stringToMessageData(x_314);
lean_dec(x_314);
x_316 = l_Lean_indentExpr(x_46);
x_317 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_317, 0, x_315);
lean_ctor_set(x_317, 1, x_316);
x_318 = lean_mk_string("");
x_319 = l_Lean_stringToMessageData(x_318);
lean_dec(x_318);
x_320 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_320, 0, x_317);
lean_ctor_set(x_320, 1, x_319);
x_321 = lean_ctor_get(x_8, 0);
lean_inc(x_321);
x_322 = lean_ctor_get(x_8, 1);
lean_inc(x_322);
x_323 = lean_ctor_get(x_8, 2);
lean_inc(x_323);
x_324 = lean_ctor_get(x_8, 3);
lean_inc(x_324);
x_325 = lean_ctor_get(x_8, 4);
lean_inc(x_325);
x_326 = lean_ctor_get(x_8, 5);
lean_inc(x_326);
x_327 = lean_ctor_get(x_8, 6);
lean_inc(x_327);
x_328 = lean_ctor_get(x_8, 7);
lean_inc(x_328);
x_329 = l_Lean_replaceRef(x_39, x_324);
lean_dec(x_324);
lean_dec(x_39);
x_330 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_330, 0, x_321);
lean_ctor_set(x_330, 1, x_322);
lean_ctor_set(x_330, 2, x_323);
lean_ctor_set(x_330, 3, x_329);
lean_ctor_set(x_330, 4, x_325);
lean_ctor_set(x_330, 5, x_326);
lean_ctor_set(x_330, 6, x_327);
lean_ctor_set(x_330, 7, x_328);
lean_inc(x_4);
lean_inc(x_1);
x_331 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_44, x_1, x_320, x_4, x_5, x_6, x_7, x_330, x_9, x_313);
lean_dec(x_330);
x_15 = x_331;
goto block_23;
}
}
else
{
uint8_t x_332; 
lean_dec(x_44);
lean_dec(x_43);
lean_free_object(x_13);
lean_dec(x_40);
lean_dec(x_39);
lean_free_object(x_24);
lean_dec(x_38);
lean_free_object(x_2);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_332 = !lean_is_exclusive(x_45);
if (x_332 == 0)
{
x_15 = x_45;
goto block_23;
}
else
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; 
x_333 = lean_ctor_get(x_45, 0);
x_334 = lean_ctor_get(x_45, 1);
lean_inc(x_334);
lean_inc(x_333);
lean_dec(x_45);
x_335 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_335, 0, x_333);
lean_ctor_set(x_335, 1, x_334);
x_15 = x_335;
goto block_23;
}
}
}
else
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; 
x_336 = lean_ctor_get(x_24, 0);
x_337 = lean_ctor_get(x_24, 1);
x_338 = lean_ctor_get(x_13, 0);
x_339 = lean_ctor_get(x_13, 2);
lean_inc(x_339);
lean_inc(x_338);
lean_dec(x_13);
x_340 = lean_ctor_get(x_30, 0);
lean_inc(x_340);
x_341 = lean_ctor_get(x_30, 1);
lean_inc(x_341);
lean_dec(x_30);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_342 = l_Lean_Meta_whnfForall(x_336, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_342) == 0)
{
lean_object* x_343; 
x_343 = lean_ctor_get(x_342, 0);
lean_inc(x_343);
if (lean_obj_tag(x_343) == 7)
{
switch (lean_obj_tag(x_339)) {
case 0:
{
lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; uint8_t x_350; lean_object* x_351; 
x_344 = lean_ctor_get(x_342, 1);
lean_inc(x_344);
lean_dec(x_342);
x_345 = lean_ctor_get(x_343, 1);
lean_inc(x_345);
x_346 = lean_ctor_get(x_343, 2);
lean_inc(x_346);
lean_dec(x_343);
x_347 = lean_ctor_get(x_339, 0);
lean_inc(x_347);
x_348 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_348, 0, x_345);
x_349 = lean_box(0);
x_350 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_351 = l_Lean_Elab_Term_elabTermEnsuringType(x_347, x_348, x_350, x_350, x_349, x_4, x_5, x_6, x_7, x_8, x_9, x_344);
if (lean_obj_tag(x_351) == 0)
{
lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; size_t x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; 
x_352 = lean_ctor_get(x_351, 0);
lean_inc(x_352);
x_353 = lean_ctor_get(x_351, 1);
lean_inc(x_353);
lean_dec(x_351);
x_354 = lean_ctor_get(x_6, 1);
lean_inc(x_354);
lean_inc(x_352);
x_355 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_355, 0, x_341);
lean_ctor_set(x_355, 1, x_354);
lean_ctor_set(x_355, 2, x_352);
lean_ctor_set(x_355, 3, x_340);
x_356 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_356, 0, x_355);
x_357 = lean_unsigned_to_nat(32u);
x_358 = lean_mk_empty_array_with_capacity(x_357);
lean_inc(x_358);
x_359 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_359, 0, x_358);
x_360 = 5;
x_361 = lean_unsigned_to_nat(0u);
x_362 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_362, 0, x_359);
lean_ctor_set(x_362, 1, x_358);
lean_ctor_set(x_362, 2, x_361);
lean_ctor_set(x_362, 3, x_361);
lean_ctor_set_usize(x_362, 4, x_360);
x_363 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_363, 0, x_356);
lean_ctor_set(x_363, 1, x_362);
x_364 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_363, x_4, x_5, x_6, x_7, x_8, x_9, x_353);
x_365 = lean_ctor_get(x_364, 1);
lean_inc(x_365);
if (lean_is_exclusive(x_364)) {
 lean_ctor_release(x_364, 0);
 lean_ctor_release(x_364, 1);
 x_366 = x_364;
} else {
 lean_dec_ref(x_364);
 x_366 = lean_box(0);
}
lean_inc(x_352);
x_367 = l_Lean_mkApp(x_33, x_352);
x_368 = lean_expr_instantiate1(x_346, x_352);
lean_dec(x_346);
x_369 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_369, 0, x_352);
x_370 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_370, 0, x_338);
lean_ctor_set(x_370, 1, x_25);
lean_ctor_set(x_370, 2, x_339);
lean_ctor_set(x_370, 3, x_369);
lean_ctor_set(x_3, 1, x_337);
lean_ctor_set(x_3, 0, x_370);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_368);
lean_ctor_set(x_2, 0, x_367);
if (lean_is_scalar(x_366)) {
 x_371 = lean_alloc_ctor(0, 2, 0);
} else {
 x_371 = x_366;
}
lean_ctor_set(x_371, 0, x_2);
lean_ctor_set(x_371, 1, x_365);
x_15 = x_371;
goto block_23;
}
else
{
lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; 
lean_dec(x_346);
lean_dec(x_341);
lean_dec(x_340);
lean_dec(x_339);
lean_dec(x_338);
lean_free_object(x_24);
lean_dec(x_337);
lean_free_object(x_2);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_372 = lean_ctor_get(x_351, 0);
lean_inc(x_372);
x_373 = lean_ctor_get(x_351, 1);
lean_inc(x_373);
if (lean_is_exclusive(x_351)) {
 lean_ctor_release(x_351, 0);
 lean_ctor_release(x_351, 1);
 x_374 = x_351;
} else {
 lean_dec_ref(x_351);
 x_374 = lean_box(0);
}
if (lean_is_scalar(x_374)) {
 x_375 = lean_alloc_ctor(1, 2, 0);
} else {
 x_375 = x_374;
}
lean_ctor_set(x_375, 0, x_372);
lean_ctor_set(x_375, 1, x_373);
x_15 = x_375;
goto block_23;
}
}
case 1:
{
lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; 
x_376 = lean_ctor_get(x_342, 1);
lean_inc(x_376);
lean_dec(x_342);
x_377 = lean_ctor_get(x_343, 1);
lean_inc(x_377);
x_378 = lean_ctor_get(x_343, 2);
lean_inc(x_378);
lean_dec(x_343);
x_379 = lean_ctor_get(x_339, 0);
lean_inc(x_379);
if (lean_is_exclusive(x_339)) {
 lean_ctor_release(x_339, 0);
 x_380 = x_339;
} else {
 lean_dec_ref(x_339);
 x_380 = lean_box(0);
}
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_377);
x_381 = l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(x_379, x_377, x_4, x_5, x_6, x_7, x_8, x_9, x_376);
if (lean_obj_tag(x_381) == 0)
{
lean_object* x_382; 
x_382 = lean_ctor_get(x_381, 0);
lean_inc(x_382);
if (lean_obj_tag(x_382) == 0)
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; 
lean_free_object(x_2);
x_383 = lean_ctor_get(x_381, 1);
lean_inc(x_383);
lean_dec(x_381);
x_384 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_384, 0, x_377);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_384);
x_385 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(x_379, x_384, x_4, x_5, x_6, x_7, x_8, x_9, x_383);
if (lean_obj_tag(x_385) == 0)
{
lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; 
x_386 = lean_ctor_get(x_385, 0);
lean_inc(x_386);
x_387 = lean_ctor_get(x_385, 1);
lean_inc(x_387);
lean_dec(x_385);
x_388 = lean_ctor_get(x_386, 0);
lean_inc(x_388);
x_389 = lean_ctor_get(x_386, 1);
lean_inc(x_389);
if (lean_is_exclusive(x_386)) {
 lean_ctor_release(x_386, 0);
 lean_ctor_release(x_386, 1);
 x_390 = x_386;
} else {
 lean_dec_ref(x_386);
 x_390 = lean_box(0);
}
x_391 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_392 = l_Lean_Elab_Term_ensureHasType(x_384, x_388, x_391, x_4, x_5, x_6, x_7, x_8, x_9, x_387);
if (lean_obj_tag(x_392) == 0)
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; size_t x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; 
x_393 = lean_ctor_get(x_392, 0);
lean_inc(x_393);
x_394 = lean_ctor_get(x_392, 1);
lean_inc(x_394);
lean_dec(x_392);
if (lean_is_scalar(x_380)) {
 x_395 = lean_alloc_ctor(1, 1, 0);
} else {
 x_395 = x_380;
}
lean_ctor_set(x_395, 0, x_389);
x_396 = lean_ctor_get(x_6, 1);
lean_inc(x_396);
lean_inc(x_393);
x_397 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_397, 0, x_341);
lean_ctor_set(x_397, 1, x_396);
lean_ctor_set(x_397, 2, x_393);
lean_ctor_set(x_397, 3, x_340);
x_398 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_398, 0, x_397);
x_399 = lean_unsigned_to_nat(32u);
x_400 = lean_mk_empty_array_with_capacity(x_399);
lean_inc(x_400);
x_401 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_401, 0, x_400);
x_402 = 5;
x_403 = lean_unsigned_to_nat(0u);
x_404 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_404, 0, x_401);
lean_ctor_set(x_404, 1, x_400);
lean_ctor_set(x_404, 2, x_403);
lean_ctor_set(x_404, 3, x_403);
lean_ctor_set_usize(x_404, 4, x_402);
x_405 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_405, 0, x_398);
lean_ctor_set(x_405, 1, x_404);
x_406 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_405, x_4, x_5, x_6, x_7, x_8, x_9, x_394);
x_407 = lean_ctor_get(x_406, 1);
lean_inc(x_407);
if (lean_is_exclusive(x_406)) {
 lean_ctor_release(x_406, 0);
 lean_ctor_release(x_406, 1);
 x_408 = x_406;
} else {
 lean_dec_ref(x_406);
 x_408 = lean_box(0);
}
lean_inc(x_393);
x_409 = l_Lean_mkApp(x_33, x_393);
x_410 = lean_expr_instantiate1(x_378, x_393);
lean_dec(x_378);
x_411 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_411, 0, x_393);
x_412 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_412, 0, x_338);
lean_ctor_set(x_412, 1, x_25);
lean_ctor_set(x_412, 2, x_395);
lean_ctor_set(x_412, 3, x_411);
lean_ctor_set(x_3, 1, x_337);
lean_ctor_set(x_3, 0, x_412);
if (lean_is_scalar(x_390)) {
 x_413 = lean_alloc_ctor(0, 2, 0);
} else {
 x_413 = x_390;
}
lean_ctor_set(x_413, 0, x_410);
lean_ctor_set(x_413, 1, x_3);
lean_ctor_set(x_24, 1, x_413);
lean_ctor_set(x_24, 0, x_409);
if (lean_is_scalar(x_408)) {
 x_414 = lean_alloc_ctor(0, 2, 0);
} else {
 x_414 = x_408;
}
lean_ctor_set(x_414, 0, x_24);
lean_ctor_set(x_414, 1, x_407);
x_15 = x_414;
goto block_23;
}
else
{
lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; 
lean_dec(x_390);
lean_dec(x_389);
lean_dec(x_380);
lean_dec(x_378);
lean_dec(x_341);
lean_dec(x_340);
lean_dec(x_338);
lean_free_object(x_24);
lean_dec(x_337);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_415 = lean_ctor_get(x_392, 0);
lean_inc(x_415);
x_416 = lean_ctor_get(x_392, 1);
lean_inc(x_416);
if (lean_is_exclusive(x_392)) {
 lean_ctor_release(x_392, 0);
 lean_ctor_release(x_392, 1);
 x_417 = x_392;
} else {
 lean_dec_ref(x_392);
 x_417 = lean_box(0);
}
if (lean_is_scalar(x_417)) {
 x_418 = lean_alloc_ctor(1, 2, 0);
} else {
 x_418 = x_417;
}
lean_ctor_set(x_418, 0, x_415);
lean_ctor_set(x_418, 1, x_416);
x_15 = x_418;
goto block_23;
}
}
else
{
lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; 
lean_dec(x_384);
lean_dec(x_380);
lean_dec(x_378);
lean_dec(x_341);
lean_dec(x_340);
lean_dec(x_338);
lean_free_object(x_24);
lean_dec(x_337);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_419 = lean_ctor_get(x_385, 0);
lean_inc(x_419);
x_420 = lean_ctor_get(x_385, 1);
lean_inc(x_420);
if (lean_is_exclusive(x_385)) {
 lean_ctor_release(x_385, 0);
 lean_ctor_release(x_385, 1);
 x_421 = x_385;
} else {
 lean_dec_ref(x_385);
 x_421 = lean_box(0);
}
if (lean_is_scalar(x_421)) {
 x_422 = lean_alloc_ctor(1, 2, 0);
} else {
 x_422 = x_421;
}
lean_ctor_set(x_422, 0, x_419);
lean_ctor_set(x_422, 1, x_420);
x_15 = x_422;
goto block_23;
}
}
else
{
lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; size_t x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; 
lean_dec(x_379);
lean_dec(x_377);
x_423 = lean_ctor_get(x_381, 1);
lean_inc(x_423);
lean_dec(x_381);
x_424 = lean_ctor_get(x_382, 0);
lean_inc(x_424);
if (lean_is_exclusive(x_382)) {
 lean_ctor_release(x_382, 0);
 x_425 = x_382;
} else {
 lean_dec_ref(x_382);
 x_425 = lean_box(0);
}
x_426 = l_Lean_mkHole(x_338);
if (lean_is_scalar(x_380)) {
 x_427 = lean_alloc_ctor(0, 1, 0);
} else {
 x_427 = x_380;
 lean_ctor_set_tag(x_427, 0);
}
lean_ctor_set(x_427, 0, x_426);
x_428 = lean_ctor_get(x_6, 1);
lean_inc(x_428);
lean_inc(x_424);
x_429 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_429, 0, x_341);
lean_ctor_set(x_429, 1, x_428);
lean_ctor_set(x_429, 2, x_424);
lean_ctor_set(x_429, 3, x_340);
x_430 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_430, 0, x_429);
x_431 = lean_unsigned_to_nat(32u);
x_432 = lean_mk_empty_array_with_capacity(x_431);
lean_inc(x_432);
x_433 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_433, 0, x_432);
x_434 = 5;
x_435 = lean_unsigned_to_nat(0u);
x_436 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_436, 0, x_433);
lean_ctor_set(x_436, 1, x_432);
lean_ctor_set(x_436, 2, x_435);
lean_ctor_set(x_436, 3, x_435);
lean_ctor_set_usize(x_436, 4, x_434);
x_437 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_437, 0, x_430);
lean_ctor_set(x_437, 1, x_436);
x_438 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_437, x_4, x_5, x_6, x_7, x_8, x_9, x_423);
x_439 = lean_ctor_get(x_438, 1);
lean_inc(x_439);
if (lean_is_exclusive(x_438)) {
 lean_ctor_release(x_438, 0);
 lean_ctor_release(x_438, 1);
 x_440 = x_438;
} else {
 lean_dec_ref(x_438);
 x_440 = lean_box(0);
}
lean_inc(x_424);
x_441 = l_Lean_mkApp(x_33, x_424);
x_442 = lean_expr_instantiate1(x_378, x_424);
lean_dec(x_378);
if (lean_is_scalar(x_425)) {
 x_443 = lean_alloc_ctor(1, 1, 0);
} else {
 x_443 = x_425;
}
lean_ctor_set(x_443, 0, x_424);
x_444 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_444, 0, x_338);
lean_ctor_set(x_444, 1, x_25);
lean_ctor_set(x_444, 2, x_427);
lean_ctor_set(x_444, 3, x_443);
lean_ctor_set(x_3, 1, x_337);
lean_ctor_set(x_3, 0, x_444);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_442);
lean_ctor_set(x_2, 0, x_441);
if (lean_is_scalar(x_440)) {
 x_445 = lean_alloc_ctor(0, 2, 0);
} else {
 x_445 = x_440;
}
lean_ctor_set(x_445, 0, x_2);
lean_ctor_set(x_445, 1, x_439);
x_15 = x_445;
goto block_23;
}
}
else
{
lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; 
lean_dec(x_380);
lean_dec(x_379);
lean_dec(x_378);
lean_dec(x_377);
lean_dec(x_341);
lean_dec(x_340);
lean_dec(x_338);
lean_free_object(x_24);
lean_dec(x_337);
lean_free_object(x_2);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_446 = lean_ctor_get(x_381, 0);
lean_inc(x_446);
x_447 = lean_ctor_get(x_381, 1);
lean_inc(x_447);
if (lean_is_exclusive(x_381)) {
 lean_ctor_release(x_381, 0);
 lean_ctor_release(x_381, 1);
 x_448 = x_381;
} else {
 lean_dec_ref(x_381);
 x_448 = lean_box(0);
}
if (lean_is_scalar(x_448)) {
 x_449 = lean_alloc_ctor(1, 2, 0);
} else {
 x_449 = x_448;
}
lean_ctor_set(x_449, 0, x_446);
lean_ctor_set(x_449, 1, x_447);
x_15 = x_449;
goto block_23;
}
}
default: 
{
lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; uint8_t x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; size_t x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; 
x_450 = lean_ctor_get(x_342, 1);
lean_inc(x_450);
lean_dec(x_342);
x_451 = lean_ctor_get(x_343, 1);
lean_inc(x_451);
x_452 = lean_ctor_get(x_343, 2);
lean_inc(x_452);
lean_dec(x_343);
x_453 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_453, 0, x_451);
x_454 = lean_ctor_get(x_8, 0);
lean_inc(x_454);
x_455 = lean_ctor_get(x_8, 1);
lean_inc(x_455);
x_456 = lean_ctor_get(x_8, 2);
lean_inc(x_456);
x_457 = lean_ctor_get(x_8, 3);
lean_inc(x_457);
x_458 = lean_ctor_get(x_8, 4);
lean_inc(x_458);
x_459 = lean_ctor_get(x_8, 5);
lean_inc(x_459);
x_460 = lean_ctor_get(x_8, 6);
lean_inc(x_460);
x_461 = lean_ctor_get(x_8, 7);
lean_inc(x_461);
x_462 = l_Lean_replaceRef(x_338, x_457);
lean_dec(x_457);
x_463 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_463, 0, x_454);
lean_ctor_set(x_463, 1, x_455);
lean_ctor_set(x_463, 2, x_456);
lean_ctor_set(x_463, 3, x_462);
lean_ctor_set(x_463, 4, x_458);
lean_ctor_set(x_463, 5, x_459);
lean_ctor_set(x_463, 6, x_460);
lean_ctor_set(x_463, 7, x_461);
x_464 = 0;
x_465 = lean_box(0);
lean_inc(x_6);
x_466 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_453, x_464, x_465, x_6, x_7, x_463, x_9, x_450);
lean_dec(x_463);
x_467 = lean_ctor_get(x_466, 0);
lean_inc(x_467);
x_468 = lean_ctor_get(x_466, 1);
lean_inc(x_468);
lean_dec(x_466);
x_469 = l_Lean_Elab_Term_StructInst_markDefaultMissing(x_467);
x_470 = lean_ctor_get(x_6, 1);
lean_inc(x_470);
lean_inc(x_469);
x_471 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_471, 0, x_341);
lean_ctor_set(x_471, 1, x_470);
lean_ctor_set(x_471, 2, x_469);
lean_ctor_set(x_471, 3, x_340);
x_472 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_472, 0, x_471);
x_473 = lean_unsigned_to_nat(32u);
x_474 = lean_mk_empty_array_with_capacity(x_473);
lean_inc(x_474);
x_475 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_475, 0, x_474);
x_476 = 5;
x_477 = lean_unsigned_to_nat(0u);
x_478 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_478, 0, x_475);
lean_ctor_set(x_478, 1, x_474);
lean_ctor_set(x_478, 2, x_477);
lean_ctor_set(x_478, 3, x_477);
lean_ctor_set_usize(x_478, 4, x_476);
x_479 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_479, 0, x_472);
lean_ctor_set(x_479, 1, x_478);
x_480 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_479, x_4, x_5, x_6, x_7, x_8, x_9, x_468);
x_481 = lean_ctor_get(x_480, 1);
lean_inc(x_481);
if (lean_is_exclusive(x_480)) {
 lean_ctor_release(x_480, 0);
 lean_ctor_release(x_480, 1);
 x_482 = x_480;
} else {
 lean_dec_ref(x_480);
 x_482 = lean_box(0);
}
lean_inc(x_469);
x_483 = l_Lean_mkApp(x_33, x_469);
x_484 = lean_expr_instantiate1(x_452, x_469);
lean_dec(x_452);
x_485 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_485, 0, x_469);
x_486 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_486, 0, x_338);
lean_ctor_set(x_486, 1, x_25);
lean_ctor_set(x_486, 2, x_339);
lean_ctor_set(x_486, 3, x_485);
lean_ctor_set(x_3, 1, x_337);
lean_ctor_set(x_3, 0, x_486);
lean_ctor_set(x_24, 1, x_3);
lean_ctor_set(x_24, 0, x_484);
lean_ctor_set(x_2, 0, x_483);
if (lean_is_scalar(x_482)) {
 x_487 = lean_alloc_ctor(0, 2, 0);
} else {
 x_487 = x_482;
}
lean_ctor_set(x_487, 0, x_2);
lean_ctor_set(x_487, 1, x_481);
x_15 = x_487;
goto block_23;
}
}
}
else
{
lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; 
lean_dec(x_340);
lean_dec(x_339);
lean_free_object(x_24);
lean_dec(x_337);
lean_free_object(x_2);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_488 = lean_ctor_get(x_342, 1);
lean_inc(x_488);
lean_dec(x_342);
x_489 = lean_mk_string("unexpected constructor type");
x_490 = l_Lean_stringToMessageData(x_489);
lean_dec(x_489);
x_491 = l_Lean_indentExpr(x_343);
x_492 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_492, 0, x_490);
lean_ctor_set(x_492, 1, x_491);
x_493 = lean_mk_string("");
x_494 = l_Lean_stringToMessageData(x_493);
lean_dec(x_493);
x_495 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_495, 0, x_492);
lean_ctor_set(x_495, 1, x_494);
x_496 = lean_ctor_get(x_8, 0);
lean_inc(x_496);
x_497 = lean_ctor_get(x_8, 1);
lean_inc(x_497);
x_498 = lean_ctor_get(x_8, 2);
lean_inc(x_498);
x_499 = lean_ctor_get(x_8, 3);
lean_inc(x_499);
x_500 = lean_ctor_get(x_8, 4);
lean_inc(x_500);
x_501 = lean_ctor_get(x_8, 5);
lean_inc(x_501);
x_502 = lean_ctor_get(x_8, 6);
lean_inc(x_502);
x_503 = lean_ctor_get(x_8, 7);
lean_inc(x_503);
x_504 = l_Lean_replaceRef(x_338, x_499);
lean_dec(x_499);
lean_dec(x_338);
x_505 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_505, 0, x_496);
lean_ctor_set(x_505, 1, x_497);
lean_ctor_set(x_505, 2, x_498);
lean_ctor_set(x_505, 3, x_504);
lean_ctor_set(x_505, 4, x_500);
lean_ctor_set(x_505, 5, x_501);
lean_ctor_set(x_505, 6, x_502);
lean_ctor_set(x_505, 7, x_503);
lean_inc(x_4);
lean_inc(x_1);
x_506 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_341, x_1, x_495, x_4, x_5, x_6, x_7, x_505, x_9, x_488);
lean_dec(x_505);
x_15 = x_506;
goto block_23;
}
}
else
{
lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; 
lean_dec(x_341);
lean_dec(x_340);
lean_dec(x_339);
lean_dec(x_338);
lean_free_object(x_24);
lean_dec(x_337);
lean_free_object(x_2);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_507 = lean_ctor_get(x_342, 0);
lean_inc(x_507);
x_508 = lean_ctor_get(x_342, 1);
lean_inc(x_508);
if (lean_is_exclusive(x_342)) {
 lean_ctor_release(x_342, 0);
 lean_ctor_release(x_342, 1);
 x_509 = x_342;
} else {
 lean_dec_ref(x_342);
 x_509 = lean_box(0);
}
if (lean_is_scalar(x_509)) {
 x_510 = lean_alloc_ctor(1, 2, 0);
} else {
 x_510 = x_509;
}
lean_ctor_set(x_510, 0, x_507);
lean_ctor_set(x_510, 1, x_508);
x_15 = x_510;
goto block_23;
}
}
}
else
{
lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; 
x_511 = lean_ctor_get(x_24, 0);
x_512 = lean_ctor_get(x_24, 1);
lean_inc(x_512);
lean_inc(x_511);
lean_dec(x_24);
x_513 = lean_ctor_get(x_13, 0);
lean_inc(x_513);
x_514 = lean_ctor_get(x_13, 2);
lean_inc(x_514);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 lean_ctor_release(x_13, 2);
 lean_ctor_release(x_13, 3);
 x_515 = x_13;
} else {
 lean_dec_ref(x_13);
 x_515 = lean_box(0);
}
x_516 = lean_ctor_get(x_30, 0);
lean_inc(x_516);
x_517 = lean_ctor_get(x_30, 1);
lean_inc(x_517);
lean_dec(x_30);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_518 = l_Lean_Meta_whnfForall(x_511, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_518) == 0)
{
lean_object* x_519; 
x_519 = lean_ctor_get(x_518, 0);
lean_inc(x_519);
if (lean_obj_tag(x_519) == 7)
{
switch (lean_obj_tag(x_514)) {
case 0:
{
lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; uint8_t x_526; lean_object* x_527; 
x_520 = lean_ctor_get(x_518, 1);
lean_inc(x_520);
lean_dec(x_518);
x_521 = lean_ctor_get(x_519, 1);
lean_inc(x_521);
x_522 = lean_ctor_get(x_519, 2);
lean_inc(x_522);
lean_dec(x_519);
x_523 = lean_ctor_get(x_514, 0);
lean_inc(x_523);
x_524 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_524, 0, x_521);
x_525 = lean_box(0);
x_526 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_527 = l_Lean_Elab_Term_elabTermEnsuringType(x_523, x_524, x_526, x_526, x_525, x_4, x_5, x_6, x_7, x_8, x_9, x_520);
if (lean_obj_tag(x_527) == 0)
{
lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; size_t x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; 
x_528 = lean_ctor_get(x_527, 0);
lean_inc(x_528);
x_529 = lean_ctor_get(x_527, 1);
lean_inc(x_529);
lean_dec(x_527);
x_530 = lean_ctor_get(x_6, 1);
lean_inc(x_530);
lean_inc(x_528);
x_531 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_531, 0, x_517);
lean_ctor_set(x_531, 1, x_530);
lean_ctor_set(x_531, 2, x_528);
lean_ctor_set(x_531, 3, x_516);
x_532 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_532, 0, x_531);
x_533 = lean_unsigned_to_nat(32u);
x_534 = lean_mk_empty_array_with_capacity(x_533);
lean_inc(x_534);
x_535 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_535, 0, x_534);
x_536 = 5;
x_537 = lean_unsigned_to_nat(0u);
x_538 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_538, 0, x_535);
lean_ctor_set(x_538, 1, x_534);
lean_ctor_set(x_538, 2, x_537);
lean_ctor_set(x_538, 3, x_537);
lean_ctor_set_usize(x_538, 4, x_536);
x_539 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_539, 0, x_532);
lean_ctor_set(x_539, 1, x_538);
x_540 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_539, x_4, x_5, x_6, x_7, x_8, x_9, x_529);
x_541 = lean_ctor_get(x_540, 1);
lean_inc(x_541);
if (lean_is_exclusive(x_540)) {
 lean_ctor_release(x_540, 0);
 lean_ctor_release(x_540, 1);
 x_542 = x_540;
} else {
 lean_dec_ref(x_540);
 x_542 = lean_box(0);
}
lean_inc(x_528);
x_543 = l_Lean_mkApp(x_33, x_528);
x_544 = lean_expr_instantiate1(x_522, x_528);
lean_dec(x_522);
x_545 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_545, 0, x_528);
if (lean_is_scalar(x_515)) {
 x_546 = lean_alloc_ctor(0, 4, 0);
} else {
 x_546 = x_515;
}
lean_ctor_set(x_546, 0, x_513);
lean_ctor_set(x_546, 1, x_25);
lean_ctor_set(x_546, 2, x_514);
lean_ctor_set(x_546, 3, x_545);
lean_ctor_set(x_3, 1, x_512);
lean_ctor_set(x_3, 0, x_546);
x_547 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_547, 0, x_544);
lean_ctor_set(x_547, 1, x_3);
lean_ctor_set(x_2, 1, x_547);
lean_ctor_set(x_2, 0, x_543);
if (lean_is_scalar(x_542)) {
 x_548 = lean_alloc_ctor(0, 2, 0);
} else {
 x_548 = x_542;
}
lean_ctor_set(x_548, 0, x_2);
lean_ctor_set(x_548, 1, x_541);
x_15 = x_548;
goto block_23;
}
else
{
lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; 
lean_dec(x_522);
lean_dec(x_517);
lean_dec(x_516);
lean_dec(x_515);
lean_dec(x_514);
lean_dec(x_513);
lean_dec(x_512);
lean_free_object(x_2);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_549 = lean_ctor_get(x_527, 0);
lean_inc(x_549);
x_550 = lean_ctor_get(x_527, 1);
lean_inc(x_550);
if (lean_is_exclusive(x_527)) {
 lean_ctor_release(x_527, 0);
 lean_ctor_release(x_527, 1);
 x_551 = x_527;
} else {
 lean_dec_ref(x_527);
 x_551 = lean_box(0);
}
if (lean_is_scalar(x_551)) {
 x_552 = lean_alloc_ctor(1, 2, 0);
} else {
 x_552 = x_551;
}
lean_ctor_set(x_552, 0, x_549);
lean_ctor_set(x_552, 1, x_550);
x_15 = x_552;
goto block_23;
}
}
case 1:
{
lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; 
x_553 = lean_ctor_get(x_518, 1);
lean_inc(x_553);
lean_dec(x_518);
x_554 = lean_ctor_get(x_519, 1);
lean_inc(x_554);
x_555 = lean_ctor_get(x_519, 2);
lean_inc(x_555);
lean_dec(x_519);
x_556 = lean_ctor_get(x_514, 0);
lean_inc(x_556);
if (lean_is_exclusive(x_514)) {
 lean_ctor_release(x_514, 0);
 x_557 = x_514;
} else {
 lean_dec_ref(x_514);
 x_557 = lean_box(0);
}
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_554);
x_558 = l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(x_556, x_554, x_4, x_5, x_6, x_7, x_8, x_9, x_553);
if (lean_obj_tag(x_558) == 0)
{
lean_object* x_559; 
x_559 = lean_ctor_get(x_558, 0);
lean_inc(x_559);
if (lean_obj_tag(x_559) == 0)
{
lean_object* x_560; lean_object* x_561; lean_object* x_562; 
lean_free_object(x_2);
x_560 = lean_ctor_get(x_558, 1);
lean_inc(x_560);
lean_dec(x_558);
x_561 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_561, 0, x_554);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_561);
x_562 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(x_556, x_561, x_4, x_5, x_6, x_7, x_8, x_9, x_560);
if (lean_obj_tag(x_562) == 0)
{
lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; 
x_563 = lean_ctor_get(x_562, 0);
lean_inc(x_563);
x_564 = lean_ctor_get(x_562, 1);
lean_inc(x_564);
lean_dec(x_562);
x_565 = lean_ctor_get(x_563, 0);
lean_inc(x_565);
x_566 = lean_ctor_get(x_563, 1);
lean_inc(x_566);
if (lean_is_exclusive(x_563)) {
 lean_ctor_release(x_563, 0);
 lean_ctor_release(x_563, 1);
 x_567 = x_563;
} else {
 lean_dec_ref(x_563);
 x_567 = lean_box(0);
}
x_568 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_569 = l_Lean_Elab_Term_ensureHasType(x_561, x_565, x_568, x_4, x_5, x_6, x_7, x_8, x_9, x_564);
if (lean_obj_tag(x_569) == 0)
{
lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; size_t x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; 
x_570 = lean_ctor_get(x_569, 0);
lean_inc(x_570);
x_571 = lean_ctor_get(x_569, 1);
lean_inc(x_571);
lean_dec(x_569);
if (lean_is_scalar(x_557)) {
 x_572 = lean_alloc_ctor(1, 1, 0);
} else {
 x_572 = x_557;
}
lean_ctor_set(x_572, 0, x_566);
x_573 = lean_ctor_get(x_6, 1);
lean_inc(x_573);
lean_inc(x_570);
x_574 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_574, 0, x_517);
lean_ctor_set(x_574, 1, x_573);
lean_ctor_set(x_574, 2, x_570);
lean_ctor_set(x_574, 3, x_516);
x_575 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_575, 0, x_574);
x_576 = lean_unsigned_to_nat(32u);
x_577 = lean_mk_empty_array_with_capacity(x_576);
lean_inc(x_577);
x_578 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_578, 0, x_577);
x_579 = 5;
x_580 = lean_unsigned_to_nat(0u);
x_581 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_581, 0, x_578);
lean_ctor_set(x_581, 1, x_577);
lean_ctor_set(x_581, 2, x_580);
lean_ctor_set(x_581, 3, x_580);
lean_ctor_set_usize(x_581, 4, x_579);
x_582 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_582, 0, x_575);
lean_ctor_set(x_582, 1, x_581);
x_583 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_582, x_4, x_5, x_6, x_7, x_8, x_9, x_571);
x_584 = lean_ctor_get(x_583, 1);
lean_inc(x_584);
if (lean_is_exclusive(x_583)) {
 lean_ctor_release(x_583, 0);
 lean_ctor_release(x_583, 1);
 x_585 = x_583;
} else {
 lean_dec_ref(x_583);
 x_585 = lean_box(0);
}
lean_inc(x_570);
x_586 = l_Lean_mkApp(x_33, x_570);
x_587 = lean_expr_instantiate1(x_555, x_570);
lean_dec(x_555);
x_588 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_588, 0, x_570);
if (lean_is_scalar(x_515)) {
 x_589 = lean_alloc_ctor(0, 4, 0);
} else {
 x_589 = x_515;
}
lean_ctor_set(x_589, 0, x_513);
lean_ctor_set(x_589, 1, x_25);
lean_ctor_set(x_589, 2, x_572);
lean_ctor_set(x_589, 3, x_588);
lean_ctor_set(x_3, 1, x_512);
lean_ctor_set(x_3, 0, x_589);
if (lean_is_scalar(x_567)) {
 x_590 = lean_alloc_ctor(0, 2, 0);
} else {
 x_590 = x_567;
}
lean_ctor_set(x_590, 0, x_587);
lean_ctor_set(x_590, 1, x_3);
x_591 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_591, 0, x_586);
lean_ctor_set(x_591, 1, x_590);
if (lean_is_scalar(x_585)) {
 x_592 = lean_alloc_ctor(0, 2, 0);
} else {
 x_592 = x_585;
}
lean_ctor_set(x_592, 0, x_591);
lean_ctor_set(x_592, 1, x_584);
x_15 = x_592;
goto block_23;
}
else
{
lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; 
lean_dec(x_567);
lean_dec(x_566);
lean_dec(x_557);
lean_dec(x_555);
lean_dec(x_517);
lean_dec(x_516);
lean_dec(x_515);
lean_dec(x_513);
lean_dec(x_512);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_593 = lean_ctor_get(x_569, 0);
lean_inc(x_593);
x_594 = lean_ctor_get(x_569, 1);
lean_inc(x_594);
if (lean_is_exclusive(x_569)) {
 lean_ctor_release(x_569, 0);
 lean_ctor_release(x_569, 1);
 x_595 = x_569;
} else {
 lean_dec_ref(x_569);
 x_595 = lean_box(0);
}
if (lean_is_scalar(x_595)) {
 x_596 = lean_alloc_ctor(1, 2, 0);
} else {
 x_596 = x_595;
}
lean_ctor_set(x_596, 0, x_593);
lean_ctor_set(x_596, 1, x_594);
x_15 = x_596;
goto block_23;
}
}
else
{
lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; 
lean_dec(x_561);
lean_dec(x_557);
lean_dec(x_555);
lean_dec(x_517);
lean_dec(x_516);
lean_dec(x_515);
lean_dec(x_513);
lean_dec(x_512);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_597 = lean_ctor_get(x_562, 0);
lean_inc(x_597);
x_598 = lean_ctor_get(x_562, 1);
lean_inc(x_598);
if (lean_is_exclusive(x_562)) {
 lean_ctor_release(x_562, 0);
 lean_ctor_release(x_562, 1);
 x_599 = x_562;
} else {
 lean_dec_ref(x_562);
 x_599 = lean_box(0);
}
if (lean_is_scalar(x_599)) {
 x_600 = lean_alloc_ctor(1, 2, 0);
} else {
 x_600 = x_599;
}
lean_ctor_set(x_600, 0, x_597);
lean_ctor_set(x_600, 1, x_598);
x_15 = x_600;
goto block_23;
}
}
else
{
lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; size_t x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; 
lean_dec(x_556);
lean_dec(x_554);
x_601 = lean_ctor_get(x_558, 1);
lean_inc(x_601);
lean_dec(x_558);
x_602 = lean_ctor_get(x_559, 0);
lean_inc(x_602);
if (lean_is_exclusive(x_559)) {
 lean_ctor_release(x_559, 0);
 x_603 = x_559;
} else {
 lean_dec_ref(x_559);
 x_603 = lean_box(0);
}
x_604 = l_Lean_mkHole(x_513);
if (lean_is_scalar(x_557)) {
 x_605 = lean_alloc_ctor(0, 1, 0);
} else {
 x_605 = x_557;
 lean_ctor_set_tag(x_605, 0);
}
lean_ctor_set(x_605, 0, x_604);
x_606 = lean_ctor_get(x_6, 1);
lean_inc(x_606);
lean_inc(x_602);
x_607 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_607, 0, x_517);
lean_ctor_set(x_607, 1, x_606);
lean_ctor_set(x_607, 2, x_602);
lean_ctor_set(x_607, 3, x_516);
x_608 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_608, 0, x_607);
x_609 = lean_unsigned_to_nat(32u);
x_610 = lean_mk_empty_array_with_capacity(x_609);
lean_inc(x_610);
x_611 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_611, 0, x_610);
x_612 = 5;
x_613 = lean_unsigned_to_nat(0u);
x_614 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_614, 0, x_611);
lean_ctor_set(x_614, 1, x_610);
lean_ctor_set(x_614, 2, x_613);
lean_ctor_set(x_614, 3, x_613);
lean_ctor_set_usize(x_614, 4, x_612);
x_615 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_615, 0, x_608);
lean_ctor_set(x_615, 1, x_614);
x_616 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_615, x_4, x_5, x_6, x_7, x_8, x_9, x_601);
x_617 = lean_ctor_get(x_616, 1);
lean_inc(x_617);
if (lean_is_exclusive(x_616)) {
 lean_ctor_release(x_616, 0);
 lean_ctor_release(x_616, 1);
 x_618 = x_616;
} else {
 lean_dec_ref(x_616);
 x_618 = lean_box(0);
}
lean_inc(x_602);
x_619 = l_Lean_mkApp(x_33, x_602);
x_620 = lean_expr_instantiate1(x_555, x_602);
lean_dec(x_555);
if (lean_is_scalar(x_603)) {
 x_621 = lean_alloc_ctor(1, 1, 0);
} else {
 x_621 = x_603;
}
lean_ctor_set(x_621, 0, x_602);
if (lean_is_scalar(x_515)) {
 x_622 = lean_alloc_ctor(0, 4, 0);
} else {
 x_622 = x_515;
}
lean_ctor_set(x_622, 0, x_513);
lean_ctor_set(x_622, 1, x_25);
lean_ctor_set(x_622, 2, x_605);
lean_ctor_set(x_622, 3, x_621);
lean_ctor_set(x_3, 1, x_512);
lean_ctor_set(x_3, 0, x_622);
x_623 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_623, 0, x_620);
lean_ctor_set(x_623, 1, x_3);
lean_ctor_set(x_2, 1, x_623);
lean_ctor_set(x_2, 0, x_619);
if (lean_is_scalar(x_618)) {
 x_624 = lean_alloc_ctor(0, 2, 0);
} else {
 x_624 = x_618;
}
lean_ctor_set(x_624, 0, x_2);
lean_ctor_set(x_624, 1, x_617);
x_15 = x_624;
goto block_23;
}
}
else
{
lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; 
lean_dec(x_557);
lean_dec(x_556);
lean_dec(x_555);
lean_dec(x_554);
lean_dec(x_517);
lean_dec(x_516);
lean_dec(x_515);
lean_dec(x_513);
lean_dec(x_512);
lean_free_object(x_2);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_625 = lean_ctor_get(x_558, 0);
lean_inc(x_625);
x_626 = lean_ctor_get(x_558, 1);
lean_inc(x_626);
if (lean_is_exclusive(x_558)) {
 lean_ctor_release(x_558, 0);
 lean_ctor_release(x_558, 1);
 x_627 = x_558;
} else {
 lean_dec_ref(x_558);
 x_627 = lean_box(0);
}
if (lean_is_scalar(x_627)) {
 x_628 = lean_alloc_ctor(1, 2, 0);
} else {
 x_628 = x_627;
}
lean_ctor_set(x_628, 0, x_625);
lean_ctor_set(x_628, 1, x_626);
x_15 = x_628;
goto block_23;
}
}
default: 
{
lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; uint8_t x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; size_t x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; 
x_629 = lean_ctor_get(x_518, 1);
lean_inc(x_629);
lean_dec(x_518);
x_630 = lean_ctor_get(x_519, 1);
lean_inc(x_630);
x_631 = lean_ctor_get(x_519, 2);
lean_inc(x_631);
lean_dec(x_519);
x_632 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_632, 0, x_630);
x_633 = lean_ctor_get(x_8, 0);
lean_inc(x_633);
x_634 = lean_ctor_get(x_8, 1);
lean_inc(x_634);
x_635 = lean_ctor_get(x_8, 2);
lean_inc(x_635);
x_636 = lean_ctor_get(x_8, 3);
lean_inc(x_636);
x_637 = lean_ctor_get(x_8, 4);
lean_inc(x_637);
x_638 = lean_ctor_get(x_8, 5);
lean_inc(x_638);
x_639 = lean_ctor_get(x_8, 6);
lean_inc(x_639);
x_640 = lean_ctor_get(x_8, 7);
lean_inc(x_640);
x_641 = l_Lean_replaceRef(x_513, x_636);
lean_dec(x_636);
x_642 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_642, 0, x_633);
lean_ctor_set(x_642, 1, x_634);
lean_ctor_set(x_642, 2, x_635);
lean_ctor_set(x_642, 3, x_641);
lean_ctor_set(x_642, 4, x_637);
lean_ctor_set(x_642, 5, x_638);
lean_ctor_set(x_642, 6, x_639);
lean_ctor_set(x_642, 7, x_640);
x_643 = 0;
x_644 = lean_box(0);
lean_inc(x_6);
x_645 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_632, x_643, x_644, x_6, x_7, x_642, x_9, x_629);
lean_dec(x_642);
x_646 = lean_ctor_get(x_645, 0);
lean_inc(x_646);
x_647 = lean_ctor_get(x_645, 1);
lean_inc(x_647);
lean_dec(x_645);
x_648 = l_Lean_Elab_Term_StructInst_markDefaultMissing(x_646);
x_649 = lean_ctor_get(x_6, 1);
lean_inc(x_649);
lean_inc(x_648);
x_650 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_650, 0, x_517);
lean_ctor_set(x_650, 1, x_649);
lean_ctor_set(x_650, 2, x_648);
lean_ctor_set(x_650, 3, x_516);
x_651 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_651, 0, x_650);
x_652 = lean_unsigned_to_nat(32u);
x_653 = lean_mk_empty_array_with_capacity(x_652);
lean_inc(x_653);
x_654 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_654, 0, x_653);
x_655 = 5;
x_656 = lean_unsigned_to_nat(0u);
x_657 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_657, 0, x_654);
lean_ctor_set(x_657, 1, x_653);
lean_ctor_set(x_657, 2, x_656);
lean_ctor_set(x_657, 3, x_656);
lean_ctor_set_usize(x_657, 4, x_655);
x_658 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_658, 0, x_651);
lean_ctor_set(x_658, 1, x_657);
x_659 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_658, x_4, x_5, x_6, x_7, x_8, x_9, x_647);
x_660 = lean_ctor_get(x_659, 1);
lean_inc(x_660);
if (lean_is_exclusive(x_659)) {
 lean_ctor_release(x_659, 0);
 lean_ctor_release(x_659, 1);
 x_661 = x_659;
} else {
 lean_dec_ref(x_659);
 x_661 = lean_box(0);
}
lean_inc(x_648);
x_662 = l_Lean_mkApp(x_33, x_648);
x_663 = lean_expr_instantiate1(x_631, x_648);
lean_dec(x_631);
x_664 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_664, 0, x_648);
if (lean_is_scalar(x_515)) {
 x_665 = lean_alloc_ctor(0, 4, 0);
} else {
 x_665 = x_515;
}
lean_ctor_set(x_665, 0, x_513);
lean_ctor_set(x_665, 1, x_25);
lean_ctor_set(x_665, 2, x_514);
lean_ctor_set(x_665, 3, x_664);
lean_ctor_set(x_3, 1, x_512);
lean_ctor_set(x_3, 0, x_665);
x_666 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_666, 0, x_663);
lean_ctor_set(x_666, 1, x_3);
lean_ctor_set(x_2, 1, x_666);
lean_ctor_set(x_2, 0, x_662);
if (lean_is_scalar(x_661)) {
 x_667 = lean_alloc_ctor(0, 2, 0);
} else {
 x_667 = x_661;
}
lean_ctor_set(x_667, 0, x_2);
lean_ctor_set(x_667, 1, x_660);
x_15 = x_667;
goto block_23;
}
}
}
else
{
lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; 
lean_dec(x_516);
lean_dec(x_515);
lean_dec(x_514);
lean_dec(x_512);
lean_free_object(x_2);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_668 = lean_ctor_get(x_518, 1);
lean_inc(x_668);
lean_dec(x_518);
x_669 = lean_mk_string("unexpected constructor type");
x_670 = l_Lean_stringToMessageData(x_669);
lean_dec(x_669);
x_671 = l_Lean_indentExpr(x_519);
x_672 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_672, 0, x_670);
lean_ctor_set(x_672, 1, x_671);
x_673 = lean_mk_string("");
x_674 = l_Lean_stringToMessageData(x_673);
lean_dec(x_673);
x_675 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_675, 0, x_672);
lean_ctor_set(x_675, 1, x_674);
x_676 = lean_ctor_get(x_8, 0);
lean_inc(x_676);
x_677 = lean_ctor_get(x_8, 1);
lean_inc(x_677);
x_678 = lean_ctor_get(x_8, 2);
lean_inc(x_678);
x_679 = lean_ctor_get(x_8, 3);
lean_inc(x_679);
x_680 = lean_ctor_get(x_8, 4);
lean_inc(x_680);
x_681 = lean_ctor_get(x_8, 5);
lean_inc(x_681);
x_682 = lean_ctor_get(x_8, 6);
lean_inc(x_682);
x_683 = lean_ctor_get(x_8, 7);
lean_inc(x_683);
x_684 = l_Lean_replaceRef(x_513, x_679);
lean_dec(x_679);
lean_dec(x_513);
x_685 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_685, 0, x_676);
lean_ctor_set(x_685, 1, x_677);
lean_ctor_set(x_685, 2, x_678);
lean_ctor_set(x_685, 3, x_684);
lean_ctor_set(x_685, 4, x_680);
lean_ctor_set(x_685, 5, x_681);
lean_ctor_set(x_685, 6, x_682);
lean_ctor_set(x_685, 7, x_683);
lean_inc(x_4);
lean_inc(x_1);
x_686 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_517, x_1, x_675, x_4, x_5, x_6, x_7, x_685, x_9, x_668);
lean_dec(x_685);
x_15 = x_686;
goto block_23;
}
}
else
{
lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; 
lean_dec(x_517);
lean_dec(x_516);
lean_dec(x_515);
lean_dec(x_514);
lean_dec(x_513);
lean_dec(x_512);
lean_free_object(x_2);
lean_dec(x_33);
lean_dec(x_25);
lean_free_object(x_3);
x_687 = lean_ctor_get(x_518, 0);
lean_inc(x_687);
x_688 = lean_ctor_get(x_518, 1);
lean_inc(x_688);
if (lean_is_exclusive(x_518)) {
 lean_ctor_release(x_518, 0);
 lean_ctor_release(x_518, 1);
 x_689 = x_518;
} else {
 lean_dec_ref(x_518);
 x_689 = lean_box(0);
}
if (lean_is_scalar(x_689)) {
 x_690 = lean_alloc_ctor(1, 2, 0);
} else {
 x_690 = x_689;
}
lean_ctor_set(x_690, 0, x_687);
lean_ctor_set(x_690, 1, x_688);
x_15 = x_690;
goto block_23;
}
}
}
else
{
lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; 
x_691 = lean_ctor_get(x_2, 0);
lean_inc(x_691);
lean_dec(x_2);
x_692 = lean_ctor_get(x_24, 0);
lean_inc(x_692);
x_693 = lean_ctor_get(x_24, 1);
lean_inc(x_693);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_694 = x_24;
} else {
 lean_dec_ref(x_24);
 x_694 = lean_box(0);
}
x_695 = lean_ctor_get(x_13, 0);
lean_inc(x_695);
x_696 = lean_ctor_get(x_13, 2);
lean_inc(x_696);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 lean_ctor_release(x_13, 2);
 lean_ctor_release(x_13, 3);
 x_697 = x_13;
} else {
 lean_dec_ref(x_13);
 x_697 = lean_box(0);
}
x_698 = lean_ctor_get(x_30, 0);
lean_inc(x_698);
x_699 = lean_ctor_get(x_30, 1);
lean_inc(x_699);
lean_dec(x_30);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_700 = l_Lean_Meta_whnfForall(x_692, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_700) == 0)
{
lean_object* x_701; 
x_701 = lean_ctor_get(x_700, 0);
lean_inc(x_701);
if (lean_obj_tag(x_701) == 7)
{
switch (lean_obj_tag(x_696)) {
case 0:
{
lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_705; lean_object* x_706; lean_object* x_707; uint8_t x_708; lean_object* x_709; 
x_702 = lean_ctor_get(x_700, 1);
lean_inc(x_702);
lean_dec(x_700);
x_703 = lean_ctor_get(x_701, 1);
lean_inc(x_703);
x_704 = lean_ctor_get(x_701, 2);
lean_inc(x_704);
lean_dec(x_701);
x_705 = lean_ctor_get(x_696, 0);
lean_inc(x_705);
x_706 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_706, 0, x_703);
x_707 = lean_box(0);
x_708 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_709 = l_Lean_Elab_Term_elabTermEnsuringType(x_705, x_706, x_708, x_708, x_707, x_4, x_5, x_6, x_7, x_8, x_9, x_702);
if (lean_obj_tag(x_709) == 0)
{
lean_object* x_710; lean_object* x_711; lean_object* x_712; lean_object* x_713; lean_object* x_714; lean_object* x_715; lean_object* x_716; lean_object* x_717; size_t x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; 
x_710 = lean_ctor_get(x_709, 0);
lean_inc(x_710);
x_711 = lean_ctor_get(x_709, 1);
lean_inc(x_711);
lean_dec(x_709);
x_712 = lean_ctor_get(x_6, 1);
lean_inc(x_712);
lean_inc(x_710);
x_713 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_713, 0, x_699);
lean_ctor_set(x_713, 1, x_712);
lean_ctor_set(x_713, 2, x_710);
lean_ctor_set(x_713, 3, x_698);
x_714 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_714, 0, x_713);
x_715 = lean_unsigned_to_nat(32u);
x_716 = lean_mk_empty_array_with_capacity(x_715);
lean_inc(x_716);
x_717 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_717, 0, x_716);
x_718 = 5;
x_719 = lean_unsigned_to_nat(0u);
x_720 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_720, 0, x_717);
lean_ctor_set(x_720, 1, x_716);
lean_ctor_set(x_720, 2, x_719);
lean_ctor_set(x_720, 3, x_719);
lean_ctor_set_usize(x_720, 4, x_718);
x_721 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_721, 0, x_714);
lean_ctor_set(x_721, 1, x_720);
x_722 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_721, x_4, x_5, x_6, x_7, x_8, x_9, x_711);
x_723 = lean_ctor_get(x_722, 1);
lean_inc(x_723);
if (lean_is_exclusive(x_722)) {
 lean_ctor_release(x_722, 0);
 lean_ctor_release(x_722, 1);
 x_724 = x_722;
} else {
 lean_dec_ref(x_722);
 x_724 = lean_box(0);
}
lean_inc(x_710);
x_725 = l_Lean_mkApp(x_691, x_710);
x_726 = lean_expr_instantiate1(x_704, x_710);
lean_dec(x_704);
x_727 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_727, 0, x_710);
if (lean_is_scalar(x_697)) {
 x_728 = lean_alloc_ctor(0, 4, 0);
} else {
 x_728 = x_697;
}
lean_ctor_set(x_728, 0, x_695);
lean_ctor_set(x_728, 1, x_25);
lean_ctor_set(x_728, 2, x_696);
lean_ctor_set(x_728, 3, x_727);
lean_ctor_set(x_3, 1, x_693);
lean_ctor_set(x_3, 0, x_728);
if (lean_is_scalar(x_694)) {
 x_729 = lean_alloc_ctor(0, 2, 0);
} else {
 x_729 = x_694;
}
lean_ctor_set(x_729, 0, x_726);
lean_ctor_set(x_729, 1, x_3);
x_730 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_730, 0, x_725);
lean_ctor_set(x_730, 1, x_729);
if (lean_is_scalar(x_724)) {
 x_731 = lean_alloc_ctor(0, 2, 0);
} else {
 x_731 = x_724;
}
lean_ctor_set(x_731, 0, x_730);
lean_ctor_set(x_731, 1, x_723);
x_15 = x_731;
goto block_23;
}
else
{
lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; 
lean_dec(x_704);
lean_dec(x_699);
lean_dec(x_698);
lean_dec(x_697);
lean_dec(x_696);
lean_dec(x_695);
lean_dec(x_694);
lean_dec(x_693);
lean_dec(x_691);
lean_dec(x_25);
lean_free_object(x_3);
x_732 = lean_ctor_get(x_709, 0);
lean_inc(x_732);
x_733 = lean_ctor_get(x_709, 1);
lean_inc(x_733);
if (lean_is_exclusive(x_709)) {
 lean_ctor_release(x_709, 0);
 lean_ctor_release(x_709, 1);
 x_734 = x_709;
} else {
 lean_dec_ref(x_709);
 x_734 = lean_box(0);
}
if (lean_is_scalar(x_734)) {
 x_735 = lean_alloc_ctor(1, 2, 0);
} else {
 x_735 = x_734;
}
lean_ctor_set(x_735, 0, x_732);
lean_ctor_set(x_735, 1, x_733);
x_15 = x_735;
goto block_23;
}
}
case 1:
{
lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; 
x_736 = lean_ctor_get(x_700, 1);
lean_inc(x_736);
lean_dec(x_700);
x_737 = lean_ctor_get(x_701, 1);
lean_inc(x_737);
x_738 = lean_ctor_get(x_701, 2);
lean_inc(x_738);
lean_dec(x_701);
x_739 = lean_ctor_get(x_696, 0);
lean_inc(x_739);
if (lean_is_exclusive(x_696)) {
 lean_ctor_release(x_696, 0);
 x_740 = x_696;
} else {
 lean_dec_ref(x_696);
 x_740 = lean_box(0);
}
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_737);
x_741 = l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(x_739, x_737, x_4, x_5, x_6, x_7, x_8, x_9, x_736);
if (lean_obj_tag(x_741) == 0)
{
lean_object* x_742; 
x_742 = lean_ctor_get(x_741, 0);
lean_inc(x_742);
if (lean_obj_tag(x_742) == 0)
{
lean_object* x_743; lean_object* x_744; lean_object* x_745; 
x_743 = lean_ctor_get(x_741, 1);
lean_inc(x_743);
lean_dec(x_741);
x_744 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_744, 0, x_737);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_744);
x_745 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(x_739, x_744, x_4, x_5, x_6, x_7, x_8, x_9, x_743);
if (lean_obj_tag(x_745) == 0)
{
lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; 
x_746 = lean_ctor_get(x_745, 0);
lean_inc(x_746);
x_747 = lean_ctor_get(x_745, 1);
lean_inc(x_747);
lean_dec(x_745);
x_748 = lean_ctor_get(x_746, 0);
lean_inc(x_748);
x_749 = lean_ctor_get(x_746, 1);
lean_inc(x_749);
if (lean_is_exclusive(x_746)) {
 lean_ctor_release(x_746, 0);
 lean_ctor_release(x_746, 1);
 x_750 = x_746;
} else {
 lean_dec_ref(x_746);
 x_750 = lean_box(0);
}
x_751 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_752 = l_Lean_Elab_Term_ensureHasType(x_744, x_748, x_751, x_4, x_5, x_6, x_7, x_8, x_9, x_747);
if (lean_obj_tag(x_752) == 0)
{
lean_object* x_753; lean_object* x_754; lean_object* x_755; lean_object* x_756; lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; size_t x_762; lean_object* x_763; lean_object* x_764; lean_object* x_765; lean_object* x_766; lean_object* x_767; lean_object* x_768; lean_object* x_769; lean_object* x_770; lean_object* x_771; lean_object* x_772; lean_object* x_773; lean_object* x_774; lean_object* x_775; 
x_753 = lean_ctor_get(x_752, 0);
lean_inc(x_753);
x_754 = lean_ctor_get(x_752, 1);
lean_inc(x_754);
lean_dec(x_752);
if (lean_is_scalar(x_740)) {
 x_755 = lean_alloc_ctor(1, 1, 0);
} else {
 x_755 = x_740;
}
lean_ctor_set(x_755, 0, x_749);
x_756 = lean_ctor_get(x_6, 1);
lean_inc(x_756);
lean_inc(x_753);
x_757 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_757, 0, x_699);
lean_ctor_set(x_757, 1, x_756);
lean_ctor_set(x_757, 2, x_753);
lean_ctor_set(x_757, 3, x_698);
x_758 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_758, 0, x_757);
x_759 = lean_unsigned_to_nat(32u);
x_760 = lean_mk_empty_array_with_capacity(x_759);
lean_inc(x_760);
x_761 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_761, 0, x_760);
x_762 = 5;
x_763 = lean_unsigned_to_nat(0u);
x_764 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_764, 0, x_761);
lean_ctor_set(x_764, 1, x_760);
lean_ctor_set(x_764, 2, x_763);
lean_ctor_set(x_764, 3, x_763);
lean_ctor_set_usize(x_764, 4, x_762);
x_765 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_765, 0, x_758);
lean_ctor_set(x_765, 1, x_764);
x_766 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_765, x_4, x_5, x_6, x_7, x_8, x_9, x_754);
x_767 = lean_ctor_get(x_766, 1);
lean_inc(x_767);
if (lean_is_exclusive(x_766)) {
 lean_ctor_release(x_766, 0);
 lean_ctor_release(x_766, 1);
 x_768 = x_766;
} else {
 lean_dec_ref(x_766);
 x_768 = lean_box(0);
}
lean_inc(x_753);
x_769 = l_Lean_mkApp(x_691, x_753);
x_770 = lean_expr_instantiate1(x_738, x_753);
lean_dec(x_738);
x_771 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_771, 0, x_753);
if (lean_is_scalar(x_697)) {
 x_772 = lean_alloc_ctor(0, 4, 0);
} else {
 x_772 = x_697;
}
lean_ctor_set(x_772, 0, x_695);
lean_ctor_set(x_772, 1, x_25);
lean_ctor_set(x_772, 2, x_755);
lean_ctor_set(x_772, 3, x_771);
lean_ctor_set(x_3, 1, x_693);
lean_ctor_set(x_3, 0, x_772);
if (lean_is_scalar(x_750)) {
 x_773 = lean_alloc_ctor(0, 2, 0);
} else {
 x_773 = x_750;
}
lean_ctor_set(x_773, 0, x_770);
lean_ctor_set(x_773, 1, x_3);
if (lean_is_scalar(x_694)) {
 x_774 = lean_alloc_ctor(0, 2, 0);
} else {
 x_774 = x_694;
}
lean_ctor_set(x_774, 0, x_769);
lean_ctor_set(x_774, 1, x_773);
if (lean_is_scalar(x_768)) {
 x_775 = lean_alloc_ctor(0, 2, 0);
} else {
 x_775 = x_768;
}
lean_ctor_set(x_775, 0, x_774);
lean_ctor_set(x_775, 1, x_767);
x_15 = x_775;
goto block_23;
}
else
{
lean_object* x_776; lean_object* x_777; lean_object* x_778; lean_object* x_779; 
lean_dec(x_750);
lean_dec(x_749);
lean_dec(x_740);
lean_dec(x_738);
lean_dec(x_699);
lean_dec(x_698);
lean_dec(x_697);
lean_dec(x_695);
lean_dec(x_694);
lean_dec(x_693);
lean_dec(x_691);
lean_dec(x_25);
lean_free_object(x_3);
x_776 = lean_ctor_get(x_752, 0);
lean_inc(x_776);
x_777 = lean_ctor_get(x_752, 1);
lean_inc(x_777);
if (lean_is_exclusive(x_752)) {
 lean_ctor_release(x_752, 0);
 lean_ctor_release(x_752, 1);
 x_778 = x_752;
} else {
 lean_dec_ref(x_752);
 x_778 = lean_box(0);
}
if (lean_is_scalar(x_778)) {
 x_779 = lean_alloc_ctor(1, 2, 0);
} else {
 x_779 = x_778;
}
lean_ctor_set(x_779, 0, x_776);
lean_ctor_set(x_779, 1, x_777);
x_15 = x_779;
goto block_23;
}
}
else
{
lean_object* x_780; lean_object* x_781; lean_object* x_782; lean_object* x_783; 
lean_dec(x_744);
lean_dec(x_740);
lean_dec(x_738);
lean_dec(x_699);
lean_dec(x_698);
lean_dec(x_697);
lean_dec(x_695);
lean_dec(x_694);
lean_dec(x_693);
lean_dec(x_691);
lean_dec(x_25);
lean_free_object(x_3);
x_780 = lean_ctor_get(x_745, 0);
lean_inc(x_780);
x_781 = lean_ctor_get(x_745, 1);
lean_inc(x_781);
if (lean_is_exclusive(x_745)) {
 lean_ctor_release(x_745, 0);
 lean_ctor_release(x_745, 1);
 x_782 = x_745;
} else {
 lean_dec_ref(x_745);
 x_782 = lean_box(0);
}
if (lean_is_scalar(x_782)) {
 x_783 = lean_alloc_ctor(1, 2, 0);
} else {
 x_783 = x_782;
}
lean_ctor_set(x_783, 0, x_780);
lean_ctor_set(x_783, 1, x_781);
x_15 = x_783;
goto block_23;
}
}
else
{
lean_object* x_784; lean_object* x_785; lean_object* x_786; lean_object* x_787; lean_object* x_788; lean_object* x_789; lean_object* x_790; lean_object* x_791; lean_object* x_792; lean_object* x_793; lean_object* x_794; size_t x_795; lean_object* x_796; lean_object* x_797; lean_object* x_798; lean_object* x_799; lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; lean_object* x_804; lean_object* x_805; lean_object* x_806; lean_object* x_807; lean_object* x_808; 
lean_dec(x_739);
lean_dec(x_737);
x_784 = lean_ctor_get(x_741, 1);
lean_inc(x_784);
lean_dec(x_741);
x_785 = lean_ctor_get(x_742, 0);
lean_inc(x_785);
if (lean_is_exclusive(x_742)) {
 lean_ctor_release(x_742, 0);
 x_786 = x_742;
} else {
 lean_dec_ref(x_742);
 x_786 = lean_box(0);
}
x_787 = l_Lean_mkHole(x_695);
if (lean_is_scalar(x_740)) {
 x_788 = lean_alloc_ctor(0, 1, 0);
} else {
 x_788 = x_740;
 lean_ctor_set_tag(x_788, 0);
}
lean_ctor_set(x_788, 0, x_787);
x_789 = lean_ctor_get(x_6, 1);
lean_inc(x_789);
lean_inc(x_785);
x_790 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_790, 0, x_699);
lean_ctor_set(x_790, 1, x_789);
lean_ctor_set(x_790, 2, x_785);
lean_ctor_set(x_790, 3, x_698);
x_791 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_791, 0, x_790);
x_792 = lean_unsigned_to_nat(32u);
x_793 = lean_mk_empty_array_with_capacity(x_792);
lean_inc(x_793);
x_794 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_794, 0, x_793);
x_795 = 5;
x_796 = lean_unsigned_to_nat(0u);
x_797 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_797, 0, x_794);
lean_ctor_set(x_797, 1, x_793);
lean_ctor_set(x_797, 2, x_796);
lean_ctor_set(x_797, 3, x_796);
lean_ctor_set_usize(x_797, 4, x_795);
x_798 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_798, 0, x_791);
lean_ctor_set(x_798, 1, x_797);
x_799 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_798, x_4, x_5, x_6, x_7, x_8, x_9, x_784);
x_800 = lean_ctor_get(x_799, 1);
lean_inc(x_800);
if (lean_is_exclusive(x_799)) {
 lean_ctor_release(x_799, 0);
 lean_ctor_release(x_799, 1);
 x_801 = x_799;
} else {
 lean_dec_ref(x_799);
 x_801 = lean_box(0);
}
lean_inc(x_785);
x_802 = l_Lean_mkApp(x_691, x_785);
x_803 = lean_expr_instantiate1(x_738, x_785);
lean_dec(x_738);
if (lean_is_scalar(x_786)) {
 x_804 = lean_alloc_ctor(1, 1, 0);
} else {
 x_804 = x_786;
}
lean_ctor_set(x_804, 0, x_785);
if (lean_is_scalar(x_697)) {
 x_805 = lean_alloc_ctor(0, 4, 0);
} else {
 x_805 = x_697;
}
lean_ctor_set(x_805, 0, x_695);
lean_ctor_set(x_805, 1, x_25);
lean_ctor_set(x_805, 2, x_788);
lean_ctor_set(x_805, 3, x_804);
lean_ctor_set(x_3, 1, x_693);
lean_ctor_set(x_3, 0, x_805);
if (lean_is_scalar(x_694)) {
 x_806 = lean_alloc_ctor(0, 2, 0);
} else {
 x_806 = x_694;
}
lean_ctor_set(x_806, 0, x_803);
lean_ctor_set(x_806, 1, x_3);
x_807 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_807, 0, x_802);
lean_ctor_set(x_807, 1, x_806);
if (lean_is_scalar(x_801)) {
 x_808 = lean_alloc_ctor(0, 2, 0);
} else {
 x_808 = x_801;
}
lean_ctor_set(x_808, 0, x_807);
lean_ctor_set(x_808, 1, x_800);
x_15 = x_808;
goto block_23;
}
}
else
{
lean_object* x_809; lean_object* x_810; lean_object* x_811; lean_object* x_812; 
lean_dec(x_740);
lean_dec(x_739);
lean_dec(x_738);
lean_dec(x_737);
lean_dec(x_699);
lean_dec(x_698);
lean_dec(x_697);
lean_dec(x_695);
lean_dec(x_694);
lean_dec(x_693);
lean_dec(x_691);
lean_dec(x_25);
lean_free_object(x_3);
x_809 = lean_ctor_get(x_741, 0);
lean_inc(x_809);
x_810 = lean_ctor_get(x_741, 1);
lean_inc(x_810);
if (lean_is_exclusive(x_741)) {
 lean_ctor_release(x_741, 0);
 lean_ctor_release(x_741, 1);
 x_811 = x_741;
} else {
 lean_dec_ref(x_741);
 x_811 = lean_box(0);
}
if (lean_is_scalar(x_811)) {
 x_812 = lean_alloc_ctor(1, 2, 0);
} else {
 x_812 = x_811;
}
lean_ctor_set(x_812, 0, x_809);
lean_ctor_set(x_812, 1, x_810);
x_15 = x_812;
goto block_23;
}
}
default: 
{
lean_object* x_813; lean_object* x_814; lean_object* x_815; lean_object* x_816; lean_object* x_817; lean_object* x_818; lean_object* x_819; lean_object* x_820; lean_object* x_821; lean_object* x_822; lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_826; uint8_t x_827; lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; lean_object* x_832; lean_object* x_833; lean_object* x_834; lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; size_t x_839; lean_object* x_840; lean_object* x_841; lean_object* x_842; lean_object* x_843; lean_object* x_844; lean_object* x_845; lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; lean_object* x_850; lean_object* x_851; lean_object* x_852; 
x_813 = lean_ctor_get(x_700, 1);
lean_inc(x_813);
lean_dec(x_700);
x_814 = lean_ctor_get(x_701, 1);
lean_inc(x_814);
x_815 = lean_ctor_get(x_701, 2);
lean_inc(x_815);
lean_dec(x_701);
x_816 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_816, 0, x_814);
x_817 = lean_ctor_get(x_8, 0);
lean_inc(x_817);
x_818 = lean_ctor_get(x_8, 1);
lean_inc(x_818);
x_819 = lean_ctor_get(x_8, 2);
lean_inc(x_819);
x_820 = lean_ctor_get(x_8, 3);
lean_inc(x_820);
x_821 = lean_ctor_get(x_8, 4);
lean_inc(x_821);
x_822 = lean_ctor_get(x_8, 5);
lean_inc(x_822);
x_823 = lean_ctor_get(x_8, 6);
lean_inc(x_823);
x_824 = lean_ctor_get(x_8, 7);
lean_inc(x_824);
x_825 = l_Lean_replaceRef(x_695, x_820);
lean_dec(x_820);
x_826 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_826, 0, x_817);
lean_ctor_set(x_826, 1, x_818);
lean_ctor_set(x_826, 2, x_819);
lean_ctor_set(x_826, 3, x_825);
lean_ctor_set(x_826, 4, x_821);
lean_ctor_set(x_826, 5, x_822);
lean_ctor_set(x_826, 6, x_823);
lean_ctor_set(x_826, 7, x_824);
x_827 = 0;
x_828 = lean_box(0);
lean_inc(x_6);
x_829 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_816, x_827, x_828, x_6, x_7, x_826, x_9, x_813);
lean_dec(x_826);
x_830 = lean_ctor_get(x_829, 0);
lean_inc(x_830);
x_831 = lean_ctor_get(x_829, 1);
lean_inc(x_831);
lean_dec(x_829);
x_832 = l_Lean_Elab_Term_StructInst_markDefaultMissing(x_830);
x_833 = lean_ctor_get(x_6, 1);
lean_inc(x_833);
lean_inc(x_832);
x_834 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_834, 0, x_699);
lean_ctor_set(x_834, 1, x_833);
lean_ctor_set(x_834, 2, x_832);
lean_ctor_set(x_834, 3, x_698);
x_835 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_835, 0, x_834);
x_836 = lean_unsigned_to_nat(32u);
x_837 = lean_mk_empty_array_with_capacity(x_836);
lean_inc(x_837);
x_838 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_838, 0, x_837);
x_839 = 5;
x_840 = lean_unsigned_to_nat(0u);
x_841 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_841, 0, x_838);
lean_ctor_set(x_841, 1, x_837);
lean_ctor_set(x_841, 2, x_840);
lean_ctor_set(x_841, 3, x_840);
lean_ctor_set_usize(x_841, 4, x_839);
x_842 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_842, 0, x_835);
lean_ctor_set(x_842, 1, x_841);
x_843 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_842, x_4, x_5, x_6, x_7, x_8, x_9, x_831);
x_844 = lean_ctor_get(x_843, 1);
lean_inc(x_844);
if (lean_is_exclusive(x_843)) {
 lean_ctor_release(x_843, 0);
 lean_ctor_release(x_843, 1);
 x_845 = x_843;
} else {
 lean_dec_ref(x_843);
 x_845 = lean_box(0);
}
lean_inc(x_832);
x_846 = l_Lean_mkApp(x_691, x_832);
x_847 = lean_expr_instantiate1(x_815, x_832);
lean_dec(x_815);
x_848 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_848, 0, x_832);
if (lean_is_scalar(x_697)) {
 x_849 = lean_alloc_ctor(0, 4, 0);
} else {
 x_849 = x_697;
}
lean_ctor_set(x_849, 0, x_695);
lean_ctor_set(x_849, 1, x_25);
lean_ctor_set(x_849, 2, x_696);
lean_ctor_set(x_849, 3, x_848);
lean_ctor_set(x_3, 1, x_693);
lean_ctor_set(x_3, 0, x_849);
if (lean_is_scalar(x_694)) {
 x_850 = lean_alloc_ctor(0, 2, 0);
} else {
 x_850 = x_694;
}
lean_ctor_set(x_850, 0, x_847);
lean_ctor_set(x_850, 1, x_3);
x_851 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_851, 0, x_846);
lean_ctor_set(x_851, 1, x_850);
if (lean_is_scalar(x_845)) {
 x_852 = lean_alloc_ctor(0, 2, 0);
} else {
 x_852 = x_845;
}
lean_ctor_set(x_852, 0, x_851);
lean_ctor_set(x_852, 1, x_844);
x_15 = x_852;
goto block_23;
}
}
}
else
{
lean_object* x_853; lean_object* x_854; lean_object* x_855; lean_object* x_856; lean_object* x_857; lean_object* x_858; lean_object* x_859; lean_object* x_860; lean_object* x_861; lean_object* x_862; lean_object* x_863; lean_object* x_864; lean_object* x_865; lean_object* x_866; lean_object* x_867; lean_object* x_868; lean_object* x_869; lean_object* x_870; lean_object* x_871; 
lean_dec(x_698);
lean_dec(x_697);
lean_dec(x_696);
lean_dec(x_694);
lean_dec(x_693);
lean_dec(x_691);
lean_dec(x_25);
lean_free_object(x_3);
x_853 = lean_ctor_get(x_700, 1);
lean_inc(x_853);
lean_dec(x_700);
x_854 = lean_mk_string("unexpected constructor type");
x_855 = l_Lean_stringToMessageData(x_854);
lean_dec(x_854);
x_856 = l_Lean_indentExpr(x_701);
x_857 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_857, 0, x_855);
lean_ctor_set(x_857, 1, x_856);
x_858 = lean_mk_string("");
x_859 = l_Lean_stringToMessageData(x_858);
lean_dec(x_858);
x_860 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_860, 0, x_857);
lean_ctor_set(x_860, 1, x_859);
x_861 = lean_ctor_get(x_8, 0);
lean_inc(x_861);
x_862 = lean_ctor_get(x_8, 1);
lean_inc(x_862);
x_863 = lean_ctor_get(x_8, 2);
lean_inc(x_863);
x_864 = lean_ctor_get(x_8, 3);
lean_inc(x_864);
x_865 = lean_ctor_get(x_8, 4);
lean_inc(x_865);
x_866 = lean_ctor_get(x_8, 5);
lean_inc(x_866);
x_867 = lean_ctor_get(x_8, 6);
lean_inc(x_867);
x_868 = lean_ctor_get(x_8, 7);
lean_inc(x_868);
x_869 = l_Lean_replaceRef(x_695, x_864);
lean_dec(x_864);
lean_dec(x_695);
x_870 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_870, 0, x_861);
lean_ctor_set(x_870, 1, x_862);
lean_ctor_set(x_870, 2, x_863);
lean_ctor_set(x_870, 3, x_869);
lean_ctor_set(x_870, 4, x_865);
lean_ctor_set(x_870, 5, x_866);
lean_ctor_set(x_870, 6, x_867);
lean_ctor_set(x_870, 7, x_868);
lean_inc(x_4);
lean_inc(x_1);
x_871 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_699, x_1, x_860, x_4, x_5, x_6, x_7, x_870, x_9, x_853);
lean_dec(x_870);
x_15 = x_871;
goto block_23;
}
}
else
{
lean_object* x_872; lean_object* x_873; lean_object* x_874; lean_object* x_875; 
lean_dec(x_699);
lean_dec(x_698);
lean_dec(x_697);
lean_dec(x_696);
lean_dec(x_695);
lean_dec(x_694);
lean_dec(x_693);
lean_dec(x_691);
lean_dec(x_25);
lean_free_object(x_3);
x_872 = lean_ctor_get(x_700, 0);
lean_inc(x_872);
x_873 = lean_ctor_get(x_700, 1);
lean_inc(x_873);
if (lean_is_exclusive(x_700)) {
 lean_ctor_release(x_700, 0);
 lean_ctor_release(x_700, 1);
 x_874 = x_700;
} else {
 lean_dec_ref(x_700);
 x_874 = lean_box(0);
}
if (lean_is_scalar(x_874)) {
 x_875 = lean_alloc_ctor(1, 2, 0);
} else {
 x_875 = x_874;
}
lean_ctor_set(x_875, 0, x_872);
lean_ctor_set(x_875, 1, x_873);
x_15 = x_875;
goto block_23;
}
}
}
else
{
lean_object* x_876; lean_object* x_877; lean_object* x_878; lean_object* x_879; 
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_25);
lean_dec(x_24);
lean_free_object(x_3);
lean_dec(x_2);
x_876 = lean_ctor_get(x_13, 0);
lean_inc(x_876);
lean_dec(x_13);
x_877 = lean_mk_string("unexpected unexpanded structure field");
x_878 = l_Lean_stringToMessageData(x_877);
lean_dec(x_877);
lean_inc(x_8);
lean_inc(x_4);
x_879 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1(x_876, x_878, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_876);
x_15 = x_879;
goto block_23;
}
}
else
{
lean_object* x_880; lean_object* x_881; lean_object* x_882; lean_object* x_883; 
lean_dec(x_30);
lean_dec(x_25);
lean_dec(x_24);
lean_free_object(x_3);
lean_dec(x_2);
x_880 = lean_ctor_get(x_13, 0);
lean_inc(x_880);
lean_dec(x_13);
x_881 = lean_mk_string("unexpected unexpanded structure field");
x_882 = l_Lean_stringToMessageData(x_881);
lean_dec(x_881);
lean_inc(x_8);
lean_inc(x_4);
x_883 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1(x_880, x_882, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_880);
x_15 = x_883;
goto block_23;
}
}
block_23:
{
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_2 = x_16;
x_3 = x_14;
x_10 = x_17;
goto _start;
}
else
{
uint8_t x_19; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_15);
if (x_19 == 0)
{
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_15, 0);
x_21 = lean_ctor_get(x_15, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_15);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
else
{
lean_object* x_884; lean_object* x_885; lean_object* x_886; lean_object* x_895; lean_object* x_896; 
x_884 = lean_ctor_get(x_3, 0);
x_885 = lean_ctor_get(x_3, 1);
lean_inc(x_885);
lean_inc(x_884);
lean_dec(x_3);
x_895 = lean_ctor_get(x_2, 1);
lean_inc(x_895);
x_896 = lean_ctor_get(x_884, 1);
lean_inc(x_896);
if (lean_obj_tag(x_896) == 0)
{
lean_object* x_897; lean_object* x_898; lean_object* x_899; lean_object* x_900; 
lean_dec(x_895);
lean_dec(x_2);
x_897 = lean_ctor_get(x_884, 0);
lean_inc(x_897);
lean_dec(x_884);
x_898 = lean_mk_string("unexpected unexpanded structure field");
x_899 = l_Lean_stringToMessageData(x_898);
lean_dec(x_898);
lean_inc(x_8);
lean_inc(x_4);
x_900 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1(x_897, x_899, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_897);
x_886 = x_900;
goto block_894;
}
else
{
lean_object* x_901; 
x_901 = lean_ctor_get(x_896, 0);
lean_inc(x_901);
if (lean_obj_tag(x_901) == 0)
{
lean_object* x_902; 
x_902 = lean_ctor_get(x_896, 1);
lean_inc(x_902);
if (lean_obj_tag(x_902) == 0)
{
lean_object* x_903; lean_object* x_904; lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; lean_object* x_913; 
x_903 = lean_ctor_get(x_2, 0);
lean_inc(x_903);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_904 = x_2;
} else {
 lean_dec_ref(x_2);
 x_904 = lean_box(0);
}
x_905 = lean_ctor_get(x_895, 0);
lean_inc(x_905);
x_906 = lean_ctor_get(x_895, 1);
lean_inc(x_906);
if (lean_is_exclusive(x_895)) {
 lean_ctor_release(x_895, 0);
 lean_ctor_release(x_895, 1);
 x_907 = x_895;
} else {
 lean_dec_ref(x_895);
 x_907 = lean_box(0);
}
x_908 = lean_ctor_get(x_884, 0);
lean_inc(x_908);
x_909 = lean_ctor_get(x_884, 2);
lean_inc(x_909);
if (lean_is_exclusive(x_884)) {
 lean_ctor_release(x_884, 0);
 lean_ctor_release(x_884, 1);
 lean_ctor_release(x_884, 2);
 lean_ctor_release(x_884, 3);
 x_910 = x_884;
} else {
 lean_dec_ref(x_884);
 x_910 = lean_box(0);
}
x_911 = lean_ctor_get(x_901, 0);
lean_inc(x_911);
x_912 = lean_ctor_get(x_901, 1);
lean_inc(x_912);
lean_dec(x_901);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_913 = l_Lean_Meta_whnfForall(x_905, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_913) == 0)
{
lean_object* x_914; 
x_914 = lean_ctor_get(x_913, 0);
lean_inc(x_914);
if (lean_obj_tag(x_914) == 7)
{
switch (lean_obj_tag(x_909)) {
case 0:
{
lean_object* x_915; lean_object* x_916; lean_object* x_917; lean_object* x_918; lean_object* x_919; lean_object* x_920; uint8_t x_921; lean_object* x_922; 
x_915 = lean_ctor_get(x_913, 1);
lean_inc(x_915);
lean_dec(x_913);
x_916 = lean_ctor_get(x_914, 1);
lean_inc(x_916);
x_917 = lean_ctor_get(x_914, 2);
lean_inc(x_917);
lean_dec(x_914);
x_918 = lean_ctor_get(x_909, 0);
lean_inc(x_918);
x_919 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_919, 0, x_916);
x_920 = lean_box(0);
x_921 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_922 = l_Lean_Elab_Term_elabTermEnsuringType(x_918, x_919, x_921, x_921, x_920, x_4, x_5, x_6, x_7, x_8, x_9, x_915);
if (lean_obj_tag(x_922) == 0)
{
lean_object* x_923; lean_object* x_924; lean_object* x_925; lean_object* x_926; lean_object* x_927; lean_object* x_928; lean_object* x_929; lean_object* x_930; size_t x_931; lean_object* x_932; lean_object* x_933; lean_object* x_934; lean_object* x_935; lean_object* x_936; lean_object* x_937; lean_object* x_938; lean_object* x_939; lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; 
x_923 = lean_ctor_get(x_922, 0);
lean_inc(x_923);
x_924 = lean_ctor_get(x_922, 1);
lean_inc(x_924);
lean_dec(x_922);
x_925 = lean_ctor_get(x_6, 1);
lean_inc(x_925);
lean_inc(x_923);
x_926 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_926, 0, x_912);
lean_ctor_set(x_926, 1, x_925);
lean_ctor_set(x_926, 2, x_923);
lean_ctor_set(x_926, 3, x_911);
x_927 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_927, 0, x_926);
x_928 = lean_unsigned_to_nat(32u);
x_929 = lean_mk_empty_array_with_capacity(x_928);
lean_inc(x_929);
x_930 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_930, 0, x_929);
x_931 = 5;
x_932 = lean_unsigned_to_nat(0u);
x_933 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_933, 0, x_930);
lean_ctor_set(x_933, 1, x_929);
lean_ctor_set(x_933, 2, x_932);
lean_ctor_set(x_933, 3, x_932);
lean_ctor_set_usize(x_933, 4, x_931);
x_934 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_934, 0, x_927);
lean_ctor_set(x_934, 1, x_933);
x_935 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_934, x_4, x_5, x_6, x_7, x_8, x_9, x_924);
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
lean_inc(x_923);
x_938 = l_Lean_mkApp(x_903, x_923);
x_939 = lean_expr_instantiate1(x_917, x_923);
lean_dec(x_917);
x_940 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_940, 0, x_923);
if (lean_is_scalar(x_910)) {
 x_941 = lean_alloc_ctor(0, 4, 0);
} else {
 x_941 = x_910;
}
lean_ctor_set(x_941, 0, x_908);
lean_ctor_set(x_941, 1, x_896);
lean_ctor_set(x_941, 2, x_909);
lean_ctor_set(x_941, 3, x_940);
x_942 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_942, 0, x_941);
lean_ctor_set(x_942, 1, x_906);
if (lean_is_scalar(x_907)) {
 x_943 = lean_alloc_ctor(0, 2, 0);
} else {
 x_943 = x_907;
}
lean_ctor_set(x_943, 0, x_939);
lean_ctor_set(x_943, 1, x_942);
if (lean_is_scalar(x_904)) {
 x_944 = lean_alloc_ctor(0, 2, 0);
} else {
 x_944 = x_904;
}
lean_ctor_set(x_944, 0, x_938);
lean_ctor_set(x_944, 1, x_943);
if (lean_is_scalar(x_937)) {
 x_945 = lean_alloc_ctor(0, 2, 0);
} else {
 x_945 = x_937;
}
lean_ctor_set(x_945, 0, x_944);
lean_ctor_set(x_945, 1, x_936);
x_886 = x_945;
goto block_894;
}
else
{
lean_object* x_946; lean_object* x_947; lean_object* x_948; lean_object* x_949; 
lean_dec(x_917);
lean_dec(x_912);
lean_dec(x_911);
lean_dec(x_910);
lean_dec(x_909);
lean_dec(x_908);
lean_dec(x_907);
lean_dec(x_906);
lean_dec(x_904);
lean_dec(x_903);
lean_dec(x_896);
x_946 = lean_ctor_get(x_922, 0);
lean_inc(x_946);
x_947 = lean_ctor_get(x_922, 1);
lean_inc(x_947);
if (lean_is_exclusive(x_922)) {
 lean_ctor_release(x_922, 0);
 lean_ctor_release(x_922, 1);
 x_948 = x_922;
} else {
 lean_dec_ref(x_922);
 x_948 = lean_box(0);
}
if (lean_is_scalar(x_948)) {
 x_949 = lean_alloc_ctor(1, 2, 0);
} else {
 x_949 = x_948;
}
lean_ctor_set(x_949, 0, x_946);
lean_ctor_set(x_949, 1, x_947);
x_886 = x_949;
goto block_894;
}
}
case 1:
{
lean_object* x_950; lean_object* x_951; lean_object* x_952; lean_object* x_953; lean_object* x_954; lean_object* x_955; 
x_950 = lean_ctor_get(x_913, 1);
lean_inc(x_950);
lean_dec(x_913);
x_951 = lean_ctor_get(x_914, 1);
lean_inc(x_951);
x_952 = lean_ctor_get(x_914, 2);
lean_inc(x_952);
lean_dec(x_914);
x_953 = lean_ctor_get(x_909, 0);
lean_inc(x_953);
if (lean_is_exclusive(x_909)) {
 lean_ctor_release(x_909, 0);
 x_954 = x_909;
} else {
 lean_dec_ref(x_909);
 x_954 = lean_box(0);
}
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_951);
x_955 = l_Lean_Elab_Term_StructInst_trySynthStructInstance_x3f(x_953, x_951, x_4, x_5, x_6, x_7, x_8, x_9, x_950);
if (lean_obj_tag(x_955) == 0)
{
lean_object* x_956; 
x_956 = lean_ctor_get(x_955, 0);
lean_inc(x_956);
if (lean_obj_tag(x_956) == 0)
{
lean_object* x_957; lean_object* x_958; lean_object* x_959; 
lean_dec(x_904);
x_957 = lean_ctor_get(x_955, 1);
lean_inc(x_957);
lean_dec(x_955);
x_958 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_958, 0, x_951);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_958);
x_959 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(x_953, x_958, x_4, x_5, x_6, x_7, x_8, x_9, x_957);
if (lean_obj_tag(x_959) == 0)
{
lean_object* x_960; lean_object* x_961; lean_object* x_962; lean_object* x_963; lean_object* x_964; lean_object* x_965; lean_object* x_966; 
x_960 = lean_ctor_get(x_959, 0);
lean_inc(x_960);
x_961 = lean_ctor_get(x_959, 1);
lean_inc(x_961);
lean_dec(x_959);
x_962 = lean_ctor_get(x_960, 0);
lean_inc(x_962);
x_963 = lean_ctor_get(x_960, 1);
lean_inc(x_963);
if (lean_is_exclusive(x_960)) {
 lean_ctor_release(x_960, 0);
 lean_ctor_release(x_960, 1);
 x_964 = x_960;
} else {
 lean_dec_ref(x_960);
 x_964 = lean_box(0);
}
x_965 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_966 = l_Lean_Elab_Term_ensureHasType(x_958, x_962, x_965, x_4, x_5, x_6, x_7, x_8, x_9, x_961);
if (lean_obj_tag(x_966) == 0)
{
lean_object* x_967; lean_object* x_968; lean_object* x_969; lean_object* x_970; lean_object* x_971; lean_object* x_972; lean_object* x_973; lean_object* x_974; lean_object* x_975; size_t x_976; lean_object* x_977; lean_object* x_978; lean_object* x_979; lean_object* x_980; lean_object* x_981; lean_object* x_982; lean_object* x_983; lean_object* x_984; lean_object* x_985; lean_object* x_986; lean_object* x_987; lean_object* x_988; lean_object* x_989; lean_object* x_990; 
x_967 = lean_ctor_get(x_966, 0);
lean_inc(x_967);
x_968 = lean_ctor_get(x_966, 1);
lean_inc(x_968);
lean_dec(x_966);
if (lean_is_scalar(x_954)) {
 x_969 = lean_alloc_ctor(1, 1, 0);
} else {
 x_969 = x_954;
}
lean_ctor_set(x_969, 0, x_963);
x_970 = lean_ctor_get(x_6, 1);
lean_inc(x_970);
lean_inc(x_967);
x_971 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_971, 0, x_912);
lean_ctor_set(x_971, 1, x_970);
lean_ctor_set(x_971, 2, x_967);
lean_ctor_set(x_971, 3, x_911);
x_972 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_972, 0, x_971);
x_973 = lean_unsigned_to_nat(32u);
x_974 = lean_mk_empty_array_with_capacity(x_973);
lean_inc(x_974);
x_975 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_975, 0, x_974);
x_976 = 5;
x_977 = lean_unsigned_to_nat(0u);
x_978 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_978, 0, x_975);
lean_ctor_set(x_978, 1, x_974);
lean_ctor_set(x_978, 2, x_977);
lean_ctor_set(x_978, 3, x_977);
lean_ctor_set_usize(x_978, 4, x_976);
x_979 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_979, 0, x_972);
lean_ctor_set(x_979, 1, x_978);
x_980 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_979, x_4, x_5, x_6, x_7, x_8, x_9, x_968);
x_981 = lean_ctor_get(x_980, 1);
lean_inc(x_981);
if (lean_is_exclusive(x_980)) {
 lean_ctor_release(x_980, 0);
 lean_ctor_release(x_980, 1);
 x_982 = x_980;
} else {
 lean_dec_ref(x_980);
 x_982 = lean_box(0);
}
lean_inc(x_967);
x_983 = l_Lean_mkApp(x_903, x_967);
x_984 = lean_expr_instantiate1(x_952, x_967);
lean_dec(x_952);
x_985 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_985, 0, x_967);
if (lean_is_scalar(x_910)) {
 x_986 = lean_alloc_ctor(0, 4, 0);
} else {
 x_986 = x_910;
}
lean_ctor_set(x_986, 0, x_908);
lean_ctor_set(x_986, 1, x_896);
lean_ctor_set(x_986, 2, x_969);
lean_ctor_set(x_986, 3, x_985);
x_987 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_987, 0, x_986);
lean_ctor_set(x_987, 1, x_906);
if (lean_is_scalar(x_964)) {
 x_988 = lean_alloc_ctor(0, 2, 0);
} else {
 x_988 = x_964;
}
lean_ctor_set(x_988, 0, x_984);
lean_ctor_set(x_988, 1, x_987);
if (lean_is_scalar(x_907)) {
 x_989 = lean_alloc_ctor(0, 2, 0);
} else {
 x_989 = x_907;
}
lean_ctor_set(x_989, 0, x_983);
lean_ctor_set(x_989, 1, x_988);
if (lean_is_scalar(x_982)) {
 x_990 = lean_alloc_ctor(0, 2, 0);
} else {
 x_990 = x_982;
}
lean_ctor_set(x_990, 0, x_989);
lean_ctor_set(x_990, 1, x_981);
x_886 = x_990;
goto block_894;
}
else
{
lean_object* x_991; lean_object* x_992; lean_object* x_993; lean_object* x_994; 
lean_dec(x_964);
lean_dec(x_963);
lean_dec(x_954);
lean_dec(x_952);
lean_dec(x_912);
lean_dec(x_911);
lean_dec(x_910);
lean_dec(x_908);
lean_dec(x_907);
lean_dec(x_906);
lean_dec(x_903);
lean_dec(x_896);
x_991 = lean_ctor_get(x_966, 0);
lean_inc(x_991);
x_992 = lean_ctor_get(x_966, 1);
lean_inc(x_992);
if (lean_is_exclusive(x_966)) {
 lean_ctor_release(x_966, 0);
 lean_ctor_release(x_966, 1);
 x_993 = x_966;
} else {
 lean_dec_ref(x_966);
 x_993 = lean_box(0);
}
if (lean_is_scalar(x_993)) {
 x_994 = lean_alloc_ctor(1, 2, 0);
} else {
 x_994 = x_993;
}
lean_ctor_set(x_994, 0, x_991);
lean_ctor_set(x_994, 1, x_992);
x_886 = x_994;
goto block_894;
}
}
else
{
lean_object* x_995; lean_object* x_996; lean_object* x_997; lean_object* x_998; 
lean_dec(x_958);
lean_dec(x_954);
lean_dec(x_952);
lean_dec(x_912);
lean_dec(x_911);
lean_dec(x_910);
lean_dec(x_908);
lean_dec(x_907);
lean_dec(x_906);
lean_dec(x_903);
lean_dec(x_896);
x_995 = lean_ctor_get(x_959, 0);
lean_inc(x_995);
x_996 = lean_ctor_get(x_959, 1);
lean_inc(x_996);
if (lean_is_exclusive(x_959)) {
 lean_ctor_release(x_959, 0);
 lean_ctor_release(x_959, 1);
 x_997 = x_959;
} else {
 lean_dec_ref(x_959);
 x_997 = lean_box(0);
}
if (lean_is_scalar(x_997)) {
 x_998 = lean_alloc_ctor(1, 2, 0);
} else {
 x_998 = x_997;
}
lean_ctor_set(x_998, 0, x_995);
lean_ctor_set(x_998, 1, x_996);
x_886 = x_998;
goto block_894;
}
}
else
{
lean_object* x_999; lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; lean_object* x_1006; lean_object* x_1007; lean_object* x_1008; lean_object* x_1009; size_t x_1010; lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; lean_object* x_1014; lean_object* x_1015; lean_object* x_1016; lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; lean_object* x_1024; 
lean_dec(x_953);
lean_dec(x_951);
x_999 = lean_ctor_get(x_955, 1);
lean_inc(x_999);
lean_dec(x_955);
x_1000 = lean_ctor_get(x_956, 0);
lean_inc(x_1000);
if (lean_is_exclusive(x_956)) {
 lean_ctor_release(x_956, 0);
 x_1001 = x_956;
} else {
 lean_dec_ref(x_956);
 x_1001 = lean_box(0);
}
x_1002 = l_Lean_mkHole(x_908);
if (lean_is_scalar(x_954)) {
 x_1003 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1003 = x_954;
 lean_ctor_set_tag(x_1003, 0);
}
lean_ctor_set(x_1003, 0, x_1002);
x_1004 = lean_ctor_get(x_6, 1);
lean_inc(x_1004);
lean_inc(x_1000);
x_1005 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_1005, 0, x_912);
lean_ctor_set(x_1005, 1, x_1004);
lean_ctor_set(x_1005, 2, x_1000);
lean_ctor_set(x_1005, 3, x_911);
x_1006 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_1006, 0, x_1005);
x_1007 = lean_unsigned_to_nat(32u);
x_1008 = lean_mk_empty_array_with_capacity(x_1007);
lean_inc(x_1008);
x_1009 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1009, 0, x_1008);
x_1010 = 5;
x_1011 = lean_unsigned_to_nat(0u);
x_1012 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_1012, 0, x_1009);
lean_ctor_set(x_1012, 1, x_1008);
lean_ctor_set(x_1012, 2, x_1011);
lean_ctor_set(x_1012, 3, x_1011);
lean_ctor_set_usize(x_1012, 4, x_1010);
x_1013 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1013, 0, x_1006);
lean_ctor_set(x_1013, 1, x_1012);
x_1014 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_1013, x_4, x_5, x_6, x_7, x_8, x_9, x_999);
x_1015 = lean_ctor_get(x_1014, 1);
lean_inc(x_1015);
if (lean_is_exclusive(x_1014)) {
 lean_ctor_release(x_1014, 0);
 lean_ctor_release(x_1014, 1);
 x_1016 = x_1014;
} else {
 lean_dec_ref(x_1014);
 x_1016 = lean_box(0);
}
lean_inc(x_1000);
x_1017 = l_Lean_mkApp(x_903, x_1000);
x_1018 = lean_expr_instantiate1(x_952, x_1000);
lean_dec(x_952);
if (lean_is_scalar(x_1001)) {
 x_1019 = lean_alloc_ctor(1, 1, 0);
} else {
 x_1019 = x_1001;
}
lean_ctor_set(x_1019, 0, x_1000);
if (lean_is_scalar(x_910)) {
 x_1020 = lean_alloc_ctor(0, 4, 0);
} else {
 x_1020 = x_910;
}
lean_ctor_set(x_1020, 0, x_908);
lean_ctor_set(x_1020, 1, x_896);
lean_ctor_set(x_1020, 2, x_1003);
lean_ctor_set(x_1020, 3, x_1019);
x_1021 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1021, 0, x_1020);
lean_ctor_set(x_1021, 1, x_906);
if (lean_is_scalar(x_907)) {
 x_1022 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1022 = x_907;
}
lean_ctor_set(x_1022, 0, x_1018);
lean_ctor_set(x_1022, 1, x_1021);
if (lean_is_scalar(x_904)) {
 x_1023 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1023 = x_904;
}
lean_ctor_set(x_1023, 0, x_1017);
lean_ctor_set(x_1023, 1, x_1022);
if (lean_is_scalar(x_1016)) {
 x_1024 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1024 = x_1016;
}
lean_ctor_set(x_1024, 0, x_1023);
lean_ctor_set(x_1024, 1, x_1015);
x_886 = x_1024;
goto block_894;
}
}
else
{
lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; 
lean_dec(x_954);
lean_dec(x_953);
lean_dec(x_952);
lean_dec(x_951);
lean_dec(x_912);
lean_dec(x_911);
lean_dec(x_910);
lean_dec(x_908);
lean_dec(x_907);
lean_dec(x_906);
lean_dec(x_904);
lean_dec(x_903);
lean_dec(x_896);
x_1025 = lean_ctor_get(x_955, 0);
lean_inc(x_1025);
x_1026 = lean_ctor_get(x_955, 1);
lean_inc(x_1026);
if (lean_is_exclusive(x_955)) {
 lean_ctor_release(x_955, 0);
 lean_ctor_release(x_955, 1);
 x_1027 = x_955;
} else {
 lean_dec_ref(x_955);
 x_1027 = lean_box(0);
}
if (lean_is_scalar(x_1027)) {
 x_1028 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1028 = x_1027;
}
lean_ctor_set(x_1028, 0, x_1025);
lean_ctor_set(x_1028, 1, x_1026);
x_886 = x_1028;
goto block_894;
}
}
default: 
{
lean_object* x_1029; lean_object* x_1030; lean_object* x_1031; lean_object* x_1032; lean_object* x_1033; lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; lean_object* x_1037; lean_object* x_1038; lean_object* x_1039; lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; uint8_t x_1043; lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; lean_object* x_1047; lean_object* x_1048; lean_object* x_1049; lean_object* x_1050; lean_object* x_1051; lean_object* x_1052; lean_object* x_1053; lean_object* x_1054; size_t x_1055; lean_object* x_1056; lean_object* x_1057; lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; lean_object* x_1068; lean_object* x_1069; 
x_1029 = lean_ctor_get(x_913, 1);
lean_inc(x_1029);
lean_dec(x_913);
x_1030 = lean_ctor_get(x_914, 1);
lean_inc(x_1030);
x_1031 = lean_ctor_get(x_914, 2);
lean_inc(x_1031);
lean_dec(x_914);
x_1032 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1032, 0, x_1030);
x_1033 = lean_ctor_get(x_8, 0);
lean_inc(x_1033);
x_1034 = lean_ctor_get(x_8, 1);
lean_inc(x_1034);
x_1035 = lean_ctor_get(x_8, 2);
lean_inc(x_1035);
x_1036 = lean_ctor_get(x_8, 3);
lean_inc(x_1036);
x_1037 = lean_ctor_get(x_8, 4);
lean_inc(x_1037);
x_1038 = lean_ctor_get(x_8, 5);
lean_inc(x_1038);
x_1039 = lean_ctor_get(x_8, 6);
lean_inc(x_1039);
x_1040 = lean_ctor_get(x_8, 7);
lean_inc(x_1040);
x_1041 = l_Lean_replaceRef(x_908, x_1036);
lean_dec(x_1036);
x_1042 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_1042, 0, x_1033);
lean_ctor_set(x_1042, 1, x_1034);
lean_ctor_set(x_1042, 2, x_1035);
lean_ctor_set(x_1042, 3, x_1041);
lean_ctor_set(x_1042, 4, x_1037);
lean_ctor_set(x_1042, 5, x_1038);
lean_ctor_set(x_1042, 6, x_1039);
lean_ctor_set(x_1042, 7, x_1040);
x_1043 = 0;
x_1044 = lean_box(0);
lean_inc(x_6);
x_1045 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_1032, x_1043, x_1044, x_6, x_7, x_1042, x_9, x_1029);
lean_dec(x_1042);
x_1046 = lean_ctor_get(x_1045, 0);
lean_inc(x_1046);
x_1047 = lean_ctor_get(x_1045, 1);
lean_inc(x_1047);
lean_dec(x_1045);
x_1048 = l_Lean_Elab_Term_StructInst_markDefaultMissing(x_1046);
x_1049 = lean_ctor_get(x_6, 1);
lean_inc(x_1049);
lean_inc(x_1048);
x_1050 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_1050, 0, x_912);
lean_ctor_set(x_1050, 1, x_1049);
lean_ctor_set(x_1050, 2, x_1048);
lean_ctor_set(x_1050, 3, x_911);
x_1051 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_1051, 0, x_1050);
x_1052 = lean_unsigned_to_nat(32u);
x_1053 = lean_mk_empty_array_with_capacity(x_1052);
lean_inc(x_1053);
x_1054 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1054, 0, x_1053);
x_1055 = 5;
x_1056 = lean_unsigned_to_nat(0u);
x_1057 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_1057, 0, x_1054);
lean_ctor_set(x_1057, 1, x_1053);
lean_ctor_set(x_1057, 2, x_1056);
lean_ctor_set(x_1057, 3, x_1056);
lean_ctor_set_usize(x_1057, 4, x_1055);
x_1058 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1058, 0, x_1051);
lean_ctor_set(x_1058, 1, x_1057);
x_1059 = l_Lean_Elab_pushInfoTree___at_Lean_Elab_Term_addTermInfo___spec__2(x_1058, x_4, x_5, x_6, x_7, x_8, x_9, x_1047);
x_1060 = lean_ctor_get(x_1059, 1);
lean_inc(x_1060);
if (lean_is_exclusive(x_1059)) {
 lean_ctor_release(x_1059, 0);
 lean_ctor_release(x_1059, 1);
 x_1061 = x_1059;
} else {
 lean_dec_ref(x_1059);
 x_1061 = lean_box(0);
}
lean_inc(x_1048);
x_1062 = l_Lean_mkApp(x_903, x_1048);
x_1063 = lean_expr_instantiate1(x_1031, x_1048);
lean_dec(x_1031);
x_1064 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1064, 0, x_1048);
if (lean_is_scalar(x_910)) {
 x_1065 = lean_alloc_ctor(0, 4, 0);
} else {
 x_1065 = x_910;
}
lean_ctor_set(x_1065, 0, x_908);
lean_ctor_set(x_1065, 1, x_896);
lean_ctor_set(x_1065, 2, x_909);
lean_ctor_set(x_1065, 3, x_1064);
x_1066 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1066, 0, x_1065);
lean_ctor_set(x_1066, 1, x_906);
if (lean_is_scalar(x_907)) {
 x_1067 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1067 = x_907;
}
lean_ctor_set(x_1067, 0, x_1063);
lean_ctor_set(x_1067, 1, x_1066);
if (lean_is_scalar(x_904)) {
 x_1068 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1068 = x_904;
}
lean_ctor_set(x_1068, 0, x_1062);
lean_ctor_set(x_1068, 1, x_1067);
if (lean_is_scalar(x_1061)) {
 x_1069 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1069 = x_1061;
}
lean_ctor_set(x_1069, 0, x_1068);
lean_ctor_set(x_1069, 1, x_1060);
x_886 = x_1069;
goto block_894;
}
}
}
else
{
lean_object* x_1070; lean_object* x_1071; lean_object* x_1072; lean_object* x_1073; lean_object* x_1074; lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; lean_object* x_1079; lean_object* x_1080; lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; lean_object* x_1087; lean_object* x_1088; 
lean_dec(x_911);
lean_dec(x_910);
lean_dec(x_909);
lean_dec(x_907);
lean_dec(x_906);
lean_dec(x_904);
lean_dec(x_903);
lean_dec(x_896);
x_1070 = lean_ctor_get(x_913, 1);
lean_inc(x_1070);
lean_dec(x_913);
x_1071 = lean_mk_string("unexpected constructor type");
x_1072 = l_Lean_stringToMessageData(x_1071);
lean_dec(x_1071);
x_1073 = l_Lean_indentExpr(x_914);
x_1074 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1074, 0, x_1072);
lean_ctor_set(x_1074, 1, x_1073);
x_1075 = lean_mk_string("");
x_1076 = l_Lean_stringToMessageData(x_1075);
lean_dec(x_1075);
x_1077 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_1077, 0, x_1074);
lean_ctor_set(x_1077, 1, x_1076);
x_1078 = lean_ctor_get(x_8, 0);
lean_inc(x_1078);
x_1079 = lean_ctor_get(x_8, 1);
lean_inc(x_1079);
x_1080 = lean_ctor_get(x_8, 2);
lean_inc(x_1080);
x_1081 = lean_ctor_get(x_8, 3);
lean_inc(x_1081);
x_1082 = lean_ctor_get(x_8, 4);
lean_inc(x_1082);
x_1083 = lean_ctor_get(x_8, 5);
lean_inc(x_1083);
x_1084 = lean_ctor_get(x_8, 6);
lean_inc(x_1084);
x_1085 = lean_ctor_get(x_8, 7);
lean_inc(x_1085);
x_1086 = l_Lean_replaceRef(x_908, x_1081);
lean_dec(x_1081);
lean_dec(x_908);
x_1087 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_1087, 0, x_1078);
lean_ctor_set(x_1087, 1, x_1079);
lean_ctor_set(x_1087, 2, x_1080);
lean_ctor_set(x_1087, 3, x_1086);
lean_ctor_set(x_1087, 4, x_1082);
lean_ctor_set(x_1087, 5, x_1083);
lean_ctor_set(x_1087, 6, x_1084);
lean_ctor_set(x_1087, 7, x_1085);
lean_inc(x_4);
lean_inc(x_1);
x_1088 = l_Lean_Elab_Term_StructInst_throwFailedToElabField___rarg(x_912, x_1, x_1077, x_4, x_5, x_6, x_7, x_1087, x_9, x_1070);
lean_dec(x_1087);
x_886 = x_1088;
goto block_894;
}
}
else
{
lean_object* x_1089; lean_object* x_1090; lean_object* x_1091; lean_object* x_1092; 
lean_dec(x_912);
lean_dec(x_911);
lean_dec(x_910);
lean_dec(x_909);
lean_dec(x_908);
lean_dec(x_907);
lean_dec(x_906);
lean_dec(x_904);
lean_dec(x_903);
lean_dec(x_896);
x_1089 = lean_ctor_get(x_913, 0);
lean_inc(x_1089);
x_1090 = lean_ctor_get(x_913, 1);
lean_inc(x_1090);
if (lean_is_exclusive(x_913)) {
 lean_ctor_release(x_913, 0);
 lean_ctor_release(x_913, 1);
 x_1091 = x_913;
} else {
 lean_dec_ref(x_913);
 x_1091 = lean_box(0);
}
if (lean_is_scalar(x_1091)) {
 x_1092 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1092 = x_1091;
}
lean_ctor_set(x_1092, 0, x_1089);
lean_ctor_set(x_1092, 1, x_1090);
x_886 = x_1092;
goto block_894;
}
}
else
{
lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; lean_object* x_1096; 
lean_dec(x_902);
lean_dec(x_901);
lean_dec(x_896);
lean_dec(x_895);
lean_dec(x_2);
x_1093 = lean_ctor_get(x_884, 0);
lean_inc(x_1093);
lean_dec(x_884);
x_1094 = lean_mk_string("unexpected unexpanded structure field");
x_1095 = l_Lean_stringToMessageData(x_1094);
lean_dec(x_1094);
lean_inc(x_8);
lean_inc(x_4);
x_1096 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1(x_1093, x_1095, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1093);
x_886 = x_1096;
goto block_894;
}
}
else
{
lean_object* x_1097; lean_object* x_1098; lean_object* x_1099; lean_object* x_1100; 
lean_dec(x_901);
lean_dec(x_896);
lean_dec(x_895);
lean_dec(x_2);
x_1097 = lean_ctor_get(x_884, 0);
lean_inc(x_1097);
lean_dec(x_884);
x_1098 = lean_mk_string("unexpected unexpanded structure field");
x_1099 = l_Lean_stringToMessageData(x_1098);
lean_dec(x_1098);
lean_inc(x_8);
lean_inc(x_4);
x_1100 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1(x_1097, x_1099, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1097);
x_886 = x_1100;
goto block_894;
}
}
block_894:
{
if (lean_obj_tag(x_886) == 0)
{
lean_object* x_887; lean_object* x_888; 
x_887 = lean_ctor_get(x_886, 0);
lean_inc(x_887);
x_888 = lean_ctor_get(x_886, 1);
lean_inc(x_888);
lean_dec(x_886);
x_2 = x_887;
x_3 = x_885;
x_10 = x_888;
goto _start;
}
else
{
lean_object* x_890; lean_object* x_891; lean_object* x_892; lean_object* x_893; 
lean_dec(x_885);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_890 = lean_ctor_get(x_886, 0);
lean_inc(x_890);
x_891 = lean_ctor_get(x_886, 1);
lean_inc(x_891);
if (lean_is_exclusive(x_886)) {
 lean_ctor_release(x_886, 0);
 lean_ctor_release(x_886, 1);
 x_892 = x_886;
} else {
 lean_dec_ref(x_886);
 x_892 = lean_box(0);
}
if (lean_is_scalar(x_892)) {
 x_893 = lean_alloc_ctor(1, 2, 0);
} else {
 x_893 = x_892;
}
lean_ctor_set(x_893, 0, x_890);
lean_ctor_set(x_893, 1, x_891);
return x_893;
}
}
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_7, 3);
x_13 = l_Lean_replaceRef(x_10, x_12);
lean_dec(x_12);
lean_dec(x_10);
lean_ctor_set(x_7, 3, x_13);
x_14 = lean_st_ref_get(x_8, x_9);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_inc(x_18);
x_19 = l_Lean_getStructureCtor(x_17, x_18);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_20 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader(x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
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
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_23);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
x_29 = l_List_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__3(x_18, x_27, x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
x_32 = !lean_is_exclusive(x_29);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_33 = lean_ctor_get(x_29, 0);
lean_dec(x_33);
x_34 = lean_ctor_get(x_30, 0);
lean_inc(x_34);
lean_dec(x_30);
x_35 = !lean_is_exclusive(x_31);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_31, 1);
x_37 = lean_ctor_get(x_31, 0);
lean_dec(x_37);
x_38 = l_List_reverse___rarg(x_36);
x_39 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_38);
lean_ctor_set(x_31, 1, x_39);
lean_ctor_set(x_31, 0, x_34);
lean_ctor_set(x_29, 0, x_31);
return x_29;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_31, 1);
lean_inc(x_40);
lean_dec(x_31);
x_41 = l_List_reverse___rarg(x_40);
x_42 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_34);
lean_ctor_set(x_43, 1, x_42);
lean_ctor_set(x_29, 0, x_43);
return x_29;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_44 = lean_ctor_get(x_29, 1);
lean_inc(x_44);
lean_dec(x_29);
x_45 = lean_ctor_get(x_30, 0);
lean_inc(x_45);
lean_dec(x_30);
x_46 = lean_ctor_get(x_31, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_47 = x_31;
} else {
 lean_dec_ref(x_31);
 x_47 = lean_box(0);
}
x_48 = l_List_reverse___rarg(x_46);
x_49 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_48);
if (lean_is_scalar(x_47)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_47;
}
lean_ctor_set(x_50, 0, x_45);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_44);
return x_51;
}
}
else
{
uint8_t x_52; 
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_29);
if (x_52 == 0)
{
return x_29;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_29, 0);
x_54 = lean_ctor_get(x_29, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_29);
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
lean_dec(x_18);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_20);
if (x_56 == 0)
{
return x_20;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_20, 0);
x_58 = lean_ctor_get(x_20, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_20);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_60 = lean_ctor_get(x_7, 0);
x_61 = lean_ctor_get(x_7, 1);
x_62 = lean_ctor_get(x_7, 2);
x_63 = lean_ctor_get(x_7, 3);
x_64 = lean_ctor_get(x_7, 4);
x_65 = lean_ctor_get(x_7, 5);
x_66 = lean_ctor_get(x_7, 6);
x_67 = lean_ctor_get(x_7, 7);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_7);
x_68 = l_Lean_replaceRef(x_10, x_63);
lean_dec(x_63);
lean_dec(x_10);
x_69 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_69, 0, x_60);
lean_ctor_set(x_69, 1, x_61);
lean_ctor_set(x_69, 2, x_62);
lean_ctor_set(x_69, 3, x_68);
lean_ctor_set(x_69, 4, x_64);
lean_ctor_set(x_69, 5, x_65);
lean_ctor_set(x_69, 6, x_66);
lean_ctor_set(x_69, 7, x_67);
x_70 = lean_st_ref_get(x_8, x_9);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_ctor_get(x_71, 0);
lean_inc(x_73);
lean_dec(x_71);
x_74 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
lean_inc(x_74);
x_75 = l_Lean_getStructureCtor(x_73, x_74);
lean_inc(x_8);
lean_inc(x_69);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_76 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkCtorHeader(x_75, x_2, x_3, x_4, x_5, x_6, x_69, x_8, x_72);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
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
x_81 = lean_box(0);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_79);
lean_ctor_set(x_83, 1, x_82);
x_84 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
x_85 = l_List_foldlM___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__3(x_74, x_83, x_84, x_3, x_4, x_5, x_6, x_69, x_8, x_78);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
x_88 = lean_ctor_get(x_85, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_89 = x_85;
} else {
 lean_dec_ref(x_85);
 x_89 = lean_box(0);
}
x_90 = lean_ctor_get(x_86, 0);
lean_inc(x_90);
lean_dec(x_86);
x_91 = lean_ctor_get(x_87, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_92 = x_87;
} else {
 lean_dec_ref(x_87);
 x_92 = lean_box(0);
}
x_93 = l_List_reverse___rarg(x_91);
x_94 = l_Lean_Elab_Term_StructInst_Struct_setFields(x_1, x_93);
if (lean_is_scalar(x_92)) {
 x_95 = lean_alloc_ctor(0, 2, 0);
} else {
 x_95 = x_92;
}
lean_ctor_set(x_95, 0, x_90);
lean_ctor_set(x_95, 1, x_94);
if (lean_is_scalar(x_89)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_89;
}
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_88);
return x_96;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_1);
x_97 = lean_ctor_get(x_85, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_85, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_99 = x_85;
} else {
 lean_dec_ref(x_85);
 x_99 = lean_box(0);
}
if (lean_is_scalar(x_99)) {
 x_100 = lean_alloc_ctor(1, 2, 0);
} else {
 x_100 = x_99;
}
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_98);
return x_100;
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
lean_dec(x_74);
lean_dec(x_69);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_101 = lean_ctor_get(x_76, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_76, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_103 = x_76;
} else {
 lean_dec_ref(x_76);
 x_103 = lean_box(0);
}
if (lean_is_scalar(x_103)) {
 x_104 = lean_alloc_ctor(1, 2, 0);
} else {
 x_104 = x_103;
}
lean_ctor_set(x_104, 0, x_101);
lean_ctor_set(x_104, 1, x_102);
return x_104;
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_Context_structs___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_Context_allStructNames___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_Context_maxDistance___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
static uint8_t _init_l_Lean_Elab_Term_StructInst_DefaultFields_State_progress___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
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
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_foldl___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 2);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames(x_6, x_1);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_2, 1);
x_2 = x_9;
goto _start;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Lean_Elab_Term_StructInst_Struct_structName(x_1);
x_4 = lean_array_push(x_2, x_3);
x_5 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
x_6 = l_List_foldl___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___spec__1(x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_List_foldl___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___at_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_foldl___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_3, 2);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth(x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_7, x_8);
lean_dec(x_7);
x_10 = l_Nat_max(x_1, x_9);
lean_dec(x_9);
lean_dec(x_1);
x_1 = x_10;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_2, 1);
x_2 = x_12;
goto _start;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_foldl___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___spec__1(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_List_foldl___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___at_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
if (lean_obj_tag(x_5) == 2)
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
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 2);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f(x_1, x_4);
lean_dec(x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(0);
x_8 = lean_mk_string("Lean.Elab.StructInst");
x_9 = lean_mk_string("Lean.Elab.Term.StructInst.DefaultFields.findDefaultMissing?");
x_10 = lean_unsigned_to_nat(635u);
x_11 = lean_unsigned_to_nat(20u);
x_12 = lean_mk_string("unreachable code has been reached");
x_13 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_8, x_9, x_10, x_11, x_12);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
x_14 = lean_panic_fn(x_7, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_6, 0);
lean_inc(x_15);
lean_dec(x_6);
x_16 = l_Lean_Elab_Term_StructInst_defaultMissing_x3f(x_15);
lean_dec(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_box(0);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_16);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_16, 0);
if (lean_obj_tag(x_19) == 2)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Lean_MetavarContext_isExprAssigned(x_1, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_ctor_set(x_16, 0, x_2);
return x_16;
}
else
{
lean_object* x_22; 
lean_free_object(x_16);
lean_dec(x_2);
x_22 = lean_box(0);
return x_22;
}
}
else
{
lean_object* x_23; 
lean_free_object(x_16);
lean_dec(x_19);
lean_dec(x_2);
lean_dec(x_1);
x_23 = lean_box(0);
return x_23;
}
}
else
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_16, 0);
lean_inc(x_24);
lean_dec(x_16);
if (lean_obj_tag(x_24) == 2)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = l_Lean_MetavarContext_isExprAssigned(x_1, x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_2);
return x_27;
}
else
{
lean_object* x_28; 
lean_dec(x_2);
x_28 = lean_box(0);
return x_28;
}
}
else
{
lean_object* x_29; 
lean_dec(x_24);
lean_dec(x_2);
lean_dec(x_1);
x_29 = lean_box(0);
return x_29;
}
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___lambda__1), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = l_Lean_Elab_Term_StructInst_Struct_fields(x_2);
x_5 = l_List_findSome_x3f___rarg(x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_mk_string("Lean.Elab.StructInst");
x_4 = lean_mk_string("Lean.Elab.Term.StructInst.DefaultFields.getFieldName");
x_5 = lean_unsigned_to_nat(643u);
x_6 = lean_unsigned_to_nat(9u);
x_7 = lean_mk_string("unreachable code has been reached");
x_8 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = l_Lean_instInhabitedName;
x_10 = lean_panic_fn(x_9, x_8);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_2, 0);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_2, 1);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_14 = lean_mk_string("Lean.Elab.StructInst");
x_15 = lean_mk_string("Lean.Elab.Term.StructInst.DefaultFields.getFieldName");
x_16 = lean_unsigned_to_nat(643u);
x_17 = lean_unsigned_to_nat(9u);
x_18 = lean_mk_string("unreachable code has been reached");
x_19 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_14, x_15, x_16, x_17, x_18);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_14);
x_20 = l_Lean_instInhabitedName;
x_21 = lean_panic_fn(x_20, x_19);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_mk_string("Lean.Elab.StructInst");
x_23 = lean_mk_string("Lean.Elab.Term.StructInst.DefaultFields.getFieldName");
x_24 = lean_unsigned_to_nat(643u);
x_25 = lean_unsigned_to_nat(9u);
x_26 = lean_mk_string("unreachable code has been reached");
x_27 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_22, x_23, x_24, x_25, x_26);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_22);
x_28 = l_Lean_instInhabitedName;
x_29 = lean_panic_fn(x_28, x_27);
return x_29;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_get(x_2, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_12, 0);
lean_dec(x_16);
x_17 = 0;
x_18 = lean_box(x_17);
lean_ctor_set(x_12, 0, x_18);
return x_12;
}
else
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_dec(x_12);
x_20 = 0;
x_21 = lean_box(x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_12);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_12, 0);
lean_dec(x_24);
x_25 = lean_ctor_get(x_1, 2);
x_26 = lean_unsigned_to_nat(0u);
x_27 = lean_nat_dec_lt(x_26, x_25);
x_28 = lean_box(x_27);
lean_ctor_set(x_12, 0, x_28);
return x_12;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_12, 1);
lean_inc(x_29);
lean_dec(x_12);
x_30 = lean_ctor_get(x_1, 2);
x_31 = lean_unsigned_to_nat(0u);
x_32 = lean_nat_dec_lt(x_31, x_30);
x_33 = lean_box(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_29);
return x_34;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(x_2);
x_4 = lean_name_eq(x_3, x_1);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
return x_6;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
x_5 = l_List_findSome_x3f___rarg(x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 6)
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
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 6)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint64_t x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; uint8_t x_17; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
x_13 = lean_ctor_get_uint64(x_2, sizeof(void*)*3);
lean_dec(x_2);
x_14 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
x_15 = (uint8_t)((x_13 << 24) >> 61);
x_16 = l_Lean_BinderInfo_isExplicit(x_15);
if (x_16 == 0)
{
uint8_t x_100; 
x_100 = 0;
x_17 = x_100;
goto block_99;
}
else
{
uint8_t x_101; 
x_101 = 1;
x_17 = x_101;
goto block_99;
}
block_99:
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_7);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_7, 3);
x_20 = l_Lean_replaceRef(x_14, x_19);
lean_dec(x_19);
lean_dec(x_14);
lean_ctor_set(x_7, 3, x_20);
if (x_17 == 0)
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_11);
x_22 = 0;
x_23 = lean_box(0);
lean_inc(x_5);
x_24 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_21, x_22, x_23, x_5, x_6, x_7, x_8, x_9);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_expr_instantiate1(x_12, x_25);
lean_dec(x_25);
lean_dec(x_12);
x_2 = x_27;
x_9 = x_26;
goto _start;
}
else
{
lean_object* x_29; 
x_29 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f(x_1, x_10);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_7);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_9);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_29, 0);
lean_inc(x_32);
lean_dec(x_29);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_32);
x_33 = l_Lean_Meta_inferType(x_32, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_36 = l_Lean_Meta_isExprDefEq(x_34, x_11, x_5, x_6, x_7, x_8, x_35);
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
lean_dec(x_32);
lean_dec(x_7);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_39 = !lean_is_exclusive(x_36);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_36, 0);
lean_dec(x_40);
x_41 = lean_box(0);
lean_ctor_set(x_36, 0, x_41);
return x_36;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_36, 1);
lean_inc(x_42);
lean_dec(x_36);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_36, 1);
lean_inc(x_45);
lean_dec(x_36);
x_46 = lean_expr_instantiate1(x_12, x_32);
lean_dec(x_32);
lean_dec(x_12);
x_2 = x_46;
x_9 = x_45;
goto _start;
}
}
else
{
uint8_t x_48; 
lean_dec(x_32);
lean_dec(x_7);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_48 = !lean_is_exclusive(x_36);
if (x_48 == 0)
{
return x_36;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_36, 0);
x_50 = lean_ctor_get(x_36, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_36);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_32);
lean_dec(x_7);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_52 = !lean_is_exclusive(x_33);
if (x_52 == 0)
{
return x_33;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_33, 0);
x_54 = lean_ctor_get(x_33, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_33);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_56 = lean_ctor_get(x_7, 0);
x_57 = lean_ctor_get(x_7, 1);
x_58 = lean_ctor_get(x_7, 2);
x_59 = lean_ctor_get(x_7, 3);
x_60 = lean_ctor_get(x_7, 4);
x_61 = lean_ctor_get(x_7, 5);
x_62 = lean_ctor_get(x_7, 6);
x_63 = lean_ctor_get(x_7, 7);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_7);
x_64 = l_Lean_replaceRef(x_14, x_59);
lean_dec(x_59);
lean_dec(x_14);
x_65 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_65, 0, x_56);
lean_ctor_set(x_65, 1, x_57);
lean_ctor_set(x_65, 2, x_58);
lean_ctor_set(x_65, 3, x_64);
lean_ctor_set(x_65, 4, x_60);
lean_ctor_set(x_65, 5, x_61);
lean_ctor_set(x_65, 6, x_62);
lean_ctor_set(x_65, 7, x_63);
if (x_17 == 0)
{
lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_10);
x_66 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_66, 0, x_11);
x_67 = 0;
x_68 = lean_box(0);
lean_inc(x_5);
x_69 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_66, x_67, x_68, x_5, x_6, x_65, x_8, x_9);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_expr_instantiate1(x_12, x_70);
lean_dec(x_70);
lean_dec(x_12);
x_2 = x_72;
x_7 = x_65;
x_9 = x_71;
goto _start;
}
else
{
lean_object* x_74; 
x_74 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldValue_x3f(x_1, x_10);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; 
lean_dec(x_65);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_75 = lean_box(0);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_9);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_74, 0);
lean_inc(x_77);
lean_dec(x_74);
lean_inc(x_8);
lean_inc(x_65);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_77);
x_78 = l_Lean_Meta_inferType(x_77, x_5, x_6, x_65, x_8, x_9);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
lean_inc(x_8);
lean_inc(x_65);
lean_inc(x_6);
lean_inc(x_5);
x_81 = l_Lean_Meta_isExprDefEq(x_79, x_11, x_5, x_6, x_65, x_8, x_80);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; uint8_t x_83; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_unbox(x_82);
lean_dec(x_82);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_77);
lean_dec(x_65);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_84 = lean_ctor_get(x_81, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_85 = x_81;
} else {
 lean_dec_ref(x_81);
 x_85 = lean_box(0);
}
x_86 = lean_box(0);
if (lean_is_scalar(x_85)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_85;
}
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_84);
return x_87;
}
else
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_ctor_get(x_81, 1);
lean_inc(x_88);
lean_dec(x_81);
x_89 = lean_expr_instantiate1(x_12, x_77);
lean_dec(x_77);
lean_dec(x_12);
x_2 = x_89;
x_7 = x_65;
x_9 = x_88;
goto _start;
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_77);
lean_dec(x_65);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_91 = lean_ctor_get(x_81, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_81, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_93 = x_81;
} else {
 lean_dec_ref(x_81);
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
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_77);
lean_dec(x_65);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_95 = lean_ctor_get(x_78, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_78, 1);
lean_inc(x_96);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_97 = x_78;
} else {
 lean_dec_ref(x_78);
 x_97 = lean_box(0);
}
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(1, 2, 0);
} else {
 x_98 = x_97;
}
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_96);
return x_98;
}
}
}
}
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_102 = lean_box(0);
x_103 = lean_mk_string("id");
x_104 = lean_name_mk_string(x_102, x_103);
x_105 = lean_unsigned_to_nat(2u);
x_106 = l_Lean_Expr_isAppOfArity(x_2, x_104, x_105);
lean_dec(x_104);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; 
x_107 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_107, 0, x_2);
x_108 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_9);
return x_108;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = l_Lean_Expr_appArg_x21(x_2);
lean_dec(x_2);
x_110 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_110, 0, x_109);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_9);
return x_111;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Elab_Term_StructInst_Struct_ref(x_1);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_7, 3);
x_13 = l_Lean_replaceRef(x_10, x_12);
lean_dec(x_12);
lean_dec(x_10);
lean_ctor_set(x_7, 3, x_13);
x_14 = l_Lean_Meta_mkFreshLevelMVarsFor(x_2, x_5, x_6, x_7, x_8, x_9);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_instantiate_value_lparams(x_2, x_15);
lean_dec(x_15);
x_18 = l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f(x_1, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_19 = lean_ctor_get(x_7, 0);
x_20 = lean_ctor_get(x_7, 1);
x_21 = lean_ctor_get(x_7, 2);
x_22 = lean_ctor_get(x_7, 3);
x_23 = lean_ctor_get(x_7, 4);
x_24 = lean_ctor_get(x_7, 5);
x_25 = lean_ctor_get(x_7, 6);
x_26 = lean_ctor_get(x_7, 7);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_7);
x_27 = l_Lean_replaceRef(x_10, x_22);
lean_dec(x_22);
lean_dec(x_10);
x_28 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_28, 0, x_19);
lean_ctor_set(x_28, 1, x_20);
lean_ctor_set(x_28, 2, x_21);
lean_ctor_set(x_28, 3, x_27);
lean_ctor_set(x_28, 4, x_23);
lean_ctor_set(x_28, 5, x_24);
lean_ctor_set(x_28, 6, x_25);
lean_ctor_set(x_28, 7, x_26);
x_29 = l_Lean_Meta_mkFreshLevelMVarsFor(x_2, x_5, x_6, x_28, x_8, x_9);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_instantiate_value_lparams(x_2, x_30);
lean_dec(x_30);
x_33 = l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValueAux_x3f(x_1, x_32, x_3, x_4, x_5, x_6, x_28, x_8, x_31);
return x_33;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Lean_Expr_isApp(x_2);
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
lean_object* x_11; 
x_11 = l_Lean_Expr_getAppFn(x_2);
if (lean_obj_tag(x_11) == 4)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_st_ref_get(x_6, x_7);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Environment_getProjectionStructureName_x3f(x_17, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = lean_box(0);
lean_ctor_set(x_13, 0, x_19);
return x_13;
}
else
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Array_contains___at_Lean_findField_x3f___spec__1(x_1, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = lean_box(0);
lean_ctor_set(x_13, 0, x_22);
return x_13;
}
else
{
lean_object* x_23; 
lean_free_object(x_13);
x_23 = l_Lean_Meta_unfoldDefinition_x3f(x_2, x_3, x_4, x_5, x_6, x_16);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_13, 0);
x_25 = lean_ctor_get(x_13, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_13);
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Environment_getProjectionStructureName_x3f(x_26, x_12);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_25);
return x_29;
}
else
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_ctor_get(x_27, 0);
lean_inc(x_30);
lean_dec(x_27);
x_31 = l_Array_contains___at_Lean_findField_x3f___spec__1(x_1, x_30);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_25);
return x_33;
}
else
{
lean_object* x_34; 
x_34 = l_Lean_Meta_unfoldDefinition_x3f(x_2, x_3, x_4, x_5, x_6, x_25);
return x_34;
}
}
}
}
else
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_7);
return x_36;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
x_12 = lean_box_uint64(x_11);
x_13 = lean_apply_3(x_8, x_1, x_10, x_12);
return x_13;
}
case 5:
{
lean_object* x_14; lean_object* x_15; uint64_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_17 = lean_box_uint64(x_16);
x_18 = lean_apply_4(x_6, x_1, x_14, x_15, x_17);
return x_18;
}
case 6:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint64_t x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 2);
lean_inc(x_21);
x_22 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_23 = lean_box_uint64(x_22);
x_24 = lean_apply_5(x_2, x_1, x_19, x_20, x_21, x_23);
return x_24;
}
case 7:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint64_t x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 2);
lean_inc(x_27);
x_28 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_29 = lean_box_uint64(x_28);
x_30 = lean_apply_5(x_3, x_1, x_25, x_26, x_27, x_29);
return x_30;
}
case 8:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint64_t x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_31 = lean_ctor_get(x_1, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_1, 1);
lean_inc(x_32);
x_33 = lean_ctor_get(x_1, 2);
lean_inc(x_33);
x_34 = lean_ctor_get(x_1, 3);
lean_inc(x_34);
x_35 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
x_36 = lean_box_uint64(x_35);
x_37 = lean_apply_6(x_4, x_1, x_31, x_32, x_33, x_34, x_36);
return x_37;
}
case 10:
{
lean_object* x_38; lean_object* x_39; uint64_t x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_1, 1);
lean_inc(x_39);
x_40 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_41 = lean_box_uint64(x_40);
x_42 = lean_apply_4(x_7, x_1, x_38, x_39, x_41);
return x_42;
}
case 11:
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint64_t x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_43 = lean_ctor_get(x_1, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_1, 1);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 2);
lean_inc(x_45);
x_46 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_47 = lean_box_uint64(x_46);
x_48 = lean_apply_5(x_5, x_1, x_43, x_44, x_45, x_47);
return x_48;
}
default: 
{
lean_object* x_49; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_49 = lean_apply_1(x_9, x_1);
return x_49;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_reduce_match__1___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_StructInst_DefaultFields_reduce___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = x_3 < x_2;
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_11 = x_4;
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_array_uget(x_4, x_3);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_uset(x_4, x_3, x_14);
x_16 = x_13;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_17 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_1, x_16, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 1;
x_21 = x_3 + x_20;
x_22 = x_18;
x_23 = lean_array_uset(x_15, x_3, x_22);
x_3 = x_21;
x_4 = x_23;
x_9 = x_19;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_17);
if (x_25 == 0)
{
return x_17;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_17);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_1, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = 0;
x_13 = 1;
x_14 = l_Lean_Meta_mkLambdaFVars(x_2, x_10, x_12, x_13, x_4, x_5, x_6, x_7, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_1, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = 0;
x_13 = 1;
x_14 = l_Lean_Meta_mkForallFVars(x_2, x_10, x_12, x_13, x_4, x_5, x_6, x_7, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_StructInst_DefaultFields_reduce___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_reduce(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 2:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = l_Lean_Meta_getExprMVarAssignment_x3f(x_8, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
lean_ctor_set(x_9, 0, x_2);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_dec(x_9);
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
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_9, 1);
x_17 = lean_ctor_get(x_9, 0);
lean_dec(x_17);
x_18 = lean_ctor_get(x_10, 0);
lean_inc(x_18);
lean_dec(x_10);
x_19 = l_Lean_Expr_isMVar(x_18);
if (x_19 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
lean_ctor_set(x_9, 0, x_18);
return x_9;
}
else
{
lean_free_object(x_9);
x_2 = x_18;
x_7 = x_16;
goto _start;
}
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_9, 1);
lean_inc(x_21);
lean_dec(x_9);
x_22 = lean_ctor_get(x_10, 0);
lean_inc(x_22);
lean_dec(x_10);
x_23 = l_Lean_Expr_isMVar(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
else
{
x_2 = x_22;
x_7 = x_21;
goto _start;
}
}
}
}
case 5:
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_2, 0);
lean_inc(x_26);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_27 = l_Lean_Elab_Term_StructInst_DefaultFields_reduceProjOf_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Expr_getAppFn(x_26);
lean_dec(x_26);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_31 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_1, x_30, x_3, x_4, x_5, x_6, x_29);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Expr_isLambda(x_32);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; size_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_35 = l_Lean_levelZero;
x_36 = l_Lean_mkSort(x_35);
x_37 = lean_unsigned_to_nat(0u);
x_38 = l_Lean_Expr_getAppNumArgsAux(x_2, x_37);
lean_inc(x_38);
x_39 = lean_mk_array(x_38, x_36);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_sub(x_38, x_40);
lean_dec(x_38);
x_42 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_2, x_39, x_41);
x_43 = lean_array_get_size(x_42);
x_44 = lean_usize_of_nat(x_43);
lean_dec(x_43);
x_45 = x_42;
x_46 = lean_box_usize(x_44);
x_47 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce___boxed__const__1;
x_48 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Term_StructInst_DefaultFields_reduce___spec__1___boxed), 9, 4);
lean_closure_set(x_48, 0, x_1);
lean_closure_set(x_48, 1, x_46);
lean_closure_set(x_48, 2, x_47);
lean_closure_set(x_48, 3, x_45);
x_49 = x_48;
x_50 = lean_apply_5(x_49, x_3, x_4, x_5, x_6, x_33);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = l_Lean_mkAppN(x_32, x_52);
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
x_56 = l_Lean_mkAppN(x_32, x_54);
lean_dec(x_54);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
else
{
uint8_t x_58; 
lean_dec(x_32);
x_58 = !lean_is_exclusive(x_50);
if (x_58 == 0)
{
return x_50;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_50, 0);
x_60 = lean_ctor_get(x_50, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_50);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_62 = lean_unsigned_to_nat(0u);
x_63 = l_Lean_Expr_getAppNumArgsAux(x_2, x_62);
x_64 = lean_mk_empty_array_with_capacity(x_63);
lean_dec(x_63);
x_65 = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(x_2, x_64);
x_66 = l_Lean_Expr_betaRev(x_32, x_65);
lean_dec(x_65);
lean_dec(x_32);
x_2 = x_66;
x_7 = x_33;
goto _start;
}
}
else
{
uint8_t x_68; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_68 = !lean_is_exclusive(x_31);
if (x_68 == 0)
{
return x_31;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_31, 0);
x_70 = lean_ctor_get(x_31, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_31);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
else
{
lean_object* x_72; lean_object* x_73; 
lean_dec(x_26);
lean_dec(x_2);
x_72 = lean_ctor_get(x_27, 1);
lean_inc(x_72);
lean_dec(x_27);
x_73 = lean_ctor_get(x_28, 0);
lean_inc(x_73);
lean_dec(x_28);
x_2 = x_73;
x_7 = x_72;
goto _start;
}
}
else
{
uint8_t x_75; 
lean_dec(x_26);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_27);
if (x_75 == 0)
{
return x_27;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_27, 0);
x_77 = lean_ctor_get(x_27, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_27);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
case 6:
{
lean_object* x_79; lean_object* x_80; 
x_79 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_reduce___lambda__1), 8, 1);
lean_closure_set(x_79, 0, x_1);
x_80 = l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1___rarg(x_2, x_79, x_3, x_4, x_5, x_6, x_7);
return x_80;
}
case 7:
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_reduce___lambda__2), 8, 1);
lean_closure_set(x_81, 0, x_1);
x_82 = l_Lean_Meta_forallTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferForallType___spec__2___rarg(x_2, x_81, x_3, x_4, x_5, x_6, x_7);
return x_82;
}
case 8:
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_reduce___lambda__1), 8, 1);
lean_closure_set(x_83, 0, x_1);
x_84 = l_Lean_Meta_lambdaLetTelescope___at___private_Lean_Meta_InferType_0__Lean_Meta_inferLambdaType___spec__1___rarg(x_2, x_83, x_3, x_4, x_5, x_6, x_7);
return x_84;
}
case 10:
{
lean_object* x_85; lean_object* x_86; uint64_t x_87; lean_object* x_88; 
x_85 = lean_ctor_get(x_2, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_2, 1);
lean_inc(x_86);
x_87 = lean_ctor_get_uint64(x_2, sizeof(void*)*2);
lean_inc(x_86);
x_88 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_1, x_86, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_97; 
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
x_97 = l_Lean_Elab_Term_StructInst_defaultMissing_x3f(x_2);
lean_dec(x_2);
if (lean_obj_tag(x_97) == 0)
{
lean_object* x_98; 
x_98 = lean_box(0);
x_92 = x_98;
goto block_96;
}
else
{
uint8_t x_99; 
lean_dec(x_97);
x_99 = l_Lean_Expr_isMVar(x_89);
if (x_99 == 0)
{
lean_object* x_100; 
lean_dec(x_91);
lean_dec(x_86);
lean_dec(x_85);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_89);
lean_ctor_set(x_100, 1, x_90);
return x_100;
}
else
{
lean_object* x_101; 
x_101 = lean_box(0);
x_92 = x_101;
goto block_96;
}
}
block_96:
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_92);
x_93 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_93, 0, x_85);
lean_ctor_set(x_93, 1, x_86);
lean_ctor_set_uint64(x_93, sizeof(void*)*2, x_87);
x_94 = lean_expr_update_mdata(x_93, x_89);
if (lean_is_scalar(x_91)) {
 x_95 = lean_alloc_ctor(0, 2, 0);
} else {
 x_95 = x_91;
}
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_90);
return x_95;
}
}
else
{
uint8_t x_102; 
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_2);
x_102 = !lean_is_exclusive(x_88);
if (x_102 == 0)
{
return x_88;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_88, 0);
x_104 = lean_ctor_get(x_88, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_88);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
}
case 11:
{
uint8_t x_106; 
x_106 = !lean_is_exclusive(x_2);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_107 = lean_ctor_get(x_2, 0);
x_108 = lean_ctor_get(x_2, 1);
x_109 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_109);
x_110 = l_Lean_Meta_project_x3f(x_109, x_108, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_110) == 0)
{
lean_object* x_111; 
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; lean_object* x_113; 
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
lean_inc(x_109);
x_113 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_1, x_109, x_3, x_4, x_5, x_6, x_112);
if (lean_obj_tag(x_113) == 0)
{
uint8_t x_114; 
x_114 = !lean_is_exclusive(x_113);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; 
x_115 = lean_ctor_get(x_113, 0);
x_116 = lean_expr_update_proj(x_2, x_115);
lean_ctor_set(x_113, 0, x_116);
return x_113;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_117 = lean_ctor_get(x_113, 0);
x_118 = lean_ctor_get(x_113, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_113);
x_119 = lean_expr_update_proj(x_2, x_117);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_118);
return x_120;
}
}
else
{
uint8_t x_121; 
lean_free_object(x_2);
lean_dec(x_109);
lean_dec(x_108);
lean_dec(x_107);
x_121 = !lean_is_exclusive(x_113);
if (x_121 == 0)
{
return x_113;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_113, 0);
x_123 = lean_ctor_get(x_113, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_113);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
return x_124;
}
}
}
else
{
lean_object* x_125; lean_object* x_126; 
lean_free_object(x_2);
lean_dec(x_109);
lean_dec(x_108);
lean_dec(x_107);
x_125 = lean_ctor_get(x_110, 1);
lean_inc(x_125);
lean_dec(x_110);
x_126 = lean_ctor_get(x_111, 0);
lean_inc(x_126);
lean_dec(x_111);
x_2 = x_126;
x_7 = x_125;
goto _start;
}
}
else
{
uint8_t x_128; 
lean_free_object(x_2);
lean_dec(x_109);
lean_dec(x_108);
lean_dec(x_107);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_128 = !lean_is_exclusive(x_110);
if (x_128 == 0)
{
return x_110;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_110, 0);
x_130 = lean_ctor_get(x_110, 1);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_110);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; uint64_t x_135; lean_object* x_136; 
x_132 = lean_ctor_get(x_2, 0);
x_133 = lean_ctor_get(x_2, 1);
x_134 = lean_ctor_get(x_2, 2);
x_135 = lean_ctor_get_uint64(x_2, sizeof(void*)*3);
lean_inc(x_134);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_134);
x_136 = l_Lean_Meta_project_x3f(x_134, x_133, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_136) == 0)
{
lean_object* x_137; 
x_137 = lean_ctor_get(x_136, 0);
lean_inc(x_137);
if (lean_obj_tag(x_137) == 0)
{
lean_object* x_138; lean_object* x_139; 
x_138 = lean_ctor_get(x_136, 1);
lean_inc(x_138);
lean_dec(x_136);
lean_inc(x_134);
x_139 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_1, x_134, x_3, x_4, x_5, x_6, x_138);
if (lean_obj_tag(x_139) == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
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
x_143 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_143, 0, x_132);
lean_ctor_set(x_143, 1, x_133);
lean_ctor_set(x_143, 2, x_134);
lean_ctor_set_uint64(x_143, sizeof(void*)*3, x_135);
x_144 = lean_expr_update_proj(x_143, x_140);
if (lean_is_scalar(x_142)) {
 x_145 = lean_alloc_ctor(0, 2, 0);
} else {
 x_145 = x_142;
}
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_141);
return x_145;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_132);
x_146 = lean_ctor_get(x_139, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_139, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_139)) {
 lean_ctor_release(x_139, 0);
 lean_ctor_release(x_139, 1);
 x_148 = x_139;
} else {
 lean_dec_ref(x_139);
 x_148 = lean_box(0);
}
if (lean_is_scalar(x_148)) {
 x_149 = lean_alloc_ctor(1, 2, 0);
} else {
 x_149 = x_148;
}
lean_ctor_set(x_149, 0, x_146);
lean_ctor_set(x_149, 1, x_147);
return x_149;
}
}
else
{
lean_object* x_150; lean_object* x_151; 
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_132);
x_150 = lean_ctor_get(x_136, 1);
lean_inc(x_150);
lean_dec(x_136);
x_151 = lean_ctor_get(x_137, 0);
lean_inc(x_151);
lean_dec(x_137);
x_2 = x_151;
x_7 = x_150;
goto _start;
}
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_132);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_153 = lean_ctor_get(x_136, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_136, 1);
lean_inc(x_154);
if (lean_is_exclusive(x_136)) {
 lean_ctor_release(x_136, 0);
 lean_ctor_release(x_136, 1);
 x_155 = x_136;
} else {
 lean_dec_ref(x_136);
 x_155 = lean_box(0);
}
if (lean_is_scalar(x_155)) {
 x_156 = lean_alloc_ctor(1, 2, 0);
} else {
 x_156 = x_155;
}
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set(x_156, 1, x_154);
return x_156;
}
}
}
default: 
{
lean_object* x_157; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_157 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_157, 0, x_2);
lean_ctor_set(x_157, 1, x_7);
return x_157;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Term_StructInst_DefaultFields_reduce___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = l_Array_mapMUnsafe_map___at_Lean_Elab_Term_StructInst_DefaultFields_reduce___spec__1(x_1, x_10, x_11, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_defaultMissing_x3f(x_1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
uint8_t x_4; 
lean_dec(x_2);
x_4 = 1;
return x_4;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; 
x_15 = lean_nat_dec_lt(x_3, x_7);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_1);
x_17 = lean_nat_dec_lt(x_6, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
uint8_t x_18; lean_object* x_19; lean_object* x_20; 
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
x_18 = 0;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_14);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_21 = lean_array_fget(x_1, x_6);
x_22 = l_Lean_Elab_Term_StructInst_Struct_structName(x_21);
lean_inc(x_4);
x_23 = l_Lean_Name_append(x_22, x_4);
lean_dec(x_22);
x_24 = lean_box(0);
x_25 = lean_mk_string("_default");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = l_Lean_Name_append(x_23, x_26);
lean_dec(x_23);
x_28 = lean_st_ref_get(x_13, x_14);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_environment_find(x_31, x_27);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_21);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_6, x_33);
lean_dec(x_6);
x_6 = x_34;
x_14 = x_30;
goto _start;
}
else
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_32, 0);
lean_inc(x_36);
lean_dec(x_32);
if (lean_obj_tag(x_36) == 1)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_st_ref_get(x_13, x_30);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_st_ref_get(x_11, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_ctor_get(x_40, 0);
lean_inc(x_42);
lean_dec(x_40);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_43 = l_Lean_Elab_Term_StructInst_DefaultFields_mkDefaultValue_x3f(x_21, x_36, x_8, x_9, x_10, x_11, x_12, x_13, x_41);
lean_dec(x_36);
lean_dec(x_21);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l_Lean_Meta_setMCtx(x_42, x_10, x_11, x_12, x_13, x_45);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_48 = lean_unsigned_to_nat(1u);
x_49 = lean_nat_add(x_6, x_48);
lean_dec(x_6);
x_50 = lean_nat_add(x_7, x_48);
lean_dec(x_7);
x_6 = x_49;
x_7 = x_50;
x_14 = x_47;
goto _start;
}
else
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_43, 1);
lean_inc(x_52);
lean_dec(x_43);
x_53 = !lean_is_exclusive(x_44);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_44, 0);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_2);
x_55 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_2, x_54, x_10, x_11, x_12, x_13, x_52);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; size_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = 8192;
x_59 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___lambda__1___boxed), 1, 0);
x_60 = l_Lean_Expr_FindImpl_initCache;
lean_inc(x_56);
x_61 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_59, x_58, x_56, x_60);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
lean_dec(x_61);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_42);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_63 = l_Lean_Elab_Term_getMVarDecl(x_5, x_8, x_9, x_10, x_11, x_12, x_13, x_57);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_ctor_get(x_64, 2);
lean_inc(x_66);
lean_dec(x_64);
lean_ctor_set(x_44, 0, x_66);
x_67 = lean_box(0);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_68 = l_Lean_Elab_Term_ensureHasType(x_44, x_56, x_67, x_8, x_9, x_10, x_11, x_12, x_13, x_65);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = l_Lean_Meta_assignExprMVar(x_5, x_69, x_10, x_11, x_12, x_13, x_70);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_72 = !lean_is_exclusive(x_71);
if (x_72 == 0)
{
lean_object* x_73; uint8_t x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_71, 0);
lean_dec(x_73);
x_74 = 1;
x_75 = lean_box(x_74);
lean_ctor_set(x_71, 0, x_75);
return x_71;
}
else
{
lean_object* x_76; uint8_t x_77; lean_object* x_78; lean_object* x_79; 
x_76 = lean_ctor_get(x_71, 1);
lean_inc(x_76);
lean_dec(x_71);
x_77 = 1;
x_78 = lean_box(x_77);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_76);
return x_79;
}
}
else
{
uint8_t x_80; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
x_80 = !lean_is_exclusive(x_68);
if (x_80 == 0)
{
return x_68;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_68, 0);
x_82 = lean_ctor_get(x_68, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_68);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_62);
lean_dec(x_56);
lean_free_object(x_44);
x_84 = l_Lean_Meta_setMCtx(x_42, x_10, x_11, x_12, x_13, x_57);
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
lean_dec(x_84);
x_86 = lean_unsigned_to_nat(1u);
x_87 = lean_nat_add(x_6, x_86);
lean_dec(x_6);
x_88 = lean_nat_add(x_7, x_86);
lean_dec(x_7);
x_6 = x_87;
x_7 = x_88;
x_14 = x_85;
goto _start;
}
}
else
{
uint8_t x_90; 
lean_free_object(x_44);
lean_dec(x_42);
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
x_90 = !lean_is_exclusive(x_55);
if (x_90 == 0)
{
return x_55;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_55, 0);
x_92 = lean_ctor_get(x_55, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_55);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
else
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_ctor_get(x_44, 0);
lean_inc(x_94);
lean_dec(x_44);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_2);
x_95 = l_Lean_Elab_Term_StructInst_DefaultFields_reduce(x_2, x_94, x_10, x_11, x_12, x_13, x_52);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; size_t x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = 8192;
x_99 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___lambda__1___boxed), 1, 0);
x_100 = l_Lean_Expr_FindImpl_initCache;
lean_inc(x_96);
x_101 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_99, x_98, x_96, x_100);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
lean_dec(x_101);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
lean_dec(x_42);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_103 = l_Lean_Elab_Term_getMVarDecl(x_5, x_8, x_9, x_10, x_11, x_12, x_13, x_97);
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec(x_103);
x_106 = lean_ctor_get(x_104, 2);
lean_inc(x_106);
lean_dec(x_104);
x_107 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_107, 0, x_106);
x_108 = lean_box(0);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_109 = l_Lean_Elab_Term_ensureHasType(x_107, x_96, x_108, x_8, x_9, x_10, x_11, x_12, x_13, x_105);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; lean_object* x_116; lean_object* x_117; 
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_109, 1);
lean_inc(x_111);
lean_dec(x_109);
x_112 = l_Lean_Meta_assignExprMVar(x_5, x_110, x_10, x_11, x_12, x_13, x_111);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
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
x_115 = 1;
x_116 = lean_box(x_115);
if (lean_is_scalar(x_114)) {
 x_117 = lean_alloc_ctor(0, 2, 0);
} else {
 x_117 = x_114;
}
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_113);
return x_117;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
x_118 = lean_ctor_get(x_109, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_109, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 x_120 = x_109;
} else {
 lean_dec_ref(x_109);
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
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
lean_dec(x_102);
lean_dec(x_96);
x_122 = l_Lean_Meta_setMCtx(x_42, x_10, x_11, x_12, x_13, x_97);
x_123 = lean_ctor_get(x_122, 1);
lean_inc(x_123);
lean_dec(x_122);
x_124 = lean_unsigned_to_nat(1u);
x_125 = lean_nat_add(x_6, x_124);
lean_dec(x_6);
x_126 = lean_nat_add(x_7, x_124);
lean_dec(x_7);
x_6 = x_125;
x_7 = x_126;
x_14 = x_123;
goto _start;
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_42);
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
x_128 = lean_ctor_get(x_95, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_95, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_130 = x_95;
} else {
 lean_dec_ref(x_95);
 x_130 = lean_box(0);
}
if (lean_is_scalar(x_130)) {
 x_131 = lean_alloc_ctor(1, 2, 0);
} else {
 x_131 = x_130;
}
lean_ctor_set(x_131, 0, x_128);
lean_ctor_set(x_131, 1, x_129);
return x_131;
}
}
}
}
else
{
uint8_t x_132; 
lean_dec(x_42);
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
x_132 = !lean_is_exclusive(x_43);
if (x_132 == 0)
{
return x_43;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = lean_ctor_get(x_43, 0);
x_134 = lean_ctor_get(x_43, 1);
lean_inc(x_134);
lean_inc(x_133);
lean_dec(x_43);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_133);
lean_ctor_set(x_135, 1, x_134);
return x_135;
}
}
}
else
{
lean_object* x_136; lean_object* x_137; 
lean_dec(x_36);
lean_dec(x_21);
x_136 = lean_unsigned_to_nat(1u);
x_137 = lean_nat_add(x_6, x_136);
lean_dec(x_6);
x_6 = x_137;
x_14 = x_30;
goto _start;
}
}
}
}
else
{
uint8_t x_139; lean_object* x_140; lean_object* x_141; 
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
x_139 = 0;
x_140 = lean_box(x_139);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_14);
return x_141;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_3);
lean_dec(x_1);
return x_15;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop(x_1, x_2, x_3, x_4, x_5, x_13, x_13, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_3);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 1)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_Elab_Term_StructInst_DefaultFields_step(x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_14, 0, x_18);
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
return x_22;
}
}
else
{
uint8_t x_23; 
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
else
{
lean_object* x_27; 
lean_dec(x_12);
x_27 = lean_ctor_get(x_1, 3);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_1);
x_28 = l_instInhabitedPUnit;
x_29 = l_instInhabited___rarg(x_2, x_28);
x_30 = lean_alloc_closure((void*)(l_instInhabitedReaderT___rarg___boxed), 2, 1);
lean_closure_set(x_30, 0, x_29);
x_31 = lean_mk_string("Lean.Elab.StructInst");
x_32 = lean_mk_string("Lean.Elab.Term.StructInst.DefaultFields.step");
x_33 = lean_unsigned_to_nat(766u);
x_34 = lean_unsigned_to_nat(25u);
x_35 = lean_mk_string("unreachable code has been reached");
x_36 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_31, x_32, x_33, x_34, x_35);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_31);
x_37 = lean_panic_fn(x_30, x_36);
x_38 = lean_apply_9(x_37, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_38, 0);
lean_dec(x_40);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_38, 0, x_42);
return x_38;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_38, 1);
lean_inc(x_43);
lean_dec(x_38);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_43);
return x_46;
}
}
else
{
uint8_t x_47; 
x_47 = !lean_is_exclusive(x_38);
if (x_47 == 0)
{
return x_38;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_38, 0);
x_49 = lean_ctor_get(x_38, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_38);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_2);
x_51 = lean_ctor_get(x_27, 0);
lean_inc(x_51);
lean_dec(x_27);
x_52 = l_Lean_Elab_Term_StructInst_defaultMissing_x3f(x_51);
lean_dec(x_51);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_53 = lean_box(0);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_11);
return x_55;
}
else
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_52, 0);
lean_inc(x_56);
lean_dec(x_52);
if (lean_obj_tag(x_56) == 2)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
lean_dec(x_56);
x_58 = l_Lean_Elab_Term_isExprMVarAssigned(x_57, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_unbox(x_59);
lean_dec(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_61 = lean_ctor_get(x_58, 1);
lean_inc(x_61);
lean_dec(x_58);
x_62 = lean_ctor_get(x_1, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_3, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_3, 1);
lean_inc(x_64);
x_65 = lean_ctor_get(x_3, 2);
lean_inc(x_65);
lean_dec(x_3);
x_66 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(x_1);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_9);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_68 = lean_ctor_get(x_9, 3);
x_69 = l_Lean_replaceRef(x_62, x_68);
lean_dec(x_68);
lean_dec(x_62);
lean_ctor_set(x_9, 3, x_69);
x_70 = lean_unsigned_to_nat(0u);
lean_inc(x_10);
x_71 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop(x_63, x_64, x_65, x_66, x_57, x_70, x_70, x_5, x_6, x_7, x_8, x_9, x_10, x_61);
lean_dec(x_65);
lean_dec(x_63);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; uint8_t x_73; 
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_unbox(x_72);
lean_dec(x_72);
if (x_73 == 0)
{
uint8_t x_74; 
lean_dec(x_10);
lean_dec(x_4);
x_74 = !lean_is_exclusive(x_71);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_71, 0);
lean_dec(x_75);
x_76 = lean_box(0);
x_77 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_71, 0, x_77);
return x_71;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_78 = lean_ctor_get(x_71, 1);
lean_inc(x_78);
lean_dec(x_71);
x_79 = lean_box(0);
x_80 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_80, 0, x_79);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_78);
return x_81;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_82 = lean_ctor_get(x_71, 1);
lean_inc(x_82);
lean_dec(x_71);
x_83 = lean_st_ref_get(x_10, x_82);
lean_dec(x_10);
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
lean_dec(x_83);
x_85 = lean_st_ref_take(x_4, x_84);
x_86 = lean_ctor_get(x_85, 1);
lean_inc(x_86);
lean_dec(x_85);
x_87 = 1;
x_88 = lean_box(x_87);
x_89 = lean_st_ref_set(x_4, x_88, x_86);
lean_dec(x_4);
x_90 = !lean_is_exclusive(x_89);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_89, 0);
lean_dec(x_91);
x_92 = lean_box(0);
x_93 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_89, 0, x_93);
return x_89;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_94 = lean_ctor_get(x_89, 1);
lean_inc(x_94);
lean_dec(x_89);
x_95 = lean_box(0);
x_96 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_96, 0, x_95);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_94);
return x_97;
}
}
}
else
{
uint8_t x_98; 
lean_dec(x_10);
lean_dec(x_4);
x_98 = !lean_is_exclusive(x_71);
if (x_98 == 0)
{
return x_71;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_71, 0);
x_100 = lean_ctor_get(x_71, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_71);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_102 = lean_ctor_get(x_9, 0);
x_103 = lean_ctor_get(x_9, 1);
x_104 = lean_ctor_get(x_9, 2);
x_105 = lean_ctor_get(x_9, 3);
x_106 = lean_ctor_get(x_9, 4);
x_107 = lean_ctor_get(x_9, 5);
x_108 = lean_ctor_get(x_9, 6);
x_109 = lean_ctor_get(x_9, 7);
lean_inc(x_109);
lean_inc(x_108);
lean_inc(x_107);
lean_inc(x_106);
lean_inc(x_105);
lean_inc(x_104);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_9);
x_110 = l_Lean_replaceRef(x_62, x_105);
lean_dec(x_105);
lean_dec(x_62);
x_111 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_111, 0, x_102);
lean_ctor_set(x_111, 1, x_103);
lean_ctor_set(x_111, 2, x_104);
lean_ctor_set(x_111, 3, x_110);
lean_ctor_set(x_111, 4, x_106);
lean_ctor_set(x_111, 5, x_107);
lean_ctor_set(x_111, 6, x_108);
lean_ctor_set(x_111, 7, x_109);
x_112 = lean_unsigned_to_nat(0u);
lean_inc(x_10);
x_113 = l_Lean_Elab_Term_StructInst_DefaultFields_tryToSynthesizeDefault_loop(x_63, x_64, x_65, x_66, x_57, x_112, x_112, x_5, x_6, x_7, x_8, x_111, x_10, x_61);
lean_dec(x_65);
lean_dec(x_63);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_114; uint8_t x_115; 
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
x_115 = lean_unbox(x_114);
lean_dec(x_114);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
lean_dec(x_10);
lean_dec(x_4);
x_116 = lean_ctor_get(x_113, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_117 = x_113;
} else {
 lean_dec_ref(x_113);
 x_117 = lean_box(0);
}
x_118 = lean_box(0);
x_119 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_119, 0, x_118);
if (lean_is_scalar(x_117)) {
 x_120 = lean_alloc_ctor(0, 2, 0);
} else {
 x_120 = x_117;
}
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_116);
return x_120;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_121 = lean_ctor_get(x_113, 1);
lean_inc(x_121);
lean_dec(x_113);
x_122 = lean_st_ref_get(x_10, x_121);
lean_dec(x_10);
x_123 = lean_ctor_get(x_122, 1);
lean_inc(x_123);
lean_dec(x_122);
x_124 = lean_st_ref_take(x_4, x_123);
x_125 = lean_ctor_get(x_124, 1);
lean_inc(x_125);
lean_dec(x_124);
x_126 = 1;
x_127 = lean_box(x_126);
x_128 = lean_st_ref_set(x_4, x_127, x_125);
lean_dec(x_4);
x_129 = lean_ctor_get(x_128, 1);
lean_inc(x_129);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_130 = x_128;
} else {
 lean_dec_ref(x_128);
 x_130 = lean_box(0);
}
x_131 = lean_box(0);
x_132 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_132, 0, x_131);
if (lean_is_scalar(x_130)) {
 x_133 = lean_alloc_ctor(0, 2, 0);
} else {
 x_133 = x_130;
}
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_129);
return x_133;
}
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_10);
lean_dec(x_4);
x_134 = lean_ctor_get(x_113, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_113, 1);
lean_inc(x_135);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_136 = x_113;
} else {
 lean_dec_ref(x_113);
 x_136 = lean_box(0);
}
if (lean_is_scalar(x_136)) {
 x_137 = lean_alloc_ctor(1, 2, 0);
} else {
 x_137 = x_136;
}
lean_ctor_set(x_137, 0, x_134);
lean_ctor_set(x_137, 1, x_135);
return x_137;
}
}
}
else
{
uint8_t x_138; 
lean_dec(x_57);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_138 = !lean_is_exclusive(x_58);
if (x_138 == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_139 = lean_ctor_get(x_58, 0);
lean_dec(x_139);
x_140 = lean_box(0);
x_141 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_58, 0, x_141);
return x_58;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_142 = lean_ctor_get(x_58, 1);
lean_inc(x_142);
lean_dec(x_58);
x_143 = lean_box(0);
x_144 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_144, 0, x_143);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_142);
return x_145;
}
}
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_dec(x_56);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_146 = lean_box(0);
x_147 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_147, 0, x_146);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_11);
return x_148;
}
}
}
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
lean_dec(x_4);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_apply_10(x_15, lean_box(0), x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_4, 0);
lean_inc(x_17);
lean_dec(x_4);
x_18 = l_List_forIn_loop___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1(x_1, x_2, x_17, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_18;
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_apply_10(x_14, lean_box(0), x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_3);
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 1);
lean_inc(x_17);
lean_dec(x_2);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_inc(x_4);
lean_inc(x_1);
x_19 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__1), 11, 3);
lean_closure_set(x_19, 0, x_16);
lean_closure_set(x_19, 1, x_1);
lean_closure_set(x_19, 2, x_4);
x_20 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1___lambda__2), 12, 3);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_17);
lean_closure_set(x_20, 2, x_4);
x_21 = lean_apply_12(x_18, lean_box(0), lean_box(0), x_19, x_20, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_21;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_step(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_11 = l_EStateM_instMonadEStateM(lean_box(0), lean_box(0));
x_12 = l_ReaderT_instMonadReaderT___rarg(x_11);
x_13 = l_ReaderT_instMonadReaderT___rarg(x_12);
x_14 = l_ReaderT_instMonadReaderT___rarg(x_13);
x_15 = l_ReaderT_instMonadReaderT___rarg(x_14);
x_16 = l_ReaderT_instMonadReaderT___rarg(x_15);
x_17 = l_ReaderT_instMonadReaderT___rarg(x_16);
x_18 = l_ReaderT_instMonadReaderT___rarg(x_17);
x_19 = l_Lean_Elab_Term_StructInst_DefaultFields_isRoundDone(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = l_Lean_Elab_Term_StructInst_Struct_fields(x_1);
x_24 = !lean_is_exclusive(x_2);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_2, 0);
x_26 = lean_array_push(x_25, x_1);
lean_ctor_set(x_2, 0, x_26);
x_27 = lean_box(0);
x_28 = l_List_forIn_loop___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1(x_18, x_23, x_27, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_22);
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
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_37 = lean_ctor_get(x_2, 0);
x_38 = lean_ctor_get(x_2, 1);
x_39 = lean_ctor_get(x_2, 2);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_2);
x_40 = lean_array_push(x_37, x_1);
x_41 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_38);
lean_ctor_set(x_41, 2, x_39);
x_42 = lean_box(0);
x_43 = l_List_forIn_loop___at_Lean_Elab_Term_StructInst_DefaultFields_step___spec__1(x_18, x_23, x_42, x_41, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_22);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_45 = x_43;
} else {
 lean_dec_ref(x_43);
 x_45 = lean_box(0);
}
if (lean_is_scalar(x_45)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_45;
}
lean_ctor_set(x_46, 0, x_42);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_43, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_43, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_49 = x_43;
} else {
 lean_dec_ref(x_43);
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
else
{
uint8_t x_51; 
lean_dec(x_18);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_19);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_19, 0);
lean_dec(x_52);
x_53 = lean_box(0);
lean_ctor_set(x_19, 0, x_53);
return x_19;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_19, 1);
lean_inc(x_54);
lean_dec(x_19);
x_55 = lean_box(0);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 3);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
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
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 3);
x_14 = l_Lean_replaceRef(x_1, x_13);
lean_dec(x_13);
lean_ctor_set(x_9, 3, x_14);
x_15 = l_Lean_throwError___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_9);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
x_18 = lean_ctor_get(x_9, 2);
x_19 = lean_ctor_get(x_9, 3);
x_20 = lean_ctor_get(x_9, 4);
x_21 = lean_ctor_get(x_9, 5);
x_22 = lean_ctor_get(x_9, 6);
x_23 = lean_ctor_get(x_9, 7);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_24 = l_Lean_replaceRef(x_1, x_19);
lean_dec(x_19);
x_25 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_25, 0, x_16);
lean_ctor_set(x_25, 1, x_17);
lean_ctor_set(x_25, 2, x_18);
lean_ctor_set(x_25, 3, x_24);
lean_ctor_set(x_25, 4, x_20);
lean_ctor_set(x_25, 5, x_21);
lean_ctor_set(x_25, 6, x_22);
lean_ctor_set(x_25, 7, x_23);
x_26 = l_Lean_throwError___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_25, x_10, x_11);
lean_dec(x_25);
return x_26;
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_st_ref_get(x_11, x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_st_ref_get(x_9, x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f(x_19, x_3);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
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
x_21 = lean_box(0);
lean_ctor_set(x_15, 0, x_21);
return x_15;
}
else
{
lean_object* x_22; uint8_t x_23; 
lean_free_object(x_15);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_nat_dec_lt(x_1, x_2);
if (x_23 == 0)
{
uint8_t x_24; 
lean_dec(x_22);
x_24 = !lean_is_exclusive(x_4);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_25 = lean_ctor_get(x_4, 2);
lean_dec(x_25);
lean_inc(x_2);
lean_ctor_set(x_4, 2, x_2);
x_26 = lean_st_ref_get(x_11, x_18);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_st_ref_take(x_5, x_27);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = 0;
x_31 = lean_box(x_30);
x_32 = lean_st_ref_set(x_5, x_31, x_29);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_34 = l_Lean_Elab_Term_StructInst_DefaultFields_step(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_st_ref_get(x_11, x_35);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_st_ref_get(x_5, x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_unbox(x_39);
lean_dec(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_dec(x_38);
x_42 = lean_unsigned_to_nat(1u);
x_43 = lean_nat_add(x_2, x_42);
lean_dec(x_2);
x_2 = x_43;
x_12 = x_41;
goto _start;
}
else
{
lean_object* x_45; lean_object* x_46; 
lean_dec(x_2);
x_45 = lean_ctor_get(x_38, 1);
lean_inc(x_45);
lean_dec(x_38);
x_46 = lean_unsigned_to_nat(0u);
x_2 = x_46;
x_12 = x_45;
goto _start;
}
}
else
{
uint8_t x_48; 
lean_dec(x_4);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_48 = !lean_is_exclusive(x_34);
if (x_48 == 0)
{
return x_34;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_34, 0);
x_50 = lean_ctor_get(x_34, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_34);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_52 = lean_ctor_get(x_4, 0);
x_53 = lean_ctor_get(x_4, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_4);
lean_inc(x_2);
x_54 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
lean_ctor_set(x_54, 2, x_2);
x_55 = lean_st_ref_get(x_11, x_18);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_57 = lean_st_ref_take(x_5, x_56);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_59 = 0;
x_60 = lean_box(x_59);
x_61 = lean_st_ref_set(x_5, x_60, x_58);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
lean_dec(x_61);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_54);
lean_inc(x_3);
x_63 = l_Lean_Elab_Term_StructInst_DefaultFields_step(x_3, x_54, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_62);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
lean_dec(x_63);
x_65 = lean_st_ref_get(x_11, x_64);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
lean_dec(x_65);
x_67 = lean_st_ref_get(x_5, x_66);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_unbox(x_68);
lean_dec(x_68);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_67, 1);
lean_inc(x_70);
lean_dec(x_67);
x_71 = lean_unsigned_to_nat(1u);
x_72 = lean_nat_add(x_2, x_71);
lean_dec(x_2);
x_2 = x_72;
x_4 = x_54;
x_12 = x_70;
goto _start;
}
else
{
lean_object* x_74; lean_object* x_75; 
lean_dec(x_2);
x_74 = lean_ctor_get(x_67, 1);
lean_inc(x_74);
lean_dec(x_67);
x_75 = lean_unsigned_to_nat(0u);
x_2 = x_75;
x_4 = x_54;
x_12 = x_74;
goto _start;
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_54);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_77 = lean_ctor_get(x_63, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_63, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_79 = x_63;
} else {
 lean_dec_ref(x_63);
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
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_3);
lean_dec(x_2);
x_81 = lean_ctor_get(x_22, 0);
lean_inc(x_81);
x_82 = lean_mk_string("field '");
x_83 = l_Lean_stringToMessageData(x_82);
lean_dec(x_82);
x_84 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(x_22);
lean_dec(x_22);
x_85 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_85, 0, x_84);
x_86 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_mk_string("' is missing");
x_88 = l_Lean_stringToMessageData(x_87);
lean_dec(x_87);
x_89 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_88);
x_90 = l_Lean_throwErrorAt___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__1(x_81, x_89, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_81);
return x_90;
}
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_91 = lean_ctor_get(x_15, 0);
x_92 = lean_ctor_get(x_15, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_15);
x_93 = lean_ctor_get(x_91, 0);
lean_inc(x_93);
lean_dec(x_91);
x_94 = l_Lean_Elab_Term_StructInst_DefaultFields_findDefaultMissing_x3f(x_93, x_3);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; lean_object* x_96; 
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
x_95 = lean_box(0);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_92);
return x_96;
}
else
{
lean_object* x_97; uint8_t x_98; 
x_97 = lean_ctor_get(x_94, 0);
lean_inc(x_97);
lean_dec(x_94);
x_98 = lean_nat_dec_lt(x_1, x_2);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
lean_dec(x_97);
x_99 = lean_ctor_get(x_4, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_4, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 lean_ctor_release(x_4, 2);
 x_101 = x_4;
} else {
 lean_dec_ref(x_4);
 x_101 = lean_box(0);
}
lean_inc(x_2);
if (lean_is_scalar(x_101)) {
 x_102 = lean_alloc_ctor(0, 3, 0);
} else {
 x_102 = x_101;
}
lean_ctor_set(x_102, 0, x_99);
lean_ctor_set(x_102, 1, x_100);
lean_ctor_set(x_102, 2, x_2);
x_103 = lean_st_ref_get(x_11, x_92);
x_104 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
lean_dec(x_103);
x_105 = lean_st_ref_take(x_5, x_104);
x_106 = lean_ctor_get(x_105, 1);
lean_inc(x_106);
lean_dec(x_105);
x_107 = 0;
x_108 = lean_box(x_107);
x_109 = lean_st_ref_set(x_5, x_108, x_106);
x_110 = lean_ctor_get(x_109, 1);
lean_inc(x_110);
lean_dec(x_109);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_102);
lean_inc(x_3);
x_111 = l_Lean_Elab_Term_StructInst_DefaultFields_step(x_3, x_102, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_110);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; 
x_112 = lean_ctor_get(x_111, 1);
lean_inc(x_112);
lean_dec(x_111);
x_113 = lean_st_ref_get(x_11, x_112);
x_114 = lean_ctor_get(x_113, 1);
lean_inc(x_114);
lean_dec(x_113);
x_115 = lean_st_ref_get(x_5, x_114);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_unbox(x_116);
lean_dec(x_116);
if (x_117 == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_115, 1);
lean_inc(x_118);
lean_dec(x_115);
x_119 = lean_unsigned_to_nat(1u);
x_120 = lean_nat_add(x_2, x_119);
lean_dec(x_2);
x_2 = x_120;
x_4 = x_102;
x_12 = x_118;
goto _start;
}
else
{
lean_object* x_122; lean_object* x_123; 
lean_dec(x_2);
x_122 = lean_ctor_get(x_115, 1);
lean_inc(x_122);
lean_dec(x_115);
x_123 = lean_unsigned_to_nat(0u);
x_2 = x_123;
x_4 = x_102;
x_12 = x_122;
goto _start;
}
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_102);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_125 = lean_ctor_get(x_111, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_111, 1);
lean_inc(x_126);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 x_127 = x_111;
} else {
 lean_dec_ref(x_111);
 x_127 = lean_box(0);
}
if (lean_is_scalar(x_127)) {
 x_128 = lean_alloc_ctor(1, 2, 0);
} else {
 x_128 = x_127;
}
lean_ctor_set(x_128, 0, x_125);
lean_ctor_set(x_128, 1, x_126);
return x_128;
}
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_3);
lean_dec(x_2);
x_129 = lean_ctor_get(x_97, 0);
lean_inc(x_129);
x_130 = lean_mk_string("field '");
x_131 = l_Lean_stringToMessageData(x_130);
lean_dec(x_130);
x_132 = l_Lean_Elab_Term_StructInst_DefaultFields_getFieldName(x_97);
lean_dec(x_97);
x_133 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_133, 0, x_132);
x_134 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_134, 0, x_131);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_mk_string("' is missing");
x_136 = l_Lean_stringToMessageData(x_135);
lean_dec(x_135);
x_137 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_137, 0, x_134);
lean_ctor_set(x_137, 1, x_136);
x_138 = l_Lean_throwErrorAt___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__1(x_129, x_137, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_92);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_129);
return x_138;
}
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_throwErrorAt___at_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_StructInst_DefaultFields_propagate(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_9 = l_Lean_Elab_Term_StructInst_DefaultFields_getHierarchyDepth(x_1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_11);
x_12 = l_Lean_Elab_Term_StructInst_DefaultFields_collectStructNames(x_1, x_11);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set(x_13, 2, x_10);
x_14 = lean_st_ref_get(x_7, x_8);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = 0;
x_17 = lean_box(x_16);
x_18 = lean_st_mk_ref(x_17, x_15);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_7);
lean_inc(x_19);
x_21 = l_Lean_Elab_Term_StructInst_DefaultFields_propagateLoop(x_9, x_10, x_1, x_13, x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_20);
lean_dec(x_9);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_st_ref_get(x_7, x_23);
lean_dec(x_7);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_st_ref_get(x_19, x_25);
lean_dec(x_19);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set(x_26, 0, x_22);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_22);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
uint8_t x_31; 
lean_dec(x_19);
lean_dec(x_7);
x_31 = !lean_is_exclusive(x_21);
if (x_31 == 0)
{
return x_21;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_21, 0);
x_33 = lean_ctor_get(x_21, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_21);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Std_fmt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_StructInst_formatStruct(x_1);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
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
x_13 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__3(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
x_24 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__3(x_2, x_3, x_4, x_5, x_6, x_23, x_8, x_9);
lean_dec(x_23);
return x_24;
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__4___rarg(lean_object* x_1) {
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
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__4___rarg), 1, 0);
return x_7;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_86 = lean_st_ref_get(x_11, x_12);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = lean_ctor_get(x_87, 0);
lean_inc(x_89);
lean_dec(x_87);
x_90 = lean_ctor_get(x_10, 4);
lean_inc(x_90);
x_91 = lean_ctor_get(x_10, 5);
lean_inc(x_91);
lean_inc(x_89);
x_92 = lean_alloc_closure((void*)(l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed), 4, 1);
lean_closure_set(x_92, 0, x_89);
lean_inc(x_90);
x_93 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed), 3, 1);
lean_closure_set(x_93, 0, x_90);
lean_inc(x_89);
x_94 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_94, 0, x_89);
lean_inc(x_91);
lean_inc(x_90);
lean_inc(x_89);
x_95 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed), 6, 3);
lean_closure_set(x_95, 0, x_89);
lean_closure_set(x_95, 1, x_90);
lean_closure_set(x_95, 2, x_91);
lean_inc(x_89);
x_96 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed), 6, 3);
lean_closure_set(x_96, 0, x_89);
lean_closure_set(x_96, 1, x_90);
lean_closure_set(x_96, 2, x_91);
x_97 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_97, 0, x_92);
lean_ctor_set(x_97, 1, x_93);
lean_ctor_set(x_97, 2, x_94);
lean_ctor_set(x_97, 3, x_95);
lean_ctor_set(x_97, 4, x_96);
x_98 = x_97;
x_99 = lean_ctor_get(x_10, 3);
lean_inc(x_99);
x_100 = l_Lean_Elab_Term_getCurrMacroScope(x_6, x_7, x_8, x_9, x_10, x_11, x_88);
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = lean_ctor_get(x_10, 1);
lean_inc(x_103);
x_104 = lean_ctor_get(x_10, 2);
lean_inc(x_104);
x_105 = lean_st_ref_get(x_11, x_102);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
x_109 = lean_environment_main_module(x_89);
x_110 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_110, 0, x_98);
lean_ctor_set(x_110, 1, x_109);
lean_ctor_set(x_110, 2, x_101);
lean_ctor_set(x_110, 3, x_103);
lean_ctor_set(x_110, 4, x_104);
lean_ctor_set(x_110, 5, x_99);
x_111 = lean_box(0);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_108);
lean_ctor_set(x_112, 1, x_111);
x_113 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView(x_2, x_3, x_4, x_110, x_112);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; 
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_113, 1);
lean_inc(x_115);
lean_dec(x_113);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_st_ref_take(x_11, x_107);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
lean_dec(x_117);
x_120 = !lean_is_exclusive(x_118);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_121 = lean_ctor_get(x_118, 1);
lean_dec(x_121);
lean_ctor_set(x_118, 1, x_116);
x_122 = lean_st_ref_set(x_11, x_118, x_119);
x_123 = lean_ctor_get(x_122, 1);
lean_inc(x_123);
lean_dec(x_122);
x_124 = lean_ctor_get(x_115, 1);
lean_inc(x_124);
lean_dec(x_115);
x_125 = l_List_reverse___rarg(x_124);
x_126 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(x_125, x_6, x_7, x_8, x_9, x_10, x_11, x_123);
x_127 = lean_ctor_get(x_126, 1);
lean_inc(x_127);
lean_dec(x_126);
x_13 = x_114;
x_14 = x_127;
goto block_85;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_128 = lean_ctor_get(x_118, 0);
x_129 = lean_ctor_get(x_118, 2);
x_130 = lean_ctor_get(x_118, 3);
lean_inc(x_130);
lean_inc(x_129);
lean_inc(x_128);
lean_dec(x_118);
x_131 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_131, 0, x_128);
lean_ctor_set(x_131, 1, x_116);
lean_ctor_set(x_131, 2, x_129);
lean_ctor_set(x_131, 3, x_130);
x_132 = lean_st_ref_set(x_11, x_131, x_119);
x_133 = lean_ctor_get(x_132, 1);
lean_inc(x_133);
lean_dec(x_132);
x_134 = lean_ctor_get(x_115, 1);
lean_inc(x_134);
lean_dec(x_115);
x_135 = l_List_reverse___rarg(x_134);
x_136 = l_List_forM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__3(x_135, x_6, x_7, x_8, x_9, x_10, x_11, x_133);
x_137 = lean_ctor_get(x_136, 1);
lean_inc(x_137);
lean_dec(x_136);
x_13 = x_114;
x_14 = x_137;
goto block_85;
}
}
else
{
lean_object* x_138; 
lean_dec(x_1);
x_138 = lean_ctor_get(x_113, 0);
lean_inc(x_138);
lean_dec(x_113);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; uint8_t x_144; 
x_139 = lean_ctor_get(x_138, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_138, 1);
lean_inc(x_140);
lean_dec(x_138);
x_141 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_141, 0, x_140);
x_142 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_142, 0, x_141);
x_143 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__2(x_139, x_142, x_6, x_7, x_8, x_9, x_10, x_11, x_107);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_139);
x_144 = !lean_is_exclusive(x_143);
if (x_144 == 0)
{
return x_143;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_145 = lean_ctor_get(x_143, 0);
x_146 = lean_ctor_get(x_143, 1);
lean_inc(x_146);
lean_inc(x_145);
lean_dec(x_143);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_145);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
}
else
{
lean_object* x_148; uint8_t x_149; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_148 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__4___rarg(x_107);
x_149 = !lean_is_exclusive(x_148);
if (x_149 == 0)
{
return x_148;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_150 = lean_ctor_get(x_148, 0);
x_151 = lean_ctor_get(x_148, 1);
lean_inc(x_151);
lean_inc(x_150);
lean_dec(x_148);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_151);
return x_152;
}
}
}
block_85:
{
lean_object* x_15; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_15 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandStruct(x_13, x_6, x_7, x_8, x_9, x_10, x_11, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_box(0);
x_19 = lean_mk_string("Elab");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_mk_string("struct");
x_22 = lean_name_mk_string(x_20, x_21);
x_70 = lean_st_ref_get(x_11, x_17);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_71, 3);
lean_inc(x_72);
lean_dec(x_71);
x_73 = lean_ctor_get_uint8(x_72, sizeof(void*)*1);
lean_dec(x_72);
if (x_73 == 0)
{
lean_object* x_74; uint8_t x_75; 
x_74 = lean_ctor_get(x_70, 1);
lean_inc(x_74);
lean_dec(x_70);
x_75 = 0;
x_23 = x_75;
x_24 = x_74;
goto block_69;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_76 = lean_ctor_get(x_70, 1);
lean_inc(x_76);
lean_dec(x_70);
lean_inc(x_22);
x_77 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_22, x_6, x_7, x_8, x_9, x_10, x_11, x_76);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = lean_unbox(x_78);
lean_dec(x_78);
x_23 = x_80;
x_24 = x_79;
goto block_69;
}
block_69:
{
if (x_23 == 0)
{
lean_object* x_25; 
lean_dec(x_22);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_25 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(x_16, x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = l_Lean_Elab_Term_StructInst_DefaultFields_propagate(x_29, x_6, x_7, x_8, x_9, x_10, x_11, x_27);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
lean_ctor_set(x_30, 0, x_28);
return x_30;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_28);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_28);
x_35 = !lean_is_exclusive(x_30);
if (x_35 == 0)
{
return x_30;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_30, 0);
x_37 = lean_ctor_get(x_30, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_30);
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
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_39 = !lean_is_exclusive(x_25);
if (x_39 == 0)
{
return x_25;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_25, 0);
x_41 = lean_ctor_get(x_25, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_25);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_43 = lean_mk_string("");
x_44 = l_Lean_stringToMessageData(x_43);
lean_dec(x_43);
lean_inc(x_16);
x_45 = l_Lean_Elab_Term_StructInst_formatStruct(x_16);
x_46 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_46, 0, x_45);
lean_inc(x_44);
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_44);
x_49 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_22, x_48, x_6, x_7, x_8, x_9, x_10, x_11, x_24);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_51 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStruct(x_16, x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_50);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = lean_ctor_get(x_52, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_52, 1);
lean_inc(x_55);
lean_dec(x_52);
x_56 = l_Lean_Elab_Term_StructInst_DefaultFields_propagate(x_55, x_6, x_7, x_8, x_9, x_10, x_11, x_53);
if (lean_obj_tag(x_56) == 0)
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
lean_object* x_58; 
x_58 = lean_ctor_get(x_56, 0);
lean_dec(x_58);
lean_ctor_set(x_56, 0, x_54);
return x_56;
}
else
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
lean_dec(x_56);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_54);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
else
{
uint8_t x_61; 
lean_dec(x_54);
x_61 = !lean_is_exclusive(x_56);
if (x_61 == 0)
{
return x_56;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_56, 0);
x_63 = lean_ctor_get(x_56, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_56);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_65 = !lean_is_exclusive(x_51);
if (x_65 == 0)
{
return x_51;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_51, 0);
x_67 = lean_ctor_get(x_51, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_51);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_81 = !lean_is_exclusive(x_15);
if (x_81 == 0)
{
return x_15;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_15, 0);
x_83 = lean_ctor_get(x_15, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_15);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructName___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_st_ref_get(x_9, x_13);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_14);
x_20 = l_Lean_isStructureLike(x_19, x_14);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
lean_dec(x_14);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_21 = lean_mk_string("invalid {...} notation, structure type expected");
x_22 = l_Lean_stringToMessageData(x_21);
lean_dec(x_21);
x_23 = l_Lean_indentExpr(x_15);
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_mk_string("");
x_26 = l_Lean_stringToMessageData(x_25);
lean_dec(x_25);
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_27, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
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
lean_object* x_33; lean_object* x_34; 
lean_dec(x_15);
x_33 = lean_box(0);
x_34 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___lambda__1(x_2, x_1, x_14, x_3, x_33, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_11);
if (x_35 == 0)
{
return x_11;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_11, 0);
x_37 = lean_ctor_get(x_11, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_11);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___spec__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_apply_2(x_5, x_1, x_2);
return x_6;
}
else
{
lean_dec(x_5);
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_apply_3(x_3, x_7, x_8, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_2(x_4, x_11, x_2);
return x_12;
}
}
}
}
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_elabStructInst_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_elabStructInst_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_StructInst_elabStructInst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_10 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_expandNonAtomicExplicitSource(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_13 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_getStructSource(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_7);
lean_inc(x_3);
x_16 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_isModifyOp_x3f(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabStructInstAux(x_1, x_2, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
return x_19;
}
else
{
if (lean_obj_tag(x_14) == 2)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_elabModifyOp(x_1, x_21, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_20);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_dec(x_16);
x_25 = lean_mk_string("invalid {...} notation, explicit source is required when using '[<index>] := <value>'");
x_26 = l_Lean_stringToMessageData(x_25);
lean_dec(x_25);
x_27 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_26, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_16);
if (x_28 == 0)
{
return x_16;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_16, 0);
x_30 = lean_ctor_get(x_16, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_16);
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
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
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
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_10, 1);
lean_inc(x_36);
lean_dec(x_10);
x_37 = lean_ctor_get(x_11, 0);
lean_inc(x_37);
lean_dec(x_11);
lean_inc(x_37);
lean_inc(x_1);
x_38 = lean_alloc_closure((void*)(l_Lean_Elab_Term_adaptExpander___lambda__1), 10, 3);
lean_closure_set(x_38, 0, x_1);
lean_closure_set(x_38, 1, x_37);
lean_closure_set(x_38, 2, x_2);
x_39 = l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_1, x_37, x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_36);
return x_39;
}
}
else
{
uint8_t x_40; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_10);
if (x_40 == 0)
{
return x_10;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_10, 0);
x_42 = lean_ctor_get(x_10, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_10);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabStructInst");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__2;
x_2 = l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_StructInst_elabStructInst), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_structInst___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_StructInst_initFn____x40_Lean_Elab_StructInst___hyg_7210_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Elab");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("struct");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = l_Lean_registerTraceClass(x_6, x_1);
return x_7;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_FindExpr(lean_object*);
lean_object* initialize_Lean_Parser_Term(lean_object*);
lean_object* initialize_Lean_Elab_App(lean_object*);
lean_object* initialize_Lean_Elab_Binders(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_StructInst(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_FindExpr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Term(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_App(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Binders(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__1);
l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__2);
l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__3);
l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__4 = _init_l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__4);
l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__5 = _init_l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType___closed__5);
res = l___regBuiltin_Lean_Elab_Term_StructInst_expandStructInstExpectedType(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_StructInst_instInhabitedSource = _init_l_Lean_Elab_Term_StructInst_instInhabitedSource();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_instInhabitedSource);
l_Lean_Elab_Term_StructInst_instInhabitedFieldLHS = _init_l_Lean_Elab_Term_StructInst_instInhabitedFieldLHS();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_instInhabitedFieldLHS);
l_Lean_Elab_Term_StructInst_Field_expr_x3f___default = _init_l_Lean_Elab_Term_StructInst_Field_expr_x3f___default();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_Field_expr_x3f___default);
l_Lean_Elab_Term_StructInst_instInhabitedStruct = _init_l_Lean_Elab_Term_StructInst_instInhabitedStruct();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_instInhabitedStruct);
l_Lean_Elab_Term_StructInst_instToFormatStruct = _init_l_Lean_Elab_Term_StructInst_instToFormatStruct();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_instToFormatStruct);
l_Lean_Elab_Term_StructInst_instToStringStruct = _init_l_Lean_Elab_Term_StructInst_instToStringStruct();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_instToStringStruct);
l_Lean_Elab_Term_StructInst_instToFormatFieldStruct = _init_l_Lean_Elab_Term_StructInst_instToFormatFieldStruct();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_instToFormatFieldStruct);
l_Lean_Elab_Term_StructInst_instToStringFieldStruct = _init_l_Lean_Elab_Term_StructInst_instToStringFieldStruct();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_instToStringFieldStruct);
l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___boxed__const__1 = _init_l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_StructInst_0__Lean_Elab_Term_StructInst_mkStructView___boxed__const__1);
l_Lean_Elab_Term_StructInst_CtorHeaderResult_instMVars___default = _init_l_Lean_Elab_Term_StructInst_CtorHeaderResult_instMVars___default();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_CtorHeaderResult_instMVars___default);
l_Lean_Elab_Term_StructInst_DefaultFields_Context_structs___default = _init_l_Lean_Elab_Term_StructInst_DefaultFields_Context_structs___default();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_Context_structs___default);
l_Lean_Elab_Term_StructInst_DefaultFields_Context_allStructNames___default = _init_l_Lean_Elab_Term_StructInst_DefaultFields_Context_allStructNames___default();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_Context_allStructNames___default);
l_Lean_Elab_Term_StructInst_DefaultFields_Context_maxDistance___default = _init_l_Lean_Elab_Term_StructInst_DefaultFields_Context_maxDistance___default();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_Context_maxDistance___default);
l_Lean_Elab_Term_StructInst_DefaultFields_State_progress___default = _init_l_Lean_Elab_Term_StructInst_DefaultFields_State_progress___default();
l_Lean_Elab_Term_StructInst_DefaultFields_reduce___boxed__const__1 = _init_l_Lean_Elab_Term_StructInst_DefaultFields_reduce___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_Term_StructInst_DefaultFields_reduce___boxed__const__1);
l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__1);
l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__2);
l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst___closed__3);
res = l___regBuiltin_Lean_Elab_Term_StructInst_elabStructInst(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Term_StructInst_initFn____x40_Lean_Elab_StructInst___hyg_7210_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
