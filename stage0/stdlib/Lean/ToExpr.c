// Lean compiler output
// Module: Lean.ToExpr
// Imports: Init Lean.Expr
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
lean_object* l_Lean_instToExprChar;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
lean_object* l_Lean_instToExprBool___lambda__1(uint8_t);
lean_object* l_Lean_instToExprOption_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instToExprArray(lean_object*);
lean_object* l_Lean_instToExprExpr;
lean_object* l_Lean_instToExprArray___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_levelZero;
lean_object* l_Lean_instToExprUnit___lambda__1___boxed(lean_object*);
lean_object* l_Lean_instToExprOption(lean_object*);
lean_object* l_Lean_instToExprOption___rarg(lean_object*);
lean_object* l_Lean_instToExprList___rarg(lean_object*);
lean_object* l_Lean_instToExprUnit;
lean_object* l_Lean_instToExprArray___rarg(lean_object*);
lean_object* l_Lean_instToExprProd_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toExprAux(lean_object*);
lean_object* l_Lean_Name_toExprAux_match__1(lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Lean_instToExprProd(lean_object*, lean_object*);
lean_object* l_Lean_instToExprName;
lean_object* l_Lean_instToExprBool___lambda__1___boxed(lean_object*);
lean_object* l_Lean_instToExprBool;
lean_object* l_Lean_instToExprOption___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instToExprNat;
lean_object* l_Lean_List_toExprAux_match__1(lean_object*, lean_object*);
lean_object* l_Lean_List_toExprAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instToExprUnit___lambda__1(lean_object*);
lean_object* l_Lean_instToExprProd___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_List_toExprAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instToExprProd___rarg(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instToExprProd_match__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instToExprChar___lambda__1(uint32_t);
lean_object* l_Lean_instToExprChar___lambda__1___boxed(lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkStrLit(lean_object*);
lean_object* l_Lean_instToExprOption_match__1(lean_object*, lean_object*);
lean_object* l_Lean_instToExprString;
lean_object* l_Lean_instToExprList(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_List_toExprAux(lean_object*);
lean_object* l_Lean_List_toExprAux___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Lean_Name_toExprAux_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_instToExprExpr() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Expr");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_box(0);
x_7 = l_Lean_mkConst(x_5, x_6);
x_8 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
static lean_object* _init_l_Lean_instToExprNat() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Nat");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_box(0);
x_5 = l_Lean_mkConst(x_3, x_4);
x_6 = lean_alloc_closure((void*)(l_Lean_mkNatLit), 1, 0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
lean_object* l_Lean_instToExprBool___lambda__1(uint8_t x_1) {
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
x_8 = l_Lean_mkConst(x_6, x_7);
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
x_15 = l_Lean_mkConst(x_13, x_14);
return x_15;
}
}
}
static lean_object* _init_l_Lean_instToExprBool() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Bool");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_box(0);
x_5 = l_Lean_mkConst(x_3, x_4);
x_6 = lean_alloc_closure((void*)(l_Lean_instToExprBool___lambda__1___boxed), 1, 0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
lean_object* l_Lean_instToExprBool___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lean_instToExprBool___lambda__1(x_2);
return x_3;
}
}
lean_object* l_Lean_instToExprChar___lambda__1(uint32_t x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Char");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("ofNat");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_box(0);
x_8 = l_Lean_mkConst(x_6, x_7);
x_9 = lean_uint32_to_nat(x_1);
x_10 = l_Lean_mkNatLit(x_9);
x_11 = l_Lean_mkApp(x_8, x_10);
return x_11;
}
}
static lean_object* _init_l_Lean_instToExprChar() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Char");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_box(0);
x_5 = l_Lean_mkConst(x_3, x_4);
x_6 = lean_alloc_closure((void*)(l_Lean_instToExprChar___lambda__1___boxed), 1, 0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
lean_object* l_Lean_instToExprChar___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = l_Lean_instToExprChar___lambda__1(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_instToExprString() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = lean_box(0);
x_2 = lean_mk_string("String");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_box(0);
x_5 = l_Lean_mkConst(x_3, x_4);
x_6 = lean_alloc_closure((void*)(l_Lean_mkStrLit), 1, 0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
lean_object* l_Lean_instToExprUnit___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Unit");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("unit");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_box(0);
x_8 = l_Lean_mkConst(x_6, x_7);
return x_8;
}
}
static lean_object* _init_l_Lean_instToExprUnit() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Unit");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_box(0);
x_5 = l_Lean_mkConst(x_3, x_4);
x_6 = lean_alloc_closure((void*)(l_Lean_instToExprUnit___lambda__1___boxed), 1, 0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
return x_7;
}
}
lean_object* l_Lean_instToExprUnit___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_instToExprUnit___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Name_toExprAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* l_Lean_Name_toExprAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Name_toExprAux_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Name_toExprAux(lean_object* x_1) {
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
x_10 = l_Lean_mkConst(x_8, x_9);
return x_10;
}
case 1:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
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
x_20 = lean_box(0);
x_21 = l_Lean_mkConst(x_19, x_20);
x_22 = l_Lean_Name_toExprAux(x_11);
x_23 = l_Lean_mkStrLit(x_12);
x_24 = l_Lean_mkAppB(x_21, x_22, x_23);
return x_24;
}
default: 
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_box(0);
x_28 = lean_mk_string("Lean");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Name");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("mkNum");
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_box(0);
x_35 = l_Lean_mkConst(x_33, x_34);
x_36 = l_Lean_Name_toExprAux(x_25);
x_37 = l_Lean_mkNatLit(x_26);
x_38 = l_Lean_mkAppB(x_35, x_36, x_37);
return x_38;
}
}
}
}
static lean_object* _init_l_Lean_instToExprName() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Name");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_box(0);
x_7 = l_Lean_mkConst(x_5, x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_Name_toExprAux), 1, 0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_instToExprOption_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_instToExprOption_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_instToExprOption_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Lean_instToExprOption___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_mk_string("Option");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("none");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_box(0);
x_10 = l_Lean_levelZero;
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = l_Lean_mkConst(x_8, x_11);
x_13 = l_Lean_mkApp(x_12, x_1);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_14 = lean_ctor_get(x_3, 0);
lean_inc(x_14);
lean_dec(x_3);
x_15 = lean_box(0);
x_16 = lean_mk_string("Option");
x_17 = lean_name_mk_string(x_15, x_16);
x_18 = lean_mk_string("some");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = lean_box(0);
x_21 = l_Lean_levelZero;
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = l_Lean_mkConst(x_19, x_22);
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_apply_1(x_24, x_14);
x_26 = l_Lean_mkAppB(x_23, x_1, x_25);
return x_26;
}
}
}
lean_object* l_Lean_instToExprOption___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_Lean_instToExprOption___rarg___lambda__1), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
x_4 = lean_box(0);
x_5 = lean_mk_string("Option");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_box(0);
x_8 = l_Lean_levelZero;
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
x_10 = l_Lean_mkConst(x_6, x_9);
x_11 = l_Lean_mkApp(x_10, x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
lean_object* l_Lean_instToExprOption(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_instToExprOption___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_List_toExprAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_List_toExprAux_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_List_toExprAux_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Lean_List_toExprAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_3);
lean_dec(x_1);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_apply_1(x_7, x_5);
lean_inc(x_3);
x_9 = l_Lean_List_toExprAux___rarg(x_1, x_2, x_3, x_6);
x_10 = l_Lean_mkAppB(x_3, x_8, x_9);
return x_10;
}
}
}
lean_object* l_Lean_List_toExprAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_List_toExprAux___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_List_toExprAux___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_List_toExprAux___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_instToExprList___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = lean_box(0);
x_4 = lean_mk_string("List");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("nil");
lean_inc(x_5);
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_box(0);
x_9 = l_Lean_levelZero;
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
lean_inc(x_10);
x_11 = l_Lean_mkConst(x_7, x_10);
lean_inc(x_2);
x_12 = l_Lean_mkApp(x_11, x_2);
x_13 = lean_mk_string("cons");
lean_inc(x_5);
x_14 = lean_name_mk_string(x_5, x_13);
lean_inc(x_10);
x_15 = l_Lean_mkConst(x_14, x_10);
lean_inc(x_2);
x_16 = l_Lean_mkApp(x_15, x_2);
x_17 = lean_alloc_closure((void*)(l_Lean_List_toExprAux___rarg___boxed), 4, 3);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_12);
lean_closure_set(x_17, 2, x_16);
x_18 = l_Lean_mkConst(x_5, x_10);
x_19 = l_Lean_mkApp(x_18, x_2);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
lean_object* l_Lean_instToExprList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_instToExprList___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_instToExprArray___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_4 = lean_box(0);
x_5 = lean_mk_string("List");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("toArray");
lean_inc(x_6);
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_box(0);
x_10 = l_Lean_levelZero;
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
lean_inc(x_11);
x_12 = l_Lean_mkConst(x_8, x_11);
x_13 = lean_mk_string("nil");
lean_inc(x_6);
x_14 = lean_name_mk_string(x_6, x_13);
lean_inc(x_11);
x_15 = l_Lean_mkConst(x_14, x_11);
lean_inc(x_1);
x_16 = l_Lean_mkApp(x_15, x_1);
x_17 = lean_mk_string("cons");
x_18 = lean_name_mk_string(x_6, x_17);
x_19 = l_Lean_mkConst(x_18, x_11);
lean_inc(x_1);
x_20 = l_Lean_mkApp(x_19, x_1);
x_21 = lean_array_to_list(lean_box(0), x_3);
x_22 = l_Lean_List_toExprAux___rarg(x_2, x_16, x_20, x_21);
lean_dec(x_16);
x_23 = l_Lean_mkAppB(x_12, x_1, x_22);
return x_23;
}
}
lean_object* l_Lean_instToExprArray___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_Lean_instToExprArray___rarg___lambda__1), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
x_4 = lean_box(0);
x_5 = lean_mk_string("Array");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_box(0);
x_8 = l_Lean_levelZero;
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
x_10 = l_Lean_mkConst(x_6, x_9);
x_11 = l_Lean_mkApp(x_10, x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
lean_object* l_Lean_instToExprArray(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_instToExprArray___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_instToExprProd_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_instToExprProd_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_instToExprProd_match__1___rarg), 2, 0);
return x_4;
}
}
lean_object* l_Lean_instToExprProd___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_box(0);
x_9 = lean_mk_string("Prod");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("mk");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_box(0);
x_14 = l_Lean_levelZero;
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_mkConst(x_12, x_16);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_apply_1(x_18, x_6);
x_20 = lean_ctor_get(x_2, 0);
lean_inc(x_20);
lean_dec(x_2);
x_21 = lean_apply_1(x_20, x_7);
x_22 = l_Lean_mkApp4(x_17, x_3, x_4, x_19, x_21);
return x_22;
}
}
lean_object* l_Lean_instToExprProd___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_inc(x_4);
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_instToExprProd___rarg___lambda__1), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
x_6 = lean_box(0);
x_7 = lean_mk_string("Prod");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_box(0);
x_10 = l_Lean_levelZero;
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_mkConst(x_8, x_12);
x_14 = l_Lean_mkAppB(x_13, x_3, x_4);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_5);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
lean_object* l_Lean_instToExprProd(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_instToExprProd___rarg), 2, 0);
return x_3;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Expr(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_ToExpr(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Expr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instToExprExpr = _init_l_Lean_instToExprExpr();
lean_mark_persistent(l_Lean_instToExprExpr);
l_Lean_instToExprNat = _init_l_Lean_instToExprNat();
lean_mark_persistent(l_Lean_instToExprNat);
l_Lean_instToExprBool = _init_l_Lean_instToExprBool();
lean_mark_persistent(l_Lean_instToExprBool);
l_Lean_instToExprChar = _init_l_Lean_instToExprChar();
lean_mark_persistent(l_Lean_instToExprChar);
l_Lean_instToExprString = _init_l_Lean_instToExprString();
lean_mark_persistent(l_Lean_instToExprString);
l_Lean_instToExprUnit = _init_l_Lean_instToExprUnit();
lean_mark_persistent(l_Lean_instToExprUnit);
l_Lean_instToExprName = _init_l_Lean_instToExprName();
lean_mark_persistent(l_Lean_instToExprName);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
