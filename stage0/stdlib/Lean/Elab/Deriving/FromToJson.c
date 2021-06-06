// Lean compiler output
// Module: Lean.Elab.Deriving.FromToJson
// Imports: Init Lean.Meta.Transform Lean.Elab.Deriving.Basic Lean.Elab.Deriving.Util Lean.Data.Json.FromToJson
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
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_match__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__1(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___boxed__const__1;
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__1___boxed__const__1;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instInhabitedNat;
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
extern lean_object* l_Lean_nameLitKind;
lean_object* l_Array_mapIdxM_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Array_zip___rarg(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__8___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts_match__3___rarg(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__2(size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts_match__2(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_qsort_sort___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__6___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkDiscrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkJsonField___lambda__1___boxed(lean_object*);
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind;
lean_object* l_Lean_Elab_Deriving_mkInstanceCmds(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_swap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getStructureFieldsFlattened(lean_object*, lean_object*, uint8_t);
lean_object* l_Array_qpartition_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_initFn____x40_Lean_Elab_Deriving_FromToJson___hyg_4403_(lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_quoteNameMk(lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at_Lean_Elab_elabDeriving___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_qsort_sort___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts_match__1(lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__2(lean_object*);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* l_Array_qsort_sort___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__6___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Deriving_FromToJson_mkJsonField___lambda__1(uint32_t);
extern lean_object* l_Lean_instInhabitedExpr;
extern lean_object* l_Lean_instInhabitedSyntax;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__4(lean_object*);
lean_object* l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts_match__1(lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkHeader___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_qsort_sort___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__6___lambda__1(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__3___boxed__const__1;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___boxed__const__1;
uint8_t l_UInt32_decEq(uint32_t, uint32_t);
lean_object* l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(size_t, size_t, lean_object*);
lean_object* l_Lean_Name_getString_x21(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_List_redLength___rarg(lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_match__2(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkInductiveApp___spec__1(size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkJsonField(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getRef(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toArrayAux___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_registerBuiltinDerivingHandler(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__4___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getArr_x3f(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts_match__3(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapIdxM_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__3___boxed(lean_object**);
lean_object* lean_mk_syntax_ident(lean_object*);
extern lean_object* l_Lean_instInhabitedInductiveVal;
lean_object* l_Array_mapIdxM_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjVal_x3f(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_qpartition_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_dropRightWhile(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInductiveApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__8(size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkLit(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__3(lean_object*);
uint8_t l_Lean_Elab_Deriving_FromToJson_mkJsonField___lambda__1(uint32_t x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; 
x_2 = 63;
x_3 = x_1 == x_2;
return x_3;
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkJsonField(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_2 = 1;
x_3 = l_Lean_Name_toString(x_1, x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_FromToJson_mkJsonField___lambda__1___boxed), 1, 0);
x_5 = l_String_dropRightWhile(x_3, x_4);
x_6 = lean_string_dec_eq(x_3, x_5);
lean_dec(x_3);
x_7 = lean_box(2);
x_8 = l_Lean_Syntax_mkStrLit(x_5, x_7);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_11 = 0;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_8);
return x_13;
}
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkJsonField___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_Lean_Elab_Deriving_FromToJson_mkJsonField___lambda__1(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
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
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
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
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
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
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged_match__4___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_array_uget(x_2, x_4);
x_9 = l_Lean_Name_getString_x21(x_8);
lean_dec(x_8);
x_10 = l_Lean_Json_getObjVal_x3f(x_1, x_9);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_5);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_array_push(x_5, x_14);
x_16 = 1;
x_17 = x_4 + x_16;
x_4 = x_17;
x_5 = x_15;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = l_Lean_Json_getObjVal_x3f(x_1, x_2);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
return x_7;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
else
{
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_dec_eq(x_3, x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_free_object(x_7);
x_15 = l_Lean_Json_getArr_x3f(x_12);
lean_dec(x_12);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_15);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_15, 0);
x_21 = lean_array_get_size(x_20);
x_22 = lean_nat_dec_eq(x_21, x_3);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_20);
x_23 = lean_mk_string("incorrect number of fields: {fields.size} ≟ {nFields}");
lean_ctor_set_tag(x_15, 0);
lean_ctor_set(x_15, 0, x_23);
return x_15;
}
else
{
return x_15;
}
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_ctor_get(x_15, 0);
lean_inc(x_24);
lean_dec(x_15);
x_25 = lean_array_get_size(x_24);
x_26 = lean_nat_dec_eq(x_25, x_3);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_24);
x_27 = lean_mk_string("incorrect number of fields: {fields.size} ≟ {nFields}");
x_28 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_28, 0, x_27);
return x_28;
}
else
{
lean_object* x_29; 
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_24);
return x_29;
}
}
}
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_mk_empty_array_with_capacity(x_13);
x_31 = lean_array_push(x_30, x_12);
lean_ctor_set(x_7, 0, x_31);
return x_7;
}
}
else
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_ctor_get(x_7, 0);
lean_inc(x_32);
lean_dec(x_7);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_dec_eq(x_3, x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = l_Lean_Json_getArr_x3f(x_32);
lean_dec(x_32);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 x_37 = x_35;
} else {
 lean_dec_ref(x_35);
 x_37 = lean_box(0);
}
if (lean_is_scalar(x_37)) {
 x_38 = lean_alloc_ctor(0, 1, 0);
} else {
 x_38 = x_37;
}
lean_ctor_set(x_38, 0, x_36);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_39 = lean_ctor_get(x_35, 0);
lean_inc(x_39);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 x_40 = x_35;
} else {
 lean_dec_ref(x_35);
 x_40 = lean_box(0);
}
x_41 = lean_array_get_size(x_39);
x_42 = lean_nat_dec_eq(x_41, x_3);
lean_dec(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_39);
x_43 = lean_mk_string("incorrect number of fields: {fields.size} ≟ {nFields}");
if (lean_is_scalar(x_40)) {
 x_44 = lean_alloc_ctor(0, 1, 0);
} else {
 x_44 = x_40;
 lean_ctor_set_tag(x_44, 0);
}
lean_ctor_set(x_44, 0, x_43);
return x_44;
}
else
{
lean_object* x_45; 
if (lean_is_scalar(x_40)) {
 x_45 = lean_alloc_ctor(1, 1, 0);
} else {
 x_45 = x_40;
}
lean_ctor_set(x_45, 0, x_39);
return x_45;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_mk_empty_array_with_capacity(x_33);
x_47 = lean_array_push(x_46, x_32);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
return x_48;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; size_t x_53; size_t x_54; lean_object* x_55; 
x_49 = lean_ctor_get(x_7, 0);
lean_inc(x_49);
lean_dec(x_7);
x_50 = lean_ctor_get(x_4, 0);
x_51 = lean_mk_empty_array_with_capacity(x_5);
x_52 = lean_array_get_size(x_50);
x_53 = lean_usize_of_nat(x_52);
lean_dec(x_52);
x_54 = 0;
x_55 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged___spec__1(x_49, x_50, x_53, x_54, x_51);
lean_dec(x_49);
if (lean_obj_tag(x_55) == 0)
{
uint8_t x_56; 
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
return x_55;
}
else
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_55, 0);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_57);
return x_58;
}
}
else
{
uint8_t x_59; 
x_59 = !lean_is_exclusive(x_55);
if (x_59 == 0)
{
return x_55;
}
else
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_55, 0);
lean_inc(x_60);
lean_dec(x_55);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_60);
return x_61;
}
}
}
}
}
else
{
lean_object* x_62; 
x_62 = l_Lean_Json_getStr_x3f(x_1);
if (lean_obj_tag(x_62) == 0)
{
uint8_t x_63; 
x_63 = !lean_is_exclusive(x_62);
if (x_63 == 0)
{
return x_62;
}
else
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_ctor_get(x_62, 0);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_65, 0, x_64);
return x_65;
}
}
else
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_62);
if (x_66 == 0)
{
lean_object* x_67; uint8_t x_68; 
x_67 = lean_ctor_get(x_62, 0);
x_68 = lean_string_dec_eq(x_67, x_2);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_69 = lean_mk_string("incorrect tag: ");
x_70 = lean_string_append(x_69, x_67);
lean_dec(x_67);
x_71 = lean_mk_string(" ≟ ");
x_72 = lean_string_append(x_70, x_71);
lean_dec(x_71);
x_73 = lean_string_append(x_72, x_2);
x_74 = lean_mk_string("");
x_75 = lean_string_append(x_73, x_74);
lean_dec(x_74);
lean_ctor_set_tag(x_62, 0);
lean_ctor_set(x_62, 0, x_75);
return x_62;
}
else
{
lean_object* x_76; 
lean_dec(x_67);
x_76 = lean_mk_empty_array_with_capacity(x_5);
lean_ctor_set(x_62, 0, x_76);
return x_62;
}
}
else
{
lean_object* x_77; uint8_t x_78; 
x_77 = lean_ctor_get(x_62, 0);
lean_inc(x_77);
lean_dec(x_62);
x_78 = lean_string_dec_eq(x_77, x_2);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_79 = lean_mk_string("incorrect tag: ");
x_80 = lean_string_append(x_79, x_77);
lean_dec(x_77);
x_81 = lean_mk_string(" ≟ ");
x_82 = lean_string_append(x_80, x_81);
lean_dec(x_81);
x_83 = lean_string_append(x_82, x_2);
x_84 = lean_mk_string("");
x_85 = lean_string_append(x_83, x_84);
lean_dec(x_84);
x_86 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_86, 0, x_85);
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; 
lean_dec(x_77);
x_87 = lean_mk_empty_array_with_capacity(x_5);
x_88 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_88, 0, x_87);
return x_88;
}
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_forInUnsafe_loop___at___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged___spec__1(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Deriving_FromToJson_0__Lean_Elab_Deriving_FromToJson_parseTagged(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_array_get_size(x_1);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
lean_dec(x_3);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_dec_eq(x_7, x_10);
lean_dec(x_7);
if (x_11 == 0)
{
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_12; 
lean_dec(x_6);
x_12 = lean_apply_1(x_5, x_1);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_apply_2(x_6, x_1, x_13);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_6);
lean_dec(x_5);
x_15 = lean_array_fget(x_1, x_8);
lean_dec(x_1);
x_16 = lean_apply_2(x_4, x_15, x_2);
return x_16;
}
}
else
{
lean_object* x_17; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_17 = lean_apply_1(x_3, x_2);
return x_17;
}
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_match__2___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
x_27 = l_Lean_throwError___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__2(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
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
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_nat_dec_le(x_12, x_3);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_eq(x_2, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_2, x_16);
lean_dec(x_2);
x_18 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_9, x_10, x_11);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_box(0);
x_26 = lean_mk_string("Lean");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("Parser");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Term");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("hole");
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("_");
x_35 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_35, 0, x_19);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_mk_empty_array_with_capacity(x_16);
x_37 = lean_array_push(x_36, x_35);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_33);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_array_push(x_4, x_38);
x_40 = lean_ctor_get(x_1, 2);
x_41 = lean_nat_add(x_3, x_40);
lean_dec(x_3);
x_2 = x_17;
x_3 = x_41;
x_4 = x_39;
x_11 = x_24;
goto _start;
}
else
{
lean_object* x_43; 
lean_dec(x_3);
lean_dec(x_2);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_4);
lean_ctor_set(x_43, 1, x_11);
return x_43;
}
}
else
{
lean_object* x_44; 
lean_dec(x_3);
lean_dec(x_2);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_4);
lean_ctor_set(x_44, 1, x_11);
return x_44;
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_box(0);
x_13 = lean_mk_string("a");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_14, x_9, x_10, x_11);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_mk_syntax_ident(x_17);
lean_inc(x_18);
x_19 = lean_array_push(x_3, x_18);
x_20 = lean_array_push(x_1, x_18);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_2);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_15, 0, x_23);
return x_15;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_24 = lean_ctor_get(x_15, 0);
x_25 = lean_ctor_get(x_15, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_15);
x_26 = lean_mk_syntax_ident(x_24);
lean_inc(x_26);
x_27 = lean_array_push(x_3, x_26);
x_28 = lean_array_push(x_1, x_26);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_27);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_25);
return x_32;
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
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
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_4, x_18);
lean_dec(x_4);
x_20 = lean_ctor_get(x_6, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_6, 1);
lean_inc(x_21);
lean_dec(x_6);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_nat_add(x_2, x_5);
x_25 = l_Lean_instInhabitedExpr;
x_26 = lean_array_get(x_25, x_1, x_24);
lean_dec(x_24);
x_27 = l_Lean_Expr_fvarId_x21(x_26);
lean_dec(x_26);
lean_inc(x_9);
x_28 = l_Lean_Meta_getLocalDecl(x_27, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_alloc_closure((void*)(l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__4___lambda__1___boxed), 11, 0);
x_32 = l_Lean_LocalDecl_userName(x_29);
lean_dec(x_29);
x_33 = l_Lean_Name_hasMacroScopes(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_array_push(x_22, x_32);
x_35 = lean_box(0);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_36 = lean_apply_11(x_31, x_20, x_34, x_23, x_35, x_7, x_8, x_9, x_10, x_11, x_12, x_30);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
x_38 = !lean_is_exclusive(x_36);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_36, 0);
lean_dec(x_39);
x_40 = lean_ctor_get(x_37, 0);
lean_inc(x_40);
lean_dec(x_37);
lean_ctor_set(x_36, 0, x_40);
return x_36;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_dec(x_36);
x_42 = lean_ctor_get(x_37, 0);
lean_inc(x_42);
lean_dec(x_37);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_44 = lean_ctor_get(x_36, 1);
lean_inc(x_44);
lean_dec(x_36);
x_45 = lean_ctor_get(x_37, 0);
lean_inc(x_45);
lean_dec(x_37);
x_46 = lean_ctor_get(x_3, 2);
x_47 = lean_nat_add(x_5, x_46);
lean_dec(x_5);
x_4 = x_19;
x_5 = x_47;
x_6 = x_45;
x_13 = x_44;
goto _start;
}
}
else
{
uint8_t x_49; 
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
x_49 = !lean_is_exclusive(x_36);
if (x_49 == 0)
{
return x_36;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_36, 0);
x_51 = lean_ctor_get(x_36, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_36);
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
lean_dec(x_32);
x_53 = lean_box(0);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_54 = lean_apply_11(x_31, x_20, x_22, x_23, x_53, x_7, x_8, x_9, x_10, x_11, x_12, x_30);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
if (lean_obj_tag(x_55) == 0)
{
uint8_t x_56; 
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
x_56 = !lean_is_exclusive(x_54);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_54, 0);
lean_dec(x_57);
x_58 = lean_ctor_get(x_55, 0);
lean_inc(x_58);
lean_dec(x_55);
lean_ctor_set(x_54, 0, x_58);
return x_54;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_54, 1);
lean_inc(x_59);
lean_dec(x_54);
x_60 = lean_ctor_get(x_55, 0);
lean_inc(x_60);
lean_dec(x_55);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_62 = lean_ctor_get(x_54, 1);
lean_inc(x_62);
lean_dec(x_54);
x_63 = lean_ctor_get(x_55, 0);
lean_inc(x_63);
lean_dec(x_55);
x_64 = lean_ctor_get(x_3, 2);
x_65 = lean_nat_add(x_5, x_64);
lean_dec(x_5);
x_4 = x_19;
x_5 = x_65;
x_6 = x_63;
x_13 = x_62;
goto _start;
}
}
else
{
uint8_t x_67; 
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
x_67 = !lean_is_exclusive(x_54);
if (x_67 == 0)
{
return x_54;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_54, 0);
x_69 = lean_ctor_get(x_54, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_54);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
x_71 = !lean_is_exclusive(x_28);
if (x_71 == 0)
{
return x_28;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_28, 0);
x_73 = lean_ctor_get(x_28, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_28);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
lean_object* x_75; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_6);
lean_ctor_set(x_75, 1, x_13);
return x_75;
}
}
else
{
lean_object* x_76; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_6);
lean_ctor_set(x_76, 1, x_13);
return x_76;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_mk_empty_array_with_capacity(x_14);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 2);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_unsigned_to_nat(1u);
lean_inc(x_17);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_14);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_18);
lean_inc(x_15);
x_20 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__3(x_19, x_17, x_14, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_16);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_16);
lean_ctor_set(x_23, 2, x_18);
lean_inc(x_15);
lean_inc(x_16);
x_24 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__3(x_23, x_16, x_14, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_22);
lean_dec(x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_ctor_get(x_2, 4);
lean_inc(x_27);
lean_inc(x_27);
x_28 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_28, 0, x_14);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_28, 2, x_18);
lean_inc_n(x_15, 2);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_15);
lean_ctor_set(x_29, 1, x_15);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_29);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_31 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__4(x_5, x_16, x_28, x_27, x_14, x_30, x_7, x_8, x_9, x_10, x_11, x_12, x_26);
lean_dec(x_28);
lean_dec(x_16);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_142; lean_object* x_143; uint8_t x_144; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_ctor_get(x_32, 0);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_ctor_get(x_33, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_33, 1);
lean_inc(x_37);
lean_dec(x_33);
x_38 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_34);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_40);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_42);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = lean_box(0);
x_46 = lean_mk_string("Lean");
x_47 = lean_name_mk_string(x_45, x_46);
x_48 = lean_mk_string("Parser");
x_49 = lean_name_mk_string(x_47, x_48);
x_50 = lean_mk_string("Term");
x_51 = lean_name_mk_string(x_49, x_50);
x_52 = lean_mk_string("app");
lean_inc(x_51);
x_53 = lean_name_mk_string(x_51, x_52);
x_54 = lean_mk_string("explicit");
lean_inc(x_51);
x_55 = lean_name_mk_string(x_51, x_54);
x_56 = lean_mk_string("@");
x_57 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_57, 0, x_39);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_ctor_get(x_3, 0);
lean_inc(x_58);
lean_dec(x_3);
x_59 = lean_mk_syntax_ident(x_58);
x_60 = lean_unsigned_to_nat(2u);
x_61 = lean_mk_empty_array_with_capacity(x_60);
lean_inc(x_61);
x_62 = lean_array_push(x_61, x_57);
x_63 = lean_array_push(x_62, x_59);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_55);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_mk_string("null");
x_66 = lean_name_mk_string(x_45, x_65);
lean_inc(x_15);
x_67 = l_Array_append___rarg(x_15, x_35);
lean_dec(x_35);
lean_inc(x_66);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_array_push(x_61, x_64);
x_70 = lean_array_push(x_69, x_68);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_53);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_array_push(x_21, x_71);
x_142 = lean_array_get_size(x_36);
x_143 = lean_array_get_size(x_37);
x_144 = lean_nat_dec_eq(x_142, x_143);
lean_dec(x_143);
lean_dec(x_142);
if (x_144 == 0)
{
lean_object* x_145; 
lean_dec(x_36);
x_145 = lean_box(0);
x_73 = x_145;
goto block_141;
}
else
{
lean_object* x_146; 
x_146 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_146, 0, x_36);
x_73 = x_146;
goto block_141;
}
block_141:
{
lean_object* x_74; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_74 = lean_apply_10(x_4, x_2, x_37, x_73, x_7, x_8, x_9, x_10, x_11, x_12, x_44);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_76);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_79);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
lean_dec(x_80);
x_82 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_81);
lean_dec(x_12);
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; size_t x_90; size_t x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_84 = lean_ctor_get(x_82, 0);
lean_dec(x_84);
x_85 = lean_mk_string("matchAlt");
x_86 = lean_name_mk_string(x_51, x_85);
x_87 = lean_mk_string("|");
lean_inc(x_78);
x_88 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_88, 0, x_78);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_array_get_size(x_72);
x_90 = lean_usize_of_nat(x_89);
lean_dec(x_89);
x_91 = 0;
x_92 = x_72;
x_93 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_90, x_91, x_92);
x_94 = x_93;
x_95 = lean_box(2);
x_96 = lean_mk_string(",");
x_97 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
x_98 = l_Lean_mkSepArray(x_94, x_97);
lean_dec(x_94);
x_99 = l_Array_append___rarg(x_15, x_98);
lean_dec(x_98);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_66);
lean_ctor_set(x_100, 1, x_99);
x_101 = lean_mk_string("=>");
x_102 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_102, 0, x_78);
lean_ctor_set(x_102, 1, x_101);
x_103 = lean_unsigned_to_nat(4u);
x_104 = lean_mk_empty_array_with_capacity(x_103);
x_105 = lean_array_push(x_104, x_88);
x_106 = lean_array_push(x_105, x_100);
x_107 = lean_array_push(x_106, x_102);
x_108 = lean_array_push(x_107, x_75);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_86);
lean_ctor_set(x_109, 1, x_108);
lean_ctor_set(x_82, 0, x_109);
return x_82;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; size_t x_116; size_t x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_110 = lean_ctor_get(x_82, 1);
lean_inc(x_110);
lean_dec(x_82);
x_111 = lean_mk_string("matchAlt");
x_112 = lean_name_mk_string(x_51, x_111);
x_113 = lean_mk_string("|");
lean_inc(x_78);
x_114 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_114, 0, x_78);
lean_ctor_set(x_114, 1, x_113);
x_115 = lean_array_get_size(x_72);
x_116 = lean_usize_of_nat(x_115);
lean_dec(x_115);
x_117 = 0;
x_118 = x_72;
x_119 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_116, x_117, x_118);
x_120 = x_119;
x_121 = lean_box(2);
x_122 = lean_mk_string(",");
x_123 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_122);
x_124 = l_Lean_mkSepArray(x_120, x_123);
lean_dec(x_120);
x_125 = l_Array_append___rarg(x_15, x_124);
lean_dec(x_124);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_66);
lean_ctor_set(x_126, 1, x_125);
x_127 = lean_mk_string("=>");
x_128 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_128, 0, x_78);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_unsigned_to_nat(4u);
x_130 = lean_mk_empty_array_with_capacity(x_129);
x_131 = lean_array_push(x_130, x_114);
x_132 = lean_array_push(x_131, x_126);
x_133 = lean_array_push(x_132, x_128);
x_134 = lean_array_push(x_133, x_75);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_112);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_110);
return x_136;
}
}
else
{
uint8_t x_137; 
lean_dec(x_72);
lean_dec(x_66);
lean_dec(x_51);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_137 = !lean_is_exclusive(x_74);
if (x_137 == 0)
{
return x_74;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_138 = lean_ctor_get(x_74, 0);
x_139 = lean_ctor_get(x_74, 1);
lean_inc(x_139);
lean_inc(x_138);
lean_dec(x_74);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
return x_140;
}
}
}
}
else
{
uint8_t x_147; 
lean_dec(x_21);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_147 = !lean_is_exclusive(x_31);
if (x_147 == 0)
{
return x_31;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_31, 0);
x_149 = lean_ctor_get(x_31, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_31);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__5(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_4 < x_3;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_14 = x_5;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_array_uget(x_5, x_4);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_array_uset(x_5, x_4, x_17);
x_19 = x_16;
lean_inc(x_6);
x_20 = l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__1(x_19, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
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
x_24 = lean_ctor_get(x_23, 2);
lean_inc(x_24);
lean_inc(x_2);
lean_inc(x_1);
x_25 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__5___lambda__1___boxed), 13, 4);
lean_closure_set(x_25, 0, x_1);
lean_closure_set(x_25, 1, x_21);
lean_closure_set(x_25, 2, x_23);
lean_closure_set(x_25, 3, x_2);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_26 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(x_24, x_25, x_6, x_7, x_8, x_9, x_10, x_11, x_22);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; size_t x_29; size_t x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = 1;
x_30 = x_4 + x_29;
x_31 = x_27;
x_32 = lean_array_uset(x_18, x_4, x_31);
x_4 = x_30;
x_5 = x_32;
x_12 = x_28;
goto _start;
}
else
{
uint8_t x_34; 
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_26);
if (x_34 == 0)
{
return x_26;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_26, 0);
x_36 = lean_ctor_get(x_26, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_26);
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
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
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
}
}
static lean_object* _init_l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_10 = lean_ctor_get(x_1, 4);
lean_inc(x_10);
x_11 = l_List_redLength___rarg(x_10);
x_12 = lean_mk_empty_array_with_capacity(x_11);
lean_dec(x_11);
x_13 = l_List_toArrayAux___rarg(x_10, x_12);
x_14 = lean_array_get_size(x_13);
x_15 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_16 = x_13;
x_17 = lean_box_usize(x_15);
x_18 = l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___boxed__const__1;
x_19 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__5___boxed), 12, 5);
lean_closure_set(x_19, 0, x_1);
lean_closure_set(x_19, 1, x_2);
lean_closure_set(x_19, 2, x_17);
lean_closure_set(x_19, 3, x_18);
lean_closure_set(x_19, 4, x_16);
x_20 = x_19;
x_21 = lean_apply_7(x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_21;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__4___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_12;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_6);
lean_dec(x_5);
return x_14;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__5(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Lean_getConstInfo___at_Lean_Elab_elabDeriving___spec__7(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 5)
{
uint8_t x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
lean_ctor_set(x_5, 0, x_9);
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_6);
x_13 = lean_ctor_get(x_5, 1);
lean_inc(x_13);
lean_dec(x_5);
x_14 = lean_mk_string("'");
x_15 = l_Lean_stringToMessageData(x_14);
lean_dec(x_14);
x_16 = lean_box(0);
x_17 = l_Lean_mkConst(x_1, x_16);
x_18 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_15);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_mk_string("' is not a inductive type");
x_21 = l_Lean_stringToMessageData(x_20);
lean_dec(x_20);
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_throwError___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__2(x_22, x_2, x_3, x_13);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_5);
if (x_24 == 0)
{
return x_5;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_5, 0);
x_26 = lean_ctor_get(x_5, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_5);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_4 < x_3;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_2);
lean_dec(x_1);
x_14 = x_5;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; size_t x_57; size_t x_58; lean_object* x_59; lean_object* x_60; 
x_16 = lean_array_uget(x_5, x_4);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_array_uset(x_5, x_4, x_17);
x_19 = x_16;
x_20 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_10, x_11, x_12);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Elab_Term_getCurrMacroScope(x_6, x_7, x_8, x_9, x_10, x_11, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Elab_Term_getMainModule___rarg(x_11, x_25);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_mk_string("Parser");
lean_inc(x_1);
x_30 = lean_name_mk_string(x_1, x_29);
x_31 = lean_mk_string("Term");
x_32 = lean_name_mk_string(x_30, x_31);
x_33 = lean_mk_string("app");
x_34 = lean_name_mk_string(x_32, x_33);
x_35 = lean_mk_string("toJson");
x_36 = lean_string_utf8_byte_size(x_35);
lean_inc(x_35);
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_17);
lean_ctor_set(x_37, 2, x_36);
x_38 = lean_box(0);
lean_inc(x_35);
x_39 = lean_name_mk_string(x_38, x_35);
x_40 = l_Lean_addMacroScope(x_27, x_39, x_24);
lean_inc(x_2);
x_41 = lean_name_mk_string(x_2, x_35);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_45, 0, x_21);
lean_ctor_set(x_45, 1, x_37);
lean_ctor_set(x_45, 2, x_40);
lean_ctor_set(x_45, 3, x_44);
x_46 = lean_mk_string("null");
x_47 = lean_name_mk_string(x_38, x_46);
x_48 = lean_unsigned_to_nat(1u);
x_49 = lean_mk_empty_array_with_capacity(x_48);
x_50 = lean_array_push(x_49, x_19);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_47);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_unsigned_to_nat(2u);
x_53 = lean_mk_empty_array_with_capacity(x_52);
x_54 = lean_array_push(x_53, x_45);
x_55 = lean_array_push(x_54, x_51);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_34);
lean_ctor_set(x_56, 1, x_55);
x_57 = 1;
x_58 = x_4 + x_57;
x_59 = x_56;
x_60 = lean_array_uset(x_18, x_4, x_59);
x_4 = x_58;
x_5 = x_60;
x_12 = x_28;
goto _start;
}
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_nat_dec_eq(x_6, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_sub(x_6, x_19);
lean_dec(x_6);
x_21 = lean_array_fget(x_5, x_7);
x_22 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_16);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_mk_string("Parser");
lean_inc(x_1);
x_32 = lean_name_mk_string(x_1, x_31);
x_33 = lean_mk_string("Term");
x_34 = lean_name_mk_string(x_32, x_33);
x_35 = lean_mk_string("paren");
lean_inc(x_34);
x_36 = lean_name_mk_string(x_34, x_35);
x_37 = lean_mk_string("(");
lean_inc(x_23);
x_38 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_38, 0, x_23);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_box(0);
x_40 = lean_mk_string("null");
x_41 = lean_name_mk_string(x_39, x_40);
x_42 = l_Lean_instInhabitedName;
x_43 = lean_array_get(x_42, x_4, x_7);
x_44 = l_Lean_Name_getString_x21(x_43);
lean_dec(x_43);
x_45 = lean_box(2);
x_46 = l_Lean_Syntax_mkStrLit(x_44, x_45);
lean_dec(x_44);
x_47 = lean_mk_string("tupleTail");
lean_inc(x_34);
x_48 = lean_name_mk_string(x_34, x_47);
x_49 = lean_mk_string(",");
lean_inc(x_23);
x_50 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_50, 0, x_23);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_mk_string("app");
x_52 = lean_name_mk_string(x_34, x_51);
x_53 = lean_mk_string("toJson");
x_54 = lean_string_utf8_byte_size(x_53);
lean_inc(x_53);
x_55 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_17);
lean_ctor_set(x_55, 2, x_54);
lean_inc(x_53);
x_56 = lean_name_mk_string(x_39, x_53);
x_57 = l_Lean_addMacroScope(x_29, x_56, x_26);
lean_inc(x_2);
x_58 = lean_name_mk_string(x_2, x_53);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
lean_inc(x_23);
x_62 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_62, 0, x_23);
lean_ctor_set(x_62, 1, x_55);
lean_ctor_set(x_62, 2, x_57);
lean_ctor_set(x_62, 3, x_61);
x_63 = lean_mk_empty_array_with_capacity(x_19);
lean_inc(x_63);
x_64 = lean_array_push(x_63, x_21);
lean_inc(x_41);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_41);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_unsigned_to_nat(2u);
x_67 = lean_mk_empty_array_with_capacity(x_66);
lean_inc(x_67);
x_68 = lean_array_push(x_67, x_62);
x_69 = lean_array_push(x_68, x_65);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_52);
lean_ctor_set(x_70, 1, x_69);
lean_inc(x_63);
x_71 = lean_array_push(x_63, x_70);
lean_inc(x_41);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_41);
lean_ctor_set(x_72, 1, x_71);
lean_inc(x_67);
x_73 = lean_array_push(x_67, x_50);
x_74 = lean_array_push(x_73, x_72);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_48);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_array_push(x_63, x_75);
lean_inc(x_41);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_41);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_array_push(x_67, x_46);
x_79 = lean_array_push(x_78, x_77);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_41);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_mk_string(")");
x_82 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_82, 0, x_23);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_unsigned_to_nat(3u);
x_84 = lean_mk_empty_array_with_capacity(x_83);
x_85 = lean_array_push(x_84, x_38);
x_86 = lean_array_push(x_85, x_80);
x_87 = lean_array_push(x_86, x_82);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_36);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_nat_add(x_7, x_19);
lean_dec(x_7);
x_90 = lean_array_push(x_9, x_88);
x_6 = x_20;
x_7 = x_89;
x_8 = lean_box(0);
x_9 = x_90;
x_16 = x_30;
goto _start;
}
else
{
lean_object* x_92; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_9);
lean_ctor_set(x_92, 1, x_16);
return x_92;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_5 < x_4;
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_2);
lean_dec(x_1);
x_15 = x_6;
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_17 = lean_array_uget(x_6, x_5);
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_array_uset(x_6, x_5, x_18);
x_28 = x_17;
lean_inc(x_28);
x_29 = l_Lean_Elab_Deriving_FromToJson_mkJsonField(x_28);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_unbox(x_30);
lean_dec(x_30);
if (x_31 == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_29);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_33 = lean_ctor_get(x_29, 1);
x_34 = lean_ctor_get(x_29, 0);
lean_dec(x_34);
x_35 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_13);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_40);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_box(0);
x_45 = lean_mk_string("term[_]");
x_46 = lean_name_mk_string(x_44, x_45);
x_47 = lean_mk_string("[");
lean_inc(x_36);
x_48 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_48, 0, x_36);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_mk_string("null");
x_50 = lean_name_mk_string(x_44, x_49);
x_51 = lean_mk_string("Parser");
lean_inc(x_1);
x_52 = lean_name_mk_string(x_1, x_51);
x_53 = lean_mk_string("Term");
x_54 = lean_name_mk_string(x_52, x_53);
x_55 = lean_mk_string("paren");
lean_inc(x_54);
x_56 = lean_name_mk_string(x_54, x_55);
x_57 = lean_mk_string("(");
lean_inc(x_36);
x_58 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_58, 0, x_36);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_mk_string("tupleTail");
lean_inc(x_54);
x_60 = lean_name_mk_string(x_54, x_59);
x_61 = lean_mk_string(",");
lean_inc(x_36);
x_62 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_62, 0, x_36);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_mk_string("app");
x_64 = lean_name_mk_string(x_54, x_63);
x_65 = lean_mk_string("toJson");
x_66 = lean_string_utf8_byte_size(x_65);
lean_inc(x_65);
x_67 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_18);
lean_ctor_set(x_67, 2, x_66);
lean_inc(x_65);
x_68 = lean_name_mk_string(x_44, x_65);
x_69 = l_Lean_addMacroScope(x_42, x_68, x_39);
lean_inc(x_2);
x_70 = lean_name_mk_string(x_2, x_65);
x_71 = lean_box(0);
lean_ctor_set(x_29, 1, x_71);
lean_ctor_set(x_29, 0, x_70);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_29);
lean_ctor_set(x_72, 1, x_71);
lean_inc(x_36);
x_73 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_73, 0, x_36);
lean_ctor_set(x_73, 1, x_67);
lean_ctor_set(x_73, 2, x_69);
lean_ctor_set(x_73, 3, x_72);
x_74 = lean_ctor_get(x_3, 2);
x_75 = l_Lean_instInhabitedName;
x_76 = lean_array_get(x_75, x_74, x_18);
x_77 = l_Lean_Name_append(x_76, x_28);
lean_dec(x_76);
x_78 = lean_mk_syntax_ident(x_77);
x_79 = lean_unsigned_to_nat(1u);
x_80 = lean_mk_empty_array_with_capacity(x_79);
lean_inc(x_80);
x_81 = lean_array_push(x_80, x_78);
lean_inc(x_50);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_50);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_unsigned_to_nat(2u);
x_84 = lean_mk_empty_array_with_capacity(x_83);
lean_inc(x_84);
x_85 = lean_array_push(x_84, x_73);
x_86 = lean_array_push(x_85, x_82);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_64);
lean_ctor_set(x_87, 1, x_86);
lean_inc(x_80);
x_88 = lean_array_push(x_80, x_87);
lean_inc(x_50);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_50);
lean_ctor_set(x_89, 1, x_88);
lean_inc(x_84);
x_90 = lean_array_push(x_84, x_62);
x_91 = lean_array_push(x_90, x_89);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_60);
lean_ctor_set(x_92, 1, x_91);
lean_inc(x_80);
x_93 = lean_array_push(x_80, x_92);
lean_inc(x_50);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_50);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_array_push(x_84, x_33);
x_96 = lean_array_push(x_95, x_94);
lean_inc(x_50);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_50);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_mk_string(")");
lean_inc(x_36);
x_99 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_99, 0, x_36);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_unsigned_to_nat(3u);
x_101 = lean_mk_empty_array_with_capacity(x_100);
lean_inc(x_101);
x_102 = lean_array_push(x_101, x_58);
x_103 = lean_array_push(x_102, x_97);
x_104 = lean_array_push(x_103, x_99);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_56);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_array_push(x_80, x_105);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_50);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_mk_string("]");
x_109 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_109, 0, x_36);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_array_push(x_101, x_48);
x_111 = lean_array_push(x_110, x_107);
x_112 = lean_array_push(x_111, x_109);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_46);
lean_ctor_set(x_113, 1, x_112);
x_20 = x_113;
x_21 = x_43;
goto block_27;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_114 = lean_ctor_get(x_29, 1);
lean_inc(x_114);
lean_dec(x_29);
x_115 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_13);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
lean_dec(x_115);
x_118 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_117);
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
lean_dec(x_118);
x_121 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_120);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_124 = lean_box(0);
x_125 = lean_mk_string("term[_]");
x_126 = lean_name_mk_string(x_124, x_125);
x_127 = lean_mk_string("[");
lean_inc(x_116);
x_128 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_128, 0, x_116);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_mk_string("null");
x_130 = lean_name_mk_string(x_124, x_129);
x_131 = lean_mk_string("Parser");
lean_inc(x_1);
x_132 = lean_name_mk_string(x_1, x_131);
x_133 = lean_mk_string("Term");
x_134 = lean_name_mk_string(x_132, x_133);
x_135 = lean_mk_string("paren");
lean_inc(x_134);
x_136 = lean_name_mk_string(x_134, x_135);
x_137 = lean_mk_string("(");
lean_inc(x_116);
x_138 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_138, 0, x_116);
lean_ctor_set(x_138, 1, x_137);
x_139 = lean_mk_string("tupleTail");
lean_inc(x_134);
x_140 = lean_name_mk_string(x_134, x_139);
x_141 = lean_mk_string(",");
lean_inc(x_116);
x_142 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_142, 0, x_116);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_mk_string("app");
x_144 = lean_name_mk_string(x_134, x_143);
x_145 = lean_mk_string("toJson");
x_146 = lean_string_utf8_byte_size(x_145);
lean_inc(x_145);
x_147 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_147, 0, x_145);
lean_ctor_set(x_147, 1, x_18);
lean_ctor_set(x_147, 2, x_146);
lean_inc(x_145);
x_148 = lean_name_mk_string(x_124, x_145);
x_149 = l_Lean_addMacroScope(x_122, x_148, x_119);
lean_inc(x_2);
x_150 = lean_name_mk_string(x_2, x_145);
x_151 = lean_box(0);
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_151);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_151);
lean_inc(x_116);
x_154 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_154, 0, x_116);
lean_ctor_set(x_154, 1, x_147);
lean_ctor_set(x_154, 2, x_149);
lean_ctor_set(x_154, 3, x_153);
x_155 = lean_ctor_get(x_3, 2);
x_156 = l_Lean_instInhabitedName;
x_157 = lean_array_get(x_156, x_155, x_18);
x_158 = l_Lean_Name_append(x_157, x_28);
lean_dec(x_157);
x_159 = lean_mk_syntax_ident(x_158);
x_160 = lean_unsigned_to_nat(1u);
x_161 = lean_mk_empty_array_with_capacity(x_160);
lean_inc(x_161);
x_162 = lean_array_push(x_161, x_159);
lean_inc(x_130);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_130);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_unsigned_to_nat(2u);
x_165 = lean_mk_empty_array_with_capacity(x_164);
lean_inc(x_165);
x_166 = lean_array_push(x_165, x_154);
x_167 = lean_array_push(x_166, x_163);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_144);
lean_ctor_set(x_168, 1, x_167);
lean_inc(x_161);
x_169 = lean_array_push(x_161, x_168);
lean_inc(x_130);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_130);
lean_ctor_set(x_170, 1, x_169);
lean_inc(x_165);
x_171 = lean_array_push(x_165, x_142);
x_172 = lean_array_push(x_171, x_170);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_140);
lean_ctor_set(x_173, 1, x_172);
lean_inc(x_161);
x_174 = lean_array_push(x_161, x_173);
lean_inc(x_130);
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_130);
lean_ctor_set(x_175, 1, x_174);
x_176 = lean_array_push(x_165, x_114);
x_177 = lean_array_push(x_176, x_175);
lean_inc(x_130);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_130);
lean_ctor_set(x_178, 1, x_177);
x_179 = lean_mk_string(")");
lean_inc(x_116);
x_180 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_180, 0, x_116);
lean_ctor_set(x_180, 1, x_179);
x_181 = lean_unsigned_to_nat(3u);
x_182 = lean_mk_empty_array_with_capacity(x_181);
lean_inc(x_182);
x_183 = lean_array_push(x_182, x_138);
x_184 = lean_array_push(x_183, x_178);
x_185 = lean_array_push(x_184, x_180);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_136);
lean_ctor_set(x_186, 1, x_185);
x_187 = lean_array_push(x_161, x_186);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_130);
lean_ctor_set(x_188, 1, x_187);
x_189 = lean_mk_string("]");
x_190 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_190, 0, x_116);
lean_ctor_set(x_190, 1, x_189);
x_191 = lean_array_push(x_182, x_128);
x_192 = lean_array_push(x_191, x_188);
x_193 = lean_array_push(x_192, x_190);
x_194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_194, 0, x_126);
lean_ctor_set(x_194, 1, x_193);
x_20 = x_194;
x_21 = x_123;
goto block_27;
}
}
else
{
uint8_t x_195; 
x_195 = !lean_is_exclusive(x_29);
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; 
x_196 = lean_ctor_get(x_29, 1);
x_197 = lean_ctor_get(x_29, 0);
lean_dec(x_197);
x_198 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_13);
x_199 = lean_ctor_get(x_198, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_198, 1);
lean_inc(x_200);
lean_dec(x_198);
x_201 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_200);
x_202 = lean_ctor_get(x_201, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_201, 1);
lean_inc(x_203);
lean_dec(x_201);
x_204 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_203);
x_205 = lean_ctor_get(x_204, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_204, 1);
lean_inc(x_206);
lean_dec(x_204);
x_207 = lean_mk_string("Parser");
lean_inc(x_1);
x_208 = lean_name_mk_string(x_1, x_207);
x_209 = lean_mk_string("Term");
x_210 = lean_name_mk_string(x_208, x_209);
x_211 = lean_mk_string("app");
x_212 = lean_name_mk_string(x_210, x_211);
x_213 = lean_mk_string("opt");
x_214 = lean_string_utf8_byte_size(x_213);
lean_inc(x_213);
x_215 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_215, 0, x_213);
lean_ctor_set(x_215, 1, x_18);
lean_ctor_set(x_215, 2, x_214);
x_216 = lean_box(0);
lean_inc(x_213);
x_217 = lean_name_mk_string(x_216, x_213);
x_218 = l_Lean_addMacroScope(x_205, x_217, x_202);
x_219 = lean_mk_string("Json");
lean_inc(x_1);
x_220 = lean_name_mk_string(x_1, x_219);
x_221 = lean_name_mk_string(x_220, x_213);
x_222 = lean_box(0);
lean_ctor_set(x_29, 1, x_222);
lean_ctor_set(x_29, 0, x_221);
x_223 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_223, 0, x_29);
lean_ctor_set(x_223, 1, x_222);
x_224 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_224, 0, x_199);
lean_ctor_set(x_224, 1, x_215);
lean_ctor_set(x_224, 2, x_218);
lean_ctor_set(x_224, 3, x_223);
x_225 = lean_mk_string("null");
x_226 = lean_name_mk_string(x_216, x_225);
x_227 = lean_ctor_get(x_3, 2);
x_228 = l_Lean_instInhabitedName;
x_229 = lean_array_get(x_228, x_227, x_18);
x_230 = l_Lean_Name_append(x_229, x_28);
lean_dec(x_229);
x_231 = lean_mk_syntax_ident(x_230);
x_232 = lean_unsigned_to_nat(2u);
x_233 = lean_mk_empty_array_with_capacity(x_232);
lean_inc(x_233);
x_234 = lean_array_push(x_233, x_196);
x_235 = lean_array_push(x_234, x_231);
x_236 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_236, 0, x_226);
lean_ctor_set(x_236, 1, x_235);
x_237 = lean_array_push(x_233, x_224);
x_238 = lean_array_push(x_237, x_236);
x_239 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_239, 0, x_212);
lean_ctor_set(x_239, 1, x_238);
x_20 = x_239;
x_21 = x_206;
goto block_27;
}
else
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
x_240 = lean_ctor_get(x_29, 1);
lean_inc(x_240);
lean_dec(x_29);
x_241 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_13);
x_242 = lean_ctor_get(x_241, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_241, 1);
lean_inc(x_243);
lean_dec(x_241);
x_244 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_243);
x_245 = lean_ctor_get(x_244, 0);
lean_inc(x_245);
x_246 = lean_ctor_get(x_244, 1);
lean_inc(x_246);
lean_dec(x_244);
x_247 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_246);
x_248 = lean_ctor_get(x_247, 0);
lean_inc(x_248);
x_249 = lean_ctor_get(x_247, 1);
lean_inc(x_249);
lean_dec(x_247);
x_250 = lean_mk_string("Parser");
lean_inc(x_1);
x_251 = lean_name_mk_string(x_1, x_250);
x_252 = lean_mk_string("Term");
x_253 = lean_name_mk_string(x_251, x_252);
x_254 = lean_mk_string("app");
x_255 = lean_name_mk_string(x_253, x_254);
x_256 = lean_mk_string("opt");
x_257 = lean_string_utf8_byte_size(x_256);
lean_inc(x_256);
x_258 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_258, 0, x_256);
lean_ctor_set(x_258, 1, x_18);
lean_ctor_set(x_258, 2, x_257);
x_259 = lean_box(0);
lean_inc(x_256);
x_260 = lean_name_mk_string(x_259, x_256);
x_261 = l_Lean_addMacroScope(x_248, x_260, x_245);
x_262 = lean_mk_string("Json");
lean_inc(x_1);
x_263 = lean_name_mk_string(x_1, x_262);
x_264 = lean_name_mk_string(x_263, x_256);
x_265 = lean_box(0);
x_266 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_266, 0, x_264);
lean_ctor_set(x_266, 1, x_265);
x_267 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_267, 0, x_266);
lean_ctor_set(x_267, 1, x_265);
x_268 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_268, 0, x_242);
lean_ctor_set(x_268, 1, x_258);
lean_ctor_set(x_268, 2, x_261);
lean_ctor_set(x_268, 3, x_267);
x_269 = lean_mk_string("null");
x_270 = lean_name_mk_string(x_259, x_269);
x_271 = lean_ctor_get(x_3, 2);
x_272 = l_Lean_instInhabitedName;
x_273 = lean_array_get(x_272, x_271, x_18);
x_274 = l_Lean_Name_append(x_273, x_28);
lean_dec(x_273);
x_275 = lean_mk_syntax_ident(x_274);
x_276 = lean_unsigned_to_nat(2u);
x_277 = lean_mk_empty_array_with_capacity(x_276);
lean_inc(x_277);
x_278 = lean_array_push(x_277, x_240);
x_279 = lean_array_push(x_278, x_275);
x_280 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_280, 0, x_270);
lean_ctor_set(x_280, 1, x_279);
x_281 = lean_array_push(x_277, x_268);
x_282 = lean_array_push(x_281, x_280);
x_283 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_283, 0, x_255);
lean_ctor_set(x_283, 1, x_282);
x_20 = x_283;
x_21 = x_249;
goto block_27;
}
}
block_27:
{
size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; 
x_22 = 1;
x_23 = x_5 + x_22;
x_24 = x_20;
x_25 = lean_array_uset(x_19, x_5, x_24);
x_5 = x_23;
x_6 = x_25;
x_13 = x_21;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__1___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_array_get_size(x_4);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_eq(x_13, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_dec_eq(x_13, x_16);
if (x_17 == 0)
{
if (lean_obj_tag(x_5) == 0)
{
size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_18 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_19 = 0;
x_20 = x_4;
x_21 = lean_box_usize(x_18);
x_22 = l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__1___boxed__const__1;
lean_inc(x_2);
lean_inc(x_1);
x_23 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__3___boxed), 12, 5);
lean_closure_set(x_23, 0, x_1);
lean_closure_set(x_23, 1, x_2);
lean_closure_set(x_23, 2, x_21);
lean_closure_set(x_23, 3, x_22);
lean_closure_set(x_23, 4, x_20);
x_24 = x_23;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_25 = lean_apply_7(x_24, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_10, x_11, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_Elab_Term_getCurrMacroScope(x_6, x_7, x_8, x_9, x_10, x_11, x_30);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Elab_Term_getMainModule___rarg(x_11, x_33);
lean_dec(x_11);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; size_t x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_36 = lean_ctor_get(x_34, 0);
x_37 = lean_mk_string("Parser");
lean_inc(x_1);
x_38 = lean_name_mk_string(x_1, x_37);
x_39 = lean_mk_string("Term");
x_40 = lean_name_mk_string(x_38, x_39);
x_41 = lean_mk_string("app");
lean_inc(x_40);
x_42 = lean_name_mk_string(x_40, x_41);
x_43 = lean_mk_string("mkObj");
x_44 = lean_string_utf8_byte_size(x_43);
lean_inc(x_43);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_14);
lean_ctor_set(x_45, 2, x_44);
x_46 = lean_box(0);
lean_inc(x_43);
x_47 = lean_name_mk_string(x_46, x_43);
lean_inc(x_32);
lean_inc(x_36);
x_48 = l_Lean_addMacroScope(x_36, x_47, x_32);
x_49 = lean_mk_string("Json");
x_50 = lean_name_mk_string(x_1, x_49);
x_51 = lean_name_mk_string(x_50, x_43);
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
lean_inc(x_29);
x_55 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_55, 0, x_29);
lean_ctor_set(x_55, 1, x_45);
lean_ctor_set(x_55, 2, x_48);
lean_ctor_set(x_55, 3, x_54);
x_56 = lean_mk_string("null");
x_57 = lean_name_mk_string(x_46, x_56);
x_58 = lean_mk_string("term[_]");
x_59 = lean_name_mk_string(x_46, x_58);
x_60 = lean_mk_string("[");
lean_inc(x_29);
x_61 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_61, 0, x_29);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_mk_string("paren");
lean_inc(x_40);
x_63 = lean_name_mk_string(x_40, x_62);
x_64 = lean_mk_string("(");
lean_inc(x_29);
x_65 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_65, 0, x_29);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_ctor_get(x_3, 0);
x_67 = lean_ctor_get(x_66, 0);
x_68 = l_Lean_Name_getString_x21(x_67);
x_69 = lean_box(2);
x_70 = l_Lean_Syntax_mkStrLit(x_68, x_69);
lean_dec(x_68);
x_71 = lean_mk_string("tupleTail");
x_72 = lean_name_mk_string(x_40, x_71);
x_73 = lean_mk_string(",");
lean_inc(x_73);
lean_inc(x_29);
x_74 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_74, 0, x_29);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_mk_string("toJson");
x_76 = lean_string_utf8_byte_size(x_75);
lean_inc(x_75);
x_77 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_14);
lean_ctor_set(x_77, 2, x_76);
lean_inc(x_75);
x_78 = lean_name_mk_string(x_46, x_75);
x_79 = l_Lean_addMacroScope(x_36, x_78, x_32);
x_80 = lean_name_mk_string(x_2, x_75);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_52);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_52);
lean_inc(x_29);
x_83 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_83, 0, x_29);
lean_ctor_set(x_83, 1, x_77);
lean_ctor_set(x_83, 2, x_79);
lean_ctor_set(x_83, 3, x_82);
x_84 = lean_mk_string("term#[_,]");
x_85 = lean_name_mk_string(x_46, x_84);
x_86 = lean_mk_string("#[");
lean_inc(x_29);
x_87 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_87, 0, x_29);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_mk_empty_array_with_capacity(x_14);
x_89 = lean_array_get_size(x_26);
x_90 = lean_usize_of_nat(x_89);
lean_dec(x_89);
x_91 = x_26;
x_92 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_90, x_19, x_91);
x_93 = x_92;
x_94 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_94, 0, x_69);
lean_ctor_set(x_94, 1, x_73);
x_95 = l_Lean_mkSepArray(x_93, x_94);
lean_dec(x_93);
x_96 = l_Array_append___rarg(x_88, x_95);
lean_dec(x_95);
lean_inc(x_57);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_57);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_mk_string("]");
lean_inc(x_29);
x_99 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_99, 0, x_29);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_unsigned_to_nat(3u);
x_101 = lean_mk_empty_array_with_capacity(x_100);
lean_inc(x_101);
x_102 = lean_array_push(x_101, x_87);
x_103 = lean_array_push(x_102, x_97);
lean_inc(x_99);
x_104 = lean_array_push(x_103, x_99);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_85);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_106);
x_107 = lean_array_push(x_106, x_105);
lean_inc(x_57);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_57);
lean_ctor_set(x_108, 1, x_107);
x_109 = lean_unsigned_to_nat(2u);
x_110 = lean_mk_empty_array_with_capacity(x_109);
lean_inc(x_110);
x_111 = lean_array_push(x_110, x_83);
x_112 = lean_array_push(x_111, x_108);
lean_inc(x_42);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_42);
lean_ctor_set(x_113, 1, x_112);
lean_inc(x_106);
x_114 = lean_array_push(x_106, x_113);
lean_inc(x_57);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_57);
lean_ctor_set(x_115, 1, x_114);
lean_inc(x_110);
x_116 = lean_array_push(x_110, x_74);
x_117 = lean_array_push(x_116, x_115);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_72);
lean_ctor_set(x_118, 1, x_117);
lean_inc(x_106);
x_119 = lean_array_push(x_106, x_118);
lean_inc(x_57);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_57);
lean_ctor_set(x_120, 1, x_119);
lean_inc(x_110);
x_121 = lean_array_push(x_110, x_70);
x_122 = lean_array_push(x_121, x_120);
lean_inc(x_57);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_57);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_mk_string(")");
x_125 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_125, 0, x_29);
lean_ctor_set(x_125, 1, x_124);
lean_inc(x_101);
x_126 = lean_array_push(x_101, x_65);
x_127 = lean_array_push(x_126, x_123);
x_128 = lean_array_push(x_127, x_125);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_63);
lean_ctor_set(x_129, 1, x_128);
lean_inc(x_106);
x_130 = lean_array_push(x_106, x_129);
lean_inc(x_57);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_57);
lean_ctor_set(x_131, 1, x_130);
x_132 = lean_array_push(x_101, x_61);
x_133 = lean_array_push(x_132, x_131);
x_134 = lean_array_push(x_133, x_99);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_59);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_array_push(x_106, x_135);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_57);
lean_ctor_set(x_137, 1, x_136);
x_138 = lean_array_push(x_110, x_55);
x_139 = lean_array_push(x_138, x_137);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_42);
lean_ctor_set(x_140, 1, x_139);
lean_ctor_set(x_34, 0, x_140);
return x_34;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; size_t x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_141 = lean_ctor_get(x_34, 0);
x_142 = lean_ctor_get(x_34, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_34);
x_143 = lean_mk_string("Parser");
lean_inc(x_1);
x_144 = lean_name_mk_string(x_1, x_143);
x_145 = lean_mk_string("Term");
x_146 = lean_name_mk_string(x_144, x_145);
x_147 = lean_mk_string("app");
lean_inc(x_146);
x_148 = lean_name_mk_string(x_146, x_147);
x_149 = lean_mk_string("mkObj");
x_150 = lean_string_utf8_byte_size(x_149);
lean_inc(x_149);
x_151 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_14);
lean_ctor_set(x_151, 2, x_150);
x_152 = lean_box(0);
lean_inc(x_149);
x_153 = lean_name_mk_string(x_152, x_149);
lean_inc(x_32);
lean_inc(x_141);
x_154 = l_Lean_addMacroScope(x_141, x_153, x_32);
x_155 = lean_mk_string("Json");
x_156 = lean_name_mk_string(x_1, x_155);
x_157 = lean_name_mk_string(x_156, x_149);
x_158 = lean_box(0);
x_159 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_159, 0, x_157);
lean_ctor_set(x_159, 1, x_158);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_158);
lean_inc(x_29);
x_161 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_161, 0, x_29);
lean_ctor_set(x_161, 1, x_151);
lean_ctor_set(x_161, 2, x_154);
lean_ctor_set(x_161, 3, x_160);
x_162 = lean_mk_string("null");
x_163 = lean_name_mk_string(x_152, x_162);
x_164 = lean_mk_string("term[_]");
x_165 = lean_name_mk_string(x_152, x_164);
x_166 = lean_mk_string("[");
lean_inc(x_29);
x_167 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_167, 0, x_29);
lean_ctor_set(x_167, 1, x_166);
x_168 = lean_mk_string("paren");
lean_inc(x_146);
x_169 = lean_name_mk_string(x_146, x_168);
x_170 = lean_mk_string("(");
lean_inc(x_29);
x_171 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_171, 0, x_29);
lean_ctor_set(x_171, 1, x_170);
x_172 = lean_ctor_get(x_3, 0);
x_173 = lean_ctor_get(x_172, 0);
x_174 = l_Lean_Name_getString_x21(x_173);
x_175 = lean_box(2);
x_176 = l_Lean_Syntax_mkStrLit(x_174, x_175);
lean_dec(x_174);
x_177 = lean_mk_string("tupleTail");
x_178 = lean_name_mk_string(x_146, x_177);
x_179 = lean_mk_string(",");
lean_inc(x_179);
lean_inc(x_29);
x_180 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_180, 0, x_29);
lean_ctor_set(x_180, 1, x_179);
x_181 = lean_mk_string("toJson");
x_182 = lean_string_utf8_byte_size(x_181);
lean_inc(x_181);
x_183 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_183, 0, x_181);
lean_ctor_set(x_183, 1, x_14);
lean_ctor_set(x_183, 2, x_182);
lean_inc(x_181);
x_184 = lean_name_mk_string(x_152, x_181);
x_185 = l_Lean_addMacroScope(x_141, x_184, x_32);
x_186 = lean_name_mk_string(x_2, x_181);
x_187 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_187, 0, x_186);
lean_ctor_set(x_187, 1, x_158);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_158);
lean_inc(x_29);
x_189 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_189, 0, x_29);
lean_ctor_set(x_189, 1, x_183);
lean_ctor_set(x_189, 2, x_185);
lean_ctor_set(x_189, 3, x_188);
x_190 = lean_mk_string("term#[_,]");
x_191 = lean_name_mk_string(x_152, x_190);
x_192 = lean_mk_string("#[");
lean_inc(x_29);
x_193 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_193, 0, x_29);
lean_ctor_set(x_193, 1, x_192);
x_194 = lean_mk_empty_array_with_capacity(x_14);
x_195 = lean_array_get_size(x_26);
x_196 = lean_usize_of_nat(x_195);
lean_dec(x_195);
x_197 = x_26;
x_198 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_196, x_19, x_197);
x_199 = x_198;
x_200 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_200, 0, x_175);
lean_ctor_set(x_200, 1, x_179);
x_201 = l_Lean_mkSepArray(x_199, x_200);
lean_dec(x_199);
x_202 = l_Array_append___rarg(x_194, x_201);
lean_dec(x_201);
lean_inc(x_163);
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_163);
lean_ctor_set(x_203, 1, x_202);
x_204 = lean_mk_string("]");
lean_inc(x_29);
x_205 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_205, 0, x_29);
lean_ctor_set(x_205, 1, x_204);
x_206 = lean_unsigned_to_nat(3u);
x_207 = lean_mk_empty_array_with_capacity(x_206);
lean_inc(x_207);
x_208 = lean_array_push(x_207, x_193);
x_209 = lean_array_push(x_208, x_203);
lean_inc(x_205);
x_210 = lean_array_push(x_209, x_205);
x_211 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_211, 0, x_191);
lean_ctor_set(x_211, 1, x_210);
x_212 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_212);
x_213 = lean_array_push(x_212, x_211);
lean_inc(x_163);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_163);
lean_ctor_set(x_214, 1, x_213);
x_215 = lean_unsigned_to_nat(2u);
x_216 = lean_mk_empty_array_with_capacity(x_215);
lean_inc(x_216);
x_217 = lean_array_push(x_216, x_189);
x_218 = lean_array_push(x_217, x_214);
lean_inc(x_148);
x_219 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_219, 0, x_148);
lean_ctor_set(x_219, 1, x_218);
lean_inc(x_212);
x_220 = lean_array_push(x_212, x_219);
lean_inc(x_163);
x_221 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_221, 0, x_163);
lean_ctor_set(x_221, 1, x_220);
lean_inc(x_216);
x_222 = lean_array_push(x_216, x_180);
x_223 = lean_array_push(x_222, x_221);
x_224 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_224, 0, x_178);
lean_ctor_set(x_224, 1, x_223);
lean_inc(x_212);
x_225 = lean_array_push(x_212, x_224);
lean_inc(x_163);
x_226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_226, 0, x_163);
lean_ctor_set(x_226, 1, x_225);
lean_inc(x_216);
x_227 = lean_array_push(x_216, x_176);
x_228 = lean_array_push(x_227, x_226);
lean_inc(x_163);
x_229 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_229, 0, x_163);
lean_ctor_set(x_229, 1, x_228);
x_230 = lean_mk_string(")");
x_231 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_231, 0, x_29);
lean_ctor_set(x_231, 1, x_230);
lean_inc(x_207);
x_232 = lean_array_push(x_207, x_171);
x_233 = lean_array_push(x_232, x_229);
x_234 = lean_array_push(x_233, x_231);
x_235 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_235, 0, x_169);
lean_ctor_set(x_235, 1, x_234);
lean_inc(x_212);
x_236 = lean_array_push(x_212, x_235);
lean_inc(x_163);
x_237 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_237, 0, x_163);
lean_ctor_set(x_237, 1, x_236);
x_238 = lean_array_push(x_207, x_167);
x_239 = lean_array_push(x_238, x_237);
x_240 = lean_array_push(x_239, x_205);
x_241 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_241, 0, x_165);
lean_ctor_set(x_241, 1, x_240);
x_242 = lean_array_push(x_212, x_241);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_163);
lean_ctor_set(x_243, 1, x_242);
x_244 = lean_array_push(x_216, x_161);
x_245 = lean_array_push(x_244, x_243);
x_246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_246, 0, x_148);
lean_ctor_set(x_246, 1, x_245);
x_247 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_247, 0, x_246);
lean_ctor_set(x_247, 1, x_142);
return x_247;
}
}
else
{
uint8_t x_248; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_248 = !lean_is_exclusive(x_25);
if (x_248 == 0)
{
return x_25;
}
else
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; 
x_249 = lean_ctor_get(x_25, 0);
x_250 = lean_ctor_get(x_25, 1);
lean_inc(x_250);
lean_inc(x_249);
lean_dec(x_25);
x_251 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_251, 0, x_249);
lean_ctor_set(x_251, 1, x_250);
return x_251;
}
}
}
else
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; uint8_t x_264; 
x_252 = lean_ctor_get(x_5, 0);
x_253 = lean_mk_empty_array_with_capacity(x_13);
lean_inc(x_1);
x_254 = l_Array_mapIdxM_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__4(x_1, x_2, x_4, x_252, x_4, x_13, x_14, lean_box(0), x_253, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_4);
x_255 = lean_ctor_get(x_254, 0);
lean_inc(x_255);
x_256 = lean_ctor_get(x_254, 1);
lean_inc(x_256);
lean_dec(x_254);
x_257 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_10, x_11, x_256);
x_258 = lean_ctor_get(x_257, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_257, 1);
lean_inc(x_259);
lean_dec(x_257);
x_260 = l_Lean_Elab_Term_getCurrMacroScope(x_6, x_7, x_8, x_9, x_10, x_11, x_259);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_261 = lean_ctor_get(x_260, 0);
lean_inc(x_261);
x_262 = lean_ctor_get(x_260, 1);
lean_inc(x_262);
lean_dec(x_260);
x_263 = l_Lean_Elab_Term_getMainModule___rarg(x_11, x_262);
lean_dec(x_11);
x_264 = !lean_is_exclusive(x_263);
if (x_264 == 0)
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; size_t x_306; size_t x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; 
x_265 = lean_ctor_get(x_263, 0);
x_266 = lean_mk_string("Parser");
lean_inc(x_1);
x_267 = lean_name_mk_string(x_1, x_266);
x_268 = lean_mk_string("Term");
x_269 = lean_name_mk_string(x_267, x_268);
x_270 = lean_mk_string("app");
lean_inc(x_269);
x_271 = lean_name_mk_string(x_269, x_270);
x_272 = lean_mk_string("mkObj");
x_273 = lean_string_utf8_byte_size(x_272);
lean_inc(x_272);
x_274 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_274, 0, x_272);
lean_ctor_set(x_274, 1, x_14);
lean_ctor_set(x_274, 2, x_273);
x_275 = lean_box(0);
lean_inc(x_272);
x_276 = lean_name_mk_string(x_275, x_272);
x_277 = l_Lean_addMacroScope(x_265, x_276, x_261);
x_278 = lean_mk_string("Json");
x_279 = lean_name_mk_string(x_1, x_278);
x_280 = lean_name_mk_string(x_279, x_272);
x_281 = lean_box(0);
x_282 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_282, 0, x_280);
lean_ctor_set(x_282, 1, x_281);
x_283 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_283, 0, x_282);
lean_ctor_set(x_283, 1, x_281);
lean_inc(x_258);
x_284 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_284, 0, x_258);
lean_ctor_set(x_284, 1, x_274);
lean_ctor_set(x_284, 2, x_277);
lean_ctor_set(x_284, 3, x_283);
x_285 = lean_mk_string("null");
x_286 = lean_name_mk_string(x_275, x_285);
x_287 = lean_mk_string("term[_]");
x_288 = lean_name_mk_string(x_275, x_287);
x_289 = lean_mk_string("[");
lean_inc(x_258);
x_290 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_290, 0, x_258);
lean_ctor_set(x_290, 1, x_289);
x_291 = lean_mk_string("paren");
lean_inc(x_269);
x_292 = lean_name_mk_string(x_269, x_291);
x_293 = lean_mk_string("(");
lean_inc(x_258);
x_294 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_294, 0, x_258);
lean_ctor_set(x_294, 1, x_293);
x_295 = lean_ctor_get(x_3, 0);
x_296 = lean_ctor_get(x_295, 0);
x_297 = l_Lean_Name_getString_x21(x_296);
x_298 = lean_box(2);
x_299 = l_Lean_Syntax_mkStrLit(x_297, x_298);
lean_dec(x_297);
x_300 = lean_mk_string("tupleTail");
x_301 = lean_name_mk_string(x_269, x_300);
x_302 = lean_mk_string(",");
lean_inc(x_302);
lean_inc(x_258);
x_303 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_303, 0, x_258);
lean_ctor_set(x_303, 1, x_302);
x_304 = lean_mk_empty_array_with_capacity(x_14);
x_305 = lean_array_get_size(x_255);
x_306 = lean_usize_of_nat(x_305);
lean_dec(x_305);
x_307 = 0;
x_308 = x_255;
x_309 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_306, x_307, x_308);
x_310 = x_309;
x_311 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_311, 0, x_298);
lean_ctor_set(x_311, 1, x_302);
x_312 = l_Lean_mkSepArray(x_310, x_311);
lean_dec(x_310);
x_313 = l_Array_append___rarg(x_304, x_312);
lean_dec(x_312);
lean_inc(x_286);
x_314 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_314, 0, x_286);
lean_ctor_set(x_314, 1, x_313);
x_315 = lean_mk_string("]");
lean_inc(x_258);
x_316 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_316, 0, x_258);
lean_ctor_set(x_316, 1, x_315);
x_317 = lean_unsigned_to_nat(3u);
x_318 = lean_mk_empty_array_with_capacity(x_317);
lean_inc(x_318);
x_319 = lean_array_push(x_318, x_290);
lean_inc(x_319);
x_320 = lean_array_push(x_319, x_314);
lean_inc(x_316);
x_321 = lean_array_push(x_320, x_316);
lean_inc(x_288);
x_322 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_322, 0, x_288);
lean_ctor_set(x_322, 1, x_321);
x_323 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_323);
x_324 = lean_array_push(x_323, x_322);
lean_inc(x_286);
x_325 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_325, 0, x_286);
lean_ctor_set(x_325, 1, x_324);
x_326 = lean_unsigned_to_nat(2u);
x_327 = lean_mk_empty_array_with_capacity(x_326);
lean_inc(x_327);
x_328 = lean_array_push(x_327, x_284);
lean_inc(x_328);
x_329 = lean_array_push(x_328, x_325);
lean_inc(x_271);
x_330 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_330, 0, x_271);
lean_ctor_set(x_330, 1, x_329);
lean_inc(x_323);
x_331 = lean_array_push(x_323, x_330);
lean_inc(x_286);
x_332 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_332, 0, x_286);
lean_ctor_set(x_332, 1, x_331);
lean_inc(x_327);
x_333 = lean_array_push(x_327, x_303);
x_334 = lean_array_push(x_333, x_332);
x_335 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_335, 0, x_301);
lean_ctor_set(x_335, 1, x_334);
lean_inc(x_323);
x_336 = lean_array_push(x_323, x_335);
lean_inc(x_286);
x_337 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_337, 0, x_286);
lean_ctor_set(x_337, 1, x_336);
x_338 = lean_array_push(x_327, x_299);
x_339 = lean_array_push(x_338, x_337);
lean_inc(x_286);
x_340 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_340, 0, x_286);
lean_ctor_set(x_340, 1, x_339);
x_341 = lean_mk_string(")");
x_342 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_342, 0, x_258);
lean_ctor_set(x_342, 1, x_341);
x_343 = lean_array_push(x_318, x_294);
x_344 = lean_array_push(x_343, x_340);
x_345 = lean_array_push(x_344, x_342);
x_346 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_346, 0, x_292);
lean_ctor_set(x_346, 1, x_345);
lean_inc(x_323);
x_347 = lean_array_push(x_323, x_346);
lean_inc(x_286);
x_348 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_348, 0, x_286);
lean_ctor_set(x_348, 1, x_347);
x_349 = lean_array_push(x_319, x_348);
x_350 = lean_array_push(x_349, x_316);
x_351 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_351, 0, x_288);
lean_ctor_set(x_351, 1, x_350);
x_352 = lean_array_push(x_323, x_351);
x_353 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_353, 0, x_286);
lean_ctor_set(x_353, 1, x_352);
x_354 = lean_array_push(x_328, x_353);
x_355 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_355, 0, x_271);
lean_ctor_set(x_355, 1, x_354);
lean_ctor_set(x_263, 0, x_355);
return x_263;
}
else
{
lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; size_t x_398; size_t x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; 
x_356 = lean_ctor_get(x_263, 0);
x_357 = lean_ctor_get(x_263, 1);
lean_inc(x_357);
lean_inc(x_356);
lean_dec(x_263);
x_358 = lean_mk_string("Parser");
lean_inc(x_1);
x_359 = lean_name_mk_string(x_1, x_358);
x_360 = lean_mk_string("Term");
x_361 = lean_name_mk_string(x_359, x_360);
x_362 = lean_mk_string("app");
lean_inc(x_361);
x_363 = lean_name_mk_string(x_361, x_362);
x_364 = lean_mk_string("mkObj");
x_365 = lean_string_utf8_byte_size(x_364);
lean_inc(x_364);
x_366 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_366, 0, x_364);
lean_ctor_set(x_366, 1, x_14);
lean_ctor_set(x_366, 2, x_365);
x_367 = lean_box(0);
lean_inc(x_364);
x_368 = lean_name_mk_string(x_367, x_364);
x_369 = l_Lean_addMacroScope(x_356, x_368, x_261);
x_370 = lean_mk_string("Json");
x_371 = lean_name_mk_string(x_1, x_370);
x_372 = lean_name_mk_string(x_371, x_364);
x_373 = lean_box(0);
x_374 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_374, 0, x_372);
lean_ctor_set(x_374, 1, x_373);
x_375 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_375, 0, x_374);
lean_ctor_set(x_375, 1, x_373);
lean_inc(x_258);
x_376 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_376, 0, x_258);
lean_ctor_set(x_376, 1, x_366);
lean_ctor_set(x_376, 2, x_369);
lean_ctor_set(x_376, 3, x_375);
x_377 = lean_mk_string("null");
x_378 = lean_name_mk_string(x_367, x_377);
x_379 = lean_mk_string("term[_]");
x_380 = lean_name_mk_string(x_367, x_379);
x_381 = lean_mk_string("[");
lean_inc(x_258);
x_382 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_382, 0, x_258);
lean_ctor_set(x_382, 1, x_381);
x_383 = lean_mk_string("paren");
lean_inc(x_361);
x_384 = lean_name_mk_string(x_361, x_383);
x_385 = lean_mk_string("(");
lean_inc(x_258);
x_386 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_386, 0, x_258);
lean_ctor_set(x_386, 1, x_385);
x_387 = lean_ctor_get(x_3, 0);
x_388 = lean_ctor_get(x_387, 0);
x_389 = l_Lean_Name_getString_x21(x_388);
x_390 = lean_box(2);
x_391 = l_Lean_Syntax_mkStrLit(x_389, x_390);
lean_dec(x_389);
x_392 = lean_mk_string("tupleTail");
x_393 = lean_name_mk_string(x_361, x_392);
x_394 = lean_mk_string(",");
lean_inc(x_394);
lean_inc(x_258);
x_395 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_395, 0, x_258);
lean_ctor_set(x_395, 1, x_394);
x_396 = lean_mk_empty_array_with_capacity(x_14);
x_397 = lean_array_get_size(x_255);
x_398 = lean_usize_of_nat(x_397);
lean_dec(x_397);
x_399 = 0;
x_400 = x_255;
x_401 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_398, x_399, x_400);
x_402 = x_401;
x_403 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_403, 0, x_390);
lean_ctor_set(x_403, 1, x_394);
x_404 = l_Lean_mkSepArray(x_402, x_403);
lean_dec(x_402);
x_405 = l_Array_append___rarg(x_396, x_404);
lean_dec(x_404);
lean_inc(x_378);
x_406 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_406, 0, x_378);
lean_ctor_set(x_406, 1, x_405);
x_407 = lean_mk_string("]");
lean_inc(x_258);
x_408 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_408, 0, x_258);
lean_ctor_set(x_408, 1, x_407);
x_409 = lean_unsigned_to_nat(3u);
x_410 = lean_mk_empty_array_with_capacity(x_409);
lean_inc(x_410);
x_411 = lean_array_push(x_410, x_382);
lean_inc(x_411);
x_412 = lean_array_push(x_411, x_406);
lean_inc(x_408);
x_413 = lean_array_push(x_412, x_408);
lean_inc(x_380);
x_414 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_414, 0, x_380);
lean_ctor_set(x_414, 1, x_413);
x_415 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_415);
x_416 = lean_array_push(x_415, x_414);
lean_inc(x_378);
x_417 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_417, 0, x_378);
lean_ctor_set(x_417, 1, x_416);
x_418 = lean_unsigned_to_nat(2u);
x_419 = lean_mk_empty_array_with_capacity(x_418);
lean_inc(x_419);
x_420 = lean_array_push(x_419, x_376);
lean_inc(x_420);
x_421 = lean_array_push(x_420, x_417);
lean_inc(x_363);
x_422 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_422, 0, x_363);
lean_ctor_set(x_422, 1, x_421);
lean_inc(x_415);
x_423 = lean_array_push(x_415, x_422);
lean_inc(x_378);
x_424 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_424, 0, x_378);
lean_ctor_set(x_424, 1, x_423);
lean_inc(x_419);
x_425 = lean_array_push(x_419, x_395);
x_426 = lean_array_push(x_425, x_424);
x_427 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_427, 0, x_393);
lean_ctor_set(x_427, 1, x_426);
lean_inc(x_415);
x_428 = lean_array_push(x_415, x_427);
lean_inc(x_378);
x_429 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_429, 0, x_378);
lean_ctor_set(x_429, 1, x_428);
x_430 = lean_array_push(x_419, x_391);
x_431 = lean_array_push(x_430, x_429);
lean_inc(x_378);
x_432 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_432, 0, x_378);
lean_ctor_set(x_432, 1, x_431);
x_433 = lean_mk_string(")");
x_434 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_434, 0, x_258);
lean_ctor_set(x_434, 1, x_433);
x_435 = lean_array_push(x_410, x_386);
x_436 = lean_array_push(x_435, x_432);
x_437 = lean_array_push(x_436, x_434);
x_438 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_438, 0, x_384);
lean_ctor_set(x_438, 1, x_437);
lean_inc(x_415);
x_439 = lean_array_push(x_415, x_438);
lean_inc(x_378);
x_440 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_440, 0, x_378);
lean_ctor_set(x_440, 1, x_439);
x_441 = lean_array_push(x_411, x_440);
x_442 = lean_array_push(x_441, x_408);
x_443 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_443, 0, x_380);
lean_ctor_set(x_443, 1, x_442);
x_444 = lean_array_push(x_415, x_443);
x_445 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_445, 0, x_378);
lean_ctor_set(x_445, 1, x_444);
x_446 = lean_array_push(x_420, x_445);
x_447 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_447, 0, x_363);
lean_ctor_set(x_447, 1, x_446);
x_448 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_448, 0, x_447);
lean_ctor_set(x_448, 1, x_357);
return x_448;
}
}
}
else
{
lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; uint8_t x_457; 
lean_dec(x_13);
x_449 = lean_array_fget(x_4, x_14);
lean_dec(x_4);
x_450 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_10, x_11, x_12);
x_451 = lean_ctor_get(x_450, 0);
lean_inc(x_451);
x_452 = lean_ctor_get(x_450, 1);
lean_inc(x_452);
lean_dec(x_450);
x_453 = l_Lean_Elab_Term_getCurrMacroScope(x_6, x_7, x_8, x_9, x_10, x_11, x_452);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_454 = lean_ctor_get(x_453, 0);
lean_inc(x_454);
x_455 = lean_ctor_get(x_453, 1);
lean_inc(x_455);
lean_dec(x_453);
x_456 = l_Lean_Elab_Term_getMainModule___rarg(x_11, x_455);
lean_dec(x_11);
x_457 = !lean_is_exclusive(x_456);
if (x_457 == 0)
{
lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; 
x_458 = lean_ctor_get(x_456, 0);
x_459 = lean_mk_string("Parser");
lean_inc(x_1);
x_460 = lean_name_mk_string(x_1, x_459);
x_461 = lean_mk_string("Term");
x_462 = lean_name_mk_string(x_460, x_461);
x_463 = lean_mk_string("app");
lean_inc(x_462);
x_464 = lean_name_mk_string(x_462, x_463);
x_465 = lean_mk_string("mkObj");
x_466 = lean_string_utf8_byte_size(x_465);
lean_inc(x_465);
x_467 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_467, 0, x_465);
lean_ctor_set(x_467, 1, x_14);
lean_ctor_set(x_467, 2, x_466);
x_468 = lean_box(0);
lean_inc(x_465);
x_469 = lean_name_mk_string(x_468, x_465);
lean_inc(x_454);
lean_inc(x_458);
x_470 = l_Lean_addMacroScope(x_458, x_469, x_454);
x_471 = lean_mk_string("Json");
x_472 = lean_name_mk_string(x_1, x_471);
x_473 = lean_name_mk_string(x_472, x_465);
x_474 = lean_box(0);
x_475 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_475, 0, x_473);
lean_ctor_set(x_475, 1, x_474);
x_476 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_476, 0, x_475);
lean_ctor_set(x_476, 1, x_474);
lean_inc(x_451);
x_477 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_477, 0, x_451);
lean_ctor_set(x_477, 1, x_467);
lean_ctor_set(x_477, 2, x_470);
lean_ctor_set(x_477, 3, x_476);
x_478 = lean_mk_string("null");
x_479 = lean_name_mk_string(x_468, x_478);
x_480 = lean_mk_string("term[_]");
x_481 = lean_name_mk_string(x_468, x_480);
x_482 = lean_mk_string("[");
lean_inc(x_451);
x_483 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_483, 0, x_451);
lean_ctor_set(x_483, 1, x_482);
x_484 = lean_mk_string("paren");
lean_inc(x_462);
x_485 = lean_name_mk_string(x_462, x_484);
x_486 = lean_mk_string("(");
lean_inc(x_451);
x_487 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_487, 0, x_451);
lean_ctor_set(x_487, 1, x_486);
x_488 = lean_ctor_get(x_3, 0);
x_489 = lean_ctor_get(x_488, 0);
x_490 = l_Lean_Name_getString_x21(x_489);
x_491 = lean_box(2);
x_492 = l_Lean_Syntax_mkStrLit(x_490, x_491);
lean_dec(x_490);
x_493 = lean_mk_string("tupleTail");
x_494 = lean_name_mk_string(x_462, x_493);
x_495 = lean_mk_string(",");
lean_inc(x_451);
x_496 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_496, 0, x_451);
lean_ctor_set(x_496, 1, x_495);
x_497 = lean_mk_string("toJson");
x_498 = lean_string_utf8_byte_size(x_497);
lean_inc(x_497);
x_499 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_499, 0, x_497);
lean_ctor_set(x_499, 1, x_14);
lean_ctor_set(x_499, 2, x_498);
lean_inc(x_497);
x_500 = lean_name_mk_string(x_468, x_497);
x_501 = l_Lean_addMacroScope(x_458, x_500, x_454);
x_502 = lean_name_mk_string(x_2, x_497);
x_503 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_503, 0, x_502);
lean_ctor_set(x_503, 1, x_474);
x_504 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_504, 0, x_503);
lean_ctor_set(x_504, 1, x_474);
lean_inc(x_451);
x_505 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_505, 0, x_451);
lean_ctor_set(x_505, 1, x_499);
lean_ctor_set(x_505, 2, x_501);
lean_ctor_set(x_505, 3, x_504);
x_506 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_506);
x_507 = lean_array_push(x_506, x_449);
lean_inc(x_479);
x_508 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_508, 0, x_479);
lean_ctor_set(x_508, 1, x_507);
x_509 = lean_unsigned_to_nat(2u);
x_510 = lean_mk_empty_array_with_capacity(x_509);
lean_inc(x_510);
x_511 = lean_array_push(x_510, x_505);
x_512 = lean_array_push(x_511, x_508);
lean_inc(x_464);
x_513 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_513, 0, x_464);
lean_ctor_set(x_513, 1, x_512);
lean_inc(x_506);
x_514 = lean_array_push(x_506, x_513);
lean_inc(x_479);
x_515 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_515, 0, x_479);
lean_ctor_set(x_515, 1, x_514);
lean_inc(x_510);
x_516 = lean_array_push(x_510, x_496);
x_517 = lean_array_push(x_516, x_515);
x_518 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_518, 0, x_494);
lean_ctor_set(x_518, 1, x_517);
lean_inc(x_506);
x_519 = lean_array_push(x_506, x_518);
lean_inc(x_479);
x_520 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_520, 0, x_479);
lean_ctor_set(x_520, 1, x_519);
lean_inc(x_510);
x_521 = lean_array_push(x_510, x_492);
x_522 = lean_array_push(x_521, x_520);
lean_inc(x_479);
x_523 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_523, 0, x_479);
lean_ctor_set(x_523, 1, x_522);
x_524 = lean_mk_string(")");
lean_inc(x_451);
x_525 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_525, 0, x_451);
lean_ctor_set(x_525, 1, x_524);
x_526 = lean_unsigned_to_nat(3u);
x_527 = lean_mk_empty_array_with_capacity(x_526);
lean_inc(x_527);
x_528 = lean_array_push(x_527, x_487);
x_529 = lean_array_push(x_528, x_523);
x_530 = lean_array_push(x_529, x_525);
x_531 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_531, 0, x_485);
lean_ctor_set(x_531, 1, x_530);
lean_inc(x_506);
x_532 = lean_array_push(x_506, x_531);
lean_inc(x_479);
x_533 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_533, 0, x_479);
lean_ctor_set(x_533, 1, x_532);
x_534 = lean_mk_string("]");
x_535 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_535, 0, x_451);
lean_ctor_set(x_535, 1, x_534);
x_536 = lean_array_push(x_527, x_483);
x_537 = lean_array_push(x_536, x_533);
x_538 = lean_array_push(x_537, x_535);
x_539 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_539, 0, x_481);
lean_ctor_set(x_539, 1, x_538);
x_540 = lean_array_push(x_506, x_539);
x_541 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_541, 0, x_479);
lean_ctor_set(x_541, 1, x_540);
x_542 = lean_array_push(x_510, x_477);
x_543 = lean_array_push(x_542, x_541);
x_544 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_544, 0, x_464);
lean_ctor_set(x_544, 1, x_543);
lean_ctor_set(x_456, 0, x_544);
return x_456;
}
else
{
lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; 
x_545 = lean_ctor_get(x_456, 0);
x_546 = lean_ctor_get(x_456, 1);
lean_inc(x_546);
lean_inc(x_545);
lean_dec(x_456);
x_547 = lean_mk_string("Parser");
lean_inc(x_1);
x_548 = lean_name_mk_string(x_1, x_547);
x_549 = lean_mk_string("Term");
x_550 = lean_name_mk_string(x_548, x_549);
x_551 = lean_mk_string("app");
lean_inc(x_550);
x_552 = lean_name_mk_string(x_550, x_551);
x_553 = lean_mk_string("mkObj");
x_554 = lean_string_utf8_byte_size(x_553);
lean_inc(x_553);
x_555 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_555, 0, x_553);
lean_ctor_set(x_555, 1, x_14);
lean_ctor_set(x_555, 2, x_554);
x_556 = lean_box(0);
lean_inc(x_553);
x_557 = lean_name_mk_string(x_556, x_553);
lean_inc(x_454);
lean_inc(x_545);
x_558 = l_Lean_addMacroScope(x_545, x_557, x_454);
x_559 = lean_mk_string("Json");
x_560 = lean_name_mk_string(x_1, x_559);
x_561 = lean_name_mk_string(x_560, x_553);
x_562 = lean_box(0);
x_563 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_563, 0, x_561);
lean_ctor_set(x_563, 1, x_562);
x_564 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_564, 0, x_563);
lean_ctor_set(x_564, 1, x_562);
lean_inc(x_451);
x_565 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_565, 0, x_451);
lean_ctor_set(x_565, 1, x_555);
lean_ctor_set(x_565, 2, x_558);
lean_ctor_set(x_565, 3, x_564);
x_566 = lean_mk_string("null");
x_567 = lean_name_mk_string(x_556, x_566);
x_568 = lean_mk_string("term[_]");
x_569 = lean_name_mk_string(x_556, x_568);
x_570 = lean_mk_string("[");
lean_inc(x_451);
x_571 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_571, 0, x_451);
lean_ctor_set(x_571, 1, x_570);
x_572 = lean_mk_string("paren");
lean_inc(x_550);
x_573 = lean_name_mk_string(x_550, x_572);
x_574 = lean_mk_string("(");
lean_inc(x_451);
x_575 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_575, 0, x_451);
lean_ctor_set(x_575, 1, x_574);
x_576 = lean_ctor_get(x_3, 0);
x_577 = lean_ctor_get(x_576, 0);
x_578 = l_Lean_Name_getString_x21(x_577);
x_579 = lean_box(2);
x_580 = l_Lean_Syntax_mkStrLit(x_578, x_579);
lean_dec(x_578);
x_581 = lean_mk_string("tupleTail");
x_582 = lean_name_mk_string(x_550, x_581);
x_583 = lean_mk_string(",");
lean_inc(x_451);
x_584 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_584, 0, x_451);
lean_ctor_set(x_584, 1, x_583);
x_585 = lean_mk_string("toJson");
x_586 = lean_string_utf8_byte_size(x_585);
lean_inc(x_585);
x_587 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_587, 0, x_585);
lean_ctor_set(x_587, 1, x_14);
lean_ctor_set(x_587, 2, x_586);
lean_inc(x_585);
x_588 = lean_name_mk_string(x_556, x_585);
x_589 = l_Lean_addMacroScope(x_545, x_588, x_454);
x_590 = lean_name_mk_string(x_2, x_585);
x_591 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_591, 0, x_590);
lean_ctor_set(x_591, 1, x_562);
x_592 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_592, 0, x_591);
lean_ctor_set(x_592, 1, x_562);
lean_inc(x_451);
x_593 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_593, 0, x_451);
lean_ctor_set(x_593, 1, x_587);
lean_ctor_set(x_593, 2, x_589);
lean_ctor_set(x_593, 3, x_592);
x_594 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_594);
x_595 = lean_array_push(x_594, x_449);
lean_inc(x_567);
x_596 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_596, 0, x_567);
lean_ctor_set(x_596, 1, x_595);
x_597 = lean_unsigned_to_nat(2u);
x_598 = lean_mk_empty_array_with_capacity(x_597);
lean_inc(x_598);
x_599 = lean_array_push(x_598, x_593);
x_600 = lean_array_push(x_599, x_596);
lean_inc(x_552);
x_601 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_601, 0, x_552);
lean_ctor_set(x_601, 1, x_600);
lean_inc(x_594);
x_602 = lean_array_push(x_594, x_601);
lean_inc(x_567);
x_603 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_603, 0, x_567);
lean_ctor_set(x_603, 1, x_602);
lean_inc(x_598);
x_604 = lean_array_push(x_598, x_584);
x_605 = lean_array_push(x_604, x_603);
x_606 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_606, 0, x_582);
lean_ctor_set(x_606, 1, x_605);
lean_inc(x_594);
x_607 = lean_array_push(x_594, x_606);
lean_inc(x_567);
x_608 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_608, 0, x_567);
lean_ctor_set(x_608, 1, x_607);
lean_inc(x_598);
x_609 = lean_array_push(x_598, x_580);
x_610 = lean_array_push(x_609, x_608);
lean_inc(x_567);
x_611 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_611, 0, x_567);
lean_ctor_set(x_611, 1, x_610);
x_612 = lean_mk_string(")");
lean_inc(x_451);
x_613 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_613, 0, x_451);
lean_ctor_set(x_613, 1, x_612);
x_614 = lean_unsigned_to_nat(3u);
x_615 = lean_mk_empty_array_with_capacity(x_614);
lean_inc(x_615);
x_616 = lean_array_push(x_615, x_575);
x_617 = lean_array_push(x_616, x_611);
x_618 = lean_array_push(x_617, x_613);
x_619 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_619, 0, x_573);
lean_ctor_set(x_619, 1, x_618);
lean_inc(x_594);
x_620 = lean_array_push(x_594, x_619);
lean_inc(x_567);
x_621 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_621, 0, x_567);
lean_ctor_set(x_621, 1, x_620);
x_622 = lean_mk_string("]");
x_623 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_623, 0, x_451);
lean_ctor_set(x_623, 1, x_622);
x_624 = lean_array_push(x_615, x_571);
x_625 = lean_array_push(x_624, x_621);
x_626 = lean_array_push(x_625, x_623);
x_627 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_627, 0, x_569);
lean_ctor_set(x_627, 1, x_626);
x_628 = lean_array_push(x_594, x_627);
x_629 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_629, 0, x_567);
lean_ctor_set(x_629, 1, x_628);
x_630 = lean_array_push(x_598, x_565);
x_631 = lean_array_push(x_630, x_629);
x_632 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_632, 0, x_552);
lean_ctor_set(x_632, 1, x_631);
x_633 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_633, 0, x_632);
lean_ctor_set(x_633, 1, x_546);
return x_633;
}
}
}
else
{
lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; uint8_t x_641; 
lean_dec(x_13);
lean_dec(x_4);
x_634 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_10, x_11, x_12);
x_635 = lean_ctor_get(x_634, 0);
lean_inc(x_635);
x_636 = lean_ctor_get(x_634, 1);
lean_inc(x_636);
lean_dec(x_634);
x_637 = l_Lean_Elab_Term_getCurrMacroScope(x_6, x_7, x_8, x_9, x_10, x_11, x_636);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_638 = lean_ctor_get(x_637, 0);
lean_inc(x_638);
x_639 = lean_ctor_get(x_637, 1);
lean_inc(x_639);
lean_dec(x_637);
x_640 = l_Lean_Elab_Term_getMainModule___rarg(x_11, x_639);
lean_dec(x_11);
x_641 = !lean_is_exclusive(x_640);
if (x_641 == 0)
{
lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; 
x_642 = lean_ctor_get(x_640, 0);
x_643 = lean_mk_string("Parser");
x_644 = lean_name_mk_string(x_1, x_643);
x_645 = lean_mk_string("Term");
x_646 = lean_name_mk_string(x_644, x_645);
x_647 = lean_mk_string("app");
x_648 = lean_name_mk_string(x_646, x_647);
x_649 = lean_mk_string("toJson");
x_650 = lean_string_utf8_byte_size(x_649);
lean_inc(x_649);
x_651 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_651, 0, x_649);
lean_ctor_set(x_651, 1, x_14);
lean_ctor_set(x_651, 2, x_650);
x_652 = lean_box(0);
lean_inc(x_649);
x_653 = lean_name_mk_string(x_652, x_649);
x_654 = l_Lean_addMacroScope(x_642, x_653, x_638);
x_655 = lean_name_mk_string(x_2, x_649);
x_656 = lean_box(0);
x_657 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_657, 0, x_655);
lean_ctor_set(x_657, 1, x_656);
x_658 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_658, 0, x_657);
lean_ctor_set(x_658, 1, x_656);
x_659 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_659, 0, x_635);
lean_ctor_set(x_659, 1, x_651);
lean_ctor_set(x_659, 2, x_654);
lean_ctor_set(x_659, 3, x_658);
x_660 = lean_mk_string("null");
x_661 = lean_name_mk_string(x_652, x_660);
x_662 = lean_ctor_get(x_3, 0);
x_663 = lean_ctor_get(x_662, 0);
x_664 = l_Lean_Name_getString_x21(x_663);
x_665 = lean_box(2);
x_666 = l_Lean_Syntax_mkStrLit(x_664, x_665);
lean_dec(x_664);
x_667 = lean_unsigned_to_nat(1u);
x_668 = lean_mk_empty_array_with_capacity(x_667);
x_669 = lean_array_push(x_668, x_666);
x_670 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_670, 0, x_661);
lean_ctor_set(x_670, 1, x_669);
x_671 = lean_unsigned_to_nat(2u);
x_672 = lean_mk_empty_array_with_capacity(x_671);
x_673 = lean_array_push(x_672, x_659);
x_674 = lean_array_push(x_673, x_670);
x_675 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_675, 0, x_648);
lean_ctor_set(x_675, 1, x_674);
lean_ctor_set(x_640, 0, x_675);
return x_640;
}
else
{
lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_705; lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; 
x_676 = lean_ctor_get(x_640, 0);
x_677 = lean_ctor_get(x_640, 1);
lean_inc(x_677);
lean_inc(x_676);
lean_dec(x_640);
x_678 = lean_mk_string("Parser");
x_679 = lean_name_mk_string(x_1, x_678);
x_680 = lean_mk_string("Term");
x_681 = lean_name_mk_string(x_679, x_680);
x_682 = lean_mk_string("app");
x_683 = lean_name_mk_string(x_681, x_682);
x_684 = lean_mk_string("toJson");
x_685 = lean_string_utf8_byte_size(x_684);
lean_inc(x_684);
x_686 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_686, 0, x_684);
lean_ctor_set(x_686, 1, x_14);
lean_ctor_set(x_686, 2, x_685);
x_687 = lean_box(0);
lean_inc(x_684);
x_688 = lean_name_mk_string(x_687, x_684);
x_689 = l_Lean_addMacroScope(x_676, x_688, x_638);
x_690 = lean_name_mk_string(x_2, x_684);
x_691 = lean_box(0);
x_692 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_692, 0, x_690);
lean_ctor_set(x_692, 1, x_691);
x_693 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_693, 0, x_692);
lean_ctor_set(x_693, 1, x_691);
x_694 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_694, 0, x_635);
lean_ctor_set(x_694, 1, x_686);
lean_ctor_set(x_694, 2, x_689);
lean_ctor_set(x_694, 3, x_693);
x_695 = lean_mk_string("null");
x_696 = lean_name_mk_string(x_687, x_695);
x_697 = lean_ctor_get(x_3, 0);
x_698 = lean_ctor_get(x_697, 0);
x_699 = l_Lean_Name_getString_x21(x_698);
x_700 = lean_box(2);
x_701 = l_Lean_Syntax_mkStrLit(x_699, x_700);
lean_dec(x_699);
x_702 = lean_unsigned_to_nat(1u);
x_703 = lean_mk_empty_array_with_capacity(x_702);
x_704 = lean_array_push(x_703, x_701);
x_705 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_705, 0, x_696);
lean_ctor_set(x_705, 1, x_704);
x_706 = lean_unsigned_to_nat(2u);
x_707 = lean_mk_empty_array_with_capacity(x_706);
x_708 = lean_array_push(x_707, x_694);
x_709 = lean_array_push(x_708, x_705);
x_710 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_710, 0, x_683);
lean_ctor_set(x_710, 1, x_709);
x_711 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_711, 0, x_710);
lean_ctor_set(x_711, 1, x_677);
return x_711;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_11 = lean_box(0);
x_12 = lean_mk_string("Lean");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_mk_string("ToJson");
lean_inc(x_13);
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_ctor_get(x_3, 0);
x_17 = l_Lean_instInhabitedInductiveVal;
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_array_get(x_17, x_16, x_18);
x_20 = lean_unsigned_to_nat(1u);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_15);
x_21 = l_Lean_Elab_Deriving_mkHeader___rarg(x_15, x_20, x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
lean_inc(x_22);
x_24 = l_Lean_Elab_Deriving_mkDiscrs(x_22, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
lean_inc(x_15);
lean_inc(x_13);
x_27 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__1___boxed), 12, 2);
lean_closure_set(x_27, 0, x_13);
lean_closure_set(x_27, 1, x_15);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_28 = l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts(x_1, x_27, x_4, x_5, x_6, x_7, x_8, x_9, x_26);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; size_t x_50; size_t x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; lean_object* x_149; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_8, x_9, x_30);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5, x_6, x_7, x_8, x_9, x_33);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_Elab_Term_getMainModule___rarg(x_9, x_35);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_mk_string("Parser");
x_39 = lean_name_mk_string(x_13, x_38);
x_40 = lean_mk_string("Term");
lean_inc(x_39);
x_41 = lean_name_mk_string(x_39, x_40);
x_42 = lean_mk_string("match");
lean_inc(x_42);
lean_inc(x_41);
x_43 = lean_name_mk_string(x_41, x_42);
lean_inc(x_32);
x_44 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_44, 0, x_32);
lean_ctor_set(x_44, 1, x_42);
x_45 = lean_mk_string("null");
x_46 = lean_name_mk_string(x_11, x_45);
x_47 = lean_mk_empty_array_with_capacity(x_18);
lean_inc(x_47);
lean_inc(x_46);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_array_get_size(x_25);
x_50 = lean_usize_of_nat(x_49);
lean_dec(x_49);
x_51 = 0;
x_52 = x_25;
x_53 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_50, x_51, x_52);
x_54 = x_53;
x_55 = lean_box(2);
x_56 = lean_mk_string(",");
x_57 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
x_58 = l_Lean_mkSepArray(x_54, x_57);
lean_dec(x_54);
lean_inc(x_47);
x_59 = l_Array_append___rarg(x_47, x_58);
lean_dec(x_58);
lean_inc(x_46);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_46);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_mk_string("with");
x_62 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_62, 0, x_32);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_mk_string("matchAlts");
x_64 = lean_name_mk_string(x_41, x_63);
lean_inc(x_47);
x_65 = l_Array_append___rarg(x_47, x_29);
lean_dec(x_29);
lean_inc(x_46);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_46);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_mk_empty_array_with_capacity(x_20);
lean_inc(x_67);
x_68 = lean_array_push(x_67, x_66);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_64);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_unsigned_to_nat(6u);
x_71 = lean_mk_empty_array_with_capacity(x_70);
lean_inc(x_71);
x_72 = lean_array_push(x_71, x_44);
lean_inc(x_48);
x_73 = lean_array_push(x_72, x_48);
x_74 = lean_array_push(x_73, x_60);
lean_inc(x_48);
x_75 = lean_array_push(x_74, x_48);
x_76 = lean_array_push(x_75, x_62);
x_77 = lean_array_push(x_76, x_69);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_43);
lean_ctor_set(x_78, 1, x_77);
x_79 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_8, x_9, x_37);
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5, x_6, x_7, x_8, x_9, x_81);
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
lean_dec(x_82);
x_84 = l_Lean_Elab_Term_getMainModule___rarg(x_9, x_83);
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
lean_dec(x_84);
x_86 = lean_mk_string("Command");
x_87 = lean_name_mk_string(x_39, x_86);
x_88 = lean_mk_string("declaration");
lean_inc(x_87);
x_89 = lean_name_mk_string(x_87, x_88);
x_90 = lean_mk_string("declModifiers");
lean_inc(x_87);
x_91 = lean_name_mk_string(x_87, x_90);
x_92 = lean_mk_string("private");
lean_inc(x_92);
lean_inc(x_87);
x_93 = lean_name_mk_string(x_87, x_92);
lean_inc(x_80);
x_94 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_94, 0, x_80);
lean_ctor_set(x_94, 1, x_92);
lean_inc(x_67);
x_95 = lean_array_push(x_67, x_94);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_93);
lean_ctor_set(x_96, 1, x_95);
lean_inc(x_67);
x_97 = lean_array_push(x_67, x_96);
lean_inc(x_46);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_46);
lean_ctor_set(x_98, 1, x_97);
lean_inc(x_48);
x_99 = lean_array_push(x_71, x_48);
lean_inc(x_48);
x_100 = lean_array_push(x_99, x_48);
x_101 = lean_array_push(x_100, x_98);
lean_inc(x_48);
x_102 = lean_array_push(x_101, x_48);
lean_inc(x_48);
x_103 = lean_array_push(x_102, x_48);
lean_inc(x_48);
x_104 = lean_array_push(x_103, x_48);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_91);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_mk_string("def");
lean_inc(x_106);
lean_inc(x_87);
x_107 = lean_name_mk_string(x_87, x_106);
lean_inc(x_80);
x_108 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_108, 0, x_80);
lean_ctor_set(x_108, 1, x_106);
x_109 = lean_mk_string("declId");
lean_inc(x_87);
x_110 = lean_name_mk_string(x_87, x_109);
x_111 = lean_ctor_get(x_3, 1);
x_112 = l_Lean_instInhabitedName;
x_113 = lean_array_get(x_112, x_111, x_18);
x_114 = lean_mk_syntax_ident(x_113);
x_115 = lean_unsigned_to_nat(2u);
x_116 = lean_mk_empty_array_with_capacity(x_115);
lean_inc(x_116);
x_117 = lean_array_push(x_116, x_114);
lean_inc(x_48);
x_118 = lean_array_push(x_117, x_48);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_110);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_mk_string("optDeclSig");
lean_inc(x_87);
x_121 = lean_name_mk_string(x_87, x_120);
x_122 = lean_ctor_get(x_22, 0);
lean_inc(x_122);
lean_dec(x_22);
x_123 = l_Array_append___rarg(x_47, x_122);
lean_dec(x_122);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_46);
lean_ctor_set(x_124, 1, x_123);
lean_inc(x_116);
x_125 = lean_array_push(x_116, x_124);
lean_inc(x_48);
x_126 = lean_array_push(x_125, x_48);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_121);
lean_ctor_set(x_127, 1, x_126);
x_128 = lean_mk_string("declValSimple");
x_129 = lean_name_mk_string(x_87, x_128);
x_130 = lean_mk_string(":=");
x_131 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_131, 0, x_80);
lean_ctor_set(x_131, 1, x_130);
x_132 = lean_unsigned_to_nat(3u);
x_133 = lean_mk_empty_array_with_capacity(x_132);
x_134 = lean_array_push(x_133, x_131);
x_135 = lean_array_push(x_134, x_78);
x_136 = lean_array_push(x_135, x_48);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_129);
lean_ctor_set(x_137, 1, x_136);
x_138 = lean_unsigned_to_nat(4u);
x_139 = lean_mk_empty_array_with_capacity(x_138);
x_140 = lean_array_push(x_139, x_108);
x_141 = lean_array_push(x_140, x_119);
x_142 = lean_array_push(x_141, x_127);
x_143 = lean_array_push(x_142, x_137);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_107);
lean_ctor_set(x_144, 1, x_143);
x_145 = lean_array_push(x_116, x_105);
x_146 = lean_array_push(x_145, x_144);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_89);
lean_ctor_set(x_147, 1, x_146);
x_148 = 1;
x_149 = l_Lean_Elab_Deriving_mkInstanceCmds(x_3, x_15, x_2, x_148, x_4, x_5, x_6, x_7, x_8, x_9, x_85);
if (lean_obj_tag(x_149) == 0)
{
uint8_t x_150; 
x_150 = !lean_is_exclusive(x_149);
if (x_150 == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_151 = lean_ctor_get(x_149, 0);
x_152 = lean_array_push(x_67, x_147);
x_153 = l_Array_append___rarg(x_152, x_151);
lean_dec(x_151);
lean_ctor_set(x_149, 0, x_153);
return x_149;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_154 = lean_ctor_get(x_149, 0);
x_155 = lean_ctor_get(x_149, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_149);
x_156 = lean_array_push(x_67, x_147);
x_157 = l_Array_append___rarg(x_156, x_154);
lean_dec(x_154);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_155);
return x_158;
}
}
else
{
uint8_t x_159; 
lean_dec(x_147);
lean_dec(x_67);
x_159 = !lean_is_exclusive(x_149);
if (x_159 == 0)
{
return x_149;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_149, 0);
x_161 = lean_ctor_get(x_149, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_149);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
return x_162;
}
}
}
else
{
uint8_t x_163; 
lean_dec(x_25);
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_163 = !lean_is_exclusive(x_28);
if (x_163 == 0)
{
return x_28;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_28, 0);
x_165 = lean_ctor_get(x_28, 1);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_28);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
return x_166;
}
}
}
else
{
uint8_t x_167; 
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_167 = !lean_is_exclusive(x_24);
if (x_167 == 0)
{
return x_24;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_24, 0);
x_169 = lean_ctor_get(x_24, 1);
lean_inc(x_169);
lean_inc(x_168);
lean_dec(x_24);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
return x_170;
}
}
}
else
{
uint8_t x_171; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_171 = !lean_is_exclusive(x_21);
if (x_171 == 0)
{
return x_21;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_172 = lean_ctor_get(x_21, 0);
x_173 = lean_ctor_get(x_21, 1);
lean_inc(x_173);
lean_inc(x_172);
lean_dec(x_21);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_173);
return x_174;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__3___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_11 = lean_box(0);
x_12 = lean_mk_string("Lean");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_mk_string("ToJson");
lean_inc(x_13);
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_ctor_get(x_3, 0);
x_17 = l_Lean_instInhabitedInductiveVal;
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_array_get(x_17, x_16, x_18);
x_20 = lean_unsigned_to_nat(1u);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_15);
x_21 = l_Lean_Elab_Deriving_mkHeader___rarg(x_15, x_20, x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; size_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_st_ref_get(x_9, x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
x_28 = 0;
x_29 = l_Lean_getStructureFieldsFlattened(x_27, x_1, x_28);
x_30 = lean_array_get_size(x_29);
x_31 = lean_usize_of_nat(x_30);
lean_dec(x_30);
x_32 = x_29;
x_33 = lean_box_usize(x_31);
x_34 = l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__3___boxed__const__1;
lean_inc(x_22);
lean_inc(x_15);
lean_inc(x_13);
x_35 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__5___boxed), 13, 6);
lean_closure_set(x_35, 0, x_13);
lean_closure_set(x_35, 1, x_15);
lean_closure_set(x_35, 2, x_22);
lean_closure_set(x_35, 3, x_33);
lean_closure_set(x_35, 4, x_34);
lean_closure_set(x_35, 5, x_32);
x_36 = x_35;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_37 = lean_apply_7(x_36, x_4, x_5, x_6, x_7, x_8, x_9, x_26);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; uint8_t x_174; lean_object* x_175; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_8, x_9, x_39);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5, x_6, x_7, x_8, x_9, x_42);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l_Lean_Elab_Term_getMainModule___rarg(x_9, x_45);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_mk_string("Parser");
lean_inc(x_13);
x_50 = lean_name_mk_string(x_13, x_49);
x_51 = lean_mk_string("Command");
lean_inc(x_50);
x_52 = lean_name_mk_string(x_50, x_51);
x_53 = lean_mk_string("declaration");
lean_inc(x_52);
x_54 = lean_name_mk_string(x_52, x_53);
x_55 = lean_mk_string("declModifiers");
lean_inc(x_52);
x_56 = lean_name_mk_string(x_52, x_55);
x_57 = lean_mk_string("null");
x_58 = lean_name_mk_string(x_11, x_57);
x_59 = lean_mk_empty_array_with_capacity(x_18);
lean_inc(x_59);
lean_inc(x_58);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_mk_string("private");
lean_inc(x_61);
lean_inc(x_52);
x_62 = lean_name_mk_string(x_52, x_61);
lean_inc(x_41);
x_63 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_63, 0, x_41);
lean_ctor_set(x_63, 1, x_61);
x_64 = lean_mk_empty_array_with_capacity(x_20);
lean_inc(x_64);
x_65 = lean_array_push(x_64, x_63);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_62);
lean_ctor_set(x_66, 1, x_65);
lean_inc(x_64);
x_67 = lean_array_push(x_64, x_66);
lean_inc(x_58);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_58);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_unsigned_to_nat(6u);
x_70 = lean_mk_empty_array_with_capacity(x_69);
lean_inc(x_60);
x_71 = lean_array_push(x_70, x_60);
lean_inc(x_60);
x_72 = lean_array_push(x_71, x_60);
x_73 = lean_array_push(x_72, x_68);
lean_inc(x_60);
x_74 = lean_array_push(x_73, x_60);
lean_inc(x_60);
x_75 = lean_array_push(x_74, x_60);
lean_inc(x_60);
x_76 = lean_array_push(x_75, x_60);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_56);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_mk_string("def");
lean_inc(x_78);
lean_inc(x_52);
x_79 = lean_name_mk_string(x_52, x_78);
lean_inc(x_41);
x_80 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_80, 0, x_41);
lean_ctor_set(x_80, 1, x_78);
x_81 = lean_mk_string("declId");
lean_inc(x_52);
x_82 = lean_name_mk_string(x_52, x_81);
x_83 = lean_ctor_get(x_3, 1);
x_84 = l_Lean_instInhabitedName;
x_85 = lean_array_get(x_84, x_83, x_18);
x_86 = lean_mk_syntax_ident(x_85);
x_87 = lean_unsigned_to_nat(2u);
x_88 = lean_mk_empty_array_with_capacity(x_87);
lean_inc(x_88);
x_89 = lean_array_push(x_88, x_86);
lean_inc(x_60);
x_90 = lean_array_push(x_89, x_60);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_82);
lean_ctor_set(x_91, 1, x_90);
x_92 = lean_mk_string("optDeclSig");
lean_inc(x_52);
x_93 = lean_name_mk_string(x_52, x_92);
x_94 = lean_ctor_get(x_22, 0);
lean_inc(x_94);
lean_dec(x_22);
lean_inc(x_59);
x_95 = l_Array_append___rarg(x_59, x_94);
lean_dec(x_94);
lean_inc(x_58);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_58);
lean_ctor_set(x_96, 1, x_95);
lean_inc(x_88);
x_97 = lean_array_push(x_88, x_96);
lean_inc(x_60);
x_98 = lean_array_push(x_97, x_60);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_93);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_mk_string("declValSimple");
x_101 = lean_name_mk_string(x_52, x_100);
x_102 = lean_mk_string(":=");
lean_inc(x_41);
x_103 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_103, 0, x_41);
lean_ctor_set(x_103, 1, x_102);
x_104 = lean_mk_string("term_<|_");
x_105 = lean_name_mk_string(x_11, x_104);
x_106 = lean_mk_string("mkObj");
x_107 = lean_string_utf8_byte_size(x_106);
lean_inc(x_106);
x_108 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_18);
lean_ctor_set(x_108, 2, x_107);
lean_inc(x_106);
x_109 = lean_name_mk_string(x_11, x_106);
lean_inc(x_44);
lean_inc(x_47);
x_110 = l_Lean_addMacroScope(x_47, x_109, x_44);
x_111 = lean_mk_string("Json");
x_112 = lean_name_mk_string(x_13, x_111);
x_113 = lean_name_mk_string(x_112, x_106);
x_114 = lean_box(0);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_114);
lean_inc(x_41);
x_117 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_117, 0, x_41);
lean_ctor_set(x_117, 1, x_108);
lean_ctor_set(x_117, 2, x_110);
lean_ctor_set(x_117, 3, x_116);
x_118 = lean_mk_string("<|");
lean_inc(x_41);
x_119 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_119, 0, x_41);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_mk_string("Term");
x_121 = lean_name_mk_string(x_50, x_120);
x_122 = lean_mk_string("app");
x_123 = lean_name_mk_string(x_121, x_122);
x_124 = lean_mk_string("List.join");
x_125 = lean_string_utf8_byte_size(x_124);
x_126 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_18);
lean_ctor_set(x_126, 2, x_125);
x_127 = lean_mk_string("List");
x_128 = lean_name_mk_string(x_11, x_127);
x_129 = lean_mk_string("join");
x_130 = lean_name_mk_string(x_128, x_129);
lean_inc(x_130);
x_131 = l_Lean_addMacroScope(x_47, x_130, x_44);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_114);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_114);
lean_inc(x_41);
x_134 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_134, 0, x_41);
lean_ctor_set(x_134, 1, x_126);
lean_ctor_set(x_134, 2, x_131);
lean_ctor_set(x_134, 3, x_133);
x_135 = lean_mk_string("term[_]");
x_136 = lean_name_mk_string(x_11, x_135);
x_137 = lean_mk_string("[");
lean_inc(x_41);
x_138 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_138, 0, x_41);
lean_ctor_set(x_138, 1, x_137);
x_139 = lean_mk_string(",");
x_140 = l_Lean_Syntax_SepArray_ofElems(x_139, x_38);
lean_dec(x_38);
x_141 = l_Array_append___rarg(x_59, x_140);
lean_dec(x_140);
lean_inc(x_58);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_58);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_mk_string("]");
x_144 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_144, 0, x_41);
lean_ctor_set(x_144, 1, x_143);
x_145 = lean_unsigned_to_nat(3u);
x_146 = lean_mk_empty_array_with_capacity(x_145);
lean_inc(x_146);
x_147 = lean_array_push(x_146, x_138);
x_148 = lean_array_push(x_147, x_142);
x_149 = lean_array_push(x_148, x_144);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_136);
lean_ctor_set(x_150, 1, x_149);
lean_inc(x_64);
x_151 = lean_array_push(x_64, x_150);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_58);
lean_ctor_set(x_152, 1, x_151);
lean_inc(x_88);
x_153 = lean_array_push(x_88, x_134);
x_154 = lean_array_push(x_153, x_152);
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_123);
lean_ctor_set(x_155, 1, x_154);
lean_inc(x_146);
x_156 = lean_array_push(x_146, x_117);
x_157 = lean_array_push(x_156, x_119);
x_158 = lean_array_push(x_157, x_155);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_105);
lean_ctor_set(x_159, 1, x_158);
x_160 = lean_array_push(x_146, x_103);
x_161 = lean_array_push(x_160, x_159);
x_162 = lean_array_push(x_161, x_60);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_101);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_unsigned_to_nat(4u);
x_165 = lean_mk_empty_array_with_capacity(x_164);
x_166 = lean_array_push(x_165, x_80);
x_167 = lean_array_push(x_166, x_91);
x_168 = lean_array_push(x_167, x_99);
x_169 = lean_array_push(x_168, x_163);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_79);
lean_ctor_set(x_170, 1, x_169);
x_171 = lean_array_push(x_88, x_77);
x_172 = lean_array_push(x_171, x_170);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_54);
lean_ctor_set(x_173, 1, x_172);
x_174 = 1;
x_175 = l_Lean_Elab_Deriving_mkInstanceCmds(x_3, x_15, x_2, x_174, x_4, x_5, x_6, x_7, x_8, x_9, x_48);
if (lean_obj_tag(x_175) == 0)
{
uint8_t x_176; 
x_176 = !lean_is_exclusive(x_175);
if (x_176 == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_177 = lean_ctor_get(x_175, 0);
x_178 = lean_array_push(x_64, x_173);
x_179 = l_Array_append___rarg(x_178, x_177);
lean_dec(x_177);
lean_ctor_set(x_175, 0, x_179);
return x_175;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_180 = lean_ctor_get(x_175, 0);
x_181 = lean_ctor_get(x_175, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_175);
x_182 = lean_array_push(x_64, x_173);
x_183 = l_Array_append___rarg(x_182, x_180);
lean_dec(x_180);
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_181);
return x_184;
}
}
else
{
uint8_t x_185; 
lean_dec(x_173);
lean_dec(x_64);
x_185 = !lean_is_exclusive(x_175);
if (x_185 == 0)
{
return x_175;
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_186 = lean_ctor_get(x_175, 0);
x_187 = lean_ctor_get(x_175, 1);
lean_inc(x_187);
lean_inc(x_186);
lean_dec(x_175);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_186);
lean_ctor_set(x_188, 1, x_187);
return x_188;
}
}
}
else
{
uint8_t x_189; 
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_189 = !lean_is_exclusive(x_37);
if (x_189 == 0)
{
return x_37;
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_190 = lean_ctor_get(x_37, 0);
x_191 = lean_ctor_get(x_37, 1);
lean_inc(x_191);
lean_inc(x_190);
lean_dec(x_37);
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_190);
lean_ctor_set(x_192, 1, x_191);
return x_192;
}
}
}
else
{
uint8_t x_193; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_193 = !lean_is_exclusive(x_21);
if (x_193 == 0)
{
return x_21;
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_194 = lean_ctor_get(x_21, 0);
x_195 = lean_ctor_get(x_21, 1);
lean_inc(x_195);
lean_inc(x_194);
lean_dec(x_21);
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_194);
lean_ctor_set(x_196, 1, x_195);
return x_196;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_array_get_size(x_1);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_dec_eq(x_5, x_6);
lean_dec(x_5);
if (x_7 == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = 0;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_11 = lean_st_ref_get(x_3, x_4);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_instInhabitedName;
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_get(x_15, x_1, x_16);
lean_inc(x_17);
x_18 = l_Lean_isStructure(x_14, x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_inc(x_2);
lean_inc(x_17);
x_19 = l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__1(x_17, x_2, x_3, x_13);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_box(0);
x_23 = lean_mk_string("toJson");
x_24 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_mkContext___boxed), 9, 2);
lean_closure_set(x_24, 0, x_23);
lean_closure_set(x_24, 1, x_17);
x_25 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__2___boxed), 10, 2);
lean_closure_set(x_25, 0, x_20);
lean_closure_set(x_25, 1, x_1);
x_26 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_26, 0, x_24);
lean_closure_set(x_26, 1, x_25);
lean_inc(x_2);
x_27 = l_Lean_Elab_Command_liftTermElabM___rarg(x_22, x_26, x_2, x_3, x_21);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_27, 1);
x_31 = lean_array_get_size(x_29);
x_32 = lean_nat_dec_lt(x_16, x_31);
if (x_32 == 0)
{
uint8_t x_33; lean_object* x_34; 
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_3);
lean_dec(x_2);
x_33 = 1;
x_34 = lean_box(x_33);
lean_ctor_set(x_27, 0, x_34);
return x_27;
}
else
{
uint8_t x_35; 
x_35 = lean_nat_dec_le(x_31, x_31);
if (x_35 == 0)
{
uint8_t x_36; lean_object* x_37; 
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_3);
lean_dec(x_2);
x_36 = 1;
x_37 = lean_box(x_36);
lean_ctor_set(x_27, 0, x_37);
return x_27;
}
else
{
size_t x_38; size_t x_39; lean_object* x_40; lean_object* x_41; 
lean_free_object(x_27);
x_38 = 0;
x_39 = lean_usize_of_nat(x_31);
lean_dec(x_31);
x_40 = lean_box(0);
x_41 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(x_29, x_38, x_39, x_40, x_2, x_3, x_30);
lean_dec(x_2);
lean_dec(x_29);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_41, 0);
lean_dec(x_43);
x_44 = 1;
x_45 = lean_box(x_44);
lean_ctor_set(x_41, 0, x_45);
return x_41;
}
else
{
lean_object* x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; 
x_46 = lean_ctor_get(x_41, 1);
lean_inc(x_46);
lean_dec(x_41);
x_47 = 1;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_46);
return x_49;
}
}
else
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_41);
if (x_50 == 0)
{
return x_41;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_41, 0);
x_52 = lean_ctor_get(x_41, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_41);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_54 = lean_ctor_get(x_27, 0);
x_55 = lean_ctor_get(x_27, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_27);
x_56 = lean_array_get_size(x_54);
x_57 = lean_nat_dec_lt(x_16, x_56);
if (x_57 == 0)
{
uint8_t x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_56);
lean_dec(x_54);
lean_dec(x_3);
lean_dec(x_2);
x_58 = 1;
x_59 = lean_box(x_58);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_55);
return x_60;
}
else
{
uint8_t x_61; 
x_61 = lean_nat_dec_le(x_56, x_56);
if (x_61 == 0)
{
uint8_t x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_56);
lean_dec(x_54);
lean_dec(x_3);
lean_dec(x_2);
x_62 = 1;
x_63 = lean_box(x_62);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_55);
return x_64;
}
else
{
size_t x_65; size_t x_66; lean_object* x_67; lean_object* x_68; 
x_65 = 0;
x_66 = lean_usize_of_nat(x_56);
lean_dec(x_56);
x_67 = lean_box(0);
x_68 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(x_54, x_65, x_66, x_67, x_2, x_3, x_55);
lean_dec(x_2);
lean_dec(x_54);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; 
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_70 = x_68;
} else {
 lean_dec_ref(x_68);
 x_70 = lean_box(0);
}
x_71 = 1;
x_72 = lean_box(x_71);
if (lean_is_scalar(x_70)) {
 x_73 = lean_alloc_ctor(0, 2, 0);
} else {
 x_73 = x_70;
}
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_69);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
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
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_3);
lean_dec(x_2);
x_78 = !lean_is_exclusive(x_27);
if (x_78 == 0)
{
return x_27;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_27, 0);
x_80 = lean_ctor_get(x_27, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_27);
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
lean_dec(x_17);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_82 = !lean_is_exclusive(x_19);
if (x_82 == 0)
{
return x_19;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_19, 0);
x_84 = lean_ctor_get(x_19, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_19);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_86 = lean_box(0);
x_87 = lean_mk_string("toJson");
lean_inc(x_17);
x_88 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_mkContext___boxed), 9, 2);
lean_closure_set(x_88, 0, x_87);
lean_closure_set(x_88, 1, x_17);
x_89 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__3___boxed), 10, 2);
lean_closure_set(x_89, 0, x_17);
lean_closure_set(x_89, 1, x_1);
x_90 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_90, 0, x_88);
lean_closure_set(x_90, 1, x_89);
lean_inc(x_2);
x_91 = l_Lean_Elab_Command_liftTermElabM___rarg(x_86, x_90, x_2, x_3, x_13);
if (lean_obj_tag(x_91) == 0)
{
uint8_t x_92; 
x_92 = !lean_is_exclusive(x_91);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; 
x_93 = lean_ctor_get(x_91, 0);
x_94 = lean_ctor_get(x_91, 1);
x_95 = lean_array_get_size(x_93);
x_96 = lean_nat_dec_lt(x_16, x_95);
if (x_96 == 0)
{
uint8_t x_97; lean_object* x_98; 
lean_dec(x_95);
lean_dec(x_93);
lean_dec(x_3);
lean_dec(x_2);
x_97 = 1;
x_98 = lean_box(x_97);
lean_ctor_set(x_91, 0, x_98);
return x_91;
}
else
{
uint8_t x_99; 
x_99 = lean_nat_dec_le(x_95, x_95);
if (x_99 == 0)
{
uint8_t x_100; lean_object* x_101; 
lean_dec(x_95);
lean_dec(x_93);
lean_dec(x_3);
lean_dec(x_2);
x_100 = 1;
x_101 = lean_box(x_100);
lean_ctor_set(x_91, 0, x_101);
return x_91;
}
else
{
size_t x_102; size_t x_103; lean_object* x_104; lean_object* x_105; 
lean_free_object(x_91);
x_102 = 0;
x_103 = lean_usize_of_nat(x_95);
lean_dec(x_95);
x_104 = lean_box(0);
x_105 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(x_93, x_102, x_103, x_104, x_2, x_3, x_94);
lean_dec(x_2);
lean_dec(x_93);
if (lean_obj_tag(x_105) == 0)
{
uint8_t x_106; 
x_106 = !lean_is_exclusive(x_105);
if (x_106 == 0)
{
lean_object* x_107; uint8_t x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_105, 0);
lean_dec(x_107);
x_108 = 1;
x_109 = lean_box(x_108);
lean_ctor_set(x_105, 0, x_109);
return x_105;
}
else
{
lean_object* x_110; uint8_t x_111; lean_object* x_112; lean_object* x_113; 
x_110 = lean_ctor_get(x_105, 1);
lean_inc(x_110);
lean_dec(x_105);
x_111 = 1;
x_112 = lean_box(x_111);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_110);
return x_113;
}
}
else
{
uint8_t x_114; 
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
}
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; 
x_118 = lean_ctor_get(x_91, 0);
x_119 = lean_ctor_get(x_91, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_91);
x_120 = lean_array_get_size(x_118);
x_121 = lean_nat_dec_lt(x_16, x_120);
if (x_121 == 0)
{
uint8_t x_122; lean_object* x_123; lean_object* x_124; 
lean_dec(x_120);
lean_dec(x_118);
lean_dec(x_3);
lean_dec(x_2);
x_122 = 1;
x_123 = lean_box(x_122);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_119);
return x_124;
}
else
{
uint8_t x_125; 
x_125 = lean_nat_dec_le(x_120, x_120);
if (x_125 == 0)
{
uint8_t x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_120);
lean_dec(x_118);
lean_dec(x_3);
lean_dec(x_2);
x_126 = 1;
x_127 = lean_box(x_126);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_119);
return x_128;
}
else
{
size_t x_129; size_t x_130; lean_object* x_131; lean_object* x_132; 
x_129 = 0;
x_130 = lean_usize_of_nat(x_120);
lean_dec(x_120);
x_131 = lean_box(0);
x_132 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(x_118, x_129, x_130, x_131, x_2, x_3, x_119);
lean_dec(x_2);
lean_dec(x_118);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; lean_object* x_134; uint8_t x_135; lean_object* x_136; lean_object* x_137; 
x_133 = lean_ctor_get(x_132, 1);
lean_inc(x_133);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_134 = x_132;
} else {
 lean_dec_ref(x_132);
 x_134 = lean_box(0);
}
x_135 = 1;
x_136 = lean_box(x_135);
if (lean_is_scalar(x_134)) {
 x_137 = lean_alloc_ctor(0, 2, 0);
} else {
 x_137 = x_134;
}
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_133);
return x_137;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_138 = lean_ctor_get(x_132, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_132, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_140 = x_132;
} else {
 lean_dec_ref(x_132);
 x_140 = lean_box(0);
}
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_138);
lean_ctor_set(x_141, 1, x_139);
return x_141;
}
}
}
}
}
else
{
uint8_t x_142; 
lean_dec(x_3);
lean_dec(x_2);
x_142 = !lean_is_exclusive(x_91);
if (x_142 == 0)
{
return x_91;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_143 = lean_ctor_get(x_91, 0);
x_144 = lean_ctor_get(x_91, 1);
lean_inc(x_144);
lean_inc(x_143);
lean_dec(x_91);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_144);
return x_145;
}
}
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwError___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__3(x_1, x_2, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_15;
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_Array_mapIdxM_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_17;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_15 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_16 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__5(x_1, x_2, x_3, x_14, x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
return x_16;
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_3);
return x_13;
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts_match__3___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
x_12 = l_Lean_Meta_inferType(x_1, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_box(0);
x_15 = lean_mk_string("a");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_16, x_9, x_10, x_13);
lean_dec(x_10);
lean_dec(x_9);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_mk_syntax_ident(x_19);
x_21 = lean_array_push(x_3, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_2);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_17, 0, x_23);
return x_17;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_24 = lean_ctor_get(x_17, 0);
x_25 = lean_ctor_get(x_17, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_17);
x_26 = lean_mk_syntax_ident(x_24);
x_27 = lean_array_push(x_3, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_25);
return x_30;
}
}
else
{
uint8_t x_31; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_12);
if (x_31 == 0)
{
return x_12;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_12, 0);
x_33 = lean_ctor_get(x_12, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_12);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
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
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_4, x_18);
lean_dec(x_4);
x_20 = lean_ctor_get(x_6, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_6, 1);
lean_inc(x_21);
lean_dec(x_6);
x_22 = lean_ctor_get(x_1, 1);
x_23 = lean_nat_add(x_22, x_5);
x_24 = l_Lean_instInhabitedExpr;
x_25 = lean_array_get(x_24, x_2, x_23);
lean_dec(x_23);
x_26 = l_Lean_Expr_fvarId_x21(x_25);
lean_inc(x_9);
x_27 = l_Lean_Meta_getLocalDecl(x_26, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_LocalDecl_userName(x_28);
lean_dec(x_28);
x_31 = l_Lean_Name_hasMacroScopes(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_array_push(x_20, x_30);
x_33 = lean_box(0);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_34 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__1___lambda__1(x_25, x_32, x_21, x_33, x_7, x_8, x_9, x_10, x_11, x_12, x_29);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
if (lean_obj_tag(x_35) == 0)
{
uint8_t x_36; 
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
x_36 = !lean_is_exclusive(x_34);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_34, 0);
lean_dec(x_37);
x_38 = lean_ctor_get(x_35, 0);
lean_inc(x_38);
lean_dec(x_35);
lean_ctor_set(x_34, 0, x_38);
return x_34;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_34, 1);
lean_inc(x_39);
lean_dec(x_34);
x_40 = lean_ctor_get(x_35, 0);
lean_inc(x_40);
lean_dec(x_35);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_42 = lean_ctor_get(x_34, 1);
lean_inc(x_42);
lean_dec(x_34);
x_43 = lean_ctor_get(x_35, 0);
lean_inc(x_43);
lean_dec(x_35);
x_44 = lean_ctor_get(x_3, 2);
x_45 = lean_nat_add(x_5, x_44);
lean_dec(x_5);
x_4 = x_19;
x_5 = x_45;
x_6 = x_43;
x_13 = x_42;
goto _start;
}
}
else
{
uint8_t x_47; 
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
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
lean_object* x_51; lean_object* x_52; 
lean_dec(x_30);
x_51 = lean_box(0);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_52 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__1___lambda__1(x_25, x_20, x_21, x_51, x_7, x_8, x_9, x_10, x_11, x_12, x_29);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
if (lean_obj_tag(x_53) == 0)
{
uint8_t x_54; 
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
x_54 = !lean_is_exclusive(x_52);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_52, 0);
lean_dec(x_55);
x_56 = lean_ctor_get(x_53, 0);
lean_inc(x_56);
lean_dec(x_53);
lean_ctor_set(x_52, 0, x_56);
return x_52;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_52, 1);
lean_inc(x_57);
lean_dec(x_52);
x_58 = lean_ctor_get(x_53, 0);
lean_inc(x_58);
lean_dec(x_53);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_60 = lean_ctor_get(x_52, 1);
lean_inc(x_60);
lean_dec(x_52);
x_61 = lean_ctor_get(x_53, 0);
lean_inc(x_61);
lean_dec(x_53);
x_62 = lean_ctor_get(x_3, 2);
x_63 = lean_nat_add(x_5, x_62);
lean_dec(x_5);
x_4 = x_19;
x_5 = x_63;
x_6 = x_61;
x_13 = x_60;
goto _start;
}
}
else
{
uint8_t x_65; 
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
x_65 = !lean_is_exclusive(x_52);
if (x_65 == 0)
{
return x_52;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_52, 0);
x_67 = lean_ctor_get(x_52, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_52);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_25);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
x_69 = !lean_is_exclusive(x_27);
if (x_69 == 0)
{
return x_27;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_27, 0);
x_71 = lean_ctor_get(x_27, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_27);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
lean_object* x_73; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_6);
lean_ctor_set(x_73, 1, x_13);
return x_73;
}
}
else
{
lean_object* x_74; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_6);
lean_ctor_set(x_74, 1, x_13);
return x_74;
}
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_eq(x_3, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_3, x_16);
lean_dec(x_3);
x_18 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_13);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_box(0);
x_28 = lean_mk_string("Lean");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Parser");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("Term");
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("arrayRef");
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = lean_mk_string("jsons");
x_37 = lean_string_utf8_byte_size(x_36);
lean_inc(x_36);
x_38 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_14);
lean_ctor_set(x_38, 2, x_37);
x_39 = lean_name_mk_string(x_27, x_36);
x_40 = l_Lean_addMacroScope(x_25, x_39, x_22);
x_41 = lean_box(0);
lean_inc(x_19);
x_42 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_42, 0, x_19);
lean_ctor_set(x_42, 1, x_38);
lean_ctor_set(x_42, 2, x_40);
lean_ctor_set(x_42, 3, x_41);
x_43 = lean_mk_string("[");
lean_inc(x_19);
x_44 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_44, 0, x_19);
lean_ctor_set(x_44, 1, x_43);
lean_inc(x_4);
x_45 = l_Nat_repr(x_4);
x_46 = l_Lean_numLitKind;
x_47 = lean_box(2);
x_48 = l_Lean_Syntax_mkLit(x_46, x_45, x_47);
x_49 = lean_mk_string("]");
x_50 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_50, 0, x_19);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_unsigned_to_nat(4u);
x_52 = lean_mk_empty_array_with_capacity(x_51);
x_53 = lean_array_push(x_52, x_42);
x_54 = lean_array_push(x_53, x_44);
x_55 = lean_array_push(x_54, x_48);
x_56 = lean_array_push(x_55, x_50);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_35);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_nat_add(x_4, x_16);
lean_dec(x_4);
x_59 = lean_array_push(x_6, x_57);
x_3 = x_17;
x_4 = x_58;
x_5 = lean_box(0);
x_6 = x_59;
x_13 = x_26;
goto _start;
}
else
{
lean_object* x_61; 
lean_dec(x_4);
lean_dec(x_3);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_6);
lean_ctor_set(x_61, 1, x_13);
return x_61;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, size_t x_15, size_t x_16, lean_object* x_17) {
_start:
{
uint8_t x_18; 
x_18 = x_16 < x_15;
if (x_18 == 0)
{
lean_object* x_19; 
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
lean_dec(x_2);
lean_dec(x_1);
x_19 = x_17;
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; uint8_t x_26; 
x_20 = lean_array_uget(x_17, x_16);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_array_uset(x_17, x_16, x_21);
x_23 = x_20;
x_24 = 1;
x_25 = x_16 + x_24;
x_26 = !lean_is_exclusive(x_23);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_27 = lean_ctor_get(x_23, 0);
x_28 = lean_ctor_get(x_23, 1);
x_29 = lean_mk_string("doSeqItem");
lean_inc(x_5);
x_30 = lean_name_mk_string(x_5, x_29);
x_31 = lean_mk_string("doLetArrow");
lean_inc(x_5);
x_32 = lean_name_mk_string(x_5, x_31);
x_33 = lean_mk_string("let");
lean_inc(x_1);
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_1);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_mk_string("doIdDecl");
lean_inc(x_5);
x_36 = lean_name_mk_string(x_5, x_35);
x_37 = lean_mk_string("←");
lean_inc(x_1);
x_38 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_38, 0, x_1);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_mk_string("doExpr");
lean_inc(x_5);
x_40 = lean_name_mk_string(x_5, x_39);
x_41 = lean_mk_string("fromJson?");
x_42 = lean_string_utf8_byte_size(x_41);
lean_inc(x_41);
x_43 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_21);
lean_ctor_set(x_43, 2, x_42);
x_44 = lean_box(0);
lean_inc(x_41);
x_45 = lean_name_mk_string(x_44, x_41);
lean_inc(x_2);
lean_inc(x_3);
x_46 = l_Lean_addMacroScope(x_3, x_45, x_2);
x_47 = lean_mk_string("FromJson");
lean_inc(x_4);
x_48 = lean_name_mk_string(x_4, x_47);
x_49 = lean_name_mk_string(x_48, x_41);
lean_inc(x_8);
lean_ctor_set(x_23, 1, x_8);
lean_ctor_set(x_23, 0, x_49);
lean_inc(x_9);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_23);
lean_ctor_set(x_50, 1, x_9);
lean_inc(x_1);
x_51 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_51, 0, x_1);
lean_ctor_set(x_51, 1, x_43);
lean_ctor_set(x_51, 2, x_46);
lean_ctor_set(x_51, 3, x_50);
lean_inc(x_14);
x_52 = lean_array_push(x_14, x_28);
lean_inc(x_7);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_7);
lean_ctor_set(x_53, 1, x_52);
lean_inc(x_11);
x_54 = lean_array_push(x_11, x_51);
x_55 = lean_array_push(x_54, x_53);
lean_inc(x_6);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_6);
lean_ctor_set(x_56, 1, x_55);
lean_inc(x_14);
x_57 = lean_array_push(x_14, x_56);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_40);
lean_ctor_set(x_58, 1, x_57);
lean_inc(x_10);
x_59 = lean_array_push(x_10, x_27);
lean_inc(x_12);
x_60 = lean_array_push(x_59, x_12);
x_61 = lean_array_push(x_60, x_38);
x_62 = lean_array_push(x_61, x_58);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_36);
lean_ctor_set(x_63, 1, x_62);
lean_inc(x_13);
x_64 = lean_array_push(x_13, x_34);
lean_inc(x_12);
x_65 = lean_array_push(x_64, x_12);
x_66 = lean_array_push(x_65, x_63);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_32);
lean_ctor_set(x_67, 1, x_66);
lean_inc(x_11);
x_68 = lean_array_push(x_11, x_67);
lean_inc(x_12);
x_69 = lean_array_push(x_68, x_12);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_30);
lean_ctor_set(x_70, 1, x_69);
x_71 = x_70;
x_72 = lean_array_uset(x_22, x_16, x_71);
x_16 = x_25;
x_17 = x_72;
goto _start;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_74 = lean_ctor_get(x_23, 0);
x_75 = lean_ctor_get(x_23, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_23);
x_76 = lean_mk_string("doSeqItem");
lean_inc(x_5);
x_77 = lean_name_mk_string(x_5, x_76);
x_78 = lean_mk_string("doLetArrow");
lean_inc(x_5);
x_79 = lean_name_mk_string(x_5, x_78);
x_80 = lean_mk_string("let");
lean_inc(x_1);
x_81 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_81, 0, x_1);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_mk_string("doIdDecl");
lean_inc(x_5);
x_83 = lean_name_mk_string(x_5, x_82);
x_84 = lean_mk_string("←");
lean_inc(x_1);
x_85 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_85, 0, x_1);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_mk_string("doExpr");
lean_inc(x_5);
x_87 = lean_name_mk_string(x_5, x_86);
x_88 = lean_mk_string("fromJson?");
x_89 = lean_string_utf8_byte_size(x_88);
lean_inc(x_88);
x_90 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_21);
lean_ctor_set(x_90, 2, x_89);
x_91 = lean_box(0);
lean_inc(x_88);
x_92 = lean_name_mk_string(x_91, x_88);
lean_inc(x_2);
lean_inc(x_3);
x_93 = l_Lean_addMacroScope(x_3, x_92, x_2);
x_94 = lean_mk_string("FromJson");
lean_inc(x_4);
x_95 = lean_name_mk_string(x_4, x_94);
x_96 = lean_name_mk_string(x_95, x_88);
lean_inc(x_8);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_8);
lean_inc(x_9);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_9);
lean_inc(x_1);
x_99 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_99, 0, x_1);
lean_ctor_set(x_99, 1, x_90);
lean_ctor_set(x_99, 2, x_93);
lean_ctor_set(x_99, 3, x_98);
lean_inc(x_14);
x_100 = lean_array_push(x_14, x_75);
lean_inc(x_7);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_7);
lean_ctor_set(x_101, 1, x_100);
lean_inc(x_11);
x_102 = lean_array_push(x_11, x_99);
x_103 = lean_array_push(x_102, x_101);
lean_inc(x_6);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_6);
lean_ctor_set(x_104, 1, x_103);
lean_inc(x_14);
x_105 = lean_array_push(x_14, x_104);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_87);
lean_ctor_set(x_106, 1, x_105);
lean_inc(x_10);
x_107 = lean_array_push(x_10, x_74);
lean_inc(x_12);
x_108 = lean_array_push(x_107, x_12);
x_109 = lean_array_push(x_108, x_85);
x_110 = lean_array_push(x_109, x_106);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_83);
lean_ctor_set(x_111, 1, x_110);
lean_inc(x_13);
x_112 = lean_array_push(x_13, x_81);
lean_inc(x_12);
x_113 = lean_array_push(x_112, x_12);
x_114 = lean_array_push(x_113, x_111);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_79);
lean_ctor_set(x_115, 1, x_114);
lean_inc(x_11);
x_116 = lean_array_push(x_11, x_115);
lean_inc(x_12);
x_117 = lean_array_push(x_116, x_12);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_77);
lean_ctor_set(x_118, 1, x_117);
x_119 = x_118;
x_120 = lean_array_uset(x_22, x_16, x_119);
x_16 = x_25;
x_17 = x_120;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__4(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
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
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
lean_inc(x_11);
lean_inc(x_2);
x_12 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_2, x_11);
x_13 = 1;
x_14 = x_4 + x_13;
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = l___private_Init_Meta_0__Lean_quoteNameMk(x_11);
x_16 = x_15;
x_17 = lean_array_uset(x_10, x_4, x_16);
x_4 = x_14;
x_5 = x_17;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_11);
x_19 = lean_ctor_get(x_12, 0);
lean_inc(x_19);
lean_dec(x_12);
x_20 = lean_mk_string("quotedName");
lean_inc(x_1);
x_21 = lean_name_mk_string(x_1, x_20);
x_22 = lean_mk_string(".");
x_23 = l_String_intercalate(x_22, x_19);
x_24 = lean_mk_string("`");
x_25 = lean_string_append(x_24, x_23);
lean_dec(x_23);
x_26 = l_Lean_nameLitKind;
x_27 = lean_box(2);
x_28 = l_Lean_Syntax_mkLit(x_26, x_25, x_27);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_mk_empty_array_with_capacity(x_29);
x_31 = lean_array_push(x_30, x_28);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_21);
lean_ctor_set(x_32, 1, x_31);
x_33 = x_32;
x_34 = lean_array_uset(x_10, x_4, x_33);
x_4 = x_14;
x_5 = x_34;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_13);
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
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; size_t x_142; size_t x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_box(0);
x_24 = lean_mk_string("Lean");
lean_inc(x_24);
x_25 = lean_name_mk_string(x_23, x_24);
x_26 = lean_mk_string("Parser");
lean_inc(x_25);
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("Term");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("app");
lean_inc(x_29);
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("proj");
lean_inc(x_29);
x_33 = lean_name_mk_string(x_29, x_32);
x_34 = lean_mk_string("paren");
lean_inc(x_29);
x_35 = lean_name_mk_string(x_29, x_34);
x_36 = lean_mk_string("(");
lean_inc(x_15);
x_37 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_37, 0, x_15);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_mk_string("null");
x_39 = lean_name_mk_string(x_23, x_38);
x_40 = lean_mk_string("parseTagged");
x_41 = lean_string_utf8_byte_size(x_40);
x_42 = lean_unsigned_to_nat(0u);
lean_inc(x_40);
x_43 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_42);
lean_ctor_set(x_43, 2, x_41);
lean_inc(x_40);
x_44 = lean_name_mk_string(x_23, x_40);
lean_inc(x_18);
lean_inc(x_22);
x_45 = l_Lean_addMacroScope(x_22, x_44, x_18);
x_46 = lean_mk_string("_private");
x_47 = lean_name_mk_string(x_23, x_46);
lean_inc(x_24);
x_48 = lean_name_mk_string(x_47, x_24);
x_49 = lean_mk_string("Elab");
lean_inc(x_49);
x_50 = lean_name_mk_string(x_48, x_49);
x_51 = lean_mk_string("Deriving");
lean_inc(x_51);
x_52 = lean_name_mk_string(x_50, x_51);
x_53 = lean_mk_string("FromToJson");
lean_inc(x_53);
x_54 = lean_name_mk_string(x_52, x_53);
x_55 = lean_name_mk_numeral(x_54, x_42);
x_56 = lean_name_mk_string(x_55, x_24);
x_57 = lean_name_mk_string(x_56, x_49);
x_58 = lean_name_mk_string(x_57, x_51);
x_59 = lean_name_mk_string(x_58, x_53);
x_60 = lean_name_mk_string(x_59, x_40);
x_61 = lean_box(0);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
lean_inc(x_15);
x_64 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_64, 0, x_15);
lean_ctor_set(x_64, 1, x_43);
lean_ctor_set(x_64, 2, x_45);
lean_ctor_set(x_64, 3, x_63);
x_65 = lean_mk_string("json");
x_66 = lean_string_utf8_byte_size(x_65);
lean_inc(x_65);
x_67 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_42);
lean_ctor_set(x_67, 2, x_66);
x_68 = lean_name_mk_string(x_23, x_65);
lean_inc(x_18);
lean_inc(x_22);
x_69 = l_Lean_addMacroScope(x_22, x_68, x_18);
lean_inc(x_15);
x_70 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_70, 0, x_15);
lean_ctor_set(x_70, 1, x_67);
lean_ctor_set(x_70, 2, x_69);
lean_ctor_set(x_70, 3, x_61);
x_71 = l_Lean_Name_getString_x21(x_1);
x_72 = lean_box(2);
x_73 = l_Lean_Syntax_mkStrLit(x_71, x_72);
lean_dec(x_71);
lean_inc(x_2);
x_74 = l_Nat_repr(x_2);
x_75 = l_Lean_numLitKind;
x_76 = l_Lean_Syntax_mkLit(x_75, x_74, x_72);
x_77 = lean_unsigned_to_nat(4u);
x_78 = lean_mk_empty_array_with_capacity(x_77);
lean_inc(x_78);
x_79 = lean_array_push(x_78, x_70);
x_80 = lean_array_push(x_79, x_73);
x_81 = lean_array_push(x_80, x_76);
x_82 = lean_array_push(x_81, x_6);
lean_inc(x_39);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_39);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_unsigned_to_nat(2u);
x_85 = lean_mk_empty_array_with_capacity(x_84);
lean_inc(x_85);
x_86 = lean_array_push(x_85, x_64);
x_87 = lean_array_push(x_86, x_83);
lean_inc(x_31);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_31);
lean_ctor_set(x_88, 1, x_87);
lean_inc(x_3);
lean_inc(x_39);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_39);
lean_ctor_set(x_89, 1, x_3);
lean_inc(x_85);
x_90 = lean_array_push(x_85, x_88);
lean_inc(x_89);
x_91 = lean_array_push(x_90, x_89);
lean_inc(x_39);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_39);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_mk_string(")");
lean_inc(x_15);
x_94 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_94, 0, x_15);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_unsigned_to_nat(3u);
x_96 = lean_mk_empty_array_with_capacity(x_95);
lean_inc(x_96);
x_97 = lean_array_push(x_96, x_37);
lean_inc(x_97);
x_98 = lean_array_push(x_97, x_92);
lean_inc(x_94);
x_99 = lean_array_push(x_98, x_94);
lean_inc(x_35);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_35);
lean_ctor_set(x_100, 1, x_99);
x_101 = lean_mk_string(".");
lean_inc(x_15);
x_102 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_102, 0, x_15);
lean_ctor_set(x_102, 1, x_101);
x_103 = lean_mk_string("bind");
x_104 = lean_string_utf8_byte_size(x_103);
lean_inc(x_103);
x_105 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_42);
lean_ctor_set(x_105, 2, x_104);
lean_inc(x_103);
x_106 = lean_name_mk_string(x_23, x_103);
lean_inc(x_18);
lean_inc(x_22);
x_107 = l_Lean_addMacroScope(x_22, x_106, x_18);
x_108 = lean_mk_string("Bind");
x_109 = lean_name_mk_string(x_23, x_108);
x_110 = lean_name_mk_string(x_109, x_103);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_61);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_61);
lean_inc(x_15);
x_113 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_113, 0, x_15);
lean_ctor_set(x_113, 1, x_105);
lean_ctor_set(x_113, 2, x_107);
lean_ctor_set(x_113, 3, x_112);
lean_inc(x_96);
x_114 = lean_array_push(x_96, x_100);
x_115 = lean_array_push(x_114, x_102);
x_116 = lean_array_push(x_115, x_113);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_33);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_mk_string("fun");
lean_inc(x_118);
lean_inc(x_29);
x_119 = lean_name_mk_string(x_29, x_118);
lean_inc(x_15);
x_120 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_120, 0, x_15);
lean_ctor_set(x_120, 1, x_118);
x_121 = lean_mk_string("basicFun");
lean_inc(x_29);
x_122 = lean_name_mk_string(x_29, x_121);
x_123 = lean_mk_string("jsons");
x_124 = lean_string_utf8_byte_size(x_123);
lean_inc(x_123);
x_125 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_42);
lean_ctor_set(x_125, 2, x_124);
x_126 = lean_name_mk_string(x_23, x_123);
lean_inc(x_18);
lean_inc(x_22);
x_127 = l_Lean_addMacroScope(x_22, x_126, x_18);
lean_inc(x_15);
x_128 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_128, 0, x_15);
lean_ctor_set(x_128, 1, x_125);
lean_ctor_set(x_128, 2, x_127);
lean_ctor_set(x_128, 3, x_61);
x_129 = lean_unsigned_to_nat(1u);
x_130 = lean_mk_empty_array_with_capacity(x_129);
lean_inc(x_130);
x_131 = lean_array_push(x_130, x_128);
lean_inc(x_39);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_39);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_mk_string("=>");
lean_inc(x_15);
x_134 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_134, 0, x_15);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_mk_string("do");
lean_inc(x_135);
lean_inc(x_29);
x_136 = lean_name_mk_string(x_29, x_135);
lean_inc(x_15);
x_137 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_137, 0, x_15);
lean_ctor_set(x_137, 1, x_135);
x_138 = lean_mk_string("doSeqIndent");
lean_inc(x_29);
x_139 = lean_name_mk_string(x_29, x_138);
x_140 = l_Array_zip___rarg(x_4, x_5);
x_141 = lean_array_get_size(x_140);
x_142 = lean_usize_of_nat(x_141);
lean_dec(x_141);
x_143 = 0;
x_144 = x_140;
lean_inc(x_130);
lean_inc(x_96);
lean_inc(x_89);
lean_inc(x_85);
lean_inc(x_39);
lean_inc(x_31);
lean_inc(x_29);
lean_inc(x_15);
x_145 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__3(x_15, x_18, x_22, x_25, x_29, x_31, x_39, x_61, x_61, x_78, x_85, x_89, x_96, x_130, x_142, x_143, x_144);
x_146 = x_145;
lean_inc(x_3);
x_147 = l_Array_append___rarg(x_3, x_146);
lean_dec(x_146);
x_148 = lean_mk_string("doSeqItem");
lean_inc(x_29);
x_149 = lean_name_mk_string(x_29, x_148);
x_150 = lean_mk_string("doReturn");
x_151 = lean_name_mk_string(x_29, x_150);
x_152 = lean_mk_string("return");
x_153 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_153, 0, x_15);
lean_ctor_set(x_153, 1, x_152);
x_154 = lean_mk_syntax_ident(x_1);
x_155 = l_Array_append___rarg(x_3, x_4);
lean_inc(x_39);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_39);
lean_ctor_set(x_156, 1, x_155);
lean_inc(x_85);
x_157 = lean_array_push(x_85, x_154);
x_158 = lean_array_push(x_157, x_156);
lean_inc(x_31);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_31);
lean_ctor_set(x_159, 1, x_158);
lean_inc(x_130);
x_160 = lean_array_push(x_130, x_159);
lean_inc(x_39);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_39);
lean_ctor_set(x_161, 1, x_160);
lean_inc(x_85);
x_162 = lean_array_push(x_85, x_153);
x_163 = lean_array_push(x_162, x_161);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_151);
lean_ctor_set(x_164, 1, x_163);
lean_inc(x_85);
x_165 = lean_array_push(x_85, x_164);
lean_inc(x_89);
x_166 = lean_array_push(x_165, x_89);
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_149);
lean_ctor_set(x_167, 1, x_166);
x_168 = lean_array_push(x_147, x_167);
lean_inc(x_39);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_39);
lean_ctor_set(x_169, 1, x_168);
lean_inc(x_130);
x_170 = lean_array_push(x_130, x_169);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_139);
lean_ctor_set(x_171, 1, x_170);
lean_inc(x_85);
x_172 = lean_array_push(x_85, x_137);
x_173 = lean_array_push(x_172, x_171);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_136);
lean_ctor_set(x_174, 1, x_173);
x_175 = lean_array_push(x_96, x_132);
x_176 = lean_array_push(x_175, x_134);
x_177 = lean_array_push(x_176, x_174);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_122);
lean_ctor_set(x_178, 1, x_177);
lean_inc(x_85);
x_179 = lean_array_push(x_85, x_120);
x_180 = lean_array_push(x_179, x_178);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_119);
lean_ctor_set(x_181, 1, x_180);
lean_inc(x_85);
x_182 = lean_array_push(x_85, x_181);
x_183 = lean_array_push(x_182, x_89);
lean_inc(x_39);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_39);
lean_ctor_set(x_184, 1, x_183);
x_185 = lean_array_push(x_97, x_184);
x_186 = lean_array_push(x_185, x_94);
x_187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_187, 0, x_35);
lean_ctor_set(x_187, 1, x_186);
x_188 = lean_array_push(x_130, x_187);
x_189 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_189, 0, x_39);
lean_ctor_set(x_189, 1, x_188);
x_190 = lean_array_push(x_85, x_117);
x_191 = lean_array_push(x_190, x_189);
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_31);
lean_ctor_set(x_192, 1, x_191);
x_193 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_2);
lean_ctor_set(x_20, 0, x_193);
return x_20;
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; size_t x_315; size_t x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; 
x_194 = lean_ctor_get(x_20, 0);
x_195 = lean_ctor_get(x_20, 1);
lean_inc(x_195);
lean_inc(x_194);
lean_dec(x_20);
x_196 = lean_box(0);
x_197 = lean_mk_string("Lean");
lean_inc(x_197);
x_198 = lean_name_mk_string(x_196, x_197);
x_199 = lean_mk_string("Parser");
lean_inc(x_198);
x_200 = lean_name_mk_string(x_198, x_199);
x_201 = lean_mk_string("Term");
x_202 = lean_name_mk_string(x_200, x_201);
x_203 = lean_mk_string("app");
lean_inc(x_202);
x_204 = lean_name_mk_string(x_202, x_203);
x_205 = lean_mk_string("proj");
lean_inc(x_202);
x_206 = lean_name_mk_string(x_202, x_205);
x_207 = lean_mk_string("paren");
lean_inc(x_202);
x_208 = lean_name_mk_string(x_202, x_207);
x_209 = lean_mk_string("(");
lean_inc(x_15);
x_210 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_210, 0, x_15);
lean_ctor_set(x_210, 1, x_209);
x_211 = lean_mk_string("null");
x_212 = lean_name_mk_string(x_196, x_211);
x_213 = lean_mk_string("parseTagged");
x_214 = lean_string_utf8_byte_size(x_213);
x_215 = lean_unsigned_to_nat(0u);
lean_inc(x_213);
x_216 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_216, 0, x_213);
lean_ctor_set(x_216, 1, x_215);
lean_ctor_set(x_216, 2, x_214);
lean_inc(x_213);
x_217 = lean_name_mk_string(x_196, x_213);
lean_inc(x_18);
lean_inc(x_194);
x_218 = l_Lean_addMacroScope(x_194, x_217, x_18);
x_219 = lean_mk_string("_private");
x_220 = lean_name_mk_string(x_196, x_219);
lean_inc(x_197);
x_221 = lean_name_mk_string(x_220, x_197);
x_222 = lean_mk_string("Elab");
lean_inc(x_222);
x_223 = lean_name_mk_string(x_221, x_222);
x_224 = lean_mk_string("Deriving");
lean_inc(x_224);
x_225 = lean_name_mk_string(x_223, x_224);
x_226 = lean_mk_string("FromToJson");
lean_inc(x_226);
x_227 = lean_name_mk_string(x_225, x_226);
x_228 = lean_name_mk_numeral(x_227, x_215);
x_229 = lean_name_mk_string(x_228, x_197);
x_230 = lean_name_mk_string(x_229, x_222);
x_231 = lean_name_mk_string(x_230, x_224);
x_232 = lean_name_mk_string(x_231, x_226);
x_233 = lean_name_mk_string(x_232, x_213);
x_234 = lean_box(0);
x_235 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_235, 0, x_233);
lean_ctor_set(x_235, 1, x_234);
x_236 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_234);
lean_inc(x_15);
x_237 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_237, 0, x_15);
lean_ctor_set(x_237, 1, x_216);
lean_ctor_set(x_237, 2, x_218);
lean_ctor_set(x_237, 3, x_236);
x_238 = lean_mk_string("json");
x_239 = lean_string_utf8_byte_size(x_238);
lean_inc(x_238);
x_240 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_240, 0, x_238);
lean_ctor_set(x_240, 1, x_215);
lean_ctor_set(x_240, 2, x_239);
x_241 = lean_name_mk_string(x_196, x_238);
lean_inc(x_18);
lean_inc(x_194);
x_242 = l_Lean_addMacroScope(x_194, x_241, x_18);
lean_inc(x_15);
x_243 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_243, 0, x_15);
lean_ctor_set(x_243, 1, x_240);
lean_ctor_set(x_243, 2, x_242);
lean_ctor_set(x_243, 3, x_234);
x_244 = l_Lean_Name_getString_x21(x_1);
x_245 = lean_box(2);
x_246 = l_Lean_Syntax_mkStrLit(x_244, x_245);
lean_dec(x_244);
lean_inc(x_2);
x_247 = l_Nat_repr(x_2);
x_248 = l_Lean_numLitKind;
x_249 = l_Lean_Syntax_mkLit(x_248, x_247, x_245);
x_250 = lean_unsigned_to_nat(4u);
x_251 = lean_mk_empty_array_with_capacity(x_250);
lean_inc(x_251);
x_252 = lean_array_push(x_251, x_243);
x_253 = lean_array_push(x_252, x_246);
x_254 = lean_array_push(x_253, x_249);
x_255 = lean_array_push(x_254, x_6);
lean_inc(x_212);
x_256 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_256, 0, x_212);
lean_ctor_set(x_256, 1, x_255);
x_257 = lean_unsigned_to_nat(2u);
x_258 = lean_mk_empty_array_with_capacity(x_257);
lean_inc(x_258);
x_259 = lean_array_push(x_258, x_237);
x_260 = lean_array_push(x_259, x_256);
lean_inc(x_204);
x_261 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_261, 0, x_204);
lean_ctor_set(x_261, 1, x_260);
lean_inc(x_3);
lean_inc(x_212);
x_262 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_262, 0, x_212);
lean_ctor_set(x_262, 1, x_3);
lean_inc(x_258);
x_263 = lean_array_push(x_258, x_261);
lean_inc(x_262);
x_264 = lean_array_push(x_263, x_262);
lean_inc(x_212);
x_265 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_265, 0, x_212);
lean_ctor_set(x_265, 1, x_264);
x_266 = lean_mk_string(")");
lean_inc(x_15);
x_267 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_267, 0, x_15);
lean_ctor_set(x_267, 1, x_266);
x_268 = lean_unsigned_to_nat(3u);
x_269 = lean_mk_empty_array_with_capacity(x_268);
lean_inc(x_269);
x_270 = lean_array_push(x_269, x_210);
lean_inc(x_270);
x_271 = lean_array_push(x_270, x_265);
lean_inc(x_267);
x_272 = lean_array_push(x_271, x_267);
lean_inc(x_208);
x_273 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_273, 0, x_208);
lean_ctor_set(x_273, 1, x_272);
x_274 = lean_mk_string(".");
lean_inc(x_15);
x_275 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_275, 0, x_15);
lean_ctor_set(x_275, 1, x_274);
x_276 = lean_mk_string("bind");
x_277 = lean_string_utf8_byte_size(x_276);
lean_inc(x_276);
x_278 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_278, 0, x_276);
lean_ctor_set(x_278, 1, x_215);
lean_ctor_set(x_278, 2, x_277);
lean_inc(x_276);
x_279 = lean_name_mk_string(x_196, x_276);
lean_inc(x_18);
lean_inc(x_194);
x_280 = l_Lean_addMacroScope(x_194, x_279, x_18);
x_281 = lean_mk_string("Bind");
x_282 = lean_name_mk_string(x_196, x_281);
x_283 = lean_name_mk_string(x_282, x_276);
x_284 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_284, 0, x_283);
lean_ctor_set(x_284, 1, x_234);
x_285 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_285, 0, x_284);
lean_ctor_set(x_285, 1, x_234);
lean_inc(x_15);
x_286 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_286, 0, x_15);
lean_ctor_set(x_286, 1, x_278);
lean_ctor_set(x_286, 2, x_280);
lean_ctor_set(x_286, 3, x_285);
lean_inc(x_269);
x_287 = lean_array_push(x_269, x_273);
x_288 = lean_array_push(x_287, x_275);
x_289 = lean_array_push(x_288, x_286);
x_290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_290, 0, x_206);
lean_ctor_set(x_290, 1, x_289);
x_291 = lean_mk_string("fun");
lean_inc(x_291);
lean_inc(x_202);
x_292 = lean_name_mk_string(x_202, x_291);
lean_inc(x_15);
x_293 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_293, 0, x_15);
lean_ctor_set(x_293, 1, x_291);
x_294 = lean_mk_string("basicFun");
lean_inc(x_202);
x_295 = lean_name_mk_string(x_202, x_294);
x_296 = lean_mk_string("jsons");
x_297 = lean_string_utf8_byte_size(x_296);
lean_inc(x_296);
x_298 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_298, 0, x_296);
lean_ctor_set(x_298, 1, x_215);
lean_ctor_set(x_298, 2, x_297);
x_299 = lean_name_mk_string(x_196, x_296);
lean_inc(x_18);
lean_inc(x_194);
x_300 = l_Lean_addMacroScope(x_194, x_299, x_18);
lean_inc(x_15);
x_301 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_301, 0, x_15);
lean_ctor_set(x_301, 1, x_298);
lean_ctor_set(x_301, 2, x_300);
lean_ctor_set(x_301, 3, x_234);
x_302 = lean_unsigned_to_nat(1u);
x_303 = lean_mk_empty_array_with_capacity(x_302);
lean_inc(x_303);
x_304 = lean_array_push(x_303, x_301);
lean_inc(x_212);
x_305 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_305, 0, x_212);
lean_ctor_set(x_305, 1, x_304);
x_306 = lean_mk_string("=>");
lean_inc(x_15);
x_307 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_307, 0, x_15);
lean_ctor_set(x_307, 1, x_306);
x_308 = lean_mk_string("do");
lean_inc(x_308);
lean_inc(x_202);
x_309 = lean_name_mk_string(x_202, x_308);
lean_inc(x_15);
x_310 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_310, 0, x_15);
lean_ctor_set(x_310, 1, x_308);
x_311 = lean_mk_string("doSeqIndent");
lean_inc(x_202);
x_312 = lean_name_mk_string(x_202, x_311);
x_313 = l_Array_zip___rarg(x_4, x_5);
x_314 = lean_array_get_size(x_313);
x_315 = lean_usize_of_nat(x_314);
lean_dec(x_314);
x_316 = 0;
x_317 = x_313;
lean_inc(x_303);
lean_inc(x_269);
lean_inc(x_262);
lean_inc(x_258);
lean_inc(x_212);
lean_inc(x_204);
lean_inc(x_202);
lean_inc(x_15);
x_318 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__3(x_15, x_18, x_194, x_198, x_202, x_204, x_212, x_234, x_234, x_251, x_258, x_262, x_269, x_303, x_315, x_316, x_317);
x_319 = x_318;
lean_inc(x_3);
x_320 = l_Array_append___rarg(x_3, x_319);
lean_dec(x_319);
x_321 = lean_mk_string("doSeqItem");
lean_inc(x_202);
x_322 = lean_name_mk_string(x_202, x_321);
x_323 = lean_mk_string("doReturn");
x_324 = lean_name_mk_string(x_202, x_323);
x_325 = lean_mk_string("return");
x_326 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_326, 0, x_15);
lean_ctor_set(x_326, 1, x_325);
x_327 = lean_mk_syntax_ident(x_1);
x_328 = l_Array_append___rarg(x_3, x_4);
lean_inc(x_212);
x_329 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_329, 0, x_212);
lean_ctor_set(x_329, 1, x_328);
lean_inc(x_258);
x_330 = lean_array_push(x_258, x_327);
x_331 = lean_array_push(x_330, x_329);
lean_inc(x_204);
x_332 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_332, 0, x_204);
lean_ctor_set(x_332, 1, x_331);
lean_inc(x_303);
x_333 = lean_array_push(x_303, x_332);
lean_inc(x_212);
x_334 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_334, 0, x_212);
lean_ctor_set(x_334, 1, x_333);
lean_inc(x_258);
x_335 = lean_array_push(x_258, x_326);
x_336 = lean_array_push(x_335, x_334);
x_337 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_337, 0, x_324);
lean_ctor_set(x_337, 1, x_336);
lean_inc(x_258);
x_338 = lean_array_push(x_258, x_337);
lean_inc(x_262);
x_339 = lean_array_push(x_338, x_262);
x_340 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_340, 0, x_322);
lean_ctor_set(x_340, 1, x_339);
x_341 = lean_array_push(x_320, x_340);
lean_inc(x_212);
x_342 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_342, 0, x_212);
lean_ctor_set(x_342, 1, x_341);
lean_inc(x_303);
x_343 = lean_array_push(x_303, x_342);
x_344 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_344, 0, x_312);
lean_ctor_set(x_344, 1, x_343);
lean_inc(x_258);
x_345 = lean_array_push(x_258, x_310);
x_346 = lean_array_push(x_345, x_344);
x_347 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_347, 0, x_309);
lean_ctor_set(x_347, 1, x_346);
x_348 = lean_array_push(x_269, x_305);
x_349 = lean_array_push(x_348, x_307);
x_350 = lean_array_push(x_349, x_347);
x_351 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_351, 0, x_295);
lean_ctor_set(x_351, 1, x_350);
lean_inc(x_258);
x_352 = lean_array_push(x_258, x_293);
x_353 = lean_array_push(x_352, x_351);
x_354 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_354, 0, x_292);
lean_ctor_set(x_354, 1, x_353);
lean_inc(x_258);
x_355 = lean_array_push(x_258, x_354);
x_356 = lean_array_push(x_355, x_262);
lean_inc(x_212);
x_357 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_357, 0, x_212);
lean_ctor_set(x_357, 1, x_356);
x_358 = lean_array_push(x_270, x_357);
x_359 = lean_array_push(x_358, x_267);
x_360 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_360, 0, x_208);
lean_ctor_set(x_360, 1, x_359);
x_361 = lean_array_push(x_303, x_360);
x_362 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_362, 0, x_212);
lean_ctor_set(x_362, 1, x_361);
x_363 = lean_array_push(x_258, x_290);
x_364 = lean_array_push(x_363, x_362);
x_365 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_365, 0, x_204);
lean_ctor_set(x_365, 1, x_364);
x_366 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_366, 0, x_365);
lean_ctor_set(x_366, 1, x_2);
x_367 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_367, 0, x_366);
lean_ctor_set(x_367, 1, x_195);
return x_367;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_mk_empty_array_with_capacity(x_13);
x_15 = lean_ctor_get(x_1, 4);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_unsigned_to_nat(1u);
lean_inc(x_15);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_17, 2, x_16);
lean_inc_n(x_14, 2);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_14);
lean_ctor_set(x_18, 1, x_14);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_15);
x_19 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__1(x_2, x_4, x_17, x_15, x_13, x_18, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_17);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_array_get_size(x_23);
x_25 = lean_mk_empty_array_with_capacity(x_24);
lean_inc(x_24);
x_26 = l_Array_mapIdxM_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__2(x_23, x_23, x_24, x_13, lean_box(0), x_25, x_6, x_7, x_8, x_9, x_10, x_11, x_21);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_array_get_size(x_22);
x_30 = lean_nat_dec_eq(x_24, x_29);
lean_dec(x_24);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_29);
lean_dec(x_22);
x_31 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_10, x_11, x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Elab_Term_getCurrMacroScope(x_6, x_7, x_8, x_9, x_10, x_11, x_33);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_Elab_Term_getMainModule___rarg(x_11, x_36);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_mk_string("none");
x_41 = lean_string_utf8_byte_size(x_40);
lean_inc(x_40);
x_42 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_13);
lean_ctor_set(x_42, 2, x_41);
x_43 = lean_box(0);
lean_inc(x_40);
x_44 = lean_name_mk_string(x_43, x_40);
x_45 = l_Lean_addMacroScope(x_38, x_44, x_35);
x_46 = lean_mk_string("Option");
x_47 = lean_name_mk_string(x_43, x_46);
x_48 = lean_name_mk_string(x_47, x_40);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
x_52 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_52, 0, x_32);
lean_ctor_set(x_52, 1, x_42);
lean_ctor_set(x_52, 2, x_45);
lean_ctor_set(x_52, 3, x_51);
x_53 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5___lambda__1(x_3, x_15, x_14, x_23, x_27, x_52, x_6, x_7, x_8, x_9, x_10, x_11, x_39);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_27);
lean_dec(x_23);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; size_t x_90; size_t x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; size_t x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_54 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_10, x_11, x_28);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = l_Lean_Elab_Term_getCurrMacroScope(x_6, x_7, x_8, x_9, x_10, x_11, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = l_Lean_Elab_Term_getMainModule___rarg(x_11, x_59);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = lean_box(0);
x_64 = lean_mk_string("Lean");
x_65 = lean_name_mk_string(x_63, x_64);
x_66 = lean_mk_string("Parser");
x_67 = lean_name_mk_string(x_65, x_66);
x_68 = lean_mk_string("Term");
x_69 = lean_name_mk_string(x_67, x_68);
x_70 = lean_mk_string("app");
lean_inc(x_69);
x_71 = lean_name_mk_string(x_69, x_70);
x_72 = lean_mk_string("some");
x_73 = lean_string_utf8_byte_size(x_72);
lean_inc(x_72);
x_74 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_13);
lean_ctor_set(x_74, 2, x_73);
lean_inc(x_72);
x_75 = lean_name_mk_string(x_63, x_72);
x_76 = l_Lean_addMacroScope(x_61, x_75, x_58);
x_77 = lean_mk_string("Option");
x_78 = lean_name_mk_string(x_63, x_77);
x_79 = lean_name_mk_string(x_78, x_72);
x_80 = lean_box(0);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_80);
lean_inc(x_55);
x_83 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_83, 0, x_55);
lean_ctor_set(x_83, 1, x_74);
lean_ctor_set(x_83, 2, x_76);
lean_ctor_set(x_83, 3, x_82);
x_84 = lean_mk_string("null");
x_85 = lean_name_mk_string(x_63, x_84);
x_86 = lean_mk_string("term#[_,]");
x_87 = lean_name_mk_string(x_63, x_86);
x_88 = lean_mk_string("#[");
lean_inc(x_55);
x_89 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_89, 0, x_55);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_usize_of_nat(x_29);
lean_dec(x_29);
x_91 = 0;
x_92 = x_22;
x_93 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__4(x_69, x_80, x_90, x_91, x_92);
x_94 = x_93;
x_95 = lean_array_get_size(x_94);
x_96 = lean_usize_of_nat(x_95);
lean_dec(x_95);
x_97 = x_94;
x_98 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_96, x_91, x_97);
x_99 = x_98;
x_100 = lean_box(2);
x_101 = lean_mk_string(",");
x_102 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
x_103 = l_Lean_mkSepArray(x_99, x_102);
lean_dec(x_99);
lean_inc(x_14);
x_104 = l_Array_append___rarg(x_14, x_103);
lean_dec(x_103);
lean_inc(x_85);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_85);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_mk_string("]");
x_107 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_107, 0, x_55);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_unsigned_to_nat(3u);
x_109 = lean_mk_empty_array_with_capacity(x_108);
x_110 = lean_array_push(x_109, x_89);
x_111 = lean_array_push(x_110, x_105);
x_112 = lean_array_push(x_111, x_107);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_87);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_mk_empty_array_with_capacity(x_16);
x_115 = lean_array_push(x_114, x_113);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_85);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_unsigned_to_nat(2u);
x_118 = lean_mk_empty_array_with_capacity(x_117);
x_119 = lean_array_push(x_118, x_83);
x_120 = lean_array_push(x_119, x_116);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_71);
lean_ctor_set(x_121, 1, x_120);
x_122 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5___lambda__1(x_3, x_15, x_14, x_23, x_27, x_121, x_6, x_7, x_8, x_9, x_10, x_11, x_62);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_27);
lean_dec(x_23);
return x_122;
}
}
else
{
uint8_t x_123; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_123 = !lean_is_exclusive(x_19);
if (x_123 == 0)
{
return x_19;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_19, 0);
x_125 = lean_ctor_get(x_19, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_19);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_3 < x_2;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
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
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_array_uget(x_4, x_3);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_4, x_3, x_16);
x_18 = x_15;
lean_inc(x_5);
lean_inc(x_18);
x_19 = l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___spec__1(x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_22, 2);
lean_inc(x_23);
lean_dec(x_22);
lean_inc(x_1);
x_24 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5___lambda__2___boxed), 12, 3);
lean_closure_set(x_24, 0, x_20);
lean_closure_set(x_24, 1, x_1);
lean_closure_set(x_24, 2, x_18);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_25 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(x_23, x_24, x_5, x_6, x_7, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = 1;
x_29 = x_3 + x_28;
x_30 = x_26;
x_31 = lean_array_uset(x_17, x_3, x_30);
x_3 = x_29;
x_4 = x_31;
x_11 = x_27;
goto _start;
}
else
{
uint8_t x_33; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_25);
if (x_33 == 0)
{
return x_25;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_25, 0);
x_35 = lean_ctor_get(x_25, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_25);
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
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
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
}
}
lean_object* l_Array_qpartition_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = l_Lean_instInhabitedSyntax;
x_8 = l_instInhabitedNat;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_nat_dec_lt(x_6, x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_11 = lean_array_swap(x_4, x_5, x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_array_get(x_9, x_4, x_6);
lean_inc(x_1);
lean_inc(x_3);
x_14 = lean_apply_2(x_1, x_13, x_3);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_6, x_16);
lean_dec(x_6);
x_6 = x_17;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_array_swap(x_4, x_5, x_6);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_5, x_20);
lean_dec(x_5);
x_22 = lean_nat_add(x_6, x_20);
lean_dec(x_6);
x_4 = x_19;
x_5 = x_21;
x_6 = x_22;
goto _start;
}
}
}
}
uint8_t l_Array_qsort_sort___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__6___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_nat_dec_lt(x_3, x_4);
return x_5;
}
}
lean_object* l_Array_qsort_sort___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_16; 
x_4 = l_Lean_instInhabitedSyntax;
x_5 = l_instInhabitedNat;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_16 = lean_nat_dec_lt(x_2, x_3);
if (x_16 == 0)
{
lean_dec(x_6);
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_17 = lean_nat_add(x_2, x_3);
x_18 = lean_unsigned_to_nat(2u);
x_19 = lean_nat_div(x_17, x_18);
lean_dec(x_17);
lean_inc(x_6);
x_48 = lean_array_get(x_6, x_1, x_19);
lean_inc(x_6);
x_49 = lean_array_get(x_6, x_1, x_2);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_nat_dec_lt(x_50, x_51);
lean_dec(x_51);
lean_dec(x_50);
if (x_52 == 0)
{
x_20 = x_1;
goto block_47;
}
else
{
lean_object* x_53; 
x_53 = lean_array_swap(x_1, x_2, x_19);
x_20 = x_53;
goto block_47;
}
block_47:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_inc(x_6);
x_21 = lean_array_get(x_6, x_20, x_3);
lean_inc(x_6);
x_22 = lean_array_get(x_6, x_20, x_2);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_nat_dec_lt(x_23, x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_inc(x_6);
x_26 = lean_array_get(x_6, x_20, x_19);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_nat_dec_lt(x_27, x_23);
lean_dec(x_23);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_19);
lean_dec(x_6);
x_29 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__6___lambda__1___boxed), 2, 0);
lean_inc_n(x_2, 2);
x_30 = l_Array_qpartition_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__7(x_29, x_3, x_21, x_20, x_2, x_2);
x_7 = x_30;
goto block_15;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_21);
x_31 = lean_array_swap(x_20, x_19, x_3);
lean_dec(x_19);
x_32 = lean_array_get(x_6, x_31, x_3);
x_33 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__6___lambda__1___boxed), 2, 0);
lean_inc_n(x_2, 2);
x_34 = l_Array_qpartition_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__7(x_33, x_3, x_32, x_31, x_2, x_2);
x_7 = x_34;
goto block_15;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_dec(x_23);
lean_dec(x_21);
x_35 = lean_array_swap(x_20, x_2, x_3);
lean_inc(x_6);
x_36 = lean_array_get(x_6, x_35, x_19);
lean_inc(x_6);
x_37 = lean_array_get(x_6, x_35, x_3);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
x_40 = lean_nat_dec_lt(x_38, x_39);
lean_dec(x_39);
lean_dec(x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_19);
lean_dec(x_6);
x_41 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__6___lambda__1___boxed), 2, 0);
lean_inc_n(x_2, 2);
x_42 = l_Array_qpartition_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__7(x_41, x_3, x_37, x_35, x_2, x_2);
x_7 = x_42;
goto block_15;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_37);
x_43 = lean_array_swap(x_35, x_19, x_3);
lean_dec(x_19);
x_44 = lean_array_get(x_6, x_43, x_3);
x_45 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__6___lambda__1___boxed), 2, 0);
lean_inc_n(x_2, 2);
x_46 = l_Array_qpartition_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__7(x_45, x_3, x_44, x_43, x_2, x_2);
x_7 = x_46;
goto block_15;
}
}
}
}
block_15:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_nat_dec_le(x_3, x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Array_qsort_sort___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__6(x_9, x_2, x_8);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_8, x_12);
lean_dec(x_8);
x_1 = x_11;
x_2 = x_13;
goto _start;
}
else
{
lean_dec(x_8);
lean_dec(x_2);
return x_9;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__8(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = lean_ctor_get(x_9, 0);
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
static lean_object* _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_9 = lean_ctor_get(x_1, 4);
lean_inc(x_9);
x_10 = l_List_redLength___rarg(x_9);
x_11 = lean_mk_empty_array_with_capacity(x_10);
lean_dec(x_10);
x_12 = l_List_toArrayAux___rarg(x_9, x_11);
x_13 = lean_array_get_size(x_12);
x_14 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_15 = 0;
x_16 = x_12;
x_17 = lean_box_usize(x_14);
x_18 = l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___boxed__const__1;
x_19 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5___boxed), 11, 4);
lean_closure_set(x_19, 0, x_1);
lean_closure_set(x_19, 1, x_17);
lean_closure_set(x_19, 2, x_18);
lean_closure_set(x_19, 3, x_16);
x_20 = x_19;
x_21 = lean_apply_7(x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; size_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_array_get_size(x_23);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_sub(x_24, x_25);
lean_dec(x_24);
x_27 = lean_unsigned_to_nat(0u);
x_28 = l_Array_qsort_sort___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__6(x_23, x_27, x_26);
lean_dec(x_26);
x_29 = lean_array_get_size(x_28);
x_30 = lean_usize_of_nat(x_29);
lean_dec(x_29);
x_31 = x_28;
x_32 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__8(x_30, x_15, x_31);
x_33 = x_32;
lean_ctor_set(x_21, 0, x_33);
return x_21;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_34 = lean_ctor_get(x_21, 0);
x_35 = lean_ctor_get(x_21, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_21);
x_36 = lean_array_get_size(x_34);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_nat_sub(x_36, x_37);
lean_dec(x_36);
x_39 = lean_unsigned_to_nat(0u);
x_40 = l_Array_qsort_sort___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__6(x_34, x_39, x_38);
lean_dec(x_38);
x_41 = lean_array_get_size(x_40);
x_42 = lean_usize_of_nat(x_41);
lean_dec(x_41);
x_43 = x_40;
x_44 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__8(x_42, x_15, x_43);
x_45 = x_44;
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_35);
return x_46;
}
}
else
{
uint8_t x_47; 
x_47 = !lean_is_exclusive(x_21);
if (x_47 == 0)
{
return x_21;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_21, 0);
x_49 = lean_ctor_get(x_21, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_21);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_12;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Array_mapIdxM_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Array_mapIdxM_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__3___boxed(lean_object** _args) {
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
x_18 = lean_unbox_usize(x_15);
lean_dec(x_15);
x_19 = lean_unbox_usize(x_16);
lean_dec(x_16);
x_20 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_18, x_19, x_17);
return x_20;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__4(x_1, x_2, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_14;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__5(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* l_Array_qpartition_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_qpartition_loop___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__7(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Array_qsort_sort___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__6___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_qsort_sort___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__6___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_qsort_sort___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_qsort_sort___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__6(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___spec__8(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_13 = 1;
x_14 = x_2 - x_13;
x_15 = lean_array_uget(x_1, x_14);
x_16 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_9, x_10, x_11);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_18);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_box(0);
x_24 = lean_mk_string("term_<|>_");
x_25 = lean_name_mk_string(x_23, x_24);
x_26 = lean_mk_string("<|>");
x_27 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_27, 0, x_17);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_unsigned_to_nat(3u);
x_29 = lean_mk_empty_array_with_capacity(x_28);
x_30 = lean_array_push(x_29, x_15);
x_31 = lean_array_push(x_30, x_27);
x_32 = lean_array_push(x_31, x_4);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_25);
lean_ctor_set(x_33, 1, x_32);
x_2 = x_14;
x_4 = x_33;
x_11 = x_22;
goto _start;
}
else
{
lean_object* x_35; 
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_4);
lean_ctor_set(x_35, 1, x_11);
return x_35;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__2(size_t x_1, size_t x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = l_Lean_Elab_Deriving_FromToJson_mkJsonField(x_9);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
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
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, size_t x_14, size_t x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; 
x_17 = x_15 < x_14;
if (x_17 == 0)
{
lean_object* x_18; 
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
lean_dec(x_2);
lean_dec(x_1);
x_18 = x_16;
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; uint8_t x_25; 
x_19 = lean_array_uget(x_16, x_15);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_array_uset(x_16, x_15, x_20);
x_22 = x_19;
x_23 = 1;
x_24 = x_15 + x_23;
x_25 = !lean_is_exclusive(x_22);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_26 = lean_ctor_get(x_22, 0);
x_27 = lean_ctor_get(x_22, 1);
x_28 = lean_mk_string("doSeqItem");
lean_inc(x_8);
x_29 = lean_name_mk_string(x_8, x_28);
x_30 = lean_mk_string("doLetArrow");
lean_inc(x_8);
x_31 = lean_name_mk_string(x_8, x_30);
x_32 = lean_mk_string("let");
lean_inc(x_1);
x_33 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_mk_string("doIdDecl");
lean_inc(x_8);
x_35 = lean_name_mk_string(x_8, x_34);
x_36 = lean_mk_string("←");
lean_inc(x_1);
x_37 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_37, 0, x_1);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_mk_string("doExpr");
lean_inc(x_8);
x_39 = lean_name_mk_string(x_8, x_38);
x_40 = lean_mk_string("getObjValAs?");
x_41 = lean_string_utf8_byte_size(x_40);
lean_inc(x_40);
x_42 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_20);
lean_ctor_set(x_42, 2, x_41);
x_43 = lean_box(0);
lean_inc(x_40);
x_44 = lean_name_mk_string(x_43, x_40);
lean_inc(x_2);
lean_inc(x_3);
x_45 = l_Lean_addMacroScope(x_3, x_44, x_2);
lean_inc(x_11);
x_46 = lean_name_mk_string(x_11, x_40);
lean_inc(x_12);
lean_ctor_set(x_22, 1, x_12);
lean_ctor_set(x_22, 0, x_46);
lean_inc(x_9);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_22);
lean_ctor_set(x_47, 1, x_9);
lean_inc(x_1);
x_48 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_48, 0, x_1);
lean_ctor_set(x_48, 1, x_42);
lean_ctor_set(x_48, 2, x_45);
lean_ctor_set(x_48, 3, x_47);
x_49 = lean_mk_string("hole");
lean_inc(x_8);
x_50 = lean_name_mk_string(x_8, x_49);
x_51 = lean_mk_string("_");
lean_inc(x_1);
x_52 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_52, 0, x_1);
lean_ctor_set(x_52, 1, x_51);
lean_inc(x_6);
x_53 = lean_array_push(x_6, x_52);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_50);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_unsigned_to_nat(3u);
x_56 = lean_mk_empty_array_with_capacity(x_55);
lean_inc(x_10);
lean_inc(x_56);
x_57 = lean_array_push(x_56, x_10);
x_58 = lean_array_push(x_57, x_54);
x_59 = lean_array_push(x_58, x_27);
lean_inc(x_4);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_4);
lean_ctor_set(x_60, 1, x_59);
lean_inc(x_7);
x_61 = lean_array_push(x_7, x_48);
x_62 = lean_array_push(x_61, x_60);
lean_inc(x_13);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_13);
lean_ctor_set(x_63, 1, x_62);
lean_inc(x_6);
x_64 = lean_array_push(x_6, x_63);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_39);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_unsigned_to_nat(4u);
x_67 = lean_mk_empty_array_with_capacity(x_66);
x_68 = lean_array_push(x_67, x_26);
lean_inc(x_5);
x_69 = lean_array_push(x_68, x_5);
x_70 = lean_array_push(x_69, x_37);
x_71 = lean_array_push(x_70, x_65);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_35);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_array_push(x_56, x_33);
lean_inc(x_5);
x_74 = lean_array_push(x_73, x_5);
x_75 = lean_array_push(x_74, x_72);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_31);
lean_ctor_set(x_76, 1, x_75);
lean_inc(x_7);
x_77 = lean_array_push(x_7, x_76);
lean_inc(x_5);
x_78 = lean_array_push(x_77, x_5);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_29);
lean_ctor_set(x_79, 1, x_78);
x_80 = x_79;
x_81 = lean_array_uset(x_21, x_15, x_80);
x_15 = x_24;
x_16 = x_81;
goto _start;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_83 = lean_ctor_get(x_22, 0);
x_84 = lean_ctor_get(x_22, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_22);
x_85 = lean_mk_string("doSeqItem");
lean_inc(x_8);
x_86 = lean_name_mk_string(x_8, x_85);
x_87 = lean_mk_string("doLetArrow");
lean_inc(x_8);
x_88 = lean_name_mk_string(x_8, x_87);
x_89 = lean_mk_string("let");
lean_inc(x_1);
x_90 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_90, 0, x_1);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_mk_string("doIdDecl");
lean_inc(x_8);
x_92 = lean_name_mk_string(x_8, x_91);
x_93 = lean_mk_string("←");
lean_inc(x_1);
x_94 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_94, 0, x_1);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_mk_string("doExpr");
lean_inc(x_8);
x_96 = lean_name_mk_string(x_8, x_95);
x_97 = lean_mk_string("getObjValAs?");
x_98 = lean_string_utf8_byte_size(x_97);
lean_inc(x_97);
x_99 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_20);
lean_ctor_set(x_99, 2, x_98);
x_100 = lean_box(0);
lean_inc(x_97);
x_101 = lean_name_mk_string(x_100, x_97);
lean_inc(x_2);
lean_inc(x_3);
x_102 = l_Lean_addMacroScope(x_3, x_101, x_2);
lean_inc(x_11);
x_103 = lean_name_mk_string(x_11, x_97);
lean_inc(x_12);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_12);
lean_inc(x_9);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_9);
lean_inc(x_1);
x_106 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_106, 0, x_1);
lean_ctor_set(x_106, 1, x_99);
lean_ctor_set(x_106, 2, x_102);
lean_ctor_set(x_106, 3, x_105);
x_107 = lean_mk_string("hole");
lean_inc(x_8);
x_108 = lean_name_mk_string(x_8, x_107);
x_109 = lean_mk_string("_");
lean_inc(x_1);
x_110 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_110, 0, x_1);
lean_ctor_set(x_110, 1, x_109);
lean_inc(x_6);
x_111 = lean_array_push(x_6, x_110);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_108);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_unsigned_to_nat(3u);
x_114 = lean_mk_empty_array_with_capacity(x_113);
lean_inc(x_10);
lean_inc(x_114);
x_115 = lean_array_push(x_114, x_10);
x_116 = lean_array_push(x_115, x_112);
x_117 = lean_array_push(x_116, x_84);
lean_inc(x_4);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_4);
lean_ctor_set(x_118, 1, x_117);
lean_inc(x_7);
x_119 = lean_array_push(x_7, x_106);
x_120 = lean_array_push(x_119, x_118);
lean_inc(x_13);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_13);
lean_ctor_set(x_121, 1, x_120);
lean_inc(x_6);
x_122 = lean_array_push(x_6, x_121);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_96);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_unsigned_to_nat(4u);
x_125 = lean_mk_empty_array_with_capacity(x_124);
x_126 = lean_array_push(x_125, x_83);
lean_inc(x_5);
x_127 = lean_array_push(x_126, x_5);
x_128 = lean_array_push(x_127, x_94);
x_129 = lean_array_push(x_128, x_123);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_92);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_array_push(x_114, x_90);
lean_inc(x_5);
x_132 = lean_array_push(x_131, x_5);
x_133 = lean_array_push(x_132, x_130);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_88);
lean_ctor_set(x_134, 1, x_133);
lean_inc(x_7);
x_135 = lean_array_push(x_7, x_134);
lean_inc(x_5);
x_136 = lean_array_push(x_135, x_5);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_86);
lean_ctor_set(x_137, 1, x_136);
x_138 = x_137;
x_139 = lean_array_uset(x_21, x_15, x_138);
x_15 = x_24;
x_16 = x_139;
goto _start;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_6 < x_5;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = x_7;
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_10 = lean_array_uget(x_7, x_6);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_uset(x_7, x_6, x_11);
x_13 = x_10;
x_14 = 1;
x_15 = x_6 + x_14;
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_13, 1);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_box(0);
x_19 = lean_mk_string("group");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_mk_string("structInstField");
lean_inc(x_3);
x_22 = lean_name_mk_string(x_3, x_21);
x_23 = lean_mk_string("structInstLVal");
lean_inc(x_3);
x_24 = lean_name_mk_string(x_3, x_23);
lean_inc(x_2);
x_25 = lean_array_push(x_2, x_16);
lean_inc(x_1);
x_26 = lean_array_push(x_25, x_1);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_unsigned_to_nat(3u);
x_29 = lean_mk_empty_array_with_capacity(x_28);
x_30 = lean_array_push(x_29, x_27);
lean_inc(x_4);
x_31 = lean_array_push(x_30, x_4);
x_32 = lean_array_push(x_31, x_17);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_22);
lean_ctor_set(x_33, 1, x_32);
lean_inc(x_2);
x_34 = lean_array_push(x_2, x_33);
lean_inc(x_1);
x_35 = lean_array_push(x_34, x_1);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
x_37 = x_36;
x_38 = lean_array_uset(x_12, x_6, x_37);
x_6 = x_15;
x_7 = x_38;
goto _start;
}
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_11 = lean_box(0);
x_12 = lean_mk_string("Lean");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_mk_string("FromJson");
lean_inc(x_13);
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_ctor_get(x_3, 0);
x_17 = l_Lean_instInhabitedInductiveVal;
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_array_get(x_17, x_16, x_18);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_19);
lean_inc(x_15);
x_20 = l_Lean_Elab_Deriving_mkHeader___rarg(x_15, x_18, x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
lean_inc(x_21);
x_23 = l_Lean_Elab_Deriving_mkDiscrs(x_21, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_25 = l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; uint8_t x_246; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_201 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_8, x_9, x_27);
x_202 = lean_ctor_get(x_201, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_201, 1);
lean_inc(x_203);
lean_dec(x_201);
x_204 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5, x_6, x_7, x_8, x_9, x_203);
x_205 = lean_ctor_get(x_204, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_204, 1);
lean_inc(x_206);
lean_dec(x_204);
x_207 = l_Lean_Elab_Term_getMainModule___rarg(x_9, x_206);
x_208 = lean_ctor_get(x_207, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_207, 1);
lean_inc(x_209);
lean_dec(x_207);
x_210 = lean_mk_string("Parser");
lean_inc(x_13);
x_211 = lean_name_mk_string(x_13, x_210);
x_212 = lean_mk_string("Term");
x_213 = lean_name_mk_string(x_211, x_212);
x_214 = lean_mk_string("app");
x_215 = lean_name_mk_string(x_213, x_214);
x_216 = lean_mk_string("Except.error");
x_217 = lean_string_utf8_byte_size(x_216);
x_218 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_218, 0, x_216);
lean_ctor_set(x_218, 1, x_18);
lean_ctor_set(x_218, 2, x_217);
x_219 = lean_mk_string("Except");
x_220 = lean_name_mk_string(x_11, x_219);
x_221 = lean_mk_string("error");
x_222 = lean_name_mk_string(x_220, x_221);
lean_inc(x_222);
x_223 = l_Lean_addMacroScope(x_208, x_222, x_205);
x_224 = lean_box(0);
x_225 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_225, 0, x_222);
lean_ctor_set(x_225, 1, x_224);
x_226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_226, 0, x_225);
lean_ctor_set(x_226, 1, x_224);
lean_inc(x_202);
x_227 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_227, 0, x_202);
lean_ctor_set(x_227, 1, x_218);
lean_ctor_set(x_227, 2, x_223);
lean_ctor_set(x_227, 3, x_226);
x_228 = lean_mk_string("null");
x_229 = lean_name_mk_string(x_11, x_228);
x_230 = lean_mk_string("strLit");
x_231 = lean_name_mk_string(x_11, x_230);
x_232 = lean_mk_string("\"none of the alternatives matched\"");
x_233 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_233, 0, x_202);
lean_ctor_set(x_233, 1, x_232);
x_234 = lean_unsigned_to_nat(1u);
x_235 = lean_mk_empty_array_with_capacity(x_234);
lean_inc(x_235);
x_236 = lean_array_push(x_235, x_233);
x_237 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_237, 0, x_231);
lean_ctor_set(x_237, 1, x_236);
x_238 = lean_array_push(x_235, x_237);
x_239 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_239, 0, x_229);
lean_ctor_set(x_239, 1, x_238);
x_240 = lean_unsigned_to_nat(2u);
x_241 = lean_mk_empty_array_with_capacity(x_240);
x_242 = lean_array_push(x_241, x_227);
x_243 = lean_array_push(x_242, x_239);
x_244 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_244, 0, x_215);
lean_ctor_set(x_244, 1, x_243);
x_245 = lean_array_get_size(x_26);
x_246 = lean_nat_dec_lt(x_18, x_245);
if (x_246 == 0)
{
lean_dec(x_245);
lean_dec(x_26);
x_28 = x_244;
x_29 = x_209;
goto block_200;
}
else
{
size_t x_247; size_t x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; 
x_247 = lean_usize_of_nat(x_245);
lean_dec(x_245);
x_248 = 0;
x_249 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__1(x_26, x_247, x_248, x_244, x_4, x_5, x_6, x_7, x_8, x_9, x_209);
lean_dec(x_26);
x_250 = lean_ctor_get(x_249, 0);
lean_inc(x_250);
x_251 = lean_ctor_get(x_249, 1);
lean_inc(x_251);
lean_dec(x_249);
x_28 = x_250;
x_29 = x_251;
goto block_200;
}
block_200:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; uint8_t x_185; lean_object* x_186; 
x_30 = lean_ctor_get(x_21, 1);
lean_inc(x_30);
x_31 = l_Lean_Elab_Deriving_mkInductiveApp(x_19, x_30, x_4, x_5, x_6, x_7, x_8, x_9, x_29);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_8, x_9, x_33);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5, x_6, x_7, x_8, x_9, x_36);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_Elab_Term_getMainModule___rarg(x_9, x_39);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_mk_string("Parser");
lean_inc(x_13);
x_44 = lean_name_mk_string(x_13, x_43);
x_45 = lean_mk_string("Command");
lean_inc(x_44);
x_46 = lean_name_mk_string(x_44, x_45);
x_47 = lean_mk_string("declaration");
lean_inc(x_46);
x_48 = lean_name_mk_string(x_46, x_47);
x_49 = lean_mk_string("declModifiers");
lean_inc(x_46);
x_50 = lean_name_mk_string(x_46, x_49);
x_51 = lean_mk_string("null");
x_52 = lean_name_mk_string(x_11, x_51);
x_53 = lean_mk_empty_array_with_capacity(x_18);
lean_inc(x_53);
lean_inc(x_52);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_mk_string("private");
lean_inc(x_55);
lean_inc(x_46);
x_56 = lean_name_mk_string(x_46, x_55);
lean_inc(x_35);
x_57 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_57, 0, x_35);
lean_ctor_set(x_57, 1, x_55);
x_58 = lean_unsigned_to_nat(1u);
x_59 = lean_mk_empty_array_with_capacity(x_58);
lean_inc(x_59);
x_60 = lean_array_push(x_59, x_57);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_56);
lean_ctor_set(x_61, 1, x_60);
lean_inc(x_59);
x_62 = lean_array_push(x_59, x_61);
lean_inc(x_52);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_52);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_unsigned_to_nat(6u);
x_65 = lean_mk_empty_array_with_capacity(x_64);
lean_inc(x_54);
x_66 = lean_array_push(x_65, x_54);
lean_inc(x_54);
x_67 = lean_array_push(x_66, x_54);
x_68 = lean_array_push(x_67, x_63);
lean_inc(x_54);
x_69 = lean_array_push(x_68, x_54);
lean_inc(x_54);
x_70 = lean_array_push(x_69, x_54);
lean_inc(x_54);
x_71 = lean_array_push(x_70, x_54);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_50);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_mk_string("def");
lean_inc(x_73);
lean_inc(x_46);
x_74 = lean_name_mk_string(x_46, x_73);
lean_inc(x_35);
x_75 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_75, 0, x_35);
lean_ctor_set(x_75, 1, x_73);
x_76 = lean_mk_string("declId");
lean_inc(x_46);
x_77 = lean_name_mk_string(x_46, x_76);
x_78 = lean_ctor_get(x_3, 1);
x_79 = l_Lean_instInhabitedName;
x_80 = lean_array_get(x_79, x_78, x_18);
x_81 = lean_mk_syntax_ident(x_80);
x_82 = lean_unsigned_to_nat(2u);
x_83 = lean_mk_empty_array_with_capacity(x_82);
lean_inc(x_83);
x_84 = lean_array_push(x_83, x_81);
lean_inc(x_54);
x_85 = lean_array_push(x_84, x_54);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_77);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_mk_string("optDeclSig");
lean_inc(x_46);
x_88 = lean_name_mk_string(x_46, x_87);
x_89 = lean_ctor_get(x_21, 0);
lean_inc(x_89);
lean_dec(x_21);
x_90 = l_Array_append___rarg(x_53, x_89);
lean_dec(x_89);
x_91 = lean_mk_string("Term");
x_92 = lean_name_mk_string(x_44, x_91);
x_93 = lean_mk_string("explicitBinder");
lean_inc(x_92);
x_94 = lean_name_mk_string(x_92, x_93);
x_95 = lean_mk_string("(");
lean_inc(x_35);
x_96 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_96, 0, x_35);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_mk_string("json");
x_98 = lean_string_utf8_byte_size(x_97);
lean_inc(x_97);
x_99 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_18);
lean_ctor_set(x_99, 2, x_98);
x_100 = lean_name_mk_string(x_11, x_97);
lean_inc(x_38);
lean_inc(x_41);
x_101 = l_Lean_addMacroScope(x_41, x_100, x_38);
x_102 = lean_box(0);
lean_inc(x_35);
x_103 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_103, 0, x_35);
lean_ctor_set(x_103, 1, x_99);
lean_ctor_set(x_103, 2, x_101);
lean_ctor_set(x_103, 3, x_102);
lean_inc(x_59);
x_104 = lean_array_push(x_59, x_103);
lean_inc(x_52);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_52);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_mk_string(":");
lean_inc(x_35);
x_107 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_107, 0, x_35);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_mk_string("Json");
x_109 = lean_string_utf8_byte_size(x_108);
lean_inc(x_108);
x_110 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_18);
lean_ctor_set(x_110, 2, x_109);
lean_inc(x_108);
x_111 = lean_name_mk_string(x_11, x_108);
lean_inc(x_38);
lean_inc(x_41);
x_112 = l_Lean_addMacroScope(x_41, x_111, x_38);
x_113 = lean_name_mk_string(x_13, x_108);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_102);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_102);
lean_inc(x_35);
x_116 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_116, 0, x_35);
lean_ctor_set(x_116, 1, x_110);
lean_ctor_set(x_116, 2, x_112);
lean_ctor_set(x_116, 3, x_115);
lean_inc(x_83);
x_117 = lean_array_push(x_83, x_107);
lean_inc(x_117);
x_118 = lean_array_push(x_117, x_116);
lean_inc(x_52);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_52);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_mk_string(")");
lean_inc(x_35);
x_121 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_121, 0, x_35);
lean_ctor_set(x_121, 1, x_120);
x_122 = lean_unsigned_to_nat(5u);
x_123 = lean_mk_empty_array_with_capacity(x_122);
x_124 = lean_array_push(x_123, x_96);
x_125 = lean_array_push(x_124, x_105);
x_126 = lean_array_push(x_125, x_119);
lean_inc(x_54);
x_127 = lean_array_push(x_126, x_54);
x_128 = lean_array_push(x_127, x_121);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_94);
lean_ctor_set(x_129, 1, x_128);
x_130 = lean_array_push(x_90, x_129);
lean_inc(x_52);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_52);
lean_ctor_set(x_131, 1, x_130);
x_132 = lean_mk_string("typeSpec");
lean_inc(x_92);
x_133 = lean_name_mk_string(x_92, x_132);
x_134 = lean_mk_string("app");
x_135 = lean_name_mk_string(x_92, x_134);
x_136 = lean_mk_string("Except");
x_137 = lean_string_utf8_byte_size(x_136);
lean_inc(x_136);
x_138 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_18);
lean_ctor_set(x_138, 2, x_137);
x_139 = lean_name_mk_string(x_11, x_136);
lean_inc(x_38);
lean_inc(x_139);
lean_inc(x_41);
x_140 = l_Lean_addMacroScope(x_41, x_139, x_38);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_139);
lean_ctor_set(x_141, 1, x_102);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_102);
lean_inc(x_35);
x_143 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_143, 0, x_35);
lean_ctor_set(x_143, 1, x_138);
lean_ctor_set(x_143, 2, x_140);
lean_ctor_set(x_143, 3, x_142);
x_144 = lean_mk_string("String");
x_145 = lean_string_utf8_byte_size(x_144);
lean_inc(x_144);
x_146 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_18);
lean_ctor_set(x_146, 2, x_145);
x_147 = lean_name_mk_string(x_11, x_144);
lean_inc(x_147);
x_148 = l_Lean_addMacroScope(x_41, x_147, x_38);
x_149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_149, 0, x_147);
lean_ctor_set(x_149, 1, x_102);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_102);
lean_inc(x_35);
x_151 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_151, 0, x_35);
lean_ctor_set(x_151, 1, x_146);
lean_ctor_set(x_151, 2, x_148);
lean_ctor_set(x_151, 3, x_150);
lean_inc(x_83);
x_152 = lean_array_push(x_83, x_151);
x_153 = lean_array_push(x_152, x_32);
lean_inc(x_52);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_52);
lean_ctor_set(x_154, 1, x_153);
lean_inc(x_83);
x_155 = lean_array_push(x_83, x_143);
x_156 = lean_array_push(x_155, x_154);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_135);
lean_ctor_set(x_157, 1, x_156);
x_158 = lean_array_push(x_117, x_157);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_133);
lean_ctor_set(x_159, 1, x_158);
lean_inc(x_59);
x_160 = lean_array_push(x_59, x_159);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_52);
lean_ctor_set(x_161, 1, x_160);
lean_inc(x_83);
x_162 = lean_array_push(x_83, x_131);
x_163 = lean_array_push(x_162, x_161);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_88);
lean_ctor_set(x_164, 1, x_163);
x_165 = lean_mk_string("declValSimple");
x_166 = lean_name_mk_string(x_46, x_165);
x_167 = lean_mk_string(":=");
x_168 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_168, 0, x_35);
lean_ctor_set(x_168, 1, x_167);
x_169 = lean_unsigned_to_nat(3u);
x_170 = lean_mk_empty_array_with_capacity(x_169);
x_171 = lean_array_push(x_170, x_168);
x_172 = lean_array_push(x_171, x_28);
x_173 = lean_array_push(x_172, x_54);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_166);
lean_ctor_set(x_174, 1, x_173);
x_175 = lean_unsigned_to_nat(4u);
x_176 = lean_mk_empty_array_with_capacity(x_175);
x_177 = lean_array_push(x_176, x_75);
x_178 = lean_array_push(x_177, x_86);
x_179 = lean_array_push(x_178, x_164);
x_180 = lean_array_push(x_179, x_174);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_74);
lean_ctor_set(x_181, 1, x_180);
x_182 = lean_array_push(x_83, x_72);
x_183 = lean_array_push(x_182, x_181);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_48);
lean_ctor_set(x_184, 1, x_183);
x_185 = 1;
x_186 = l_Lean_Elab_Deriving_mkInstanceCmds(x_3, x_15, x_2, x_185, x_4, x_5, x_6, x_7, x_8, x_9, x_42);
if (lean_obj_tag(x_186) == 0)
{
uint8_t x_187; 
x_187 = !lean_is_exclusive(x_186);
if (x_187 == 0)
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_188 = lean_ctor_get(x_186, 0);
x_189 = lean_array_push(x_59, x_184);
x_190 = l_Array_append___rarg(x_189, x_188);
lean_dec(x_188);
lean_ctor_set(x_186, 0, x_190);
return x_186;
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_191 = lean_ctor_get(x_186, 0);
x_192 = lean_ctor_get(x_186, 1);
lean_inc(x_192);
lean_inc(x_191);
lean_dec(x_186);
x_193 = lean_array_push(x_59, x_184);
x_194 = l_Array_append___rarg(x_193, x_191);
lean_dec(x_191);
x_195 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_195, 0, x_194);
lean_ctor_set(x_195, 1, x_192);
return x_195;
}
}
else
{
uint8_t x_196; 
lean_dec(x_184);
lean_dec(x_59);
x_196 = !lean_is_exclusive(x_186);
if (x_196 == 0)
{
return x_186;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_197 = lean_ctor_get(x_186, 0);
x_198 = lean_ctor_get(x_186, 1);
lean_inc(x_198);
lean_inc(x_197);
lean_dec(x_186);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_197);
lean_ctor_set(x_199, 1, x_198);
return x_199;
}
}
}
}
else
{
uint8_t x_252; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_252 = !lean_is_exclusive(x_25);
if (x_252 == 0)
{
return x_25;
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_253 = lean_ctor_get(x_25, 0);
x_254 = lean_ctor_get(x_25, 1);
lean_inc(x_254);
lean_inc(x_253);
lean_dec(x_25);
x_255 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_255, 0, x_253);
lean_ctor_set(x_255, 1, x_254);
return x_255;
}
}
}
else
{
uint8_t x_256; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_256 = !lean_is_exclusive(x_23);
if (x_256 == 0)
{
return x_23;
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; 
x_257 = lean_ctor_get(x_23, 0);
x_258 = lean_ctor_get(x_23, 1);
lean_inc(x_258);
lean_inc(x_257);
lean_dec(x_23);
x_259 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_259, 0, x_257);
lean_ctor_set(x_259, 1, x_258);
return x_259;
}
}
}
else
{
uint8_t x_260; 
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_260 = !lean_is_exclusive(x_20);
if (x_260 == 0)
{
return x_20;
}
else
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; 
x_261 = lean_ctor_get(x_20, 0);
x_262 = lean_ctor_get(x_20, 1);
lean_inc(x_262);
lean_inc(x_261);
lean_dec(x_20);
x_263 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_263, 0, x_261);
lean_ctor_set(x_263, 1, x_262);
return x_263;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_11 = lean_box(0);
x_12 = lean_mk_string("Lean");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_mk_string("FromJson");
lean_inc(x_13);
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_ctor_get(x_3, 0);
x_17 = l_Lean_instInhabitedInductiveVal;
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_array_get(x_17, x_16, x_18);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_19);
lean_inc(x_15);
x_20 = l_Lean_Elab_Deriving_mkHeader___rarg(x_15, x_18, x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; size_t x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; size_t x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; uint8_t x_250; lean_object* x_251; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_st_ref_get(x_9, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
lean_dec(x_24);
x_27 = 0;
x_28 = l_Lean_getStructureFieldsFlattened(x_26, x_1, x_27);
x_29 = lean_array_get_size(x_28);
x_30 = lean_usize_of_nat(x_29);
lean_dec(x_29);
x_31 = 0;
x_32 = x_28;
lean_inc(x_32);
x_33 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__2(x_30, x_31, x_32);
x_34 = x_33;
x_35 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkInductiveApp___spec__1(x_30, x_31, x_32);
x_36 = x_35;
x_37 = lean_ctor_get(x_21, 1);
lean_inc(x_37);
x_38 = l_Lean_Elab_Deriving_mkInductiveApp(x_19, x_37, x_4, x_5, x_6, x_7, x_8, x_9, x_25);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_8, x_9, x_40);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5, x_6, x_7, x_8, x_9, x_43);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_Elab_Term_getMainModule___rarg(x_9, x_46);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_mk_string("Parser");
lean_inc(x_13);
x_51 = lean_name_mk_string(x_13, x_50);
x_52 = lean_mk_string("Command");
lean_inc(x_51);
x_53 = lean_name_mk_string(x_51, x_52);
x_54 = lean_mk_string("declaration");
lean_inc(x_53);
x_55 = lean_name_mk_string(x_53, x_54);
x_56 = lean_mk_string("declModifiers");
lean_inc(x_53);
x_57 = lean_name_mk_string(x_53, x_56);
x_58 = lean_mk_string("null");
x_59 = lean_name_mk_string(x_11, x_58);
x_60 = lean_mk_empty_array_with_capacity(x_18);
lean_inc(x_60);
lean_inc(x_59);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_mk_string("private");
lean_inc(x_62);
lean_inc(x_53);
x_63 = lean_name_mk_string(x_53, x_62);
lean_inc(x_42);
x_64 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_64, 0, x_42);
lean_ctor_set(x_64, 1, x_62);
x_65 = lean_unsigned_to_nat(1u);
x_66 = lean_mk_empty_array_with_capacity(x_65);
lean_inc(x_66);
x_67 = lean_array_push(x_66, x_64);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_63);
lean_ctor_set(x_68, 1, x_67);
lean_inc(x_66);
x_69 = lean_array_push(x_66, x_68);
lean_inc(x_59);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_59);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_unsigned_to_nat(6u);
x_72 = lean_mk_empty_array_with_capacity(x_71);
lean_inc(x_61);
lean_inc(x_72);
x_73 = lean_array_push(x_72, x_61);
lean_inc(x_61);
x_74 = lean_array_push(x_73, x_61);
x_75 = lean_array_push(x_74, x_70);
lean_inc(x_61);
x_76 = lean_array_push(x_75, x_61);
lean_inc(x_61);
x_77 = lean_array_push(x_76, x_61);
lean_inc(x_61);
x_78 = lean_array_push(x_77, x_61);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_57);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_mk_string("def");
lean_inc(x_80);
lean_inc(x_53);
x_81 = lean_name_mk_string(x_53, x_80);
lean_inc(x_42);
x_82 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_82, 0, x_42);
lean_ctor_set(x_82, 1, x_80);
x_83 = lean_mk_string("declId");
lean_inc(x_53);
x_84 = lean_name_mk_string(x_53, x_83);
x_85 = lean_ctor_get(x_3, 1);
x_86 = l_Lean_instInhabitedName;
x_87 = lean_array_get(x_86, x_85, x_18);
x_88 = lean_mk_syntax_ident(x_87);
x_89 = lean_unsigned_to_nat(2u);
x_90 = lean_mk_empty_array_with_capacity(x_89);
lean_inc(x_90);
x_91 = lean_array_push(x_90, x_88);
lean_inc(x_61);
x_92 = lean_array_push(x_91, x_61);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_84);
lean_ctor_set(x_93, 1, x_92);
x_94 = lean_mk_string("optDeclSig");
lean_inc(x_53);
x_95 = lean_name_mk_string(x_53, x_94);
x_96 = lean_ctor_get(x_21, 0);
lean_inc(x_96);
lean_dec(x_21);
lean_inc(x_60);
x_97 = l_Array_append___rarg(x_60, x_96);
lean_dec(x_96);
x_98 = lean_mk_string("Term");
x_99 = lean_name_mk_string(x_51, x_98);
x_100 = lean_mk_string("explicitBinder");
lean_inc(x_99);
x_101 = lean_name_mk_string(x_99, x_100);
x_102 = lean_mk_string("(");
lean_inc(x_42);
x_103 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_103, 0, x_42);
lean_ctor_set(x_103, 1, x_102);
x_104 = lean_mk_string("j");
x_105 = lean_string_utf8_byte_size(x_104);
lean_inc(x_104);
x_106 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_18);
lean_ctor_set(x_106, 2, x_105);
x_107 = lean_name_mk_string(x_11, x_104);
lean_inc(x_45);
lean_inc(x_48);
x_108 = l_Lean_addMacroScope(x_48, x_107, x_45);
x_109 = lean_box(0);
lean_inc(x_42);
x_110 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_110, 0, x_42);
lean_ctor_set(x_110, 1, x_106);
lean_ctor_set(x_110, 2, x_108);
lean_ctor_set(x_110, 3, x_109);
lean_inc(x_110);
lean_inc(x_66);
x_111 = lean_array_push(x_66, x_110);
lean_inc(x_59);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_59);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_mk_string(":");
lean_inc(x_42);
x_114 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_114, 0, x_42);
lean_ctor_set(x_114, 1, x_113);
x_115 = lean_mk_string("Json");
x_116 = lean_string_utf8_byte_size(x_115);
lean_inc(x_115);
x_117 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_18);
lean_ctor_set(x_117, 2, x_116);
lean_inc(x_115);
x_118 = lean_name_mk_string(x_11, x_115);
lean_inc(x_45);
lean_inc(x_48);
x_119 = l_Lean_addMacroScope(x_48, x_118, x_45);
x_120 = lean_name_mk_string(x_13, x_115);
lean_inc(x_120);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_109);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_109);
lean_inc(x_42);
x_123 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_123, 0, x_42);
lean_ctor_set(x_123, 1, x_117);
lean_ctor_set(x_123, 2, x_119);
lean_ctor_set(x_123, 3, x_122);
lean_inc(x_90);
x_124 = lean_array_push(x_90, x_114);
lean_inc(x_124);
x_125 = lean_array_push(x_124, x_123);
lean_inc(x_59);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_59);
lean_ctor_set(x_126, 1, x_125);
x_127 = lean_mk_string(")");
lean_inc(x_42);
x_128 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_128, 0, x_42);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_unsigned_to_nat(5u);
x_130 = lean_mk_empty_array_with_capacity(x_129);
x_131 = lean_array_push(x_130, x_103);
x_132 = lean_array_push(x_131, x_112);
x_133 = lean_array_push(x_132, x_126);
lean_inc(x_61);
x_134 = lean_array_push(x_133, x_61);
x_135 = lean_array_push(x_134, x_128);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_101);
lean_ctor_set(x_136, 1, x_135);
x_137 = lean_array_push(x_97, x_136);
lean_inc(x_59);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_59);
lean_ctor_set(x_138, 1, x_137);
x_139 = lean_mk_string("typeSpec");
lean_inc(x_99);
x_140 = lean_name_mk_string(x_99, x_139);
x_141 = lean_mk_string("app");
lean_inc(x_99);
x_142 = lean_name_mk_string(x_99, x_141);
x_143 = lean_mk_string("Except");
x_144 = lean_string_utf8_byte_size(x_143);
lean_inc(x_143);
x_145 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_18);
lean_ctor_set(x_145, 2, x_144);
x_146 = lean_name_mk_string(x_11, x_143);
lean_inc(x_45);
lean_inc(x_146);
lean_inc(x_48);
x_147 = l_Lean_addMacroScope(x_48, x_146, x_45);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_146);
lean_ctor_set(x_148, 1, x_109);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_109);
lean_inc(x_42);
x_150 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_150, 0, x_42);
lean_ctor_set(x_150, 1, x_145);
lean_ctor_set(x_150, 2, x_147);
lean_ctor_set(x_150, 3, x_149);
x_151 = lean_mk_string("String");
x_152 = lean_string_utf8_byte_size(x_151);
lean_inc(x_151);
x_153 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set(x_153, 1, x_18);
lean_ctor_set(x_153, 2, x_152);
x_154 = lean_name_mk_string(x_11, x_151);
lean_inc(x_45);
lean_inc(x_154);
lean_inc(x_48);
x_155 = l_Lean_addMacroScope(x_48, x_154, x_45);
x_156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_109);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_109);
lean_inc(x_42);
x_158 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_158, 0, x_42);
lean_ctor_set(x_158, 1, x_153);
lean_ctor_set(x_158, 2, x_155);
lean_ctor_set(x_158, 3, x_157);
lean_inc(x_90);
x_159 = lean_array_push(x_90, x_158);
x_160 = lean_array_push(x_159, x_39);
lean_inc(x_59);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_59);
lean_ctor_set(x_161, 1, x_160);
lean_inc(x_90);
x_162 = lean_array_push(x_90, x_150);
x_163 = lean_array_push(x_162, x_161);
lean_inc(x_142);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_142);
lean_ctor_set(x_164, 1, x_163);
x_165 = lean_array_push(x_124, x_164);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_140);
lean_ctor_set(x_166, 1, x_165);
lean_inc(x_66);
x_167 = lean_array_push(x_66, x_166);
lean_inc(x_59);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_59);
lean_ctor_set(x_168, 1, x_167);
lean_inc(x_90);
x_169 = lean_array_push(x_90, x_138);
x_170 = lean_array_push(x_169, x_168);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_95);
lean_ctor_set(x_171, 1, x_170);
x_172 = lean_mk_string("declValSimple");
x_173 = lean_name_mk_string(x_53, x_172);
x_174 = lean_mk_string(":=");
lean_inc(x_42);
x_175 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_175, 0, x_42);
lean_ctor_set(x_175, 1, x_174);
x_176 = lean_mk_string("do");
lean_inc(x_176);
lean_inc(x_99);
x_177 = lean_name_mk_string(x_99, x_176);
lean_inc(x_42);
x_178 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_178, 0, x_42);
lean_ctor_set(x_178, 1, x_176);
x_179 = lean_mk_string("doSeqIndent");
lean_inc(x_99);
x_180 = lean_name_mk_string(x_99, x_179);
x_181 = l_Array_zip___rarg(x_36, x_34);
lean_dec(x_34);
x_182 = lean_array_get_size(x_181);
x_183 = lean_usize_of_nat(x_182);
lean_dec(x_182);
x_184 = x_181;
lean_inc(x_99);
lean_inc(x_90);
lean_inc(x_66);
lean_inc(x_61);
lean_inc(x_59);
lean_inc(x_42);
x_185 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__3(x_42, x_45, x_48, x_59, x_61, x_66, x_90, x_99, x_109, x_110, x_120, x_109, x_142, x_183, x_31, x_184);
x_186 = x_185;
lean_inc(x_60);
x_187 = l_Array_append___rarg(x_60, x_186);
lean_dec(x_186);
x_188 = lean_mk_string("doSeqItem");
lean_inc(x_99);
x_189 = lean_name_mk_string(x_99, x_188);
x_190 = lean_mk_string("doReturn");
lean_inc(x_99);
x_191 = lean_name_mk_string(x_99, x_190);
x_192 = lean_mk_string("return");
lean_inc(x_42);
x_193 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_193, 0, x_42);
lean_ctor_set(x_193, 1, x_192);
x_194 = lean_mk_string("structInst");
lean_inc(x_99);
x_195 = lean_name_mk_string(x_99, x_194);
x_196 = lean_mk_string("{");
lean_inc(x_42);
x_197 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_197, 0, x_42);
lean_ctor_set(x_197, 1, x_196);
x_198 = l_Array_zip___rarg(x_36, x_36);
lean_dec(x_36);
x_199 = lean_array_get_size(x_198);
x_200 = lean_usize_of_nat(x_199);
lean_dec(x_199);
x_201 = x_198;
lean_inc(x_175);
lean_inc(x_99);
lean_inc(x_90);
lean_inc(x_61);
x_202 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__4(x_61, x_90, x_99, x_175, x_200, x_31, x_201);
x_203 = x_202;
x_204 = l_Array_append___rarg(x_60, x_203);
lean_dec(x_203);
lean_inc(x_59);
x_205 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_205, 0, x_59);
lean_ctor_set(x_205, 1, x_204);
x_206 = lean_mk_string("optEllipsis");
x_207 = lean_name_mk_string(x_99, x_206);
lean_inc(x_61);
lean_inc(x_66);
x_208 = lean_array_push(x_66, x_61);
x_209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_209, 0, x_207);
lean_ctor_set(x_209, 1, x_208);
x_210 = lean_mk_string("}");
x_211 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_211, 0, x_42);
lean_ctor_set(x_211, 1, x_210);
x_212 = lean_array_push(x_72, x_197);
lean_inc(x_61);
x_213 = lean_array_push(x_212, x_61);
x_214 = lean_array_push(x_213, x_205);
x_215 = lean_array_push(x_214, x_209);
lean_inc(x_61);
x_216 = lean_array_push(x_215, x_61);
x_217 = lean_array_push(x_216, x_211);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_195);
lean_ctor_set(x_218, 1, x_217);
lean_inc(x_66);
x_219 = lean_array_push(x_66, x_218);
lean_inc(x_59);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_59);
lean_ctor_set(x_220, 1, x_219);
lean_inc(x_90);
x_221 = lean_array_push(x_90, x_193);
x_222 = lean_array_push(x_221, x_220);
x_223 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_223, 0, x_191);
lean_ctor_set(x_223, 1, x_222);
lean_inc(x_90);
x_224 = lean_array_push(x_90, x_223);
lean_inc(x_61);
x_225 = lean_array_push(x_224, x_61);
x_226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_226, 0, x_189);
lean_ctor_set(x_226, 1, x_225);
x_227 = lean_array_push(x_187, x_226);
x_228 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_228, 0, x_59);
lean_ctor_set(x_228, 1, x_227);
lean_inc(x_66);
x_229 = lean_array_push(x_66, x_228);
x_230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_230, 0, x_180);
lean_ctor_set(x_230, 1, x_229);
lean_inc(x_90);
x_231 = lean_array_push(x_90, x_178);
x_232 = lean_array_push(x_231, x_230);
x_233 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_233, 0, x_177);
lean_ctor_set(x_233, 1, x_232);
x_234 = lean_unsigned_to_nat(3u);
x_235 = lean_mk_empty_array_with_capacity(x_234);
x_236 = lean_array_push(x_235, x_175);
x_237 = lean_array_push(x_236, x_233);
x_238 = lean_array_push(x_237, x_61);
x_239 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_239, 0, x_173);
lean_ctor_set(x_239, 1, x_238);
x_240 = lean_unsigned_to_nat(4u);
x_241 = lean_mk_empty_array_with_capacity(x_240);
x_242 = lean_array_push(x_241, x_82);
x_243 = lean_array_push(x_242, x_93);
x_244 = lean_array_push(x_243, x_171);
x_245 = lean_array_push(x_244, x_239);
x_246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_246, 0, x_81);
lean_ctor_set(x_246, 1, x_245);
x_247 = lean_array_push(x_90, x_79);
x_248 = lean_array_push(x_247, x_246);
x_249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_249, 0, x_55);
lean_ctor_set(x_249, 1, x_248);
x_250 = 1;
x_251 = l_Lean_Elab_Deriving_mkInstanceCmds(x_3, x_15, x_2, x_250, x_4, x_5, x_6, x_7, x_8, x_9, x_49);
if (lean_obj_tag(x_251) == 0)
{
uint8_t x_252; 
x_252 = !lean_is_exclusive(x_251);
if (x_252 == 0)
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_253 = lean_ctor_get(x_251, 0);
x_254 = lean_array_push(x_66, x_249);
x_255 = l_Array_append___rarg(x_254, x_253);
lean_dec(x_253);
lean_ctor_set(x_251, 0, x_255);
return x_251;
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; 
x_256 = lean_ctor_get(x_251, 0);
x_257 = lean_ctor_get(x_251, 1);
lean_inc(x_257);
lean_inc(x_256);
lean_dec(x_251);
x_258 = lean_array_push(x_66, x_249);
x_259 = l_Array_append___rarg(x_258, x_256);
lean_dec(x_256);
x_260 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_260, 0, x_259);
lean_ctor_set(x_260, 1, x_257);
return x_260;
}
}
else
{
uint8_t x_261; 
lean_dec(x_249);
lean_dec(x_66);
x_261 = !lean_is_exclusive(x_251);
if (x_261 == 0)
{
return x_251;
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; 
x_262 = lean_ctor_get(x_251, 0);
x_263 = lean_ctor_get(x_251, 1);
lean_inc(x_263);
lean_inc(x_262);
lean_dec(x_251);
x_264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_264, 0, x_262);
lean_ctor_set(x_264, 1, x_263);
return x_264;
}
}
}
else
{
uint8_t x_265; 
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_265 = !lean_is_exclusive(x_20);
if (x_265 == 0)
{
return x_20;
}
else
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_266 = lean_ctor_get(x_20, 0);
x_267 = lean_ctor_get(x_20, 1);
lean_inc(x_267);
lean_inc(x_266);
lean_dec(x_20);
x_268 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_268, 0, x_266);
lean_ctor_set(x_268, 1, x_267);
return x_268;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_array_get_size(x_1);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_dec_eq(x_5, x_6);
lean_dec(x_5);
if (x_7 == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = 0;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_11 = lean_st_ref_get(x_3, x_4);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_instInhabitedName;
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_get(x_15, x_1, x_16);
lean_inc(x_17);
x_18 = l_Lean_isStructure(x_14, x_17);
if (x_18 == 0)
{
lean_object* x_19; 
lean_inc(x_2);
lean_inc(x_17);
x_19 = l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___spec__1(x_17, x_2, x_3, x_13);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_box(0);
x_23 = lean_mk_string("fromJson");
x_24 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_mkContext___boxed), 9, 2);
lean_closure_set(x_24, 0, x_23);
lean_closure_set(x_24, 1, x_17);
x_25 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___lambda__1___boxed), 10, 2);
lean_closure_set(x_25, 0, x_20);
lean_closure_set(x_25, 1, x_1);
x_26 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_26, 0, x_24);
lean_closure_set(x_26, 1, x_25);
lean_inc(x_2);
x_27 = l_Lean_Elab_Command_liftTermElabM___rarg(x_22, x_26, x_2, x_3, x_21);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_27, 1);
x_31 = lean_array_get_size(x_29);
x_32 = lean_nat_dec_lt(x_16, x_31);
if (x_32 == 0)
{
uint8_t x_33; lean_object* x_34; 
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_3);
lean_dec(x_2);
x_33 = 1;
x_34 = lean_box(x_33);
lean_ctor_set(x_27, 0, x_34);
return x_27;
}
else
{
uint8_t x_35; 
x_35 = lean_nat_dec_le(x_31, x_31);
if (x_35 == 0)
{
uint8_t x_36; lean_object* x_37; 
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_3);
lean_dec(x_2);
x_36 = 1;
x_37 = lean_box(x_36);
lean_ctor_set(x_27, 0, x_37);
return x_27;
}
else
{
size_t x_38; size_t x_39; lean_object* x_40; lean_object* x_41; 
lean_free_object(x_27);
x_38 = 0;
x_39 = lean_usize_of_nat(x_31);
lean_dec(x_31);
x_40 = lean_box(0);
x_41 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(x_29, x_38, x_39, x_40, x_2, x_3, x_30);
lean_dec(x_2);
lean_dec(x_29);
if (lean_obj_tag(x_41) == 0)
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_41, 0);
lean_dec(x_43);
x_44 = 1;
x_45 = lean_box(x_44);
lean_ctor_set(x_41, 0, x_45);
return x_41;
}
else
{
lean_object* x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; 
x_46 = lean_ctor_get(x_41, 1);
lean_inc(x_46);
lean_dec(x_41);
x_47 = 1;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_46);
return x_49;
}
}
else
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_41);
if (x_50 == 0)
{
return x_41;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_41, 0);
x_52 = lean_ctor_get(x_41, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_41);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_54 = lean_ctor_get(x_27, 0);
x_55 = lean_ctor_get(x_27, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_27);
x_56 = lean_array_get_size(x_54);
x_57 = lean_nat_dec_lt(x_16, x_56);
if (x_57 == 0)
{
uint8_t x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_56);
lean_dec(x_54);
lean_dec(x_3);
lean_dec(x_2);
x_58 = 1;
x_59 = lean_box(x_58);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_55);
return x_60;
}
else
{
uint8_t x_61; 
x_61 = lean_nat_dec_le(x_56, x_56);
if (x_61 == 0)
{
uint8_t x_62; lean_object* x_63; lean_object* x_64; 
lean_dec(x_56);
lean_dec(x_54);
lean_dec(x_3);
lean_dec(x_2);
x_62 = 1;
x_63 = lean_box(x_62);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_55);
return x_64;
}
else
{
size_t x_65; size_t x_66; lean_object* x_67; lean_object* x_68; 
x_65 = 0;
x_66 = lean_usize_of_nat(x_56);
lean_dec(x_56);
x_67 = lean_box(0);
x_68 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(x_54, x_65, x_66, x_67, x_2, x_3, x_55);
lean_dec(x_2);
lean_dec(x_54);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; 
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 lean_ctor_release(x_68, 1);
 x_70 = x_68;
} else {
 lean_dec_ref(x_68);
 x_70 = lean_box(0);
}
x_71 = 1;
x_72 = lean_box(x_71);
if (lean_is_scalar(x_70)) {
 x_73 = lean_alloc_ctor(0, 2, 0);
} else {
 x_73 = x_70;
}
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_69);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
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
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_3);
lean_dec(x_2);
x_78 = !lean_is_exclusive(x_27);
if (x_78 == 0)
{
return x_27;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_27, 0);
x_80 = lean_ctor_get(x_27, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_27);
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
lean_dec(x_17);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_82 = !lean_is_exclusive(x_19);
if (x_82 == 0)
{
return x_19;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_19, 0);
x_84 = lean_ctor_get(x_19, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_19);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_86 = lean_box(0);
x_87 = lean_mk_string("fromJson");
lean_inc(x_17);
x_88 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_mkContext___boxed), 9, 2);
lean_closure_set(x_88, 0, x_87);
lean_closure_set(x_88, 1, x_17);
x_89 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___lambda__2___boxed), 10, 2);
lean_closure_set(x_89, 0, x_17);
lean_closure_set(x_89, 1, x_1);
x_90 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_90, 0, x_88);
lean_closure_set(x_90, 1, x_89);
lean_inc(x_2);
x_91 = l_Lean_Elab_Command_liftTermElabM___rarg(x_86, x_90, x_2, x_3, x_13);
if (lean_obj_tag(x_91) == 0)
{
uint8_t x_92; 
x_92 = !lean_is_exclusive(x_91);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; 
x_93 = lean_ctor_get(x_91, 0);
x_94 = lean_ctor_get(x_91, 1);
x_95 = lean_array_get_size(x_93);
x_96 = lean_nat_dec_lt(x_16, x_95);
if (x_96 == 0)
{
uint8_t x_97; lean_object* x_98; 
lean_dec(x_95);
lean_dec(x_93);
lean_dec(x_3);
lean_dec(x_2);
x_97 = 1;
x_98 = lean_box(x_97);
lean_ctor_set(x_91, 0, x_98);
return x_91;
}
else
{
uint8_t x_99; 
x_99 = lean_nat_dec_le(x_95, x_95);
if (x_99 == 0)
{
uint8_t x_100; lean_object* x_101; 
lean_dec(x_95);
lean_dec(x_93);
lean_dec(x_3);
lean_dec(x_2);
x_100 = 1;
x_101 = lean_box(x_100);
lean_ctor_set(x_91, 0, x_101);
return x_91;
}
else
{
size_t x_102; size_t x_103; lean_object* x_104; lean_object* x_105; 
lean_free_object(x_91);
x_102 = 0;
x_103 = lean_usize_of_nat(x_95);
lean_dec(x_95);
x_104 = lean_box(0);
x_105 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(x_93, x_102, x_103, x_104, x_2, x_3, x_94);
lean_dec(x_2);
lean_dec(x_93);
if (lean_obj_tag(x_105) == 0)
{
uint8_t x_106; 
x_106 = !lean_is_exclusive(x_105);
if (x_106 == 0)
{
lean_object* x_107; uint8_t x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_105, 0);
lean_dec(x_107);
x_108 = 1;
x_109 = lean_box(x_108);
lean_ctor_set(x_105, 0, x_109);
return x_105;
}
else
{
lean_object* x_110; uint8_t x_111; lean_object* x_112; lean_object* x_113; 
x_110 = lean_ctor_get(x_105, 1);
lean_inc(x_110);
lean_dec(x_105);
x_111 = 1;
x_112 = lean_box(x_111);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_110);
return x_113;
}
}
else
{
uint8_t x_114; 
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
}
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; 
x_118 = lean_ctor_get(x_91, 0);
x_119 = lean_ctor_get(x_91, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_91);
x_120 = lean_array_get_size(x_118);
x_121 = lean_nat_dec_lt(x_16, x_120);
if (x_121 == 0)
{
uint8_t x_122; lean_object* x_123; lean_object* x_124; 
lean_dec(x_120);
lean_dec(x_118);
lean_dec(x_3);
lean_dec(x_2);
x_122 = 1;
x_123 = lean_box(x_122);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_119);
return x_124;
}
else
{
uint8_t x_125; 
x_125 = lean_nat_dec_le(x_120, x_120);
if (x_125 == 0)
{
uint8_t x_126; lean_object* x_127; lean_object* x_128; 
lean_dec(x_120);
lean_dec(x_118);
lean_dec(x_3);
lean_dec(x_2);
x_126 = 1;
x_127 = lean_box(x_126);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_119);
return x_128;
}
else
{
size_t x_129; size_t x_130; lean_object* x_131; lean_object* x_132; 
x_129 = 0;
x_130 = lean_usize_of_nat(x_120);
lean_dec(x_120);
x_131 = lean_box(0);
x_132 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(x_118, x_129, x_130, x_131, x_2, x_3, x_119);
lean_dec(x_2);
lean_dec(x_118);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; lean_object* x_134; uint8_t x_135; lean_object* x_136; lean_object* x_137; 
x_133 = lean_ctor_get(x_132, 1);
lean_inc(x_133);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_134 = x_132;
} else {
 lean_dec_ref(x_132);
 x_134 = lean_box(0);
}
x_135 = 1;
x_136 = lean_box(x_135);
if (lean_is_scalar(x_134)) {
 x_137 = lean_alloc_ctor(0, 2, 0);
} else {
 x_137 = x_134;
}
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_133);
return x_137;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_138 = lean_ctor_get(x_132, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_132, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_140 = x_132;
} else {
 lean_dec_ref(x_132);
 x_140 = lean_box(0);
}
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_138);
lean_ctor_set(x_141, 1, x_139);
return x_141;
}
}
}
}
}
else
{
uint8_t x_142; 
lean_dec(x_3);
lean_dec(x_2);
x_142 = !lean_is_exclusive(x_91);
if (x_142 == 0)
{
return x_91;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_143 = lean_ctor_get(x_91, 0);
x_144 = lean_ctor_get(x_91, 1);
lean_inc(x_144);
lean_inc(x_143);
lean_dec(x_91);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_144);
return x_145;
}
}
}
}
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__2(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
size_t x_17; size_t x_18; lean_object* x_19; 
x_17 = lean_unbox_usize(x_14);
lean_dec(x_14);
x_18 = lean_unbox_usize(x_15);
lean_dec(x_15);
x_19 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_17, x_18, x_16);
return x_19;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___spec__4(x_1, x_2, x_3, x_4, x_8, x_9, x_7);
return x_10;
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Elab_Deriving_FromToJson_initFn____x40_Lean_Elab_Deriving_FromToJson___hyg_4403_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Lean");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("ToJson");
lean_inc(x_4);
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler), 4, 0);
x_8 = l_Lean_Elab_registerBuiltinDerivingHandler(x_6, x_7, x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_mk_string("FromJson");
x_11 = lean_name_mk_string(x_4, x_10);
x_12 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler), 4, 0);
x_13 = l_Lean_Elab_registerBuiltinDerivingHandler(x_11, x_12, x_9);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_4);
x_14 = !lean_is_exclusive(x_8);
if (x_14 == 0)
{
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_8, 0);
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_8);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Transform(lean_object*);
lean_object* initialize_Lean_Elab_Deriving_Basic(lean_object*);
lean_object* initialize_Lean_Elab_Deriving_Util(lean_object*);
lean_object* initialize_Lean_Data_Json_FromToJson(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Deriving_FromToJson(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Util(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json_FromToJson(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___boxed__const__1 = _init_l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler_mkAlts___boxed__const__1);
l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__1___boxed__const__1 = _init_l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__1___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__1___boxed__const__1);
l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__3___boxed__const__1 = _init_l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__3___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_Deriving_FromToJson_mkToJsonInstanceHandler___lambda__3___boxed__const__1);
l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___boxed__const__1 = _init_l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_Deriving_FromToJson_mkFromJsonInstanceHandler_mkAlts___boxed__const__1);
res = l_Lean_Elab_Deriving_FromToJson_initFn____x40_Lean_Elab_Deriving_FromToJson___hyg_4403_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
