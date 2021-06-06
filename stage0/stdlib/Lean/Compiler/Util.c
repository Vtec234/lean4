// Lean compiler output
// Module: Lean.Compiler.Util
// Imports: Init Lean.Environment
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
lean_object* l_Lean_Compiler_checkIsDefinition_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_atMostOnce___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_atMostOnce_visit(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_voidType;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_atMostOnce_visit_match__1(lean_object*);
lean_object* l_Lean_Compiler_objectType;
lean_object* l_Lean_Compiler_atMostOnce_match__1___rarg(lean_object*, lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_Util_0__Lean_Compiler_getDeclNamesForCodeGen_match__1(lean_object*);
lean_object* l_Lean_Compiler_isEagerLambdaLiftingName_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_get_decl_names_for_code_gen(lean_object*);
lean_object* l_Lean_Compiler_neutralExpr;
lean_object* l_Lean_Compiler_isEagerLambdaLiftingName___boxed(lean_object*);
lean_object* l_Lean_Compiler_atMostOnce_visit___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_is_eager_lambda_lifting_name(lean_object*);
lean_object* l_Lean_Compiler_isUnsafeRecName_x3f_match__1(lean_object*);
lean_object* l_Lean_Compiler_atMostOnce_skip___boxed(lean_object*);
lean_object* l_Lean_Compiler_atMostOnce_seq_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_isUnsafeRecName_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Compiler_atMostOnce_match__1(lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Lean_Compiler_mkLcProof(lean_object*);
lean_object* lean_mk_unsafe_rec_name(lean_object*);
lean_object* l_Lean_Compiler_atMostOnce_match__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_atMostOnce_visitFVar___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_Util_0__Lean_Compiler_getDeclNamesForCodeGen_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_checkIsDefinition(lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Compiler_Util_0__Lean_Compiler_getDeclNamesForCodeGen___spec__1(lean_object*);
lean_object* l_Lean_Compiler_unreachableExpr;
uint8_t l_String_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_atMostOnce_seq_match__1(lean_object*);
lean_object* l_Lean_Compiler_atMostOnce_visit_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_checkIsDefinition_match__1(lean_object*);
lean_object* l_Lean_Compiler_atMostOnce_seq(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_isEagerLambdaLiftingName_match__1(lean_object*);
lean_object* lean_is_unsafe_rec_name(lean_object*);
lean_object* l_Lean_Compiler_atMostOnce_visitFVar_match__1(lean_object*);
lean_object* l_Lean_Compiler_atMostOnce_visitFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_atMostOnce_skip(lean_object*);
lean_object* lean_mk_eager_lambda_lifting_name(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint8_t lean_at_most_once(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_atMostOnce_instAndThenVisitor;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_atMostOnce_visitFVar_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Compiler_neutralExpr() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_mk_string("_neutral");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_box(0);
x_5 = l_Lean_mkConst(x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Compiler_unreachableExpr() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_mk_string("_unreachable");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_box(0);
x_5 = l_Lean_mkConst(x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Compiler_objectType() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_mk_string("_obj");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_box(0);
x_5 = l_Lean_mkConst(x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Compiler_voidType() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_mk_string("_void");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_box(0);
x_5 = l_Lean_mkConst(x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Compiler_mkLcProof(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_box(0);
x_3 = lean_mk_string("lcProof");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_box(0);
x_6 = l_Lean_mkConst(x_4, x_5);
x_7 = l_Lean_mkApp(x_6, x_1);
return x_7;
}
}
lean_object* l_Lean_Compiler_atMostOnce_seq_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_1, 1);
if (x_4 == 0)
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_5 = lean_ctor_get_uint8(x_1, 0);
lean_dec(x_1);
x_6 = lean_box(x_5);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
lean_object* l_Lean_Compiler_atMostOnce_seq_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_atMostOnce_seq_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Compiler_atMostOnce_seq(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_ctor_get_uint8(x_4, 1);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_2);
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = 0;
lean_ctor_set_uint8(x_4, 1, x_7);
return x_4;
}
else
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_ctor_get_uint8(x_4, 0);
lean_dec(x_4);
x_9 = 0;
x_10 = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(x_10, 0, x_8);
lean_ctor_set_uint8(x_10, 1, x_9);
return x_10;
}
}
else
{
lean_object* x_11; 
x_11 = lean_apply_1(x_2, x_4);
return x_11;
}
}
}
static lean_object* _init_l_Lean_Compiler_atMostOnce_instAndThenVisitor() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Compiler_atMostOnce_seq), 3, 0);
return x_1;
}
}
lean_object* l_Lean_Compiler_atMostOnce_skip(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Compiler_atMostOnce_skip___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Compiler_atMostOnce_skip(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Compiler_atMostOnce_visitFVar_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_ctor_get_uint8(x_1, 0);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = lean_ctor_get_uint8(x_1, 1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_ctor_set_uint8(x_1, 0, x_7);
x_8 = lean_box(x_7);
x_9 = lean_apply_2(x_2, x_1, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_free_object(x_1);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = lean_apply_1(x_3, x_10);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = lean_ctor_get_uint8(x_1, 1);
lean_dec(x_1);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_3);
x_13 = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(x_13, 0, x_12);
lean_ctor_set_uint8(x_13, 1, x_12);
x_14 = lean_box(x_12);
x_15 = lean_apply_2(x_2, x_13, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_2);
x_16 = lean_box(0);
x_17 = lean_apply_1(x_3, x_16);
return x_17;
}
}
}
else
{
uint8_t x_18; 
lean_dec(x_3);
x_18 = lean_ctor_get_uint8(x_1, 1);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_4);
x_19 = lean_box(x_5);
x_20 = lean_apply_2(x_2, x_1, x_19);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_2);
lean_dec(x_1);
x_21 = lean_box(0);
x_22 = lean_apply_1(x_4, x_21);
return x_22;
}
}
}
}
lean_object* l_Lean_Compiler_atMostOnce_visitFVar_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_atMostOnce_visitFVar_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Compiler_atMostOnce_visitFVar(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_3, 0);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_3, 1);
if (x_6 == 0)
{
lean_ctor_set_uint8(x_3, 0, x_6);
return x_3;
}
else
{
uint8_t x_7; uint8_t x_8; 
x_7 = lean_name_eq(x_1, x_2);
x_8 = 1;
lean_ctor_set_uint8(x_3, 0, x_7);
lean_ctor_set_uint8(x_3, 1, x_8);
return x_3;
}
}
else
{
uint8_t x_9; 
x_9 = lean_ctor_get_uint8(x_3, 1);
lean_dec(x_3);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(x_10, 0, x_9);
lean_ctor_set_uint8(x_10, 1, x_9);
return x_10;
}
else
{
uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_name_eq(x_1, x_2);
x_12 = 1;
x_13 = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(x_13, 0, x_11);
lean_ctor_set_uint8(x_13, 1, x_12);
return x_13;
}
}
}
else
{
uint8_t x_14; 
x_14 = lean_ctor_get_uint8(x_3, 1);
if (x_14 == 0)
{
return x_3;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_3);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = lean_name_eq(x_1, x_2);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = 1;
lean_ctor_set_uint8(x_3, 0, x_17);
lean_ctor_set_uint8(x_3, 1, x_17);
return x_3;
}
else
{
uint8_t x_18; uint8_t x_19; 
x_18 = 1;
x_19 = 0;
lean_ctor_set_uint8(x_3, 0, x_18);
lean_ctor_set_uint8(x_3, 1, x_19);
return x_3;
}
}
else
{
uint8_t x_20; 
lean_dec(x_3);
x_20 = lean_name_eq(x_1, x_2);
if (x_20 == 0)
{
uint8_t x_21; lean_object* x_22; 
x_21 = 1;
x_22 = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(x_22, 0, x_21);
lean_ctor_set_uint8(x_22, 1, x_21);
return x_22;
}
else
{
uint8_t x_23; uint8_t x_24; lean_object* x_25; 
x_23 = 1;
x_24 = 0;
x_25 = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(x_25, 0, x_23);
lean_ctor_set_uint8(x_25, 1, x_24);
return x_25;
}
}
}
}
}
}
lean_object* l_Lean_Compiler_atMostOnce_visitFVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Compiler_atMostOnce_visitFVar(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Compiler_atMostOnce_visit_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_12 = lean_box_uint64(x_11);
x_13 = lean_apply_2(x_2, x_10, x_12);
return x_13;
}
case 5:
{
lean_object* x_14; lean_object* x_15; uint64_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_17 = lean_box_uint64(x_16);
x_18 = lean_apply_3(x_3, x_14, x_15, x_17);
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
lean_dec(x_3);
lean_dec(x_2);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 2);
lean_inc(x_21);
x_22 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_23 = lean_box_uint64(x_22);
x_24 = lean_apply_4(x_4, x_19, x_20, x_21, x_23);
return x_24;
}
case 7:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint64_t x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 2);
lean_inc(x_27);
x_28 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_29 = lean_box_uint64(x_28);
x_30 = lean_apply_4(x_5, x_25, x_26, x_27, x_29);
return x_30;
}
case 8:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint64_t x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
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
lean_dec(x_1);
x_36 = lean_box_uint64(x_35);
x_37 = lean_apply_5(x_6, x_31, x_32, x_33, x_34, x_36);
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
lean_dec(x_1);
x_41 = lean_box_uint64(x_40);
x_42 = lean_apply_3(x_7, x_38, x_39, x_41);
return x_42;
}
case 11:
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint64_t x_46; lean_object* x_47; lean_object* x_48; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
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
lean_dec(x_1);
x_47 = lean_box_uint64(x_46);
x_48 = lean_apply_4(x_8, x_43, x_44, x_45, x_47);
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
lean_object* l_Lean_Compiler_atMostOnce_visit_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_atMostOnce_visit_match__1___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Compiler_atMostOnce_visit(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 1:
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_3, 0);
if (x_4 == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_3, 1);
if (x_6 == 0)
{
lean_ctor_set_uint8(x_3, 0, x_6);
return x_3;
}
else
{
lean_object* x_7; uint8_t x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_name_eq(x_7, x_1);
x_9 = 1;
lean_ctor_set_uint8(x_3, 0, x_8);
lean_ctor_set_uint8(x_3, 1, x_9);
return x_3;
}
}
else
{
uint8_t x_10; 
x_10 = lean_ctor_get_uint8(x_3, 1);
lean_dec(x_3);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(x_11, 0, x_10);
lean_ctor_set_uint8(x_11, 1, x_10);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_name_eq(x_12, x_1);
x_14 = 1;
x_15 = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(x_15, 0, x_13);
lean_ctor_set_uint8(x_15, 1, x_14);
return x_15;
}
}
}
else
{
uint8_t x_16; 
x_16 = lean_ctor_get_uint8(x_3, 1);
if (x_16 == 0)
{
return x_3;
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_3);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_2, 0);
x_19 = lean_name_eq(x_18, x_1);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = 1;
lean_ctor_set_uint8(x_3, 0, x_20);
lean_ctor_set_uint8(x_3, 1, x_20);
return x_3;
}
else
{
uint8_t x_21; uint8_t x_22; 
x_21 = 1;
x_22 = 0;
lean_ctor_set_uint8(x_3, 0, x_21);
lean_ctor_set_uint8(x_3, 1, x_22);
return x_3;
}
}
else
{
lean_object* x_23; uint8_t x_24; 
lean_dec(x_3);
x_23 = lean_ctor_get(x_2, 0);
x_24 = lean_name_eq(x_23, x_1);
if (x_24 == 0)
{
uint8_t x_25; lean_object* x_26; 
x_25 = 1;
x_26 = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(x_26, 0, x_25);
lean_ctor_set_uint8(x_26, 1, x_25);
return x_26;
}
else
{
uint8_t x_27; uint8_t x_28; lean_object* x_29; 
x_27 = 1;
x_28 = 0;
x_29 = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(x_29, 0, x_27);
lean_ctor_set_uint8(x_29, 1, x_28);
return x_29;
}
}
}
}
}
case 5:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = lean_ctor_get(x_2, 0);
x_31 = lean_ctor_get(x_2, 1);
x_32 = l_Lean_Compiler_atMostOnce_visit(x_1, x_31, x_3);
x_33 = lean_ctor_get_uint8(x_32, 1);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_32);
if (x_34 == 0)
{
uint8_t x_35; 
x_35 = 0;
lean_ctor_set_uint8(x_32, 1, x_35);
return x_32;
}
else
{
uint8_t x_36; uint8_t x_37; lean_object* x_38; 
x_36 = lean_ctor_get_uint8(x_32, 0);
lean_dec(x_32);
x_37 = 0;
x_38 = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(x_38, 0, x_36);
lean_ctor_set_uint8(x_38, 1, x_37);
return x_38;
}
}
else
{
x_2 = x_30;
x_3 = x_32;
goto _start;
}
}
case 6:
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_40 = lean_ctor_get(x_2, 1);
x_41 = lean_ctor_get(x_2, 2);
x_42 = l_Lean_Compiler_atMostOnce_visit(x_1, x_40, x_3);
x_43 = lean_ctor_get_uint8(x_42, 1);
if (x_43 == 0)
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_42);
if (x_44 == 0)
{
uint8_t x_45; 
x_45 = 0;
lean_ctor_set_uint8(x_42, 1, x_45);
return x_42;
}
else
{
uint8_t x_46; uint8_t x_47; lean_object* x_48; 
x_46 = lean_ctor_get_uint8(x_42, 0);
lean_dec(x_42);
x_47 = 0;
x_48 = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(x_48, 0, x_46);
lean_ctor_set_uint8(x_48, 1, x_47);
return x_48;
}
}
else
{
x_2 = x_41;
x_3 = x_42;
goto _start;
}
}
case 7:
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_50 = lean_ctor_get(x_2, 1);
x_51 = lean_ctor_get(x_2, 2);
x_52 = l_Lean_Compiler_atMostOnce_visit(x_1, x_50, x_3);
x_53 = lean_ctor_get_uint8(x_52, 1);
if (x_53 == 0)
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_52);
if (x_54 == 0)
{
uint8_t x_55; 
x_55 = 0;
lean_ctor_set_uint8(x_52, 1, x_55);
return x_52;
}
else
{
uint8_t x_56; uint8_t x_57; lean_object* x_58; 
x_56 = lean_ctor_get_uint8(x_52, 0);
lean_dec(x_52);
x_57 = 0;
x_58 = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(x_58, 0, x_56);
lean_ctor_set_uint8(x_58, 1, x_57);
return x_58;
}
}
else
{
x_2 = x_51;
x_3 = x_52;
goto _start;
}
}
case 8:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_60 = lean_ctor_get(x_2, 1);
x_61 = lean_ctor_get(x_2, 2);
x_62 = lean_ctor_get(x_2, 3);
x_63 = l_Lean_Compiler_atMostOnce_visit(x_1, x_60, x_3);
x_64 = lean_ctor_get_uint8(x_63, 1);
if (x_64 == 0)
{
uint8_t x_65; 
x_65 = !lean_is_exclusive(x_63);
if (x_65 == 0)
{
uint8_t x_66; 
x_66 = 0;
lean_ctor_set_uint8(x_63, 1, x_66);
return x_63;
}
else
{
uint8_t x_67; uint8_t x_68; lean_object* x_69; 
x_67 = lean_ctor_get_uint8(x_63, 0);
lean_dec(x_63);
x_68 = 0;
x_69 = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(x_69, 0, x_67);
lean_ctor_set_uint8(x_69, 1, x_68);
return x_69;
}
}
else
{
lean_object* x_70; uint8_t x_71; 
x_70 = l_Lean_Compiler_atMostOnce_visit(x_1, x_61, x_63);
x_71 = lean_ctor_get_uint8(x_70, 1);
if (x_71 == 0)
{
uint8_t x_72; 
x_72 = !lean_is_exclusive(x_70);
if (x_72 == 0)
{
uint8_t x_73; 
x_73 = 0;
lean_ctor_set_uint8(x_70, 1, x_73);
return x_70;
}
else
{
uint8_t x_74; uint8_t x_75; lean_object* x_76; 
x_74 = lean_ctor_get_uint8(x_70, 0);
lean_dec(x_70);
x_75 = 0;
x_76 = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(x_76, 0, x_74);
lean_ctor_set_uint8(x_76, 1, x_75);
return x_76;
}
}
else
{
x_2 = x_62;
x_3 = x_70;
goto _start;
}
}
}
case 10:
{
lean_object* x_78; 
x_78 = lean_ctor_get(x_2, 1);
x_2 = x_78;
goto _start;
}
case 11:
{
lean_object* x_80; 
x_80 = lean_ctor_get(x_2, 2);
x_2 = x_80;
goto _start;
}
default: 
{
return x_3;
}
}
}
}
lean_object* l_Lean_Compiler_atMostOnce_visit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Compiler_atMostOnce_visit(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Compiler_atMostOnce_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get_uint8(x_1, 0);
x_4 = lean_ctor_get_uint8(x_1, 1);
x_5 = lean_box(x_4);
x_6 = lean_box(x_3);
x_7 = lean_apply_2(x_2, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Compiler_atMostOnce_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_atMostOnce_match__1___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Compiler_atMostOnce_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Compiler_atMostOnce_match__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
uint8_t lean_at_most_once(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = 0;
x_4 = 1;
x_5 = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(x_5, 0, x_3);
lean_ctor_set_uint8(x_5, 1, x_4);
x_6 = l_Lean_Compiler_atMostOnce_visit(x_2, x_1, x_5);
lean_dec(x_1);
lean_dec(x_2);
x_7 = lean_ctor_get_uint8(x_6, 1);
lean_dec(x_6);
return x_7;
}
}
lean_object* l_Lean_Compiler_atMostOnce___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_at_most_once(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* lean_mk_eager_lambda_lifting_name(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = l_Nat_repr(x_2);
x_4 = lean_mk_string("_elambda_");
x_5 = lean_string_append(x_4, x_3);
lean_dec(x_3);
x_6 = lean_name_mk_string(x_1, x_5);
return x_6;
}
}
lean_object* l_Lean_Compiler_isEagerLambdaLiftingName_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* l_Lean_Compiler_isEagerLambdaLiftingName_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_isEagerLambdaLiftingName_match__1___rarg), 4, 0);
return x_2;
}
}
uint8_t lean_is_eager_lambda_lifting_name(lean_object* x_1) {
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
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_mk_string("_elambda");
x_6 = l_String_isPrefixOf(x_5, x_4);
lean_dec(x_4);
lean_dec(x_5);
if (x_6 == 0)
{
x_1 = x_3;
goto _start;
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
lean_object* l_Lean_Compiler_isEagerLambdaLiftingName___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_is_eager_lambda_lifting_name(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Compiler_Util_0__Lean_Compiler_getDeclNamesForCodeGen_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get_uint8(x_7, sizeof(void*)*1);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 2);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_box(x_9);
x_14 = lean_apply_4(x_5, x_10, x_11, x_12, x_13);
return x_14;
}
case 1:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 2);
lean_inc(x_18);
x_19 = lean_ctor_get_uint8(x_15, sizeof(void*)*3);
lean_dec(x_15);
x_20 = lean_ctor_get(x_16, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_16, 2);
lean_inc(x_22);
lean_dec(x_16);
x_23 = lean_box(x_19);
x_24 = lean_apply_6(x_2, x_20, x_21, x_22, x_17, x_18, x_23);
return x_24;
}
case 3:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
lean_dec(x_1);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
x_28 = lean_ctor_get_uint8(x_25, sizeof(void*)*2);
lean_dec(x_25);
x_29 = lean_ctor_get(x_26, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_26, 2);
lean_inc(x_31);
lean_dec(x_26);
x_32 = lean_box(x_28);
x_33 = lean_apply_5(x_4, x_29, x_30, x_31, x_27, x_32);
return x_33;
}
case 5:
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_34 = lean_ctor_get(x_1, 0);
lean_inc(x_34);
lean_dec(x_1);
x_35 = lean_apply_1(x_3, x_34);
return x_35;
}
default: 
{
lean_object* x_36; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_36 = lean_apply_1(x_6, x_1);
return x_36;
}
}
}
}
lean_object* l___private_Lean_Compiler_Util_0__Lean_Compiler_getDeclNamesForCodeGen_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_Util_0__Lean_Compiler_getDeclNamesForCodeGen_match__1___rarg), 6, 0);
return x_2;
}
}
lean_object* l_List_map___at___private_Lean_Compiler_Util_0__Lean_Compiler_getDeclNamesForCodeGen___spec__1(lean_object* x_1) {
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
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 0);
lean_dec(x_7);
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = l_List_map___at___private_Lean_Compiler_Util_0__Lean_Compiler_getDeclNamesForCodeGen___spec__1(x_6);
lean_ctor_set(x_1, 1, x_9);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = l_List_map___at___private_Lean_Compiler_Util_0__Lean_Compiler_getDeclNamesForCodeGen___spec__1(x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* lean_get_decl_names_for_code_gen(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_2; 
lean_dec(x_1);
x_2 = lean_box(0);
return x_2;
}
case 4:
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
case 5:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_List_map___at___private_Lean_Compiler_Util_0__Lean_Compiler_getDeclNamesForCodeGen___spec__1(x_4);
return x_5;
}
case 6:
{
lean_object* x_6; 
lean_dec(x_1);
x_6 = lean_box(0);
return x_6;
}
default: 
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
}
lean_object* l_Lean_Compiler_checkIsDefinition_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_4, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
switch (lean_obj_tag(x_8)) {
case 1:
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_1(x_2, x_9);
return x_10;
}
case 3:
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_apply_1(x_3, x_11);
return x_12;
}
default: 
{
lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_apply_1(x_5, x_1);
return x_13;
}
}
}
}
}
lean_object* l_Lean_Compiler_checkIsDefinition_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_checkIsDefinition_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Compiler_checkIsDefinition(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_2);
x_3 = lean_environment_find(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = 1;
x_5 = l_Lean_Name_toString(x_2, x_4);
x_6 = lean_mk_string("unknow declaration '");
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = lean_mk_string("'");
x_9 = lean_string_append(x_7, x_8);
lean_dec(x_8);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
switch (lean_obj_tag(x_11)) {
case 1:
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_11);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
case 3:
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_2);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
default: 
{
uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_11);
x_16 = 1;
x_17 = l_Lean_Name_toString(x_2, x_16);
x_18 = lean_mk_string("declaration is not a definition '");
x_19 = lean_string_append(x_18, x_17);
lean_dec(x_17);
x_20 = lean_mk_string("'");
x_21 = lean_string_append(x_19, x_20);
lean_dec(x_20);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
}
}
lean_object* lean_mk_unsafe_rec_name(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("_unsafe_rec");
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Compiler_isUnsafeRecName_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_7 = lean_mk_string("_unsafe_rec");
x_8 = lean_string_dec_eq(x_5, x_7);
lean_dec(x_7);
lean_dec(x_5);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
lean_dec(x_1);
x_10 = lean_box_uint64(x_6);
x_11 = lean_apply_2(x_2, x_4, x_10);
return x_11;
}
}
else
{
lean_object* x_12; 
lean_dec(x_2);
x_12 = lean_apply_1(x_3, x_1);
return x_12;
}
}
}
lean_object* l_Lean_Compiler_isUnsafeRecName_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Compiler_isUnsafeRecName_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* lean_is_unsafe_rec_name(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_mk_string("_unsafe_rec");
x_5 = lean_string_dec_eq(x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_2);
return x_7;
}
}
else
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = lean_box(0);
return x_8;
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Environment(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Compiler_Util(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_neutralExpr = _init_l_Lean_Compiler_neutralExpr();
lean_mark_persistent(l_Lean_Compiler_neutralExpr);
l_Lean_Compiler_unreachableExpr = _init_l_Lean_Compiler_unreachableExpr();
lean_mark_persistent(l_Lean_Compiler_unreachableExpr);
l_Lean_Compiler_objectType = _init_l_Lean_Compiler_objectType();
lean_mark_persistent(l_Lean_Compiler_objectType);
l_Lean_Compiler_voidType = _init_l_Lean_Compiler_voidType();
lean_mark_persistent(l_Lean_Compiler_voidType);
l_Lean_Compiler_atMostOnce_instAndThenVisitor = _init_l_Lean_Compiler_atMostOnce_instAndThenVisitor();
lean_mark_persistent(l_Lean_Compiler_atMostOnce_instAndThenVisitor);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
