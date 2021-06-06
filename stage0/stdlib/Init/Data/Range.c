// Lean compiler output
// Module: Init.Data.Range
// Imports: Init.Meta
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
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(lean_object*, lean_object*);
lean_object* l_Std_Range_forM(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Std_Range_term_x5b_x3a___x3a___x5d;
lean_object* l_Std_Range_step___default;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Std_Range_instForInRangeNat___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Std_Range_forIn_loop(lean_object*, lean_object*);
lean_object* l_Std_Range_forM_loop___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop_match__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forM_loop___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_Range_term_x5b___x3a___x3a___x5d;
lean_object* l_Std_Range_forM___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forM_loop(lean_object*);
lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_1056_(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_525_(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_758_(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_351_(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_start___default;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Std_Range_forM_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_instForMRangeNat(lean_object*);
lean_object* l_Std_Range_forIn_loop_match__2(lean_object*);
lean_object* l_Std_Range_forM_loop___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_term_x5b___x3a___x5d;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Std_Range_term_x5b_x3a___x5d;
lean_object* l_Std_Range_instForInRangeNat(lean_object*, lean_object*);
lean_object* l_Std_Range_forIn(lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop_match__1(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Std_Range_forIn___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Std_Range_start___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
static lean_object* _init_l_Std_Range_step___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(1u);
return x_1;
}
}
lean_object* l_Std_Range_forIn_loop_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Std_Range_forIn_loop_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_Range_forIn_loop_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Std_Range_forIn_loop_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_2, x_9);
return x_10;
}
}
}
lean_object* l_Std_Range_forIn_loop_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_Range_forIn_loop_match__2___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Std_Range_forIn_loop_match__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_Range_forIn_loop_match__2___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Std_Range_forIn_loop___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_2(x_9, lean_box(0), x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
x_13 = lean_nat_add(x_3, x_12);
lean_dec(x_12);
x_14 = l_Std_Range_forIn_loop___rarg(x_1, x_2, x_4, x_5, x_13, x_11);
return x_14;
}
}
}
lean_object* l_Std_Range_forIn_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_nat_dec_le(x_7, x_5);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_4, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_4, x_11);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_3);
lean_inc(x_5);
x_14 = lean_apply_2(x_3, x_5, x_6);
x_15 = lean_alloc_closure((void*)(l_Std_Range_forIn_loop___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_5);
lean_closure_set(x_15, 3, x_3);
lean_closure_set(x_15, 4, x_12);
x_16 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_14, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_apply_2(x_18, lean_box(0), x_6);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_apply_2(x_21, lean_box(0), x_6);
return x_22;
}
}
}
lean_object* l_Std_Range_forIn_loop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_Range_forIn_loop___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Std_Range_forIn_loop___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_Range_forIn_loop___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Std_Range_forIn_loop___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_Range_forIn_loop___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_7;
}
}
lean_object* l_Std_Range_forIn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = l_Std_Range_forIn_loop___rarg(x_1, x_2, x_4, x_5, x_6, x_3);
lean_dec(x_5);
return x_7;
}
}
lean_object* l_Std_Range_forIn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_Range_forIn___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Std_Range_instForInRangeNat___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = l_Std_Range_forIn_loop___rarg(x_1, x_2, x_4, x_5, x_6, x_3);
lean_dec(x_5);
return x_7;
}
}
lean_object* l_Std_Range_instForInRangeNat(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_Range_instForInRangeNat___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Std_Range_forM_loop___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = lean_nat_add(x_2, x_7);
lean_dec(x_7);
x_9 = l_Std_Range_forM_loop___rarg(x_3, x_1, x_4, x_5, x_8);
return x_9;
}
}
lean_object* l_Std_Range_forM_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_7 = lean_nat_dec_le(x_6, x_5);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_4, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_4, x_10);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_inc(x_3);
lean_inc(x_5);
x_13 = lean_apply_1(x_3, x_5);
x_14 = lean_alloc_closure((void*)(l_Std_Range_forM_loop___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_14, 0, x_2);
lean_closure_set(x_14, 1, x_5);
lean_closure_set(x_14, 2, x_1);
lean_closure_set(x_14, 3, x_3);
lean_closure_set(x_14, 4, x_11);
x_15 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_13, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_box(0);
x_19 = lean_apply_2(x_17, lean_box(0), x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_box(0);
x_23 = lean_apply_2(x_21, lean_box(0), x_22);
return x_23;
}
}
}
lean_object* l_Std_Range_forM_loop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_Range_forM_loop___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Std_Range_forM_loop___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_Range_forM_loop___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Std_Range_forM_loop___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_Range_forM_loop___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Std_Range_forM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = l_Std_Range_forM_loop___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Std_Range_forM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_Range_forM___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_Range_instForMRangeNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_Range_forM___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Std_Range_term_x5b_x3a___x5d() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Std");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Range");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("term[:_]");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("andthen");
x_9 = lean_name_mk_string(x_1, x_8);
x_10 = lean_mk_string("[");
x_11 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_mk_string(":");
x_13 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_13, 0, x_12);
lean_inc(x_9);
x_14 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_13);
x_15 = lean_mk_string("term");
x_16 = lean_name_mk_string(x_1, x_15);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
lean_inc(x_9);
x_19 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_14);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_mk_string("]");
x_21 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_22, 0, x_9);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 2, x_21);
x_23 = lean_unsigned_to_nat(1024u);
x_24 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_24, 0, x_7);
lean_ctor_set(x_24, 1, x_23);
lean_ctor_set(x_24, 2, x_22);
return x_24;
}
}
static lean_object* _init_l_Std_Range_term_x5b___x3a___x5d() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Std");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Range");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("term[_:_]");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("andthen");
x_9 = lean_name_mk_string(x_1, x_8);
x_10 = lean_mk_string("[");
x_11 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_mk_string("term");
x_13 = lean_name_mk_string(x_1, x_12);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
lean_inc(x_15);
lean_inc(x_9);
x_16 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_11);
lean_ctor_set(x_16, 2, x_15);
x_17 = lean_mk_string(":");
x_18 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_18, 0, x_17);
lean_inc(x_9);
x_19 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_16);
lean_ctor_set(x_19, 2, x_18);
lean_inc(x_9);
x_20 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_20, 0, x_9);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_20, 2, x_15);
x_21 = lean_mk_string("]");
x_22 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_23, 0, x_9);
lean_ctor_set(x_23, 1, x_20);
lean_ctor_set(x_23, 2, x_22);
x_24 = lean_unsigned_to_nat(1024u);
x_25 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_25, 0, x_7);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_25, 2, x_23);
return x_25;
}
}
static lean_object* _init_l_Std_Range_term_x5b_x3a___x3a___x5d() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Std");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Range");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("term[:_:_]");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("andthen");
x_9 = lean_name_mk_string(x_1, x_8);
x_10 = lean_mk_string("[");
x_11 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_mk_string(":");
x_13 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_13, 0, x_12);
lean_inc(x_13);
lean_inc(x_9);
x_14 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_13);
x_15 = lean_mk_string("term");
x_16 = lean_name_mk_string(x_1, x_15);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
lean_inc(x_18);
lean_inc(x_9);
x_19 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_14);
lean_ctor_set(x_19, 2, x_18);
lean_inc(x_9);
x_20 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_20, 0, x_9);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_20, 2, x_13);
lean_inc(x_9);
x_21 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_21, 0, x_9);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_21, 2, x_18);
x_22 = lean_mk_string("]");
x_23 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_24, 0, x_9);
lean_ctor_set(x_24, 1, x_21);
lean_ctor_set(x_24, 2, x_23);
x_25 = lean_unsigned_to_nat(1024u);
x_26 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_26, 0, x_7);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_24);
return x_26;
}
}
static lean_object* _init_l_Std_Range_term_x5b___x3a___x3a___x5d() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Std");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Range");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("term[_:_:_]");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("andthen");
x_9 = lean_name_mk_string(x_1, x_8);
x_10 = lean_mk_string("[");
x_11 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_mk_string("term");
x_13 = lean_name_mk_string(x_1, x_12);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
lean_inc(x_15);
lean_inc(x_9);
x_16 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_11);
lean_ctor_set(x_16, 2, x_15);
x_17 = lean_mk_string(":");
x_18 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_18, 0, x_17);
lean_inc(x_18);
lean_inc(x_9);
x_19 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_16);
lean_ctor_set(x_19, 2, x_18);
lean_inc(x_15);
lean_inc(x_9);
x_20 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_20, 0, x_9);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_20, 2, x_15);
lean_inc(x_9);
x_21 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_21, 0, x_9);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_21, 2, x_18);
lean_inc(x_9);
x_22 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_22, 0, x_9);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_22, 2, x_15);
x_23 = lean_mk_string("]");
x_24 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_25, 0, x_9);
lean_ctor_set(x_25, 1, x_22);
lean_ctor_set(x_25, 2, x_24);
x_26 = lean_unsigned_to_nat(1024u);
x_27 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_27, 0, x_7);
lean_ctor_set(x_27, 1, x_26);
lean_ctor_set(x_27, 2, x_25);
return x_27;
}
}
lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_351_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Std");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Range");
lean_inc(x_7);
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("term[:_]");
lean_inc(x_8);
x_10 = lean_name_mk_string(x_8, x_9);
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(1);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(2u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_2, 1);
lean_inc(x_20);
lean_dec(x_2);
x_21 = lean_mk_string("Lean");
x_22 = lean_name_mk_string(x_4, x_21);
x_23 = lean_mk_string("Parser");
x_24 = lean_name_mk_string(x_22, x_23);
x_25 = lean_mk_string("Term");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = lean_mk_string("structInst");
lean_inc(x_26);
x_28 = lean_name_mk_string(x_26, x_27);
x_29 = lean_mk_string("{");
lean_inc(x_18);
x_30 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_30, 0, x_18);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_mk_string("null");
x_32 = lean_name_mk_string(x_4, x_31);
x_33 = lean_unsigned_to_nat(0u);
x_34 = lean_mk_empty_array_with_capacity(x_33);
lean_inc(x_32);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_mk_string("group");
x_37 = lean_name_mk_string(x_4, x_36);
x_38 = lean_mk_string("structInstField");
lean_inc(x_26);
x_39 = lean_name_mk_string(x_26, x_38);
x_40 = lean_mk_string("structInstLVal");
lean_inc(x_26);
x_41 = lean_name_mk_string(x_26, x_40);
x_42 = lean_mk_string("stop");
x_43 = lean_string_utf8_byte_size(x_42);
lean_inc(x_42);
x_44 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_33);
lean_ctor_set(x_44, 2, x_43);
lean_inc(x_42);
x_45 = lean_name_mk_string(x_4, x_42);
lean_inc(x_19);
lean_inc(x_20);
x_46 = l_Lean_addMacroScope(x_20, x_45, x_19);
lean_inc(x_8);
x_47 = lean_name_mk_string(x_8, x_42);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
lean_inc(x_18);
x_51 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_51, 0, x_18);
lean_ctor_set(x_51, 1, x_44);
lean_ctor_set(x_51, 2, x_46);
lean_ctor_set(x_51, 3, x_50);
x_52 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_52);
x_53 = lean_array_push(x_52, x_51);
lean_inc(x_35);
x_54 = lean_array_push(x_53, x_35);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_41);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_mk_string(":=");
lean_inc(x_18);
x_57 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_57, 0, x_18);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_unsigned_to_nat(3u);
x_59 = lean_mk_empty_array_with_capacity(x_58);
x_60 = lean_array_push(x_59, x_55);
x_61 = lean_array_push(x_60, x_57);
x_62 = lean_array_push(x_61, x_15);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_39);
lean_ctor_set(x_63, 1, x_62);
lean_inc(x_52);
x_64 = lean_array_push(x_52, x_63);
lean_inc(x_35);
x_65 = lean_array_push(x_64, x_35);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_37);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_unsigned_to_nat(1u);
x_68 = lean_mk_empty_array_with_capacity(x_67);
lean_inc(x_68);
x_69 = lean_array_push(x_68, x_66);
lean_inc(x_32);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_32);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_mk_string("optEllipsis");
x_72 = lean_name_mk_string(x_26, x_71);
lean_inc(x_35);
x_73 = lean_array_push(x_68, x_35);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_mk_string(":");
lean_inc(x_18);
x_76 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_76, 0, x_18);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_string_utf8_byte_size(x_7);
lean_inc(x_7);
x_78 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_78, 0, x_7);
lean_ctor_set(x_78, 1, x_33);
lean_ctor_set(x_78, 2, x_77);
x_79 = lean_name_mk_string(x_4, x_7);
x_80 = l_Lean_addMacroScope(x_20, x_79, x_19);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_8);
lean_ctor_set(x_81, 1, x_48);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_48);
lean_inc(x_18);
x_83 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_83, 0, x_18);
lean_ctor_set(x_83, 1, x_78);
lean_ctor_set(x_83, 2, x_80);
lean_ctor_set(x_83, 3, x_82);
x_84 = lean_array_push(x_52, x_76);
x_85 = lean_array_push(x_84, x_83);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_32);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_mk_string("}");
x_88 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_88, 0, x_18);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_unsigned_to_nat(6u);
x_90 = lean_mk_empty_array_with_capacity(x_89);
x_91 = lean_array_push(x_90, x_30);
x_92 = lean_array_push(x_91, x_35);
x_93 = lean_array_push(x_92, x_70);
x_94 = lean_array_push(x_93, x_74);
x_95 = lean_array_push(x_94, x_86);
x_96 = lean_array_push(x_95, x_88);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_28);
lean_ctor_set(x_97, 1, x_96);
lean_ctor_set(x_16, 0, x_97);
return x_16;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_98 = lean_ctor_get(x_16, 0);
x_99 = lean_ctor_get(x_16, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_16);
x_100 = lean_ctor_get(x_2, 2);
lean_inc(x_100);
x_101 = lean_ctor_get(x_2, 1);
lean_inc(x_101);
lean_dec(x_2);
x_102 = lean_mk_string("Lean");
x_103 = lean_name_mk_string(x_4, x_102);
x_104 = lean_mk_string("Parser");
x_105 = lean_name_mk_string(x_103, x_104);
x_106 = lean_mk_string("Term");
x_107 = lean_name_mk_string(x_105, x_106);
x_108 = lean_mk_string("structInst");
lean_inc(x_107);
x_109 = lean_name_mk_string(x_107, x_108);
x_110 = lean_mk_string("{");
lean_inc(x_98);
x_111 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_111, 0, x_98);
lean_ctor_set(x_111, 1, x_110);
x_112 = lean_mk_string("null");
x_113 = lean_name_mk_string(x_4, x_112);
x_114 = lean_unsigned_to_nat(0u);
x_115 = lean_mk_empty_array_with_capacity(x_114);
lean_inc(x_113);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_113);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_mk_string("group");
x_118 = lean_name_mk_string(x_4, x_117);
x_119 = lean_mk_string("structInstField");
lean_inc(x_107);
x_120 = lean_name_mk_string(x_107, x_119);
x_121 = lean_mk_string("structInstLVal");
lean_inc(x_107);
x_122 = lean_name_mk_string(x_107, x_121);
x_123 = lean_mk_string("stop");
x_124 = lean_string_utf8_byte_size(x_123);
lean_inc(x_123);
x_125 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_114);
lean_ctor_set(x_125, 2, x_124);
lean_inc(x_123);
x_126 = lean_name_mk_string(x_4, x_123);
lean_inc(x_100);
lean_inc(x_101);
x_127 = l_Lean_addMacroScope(x_101, x_126, x_100);
lean_inc(x_8);
x_128 = lean_name_mk_string(x_8, x_123);
x_129 = lean_box(0);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_128);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_129);
lean_inc(x_98);
x_132 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_132, 0, x_98);
lean_ctor_set(x_132, 1, x_125);
lean_ctor_set(x_132, 2, x_127);
lean_ctor_set(x_132, 3, x_131);
x_133 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_133);
x_134 = lean_array_push(x_133, x_132);
lean_inc(x_116);
x_135 = lean_array_push(x_134, x_116);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_122);
lean_ctor_set(x_136, 1, x_135);
x_137 = lean_mk_string(":=");
lean_inc(x_98);
x_138 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_138, 0, x_98);
lean_ctor_set(x_138, 1, x_137);
x_139 = lean_unsigned_to_nat(3u);
x_140 = lean_mk_empty_array_with_capacity(x_139);
x_141 = lean_array_push(x_140, x_136);
x_142 = lean_array_push(x_141, x_138);
x_143 = lean_array_push(x_142, x_15);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_120);
lean_ctor_set(x_144, 1, x_143);
lean_inc(x_133);
x_145 = lean_array_push(x_133, x_144);
lean_inc(x_116);
x_146 = lean_array_push(x_145, x_116);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_118);
lean_ctor_set(x_147, 1, x_146);
x_148 = lean_unsigned_to_nat(1u);
x_149 = lean_mk_empty_array_with_capacity(x_148);
lean_inc(x_149);
x_150 = lean_array_push(x_149, x_147);
lean_inc(x_113);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_113);
lean_ctor_set(x_151, 1, x_150);
x_152 = lean_mk_string("optEllipsis");
x_153 = lean_name_mk_string(x_107, x_152);
lean_inc(x_116);
x_154 = lean_array_push(x_149, x_116);
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_153);
lean_ctor_set(x_155, 1, x_154);
x_156 = lean_mk_string(":");
lean_inc(x_98);
x_157 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_157, 0, x_98);
lean_ctor_set(x_157, 1, x_156);
x_158 = lean_string_utf8_byte_size(x_7);
lean_inc(x_7);
x_159 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_159, 0, x_7);
lean_ctor_set(x_159, 1, x_114);
lean_ctor_set(x_159, 2, x_158);
x_160 = lean_name_mk_string(x_4, x_7);
x_161 = l_Lean_addMacroScope(x_101, x_160, x_100);
x_162 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_162, 0, x_8);
lean_ctor_set(x_162, 1, x_129);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_129);
lean_inc(x_98);
x_164 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_164, 0, x_98);
lean_ctor_set(x_164, 1, x_159);
lean_ctor_set(x_164, 2, x_161);
lean_ctor_set(x_164, 3, x_163);
x_165 = lean_array_push(x_133, x_157);
x_166 = lean_array_push(x_165, x_164);
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_113);
lean_ctor_set(x_167, 1, x_166);
x_168 = lean_mk_string("}");
x_169 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_169, 0, x_98);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_unsigned_to_nat(6u);
x_171 = lean_mk_empty_array_with_capacity(x_170);
x_172 = lean_array_push(x_171, x_111);
x_173 = lean_array_push(x_172, x_116);
x_174 = lean_array_push(x_173, x_151);
x_175 = lean_array_push(x_174, x_155);
x_176 = lean_array_push(x_175, x_167);
x_177 = lean_array_push(x_176, x_169);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_109);
lean_ctor_set(x_178, 1, x_177);
x_179 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_179, 0, x_178);
lean_ctor_set(x_179, 1, x_99);
return x_179;
}
}
}
}
lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_525_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Std");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Range");
lean_inc(x_7);
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("term[_:_]");
lean_inc(x_8);
x_10 = lean_name_mk_string(x_8, x_9);
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(1);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(3u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
lean_dec(x_1);
x_18 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_2, 2);
lean_inc(x_21);
x_22 = lean_ctor_get(x_2, 1);
lean_inc(x_22);
lean_dec(x_2);
x_23 = lean_mk_string("Lean");
x_24 = lean_name_mk_string(x_4, x_23);
x_25 = lean_mk_string("Parser");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = lean_mk_string("Term");
x_28 = lean_name_mk_string(x_26, x_27);
x_29 = lean_mk_string("structInst");
lean_inc(x_28);
x_30 = lean_name_mk_string(x_28, x_29);
x_31 = lean_mk_string("{");
lean_inc(x_20);
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_20);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_mk_string("null");
x_34 = lean_name_mk_string(x_4, x_33);
x_35 = lean_unsigned_to_nat(0u);
x_36 = lean_mk_empty_array_with_capacity(x_35);
lean_inc(x_34);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_mk_string("group");
x_39 = lean_name_mk_string(x_4, x_38);
x_40 = lean_mk_string("structInstField");
lean_inc(x_28);
x_41 = lean_name_mk_string(x_28, x_40);
x_42 = lean_mk_string("structInstLVal");
lean_inc(x_28);
x_43 = lean_name_mk_string(x_28, x_42);
x_44 = lean_mk_string("start");
x_45 = lean_string_utf8_byte_size(x_44);
lean_inc(x_44);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_35);
lean_ctor_set(x_46, 2, x_45);
lean_inc(x_44);
x_47 = lean_name_mk_string(x_4, x_44);
lean_inc(x_21);
lean_inc(x_22);
x_48 = l_Lean_addMacroScope(x_22, x_47, x_21);
lean_inc(x_8);
x_49 = lean_name_mk_string(x_8, x_44);
x_50 = lean_box(0);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
lean_inc(x_20);
x_53 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_53, 0, x_20);
lean_ctor_set(x_53, 1, x_46);
lean_ctor_set(x_53, 2, x_48);
lean_ctor_set(x_53, 3, x_52);
x_54 = lean_unsigned_to_nat(2u);
x_55 = lean_mk_empty_array_with_capacity(x_54);
lean_inc(x_55);
x_56 = lean_array_push(x_55, x_53);
lean_inc(x_37);
x_57 = lean_array_push(x_56, x_37);
lean_inc(x_43);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_43);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_mk_string(":=");
lean_inc(x_20);
x_60 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_60, 0, x_20);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_61);
x_62 = lean_array_push(x_61, x_58);
lean_inc(x_60);
x_63 = lean_array_push(x_62, x_60);
x_64 = lean_array_push(x_63, x_15);
lean_inc(x_41);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_41);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_mk_string(",");
lean_inc(x_20);
x_67 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_67, 0, x_20);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_68);
x_69 = lean_array_push(x_68, x_67);
lean_inc(x_34);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_34);
lean_ctor_set(x_70, 1, x_69);
lean_inc(x_55);
x_71 = lean_array_push(x_55, x_65);
x_72 = lean_array_push(x_71, x_70);
lean_inc(x_39);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_39);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_mk_string("stop");
x_75 = lean_string_utf8_byte_size(x_74);
lean_inc(x_74);
x_76 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_35);
lean_ctor_set(x_76, 2, x_75);
lean_inc(x_74);
x_77 = lean_name_mk_string(x_4, x_74);
lean_inc(x_21);
lean_inc(x_22);
x_78 = l_Lean_addMacroScope(x_22, x_77, x_21);
lean_inc(x_8);
x_79 = lean_name_mk_string(x_8, x_74);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_50);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_50);
lean_inc(x_20);
x_82 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_82, 0, x_20);
lean_ctor_set(x_82, 1, x_76);
lean_ctor_set(x_82, 2, x_78);
lean_ctor_set(x_82, 3, x_81);
lean_inc(x_55);
x_83 = lean_array_push(x_55, x_82);
lean_inc(x_37);
x_84 = lean_array_push(x_83, x_37);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_43);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_array_push(x_61, x_85);
x_87 = lean_array_push(x_86, x_60);
x_88 = lean_array_push(x_87, x_17);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_41);
lean_ctor_set(x_89, 1, x_88);
lean_inc(x_55);
x_90 = lean_array_push(x_55, x_89);
lean_inc(x_37);
x_91 = lean_array_push(x_90, x_37);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_39);
lean_ctor_set(x_92, 1, x_91);
lean_inc(x_55);
x_93 = lean_array_push(x_55, x_73);
x_94 = lean_array_push(x_93, x_92);
lean_inc(x_34);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_34);
lean_ctor_set(x_95, 1, x_94);
x_96 = lean_mk_string("optEllipsis");
x_97 = lean_name_mk_string(x_28, x_96);
lean_inc(x_37);
x_98 = lean_array_push(x_68, x_37);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_mk_string(":");
lean_inc(x_20);
x_101 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_101, 0, x_20);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_string_utf8_byte_size(x_7);
lean_inc(x_7);
x_103 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_103, 0, x_7);
lean_ctor_set(x_103, 1, x_35);
lean_ctor_set(x_103, 2, x_102);
x_104 = lean_name_mk_string(x_4, x_7);
x_105 = l_Lean_addMacroScope(x_22, x_104, x_21);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_8);
lean_ctor_set(x_106, 1, x_50);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_50);
lean_inc(x_20);
x_108 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_108, 0, x_20);
lean_ctor_set(x_108, 1, x_103);
lean_ctor_set(x_108, 2, x_105);
lean_ctor_set(x_108, 3, x_107);
x_109 = lean_array_push(x_55, x_101);
x_110 = lean_array_push(x_109, x_108);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_34);
lean_ctor_set(x_111, 1, x_110);
x_112 = lean_mk_string("}");
x_113 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_113, 0, x_20);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_unsigned_to_nat(6u);
x_115 = lean_mk_empty_array_with_capacity(x_114);
x_116 = lean_array_push(x_115, x_32);
x_117 = lean_array_push(x_116, x_37);
x_118 = lean_array_push(x_117, x_95);
x_119 = lean_array_push(x_118, x_99);
x_120 = lean_array_push(x_119, x_111);
x_121 = lean_array_push(x_120, x_113);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_30);
lean_ctor_set(x_122, 1, x_121);
lean_ctor_set(x_18, 0, x_122);
return x_18;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_123 = lean_ctor_get(x_18, 0);
x_124 = lean_ctor_get(x_18, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_18);
x_125 = lean_ctor_get(x_2, 2);
lean_inc(x_125);
x_126 = lean_ctor_get(x_2, 1);
lean_inc(x_126);
lean_dec(x_2);
x_127 = lean_mk_string("Lean");
x_128 = lean_name_mk_string(x_4, x_127);
x_129 = lean_mk_string("Parser");
x_130 = lean_name_mk_string(x_128, x_129);
x_131 = lean_mk_string("Term");
x_132 = lean_name_mk_string(x_130, x_131);
x_133 = lean_mk_string("structInst");
lean_inc(x_132);
x_134 = lean_name_mk_string(x_132, x_133);
x_135 = lean_mk_string("{");
lean_inc(x_123);
x_136 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_136, 0, x_123);
lean_ctor_set(x_136, 1, x_135);
x_137 = lean_mk_string("null");
x_138 = lean_name_mk_string(x_4, x_137);
x_139 = lean_unsigned_to_nat(0u);
x_140 = lean_mk_empty_array_with_capacity(x_139);
lean_inc(x_138);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_138);
lean_ctor_set(x_141, 1, x_140);
x_142 = lean_mk_string("group");
x_143 = lean_name_mk_string(x_4, x_142);
x_144 = lean_mk_string("structInstField");
lean_inc(x_132);
x_145 = lean_name_mk_string(x_132, x_144);
x_146 = lean_mk_string("structInstLVal");
lean_inc(x_132);
x_147 = lean_name_mk_string(x_132, x_146);
x_148 = lean_mk_string("start");
x_149 = lean_string_utf8_byte_size(x_148);
lean_inc(x_148);
x_150 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_139);
lean_ctor_set(x_150, 2, x_149);
lean_inc(x_148);
x_151 = lean_name_mk_string(x_4, x_148);
lean_inc(x_125);
lean_inc(x_126);
x_152 = l_Lean_addMacroScope(x_126, x_151, x_125);
lean_inc(x_8);
x_153 = lean_name_mk_string(x_8, x_148);
x_154 = lean_box(0);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_153);
lean_ctor_set(x_155, 1, x_154);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_156, 1, x_154);
lean_inc(x_123);
x_157 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_157, 0, x_123);
lean_ctor_set(x_157, 1, x_150);
lean_ctor_set(x_157, 2, x_152);
lean_ctor_set(x_157, 3, x_156);
x_158 = lean_unsigned_to_nat(2u);
x_159 = lean_mk_empty_array_with_capacity(x_158);
lean_inc(x_159);
x_160 = lean_array_push(x_159, x_157);
lean_inc(x_141);
x_161 = lean_array_push(x_160, x_141);
lean_inc(x_147);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_147);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_mk_string(":=");
lean_inc(x_123);
x_164 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_164, 0, x_123);
lean_ctor_set(x_164, 1, x_163);
x_165 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_165);
x_166 = lean_array_push(x_165, x_162);
lean_inc(x_164);
x_167 = lean_array_push(x_166, x_164);
x_168 = lean_array_push(x_167, x_15);
lean_inc(x_145);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_145);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_mk_string(",");
lean_inc(x_123);
x_171 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_171, 0, x_123);
lean_ctor_set(x_171, 1, x_170);
x_172 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_172);
x_173 = lean_array_push(x_172, x_171);
lean_inc(x_138);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_138);
lean_ctor_set(x_174, 1, x_173);
lean_inc(x_159);
x_175 = lean_array_push(x_159, x_169);
x_176 = lean_array_push(x_175, x_174);
lean_inc(x_143);
x_177 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_177, 0, x_143);
lean_ctor_set(x_177, 1, x_176);
x_178 = lean_mk_string("stop");
x_179 = lean_string_utf8_byte_size(x_178);
lean_inc(x_178);
x_180 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_139);
lean_ctor_set(x_180, 2, x_179);
lean_inc(x_178);
x_181 = lean_name_mk_string(x_4, x_178);
lean_inc(x_125);
lean_inc(x_126);
x_182 = l_Lean_addMacroScope(x_126, x_181, x_125);
lean_inc(x_8);
x_183 = lean_name_mk_string(x_8, x_178);
x_184 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_154);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_154);
lean_inc(x_123);
x_186 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_186, 0, x_123);
lean_ctor_set(x_186, 1, x_180);
lean_ctor_set(x_186, 2, x_182);
lean_ctor_set(x_186, 3, x_185);
lean_inc(x_159);
x_187 = lean_array_push(x_159, x_186);
lean_inc(x_141);
x_188 = lean_array_push(x_187, x_141);
x_189 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_189, 0, x_147);
lean_ctor_set(x_189, 1, x_188);
x_190 = lean_array_push(x_165, x_189);
x_191 = lean_array_push(x_190, x_164);
x_192 = lean_array_push(x_191, x_17);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_145);
lean_ctor_set(x_193, 1, x_192);
lean_inc(x_159);
x_194 = lean_array_push(x_159, x_193);
lean_inc(x_141);
x_195 = lean_array_push(x_194, x_141);
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_143);
lean_ctor_set(x_196, 1, x_195);
lean_inc(x_159);
x_197 = lean_array_push(x_159, x_177);
x_198 = lean_array_push(x_197, x_196);
lean_inc(x_138);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_138);
lean_ctor_set(x_199, 1, x_198);
x_200 = lean_mk_string("optEllipsis");
x_201 = lean_name_mk_string(x_132, x_200);
lean_inc(x_141);
x_202 = lean_array_push(x_172, x_141);
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_201);
lean_ctor_set(x_203, 1, x_202);
x_204 = lean_mk_string(":");
lean_inc(x_123);
x_205 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_205, 0, x_123);
lean_ctor_set(x_205, 1, x_204);
x_206 = lean_string_utf8_byte_size(x_7);
lean_inc(x_7);
x_207 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_207, 0, x_7);
lean_ctor_set(x_207, 1, x_139);
lean_ctor_set(x_207, 2, x_206);
x_208 = lean_name_mk_string(x_4, x_7);
x_209 = l_Lean_addMacroScope(x_126, x_208, x_125);
x_210 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_210, 0, x_8);
lean_ctor_set(x_210, 1, x_154);
x_211 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_211, 0, x_210);
lean_ctor_set(x_211, 1, x_154);
lean_inc(x_123);
x_212 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_212, 0, x_123);
lean_ctor_set(x_212, 1, x_207);
lean_ctor_set(x_212, 2, x_209);
lean_ctor_set(x_212, 3, x_211);
x_213 = lean_array_push(x_159, x_205);
x_214 = lean_array_push(x_213, x_212);
x_215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_215, 0, x_138);
lean_ctor_set(x_215, 1, x_214);
x_216 = lean_mk_string("}");
x_217 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_217, 0, x_123);
lean_ctor_set(x_217, 1, x_216);
x_218 = lean_unsigned_to_nat(6u);
x_219 = lean_mk_empty_array_with_capacity(x_218);
x_220 = lean_array_push(x_219, x_136);
x_221 = lean_array_push(x_220, x_141);
x_222 = lean_array_push(x_221, x_199);
x_223 = lean_array_push(x_222, x_203);
x_224 = lean_array_push(x_223, x_215);
x_225 = lean_array_push(x_224, x_217);
x_226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_226, 0, x_134);
lean_ctor_set(x_226, 1, x_225);
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_226);
lean_ctor_set(x_227, 1, x_124);
return x_227;
}
}
}
}
lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_758_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Std");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Range");
lean_inc(x_7);
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("term[_:_:_]");
lean_inc(x_8);
x_10 = lean_name_mk_string(x_8, x_9);
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(1);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(3u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = lean_unsigned_to_nat(5u);
x_19 = l_Lean_Syntax_getArg(x_1, x_18);
lean_dec(x_1);
x_20 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_2, 2);
lean_inc(x_23);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_mk_string("Lean");
x_26 = lean_name_mk_string(x_4, x_25);
x_27 = lean_mk_string("Parser");
x_28 = lean_name_mk_string(x_26, x_27);
x_29 = lean_mk_string("Term");
x_30 = lean_name_mk_string(x_28, x_29);
x_31 = lean_mk_string("structInst");
lean_inc(x_30);
x_32 = lean_name_mk_string(x_30, x_31);
x_33 = lean_mk_string("{");
lean_inc(x_22);
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_22);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_mk_string("null");
x_36 = lean_name_mk_string(x_4, x_35);
x_37 = lean_unsigned_to_nat(0u);
x_38 = lean_mk_empty_array_with_capacity(x_37);
lean_inc(x_36);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_36);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_mk_string("group");
x_41 = lean_name_mk_string(x_4, x_40);
x_42 = lean_mk_string("structInstField");
lean_inc(x_30);
x_43 = lean_name_mk_string(x_30, x_42);
x_44 = lean_mk_string("structInstLVal");
lean_inc(x_30);
x_45 = lean_name_mk_string(x_30, x_44);
x_46 = lean_mk_string("start");
x_47 = lean_string_utf8_byte_size(x_46);
lean_inc(x_46);
x_48 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_37);
lean_ctor_set(x_48, 2, x_47);
lean_inc(x_46);
x_49 = lean_name_mk_string(x_4, x_46);
lean_inc(x_23);
lean_inc(x_24);
x_50 = l_Lean_addMacroScope(x_24, x_49, x_23);
lean_inc(x_8);
x_51 = lean_name_mk_string(x_8, x_46);
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
lean_inc(x_22);
x_55 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_55, 0, x_22);
lean_ctor_set(x_55, 1, x_48);
lean_ctor_set(x_55, 2, x_50);
lean_ctor_set(x_55, 3, x_54);
x_56 = lean_unsigned_to_nat(2u);
x_57 = lean_mk_empty_array_with_capacity(x_56);
lean_inc(x_57);
x_58 = lean_array_push(x_57, x_55);
lean_inc(x_39);
x_59 = lean_array_push(x_58, x_39);
lean_inc(x_45);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_45);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_mk_string(":=");
lean_inc(x_22);
x_62 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_62, 0, x_22);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_63);
x_64 = lean_array_push(x_63, x_60);
lean_inc(x_62);
x_65 = lean_array_push(x_64, x_62);
x_66 = lean_array_push(x_65, x_15);
lean_inc(x_43);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_43);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_mk_string(",");
lean_inc(x_22);
x_69 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_69, 0, x_22);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_70);
x_71 = lean_array_push(x_70, x_69);
lean_inc(x_36);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_36);
lean_ctor_set(x_72, 1, x_71);
lean_inc(x_57);
x_73 = lean_array_push(x_57, x_67);
lean_inc(x_72);
x_74 = lean_array_push(x_73, x_72);
lean_inc(x_41);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_41);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_mk_string("stop");
x_77 = lean_string_utf8_byte_size(x_76);
lean_inc(x_76);
x_78 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_37);
lean_ctor_set(x_78, 2, x_77);
lean_inc(x_76);
x_79 = lean_name_mk_string(x_4, x_76);
lean_inc(x_23);
lean_inc(x_24);
x_80 = l_Lean_addMacroScope(x_24, x_79, x_23);
lean_inc(x_8);
x_81 = lean_name_mk_string(x_8, x_76);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_52);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_52);
lean_inc(x_22);
x_84 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_84, 0, x_22);
lean_ctor_set(x_84, 1, x_78);
lean_ctor_set(x_84, 2, x_80);
lean_ctor_set(x_84, 3, x_83);
lean_inc(x_57);
x_85 = lean_array_push(x_57, x_84);
lean_inc(x_39);
x_86 = lean_array_push(x_85, x_39);
lean_inc(x_45);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_45);
lean_ctor_set(x_87, 1, x_86);
lean_inc(x_63);
x_88 = lean_array_push(x_63, x_87);
lean_inc(x_62);
x_89 = lean_array_push(x_88, x_62);
x_90 = lean_array_push(x_89, x_17);
lean_inc(x_43);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_43);
lean_ctor_set(x_91, 1, x_90);
lean_inc(x_57);
x_92 = lean_array_push(x_57, x_91);
x_93 = lean_array_push(x_92, x_72);
lean_inc(x_41);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_41);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_mk_string("step");
x_96 = lean_string_utf8_byte_size(x_95);
lean_inc(x_95);
x_97 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_37);
lean_ctor_set(x_97, 2, x_96);
lean_inc(x_95);
x_98 = lean_name_mk_string(x_4, x_95);
lean_inc(x_23);
lean_inc(x_24);
x_99 = l_Lean_addMacroScope(x_24, x_98, x_23);
lean_inc(x_8);
x_100 = lean_name_mk_string(x_8, x_95);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_52);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_52);
lean_inc(x_22);
x_103 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_103, 0, x_22);
lean_ctor_set(x_103, 1, x_97);
lean_ctor_set(x_103, 2, x_99);
lean_ctor_set(x_103, 3, x_102);
lean_inc(x_57);
x_104 = lean_array_push(x_57, x_103);
lean_inc(x_39);
x_105 = lean_array_push(x_104, x_39);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_45);
lean_ctor_set(x_106, 1, x_105);
lean_inc(x_63);
x_107 = lean_array_push(x_63, x_106);
x_108 = lean_array_push(x_107, x_62);
x_109 = lean_array_push(x_108, x_19);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_43);
lean_ctor_set(x_110, 1, x_109);
lean_inc(x_57);
x_111 = lean_array_push(x_57, x_110);
lean_inc(x_39);
x_112 = lean_array_push(x_111, x_39);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_41);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_array_push(x_63, x_75);
x_115 = lean_array_push(x_114, x_94);
x_116 = lean_array_push(x_115, x_113);
lean_inc(x_36);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_36);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_mk_string("optEllipsis");
x_119 = lean_name_mk_string(x_30, x_118);
lean_inc(x_39);
x_120 = lean_array_push(x_70, x_39);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
x_122 = lean_mk_string(":");
lean_inc(x_22);
x_123 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_123, 0, x_22);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_string_utf8_byte_size(x_7);
lean_inc(x_7);
x_125 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_125, 0, x_7);
lean_ctor_set(x_125, 1, x_37);
lean_ctor_set(x_125, 2, x_124);
x_126 = lean_name_mk_string(x_4, x_7);
x_127 = l_Lean_addMacroScope(x_24, x_126, x_23);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_8);
lean_ctor_set(x_128, 1, x_52);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_52);
lean_inc(x_22);
x_130 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_130, 0, x_22);
lean_ctor_set(x_130, 1, x_125);
lean_ctor_set(x_130, 2, x_127);
lean_ctor_set(x_130, 3, x_129);
x_131 = lean_array_push(x_57, x_123);
x_132 = lean_array_push(x_131, x_130);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_36);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_mk_string("}");
x_135 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_135, 0, x_22);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_unsigned_to_nat(6u);
x_137 = lean_mk_empty_array_with_capacity(x_136);
x_138 = lean_array_push(x_137, x_34);
x_139 = lean_array_push(x_138, x_39);
x_140 = lean_array_push(x_139, x_117);
x_141 = lean_array_push(x_140, x_121);
x_142 = lean_array_push(x_141, x_133);
x_143 = lean_array_push(x_142, x_135);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_32);
lean_ctor_set(x_144, 1, x_143);
lean_ctor_set(x_20, 0, x_144);
return x_20;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_145 = lean_ctor_get(x_20, 0);
x_146 = lean_ctor_get(x_20, 1);
lean_inc(x_146);
lean_inc(x_145);
lean_dec(x_20);
x_147 = lean_ctor_get(x_2, 2);
lean_inc(x_147);
x_148 = lean_ctor_get(x_2, 1);
lean_inc(x_148);
lean_dec(x_2);
x_149 = lean_mk_string("Lean");
x_150 = lean_name_mk_string(x_4, x_149);
x_151 = lean_mk_string("Parser");
x_152 = lean_name_mk_string(x_150, x_151);
x_153 = lean_mk_string("Term");
x_154 = lean_name_mk_string(x_152, x_153);
x_155 = lean_mk_string("structInst");
lean_inc(x_154);
x_156 = lean_name_mk_string(x_154, x_155);
x_157 = lean_mk_string("{");
lean_inc(x_145);
x_158 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_158, 0, x_145);
lean_ctor_set(x_158, 1, x_157);
x_159 = lean_mk_string("null");
x_160 = lean_name_mk_string(x_4, x_159);
x_161 = lean_unsigned_to_nat(0u);
x_162 = lean_mk_empty_array_with_capacity(x_161);
lean_inc(x_160);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_160);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_mk_string("group");
x_165 = lean_name_mk_string(x_4, x_164);
x_166 = lean_mk_string("structInstField");
lean_inc(x_154);
x_167 = lean_name_mk_string(x_154, x_166);
x_168 = lean_mk_string("structInstLVal");
lean_inc(x_154);
x_169 = lean_name_mk_string(x_154, x_168);
x_170 = lean_mk_string("start");
x_171 = lean_string_utf8_byte_size(x_170);
lean_inc(x_170);
x_172 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_172, 0, x_170);
lean_ctor_set(x_172, 1, x_161);
lean_ctor_set(x_172, 2, x_171);
lean_inc(x_170);
x_173 = lean_name_mk_string(x_4, x_170);
lean_inc(x_147);
lean_inc(x_148);
x_174 = l_Lean_addMacroScope(x_148, x_173, x_147);
lean_inc(x_8);
x_175 = lean_name_mk_string(x_8, x_170);
x_176 = lean_box(0);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_175);
lean_ctor_set(x_177, 1, x_176);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set(x_178, 1, x_176);
lean_inc(x_145);
x_179 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_179, 0, x_145);
lean_ctor_set(x_179, 1, x_172);
lean_ctor_set(x_179, 2, x_174);
lean_ctor_set(x_179, 3, x_178);
x_180 = lean_unsigned_to_nat(2u);
x_181 = lean_mk_empty_array_with_capacity(x_180);
lean_inc(x_181);
x_182 = lean_array_push(x_181, x_179);
lean_inc(x_163);
x_183 = lean_array_push(x_182, x_163);
lean_inc(x_169);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_169);
lean_ctor_set(x_184, 1, x_183);
x_185 = lean_mk_string(":=");
lean_inc(x_145);
x_186 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_186, 0, x_145);
lean_ctor_set(x_186, 1, x_185);
x_187 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_187);
x_188 = lean_array_push(x_187, x_184);
lean_inc(x_186);
x_189 = lean_array_push(x_188, x_186);
x_190 = lean_array_push(x_189, x_15);
lean_inc(x_167);
x_191 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_191, 0, x_167);
lean_ctor_set(x_191, 1, x_190);
x_192 = lean_mk_string(",");
lean_inc(x_145);
x_193 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_193, 0, x_145);
lean_ctor_set(x_193, 1, x_192);
x_194 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_194);
x_195 = lean_array_push(x_194, x_193);
lean_inc(x_160);
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_160);
lean_ctor_set(x_196, 1, x_195);
lean_inc(x_181);
x_197 = lean_array_push(x_181, x_191);
lean_inc(x_196);
x_198 = lean_array_push(x_197, x_196);
lean_inc(x_165);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_165);
lean_ctor_set(x_199, 1, x_198);
x_200 = lean_mk_string("stop");
x_201 = lean_string_utf8_byte_size(x_200);
lean_inc(x_200);
x_202 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_202, 0, x_200);
lean_ctor_set(x_202, 1, x_161);
lean_ctor_set(x_202, 2, x_201);
lean_inc(x_200);
x_203 = lean_name_mk_string(x_4, x_200);
lean_inc(x_147);
lean_inc(x_148);
x_204 = l_Lean_addMacroScope(x_148, x_203, x_147);
lean_inc(x_8);
x_205 = lean_name_mk_string(x_8, x_200);
x_206 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_206, 0, x_205);
lean_ctor_set(x_206, 1, x_176);
x_207 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_207, 0, x_206);
lean_ctor_set(x_207, 1, x_176);
lean_inc(x_145);
x_208 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_208, 0, x_145);
lean_ctor_set(x_208, 1, x_202);
lean_ctor_set(x_208, 2, x_204);
lean_ctor_set(x_208, 3, x_207);
lean_inc(x_181);
x_209 = lean_array_push(x_181, x_208);
lean_inc(x_163);
x_210 = lean_array_push(x_209, x_163);
lean_inc(x_169);
x_211 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_211, 0, x_169);
lean_ctor_set(x_211, 1, x_210);
lean_inc(x_187);
x_212 = lean_array_push(x_187, x_211);
lean_inc(x_186);
x_213 = lean_array_push(x_212, x_186);
x_214 = lean_array_push(x_213, x_17);
lean_inc(x_167);
x_215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_215, 0, x_167);
lean_ctor_set(x_215, 1, x_214);
lean_inc(x_181);
x_216 = lean_array_push(x_181, x_215);
x_217 = lean_array_push(x_216, x_196);
lean_inc(x_165);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_165);
lean_ctor_set(x_218, 1, x_217);
x_219 = lean_mk_string("step");
x_220 = lean_string_utf8_byte_size(x_219);
lean_inc(x_219);
x_221 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_221, 0, x_219);
lean_ctor_set(x_221, 1, x_161);
lean_ctor_set(x_221, 2, x_220);
lean_inc(x_219);
x_222 = lean_name_mk_string(x_4, x_219);
lean_inc(x_147);
lean_inc(x_148);
x_223 = l_Lean_addMacroScope(x_148, x_222, x_147);
lean_inc(x_8);
x_224 = lean_name_mk_string(x_8, x_219);
x_225 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_225, 0, x_224);
lean_ctor_set(x_225, 1, x_176);
x_226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_226, 0, x_225);
lean_ctor_set(x_226, 1, x_176);
lean_inc(x_145);
x_227 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_227, 0, x_145);
lean_ctor_set(x_227, 1, x_221);
lean_ctor_set(x_227, 2, x_223);
lean_ctor_set(x_227, 3, x_226);
lean_inc(x_181);
x_228 = lean_array_push(x_181, x_227);
lean_inc(x_163);
x_229 = lean_array_push(x_228, x_163);
x_230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_230, 0, x_169);
lean_ctor_set(x_230, 1, x_229);
lean_inc(x_187);
x_231 = lean_array_push(x_187, x_230);
x_232 = lean_array_push(x_231, x_186);
x_233 = lean_array_push(x_232, x_19);
x_234 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_234, 0, x_167);
lean_ctor_set(x_234, 1, x_233);
lean_inc(x_181);
x_235 = lean_array_push(x_181, x_234);
lean_inc(x_163);
x_236 = lean_array_push(x_235, x_163);
x_237 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_237, 0, x_165);
lean_ctor_set(x_237, 1, x_236);
x_238 = lean_array_push(x_187, x_199);
x_239 = lean_array_push(x_238, x_218);
x_240 = lean_array_push(x_239, x_237);
lean_inc(x_160);
x_241 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_241, 0, x_160);
lean_ctor_set(x_241, 1, x_240);
x_242 = lean_mk_string("optEllipsis");
x_243 = lean_name_mk_string(x_154, x_242);
lean_inc(x_163);
x_244 = lean_array_push(x_194, x_163);
x_245 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_245, 0, x_243);
lean_ctor_set(x_245, 1, x_244);
x_246 = lean_mk_string(":");
lean_inc(x_145);
x_247 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_247, 0, x_145);
lean_ctor_set(x_247, 1, x_246);
x_248 = lean_string_utf8_byte_size(x_7);
lean_inc(x_7);
x_249 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_249, 0, x_7);
lean_ctor_set(x_249, 1, x_161);
lean_ctor_set(x_249, 2, x_248);
x_250 = lean_name_mk_string(x_4, x_7);
x_251 = l_Lean_addMacroScope(x_148, x_250, x_147);
x_252 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_252, 0, x_8);
lean_ctor_set(x_252, 1, x_176);
x_253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_253, 0, x_252);
lean_ctor_set(x_253, 1, x_176);
lean_inc(x_145);
x_254 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_254, 0, x_145);
lean_ctor_set(x_254, 1, x_249);
lean_ctor_set(x_254, 2, x_251);
lean_ctor_set(x_254, 3, x_253);
x_255 = lean_array_push(x_181, x_247);
x_256 = lean_array_push(x_255, x_254);
x_257 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_257, 0, x_160);
lean_ctor_set(x_257, 1, x_256);
x_258 = lean_mk_string("}");
x_259 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_259, 0, x_145);
lean_ctor_set(x_259, 1, x_258);
x_260 = lean_unsigned_to_nat(6u);
x_261 = lean_mk_empty_array_with_capacity(x_260);
x_262 = lean_array_push(x_261, x_158);
x_263 = lean_array_push(x_262, x_163);
x_264 = lean_array_push(x_263, x_241);
x_265 = lean_array_push(x_264, x_245);
x_266 = lean_array_push(x_265, x_257);
x_267 = lean_array_push(x_266, x_259);
x_268 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_268, 0, x_156);
lean_ctor_set(x_268, 1, x_267);
x_269 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_269, 0, x_268);
lean_ctor_set(x_269, 1, x_146);
return x_269;
}
}
}
}
lean_object* l_Std_Range_myMacro____x40_Init_Data_Range___hyg_1056_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Std");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Range");
lean_inc(x_7);
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("term[:_:_]");
lean_inc(x_8);
x_10 = lean_name_mk_string(x_8, x_9);
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(1);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_unsigned_to_nat(2u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(4u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
lean_dec(x_1);
x_18 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_2, 2);
lean_inc(x_21);
x_22 = lean_ctor_get(x_2, 1);
lean_inc(x_22);
lean_dec(x_2);
x_23 = lean_mk_string("Lean");
x_24 = lean_name_mk_string(x_4, x_23);
x_25 = lean_mk_string("Parser");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = lean_mk_string("Term");
x_28 = lean_name_mk_string(x_26, x_27);
x_29 = lean_mk_string("structInst");
lean_inc(x_28);
x_30 = lean_name_mk_string(x_28, x_29);
x_31 = lean_mk_string("{");
lean_inc(x_20);
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_20);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_mk_string("null");
x_34 = lean_name_mk_string(x_4, x_33);
x_35 = lean_unsigned_to_nat(0u);
x_36 = lean_mk_empty_array_with_capacity(x_35);
lean_inc(x_34);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_mk_string("group");
x_39 = lean_name_mk_string(x_4, x_38);
x_40 = lean_mk_string("structInstField");
lean_inc(x_28);
x_41 = lean_name_mk_string(x_28, x_40);
x_42 = lean_mk_string("structInstLVal");
lean_inc(x_28);
x_43 = lean_name_mk_string(x_28, x_42);
x_44 = lean_mk_string("stop");
x_45 = lean_string_utf8_byte_size(x_44);
lean_inc(x_44);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_35);
lean_ctor_set(x_46, 2, x_45);
lean_inc(x_44);
x_47 = lean_name_mk_string(x_4, x_44);
lean_inc(x_21);
lean_inc(x_22);
x_48 = l_Lean_addMacroScope(x_22, x_47, x_21);
lean_inc(x_8);
x_49 = lean_name_mk_string(x_8, x_44);
x_50 = lean_box(0);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
lean_inc(x_20);
x_53 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_53, 0, x_20);
lean_ctor_set(x_53, 1, x_46);
lean_ctor_set(x_53, 2, x_48);
lean_ctor_set(x_53, 3, x_52);
x_54 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_54);
x_55 = lean_array_push(x_54, x_53);
lean_inc(x_37);
x_56 = lean_array_push(x_55, x_37);
lean_inc(x_43);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_43);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_mk_string(":=");
lean_inc(x_20);
x_59 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_59, 0, x_20);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_unsigned_to_nat(3u);
x_61 = lean_mk_empty_array_with_capacity(x_60);
lean_inc(x_61);
x_62 = lean_array_push(x_61, x_57);
lean_inc(x_59);
x_63 = lean_array_push(x_62, x_59);
x_64 = lean_array_push(x_63, x_15);
lean_inc(x_41);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_41);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_mk_string(",");
lean_inc(x_20);
x_67 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_67, 0, x_20);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_unsigned_to_nat(1u);
x_69 = lean_mk_empty_array_with_capacity(x_68);
lean_inc(x_69);
x_70 = lean_array_push(x_69, x_67);
lean_inc(x_34);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_34);
lean_ctor_set(x_71, 1, x_70);
lean_inc(x_54);
x_72 = lean_array_push(x_54, x_65);
x_73 = lean_array_push(x_72, x_71);
lean_inc(x_39);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_39);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_mk_string("step");
x_76 = lean_string_utf8_byte_size(x_75);
lean_inc(x_75);
x_77 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_35);
lean_ctor_set(x_77, 2, x_76);
lean_inc(x_75);
x_78 = lean_name_mk_string(x_4, x_75);
lean_inc(x_21);
lean_inc(x_22);
x_79 = l_Lean_addMacroScope(x_22, x_78, x_21);
lean_inc(x_8);
x_80 = lean_name_mk_string(x_8, x_75);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_50);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_50);
lean_inc(x_20);
x_83 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_83, 0, x_20);
lean_ctor_set(x_83, 1, x_77);
lean_ctor_set(x_83, 2, x_79);
lean_ctor_set(x_83, 3, x_82);
lean_inc(x_54);
x_84 = lean_array_push(x_54, x_83);
lean_inc(x_37);
x_85 = lean_array_push(x_84, x_37);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_43);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_array_push(x_61, x_86);
x_88 = lean_array_push(x_87, x_59);
x_89 = lean_array_push(x_88, x_17);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_41);
lean_ctor_set(x_90, 1, x_89);
lean_inc(x_54);
x_91 = lean_array_push(x_54, x_90);
lean_inc(x_37);
x_92 = lean_array_push(x_91, x_37);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_39);
lean_ctor_set(x_93, 1, x_92);
lean_inc(x_54);
x_94 = lean_array_push(x_54, x_74);
x_95 = lean_array_push(x_94, x_93);
lean_inc(x_34);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_34);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_mk_string("optEllipsis");
x_98 = lean_name_mk_string(x_28, x_97);
lean_inc(x_37);
x_99 = lean_array_push(x_69, x_37);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
x_101 = lean_mk_string(":");
lean_inc(x_20);
x_102 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_102, 0, x_20);
lean_ctor_set(x_102, 1, x_101);
x_103 = lean_string_utf8_byte_size(x_7);
lean_inc(x_7);
x_104 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_104, 0, x_7);
lean_ctor_set(x_104, 1, x_35);
lean_ctor_set(x_104, 2, x_103);
x_105 = lean_name_mk_string(x_4, x_7);
x_106 = l_Lean_addMacroScope(x_22, x_105, x_21);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_8);
lean_ctor_set(x_107, 1, x_50);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_50);
lean_inc(x_20);
x_109 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_109, 0, x_20);
lean_ctor_set(x_109, 1, x_104);
lean_ctor_set(x_109, 2, x_106);
lean_ctor_set(x_109, 3, x_108);
x_110 = lean_array_push(x_54, x_102);
x_111 = lean_array_push(x_110, x_109);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_34);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_mk_string("}");
x_114 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_114, 0, x_20);
lean_ctor_set(x_114, 1, x_113);
x_115 = lean_unsigned_to_nat(6u);
x_116 = lean_mk_empty_array_with_capacity(x_115);
x_117 = lean_array_push(x_116, x_32);
x_118 = lean_array_push(x_117, x_37);
x_119 = lean_array_push(x_118, x_96);
x_120 = lean_array_push(x_119, x_100);
x_121 = lean_array_push(x_120, x_112);
x_122 = lean_array_push(x_121, x_114);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_30);
lean_ctor_set(x_123, 1, x_122);
lean_ctor_set(x_18, 0, x_123);
return x_18;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_124 = lean_ctor_get(x_18, 0);
x_125 = lean_ctor_get(x_18, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_18);
x_126 = lean_ctor_get(x_2, 2);
lean_inc(x_126);
x_127 = lean_ctor_get(x_2, 1);
lean_inc(x_127);
lean_dec(x_2);
x_128 = lean_mk_string("Lean");
x_129 = lean_name_mk_string(x_4, x_128);
x_130 = lean_mk_string("Parser");
x_131 = lean_name_mk_string(x_129, x_130);
x_132 = lean_mk_string("Term");
x_133 = lean_name_mk_string(x_131, x_132);
x_134 = lean_mk_string("structInst");
lean_inc(x_133);
x_135 = lean_name_mk_string(x_133, x_134);
x_136 = lean_mk_string("{");
lean_inc(x_124);
x_137 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_137, 0, x_124);
lean_ctor_set(x_137, 1, x_136);
x_138 = lean_mk_string("null");
x_139 = lean_name_mk_string(x_4, x_138);
x_140 = lean_unsigned_to_nat(0u);
x_141 = lean_mk_empty_array_with_capacity(x_140);
lean_inc(x_139);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_139);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_mk_string("group");
x_144 = lean_name_mk_string(x_4, x_143);
x_145 = lean_mk_string("structInstField");
lean_inc(x_133);
x_146 = lean_name_mk_string(x_133, x_145);
x_147 = lean_mk_string("structInstLVal");
lean_inc(x_133);
x_148 = lean_name_mk_string(x_133, x_147);
x_149 = lean_mk_string("stop");
x_150 = lean_string_utf8_byte_size(x_149);
lean_inc(x_149);
x_151 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_140);
lean_ctor_set(x_151, 2, x_150);
lean_inc(x_149);
x_152 = lean_name_mk_string(x_4, x_149);
lean_inc(x_126);
lean_inc(x_127);
x_153 = l_Lean_addMacroScope(x_127, x_152, x_126);
lean_inc(x_8);
x_154 = lean_name_mk_string(x_8, x_149);
x_155 = lean_box(0);
x_156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_155);
lean_inc(x_124);
x_158 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_158, 0, x_124);
lean_ctor_set(x_158, 1, x_151);
lean_ctor_set(x_158, 2, x_153);
lean_ctor_set(x_158, 3, x_157);
x_159 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_159);
x_160 = lean_array_push(x_159, x_158);
lean_inc(x_142);
x_161 = lean_array_push(x_160, x_142);
lean_inc(x_148);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_148);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_mk_string(":=");
lean_inc(x_124);
x_164 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_164, 0, x_124);
lean_ctor_set(x_164, 1, x_163);
x_165 = lean_unsigned_to_nat(3u);
x_166 = lean_mk_empty_array_with_capacity(x_165);
lean_inc(x_166);
x_167 = lean_array_push(x_166, x_162);
lean_inc(x_164);
x_168 = lean_array_push(x_167, x_164);
x_169 = lean_array_push(x_168, x_15);
lean_inc(x_146);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_146);
lean_ctor_set(x_170, 1, x_169);
x_171 = lean_mk_string(",");
lean_inc(x_124);
x_172 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_172, 0, x_124);
lean_ctor_set(x_172, 1, x_171);
x_173 = lean_unsigned_to_nat(1u);
x_174 = lean_mk_empty_array_with_capacity(x_173);
lean_inc(x_174);
x_175 = lean_array_push(x_174, x_172);
lean_inc(x_139);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_139);
lean_ctor_set(x_176, 1, x_175);
lean_inc(x_159);
x_177 = lean_array_push(x_159, x_170);
x_178 = lean_array_push(x_177, x_176);
lean_inc(x_144);
x_179 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_179, 0, x_144);
lean_ctor_set(x_179, 1, x_178);
x_180 = lean_mk_string("step");
x_181 = lean_string_utf8_byte_size(x_180);
lean_inc(x_180);
x_182 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_140);
lean_ctor_set(x_182, 2, x_181);
lean_inc(x_180);
x_183 = lean_name_mk_string(x_4, x_180);
lean_inc(x_126);
lean_inc(x_127);
x_184 = l_Lean_addMacroScope(x_127, x_183, x_126);
lean_inc(x_8);
x_185 = lean_name_mk_string(x_8, x_180);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_155);
x_187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_187, 0, x_186);
lean_ctor_set(x_187, 1, x_155);
lean_inc(x_124);
x_188 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_188, 0, x_124);
lean_ctor_set(x_188, 1, x_182);
lean_ctor_set(x_188, 2, x_184);
lean_ctor_set(x_188, 3, x_187);
lean_inc(x_159);
x_189 = lean_array_push(x_159, x_188);
lean_inc(x_142);
x_190 = lean_array_push(x_189, x_142);
x_191 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_191, 0, x_148);
lean_ctor_set(x_191, 1, x_190);
x_192 = lean_array_push(x_166, x_191);
x_193 = lean_array_push(x_192, x_164);
x_194 = lean_array_push(x_193, x_17);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_146);
lean_ctor_set(x_195, 1, x_194);
lean_inc(x_159);
x_196 = lean_array_push(x_159, x_195);
lean_inc(x_142);
x_197 = lean_array_push(x_196, x_142);
x_198 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_198, 0, x_144);
lean_ctor_set(x_198, 1, x_197);
lean_inc(x_159);
x_199 = lean_array_push(x_159, x_179);
x_200 = lean_array_push(x_199, x_198);
lean_inc(x_139);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_139);
lean_ctor_set(x_201, 1, x_200);
x_202 = lean_mk_string("optEllipsis");
x_203 = lean_name_mk_string(x_133, x_202);
lean_inc(x_142);
x_204 = lean_array_push(x_174, x_142);
x_205 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_205, 0, x_203);
lean_ctor_set(x_205, 1, x_204);
x_206 = lean_mk_string(":");
lean_inc(x_124);
x_207 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_207, 0, x_124);
lean_ctor_set(x_207, 1, x_206);
x_208 = lean_string_utf8_byte_size(x_7);
lean_inc(x_7);
x_209 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_209, 0, x_7);
lean_ctor_set(x_209, 1, x_140);
lean_ctor_set(x_209, 2, x_208);
x_210 = lean_name_mk_string(x_4, x_7);
x_211 = l_Lean_addMacroScope(x_127, x_210, x_126);
x_212 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_212, 0, x_8);
lean_ctor_set(x_212, 1, x_155);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_212);
lean_ctor_set(x_213, 1, x_155);
lean_inc(x_124);
x_214 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_214, 0, x_124);
lean_ctor_set(x_214, 1, x_209);
lean_ctor_set(x_214, 2, x_211);
lean_ctor_set(x_214, 3, x_213);
x_215 = lean_array_push(x_159, x_207);
x_216 = lean_array_push(x_215, x_214);
x_217 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_217, 0, x_139);
lean_ctor_set(x_217, 1, x_216);
x_218 = lean_mk_string("}");
x_219 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_219, 0, x_124);
lean_ctor_set(x_219, 1, x_218);
x_220 = lean_unsigned_to_nat(6u);
x_221 = lean_mk_empty_array_with_capacity(x_220);
x_222 = lean_array_push(x_221, x_137);
x_223 = lean_array_push(x_222, x_142);
x_224 = lean_array_push(x_223, x_201);
x_225 = lean_array_push(x_224, x_205);
x_226 = lean_array_push(x_225, x_217);
x_227 = lean_array_push(x_226, x_219);
x_228 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_228, 0, x_135);
lean_ctor_set(x_228, 1, x_227);
x_229 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_229, 0, x_228);
lean_ctor_set(x_229, 1, x_125);
return x_229;
}
}
}
}
lean_object* initialize_Init_Meta(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Data_Range(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Meta(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Range_start___default = _init_l_Std_Range_start___default();
lean_mark_persistent(l_Std_Range_start___default);
l_Std_Range_step___default = _init_l_Std_Range_step___default();
lean_mark_persistent(l_Std_Range_step___default);
l_Std_Range_term_x5b_x3a___x5d = _init_l_Std_Range_term_x5b_x3a___x5d();
lean_mark_persistent(l_Std_Range_term_x5b_x3a___x5d);
l_Std_Range_term_x5b___x3a___x5d = _init_l_Std_Range_term_x5b___x3a___x5d();
lean_mark_persistent(l_Std_Range_term_x5b___x3a___x5d);
l_Std_Range_term_x5b_x3a___x3a___x5d = _init_l_Std_Range_term_x5b_x3a___x3a___x5d();
lean_mark_persistent(l_Std_Range_term_x5b_x3a___x3a___x5d);
l_Std_Range_term_x5b___x3a___x3a___x5d = _init_l_Std_Range_term_x5b___x3a___x3a___x5d();
lean_mark_persistent(l_Std_Range_term_x5b___x3a___x3a___x5d);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
