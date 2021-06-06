// Lean compiler output
// Module: Lean.Elab.Tactic.Match
// Imports: Init Lean.Parser.Term Lean.Elab.Match Lean.Elab.Tactic.Basic Lean.Elab.Tactic.Induction
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
extern lean_object* l___regBuiltin_Lean_Elab_Tactic_evalDone___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalMatch(lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo_x3f(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l_Lean_Elab_Tactic_adaptExpander___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
extern lean_object* l___regBuiltinParser_Lean_Parser_Tactic_match___closed__1;
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalMatch___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*);
lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalMatch___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_adaptExpander___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_AuxMatchTermState_cases___default;
size_t l_USize_sub(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_match__1(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Tactic_evalIntro___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalMatch___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalMatch___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalEraseAuxDiscrs(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalMatch___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalEraseAuxDiscrs___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Term_isAuxDiscrName(lean_object*);
lean_object* l_Lean_Meta_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalMatch_match__1(lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalMatch___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__3;
lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setKind(lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__1;
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__4(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_shiftLeft(size_t, size_t);
lean_object* l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalEraseAuxDiscrs___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__1;
lean_object* l___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_sortFVarIds___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Tactic_eraseAuxDiscrs___closed__2;
size_t lean_usize_of_nat(lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Elab_Tactic_AuxMatchTermState_nextIdx___default;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalMatch_match__1___rarg(lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_Elab_Tactic_expandTacticMacroFns_loop___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_main_module(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_foldlM___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__6(lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___boxed__const__1;
lean_object* l_Lean_LocalContext_foldlM___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__3(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalEraseAuxDiscrs___boxed(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__5(lean_object*, size_t, size_t, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Tactic_focusAndDone___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__2;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_foldlM___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalEraseAuxDiscrs___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalMatch___spec__3___rarg(lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Std_PersistentArray_foldlM___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_instInhabitedPersistentArrayNode(lean_object*);
lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs(lean_object*);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__4___boxed(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__3;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__4(x_6, x_4);
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
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__6(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; size_t x_7; size_t x_8; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = 1;
x_8 = x_2 + x_7;
if (lean_obj_tag(x_6) == 0)
{
x_2 = x_8;
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = l_Lean_LocalDecl_userName(x_10);
x_12 = l_Lean_Elab_Term_isAuxDiscrName(x_11);
if (x_12 == 0)
{
lean_dec(x_10);
x_2 = x_8;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Lean_LocalDecl_fvarId(x_10);
lean_dec(x_10);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_4);
x_2 = x_8;
x_4 = x_15;
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
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
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
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__5(x_3, x_8, x_9, x_2);
return x_10;
}
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_array_get_size(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_lt(x_13, x_12);
if (x_14 == 0)
{
lean_dec(x_12);
return x_2;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_le(x_12, x_12);
if (x_15 == 0)
{
lean_dec(x_12);
return x_2;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_18 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__6(x_11, x_16, x_17, x_2);
return x_18;
}
}
}
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; size_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = x_2 >> x_3 % (sizeof(size_t) * 8);
x_7 = lean_usize_to_nat(x_6);
x_8 = l_Std_instInhabitedPersistentArrayNode(lean_box(0));
x_9 = lean_array_get(x_8, x_5, x_7);
x_10 = 1;
x_11 = x_10 << x_3 % (sizeof(size_t) * 8);
x_12 = x_11 - x_10;
x_13 = x_2 & x_12;
x_14 = 5;
x_15 = x_3 - x_14;
x_16 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__3(x_9, x_13, x_15, x_4);
lean_dec(x_9);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_7, x_17);
lean_dec(x_7);
x_19 = lean_array_get_size(x_5);
x_20 = lean_nat_dec_lt(x_18, x_19);
if (x_20 == 0)
{
lean_dec(x_19);
lean_dec(x_18);
return x_16;
}
else
{
uint8_t x_21; 
x_21 = lean_nat_dec_le(x_19, x_19);
if (x_21 == 0)
{
lean_dec(x_19);
lean_dec(x_18);
return x_16;
}
else
{
size_t x_22; size_t x_23; lean_object* x_24; 
x_22 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_23 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_24 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__5(x_5, x_22, x_23, x_16);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_1, 0);
x_26 = lean_usize_to_nat(x_2);
x_27 = lean_array_get_size(x_25);
x_28 = lean_nat_dec_lt(x_26, x_27);
if (x_28 == 0)
{
lean_dec(x_27);
lean_dec(x_26);
return x_4;
}
else
{
uint8_t x_29; 
x_29 = lean_nat_dec_le(x_27, x_27);
if (x_29 == 0)
{
lean_dec(x_27);
lean_dec(x_26);
return x_4;
}
else
{
size_t x_30; size_t x_31; lean_object* x_32; 
x_30 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_31 = lean_usize_of_nat(x_27);
lean_dec(x_27);
x_32 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__6(x_25, x_30, x_31, x_4);
return x_32;
}
}
}
}
}
lean_object* l_Std_PersistentArray_foldlM___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_1, 3);
x_7 = lean_nat_dec_le(x_6, x_3);
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_usize_of_nat(x_3);
x_10 = lean_ctor_get_usize(x_1, 4);
x_11 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__3(x_8, x_9, x_10, x_2);
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_array_get_size(x_12);
x_14 = lean_nat_dec_lt(x_4, x_13);
if (x_14 == 0)
{
lean_dec(x_13);
return x_11;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_le(x_13, x_13);
if (x_15 == 0)
{
lean_dec(x_13);
return x_11;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_18 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__6(x_12, x_16, x_17, x_11);
return x_18;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_1, 1);
x_20 = lean_nat_sub(x_3, x_6);
x_21 = lean_array_get_size(x_19);
x_22 = lean_nat_dec_lt(x_20, x_21);
if (x_22 == 0)
{
lean_dec(x_21);
lean_dec(x_20);
return x_2;
}
else
{
uint8_t x_23; 
x_23 = lean_nat_dec_le(x_21, x_21);
if (x_23 == 0)
{
lean_dec(x_21);
lean_dec(x_20);
return x_2;
}
else
{
size_t x_24; size_t x_25; lean_object* x_26; 
x_24 = lean_usize_of_nat(x_20);
lean_dec(x_20);
x_25 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_26 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__6(x_19, x_24, x_25, x_2);
return x_26;
}
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_ctor_get(x_1, 0);
x_28 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__4(x_27, x_2);
x_29 = lean_ctor_get(x_1, 1);
x_30 = lean_array_get_size(x_29);
x_31 = lean_nat_dec_lt(x_4, x_30);
if (x_31 == 0)
{
lean_dec(x_30);
return x_28;
}
else
{
uint8_t x_32; 
x_32 = lean_nat_dec_le(x_30, x_30);
if (x_32 == 0)
{
lean_dec(x_30);
return x_28;
}
else
{
size_t x_33; size_t x_34; lean_object* x_35; 
x_33 = 0;
x_34 = lean_usize_of_nat(x_30);
lean_dec(x_30);
x_35 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__6(x_29, x_33, x_34, x_28);
return x_35;
}
}
}
}
}
lean_object* l_Lean_LocalContext_foldlM___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_Std_PersistentArray_foldlM___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__2(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_12; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_dec(x_1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_15 = l_Lean_Meta_tryClear(x_2, x_13, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_1 = x_14;
x_2 = x_16;
x_11 = x_17;
goto _start;
}
else
{
uint8_t x_19; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
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
}
lean_object* l_Lean_Elab_Tactic_evalEraseAuxDiscrs___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_box(0);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_LocalContext_foldlM___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__1(x_1, x_11, x_12);
x_14 = l_Lean_Elab_Tactic_getMainGoal(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_17 = l_List_forIn_loop___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__7(x_13, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_11);
x_21 = l_Lean_Elab_Tactic_replaceMainGoal(x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
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
else
{
uint8_t x_26; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_26 = !lean_is_exclusive(x_14);
if (x_26 == 0)
{
return x_14;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_14, 0);
x_28 = lean_ctor_get(x_14, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_14);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_Lean_Elab_Tactic_evalEraseAuxDiscrs___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_sortFVarIds___lambda__1___boxed), 9, 0);
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalEraseAuxDiscrs___rarg___lambda__1___boxed), 10, 0);
x_12 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Tactic_focusAndDone___spec__1___rarg), 11, 2);
lean_closure_set(x_12, 0, x_10);
lean_closure_set(x_12, 1, x_11);
x_13 = l_Lean_Elab_Tactic_withMainContext___rarg(x_12, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
lean_object* l_Lean_Elab_Tactic_evalEraseAuxDiscrs(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalEraseAuxDiscrs___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__5(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__6(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__4(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__3(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Std_PersistentArray_foldlM___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentArray_foldlM___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_LocalContext_foldlM___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_LocalContext_foldlM___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_List_forIn_loop___at_Lean_Elab_Tactic_evalEraseAuxDiscrs___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_Lean_Elab_Tactic_evalEraseAuxDiscrs___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Tactic_evalEraseAuxDiscrs___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Elab_Tactic_evalEraseAuxDiscrs___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Tactic_evalEraseAuxDiscrs(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("evalEraseAuxDiscrs");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_evalDone___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalEraseAuxDiscrs___boxed), 1, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Tactic_tacticElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Tactic_eraseAuxDiscrs___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_AuxMatchTermState_nextIdx___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(1u);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_AuxMatchTermState_cases___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = x_4 < x_3;
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_1);
x_10 = x_5;
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_13 = lean_array_uget(x_5, x_4);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_array_uset(x_5, x_4, x_14);
x_26 = x_13;
x_27 = lean_box(0);
x_28 = lean_mk_string("Lean");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Parser");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("Term");
lean_inc(x_31);
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("matchAlt");
lean_inc(x_33);
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = l_Lean_Syntax_setKind(x_26, x_35);
x_37 = lean_unsigned_to_nat(3u);
x_38 = l_Lean_Syntax_getArg(x_36, x_37);
x_39 = lean_mk_string("syntheticHole");
lean_inc(x_33);
x_40 = lean_name_mk_string(x_33, x_39);
lean_inc(x_38);
x_41 = l_Lean_Syntax_isOfKind(x_38, x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_mk_string("hole");
x_43 = lean_name_mk_string(x_33, x_42);
lean_inc(x_38);
x_44 = l_Lean_Syntax_isOfKind(x_38, x_43);
lean_dec(x_43);
if (x_44 == 0)
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_8);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_46 = lean_ctor_get(x_8, 0);
x_47 = lean_unsigned_to_nat(1u);
x_48 = lean_nat_add(x_46, x_47);
lean_ctor_set(x_8, 0, x_48);
x_49 = lean_ctor_get(x_7, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_7, 1);
lean_inc(x_50);
x_51 = lean_ctor_get(x_7, 3);
lean_inc(x_51);
x_52 = lean_ctor_get(x_7, 4);
lean_inc(x_52);
x_53 = lean_ctor_get(x_7, 5);
lean_inc(x_53);
lean_inc(x_46);
lean_inc(x_50);
x_54 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_54, 0, x_49);
lean_ctor_set(x_54, 1, x_50);
lean_ctor_set(x_54, 2, x_46);
lean_ctor_set(x_54, 3, x_51);
lean_ctor_set(x_54, 4, x_52);
lean_ctor_set(x_54, 5, x_53);
x_55 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___spec__1(x_6, x_54, x_8);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_ctor_get(x_56, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
lean_dec(x_56);
x_60 = lean_mk_string("?");
lean_inc(x_58);
x_61 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_mk_string("rhs");
x_63 = lean_string_utf8_byte_size(x_62);
lean_inc(x_62);
x_64 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_14);
lean_ctor_set(x_64, 2, x_63);
x_65 = lean_name_mk_string(x_27, x_62);
x_66 = l_Lean_addMacroScope(x_50, x_65, x_46);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_68, 0, x_58);
lean_ctor_set(x_68, 1, x_64);
lean_ctor_set(x_68, 2, x_66);
lean_ctor_set(x_68, 3, x_67);
x_69 = lean_unsigned_to_nat(2u);
x_70 = lean_mk_empty_array_with_capacity(x_69);
lean_inc(x_70);
x_71 = lean_array_push(x_70, x_61);
x_72 = lean_array_push(x_71, x_68);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_40);
lean_ctor_set(x_73, 1, x_72);
x_74 = l_Lean_Syntax_getArg(x_73, x_47);
x_75 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___spec__1(x_59, x_54, x_57);
lean_dec(x_54);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = !lean_is_exclusive(x_76);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_79 = lean_ctor_get(x_76, 0);
x_80 = lean_ctor_get(x_76, 1);
x_81 = lean_mk_string("Tactic");
x_82 = lean_name_mk_string(x_31, x_81);
x_83 = lean_mk_string("case");
lean_inc(x_83);
lean_inc(x_82);
x_84 = lean_name_mk_string(x_82, x_83);
lean_inc(x_79);
x_85 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_85, 0, x_79);
lean_ctor_set(x_85, 1, x_83);
x_86 = lean_mk_string("null");
x_87 = lean_name_mk_string(x_27, x_86);
x_88 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_87);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
x_90 = l_Lean_Syntax_getArg(x_36, x_69);
x_91 = l_Lean_Syntax_getHeadInfo_x3f(x_90);
lean_dec(x_90);
x_92 = lean_mk_string("tacticSeq");
lean_inc(x_82);
x_93 = lean_name_mk_string(x_82, x_92);
x_94 = lean_mk_string("tacticSeq1Indented");
lean_inc(x_82);
x_95 = lean_name_mk_string(x_82, x_94);
x_96 = lean_mk_string("group");
x_97 = lean_name_mk_string(x_27, x_96);
x_98 = lean_mk_string("eraseAuxDiscrs");
lean_inc(x_82);
x_99 = lean_name_mk_string(x_82, x_98);
x_100 = lean_mk_string("eraseAuxDiscrs!");
lean_inc(x_79);
x_101 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_101, 0, x_79);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_mk_empty_array_with_capacity(x_47);
lean_inc(x_102);
x_103 = lean_array_push(x_102, x_101);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_99);
lean_ctor_set(x_104, 1, x_103);
x_105 = lean_mk_string(";");
lean_inc(x_79);
x_106 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_106, 0, x_79);
lean_ctor_set(x_106, 1, x_105);
lean_inc(x_102);
x_107 = lean_array_push(x_102, x_106);
lean_inc(x_87);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_87);
lean_ctor_set(x_108, 1, x_107);
lean_inc(x_70);
x_109 = lean_array_push(x_70, x_104);
x_110 = lean_array_push(x_109, x_108);
lean_inc(x_97);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_97);
lean_ctor_set(x_111, 1, x_110);
x_112 = lean_mk_string("paren");
x_113 = lean_name_mk_string(x_82, x_112);
x_114 = lean_mk_string("(");
lean_inc(x_79);
x_115 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_115, 0, x_79);
lean_ctor_set(x_115, 1, x_114);
x_116 = lean_mk_string(")");
lean_inc(x_79);
x_117 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_117, 0, x_79);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_mk_empty_array_with_capacity(x_37);
x_119 = lean_array_push(x_118, x_115);
x_120 = lean_array_push(x_119, x_38);
x_121 = lean_array_push(x_120, x_117);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_113);
lean_ctor_set(x_122, 1, x_121);
lean_inc(x_70);
x_123 = lean_array_push(x_70, x_122);
lean_inc(x_89);
x_124 = lean_array_push(x_123, x_89);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_97);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_array_push(x_70, x_111);
x_127 = lean_array_push(x_126, x_125);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_87);
lean_ctor_set(x_128, 1, x_127);
lean_inc(x_102);
x_129 = lean_array_push(x_102, x_128);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_95);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_array_push(x_102, x_130);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_93);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_unsigned_to_nat(5u);
x_134 = lean_mk_empty_array_with_capacity(x_133);
x_135 = lean_array_push(x_134, x_85);
x_136 = lean_array_push(x_135, x_74);
x_137 = lean_array_push(x_136, x_89);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; 
x_138 = lean_mk_string("=>");
x_139 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_139, 0, x_79);
lean_ctor_set(x_139, 1, x_138);
x_140 = lean_array_push(x_137, x_139);
x_141 = lean_array_push(x_140, x_132);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_84);
lean_ctor_set(x_142, 1, x_141);
x_143 = !lean_is_exclusive(x_80);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_80, 1);
x_145 = lean_array_push(x_144, x_142);
lean_ctor_set(x_80, 1, x_145);
x_146 = l_Lean_Syntax_setArg(x_36, x_37, x_73);
lean_ctor_set(x_76, 0, x_146);
x_16 = x_76;
x_17 = x_77;
goto block_25;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_147 = lean_ctor_get(x_80, 0);
x_148 = lean_ctor_get(x_80, 1);
lean_inc(x_148);
lean_inc(x_147);
lean_dec(x_80);
x_149 = lean_array_push(x_148, x_142);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_147);
lean_ctor_set(x_150, 1, x_149);
x_151 = l_Lean_Syntax_setArg(x_36, x_37, x_73);
lean_ctor_set(x_76, 1, x_150);
lean_ctor_set(x_76, 0, x_151);
x_16 = x_76;
x_17 = x_77;
goto block_25;
}
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; uint8_t x_158; 
lean_dec(x_79);
x_152 = lean_ctor_get(x_91, 0);
lean_inc(x_152);
lean_dec(x_91);
x_153 = lean_mk_string("=>");
x_154 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
x_155 = lean_array_push(x_137, x_154);
x_156 = lean_array_push(x_155, x_132);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_84);
lean_ctor_set(x_157, 1, x_156);
x_158 = !lean_is_exclusive(x_80);
if (x_158 == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_ctor_get(x_80, 1);
x_160 = lean_array_push(x_159, x_157);
lean_ctor_set(x_80, 1, x_160);
x_161 = l_Lean_Syntax_setArg(x_36, x_37, x_73);
lean_ctor_set(x_76, 0, x_161);
x_16 = x_76;
x_17 = x_77;
goto block_25;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_162 = lean_ctor_get(x_80, 0);
x_163 = lean_ctor_get(x_80, 1);
lean_inc(x_163);
lean_inc(x_162);
lean_dec(x_80);
x_164 = lean_array_push(x_163, x_157);
x_165 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_165, 0, x_162);
lean_ctor_set(x_165, 1, x_164);
x_166 = l_Lean_Syntax_setArg(x_36, x_37, x_73);
lean_ctor_set(x_76, 1, x_165);
lean_ctor_set(x_76, 0, x_166);
x_16 = x_76;
x_17 = x_77;
goto block_25;
}
}
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_167 = lean_ctor_get(x_76, 0);
x_168 = lean_ctor_get(x_76, 1);
lean_inc(x_168);
lean_inc(x_167);
lean_dec(x_76);
x_169 = lean_mk_string("Tactic");
x_170 = lean_name_mk_string(x_31, x_169);
x_171 = lean_mk_string("case");
lean_inc(x_171);
lean_inc(x_170);
x_172 = lean_name_mk_string(x_170, x_171);
lean_inc(x_167);
x_173 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_173, 0, x_167);
lean_ctor_set(x_173, 1, x_171);
x_174 = lean_mk_string("null");
x_175 = lean_name_mk_string(x_27, x_174);
x_176 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_175);
x_177 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_177, 0, x_175);
lean_ctor_set(x_177, 1, x_176);
x_178 = l_Lean_Syntax_getArg(x_36, x_69);
x_179 = l_Lean_Syntax_getHeadInfo_x3f(x_178);
lean_dec(x_178);
x_180 = lean_mk_string("tacticSeq");
lean_inc(x_170);
x_181 = lean_name_mk_string(x_170, x_180);
x_182 = lean_mk_string("tacticSeq1Indented");
lean_inc(x_170);
x_183 = lean_name_mk_string(x_170, x_182);
x_184 = lean_mk_string("group");
x_185 = lean_name_mk_string(x_27, x_184);
x_186 = lean_mk_string("eraseAuxDiscrs");
lean_inc(x_170);
x_187 = lean_name_mk_string(x_170, x_186);
x_188 = lean_mk_string("eraseAuxDiscrs!");
lean_inc(x_167);
x_189 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_189, 0, x_167);
lean_ctor_set(x_189, 1, x_188);
x_190 = lean_mk_empty_array_with_capacity(x_47);
lean_inc(x_190);
x_191 = lean_array_push(x_190, x_189);
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_187);
lean_ctor_set(x_192, 1, x_191);
x_193 = lean_mk_string(";");
lean_inc(x_167);
x_194 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_194, 0, x_167);
lean_ctor_set(x_194, 1, x_193);
lean_inc(x_190);
x_195 = lean_array_push(x_190, x_194);
lean_inc(x_175);
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_175);
lean_ctor_set(x_196, 1, x_195);
lean_inc(x_70);
x_197 = lean_array_push(x_70, x_192);
x_198 = lean_array_push(x_197, x_196);
lean_inc(x_185);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_185);
lean_ctor_set(x_199, 1, x_198);
x_200 = lean_mk_string("paren");
x_201 = lean_name_mk_string(x_170, x_200);
x_202 = lean_mk_string("(");
lean_inc(x_167);
x_203 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_203, 0, x_167);
lean_ctor_set(x_203, 1, x_202);
x_204 = lean_mk_string(")");
lean_inc(x_167);
x_205 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_205, 0, x_167);
lean_ctor_set(x_205, 1, x_204);
x_206 = lean_mk_empty_array_with_capacity(x_37);
x_207 = lean_array_push(x_206, x_203);
x_208 = lean_array_push(x_207, x_38);
x_209 = lean_array_push(x_208, x_205);
x_210 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_210, 0, x_201);
lean_ctor_set(x_210, 1, x_209);
lean_inc(x_70);
x_211 = lean_array_push(x_70, x_210);
lean_inc(x_177);
x_212 = lean_array_push(x_211, x_177);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_185);
lean_ctor_set(x_213, 1, x_212);
x_214 = lean_array_push(x_70, x_199);
x_215 = lean_array_push(x_214, x_213);
x_216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_216, 0, x_175);
lean_ctor_set(x_216, 1, x_215);
lean_inc(x_190);
x_217 = lean_array_push(x_190, x_216);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_183);
lean_ctor_set(x_218, 1, x_217);
x_219 = lean_array_push(x_190, x_218);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_181);
lean_ctor_set(x_220, 1, x_219);
x_221 = lean_unsigned_to_nat(5u);
x_222 = lean_mk_empty_array_with_capacity(x_221);
x_223 = lean_array_push(x_222, x_173);
x_224 = lean_array_push(x_223, x_74);
x_225 = lean_array_push(x_224, x_177);
if (lean_obj_tag(x_179) == 0)
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_226 = lean_mk_string("=>");
x_227 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_227, 0, x_167);
lean_ctor_set(x_227, 1, x_226);
x_228 = lean_array_push(x_225, x_227);
x_229 = lean_array_push(x_228, x_220);
x_230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_230, 0, x_172);
lean_ctor_set(x_230, 1, x_229);
x_231 = lean_ctor_get(x_168, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_168, 1);
lean_inc(x_232);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 x_233 = x_168;
} else {
 lean_dec_ref(x_168);
 x_233 = lean_box(0);
}
x_234 = lean_array_push(x_232, x_230);
if (lean_is_scalar(x_233)) {
 x_235 = lean_alloc_ctor(0, 2, 0);
} else {
 x_235 = x_233;
}
lean_ctor_set(x_235, 0, x_231);
lean_ctor_set(x_235, 1, x_234);
x_236 = l_Lean_Syntax_setArg(x_36, x_37, x_73);
x_237 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_237, 0, x_236);
lean_ctor_set(x_237, 1, x_235);
x_16 = x_237;
x_17 = x_77;
goto block_25;
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; 
lean_dec(x_167);
x_238 = lean_ctor_get(x_179, 0);
lean_inc(x_238);
lean_dec(x_179);
x_239 = lean_mk_string("=>");
x_240 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_240, 0, x_238);
lean_ctor_set(x_240, 1, x_239);
x_241 = lean_array_push(x_225, x_240);
x_242 = lean_array_push(x_241, x_220);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_172);
lean_ctor_set(x_243, 1, x_242);
x_244 = lean_ctor_get(x_168, 0);
lean_inc(x_244);
x_245 = lean_ctor_get(x_168, 1);
lean_inc(x_245);
if (lean_is_exclusive(x_168)) {
 lean_ctor_release(x_168, 0);
 lean_ctor_release(x_168, 1);
 x_246 = x_168;
} else {
 lean_dec_ref(x_168);
 x_246 = lean_box(0);
}
x_247 = lean_array_push(x_245, x_243);
if (lean_is_scalar(x_246)) {
 x_248 = lean_alloc_ctor(0, 2, 0);
} else {
 x_248 = x_246;
}
lean_ctor_set(x_248, 0, x_244);
lean_ctor_set(x_248, 1, x_247);
x_249 = l_Lean_Syntax_setArg(x_36, x_37, x_73);
x_250 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_250, 0, x_249);
lean_ctor_set(x_250, 1, x_248);
x_16 = x_250;
x_17 = x_77;
goto block_25;
}
}
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; 
x_251 = lean_ctor_get(x_8, 0);
x_252 = lean_ctor_get(x_8, 1);
lean_inc(x_252);
lean_inc(x_251);
lean_dec(x_8);
x_253 = lean_unsigned_to_nat(1u);
x_254 = lean_nat_add(x_251, x_253);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_252);
x_256 = lean_ctor_get(x_7, 0);
lean_inc(x_256);
x_257 = lean_ctor_get(x_7, 1);
lean_inc(x_257);
x_258 = lean_ctor_get(x_7, 3);
lean_inc(x_258);
x_259 = lean_ctor_get(x_7, 4);
lean_inc(x_259);
x_260 = lean_ctor_get(x_7, 5);
lean_inc(x_260);
lean_inc(x_251);
lean_inc(x_257);
x_261 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_261, 0, x_256);
lean_ctor_set(x_261, 1, x_257);
lean_ctor_set(x_261, 2, x_251);
lean_ctor_set(x_261, 3, x_258);
lean_ctor_set(x_261, 4, x_259);
lean_ctor_set(x_261, 5, x_260);
x_262 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___spec__1(x_6, x_261, x_255);
x_263 = lean_ctor_get(x_262, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_262, 1);
lean_inc(x_264);
lean_dec(x_262);
x_265 = lean_ctor_get(x_263, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_263, 1);
lean_inc(x_266);
lean_dec(x_263);
x_267 = lean_mk_string("?");
lean_inc(x_265);
x_268 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_268, 0, x_265);
lean_ctor_set(x_268, 1, x_267);
x_269 = lean_mk_string("rhs");
x_270 = lean_string_utf8_byte_size(x_269);
lean_inc(x_269);
x_271 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_271, 0, x_269);
lean_ctor_set(x_271, 1, x_14);
lean_ctor_set(x_271, 2, x_270);
x_272 = lean_name_mk_string(x_27, x_269);
x_273 = l_Lean_addMacroScope(x_257, x_272, x_251);
x_274 = lean_box(0);
x_275 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_275, 0, x_265);
lean_ctor_set(x_275, 1, x_271);
lean_ctor_set(x_275, 2, x_273);
lean_ctor_set(x_275, 3, x_274);
x_276 = lean_unsigned_to_nat(2u);
x_277 = lean_mk_empty_array_with_capacity(x_276);
lean_inc(x_277);
x_278 = lean_array_push(x_277, x_268);
x_279 = lean_array_push(x_278, x_275);
x_280 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_280, 0, x_40);
lean_ctor_set(x_280, 1, x_279);
x_281 = l_Lean_Syntax_getArg(x_280, x_253);
x_282 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___spec__1(x_266, x_261, x_264);
lean_dec(x_261);
x_283 = lean_ctor_get(x_282, 0);
lean_inc(x_283);
x_284 = lean_ctor_get(x_282, 1);
lean_inc(x_284);
lean_dec(x_282);
x_285 = lean_ctor_get(x_283, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_283, 1);
lean_inc(x_286);
if (lean_is_exclusive(x_283)) {
 lean_ctor_release(x_283, 0);
 lean_ctor_release(x_283, 1);
 x_287 = x_283;
} else {
 lean_dec_ref(x_283);
 x_287 = lean_box(0);
}
x_288 = lean_mk_string("Tactic");
x_289 = lean_name_mk_string(x_31, x_288);
x_290 = lean_mk_string("case");
lean_inc(x_290);
lean_inc(x_289);
x_291 = lean_name_mk_string(x_289, x_290);
lean_inc(x_285);
x_292 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_292, 0, x_285);
lean_ctor_set(x_292, 1, x_290);
x_293 = lean_mk_string("null");
x_294 = lean_name_mk_string(x_27, x_293);
x_295 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_294);
x_296 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_296, 0, x_294);
lean_ctor_set(x_296, 1, x_295);
x_297 = l_Lean_Syntax_getArg(x_36, x_276);
x_298 = l_Lean_Syntax_getHeadInfo_x3f(x_297);
lean_dec(x_297);
x_299 = lean_mk_string("tacticSeq");
lean_inc(x_289);
x_300 = lean_name_mk_string(x_289, x_299);
x_301 = lean_mk_string("tacticSeq1Indented");
lean_inc(x_289);
x_302 = lean_name_mk_string(x_289, x_301);
x_303 = lean_mk_string("group");
x_304 = lean_name_mk_string(x_27, x_303);
x_305 = lean_mk_string("eraseAuxDiscrs");
lean_inc(x_289);
x_306 = lean_name_mk_string(x_289, x_305);
x_307 = lean_mk_string("eraseAuxDiscrs!");
lean_inc(x_285);
x_308 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_308, 0, x_285);
lean_ctor_set(x_308, 1, x_307);
x_309 = lean_mk_empty_array_with_capacity(x_253);
lean_inc(x_309);
x_310 = lean_array_push(x_309, x_308);
x_311 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_311, 0, x_306);
lean_ctor_set(x_311, 1, x_310);
x_312 = lean_mk_string(";");
lean_inc(x_285);
x_313 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_313, 0, x_285);
lean_ctor_set(x_313, 1, x_312);
lean_inc(x_309);
x_314 = lean_array_push(x_309, x_313);
lean_inc(x_294);
x_315 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_315, 0, x_294);
lean_ctor_set(x_315, 1, x_314);
lean_inc(x_277);
x_316 = lean_array_push(x_277, x_311);
x_317 = lean_array_push(x_316, x_315);
lean_inc(x_304);
x_318 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_318, 0, x_304);
lean_ctor_set(x_318, 1, x_317);
x_319 = lean_mk_string("paren");
x_320 = lean_name_mk_string(x_289, x_319);
x_321 = lean_mk_string("(");
lean_inc(x_285);
x_322 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_322, 0, x_285);
lean_ctor_set(x_322, 1, x_321);
x_323 = lean_mk_string(")");
lean_inc(x_285);
x_324 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_324, 0, x_285);
lean_ctor_set(x_324, 1, x_323);
x_325 = lean_mk_empty_array_with_capacity(x_37);
x_326 = lean_array_push(x_325, x_322);
x_327 = lean_array_push(x_326, x_38);
x_328 = lean_array_push(x_327, x_324);
x_329 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_329, 0, x_320);
lean_ctor_set(x_329, 1, x_328);
lean_inc(x_277);
x_330 = lean_array_push(x_277, x_329);
lean_inc(x_296);
x_331 = lean_array_push(x_330, x_296);
x_332 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_332, 0, x_304);
lean_ctor_set(x_332, 1, x_331);
x_333 = lean_array_push(x_277, x_318);
x_334 = lean_array_push(x_333, x_332);
x_335 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_335, 0, x_294);
lean_ctor_set(x_335, 1, x_334);
lean_inc(x_309);
x_336 = lean_array_push(x_309, x_335);
x_337 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_337, 0, x_302);
lean_ctor_set(x_337, 1, x_336);
x_338 = lean_array_push(x_309, x_337);
x_339 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_339, 0, x_300);
lean_ctor_set(x_339, 1, x_338);
x_340 = lean_unsigned_to_nat(5u);
x_341 = lean_mk_empty_array_with_capacity(x_340);
x_342 = lean_array_push(x_341, x_292);
x_343 = lean_array_push(x_342, x_281);
x_344 = lean_array_push(x_343, x_296);
if (lean_obj_tag(x_298) == 0)
{
lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; 
x_345 = lean_mk_string("=>");
x_346 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_346, 0, x_285);
lean_ctor_set(x_346, 1, x_345);
x_347 = lean_array_push(x_344, x_346);
x_348 = lean_array_push(x_347, x_339);
x_349 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_349, 0, x_291);
lean_ctor_set(x_349, 1, x_348);
x_350 = lean_ctor_get(x_286, 0);
lean_inc(x_350);
x_351 = lean_ctor_get(x_286, 1);
lean_inc(x_351);
if (lean_is_exclusive(x_286)) {
 lean_ctor_release(x_286, 0);
 lean_ctor_release(x_286, 1);
 x_352 = x_286;
} else {
 lean_dec_ref(x_286);
 x_352 = lean_box(0);
}
x_353 = lean_array_push(x_351, x_349);
if (lean_is_scalar(x_352)) {
 x_354 = lean_alloc_ctor(0, 2, 0);
} else {
 x_354 = x_352;
}
lean_ctor_set(x_354, 0, x_350);
lean_ctor_set(x_354, 1, x_353);
x_355 = l_Lean_Syntax_setArg(x_36, x_37, x_280);
if (lean_is_scalar(x_287)) {
 x_356 = lean_alloc_ctor(0, 2, 0);
} else {
 x_356 = x_287;
}
lean_ctor_set(x_356, 0, x_355);
lean_ctor_set(x_356, 1, x_354);
x_16 = x_356;
x_17 = x_284;
goto block_25;
}
else
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; 
lean_dec(x_285);
x_357 = lean_ctor_get(x_298, 0);
lean_inc(x_357);
lean_dec(x_298);
x_358 = lean_mk_string("=>");
x_359 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_359, 0, x_357);
lean_ctor_set(x_359, 1, x_358);
x_360 = lean_array_push(x_344, x_359);
x_361 = lean_array_push(x_360, x_339);
x_362 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_362, 0, x_291);
lean_ctor_set(x_362, 1, x_361);
x_363 = lean_ctor_get(x_286, 0);
lean_inc(x_363);
x_364 = lean_ctor_get(x_286, 1);
lean_inc(x_364);
if (lean_is_exclusive(x_286)) {
 lean_ctor_release(x_286, 0);
 lean_ctor_release(x_286, 1);
 x_365 = x_286;
} else {
 lean_dec_ref(x_286);
 x_365 = lean_box(0);
}
x_366 = lean_array_push(x_364, x_362);
if (lean_is_scalar(x_365)) {
 x_367 = lean_alloc_ctor(0, 2, 0);
} else {
 x_367 = x_365;
}
lean_ctor_set(x_367, 0, x_363);
lean_ctor_set(x_367, 1, x_366);
x_368 = l_Lean_Syntax_setArg(x_36, x_37, x_280);
if (lean_is_scalar(x_287)) {
 x_369 = lean_alloc_ctor(0, 2, 0);
} else {
 x_369 = x_287;
}
lean_ctor_set(x_369, 0, x_368);
lean_ctor_set(x_369, 1, x_367);
x_16 = x_369;
x_17 = x_284;
goto block_25;
}
}
}
else
{
lean_object* x_370; lean_object* x_371; uint8_t x_372; lean_object* x_373; 
lean_dec(x_31);
x_370 = lean_array_get_size(x_2);
x_371 = lean_unsigned_to_nat(1u);
x_372 = lean_nat_dec_lt(x_371, x_370);
lean_dec(x_370);
lean_inc(x_6);
x_373 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___spec__1(x_6, x_7, x_8);
if (x_372 == 0)
{
lean_object* x_374; lean_object* x_375; lean_object* x_376; uint8_t x_377; 
lean_dec(x_6);
x_374 = lean_ctor_get(x_373, 0);
lean_inc(x_374);
x_375 = lean_ctor_get(x_373, 1);
lean_inc(x_375);
lean_dec(x_373);
lean_inc(x_1);
x_376 = l_Lean_mkIdentFrom(x_38, x_1);
lean_dec(x_38);
x_377 = !lean_is_exclusive(x_374);
if (x_377 == 0)
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; uint8_t x_387; 
x_378 = lean_ctor_get(x_374, 0);
x_379 = lean_ctor_get(x_374, 1);
x_380 = lean_mk_string("?");
x_381 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_381, 0, x_378);
lean_ctor_set(x_381, 1, x_380);
x_382 = lean_unsigned_to_nat(2u);
x_383 = lean_mk_empty_array_with_capacity(x_382);
x_384 = lean_array_push(x_383, x_381);
x_385 = lean_array_push(x_384, x_376);
x_386 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_386, 0, x_40);
lean_ctor_set(x_386, 1, x_385);
x_387 = !lean_is_exclusive(x_379);
if (x_387 == 0)
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; 
x_388 = lean_ctor_get(x_379, 0);
x_389 = lean_nat_add(x_388, x_371);
lean_dec(x_388);
lean_ctor_set(x_379, 0, x_389);
x_390 = l_Lean_Syntax_setArg(x_36, x_37, x_386);
lean_ctor_set(x_374, 0, x_390);
x_16 = x_374;
x_17 = x_375;
goto block_25;
}
else
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; 
x_391 = lean_ctor_get(x_379, 0);
x_392 = lean_ctor_get(x_379, 1);
lean_inc(x_392);
lean_inc(x_391);
lean_dec(x_379);
x_393 = lean_nat_add(x_391, x_371);
lean_dec(x_391);
x_394 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_394, 0, x_393);
lean_ctor_set(x_394, 1, x_392);
x_395 = l_Lean_Syntax_setArg(x_36, x_37, x_386);
lean_ctor_set(x_374, 1, x_394);
lean_ctor_set(x_374, 0, x_395);
x_16 = x_374;
x_17 = x_375;
goto block_25;
}
}
else
{
lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; 
x_396 = lean_ctor_get(x_374, 0);
x_397 = lean_ctor_get(x_374, 1);
lean_inc(x_397);
lean_inc(x_396);
lean_dec(x_374);
x_398 = lean_mk_string("?");
x_399 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_399, 0, x_396);
lean_ctor_set(x_399, 1, x_398);
x_400 = lean_unsigned_to_nat(2u);
x_401 = lean_mk_empty_array_with_capacity(x_400);
x_402 = lean_array_push(x_401, x_399);
x_403 = lean_array_push(x_402, x_376);
x_404 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_404, 0, x_40);
lean_ctor_set(x_404, 1, x_403);
x_405 = lean_ctor_get(x_397, 0);
lean_inc(x_405);
x_406 = lean_ctor_get(x_397, 1);
lean_inc(x_406);
if (lean_is_exclusive(x_397)) {
 lean_ctor_release(x_397, 0);
 lean_ctor_release(x_397, 1);
 x_407 = x_397;
} else {
 lean_dec_ref(x_397);
 x_407 = lean_box(0);
}
x_408 = lean_nat_add(x_405, x_371);
lean_dec(x_405);
if (lean_is_scalar(x_407)) {
 x_409 = lean_alloc_ctor(0, 2, 0);
} else {
 x_409 = x_407;
}
lean_ctor_set(x_409, 0, x_408);
lean_ctor_set(x_409, 1, x_406);
x_410 = l_Lean_Syntax_setArg(x_36, x_37, x_404);
x_411 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_411, 0, x_410);
lean_ctor_set(x_411, 1, x_409);
x_16 = x_411;
x_17 = x_375;
goto block_25;
}
}
else
{
lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; uint8_t x_420; 
x_412 = lean_ctor_get(x_373, 0);
lean_inc(x_412);
x_413 = lean_ctor_get(x_373, 1);
lean_inc(x_413);
lean_dec(x_373);
x_414 = lean_mk_string("match");
x_415 = lean_name_mk_string(x_27, x_414);
x_416 = lean_ctor_get(x_6, 0);
lean_inc(x_416);
lean_dec(x_6);
x_417 = lean_name_append_index_after(x_415, x_416);
x_418 = l_Lean_Name_append(x_1, x_417);
x_419 = l_Lean_mkIdentFrom(x_38, x_418);
lean_dec(x_38);
x_420 = !lean_is_exclusive(x_412);
if (x_420 == 0)
{
lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; uint8_t x_430; 
x_421 = lean_ctor_get(x_412, 0);
x_422 = lean_ctor_get(x_412, 1);
x_423 = lean_mk_string("?");
x_424 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_424, 0, x_421);
lean_ctor_set(x_424, 1, x_423);
x_425 = lean_unsigned_to_nat(2u);
x_426 = lean_mk_empty_array_with_capacity(x_425);
x_427 = lean_array_push(x_426, x_424);
x_428 = lean_array_push(x_427, x_419);
x_429 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_429, 0, x_40);
lean_ctor_set(x_429, 1, x_428);
x_430 = !lean_is_exclusive(x_422);
if (x_430 == 0)
{
lean_object* x_431; lean_object* x_432; lean_object* x_433; 
x_431 = lean_ctor_get(x_422, 0);
x_432 = lean_nat_add(x_431, x_371);
lean_dec(x_431);
lean_ctor_set(x_422, 0, x_432);
x_433 = l_Lean_Syntax_setArg(x_36, x_37, x_429);
lean_ctor_set(x_412, 0, x_433);
x_16 = x_412;
x_17 = x_413;
goto block_25;
}
else
{
lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; 
x_434 = lean_ctor_get(x_422, 0);
x_435 = lean_ctor_get(x_422, 1);
lean_inc(x_435);
lean_inc(x_434);
lean_dec(x_422);
x_436 = lean_nat_add(x_434, x_371);
lean_dec(x_434);
x_437 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_437, 0, x_436);
lean_ctor_set(x_437, 1, x_435);
x_438 = l_Lean_Syntax_setArg(x_36, x_37, x_429);
lean_ctor_set(x_412, 1, x_437);
lean_ctor_set(x_412, 0, x_438);
x_16 = x_412;
x_17 = x_413;
goto block_25;
}
}
else
{
lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; 
x_439 = lean_ctor_get(x_412, 0);
x_440 = lean_ctor_get(x_412, 1);
lean_inc(x_440);
lean_inc(x_439);
lean_dec(x_412);
x_441 = lean_mk_string("?");
x_442 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_442, 0, x_439);
lean_ctor_set(x_442, 1, x_441);
x_443 = lean_unsigned_to_nat(2u);
x_444 = lean_mk_empty_array_with_capacity(x_443);
x_445 = lean_array_push(x_444, x_442);
x_446 = lean_array_push(x_445, x_419);
x_447 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_447, 0, x_40);
lean_ctor_set(x_447, 1, x_446);
x_448 = lean_ctor_get(x_440, 0);
lean_inc(x_448);
x_449 = lean_ctor_get(x_440, 1);
lean_inc(x_449);
if (lean_is_exclusive(x_440)) {
 lean_ctor_release(x_440, 0);
 lean_ctor_release(x_440, 1);
 x_450 = x_440;
} else {
 lean_dec_ref(x_440);
 x_450 = lean_box(0);
}
x_451 = lean_nat_add(x_448, x_371);
lean_dec(x_448);
if (lean_is_scalar(x_450)) {
 x_452 = lean_alloc_ctor(0, 2, 0);
} else {
 x_452 = x_450;
}
lean_ctor_set(x_452, 0, x_451);
lean_ctor_set(x_452, 1, x_449);
x_453 = l_Lean_Syntax_setArg(x_36, x_37, x_447);
x_454 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_454, 0, x_453);
lean_ctor_set(x_454, 1, x_452);
x_16 = x_454;
x_17 = x_413;
goto block_25;
}
}
}
}
else
{
lean_object* x_455; 
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_33);
lean_dec(x_31);
x_455 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_455, 0, x_36);
lean_ctor_set(x_455, 1, x_6);
x_16 = x_455;
x_17 = x_8;
goto block_25;
}
block_25:
{
lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = 1;
x_21 = x_4 + x_20;
x_22 = x_18;
x_23 = lean_array_uset(x_15, x_4, x_22);
x_4 = x_21;
x_5 = x_23;
x_6 = x_19;
x_8 = x_17;
goto _start;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_6 = lean_unsigned_to_nat(5u);
x_7 = l_Lean_Syntax_getArg(x_2, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_getArgs(x_9);
lean_dec(x_9);
x_11 = lean_array_get_size(x_10);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
lean_inc(x_10);
x_13 = x_10;
x_14 = lean_box_usize(x_12);
x_15 = l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___boxed__const__1;
x_16 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___spec__2___boxed), 8, 5);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_10);
lean_closure_set(x_16, 2, x_14);
lean_closure_set(x_16, 3, x_15);
lean_closure_set(x_16, 4, x_13);
x_17 = x_16;
x_18 = lean_apply_3(x_17, x_3, x_4, x_5);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_box(0);
x_24 = lean_mk_string("Lean");
x_25 = lean_name_mk_string(x_23, x_24);
x_26 = lean_mk_string("Parser");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("Term");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("match");
lean_inc(x_29);
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = l_Lean_Syntax_setKind(x_2, x_31);
x_33 = lean_mk_string("matchAlts");
x_34 = lean_name_mk_string(x_29, x_33);
x_35 = l_Lean_nullKind;
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_22);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_mk_empty_array_with_capacity(x_37);
x_39 = lean_array_push(x_38, x_36);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_34);
lean_ctor_set(x_40, 1, x_39);
x_41 = l_Lean_Syntax_setArg(x_32, x_6, x_40);
lean_ctor_set(x_20, 0, x_41);
return x_18;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_42 = lean_ctor_get(x_20, 0);
x_43 = lean_ctor_get(x_20, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_20);
x_44 = lean_box(0);
x_45 = lean_mk_string("Lean");
x_46 = lean_name_mk_string(x_44, x_45);
x_47 = lean_mk_string("Parser");
x_48 = lean_name_mk_string(x_46, x_47);
x_49 = lean_mk_string("Term");
x_50 = lean_name_mk_string(x_48, x_49);
x_51 = lean_mk_string("match");
lean_inc(x_50);
x_52 = lean_name_mk_string(x_50, x_51);
x_53 = l_Lean_Syntax_setKind(x_2, x_52);
x_54 = lean_mk_string("matchAlts");
x_55 = lean_name_mk_string(x_50, x_54);
x_56 = l_Lean_nullKind;
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_42);
x_58 = lean_unsigned_to_nat(1u);
x_59 = lean_mk_empty_array_with_capacity(x_58);
x_60 = lean_array_push(x_59, x_57);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_55);
lean_ctor_set(x_61, 1, x_60);
x_62 = l_Lean_Syntax_setArg(x_53, x_6, x_61);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_43);
lean_ctor_set(x_18, 0, x_63);
return x_18;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_64 = lean_ctor_get(x_18, 0);
x_65 = lean_ctor_get(x_18, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_18);
x_66 = lean_ctor_get(x_64, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_64, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_68 = x_64;
} else {
 lean_dec_ref(x_64);
 x_68 = lean_box(0);
}
x_69 = lean_box(0);
x_70 = lean_mk_string("Lean");
x_71 = lean_name_mk_string(x_69, x_70);
x_72 = lean_mk_string("Parser");
x_73 = lean_name_mk_string(x_71, x_72);
x_74 = lean_mk_string("Term");
x_75 = lean_name_mk_string(x_73, x_74);
x_76 = lean_mk_string("match");
lean_inc(x_75);
x_77 = lean_name_mk_string(x_75, x_76);
x_78 = l_Lean_Syntax_setKind(x_2, x_77);
x_79 = lean_mk_string("matchAlts");
x_80 = lean_name_mk_string(x_75, x_79);
x_81 = l_Lean_nullKind;
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_66);
x_83 = lean_unsigned_to_nat(1u);
x_84 = lean_mk_empty_array_with_capacity(x_83);
x_85 = lean_array_push(x_84, x_82);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_80);
lean_ctor_set(x_86, 1, x_85);
x_87 = l_Lean_Syntax_setArg(x_78, x_6, x_86);
if (lean_is_scalar(x_68)) {
 x_88 = lean_alloc_ctor(0, 2, 0);
} else {
 x_88 = x_68;
}
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_67);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_65);
return x_89;
}
}
else
{
uint8_t x_90; 
lean_dec(x_2);
x_90 = !lean_is_exclusive(x_18);
if (x_90 == 0)
{
return x_18;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_18, 0);
x_92 = lean_ctor_get(x_18, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_18);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
}
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___spec__2(x_1, x_2, x_9, x_10, x_5, x_6, x_7, x_8);
lean_dec(x_2);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_mk_empty_array_with_capacity(x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
x_9 = l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux(x_1, x_2, x_8, x_3, x_4);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_9, 0);
lean_dec(x_13);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_10, 1);
lean_dec(x_15);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_dec(x_11);
lean_ctor_set(x_10, 1, x_16);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_10, 0);
lean_inc(x_17);
lean_dec(x_10);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_dec(x_11);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_9, 0, x_19);
return x_9;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
lean_dec(x_9);
x_21 = lean_ctor_get(x_10, 0);
lean_inc(x_21);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_22 = x_10;
} else {
 lean_dec_ref(x_10);
 x_22 = lean_box(0);
}
x_23 = lean_ctor_get(x_11, 1);
lean_inc(x_23);
lean_dec(x_11);
if (lean_is_scalar(x_22)) {
 x_24 = lean_alloc_ctor(0, 2, 0);
} else {
 x_24 = x_22;
}
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_20);
return x_25;
}
}
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_9);
if (x_26 == 0)
{
return x_9;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_9, 0);
x_28 = lean_ctor_get(x_9, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_9);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_Lean_Elab_Tactic_evalMatch_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Tactic_evalMatch_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalMatch_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalMatch___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
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
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalMatch___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
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
x_15 = l_Lean_throwError___at_Lean_Elab_Tactic_evalMatch___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
x_26 = l_Lean_throwError___at_Lean_Elab_Tactic_evalMatch___spec__2(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_25, x_10, x_11);
lean_dec(x_25);
return x_26;
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalMatch___spec__3___rarg(lean_object* x_1) {
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
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalMatch___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalMatch___spec__3___rarg), 1, 0);
return x_9;
}
}
lean_object* l_Lean_Elab_Tactic_evalMatch(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Tactic_getMainTag(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_49 = lean_st_ref_get(x_9, x_13);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_ctor_get(x_50, 0);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_ctor_get(x_8, 4);
lean_inc(x_53);
x_54 = lean_ctor_get(x_8, 5);
lean_inc(x_54);
lean_inc(x_52);
x_55 = lean_alloc_closure((void*)(l___private_Lean_Elab_Util_0__Lean_Elab_expandMacro_x3f___boxed), 4, 1);
lean_closure_set(x_55, 0, x_52);
lean_inc(x_53);
x_56 = lean_alloc_closure((void*)(l_ReaderT_pure___at_Lean_Elab_liftMacroM___spec__1___rarg___boxed), 3, 1);
lean_closure_set(x_56, 0, x_53);
lean_inc(x_52);
x_57 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_57, 0, x_52);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
x_58 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__2___boxed), 6, 3);
lean_closure_set(x_58, 0, x_52);
lean_closure_set(x_58, 1, x_53);
lean_closure_set(x_58, 2, x_54);
lean_inc(x_52);
x_59 = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___rarg___lambda__3___boxed), 6, 3);
lean_closure_set(x_59, 0, x_52);
lean_closure_set(x_59, 1, x_53);
lean_closure_set(x_59, 2, x_54);
x_60 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_60, 0, x_55);
lean_ctor_set(x_60, 1, x_56);
lean_ctor_set(x_60, 2, x_57);
lean_ctor_set(x_60, 3, x_58);
lean_ctor_set(x_60, 4, x_59);
x_61 = x_60;
x_62 = lean_ctor_get(x_8, 3);
lean_inc(x_62);
x_63 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5, x_6, x_7, x_8, x_9, x_51);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_ctor_get(x_8, 1);
lean_inc(x_66);
x_67 = lean_ctor_get(x_8, 2);
lean_inc(x_67);
x_68 = lean_st_ref_get(x_9, x_65);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_environment_main_module(x_52);
x_73 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_73, 0, x_61);
lean_ctor_set(x_73, 1, x_72);
lean_ctor_set(x_73, 2, x_64);
lean_ctor_set(x_73, 3, x_66);
lean_ctor_set(x_73, 4, x_67);
lean_ctor_set(x_73, 5, x_62);
x_74 = lean_box(0);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_71);
lean_ctor_set(x_75, 1, x_74);
lean_inc(x_1);
x_76 = l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTerm(x_12, x_1, x_73, x_75);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_st_ref_take(x_9, x_70);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = !lean_is_exclusive(x_81);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_84 = lean_ctor_get(x_81, 1);
lean_dec(x_84);
lean_ctor_set(x_81, 1, x_79);
x_85 = lean_st_ref_set(x_9, x_81, x_82);
x_86 = lean_ctor_get(x_85, 1);
lean_inc(x_86);
lean_dec(x_85);
x_87 = lean_ctor_get(x_78, 1);
lean_inc(x_87);
lean_dec(x_78);
x_88 = l_List_reverse___rarg(x_87);
x_89 = l_List_forM___at_Lean_Elab_Tactic_expandTacticMacroFns_loop___spec__3(x_88, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_86);
x_90 = lean_ctor_get(x_89, 1);
lean_inc(x_90);
lean_dec(x_89);
x_14 = x_77;
x_15 = x_90;
goto block_48;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_91 = lean_ctor_get(x_81, 0);
x_92 = lean_ctor_get(x_81, 2);
x_93 = lean_ctor_get(x_81, 3);
lean_inc(x_93);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_81);
x_94 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_79);
lean_ctor_set(x_94, 2, x_92);
lean_ctor_set(x_94, 3, x_93);
x_95 = lean_st_ref_set(x_9, x_94, x_82);
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
lean_dec(x_95);
x_97 = lean_ctor_get(x_78, 1);
lean_inc(x_97);
lean_dec(x_78);
x_98 = l_List_reverse___rarg(x_97);
x_99 = l_List_forM___at_Lean_Elab_Tactic_expandTacticMacroFns_loop___spec__3(x_98, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_96);
x_100 = lean_ctor_get(x_99, 1);
lean_inc(x_100);
lean_dec(x_99);
x_14 = x_77;
x_15 = x_100;
goto block_48;
}
}
else
{
lean_object* x_101; 
lean_dec(x_1);
x_101 = lean_ctor_get(x_76, 0);
lean_inc(x_101);
lean_dec(x_76);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_104 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_104, 0, x_103);
x_105 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_105, 0, x_104);
x_106 = l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalMatch___spec__1(x_102, x_105, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_70);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_102);
x_107 = !lean_is_exclusive(x_106);
if (x_107 == 0)
{
return x_106;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_106, 0);
x_109 = lean_ctor_get(x_106, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_106);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
else
{
lean_object* x_111; uint8_t x_112; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_111 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalMatch___spec__3___rarg(x_70);
x_112 = !lean_is_exclusive(x_111);
if (x_112 == 0)
{
return x_111;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_111, 0);
x_114 = lean_ctor_get(x_111, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_111);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
}
block_48:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Tactic_evalIntro___spec__1___rarg(x_8, x_9, x_15);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5, x_6, x_7, x_8, x_9, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_Elab_Term_getMainModule___rarg(x_9, x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_box(0);
x_26 = lean_mk_string("Lean");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("Parser");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Tactic");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("refine");
lean_inc(x_32);
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_19);
lean_ctor_set(x_34, 1, x_32);
x_35 = lean_unsigned_to_nat(2u);
x_36 = lean_mk_empty_array_with_capacity(x_35);
x_37 = lean_array_push(x_36, x_34);
x_38 = lean_array_push(x_37, x_16);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_33);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_mk_empty_array_with_capacity(x_40);
x_42 = lean_array_push(x_41, x_39);
x_43 = l_Array_append___rarg(x_42, x_17);
lean_dec(x_17);
x_44 = l_Lean_nullKind;
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
lean_inc(x_45);
lean_inc(x_1);
x_46 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_adaptExpander___lambda__1), 11, 2);
lean_closure_set(x_46, 0, x_1);
lean_closure_set(x_46, 1, x_45);
x_47 = l_Lean_Elab_withMacroExpansionInfo___at_Lean_Elab_Tactic_adaptExpander___spec__1(x_1, x_45, x_46, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_24);
return x_47;
}
}
else
{
uint8_t x_116; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_116 = !lean_is_exclusive(x_11);
if (x_116 == 0)
{
return x_11;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_11, 0);
x_118 = lean_ctor_get(x_11, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_11);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
return x_119;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalMatch___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_Lean_Elab_Tactic_evalMatch___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
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
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalMatch___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_throwErrorAt___at_Lean_Elab_Tactic_evalMatch___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalMatch___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalMatch___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
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
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("evalMatch");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_evalDone___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalMatch), 10, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalMatch(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Tactic_tacticElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Tactic_match___closed__1;
x_4 = l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Parser_Term(lean_object*);
lean_object* initialize_Lean_Elab_Match(lean_object*);
lean_object* initialize_Lean_Elab_Tactic_Basic(lean_object*);
lean_object* initialize_Lean_Elab_Tactic_Induction(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Tactic_Match(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Term(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Match(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Induction(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__1 = _init_l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__1);
l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__2 = _init_l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__2);
l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__3 = _init_l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs___closed__3);
res = l___regBuiltin_Lean_Elab_Tactic_evalEraseAuxDiscrs(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_AuxMatchTermState_nextIdx___default = _init_l_Lean_Elab_Tactic_AuxMatchTermState_nextIdx___default();
lean_mark_persistent(l_Lean_Elab_Tactic_AuxMatchTermState_nextIdx___default);
l_Lean_Elab_Tactic_AuxMatchTermState_cases___default = _init_l_Lean_Elab_Tactic_AuxMatchTermState_cases___default();
lean_mark_persistent(l_Lean_Elab_Tactic_AuxMatchTermState_cases___default);
l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___boxed__const__1 = _init_l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Tactic_Match_0__Lean_Elab_Tactic_mkAuxiliaryMatchTermAux___boxed__const__1);
l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__1 = _init_l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__1);
l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__2 = _init_l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__2);
l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__3 = _init_l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalMatch___closed__3);
res = l___regBuiltin_Lean_Elab_Tactic_evalMatch(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
