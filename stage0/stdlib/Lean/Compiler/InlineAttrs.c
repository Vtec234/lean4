// Lean compiler output
// Module: Lean.Compiler.InlineAttrs
// Imports: Init Lean.Attributes Lean.Compiler.Util
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
lean_object* l_Lean_registerEnumAttributes___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_instInhabitedInlineAttributeKind;
size_t l_USize_add(size_t, size_t);
lean_object* l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux_match__1(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Compiler_instBEqInlineAttributeKind;
lean_object* l_Lean_registerEnumAttributes___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
uint8_t lean_has_noinline_attribute(lean_object*, lean_object*);
lean_object* l_Lean_EnumAttributes_getValue___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_registerEnumAttributes___spec__10(lean_object*, lean_object*);
uint8_t l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_beqInlineAttributeKind____x40_Lean_Compiler_InlineAttrs___hyg_11_(uint8_t, uint8_t);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Monad_seqRight___default___rarg___lambda__1___boxed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Std_RBNode_fold___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__3(lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_registerTagAttribute___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___at_Lean_registerTagAttribute___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_qsort_sort___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerEnumAttributes___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__2___lambda__2(lean_object*);
lean_object* l_Lean_registerEnumAttributes___rarg___lambda__3___boxed(lean_object*);
lean_object* l_Lean_Compiler_hasMacroInlineAttribute___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_beqInlineAttributeKind____x40_Lean_Compiler_InlineAttrs___hyg_11__match__1___rarg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_has_macro_inline_attribute(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_is_eager_lambda_lifting_name(lean_object*);
lean_object* l_Lean_Compiler_inlineAttrs;
lean_object* l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerEnumAttributes___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__2___lambda__2___boxed(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l___private_Lean_Attributes_0__Lean_beqAttributeKind____x40_Lean_Attributes___hyg_139_(uint8_t, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_swap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__2___boxed(lean_object*);
lean_object* l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_hasInlineAttribute___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isInternal(lean_object*);
lean_object* l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ofExcept___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickCmp(lean_object*, lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_hasInlineIfReduceAttribute___boxed(lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_beqInlineAttributeKind____x40_Lean_Compiler_InlineAttrs___hyg_11__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTagAttribute___lambda__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__3___boxed(lean_object*);
lean_object* l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_persistentEnvExtensionsRef;
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__6(lean_object*, lean_object*);
lean_object* l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_EnumAttributes_getValue___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_AttributeImpl_erase___default___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Array_binSearchAux___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_checkIsDefinition(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____lambda__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__2___boxed(lean_object*, lean_object*);
uint8_t lean_has_inline_attribute(lean_object*, lean_object*);
lean_object* l_Array_qpartition_loop___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_beqInlineAttributeKind____x40_Lean_Compiler_InlineAttrs___hyg_11____boxed(lean_object*, lean_object*);
lean_object* l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1(lean_object*);
lean_object* l_Std_RBNode_fold___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__3___boxed(lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_hasNoInlineAttribute___boxed(lean_object*, lean_object*);
uint8_t l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Compiler_setInlineAttribute___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_beqInlineAttributeKind____x40_Lean_Compiler_InlineAttrs___hyg_11__match__1(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_Lean_ofExcept___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__7(lean_object*, lean_object*, size_t, size_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
uint8_t lean_has_inline_if_reduce_attribute(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___rarg(lean_object*, lean_object*);
lean_object* l_Lean_EnumAttributes_setValue___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerEnumAttributes___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__2___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Attribute_Builtin_ensureNoArgs(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_qpartition_loop___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_setInlineAttribute(lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_pure___rarg(lean_object*, lean_object*);
lean_object* l_Lean_registerEnumAttributes___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59_(lean_object*);
lean_object* l_Array_qsort_sort___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static uint8_t _init_l_Lean_Compiler_instInhabitedInlineAttributeKind() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
lean_object* l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_beqInlineAttributeKind____x40_Lean_Compiler_InlineAttrs___hyg_11__match__1___rarg(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_8 = lean_box(x_2);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_3);
x_11 = lean_box(x_1);
x_12 = lean_box(x_2);
x_13 = lean_apply_2(x_7, x_11, x_12);
return x_13;
}
}
case 1:
{
lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_14 = lean_box(x_2);
if (lean_obj_tag(x_14) == 1)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_7);
x_15 = lean_box(0);
x_16 = lean_apply_1(x_4, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_14);
lean_dec(x_4);
x_17 = lean_box(x_1);
x_18 = lean_box(x_2);
x_19 = lean_apply_2(x_7, x_17, x_18);
return x_19;
}
}
case 2:
{
lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_20 = lean_box(x_2);
if (lean_obj_tag(x_20) == 2)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_7);
x_21 = lean_box(0);
x_22 = lean_apply_1(x_5, x_21);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_5);
x_23 = lean_box(x_1);
x_24 = lean_box(x_2);
x_25 = lean_apply_2(x_7, x_23, x_24);
return x_25;
}
}
default: 
{
lean_object* x_26; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_26 = lean_box(x_2);
if (lean_obj_tag(x_26) == 3)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_7);
x_27 = lean_box(0);
x_28 = lean_apply_1(x_6, x_27);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_26);
lean_dec(x_6);
x_29 = lean_box(x_1);
x_30 = lean_box(x_2);
x_31 = lean_apply_2(x_7, x_29, x_30);
return x_31;
}
}
}
}
}
lean_object* l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_beqInlineAttributeKind____x40_Lean_Compiler_InlineAttrs___hyg_11__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_beqInlineAttributeKind____x40_Lean_Compiler_InlineAttrs___hyg_11__match__1___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_beqInlineAttributeKind____x40_Lean_Compiler_InlineAttrs___hyg_11__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_beqInlineAttributeKind____x40_Lean_Compiler_InlineAttrs___hyg_11__match__1___rarg(x_8, x_9, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
uint8_t l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_beqInlineAttributeKind____x40_Lean_Compiler_InlineAttrs___hyg_11_(uint8_t x_1, uint8_t x_2) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_3; 
x_3 = lean_box(x_2);
if (lean_obj_tag(x_3) == 0)
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
case 1:
{
lean_object* x_6; 
x_6 = lean_box(x_2);
if (lean_obj_tag(x_6) == 1)
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_6);
x_8 = 0;
return x_8;
}
}
case 2:
{
lean_object* x_9; 
x_9 = lean_box(x_2);
if (lean_obj_tag(x_9) == 2)
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
else
{
uint8_t x_11; 
lean_dec(x_9);
x_11 = 0;
return x_11;
}
}
default: 
{
lean_object* x_12; 
x_12 = lean_box(x_2);
if (lean_obj_tag(x_12) == 3)
{
uint8_t x_13; 
x_13 = 1;
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_12);
x_14 = 0;
return x_14;
}
}
}
}
}
lean_object* l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_beqInlineAttributeKind____x40_Lean_Compiler_InlineAttrs___hyg_11____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_beqInlineAttributeKind____x40_Lean_Compiler_InlineAttrs___hyg_11_(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Compiler_instBEqInlineAttributeKind() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_beqInlineAttributeKind____x40_Lean_Compiler_InlineAttrs___hyg_11____boxed), 2, 0);
return x_1;
}
}
lean_object* l_Lean_ofExcept___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = l_Lean_throwError___at_Lean_AttributeImpl_erase___default___spec__1(x_7, x_2, x_3, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
}
}
lean_object* l_Std_RBNode_fold___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_ctor_get(x_2, 3);
x_7 = l_Std_RBNode_fold___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__3(x_1, x_3);
lean_inc(x_5);
lean_inc(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_5);
x_9 = lean_array_push(x_7, x_8);
x_1 = x_9;
x_2 = x_6;
goto _start;
}
}
}
lean_object* l_Array_qpartition_loop___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = l_Lean_instInhabitedName;
x_8 = l_Lean_Compiler_instInhabitedInlineAttributeKind;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_nat_dec_lt(x_6, x_2);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_12 = lean_array_swap(x_4, x_5, x_2);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_array_get(x_10, x_4, x_6);
lean_inc(x_1);
lean_inc(x_3);
x_15 = lean_apply_2(x_1, x_14, x_3);
x_16 = lean_unbox(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_6, x_17);
lean_dec(x_6);
x_6 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_array_swap(x_4, x_5, x_6);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_5, x_21);
lean_dec(x_5);
x_23 = lean_nat_add(x_6, x_21);
lean_dec(x_6);
x_4 = x_20;
x_5 = x_22;
x_6 = x_23;
goto _start;
}
}
}
}
lean_object* l_Array_qsort_sort___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_17; 
x_4 = l_Lean_instInhabitedName;
x_5 = l_Lean_Compiler_instInhabitedInlineAttributeKind;
x_6 = lean_box(x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
x_17 = lean_nat_dec_lt(x_2, x_3);
if (x_17 == 0)
{
lean_dec(x_7);
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_18 = lean_nat_add(x_2, x_3);
x_19 = lean_unsigned_to_nat(2u);
x_20 = lean_nat_div(x_18, x_19);
lean_dec(x_18);
lean_inc(x_7);
x_49 = lean_array_get(x_7, x_1, x_20);
lean_inc(x_7);
x_50 = lean_array_get(x_7, x_1, x_2);
x_51 = lean_ctor_get(x_49, 0);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_ctor_get(x_50, 0);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Lean_Name_quickLt(x_51, x_52);
lean_dec(x_52);
lean_dec(x_51);
if (x_53 == 0)
{
x_21 = x_1;
goto block_48;
}
else
{
lean_object* x_54; 
x_54 = lean_array_swap(x_1, x_2, x_20);
x_21 = x_54;
goto block_48;
}
block_48:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_inc(x_7);
x_22 = lean_array_get(x_7, x_21, x_3);
lean_inc(x_7);
x_23 = lean_array_get(x_7, x_21, x_2);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Name_quickLt(x_24, x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
lean_inc(x_7);
x_27 = lean_array_get(x_7, x_21, x_20);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_Lean_Name_quickLt(x_28, x_24);
lean_dec(x_24);
lean_dec(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_20);
lean_dec(x_7);
x_30 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___lambda__1___boxed), 2, 0);
lean_inc_n(x_2, 2);
x_31 = l_Array_qpartition_loop___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__5(x_30, x_3, x_22, x_21, x_2, x_2);
x_8 = x_31;
goto block_16;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_22);
x_32 = lean_array_swap(x_21, x_20, x_3);
lean_dec(x_20);
x_33 = lean_array_get(x_7, x_32, x_3);
x_34 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___lambda__1___boxed), 2, 0);
lean_inc_n(x_2, 2);
x_35 = l_Array_qpartition_loop___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__5(x_34, x_3, x_33, x_32, x_2, x_2);
x_8 = x_35;
goto block_16;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
lean_dec(x_24);
lean_dec(x_22);
x_36 = lean_array_swap(x_21, x_2, x_3);
lean_inc(x_7);
x_37 = lean_array_get(x_7, x_36, x_20);
lean_inc(x_7);
x_38 = lean_array_get(x_7, x_36, x_3);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
x_41 = l_Lean_Name_quickLt(x_39, x_40);
lean_dec(x_40);
lean_dec(x_39);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_20);
lean_dec(x_7);
x_42 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___lambda__1___boxed), 2, 0);
lean_inc_n(x_2, 2);
x_43 = l_Array_qpartition_loop___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__5(x_42, x_3, x_38, x_36, x_2, x_2);
x_8 = x_43;
goto block_16;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_38);
x_44 = lean_array_swap(x_36, x_20, x_3);
lean_dec(x_20);
x_45 = lean_array_get(x_7, x_44, x_3);
x_46 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___lambda__1___boxed), 2, 0);
lean_inc_n(x_2, 2);
x_47 = l_Array_qpartition_loop___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__5(x_46, x_3, x_45, x_44, x_2, x_2);
x_8 = x_47;
goto block_16;
}
}
}
}
block_16:
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_nat_dec_le(x_3, x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = l_Array_qsort_sort___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__4(x_10, x_2, x_9);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_9, x_13);
lean_dec(x_9);
x_1 = x_12;
x_2 = x_14;
goto _start;
}
else
{
lean_dec(x_9);
lean_dec(x_2);
return x_10;
}
}
}
}
uint8_t l_Array_anyMUnsafe_any___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__7(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 == x_4;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_name_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
size_t x_10; size_t x_11; 
x_10 = 1;
x_11 = x_3 + x_10;
x_3 = x_11;
goto _start;
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
x_14 = 0;
return x_14;
}
}
}
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_persistentEnvExtensionsRef;
x_4 = lean_st_ref_get(x_3, x_2);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_array_get_size(x_6);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_free_object(x_4);
lean_dec(x_6);
x_11 = lean_box(0);
x_12 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_11, x_7);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = lean_nat_dec_le(x_8, x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
lean_free_object(x_4);
lean_dec(x_6);
x_14 = lean_box(0);
x_15 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_14, x_7);
return x_15;
}
else
{
size_t x_16; size_t x_17; uint8_t x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_18 = l_Array_anyMUnsafe_any___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__7(x_1, x_6, x_16, x_17);
lean_dec(x_6);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_free_object(x_4);
x_19 = lean_box(0);
x_20 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_19, x_7);
return x_20;
}
else
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
lean_dec(x_1);
x_22 = 1;
x_23 = l_Lean_Name_toString(x_21, x_22);
x_24 = lean_mk_string("invalid environment extension, '");
x_25 = lean_string_append(x_24, x_23);
lean_dec(x_23);
x_26 = lean_mk_string("' has already been used");
x_27 = lean_string_append(x_25, x_26);
lean_dec(x_26);
x_28 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_28);
return x_4;
}
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_4, 0);
x_30 = lean_ctor_get(x_4, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_4);
x_31 = lean_array_get_size(x_29);
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_nat_dec_lt(x_32, x_31);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_31);
lean_dec(x_29);
x_34 = lean_box(0);
x_35 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_34, x_30);
return x_35;
}
else
{
uint8_t x_36; 
x_36 = lean_nat_dec_le(x_31, x_31);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_31);
lean_dec(x_29);
x_37 = lean_box(0);
x_38 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_37, x_30);
return x_38;
}
else
{
size_t x_39; size_t x_40; uint8_t x_41; 
x_39 = 0;
x_40 = lean_usize_of_nat(x_31);
lean_dec(x_31);
x_41 = l_Array_anyMUnsafe_any___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__7(x_1, x_29, x_39, x_40);
lean_dec(x_29);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_box(0);
x_43 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_42, x_30);
return x_43;
}
else
{
lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
lean_dec(x_1);
x_45 = 1;
x_46 = l_Lean_Name_toString(x_44, x_45);
x_47 = lean_mk_string("invalid environment extension, '");
x_48 = lean_string_append(x_47, x_46);
lean_dec(x_46);
x_49 = lean_mk_string("' has already been used");
x_50 = lean_string_append(x_48, x_49);
lean_dec(x_49);
x_51 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_30);
return x_52;
}
}
}
}
}
}
lean_object* l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(x_3);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
x_11 = lean_apply_5(x_1, x_2, x_10, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_box(x_3);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_4, x_5, x_14);
x_16 = l_Lean_setEnv___at_Lean_registerTagAttribute___spec__4(x_15, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_11);
if (x_17 == 0)
{
return x_11;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_11, 0);
x_19 = lean_ctor_get(x_11, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_11);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__2(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_Environment_getModuleIdxFor_x3f(x_13, x_2);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_5);
x_15 = lean_box(0);
x_16 = l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__1(x_1, x_2, x_3, x_4, x_13, x_15, x_7, x_8, x_12);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_mk_string("invalid attribute '");
x_18 = l_Lean_stringToMessageData(x_17);
lean_dec(x_17);
x_19 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_19, 0, x_5);
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_mk_string("', declaration is in an imported module");
x_22 = l_Lean_stringToMessageData(x_21);
lean_dec(x_21);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Lean_throwError___at_Lean_registerTagAttribute___spec__5(x_23, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
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
}
}
lean_object* l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_8);
x_11 = l_Lean_Attribute_Builtin_ensureNoArgs(x_6, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 0;
x_14 = l___private_Lean_Attributes_0__Lean_beqAttributeKind____x40_Lean_Attributes___hyg_139_(x_7, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_15 = lean_mk_string("invalid attribute '");
x_16 = l_Lean_stringToMessageData(x_15);
lean_dec(x_15);
x_17 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_17, 0, x_4);
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_mk_string("', must be global");
x_20 = l_Lean_stringToMessageData(x_19);
lean_dec(x_19);
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_throwError___at_Lean_registerTagAttribute___spec__5(x_21, x_8, x_9, x_12);
lean_dec(x_9);
lean_dec(x_8);
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
lean_object* x_27; lean_object* x_28; 
x_27 = lean_box(0);
x_28 = l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__2(x_1, x_5, x_2, x_3, x_4, x_27, x_8, x_9, x_12);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
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
lean_object* l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_3);
lean_inc(x_1);
x_9 = l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8(x_1, x_2, x_3, x_8);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
lean_inc(x_11);
x_14 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_12);
lean_ctor_set_uint8(x_14, sizeof(void*)*2, x_2);
x_15 = lean_alloc_closure((void*)(l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__3___boxed), 10, 4);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_13);
lean_closure_set(x_15, 2, x_3);
lean_closure_set(x_15, 3, x_11);
x_16 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__7___boxed), 4, 0);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_17, 2, x_16);
lean_ctor_set(x_4, 1, x_9);
lean_ctor_set(x_4, 0, x_17);
return x_4;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_20 = l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8(x_1, x_2, x_3, x_19);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_18, 0);
lean_inc(x_22);
lean_dec(x_18);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
lean_inc(x_22);
x_25 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set_uint8(x_25, sizeof(void*)*2, x_2);
x_26 = lean_alloc_closure((void*)(l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__3___boxed), 10, 4);
lean_closure_set(x_26, 0, x_1);
lean_closure_set(x_26, 1, x_24);
lean_closure_set(x_26, 2, x_3);
lean_closure_set(x_26, 3, x_22);
x_27 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__7___boxed), 4, 0);
x_28 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_26);
lean_ctor_set(x_28, 2, x_27);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_20);
return x_29;
}
}
}
}
lean_object* l_Lean_registerEnumAttributes___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__2___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_1, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_registerEnumAttributes___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__2___lambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_mk_empty_array_with_capacity(x_2);
x_4 = l_Std_RBNode_fold___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__3(x_3, x_1);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_5, x_6);
lean_dec(x_5);
x_8 = l_Array_qsort_sort___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__4(x_4, x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_registerEnumAttributes___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_box(0);
x_7 = lean_alloc_closure((void*)(l_EStateM_pure___rarg), 2, 1);
lean_closure_set(x_7, 0, x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_registerEnumAttributes___rarg___lambda__1___boxed), 4, 1);
lean_closure_set(x_8, 0, x_6);
x_9 = lean_alloc_closure((void*)(l_Lean_registerEnumAttributes___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__2___lambda__1), 2, 0);
x_10 = lean_alloc_closure((void*)(l_Lean_registerEnumAttributes___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__2___lambda__2___boxed), 1, 0);
x_11 = lean_alloc_closure((void*)(l_Lean_registerEnumAttributes___rarg___lambda__3___boxed), 1, 0);
x_12 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_7);
lean_ctor_set(x_12, 2, x_8);
lean_ctor_set(x_12, 3, x_9);
lean_ctor_set(x_12, 4, x_10);
lean_ctor_set(x_12, 5, x_11);
x_13 = l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__6(x_12, x_5);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_14);
x_16 = l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8(x_3, x_4, x_14, x_2);
lean_inc(x_16);
x_17 = l_List_forM___at_Lean_registerEnumAttributes___spec__10(x_16, x_15);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_16);
lean_ctor_set(x_20, 1, x_14);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_14);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_16);
lean_dec(x_14);
x_24 = !lean_is_exclusive(x_17);
if (x_24 == 0)
{
return x_17;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_17, 0);
x_26 = lean_ctor_get(x_17, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_17);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_3);
lean_dec(x_2);
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
}
lean_object* l_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_st_ref_get(x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_Compiler_checkIsDefinition(x_9, x_1);
x_11 = l_Lean_ofExcept___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__1(x_10, x_3, x_4, x_8);
lean_dec(x_10);
return x_11;
}
}
lean_object* l_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; 
x_2 = lean_box(0);
x_3 = lean_mk_string("inlineAttrs");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("inline");
x_6 = lean_name_mk_string(x_2, x_5);
x_7 = lean_mk_string("mark definition to always be inlined");
x_8 = 0;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_mk_string("inlineIfReduce");
x_13 = lean_name_mk_string(x_2, x_12);
x_14 = lean_mk_string("mark definition to be inlined when resultant term after reduction is not a `cases_on` application");
x_15 = 3;
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_mk_string("noinline");
x_20 = lean_name_mk_string(x_2, x_19);
x_21 = lean_mk_string("mark definition to never be inlined");
x_22 = 1;
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_mk_string("macroInline");
x_27 = lean_name_mk_string(x_2, x_26);
x_28 = lean_mk_string("mark definition to always be inlined before ANF conversion");
x_29 = 2;
x_30 = lean_box(x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_25);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_18);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_11);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_closure((void*)(l_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____lambda__1___boxed), 5, 0);
x_39 = 0;
x_40 = l_Lean_registerEnumAttributes___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__2(x_4, x_37, x_38, x_39, x_1);
return x_40;
}
}
lean_object* l_Lean_ofExcept___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_ofExcept___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Std_RBNode_fold___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_fold___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Array_qpartition_loop___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_qpartition_loop___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__5(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Array_qsort_sort___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_qsort_sort___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__4(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__7(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_3);
lean_dec(x_3);
x_11 = l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__1(x_1, x_2, x_10, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
return x_11;
}
}
lean_object* l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_3);
lean_dec(x_3);
x_11 = l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__2(x_1, x_2, x_10, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
return x_11;
}
}
lean_object* l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = lean_unbox(x_7);
lean_dec(x_7);
x_13 = l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___lambda__3(x_1, x_11, x_3, x_4, x_5, x_6, x_12, x_8, x_9, x_10);
return x_13;
}
}
lean_object* l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l_List_map___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__8(x_1, x_5, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_registerEnumAttributes___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__2___lambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_registerEnumAttributes___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__2___lambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_registerEnumAttributes___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_registerEnumAttributes___at_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____spec__2(x_1, x_2, x_3, x_6, x_5);
return x_7;
}
}
lean_object* l_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = l_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59____lambda__1(x_1, x_6, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
lean_object* l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_find___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__2(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Array_binSearchAux___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = l_Lean_instInhabitedName;
x_6 = l_Lean_Compiler_instInhabitedInlineAttributeKind;
x_7 = lean_box(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_nat_dec_le(x_3, x_4);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_11 = lean_nat_add(x_3, x_4);
x_12 = lean_unsigned_to_nat(2u);
x_13 = lean_nat_div(x_11, x_12);
lean_dec(x_11);
x_14 = lean_array_get(x_8, x_1, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 0);
x_17 = l_Lean_Name_quickLt(x_15, x_16);
if (x_17 == 0)
{
uint8_t x_18; 
lean_dec(x_4);
x_18 = l_Lean_Name_quickLt(x_16, x_15);
lean_dec(x_15);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_13);
lean_dec(x_3);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_14);
return x_19;
}
else
{
lean_object* x_20; uint8_t x_21; 
lean_dec(x_14);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_nat_dec_eq(x_13, x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_sub(x_13, x_22);
lean_dec(x_13);
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_25; 
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_box(0);
return x_25;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_3);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_13, x_26);
lean_dec(x_13);
x_3 = x_27;
goto _start;
}
}
}
}
lean_object* l_Lean_EnumAttributes_getValue___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Environment_getModuleIdxFor_x3f(x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_PersistentEnvExtension_getState___rarg(x_5, x_2);
x_7 = l_Std_RBNode_find___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__2(x_6, x_3);
lean_dec(x_3);
lean_dec(x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_ctor_get(x_1, 1);
x_10 = l_Lean_PersistentEnvExtension_getModuleEntries___rarg(x_9, x_2, x_8);
lean_dec(x_8);
x_11 = 0;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_array_get_size(x_10);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_14, x_15);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_nat_dec_lt(x_17, x_14);
lean_dec(x_14);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_10);
x_19 = lean_box(0);
return x_19;
}
else
{
lean_object* x_20; 
x_20 = l_Array_binSearchAux___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__3(x_10, x_13, x_17, x_16);
lean_dec(x_13);
lean_dec(x_10);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_box(0);
return x_21;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 0);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
lean_ctor_set(x_20, 0, x_24);
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_20, 0);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
return x_27;
}
}
}
}
}
}
uint8_t l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
lean_inc(x_3);
x_4 = lean_is_eager_lambda_lifting_name(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Compiler_inlineAttrs;
lean_inc(x_3);
x_6 = l_Lean_EnumAttributes_getValue___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__1(x_5, x_1, x_3);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = l_Lean_Name_isInternal(x_3);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_3);
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; 
x_9 = l_Lean_Name_getPrefix(x_3);
lean_dec(x_3);
x_3 = x_9;
goto _start;
}
}
else
{
lean_object* x_11; uint8_t x_12; uint8_t x_13; 
lean_dec(x_3);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
x_13 = l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_beqInlineAttributeKind____x40_Lean_Compiler_InlineAttrs___hyg_11_(x_2, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
lean_dec(x_3);
x_14 = 0;
return x_14;
}
}
}
lean_object* l_Std_RBNode_find___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_binSearchAux___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_EnumAttributes_getValue___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_EnumAttributes_getValue___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux(x_1, x_4, x_3);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
uint8_t lean_has_inline_attribute(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = 0;
x_4 = l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux(x_1, x_3, x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Compiler_hasInlineAttribute___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_has_inline_attribute(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t lean_has_inline_if_reduce_attribute(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = 3;
x_4 = l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux(x_1, x_3, x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Compiler_hasInlineIfReduceAttribute___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_has_inline_if_reduce_attribute(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t lean_has_noinline_attribute(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = 1;
x_4 = l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux(x_1, x_3, x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Compiler_hasNoInlineAttribute___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_has_noinline_attribute(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t lean_has_macro_inline_attribute(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; 
x_3 = 2;
x_4 = l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux(x_1, x_3, x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Compiler_hasMacroInlineAttribute___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_has_macro_inline_attribute(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Compiler_setInlineAttribute(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_Lean_Compiler_inlineAttrs;
x_5 = lean_box(x_3);
x_6 = l_Lean_EnumAttributes_setValue___rarg(x_4, x_1, x_2, x_5);
return x_6;
}
}
lean_object* l_Lean_Compiler_setInlineAttribute___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_Compiler_setInlineAttribute(x_1, x_2, x_4);
return x_5;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Attributes(lean_object*);
lean_object* initialize_Lean_Compiler_Util(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Compiler_InlineAttrs(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Attributes(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Util(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_instInhabitedInlineAttributeKind = _init_l_Lean_Compiler_instInhabitedInlineAttributeKind();
l_Lean_Compiler_instBEqInlineAttributeKind = _init_l_Lean_Compiler_instBEqInlineAttributeKind();
lean_mark_persistent(l_Lean_Compiler_instBEqInlineAttributeKind);
res = l_Lean_Compiler_initFn____x40_Lean_Compiler_InlineAttrs___hyg_59_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_inlineAttrs = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_inlineAttrs);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
