// Lean compiler output
// Module: Lean.Elab.DeclModifiers
// Imports: Init Lean.Modifiers Lean.DocString Lean.Elab.Attributes Lean.Elab.Exception Lean.Elab.DeclUtil
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
lean_object* l_Lean_Elab_instToFormatModifiers_match__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_expandDeclId___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_expandOptDocComment_x3f(lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l_Lean_addDocString_x27___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___rarg(lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_Elab_Modifiers_isProtected(lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Lean_Elab_mkDeclName(lean_object*);
lean_object* l_Lean_withRef___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_instInhabitedModifiers;
lean_object* l_List_append___rarg(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_private_to_user_name(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared_match__1(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Elab_instToFormatModifiers___spec__1(lean_object*);
lean_object* l_Lean_Elab_applyVisibility___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_joinSep___at_instReprProd___spec__1(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Elab_Modifiers_docString_x3f___default;
lean_object* l_Lean_Elab_instToStringVisibility(uint8_t);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility_match__1(lean_object*);
uint8_t l_Lean_Elab_Modifiers_isNoncomputable___default;
lean_object* l_Lean_Elab_expandDeclId___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclId_match__1(lean_object*);
lean_object* l_Lean_Elab_expandDeclId_match__2(lean_object*);
lean_object* l_Lean_Elab_expandOptDocComment_x3f_match__2(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_expandDeclId___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_instToStringVisibility_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_instToStringVisibility_match__1(lean_object*);
lean_object* l_Lean_Elab_Modifiers_isProtected_match__1(lean_object*);
lean_object* l_Lean_Elab_expandOptDocComment_x3f___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_format_pretty(lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_isPartial___default;
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
lean_object* l_Lean_Elab_instToStringModifiers___lambda__1(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*);
extern lean_object* l_Lean_protectedExt;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_expandDeclId___spec__1(lean_object*);
lean_object* l_Lean_Elab_mkDeclName_match__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_instToFormatModifiers_match__2___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_attrs___default;
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_expandDeclId___spec__1___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
lean_object* l_Lean_throwErrorAt___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkDeclName_match__2___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Elab_expandDeclIdCore(lean_object*);
lean_object* l_Lean_Elab_expandDeclId_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_expandDeclId___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabDeclAttrs___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_instToStringModifiers;
lean_object* l_Lean_Elab_expandOptDocComment_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers(lean_object*);
lean_object* l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(lean_object*);
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___at_Lean_NameHashSet_insert___spec__2(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadReaderT___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_isProtected_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Modifiers_isProtected___boxed(lean_object*);
lean_object* l_Lean_Elab_expandDeclId_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclIdCore___boxed(lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_instToStringSyntax___lambda__1(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Elab_instToFormatModifiers_match__1(lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Elab_expandOptDocComment_x3f_match__1(lean_object*);
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_instInhabitedVisibility;
lean_object* l_Lean_Elab_Modifiers_isPrivate___boxed(lean_object*);
lean_object* l_Lean_Elab_applyVisibility___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_visibility___default;
lean_object* l_Lean_Elab_mkDeclName_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility(lean_object*);
lean_object* l_Lean_Elab_Modifiers_isPrivate_match__1(lean_object*);
lean_object* l_List_map___at_Lean_Elab_instToFormatModifiers___spec__2(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Elab_instToFormatModifiers(lean_object*);
lean_object* l_Lean_Elab_Modifiers_addAttribute(lean_object*, lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Elab_expandOptDocComment_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkDeclName_match__1(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_instToFormatModifiers_match__2(lean_object*);
lean_object* l_Lean_Elab_applyVisibility___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_instToStringVisibility_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_isUnsafe___default;
uint8_t l_Lean_Elab_Modifiers_isPrivate(lean_object*);
lean_object* l_Lean_Elab_Modifiers_isPrivate_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandOptDocComment_x3f___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared(lean_object*);
lean_object* l_Lean_Elab_instToFormatModifiers_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclId(lean_object*);
uint8_t l_Lean_Elab_isFreshInstanceName(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStxAux(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_applyVisibility___rarg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkDeclName_match__2(lean_object*);
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_instToStringVisibility___boxed(lean_object*);
lean_object* l_Lean_Elab_mkDeclName___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_checkNotAlreadyDeclared_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_private_to_user_name(x_1);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_box(0);
x_10 = lean_apply_2(x_8, lean_box(0), x_9);
return x_10;
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = l_Lean_Environment_contains(x_3, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_4);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_box(0);
x_16 = lean_apply_2(x_14, lean_box(0), x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_17 = lean_mk_string("a non-private declaration '");
x_18 = l_Lean_stringToMessageData(x_17);
lean_dec(x_17);
x_19 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_19, 0, x_11);
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_mk_string("' has already been declared");
x_22 = l_Lean_stringToMessageData(x_21);
lean_dec(x_21);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Lean_throwError___rarg(x_2, x_4, x_23);
return x_24;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_2);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
lean_inc(x_1);
lean_inc(x_3);
x_8 = l_Lean_mkPrivateName(x_3, x_1);
x_9 = l_Lean_Environment_contains(x_3, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_box(0);
x_13 = lean_apply_2(x_11, lean_box(0), x_12);
x_14 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_13, x_7);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_mk_string("a private declaration '");
x_16 = l_Lean_stringToMessageData(x_15);
lean_dec(x_15);
x_17 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_17, 0, x_1);
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_mk_string("' has already been declared");
x_20 = l_Lean_stringToMessageData(x_19);
lean_dec(x_19);
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_throwError___rarg(x_2, x_4, x_21);
x_23 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_22, x_7);
return x_23;
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2___boxed), 6, 5);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_5);
lean_closure_set(x_6, 3, x_3);
lean_closure_set(x_6, 4, x_4);
x_7 = l_Lean_Environment_contains(x_5, x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
x_12 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_11, x_6);
return x_12;
}
else
{
lean_object* x_13; 
lean_inc(x_1);
x_13 = lean_private_to_user_name(x_1);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_mk_string("'");
x_15 = l_Lean_stringToMessageData(x_14);
lean_dec(x_14);
x_16 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_16, 0, x_1);
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_mk_string("' has already been declared");
x_19 = l_Lean_stringToMessageData(x_18);
lean_dec(x_18);
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_throwError___rarg(x_2, x_3, x_20);
x_22 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_21, x_6);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_1);
x_23 = lean_ctor_get(x_13, 0);
lean_inc(x_23);
lean_dec(x_13);
x_24 = lean_mk_string("private declaration '");
x_25 = l_Lean_stringToMessageData(x_24);
lean_dec(x_24);
x_26 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_26, 0, x_23);
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_mk_string("' has already been declared");
x_29 = l_Lean_stringToMessageData(x_28);
lean_dec(x_28);
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_throwError___rarg(x_2, x_3, x_30);
x_32 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_31, x_6);
return x_32;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_5);
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3), 5, 4);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_1);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_5);
x_8 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
return x_7;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedVisibility() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
lean_object* l_Lean_Elab_instToStringVisibility_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (x_1) {
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
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(0);
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
lean_object* l_Lean_Elab_instToStringVisibility_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_instToStringVisibility_match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_instToStringVisibility_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Elab_instToStringVisibility_match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_Elab_instToStringVisibility(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; 
x_2 = lean_mk_string("regular");
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = lean_mk_string("protected");
return x_3;
}
default: 
{
lean_object* x_4; 
x_4 = lean_mk_string("private");
return x_4;
}
}
}
}
lean_object* l_Lean_Elab_instToStringVisibility___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lean_Elab_instToStringVisibility(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_docString_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static uint8_t _init_l_Lean_Elab_Modifiers_visibility___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Elab_Modifiers_isNoncomputable___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Elab_Modifiers_isPartial___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_Lean_Elab_Modifiers_isUnsafe___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Modifiers_attrs___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedModifiers() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_mk_empty_array_with_capacity(x_2);
x_4 = 0;
x_5 = 0;
x_6 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set_uint8(x_6, sizeof(void*)*2, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 1, x_5);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 2, x_5);
lean_ctor_set_uint8(x_6, sizeof(void*)*2 + 3, x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_Modifiers_isPrivate_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_5 = lean_box(x_4);
if (lean_obj_tag(x_5) == 2)
{
lean_object* x_6; uint8_t x_7; uint8_t x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
x_9 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_box(x_7);
x_12 = lean_box(x_8);
x_13 = lean_box(x_9);
x_14 = lean_apply_5(x_2, x_6, x_11, x_12, x_13, x_10);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_2);
x_15 = lean_apply_1(x_3, x_1);
return x_15;
}
}
}
lean_object* l_Lean_Elab_Modifiers_isPrivate_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Modifiers_isPrivate_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_Elab_Modifiers_isPrivate(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_3 = lean_box(x_2);
if (lean_obj_tag(x_3) == 2)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
}
}
lean_object* l_Lean_Elab_Modifiers_isPrivate___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Modifiers_isPrivate(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Modifiers_isProtected_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_5 = lean_box(x_4);
if (lean_obj_tag(x_5) == 1)
{
lean_object* x_6; uint8_t x_7; uint8_t x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
x_9 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_box(x_7);
x_12 = lean_box(x_8);
x_13 = lean_box(x_9);
x_14 = lean_apply_5(x_2, x_6, x_11, x_12, x_13, x_10);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_2);
x_15 = lean_apply_1(x_3, x_1);
return x_15;
}
}
}
lean_object* l_Lean_Elab_Modifiers_isProtected_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Modifiers_isProtected_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_Elab_Modifiers_isProtected(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_3 = lean_box(x_2);
if (lean_obj_tag(x_3) == 1)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
}
}
lean_object* l_Lean_Elab_Modifiers_isProtected___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Modifiers_isProtected(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Modifiers_addAttribute(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_array_push(x_4, x_2);
lean_ctor_set(x_1, 1, x_5);
return x_1;
}
else
{
lean_object* x_6; uint8_t x_7; uint8_t x_8; uint8_t x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
x_9 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
x_10 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_6);
lean_dec(x_1);
x_12 = lean_array_push(x_11, x_2);
x_13 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set_uint8(x_13, sizeof(void*)*2, x_7);
lean_ctor_set_uint8(x_13, sizeof(void*)*2 + 1, x_8);
lean_ctor_set_uint8(x_13, sizeof(void*)*2 + 2, x_9);
lean_ctor_set_uint8(x_13, sizeof(void*)*2 + 3, x_10);
return x_13;
}
}
}
lean_object* l_Lean_Elab_instToFormatModifiers_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_instToFormatModifiers_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_instToFormatModifiers_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_instToFormatModifiers_match__2___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (x_1) {
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
x_7 = lean_box(0);
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
lean_object* l_Lean_Elab_instToFormatModifiers_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_instToFormatModifiers_match__2___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_instToFormatModifiers_match__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Elab_instToFormatModifiers_match__2___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_Std_fmt___at_Lean_Elab_instToFormatModifiers___spec__1(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_3 = lean_mk_string("");
lean_inc(x_3);
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(x_5);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = 0;
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Lean_Syntax_formatStxAux(x_8, x_9, x_10, x_7);
x_12 = l_Std_Format_defWidth;
x_13 = lean_format_pretty(x_11, x_12);
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_mk_string("@[");
x_16 = lean_string_length(x_15);
x_17 = lean_nat_to_int(x_16);
x_18 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_18, 0, x_15);
x_19 = lean_mk_string("]");
x_20 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_20, 0, x_19);
switch (x_2) {
case 0:
{
x_21 = x_3;
goto block_34;
}
case 1:
{
lean_object* x_35; 
lean_dec(x_3);
x_35 = lean_mk_string("local ");
x_21 = x_35;
goto block_34;
}
default: 
{
lean_object* x_36; 
lean_dec(x_3);
x_36 = lean_mk_string("scoped ");
x_21 = x_36;
goto block_34;
}
}
block_34:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
lean_inc(x_4);
x_23 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_23, 0, x_4);
lean_ctor_set(x_23, 1, x_22);
lean_inc(x_4);
x_24 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_4);
x_25 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_6);
lean_inc(x_4);
x_26 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_4);
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_14);
x_28 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_4);
x_29 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_29, 0, x_18);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_20);
x_31 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_31, 0, x_17);
lean_ctor_set(x_31, 1, x_30);
x_32 = 0;
x_33 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set_uint8(x_33, sizeof(void*)*1, x_32);
return x_33;
}
}
}
lean_object* l_List_map___at_Lean_Elab_instToFormatModifiers___spec__2(lean_object* x_1) {
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
x_6 = l_Std_fmt___at_Lean_Elab_instToFormatModifiers___spec__1(x_4);
x_7 = l_List_map___at_Lean_Elab_instToFormatModifiers___spec__2(x_5);
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
x_10 = l_Std_fmt___at_Lean_Elab_instToFormatModifiers___spec__1(x_8);
x_11 = l_List_map___at_Lean_Elab_instToFormatModifiers___spec__2(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_Lean_Elab_instToFormatModifiers(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; uint8_t x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
x_5 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_array_to_list(lean_box(0), x_7);
x_9 = l_List_map___at_Lean_Elab_instToFormatModifiers___spec__2(x_8);
x_10 = lean_mk_string(",");
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_box(1);
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_mk_string("{");
x_15 = lean_string_length(x_14);
x_16 = lean_nat_to_int(x_15);
x_17 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_17, 0, x_14);
x_18 = lean_mk_string("}");
x_19 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_19, 0, x_18);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_87; 
x_87 = lean_box(0);
x_20 = x_87;
goto block_86;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_88 = lean_ctor_get(x_2, 0);
lean_inc(x_88);
lean_dec(x_2);
x_89 = lean_mk_string("/--");
x_90 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_90, 0, x_89);
x_91 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_91, 0, x_88);
x_92 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_mk_string("-/");
x_94 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_94, 0, x_93);
x_95 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_95, 0, x_92);
lean_ctor_set(x_95, 1, x_94);
x_96 = lean_box(0);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
x_20 = x_97;
goto block_86;
}
block_86:
{
lean_object* x_21; 
switch (x_3) {
case 0:
{
lean_object* x_77; 
x_77 = lean_box(0);
x_21 = x_77;
goto block_76;
}
case 1:
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_78 = lean_mk_string("protected");
x_79 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_79, 0, x_78);
x_80 = lean_box(0);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_21 = x_81;
goto block_76;
}
default: 
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_mk_string("private");
x_83 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_83, 0, x_82);
x_84 = lean_box(0);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
x_21 = x_85;
goto block_76;
}
}
block_76:
{
lean_object* x_22; lean_object* x_23; 
x_22 = l_List_append___rarg(x_20, x_21);
if (x_4 == 0)
{
lean_object* x_71; 
x_71 = lean_box(0);
x_23 = x_71;
goto block_70;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_72 = lean_mk_string("noncomputable");
x_73 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_73, 0, x_72);
x_74 = lean_box(0);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
x_23 = x_75;
goto block_70;
}
block_70:
{
lean_object* x_24; 
x_24 = l_List_append___rarg(x_22, x_23);
if (x_5 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_box(0);
x_26 = l_List_append___rarg(x_24, x_25);
if (x_6 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; 
x_27 = l_List_append___rarg(x_26, x_25);
x_28 = l_List_append___rarg(x_27, x_9);
x_29 = l_Std_Format_joinSep___at_instReprProd___spec__1(x_28, x_13);
lean_dec(x_28);
x_30 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_30, 0, x_17);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_19);
x_32 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_32, 0, x_16);
lean_ctor_set(x_32, 1, x_31);
x_33 = 0;
x_34 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set_uint8(x_34, sizeof(void*)*1, x_33);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; 
x_35 = lean_mk_string("unsafe");
x_36 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_25);
x_38 = l_List_append___rarg(x_26, x_37);
x_39 = l_List_append___rarg(x_38, x_9);
x_40 = l_Std_Format_joinSep___at_instReprProd___spec__1(x_39, x_13);
lean_dec(x_39);
x_41 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_41, 0, x_17);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_19);
x_43 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_43, 0, x_16);
lean_ctor_set(x_43, 1, x_42);
x_44 = 0;
x_45 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set_uint8(x_45, sizeof(void*)*1, x_44);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_mk_string("partial");
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_List_append___rarg(x_24, x_49);
if (x_6 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; 
x_51 = l_List_append___rarg(x_50, x_48);
x_52 = l_List_append___rarg(x_51, x_9);
x_53 = l_Std_Format_joinSep___at_instReprProd___spec__1(x_52, x_13);
lean_dec(x_52);
x_54 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_54, 0, x_17);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_19);
x_56 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_56, 0, x_16);
lean_ctor_set(x_56, 1, x_55);
x_57 = 0;
x_58 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set_uint8(x_58, sizeof(void*)*1, x_57);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; lean_object* x_69; 
x_59 = lean_mk_string("unsafe");
x_60 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_60, 0, x_59);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_48);
x_62 = l_List_append___rarg(x_50, x_61);
x_63 = l_List_append___rarg(x_62, x_9);
x_64 = l_Std_Format_joinSep___at_instReprProd___spec__1(x_63, x_13);
lean_dec(x_63);
x_65 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_65, 0, x_17);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_19);
x_67 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_67, 0, x_16);
lean_ctor_set(x_67, 1, x_66);
x_68 = 0;
x_69 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set_uint8(x_69, sizeof(void*)*1, x_68);
return x_69;
}
}
}
}
}
}
}
lean_object* l_Lean_Elab_instToStringModifiers___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; uint8_t x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
x_5 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_array_to_list(lean_box(0), x_7);
x_9 = l_List_map___at_Lean_Elab_instToFormatModifiers___spec__2(x_8);
x_10 = lean_mk_string(",");
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_box(1);
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_mk_string("{");
x_15 = lean_string_length(x_14);
x_16 = lean_nat_to_int(x_15);
x_17 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_17, 0, x_14);
x_18 = lean_mk_string("}");
x_19 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_19, 0, x_18);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_87; 
x_87 = lean_box(0);
x_20 = x_87;
goto block_86;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_88 = lean_ctor_get(x_2, 0);
lean_inc(x_88);
lean_dec(x_2);
x_89 = lean_mk_string("/--");
x_90 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_90, 0, x_89);
x_91 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_91, 0, x_88);
x_92 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_mk_string("-/");
x_94 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_94, 0, x_93);
x_95 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_95, 0, x_92);
lean_ctor_set(x_95, 1, x_94);
x_96 = lean_box(0);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
x_20 = x_97;
goto block_86;
}
block_86:
{
lean_object* x_21; 
switch (x_3) {
case 0:
{
lean_object* x_77; 
x_77 = lean_box(0);
x_21 = x_77;
goto block_76;
}
case 1:
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_78 = lean_mk_string("protected");
x_79 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_79, 0, x_78);
x_80 = lean_box(0);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_21 = x_81;
goto block_76;
}
default: 
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_mk_string("private");
x_83 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_83, 0, x_82);
x_84 = lean_box(0);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
x_21 = x_85;
goto block_76;
}
}
block_76:
{
lean_object* x_22; lean_object* x_23; 
x_22 = l_List_append___rarg(x_20, x_21);
if (x_4 == 0)
{
lean_object* x_71; 
x_71 = lean_box(0);
x_23 = x_71;
goto block_70;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_72 = lean_mk_string("noncomputable");
x_73 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_73, 0, x_72);
x_74 = lean_box(0);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
x_23 = x_75;
goto block_70;
}
block_70:
{
lean_object* x_24; 
x_24 = l_List_append___rarg(x_22, x_23);
if (x_5 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_box(0);
x_26 = l_List_append___rarg(x_24, x_25);
if (x_6 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; lean_object* x_34; 
x_27 = l_List_append___rarg(x_26, x_25);
x_28 = l_List_append___rarg(x_27, x_9);
x_29 = l_Std_Format_joinSep___at_instReprProd___spec__1(x_28, x_13);
lean_dec(x_28);
x_30 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_30, 0, x_17);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_19);
x_32 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_32, 0, x_16);
lean_ctor_set(x_32, 1, x_31);
x_33 = 0;
x_34 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set_uint8(x_34, sizeof(void*)*1, x_33);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; 
x_35 = lean_mk_string("unsafe");
x_36 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_25);
x_38 = l_List_append___rarg(x_26, x_37);
x_39 = l_List_append___rarg(x_38, x_9);
x_40 = l_Std_Format_joinSep___at_instReprProd___spec__1(x_39, x_13);
lean_dec(x_39);
x_41 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_41, 0, x_17);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_19);
x_43 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_43, 0, x_16);
lean_ctor_set(x_43, 1, x_42);
x_44 = 0;
x_45 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set_uint8(x_45, sizeof(void*)*1, x_44);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_mk_string("partial");
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_List_append___rarg(x_24, x_49);
if (x_6 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; 
x_51 = l_List_append___rarg(x_50, x_48);
x_52 = l_List_append___rarg(x_51, x_9);
x_53 = l_Std_Format_joinSep___at_instReprProd___spec__1(x_52, x_13);
lean_dec(x_52);
x_54 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_54, 0, x_17);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_19);
x_56 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_56, 0, x_16);
lean_ctor_set(x_56, 1, x_55);
x_57 = 0;
x_58 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set_uint8(x_58, sizeof(void*)*1, x_57);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; lean_object* x_69; 
x_59 = lean_mk_string("unsafe");
x_60 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_60, 0, x_59);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_48);
x_62 = l_List_append___rarg(x_50, x_61);
x_63 = l_List_append___rarg(x_62, x_9);
x_64 = l_Std_Format_joinSep___at_instReprProd___spec__1(x_63, x_13);
lean_dec(x_63);
x_65 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_65, 0, x_17);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_19);
x_67 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_67, 0, x_16);
lean_ctor_set(x_67, 1, x_66);
x_68 = 0;
x_69 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set_uint8(x_69, sizeof(void*)*1, x_68);
return x_69;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_instToStringModifiers() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_alloc_closure((void*)(l_Lean_Syntax_instToStringSyntax___lambda__1), 1, 0);
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_instToStringModifiers___lambda__1), 1, 0);
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_expandOptDocComment_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_expandOptDocComment_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_expandOptDocComment_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_expandOptDocComment_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_expandOptDocComment_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_expandOptDocComment_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_expandOptDocComment_x3f___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Syntax_getOptional_x3f(x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_box(0);
x_8 = lean_apply_2(x_6, lean_box(0), x_7);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_10, x_11);
if (lean_obj_tag(x_12) == 2)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_10);
lean_dec(x_2);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_string_utf8_byte_size(x_13);
x_17 = lean_unsigned_to_nat(2u);
x_18 = lean_nat_sub(x_16, x_17);
lean_dec(x_16);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_string_utf8_extract(x_13, x_19, x_18);
lean_dec(x_18);
lean_dec(x_13);
lean_ctor_set(x_4, 0, x_20);
x_21 = lean_apply_2(x_15, lean_box(0), x_4);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_free_object(x_4);
x_22 = lean_mk_string("unexpected doc string");
x_23 = l_Lean_stringToMessageData(x_22);
lean_dec(x_22);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_12);
x_25 = l_Lean_indentD(x_24);
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_mk_string("");
x_28 = l_Lean_stringToMessageData(x_27);
lean_dec(x_27);
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_throwErrorAt___rarg(x_1, x_2, x_10, x_29);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_4, 0);
lean_inc(x_31);
lean_dec(x_4);
x_32 = lean_unsigned_to_nat(1u);
x_33 = l_Lean_Syntax_getArg(x_31, x_32);
if (lean_obj_tag(x_33) == 2)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_31);
lean_dec(x_2);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_ctor_get(x_1, 0);
lean_inc(x_35);
lean_dec(x_1);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_string_utf8_byte_size(x_34);
x_38 = lean_unsigned_to_nat(2u);
x_39 = lean_nat_sub(x_37, x_38);
lean_dec(x_37);
x_40 = lean_unsigned_to_nat(0u);
x_41 = lean_string_utf8_extract(x_34, x_40, x_39);
lean_dec(x_39);
lean_dec(x_34);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_apply_2(x_36, lean_box(0), x_42);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_44 = lean_mk_string("unexpected doc string");
x_45 = l_Lean_stringToMessageData(x_44);
lean_dec(x_44);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_33);
x_47 = l_Lean_indentD(x_46);
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_mk_string("");
x_50 = l_Lean_stringToMessageData(x_49);
lean_dec(x_49);
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_48);
lean_ctor_set(x_51, 1, x_50);
x_52 = l_Lean_throwErrorAt___rarg(x_1, x_2, x_31, x_51);
return x_52;
}
}
}
}
}
lean_object* l_Lean_Elab_expandOptDocComment_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_expandOptDocComment_x3f___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_expandOptDocComment_x3f___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_expandOptDocComment_x3f___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; uint8_t x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l_Lean_Syntax_isNone(x_2);
x_11 = l_Lean_Syntax_isNone(x_3);
x_12 = l_Lean_Syntax_isNone(x_4);
if (x_10 == 0)
{
if (x_11 == 0)
{
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_13 = 1;
x_14 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_7);
lean_ctor_set_uint8(x_14, sizeof(void*)*2, x_6);
lean_ctor_set_uint8(x_14, sizeof(void*)*2 + 1, x_13);
lean_ctor_set_uint8(x_14, sizeof(void*)*2 + 2, x_13);
lean_ctor_set_uint8(x_14, sizeof(void*)*2 + 3, x_13);
x_15 = lean_apply_2(x_9, lean_box(0), x_14);
return x_15;
}
else
{
uint8_t x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_16 = 1;
x_17 = 0;
x_18 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_18, 0, x_5);
lean_ctor_set(x_18, 1, x_7);
lean_ctor_set_uint8(x_18, sizeof(void*)*2, x_6);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 1, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 2, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*2 + 3, x_17);
x_19 = lean_apply_2(x_9, lean_box(0), x_18);
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
lean_ctor_set(x_22, 0, x_5);
lean_ctor_set(x_22, 1, x_7);
lean_ctor_set_uint8(x_22, sizeof(void*)*2, x_6);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 1, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 2, x_21);
lean_ctor_set_uint8(x_22, sizeof(void*)*2 + 3, x_20);
x_23 = lean_apply_2(x_9, lean_box(0), x_22);
return x_23;
}
else
{
uint8_t x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; 
x_24 = 1;
x_25 = 0;
x_26 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_7);
lean_ctor_set_uint8(x_26, sizeof(void*)*2, x_6);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 1, x_24);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 2, x_25);
lean_ctor_set_uint8(x_26, sizeof(void*)*2 + 3, x_25);
x_27 = lean_apply_2(x_9, lean_box(0), x_26);
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
lean_ctor_set(x_30, 0, x_5);
lean_ctor_set(x_30, 1, x_7);
lean_ctor_set_uint8(x_30, sizeof(void*)*2, x_6);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 1, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 2, x_29);
lean_ctor_set_uint8(x_30, sizeof(void*)*2 + 3, x_29);
x_31 = lean_apply_2(x_9, lean_box(0), x_30);
return x_31;
}
else
{
uint8_t x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_32 = 0;
x_33 = 1;
x_34 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_34, 0, x_5);
lean_ctor_set(x_34, 1, x_7);
lean_ctor_set_uint8(x_34, sizeof(void*)*2, x_6);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 1, x_32);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 2, x_33);
lean_ctor_set_uint8(x_34, sizeof(void*)*2 + 3, x_32);
x_35 = lean_apply_2(x_9, lean_box(0), x_34);
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
lean_ctor_set(x_38, 0, x_5);
lean_ctor_set(x_38, 1, x_7);
lean_ctor_set_uint8(x_38, sizeof(void*)*2, x_6);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 1, x_36);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 2, x_36);
lean_ctor_set_uint8(x_38, sizeof(void*)*2 + 3, x_37);
x_39 = lean_apply_2(x_9, lean_box(0), x_38);
return x_39;
}
else
{
uint8_t x_40; lean_object* x_41; lean_object* x_42; 
x_40 = 0;
x_41 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_41, 0, x_5);
lean_ctor_set(x_41, 1, x_7);
lean_ctor_set_uint8(x_41, sizeof(void*)*2, x_6);
lean_ctor_set_uint8(x_41, sizeof(void*)*2 + 1, x_40);
lean_ctor_set_uint8(x_41, sizeof(void*)*2 + 2, x_40);
lean_ctor_set_uint8(x_41, sizeof(void*)*2 + 3, x_40);
x_42 = lean_apply_2(x_9, lean_box(0), x_41);
return x_42;
}
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, uint8_t x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_box(x_15);
lean_inc(x_1);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_2);
lean_closure_set(x_17, 2, x_3);
lean_closure_set(x_17, 3, x_4);
lean_closure_set(x_17, 4, x_5);
lean_closure_set(x_17, 5, x_16);
x_18 = l_Lean_Syntax_getOptional_x3f(x_6);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_mk_empty_array_with_capacity(x_22);
x_24 = lean_apply_2(x_21, lean_box(0), x_23);
x_25 = lean_apply_4(x_19, lean_box(0), lean_box(0), x_24, x_17);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_18, 0);
lean_inc(x_26);
lean_dec(x_18);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
x_28 = l_Lean_Elab_elabDeclAttrs___rarg(x_1, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_26);
lean_dec(x_26);
x_29 = lean_apply_4(x_27, lean_box(0), lean_box(0), x_28, x_17);
return x_29;
}
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; 
lean_inc(x_8);
lean_inc(x_1);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__2___boxed), 15, 14);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_2);
lean_closure_set(x_16, 2, x_3);
lean_closure_set(x_16, 3, x_4);
lean_closure_set(x_16, 4, x_15);
lean_closure_set(x_16, 5, x_5);
lean_closure_set(x_16, 6, x_6);
lean_closure_set(x_16, 7, x_7);
lean_closure_set(x_16, 8, x_8);
lean_closure_set(x_16, 9, x_9);
lean_closure_set(x_16, 10, x_10);
lean_closure_set(x_16, 11, x_11);
lean_closure_set(x_16, 12, x_12);
lean_closure_set(x_16, 13, x_13);
x_17 = l_Lean_Syntax_getOptional_x3f(x_14);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_8);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = 0;
x_22 = lean_box(x_21);
x_23 = lean_apply_2(x_20, lean_box(0), x_22);
x_24 = lean_apply_4(x_18, lean_box(0), lean_box(0), x_23, x_16);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_25 = lean_ctor_get(x_17, 0);
lean_inc(x_25);
lean_dec(x_17);
lean_inc(x_25);
x_26 = l_Lean_Syntax_getKind(x_25);
x_27 = lean_box(0);
x_28 = lean_mk_string("Lean");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Parser");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("Command");
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("private");
lean_inc(x_33);
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = lean_name_eq(x_26, x_35);
lean_dec(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_37 = lean_mk_string("protected");
x_38 = lean_name_mk_string(x_33, x_37);
x_39 = lean_name_eq(x_26, x_38);
lean_dec(x_38);
lean_dec(x_26);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_40 = lean_ctor_get(x_1, 1);
lean_inc(x_40);
x_41 = lean_mk_string("unexpected visibility modifier");
x_42 = l_Lean_stringToMessageData(x_41);
lean_dec(x_41);
x_43 = l_Lean_throwErrorAt___rarg(x_1, x_8, x_25, x_42);
x_44 = lean_apply_4(x_40, lean_box(0), lean_box(0), x_43, x_16);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_25);
lean_dec(x_8);
x_45 = lean_ctor_get(x_1, 1);
lean_inc(x_45);
x_46 = lean_ctor_get(x_1, 0);
lean_inc(x_46);
lean_dec(x_1);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_48 = 1;
x_49 = lean_box(x_48);
x_50 = lean_apply_2(x_47, lean_box(0), x_49);
x_51 = lean_apply_4(x_45, lean_box(0), lean_box(0), x_50, x_16);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_33);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_8);
x_52 = lean_ctor_get(x_1, 1);
lean_inc(x_52);
x_53 = lean_ctor_get(x_1, 0);
lean_inc(x_53);
lean_dec(x_1);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = 2;
x_56 = lean_box(x_55);
x_57 = lean_apply_2(x_54, lean_box(0), x_56);
x_58 = lean_apply_4(x_52, lean_box(0), lean_box(0), x_57, x_16);
return x_58;
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_10, x_11);
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_10, x_13);
x_15 = lean_unsigned_to_nat(2u);
x_16 = l_Lean_Syntax_getArg(x_10, x_15);
x_17 = lean_unsigned_to_nat(3u);
x_18 = l_Lean_Syntax_getArg(x_10, x_17);
x_19 = lean_unsigned_to_nat(4u);
x_20 = l_Lean_Syntax_getArg(x_10, x_19);
x_21 = lean_unsigned_to_nat(5u);
x_22 = l_Lean_Syntax_getArg(x_10, x_21);
lean_inc(x_4);
lean_inc(x_1);
x_23 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___lambda__3___boxed), 15, 14);
lean_closure_set(x_23, 0, x_1);
lean_closure_set(x_23, 1, x_18);
lean_closure_set(x_23, 2, x_22);
lean_closure_set(x_23, 3, x_20);
lean_closure_set(x_23, 4, x_14);
lean_closure_set(x_23, 5, x_2);
lean_closure_set(x_23, 6, x_3);
lean_closure_set(x_23, 7, x_4);
lean_closure_set(x_23, 8, x_5);
lean_closure_set(x_23, 9, x_6);
lean_closure_set(x_23, 10, x_7);
lean_closure_set(x_23, 11, x_8);
lean_closure_set(x_23, 12, x_9);
lean_closure_set(x_23, 13, x_16);
x_24 = l_Lean_Syntax_getOptional_x3f(x_12);
lean_dec(x_12);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_4);
x_25 = lean_ctor_get(x_1, 1);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_box(0);
x_29 = lean_apply_2(x_27, lean_box(0), x_28);
x_30 = lean_apply_4(x_25, lean_box(0), lean_box(0), x_29, x_23);
return x_30;
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_24);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_24, 0);
x_33 = l_Lean_Syntax_getArg(x_32, x_13);
if (lean_obj_tag(x_33) == 2)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_32);
lean_dec(x_4);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = lean_ctor_get(x_1, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 0);
lean_inc(x_36);
lean_dec(x_1);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_string_utf8_byte_size(x_34);
x_39 = lean_nat_sub(x_38, x_15);
lean_dec(x_38);
x_40 = lean_string_utf8_extract(x_34, x_11, x_39);
lean_dec(x_39);
lean_dec(x_34);
lean_ctor_set(x_24, 0, x_40);
x_41 = lean_apply_2(x_37, lean_box(0), x_24);
x_42 = lean_apply_4(x_35, lean_box(0), lean_box(0), x_41, x_23);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_free_object(x_24);
x_43 = lean_ctor_get(x_1, 1);
lean_inc(x_43);
x_44 = lean_mk_string("unexpected doc string");
x_45 = l_Lean_stringToMessageData(x_44);
lean_dec(x_44);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_33);
x_47 = l_Lean_indentD(x_46);
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_mk_string("");
x_50 = l_Lean_stringToMessageData(x_49);
lean_dec(x_49);
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_48);
lean_ctor_set(x_51, 1, x_50);
x_52 = l_Lean_throwErrorAt___rarg(x_1, x_4, x_32, x_51);
x_53 = lean_apply_4(x_43, lean_box(0), lean_box(0), x_52, x_23);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_24, 0);
lean_inc(x_54);
lean_dec(x_24);
x_55 = l_Lean_Syntax_getArg(x_54, x_13);
if (lean_obj_tag(x_55) == 2)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_54);
lean_dec(x_4);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_57 = lean_ctor_get(x_1, 1);
lean_inc(x_57);
x_58 = lean_ctor_get(x_1, 0);
lean_inc(x_58);
lean_dec(x_1);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_60 = lean_string_utf8_byte_size(x_56);
x_61 = lean_nat_sub(x_60, x_15);
lean_dec(x_60);
x_62 = lean_string_utf8_extract(x_56, x_11, x_61);
lean_dec(x_61);
lean_dec(x_56);
x_63 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_63, 0, x_62);
x_64 = lean_apply_2(x_59, lean_box(0), x_63);
x_65 = lean_apply_4(x_57, lean_box(0), lean_box(0), x_64, x_23);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_66 = lean_ctor_get(x_1, 1);
lean_inc(x_66);
x_67 = lean_mk_string("unexpected doc string");
x_68 = l_Lean_stringToMessageData(x_67);
lean_dec(x_67);
x_69 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_69, 0, x_55);
x_70 = l_Lean_indentD(x_69);
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_mk_string("");
x_73 = l_Lean_stringToMessageData(x_72);
lean_dec(x_72);
x_74 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_73);
x_75 = l_Lean_throwErrorAt___rarg(x_1, x_4, x_54, x_74);
x_76 = lean_apply_4(x_66, lean_box(0), lean_box(0), x_75, x_23);
return x_76;
}
}
}
}
}
lean_object* l_Lean_Elab_elabModifiers(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_6);
lean_dec(x_6);
x_9 = l_Lean_Elab_elabModifiers___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_8, x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; lean_object* x_17; 
x_16 = lean_unbox(x_15);
lean_dec(x_15);
x_17 = l_Lean_Elab_elabModifiers___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_16);
lean_dec(x_6);
return x_17;
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Elab_elabModifiers___rarg___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_14);
return x_16;
}
}
lean_object* l_Lean_Elab_elabModifiers___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_elabModifiers___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
return x_11;
}
}
lean_object* l_Lean_Elab_applyVisibility_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(x_1);
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_2, x_9);
return x_10;
}
}
}
}
lean_object* l_Lean_Elab_applyVisibility_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility_match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_applyVisibility_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Elab_applyVisibility_match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_Elab_applyVisibility___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = l_Lean_protectedExt;
lean_inc(x_1);
x_7 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_6, x_5, x_1);
x_8 = l_Lean_setEnv___rarg(x_2, x_7);
x_9 = lean_alloc_closure((void*)(l_ReaderT_instMonadReaderT___rarg___lambda__4___boxed), 3, 2);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_1);
x_10 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_Elab_applyVisibility___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___rarg___lambda__1), 5, 4);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_1);
lean_closure_set(x_7, 2, x_3);
lean_closure_set(x_7, 3, x_4);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Elab_applyVisibility___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_mkPrivateName(x_6, x_1);
lean_inc(x_7);
lean_inc(x_2);
x_8 = l_Lean_Elab_checkNotAlreadyDeclared___rarg(x_2, x_3, x_4, x_7);
x_9 = lean_alloc_closure((void*)(l_ReaderT_instMonadReaderT___rarg___lambda__4___boxed), 3, 2);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_7);
x_10 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_Elab_applyVisibility___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
switch (x_4) {
case 0:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_7 = l_Lean_Elab_checkNotAlreadyDeclared___rarg(x_1, x_2, x_3, x_5);
x_8 = lean_alloc_closure((void*)(l_ReaderT_instMonadReaderT___rarg___lambda__4___boxed), 3, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_5);
x_9 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_7, x_8);
return x_9;
}
case 1:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_5);
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_Lean_Elab_checkNotAlreadyDeclared___rarg(x_1, x_2, x_3, x_5);
lean_inc(x_10);
x_12 = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___rarg___lambda__2___boxed), 5, 4);
lean_closure_set(x_12, 0, x_2);
lean_closure_set(x_12, 1, x_5);
lean_closure_set(x_12, 2, x_1);
lean_closure_set(x_12, 3, x_10);
x_13 = lean_apply_4(x_10, lean_box(0), lean_box(0), x_11, x_12);
return x_13;
}
default: 
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
lean_inc(x_14);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___rarg___lambda__3), 6, 5);
lean_closure_set(x_16, 0, x_5);
lean_closure_set(x_16, 1, x_1);
lean_closure_set(x_16, 2, x_2);
lean_closure_set(x_16, 3, x_3);
lean_closure_set(x_16, 4, x_14);
x_17 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_15, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Elab_applyVisibility(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_applyVisibility___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_applyVisibility___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_applyVisibility___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_Elab_applyVisibility___rarg(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
lean_object* l_Lean_Elab_mkDeclName_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_mkDeclName_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_mkDeclName_match__2___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(x_1);
if (lean_obj_tag(x_4) == 1)
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
lean_object* l_Lean_Elab_mkDeclName_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName_match__2___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_mkDeclName_match__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Elab_mkDeclName_match__2___rarg(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__1(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_box(x_1);
if (lean_obj_tag(x_7) == 1)
{
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = lean_name_mk_string(x_11, x_8);
x_13 = l_Lean_Name_append(x_12, x_3);
lean_dec(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_apply_2(x_10, lean_box(0), x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_16 = lean_mk_string("protected declarations must be in a namespace");
x_17 = l_Lean_stringToMessageData(x_16);
lean_dec(x_16);
x_18 = l_Lean_throwError___rarg(x_2, x_5, x_17);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_6);
lean_ctor_set(x_21, 1, x_3);
x_22 = lean_apply_2(x_20, lean_box(0), x_21);
return x_22;
}
}
}
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_2);
x_8 = l_Lean_Name_append(x_1, x_2);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
x_10 = lean_ctor_get_uint8(x_4, sizeof(void*)*2);
lean_inc(x_6);
lean_inc(x_3);
x_11 = l_Lean_Elab_applyVisibility___rarg(x_3, x_5, x_6, x_10, x_8);
x_12 = lean_box(x_10);
x_13 = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_13, 0, x_12);
lean_closure_set(x_13, 1, x_3);
lean_closure_set(x_13, 2, x_2);
lean_closure_set(x_13, 3, x_1);
lean_closure_set(x_13, 4, x_6);
x_14 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_11, x_13);
return x_14;
}
}
lean_object* l_Lean_Elab_mkDeclName___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_6);
x_7 = l_Lean_extractMacroScopes(x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_6);
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_9, 0, x_4);
lean_closure_set(x_9, 1, x_6);
lean_closure_set(x_9, 2, x_1);
lean_closure_set(x_9, 3, x_5);
lean_closure_set(x_9, 4, x_2);
lean_closure_set(x_9, 5, x_3);
x_10 = l_Lean_Name_isAtomic(x_8);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = l_Lean_Elab_isFreshInstanceName(x_8);
lean_dec(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_mk_string("atomic identifier expected '");
x_14 = l_Lean_stringToMessageData(x_13);
lean_dec(x_13);
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_6);
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_mk_string("'");
x_18 = l_Lean_stringToMessageData(x_17);
lean_dec(x_17);
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_throwError___rarg(x_1, x_3, x_19);
x_21 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_20, x_9);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_6);
lean_dec(x_3);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 0);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_box(0);
x_26 = lean_apply_2(x_24, lean_box(0), x_25);
x_27 = lean_apply_4(x_22, lean_box(0), lean_box(0), x_26, x_9);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_3);
x_28 = lean_ctor_get(x_1, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 0);
lean_inc(x_29);
lean_dec(x_1);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_box(0);
x_32 = lean_apply_2(x_30, lean_box(0), x_31);
x_33 = lean_apply_4(x_28, lean_box(0), lean_box(0), x_32, x_9);
return x_33;
}
}
}
lean_object* l_Lean_Elab_mkDeclName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_1);
lean_dec(x_1);
x_8 = l_Lean_Elab_mkDeclName___rarg___lambda__1(x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Elab_mkDeclName___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_mkDeclName___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_4);
return x_8;
}
}
lean_object* l_Lean_Elab_expandDeclIdCore(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_Syntax_isIdent(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Lean_Syntax_getArg(x_1, x_3);
x_5 = l_Lean_Syntax_getId(x_4);
lean_dec(x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = l_Lean_Syntax_getId(x_1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_mk_empty_array_with_capacity(x_10);
x_12 = l_Lean_nullKind;
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
lean_object* l_Lean_Elab_expandDeclIdCore___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_expandDeclIdCore(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_expandDeclId_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_expandDeclId_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_expandDeclId_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_expandDeclId_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_expandDeclId_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_expandDeclId_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_expandDeclId___spec__1___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 1;
x_9 = x_1 + x_8;
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_expandDeclId___spec__1___rarg(x_2, x_3, x_4, x_5, x_9, x_6, x_7);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_expandDeclId___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_5 == x_6;
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_array_uget(x_4, x_5);
x_11 = l_Lean_Syntax_getId(x_10);
x_12 = l_List_elem___at_Lean_NameHashSet_insert___spec__2(x_11, x_7);
x_13 = lean_box_usize(x_5);
x_14 = lean_box_usize(x_6);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Elab_expandDeclId___spec__1___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_15, 0, x_13);
lean_closure_set(x_15, 1, x_1);
lean_closure_set(x_15, 2, x_2);
lean_closure_set(x_15, 3, x_3);
lean_closure_set(x_15, 4, x_4);
lean_closure_set(x_15, 5, x_14);
if (x_12 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_7);
x_19 = lean_apply_2(x_17, lean_box(0), x_18);
x_20 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_19, x_15);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_7);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
x_22 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg(x_1, x_2, x_11);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
x_24 = lean_alloc_closure((void*)(l_Lean_withRef___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_24, 0, x_10);
lean_closure_set(x_24, 1, x_21);
lean_closure_set(x_24, 2, x_22);
x_25 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_23, x_24);
x_26 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_25, x_15);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
lean_dec(x_1);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_apply_2(x_28, lean_box(0), x_7);
return x_29;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_expandDeclId___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Elab_expandDeclId___spec__1___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
lean_ctor_set(x_8, 2, x_4);
x_9 = lean_apply_2(x_7, lean_box(0), x_8);
return x_9;
}
}
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
lean_inc(x_7);
lean_inc(x_2);
x_10 = l_Lean_addDocString_x27___rarg(x_2, x_3, x_7, x_9);
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_expandDeclId___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_8);
lean_closure_set(x_11, 2, x_7);
lean_closure_set(x_11, 3, x_4);
x_12 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_10, x_11);
return x_12;
}
}
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_11 = l_Lean_Elab_mkDeclName___rarg(x_1, x_3, x_2, x_4, x_5, x_6);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = lean_alloc_closure((void*)(l_Lean_withRef___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_13, 0, x_7);
lean_closure_set(x_13, 1, x_10);
lean_closure_set(x_13, 2, x_11);
lean_inc(x_9);
x_14 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_12, x_13);
lean_inc(x_9);
x_15 = lean_alloc_closure((void*)(l_Lean_Elab_expandDeclId___rarg___lambda__2), 6, 5);
lean_closure_set(x_15, 0, x_5);
lean_closure_set(x_15, 1, x_1);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_8);
lean_closure_set(x_15, 4, x_9);
x_16 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_14, x_15);
return x_16;
}
}
lean_object* l_Lean_Elab_expandDeclId___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_Elab_expandDeclIdCore(x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_3);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Lean_Elab_expandDeclId___rarg___lambda__3), 8, 7);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_3);
lean_closure_set(x_12, 2, x_2);
lean_closure_set(x_12, 3, x_4);
lean_closure_set(x_12, 4, x_7);
lean_closure_set(x_12, 5, x_10);
lean_closure_set(x_12, 6, x_6);
x_13 = l_Lean_Syntax_isNone(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_11, x_14);
lean_dec(x_11);
x_16 = l_Lean_Syntax_getArgs(x_15);
lean_dec(x_15);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_mk_empty_array_with_capacity(x_17);
x_19 = 1;
x_20 = lean_box(x_19);
lean_inc(x_18);
lean_ctor_set(x_8, 1, x_18);
lean_ctor_set(x_8, 0, x_20);
x_21 = lean_array_get_size(x_16);
x_22 = lean_nat_dec_lt(x_17, x_21);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
if (x_22 == 0)
{
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_16);
x_24 = x_18;
goto block_40;
}
else
{
uint8_t x_41; 
x_41 = lean_nat_dec_le(x_21, x_21);
if (x_41 == 0)
{
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_16);
x_24 = x_18;
goto block_40;
}
else
{
size_t x_42; size_t x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_18);
x_42 = 0;
x_43 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_44 = l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1(x_16, x_42, x_43, x_8);
lean_dec(x_16);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_24 = x_45;
goto block_40;
}
}
block_40:
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_array_get_size(x_24);
x_26 = lean_nat_dec_lt(x_17, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_3);
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
lean_dec(x_1);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_apply_2(x_28, lean_box(0), x_5);
x_30 = lean_apply_4(x_23, lean_box(0), lean_box(0), x_29, x_12);
return x_30;
}
else
{
uint8_t x_31; 
x_31 = lean_nat_dec_le(x_25, x_25);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_3);
x_32 = lean_ctor_get(x_1, 0);
lean_inc(x_32);
lean_dec(x_1);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_apply_2(x_33, lean_box(0), x_5);
x_35 = lean_apply_4(x_23, lean_box(0), lean_box(0), x_34, x_12);
return x_35;
}
else
{
size_t x_36; size_t x_37; lean_object* x_38; lean_object* x_39; 
x_36 = 0;
x_37 = lean_usize_of_nat(x_25);
lean_dec(x_25);
lean_inc(x_23);
x_38 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_expandDeclId___spec__1___rarg(x_1, x_3, x_23, x_24, x_36, x_37, x_5);
x_39 = lean_apply_4(x_23, lean_box(0), lean_box(0), x_38, x_12);
return x_39;
}
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_free_object(x_8);
lean_dec(x_11);
lean_dec(x_3);
x_46 = lean_ctor_get(x_1, 1);
lean_inc(x_46);
x_47 = lean_ctor_get(x_1, 0);
lean_inc(x_47);
lean_dec(x_1);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = lean_apply_2(x_48, lean_box(0), x_5);
x_50 = lean_apply_4(x_46, lean_box(0), lean_box(0), x_49, x_12);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_51 = lean_ctor_get(x_8, 0);
x_52 = lean_ctor_get(x_8, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_8);
lean_inc(x_3);
lean_inc(x_1);
x_53 = lean_alloc_closure((void*)(l_Lean_Elab_expandDeclId___rarg___lambda__3), 8, 7);
lean_closure_set(x_53, 0, x_1);
lean_closure_set(x_53, 1, x_3);
lean_closure_set(x_53, 2, x_2);
lean_closure_set(x_53, 3, x_4);
lean_closure_set(x_53, 4, x_7);
lean_closure_set(x_53, 5, x_51);
lean_closure_set(x_53, 6, x_6);
x_54 = l_Lean_Syntax_isNone(x_52);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; lean_object* x_65; lean_object* x_66; 
x_55 = lean_unsigned_to_nat(1u);
x_56 = l_Lean_Syntax_getArg(x_52, x_55);
lean_dec(x_52);
x_57 = l_Lean_Syntax_getArgs(x_56);
lean_dec(x_56);
x_58 = lean_unsigned_to_nat(0u);
x_59 = lean_mk_empty_array_with_capacity(x_58);
x_60 = 1;
x_61 = lean_box(x_60);
lean_inc(x_59);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_59);
x_63 = lean_array_get_size(x_57);
x_64 = lean_nat_dec_lt(x_58, x_63);
x_65 = lean_ctor_get(x_1, 1);
lean_inc(x_65);
if (x_64 == 0)
{
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_57);
x_66 = x_59;
goto block_82;
}
else
{
uint8_t x_83; 
x_83 = lean_nat_dec_le(x_63, x_63);
if (x_83 == 0)
{
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_57);
x_66 = x_59;
goto block_82;
}
else
{
size_t x_84; size_t x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_59);
x_84 = 0;
x_85 = lean_usize_of_nat(x_63);
lean_dec(x_63);
x_86 = l_Array_foldlMUnsafe_fold___at_Lean_Syntax_SepArray_getElems___spec__1(x_57, x_84, x_85, x_62);
lean_dec(x_57);
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
lean_dec(x_86);
x_66 = x_87;
goto block_82;
}
}
block_82:
{
lean_object* x_67; uint8_t x_68; 
x_67 = lean_array_get_size(x_66);
x_68 = lean_nat_dec_lt(x_58, x_67);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_3);
x_69 = lean_ctor_get(x_1, 0);
lean_inc(x_69);
lean_dec(x_1);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = lean_apply_2(x_70, lean_box(0), x_5);
x_72 = lean_apply_4(x_65, lean_box(0), lean_box(0), x_71, x_53);
return x_72;
}
else
{
uint8_t x_73; 
x_73 = lean_nat_dec_le(x_67, x_67);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_3);
x_74 = lean_ctor_get(x_1, 0);
lean_inc(x_74);
lean_dec(x_1);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_76 = lean_apply_2(x_75, lean_box(0), x_5);
x_77 = lean_apply_4(x_65, lean_box(0), lean_box(0), x_76, x_53);
return x_77;
}
else
{
size_t x_78; size_t x_79; lean_object* x_80; lean_object* x_81; 
x_78 = 0;
x_79 = lean_usize_of_nat(x_67);
lean_dec(x_67);
lean_inc(x_65);
x_80 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_expandDeclId___spec__1___rarg(x_1, x_3, x_65, x_66, x_78, x_79, x_5);
x_81 = lean_apply_4(x_65, lean_box(0), lean_box(0), x_80, x_53);
return x_81;
}
}
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_52);
lean_dec(x_3);
x_88 = lean_ctor_get(x_1, 1);
lean_inc(x_88);
x_89 = lean_ctor_get(x_1, 0);
lean_inc(x_89);
lean_dec(x_1);
x_90 = lean_ctor_get(x_89, 1);
lean_inc(x_90);
lean_dec(x_89);
x_91 = lean_apply_2(x_90, lean_box(0), x_5);
x_92 = lean_apply_4(x_88, lean_box(0), lean_box(0), x_91, x_53);
return x_92;
}
}
}
}
lean_object* l_Lean_Elab_expandDeclId(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_expandDeclId___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_expandDeclId___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_expandDeclId___spec__1___rarg___lambda__1(x_8, x_2, x_3, x_4, x_5, x_9, x_7);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_expandDeclId___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_expandDeclId___spec__1___rarg(x_1, x_2, x_3, x_4, x_8, x_9, x_7);
return x_10;
}
}
lean_object* l_Lean_Elab_expandDeclId___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_expandDeclId___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Modifiers(lean_object*);
lean_object* initialize_Lean_DocString(lean_object*);
lean_object* initialize_Lean_Elab_Attributes(lean_object*);
lean_object* initialize_Lean_Elab_Exception(lean_object*);
lean_object* initialize_Lean_Elab_DeclUtil(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_DeclModifiers(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Modifiers(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Attributes(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Exception(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclUtil(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_instInhabitedVisibility = _init_l_Lean_Elab_instInhabitedVisibility();
l_Lean_Elab_Modifiers_docString_x3f___default = _init_l_Lean_Elab_Modifiers_docString_x3f___default();
lean_mark_persistent(l_Lean_Elab_Modifiers_docString_x3f___default);
l_Lean_Elab_Modifiers_visibility___default = _init_l_Lean_Elab_Modifiers_visibility___default();
l_Lean_Elab_Modifiers_isNoncomputable___default = _init_l_Lean_Elab_Modifiers_isNoncomputable___default();
l_Lean_Elab_Modifiers_isPartial___default = _init_l_Lean_Elab_Modifiers_isPartial___default();
l_Lean_Elab_Modifiers_isUnsafe___default = _init_l_Lean_Elab_Modifiers_isUnsafe___default();
l_Lean_Elab_Modifiers_attrs___default = _init_l_Lean_Elab_Modifiers_attrs___default();
lean_mark_persistent(l_Lean_Elab_Modifiers_attrs___default);
l_Lean_Elab_instInhabitedModifiers = _init_l_Lean_Elab_instInhabitedModifiers();
lean_mark_persistent(l_Lean_Elab_instInhabitedModifiers);
l_Lean_Elab_instToStringModifiers = _init_l_Lean_Elab_instToStringModifiers();
lean_mark_persistent(l_Lean_Elab_instToStringModifiers);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
