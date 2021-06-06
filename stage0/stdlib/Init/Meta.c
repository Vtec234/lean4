// Lean compiler output
// Module: Init.Meta
// Imports: Init.Data.Array.Basic
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
lean_object* l_Array_getSepElems___rarg___boxed(lean_object*);
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f_decode___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCIdentFrom(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_version_getMajor___boxed(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeOctalLitAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isIdOrAtom_x3f___boxed(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_mkIdentFromRef(lean_object*);
lean_object* l_Lean_Syntax_setInfo_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
extern lean_object* l_Lean_fieldIdxKind;
lean_object* l_Lean_Syntax_isNatLit_x3f___boxed(lean_object*);
lean_object* l_Lean_Syntax_setTailInfoAux(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateFirst___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeDecimalLitAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instQuoteBool(uint8_t);
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_mkSepArray___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_is_inaccessible_user_name(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_getTrailingSize(lean_object*);
lean_object* l_Lean_Syntax_expandInterpolatedStr___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateFirst___at_Lean_Syntax_setHeadInfoAux___spec__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l_Lean_Syntax_getSepArgs___boxed(lean_object*);
lean_object* l___private_Init_Meta_0__Array_filterSepElemsMAux___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeHexDigit(lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint32_t l_Lean_idBeginEscape;
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrQuotedChar_match__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_expandMacros___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_withHeadRefOnly_match__1(lean_object*);
lean_object* l_Lean_termEval__prio__;
lean_object* l_Lean_Syntax_expandInterpolatedStrChunks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeQuotedChar(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeStrLitAux_match__1(lean_object*);
lean_object* l_Lean_Syntax_mkSep(lean_object*, lean_object*);
lean_object* l_Array_filterSepElemsM___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*);
uint8_t l_String_anyAux_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_capitalize(lean_object*);
lean_object* l_Lean_Syntax_isAtom___boxed(lean_object*);
lean_object* l_Lean_Name_toString_maybePseudoSyntax_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateFirst(lean_object*);
lean_object* l_Lean_monadNameGeneratorLift(lean_object*, lean_object*);
lean_object* l_Lean_withRef___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapSepElemsM___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instQuoteBool_match__1___rarg(uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Meta_Simp_Config_ctorEq___default;
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_toNat___boxed(lean_object*);
uint8_t l_Lean_Meta_Simp_Config_memoize___default;
lean_object* l_Lean_instQuoteName_match__1(lean_object*);
lean_object* l_Lean_Syntax_getHead_x3f(lean_object*);
uint8_t l_Lean_Syntax_structEq(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrQuotedChar(lean_object*, lean_object*);
lean_object* l_Lean_termEval__prec__;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_expandInterpolatedStrChunks___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithSep_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeOctalLitAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_findAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_getHead_x3f___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Char_isDigit(uint32_t);
lean_object* l_Lean_Name_escapePart(lean_object*);
lean_object* l_Lean_Syntax_setTailInfo_match__1(lean_object*);
lean_object* l_Lean_withHeadRefOnly___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_isGreek___boxed(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_expandInterpolatedStrChunks___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeBinLitAux(lean_object*, lean_object*, lean_object*);
uint32_t l_Lean_idEndEscape;
lean_object* l_Lean_Syntax_SepArray_instCoeTailSepArrayArraySyntax(lean_object*);
lean_object* l_Lean_Name_escapePart___lambda__1___boxed(lean_object*);
lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__5;
lean_object* l_Lean_isIdRest___boxed(lean_object*);
lean_object* l_Lean_instQuoteProd(lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*);
uint8_t l_Lean_isIdBeginEscape(uint32_t);
lean_object* l_Lean_Syntax_isLit_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Meta_Simp_beqConfig____x40_Init_Meta___hyg_6706__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_escapePart___lambda__1(uint32_t);
lean_object* l_Lean_Syntax_mkScientificLit(lean_object*, lean_object*);
lean_object* l_Lean_isIdFirst___boxed(lean_object*);
lean_object* l_Lean_mkHole___boxed(lean_object*);
lean_object* l___private_Init_Meta_0__Array_filterSepElemsMAux___at_Array_filterSepElems___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString___boxed(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setInfo_match__1(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_expandInterpolatedStrChunks___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_version_getSpecialDesc___boxed(lean_object*);
lean_object* l_Lean_Syntax_mkApp_match__1(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeHexDigit___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setTailInfo(lean_object*, lean_object*);
lean_object* l_Lean_instQuoteArray(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instQuoteProd_match__1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Simp_Config_decide___default;
lean_object* l___private_Init_Data_String_Basic_0__Substring_takeWhileAux___at___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_filterSepElemsM___at_Array_filterSepElems___spec__1(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Simp_Config_contextual___default;
lean_object* l_Lean_instQuoteList___rarg(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_NameGenerator_namePrefix___default;
lean_object* l_Lean_Syntax_expandInterpolatedStr___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_filterSepElems___boxed(lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setHeadInfo(lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_version_patch;
extern lean_object* l_Lean_nameLitKind;
lean_object* l___private_Init_Meta_0__Lean_Syntax_isNatLitAux___boxed(lean_object*, lean_object*);
lean_object* l_Lean_withHeadRefOnly___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instQuoteBool___boxed(lean_object*);
lean_object* l___private_Init_Data_String_Basic_0__Substring_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_version_specialDesc;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkSep___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__6;
lean_object* l_Lean_isSubScriptAlnum___boxed(lean_object*);
lean_object* l_Array_mapSepElems(lean_object*, lean_object*);
lean_object* l_Lean_Name_instReprName(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithSep(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isLit_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTrailingSize_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithSep_maybeEscape(uint8_t, lean_object*);
lean_object* l_Lean_Syntax_isLit_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_hasArgs___boxed(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrLit_loop___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_SepArray_getElems___rarg(lean_object*);
lean_object* l_Array_findSomeRevM_x3f_find___at_Lean_Syntax_getTailInfo_x3f___spec__1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Simp_Config_singlePass___default;
lean_object* l_Lean_Syntax_mkApp(lean_object*, lean_object*);
lean_object* l_Array_mapSepElems___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Config_maxSteps___default;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_expandInterpolatedStrChunks___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_version_getMinor___boxed(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f_decodeExp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isLit_x3f(lean_object*, lean_object*);
lean_object* l_Lean_instQuoteList(lean_object*);
lean_object* l_Lean_Meta_Simp_instInhabitedConfig;
lean_object* l_Lean_Syntax_isScientificLit_x3f___boxed(lean_object*);
lean_object* l_Lean_Syntax_isCharLit_x3f(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTrailingSize___boxed(lean_object*);
lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object*);
lean_object* l_Lean_version_major;
lean_object* l_Lean_Syntax_instBEqSyntax;
uint8_t l_Lean_Meta_Simp_Config_zeta___default;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_isEqvAux___at_Lean_Syntax_structEq___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setHeadInfoAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
uint8_t l_String_contains(lean_object*, uint32_t);
lean_object* l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkStrLit___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkApp_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_expandInterpolatedStr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind;
lean_object* l_Lean_Syntax_expandInterpolatedStrChunks_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_instQuoteString(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeDecimalLitAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeStrLitAux_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_mapSepElemsM(lean_object*);
lean_object* l_Lean_mkGroupNode(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setHeadInfoAux_match__1(lean_object*);
uint8_t l_List_beq___at_Lean_Syntax_structEq___spec__3(lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f_decode(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Array_mapSepElemsMAux(lean_object*);
lean_object* l_Lean_Syntax_mkCApp(lean_object*, lean_object*);
extern lean_object* l_Lean_strLitKind;
lean_object* l_Lean_Syntax_isStrLit_x3f(lean_object*);
lean_object* l_Array_getSepElems(lean_object*);
lean_object* l_Lean_monadNameGeneratorLift___rarg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_String_Basic_0__Substring_takeWhileAux___at___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeQuotedChar_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_SepArray_getElems(lean_object*);
lean_object* l_Lean_Syntax_structEq___boxed(lean_object*, lean_object*);
uint8_t l___private_Init_Meta_0__Lean_Meta_Simp_beqConfig____x40_Init_Meta___hyg_6706_(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Simp_ConfigCtx_contextual___default;
lean_object* l___private_Init_Meta_0__Lean_quoteList___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isFieldIdx_x3f(lean_object*);
lean_object* l_Lean_Syntax_setTailInfo_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateLast_match__1(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeHexLitAux(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isNumericSubscript(uint32_t);
lean_object* l_Array_forInUnsafe_loop___at_Lean_mkSepArray___spec__1___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_expandInterpolatedStrChunks_match__1(lean_object*);
lean_object* l_Lean_Syntax_isScientificLit_x3f(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l___private_Init_Data_String_Basic_0__Substring_takeWhileAux___at___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_expandMacros_match__1(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_quoteOption___rarg(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFromRef___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___rarg(lean_object*, lean_object*);
lean_object* l_String_capitalize(lean_object*);
lean_object* l_Lean_NameGenerator_next(lean_object*);
lean_object* l_Lean_Syntax_decodeCharLit___boxed(lean_object*);
lean_object* l_Lean_Syntax_decodeNatLitVal_x3f(lean_object*);
lean_object* l_Lean_Syntax_getTailInfo_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_SepArray_getElems___boxed(lean_object*);
lean_object* l_Array_findSomeRevM_x3f_find___at_Lean_Syntax_getTailInfo_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getRoot_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Array_getSepElems___rarg(lean_object*);
extern lean_object* l_Lean_reservedMacroScope;
lean_object* l_Lean_mkNullNode(lean_object*);
lean_object* l_Lean_Name_instToStringName(lean_object*);
lean_object* l_Lean_Syntax_structEq_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Meta_Simp_reprConfig____x40_Init_Meta___hyg_6907____boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithSep_maybeEscape___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_modifyBase(lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Array_mapSepElemsM___at_Array_mapSepElems___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instQuoteSubstring___boxed(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrQuotedChar_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instQuoteSubstring(lean_object*);
lean_object* l_Lean_Name_replacePrefix_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f_match__1(lean_object*);
lean_object* l_Lean_Name_isInaccessibleUserName_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_quoteNameMk(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_mkSepArray___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHead_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_charLitKind;
lean_object* l_Lean_NameGenerator_idx___default;
lean_object* l_Lean_Name_toString_maybePseudoSyntax_match__1(lean_object*);
lean_object* l_Lean_Syntax_getTailInfo_x3f_match__1(lean_object*);
lean_object* l___private_Init_Data_String_Basic_0__Substring_takeWhileAux___at___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId(lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCIdent(lean_object*);
lean_object* l_Lean_version_getIsRelease___boxed(lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isLit_x3f_match__1(lean_object*);
lean_object* l___private_Init_Meta_0__Array_filterSepElemsMAux___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Syntax_setTailInfoAux_match__1(lean_object*);
lean_object* l_Lean_mkOptionalNode(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_version_getPatch___boxed(lean_object*);
lean_object* l_Lean_Syntax_copyHeadTailInfoFrom(lean_object*, lean_object*);
lean_object* l_Nat_pred(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeHexLitAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Array_filterSepElemsMAux(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_evalOptPrec(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_Lean_mkIdentFromRef___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Substring_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithSep___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isNone_match__1(lean_object*);
lean_object* l_Array_filterSepElemsM(lean_object*);
extern lean_object* l_Lean_instInhabitedSyntax;
lean_object* l_Lean_version_getSpecialDesc(lean_object*);
lean_object* l_Lean_mkCIdentFromRef___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Config_maxDischargeDepth___default;
lean_object* l_Lean_Name_appendBefore_match__1(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isNumericSubscript___boxed(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Meta_Simp_beqConfig____x40_Init_Meta___hyg_6706__match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_evalOptPrio(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameGenerator_mkChild(lean_object*);
lean_object* l_Lean_Syntax_isCharLit_x3f___boxed(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrLit(lean_object*);
lean_object* l_Lean_version_minor;
lean_object* l_Lean_Syntax_decodeStrLit___boxed(lean_object*);
lean_object* l___private_Init_Meta_0__Array_mapSepElemsMAux___at_Array_mapSepElems___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isIdEndEscape(uint32_t);
lean_object* l___private_Init_Meta_0__Lean_version_getMajor(lean_object*);
lean_object* l_Lean_Syntax_unsetTrailing_match__1(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_expandInterpolatedStrChunks___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateLast___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeNatLitVal_x3f___boxed(lean_object*);
lean_object* l_Lean_Syntax_decodeCharLit(lean_object*);
uint8_t l_Lean_version_isRelease;
uint8_t l_Char_isAlpha(uint32_t);
lean_object* l_Lean_Option_hasQuote(lean_object*);
uint8_t l_Lean_Syntax_isAtom(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Array_getSepElems___spec__1(lean_object*);
uint8_t l_Lean_isLetterLike(uint32_t);
lean_object* l_Lean_evalPrec(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isStrLit_x3f___boxed(lean_object*);
lean_object* l_Lean_mkCIdentFromRef___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Macro_expandMacro_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_toNat_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef(lean_object*);
extern lean_object* l_Lean_groupKind;
lean_object* l_Lean_Syntax_unsetTrailing(lean_object*);
lean_object* l_Lean_isLetterLike___boxed(lean_object*);
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f___boxed(lean_object*);
lean_object* l_Lean_Syntax_isIdOrAtom_x3f(lean_object*);
lean_object* l_Lean_mkIdentFromRef___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Array_mapSepElemsMAux___at_Array_mapSepElems___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__2;
lean_object* l_Array_mapMUnsafe_map___at_Lean_expandMacros___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instQuoteProd_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Array_mapSepElemsMAux___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isLit_x3f_match__2(lean_object*);
lean_object* l_ReaderT_instMonadReaderT___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_UInt32_decEq(uint32_t, uint32_t);
lean_object* l_Lean_Syntax_getTrailingSize_match__1(lean_object*);
lean_object* l_Lean_Name_instReprName___boxed(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_instQuoteName_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_version_getIsRelease(lean_object*);
lean_object* lean_name_append_after(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_version_getMinor(lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
lean_object* l_Lean_mkHole(lean_object*);
lean_object* l_Lean_Syntax_expandInterpolatedStr___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_scientificLitKind;
lean_object* l_Array_foldlMUnsafe_fold___at_Array_getSepElems___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___at_Lean_Syntax_structEq___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instQuoteString___boxed(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_getHead_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Simp_Config_eta___default;
lean_object* l_Lean_Syntax_expandInterpolatedStrChunks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_hasArgs(lean_object*);
uint8_t l_String_isPrefixOf(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_quoteList(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_isNatLitAux_match__1(lean_object*);
lean_object* l_Lean_withHeadRefOnly(lean_object*);
lean_object* l_String_quote(lean_object*);
uint8_t l_Char_isAlphanum(uint32_t);
lean_object* l_Lean_Syntax_copyHeadTailInfoFrom___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_instReprConfig;
lean_object* l_Lean_instInhabitedNameGenerator;
lean_object* l_Lean_Syntax_getHead_x3f_match__1(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f(lean_object*);
uint8_t l_Lean_isGreek(uint32_t);
lean_object* l___private_Init_Meta_0__Lean_quoteList_match__1(lean_object*, lean_object*);
lean_object* l_Lean_Name_getRoot_match__1(lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1;
lean_object* l_Array_filterSepElems(lean_object*, lean_object*);
lean_object* l_Array_mapSepElemsM___at_Array_mapSepElems___spec__1(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeHexLitAux_match__1(lean_object*);
lean_object* l_Lean_Name_appendBefore_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Meta_Simp_reprConfig____x40_Init_Meta___hyg_6907_(lean_object*, lean_object*);
lean_object* l_Lean_mkSepArray_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Name_isInaccessibleUserName___boxed(lean_object*);
lean_object* l_Lean_Name_replacePrefix___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSepArray_match__1(lean_object*);
lean_object* l_Lean_expandMacros___boxed__const__1;
lean_object* l_Lean_Syntax_getOptionalIdent_x3f(lean_object*);
lean_object* l_Lean_NameGenerator_curr(lean_object*);
lean_object* l_Lean_Syntax_SepArray_getElems___rarg___boxed(lean_object*);
lean_object* l_Lean_Syntax_isNameLit_x3f___boxed(lean_object*);
lean_object* l___private_Init_Meta_0__Array_mapSepElemsMAux___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isIdBeginEscape___boxed(lean_object*);
lean_object* l_Lean_withHeadRefOnly_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Array_filterSepElemsMAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_beq___at_Lean_Syntax_structEq___spec__2___boxed(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_expandInterpolatedStr___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
lean_object* l_Lean_mkCIdentFromRef___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__4;
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeHexLitAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__1;
lean_object* l_Lean_Syntax_getTailInfo_x3f(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_isNatLitAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_instBEqConfig;
uint8_t l_Lean_Meta_Simp_Config_iota___default;
lean_object* l_Lean_Syntax_setInfo(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_quoteOption(lean_object*);
lean_object* l_Lean_instQuoteNat(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
lean_object* l_List_beq___at_Lean_Syntax_structEq___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString_maybePseudoSyntax___boxed(lean_object*);
lean_object* l_Lean_expandMacros(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateLast(lean_object*);
lean_object* l_Lean_Syntax_decodeNameLit(lean_object*);
lean_object* l_Lean_Name_toStringWithSep_match__1(lean_object*);
lean_object* l_Lean_Syntax_isNameLit_x3f(lean_object*);
lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f(lean_object*);
lean_object* l_String_trim(lean_object*);
lean_object* l_Lean_Syntax_decodeQuotedChar___boxed(lean_object*, lean_object*);
lean_object* l_Lean_isIdEndEscape___boxed(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_mkSepArray___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailInfo_x3f___boxed(lean_object*);
lean_object* l_Lean_Syntax_getTailInfo(lean_object*);
lean_object* l_Lean_Syntax_getOptionalIdent_x3f___boxed(lean_object*);
lean_object* l_Lean_mkCIdentFromRef(lean_object*);
lean_object* l_Lean_Syntax_unsetTrailing_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeStrLit(lean_object*);
uint8_t l_Lean_isIdFirst(uint32_t);
lean_object* l_Lean_instQuoteName(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Meta_Simp_beqConfig____x40_Init_Meta___hyg_6706____boxed(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isNone___boxed(lean_object*);
lean_object* l_Lean_instQuoteBool_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isToken___boxed(lean_object*, lean_object*);
lean_object* l_Lean_mkCIdentFrom___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailInfo___boxed(lean_object*);
lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__3;
lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f___boxed(lean_object*);
lean_object* l_Lean_Syntax_SepArray_instCoeTailSepArrayArraySyntax___boxed(lean_object*);
lean_object* l_Lean_Syntax_decodeNameLit___boxed(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_findAux___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Lean_isSubScriptAlnum(uint32_t);
lean_object* l_Lean_Syntax_toNat_match__1(lean_object*);
uint8_t l_Lean_Meta_Simp_Config_beta___default;
uint8_t l_List_beq___at_Lean_Syntax_structEq___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setTailInfoAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_syntax_ident(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateFirst___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_toNat(lean_object*);
lean_object* lean_name_append_before(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_version_getPatch(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f___boxed(lean_object*);
lean_object* l_Lean_Syntax_decodeQuotedChar_match__1(lean_object*);
lean_object* l_Lean_instQuoteArray___rarg(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_getPos_x3f(lean_object*, uint8_t);
lean_object* l___private_Init_Meta_0__Array_filterSepElemsMAux___at_Array_filterSepElems___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instQuoteProd___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_quoteOption_match__1(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Simp_Config_proj___default;
lean_object* l_Lean_Syntax_instCoeArraySyntaxSepArray(lean_object*);
lean_object* l_Lean_Syntax_find_x3f(lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeStrLitAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_quoteList_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_filterSepElemsM___at_Array_filterSepElems___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_quoteOption_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_monadNameGeneratorLift___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_replacePrefix_match__1(lean_object*);
lean_object* l_Lean_myMacro____x40_Init_Meta___hyg_5350_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_myMacro____x40_Init_Meta___hyg_5453_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_myMacro____x40_Init_Meta___hyg_5571_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_myMacro____x40_Init_Meta___hyg_5096_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_myMacro____x40_Init_Meta___hyg_5214_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_myMacro____x40_Init_Meta___hyg_4993_(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Meta_Simp_beqConfig____x40_Init_Meta___hyg_6706__match__1(lean_object*);
lean_object* l_Lean_Syntax_expandInterpolatedStr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getRoot___boxed(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeBinLitAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getRoot(lean_object*);
uint8_t l_UInt32_decLe(uint32_t, uint32_t);
lean_object* l_Lean_mkSepArray___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isNone_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_toString_maybePseudoSyntax(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateLast_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Array_getSepElems___spec__1___rarg(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Syntax_findAux(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_decodeStrLitAux(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
lean_object* l_Lean_instQuoteSyntax;
lean_object* l_Lean_mkNode(lean_object*, lean_object*);
lean_object* l_Lean_instQuoteBool_match__1(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Lean_Syntax_structEq_match__1(lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrLit_loop(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t l_Lean_Syntax_isToken(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isFieldIdx_x3f___boxed(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrLit___boxed(lean_object*);
lean_object* l_Lean_evalPrio(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_defaultMaxSteps;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Syntax_setHeadInfoAux(lean_object*, lean_object*);
lean_object* l_Lean_Option_hasQuote___rarg(lean_object*);
extern lean_object* l_Lean_interpolatedStrLitKind;
lean_object* l_Lean_Name_isInaccessibleUserName_match__1(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateLast___at_Lean_Syntax_setTailInfoAux___spec__1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isIdRest(uint32_t);
lean_object* l_Lean_expandMacros_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkLit(lean_object*, lean_object*, lean_object*);
lean_object* l_Char_ofNat(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Array_mapSepElemsMAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_version_getMajor___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(LEAN_VERSION_MAJOR);
return x_2;
}
}
static lean_object* _init_l_Lean_version_major() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_box(LEAN_VERSION_MAJOR);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Lean_version_getMinor___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(LEAN_VERSION_MINOR);
return x_2;
}
}
static lean_object* _init_l_Lean_version_minor() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_box(LEAN_VERSION_MINOR);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Lean_version_getPatch___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(LEAN_VERSION_PATCH);
return x_2;
}
}
static lean_object* _init_l_Lean_version_patch() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_box(LEAN_VERSION_PATCH);
return x_2;
}
}
lean_object* l_Lean_version_getIsRelease___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = LEAN_VERSION_IS_RELEASE;
x_3 = lean_box(x_2);
return x_3;
}
}
static uint8_t _init_l_Lean_version_isRelease() {
_start:
{
lean_object* x_1; uint8_t x_2; 
x_1 = lean_box(0);
x_2 = LEAN_VERSION_IS_RELEASE;
return x_2;
}
}
lean_object* l_Lean_version_getSpecialDesc___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_mk_string(LEAN_SPECIAL_VERSION_DESC);
return x_2;
}
}
static lean_object* _init_l_Lean_version_specialDesc() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_mk_string(LEAN_SPECIAL_VERSION_DESC);
return x_2;
}
}
uint8_t l_Lean_isGreek(uint32_t x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; 
x_2 = 913;
x_3 = x_2 <= x_1;
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
uint32_t x_5; uint8_t x_6; 
x_5 = 989;
x_6 = x_1 <= x_5;
return x_6;
}
}
}
lean_object* l_Lean_isGreek___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_Lean_isGreek(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_isLetterLike(uint32_t x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; lean_object* x_20; lean_object* x_29; lean_object* x_38; uint8_t x_55; 
x_2 = 945;
x_55 = x_2 <= x_1;
if (x_55 == 0)
{
lean_object* x_56; 
x_56 = lean_box(0);
x_38 = x_56;
goto block_54;
}
else
{
uint32_t x_57; uint8_t x_58; 
x_57 = 969;
x_58 = x_1 <= x_57;
if (x_58 == 0)
{
lean_object* x_59; 
x_59 = lean_box(0);
x_38 = x_59;
goto block_54;
}
else
{
uint32_t x_60; uint8_t x_61; uint8_t x_62; 
x_60 = 955;
x_61 = x_1 == x_60;
x_62 = l_instDecidableNot___rarg(x_61);
if (x_62 == 0)
{
lean_object* x_63; 
x_63 = lean_box(0);
x_38 = x_63;
goto block_54;
}
else
{
uint8_t x_64; 
x_64 = 1;
return x_64;
}
}
}
block_19:
{
uint32_t x_4; uint8_t x_5; 
lean_dec(x_3);
x_4 = 8448;
x_5 = x_4 <= x_1;
if (x_5 == 0)
{
uint32_t x_6; uint8_t x_7; 
x_6 = 119964;
x_7 = x_6 <= x_1;
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
else
{
uint32_t x_9; uint8_t x_10; 
x_9 = 120223;
x_10 = x_1 <= x_9;
return x_10;
}
}
else
{
uint32_t x_11; uint8_t x_12; 
x_11 = 8527;
x_12 = x_1 <= x_11;
if (x_12 == 0)
{
uint32_t x_13; uint8_t x_14; 
x_13 = 119964;
x_14 = x_13 <= x_1;
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
else
{
uint32_t x_16; uint8_t x_17; 
x_16 = 120223;
x_17 = x_1 <= x_16;
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = 1;
return x_18;
}
}
}
block_28:
{
uint32_t x_21; uint8_t x_22; 
lean_dec(x_20);
x_21 = 7936;
x_22 = x_21 <= x_1;
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_box(0);
x_3 = x_23;
goto block_19;
}
else
{
uint32_t x_24; uint8_t x_25; 
x_24 = 8190;
x_25 = x_1 <= x_24;
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_box(0);
x_3 = x_26;
goto block_19;
}
else
{
uint8_t x_27; 
x_27 = 1;
return x_27;
}
}
}
block_37:
{
uint32_t x_30; uint8_t x_31; 
lean_dec(x_29);
x_30 = 970;
x_31 = x_30 <= x_1;
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_box(0);
x_20 = x_32;
goto block_28;
}
else
{
uint32_t x_33; uint8_t x_34; 
x_33 = 1019;
x_34 = x_1 <= x_33;
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_box(0);
x_20 = x_35;
goto block_28;
}
else
{
uint8_t x_36; 
x_36 = 1;
return x_36;
}
}
}
block_54:
{
uint32_t x_39; uint8_t x_40; 
lean_dec(x_38);
x_39 = 913;
x_40 = x_39 <= x_1;
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_box(0);
x_29 = x_41;
goto block_37;
}
else
{
uint32_t x_42; uint8_t x_43; 
x_42 = 937;
x_43 = x_1 <= x_42;
if (x_43 == 0)
{
lean_object* x_44; 
x_44 = lean_box(0);
x_29 = x_44;
goto block_37;
}
else
{
uint32_t x_45; uint8_t x_46; uint8_t x_47; 
x_45 = 928;
x_46 = x_1 == x_45;
x_47 = l_instDecidableNot___rarg(x_46);
if (x_47 == 0)
{
lean_object* x_48; 
x_48 = lean_box(0);
x_29 = x_48;
goto block_37;
}
else
{
uint32_t x_49; uint8_t x_50; uint8_t x_51; 
x_49 = 931;
x_50 = x_1 == x_49;
x_51 = l_instDecidableNot___rarg(x_50);
if (x_51 == 0)
{
lean_object* x_52; 
x_52 = lean_box(0);
x_29 = x_52;
goto block_37;
}
else
{
uint8_t x_53; 
x_53 = 1;
return x_53;
}
}
}
}
}
}
}
lean_object* l_Lean_isLetterLike___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_Lean_isLetterLike(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_isNumericSubscript(uint32_t x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; 
x_2 = 8320;
x_3 = x_2 <= x_1;
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
uint32_t x_5; uint8_t x_6; 
x_5 = 8329;
x_6 = x_1 <= x_5;
return x_6;
}
}
}
lean_object* l_Lean_isNumericSubscript___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_Lean_isNumericSubscript(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_isSubScriptAlnum(uint32_t x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_isNumericSubscript(x_1);
if (x_2 == 0)
{
uint32_t x_3; uint8_t x_4; 
x_3 = 8336;
x_4 = x_3 <= x_1;
if (x_4 == 0)
{
uint32_t x_5; uint8_t x_6; 
x_5 = 7522;
x_6 = x_5 <= x_1;
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
else
{
uint32_t x_8; uint8_t x_9; 
x_8 = 7530;
x_9 = x_1 <= x_8;
return x_9;
}
}
else
{
uint32_t x_10; uint8_t x_11; 
x_10 = 8348;
x_11 = x_1 <= x_10;
if (x_11 == 0)
{
uint32_t x_12; uint8_t x_13; 
x_12 = 7522;
x_13 = x_12 <= x_1;
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
else
{
uint32_t x_15; uint8_t x_16; 
x_15 = 7530;
x_16 = x_1 <= x_15;
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = 1;
return x_17;
}
}
}
else
{
uint8_t x_18; 
x_18 = 1;
return x_18;
}
}
}
lean_object* l_Lean_isSubScriptAlnum___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_Lean_isSubScriptAlnum(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_isIdFirst(uint32_t x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Char_isAlpha(x_1);
if (x_2 == 0)
{
uint32_t x_3; uint8_t x_4; 
x_3 = 95;
x_4 = x_1 == x_3;
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = l_Lean_isLetterLike(x_1);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
}
else
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
}
}
lean_object* l_Lean_isIdFirst___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_Lean_isIdFirst(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_isIdRest(uint32_t x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Char_isAlphanum(x_1);
if (x_2 == 0)
{
uint32_t x_3; uint8_t x_4; 
x_3 = 95;
x_4 = x_1 == x_3;
if (x_4 == 0)
{
uint32_t x_5; uint8_t x_6; 
x_5 = 39;
x_6 = x_1 == x_5;
if (x_6 == 0)
{
uint32_t x_7; uint8_t x_8; 
x_7 = 33;
x_8 = x_1 == x_7;
if (x_8 == 0)
{
uint32_t x_9; uint8_t x_10; 
x_9 = 63;
x_10 = x_1 == x_9;
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = l_Lean_isLetterLike(x_1);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = l_Lean_isSubScriptAlnum(x_1);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = 1;
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = 1;
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = 1;
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = 1;
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = 1;
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = 1;
return x_18;
}
}
}
lean_object* l_Lean_isIdRest___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_Lean_isIdRest(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
static uint32_t _init_l_Lean_idBeginEscape() {
_start:
{
uint32_t x_1; 
x_1 = 171;
return x_1;
}
}
static uint32_t _init_l_Lean_idEndEscape() {
_start:
{
uint32_t x_1; 
x_1 = 187;
return x_1;
}
}
uint8_t l_Lean_isIdBeginEscape(uint32_t x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; 
x_2 = l_Lean_idBeginEscape;
x_3 = x_1 == x_2;
return x_3;
}
}
lean_object* l_Lean_isIdBeginEscape___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_Lean_isIdBeginEscape(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_isIdEndEscape(uint32_t x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; 
x_2 = l_Lean_idEndEscape;
x_3 = x_1 == x_2;
return x_3;
}
}
lean_object* l_Lean_isIdEndEscape___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_Lean_isIdEndEscape(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Name_getRoot_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_2, x_7);
return x_8;
}
case 1:
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_12 = lean_box_uint64(x_11);
x_13 = lean_apply_3(x_3, x_1, x_10, x_12);
return x_13;
}
else
{
lean_object* x_14; uint64_t x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
x_15 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_16 = lean_box_uint64(x_15);
x_17 = lean_apply_3(x_5, x_9, x_14, x_16);
return x_17;
}
}
default: 
{
lean_object* x_18; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; uint64_t x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_6);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
x_20 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_21 = lean_box_uint64(x_20);
x_22 = lean_apply_3(x_4, x_1, x_19, x_21);
return x_22;
}
else
{
lean_object* x_23; uint64_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_4);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
x_24 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_25 = lean_box_uint64(x_24);
x_26 = lean_apply_3(x_6, x_18, x_23, x_25);
return x_26;
}
}
}
}
}
lean_object* l_Lean_Name_getRoot_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Name_getRoot_match__1___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Name_getRoot(lean_object* x_1) {
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
x_3 = lean_ctor_get(x_1, 0);
if (lean_obj_tag(x_3) == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
x_1 = x_3;
goto _start;
}
}
}
}
lean_object* l_Lean_Name_getRoot___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Name_getRoot(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Name_isInaccessibleUserName_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_1);
return x_5;
}
case 1:
{
lean_object* x_6; lean_object* x_7; uint64_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_9 = lean_box_uint64(x_8);
x_10 = lean_apply_3(x_2, x_6, x_7, x_9);
return x_10;
}
default: 
{
lean_object* x_11; lean_object* x_12; uint64_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_14 = lean_box_uint64(x_13);
x_15 = lean_apply_3(x_3, x_11, x_12, x_14);
return x_15;
}
}
}
}
lean_object* l_Lean_Name_isInaccessibleUserName_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Name_isInaccessibleUserName_match__1___rarg), 4, 0);
return x_2;
}
}
uint8_t lean_is_inaccessible_user_name(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
case 1:
{
lean_object* x_3; uint32_t x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = 10013;
x_5 = l_String_contains(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_mk_string("_inaccessible");
x_7 = lean_string_dec_eq(x_3, x_6);
lean_dec(x_6);
lean_dec(x_3);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_3);
x_8 = 1;
return x_8;
}
}
default: 
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_1 = x_9;
goto _start;
}
}
}
}
lean_object* l_Lean_Name_isInaccessibleUserName___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_is_inaccessible_user_name(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_Lean_Name_escapePart___lambda__1(uint32_t x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_isIdRest(x_1);
if (x_2 == 0)
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
}
lean_object* l_Lean_Name_escapePart(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_string_length(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_2);
lean_dec(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_string_utf8_byte_size(x_1);
x_6 = lean_alloc_closure((void*)(l_Lean_isIdEndEscape___boxed), 1, 0);
x_7 = l_String_anyAux_loop(x_1, x_5, x_6, x_3);
lean_dec(x_5);
if (x_7 == 0)
{
lean_object* x_8; uint32_t x_9; lean_object* x_10; lean_object* x_11; uint32_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_mk_string("");
x_9 = l_Lean_idBeginEscape;
lean_inc(x_8);
x_10 = lean_string_push(x_8, x_9);
x_11 = lean_string_append(x_10, x_1);
lean_dec(x_1);
x_12 = l_Lean_idEndEscape;
x_13 = lean_string_push(x_8, x_12);
x_14 = lean_string_append(x_11, x_13);
lean_dec(x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_1);
x_16 = lean_box(0);
return x_16;
}
}
else
{
uint32_t x_17; uint8_t x_18; 
x_17 = lean_string_utf8_get(x_1, x_3);
x_18 = l_Lean_isIdFirst(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_string_utf8_byte_size(x_1);
x_20 = lean_alloc_closure((void*)(l_Lean_isIdEndEscape___boxed), 1, 0);
x_21 = l_String_anyAux_loop(x_1, x_19, x_20, x_3);
lean_dec(x_19);
if (x_21 == 0)
{
lean_object* x_22; uint32_t x_23; lean_object* x_24; lean_object* x_25; uint32_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_mk_string("");
x_23 = l_Lean_idBeginEscape;
lean_inc(x_22);
x_24 = lean_string_push(x_22, x_23);
x_25 = lean_string_append(x_24, x_1);
lean_dec(x_1);
x_26 = l_Lean_idEndEscape;
x_27 = lean_string_push(x_22, x_26);
x_28 = lean_string_append(x_25, x_27);
lean_dec(x_27);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
return x_29;
}
else
{
lean_object* x_30; 
lean_dec(x_1);
x_30 = lean_box(0);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_31 = lean_string_utf8_byte_size(x_1);
lean_inc(x_31);
lean_inc(x_1);
x_32 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_32, 0, x_1);
lean_ctor_set(x_32, 1, x_3);
lean_ctor_set(x_32, 2, x_31);
x_33 = lean_unsigned_to_nat(1u);
x_34 = l___private_Init_Data_String_Basic_0__Substring_nextn(x_32, x_33, x_3);
lean_dec(x_32);
x_35 = lean_nat_add(x_3, x_34);
lean_dec(x_34);
x_36 = lean_alloc_closure((void*)(l_Lean_Name_escapePart___lambda__1___boxed), 1, 0);
x_37 = l_String_anyAux_loop(x_1, x_31, x_36, x_35);
if (x_37 == 0)
{
lean_object* x_38; 
lean_dec(x_31);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_1);
return x_38;
}
else
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_alloc_closure((void*)(l_Lean_isIdEndEscape___boxed), 1, 0);
x_40 = l_String_anyAux_loop(x_1, x_31, x_39, x_3);
lean_dec(x_31);
if (x_40 == 0)
{
lean_object* x_41; uint32_t x_42; lean_object* x_43; lean_object* x_44; uint32_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_41 = lean_mk_string("");
x_42 = l_Lean_idBeginEscape;
lean_inc(x_41);
x_43 = lean_string_push(x_41, x_42);
x_44 = lean_string_append(x_43, x_1);
lean_dec(x_1);
x_45 = l_Lean_idEndEscape;
x_46 = lean_string_push(x_41, x_45);
x_47 = lean_string_append(x_44, x_46);
lean_dec(x_46);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
return x_48;
}
else
{
lean_object* x_49; 
lean_dec(x_1);
x_49 = lean_box(0);
return x_49;
}
}
}
}
}
}
lean_object* l_Lean_Name_escapePart___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_Lean_Name_escapePart___lambda__1(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Name_toStringWithSep_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_2, x_7);
return x_8;
}
case 1:
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_12 = lean_box_uint64(x_11);
x_13 = lean_apply_2(x_3, x_10, x_12);
return x_13;
}
else
{
lean_object* x_14; uint64_t x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
x_15 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_16 = lean_box_uint64(x_15);
x_17 = lean_apply_3(x_5, x_9, x_14, x_16);
return x_17;
}
}
default: 
{
lean_object* x_18; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; uint64_t x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_6);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
x_20 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_21 = lean_box_uint64(x_20);
x_22 = lean_apply_2(x_4, x_19, x_21);
return x_22;
}
else
{
lean_object* x_23; uint64_t x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_4);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
x_24 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_25 = lean_box_uint64(x_24);
x_26 = lean_apply_3(x_6, x_18, x_23, x_25);
return x_26;
}
}
}
}
}
lean_object* l_Lean_Name_toStringWithSep_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Name_toStringWithSep_match__1___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Name_toStringWithSep_maybeEscape(uint8_t x_1, lean_object* x_2) {
_start:
{
if (x_1 == 0)
{
return x_2;
}
else
{
lean_object* x_3; 
lean_inc(x_2);
x_3 = l_Lean_Name_escapePart(x_2);
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
}
}
lean_object* l_Lean_Name_toStringWithSep_maybeEscape___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_Name_toStringWithSep_maybeEscape(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Name_toStringWithSep(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_4; 
x_4 = lean_mk_string("[anonymous]");
return x_4;
}
case 1:
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_Lean_Name_toStringWithSep_maybeEscape(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_dec(x_3);
x_9 = l_Lean_Name_toStringWithSep(x_1, x_2, x_5);
x_10 = lean_string_append(x_9, x_1);
x_11 = l_Lean_Name_toStringWithSep_maybeEscape(x_2, x_8);
x_12 = lean_string_append(x_10, x_11);
lean_dec(x_11);
return x_12;
}
}
default: 
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_dec(x_3);
x_15 = l_Nat_repr(x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_3, 1);
lean_inc(x_16);
lean_dec(x_3);
x_17 = l_Lean_Name_toStringWithSep(x_1, x_2, x_13);
x_18 = lean_string_append(x_17, x_1);
x_19 = l_Nat_repr(x_16);
x_20 = lean_string_append(x_18, x_19);
lean_dec(x_19);
return x_20;
}
}
}
}
}
lean_object* l_Lean_Name_toStringWithSep___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_Lean_Name_toStringWithSep(x_1, x_4, x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Name_toString_maybePseudoSyntax_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Name_toString_maybePseudoSyntax_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Name_toString_maybePseudoSyntax_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_Name_toString_maybePseudoSyntax(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Name_getRoot(x_1);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_mk_string("#");
x_5 = l_String_isPrefixOf(x_4, x_3);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_mk_string("?");
x_7 = l_String_isPrefixOf(x_6, x_3);
lean_dec(x_3);
lean_dec(x_6);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_3);
x_8 = 1;
return x_8;
}
}
else
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = 0;
return x_9;
}
}
}
lean_object* l_Lean_Name_toString_maybePseudoSyntax___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Name_toString_maybePseudoSyntax(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Name_toString(lean_object* x_1, uint8_t x_2) {
_start:
{
if (x_2 == 0)
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_mk_string(".");
x_4 = 0;
x_5 = l_Lean_Name_toStringWithSep(x_3, x_4, x_1);
lean_dec(x_3);
return x_5;
}
else
{
uint8_t x_6; uint8_t x_7; 
x_6 = l_Lean_Name_toString_maybePseudoSyntax(x_1);
lean_inc(x_1);
x_7 = lean_is_inaccessible_user_name(x_1);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = l_Lean_Name_hasMacroScopes(x_1);
if (x_8 == 0)
{
if (x_6 == 0)
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; 
x_9 = lean_mk_string(".");
x_10 = 1;
x_11 = l_Lean_Name_toStringWithSep(x_9, x_10, x_1);
lean_dec(x_9);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_mk_string(".");
x_13 = 0;
x_14 = l_Lean_Name_toStringWithSep(x_12, x_13, x_1);
lean_dec(x_12);
return x_14;
}
}
else
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_mk_string(".");
x_16 = 0;
x_17 = l_Lean_Name_toStringWithSep(x_15, x_16, x_1);
lean_dec(x_15);
return x_17;
}
}
else
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_18 = lean_mk_string(".");
x_19 = 0;
x_20 = l_Lean_Name_toStringWithSep(x_18, x_19, x_1);
lean_dec(x_18);
return x_20;
}
}
}
}
lean_object* l_Lean_Name_toString___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_Lean_Name_toString(x_1, x_3);
return x_4;
}
}
lean_object* l_Lean_Name_instToStringName(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = 1;
x_3 = l_Lean_Name_toString(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Name_instReprName(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_mk_string("`");
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = 1;
x_6 = l_Lean_Name_toString(x_1, x_5);
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
lean_object* l_Lean_Name_instReprName___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Name_instReprName(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Name_capitalize(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_String_capitalize(x_3);
x_5 = lean_name_mk_string(x_2, x_4);
return x_5;
}
else
{
return x_1;
}
}
}
lean_object* l_Lean_Name_replacePrefix_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_dec(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_apply_1(x_4, x_3);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_4);
x_9 = lean_apply_2(x_5, x_2, x_3);
return x_9;
}
}
case 1:
{
lean_object* x_10; lean_object* x_11; uint64_t x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_13 = lean_box_uint64(x_12);
x_14 = lean_apply_6(x_6, x_1, x_10, x_11, x_13, x_2, x_3);
return x_14;
}
default: 
{
lean_object* x_15; lean_object* x_16; uint64_t x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
x_17 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_18 = lean_box_uint64(x_17);
x_19 = lean_apply_6(x_7, x_1, x_15, x_16, x_18, x_2, x_3);
return x_19;
}
}
}
}
lean_object* l_Lean_Name_replacePrefix_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Name_replacePrefix_match__1___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Name_replacePrefix(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
lean_inc(x_3);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
case 1:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_name_eq(x_1, x_2);
lean_dec(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_Name_replacePrefix(x_5, x_2, x_3);
x_9 = lean_name_mk_string(x_8, x_6);
return x_9;
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_inc(x_3);
return x_3;
}
}
default: 
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_name_eq(x_1, x_2);
lean_dec(x_1);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_Name_replacePrefix(x_10, x_2, x_3);
x_14 = lean_name_mk_numeral(x_13, x_11);
return x_14;
}
else
{
lean_dec(x_11);
lean_dec(x_10);
lean_inc(x_3);
return x_3;
}
}
}
}
}
lean_object* l_Lean_Name_replacePrefix___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Name_replacePrefix(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Name_modifyBase(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Name_hasMacroScopes(x_1);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_apply_1(x_2, x_1);
return x_4;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_extractMacroScopes(x_1);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_apply_1(x_2, x_7);
lean_ctor_set(x_5, 0, x_8);
x_9 = l_Lean_MacroScopesView_review(x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
x_12 = lean_ctor_get(x_5, 2);
x_13 = lean_ctor_get(x_5, 3);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_5);
x_14 = lean_apply_1(x_2, x_10);
x_15 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_12);
lean_ctor_set(x_15, 3, x_13);
x_16 = l_Lean_MacroScopesView_review(x_15);
return x_16;
}
}
}
}
lean_object* lean_name_append_after(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Name_hasMacroScopes(x_1);
if (x_3 == 0)
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_string_append(x_5, x_2);
lean_dec(x_2);
x_7 = lean_name_mk_string(x_4, x_6);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_name_mk_string(x_1, x_2);
return x_8;
}
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_extractMacroScopes(x_1);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 1)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_string_append(x_14, x_2);
lean_dec(x_2);
x_16 = lean_name_mk_string(x_13, x_15);
lean_ctor_set(x_9, 0, x_16);
x_17 = l_Lean_MacroScopesView_review(x_9);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_9, 1);
x_19 = lean_ctor_get(x_9, 2);
x_20 = lean_ctor_get(x_9, 3);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_9);
x_21 = lean_ctor_get(x_10, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_dec(x_10);
x_23 = lean_string_append(x_22, x_2);
lean_dec(x_2);
x_24 = lean_name_mk_string(x_21, x_23);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_18);
lean_ctor_set(x_25, 2, x_19);
lean_ctor_set(x_25, 3, x_20);
x_26 = l_Lean_MacroScopesView_review(x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_9);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_9, 0);
lean_dec(x_28);
x_29 = lean_name_mk_string(x_10, x_2);
lean_ctor_set(x_9, 0, x_29);
x_30 = l_Lean_MacroScopesView_review(x_9);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_ctor_get(x_9, 1);
x_32 = lean_ctor_get(x_9, 2);
x_33 = lean_ctor_get(x_9, 3);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_9);
x_34 = lean_name_mk_string(x_10, x_2);
x_35 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_31);
lean_ctor_set(x_35, 2, x_32);
lean_ctor_set(x_35, 3, x_33);
x_36 = l_Lean_MacroScopesView_review(x_35);
return x_36;
}
}
}
}
}
lean_object* lean_name_append_index_after(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Name_hasMacroScopes(x_1);
if (x_3 == 0)
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_mk_string("_");
x_7 = lean_string_append(x_5, x_6);
lean_dec(x_6);
x_8 = l_Nat_repr(x_2);
x_9 = lean_string_append(x_7, x_8);
lean_dec(x_8);
x_10 = lean_name_mk_string(x_4, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = l_Nat_repr(x_2);
x_12 = lean_mk_string("_");
x_13 = lean_string_append(x_12, x_11);
lean_dec(x_11);
x_14 = lean_name_mk_string(x_1, x_13);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_extractMacroScopes(x_1);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 1)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_15, 0);
lean_dec(x_18);
x_19 = lean_ctor_get(x_16, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_mk_string("_");
x_22 = lean_string_append(x_20, x_21);
lean_dec(x_21);
x_23 = l_Nat_repr(x_2);
x_24 = lean_string_append(x_22, x_23);
lean_dec(x_23);
x_25 = lean_name_mk_string(x_19, x_24);
lean_ctor_set(x_15, 0, x_25);
x_26 = l_Lean_MacroScopesView_review(x_15);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_27 = lean_ctor_get(x_15, 1);
x_28 = lean_ctor_get(x_15, 2);
x_29 = lean_ctor_get(x_15, 3);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_15);
x_30 = lean_ctor_get(x_16, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_16, 1);
lean_inc(x_31);
lean_dec(x_16);
x_32 = lean_mk_string("_");
x_33 = lean_string_append(x_31, x_32);
lean_dec(x_32);
x_34 = l_Nat_repr(x_2);
x_35 = lean_string_append(x_33, x_34);
lean_dec(x_34);
x_36 = lean_name_mk_string(x_30, x_35);
x_37 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_27);
lean_ctor_set(x_37, 2, x_28);
lean_ctor_set(x_37, 3, x_29);
x_38 = l_Lean_MacroScopesView_review(x_37);
return x_38;
}
}
else
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_15);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_15, 0);
lean_dec(x_40);
x_41 = l_Nat_repr(x_2);
x_42 = lean_mk_string("_");
x_43 = lean_string_append(x_42, x_41);
lean_dec(x_41);
x_44 = lean_name_mk_string(x_16, x_43);
lean_ctor_set(x_15, 0, x_44);
x_45 = l_Lean_MacroScopesView_review(x_15);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_46 = lean_ctor_get(x_15, 1);
x_47 = lean_ctor_get(x_15, 2);
x_48 = lean_ctor_get(x_15, 3);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_15);
x_49 = l_Nat_repr(x_2);
x_50 = lean_mk_string("_");
x_51 = lean_string_append(x_50, x_49);
lean_dec(x_49);
x_52 = lean_name_mk_string(x_16, x_51);
x_53 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_46);
lean_ctor_set(x_53, 2, x_47);
lean_ctor_set(x_53, 3, x_48);
x_54 = l_Lean_MacroScopesView_review(x_53);
return x_54;
}
}
}
}
}
lean_object* l_Lean_Name_appendBefore_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* x_7; lean_object* x_8; uint64_t x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_10 = lean_box_uint64(x_9);
x_11 = lean_apply_3(x_3, x_7, x_8, x_10);
return x_11;
}
default: 
{
lean_object* x_12; lean_object* x_13; uint64_t x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_15 = lean_box_uint64(x_14);
x_16 = lean_apply_3(x_4, x_12, x_13, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Name_appendBefore_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Name_appendBefore_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* lean_name_append_before(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_Name_hasMacroScopes(x_1);
if (x_3 == 0)
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_name_mk_string(x_4, x_2);
return x_5;
}
case 1:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_string_append(x_2, x_7);
lean_dec(x_7);
x_9 = lean_name_mk_string(x_6, x_8);
return x_9;
}
default: 
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_name_mk_string(x_10, x_2);
x_13 = lean_name_mk_numeral(x_12, x_11);
return x_13;
}
}
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Lean_extractMacroScopes(x_1);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_14, 0);
lean_dec(x_17);
x_18 = lean_box(0);
x_19 = lean_name_mk_string(x_18, x_2);
lean_ctor_set(x_14, 0, x_19);
x_20 = l_Lean_MacroScopesView_review(x_14);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_14, 1);
x_22 = lean_ctor_get(x_14, 2);
x_23 = lean_ctor_get(x_14, 3);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_14);
x_24 = lean_box(0);
x_25 = lean_name_mk_string(x_24, x_2);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_21);
lean_ctor_set(x_26, 2, x_22);
lean_ctor_set(x_26, 3, x_23);
x_27 = l_Lean_MacroScopesView_review(x_26);
return x_27;
}
}
case 1:
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_14);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_14, 0);
lean_dec(x_29);
x_30 = lean_ctor_get(x_15, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_15, 1);
lean_inc(x_31);
lean_dec(x_15);
x_32 = lean_string_append(x_2, x_31);
lean_dec(x_31);
x_33 = lean_name_mk_string(x_30, x_32);
lean_ctor_set(x_14, 0, x_33);
x_34 = l_Lean_MacroScopesView_review(x_14);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_35 = lean_ctor_get(x_14, 1);
x_36 = lean_ctor_get(x_14, 2);
x_37 = lean_ctor_get(x_14, 3);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_14);
x_38 = lean_ctor_get(x_15, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_15, 1);
lean_inc(x_39);
lean_dec(x_15);
x_40 = lean_string_append(x_2, x_39);
lean_dec(x_39);
x_41 = lean_name_mk_string(x_38, x_40);
x_42 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_35);
lean_ctor_set(x_42, 2, x_36);
lean_ctor_set(x_42, 3, x_37);
x_43 = l_Lean_MacroScopesView_review(x_42);
return x_43;
}
}
default: 
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_14);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_45 = lean_ctor_get(x_14, 0);
lean_dec(x_45);
x_46 = lean_ctor_get(x_15, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_15, 1);
lean_inc(x_47);
lean_dec(x_15);
x_48 = lean_name_mk_string(x_46, x_2);
x_49 = lean_name_mk_numeral(x_48, x_47);
lean_ctor_set(x_14, 0, x_49);
x_50 = l_Lean_MacroScopesView_review(x_14);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_51 = lean_ctor_get(x_14, 1);
x_52 = lean_ctor_get(x_14, 2);
x_53 = lean_ctor_get(x_14, 3);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_14);
x_54 = lean_ctor_get(x_15, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_15, 1);
lean_inc(x_55);
lean_dec(x_15);
x_56 = lean_name_mk_string(x_54, x_2);
x_57 = lean_name_mk_numeral(x_56, x_55);
x_58 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_51);
lean_ctor_set(x_58, 2, x_52);
lean_ctor_set(x_58, 3, x_53);
x_59 = l_Lean_MacroScopesView_review(x_58);
return x_59;
}
}
}
}
}
}
static lean_object* _init_l_Lean_NameGenerator_namePrefix___default() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_mk_string("_uniq");
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_NameGenerator_idx___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(1u);
return x_1;
}
}
static lean_object* _init_l_Lean_instInhabitedNameGenerator() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_NameGenerator_curr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_name_mk_numeral(x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_NameGenerator_next(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_3, x_4);
lean_dec(x_3);
lean_ctor_set(x_1, 1, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_7, x_8);
lean_dec(x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
lean_object* l_Lean_NameGenerator_mkChild(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_inc(x_3);
x_5 = lean_name_mk_numeral(x_3, x_4);
x_6 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_1, 1, x_6);
lean_ctor_set(x_1, 0, x_5);
x_7 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
lean_inc(x_11);
lean_inc(x_10);
x_12 = lean_name_mk_numeral(x_10, x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_nat_add(x_11, x_13);
lean_dec(x_11);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
lean_object* l_Lean_mkFreshId___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_inc(x_6);
x_8 = lean_name_mk_numeral(x_6, x_7);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_7, x_10);
lean_dec(x_7);
lean_ctor_set(x_4, 1, x_11);
x_12 = lean_apply_1(x_9, x_4);
x_13 = lean_alloc_closure((void*)(l_ReaderT_instMonadReaderT___rarg___lambda__4___boxed), 3, 2);
lean_closure_set(x_13, 0, x_2);
lean_closure_set(x_13, 1, x_8);
x_14 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_12, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_15 = lean_ctor_get(x_4, 0);
x_16 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_4);
lean_inc(x_16);
lean_inc(x_15);
x_17 = lean_name_mk_numeral(x_15, x_16);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_16, x_19);
lean_dec(x_16);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_15);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_apply_1(x_18, x_21);
x_23 = lean_alloc_closure((void*)(l_ReaderT_instMonadReaderT___rarg___lambda__4___boxed), 3, 2);
lean_closure_set(x_23, 0, x_2);
lean_closure_set(x_23, 1, x_17);
x_24 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_22, x_23);
return x_24;
}
}
}
lean_object* l_Lean_mkFreshId___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_mkFreshId___rarg___lambda__1), 4, 3);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_1);
lean_closure_set(x_5, 2, x_3);
x_6 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_mkFreshId(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_mkFreshId___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_monadNameGeneratorLift___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_apply_2(x_2, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_monadNameGeneratorLift___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_monadNameGeneratorLift___rarg___lambda__1), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
lean_object* l_Lean_monadNameGeneratorLift(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_monadNameGeneratorLift___rarg), 2, 0);
return x_3;
}
}
lean_object* l_Lean_Syntax_structEq_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_7);
x_8 = lean_box(0);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_3);
x_10 = lean_apply_2(x_7, x_1, x_2);
return x_10;
}
}
case 1:
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_7);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_apply_4(x_4, x_11, x_12, x_13, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_4);
x_16 = lean_apply_2(x_7, x_1, x_2);
return x_16;
}
}
case 2:
{
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_7);
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_2, 1);
lean_inc(x_20);
lean_dec(x_2);
x_21 = lean_apply_4(x_5, x_17, x_18, x_19, x_20);
return x_21;
}
else
{
lean_object* x_22; 
lean_dec(x_5);
x_22 = lean_apply_2(x_7, x_1, x_2);
return x_22;
}
}
default: 
{
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 3)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_7);
x_23 = lean_ctor_get(x_1, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_1, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_1, 2);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 3);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_ctor_get(x_2, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_2, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_2, 2);
lean_inc(x_29);
x_30 = lean_ctor_get(x_2, 3);
lean_inc(x_30);
lean_dec(x_2);
x_31 = lean_apply_8(x_6, x_23, x_24, x_25, x_26, x_27, x_28, x_29, x_30);
return x_31;
}
else
{
lean_object* x_32; 
lean_dec(x_6);
x_32 = lean_apply_2(x_7, x_1, x_2);
return x_32;
}
}
}
}
}
lean_object* l_Lean_Syntax_structEq_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_structEq_match__1___rarg), 7, 0);
return x_2;
}
}
uint8_t l_Array_isEqvAux___at_Lean_Syntax_structEq___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_6);
x_9 = 1;
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_fget(x_4, x_6);
x_11 = lean_array_fget(x_5, x_6);
x_12 = l_Lean_Syntax_structEq(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_6);
x_13 = 0;
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_6, x_14);
lean_dec(x_6);
x_3 = lean_box(0);
x_6 = x_15;
goto _start;
}
}
}
}
uint8_t l_List_beq___at_Lean_Syntax_structEq___spec__3(lean_object* x_1, lean_object* x_2) {
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
x_10 = lean_string_dec_eq(x_6, x_8);
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
uint8_t l_List_beq___at_Lean_Syntax_structEq___spec__2(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 1);
x_14 = lean_name_eq(x_10, x_12);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
else
{
uint8_t x_16; 
x_16 = l_List_beq___at_Lean_Syntax_structEq___spec__3(x_11, x_13);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = 0;
return x_17;
}
else
{
x_1 = x_8;
x_2 = x_9;
goto _start;
}
}
}
}
}
}
uint8_t l_Lean_Syntax_structEq(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
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
case 1:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
x_9 = lean_name_eq(x_5, x_7);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_array_get_size(x_6);
x_12 = lean_array_get_size(x_8);
x_13 = lean_nat_dec_eq(x_11, x_12);
lean_dec(x_12);
lean_dec(x_11);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Array_isEqvAux___at_Lean_Syntax_structEq___spec__1(x_6, x_8, lean_box(0), x_6, x_8, x_15);
return x_16;
}
}
}
else
{
uint8_t x_17; 
x_17 = 0;
return x_17;
}
}
case 2:
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_1, 1);
x_19 = lean_ctor_get(x_2, 1);
x_20 = lean_string_dec_eq(x_18, x_19);
return x_20;
}
else
{
uint8_t x_21; 
x_21 = 0;
return x_21;
}
}
default: 
{
if (lean_obj_tag(x_2) == 3)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_22 = lean_ctor_get(x_1, 1);
x_23 = lean_ctor_get(x_1, 2);
x_24 = lean_ctor_get(x_1, 3);
x_25 = lean_ctor_get(x_2, 1);
x_26 = lean_ctor_get(x_2, 2);
x_27 = lean_ctor_get(x_2, 3);
x_28 = l_Substring_beq(x_22, x_25);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = 0;
return x_29;
}
else
{
uint8_t x_30; 
x_30 = lean_name_eq(x_23, x_26);
if (x_30 == 0)
{
uint8_t x_31; 
x_31 = 0;
return x_31;
}
else
{
uint8_t x_32; 
x_32 = l_List_beq___at_Lean_Syntax_structEq___spec__2(x_24, x_27);
return x_32;
}
}
}
else
{
uint8_t x_33; 
x_33 = 0;
return x_33;
}
}
}
}
}
lean_object* l_Array_isEqvAux___at_Lean_Syntax_structEq___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Array_isEqvAux___at_Lean_Syntax_structEq___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_List_beq___at_Lean_Syntax_structEq___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_List_beq___at_Lean_Syntax_structEq___spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_List_beq___at_Lean_Syntax_structEq___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_List_beq___at_Lean_Syntax_structEq___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Syntax_structEq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Syntax_structEq(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Syntax_instBEqSyntax() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Syntax_structEq___boxed), 2, 0);
return x_1;
}
}
lean_object* l_Lean_Syntax_getTailInfo_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_apply_1(x_5, x_1);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_4, x_7, x_8);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_2(x_2, x_10, x_11);
return x_12;
}
default: 
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 3);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_apply_4(x_3, x_13, x_14, x_15, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Syntax_getTailInfo_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_getTailInfo_x3f_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Array_findSomeRevM_x3f_find___at_Lean_Syntax_getTailInfo_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
lean_dec(x_2);
x_8 = lean_array_fget(x_1, x_7);
x_9 = l_Lean_Syntax_getTailInfo_x3f(x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
x_2 = x_7;
x_3 = lean_box(0);
goto _start;
}
else
{
lean_dec(x_7);
return x_9;
}
}
else
{
lean_object* x_11; 
lean_dec(x_2);
x_11 = lean_box(0);
return x_11;
}
}
}
lean_object* l_Lean_Syntax_getTailInfo_x3f(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
case 1:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Array_findSomeRevM_x3f_find___at_Lean_Syntax_getTailInfo_x3f___spec__1(x_3, x_4, lean_box(0));
return x_5;
}
default: 
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
}
lean_object* l_Array_findSomeRevM_x3f_find___at_Lean_Syntax_getTailInfo_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_findSomeRevM_x3f_find___at_Lean_Syntax_getTailInfo_x3f___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Syntax_getTailInfo_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_getTailInfo_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_getTailInfo(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_getTailInfo_x3f(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(2);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
return x_4;
}
}
}
lean_object* l_Lean_Syntax_getTailInfo___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_getTailInfo(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_getTrailingSize_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 2);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 3);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_apply_4(x_2, x_6, x_7, x_8, x_9);
return x_10;
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
lean_object* l_Lean_Syntax_getTrailingSize_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_getTrailingSize_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_getTrailingSize(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_getTailInfo_x3f(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(0u);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 2);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_nat_sub(x_7, x_6);
lean_dec(x_6);
lean_dec(x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_4);
x_9 = lean_unsigned_to_nat(0u);
return x_9;
}
}
}
}
lean_object* l_Lean_Syntax_getTrailingSize___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_getTrailingSize(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateLast_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateLast_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Lean_Syntax_updateLast_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateLast___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_4, x_7);
lean_dec(x_4);
lean_inc(x_1);
x_9 = lean_array_get(x_1, x_2, x_8);
lean_inc(x_3);
x_10 = lean_apply_1(x_3, x_9);
if (lean_obj_tag(x_10) == 0)
{
x_4 = x_8;
goto _start;
}
else
{
uint8_t x_12; 
lean_dec(x_3);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 0);
x_14 = lean_array_set(x_2, x_8, x_13);
lean_dec(x_8);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_array_set(x_2, x_8, x_15);
lean_dec(x_8);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
else
{
lean_object* x_18; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_box(0);
return x_18;
}
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateLast(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Lean_Syntax_updateLast___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_setTailInfoAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Syntax_setTailInfoAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_setTailInfoAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateLast___at_Lean_Syntax_setTailInfoAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_3, x_6);
lean_dec(x_3);
x_8 = l_Lean_instInhabitedSyntax;
x_9 = lean_array_get(x_8, x_2, x_7);
lean_inc(x_1);
x_10 = l_Lean_Syntax_setTailInfoAux(x_1, x_9);
if (lean_obj_tag(x_10) == 0)
{
x_3 = x_7;
goto _start;
}
else
{
uint8_t x_12; 
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 0);
x_14 = lean_array_set(x_2, x_7, x_13);
lean_dec(x_7);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_array_set(x_2, x_7, x_15);
lean_dec(x_7);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
else
{
lean_object* x_18; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_box(0);
return x_18;
}
}
}
lean_object* l_Lean_Syntax_setTailInfoAux(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
case 1:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l___private_Init_Meta_0__Lean_Syntax_updateLast___at_Lean_Syntax_setTailInfoAux___spec__1(x_1, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_free_object(x_2);
lean_dec(x_5);
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
lean_ctor_set(x_2, 1, x_11);
lean_ctor_set(x_8, 0, x_2);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
lean_ctor_set(x_2, 1, x_12);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_2);
return x_13;
}
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
x_16 = lean_array_get_size(x_15);
x_17 = l___private_Init_Meta_0__Lean_Syntax_updateLast___at_Lean_Syntax_setTailInfoAux___spec__1(x_1, x_15, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
lean_dec(x_14);
x_18 = lean_box(0);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 x_20 = x_17;
} else {
 lean_dec_ref(x_17);
 x_20 = lean_box(0);
}
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_19);
if (lean_is_scalar(x_20)) {
 x_22 = lean_alloc_ctor(1, 1, 0);
} else {
 x_22 = x_20;
}
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
case 2:
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_2);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_2, 0);
lean_dec(x_24);
lean_ctor_set(x_2, 0, x_1);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_2);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_2, 1);
lean_inc(x_26);
lean_dec(x_2);
x_27 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_27, 0, x_1);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
return x_28;
}
}
default: 
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_2);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_2, 0);
lean_dec(x_30);
lean_ctor_set(x_2, 0, x_1);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_2);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_2, 1);
x_33 = lean_ctor_get(x_2, 2);
x_34 = lean_ctor_get(x_2, 3);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_2);
x_35 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_35, 0, x_1);
lean_ctor_set(x_35, 1, x_32);
lean_ctor_set(x_35, 2, x_33);
lean_ctor_set(x_35, 3, x_34);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_35);
return x_36;
}
}
}
}
}
lean_object* l_Lean_Syntax_setTailInfo_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Syntax_setTailInfo_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_setTailInfo_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_setTailInfo(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_1);
x_3 = l_Lean_Syntax_setTailInfoAux(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
return x_1;
}
else
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
}
lean_object* l_Lean_Syntax_unsetTrailing_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
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
lean_object* l_Lean_Syntax_unsetTrailing_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_unsetTrailing_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_unsetTrailing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_getTailInfo(x_1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 2);
lean_dec(x_4);
x_5 = lean_mk_string("");
x_6 = lean_string_utf8_byte_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
lean_ctor_set(x_8, 2, x_6);
lean_ctor_set(x_2, 2, x_8);
x_9 = l_Lean_Syntax_setTailInfo(x_1, x_2);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
x_12 = lean_ctor_get(x_2, 3);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_13 = lean_mk_string("");
x_14 = lean_string_utf8_byte_size(x_13);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_16, 2, x_14);
x_17 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_11);
lean_ctor_set(x_17, 2, x_16);
lean_ctor_set(x_17, 3, x_12);
x_18 = l_Lean_Syntax_setTailInfo(x_1, x_17);
return x_18;
}
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateFirst___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_4, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_array_fget(x_2, x_4);
lean_inc(x_3);
x_9 = lean_apply_1(x_3, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_4, x_10);
lean_dec(x_4);
x_4 = x_11;
goto _start;
}
else
{
uint8_t x_13; 
lean_dec(x_3);
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_array_fset(x_2, x_4, x_14);
lean_dec(x_4);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec(x_9);
x_17 = lean_array_fset(x_2, x_4, x_16);
lean_dec(x_4);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateFirst(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Lean_Syntax_updateFirst___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateFirst___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Meta_0__Lean_Syntax_updateFirst___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Syntax_setHeadInfoAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Syntax_setHeadInfoAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_setHeadInfoAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_updateFirst___at_Lean_Syntax_setHeadInfoAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_array_fget(x_2, x_3);
lean_inc(x_1);
x_8 = l_Lean_Syntax_setHeadInfoAux(x_1, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
uint8_t x_12; 
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_8);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_8, 0);
x_14 = lean_array_fset(x_2, x_3, x_13);
lean_dec(x_3);
lean_ctor_set(x_8, 0, x_14);
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_array_fset(x_2, x_3, x_15);
lean_dec(x_3);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
}
}
lean_object* l_Lean_Syntax_setHeadInfoAux(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
case 1:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l___private_Init_Meta_0__Lean_Syntax_updateFirst___at_Lean_Syntax_setHeadInfoAux___spec__1(x_1, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_free_object(x_2);
lean_dec(x_5);
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
lean_ctor_set(x_2, 1, x_11);
lean_ctor_set(x_8, 0, x_2);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
lean_ctor_set(x_2, 1, x_12);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_2);
return x_13;
}
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_2, 0);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_2);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l___private_Init_Meta_0__Lean_Syntax_updateFirst___at_Lean_Syntax_setHeadInfoAux___spec__1(x_1, x_15, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
lean_dec(x_14);
x_18 = lean_box(0);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
if (lean_is_exclusive(x_17)) {
 lean_ctor_release(x_17, 0);
 x_20 = x_17;
} else {
 lean_dec_ref(x_17);
 x_20 = lean_box(0);
}
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_19);
if (lean_is_scalar(x_20)) {
 x_22 = lean_alloc_ctor(1, 1, 0);
} else {
 x_22 = x_20;
}
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
case 2:
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_2);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_2, 0);
lean_dec(x_24);
lean_ctor_set(x_2, 0, x_1);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_2);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_2, 1);
lean_inc(x_26);
lean_dec(x_2);
x_27 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_27, 0, x_1);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
return x_28;
}
}
default: 
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_2);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_2, 0);
lean_dec(x_30);
lean_ctor_set(x_2, 0, x_1);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_2);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_2, 1);
x_33 = lean_ctor_get(x_2, 2);
x_34 = lean_ctor_get(x_2, 3);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_2);
x_35 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_35, 0, x_1);
lean_ctor_set(x_35, 1, x_32);
lean_ctor_set(x_35, 2, x_33);
lean_ctor_set(x_35, 3, x_34);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_35);
return x_36;
}
}
}
}
}
lean_object* l_Lean_Syntax_setHeadInfo(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_1);
x_3 = l_Lean_Syntax_setHeadInfoAux(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
return x_1;
}
else
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
return x_4;
}
}
}
lean_object* l_Lean_Syntax_setInfo_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
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
case 3:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
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
lean_dec(x_1);
x_12 = lean_apply_4(x_3, x_8, x_9, x_10, x_11);
return x_12;
}
default: 
{
lean_object* x_13; 
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_apply_1(x_4, x_1);
return x_13;
}
}
}
}
lean_object* l_Lean_Syntax_setInfo_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_setInfo_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_setInfo(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 2:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 0);
lean_dec(x_4);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
case 3:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_2, 0);
lean_dec(x_8);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_ctor_get(x_2, 2);
x_11 = lean_ctor_get(x_2, 3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_2);
x_12 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_9);
lean_ctor_set(x_12, 2, x_10);
lean_ctor_set(x_12, 3, x_11);
return x_12;
}
}
default: 
{
lean_dec(x_1);
return x_2;
}
}
}
}
lean_object* l_Lean_Syntax_getHead_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_apply_1(x_5, x_1);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_4, x_7, x_8);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_apply_3(x_2, x_1, x_10, x_11);
return x_12;
}
default: 
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 3);
lean_inc(x_16);
x_17 = lean_apply_5(x_3, x_1, x_13, x_14, x_15, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Syntax_getHead_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_getHead_x3f_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_getHead_x3f___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_inc(x_5);
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_array_uget(x_2, x_4);
x_8 = l_Lean_Syntax_getHead_x3f(x_7);
if (lean_obj_tag(x_8) == 0)
{
size_t x_9; size_t x_10; 
x_9 = 1;
x_10 = x_4 + x_9;
{
size_t _tmp_3 = x_10;
lean_object* _tmp_4 = x_1;
x_4 = _tmp_3;
x_5 = _tmp_4;
}
goto _start;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_8);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
}
lean_object* l_Lean_Syntax_getHead_x3f(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
case 1:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_box(0);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_array_get_size(x_3);
x_8 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_9 = 0;
x_10 = l_Array_forInUnsafe_loop___at_Lean_Syntax_getHead_x3f___spec__1(x_6, x_3, x_8, x_9, x_6);
lean_dec(x_3);
lean_dec(x_6);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
return x_4;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
default: 
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
x_16 = 0;
x_17 = l_Lean_SourceInfo_getPos_x3f(x_15, x_16);
lean_dec(x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
lean_dec(x_1);
x_18 = lean_box(0);
return x_18;
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_17, 0);
lean_dec(x_20);
lean_ctor_set(x_17, 0, x_1);
return x_17;
}
else
{
lean_object* x_21; 
lean_dec(x_17);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_1);
return x_21;
}
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_getHead_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_forInUnsafe_loop___at_Lean_Syntax_getHead_x3f___spec__1(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Syntax_copyHeadTailInfoFrom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Lean_Syntax_getHeadInfo(x_2);
x_4 = l_Lean_Syntax_setHeadInfo(x_1, x_3);
x_5 = l_Lean_Syntax_getTailInfo(x_2);
x_6 = l_Lean_Syntax_setTailInfo(x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Syntax_copyHeadTailInfoFrom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Syntax_copyHeadTailInfoFrom(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_withHeadRefOnly_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_withHeadRefOnly_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_withHeadRefOnly_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_withHeadRefOnly___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Syntax_getHead_x3f(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_withRef___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_1);
x_9 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_4, x_8);
return x_9;
}
}
}
lean_object* l_Lean_withHeadRefOnly___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_inc(x_6);
lean_inc(x_5);
x_7 = lean_alloc_closure((void*)(l_Lean_withHeadRefOnly___rarg___lambda__1), 5, 4);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_5);
lean_closure_set(x_7, 3, x_6);
x_8 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_withHeadRefOnly(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_withHeadRefOnly___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_mkNode(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_expandMacros_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_expandMacros_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_expandMacros_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_expandMacros___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_2 < x_1;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
x_7 = x_3;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_array_uget(x_3, x_2);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_array_uset(x_3, x_2, x_10);
x_12 = x_9;
lean_inc(x_4);
x_13 = l_Lean_expandMacros(x_12, x_4, x_5);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 1;
x_17 = x_2 + x_16;
x_18 = x_14;
x_19 = lean_array_uset(x_11, x_2, x_18);
x_2 = x_17;
x_3 = x_19;
x_5 = x_15;
goto _start;
}
else
{
uint8_t x_21; 
lean_dec(x_11);
lean_dec(x_4);
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
}
static lean_object* _init_l_Lean_expandMacros___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_expandMacros(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_6 = l_Lean_Macro_expandMacro_x3f(x_1, x_2, x_3);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_9 = lean_ctor_get(x_6, 1);
x_10 = lean_ctor_get(x_6, 0);
lean_dec(x_10);
x_11 = lean_array_get_size(x_5);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_13 = x_5;
x_14 = lean_box_usize(x_12);
x_15 = l_Lean_expandMacros___boxed__const__1;
x_16 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_expandMacros___spec__1___boxed), 5, 3);
lean_closure_set(x_16, 0, x_14);
lean_closure_set(x_16, 1, x_15);
lean_closure_set(x_16, 2, x_13);
x_17 = !lean_is_exclusive(x_2);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_18 = lean_ctor_get(x_2, 0);
x_19 = lean_ctor_get(x_2, 1);
x_20 = lean_ctor_get(x_2, 2);
x_21 = lean_ctor_get(x_2, 3);
x_22 = lean_ctor_get(x_2, 4);
x_23 = lean_ctor_get(x_2, 5);
x_24 = lean_nat_dec_eq(x_21, x_22);
if (x_24 == 0)
{
uint8_t x_25; 
lean_free_object(x_6);
x_25 = !lean_is_exclusive(x_1);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_1, 1);
lean_dec(x_26);
x_27 = lean_ctor_get(x_1, 0);
lean_dec(x_27);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_21, x_28);
lean_dec(x_21);
lean_ctor_set(x_2, 3, x_29);
x_30 = x_16;
x_31 = lean_apply_2(x_30, x_2, x_9);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_ctor_set(x_1, 1, x_33);
lean_ctor_set(x_31, 0, x_1);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_31, 0);
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_31);
lean_ctor_set(x_1, 1, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_1);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
else
{
uint8_t x_37; 
lean_free_object(x_1);
lean_dec(x_4);
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
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_1);
x_41 = lean_unsigned_to_nat(1u);
x_42 = lean_nat_add(x_21, x_41);
lean_dec(x_21);
lean_ctor_set(x_2, 3, x_42);
x_43 = x_16;
x_44 = lean_apply_2(x_43, x_2, x_9);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
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
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_4);
lean_ctor_set(x_48, 1, x_45);
if (lean_is_scalar(x_47)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_47;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_46);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_4);
x_50 = lean_ctor_get(x_44, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_44, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_52 = x_44;
} else {
 lean_dec_ref(x_44);
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
}
else
{
lean_object* x_54; lean_object* x_55; 
lean_free_object(x_2);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_4);
x_54 = l_Lean_maxRecDepthErrorMessage;
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_1);
lean_ctor_set(x_55, 1, x_54);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_55);
return x_6;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_56 = lean_ctor_get(x_2, 0);
x_57 = lean_ctor_get(x_2, 1);
x_58 = lean_ctor_get(x_2, 2);
x_59 = lean_ctor_get(x_2, 3);
x_60 = lean_ctor_get(x_2, 4);
x_61 = lean_ctor_get(x_2, 5);
lean_inc(x_61);
lean_inc(x_60);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_2);
x_62 = lean_nat_dec_eq(x_59, x_60);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_free_object(x_6);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_63 = x_1;
} else {
 lean_dec_ref(x_1);
 x_63 = lean_box(0);
}
x_64 = lean_unsigned_to_nat(1u);
x_65 = lean_nat_add(x_59, x_64);
lean_dec(x_59);
x_66 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_66, 0, x_56);
lean_ctor_set(x_66, 1, x_57);
lean_ctor_set(x_66, 2, x_58);
lean_ctor_set(x_66, 3, x_65);
lean_ctor_set(x_66, 4, x_60);
lean_ctor_set(x_66, 5, x_61);
x_67 = x_16;
x_68 = lean_apply_2(x_67, x_66, x_9);
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
if (lean_is_scalar(x_63)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_63;
}
lean_ctor_set(x_72, 0, x_4);
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
lean_dec(x_63);
lean_dec(x_4);
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
lean_object* x_78; lean_object* x_79; 
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_16);
lean_dec(x_4);
x_78 = l_Lean_maxRecDepthErrorMessage;
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_1);
lean_ctor_set(x_79, 1, x_78);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_79);
return x_6;
}
}
}
else
{
lean_object* x_80; lean_object* x_81; size_t x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_80 = lean_ctor_get(x_6, 1);
lean_inc(x_80);
lean_dec(x_6);
x_81 = lean_array_get_size(x_5);
x_82 = lean_usize_of_nat(x_81);
lean_dec(x_81);
x_83 = x_5;
x_84 = lean_box_usize(x_82);
x_85 = l_Lean_expandMacros___boxed__const__1;
x_86 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_expandMacros___spec__1___boxed), 5, 3);
lean_closure_set(x_86, 0, x_84);
lean_closure_set(x_86, 1, x_85);
lean_closure_set(x_86, 2, x_83);
x_87 = lean_ctor_get(x_2, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_2, 1);
lean_inc(x_88);
x_89 = lean_ctor_get(x_2, 2);
lean_inc(x_89);
x_90 = lean_ctor_get(x_2, 3);
lean_inc(x_90);
x_91 = lean_ctor_get(x_2, 4);
lean_inc(x_91);
x_92 = lean_ctor_get(x_2, 5);
lean_inc(x_92);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 lean_ctor_release(x_2, 2);
 lean_ctor_release(x_2, 3);
 lean_ctor_release(x_2, 4);
 lean_ctor_release(x_2, 5);
 x_93 = x_2;
} else {
 lean_dec_ref(x_2);
 x_93 = lean_box(0);
}
x_94 = lean_nat_dec_eq(x_90, x_91);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_95 = x_1;
} else {
 lean_dec_ref(x_1);
 x_95 = lean_box(0);
}
x_96 = lean_unsigned_to_nat(1u);
x_97 = lean_nat_add(x_90, x_96);
lean_dec(x_90);
if (lean_is_scalar(x_93)) {
 x_98 = lean_alloc_ctor(0, 6, 0);
} else {
 x_98 = x_93;
}
lean_ctor_set(x_98, 0, x_87);
lean_ctor_set(x_98, 1, x_88);
lean_ctor_set(x_98, 2, x_89);
lean_ctor_set(x_98, 3, x_97);
lean_ctor_set(x_98, 4, x_91);
lean_ctor_set(x_98, 5, x_92);
x_99 = x_86;
x_100 = lean_apply_2(x_99, x_98, x_80);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_100)) {
 lean_ctor_release(x_100, 0);
 lean_ctor_release(x_100, 1);
 x_103 = x_100;
} else {
 lean_dec_ref(x_100);
 x_103 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_104 = lean_alloc_ctor(1, 2, 0);
} else {
 x_104 = x_95;
}
lean_ctor_set(x_104, 0, x_4);
lean_ctor_set(x_104, 1, x_101);
if (lean_is_scalar(x_103)) {
 x_105 = lean_alloc_ctor(0, 2, 0);
} else {
 x_105 = x_103;
}
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_102);
return x_105;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
lean_dec(x_95);
lean_dec(x_4);
x_106 = lean_ctor_get(x_100, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_100, 1);
lean_inc(x_107);
if (lean_is_exclusive(x_100)) {
 lean_ctor_release(x_100, 0);
 lean_ctor_release(x_100, 1);
 x_108 = x_100;
} else {
 lean_dec_ref(x_100);
 x_108 = lean_box(0);
}
if (lean_is_scalar(x_108)) {
 x_109 = lean_alloc_ctor(1, 2, 0);
} else {
 x_109 = x_108;
}
lean_ctor_set(x_109, 0, x_106);
lean_ctor_set(x_109, 1, x_107);
return x_109;
}
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_93);
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_4);
x_110 = l_Lean_maxRecDepthErrorMessage;
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_1);
lean_ctor_set(x_111, 1, x_110);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_80);
return x_112;
}
}
}
else
{
lean_object* x_113; lean_object* x_114; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_113 = lean_ctor_get(x_6, 1);
lean_inc(x_113);
lean_dec(x_6);
x_114 = lean_ctor_get(x_7, 0);
lean_inc(x_114);
lean_dec(x_7);
x_1 = x_114;
x_3 = x_113;
goto _start;
}
}
else
{
uint8_t x_116; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_116 = !lean_is_exclusive(x_6);
if (x_116 == 0)
{
return x_6;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_6, 0);
x_118 = lean_ctor_get(x_6, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_6);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
return x_119;
}
}
}
else
{
lean_object* x_120; 
lean_dec(x_2);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_1);
lean_ctor_set(x_120, 1, x_3);
return x_120;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_expandMacros___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = l_Array_mapMUnsafe_map___at_Lean_expandMacros___spec__1(x_6, x_7, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_mkIdentFrom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = l_Lean_SourceInfo_fromRef(x_1);
x_4 = 1;
lean_inc(x_2);
x_5 = l_Lean_Name_toString(x_2, x_4);
x_6 = lean_string_utf8_byte_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
lean_ctor_set(x_8, 2, x_6);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_2);
lean_ctor_set(x_10, 3, x_9);
return x_10;
}
}
lean_object* l_Lean_mkIdentFrom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_mkIdentFrom(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_mkIdentFromRef___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Lean_mkIdentFrom(x_3, x_2);
x_7 = lean_apply_2(x_5, lean_box(0), x_6);
return x_7;
}
}
lean_object* l_Lean_mkIdentFromRef___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_mkIdentFromRef___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_mkIdentFromRef(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_mkIdentFromRef___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_mkIdentFromRef___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_mkIdentFromRef___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_mkCIdentFrom(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_3 = lean_box(0);
x_4 = lean_mk_string("_internal");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = l_Lean_reservedMacroScope;
lean_inc(x_2);
x_7 = l_Lean_addMacroScope(x_5, x_2, x_6);
x_8 = l_Lean_SourceInfo_fromRef(x_1);
x_9 = 1;
lean_inc(x_7);
x_10 = l_Lean_Name_toString(x_7, x_9);
x_11 = lean_string_utf8_byte_size(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set(x_13, 2, x_11);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_17, 0, x_8);
lean_ctor_set(x_17, 1, x_13);
lean_ctor_set(x_17, 2, x_7);
lean_ctor_set(x_17, 3, x_16);
return x_17;
}
}
lean_object* l_Lean_mkCIdentFrom___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_mkCIdentFrom(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_mkCIdentFromRef___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Lean_mkCIdentFrom(x_3, x_2);
x_7 = lean_apply_2(x_5, lean_box(0), x_6);
return x_7;
}
}
lean_object* l_Lean_mkCIdentFromRef___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_alloc_closure((void*)(l_Lean_mkCIdentFromRef___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_mkCIdentFromRef(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_mkCIdentFromRef___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_mkCIdentFromRef___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_mkCIdentFromRef___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_mkCIdent(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_Lean_mkCIdentFrom(x_2, x_1);
return x_3;
}
}
lean_object* lean_mk_syntax_ident(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = 1;
lean_inc(x_1);
x_3 = l_Lean_Name_toString(x_1, x_2);
x_4 = lean_string_utf8_byte_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
lean_ctor_set(x_6, 2, x_4);
x_7 = lean_box(0);
x_8 = lean_box(2);
x_9 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set(x_9, 2, x_1);
lean_ctor_set(x_9, 3, x_7);
return x_9;
}
}
lean_object* l_Lean_mkNullNode(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_nullKind;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_mkGroupNode(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_groupKind;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_mkSepArray_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_mkSepArray_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_mkSepArray_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_mkSepArray___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_add(x_2, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_mkSepArray___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
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
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_array_uget(x_2, x_4);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_mkSepArray___spec__1___lambda__1___boxed), 3, 0);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_array_push(x_8, x_7);
x_14 = lean_box(0);
x_15 = lean_apply_3(x_10, x_13, x_9, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
return x_16;
}
else
{
lean_object* x_17; size_t x_18; size_t x_19; 
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = 1;
x_19 = x_4 + x_18;
x_4 = x_19;
x_5 = x_17;
goto _start;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_inc(x_1);
x_21 = lean_array_push(x_8, x_1);
x_22 = lean_array_push(x_21, x_7);
x_23 = lean_box(0);
x_24 = lean_apply_3(x_10, x_22, x_9, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
lean_dec(x_1);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
return x_25;
}
else
{
lean_object* x_26; size_t x_27; size_t x_28; 
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
lean_dec(x_24);
x_27 = 1;
x_28 = x_4 + x_27;
x_4 = x_28;
x_5 = x_26;
goto _start;
}
}
}
}
}
lean_object* l_Lean_mkSepArray(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_mk_empty_array_with_capacity(x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_array_get_size(x_1);
x_7 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_8 = 0;
x_9 = l_Array_forInUnsafe_loop___at_Lean_mkSepArray___spec__1(x_2, x_1, x_7, x_8, x_5);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
return x_10;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_mkSepArray___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_forInUnsafe_loop___at_Lean_mkSepArray___spec__1___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_mkSepArray___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_forInUnsafe_loop___at_Lean_mkSepArray___spec__1(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_mkSepArray___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_mkSepArray(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_mkOptionalNode(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_mk_empty_array_with_capacity(x_2);
x_4 = l_Lean_nullKind;
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_mk_empty_array_with_capacity(x_7);
x_9 = lean_array_push(x_8, x_6);
x_10 = l_Lean_nullKind;
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
}
}
lean_object* l_Lean_mkHole(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Lean");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("Parser");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Term");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("hole");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("_");
x_12 = l_Lean_mkAtomFrom(x_1, x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_mk_empty_array_with_capacity(x_13);
x_15 = lean_array_push(x_14, x_12);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
lean_object* l_Lean_mkHole___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkHole(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_mkSep(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lean_mkSepArray(x_1, x_2);
x_4 = l_Lean_nullKind;
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
lean_object* l_Lean_Syntax_mkSep___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Syntax_mkSep(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(2);
x_4 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
x_5 = l_Lean_mkSepArray(x_2, x_4);
return x_5;
}
}
lean_object* l_Lean_Syntax_SepArray_ofElems___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Syntax_SepArray_ofElems(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_mkAtomFrom(x_4, x_2);
x_8 = l_Lean_mkSepArray(x_3, x_7);
x_9 = lean_apply_2(x_6, lean_box(0), x_8);
return x_9;
}
}
lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_closure((void*)(l_Lean_Syntax_SepArray_ofElemsUsingRef___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_4);
x_8 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_SepArray_ofElemsUsingRef___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Syntax_SepArray_ofElemsUsingRef___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Syntax_instCoeArraySyntaxSepArray(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_SepArray_ofElems___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_mkApp_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_4, x_5);
lean_dec(x_4);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_apply_1(x_2, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Syntax_mkApp_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_mkApp_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_mkApp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
lean_dec(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_6 = lean_box(0);
x_7 = lean_mk_string("Lean");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("Parser");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("Term");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_mk_string("app");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = l_Lean_nullKind;
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_2);
x_17 = lean_unsigned_to_nat(2u);
x_18 = lean_mk_empty_array_with_capacity(x_17);
x_19 = lean_array_push(x_18, x_1);
x_20 = lean_array_push(x_19, x_16);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
lean_object* l_Lean_Syntax_mkCApp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = l_Lean_mkCIdentFrom(x_3, x_1);
x_5 = l_Lean_Syntax_mkApp(x_4, x_2);
return x_5;
}
}
lean_object* l_Lean_Syntax_mkLit(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_mk_empty_array_with_capacity(x_5);
x_7 = lean_array_push(x_6, x_4);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
lean_object* l_Lean_Syntax_mkStrLit(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_String_quote(x_1);
x_4 = l_Lean_strLitKind;
x_5 = l_Lean_Syntax_mkLit(x_4, x_3, x_2);
return x_5;
}
}
lean_object* l_Lean_Syntax_mkStrLit___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Syntax_mkStrLit(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Syntax_mkNumLit(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_numLitKind;
x_4 = l_Lean_Syntax_mkLit(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l_Lean_Syntax_mkScientificLit(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_scientificLitKind;
x_4 = l_Lean_Syntax_mkLit(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l_Lean_Syntax_mkNameLit(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_nameLitKind;
x_4 = l_Lean_Syntax_mkLit(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeBinLitAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_string_utf8_at_end(x_1, x_2);
if (x_4 == 0)
{
uint32_t x_5; uint32_t x_6; uint8_t x_7; 
x_5 = lean_string_utf8_get(x_1, x_2);
x_6 = 48;
x_7 = x_5 == x_6;
if (x_7 == 0)
{
uint32_t x_8; uint8_t x_9; 
x_8 = 49;
x_9 = x_5 == x_8;
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_12 = lean_unsigned_to_nat(2u);
x_13 = lean_nat_mul(x_12, x_3);
lean_dec(x_3);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_13, x_14);
lean_dec(x_13);
x_2 = x_11;
x_3 = x_15;
goto _start;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_18 = lean_unsigned_to_nat(2u);
x_19 = lean_nat_mul(x_18, x_3);
lean_dec(x_3);
x_2 = x_17;
x_3 = x_19;
goto _start;
}
}
else
{
lean_object* x_21; 
lean_dec(x_2);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_3);
return x_21;
}
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeBinLitAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Meta_0__Lean_Syntax_decodeBinLitAux(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeOctalLitAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_string_utf8_at_end(x_1, x_2);
if (x_4 == 0)
{
uint32_t x_5; uint32_t x_6; uint8_t x_7; 
x_5 = lean_string_utf8_get(x_1, x_2);
x_6 = 48;
x_7 = x_6 <= x_5;
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_box(0);
return x_8;
}
else
{
uint32_t x_9; uint8_t x_10; 
x_9 = 55;
x_10 = x_5 <= x_9;
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_box(0);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_13 = lean_unsigned_to_nat(8u);
x_14 = lean_nat_mul(x_13, x_3);
lean_dec(x_3);
x_15 = lean_uint32_to_nat(x_5);
x_16 = lean_nat_add(x_14, x_15);
lean_dec(x_15);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(48u);
x_18 = lean_nat_sub(x_16, x_17);
lean_dec(x_16);
x_2 = x_12;
x_3 = x_18;
goto _start;
}
}
}
else
{
lean_object* x_20; 
lean_dec(x_2);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_3);
return x_20;
}
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeOctalLitAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Meta_0__Lean_Syntax_decodeOctalLitAux(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeHexDigit(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; lean_object* x_5; uint32_t x_44; uint8_t x_45; 
x_3 = lean_string_utf8_get(x_1, x_2);
x_4 = lean_string_utf8_next(x_1, x_2);
x_44 = 48;
x_45 = x_44 <= x_3;
if (x_45 == 0)
{
lean_object* x_46; 
x_46 = lean_box(0);
x_5 = x_46;
goto block_43;
}
else
{
uint32_t x_47; uint8_t x_48; 
x_47 = 57;
x_48 = x_3 <= x_47;
if (x_48 == 0)
{
lean_object* x_49; 
x_49 = lean_box(0);
x_5 = x_49;
goto block_43;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_50 = lean_uint32_to_nat(x_3);
x_51 = lean_unsigned_to_nat(48u);
x_52 = lean_nat_sub(x_50, x_51);
lean_dec(x_50);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_4);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
return x_54;
}
}
block_43:
{
uint32_t x_6; uint8_t x_7; 
lean_dec(x_5);
x_6 = 97;
x_7 = x_6 <= x_3;
if (x_7 == 0)
{
uint32_t x_8; uint8_t x_9; 
x_8 = 65;
x_9 = x_8 <= x_3;
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_4);
x_10 = lean_box(0);
return x_10;
}
else
{
uint32_t x_11; uint8_t x_12; 
x_11 = 70;
x_12 = x_3 <= x_11;
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_4);
x_13 = lean_box(0);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_uint32_to_nat(x_3);
x_15 = lean_unsigned_to_nat(10u);
x_16 = lean_nat_add(x_15, x_14);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(65u);
x_18 = lean_nat_sub(x_16, x_17);
lean_dec(x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_4);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
return x_20;
}
}
}
else
{
uint32_t x_21; uint8_t x_22; 
x_21 = 102;
x_22 = x_3 <= x_21;
if (x_22 == 0)
{
uint32_t x_23; uint8_t x_24; 
x_23 = 65;
x_24 = x_23 <= x_3;
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_4);
x_25 = lean_box(0);
return x_25;
}
else
{
uint32_t x_26; uint8_t x_27; 
x_26 = 70;
x_27 = x_3 <= x_26;
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_4);
x_28 = lean_box(0);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = lean_uint32_to_nat(x_3);
x_30 = lean_unsigned_to_nat(10u);
x_31 = lean_nat_add(x_30, x_29);
lean_dec(x_29);
x_32 = lean_unsigned_to_nat(65u);
x_33 = lean_nat_sub(x_31, x_32);
lean_dec(x_31);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_4);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_36 = lean_uint32_to_nat(x_3);
x_37 = lean_unsigned_to_nat(10u);
x_38 = lean_nat_add(x_37, x_36);
lean_dec(x_36);
x_39 = lean_unsigned_to_nat(97u);
x_40 = lean_nat_sub(x_38, x_39);
lean_dec(x_38);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_4);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_41);
return x_42;
}
}
}
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeHexDigit___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_Meta_0__Lean_Syntax_decodeHexDigit(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeHexLitAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeHexLitAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Lean_Syntax_decodeHexLitAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeHexLitAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_string_utf8_at_end(x_1, x_2);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = l___private_Init_Meta_0__Lean_Syntax_decodeHexDigit(x_1, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_unsigned_to_nat(16u);
x_11 = lean_nat_mul(x_10, x_3);
lean_dec(x_3);
x_12 = lean_nat_add(x_11, x_8);
lean_dec(x_8);
lean_dec(x_11);
x_2 = x_9;
x_3 = x_12;
goto _start;
}
}
else
{
lean_object* x_14; 
lean_dec(x_2);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_3);
return x_14;
}
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeHexLitAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Meta_0__Lean_Syntax_decodeHexLitAux(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeDecimalLitAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_string_utf8_at_end(x_1, x_2);
if (x_4 == 0)
{
uint32_t x_5; uint32_t x_6; uint8_t x_7; 
x_5 = lean_string_utf8_get(x_1, x_2);
x_6 = 48;
x_7 = x_6 <= x_5;
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_box(0);
return x_8;
}
else
{
uint32_t x_9; uint8_t x_10; 
x_9 = 57;
x_10 = x_5 <= x_9;
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_box(0);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_13 = lean_unsigned_to_nat(10u);
x_14 = lean_nat_mul(x_13, x_3);
lean_dec(x_3);
x_15 = lean_uint32_to_nat(x_5);
x_16 = lean_nat_add(x_14, x_15);
lean_dec(x_15);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(48u);
x_18 = lean_nat_sub(x_16, x_17);
lean_dec(x_16);
x_2 = x_12;
x_3 = x_18;
goto _start;
}
}
}
else
{
lean_object* x_20; 
lean_dec(x_2);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_3);
return x_20;
}
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeDecimalLitAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Meta_0__Lean_Syntax_decodeDecimalLitAux(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Syntax_decodeNatLitVal_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_string_length(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
uint32_t x_5; uint32_t x_6; uint8_t x_7; 
x_5 = lean_string_utf8_get(x_1, x_3);
x_6 = 48;
x_7 = x_5 == x_6;
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_2);
x_8 = l_Char_isDigit(x_5);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = l___private_Init_Meta_0__Lean_Syntax_decodeDecimalLitAux(x_1, x_3, x_3);
return x_10;
}
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_dec_eq(x_2, x_11);
lean_dec(x_2);
if (x_12 == 0)
{
uint32_t x_13; uint32_t x_14; uint8_t x_15; 
x_13 = lean_string_utf8_get(x_1, x_11);
x_14 = 120;
x_15 = x_13 == x_14;
if (x_15 == 0)
{
uint32_t x_16; uint8_t x_17; 
x_16 = 88;
x_17 = x_13 == x_16;
if (x_17 == 0)
{
uint32_t x_18; uint8_t x_19; 
x_18 = 98;
x_19 = x_13 == x_18;
if (x_19 == 0)
{
uint32_t x_20; uint8_t x_21; 
x_20 = 66;
x_21 = x_13 == x_20;
if (x_21 == 0)
{
uint32_t x_22; uint8_t x_23; 
x_22 = 111;
x_23 = x_13 == x_22;
if (x_23 == 0)
{
uint32_t x_24; uint8_t x_25; 
x_24 = 79;
x_25 = x_13 == x_24;
if (x_25 == 0)
{
uint8_t x_26; 
x_26 = l_Char_isDigit(x_13);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_box(0);
return x_27;
}
else
{
lean_object* x_28; 
x_28 = l___private_Init_Meta_0__Lean_Syntax_decodeDecimalLitAux(x_1, x_3, x_3);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_unsigned_to_nat(2u);
x_30 = l___private_Init_Meta_0__Lean_Syntax_decodeOctalLitAux(x_1, x_29, x_3);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_unsigned_to_nat(2u);
x_32 = l___private_Init_Meta_0__Lean_Syntax_decodeOctalLitAux(x_1, x_31, x_3);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_unsigned_to_nat(2u);
x_34 = l___private_Init_Meta_0__Lean_Syntax_decodeBinLitAux(x_1, x_33, x_3);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_unsigned_to_nat(2u);
x_36 = l___private_Init_Meta_0__Lean_Syntax_decodeBinLitAux(x_1, x_35, x_3);
return x_36;
}
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_unsigned_to_nat(2u);
x_38 = l___private_Init_Meta_0__Lean_Syntax_decodeHexLitAux(x_1, x_37, x_3);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_unsigned_to_nat(2u);
x_40 = l___private_Init_Meta_0__Lean_Syntax_decodeHexLitAux(x_1, x_39, x_3);
return x_40;
}
}
else
{
lean_object* x_41; 
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_3);
return x_41;
}
}
}
else
{
lean_object* x_42; 
lean_dec(x_2);
x_42 = lean_box(0);
return x_42;
}
}
}
lean_object* l_Lean_Syntax_decodeNatLitVal_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_decodeNatLitVal_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_isLit_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Syntax_isLit_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_isLit_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_isLit_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Syntax_isLit_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_isLit_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_isLit_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_name_eq(x_3, x_1);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_instInhabitedSyntax;
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_get(x_11, x_4, x_12);
if (lean_obj_tag(x_13) == 2)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_13);
x_16 = lean_box(0);
return x_16;
}
}
}
}
else
{
lean_object* x_17; 
x_17 = lean_box(0);
return x_17;
}
}
}
lean_object* l_Lean_Syntax_isLit_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Syntax_isLit_x3f(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_isNatLitAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Init_Meta_0__Lean_Syntax_isNatLitAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Lean_Syntax_isNatLitAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Syntax_isLit_x3f(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_Lean_Syntax_decodeNatLitVal_x3f(x_5);
lean_dec(x_5);
return x_6;
}
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_isNatLitAux___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_numLitKind;
x_3 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Syntax_isNatLit_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_isNatLit_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_isFieldIdx_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_fieldIdxKind;
x_3 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Syntax_isFieldIdx_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_isFieldIdx_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_string_utf8_at_end(x_1, x_2);
if (x_7 == 0)
{
uint32_t x_8; uint32_t x_9; uint8_t x_10; 
x_8 = lean_string_utf8_get(x_1, x_2);
x_9 = 48;
x_10 = x_9 <= x_8;
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_box(0);
return x_11;
}
else
{
uint32_t x_12; uint8_t x_13; 
x_12 = 57;
x_13 = x_8 <= x_12;
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_16 = lean_unsigned_to_nat(10u);
x_17 = lean_nat_mul(x_16, x_6);
lean_dec(x_6);
x_18 = lean_uint32_to_nat(x_8);
x_19 = lean_nat_add(x_17, x_18);
lean_dec(x_18);
lean_dec(x_17);
x_20 = lean_unsigned_to_nat(48u);
x_21 = lean_nat_sub(x_19, x_20);
lean_dec(x_19);
x_2 = x_15;
x_6 = x_21;
goto _start;
}
}
}
else
{
lean_dec(x_2);
if (x_5 == 0)
{
uint8_t x_23; 
x_23 = lean_nat_dec_le(x_4, x_6);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = lean_nat_sub(x_4, x_6);
lean_dec(x_6);
x_25 = 1;
x_26 = lean_box(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_3);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_nat_sub(x_6, x_4);
lean_dec(x_6);
x_31 = lean_box(x_5);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_3);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_nat_add(x_6, x_4);
lean_dec(x_6);
x_36 = lean_box(x_5);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_3);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_39, 0, x_38);
return x_39;
}
}
}
}
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_5);
lean_dec(x_5);
x_8 = l_Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(x_1, x_2, x_3, x_4, x_7, x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint32_t x_5; uint32_t x_6; uint8_t x_7; 
x_5 = lean_string_utf8_get(x_1, x_2);
x_6 = 45;
x_7 = x_5 == x_6;
if (x_7 == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(x_1, x_2, x_3, x_4, x_8, x_9);
return x_10;
}
else
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_12 = 1;
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(x_1, x_11, x_3, x_4, x_12, x_13);
return x_14;
}
}
}
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f_decodeExp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_string_utf8_at_end(x_1, x_2);
if (x_5 == 0)
{
uint32_t x_6; uint32_t x_7; uint8_t x_8; 
x_6 = lean_string_utf8_get(x_1, x_2);
x_7 = 48;
x_8 = x_7 <= x_6;
if (x_8 == 0)
{
uint32_t x_9; uint8_t x_10; 
x_9 = 101;
x_10 = x_6 == x_9;
if (x_10 == 0)
{
uint32_t x_11; uint8_t x_12; 
x_11 = 69;
x_12 = x_6 == x_11;
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_box(0);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_15 = l_Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(x_1, x_14, x_3, x_4);
lean_dec(x_4);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_17 = l_Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(x_1, x_16, x_3, x_4);
lean_dec(x_4);
return x_17;
}
}
else
{
uint32_t x_18; uint8_t x_19; 
x_18 = 57;
x_19 = x_6 <= x_18;
if (x_19 == 0)
{
uint32_t x_20; uint8_t x_21; 
x_20 = 101;
x_21 = x_6 == x_20;
if (x_21 == 0)
{
uint32_t x_22; uint8_t x_23; 
x_22 = 69;
x_23 = x_6 == x_22;
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_24 = lean_box(0);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_26 = l_Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(x_1, x_25, x_3, x_4);
lean_dec(x_4);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_28 = l_Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(x_1, x_27, x_3, x_4);
lean_dec(x_4);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_29 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_30 = lean_unsigned_to_nat(10u);
x_31 = lean_nat_mul(x_30, x_3);
lean_dec(x_3);
x_32 = lean_uint32_to_nat(x_6);
x_33 = lean_nat_add(x_31, x_32);
lean_dec(x_32);
lean_dec(x_31);
x_34 = lean_unsigned_to_nat(48u);
x_35 = lean_nat_sub(x_33, x_34);
lean_dec(x_33);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_add(x_4, x_36);
lean_dec(x_4);
x_2 = x_29;
x_3 = x_35;
x_4 = x_37;
goto _start;
}
}
}
else
{
uint8_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_2);
x_39 = 1;
x_40 = lean_box(x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_4);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_3);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
return x_43;
}
}
}
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f_decode(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_string_utf8_at_end(x_1, x_2);
if (x_4 == 0)
{
uint32_t x_5; uint32_t x_6; uint8_t x_7; 
x_5 = lean_string_utf8_get(x_1, x_2);
x_6 = 48;
x_7 = x_6 <= x_5;
if (x_7 == 0)
{
uint32_t x_8; uint8_t x_9; 
x_8 = 46;
x_9 = x_5 == x_8;
if (x_9 == 0)
{
uint32_t x_10; uint8_t x_11; 
x_10 = 101;
x_11 = x_5 == x_10;
if (x_11 == 0)
{
uint32_t x_12; uint8_t x_13; 
x_12 = 69;
x_13 = x_5 == x_12;
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(x_1, x_15, x_3, x_16);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(x_1, x_18, x_3, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot(x_1, x_21, x_3, x_22);
return x_23;
}
}
else
{
uint32_t x_24; uint8_t x_25; 
x_24 = 57;
x_25 = x_5 <= x_24;
if (x_25 == 0)
{
uint32_t x_26; uint8_t x_27; 
x_26 = 46;
x_27 = x_5 == x_26;
if (x_27 == 0)
{
uint32_t x_28; uint8_t x_29; 
x_28 = 101;
x_29 = x_5 == x_28;
if (x_29 == 0)
{
uint32_t x_30; uint8_t x_31; 
x_30 = 69;
x_31 = x_5 == x_30;
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_3);
lean_dec(x_2);
x_32 = lean_box(0);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_34 = lean_unsigned_to_nat(0u);
x_35 = l_Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(x_1, x_33, x_3, x_34);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_37 = lean_unsigned_to_nat(0u);
x_38 = l_Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(x_1, x_36, x_3, x_37);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_40 = lean_unsigned_to_nat(0u);
x_41 = l_Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot(x_1, x_39, x_3, x_40);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_42 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_43 = lean_unsigned_to_nat(10u);
x_44 = lean_nat_mul(x_43, x_3);
lean_dec(x_3);
x_45 = lean_uint32_to_nat(x_5);
x_46 = lean_nat_add(x_44, x_45);
lean_dec(x_45);
lean_dec(x_44);
x_47 = lean_unsigned_to_nat(48u);
x_48 = lean_nat_sub(x_46, x_47);
lean_dec(x_46);
x_2 = x_42;
x_3 = x_48;
goto _start;
}
}
}
else
{
lean_object* x_50; 
lean_dec(x_3);
lean_dec(x_2);
x_50 = lean_box(0);
return x_50;
}
}
}
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f_decode___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Syntax_decodeScientificLitVal_x3f_decode(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_string_length(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
lean_dec(x_2);
if (x_4 == 0)
{
uint32_t x_5; uint8_t x_6; 
x_5 = lean_string_utf8_get(x_1, x_3);
x_6 = l_Char_isDigit(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = l_Lean_Syntax_decodeScientificLitVal_x3f_decode(x_1, x_3, x_3);
return x_8;
}
}
else
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
}
}
lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_decodeScientificLitVal_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_isScientificLit_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_scientificLitKind;
x_3 = l_Lean_Syntax_isLit_x3f(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_Lean_Syntax_decodeScientificLitVal_x3f(x_5);
lean_dec(x_5);
return x_6;
}
}
}
lean_object* l_Lean_Syntax_isScientificLit_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_isScientificLit_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_isIdOrAtom_x3f(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
case 3:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_ctor_get(x_4, 2);
x_8 = lean_string_utf8_extract(x_5, x_6, x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
default: 
{
lean_object* x_10; 
x_10 = lean_box(0);
return x_10;
}
}
}
}
lean_object* l_Lean_Syntax_isIdOrAtom_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_isIdOrAtom_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_toNat_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Syntax_toNat_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_toNat_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_toNat(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_numLitKind;
x_3 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_unsigned_to_nat(0u);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
return x_5;
}
}
}
lean_object* l_Lean_Syntax_toNat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_toNat(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_decodeQuotedChar_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Syntax_decodeQuotedChar_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_decodeQuotedChar_match__1___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 9;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__2() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 10;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__3() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 13;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__4() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 39;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__5() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 34;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__6() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 92;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_decodeQuotedChar(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; uint32_t x_5; uint8_t x_6; 
x_3 = lean_string_utf8_get(x_1, x_2);
x_4 = lean_string_utf8_next(x_1, x_2);
x_5 = 92;
x_6 = x_3 == x_5;
if (x_6 == 0)
{
uint32_t x_7; uint8_t x_8; 
x_7 = 34;
x_8 = x_3 == x_7;
if (x_8 == 0)
{
uint32_t x_9; uint8_t x_10; 
x_9 = 39;
x_10 = x_3 == x_9;
if (x_10 == 0)
{
uint32_t x_11; uint8_t x_12; 
x_11 = 114;
x_12 = x_3 == x_11;
if (x_12 == 0)
{
uint32_t x_13; uint8_t x_14; 
x_13 = 110;
x_14 = x_3 == x_13;
if (x_14 == 0)
{
uint32_t x_15; uint8_t x_16; 
x_15 = 116;
x_16 = x_3 == x_15;
if (x_16 == 0)
{
uint32_t x_17; uint8_t x_18; 
x_17 = 120;
x_18 = x_3 == x_17;
if (x_18 == 0)
{
uint32_t x_19; uint8_t x_20; 
x_19 = 117;
x_20 = x_3 == x_19;
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_4);
x_21 = lean_box(0);
return x_21;
}
else
{
lean_object* x_22; 
x_22 = l___private_Init_Meta_0__Lean_Syntax_decodeHexDigit(x_1, x_4);
lean_dec(x_4);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; 
x_23 = lean_box(0);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l___private_Init_Meta_0__Lean_Syntax_decodeHexDigit(x_1, x_26);
lean_dec(x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; 
lean_dec(x_25);
x_28 = lean_box(0);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l___private_Init_Meta_0__Lean_Syntax_decodeHexDigit(x_1, x_31);
lean_dec(x_31);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
lean_dec(x_30);
lean_dec(x_25);
x_33 = lean_box(0);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l___private_Init_Meta_0__Lean_Syntax_decodeHexDigit(x_1, x_36);
lean_dec(x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; 
lean_dec(x_35);
lean_dec(x_30);
lean_dec(x_25);
x_38 = lean_box(0);
return x_38;
}
else
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_37);
if (x_39 == 0)
{
lean_object* x_40; uint8_t x_41; 
x_40 = lean_ctor_get(x_37, 0);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint32_t x_51; lean_object* x_52; 
x_42 = lean_ctor_get(x_40, 0);
x_43 = lean_unsigned_to_nat(16u);
x_44 = lean_nat_mul(x_43, x_25);
lean_dec(x_25);
x_45 = lean_nat_add(x_44, x_30);
lean_dec(x_30);
lean_dec(x_44);
x_46 = lean_nat_mul(x_43, x_45);
lean_dec(x_45);
x_47 = lean_nat_add(x_46, x_35);
lean_dec(x_35);
lean_dec(x_46);
x_48 = lean_nat_mul(x_43, x_47);
lean_dec(x_47);
x_49 = lean_nat_add(x_48, x_42);
lean_dec(x_42);
lean_dec(x_48);
x_50 = l_Char_ofNat(x_49);
lean_dec(x_49);
x_51 = lean_unbox_uint32(x_50);
lean_dec(x_50);
x_52 = lean_box_uint32(x_51);
lean_ctor_set(x_40, 0, x_52);
return x_37;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint32_t x_63; lean_object* x_64; lean_object* x_65; 
x_53 = lean_ctor_get(x_40, 0);
x_54 = lean_ctor_get(x_40, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_40);
x_55 = lean_unsigned_to_nat(16u);
x_56 = lean_nat_mul(x_55, x_25);
lean_dec(x_25);
x_57 = lean_nat_add(x_56, x_30);
lean_dec(x_30);
lean_dec(x_56);
x_58 = lean_nat_mul(x_55, x_57);
lean_dec(x_57);
x_59 = lean_nat_add(x_58, x_35);
lean_dec(x_35);
lean_dec(x_58);
x_60 = lean_nat_mul(x_55, x_59);
lean_dec(x_59);
x_61 = lean_nat_add(x_60, x_53);
lean_dec(x_53);
lean_dec(x_60);
x_62 = l_Char_ofNat(x_61);
lean_dec(x_61);
x_63 = lean_unbox_uint32(x_62);
lean_dec(x_62);
x_64 = lean_box_uint32(x_63);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_54);
lean_ctor_set(x_37, 0, x_65);
return x_37;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint32_t x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_66 = lean_ctor_get(x_37, 0);
lean_inc(x_66);
lean_dec(x_37);
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
x_70 = lean_unsigned_to_nat(16u);
x_71 = lean_nat_mul(x_70, x_25);
lean_dec(x_25);
x_72 = lean_nat_add(x_71, x_30);
lean_dec(x_30);
lean_dec(x_71);
x_73 = lean_nat_mul(x_70, x_72);
lean_dec(x_72);
x_74 = lean_nat_add(x_73, x_35);
lean_dec(x_35);
lean_dec(x_73);
x_75 = lean_nat_mul(x_70, x_74);
lean_dec(x_74);
x_76 = lean_nat_add(x_75, x_67);
lean_dec(x_67);
lean_dec(x_75);
x_77 = l_Char_ofNat(x_76);
lean_dec(x_76);
x_78 = lean_unbox_uint32(x_77);
lean_dec(x_77);
x_79 = lean_box_uint32(x_78);
if (lean_is_scalar(x_69)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_69;
}
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_68);
x_81 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
}
}
}
}
}
}
else
{
lean_object* x_82; 
x_82 = l___private_Init_Meta_0__Lean_Syntax_decodeHexDigit(x_1, x_4);
lean_dec(x_4);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; 
x_83 = lean_box(0);
return x_83;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_84 = lean_ctor_get(x_82, 0);
lean_inc(x_84);
lean_dec(x_82);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = l___private_Init_Meta_0__Lean_Syntax_decodeHexDigit(x_1, x_86);
lean_dec(x_86);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; 
lean_dec(x_85);
x_88 = lean_box(0);
return x_88;
}
else
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_87);
if (x_89 == 0)
{
lean_object* x_90; uint8_t x_91; 
x_90 = lean_ctor_get(x_87, 0);
x_91 = !lean_is_exclusive(x_90);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; uint32_t x_97; lean_object* x_98; 
x_92 = lean_ctor_get(x_90, 0);
x_93 = lean_unsigned_to_nat(16u);
x_94 = lean_nat_mul(x_93, x_85);
lean_dec(x_85);
x_95 = lean_nat_add(x_94, x_92);
lean_dec(x_92);
lean_dec(x_94);
x_96 = l_Char_ofNat(x_95);
lean_dec(x_95);
x_97 = lean_unbox_uint32(x_96);
lean_dec(x_96);
x_98 = lean_box_uint32(x_97);
lean_ctor_set(x_90, 0, x_98);
return x_87;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; uint32_t x_105; lean_object* x_106; lean_object* x_107; 
x_99 = lean_ctor_get(x_90, 0);
x_100 = lean_ctor_get(x_90, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_90);
x_101 = lean_unsigned_to_nat(16u);
x_102 = lean_nat_mul(x_101, x_85);
lean_dec(x_85);
x_103 = lean_nat_add(x_102, x_99);
lean_dec(x_99);
lean_dec(x_102);
x_104 = l_Char_ofNat(x_103);
lean_dec(x_103);
x_105 = lean_unbox_uint32(x_104);
lean_dec(x_104);
x_106 = lean_box_uint32(x_105);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_100);
lean_ctor_set(x_87, 0, x_107);
return x_87;
}
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; uint32_t x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_108 = lean_ctor_get(x_87, 0);
lean_inc(x_108);
lean_dec(x_87);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 lean_ctor_release(x_108, 1);
 x_111 = x_108;
} else {
 lean_dec_ref(x_108);
 x_111 = lean_box(0);
}
x_112 = lean_unsigned_to_nat(16u);
x_113 = lean_nat_mul(x_112, x_85);
lean_dec(x_85);
x_114 = lean_nat_add(x_113, x_109);
lean_dec(x_109);
lean_dec(x_113);
x_115 = l_Char_ofNat(x_114);
lean_dec(x_114);
x_116 = lean_unbox_uint32(x_115);
lean_dec(x_115);
x_117 = lean_box_uint32(x_116);
if (lean_is_scalar(x_111)) {
 x_118 = lean_alloc_ctor(0, 2, 0);
} else {
 x_118 = x_111;
}
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_110);
x_119 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_119, 0, x_118);
return x_119;
}
}
}
}
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = l_Lean_Syntax_decodeQuotedChar___boxed__const__1;
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_4);
x_122 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_122, 0, x_121);
return x_122;
}
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = l_Lean_Syntax_decodeQuotedChar___boxed__const__2;
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_4);
x_125 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_125, 0, x_124);
return x_125;
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = l_Lean_Syntax_decodeQuotedChar___boxed__const__3;
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_4);
x_128 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_128, 0, x_127);
return x_128;
}
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = l_Lean_Syntax_decodeQuotedChar___boxed__const__4;
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_4);
x_131 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_131, 0, x_130);
return x_131;
}
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = l_Lean_Syntax_decodeQuotedChar___boxed__const__5;
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_4);
x_134 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_134, 0, x_133);
return x_134;
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = l_Lean_Syntax_decodeQuotedChar___boxed__const__6;
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_4);
x_137 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_137, 0, x_136);
return x_137;
}
}
}
lean_object* l_Lean_Syntax_decodeQuotedChar___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Syntax_decodeQuotedChar(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Syntax_decodeStrLitAux_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Syntax_decodeStrLitAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_decodeStrLitAux_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_decodeStrLitAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; uint32_t x_6; uint8_t x_7; 
x_4 = lean_string_utf8_get(x_1, x_2);
x_5 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_6 = 34;
x_7 = x_4 == x_6;
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = lean_string_utf8_at_end(x_1, x_5);
if (x_8 == 0)
{
uint32_t x_9; uint8_t x_10; 
x_9 = 92;
x_10 = x_4 == x_9;
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_string_push(x_3, x_4);
x_2 = x_5;
x_3 = x_11;
goto _start;
}
else
{
lean_object* x_13; 
x_13 = l_Lean_Syntax_decodeQuotedChar(x_1, x_5);
lean_dec(x_5);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
lean_dec(x_3);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint32_t x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_unbox_uint32(x_16);
lean_dec(x_16);
x_19 = lean_string_push(x_3, x_18);
x_2 = x_17;
x_3 = x_19;
goto _start;
}
}
}
else
{
lean_object* x_21; 
lean_dec(x_5);
lean_dec(x_3);
x_21 = lean_box(0);
return x_21;
}
}
else
{
lean_object* x_22; 
lean_dec(x_5);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_3);
return x_22;
}
}
}
lean_object* l_Lean_Syntax_decodeStrLitAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Syntax_decodeStrLitAux(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Syntax_decodeStrLit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_mk_string("");
x_4 = l_Lean_Syntax_decodeStrLitAux(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Syntax_decodeStrLit___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_decodeStrLit(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_isStrLit_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_strLitKind;
x_3 = l_Lean_Syntax_isLit_x3f(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_mk_string("");
x_8 = l_Lean_Syntax_decodeStrLitAux(x_5, x_6, x_7);
lean_dec(x_5);
return x_8;
}
}
}
lean_object* l_Lean_Syntax_isStrLit_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_isStrLit_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_decodeCharLit(lean_object* x_1) {
_start:
{
lean_object* x_2; uint32_t x_3; uint32_t x_4; uint8_t x_5; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_string_utf8_get(x_1, x_2);
x_4 = 92;
x_5 = x_3 == x_4;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box_uint32(x_3);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_unsigned_to_nat(2u);
x_9 = l_Lean_Syntax_decodeQuotedChar(x_1, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_box(0);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 0);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
}
}
lean_object* l_Lean_Syntax_decodeCharLit___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_decodeCharLit(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_isCharLit_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_charLitKind;
x_3 = l_Lean_Syntax_isLit_x3f(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_Lean_Syntax_decodeCharLit(x_5);
lean_dec(x_5);
return x_6;
}
}
}
lean_object* l_Lean_Syntax_isCharLit_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_isCharLit_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Init_Data_String_Basic_0__Substring_takeWhileAux___at___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_nat_dec_eq(x_3, x_2);
if (x_4 == 0)
{
uint32_t x_5; uint8_t x_6; 
x_5 = lean_string_utf8_get(x_1, x_3);
x_6 = l_Lean_isIdRest(x_5);
if (x_6 == 0)
{
return x_3;
}
else
{
lean_object* x_7; 
x_7 = lean_string_utf8_next(x_1, x_3);
lean_dec(x_3);
x_3 = x_7;
goto _start;
}
}
else
{
return x_3;
}
}
}
lean_object* l___private_Init_Data_String_Basic_0__Substring_takeWhileAux___at___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_nat_dec_eq(x_3, x_2);
if (x_4 == 0)
{
uint32_t x_5; uint32_t x_6; uint8_t x_7; 
x_5 = lean_string_utf8_get(x_1, x_3);
x_6 = l_Lean_idEndEscape;
x_7 = x_5 == x_6;
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_string_utf8_next(x_1, x_3);
lean_dec(x_3);
x_3 = x_8;
goto _start;
}
else
{
return x_3;
}
}
else
{
return x_3;
}
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; uint32_t x_5; uint8_t x_6; 
x_4 = lean_string_utf8_get(x_1, x_2);
x_5 = l_Lean_idBeginEscape;
x_6 = x_4 == x_5;
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = l_Lean_isIdFirst(x_4);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint32_t x_13; uint32_t x_14; uint8_t x_15; 
x_9 = lean_string_utf8_byte_size(x_1);
lean_inc(x_2);
x_10 = l___private_Init_Data_String_Basic_0__Substring_takeWhileAux___at___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux___spec__1(x_1, x_9, x_2);
lean_dec(x_9);
x_11 = lean_string_utf8_extract(x_1, x_2, x_10);
lean_dec(x_2);
x_12 = lean_name_mk_string(x_3, x_11);
x_13 = lean_string_utf8_get(x_1, x_10);
x_14 = 46;
x_15 = x_13 == x_14;
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = lean_string_utf8_at_end(x_1, x_10);
lean_dec(x_10);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_12);
x_17 = lean_box(0);
return x_17;
}
else
{
lean_object* x_18; 
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_12);
return x_18;
}
}
else
{
lean_object* x_19; 
x_19 = lean_string_utf8_next(x_1, x_10);
lean_dec(x_10);
x_2 = x_19;
x_3 = x_12;
goto _start;
}
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint32_t x_24; uint32_t x_25; uint8_t x_26; 
x_21 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_22 = lean_string_utf8_byte_size(x_1);
lean_inc(x_21);
x_23 = l___private_Init_Data_String_Basic_0__Substring_takeWhileAux___at___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux___spec__2(x_1, x_22, x_21);
lean_dec(x_22);
x_24 = lean_string_utf8_get(x_1, x_23);
x_25 = l_Lean_idEndEscape;
x_26 = x_24 == x_25;
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_3);
x_27 = lean_box(0);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint32_t x_31; uint32_t x_32; uint8_t x_33; 
x_28 = lean_string_utf8_next(x_1, x_23);
x_29 = lean_string_utf8_extract(x_1, x_21, x_23);
lean_dec(x_23);
lean_dec(x_21);
x_30 = lean_name_mk_string(x_3, x_29);
x_31 = lean_string_utf8_get(x_1, x_28);
x_32 = 46;
x_33 = x_31 == x_32;
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = lean_string_utf8_at_end(x_1, x_28);
lean_dec(x_28);
if (x_34 == 0)
{
lean_object* x_35; 
lean_dec(x_30);
x_35 = lean_box(0);
return x_35;
}
else
{
lean_object* x_36; 
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_30);
return x_36;
}
}
else
{
lean_object* x_37; 
x_37 = lean_string_utf8_next(x_1, x_28);
lean_dec(x_28);
x_2 = x_37;
x_3 = x_30;
goto _start;
}
}
}
}
}
lean_object* l___private_Init_Data_String_Basic_0__Substring_takeWhileAux___at___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_String_Basic_0__Substring_takeWhileAux___at___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Data_String_Basic_0__Substring_takeWhileAux___at___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_String_Basic_0__Substring_takeWhileAux___at___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Syntax_decodeNameLit(lean_object* x_1) {
_start:
{
lean_object* x_2; uint32_t x_3; uint32_t x_4; uint8_t x_5; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_string_utf8_get(x_1, x_2);
x_4 = 96;
x_5 = x_3 == x_4;
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_box(0);
x_9 = l___private_Init_Meta_0__Lean_Syntax_decodeNameLitAux(x_1, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Syntax_decodeNameLit___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_decodeNameLit(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_isNameLit_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_nameLitKind;
x_3 = l_Lean_Syntax_isLit_x3f(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_Lean_Syntax_decodeNameLit(x_5);
lean_dec(x_5);
return x_6;
}
}
}
lean_object* l_Lean_Syntax_isNameLit_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_isNameLit_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
uint8_t l_Lean_Syntax_hasArgs(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
lean_dec(x_3);
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
lean_object* l_Lean_Syntax_hasArgs___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Syntax_hasArgs(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_Lean_Syntax_isAtom(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 2)
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
lean_object* l_Lean_Syntax_isAtom___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Syntax_isAtom(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_Lean_Syntax_isToken(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 1);
x_4 = l_String_trim(x_3);
x_5 = l_String_trim(x_1);
x_6 = lean_string_dec_eq(x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
lean_object* l_Lean_Syntax_isToken___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Syntax_isToken(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Syntax_isNone_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_3, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
default: 
{
lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_apply_1(x_4, x_1);
return x_10;
}
}
}
}
lean_object* l_Lean_Syntax_isNone_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_isNone_match__1___rarg), 4, 0);
return x_2;
}
}
uint8_t l_Lean_Syntax_isNone(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
case 1:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_Lean_nullKind;
x_6 = lean_name_eq(x_3, x_5);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_get_size(x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_8);
return x_10;
}
}
default: 
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
}
}
}
lean_object* l_Lean_Syntax_isNone___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Syntax_isNone(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = l_Lean_nullKind;
x_5 = lean_name_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_array_get_size(x_3);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = l_Lean_instInhabitedSyntax;
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_get(x_11, x_3, x_12);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
else
{
lean_object* x_15; 
x_15 = lean_box(0);
return x_15;
}
}
}
lean_object* l_Lean_Syntax_getOptional_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_getOptional_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_getOptionalIdent_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_getOptional_x3f(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = l_Lean_Syntax_getId(x_5);
lean_dec(x_5);
lean_ctor_set(x_2, 0, x_6);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = l_Lean_Syntax_getId(x_7);
lean_dec(x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
}
lean_object* l_Lean_Syntax_getOptionalIdent_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_getOptionalIdent_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_findAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_5 < x_4;
if (x_7 == 0)
{
lean_dec(x_1);
lean_inc(x_6);
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_array_uget(x_3, x_5);
lean_inc(x_1);
x_9 = l_Lean_Syntax_findAux(x_1, x_8);
if (lean_obj_tag(x_9) == 0)
{
size_t x_10; size_t x_11; 
x_10 = 1;
x_11 = x_5 + x_10;
{
size_t _tmp_4 = x_11;
lean_object* _tmp_5 = x_2;
x_5 = _tmp_4;
x_6 = _tmp_5;
}
goto _start;
}
else
{
uint8_t x_13; 
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_9);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec(x_9);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
lean_object* l_Lean_Syntax_findAux(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_4 = lean_apply_1(x_1, x_2);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_array_get_size(x_3);
x_10 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_11 = 0;
x_12 = l_Array_forInUnsafe_loop___at_Lean_Syntax_findAux___spec__1(x_1, x_8, x_3, x_10, x_11, x_8);
lean_dec(x_3);
lean_dec(x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
return x_6;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
else
{
lean_object* x_17; 
lean_dec(x_3);
lean_dec(x_1);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_2);
return x_17;
}
}
else
{
lean_object* x_18; uint8_t x_19; 
lean_inc(x_2);
x_18 = lean_apply_1(x_1, x_2);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_2);
x_20 = lean_box(0);
return x_20;
}
else
{
lean_object* x_21; 
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_2);
return x_21;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_findAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_forInUnsafe_loop___at_Lean_Syntax_findAux___spec__1(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Syntax_find_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Syntax_findAux(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_instQuoteSyntax() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_instQuoteBool_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (x_1 == 0)
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
x_6 = lean_box(0);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_instQuoteBool_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_instQuoteBool_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_instQuoteBool_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_instQuoteBool_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_instQuoteBool(uint8_t x_1) {
_start:
{
if (x_1 == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Bool");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("false");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_box(0);
x_8 = l_Lean_mkCIdentFrom(x_7, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_box(0);
x_10 = lean_mk_string("Bool");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_mk_string("true");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_box(0);
x_15 = l_Lean_mkCIdentFrom(x_14, x_13);
return x_15;
}
}
}
lean_object* l_Lean_instQuoteBool___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lean_instQuoteBool(x_2);
return x_3;
}
}
lean_object* l_Lean_instQuoteString(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(2);
x_3 = l_Lean_Syntax_mkStrLit(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_instQuoteString___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_instQuoteString(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_instQuoteNat(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Nat_repr(x_1);
x_3 = l_Lean_numLitKind;
x_4 = lean_box(2);
x_5 = l_Lean_Syntax_mkLit(x_3, x_2, x_4);
return x_5;
}
}
lean_object* l_Lean_instQuoteSubstring(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_2 = lean_box(0);
x_3 = lean_mk_string("String");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("toSubstring");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_mk_empty_array_with_capacity(x_7);
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_1, 2);
x_12 = lean_string_utf8_extract(x_9, x_10, x_11);
x_13 = lean_box(2);
x_14 = l_Lean_Syntax_mkStrLit(x_12, x_13);
lean_dec(x_12);
x_15 = lean_array_push(x_8, x_14);
x_16 = l_Lean_Syntax_mkCApp(x_6, x_15);
return x_16;
}
}
lean_object* l_Lean_instQuoteSubstring___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_instQuoteSubstring(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
case 1:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Lean_Name_escapePart(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_1);
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_1);
x_1 = x_9;
x_2 = x_4;
goto _start;
}
}
default: 
{
lean_object* x_11; 
lean_dec(x_2);
lean_dec(x_1);
x_11 = lean_box(0);
return x_11;
}
}
}
}
lean_object* l___private_Init_Meta_0__Lean_quoteNameMk(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Lean");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("Name");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("anonymous");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_box(0);
x_10 = l_Lean_mkCIdentFrom(x_9, x_8);
return x_10;
}
case 1:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_box(0);
x_14 = lean_mk_string("Lean");
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_mk_string("Name");
x_17 = lean_name_mk_string(x_15, x_16);
x_18 = lean_mk_string("mkStr");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = l___private_Init_Meta_0__Lean_quoteNameMk(x_11);
x_21 = lean_box(2);
x_22 = l_Lean_Syntax_mkStrLit(x_12, x_21);
lean_dec(x_12);
x_23 = lean_unsigned_to_nat(2u);
x_24 = lean_mk_empty_array_with_capacity(x_23);
x_25 = lean_array_push(x_24, x_20);
x_26 = lean_array_push(x_25, x_22);
x_27 = l_Lean_Syntax_mkCApp(x_19, x_26);
return x_27;
}
default: 
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_29);
lean_dec(x_1);
x_30 = lean_box(0);
x_31 = lean_mk_string("Lean");
x_32 = lean_name_mk_string(x_30, x_31);
x_33 = lean_mk_string("Name");
x_34 = lean_name_mk_string(x_32, x_33);
x_35 = lean_mk_string("mkNum");
x_36 = lean_name_mk_string(x_34, x_35);
x_37 = l___private_Init_Meta_0__Lean_quoteNameMk(x_28);
x_38 = l_Nat_repr(x_29);
x_39 = l_Lean_numLitKind;
x_40 = lean_box(2);
x_41 = l_Lean_Syntax_mkLit(x_39, x_38, x_40);
x_42 = lean_unsigned_to_nat(2u);
x_43 = lean_mk_empty_array_with_capacity(x_42);
x_44 = lean_array_push(x_43, x_37);
x_45 = lean_array_push(x_44, x_41);
x_46 = l_Lean_Syntax_mkCApp(x_36, x_45);
return x_46;
}
}
}
}
lean_object* l_Lean_instQuoteName_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_instQuoteName_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_instQuoteName_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_instQuoteName(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
lean_inc(x_1);
x_3 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = l___private_Init_Meta_0__Lean_quoteNameMk(x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_string("Lean");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("Parser");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("Term");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_mk_string("quotedName");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_mk_string(".");
x_16 = l_String_intercalate(x_15, x_5);
x_17 = lean_mk_string("`");
x_18 = lean_string_append(x_17, x_16);
lean_dec(x_16);
x_19 = l_Lean_nameLitKind;
x_20 = lean_box(2);
x_21 = l_Lean_Syntax_mkLit(x_19, x_18, x_20);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_mk_empty_array_with_capacity(x_22);
x_24 = lean_array_push(x_23, x_21);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_14);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
lean_object* l_Lean_instQuoteProd_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_instQuoteProd_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_instQuoteProd_match__1___rarg), 2, 0);
return x_4;
}
}
lean_object* l_Lean_instQuoteProd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_string("Prod");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("mk");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_apply_1(x_1, x_4);
x_12 = lean_apply_1(x_2, x_5);
x_13 = lean_unsigned_to_nat(2u);
x_14 = lean_mk_empty_array_with_capacity(x_13);
x_15 = lean_array_push(x_14, x_11);
x_16 = lean_array_push(x_15, x_12);
x_17 = l_Lean_Syntax_mkCApp(x_10, x_16);
return x_17;
}
}
lean_object* l_Lean_instQuoteProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_instQuoteProd___rarg), 3, 0);
return x_3;
}
}
lean_object* l___private_Init_Meta_0__Lean_quoteList_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Init_Meta_0__Lean_quoteList_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Lean_quoteList_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l___private_Init_Meta_0__Lean_quoteList___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_1);
x_3 = lean_box(0);
x_4 = lean_mk_string("List");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("nil");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_box(0);
x_9 = l_Lean_mkCIdentFrom(x_8, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_mk_string("List");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_mk_string("cons");
x_16 = lean_name_mk_string(x_14, x_15);
lean_inc(x_1);
x_17 = lean_apply_1(x_1, x_10);
x_18 = l___private_Init_Meta_0__Lean_quoteList___rarg(x_1, x_11);
x_19 = lean_unsigned_to_nat(2u);
x_20 = lean_mk_empty_array_with_capacity(x_19);
x_21 = lean_array_push(x_20, x_17);
x_22 = lean_array_push(x_21, x_18);
x_23 = l_Lean_Syntax_mkCApp(x_16, x_22);
return x_23;
}
}
}
lean_object* l___private_Init_Meta_0__Lean_quoteList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Lean_quoteList___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_instQuoteList___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Lean_quoteList___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_instQuoteList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_instQuoteList___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_instQuoteArray___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_3 = lean_box(0);
x_4 = lean_mk_string("List");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("toArray");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_array_to_list(lean_box(0), x_2);
x_9 = l___private_Init_Meta_0__Lean_quoteList___rarg(x_1, x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_mk_empty_array_with_capacity(x_10);
x_12 = lean_array_push(x_11, x_9);
x_13 = l_Lean_Syntax_mkCApp(x_7, x_12);
return x_13;
}
}
lean_object* l_Lean_instQuoteArray(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_instQuoteArray___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Lean_quoteOption_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Init_Meta_0__Lean_quoteOption_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Lean_quoteOption_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l___private_Init_Meta_0__Lean_quoteOption___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_1);
x_3 = lean_box(0);
x_4 = lean_mk_string("Option");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("none");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_syntax_ident(x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = lean_mk_string("Option");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_mk_string("some");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_apply_1(x_1, x_9);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_mk_empty_array_with_capacity(x_16);
x_18 = lean_array_push(x_17, x_15);
x_19 = l_Lean_Syntax_mkCApp(x_14, x_18);
return x_19;
}
}
}
lean_object* l___private_Init_Meta_0__Lean_quoteOption(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Lean_quoteOption___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Option_hasQuote___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Lean_quoteOption___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Option_hasQuote(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Option_hasQuote___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_evalPrec(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 2);
x_8 = lean_ctor_get(x_2, 3);
x_9 = lean_ctor_get(x_2, 4);
x_10 = lean_ctor_get(x_2, 5);
x_11 = lean_nat_dec_eq(x_8, x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_8, x_12);
lean_dec(x_8);
lean_ctor_set(x_2, 3, x_13);
lean_inc(x_2);
x_14 = l_Lean_expandMacros(x_1, x_2, x_3);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_18 = lean_box(0);
x_19 = lean_mk_string("numLit");
x_20 = lean_name_mk_string(x_18, x_19);
lean_inc(x_16);
x_21 = l_Lean_Syntax_isOfKind(x_16, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_free_object(x_14);
x_22 = lean_mk_string("unexpected precedence");
x_23 = l_Lean_Macro_throwErrorAt___rarg(x_16, x_22, x_2, x_17);
lean_dec(x_16);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_2);
x_24 = l_Lean_numLitKind;
x_25 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_24, x_16);
lean_dec(x_16);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = lean_unsigned_to_nat(0u);
lean_ctor_set(x_14, 0, x_26);
return x_14;
}
else
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
lean_ctor_set(x_14, 0, x_27);
return x_14;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_28 = lean_ctor_get(x_14, 0);
x_29 = lean_ctor_get(x_14, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_14);
x_30 = lean_box(0);
x_31 = lean_mk_string("numLit");
x_32 = lean_name_mk_string(x_30, x_31);
lean_inc(x_28);
x_33 = l_Lean_Syntax_isOfKind(x_28, x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_mk_string("unexpected precedence");
x_35 = l_Lean_Macro_throwErrorAt___rarg(x_28, x_34, x_2, x_29);
lean_dec(x_28);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_2);
x_36 = l_Lean_numLitKind;
x_37 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_36, x_28);
lean_dec(x_28);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_unsigned_to_nat(0u);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_29);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_37, 0);
lean_inc(x_40);
lean_dec(x_37);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_29);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_14);
if (x_42 == 0)
{
return x_14;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_14, 0);
x_44 = lean_ctor_get(x_14, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_14);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_free_object(x_2);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_46 = l_Lean_maxRecDepthErrorMessage;
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_1);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_3);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_49 = lean_ctor_get(x_2, 0);
x_50 = lean_ctor_get(x_2, 1);
x_51 = lean_ctor_get(x_2, 2);
x_52 = lean_ctor_get(x_2, 3);
x_53 = lean_ctor_get(x_2, 4);
x_54 = lean_ctor_get(x_2, 5);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_2);
x_55 = lean_nat_dec_eq(x_52, x_53);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_56 = lean_unsigned_to_nat(1u);
x_57 = lean_nat_add(x_52, x_56);
lean_dec(x_52);
x_58 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_58, 0, x_49);
lean_ctor_set(x_58, 1, x_50);
lean_ctor_set(x_58, 2, x_51);
lean_ctor_set(x_58, 3, x_57);
lean_ctor_set(x_58, 4, x_53);
lean_ctor_set(x_58, 5, x_54);
lean_inc(x_58);
x_59 = l_Lean_expandMacros(x_1, x_58, x_3);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_62 = x_59;
} else {
 lean_dec_ref(x_59);
 x_62 = lean_box(0);
}
x_63 = lean_box(0);
x_64 = lean_mk_string("numLit");
x_65 = lean_name_mk_string(x_63, x_64);
lean_inc(x_60);
x_66 = l_Lean_Syntax_isOfKind(x_60, x_65);
lean_dec(x_65);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_62);
x_67 = lean_mk_string("unexpected precedence");
x_68 = l_Lean_Macro_throwErrorAt___rarg(x_60, x_67, x_58, x_61);
lean_dec(x_60);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; 
lean_dec(x_58);
x_69 = l_Lean_numLitKind;
x_70 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_69, x_60);
lean_dec(x_60);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_unsigned_to_nat(0u);
if (lean_is_scalar(x_62)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_62;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_61);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; 
x_73 = lean_ctor_get(x_70, 0);
lean_inc(x_73);
lean_dec(x_70);
if (lean_is_scalar(x_62)) {
 x_74 = lean_alloc_ctor(0, 2, 0);
} else {
 x_74 = x_62;
}
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_61);
return x_74;
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_58);
x_75 = lean_ctor_get(x_59, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_59, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_77 = x_59;
} else {
 lean_dec_ref(x_59);
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
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
x_79 = l_Lean_maxRecDepthErrorMessage;
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_1);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_3);
return x_81;
}
}
}
}
lean_object* l_Lean_myMacro____x40_Init_Meta___hyg_4993_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Lean");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Parser");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("Syntax");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("addPrec");
x_12 = lean_name_mk_string(x_10, x_11);
lean_inc(x_1);
x_13 = l_Lean_Syntax_isOfKind(x_1, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
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
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = lean_unsigned_to_nat(2u);
x_19 = l_Lean_Syntax_getArg(x_1, x_18);
lean_dec(x_1);
lean_inc(x_2);
x_20 = l_Lean_evalPrec(x_17, x_2, x_3);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_2);
x_23 = l_Lean_evalPrec(x_19, x_2, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_25);
lean_dec(x_2);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
x_29 = lean_nat_add(x_21, x_24);
lean_dec(x_24);
lean_dec(x_21);
x_30 = l_Nat_repr(x_29);
x_31 = l_Lean_numLitKind;
x_32 = lean_box(2);
x_33 = l_Lean_Syntax_mkLit(x_31, x_30, x_32);
lean_ctor_set(x_26, 0, x_33);
return x_26;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_34 = lean_ctor_get(x_26, 1);
lean_inc(x_34);
lean_dec(x_26);
x_35 = lean_nat_add(x_21, x_24);
lean_dec(x_24);
lean_dec(x_21);
x_36 = l_Nat_repr(x_35);
x_37 = l_Lean_numLitKind;
x_38 = lean_box(2);
x_39 = l_Lean_Syntax_mkLit(x_37, x_36, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_34);
return x_40;
}
}
else
{
uint8_t x_41; 
lean_dec(x_21);
lean_dec(x_2);
x_41 = !lean_is_exclusive(x_23);
if (x_41 == 0)
{
return x_23;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_23, 0);
x_43 = lean_ctor_get(x_23, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_23);
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
lean_dec(x_19);
lean_dec(x_2);
x_45 = !lean_is_exclusive(x_20);
if (x_45 == 0)
{
return x_20;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_20, 0);
x_47 = lean_ctor_get(x_20, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_20);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
}
lean_object* l_Lean_myMacro____x40_Init_Meta___hyg_5096_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Lean");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Parser");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("Syntax");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("subPrec");
x_12 = lean_name_mk_string(x_10, x_11);
lean_inc(x_1);
x_13 = l_Lean_Syntax_isOfKind(x_1, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
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
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = lean_unsigned_to_nat(2u);
x_19 = l_Lean_Syntax_getArg(x_1, x_18);
lean_dec(x_1);
lean_inc(x_2);
x_20 = l_Lean_evalPrec(x_17, x_2, x_3);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_2);
x_23 = l_Lean_evalPrec(x_19, x_2, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_25);
lean_dec(x_2);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
x_29 = lean_nat_sub(x_21, x_24);
lean_dec(x_24);
lean_dec(x_21);
x_30 = l_Nat_repr(x_29);
x_31 = l_Lean_numLitKind;
x_32 = lean_box(2);
x_33 = l_Lean_Syntax_mkLit(x_31, x_30, x_32);
lean_ctor_set(x_26, 0, x_33);
return x_26;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_34 = lean_ctor_get(x_26, 1);
lean_inc(x_34);
lean_dec(x_26);
x_35 = lean_nat_sub(x_21, x_24);
lean_dec(x_24);
lean_dec(x_21);
x_36 = l_Nat_repr(x_35);
x_37 = l_Lean_numLitKind;
x_38 = lean_box(2);
x_39 = l_Lean_Syntax_mkLit(x_37, x_36, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_34);
return x_40;
}
}
else
{
uint8_t x_41; 
lean_dec(x_21);
lean_dec(x_2);
x_41 = !lean_is_exclusive(x_23);
if (x_41 == 0)
{
return x_23;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_23, 0);
x_43 = lean_ctor_get(x_23, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_23);
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
lean_dec(x_19);
lean_dec(x_2);
x_45 = !lean_is_exclusive(x_20);
if (x_45 == 0)
{
return x_20;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_20, 0);
x_47 = lean_ctor_get(x_20, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_20);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
}
static lean_object* _init_l_Lean_termEval__prec__() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("termEval_prec_");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("andthen");
x_7 = lean_name_mk_string(x_1, x_6);
x_8 = lean_mk_string("eval_prec ");
x_9 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_mk_string("prec");
x_11 = lean_name_mk_string(x_1, x_10);
x_12 = lean_unsigned_to_nat(1024u);
x_13 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_9);
lean_ctor_set(x_14, 2, x_13);
x_15 = lean_unsigned_to_nat(1022u);
x_16 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_16, 0, x_5);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_16, 2, x_14);
return x_16;
}
}
lean_object* l_Lean_myMacro____x40_Init_Meta___hyg_5214_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Lean");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("termEval_prec_");
x_8 = lean_name_mk_string(x_6, x_7);
lean_inc(x_1);
x_9 = l_Lean_Syntax_isOfKind(x_1, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_box(1);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
lean_dec(x_1);
x_14 = l_Lean_evalPrec(x_13, x_2, x_3);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = l_Nat_repr(x_16);
x_18 = l_Lean_numLitKind;
x_19 = lean_box(2);
x_20 = l_Lean_Syntax_mkLit(x_18, x_17, x_19);
lean_ctor_set(x_14, 0, x_20);
return x_14;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_14, 0);
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_14);
x_23 = l_Nat_repr(x_21);
x_24 = l_Lean_numLitKind;
x_25 = lean_box(2);
x_26 = l_Lean_Syntax_mkLit(x_24, x_23, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_22);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_14);
if (x_28 == 0)
{
return x_14;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_14, 0);
x_30 = lean_ctor_get(x_14, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_14);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
}
lean_object* l_Lean_evalOptPrec(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Lean_evalPrec(x_6, x_2, x_3);
return x_7;
}
}
}
lean_object* l_Lean_evalPrio(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_ctor_get(x_2, 2);
x_8 = lean_ctor_get(x_2, 3);
x_9 = lean_ctor_get(x_2, 4);
x_10 = lean_ctor_get(x_2, 5);
x_11 = lean_nat_dec_eq(x_8, x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_8, x_12);
lean_dec(x_8);
lean_ctor_set(x_2, 3, x_13);
lean_inc(x_2);
x_14 = l_Lean_expandMacros(x_1, x_2, x_3);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_18 = lean_box(0);
x_19 = lean_mk_string("numLit");
x_20 = lean_name_mk_string(x_18, x_19);
lean_inc(x_16);
x_21 = l_Lean_Syntax_isOfKind(x_16, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
lean_free_object(x_14);
x_22 = lean_mk_string("unexpected priority");
x_23 = l_Lean_Macro_throwErrorAt___rarg(x_16, x_22, x_2, x_17);
lean_dec(x_16);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_2);
x_24 = l_Lean_numLitKind;
x_25 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_24, x_16);
lean_dec(x_16);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
x_26 = lean_unsigned_to_nat(0u);
lean_ctor_set(x_14, 0, x_26);
return x_14;
}
else
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
lean_ctor_set(x_14, 0, x_27);
return x_14;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_28 = lean_ctor_get(x_14, 0);
x_29 = lean_ctor_get(x_14, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_14);
x_30 = lean_box(0);
x_31 = lean_mk_string("numLit");
x_32 = lean_name_mk_string(x_30, x_31);
lean_inc(x_28);
x_33 = l_Lean_Syntax_isOfKind(x_28, x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_mk_string("unexpected priority");
x_35 = l_Lean_Macro_throwErrorAt___rarg(x_28, x_34, x_2, x_29);
lean_dec(x_28);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_2);
x_36 = l_Lean_numLitKind;
x_37 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_36, x_28);
lean_dec(x_28);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_unsigned_to_nat(0u);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_29);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_37, 0);
lean_inc(x_40);
lean_dec(x_37);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_29);
return x_41;
}
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_2);
x_42 = !lean_is_exclusive(x_14);
if (x_42 == 0)
{
return x_14;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_14, 0);
x_44 = lean_ctor_get(x_14, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_14);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
lean_free_object(x_2);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_46 = l_Lean_maxRecDepthErrorMessage;
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_1);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_3);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_49 = lean_ctor_get(x_2, 0);
x_50 = lean_ctor_get(x_2, 1);
x_51 = lean_ctor_get(x_2, 2);
x_52 = lean_ctor_get(x_2, 3);
x_53 = lean_ctor_get(x_2, 4);
x_54 = lean_ctor_get(x_2, 5);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_2);
x_55 = lean_nat_dec_eq(x_52, x_53);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_56 = lean_unsigned_to_nat(1u);
x_57 = lean_nat_add(x_52, x_56);
lean_dec(x_52);
x_58 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_58, 0, x_49);
lean_ctor_set(x_58, 1, x_50);
lean_ctor_set(x_58, 2, x_51);
lean_ctor_set(x_58, 3, x_57);
lean_ctor_set(x_58, 4, x_53);
lean_ctor_set(x_58, 5, x_54);
lean_inc(x_58);
x_59 = l_Lean_expandMacros(x_1, x_58, x_3);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_62 = x_59;
} else {
 lean_dec_ref(x_59);
 x_62 = lean_box(0);
}
x_63 = lean_box(0);
x_64 = lean_mk_string("numLit");
x_65 = lean_name_mk_string(x_63, x_64);
lean_inc(x_60);
x_66 = l_Lean_Syntax_isOfKind(x_60, x_65);
lean_dec(x_65);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_62);
x_67 = lean_mk_string("unexpected priority");
x_68 = l_Lean_Macro_throwErrorAt___rarg(x_60, x_67, x_58, x_61);
lean_dec(x_60);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; 
lean_dec(x_58);
x_69 = l_Lean_numLitKind;
x_70 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_69, x_60);
lean_dec(x_60);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_unsigned_to_nat(0u);
if (lean_is_scalar(x_62)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_62;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_61);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; 
x_73 = lean_ctor_get(x_70, 0);
lean_inc(x_73);
lean_dec(x_70);
if (lean_is_scalar(x_62)) {
 x_74 = lean_alloc_ctor(0, 2, 0);
} else {
 x_74 = x_62;
}
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_61);
return x_74;
}
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_58);
x_75 = lean_ctor_get(x_59, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_59, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_77 = x_59;
} else {
 lean_dec_ref(x_59);
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
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
x_79 = l_Lean_maxRecDepthErrorMessage;
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_1);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_3);
return x_81;
}
}
}
}
lean_object* l_Lean_myMacro____x40_Init_Meta___hyg_5350_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Lean");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Parser");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("Syntax");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("addPrio");
x_12 = lean_name_mk_string(x_10, x_11);
lean_inc(x_1);
x_13 = l_Lean_Syntax_isOfKind(x_1, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
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
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = lean_unsigned_to_nat(2u);
x_19 = l_Lean_Syntax_getArg(x_1, x_18);
lean_dec(x_1);
lean_inc(x_2);
x_20 = l_Lean_evalPrio(x_17, x_2, x_3);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_2);
x_23 = l_Lean_evalPrio(x_19, x_2, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_25);
lean_dec(x_2);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
x_29 = lean_nat_add(x_21, x_24);
lean_dec(x_24);
lean_dec(x_21);
x_30 = l_Nat_repr(x_29);
x_31 = l_Lean_numLitKind;
x_32 = lean_box(2);
x_33 = l_Lean_Syntax_mkLit(x_31, x_30, x_32);
lean_ctor_set(x_26, 0, x_33);
return x_26;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_34 = lean_ctor_get(x_26, 1);
lean_inc(x_34);
lean_dec(x_26);
x_35 = lean_nat_add(x_21, x_24);
lean_dec(x_24);
lean_dec(x_21);
x_36 = l_Nat_repr(x_35);
x_37 = l_Lean_numLitKind;
x_38 = lean_box(2);
x_39 = l_Lean_Syntax_mkLit(x_37, x_36, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_34);
return x_40;
}
}
else
{
uint8_t x_41; 
lean_dec(x_21);
lean_dec(x_2);
x_41 = !lean_is_exclusive(x_23);
if (x_41 == 0)
{
return x_23;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_23, 0);
x_43 = lean_ctor_get(x_23, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_23);
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
lean_dec(x_19);
lean_dec(x_2);
x_45 = !lean_is_exclusive(x_20);
if (x_45 == 0)
{
return x_20;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_20, 0);
x_47 = lean_ctor_get(x_20, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_20);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
}
lean_object* l_Lean_myMacro____x40_Init_Meta___hyg_5453_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Lean");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Parser");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("Syntax");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("subPrio");
x_12 = lean_name_mk_string(x_10, x_11);
lean_inc(x_1);
x_13 = l_Lean_Syntax_isOfKind(x_1, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
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
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = lean_unsigned_to_nat(2u);
x_19 = l_Lean_Syntax_getArg(x_1, x_18);
lean_dec(x_1);
lean_inc(x_2);
x_20 = l_Lean_evalPrio(x_17, x_2, x_3);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_2);
x_23 = l_Lean_evalPrio(x_19, x_2, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_25);
lean_dec(x_2);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
x_29 = lean_nat_sub(x_21, x_24);
lean_dec(x_24);
lean_dec(x_21);
x_30 = l_Nat_repr(x_29);
x_31 = l_Lean_numLitKind;
x_32 = lean_box(2);
x_33 = l_Lean_Syntax_mkLit(x_31, x_30, x_32);
lean_ctor_set(x_26, 0, x_33);
return x_26;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_34 = lean_ctor_get(x_26, 1);
lean_inc(x_34);
lean_dec(x_26);
x_35 = lean_nat_sub(x_21, x_24);
lean_dec(x_24);
lean_dec(x_21);
x_36 = l_Nat_repr(x_35);
x_37 = l_Lean_numLitKind;
x_38 = lean_box(2);
x_39 = l_Lean_Syntax_mkLit(x_37, x_36, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_34);
return x_40;
}
}
else
{
uint8_t x_41; 
lean_dec(x_21);
lean_dec(x_2);
x_41 = !lean_is_exclusive(x_23);
if (x_41 == 0)
{
return x_23;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_23, 0);
x_43 = lean_ctor_get(x_23, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_23);
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
lean_dec(x_19);
lean_dec(x_2);
x_45 = !lean_is_exclusive(x_20);
if (x_45 == 0)
{
return x_20;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_20, 0);
x_47 = lean_ctor_get(x_20, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_20);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
}
static lean_object* _init_l_Lean_termEval__prio__() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("termEval_prio_");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("andthen");
x_7 = lean_name_mk_string(x_1, x_6);
x_8 = lean_mk_string("eval_prio ");
x_9 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_mk_string("prio");
x_11 = lean_name_mk_string(x_1, x_10);
x_12 = lean_unsigned_to_nat(1024u);
x_13 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_9);
lean_ctor_set(x_14, 2, x_13);
x_15 = lean_unsigned_to_nat(1022u);
x_16 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_16, 0, x_5);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_16, 2, x_14);
return x_16;
}
}
lean_object* l_Lean_myMacro____x40_Init_Meta___hyg_5571_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Lean");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("termEval_prio_");
x_8 = lean_name_mk_string(x_6, x_7);
lean_inc(x_1);
x_9 = l_Lean_Syntax_isOfKind(x_1, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_box(1);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
lean_dec(x_1);
x_14 = l_Lean_evalPrio(x_13, x_2, x_3);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = l_Nat_repr(x_16);
x_18 = l_Lean_numLitKind;
x_19 = lean_box(2);
x_20 = l_Lean_Syntax_mkLit(x_18, x_17, x_19);
lean_ctor_set(x_14, 0, x_20);
return x_14;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_14, 0);
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_14);
x_23 = l_Nat_repr(x_21);
x_24 = l_Lean_numLitKind;
x_25 = lean_box(2);
x_26 = l_Lean_Syntax_mkLit(x_24, x_23, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_22);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_14);
if (x_28 == 0)
{
return x_14;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_14, 0);
x_30 = lean_ctor_get(x_14, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_14);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
}
lean_object* l_Lean_evalOptPrio(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_unsigned_to_nat(1000u);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Lean_evalPrio(x_6, x_2, x_3);
return x_7;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Array_getSepElems___spec__1___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = 1;
x_8 = x_2 + x_7;
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_6);
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_4, 0);
lean_dec(x_12);
x_13 = 1;
x_14 = lean_box(x_13);
lean_ctor_set(x_4, 0, x_14);
x_2 = x_8;
goto _start;
}
else
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
lean_dec(x_4);
x_17 = 1;
x_18 = lean_box(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
x_2 = x_8;
x_4 = x_19;
goto _start;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_4);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_4, 1);
x_23 = lean_ctor_get(x_4, 0);
lean_dec(x_23);
x_24 = lean_array_push(x_22, x_6);
x_25 = 0;
x_26 = lean_box(x_25);
lean_ctor_set(x_4, 1, x_24);
lean_ctor_set(x_4, 0, x_26);
x_2 = x_8;
goto _start;
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_ctor_get(x_4, 1);
lean_inc(x_28);
lean_dec(x_4);
x_29 = lean_array_push(x_28, x_6);
x_30 = 0;
x_31 = lean_box(x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_29);
x_2 = x_8;
x_4 = x_32;
goto _start;
}
}
}
else
{
return x_4;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Array_getSepElems___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Array_getSepElems___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_getSepElems___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_mk_empty_array_with_capacity(x_2);
x_4 = 1;
x_5 = lean_box(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
x_7 = lean_array_get_size(x_1);
x_8 = lean_nat_dec_lt(x_2, x_7);
if (x_8 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
return x_3;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_7, x_7);
if (x_9 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
return x_3;
}
else
{
size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
x_10 = 0;
x_11 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_12 = l_Array_foldlMUnsafe_fold___at_Array_getSepElems___spec__1___rarg(x_1, x_10, x_11, x_6);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
return x_13;
}
}
}
}
lean_object* l_Array_getSepElems(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_getSepElems___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Array_getSepElems___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Array_getSepElems___spec__1___rarg(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_getSepElems___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_getSepElems___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Array_filterSepElemsMAux___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7) {
_start:
{
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(2u);
x_9 = lean_nat_add(x_1, x_8);
x_10 = l___private_Init_Meta_0__Array_filterSepElemsMAux___rarg(x_2, x_3, x_4, x_9, x_5);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = l_Array_isEmpty___rarg(x_5);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; uint8_t x_14; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_1, x_12);
x_14 = l_instDecidableNot___rarg(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(2u);
x_16 = lean_nat_add(x_1, x_15);
x_17 = lean_array_push(x_5, x_6);
x_18 = l___private_Init_Meta_0__Array_filterSepElemsMAux___rarg(x_2, x_3, x_4, x_16, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_nat_sub(x_1, lean_box(1));
x_20 = lean_array_fget(x_3, x_19);
lean_dec(x_19);
x_21 = lean_unsigned_to_nat(2u);
x_22 = lean_nat_add(x_1, x_21);
x_23 = lean_array_push(x_5, x_20);
x_24 = lean_array_push(x_23, x_6);
x_25 = l___private_Init_Meta_0__Array_filterSepElemsMAux___rarg(x_2, x_3, x_4, x_22, x_24);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_unsigned_to_nat(2u);
x_27 = lean_nat_add(x_1, x_26);
x_28 = lean_array_push(x_5, x_6);
x_29 = l___private_Init_Meta_0__Array_filterSepElemsMAux___rarg(x_2, x_3, x_4, x_27, x_28);
return x_29;
}
}
}
}
lean_object* l___private_Init_Meta_0__Array_filterSepElemsMAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_2);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_2(x_9, lean_box(0), x_5);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_array_fget(x_2, x_4);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_inc(x_3);
lean_inc(x_11);
x_13 = lean_apply_1(x_3, x_11);
x_14 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Array_filterSepElemsMAux___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_14, 0, x_4);
lean_closure_set(x_14, 1, x_1);
lean_closure_set(x_14, 2, x_2);
lean_closure_set(x_14, 3, x_3);
lean_closure_set(x_14, 4, x_5);
lean_closure_set(x_14, 5, x_11);
x_15 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
}
}
lean_object* l___private_Init_Meta_0__Array_filterSepElemsMAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Array_filterSepElemsMAux___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Array_filterSepElemsMAux___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l___private_Init_Meta_0__Array_filterSepElemsMAux___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_filterSepElemsM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_mk_empty_array_with_capacity(x_4);
x_6 = l___private_Init_Meta_0__Array_filterSepElemsMAux___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Array_filterSepElemsM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_filterSepElemsM___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Array_filterSepElemsMAux___at_Array_filterSepElems___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_1);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_array_fget(x_1, x_3);
lean_inc(x_2);
lean_inc(x_7);
x_8 = lean_apply_1(x_2, x_7);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
x_10 = lean_unsigned_to_nat(2u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_3 = x_11;
goto _start;
}
else
{
uint8_t x_13; 
x_13 = l_Array_isEmpty___rarg(x_4);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; uint8_t x_16; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_eq(x_3, x_14);
x_16 = l_instDecidableNot___rarg(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_unsigned_to_nat(2u);
x_18 = lean_nat_add(x_3, x_17);
lean_dec(x_3);
x_19 = lean_array_push(x_4, x_7);
x_3 = x_18;
x_4 = x_19;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_nat_sub(x_3, lean_box(1));
x_22 = lean_array_fget(x_1, x_21);
lean_dec(x_21);
x_23 = lean_unsigned_to_nat(2u);
x_24 = lean_nat_add(x_3, x_23);
lean_dec(x_3);
x_25 = lean_array_push(x_4, x_22);
x_26 = lean_array_push(x_25, x_7);
x_3 = x_24;
x_4 = x_26;
goto _start;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_unsigned_to_nat(2u);
x_29 = lean_nat_add(x_3, x_28);
lean_dec(x_3);
x_30 = lean_array_push(x_4, x_7);
x_3 = x_29;
x_4 = x_30;
goto _start;
}
}
}
}
}
lean_object* l_Array_filterSepElemsM___at_Array_filterSepElems___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_mk_empty_array_with_capacity(x_3);
x_5 = l___private_Init_Meta_0__Array_filterSepElemsMAux___at_Array_filterSepElems___spec__2(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Array_filterSepElems(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Array_filterSepElemsM___at_Array_filterSepElems___spec__1(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Init_Meta_0__Array_filterSepElemsMAux___at_Array_filterSepElems___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Meta_0__Array_filterSepElemsMAux___at_Array_filterSepElems___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_filterSepElemsM___at_Array_filterSepElems___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Array_filterSepElemsM___at_Array_filterSepElems___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_filterSepElems___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Array_filterSepElems(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Init_Meta_0__Array_mapSepElemsMAux___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_1, x_7);
x_9 = lean_array_push(x_2, x_6);
x_10 = l___private_Init_Meta_0__Array_mapSepElemsMAux___rarg(x_3, x_4, x_5, x_8, x_9);
return x_10;
}
}
lean_object* l___private_Init_Meta_0__Array_mapSepElemsMAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_2);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_2(x_9, lean_box(0), x_5);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_array_fget(x_2, x_4);
x_12 = lean_unsigned_to_nat(2u);
x_13 = lean_nat_mod(x_4, x_12);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_eq(x_13, x_14);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_4, x_16);
lean_dec(x_4);
x_18 = lean_array_push(x_5, x_11);
x_4 = x_17;
x_5 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_inc(x_3);
x_21 = lean_apply_1(x_3, x_11);
x_22 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Array_mapSepElemsMAux___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_22, 0, x_4);
lean_closure_set(x_22, 1, x_5);
lean_closure_set(x_22, 2, x_1);
lean_closure_set(x_22, 3, x_2);
lean_closure_set(x_22, 4, x_3);
x_23 = lean_apply_4(x_20, lean_box(0), lean_box(0), x_21, x_22);
return x_23;
}
}
}
}
lean_object* l___private_Init_Meta_0__Array_mapSepElemsMAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Array_mapSepElemsMAux___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Array_mapSepElemsMAux___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Init_Meta_0__Array_mapSepElemsMAux___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_mapSepElemsM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_mk_empty_array_with_capacity(x_4);
x_6 = l___private_Init_Meta_0__Array_mapSepElemsMAux___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Array_mapSepElemsM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_mapSepElemsM___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Array_mapSepElemsMAux___at_Array_mapSepElems___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_1);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_array_fget(x_1, x_3);
x_8 = lean_unsigned_to_nat(2u);
x_9 = lean_nat_mod(x_3, x_8);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_9, x_10);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_3, x_12);
lean_dec(x_3);
x_14 = lean_array_push(x_4, x_7);
x_3 = x_13;
x_4 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_inc(x_2);
x_16 = lean_apply_1(x_2, x_7);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_3, x_17);
lean_dec(x_3);
x_19 = lean_array_push(x_4, x_16);
x_3 = x_18;
x_4 = x_19;
goto _start;
}
}
}
}
lean_object* l_Array_mapSepElemsM___at_Array_mapSepElems___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_mk_empty_array_with_capacity(x_3);
x_5 = l___private_Init_Meta_0__Array_mapSepElemsMAux___at_Array_mapSepElems___spec__2(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Array_mapSepElems(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Array_mapSepElemsM___at_Array_mapSepElems___spec__1(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Init_Meta_0__Array_mapSepElemsMAux___at_Array_mapSepElems___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Meta_0__Array_mapSepElemsMAux___at_Array_mapSepElems___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_mapSepElemsM___at_Array_mapSepElems___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Array_mapSepElemsM___at_Array_mapSepElems___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_mapSepElems___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Array_mapSepElems(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = 1;
x_8 = x_2 + x_7;
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_6);
x_11 = !lean_is_exclusive(x_4);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_4, 0);
lean_dec(x_12);
x_13 = 1;
x_14 = lean_box(x_13);
lean_ctor_set(x_4, 0, x_14);
x_2 = x_8;
goto _start;
}
else
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
lean_dec(x_4);
x_17 = 1;
x_18 = lean_box(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
x_2 = x_8;
x_4 = x_19;
goto _start;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_4);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_4, 1);
x_23 = lean_ctor_get(x_4, 0);
lean_dec(x_23);
x_24 = lean_array_push(x_22, x_6);
x_25 = 0;
x_26 = lean_box(x_25);
lean_ctor_set(x_4, 1, x_24);
lean_ctor_set(x_4, 0, x_26);
x_2 = x_8;
goto _start;
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_ctor_get(x_4, 1);
lean_inc(x_28);
lean_dec(x_4);
x_29 = lean_array_push(x_28, x_6);
x_30 = 0;
x_31 = lean_box(x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_29);
x_2 = x_8;
x_4 = x_32;
goto _start;
}
}
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_Syntax_SepArray_getElems___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_mk_empty_array_with_capacity(x_2);
x_4 = 1;
x_5 = lean_box(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
x_7 = lean_array_get_size(x_1);
x_8 = lean_nat_dec_lt(x_2, x_7);
if (x_8 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
return x_3;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_7, x_7);
if (x_9 == 0)
{
lean_dec(x_7);
lean_dec(x_6);
return x_3;
}
else
{
size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
x_10 = 0;
x_11 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1(x_1, x_10, x_11, x_6);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Syntax_SepArray_getElems(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_SepArray_getElems___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Syntax_SepArray_getElems___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_SepArray_getElems___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_SepArray_getElems___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_SepArray_getElems(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_SepArray_instCoeTailSepArrayArraySyntax(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_SepArray_getElems___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_SepArray_instCoeTailSepArrayArraySyntax___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_SepArray_instCoeTailSepArrayArraySyntax(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrQuotedChar_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrQuotedChar_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrQuotedChar_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1() {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 123;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrQuotedChar(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Syntax_decodeQuotedChar(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint32_t x_4; lean_object* x_5; uint32_t x_6; uint8_t x_7; 
x_4 = lean_string_utf8_get(x_1, x_2);
x_5 = lean_string_utf8_next(x_1, x_2);
x_6 = 123;
x_7 = x_4 == x_6;
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1;
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_5);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
return x_3;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
lean_dec(x_3);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrQuotedChar(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrLit_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; uint32_t x_6; uint8_t x_7; 
x_4 = lean_string_utf8_get(x_1, x_2);
x_5 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_6 = 34;
x_7 = x_4 == x_6;
if (x_7 == 0)
{
uint32_t x_8; uint8_t x_9; 
x_8 = 123;
x_9 = x_4 == x_8;
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = lean_string_utf8_at_end(x_1, x_5);
if (x_10 == 0)
{
uint32_t x_11; uint8_t x_12; 
x_11 = 92;
x_12 = x_4 == x_11;
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_string_push(x_3, x_4);
x_2 = x_5;
x_3 = x_13;
goto _start;
}
else
{
lean_object* x_15; 
x_15 = l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrQuotedChar(x_1, x_5);
lean_dec(x_5);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
lean_dec(x_3);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint32_t x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_unbox_uint32(x_18);
lean_dec(x_18);
x_21 = lean_string_push(x_3, x_20);
x_2 = x_19;
x_3 = x_21;
goto _start;
}
}
}
else
{
lean_object* x_23; 
lean_dec(x_5);
lean_dec(x_3);
x_23 = lean_box(0);
return x_23;
}
}
else
{
lean_object* x_24; 
lean_dec(x_5);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_3);
return x_24;
}
}
else
{
lean_object* x_25; 
lean_dec(x_5);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_3);
return x_25;
}
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrLit_loop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrLit_loop(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrLit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_mk_string("");
x_4 = l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrLit_loop(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrLit___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrLit(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_isInterpolatedStrLit_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_interpolatedStrLitKind;
x_3 = l_Lean_Syntax_isLit_x3f(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_mk_string("");
x_8 = l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrLit_loop(x_5, x_6, x_7);
lean_dec(x_5);
return x_8;
}
}
}
lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_isInterpolatedStrLit_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Syntax_expandInterpolatedStrChunks_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Syntax_expandInterpolatedStrChunks_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Syntax_expandInterpolatedStrChunks_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_expandInterpolatedStrChunks___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_1, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_2);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_5);
return x_10;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_expandInterpolatedStrChunks___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_Syntax_expandInterpolatedStrChunks___spec__1___lambda__1___boxed), 5, 0);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_2, x_8);
if (x_9 == 0)
{
lean_object* x_10; 
lean_inc(x_5);
x_10 = lean_apply_4(x_1, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_box(0);
x_14 = lean_apply_5(x_7, x_2, x_11, x_13, x_5, x_12);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_7);
lean_dec(x_5);
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
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_3);
lean_dec(x_1);
x_19 = lean_box(0);
x_20 = lean_apply_5(x_7, x_2, x_4, x_19, x_5, x_6);
return x_20;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_expandInterpolatedStrChunks___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = x_5 < x_4;
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_array_uget(x_3, x_5);
x_12 = lean_ctor_get(x_6, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
lean_dec(x_6);
x_14 = l_Lean_Syntax_isInterpolatedStrLit_x3f(x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
lean_inc(x_2);
lean_inc(x_7);
x_15 = lean_apply_3(x_2, x_11, x_7, x_8);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_7);
lean_inc(x_1);
x_18 = l_Array_forInUnsafe_loop___at_Lean_Syntax_expandInterpolatedStrChunks___spec__1___lambda__2(x_1, x_12, x_13, x_16, x_7, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 0);
lean_dec(x_21);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
lean_dec(x_19);
lean_ctor_set(x_18, 0, x_22);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_ctor_get(x_19, 0);
lean_inc(x_24);
lean_dec(x_19);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; 
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_dec(x_18);
x_27 = lean_ctor_get(x_19, 0);
lean_inc(x_27);
lean_dec(x_19);
x_28 = 1;
x_29 = x_5 + x_28;
x_5 = x_29;
x_6 = x_27;
x_8 = x_26;
goto _start;
}
}
else
{
uint8_t x_31; 
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_18);
if (x_31 == 0)
{
return x_18;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_18, 0);
x_33 = lean_ctor_get(x_18, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_18);
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
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_2);
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
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_11);
x_39 = lean_ctor_get(x_14, 0);
lean_inc(x_39);
lean_dec(x_14);
x_40 = lean_box(2);
x_41 = l_Lean_Syntax_mkStrLit(x_39, x_40);
lean_dec(x_39);
lean_inc(x_2);
lean_inc(x_7);
x_42 = lean_apply_3(x_2, x_41, x_7, x_8);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
lean_inc(x_7);
lean_inc(x_1);
x_45 = l_Array_forInUnsafe_loop___at_Lean_Syntax_expandInterpolatedStrChunks___spec__1___lambda__2(x_1, x_12, x_13, x_43, x_7, x_44);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
if (lean_obj_tag(x_46) == 0)
{
uint8_t x_47; 
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_45);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_45, 0);
lean_dec(x_48);
x_49 = lean_ctor_get(x_46, 0);
lean_inc(x_49);
lean_dec(x_46);
lean_ctor_set(x_45, 0, x_49);
return x_45;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_45, 1);
lean_inc(x_50);
lean_dec(x_45);
x_51 = lean_ctor_get(x_46, 0);
lean_inc(x_51);
lean_dec(x_46);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; size_t x_55; size_t x_56; 
x_53 = lean_ctor_get(x_45, 1);
lean_inc(x_53);
lean_dec(x_45);
x_54 = lean_ctor_get(x_46, 0);
lean_inc(x_54);
lean_dec(x_46);
x_55 = 1;
x_56 = x_5 + x_55;
x_5 = x_56;
x_6 = x_54;
x_8 = x_53;
goto _start;
}
}
else
{
uint8_t x_58; 
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_45);
if (x_58 == 0)
{
return x_45;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_45, 0);
x_60 = lean_ctor_get(x_45, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_45);
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
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_62 = !lean_is_exclusive(x_42);
if (x_62 == 0)
{
return x_42;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_42, 0);
x_64 = lean_ctor_get(x_42, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_42);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
}
}
lean_object* l_Lean_Syntax_expandInterpolatedStrChunks(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; lean_object* x_12; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_array_get_size(x_1);
x_10 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_11 = 0;
x_12 = l_Array_forInUnsafe_loop___at_Lean_Syntax_expandInterpolatedStrChunks___spec__1(x_2, x_3, x_1, x_10, x_11, x_8, x_4, x_5);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_14, 1);
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
x_18 = lean_ctor_get(x_16, 1);
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
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_expandInterpolatedStrChunks___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Array_forInUnsafe_loop___at_Lean_Syntax_expandInterpolatedStrChunks___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Syntax_expandInterpolatedStrChunks___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_11 = l_Array_forInUnsafe_loop___at_Lean_Syntax_expandInterpolatedStrChunks___spec__1(x_1, x_2, x_3, x_9, x_10, x_6, x_7, x_8);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Syntax_expandInterpolatedStrChunks___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Syntax_expandInterpolatedStrChunks(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Syntax_expandInterpolatedStr___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_box(0);
x_9 = lean_mk_string("term_++_");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("++");
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_unsigned_to_nat(3u);
x_14 = lean_mk_empty_array_with_capacity(x_13);
x_15 = lean_array_push(x_14, x_1);
x_16 = lean_array_push(x_15, x_12);
x_17 = lean_array_push(x_16, x_2);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_10);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_5, 0, x_18);
return x_5;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_19 = lean_ctor_get(x_5, 0);
x_20 = lean_ctor_get(x_5, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_5);
x_21 = lean_box(0);
x_22 = lean_mk_string("term_++_");
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = lean_mk_string("++");
x_25 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_unsigned_to_nat(3u);
x_27 = lean_mk_empty_array_with_capacity(x_26);
x_28 = lean_array_push(x_27, x_1);
x_29 = lean_array_push(x_28, x_25);
x_30 = lean_array_push(x_29, x_2);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_23);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_20);
return x_32;
}
}
}
lean_object* l_Lean_Syntax_expandInterpolatedStr___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_7 = lean_ctor_get(x_5, 0);
lean_dec(x_7);
x_8 = lean_box(0);
x_9 = lean_mk_string("Lean");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("Parser");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_mk_string("Term");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_mk_string("app");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_mk_string("null");
x_18 = lean_name_mk_string(x_8, x_17);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_mk_empty_array_with_capacity(x_19);
x_21 = lean_array_push(x_20, x_2);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_18);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_unsigned_to_nat(2u);
x_24 = lean_mk_empty_array_with_capacity(x_23);
x_25 = lean_array_push(x_24, x_1);
x_26 = lean_array_push(x_25, x_22);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_16);
lean_ctor_set(x_27, 1, x_26);
lean_ctor_set(x_5, 0, x_27);
return x_5;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_28 = lean_ctor_get(x_5, 1);
lean_inc(x_28);
lean_dec(x_5);
x_29 = lean_box(0);
x_30 = lean_mk_string("Lean");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("Parser");
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("Term");
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = lean_mk_string("app");
x_37 = lean_name_mk_string(x_35, x_36);
x_38 = lean_mk_string("null");
x_39 = lean_name_mk_string(x_29, x_38);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_mk_empty_array_with_capacity(x_40);
x_42 = lean_array_push(x_41, x_2);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_39);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_unsigned_to_nat(2u);
x_45 = lean_mk_empty_array_with_capacity(x_44);
x_46 = lean_array_push(x_45, x_1);
x_47 = lean_array_push(x_46, x_43);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_37);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_28);
return x_49;
}
}
}
lean_object* l_Lean_Syntax_expandInterpolatedStr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = l_Lean_Syntax_getArgs(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Syntax_expandInterpolatedStr___lambda__2___boxed), 4, 1);
lean_closure_set(x_7, 0, x_3);
x_8 = lean_alloc_closure((void*)(l_Lean_Syntax_expandInterpolatedStr___lambda__1___boxed), 4, 0);
lean_inc(x_4);
x_9 = l_Lean_Syntax_expandInterpolatedStrChunks(x_6, x_8, x_7, x_4, x_5);
lean_dec(x_6);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_4, x_11);
lean_dec(x_4);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_box(0);
x_16 = lean_mk_string("Lean");
x_17 = lean_name_mk_string(x_15, x_16);
x_18 = lean_mk_string("Parser");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = lean_mk_string("Term");
x_21 = lean_name_mk_string(x_19, x_20);
x_22 = lean_mk_string("paren");
lean_inc(x_21);
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = lean_mk_string("(");
lean_inc(x_14);
x_25 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_25, 0, x_14);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_mk_string("null");
x_27 = lean_name_mk_string(x_15, x_26);
x_28 = lean_mk_string("typeAscription");
x_29 = lean_name_mk_string(x_21, x_28);
x_30 = lean_mk_string(":");
lean_inc(x_14);
x_31 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_31, 0, x_14);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_unsigned_to_nat(2u);
x_33 = lean_mk_empty_array_with_capacity(x_32);
lean_inc(x_33);
x_34 = lean_array_push(x_33, x_31);
x_35 = lean_array_push(x_34, x_2);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_29);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_mk_empty_array_with_capacity(x_37);
x_39 = lean_array_push(x_38, x_36);
lean_inc(x_27);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_27);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_array_push(x_33, x_10);
x_42 = lean_array_push(x_41, x_40);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_27);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_mk_string(")");
x_45 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_45, 0, x_14);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_unsigned_to_nat(3u);
x_47 = lean_mk_empty_array_with_capacity(x_46);
x_48 = lean_array_push(x_47, x_25);
x_49 = lean_array_push(x_48, x_43);
x_50 = lean_array_push(x_49, x_45);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_23);
lean_ctor_set(x_51, 1, x_50);
lean_ctor_set(x_12, 0, x_51);
return x_12;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_52 = lean_ctor_get(x_12, 0);
x_53 = lean_ctor_get(x_12, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_12);
x_54 = lean_box(0);
x_55 = lean_mk_string("Lean");
x_56 = lean_name_mk_string(x_54, x_55);
x_57 = lean_mk_string("Parser");
x_58 = lean_name_mk_string(x_56, x_57);
x_59 = lean_mk_string("Term");
x_60 = lean_name_mk_string(x_58, x_59);
x_61 = lean_mk_string("paren");
lean_inc(x_60);
x_62 = lean_name_mk_string(x_60, x_61);
x_63 = lean_mk_string("(");
lean_inc(x_52);
x_64 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_64, 0, x_52);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_mk_string("null");
x_66 = lean_name_mk_string(x_54, x_65);
x_67 = lean_mk_string("typeAscription");
x_68 = lean_name_mk_string(x_60, x_67);
x_69 = lean_mk_string(":");
lean_inc(x_52);
x_70 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_70, 0, x_52);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_unsigned_to_nat(2u);
x_72 = lean_mk_empty_array_with_capacity(x_71);
lean_inc(x_72);
x_73 = lean_array_push(x_72, x_70);
x_74 = lean_array_push(x_73, x_2);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_68);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_unsigned_to_nat(1u);
x_77 = lean_mk_empty_array_with_capacity(x_76);
x_78 = lean_array_push(x_77, x_75);
lean_inc(x_66);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_66);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_array_push(x_72, x_10);
x_81 = lean_array_push(x_80, x_79);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_66);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_mk_string(")");
x_84 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_84, 0, x_52);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_unsigned_to_nat(3u);
x_86 = lean_mk_empty_array_with_capacity(x_85);
x_87 = lean_array_push(x_86, x_64);
x_88 = lean_array_push(x_87, x_82);
x_89 = lean_array_push(x_88, x_84);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_62);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_53);
return x_91;
}
}
else
{
uint8_t x_92; 
lean_dec(x_4);
lean_dec(x_2);
x_92 = !lean_is_exclusive(x_9);
if (x_92 == 0)
{
return x_9;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_9, 0);
x_94 = lean_ctor_get(x_9, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_9);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
}
lean_object* l_Lean_Syntax_expandInterpolatedStr___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Syntax_expandInterpolatedStr___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Syntax_expandInterpolatedStr___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Syntax_expandInterpolatedStr___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Syntax_expandInterpolatedStr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Syntax_expandInterpolatedStr(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Syntax_getSepArgs(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_2 = l_Lean_Syntax_getArgs(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_mk_empty_array_with_capacity(x_3);
x_5 = 1;
x_6 = lean_box(x_5);
lean_inc(x_4);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
x_8 = lean_array_get_size(x_2);
x_9 = lean_nat_dec_lt(x_3, x_8);
if (x_9 == 0)
{
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
return x_4;
}
else
{
uint8_t x_10; 
x_10 = lean_nat_dec_le(x_8, x_8);
if (x_10 == 0)
{
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
return x_4;
}
else
{
size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
x_11 = 0;
x_12 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_13 = l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1(x_2, x_11, x_12, x_7);
lean_dec(x_2);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_Syntax_getSepArgs___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Syntax_getSepArgs(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Simp_defaultMaxSteps() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(100000u);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Config_maxSteps___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_Simp_defaultMaxSteps;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_Config_maxDischargeDepth___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(2u);
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Simp_Config_contextual___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Simp_Config_memoize___default() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Simp_Config_singlePass___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Simp_Config_zeta___default() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Simp_Config_beta___default() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Simp_Config_eta___default() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Simp_Config_iota___default() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Simp_Config_proj___default() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Simp_Config_ctorEq___default() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Simp_Config_decide___default() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Simp_instInhabitedConfig() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = 0;
x_3 = lean_alloc_ctor(0, 2, 10);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*2, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*2 + 1, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*2 + 2, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*2 + 3, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*2 + 4, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*2 + 5, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*2 + 6, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*2 + 7, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*2 + 8, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*2 + 9, x_2);
return x_3;
}
}
lean_object* l___private_Init_Meta_0__Lean_Meta_Simp_beqConfig____x40_Init_Meta___hyg_6706__match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; uint8_t x_8; uint8_t x_9; uint8_t x_10; uint8_t x_11; uint8_t x_12; uint8_t x_13; uint8_t x_14; uint8_t x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; uint8_t x_20; uint8_t x_21; uint8_t x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
x_9 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
x_10 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
x_11 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 4);
x_12 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 5);
x_13 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 6);
x_14 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 7);
x_15 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 8);
x_16 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 9);
lean_dec(x_1);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
x_19 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
x_20 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 1);
x_21 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 2);
x_22 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 3);
x_23 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 4);
x_24 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 5);
x_25 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 6);
x_26 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 7);
x_27 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 8);
x_28 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 9);
lean_dec(x_2);
x_29 = lean_box(x_7);
x_30 = lean_box(x_8);
x_31 = lean_box(x_9);
x_32 = lean_box(x_10);
x_33 = lean_box(x_11);
x_34 = lean_box(x_12);
x_35 = lean_box(x_13);
x_36 = lean_box(x_14);
x_37 = lean_box(x_15);
x_38 = lean_box(x_16);
x_39 = lean_box(x_19);
x_40 = lean_box(x_20);
x_41 = lean_box(x_21);
x_42 = lean_box(x_22);
x_43 = lean_box(x_23);
x_44 = lean_box(x_24);
x_45 = lean_box(x_25);
x_46 = lean_box(x_26);
x_47 = lean_box(x_27);
x_48 = lean_box(x_28);
{ lean_object* _aargs[] = {x_5, x_6, x_29, x_30, x_31, x_32, x_33, x_34, x_35, x_36, x_37, x_38, x_17, x_18, x_39, x_40, x_41, x_42, x_43, x_44, x_45, x_46, x_47, x_48};
x_49 = lean_apply_m(x_3, 24, _aargs); }
return x_49;
}
}
lean_object* l___private_Init_Meta_0__Lean_Meta_Simp_beqConfig____x40_Init_Meta___hyg_6706__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Lean_Meta_Simp_beqConfig____x40_Init_Meta___hyg_6706__match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Init_Meta_0__Lean_Meta_Simp_beqConfig____x40_Init_Meta___hyg_6706__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_Meta_0__Lean_Meta_Simp_beqConfig____x40_Init_Meta___hyg_6706__match__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
uint8_t l___private_Init_Meta_0__Lean_Meta_Simp_beqConfig____x40_Init_Meta___hyg_6706_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; uint8_t x_6; uint8_t x_7; uint8_t x_8; uint8_t x_9; uint8_t x_10; uint8_t x_11; uint8_t x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; uint8_t x_18; uint8_t x_19; uint8_t x_20; uint8_t x_21; uint8_t x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; lean_object* x_27; lean_object* x_31; lean_object* x_37; lean_object* x_43; lean_object* x_49; lean_object* x_55; lean_object* x_61; lean_object* x_67; lean_object* x_73; uint8_t x_79; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
x_9 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 4);
x_10 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 5);
x_11 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 6);
x_12 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 7);
x_13 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 8);
x_14 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 9);
x_15 = lean_ctor_get(x_2, 0);
x_16 = lean_ctor_get(x_2, 1);
x_17 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
x_18 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 1);
x_19 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 2);
x_20 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 3);
x_21 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 4);
x_22 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 5);
x_23 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 6);
x_24 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 7);
x_25 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 8);
x_26 = lean_ctor_get_uint8(x_2, sizeof(void*)*2 + 9);
x_79 = lean_nat_dec_eq(x_3, x_15);
if (x_79 == 0)
{
uint8_t x_80; 
x_80 = 0;
return x_80;
}
else
{
uint8_t x_81; 
x_81 = lean_nat_dec_eq(x_4, x_16);
if (x_81 == 0)
{
uint8_t x_82; 
x_82 = 0;
return x_82;
}
else
{
if (x_5 == 0)
{
if (x_17 == 0)
{
lean_object* x_83; 
x_83 = lean_box(0);
x_73 = x_83;
goto block_78;
}
else
{
uint8_t x_84; 
x_84 = 0;
return x_84;
}
}
else
{
if (x_17 == 0)
{
uint8_t x_85; 
x_85 = 0;
return x_85;
}
else
{
lean_object* x_86; 
x_86 = lean_box(0);
x_73 = x_86;
goto block_78;
}
}
}
}
block_30:
{
lean_dec(x_27);
if (x_14 == 0)
{
if (x_26 == 0)
{
uint8_t x_28; 
x_28 = 1;
return x_28;
}
else
{
uint8_t x_29; 
x_29 = 0;
return x_29;
}
}
else
{
return x_26;
}
}
block_36:
{
lean_dec(x_31);
if (x_13 == 0)
{
if (x_25 == 0)
{
lean_object* x_32; 
x_32 = lean_box(0);
x_27 = x_32;
goto block_30;
}
else
{
uint8_t x_33; 
x_33 = 0;
return x_33;
}
}
else
{
if (x_25 == 0)
{
uint8_t x_34; 
x_34 = 0;
return x_34;
}
else
{
lean_object* x_35; 
x_35 = lean_box(0);
x_27 = x_35;
goto block_30;
}
}
}
block_42:
{
lean_dec(x_37);
if (x_12 == 0)
{
if (x_24 == 0)
{
lean_object* x_38; 
x_38 = lean_box(0);
x_31 = x_38;
goto block_36;
}
else
{
uint8_t x_39; 
x_39 = 0;
return x_39;
}
}
else
{
if (x_24 == 0)
{
uint8_t x_40; 
x_40 = 0;
return x_40;
}
else
{
lean_object* x_41; 
x_41 = lean_box(0);
x_31 = x_41;
goto block_36;
}
}
}
block_48:
{
lean_dec(x_43);
if (x_11 == 0)
{
if (x_23 == 0)
{
lean_object* x_44; 
x_44 = lean_box(0);
x_37 = x_44;
goto block_42;
}
else
{
uint8_t x_45; 
x_45 = 0;
return x_45;
}
}
else
{
if (x_23 == 0)
{
uint8_t x_46; 
x_46 = 0;
return x_46;
}
else
{
lean_object* x_47; 
x_47 = lean_box(0);
x_37 = x_47;
goto block_42;
}
}
}
block_54:
{
lean_dec(x_49);
if (x_10 == 0)
{
if (x_22 == 0)
{
lean_object* x_50; 
x_50 = lean_box(0);
x_43 = x_50;
goto block_48;
}
else
{
uint8_t x_51; 
x_51 = 0;
return x_51;
}
}
else
{
if (x_22 == 0)
{
uint8_t x_52; 
x_52 = 0;
return x_52;
}
else
{
lean_object* x_53; 
x_53 = lean_box(0);
x_43 = x_53;
goto block_48;
}
}
}
block_60:
{
lean_dec(x_55);
if (x_9 == 0)
{
if (x_21 == 0)
{
lean_object* x_56; 
x_56 = lean_box(0);
x_49 = x_56;
goto block_54;
}
else
{
uint8_t x_57; 
x_57 = 0;
return x_57;
}
}
else
{
if (x_21 == 0)
{
uint8_t x_58; 
x_58 = 0;
return x_58;
}
else
{
lean_object* x_59; 
x_59 = lean_box(0);
x_49 = x_59;
goto block_54;
}
}
}
block_66:
{
lean_dec(x_61);
if (x_8 == 0)
{
if (x_20 == 0)
{
lean_object* x_62; 
x_62 = lean_box(0);
x_55 = x_62;
goto block_60;
}
else
{
uint8_t x_63; 
x_63 = 0;
return x_63;
}
}
else
{
if (x_20 == 0)
{
uint8_t x_64; 
x_64 = 0;
return x_64;
}
else
{
lean_object* x_65; 
x_65 = lean_box(0);
x_55 = x_65;
goto block_60;
}
}
}
block_72:
{
lean_dec(x_67);
if (x_7 == 0)
{
if (x_19 == 0)
{
lean_object* x_68; 
x_68 = lean_box(0);
x_61 = x_68;
goto block_66;
}
else
{
uint8_t x_69; 
x_69 = 0;
return x_69;
}
}
else
{
if (x_19 == 0)
{
uint8_t x_70; 
x_70 = 0;
return x_70;
}
else
{
lean_object* x_71; 
x_71 = lean_box(0);
x_61 = x_71;
goto block_66;
}
}
}
block_78:
{
lean_dec(x_73);
if (x_6 == 0)
{
if (x_18 == 0)
{
lean_object* x_74; 
x_74 = lean_box(0);
x_67 = x_74;
goto block_72;
}
else
{
uint8_t x_75; 
x_75 = 0;
return x_75;
}
}
else
{
if (x_18 == 0)
{
uint8_t x_76; 
x_76 = 0;
return x_76;
}
else
{
lean_object* x_77; 
x_77 = lean_box(0);
x_67 = x_77;
goto block_72;
}
}
}
}
}
lean_object* l___private_Init_Meta_0__Lean_Meta_Simp_beqConfig____x40_Init_Meta___hyg_6706____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Init_Meta_0__Lean_Meta_Simp_beqConfig____x40_Init_Meta___hyg_6706_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_Simp_instBEqConfig() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Lean_Meta_Simp_beqConfig____x40_Init_Meta___hyg_6706____boxed), 2, 0);
return x_1;
}
}
lean_object* l___private_Init_Meta_0__Lean_Meta_Simp_reprConfig____x40_Init_Meta___hyg_6907_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_3 = lean_mk_string("maxSteps");
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_mk_string(" := ");
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
lean_inc(x_8);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = l_Nat_repr(x_10);
x_12 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_mk_string(",");
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_14);
lean_inc(x_15);
x_16 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_box(1);
x_18 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_mk_string("maxDischargeDepth");
x_20 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
lean_inc(x_8);
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_8);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
x_24 = l_Nat_repr(x_23);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_26, 0, x_22);
lean_ctor_set(x_26, 1, x_25);
lean_inc(x_15);
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_15);
x_28 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_17);
x_29 = lean_mk_string("contextual");
x_30 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_30);
lean_inc(x_8);
x_32 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_8);
x_33 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_34 = lean_mk_string("memoize");
x_35 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
x_37 = lean_mk_string("singlePass");
x_38 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_38, 0, x_37);
x_39 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
x_40 = lean_mk_string("zeta");
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_40);
x_42 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
x_43 = lean_mk_string("beta");
x_44 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 4);
x_46 = lean_mk_string("eta");
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 5);
x_49 = lean_mk_string("iota");
x_50 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_51 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 6);
x_52 = lean_mk_string("proj");
x_53 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_53, 0, x_52);
x_54 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 7);
x_55 = lean_mk_string("ctorEq");
x_56 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_56, 0, x_55);
x_57 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 8);
x_58 = lean_mk_string("decide");
x_59 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_59, 0, x_58);
x_60 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 9);
lean_dec(x_1);
x_61 = lean_mk_string("{ ");
x_62 = lean_string_length(x_61);
x_63 = lean_nat_to_int(x_62);
x_64 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_64, 0, x_61);
x_65 = lean_mk_string(" }");
x_66 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_66, 0, x_65);
if (x_33 == 0)
{
lean_object* x_193; lean_object* x_194; 
x_193 = lean_mk_string("false");
x_194 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_194, 0, x_193);
x_67 = x_194;
goto block_192;
}
else
{
lean_object* x_195; lean_object* x_196; 
x_195 = lean_mk_string("true");
x_196 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_196, 0, x_195);
x_67 = x_196;
goto block_192;
}
block_192:
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_68 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_68, 0, x_32);
lean_ctor_set(x_68, 1, x_67);
lean_inc(x_15);
x_69 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_15);
x_70 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_17);
x_71 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_35);
lean_inc(x_8);
x_72 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_8);
if (x_36 == 0)
{
lean_object* x_188; lean_object* x_189; 
x_188 = lean_mk_string("false");
x_189 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_189, 0, x_188);
x_73 = x_189;
goto block_187;
}
else
{
lean_object* x_190; lean_object* x_191; 
x_190 = lean_mk_string("true");
x_191 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_191, 0, x_190);
x_73 = x_191;
goto block_187;
}
block_187:
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_74 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
lean_inc(x_15);
x_75 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_15);
x_76 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_17);
x_77 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_38);
lean_inc(x_8);
x_78 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_8);
if (x_39 == 0)
{
lean_object* x_183; lean_object* x_184; 
x_183 = lean_mk_string("false");
x_184 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_184, 0, x_183);
x_79 = x_184;
goto block_182;
}
else
{
lean_object* x_185; lean_object* x_186; 
x_185 = lean_mk_string("true");
x_186 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_186, 0, x_185);
x_79 = x_186;
goto block_182;
}
block_182:
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_80 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
lean_inc(x_15);
x_81 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_15);
x_82 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_17);
x_83 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_41);
lean_inc(x_8);
x_84 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_8);
if (x_42 == 0)
{
lean_object* x_178; lean_object* x_179; 
x_178 = lean_mk_string("false");
x_179 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_179, 0, x_178);
x_85 = x_179;
goto block_177;
}
else
{
lean_object* x_180; lean_object* x_181; 
x_180 = lean_mk_string("true");
x_181 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_181, 0, x_180);
x_85 = x_181;
goto block_177;
}
block_177:
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_86 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
lean_inc(x_15);
x_87 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_15);
x_88 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_17);
x_89 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_44);
lean_inc(x_8);
x_90 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_8);
if (x_45 == 0)
{
lean_object* x_173; lean_object* x_174; 
x_173 = lean_mk_string("false");
x_174 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_174, 0, x_173);
x_91 = x_174;
goto block_172;
}
else
{
lean_object* x_175; lean_object* x_176; 
x_175 = lean_mk_string("true");
x_176 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_176, 0, x_175);
x_91 = x_176;
goto block_172;
}
block_172:
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_92 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
lean_inc(x_15);
x_93 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_15);
x_94 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_17);
x_95 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_47);
lean_inc(x_8);
x_96 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_8);
if (x_48 == 0)
{
lean_object* x_168; lean_object* x_169; 
x_168 = lean_mk_string("false");
x_169 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_169, 0, x_168);
x_97 = x_169;
goto block_167;
}
else
{
lean_object* x_170; lean_object* x_171; 
x_170 = lean_mk_string("true");
x_171 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_171, 0, x_170);
x_97 = x_171;
goto block_167;
}
block_167:
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_98 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
lean_inc(x_15);
x_99 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_15);
x_100 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_17);
x_101 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_50);
lean_inc(x_8);
x_102 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_8);
if (x_51 == 0)
{
lean_object* x_163; lean_object* x_164; 
x_163 = lean_mk_string("false");
x_164 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_164, 0, x_163);
x_103 = x_164;
goto block_162;
}
else
{
lean_object* x_165; lean_object* x_166; 
x_165 = lean_mk_string("true");
x_166 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_166, 0, x_165);
x_103 = x_166;
goto block_162;
}
block_162:
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_104 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
lean_inc(x_15);
x_105 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_15);
x_106 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_17);
x_107 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_53);
lean_inc(x_8);
x_108 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_8);
if (x_54 == 0)
{
lean_object* x_158; lean_object* x_159; 
x_158 = lean_mk_string("false");
x_159 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_159, 0, x_158);
x_109 = x_159;
goto block_157;
}
else
{
lean_object* x_160; lean_object* x_161; 
x_160 = lean_mk_string("true");
x_161 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_161, 0, x_160);
x_109 = x_161;
goto block_157;
}
block_157:
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_110 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
lean_inc(x_15);
x_111 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_15);
x_112 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_17);
x_113 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_56);
lean_inc(x_8);
x_114 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_8);
if (x_57 == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_115 = lean_mk_string("false");
x_116 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_116, 0, x_115);
lean_inc(x_116);
x_117 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_117, 0, x_114);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_15);
x_119 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_17);
x_120 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_59);
x_121 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_8);
if (x_60 == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; uint8_t x_126; lean_object* x_127; 
x_122 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_116);
x_123 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_123, 0, x_64);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_66);
x_125 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_125, 0, x_63);
lean_ctor_set(x_125, 1, x_124);
x_126 = 0;
x_127 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set_uint8(x_127, sizeof(void*)*1, x_126);
return x_127;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; lean_object* x_135; 
lean_dec(x_116);
x_128 = lean_mk_string("true");
x_129 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_129, 0, x_128);
x_130 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_130, 0, x_121);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_131, 0, x_64);
lean_ctor_set(x_131, 1, x_130);
x_132 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_66);
x_133 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_133, 0, x_63);
lean_ctor_set(x_133, 1, x_132);
x_134 = 0;
x_135 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_135, 0, x_133);
lean_ctor_set_uint8(x_135, sizeof(void*)*1, x_134);
return x_135;
}
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_136 = lean_mk_string("true");
x_137 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_137, 0, x_136);
lean_inc(x_137);
x_138 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_138, 0, x_114);
lean_ctor_set(x_138, 1, x_137);
x_139 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_15);
x_140 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_17);
x_141 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_59);
x_142 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_8);
if (x_60 == 0)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; uint8_t x_149; lean_object* x_150; 
lean_dec(x_137);
x_143 = lean_mk_string("false");
x_144 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_144, 0, x_143);
x_145 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_145, 0, x_142);
lean_ctor_set(x_145, 1, x_144);
x_146 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_146, 0, x_64);
lean_ctor_set(x_146, 1, x_145);
x_147 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_147, 0, x_146);
lean_ctor_set(x_147, 1, x_66);
x_148 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_148, 0, x_63);
lean_ctor_set(x_148, 1, x_147);
x_149 = 0;
x_150 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set_uint8(x_150, sizeof(void*)*1, x_149);
return x_150;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_155; lean_object* x_156; 
x_151 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_151, 0, x_142);
lean_ctor_set(x_151, 1, x_137);
x_152 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_152, 0, x_64);
lean_ctor_set(x_152, 1, x_151);
x_153 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_66);
x_154 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_154, 0, x_63);
lean_ctor_set(x_154, 1, x_153);
x_155 = 0;
x_156 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set_uint8(x_156, sizeof(void*)*1, x_155);
return x_156;
}
}
}
}
}
}
}
}
}
}
}
}
lean_object* l___private_Init_Meta_0__Lean_Meta_Simp_reprConfig____x40_Init_Meta___hyg_6907____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_Meta_0__Lean_Meta_Simp_reprConfig____x40_Init_Meta___hyg_6907_(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_Simp_instReprConfig() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_Meta_0__Lean_Meta_Simp_reprConfig____x40_Init_Meta___hyg_6907____boxed), 2, 0);
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_Simp_ConfigCtx_contextual___default() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
lean_object* initialize_Init_Data_Array_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Meta(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_version_major = _init_l_Lean_version_major();
lean_mark_persistent(l_Lean_version_major);
l_Lean_version_minor = _init_l_Lean_version_minor();
lean_mark_persistent(l_Lean_version_minor);
l_Lean_version_patch = _init_l_Lean_version_patch();
lean_mark_persistent(l_Lean_version_patch);
l_Lean_version_isRelease = _init_l_Lean_version_isRelease();
l_Lean_version_specialDesc = _init_l_Lean_version_specialDesc();
lean_mark_persistent(l_Lean_version_specialDesc);
l_Lean_idBeginEscape = _init_l_Lean_idBeginEscape();
l_Lean_idEndEscape = _init_l_Lean_idEndEscape();
l_Lean_NameGenerator_namePrefix___default = _init_l_Lean_NameGenerator_namePrefix___default();
lean_mark_persistent(l_Lean_NameGenerator_namePrefix___default);
l_Lean_NameGenerator_idx___default = _init_l_Lean_NameGenerator_idx___default();
lean_mark_persistent(l_Lean_NameGenerator_idx___default);
l_Lean_instInhabitedNameGenerator = _init_l_Lean_instInhabitedNameGenerator();
lean_mark_persistent(l_Lean_instInhabitedNameGenerator);
l_Lean_Syntax_instBEqSyntax = _init_l_Lean_Syntax_instBEqSyntax();
lean_mark_persistent(l_Lean_Syntax_instBEqSyntax);
l_Lean_expandMacros___boxed__const__1 = _init_l_Lean_expandMacros___boxed__const__1();
lean_mark_persistent(l_Lean_expandMacros___boxed__const__1);
l_Lean_Syntax_decodeQuotedChar___boxed__const__1 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__1();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__1);
l_Lean_Syntax_decodeQuotedChar___boxed__const__2 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__2();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__2);
l_Lean_Syntax_decodeQuotedChar___boxed__const__3 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__3();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__3);
l_Lean_Syntax_decodeQuotedChar___boxed__const__4 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__4();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__4);
l_Lean_Syntax_decodeQuotedChar___boxed__const__5 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__5();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__5);
l_Lean_Syntax_decodeQuotedChar___boxed__const__6 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__6();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__6);
l_Lean_instQuoteSyntax = _init_l_Lean_instQuoteSyntax();
lean_mark_persistent(l_Lean_instQuoteSyntax);
l_Lean_termEval__prec__ = _init_l_Lean_termEval__prec__();
lean_mark_persistent(l_Lean_termEval__prec__);
l_Lean_termEval__prio__ = _init_l_Lean_termEval__prio__();
lean_mark_persistent(l_Lean_termEval__prio__);
l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1 = _init_l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1();
lean_mark_persistent(l___private_Init_Meta_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1);
l_Lean_Meta_Simp_defaultMaxSteps = _init_l_Lean_Meta_Simp_defaultMaxSteps();
lean_mark_persistent(l_Lean_Meta_Simp_defaultMaxSteps);
l_Lean_Meta_Simp_Config_maxSteps___default = _init_l_Lean_Meta_Simp_Config_maxSteps___default();
lean_mark_persistent(l_Lean_Meta_Simp_Config_maxSteps___default);
l_Lean_Meta_Simp_Config_maxDischargeDepth___default = _init_l_Lean_Meta_Simp_Config_maxDischargeDepth___default();
lean_mark_persistent(l_Lean_Meta_Simp_Config_maxDischargeDepth___default);
l_Lean_Meta_Simp_Config_contextual___default = _init_l_Lean_Meta_Simp_Config_contextual___default();
l_Lean_Meta_Simp_Config_memoize___default = _init_l_Lean_Meta_Simp_Config_memoize___default();
l_Lean_Meta_Simp_Config_singlePass___default = _init_l_Lean_Meta_Simp_Config_singlePass___default();
l_Lean_Meta_Simp_Config_zeta___default = _init_l_Lean_Meta_Simp_Config_zeta___default();
l_Lean_Meta_Simp_Config_beta___default = _init_l_Lean_Meta_Simp_Config_beta___default();
l_Lean_Meta_Simp_Config_eta___default = _init_l_Lean_Meta_Simp_Config_eta___default();
l_Lean_Meta_Simp_Config_iota___default = _init_l_Lean_Meta_Simp_Config_iota___default();
l_Lean_Meta_Simp_Config_proj___default = _init_l_Lean_Meta_Simp_Config_proj___default();
l_Lean_Meta_Simp_Config_ctorEq___default = _init_l_Lean_Meta_Simp_Config_ctorEq___default();
l_Lean_Meta_Simp_Config_decide___default = _init_l_Lean_Meta_Simp_Config_decide___default();
l_Lean_Meta_Simp_instInhabitedConfig = _init_l_Lean_Meta_Simp_instInhabitedConfig();
lean_mark_persistent(l_Lean_Meta_Simp_instInhabitedConfig);
l_Lean_Meta_Simp_instBEqConfig = _init_l_Lean_Meta_Simp_instBEqConfig();
lean_mark_persistent(l_Lean_Meta_Simp_instBEqConfig);
l_Lean_Meta_Simp_instReprConfig = _init_l_Lean_Meta_Simp_instReprConfig();
lean_mark_persistent(l_Lean_Meta_Simp_instReprConfig);
l_Lean_Meta_Simp_ConfigCtx_contextual___default = _init_l_Lean_Meta_Simp_ConfigCtx_contextual___default();
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
