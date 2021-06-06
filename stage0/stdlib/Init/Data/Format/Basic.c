// Lean compiler output
// Module: Init.Data.Format.Basic
// Imports: Init.Control.State Init.Data.Int.Basic Init.Data.String.Basic
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
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__3(lean_object*);
lean_object* l_Std_Format_join(lean_object*);
uint8_t l___private_Init_Data_Format_Basic_0__Std_Format_SpaceResult_foundFlattenedHardLine___default;
lean_object* l_Std_instToFormatFormat(lean_object*);
lean_object* l_Std_Format_indentD(lean_object*);
lean_object* l_Std_Format_joinSuffix(lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_defWidth;
uint8_t l___private_Init_Data_Format_Basic_0__Std_Format_SpaceResult_foundLine___default;
lean_object* l_String_offsetOfPosAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_join___boxed(lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_beqFlattenBehavior____x40_Init_Data_Format_Basic___hyg_14____boxed(lean_object*, lean_object*);
lean_object* l_Std_Format_instBEqFlattenBehavior;
lean_object* l_Std_Format_paren(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Std_Format_prefixJoin_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_pretty_match__1(lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_beqFlattenBehavior____x40_Init_Data_Format_Basic___hyg_14__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_match__1(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Std_Format_joinSuffix_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_bracketFill(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_Format_instAppendFormat(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline(lean_object*, lean_object*);
lean_object* l_Std_Format_joinSep_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* l_Std_Format_sbracket(lean_object*);
lean_object* l_Std_Format_joinSuffix___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_joinSep_match__1(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_SpaceResult_space___default;
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27_match__1(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_instToFormatString(lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_State_out___default;
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l___private_Init_Data_Format_Basic_0__Std_Format_beqFlattenBehavior____x40_Init_Data_Format_Basic___hyg_14_(uint8_t, uint8_t);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__2___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_instToFormatFormat___boxed(lean_object*);
lean_object* l_Std_Format_joinSep(lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_format_pretty(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_isNil___boxed(lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine(lean_object*, uint8_t, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_beqFlattenBehavior____x40_Init_Data_Format_Basic___hyg_14__match__1(lean_object*);
lean_object* l_Std_Format_prefixJoin(lean_object*);
lean_object* l_Std_Format_joinSuffix_match__1(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_merge___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__2(lean_object*);
lean_object* l_Std_Format_instInhabitedSpaceResult;
lean_object* l_Std_Format_joinSep___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
uint8_t l_Std_Format_defUnicode;
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___rarg(lean_object*, lean_object*);
lean_object* lean_format_group(lean_object*);
uint8_t l_Std_Format_instInhabitedFlattenBehavior;
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_match__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_prefixJoin___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_String_posOfAux(lean_object*, uint32_t, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__1(lean_object*);
lean_object* l_Std_Format_isNil_match__1(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Nat_repeat_loop___at_String_pushn___spec__1(uint32_t, lean_object*, lean_object*);
lean_object* lean_format_append(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_merge(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_State_column___default;
lean_object* l_Std_Format_defIndent;
lean_object* l_Std_Format_instCoeStringFormat(lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_beqFlattenBehavior____x40_Init_Data_Format_Basic___hyg_14__match__1___rarg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Std_Format_join___spec__1(lean_object*, lean_object*);
lean_object* l_Std_Format_prefixJoin_match__1(lean_object*, lean_object*);
lean_object* l_Std_instInhabitedFormat;
lean_object* l_Std_Format_isNil_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput___boxed(lean_object*, lean_object*);
lean_object* l_Std_fmt(lean_object*);
lean_object* l_Std_Format_pretty_match__1___rarg(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__4(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_bracket(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Std_Format_join___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t l_Std_Format_isNil(lean_object*);
lean_object* l_Std_Format_nestD(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static uint8_t _init_l_Std_Format_instInhabitedFlattenBehavior() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_beqFlattenBehavior____x40_Init_Data_Format_Basic___hyg_14__match__1___rarg(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (x_1 == 0)
{
lean_dec(x_4);
if (x_2 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_8 = lean_box(x_1);
x_9 = lean_box(x_2);
x_10 = lean_apply_2(x_5, x_8, x_9);
return x_10;
}
}
else
{
lean_dec(x_3);
if (x_2 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
x_11 = lean_box(x_1);
x_12 = lean_box(x_2);
x_13 = lean_apply_2(x_5, x_11, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
x_14 = lean_box(0);
x_15 = lean_apply_1(x_4, x_14);
return x_15;
}
}
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_beqFlattenBehavior____x40_Init_Data_Format_Basic___hyg_14__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_beqFlattenBehavior____x40_Init_Data_Format_Basic___hyg_14__match__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_beqFlattenBehavior____x40_Init_Data_Format_Basic___hyg_14__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; uint8_t x_7; lean_object* x_8; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = lean_unbox(x_2);
lean_dec(x_2);
x_8 = l___private_Init_Data_Format_Basic_0__Std_Format_beqFlattenBehavior____x40_Init_Data_Format_Basic___hyg_14__match__1___rarg(x_6, x_7, x_3, x_4, x_5);
return x_8;
}
}
uint8_t l___private_Init_Data_Format_Basic_0__Std_Format_beqFlattenBehavior____x40_Init_Data_Format_Basic___hyg_14_(uint8_t x_1, uint8_t x_2) {
_start:
{
if (x_1 == 0)
{
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
else
{
if (x_2 == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
}
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_beqFlattenBehavior____x40_Init_Data_Format_Basic___hyg_14____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l___private_Init_Data_Format_Basic_0__Std_Format_beqFlattenBehavior____x40_Init_Data_Format_Basic___hyg_14_(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
static lean_object* _init_l_Std_Format_instBEqFlattenBehavior() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_beqFlattenBehavior____x40_Init_Data_Format_Basic___hyg_14____boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Std_instInhabitedFormat() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_Std_Format_fill(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = 1;
x_3 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
lean_object* lean_format_append(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* lean_format_group(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = 0;
x_3 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
lean_object* l_Std_Format_instAppendFormat(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Std_Format_instCoeStringFormat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_List_foldl___at_Std_Format_join___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
x_5 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_3);
x_1 = x_5;
x_2 = x_4;
goto _start;
}
}
}
lean_object* l_Std_Format_join(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_mk_string("");
x_3 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_3, 0, x_2);
x_4 = l_List_foldl___at_Std_Format_join___spec__1(x_3, x_1);
return x_4;
}
}
lean_object* l_List_foldl___at_Std_Format_join___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___at_Std_Format_join___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_Format_join___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_Format_join(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Std_Format_isNil_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Std_Format_isNil_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_Format_isNil_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Std_Format_isNil(lean_object* x_1) {
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
lean_object* l_Std_Format_isNil___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Std_Format_isNil(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static uint8_t _init_l___private_Init_Data_Format_Basic_0__Std_Format_SpaceResult_foundLine___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l___private_Init_Data_Format_Basic_0__Std_Format_SpaceResult_foundFlattenedHardLine___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static lean_object* _init_l___private_Init_Data_Format_Basic_0__Std_Format_SpaceResult_space___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
static lean_object* _init_l_Std_Format_instInhabitedSpaceResult() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; 
x_1 = 0;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1 + 1, x_1);
return x_3;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_merge(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_nat_dec_lt(x_1, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_nat_sub(x_1, x_4);
x_8 = lean_apply_1(x_3, x_7);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_nat_add(x_4, x_10);
lean_dec(x_10);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get_uint8(x_8, sizeof(void*)*1);
x_13 = lean_ctor_get_uint8(x_8, sizeof(void*)*1 + 1);
x_14 = lean_ctor_get(x_8, 0);
lean_inc(x_14);
lean_dec(x_8);
x_15 = lean_nat_add(x_4, x_14);
lean_dec(x_14);
x_16 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set_uint8(x_16, sizeof(void*)*1, x_12);
lean_ctor_set_uint8(x_16, sizeof(void*)*1 + 1, x_13);
return x_16;
}
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
else
{
lean_dec(x_3);
lean_inc(x_2);
return x_2;
}
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_merge___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_Format_Basic_0__Std_Format_merge(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_match__1___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_10 = lean_box(x_2);
x_11 = lean_apply_2(x_4, x_10, x_3);
return x_11;
}
case 1:
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_12 = lean_box(x_2);
x_13 = lean_apply_2(x_5, x_12, x_3);
return x_13;
}
case 2:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_box(x_2);
x_16 = lean_apply_3(x_6, x_14, x_15, x_3);
return x_16;
}
case 3:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_box(x_2);
x_20 = lean_apply_4(x_8, x_17, x_18, x_19, x_3);
return x_20;
}
case 4:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
lean_dec(x_1);
x_23 = lean_box(x_2);
x_24 = lean_apply_4(x_7, x_21, x_22, x_23, x_3);
return x_24;
}
default: 
{
lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_27 = lean_box(x_26);
x_28 = lean_box(x_2);
x_29 = lean_apply_4(x_9, x_25, x_27, x_28, x_3);
return x_29;
}
}
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_match__1___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_match__1___rarg(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_4 = 0;
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set_uint8(x_6, sizeof(void*)*1, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*1 + 1, x_4);
return x_6;
}
case 1:
{
if (x_2 == 0)
{
uint8_t x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_7 = 1;
x_8 = 0;
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set_uint8(x_10, sizeof(void*)*1, x_7);
lean_ctor_set_uint8(x_10, sizeof(void*)*1 + 1, x_8);
return x_10;
}
else
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_11 = 0;
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set_uint8(x_13, sizeof(void*)*1, x_11);
lean_ctor_set_uint8(x_13, sizeof(void*)*1 + 1, x_11);
return x_13;
}
}
case 2:
{
lean_object* x_14; uint32_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_14 = lean_ctor_get(x_1, 0);
x_15 = 10;
x_16 = lean_string_utf8_byte_size(x_14);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_String_posOfAux(x_14, x_15, x_16, x_17);
x_19 = l_String_offsetOfPosAux(x_14, x_18, x_17, x_17);
x_20 = lean_nat_dec_eq(x_18, x_16);
lean_dec(x_16);
lean_dec(x_18);
if (x_20 == 0)
{
if (x_2 == 0)
{
uint8_t x_21; uint8_t x_22; lean_object* x_23; 
x_21 = 1;
x_22 = 0;
x_23 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_23, 0, x_19);
lean_ctor_set_uint8(x_23, sizeof(void*)*1, x_21);
lean_ctor_set_uint8(x_23, sizeof(void*)*1 + 1, x_22);
return x_23;
}
else
{
uint8_t x_24; lean_object* x_25; 
x_24 = 1;
x_25 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set_uint8(x_25, sizeof(void*)*1, x_24);
lean_ctor_set_uint8(x_25, sizeof(void*)*1 + 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; lean_object* x_27; 
x_26 = 0;
x_27 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_27, 0, x_19);
lean_ctor_set_uint8(x_27, sizeof(void*)*1, x_26);
lean_ctor_set_uint8(x_27, sizeof(void*)*1 + 1, x_26);
return x_27;
}
}
case 3:
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_1, 1);
x_1 = x_28;
goto _start;
}
case 4:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_30 = lean_ctor_get(x_1, 0);
x_31 = lean_ctor_get(x_1, 1);
x_32 = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine(x_30, x_2, x_3);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_nat_dec_lt(x_3, x_33);
if (x_34 == 0)
{
uint8_t x_35; 
x_35 = lean_ctor_get_uint8(x_32, sizeof(void*)*1);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_dec(x_32);
x_36 = lean_nat_sub(x_3, x_33);
x_37 = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine(x_31, x_2, x_36);
lean_dec(x_36);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_nat_add(x_33, x_39);
lean_dec(x_39);
lean_dec(x_33);
lean_ctor_set(x_37, 0, x_40);
return x_37;
}
else
{
uint8_t x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_41 = lean_ctor_get_uint8(x_37, sizeof(void*)*1);
x_42 = lean_ctor_get_uint8(x_37, sizeof(void*)*1 + 1);
x_43 = lean_ctor_get(x_37, 0);
lean_inc(x_43);
lean_dec(x_37);
x_44 = lean_nat_add(x_33, x_43);
lean_dec(x_43);
lean_dec(x_33);
x_45 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set_uint8(x_45, sizeof(void*)*1, x_41);
lean_ctor_set_uint8(x_45, sizeof(void*)*1 + 1, x_42);
return x_45;
}
}
else
{
lean_dec(x_33);
return x_32;
}
}
else
{
lean_dec(x_33);
return x_32;
}
}
default: 
{
lean_object* x_46; uint8_t x_47; 
x_46 = lean_ctor_get(x_1, 0);
x_47 = 1;
x_1 = x_46;
x_2 = x_47;
goto _start;
}
}
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine(x_1, x_4, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; 
lean_dec(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_3, x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get_uint8(x_7, sizeof(void*)*1);
x_11 = lean_ctor_get_uint8(x_7, sizeof(void*)*1 + 1);
lean_dec(x_7);
x_12 = lean_box(x_10);
x_13 = lean_box(x_11);
x_14 = lean_apply_4(x_4, x_9, x_2, x_12, x_13);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_4);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get_uint8(x_7, sizeof(void*)*1);
x_17 = lean_ctor_get_uint8(x_7, sizeof(void*)*1 + 1);
x_18 = lean_ctor_get(x_8, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_8, 1);
lean_inc(x_19);
lean_dec(x_8);
x_20 = lean_box(x_16);
x_21 = lean_box(x_17);
x_22 = lean_apply_7(x_5, x_7, x_18, x_19, x_15, x_2, x_20, x_21);
return x_22;
}
}
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = 0;
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set_uint8(x_5, sizeof(void*)*1, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*1 + 1, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_1 = x_8;
goto _start;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_13 = lean_ctor_get(x_6, 0);
lean_dec(x_13);
x_14 = !lean_is_exclusive(x_7);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_15 = lean_ctor_get(x_7, 0);
x_16 = lean_ctor_get(x_7, 1);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine(x_17, x_12, x_2);
lean_dec(x_17);
lean_ctor_set(x_6, 0, x_16);
lean_ctor_set(x_7, 1, x_10);
lean_ctor_set(x_7, 0, x_6);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_nat_dec_lt(x_2, x_19);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = lean_ctor_get_uint8(x_18, sizeof(void*)*1);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_dec(x_18);
x_22 = lean_nat_sub(x_2, x_19);
x_23 = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(x_7, x_22);
lean_dec(x_22);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_nat_add(x_19, x_25);
lean_dec(x_25);
lean_dec(x_19);
lean_ctor_set(x_23, 0, x_26);
return x_23;
}
else
{
uint8_t x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_ctor_get_uint8(x_23, sizeof(void*)*1);
x_28 = lean_ctor_get_uint8(x_23, sizeof(void*)*1 + 1);
x_29 = lean_ctor_get(x_23, 0);
lean_inc(x_29);
lean_dec(x_23);
x_30 = lean_nat_add(x_19, x_29);
lean_dec(x_29);
lean_dec(x_19);
x_31 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set_uint8(x_31, sizeof(void*)*1, x_27);
lean_ctor_set_uint8(x_31, sizeof(void*)*1 + 1, x_28);
return x_31;
}
}
else
{
lean_dec(x_19);
lean_dec(x_7);
return x_18;
}
}
else
{
lean_dec(x_19);
lean_dec(x_7);
return x_18;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_32 = lean_ctor_get(x_7, 0);
x_33 = lean_ctor_get(x_7, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_7);
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine(x_34, x_12, x_2);
lean_dec(x_34);
lean_ctor_set(x_6, 0, x_33);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_6);
lean_ctor_set(x_36, 1, x_10);
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
x_38 = lean_nat_dec_lt(x_2, x_37);
if (x_38 == 0)
{
uint8_t x_39; 
x_39 = lean_ctor_get_uint8(x_35, sizeof(void*)*1);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_35);
x_40 = lean_nat_sub(x_2, x_37);
x_41 = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(x_36, x_40);
lean_dec(x_40);
x_42 = lean_ctor_get_uint8(x_41, sizeof(void*)*1);
x_43 = lean_ctor_get_uint8(x_41, sizeof(void*)*1 + 1);
x_44 = lean_ctor_get(x_41, 0);
lean_inc(x_44);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 x_45 = x_41;
} else {
 lean_dec_ref(x_41);
 x_45 = lean_box(0);
}
x_46 = lean_nat_add(x_37, x_44);
lean_dec(x_44);
lean_dec(x_37);
if (lean_is_scalar(x_45)) {
 x_47 = lean_alloc_ctor(0, 1, 2);
} else {
 x_47 = x_45;
}
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set_uint8(x_47, sizeof(void*)*1, x_42);
lean_ctor_set_uint8(x_47, sizeof(void*)*1 + 1, x_43);
return x_47;
}
else
{
lean_dec(x_37);
lean_dec(x_36);
return x_35;
}
}
else
{
lean_dec(x_37);
lean_dec(x_36);
return x_35;
}
}
}
else
{
uint8_t x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_48 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_49 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
lean_dec(x_6);
x_50 = lean_ctor_get(x_7, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_7, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_52 = x_7;
} else {
 lean_dec_ref(x_7);
 x_52 = lean_box(0);
}
x_53 = lean_ctor_get(x_50, 0);
lean_inc(x_53);
lean_dec(x_50);
x_54 = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine(x_53, x_48, x_2);
lean_dec(x_53);
x_55 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_55, 0, x_51);
lean_ctor_set_uint8(x_55, sizeof(void*)*1, x_48);
lean_ctor_set_uint8(x_55, sizeof(void*)*1 + 1, x_49);
if (lean_is_scalar(x_52)) {
 x_56 = lean_alloc_ctor(1, 2, 0);
} else {
 x_56 = x_52;
}
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_10);
x_57 = lean_ctor_get(x_54, 0);
lean_inc(x_57);
x_58 = lean_nat_dec_lt(x_2, x_57);
if (x_58 == 0)
{
uint8_t x_59; 
x_59 = lean_ctor_get_uint8(x_54, sizeof(void*)*1);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; uint8_t x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_54);
x_60 = lean_nat_sub(x_2, x_57);
x_61 = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(x_56, x_60);
lean_dec(x_60);
x_62 = lean_ctor_get_uint8(x_61, sizeof(void*)*1);
x_63 = lean_ctor_get_uint8(x_61, sizeof(void*)*1 + 1);
x_64 = lean_ctor_get(x_61, 0);
lean_inc(x_64);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 x_65 = x_61;
} else {
 lean_dec_ref(x_61);
 x_65 = lean_box(0);
}
x_66 = lean_nat_add(x_57, x_64);
lean_dec(x_64);
lean_dec(x_57);
if (lean_is_scalar(x_65)) {
 x_67 = lean_alloc_ctor(0, 1, 2);
} else {
 x_67 = x_65;
}
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set_uint8(x_67, sizeof(void*)*1, x_62);
lean_ctor_set_uint8(x_67, sizeof(void*)*1 + 1, x_63);
return x_67;
}
else
{
lean_dec(x_57);
lean_dec(x_56);
return x_54;
}
}
else
{
lean_dec(x_57);
lean_dec(x_56);
return x_54;
}
}
}
}
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l___private_Init_Data_Format_Basic_0__Std_Format_State_out___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
static lean_object* _init_l___private_Init_Data_Format_Basic_0__Std_Format_State_column___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = 0;
x_8 = l___private_Init_Data_Format_Basic_0__Std_Format_beqFlattenBehavior____x40_Init_Data_Format_Basic___hyg_14_(x_1, x_7);
lean_inc(x_2);
x_9 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set_uint8(x_9, sizeof(void*)*1, x_8);
lean_ctor_set_uint8(x_9, sizeof(void*)*1 + 1, x_1);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_nat_sub(x_4, x_6);
lean_dec(x_6);
x_13 = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(x_11, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_nat_dec_lt(x_12, x_14);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = lean_ctor_get_uint8(x_13, sizeof(void*)*1);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = lean_ctor_get_uint8(x_13, sizeof(void*)*1 + 1);
lean_dec(x_13);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_18 = lean_nat_sub(x_12, x_14);
lean_inc(x_3);
x_19 = l___private_Init_Data_Format_Basic_0__Std_Format_spaceUptoLine_x27(x_3, x_18);
lean_dec(x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_nat_add(x_14, x_20);
lean_dec(x_20);
lean_dec(x_14);
x_22 = lean_nat_dec_le(x_21, x_12);
lean_dec(x_12);
lean_dec(x_21);
x_23 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_23, 0, x_2);
lean_ctor_set_uint8(x_23, sizeof(void*)*1, x_22);
lean_ctor_set_uint8(x_23, sizeof(void*)*1 + 1, x_1);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_3);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_5);
return x_25;
}
else
{
uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_14);
lean_dec(x_12);
x_26 = 0;
x_27 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_27, 0, x_2);
lean_ctor_set_uint8(x_27, sizeof(void*)*1, x_26);
lean_ctor_set_uint8(x_27, sizeof(void*)*1 + 1, x_1);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_3);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_5);
return x_29;
}
}
else
{
uint8_t x_30; 
x_30 = lean_ctor_get_uint8(x_13, sizeof(void*)*1 + 1);
lean_dec(x_13);
if (x_30 == 0)
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_nat_dec_le(x_14, x_12);
lean_dec(x_12);
lean_dec(x_14);
x_32 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_32, 0, x_2);
lean_ctor_set_uint8(x_32, sizeof(void*)*1, x_31);
lean_ctor_set_uint8(x_32, sizeof(void*)*1 + 1, x_1);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_3);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_5);
return x_34;
}
else
{
uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_14);
lean_dec(x_12);
x_35 = 0;
x_36 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_36, 0, x_2);
lean_ctor_set_uint8(x_36, sizeof(void*)*1, x_35);
lean_ctor_set_uint8(x_36, sizeof(void*)*1 + 1, x_1);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_3);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_5);
return x_38;
}
}
}
else
{
uint8_t x_39; 
x_39 = lean_ctor_get_uint8(x_13, sizeof(void*)*1 + 1);
lean_dec(x_13);
if (x_39 == 0)
{
uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_nat_dec_le(x_14, x_12);
lean_dec(x_12);
lean_dec(x_14);
x_41 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_41, 0, x_2);
lean_ctor_set_uint8(x_41, sizeof(void*)*1, x_40);
lean_ctor_set_uint8(x_41, sizeof(void*)*1 + 1, x_1);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_3);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_5);
return x_43;
}
else
{
uint8_t x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_14);
lean_dec(x_12);
x_44 = 0;
x_45 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_45, 0, x_2);
lean_ctor_set_uint8(x_45, sizeof(void*)*1, x_44);
lean_ctor_set_uint8(x_45, sizeof(void*)*1 + 1, x_1);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_3);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_5);
return x_47;
}
}
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(x_6, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_7;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_string_append(x_3, x_1);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_string_length(x_1);
x_7 = lean_nat_add(x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint32_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = 32;
x_5 = lean_mk_string("\n");
lean_inc(x_1);
x_6 = l_Nat_repeat_loop___at_String_pushn___spec__1(x_4, x_1, x_5);
x_7 = lean_string_append(x_3, x_6);
lean_dec(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_1);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_7 = lean_apply_3(x_2, x_1, x_5, x_6);
return x_7;
}
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__2___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (x_1 == 0)
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
x_6 = lean_box(0);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be_match__2___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l___private_Init_Data_Format_Basic_0__Std_Format_be_match__2___rarg(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_apply_1(x_2, x_8);
return x_9;
}
case 1:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = lean_apply_1(x_6, x_10);
return x_11;
}
case 2:
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_1(x_5, x_12);
return x_13;
}
case 3:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_apply_2(x_4, x_14, x_15);
return x_16;
}
case 4:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_apply_2(x_3, x_17, x_18);
return x_19;
}
default: 
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_22 = lean_box(x_21);
x_23 = lean_apply_2(x_7, x_20, x_22);
return x_23;
}
}
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be_match__3___rarg), 7, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_4);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get_uint8(x_7, sizeof(void*)*1);
x_11 = lean_ctor_get_uint8(x_7, sizeof(void*)*1 + 1);
lean_dec(x_7);
x_12 = lean_box(x_10);
x_13 = lean_box(x_11);
x_14 = lean_apply_3(x_3, x_9, x_12, x_13);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_3);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get_uint8(x_7, sizeof(void*)*1);
x_17 = lean_ctor_get_uint8(x_7, sizeof(void*)*1 + 1);
x_18 = lean_ctor_get(x_8, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_8, 1);
lean_inc(x_19);
lean_dec(x_8);
x_20 = lean_box(x_16);
x_21 = lean_box(x_17);
x_22 = lean_apply_6(x_4, x_7, x_18, x_19, x_15, x_20, x_21);
return x_22;
}
}
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_Data_Format_Basic_0__Std_Format_be_match__4___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
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
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
lean_dec(x_6);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_2 = x_8;
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
switch (lean_obj_tag(x_11)) {
case 0:
{
lean_object* x_12; uint8_t x_13; 
lean_dec(x_10);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_6);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_6, 0);
lean_dec(x_14);
x_15 = !lean_is_exclusive(x_7);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_7, 1);
x_17 = lean_ctor_get(x_7, 0);
lean_dec(x_17);
lean_ctor_set(x_6, 0, x_16);
lean_ctor_set(x_7, 1, x_12);
lean_ctor_set(x_7, 0, x_6);
x_2 = x_7;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_7, 1);
lean_inc(x_19);
lean_dec(x_7);
lean_ctor_set(x_6, 0, x_19);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_6);
lean_ctor_set(x_20, 1, x_12);
x_2 = x_20;
goto _start;
}
}
else
{
uint8_t x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_23 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
lean_dec(x_6);
x_24 = lean_ctor_get(x_7, 1);
lean_inc(x_24);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_25 = x_7;
} else {
 lean_dec_ref(x_7);
 x_25 = lean_box(0);
}
x_26 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set_uint8(x_26, sizeof(void*)*1, x_22);
lean_ctor_set_uint8(x_26, sizeof(void*)*1 + 1, x_23);
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(1, 2, 0);
} else {
 x_27 = x_25;
}
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_12);
x_2 = x_27;
goto _start;
}
}
case 1:
{
uint8_t x_29; 
x_29 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
if (x_29 == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_6);
if (x_30 == 0)
{
uint8_t x_31; lean_object* x_32; 
x_31 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_32 = lean_ctor_get(x_6, 0);
lean_dec(x_32);
if (x_31 == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_2, 1);
lean_inc(x_33);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_7);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_ctor_get(x_7, 1);
x_36 = lean_ctor_get(x_7, 0);
lean_dec(x_36);
x_37 = lean_ctor_get(x_10, 1);
lean_inc(x_37);
lean_dec(x_10);
x_38 = l_Int_toNat(x_37);
lean_dec(x_37);
x_39 = l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline(x_38, x_3);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
lean_ctor_set(x_6, 0, x_35);
lean_ctor_set(x_7, 1, x_33);
lean_ctor_set(x_7, 0, x_6);
x_2 = x_7;
x_3 = x_40;
goto _start;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_42 = lean_ctor_get(x_7, 1);
lean_inc(x_42);
lean_dec(x_7);
x_43 = lean_ctor_get(x_10, 1);
lean_inc(x_43);
lean_dec(x_10);
x_44 = l_Int_toNat(x_43);
lean_dec(x_43);
x_45 = l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline(x_44, x_3);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
lean_ctor_set(x_6, 0, x_42);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_6);
lean_ctor_set(x_47, 1, x_33);
x_2 = x_47;
x_3 = x_46;
goto _start;
}
}
else
{
lean_object* x_49; uint8_t x_50; 
lean_dec(x_10);
x_49 = lean_ctor_get(x_2, 1);
lean_inc(x_49);
lean_dec(x_2);
x_50 = !lean_is_exclusive(x_7);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_51 = lean_ctor_get(x_7, 1);
x_52 = lean_ctor_get(x_7, 0);
lean_dec(x_52);
x_53 = lean_mk_string(" ");
x_54 = l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput(x_53, x_3);
lean_dec(x_53);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
lean_ctor_set(x_6, 0, x_51);
lean_ctor_set(x_7, 1, x_49);
lean_ctor_set(x_7, 0, x_6);
x_2 = x_7;
x_3 = x_55;
goto _start;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_57 = lean_ctor_get(x_7, 1);
lean_inc(x_57);
lean_dec(x_7);
x_58 = lean_mk_string(" ");
x_59 = l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput(x_58, x_3);
lean_dec(x_58);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
lean_ctor_set(x_6, 0, x_57);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_6);
lean_ctor_set(x_61, 1, x_49);
x_2 = x_61;
x_3 = x_60;
goto _start;
}
}
}
else
{
uint8_t x_63; 
x_63 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
lean_dec(x_6);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_64 = lean_ctor_get(x_2, 1);
lean_inc(x_64);
lean_dec(x_2);
x_65 = lean_ctor_get(x_7, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_66 = x_7;
} else {
 lean_dec_ref(x_7);
 x_66 = lean_box(0);
}
x_67 = lean_ctor_get(x_10, 1);
lean_inc(x_67);
lean_dec(x_10);
x_68 = l_Int_toNat(x_67);
lean_dec(x_67);
x_69 = l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline(x_68, x_3);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_71, 0, x_65);
lean_ctor_set_uint8(x_71, sizeof(void*)*1, x_63);
lean_ctor_set_uint8(x_71, sizeof(void*)*1 + 1, x_29);
if (lean_is_scalar(x_66)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_66;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_64);
x_2 = x_72;
x_3 = x_70;
goto _start;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_10);
x_74 = lean_ctor_get(x_2, 1);
lean_inc(x_74);
lean_dec(x_2);
x_75 = lean_ctor_get(x_7, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_76 = x_7;
} else {
 lean_dec_ref(x_7);
 x_76 = lean_box(0);
}
x_77 = lean_mk_string(" ");
x_78 = l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput(x_77, x_3);
lean_dec(x_77);
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
lean_dec(x_78);
x_80 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_80, 0, x_75);
lean_ctor_set_uint8(x_80, sizeof(void*)*1, x_63);
lean_ctor_set_uint8(x_80, sizeof(void*)*1 + 1, x_29);
if (lean_is_scalar(x_76)) {
 x_81 = lean_alloc_ctor(1, 2, 0);
} else {
 x_81 = x_76;
}
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_74);
x_2 = x_81;
x_3 = x_79;
goto _start;
}
}
}
else
{
lean_object* x_83; uint8_t x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_83 = lean_ctor_get(x_2, 1);
lean_inc(x_83);
lean_dec(x_2);
x_84 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
lean_dec(x_6);
x_85 = lean_ctor_get(x_7, 1);
lean_inc(x_85);
lean_dec(x_7);
x_86 = lean_ctor_get(x_10, 1);
lean_inc(x_86);
lean_dec(x_10);
x_87 = l_Int_toNat(x_86);
lean_dec(x_86);
if (x_84 == 0)
{
lean_object* x_88; lean_object* x_89; uint8_t x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_88 = l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline(x_87, x_3);
x_89 = lean_ctor_get(x_88, 1);
lean_inc(x_89);
lean_dec(x_88);
x_90 = 1;
x_91 = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(x_90, x_85, x_83, x_1, x_89);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_2 = x_92;
x_3 = x_93;
goto _start;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; uint8_t x_102; 
x_95 = lean_mk_string(" ");
x_96 = lean_string_length(x_95);
x_97 = lean_nat_sub(x_1, x_96);
lean_dec(x_96);
x_98 = 1;
lean_inc(x_83);
lean_inc(x_85);
x_99 = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(x_98, x_85, x_83, x_97, x_3);
lean_dec(x_97);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get_uint8(x_101, sizeof(void*)*1);
lean_dec(x_101);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_100);
lean_dec(x_95);
x_103 = lean_ctor_get(x_99, 1);
lean_inc(x_103);
lean_dec(x_99);
x_104 = l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline(x_87, x_103);
x_105 = lean_ctor_get(x_104, 1);
lean_inc(x_105);
lean_dec(x_104);
x_106 = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(x_98, x_85, x_83, x_1, x_105);
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
lean_dec(x_106);
x_2 = x_107;
x_3 = x_108;
goto _start;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_87);
lean_dec(x_85);
lean_dec(x_83);
x_110 = lean_ctor_get(x_99, 1);
lean_inc(x_110);
lean_dec(x_99);
x_111 = l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput(x_95, x_110);
lean_dec(x_95);
x_112 = lean_ctor_get(x_111, 1);
lean_inc(x_112);
lean_dec(x_111);
x_2 = x_100;
x_3 = x_112;
goto _start;
}
}
}
}
case 2:
{
lean_object* x_114; uint8_t x_115; 
x_114 = lean_ctor_get(x_2, 1);
lean_inc(x_114);
lean_dec(x_2);
x_115 = !lean_is_exclusive(x_6);
if (x_115 == 0)
{
uint8_t x_116; lean_object* x_117; uint8_t x_118; 
x_116 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
x_117 = lean_ctor_get(x_6, 0);
lean_dec(x_117);
x_118 = !lean_is_exclusive(x_7);
if (x_118 == 0)
{
lean_object* x_119; lean_object* x_120; uint8_t x_121; 
x_119 = lean_ctor_get(x_7, 1);
x_120 = lean_ctor_get(x_7, 0);
lean_dec(x_120);
x_121 = !lean_is_exclusive(x_10);
if (x_121 == 0)
{
lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_122 = lean_ctor_get(x_10, 1);
x_123 = lean_ctor_get(x_10, 0);
lean_dec(x_123);
x_124 = !lean_is_exclusive(x_11);
if (x_124 == 0)
{
lean_object* x_125; uint32_t x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; 
x_125 = lean_ctor_get(x_11, 0);
x_126 = 10;
x_127 = lean_string_utf8_byte_size(x_125);
x_128 = lean_unsigned_to_nat(0u);
x_129 = l_String_posOfAux(x_125, x_126, x_127, x_128);
x_130 = lean_nat_dec_eq(x_129, x_127);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_free_object(x_6);
x_131 = lean_string_utf8_extract(x_125, x_128, x_129);
x_132 = l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput(x_131, x_3);
lean_dec(x_131);
x_133 = lean_ctor_get(x_132, 1);
lean_inc(x_133);
lean_dec(x_132);
x_134 = l_Int_toNat(x_122);
x_135 = l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline(x_134, x_133);
x_136 = lean_ctor_get(x_135, 1);
lean_inc(x_136);
lean_dec(x_135);
x_137 = lean_string_utf8_next(x_125, x_129);
lean_dec(x_129);
x_138 = lean_string_utf8_extract(x_125, x_137, x_127);
lean_dec(x_127);
lean_dec(x_137);
lean_dec(x_125);
lean_ctor_set(x_11, 0, x_138);
x_139 = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(x_116, x_7, x_114, x_1, x_136);
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_139, 1);
lean_inc(x_141);
lean_dec(x_139);
x_2 = x_140;
x_3 = x_141;
goto _start;
}
else
{
lean_object* x_143; lean_object* x_144; 
lean_dec(x_129);
lean_dec(x_127);
lean_free_object(x_11);
lean_free_object(x_10);
lean_dec(x_122);
x_143 = l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput(x_125, x_3);
lean_dec(x_125);
x_144 = lean_ctor_get(x_143, 1);
lean_inc(x_144);
lean_dec(x_143);
lean_ctor_set(x_6, 0, x_119);
lean_ctor_set(x_7, 1, x_114);
lean_ctor_set(x_7, 0, x_6);
x_2 = x_7;
x_3 = x_144;
goto _start;
}
}
else
{
lean_object* x_146; uint32_t x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; uint8_t x_151; 
x_146 = lean_ctor_get(x_11, 0);
lean_inc(x_146);
lean_dec(x_11);
x_147 = 10;
x_148 = lean_string_utf8_byte_size(x_146);
x_149 = lean_unsigned_to_nat(0u);
x_150 = l_String_posOfAux(x_146, x_147, x_148, x_149);
x_151 = lean_nat_dec_eq(x_150, x_148);
if (x_151 == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
lean_free_object(x_6);
x_152 = lean_string_utf8_extract(x_146, x_149, x_150);
x_153 = l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput(x_152, x_3);
lean_dec(x_152);
x_154 = lean_ctor_get(x_153, 1);
lean_inc(x_154);
lean_dec(x_153);
x_155 = l_Int_toNat(x_122);
x_156 = l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline(x_155, x_154);
x_157 = lean_ctor_get(x_156, 1);
lean_inc(x_157);
lean_dec(x_156);
x_158 = lean_string_utf8_next(x_146, x_150);
lean_dec(x_150);
x_159 = lean_string_utf8_extract(x_146, x_158, x_148);
lean_dec(x_148);
lean_dec(x_158);
lean_dec(x_146);
x_160 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_10, 0, x_160);
x_161 = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(x_116, x_7, x_114, x_1, x_157);
x_162 = lean_ctor_get(x_161, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_161, 1);
lean_inc(x_163);
lean_dec(x_161);
x_2 = x_162;
x_3 = x_163;
goto _start;
}
else
{
lean_object* x_165; lean_object* x_166; 
lean_dec(x_150);
lean_dec(x_148);
lean_free_object(x_10);
lean_dec(x_122);
x_165 = l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput(x_146, x_3);
lean_dec(x_146);
x_166 = lean_ctor_get(x_165, 1);
lean_inc(x_166);
lean_dec(x_165);
lean_ctor_set(x_6, 0, x_119);
lean_ctor_set(x_7, 1, x_114);
lean_ctor_set(x_7, 0, x_6);
x_2 = x_7;
x_3 = x_166;
goto _start;
}
}
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; uint32_t x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; uint8_t x_175; 
x_168 = lean_ctor_get(x_10, 1);
lean_inc(x_168);
lean_dec(x_10);
x_169 = lean_ctor_get(x_11, 0);
lean_inc(x_169);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 x_170 = x_11;
} else {
 lean_dec_ref(x_11);
 x_170 = lean_box(0);
}
x_171 = 10;
x_172 = lean_string_utf8_byte_size(x_169);
x_173 = lean_unsigned_to_nat(0u);
x_174 = l_String_posOfAux(x_169, x_171, x_172, x_173);
x_175 = lean_nat_dec_eq(x_174, x_172);
if (x_175 == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
lean_free_object(x_6);
x_176 = lean_string_utf8_extract(x_169, x_173, x_174);
x_177 = l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput(x_176, x_3);
lean_dec(x_176);
x_178 = lean_ctor_get(x_177, 1);
lean_inc(x_178);
lean_dec(x_177);
x_179 = l_Int_toNat(x_168);
x_180 = l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline(x_179, x_178);
x_181 = lean_ctor_get(x_180, 1);
lean_inc(x_181);
lean_dec(x_180);
x_182 = lean_string_utf8_next(x_169, x_174);
lean_dec(x_174);
x_183 = lean_string_utf8_extract(x_169, x_182, x_172);
lean_dec(x_172);
lean_dec(x_182);
lean_dec(x_169);
if (lean_is_scalar(x_170)) {
 x_184 = lean_alloc_ctor(2, 1, 0);
} else {
 x_184 = x_170;
}
lean_ctor_set(x_184, 0, x_183);
x_185 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_168);
lean_ctor_set(x_7, 0, x_185);
x_186 = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(x_116, x_7, x_114, x_1, x_181);
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_186, 1);
lean_inc(x_188);
lean_dec(x_186);
x_2 = x_187;
x_3 = x_188;
goto _start;
}
else
{
lean_object* x_190; lean_object* x_191; 
lean_dec(x_174);
lean_dec(x_172);
lean_dec(x_170);
lean_dec(x_168);
x_190 = l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput(x_169, x_3);
lean_dec(x_169);
x_191 = lean_ctor_get(x_190, 1);
lean_inc(x_191);
lean_dec(x_190);
lean_ctor_set(x_6, 0, x_119);
lean_ctor_set(x_7, 1, x_114);
lean_ctor_set(x_7, 0, x_6);
x_2 = x_7;
x_3 = x_191;
goto _start;
}
}
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; uint32_t x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; uint8_t x_202; 
x_193 = lean_ctor_get(x_7, 1);
lean_inc(x_193);
lean_dec(x_7);
x_194 = lean_ctor_get(x_10, 1);
lean_inc(x_194);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_195 = x_10;
} else {
 lean_dec_ref(x_10);
 x_195 = lean_box(0);
}
x_196 = lean_ctor_get(x_11, 0);
lean_inc(x_196);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 x_197 = x_11;
} else {
 lean_dec_ref(x_11);
 x_197 = lean_box(0);
}
x_198 = 10;
x_199 = lean_string_utf8_byte_size(x_196);
x_200 = lean_unsigned_to_nat(0u);
x_201 = l_String_posOfAux(x_196, x_198, x_199, x_200);
x_202 = lean_nat_dec_eq(x_201, x_199);
if (x_202 == 0)
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
lean_free_object(x_6);
x_203 = lean_string_utf8_extract(x_196, x_200, x_201);
x_204 = l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput(x_203, x_3);
lean_dec(x_203);
x_205 = lean_ctor_get(x_204, 1);
lean_inc(x_205);
lean_dec(x_204);
x_206 = l_Int_toNat(x_194);
x_207 = l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline(x_206, x_205);
x_208 = lean_ctor_get(x_207, 1);
lean_inc(x_208);
lean_dec(x_207);
x_209 = lean_string_utf8_next(x_196, x_201);
lean_dec(x_201);
x_210 = lean_string_utf8_extract(x_196, x_209, x_199);
lean_dec(x_199);
lean_dec(x_209);
lean_dec(x_196);
if (lean_is_scalar(x_197)) {
 x_211 = lean_alloc_ctor(2, 1, 0);
} else {
 x_211 = x_197;
}
lean_ctor_set(x_211, 0, x_210);
if (lean_is_scalar(x_195)) {
 x_212 = lean_alloc_ctor(0, 2, 0);
} else {
 x_212 = x_195;
}
lean_ctor_set(x_212, 0, x_211);
lean_ctor_set(x_212, 1, x_194);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_212);
lean_ctor_set(x_213, 1, x_193);
x_214 = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(x_116, x_213, x_114, x_1, x_208);
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_214, 1);
lean_inc(x_216);
lean_dec(x_214);
x_2 = x_215;
x_3 = x_216;
goto _start;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_201);
lean_dec(x_199);
lean_dec(x_197);
lean_dec(x_195);
lean_dec(x_194);
x_218 = l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput(x_196, x_3);
lean_dec(x_196);
x_219 = lean_ctor_get(x_218, 1);
lean_inc(x_219);
lean_dec(x_218);
lean_ctor_set(x_6, 0, x_193);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_6);
lean_ctor_set(x_220, 1, x_114);
x_2 = x_220;
x_3 = x_219;
goto _start;
}
}
}
else
{
uint8_t x_222; uint8_t x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; uint32_t x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; uint8_t x_234; 
x_222 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_223 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
lean_dec(x_6);
x_224 = lean_ctor_get(x_7, 1);
lean_inc(x_224);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_225 = x_7;
} else {
 lean_dec_ref(x_7);
 x_225 = lean_box(0);
}
x_226 = lean_ctor_get(x_10, 1);
lean_inc(x_226);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_227 = x_10;
} else {
 lean_dec_ref(x_10);
 x_227 = lean_box(0);
}
x_228 = lean_ctor_get(x_11, 0);
lean_inc(x_228);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 x_229 = x_11;
} else {
 lean_dec_ref(x_11);
 x_229 = lean_box(0);
}
x_230 = 10;
x_231 = lean_string_utf8_byte_size(x_228);
x_232 = lean_unsigned_to_nat(0u);
x_233 = l_String_posOfAux(x_228, x_230, x_231, x_232);
x_234 = lean_nat_dec_eq(x_233, x_231);
if (x_234 == 0)
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; 
x_235 = lean_string_utf8_extract(x_228, x_232, x_233);
x_236 = l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput(x_235, x_3);
lean_dec(x_235);
x_237 = lean_ctor_get(x_236, 1);
lean_inc(x_237);
lean_dec(x_236);
x_238 = l_Int_toNat(x_226);
x_239 = l___private_Init_Data_Format_Basic_0__Std_Format_pushNewline(x_238, x_237);
x_240 = lean_ctor_get(x_239, 1);
lean_inc(x_240);
lean_dec(x_239);
x_241 = lean_string_utf8_next(x_228, x_233);
lean_dec(x_233);
x_242 = lean_string_utf8_extract(x_228, x_241, x_231);
lean_dec(x_231);
lean_dec(x_241);
lean_dec(x_228);
if (lean_is_scalar(x_229)) {
 x_243 = lean_alloc_ctor(2, 1, 0);
} else {
 x_243 = x_229;
}
lean_ctor_set(x_243, 0, x_242);
if (lean_is_scalar(x_227)) {
 x_244 = lean_alloc_ctor(0, 2, 0);
} else {
 x_244 = x_227;
}
lean_ctor_set(x_244, 0, x_243);
lean_ctor_set(x_244, 1, x_226);
if (lean_is_scalar(x_225)) {
 x_245 = lean_alloc_ctor(1, 2, 0);
} else {
 x_245 = x_225;
}
lean_ctor_set(x_245, 0, x_244);
lean_ctor_set(x_245, 1, x_224);
x_246 = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(x_223, x_245, x_114, x_1, x_240);
x_247 = lean_ctor_get(x_246, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_246, 1);
lean_inc(x_248);
lean_dec(x_246);
x_2 = x_247;
x_3 = x_248;
goto _start;
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
lean_dec(x_233);
lean_dec(x_231);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
x_250 = l___private_Init_Data_Format_Basic_0__Std_Format_pushOutput(x_228, x_3);
lean_dec(x_228);
x_251 = lean_ctor_get(x_250, 1);
lean_inc(x_251);
lean_dec(x_250);
x_252 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_252, 0, x_224);
lean_ctor_set_uint8(x_252, sizeof(void*)*1, x_222);
lean_ctor_set_uint8(x_252, sizeof(void*)*1 + 1, x_223);
if (lean_is_scalar(x_225)) {
 x_253 = lean_alloc_ctor(1, 2, 0);
} else {
 x_253 = x_225;
}
lean_ctor_set(x_253, 0, x_252);
lean_ctor_set(x_253, 1, x_114);
x_2 = x_253;
x_3 = x_251;
goto _start;
}
}
}
case 3:
{
uint8_t x_255; 
x_255 = !lean_is_exclusive(x_2);
if (x_255 == 0)
{
lean_object* x_256; uint8_t x_257; 
x_256 = lean_ctor_get(x_2, 0);
lean_dec(x_256);
x_257 = !lean_is_exclusive(x_6);
if (x_257 == 0)
{
lean_object* x_258; uint8_t x_259; 
x_258 = lean_ctor_get(x_6, 0);
lean_dec(x_258);
x_259 = !lean_is_exclusive(x_7);
if (x_259 == 0)
{
lean_object* x_260; uint8_t x_261; 
x_260 = lean_ctor_get(x_7, 0);
lean_dec(x_260);
x_261 = !lean_is_exclusive(x_10);
if (x_261 == 0)
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_262 = lean_ctor_get(x_10, 1);
x_263 = lean_ctor_get(x_10, 0);
lean_dec(x_263);
x_264 = lean_ctor_get(x_11, 0);
lean_inc(x_264);
x_265 = lean_ctor_get(x_11, 1);
lean_inc(x_265);
lean_dec(x_11);
x_266 = lean_int_add(x_262, x_264);
lean_dec(x_264);
lean_dec(x_262);
lean_ctor_set(x_10, 1, x_266);
lean_ctor_set(x_10, 0, x_265);
goto _start;
}
else
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; 
x_268 = lean_ctor_get(x_10, 1);
lean_inc(x_268);
lean_dec(x_10);
x_269 = lean_ctor_get(x_11, 0);
lean_inc(x_269);
x_270 = lean_ctor_get(x_11, 1);
lean_inc(x_270);
lean_dec(x_11);
x_271 = lean_int_add(x_268, x_269);
lean_dec(x_269);
lean_dec(x_268);
x_272 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_272, 0, x_270);
lean_ctor_set(x_272, 1, x_271);
lean_ctor_set(x_7, 0, x_272);
goto _start;
}
}
else
{
lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; 
x_274 = lean_ctor_get(x_7, 1);
lean_inc(x_274);
lean_dec(x_7);
x_275 = lean_ctor_get(x_10, 1);
lean_inc(x_275);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_276 = x_10;
} else {
 lean_dec_ref(x_10);
 x_276 = lean_box(0);
}
x_277 = lean_ctor_get(x_11, 0);
lean_inc(x_277);
x_278 = lean_ctor_get(x_11, 1);
lean_inc(x_278);
lean_dec(x_11);
x_279 = lean_int_add(x_275, x_277);
lean_dec(x_277);
lean_dec(x_275);
if (lean_is_scalar(x_276)) {
 x_280 = lean_alloc_ctor(0, 2, 0);
} else {
 x_280 = x_276;
}
lean_ctor_set(x_280, 0, x_278);
lean_ctor_set(x_280, 1, x_279);
x_281 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_281, 0, x_280);
lean_ctor_set(x_281, 1, x_274);
lean_ctor_set(x_6, 0, x_281);
goto _start;
}
}
else
{
uint8_t x_283; uint8_t x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; 
x_283 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_284 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
lean_dec(x_6);
x_285 = lean_ctor_get(x_7, 1);
lean_inc(x_285);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_286 = x_7;
} else {
 lean_dec_ref(x_7);
 x_286 = lean_box(0);
}
x_287 = lean_ctor_get(x_10, 1);
lean_inc(x_287);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_288 = x_10;
} else {
 lean_dec_ref(x_10);
 x_288 = lean_box(0);
}
x_289 = lean_ctor_get(x_11, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_11, 1);
lean_inc(x_290);
lean_dec(x_11);
x_291 = lean_int_add(x_287, x_289);
lean_dec(x_289);
lean_dec(x_287);
if (lean_is_scalar(x_288)) {
 x_292 = lean_alloc_ctor(0, 2, 0);
} else {
 x_292 = x_288;
}
lean_ctor_set(x_292, 0, x_290);
lean_ctor_set(x_292, 1, x_291);
if (lean_is_scalar(x_286)) {
 x_293 = lean_alloc_ctor(1, 2, 0);
} else {
 x_293 = x_286;
}
lean_ctor_set(x_293, 0, x_292);
lean_ctor_set(x_293, 1, x_285);
x_294 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_294, 0, x_293);
lean_ctor_set_uint8(x_294, sizeof(void*)*1, x_283);
lean_ctor_set_uint8(x_294, sizeof(void*)*1 + 1, x_284);
lean_ctor_set(x_2, 0, x_294);
goto _start;
}
}
else
{
lean_object* x_296; uint8_t x_297; uint8_t x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; 
x_296 = lean_ctor_get(x_2, 1);
lean_inc(x_296);
lean_dec(x_2);
x_297 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_298 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 x_299 = x_6;
} else {
 lean_dec_ref(x_6);
 x_299 = lean_box(0);
}
x_300 = lean_ctor_get(x_7, 1);
lean_inc(x_300);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_301 = x_7;
} else {
 lean_dec_ref(x_7);
 x_301 = lean_box(0);
}
x_302 = lean_ctor_get(x_10, 1);
lean_inc(x_302);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_303 = x_10;
} else {
 lean_dec_ref(x_10);
 x_303 = lean_box(0);
}
x_304 = lean_ctor_get(x_11, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_11, 1);
lean_inc(x_305);
lean_dec(x_11);
x_306 = lean_int_add(x_302, x_304);
lean_dec(x_304);
lean_dec(x_302);
if (lean_is_scalar(x_303)) {
 x_307 = lean_alloc_ctor(0, 2, 0);
} else {
 x_307 = x_303;
}
lean_ctor_set(x_307, 0, x_305);
lean_ctor_set(x_307, 1, x_306);
if (lean_is_scalar(x_301)) {
 x_308 = lean_alloc_ctor(1, 2, 0);
} else {
 x_308 = x_301;
}
lean_ctor_set(x_308, 0, x_307);
lean_ctor_set(x_308, 1, x_300);
if (lean_is_scalar(x_299)) {
 x_309 = lean_alloc_ctor(0, 1, 2);
} else {
 x_309 = x_299;
}
lean_ctor_set(x_309, 0, x_308);
lean_ctor_set_uint8(x_309, sizeof(void*)*1, x_297);
lean_ctor_set_uint8(x_309, sizeof(void*)*1 + 1, x_298);
x_310 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_310, 0, x_309);
lean_ctor_set(x_310, 1, x_296);
x_2 = x_310;
goto _start;
}
}
case 4:
{
uint8_t x_312; 
x_312 = !lean_is_exclusive(x_2);
if (x_312 == 0)
{
lean_object* x_313; lean_object* x_314; uint8_t x_315; 
x_313 = lean_ctor_get(x_2, 1);
x_314 = lean_ctor_get(x_2, 0);
lean_dec(x_314);
x_315 = !lean_is_exclusive(x_6);
if (x_315 == 0)
{
lean_object* x_316; uint8_t x_317; 
x_316 = lean_ctor_get(x_6, 0);
lean_dec(x_316);
x_317 = !lean_is_exclusive(x_7);
if (x_317 == 0)
{
lean_object* x_318; uint8_t x_319; 
x_318 = lean_ctor_get(x_7, 0);
lean_dec(x_318);
x_319 = !lean_is_exclusive(x_10);
if (x_319 == 0)
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; 
x_320 = lean_ctor_get(x_10, 1);
x_321 = lean_ctor_get(x_10, 0);
lean_dec(x_321);
x_322 = lean_ctor_get(x_11, 0);
lean_inc(x_322);
x_323 = lean_ctor_get(x_11, 1);
lean_inc(x_323);
lean_dec(x_11);
lean_inc(x_320);
lean_ctor_set(x_10, 0, x_322);
x_324 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_324, 0, x_323);
lean_ctor_set(x_324, 1, x_320);
lean_ctor_set(x_7, 0, x_324);
lean_ctor_set(x_2, 1, x_7);
lean_ctor_set(x_2, 0, x_10);
lean_ctor_set(x_6, 0, x_2);
x_325 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_325, 0, x_6);
lean_ctor_set(x_325, 1, x_313);
x_2 = x_325;
goto _start;
}
else
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; 
x_327 = lean_ctor_get(x_10, 1);
lean_inc(x_327);
lean_dec(x_10);
x_328 = lean_ctor_get(x_11, 0);
lean_inc(x_328);
x_329 = lean_ctor_get(x_11, 1);
lean_inc(x_329);
lean_dec(x_11);
lean_inc(x_327);
x_330 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_330, 0, x_328);
lean_ctor_set(x_330, 1, x_327);
x_331 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_331, 0, x_329);
lean_ctor_set(x_331, 1, x_327);
lean_ctor_set(x_7, 0, x_331);
lean_ctor_set(x_2, 1, x_7);
lean_ctor_set(x_2, 0, x_330);
lean_ctor_set(x_6, 0, x_2);
x_332 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_332, 0, x_6);
lean_ctor_set(x_332, 1, x_313);
x_2 = x_332;
goto _start;
}
}
else
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; 
x_334 = lean_ctor_get(x_7, 1);
lean_inc(x_334);
lean_dec(x_7);
x_335 = lean_ctor_get(x_10, 1);
lean_inc(x_335);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_336 = x_10;
} else {
 lean_dec_ref(x_10);
 x_336 = lean_box(0);
}
x_337 = lean_ctor_get(x_11, 0);
lean_inc(x_337);
x_338 = lean_ctor_get(x_11, 1);
lean_inc(x_338);
lean_dec(x_11);
lean_inc(x_335);
if (lean_is_scalar(x_336)) {
 x_339 = lean_alloc_ctor(0, 2, 0);
} else {
 x_339 = x_336;
}
lean_ctor_set(x_339, 0, x_337);
lean_ctor_set(x_339, 1, x_335);
x_340 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_340, 0, x_338);
lean_ctor_set(x_340, 1, x_335);
x_341 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_341, 0, x_340);
lean_ctor_set(x_341, 1, x_334);
lean_ctor_set(x_2, 1, x_341);
lean_ctor_set(x_2, 0, x_339);
lean_ctor_set(x_6, 0, x_2);
x_342 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_342, 0, x_6);
lean_ctor_set(x_342, 1, x_313);
x_2 = x_342;
goto _start;
}
}
else
{
uint8_t x_344; uint8_t x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; 
x_344 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_345 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
lean_dec(x_6);
x_346 = lean_ctor_get(x_7, 1);
lean_inc(x_346);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_347 = x_7;
} else {
 lean_dec_ref(x_7);
 x_347 = lean_box(0);
}
x_348 = lean_ctor_get(x_10, 1);
lean_inc(x_348);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_349 = x_10;
} else {
 lean_dec_ref(x_10);
 x_349 = lean_box(0);
}
x_350 = lean_ctor_get(x_11, 0);
lean_inc(x_350);
x_351 = lean_ctor_get(x_11, 1);
lean_inc(x_351);
lean_dec(x_11);
lean_inc(x_348);
if (lean_is_scalar(x_349)) {
 x_352 = lean_alloc_ctor(0, 2, 0);
} else {
 x_352 = x_349;
}
lean_ctor_set(x_352, 0, x_350);
lean_ctor_set(x_352, 1, x_348);
x_353 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_353, 0, x_351);
lean_ctor_set(x_353, 1, x_348);
if (lean_is_scalar(x_347)) {
 x_354 = lean_alloc_ctor(1, 2, 0);
} else {
 x_354 = x_347;
}
lean_ctor_set(x_354, 0, x_353);
lean_ctor_set(x_354, 1, x_346);
lean_ctor_set(x_2, 1, x_354);
lean_ctor_set(x_2, 0, x_352);
x_355 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_355, 0, x_2);
lean_ctor_set_uint8(x_355, sizeof(void*)*1, x_344);
lean_ctor_set_uint8(x_355, sizeof(void*)*1 + 1, x_345);
x_356 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_356, 0, x_355);
lean_ctor_set(x_356, 1, x_313);
x_2 = x_356;
goto _start;
}
}
else
{
lean_object* x_358; uint8_t x_359; uint8_t x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; 
x_358 = lean_ctor_get(x_2, 1);
lean_inc(x_358);
lean_dec(x_2);
x_359 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
x_360 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 x_361 = x_6;
} else {
 lean_dec_ref(x_6);
 x_361 = lean_box(0);
}
x_362 = lean_ctor_get(x_7, 1);
lean_inc(x_362);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_363 = x_7;
} else {
 lean_dec_ref(x_7);
 x_363 = lean_box(0);
}
x_364 = lean_ctor_get(x_10, 1);
lean_inc(x_364);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_365 = x_10;
} else {
 lean_dec_ref(x_10);
 x_365 = lean_box(0);
}
x_366 = lean_ctor_get(x_11, 0);
lean_inc(x_366);
x_367 = lean_ctor_get(x_11, 1);
lean_inc(x_367);
lean_dec(x_11);
lean_inc(x_364);
if (lean_is_scalar(x_365)) {
 x_368 = lean_alloc_ctor(0, 2, 0);
} else {
 x_368 = x_365;
}
lean_ctor_set(x_368, 0, x_366);
lean_ctor_set(x_368, 1, x_364);
x_369 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_369, 0, x_367);
lean_ctor_set(x_369, 1, x_364);
if (lean_is_scalar(x_363)) {
 x_370 = lean_alloc_ctor(1, 2, 0);
} else {
 x_370 = x_363;
}
lean_ctor_set(x_370, 0, x_369);
lean_ctor_set(x_370, 1, x_362);
x_371 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_371, 0, x_368);
lean_ctor_set(x_371, 1, x_370);
if (lean_is_scalar(x_361)) {
 x_372 = lean_alloc_ctor(0, 1, 2);
} else {
 x_372 = x_361;
}
lean_ctor_set(x_372, 0, x_371);
lean_ctor_set_uint8(x_372, sizeof(void*)*1, x_359);
lean_ctor_set_uint8(x_372, sizeof(void*)*1 + 1, x_360);
x_373 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_373, 0, x_372);
lean_ctor_set(x_373, 1, x_358);
x_2 = x_373;
goto _start;
}
}
default: 
{
uint8_t x_375; 
x_375 = lean_ctor_get_uint8(x_6, sizeof(void*)*1);
if (x_375 == 0)
{
uint8_t x_376; 
x_376 = !lean_is_exclusive(x_2);
if (x_376 == 0)
{
lean_object* x_377; uint8_t x_378; 
x_377 = lean_ctor_get(x_2, 0);
lean_dec(x_377);
x_378 = !lean_is_exclusive(x_6);
if (x_378 == 0)
{
lean_object* x_379; uint8_t x_380; 
x_379 = lean_ctor_get(x_6, 0);
lean_dec(x_379);
x_380 = !lean_is_exclusive(x_7);
if (x_380 == 0)
{
lean_object* x_381; lean_object* x_382; uint8_t x_383; 
x_381 = lean_ctor_get(x_7, 1);
x_382 = lean_ctor_get(x_7, 0);
lean_dec(x_382);
x_383 = !lean_is_exclusive(x_10);
if (x_383 == 0)
{
lean_object* x_384; lean_object* x_385; uint8_t x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; 
x_384 = lean_ctor_get(x_10, 0);
lean_dec(x_384);
x_385 = lean_ctor_get(x_11, 0);
lean_inc(x_385);
x_386 = lean_ctor_get_uint8(x_11, sizeof(void*)*1);
lean_dec(x_11);
lean_ctor_set(x_10, 0, x_385);
x_387 = lean_box(0);
lean_ctor_set(x_7, 1, x_387);
lean_ctor_set(x_6, 0, x_381);
x_388 = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(x_386, x_7, x_2, x_1, x_3);
x_389 = lean_ctor_get(x_388, 0);
lean_inc(x_389);
x_390 = lean_ctor_get(x_388, 1);
lean_inc(x_390);
lean_dec(x_388);
x_2 = x_389;
x_3 = x_390;
goto _start;
}
else
{
lean_object* x_392; lean_object* x_393; uint8_t x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; 
x_392 = lean_ctor_get(x_10, 1);
lean_inc(x_392);
lean_dec(x_10);
x_393 = lean_ctor_get(x_11, 0);
lean_inc(x_393);
x_394 = lean_ctor_get_uint8(x_11, sizeof(void*)*1);
lean_dec(x_11);
x_395 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_395, 0, x_393);
lean_ctor_set(x_395, 1, x_392);
x_396 = lean_box(0);
lean_ctor_set(x_7, 1, x_396);
lean_ctor_set(x_7, 0, x_395);
lean_ctor_set(x_6, 0, x_381);
x_397 = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(x_394, x_7, x_2, x_1, x_3);
x_398 = lean_ctor_get(x_397, 0);
lean_inc(x_398);
x_399 = lean_ctor_get(x_397, 1);
lean_inc(x_399);
lean_dec(x_397);
x_2 = x_398;
x_3 = x_399;
goto _start;
}
}
else
{
lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; uint8_t x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; 
x_401 = lean_ctor_get(x_7, 1);
lean_inc(x_401);
lean_dec(x_7);
x_402 = lean_ctor_get(x_10, 1);
lean_inc(x_402);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_403 = x_10;
} else {
 lean_dec_ref(x_10);
 x_403 = lean_box(0);
}
x_404 = lean_ctor_get(x_11, 0);
lean_inc(x_404);
x_405 = lean_ctor_get_uint8(x_11, sizeof(void*)*1);
lean_dec(x_11);
if (lean_is_scalar(x_403)) {
 x_406 = lean_alloc_ctor(0, 2, 0);
} else {
 x_406 = x_403;
}
lean_ctor_set(x_406, 0, x_404);
lean_ctor_set(x_406, 1, x_402);
x_407 = lean_box(0);
x_408 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_408, 0, x_406);
lean_ctor_set(x_408, 1, x_407);
lean_ctor_set(x_6, 0, x_401);
x_409 = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(x_405, x_408, x_2, x_1, x_3);
x_410 = lean_ctor_get(x_409, 0);
lean_inc(x_410);
x_411 = lean_ctor_get(x_409, 1);
lean_inc(x_411);
lean_dec(x_409);
x_2 = x_410;
x_3 = x_411;
goto _start;
}
}
else
{
uint8_t x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; uint8_t x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; 
x_413 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
lean_dec(x_6);
x_414 = lean_ctor_get(x_7, 1);
lean_inc(x_414);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_415 = x_7;
} else {
 lean_dec_ref(x_7);
 x_415 = lean_box(0);
}
x_416 = lean_ctor_get(x_10, 1);
lean_inc(x_416);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_417 = x_10;
} else {
 lean_dec_ref(x_10);
 x_417 = lean_box(0);
}
x_418 = lean_ctor_get(x_11, 0);
lean_inc(x_418);
x_419 = lean_ctor_get_uint8(x_11, sizeof(void*)*1);
lean_dec(x_11);
if (lean_is_scalar(x_417)) {
 x_420 = lean_alloc_ctor(0, 2, 0);
} else {
 x_420 = x_417;
}
lean_ctor_set(x_420, 0, x_418);
lean_ctor_set(x_420, 1, x_416);
x_421 = lean_box(0);
if (lean_is_scalar(x_415)) {
 x_422 = lean_alloc_ctor(1, 2, 0);
} else {
 x_422 = x_415;
}
lean_ctor_set(x_422, 0, x_420);
lean_ctor_set(x_422, 1, x_421);
x_423 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_423, 0, x_414);
lean_ctor_set_uint8(x_423, sizeof(void*)*1, x_375);
lean_ctor_set_uint8(x_423, sizeof(void*)*1 + 1, x_413);
lean_ctor_set(x_2, 0, x_423);
x_424 = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(x_419, x_422, x_2, x_1, x_3);
x_425 = lean_ctor_get(x_424, 0);
lean_inc(x_425);
x_426 = lean_ctor_get(x_424, 1);
lean_inc(x_426);
lean_dec(x_424);
x_2 = x_425;
x_3 = x_426;
goto _start;
}
}
else
{
lean_object* x_428; uint8_t x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; uint8_t x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; 
x_428 = lean_ctor_get(x_2, 1);
lean_inc(x_428);
lean_dec(x_2);
x_429 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 x_430 = x_6;
} else {
 lean_dec_ref(x_6);
 x_430 = lean_box(0);
}
x_431 = lean_ctor_get(x_7, 1);
lean_inc(x_431);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_432 = x_7;
} else {
 lean_dec_ref(x_7);
 x_432 = lean_box(0);
}
x_433 = lean_ctor_get(x_10, 1);
lean_inc(x_433);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_434 = x_10;
} else {
 lean_dec_ref(x_10);
 x_434 = lean_box(0);
}
x_435 = lean_ctor_get(x_11, 0);
lean_inc(x_435);
x_436 = lean_ctor_get_uint8(x_11, sizeof(void*)*1);
lean_dec(x_11);
if (lean_is_scalar(x_434)) {
 x_437 = lean_alloc_ctor(0, 2, 0);
} else {
 x_437 = x_434;
}
lean_ctor_set(x_437, 0, x_435);
lean_ctor_set(x_437, 1, x_433);
x_438 = lean_box(0);
if (lean_is_scalar(x_432)) {
 x_439 = lean_alloc_ctor(1, 2, 0);
} else {
 x_439 = x_432;
}
lean_ctor_set(x_439, 0, x_437);
lean_ctor_set(x_439, 1, x_438);
if (lean_is_scalar(x_430)) {
 x_440 = lean_alloc_ctor(0, 1, 2);
} else {
 x_440 = x_430;
}
lean_ctor_set(x_440, 0, x_431);
lean_ctor_set_uint8(x_440, sizeof(void*)*1, x_375);
lean_ctor_set_uint8(x_440, sizeof(void*)*1 + 1, x_429);
x_441 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_441, 0, x_440);
lean_ctor_set(x_441, 1, x_428);
x_442 = l___private_Init_Data_Format_Basic_0__Std_Format_pushGroup(x_436, x_439, x_441, x_1, x_3);
x_443 = lean_ctor_get(x_442, 0);
lean_inc(x_443);
x_444 = lean_ctor_get(x_442, 1);
lean_inc(x_444);
lean_dec(x_442);
x_2 = x_443;
x_3 = x_444;
goto _start;
}
}
else
{
uint8_t x_446; 
x_446 = !lean_is_exclusive(x_2);
if (x_446 == 0)
{
lean_object* x_447; uint8_t x_448; 
x_447 = lean_ctor_get(x_2, 0);
lean_dec(x_447);
x_448 = !lean_is_exclusive(x_6);
if (x_448 == 0)
{
lean_object* x_449; uint8_t x_450; 
x_449 = lean_ctor_get(x_6, 0);
lean_dec(x_449);
x_450 = !lean_is_exclusive(x_7);
if (x_450 == 0)
{
lean_object* x_451; uint8_t x_452; 
x_451 = lean_ctor_get(x_7, 0);
lean_dec(x_451);
x_452 = !lean_is_exclusive(x_10);
if (x_452 == 0)
{
lean_object* x_453; lean_object* x_454; 
x_453 = lean_ctor_get(x_10, 0);
lean_dec(x_453);
x_454 = lean_ctor_get(x_11, 0);
lean_inc(x_454);
lean_dec(x_11);
lean_ctor_set(x_10, 0, x_454);
goto _start;
}
else
{
lean_object* x_456; lean_object* x_457; lean_object* x_458; 
x_456 = lean_ctor_get(x_10, 1);
lean_inc(x_456);
lean_dec(x_10);
x_457 = lean_ctor_get(x_11, 0);
lean_inc(x_457);
lean_dec(x_11);
x_458 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_458, 0, x_457);
lean_ctor_set(x_458, 1, x_456);
lean_ctor_set(x_7, 0, x_458);
goto _start;
}
}
else
{
lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; 
x_460 = lean_ctor_get(x_7, 1);
lean_inc(x_460);
lean_dec(x_7);
x_461 = lean_ctor_get(x_10, 1);
lean_inc(x_461);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_462 = x_10;
} else {
 lean_dec_ref(x_10);
 x_462 = lean_box(0);
}
x_463 = lean_ctor_get(x_11, 0);
lean_inc(x_463);
lean_dec(x_11);
if (lean_is_scalar(x_462)) {
 x_464 = lean_alloc_ctor(0, 2, 0);
} else {
 x_464 = x_462;
}
lean_ctor_set(x_464, 0, x_463);
lean_ctor_set(x_464, 1, x_461);
x_465 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_465, 0, x_464);
lean_ctor_set(x_465, 1, x_460);
lean_ctor_set(x_6, 0, x_465);
goto _start;
}
}
else
{
uint8_t x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; 
x_467 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
lean_dec(x_6);
x_468 = lean_ctor_get(x_7, 1);
lean_inc(x_468);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_469 = x_7;
} else {
 lean_dec_ref(x_7);
 x_469 = lean_box(0);
}
x_470 = lean_ctor_get(x_10, 1);
lean_inc(x_470);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_471 = x_10;
} else {
 lean_dec_ref(x_10);
 x_471 = lean_box(0);
}
x_472 = lean_ctor_get(x_11, 0);
lean_inc(x_472);
lean_dec(x_11);
if (lean_is_scalar(x_471)) {
 x_473 = lean_alloc_ctor(0, 2, 0);
} else {
 x_473 = x_471;
}
lean_ctor_set(x_473, 0, x_472);
lean_ctor_set(x_473, 1, x_470);
if (lean_is_scalar(x_469)) {
 x_474 = lean_alloc_ctor(1, 2, 0);
} else {
 x_474 = x_469;
}
lean_ctor_set(x_474, 0, x_473);
lean_ctor_set(x_474, 1, x_468);
x_475 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_475, 0, x_474);
lean_ctor_set_uint8(x_475, sizeof(void*)*1, x_375);
lean_ctor_set_uint8(x_475, sizeof(void*)*1 + 1, x_467);
lean_ctor_set(x_2, 0, x_475);
goto _start;
}
}
else
{
lean_object* x_477; uint8_t x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; 
x_477 = lean_ctor_get(x_2, 1);
lean_inc(x_477);
lean_dec(x_2);
x_478 = lean_ctor_get_uint8(x_6, sizeof(void*)*1 + 1);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 x_479 = x_6;
} else {
 lean_dec_ref(x_6);
 x_479 = lean_box(0);
}
x_480 = lean_ctor_get(x_7, 1);
lean_inc(x_480);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_481 = x_7;
} else {
 lean_dec_ref(x_7);
 x_481 = lean_box(0);
}
x_482 = lean_ctor_get(x_10, 1);
lean_inc(x_482);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_483 = x_10;
} else {
 lean_dec_ref(x_10);
 x_483 = lean_box(0);
}
x_484 = lean_ctor_get(x_11, 0);
lean_inc(x_484);
lean_dec(x_11);
if (lean_is_scalar(x_483)) {
 x_485 = lean_alloc_ctor(0, 2, 0);
} else {
 x_485 = x_483;
}
lean_ctor_set(x_485, 0, x_484);
lean_ctor_set(x_485, 1, x_482);
if (lean_is_scalar(x_481)) {
 x_486 = lean_alloc_ctor(1, 2, 0);
} else {
 x_486 = x_481;
}
lean_ctor_set(x_486, 0, x_485);
lean_ctor_set(x_486, 1, x_480);
if (lean_is_scalar(x_479)) {
 x_487 = lean_alloc_ctor(0, 1, 2);
} else {
 x_487 = x_479;
}
lean_ctor_set(x_487, 0, x_486);
lean_ctor_set_uint8(x_487, sizeof(void*)*1, x_375);
lean_ctor_set_uint8(x_487, sizeof(void*)*1 + 1, x_478);
x_488 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_488, 0, x_487);
lean_ctor_set(x_488, 1, x_477);
x_2 = x_488;
goto _start;
}
}
}
}
}
}
}
}
lean_object* l___private_Init_Data_Format_Basic_0__Std_Format_be___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Init_Data_Format_Basic_0__Std_Format_be(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Std_Format_bracket(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_4 = lean_string_length(x_1);
x_5 = lean_nat_to_int(x_4);
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_1);
x_7 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_3);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_9);
x_11 = 0;
x_12 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*1, x_11);
return x_12;
}
}
lean_object* l_Std_Format_paren(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_2 = lean_mk_string("(");
x_3 = lean_string_length(x_2);
x_4 = lean_nat_to_int(x_3);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_2);
x_6 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_1);
x_7 = lean_mk_string(")");
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_9);
x_11 = 0;
x_12 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*1, x_11);
return x_12;
}
}
lean_object* l_Std_Format_sbracket(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_2 = lean_mk_string("[");
x_3 = lean_string_length(x_2);
x_4 = lean_nat_to_int(x_3);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_2);
x_6 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_1);
x_7 = lean_mk_string("]");
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_9);
x_11 = 0;
x_12 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*1, x_11);
return x_12;
}
}
lean_object* l_Std_Format_bracketFill(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_4 = lean_string_length(x_1);
x_5 = lean_nat_to_int(x_4);
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_1);
x_7 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_3);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_9);
x_11 = 1;
x_12 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*1, x_11);
return x_12;
}
}
static lean_object* _init_l_Std_Format_defIndent() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(2u);
return x_1;
}
}
static uint8_t _init_l_Std_Format_defUnicode() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static lean_object* _init_l_Std_Format_defWidth() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(120u);
return x_1;
}
}
lean_object* l_Std_Format_nestD(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Std_Format_defIndent;
x_3 = lean_nat_to_int(x_2);
x_4 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
}
lean_object* l_Std_Format_indentD(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_box(1);
x_3 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
x_4 = l_Std_Format_nestD(x_3);
return x_4;
}
}
lean_object* l_Std_Format_pretty_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Std_Format_pretty_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_Format_pretty_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* lean_format_pretty(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_to_int(x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = 0;
x_9 = 0;
x_10 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set_uint8(x_10, sizeof(void*)*1, x_8);
lean_ctor_set_uint8(x_10, sizeof(void*)*1 + 1, x_9);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_mk_string("");
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
x_14 = l___private_Init_Data_Format_Basic_0__Std_Format_be(x_2, x_11, x_13);
lean_dec(x_2);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
return x_16;
}
}
lean_object* l_Std_fmt___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
lean_object* l_Std_fmt(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_fmt___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Std_instToFormatFormat(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Std_instToFormatFormat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_instToFormatFormat(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Std_instToFormatString(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Std_Format_joinSep_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; 
lean_dec(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_3, x_2);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_4, x_8, x_2);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_apply_3(x_5, x_10, x_7, x_2);
return x_11;
}
}
}
}
lean_object* l_Std_Format_joinSep_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_Format_joinSep_match__1___rarg), 5, 0);
return x_3;
}
}
lean_object* l_Std_Format_joinSep___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_3);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_apply_1(x_1, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
lean_inc(x_1);
x_9 = lean_apply_1(x_1, x_8);
lean_inc(x_3);
x_10 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
x_11 = l_Std_Format_joinSep___rarg(x_1, x_5, x_3);
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_Std_Format_joinSep(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_Format_joinSep___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_Format_prefixJoin_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Std_Format_prefixJoin_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_Format_prefixJoin_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Std_Format_prefixJoin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_1);
x_7 = lean_apply_1(x_1, x_5);
lean_inc(x_2);
x_8 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_Std_Format_prefixJoin___rarg(x_1, x_2, x_6);
x_10 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
lean_object* l_Std_Format_prefixJoin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_Format_prefixJoin___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_Format_joinSuffix_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_apply_1(x_3, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_3(x_4, x_6, x_7, x_2);
return x_8;
}
}
}
lean_object* l_Std_Format_joinSuffix_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_Format_joinSuffix_match__1___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Std_Format_joinSuffix___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; 
lean_dec(x_3);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
lean_inc(x_1);
x_7 = lean_apply_1(x_1, x_5);
lean_inc(x_3);
x_8 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
x_9 = l_Std_Format_joinSuffix___rarg(x_1, x_6, x_3);
x_10 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
lean_object* l_Std_Format_joinSuffix(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_Format_joinSuffix___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init_Control_State(lean_object*);
lean_object* initialize_Init_Data_Int_Basic(lean_object*);
lean_object* initialize_Init_Data_String_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Data_Format_Basic(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_State(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Format_instInhabitedFlattenBehavior = _init_l_Std_Format_instInhabitedFlattenBehavior();
l_Std_Format_instBEqFlattenBehavior = _init_l_Std_Format_instBEqFlattenBehavior();
lean_mark_persistent(l_Std_Format_instBEqFlattenBehavior);
l_Std_instInhabitedFormat = _init_l_Std_instInhabitedFormat();
lean_mark_persistent(l_Std_instInhabitedFormat);
l___private_Init_Data_Format_Basic_0__Std_Format_SpaceResult_foundLine___default = _init_l___private_Init_Data_Format_Basic_0__Std_Format_SpaceResult_foundLine___default();
l___private_Init_Data_Format_Basic_0__Std_Format_SpaceResult_foundFlattenedHardLine___default = _init_l___private_Init_Data_Format_Basic_0__Std_Format_SpaceResult_foundFlattenedHardLine___default();
l___private_Init_Data_Format_Basic_0__Std_Format_SpaceResult_space___default = _init_l___private_Init_Data_Format_Basic_0__Std_Format_SpaceResult_space___default();
lean_mark_persistent(l___private_Init_Data_Format_Basic_0__Std_Format_SpaceResult_space___default);
l_Std_Format_instInhabitedSpaceResult = _init_l_Std_Format_instInhabitedSpaceResult();
lean_mark_persistent(l_Std_Format_instInhabitedSpaceResult);
l___private_Init_Data_Format_Basic_0__Std_Format_State_out___default = _init_l___private_Init_Data_Format_Basic_0__Std_Format_State_out___default();
lean_mark_persistent(l___private_Init_Data_Format_Basic_0__Std_Format_State_out___default);
l___private_Init_Data_Format_Basic_0__Std_Format_State_column___default = _init_l___private_Init_Data_Format_Basic_0__Std_Format_State_column___default();
lean_mark_persistent(l___private_Init_Data_Format_Basic_0__Std_Format_State_column___default);
l_Std_Format_defIndent = _init_l_Std_Format_defIndent();
lean_mark_persistent(l_Std_Format_defIndent);
l_Std_Format_defUnicode = _init_l_Std_Format_defUnicode();
l_Std_Format_defWidth = _init_l_Std_Format_defWidth();
lean_mark_persistent(l_Std_Format_defWidth);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
