// Lean compiler output
// Module: Lean.Data.Position
// Imports: Init Lean.Data.Format
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
lean_object* l_Lean_FileMap_toPosition_match__1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Position_0__Lean_decEqPosition____x40_Lean_Data_Position___hyg_31_(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_ofString_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPosition;
lean_object* l_Nat_decLt___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Position_0__Lean_decEqPosition____x40_Lean_Data_Position___hyg_31__match__1(lean_object*);
extern lean_object* l_instInhabitedNat;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_prodHasDecidableLt___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Position_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_instReprPosition;
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition_toColumn(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Position_0__Lean_decEqPosition____x40_Lean_Data_Position___hyg_31____boxed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_FileMap_toPosition___spec__1___boxed(lean_object*);
lean_object* l___private_Lean_Data_Position_0__Lean_decEqPosition____x40_Lean_Data_Position___hyg_31__match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Lean_Position_instToFormatPosition_match__1___rarg(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_ofString(lean_object*);
lean_object* l_Lean_FileMap_toPosition_toColumn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instDecidableEqPosition(lean_object*, lean_object*);
lean_object* l_Lean_Position_instToStringPosition(lean_object*);
lean_object* l_Lean_FileMap_toPosition_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_UInt32_decEq(uint32_t, uint32_t);
lean_object* l___private_Lean_Data_Position_0__Lean_reprPosition____x40_Lean_Data_Position___hyg_136____boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_FileMap_toPosition___spec__1(lean_object*);
lean_object* l_Array_back___at_Lean_FileMap_toPosition___spec__2___boxed(lean_object*);
lean_object* l_Array_back___at_Lean_FileMap_toPosition___spec__2(lean_object*);
lean_object* l_Lean_instDecidableEqPosition___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Position_instToFormatPosition(lean_object*);
lean_object* l_Lean_Position_instToFormatPosition_match__1(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l___private_Lean_Data_Position_0__Lean_reprPosition____x40_Lean_Data_Position___hyg_136_(lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Position_lt___boxed(lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedFileMap;
lean_object* l_Nat_decEq___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_String_toFileMap(lean_object*);
static lean_object* _init_l_Lean_instInhabitedPosition() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Data_Position_0__Lean_decEqPosition____x40_Lean_Data_Position___hyg_31__match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_apply_4(x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l___private_Lean_Data_Position_0__Lean_decEqPosition____x40_Lean_Data_Position___hyg_31__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_Position_0__Lean_decEqPosition____x40_Lean_Data_Position___hyg_31__match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l___private_Lean_Data_Position_0__Lean_decEqPosition____x40_Lean_Data_Position___hyg_31_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_nat_dec_eq(x_3, x_5);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_eq(x_4, x_6);
return x_9;
}
}
}
lean_object* l___private_Lean_Data_Position_0__Lean_decEqPosition____x40_Lean_Data_Position___hyg_31____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Data_Position_0__Lean_decEqPosition____x40_Lean_Data_Position___hyg_31_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_instDecidableEqPosition(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l___private_Lean_Data_Position_0__Lean_decEqPosition____x40_Lean_Data_Position___hyg_31_(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_instDecidableEqPosition___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_instDecidableEqPosition(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Data_Position_0__Lean_reprPosition____x40_Lean_Data_Position___hyg_136_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; 
x_3 = lean_mk_string("line");
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
x_16 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_box(1);
x_18 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_mk_string("column");
x_20 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_8);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = l_Nat_repr(x_23);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_26, 0, x_22);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_mk_string("{ ");
x_28 = lean_string_length(x_27);
x_29 = lean_nat_to_int(x_28);
x_30 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_30, 0, x_27);
x_31 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_26);
x_32 = lean_mk_string(" }");
x_33 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_35, 0, x_29);
lean_ctor_set(x_35, 1, x_34);
x_36 = 0;
x_37 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set_uint8(x_37, sizeof(void*)*1, x_36);
return x_37;
}
}
lean_object* l___private_Lean_Data_Position_0__Lean_reprPosition____x40_Lean_Data_Position___hyg_136____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Data_Position_0__Lean_reprPosition____x40_Lean_Data_Position___hyg_136_(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_instReprPosition() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Position_0__Lean_reprPosition____x40_Lean_Data_Position___hyg_136____boxed), 2, 0);
return x_1;
}
}
lean_object* l_Lean_Position_lt(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_inc(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_4);
lean_inc(x_6);
lean_inc(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
x_9 = lean_alloc_closure((void*)(l_Nat_decEq___boxed), 2, 0);
x_10 = lean_alloc_closure((void*)(l_Nat_decLt___boxed), 2, 0);
lean_inc(x_10);
lean_inc(x_9);
x_11 = l_prodHasDecidableLt___rarg(x_9, x_9, x_10, x_10, x_7, x_8);
lean_dec(x_9);
return x_11;
}
}
lean_object* l_Lean_Position_lt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Position_lt(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Position_instToFormatPosition_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Position_instToFormatPosition_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Position_instToFormatPosition_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_repr(x_1);
x_3 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
lean_object* l_Lean_Position_instToFormatPosition(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_2);
x_5 = lean_mk_string("⟨");
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
x_8 = lean_mk_string(", ");
x_9 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_3);
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_mk_string("⟩");
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
lean_object* l_Lean_Position_instToStringPosition(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Nat_repr(x_2);
x_5 = lean_mk_string("⟨");
x_6 = lean_string_append(x_5, x_4);
lean_dec(x_4);
x_7 = lean_mk_string(", ");
x_8 = lean_string_append(x_6, x_7);
lean_dec(x_7);
x_9 = l_Nat_repr(x_3);
x_10 = lean_string_append(x_8, x_9);
lean_dec(x_9);
x_11 = lean_mk_string("⟩");
x_12 = lean_string_append(x_10, x_11);
lean_dec(x_11);
return x_12;
}
}
static lean_object* _init_l_Lean_instInhabitedFileMap() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
x_3 = lean_mk_string("");
lean_inc(x_2);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_2);
return x_4;
}
}
lean_object* l_Lean_FileMap_ofString_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_string_utf8_at_end(x_1, x_2);
if (x_6 == 0)
{
uint32_t x_7; lean_object* x_8; uint32_t x_9; uint8_t x_10; 
x_7 = lean_string_utf8_get(x_1, x_2);
x_8 = lean_string_utf8_next(x_1, x_2);
lean_dec(x_2);
x_9 = 10;
x_10 = x_7 == x_9;
if (x_10 == 0)
{
x_2 = x_8;
goto _start;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_3, x_12);
lean_dec(x_3);
lean_inc(x_8);
x_14 = lean_array_push(x_4, x_8);
lean_inc(x_13);
x_15 = lean_array_push(x_5, x_13);
x_2 = x_8;
x_3 = x_13;
x_4 = x_14;
x_5 = x_15;
goto _start;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_array_push(x_4, x_2);
x_18 = lean_array_push(x_5, x_3);
x_19 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_18);
return x_19;
}
}
}
lean_object* l_Lean_FileMap_ofString(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_mk_empty_array_with_capacity(x_2);
x_4 = lean_unsigned_to_nat(0u);
lean_inc(x_3);
x_5 = lean_array_push(x_3, x_4);
x_6 = lean_array_push(x_3, x_2);
x_7 = l_Lean_FileMap_ofString_loop(x_1, x_4, x_2, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_FileMap_toPosition_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_FileMap_toPosition_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_FileMap_toPosition_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_FileMap_toPosition_toColumn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_eq(x_3, x_1);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = lean_string_utf8_at_end(x_2, x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_string_utf8_next(x_2, x_3);
lean_dec(x_3);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_4, x_8);
lean_dec(x_4);
x_3 = x_7;
x_4 = x_9;
goto _start;
}
else
{
lean_dec(x_3);
return x_4;
}
}
else
{
lean_dec(x_3);
return x_4;
}
}
}
lean_object* l_Lean_FileMap_toPosition_toColumn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_FileMap_toPosition_toColumn(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_FileMap_toPosition_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = l_instInhabitedNat;
x_8 = lean_array_get(x_7, x_3, x_5);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
x_11 = lean_nat_dec_eq(x_6, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
lean_dec(x_8);
x_12 = lean_nat_add(x_5, x_6);
x_13 = lean_unsigned_to_nat(2u);
x_14 = lean_nat_div(x_12, x_13);
lean_dec(x_12);
x_15 = lean_array_get(x_7, x_3, x_14);
x_16 = lean_nat_dec_eq(x_1, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = lean_nat_dec_lt(x_15, x_1);
lean_dec(x_15);
if (x_17 == 0)
{
lean_dec(x_6);
x_6 = x_14;
goto _start;
}
else
{
lean_dec(x_5);
x_5 = x_14;
goto _start;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
x_20 = lean_array_get(x_7, x_4, x_14);
lean_dec(x_14);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_6);
x_23 = lean_array_get(x_7, x_4, x_5);
lean_dec(x_5);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Lean_FileMap_toPosition_toColumn(x_1, x_2, x_8, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
lean_object* l_Lean_FileMap_toPosition_loop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_FileMap_toPosition_loop(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_back___at_Lean_FileMap_toPosition___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_2, x_3);
lean_dec(x_2);
x_5 = l_instInhabitedNat;
x_6 = lean_array_get(x_5, x_1, x_4);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Array_back___at_Lean_FileMap_toPosition___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_2, x_3);
lean_dec(x_2);
x_5 = l_instInhabitedNat;
x_6 = lean_array_get(x_5, x_1, x_4);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_FileMap_toPosition(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
x_6 = lean_array_get_size(x_4);
x_7 = lean_unsigned_to_nat(2u);
x_8 = lean_nat_dec_le(x_7, x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_6);
x_9 = l_Array_back___at_Lean_FileMap_toPosition___spec__1(x_5);
x_10 = l_Array_back___at_Lean_FileMap_toPosition___spec__2(x_4);
x_11 = lean_nat_sub(x_2, x_10);
lean_dec(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_Array_back___at_Lean_FileMap_toPosition___spec__2(x_4);
x_14 = lean_nat_dec_le(x_2, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_6);
x_15 = l_Array_back___at_Lean_FileMap_toPosition___spec__1(x_5);
x_16 = lean_nat_sub(x_2, x_13);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_13);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_6, x_18);
lean_dec(x_6);
x_20 = lean_unsigned_to_nat(0u);
x_21 = l_Lean_FileMap_toPosition_loop(x_2, x_3, x_4, x_5, x_20, x_19);
return x_21;
}
}
}
}
lean_object* l_Array_back___at_Lean_FileMap_toPosition___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_back___at_Lean_FileMap_toPosition___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Array_back___at_Lean_FileMap_toPosition___spec__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_back___at_Lean_FileMap_toPosition___spec__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_FileMap_toPosition___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_FileMap_toPosition(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_String_toFileMap(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_FileMap_ofString(x_1);
return x_2;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Data_Format(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Data_Position(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Format(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedPosition = _init_l_Lean_instInhabitedPosition();
lean_mark_persistent(l_Lean_instInhabitedPosition);
l_Lean_instReprPosition = _init_l_Lean_instReprPosition();
lean_mark_persistent(l_Lean_instReprPosition);
l_Lean_instInhabitedFileMap = _init_l_Lean_instInhabitedFileMap();
lean_mark_persistent(l_Lean_instInhabitedFileMap);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
