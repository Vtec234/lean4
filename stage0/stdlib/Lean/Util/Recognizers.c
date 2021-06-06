// Lean compiler output
// Module: Lean.Util.Recognizers
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
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_Lean_Expr_iff_x3f(lean_object*);
lean_object* l_Lean_Expr_and_x3f___boxed(lean_object*);
lean_object* l_Lean_Expr_eq_x3f___boxed(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l___private_Lean_Util_Recognizers_0__Lean_Expr_getConstructorVal_x3f_match__1(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Lean_Expr_and_x3f(lean_object*);
lean_object* l_Lean_Expr_constructorApp_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_isConstructorApp_x3f_match__1(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isEq(lean_object*);
lean_object* l_Lean_Expr_arrayLit_x3f_match__1(lean_object*);
lean_object* l_Lean_Expr_app4_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
extern lean_object* l_Lean_levelZero;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Expr_isConstructorApp_x3f___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const_x3f___boxed(lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* l_Lean_Expr_ne_x3f___boxed(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_listLit_x3f(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_natAdd_x3f___boxed(lean_object*);
lean_object* l_Lean_Expr_isConstructorApp___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_isConstructorApp_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_heq_x3f(lean_object*);
lean_object* l_Lean_Expr_arrayLit_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app4_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_eq_x3f(lean_object*);
lean_object* l_Lean_Expr_iff_x3f___boxed(lean_object*);
lean_object* l_Lean_Expr_natAdd_x3f(lean_object*);
lean_object* l_Lean_Expr_app3_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app2_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const_x3f_match__1(lean_object*);
lean_object* l___private_Lean_Util_Recognizers_0__Lean_Expr_getConstructorVal_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_ne_x3f(lean_object*);
lean_object* l_Lean_Expr_app3_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_heq_x3f___boxed(lean_object*);
lean_object* l_Lean_Expr_const_x3f(lean_object*);
lean_object* l_Lean_Expr_not_x3f(lean_object*);
lean_object* l_Lean_Expr_app1_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app2_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_Expr_arrow_x3f(lean_object*);
lean_object* l_Lean_Expr_app1_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstructorApp(lean_object*, lean_object*);
lean_object* l_Lean_Expr_isEq___boxed(lean_object*);
lean_object* l_Lean_Expr_arrow_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_arrayLit_x3f___boxed(lean_object*);
lean_object* l_Lean_Expr_arrayLit_x3f(lean_object*);
lean_object* l_Lean_Expr_isConstructorApp_x3f_match__2(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Expr_arrow_x3f___boxed(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Expr_prod_x3f(lean_object*);
lean_object* l_Lean_Expr_prod_x3f___boxed(lean_object*);
lean_object* l_Lean_Expr_isHEq___boxed(lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Util_Recognizers_0__Lean_Expr_getConstructorVal_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_not_x3f___boxed(lean_object*);
lean_object* l_Lean_Expr_listLit_x3f_loop(lean_object*, lean_object*);
lean_object* l_Lean_Expr_arrow_x3f_match__1(lean_object*);
lean_object* l_Lean_Expr_isConstructorApp_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_isConstructorApp_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 4)
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
lean_object* l_Lean_Expr_const_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Expr_const_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Expr_const_x3f(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
}
lean_object* l_Lean_Expr_const_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_const_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_app1_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = l_Lean_Expr_isAppOfArity(x_1, x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Expr_appArg_x21(x_1);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Expr_app1_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Expr_app1_x3f(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Expr_app2_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(2u);
x_4 = l_Lean_Expr_isAppOfArity(x_1, x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = l_Lean_Expr_appFn_x21(x_1);
x_7 = l_Lean_Expr_appArg_x21(x_6);
lean_dec(x_6);
x_8 = l_Lean_Expr_appArg_x21(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
}
lean_object* l_Lean_Expr_app2_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Expr_app2_x3f(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Expr_app3_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(3u);
x_4 = l_Lean_Expr_isAppOfArity(x_1, x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = l_Lean_Expr_appFn_x21(x_1);
x_7 = l_Lean_Expr_appFn_x21(x_6);
x_8 = l_Lean_Expr_appArg_x21(x_7);
lean_dec(x_7);
x_9 = l_Lean_Expr_appArg_x21(x_6);
lean_dec(x_6);
x_10 = l_Lean_Expr_appArg_x21(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
}
lean_object* l_Lean_Expr_app3_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Expr_app3_x3f(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Expr_app4_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(4u);
x_4 = l_Lean_Expr_isAppOfArity(x_1, x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = l_Lean_Expr_appFn_x21(x_1);
x_7 = l_Lean_Expr_appFn_x21(x_6);
x_8 = l_Lean_Expr_appFn_x21(x_7);
x_9 = l_Lean_Expr_appArg_x21(x_8);
lean_dec(x_8);
x_10 = l_Lean_Expr_appArg_x21(x_7);
lean_dec(x_7);
x_11 = l_Lean_Expr_appArg_x21(x_6);
lean_dec(x_6);
x_12 = l_Lean_Expr_appArg_x21(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_9);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
lean_object* l_Lean_Expr_app4_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Expr_app4_x3f(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Expr_eq_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Eq");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_unsigned_to_nat(3u);
x_6 = l_Lean_Expr_isAppOfArity(x_1, x_4, x_5);
lean_dec(x_4);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = l_Lean_Expr_appFn_x21(x_1);
x_9 = l_Lean_Expr_appFn_x21(x_8);
x_10 = l_Lean_Expr_appArg_x21(x_9);
lean_dec(x_9);
x_11 = l_Lean_Expr_appArg_x21(x_8);
lean_dec(x_8);
x_12 = l_Lean_Expr_appArg_x21(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Expr_eq_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_eq_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_ne_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Ne");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_unsigned_to_nat(3u);
x_6 = l_Lean_Expr_isAppOfArity(x_1, x_4, x_5);
lean_dec(x_4);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = l_Lean_Expr_appFn_x21(x_1);
x_9 = l_Lean_Expr_appFn_x21(x_8);
x_10 = l_Lean_Expr_appArg_x21(x_9);
lean_dec(x_9);
x_11 = l_Lean_Expr_appArg_x21(x_8);
lean_dec(x_8);
x_12 = l_Lean_Expr_appArg_x21(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Expr_ne_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_ne_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_iff_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Iff");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_unsigned_to_nat(2u);
x_6 = l_Lean_Expr_isAppOfArity(x_1, x_4, x_5);
lean_dec(x_4);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = l_Lean_Expr_appFn_x21(x_1);
x_9 = l_Lean_Expr_appArg_x21(x_8);
lean_dec(x_8);
x_10 = l_Lean_Expr_appArg_x21(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
lean_object* l_Lean_Expr_iff_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_iff_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_not_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Not");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Lean_Expr_isAppOfArity(x_1, x_4, x_5);
lean_dec(x_4);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_Expr_appArg_x21(x_1);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Expr_not_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_not_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_and_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = lean_mk_string("And");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_unsigned_to_nat(2u);
x_6 = l_Lean_Expr_isAppOfArity(x_1, x_4, x_5);
lean_dec(x_4);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = l_Lean_Expr_appFn_x21(x_1);
x_9 = l_Lean_Expr_appArg_x21(x_8);
lean_dec(x_8);
x_10 = l_Lean_Expr_appArg_x21(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
lean_object* l_Lean_Expr_and_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_and_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_heq_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = lean_mk_string("HEq");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_unsigned_to_nat(4u);
x_6 = l_Lean_Expr_isAppOfArity(x_1, x_4, x_5);
lean_dec(x_4);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_8 = l_Lean_Expr_appFn_x21(x_1);
x_9 = l_Lean_Expr_appFn_x21(x_8);
x_10 = l_Lean_Expr_appFn_x21(x_9);
x_11 = l_Lean_Expr_appArg_x21(x_10);
lean_dec(x_10);
x_12 = l_Lean_Expr_appArg_x21(x_9);
lean_dec(x_9);
x_13 = l_Lean_Expr_appArg_x21(x_8);
lean_dec(x_8);
x_14 = l_Lean_Expr_appArg_x21(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
lean_object* l_Lean_Expr_heq_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_heq_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_natAdd_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Nat");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("add");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_unsigned_to_nat(2u);
x_8 = l_Lean_Expr_isAppOfArity(x_1, x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_Lean_Expr_appFn_x21(x_1);
x_11 = l_Lean_Expr_appArg_x21(x_10);
lean_dec(x_10);
x_12 = l_Lean_Expr_appArg_x21(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
lean_object* l_Lean_Expr_natAdd_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_natAdd_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_arrow_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 7)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_4(x_2, x_4, x_5, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l_Lean_Expr_arrow_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Expr_arrow_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Expr_arrow_x3f(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 7)
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = lean_ctor_get(x_1, 2);
x_4 = l_Lean_Expr_hasLooseBVars(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_3);
lean_inc(x_2);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
}
else
{
lean_object* x_8; 
x_8 = lean_box(0);
return x_8;
}
}
}
lean_object* l_Lean_Expr_arrow_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_arrow_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
uint8_t l_Lean_Expr_isEq(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Eq");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_unsigned_to_nat(3u);
x_6 = l_Lean_Expr_isAppOfArity(x_1, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_Expr_isEq___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Expr_isEq(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_Lean_Expr_isHEq(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = lean_mk_string("HEq");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_unsigned_to_nat(4u);
x_6 = l_Lean_Expr_isAppOfArity(x_1, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_Expr_isHEq___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Expr_isHEq(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Expr_listLit_x3f_loop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_box(0);
x_4 = lean_mk_string("List");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("nil");
lean_inc(x_5);
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Expr_isAppOfArity(x_1, x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_mk_string("cons");
x_11 = lean_name_mk_string(x_5, x_10);
x_12 = lean_unsigned_to_nat(3u);
x_13 = l_Lean_Expr_isAppOfArity(x_1, x_11, x_12);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = l_Lean_Expr_appArg_x21(x_1);
x_16 = l_Lean_Expr_appFn_x21(x_1);
lean_dec(x_1);
x_17 = l_Lean_Expr_appArg_x21(x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_2);
x_1 = x_15;
x_2 = x_18;
goto _start;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_5);
x_20 = l_Lean_Expr_appArg_x21(x_1);
lean_dec(x_1);
x_21 = l_List_reverse___rarg(x_2);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
return x_23;
}
}
}
lean_object* l_Lean_Expr_listLit_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_Lean_Expr_listLit_x3f_loop(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Expr_arrayLit_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Expr_arrayLit_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Expr_arrayLit_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Expr_arrayLit_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_2 = lean_box(0);
x_3 = lean_mk_string("List");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("toArray");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_unsigned_to_nat(2u);
x_8 = l_Lean_Expr_isAppOfArity(x_1, x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Expr_appArg_x21(x_1);
x_11 = l_Lean_Expr_listLit_x3f(x_10);
return x_11;
}
}
}
lean_object* l_Lean_Expr_arrayLit_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_arrayLit_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Expr_prod_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Prod");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_unsigned_to_nat(2u);
x_6 = l_Lean_Expr_isAppOfArity(x_1, x_4, x_5);
lean_dec(x_4);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = l_Lean_Expr_appFn_x21(x_1);
x_9 = l_Lean_Expr_appArg_x21(x_8);
lean_dec(x_8);
x_10 = l_Lean_Expr_appArg_x21(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
lean_object* l_Lean_Expr_prod_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_prod_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Util_Recognizers_0__Lean_Expr_getConstructorVal_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
if (lean_obj_tag(x_5) == 6)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
}
lean_object* l___private_Lean_Util_Recognizers_0__Lean_Expr_getConstructorVal_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Util_Recognizers_0__Lean_Expr_getConstructorVal_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Util_Recognizers_0__Lean_Expr_getConstructorVal_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_environment_find(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_3, 0);
if (lean_obj_tag(x_6) == 6)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; 
lean_free_object(x_3);
lean_dec(x_6);
x_8 = lean_box(0);
return x_8;
}
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
lean_dec(x_3);
if (lean_obj_tag(x_9) == 6)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_9);
x_12 = lean_box(0);
return x_12;
}
}
}
}
}
lean_object* l_Lean_Expr_isConstructorApp_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Expr_isConstructorApp_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Expr_isConstructorApp_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Expr_isConstructorApp_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 9)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
uint64_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_5 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_box_uint64(x_5);
x_8 = lean_apply_2(x_2, x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l_Lean_Expr_isConstructorApp_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Expr_isConstructorApp_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Expr_isConstructorApp_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 9)
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 0);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_box(0);
x_8 = lean_mk_string("Nat");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("succ");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = l___private_Lean_Util_Recognizers_0__Lean_Expr_getConstructorVal_x3f(x_1, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_box(0);
x_14 = lean_mk_string("Nat");
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_mk_string("zero");
x_17 = lean_name_mk_string(x_15, x_16);
x_18 = l___private_Lean_Util_Recognizers_0__Lean_Expr_getConstructorVal_x3f(x_1, x_17);
return x_18;
}
}
else
{
lean_object* x_19; 
x_19 = l_Lean_Expr_getAppFn(x_2);
if (lean_obj_tag(x_19) == 4)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l___private_Lean_Util_Recognizers_0__Lean_Expr_getConstructorVal_x3f(x_1, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
x_22 = lean_box(0);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_24 = lean_ctor_get(x_21, 0);
x_25 = lean_ctor_get(x_24, 3);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 4);
lean_inc(x_26);
x_27 = lean_nat_add(x_25, x_26);
lean_dec(x_26);
lean_dec(x_25);
x_28 = lean_unsigned_to_nat(0u);
x_29 = l_Lean_Expr_getAppNumArgsAux(x_2, x_28);
x_30 = lean_nat_dec_eq(x_27, x_29);
lean_dec(x_29);
lean_dec(x_27);
if (x_30 == 0)
{
lean_object* x_31; 
lean_free_object(x_21);
lean_dec(x_24);
x_31 = lean_box(0);
return x_31;
}
else
{
return x_21;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_32 = lean_ctor_get(x_21, 0);
lean_inc(x_32);
lean_dec(x_21);
x_33 = lean_ctor_get(x_32, 3);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 4);
lean_inc(x_34);
x_35 = lean_nat_add(x_33, x_34);
lean_dec(x_34);
lean_dec(x_33);
x_36 = lean_unsigned_to_nat(0u);
x_37 = l_Lean_Expr_getAppNumArgsAux(x_2, x_36);
x_38 = lean_nat_dec_eq(x_35, x_37);
lean_dec(x_37);
lean_dec(x_35);
if (x_38 == 0)
{
lean_object* x_39; 
lean_dec(x_32);
x_39 = lean_box(0);
return x_39;
}
else
{
lean_object* x_40; 
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_32);
return x_40;
}
}
}
}
else
{
lean_object* x_41; 
lean_dec(x_19);
lean_dec(x_1);
x_41 = lean_box(0);
return x_41;
}
}
}
else
{
lean_object* x_42; 
x_42 = l_Lean_Expr_getAppFn(x_2);
if (lean_obj_tag(x_42) == 4)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
lean_dec(x_42);
x_44 = l___private_Lean_Util_Recognizers_0__Lean_Expr_getConstructorVal_x3f(x_1, x_43);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; 
x_45 = lean_box(0);
return x_45;
}
else
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_44);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_47 = lean_ctor_get(x_44, 0);
x_48 = lean_ctor_get(x_47, 3);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 4);
lean_inc(x_49);
x_50 = lean_nat_add(x_48, x_49);
lean_dec(x_49);
lean_dec(x_48);
x_51 = lean_unsigned_to_nat(0u);
x_52 = l_Lean_Expr_getAppNumArgsAux(x_2, x_51);
x_53 = lean_nat_dec_eq(x_50, x_52);
lean_dec(x_52);
lean_dec(x_50);
if (x_53 == 0)
{
lean_object* x_54; 
lean_free_object(x_44);
lean_dec(x_47);
x_54 = lean_box(0);
return x_54;
}
else
{
return x_44;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_55 = lean_ctor_get(x_44, 0);
lean_inc(x_55);
lean_dec(x_44);
x_56 = lean_ctor_get(x_55, 3);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 4);
lean_inc(x_57);
x_58 = lean_nat_add(x_56, x_57);
lean_dec(x_57);
lean_dec(x_56);
x_59 = lean_unsigned_to_nat(0u);
x_60 = l_Lean_Expr_getAppNumArgsAux(x_2, x_59);
x_61 = lean_nat_dec_eq(x_58, x_60);
lean_dec(x_60);
lean_dec(x_58);
if (x_61 == 0)
{
lean_object* x_62; 
lean_dec(x_55);
x_62 = lean_box(0);
return x_62;
}
else
{
lean_object* x_63; 
x_63 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_63, 0, x_55);
return x_63;
}
}
}
}
else
{
lean_object* x_64; 
lean_dec(x_42);
lean_dec(x_1);
x_64 = lean_box(0);
return x_64;
}
}
}
}
lean_object* l_Lean_Expr_isConstructorApp_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Expr_isConstructorApp_x3f(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
uint8_t l_Lean_Expr_isConstructorApp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Expr_isConstructorApp_x3f(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 1;
return x_5;
}
}
}
lean_object* l_Lean_Expr_isConstructorApp___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Expr_isConstructorApp(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Expr_constructorApp_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 9)
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_box(0);
x_8 = lean_mk_string("Nat");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("succ");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = l___private_Lean_Util_Recognizers_0__Lean_Expr_getConstructorVal_x3f(x_1, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_dec(x_4);
x_13 = lean_box(0);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_4, x_16);
lean_dec(x_4);
x_18 = l_Lean_mkNatLit(x_17);
x_19 = lean_mk_empty_array_with_capacity(x_16);
x_20 = lean_array_push(x_19, x_18);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_15);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_12, 0, x_21);
return x_12;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_12, 0);
lean_inc(x_22);
lean_dec(x_12);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_sub(x_4, x_23);
lean_dec(x_4);
x_25 = l_Lean_mkNatLit(x_24);
x_26 = lean_mk_empty_array_with_capacity(x_23);
x_27 = lean_array_push(x_26, x_25);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_4);
x_30 = lean_box(0);
x_31 = lean_mk_string("Nat");
x_32 = lean_name_mk_string(x_30, x_31);
x_33 = lean_mk_string("zero");
x_34 = lean_name_mk_string(x_32, x_33);
x_35 = l___private_Lean_Util_Recognizers_0__Lean_Expr_getConstructorVal_x3f(x_1, x_34);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
x_36 = lean_box(0);
return x_36;
}
else
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_35);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_35, 0);
x_39 = lean_mk_empty_array_with_capacity(x_5);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_35, 0, x_40);
return x_35;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_35, 0);
lean_inc(x_41);
lean_dec(x_35);
x_42 = lean_mk_empty_array_with_capacity(x_5);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
return x_44;
}
}
}
}
else
{
lean_object* x_45; 
lean_dec(x_3);
x_45 = l_Lean_Expr_getAppFn(x_2);
if (lean_obj_tag(x_45) == 4)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
lean_dec(x_45);
x_47 = l___private_Lean_Util_Recognizers_0__Lean_Expr_getConstructorVal_x3f(x_1, x_46);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; 
lean_dec(x_2);
x_48 = lean_box(0);
return x_48;
}
else
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_47);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_50 = lean_ctor_get(x_47, 0);
x_51 = lean_ctor_get(x_50, 3);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 4);
lean_inc(x_52);
x_53 = lean_nat_add(x_51, x_52);
lean_dec(x_52);
lean_dec(x_51);
x_54 = lean_unsigned_to_nat(0u);
x_55 = l_Lean_Expr_getAppNumArgsAux(x_2, x_54);
x_56 = lean_nat_dec_eq(x_53, x_55);
lean_dec(x_53);
if (x_56 == 0)
{
lean_object* x_57; 
lean_dec(x_55);
lean_free_object(x_47);
lean_dec(x_50);
lean_dec(x_2);
x_57 = lean_box(0);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_58 = l_Lean_levelZero;
x_59 = l_Lean_mkSort(x_58);
lean_inc(x_55);
x_60 = lean_mk_array(x_55, x_59);
x_61 = lean_unsigned_to_nat(1u);
x_62 = lean_nat_sub(x_55, x_61);
lean_dec(x_55);
x_63 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_2, x_60, x_62);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_50);
lean_ctor_set(x_64, 1, x_63);
lean_ctor_set(x_47, 0, x_64);
return x_47;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_65 = lean_ctor_get(x_47, 0);
lean_inc(x_65);
lean_dec(x_47);
x_66 = lean_ctor_get(x_65, 3);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 4);
lean_inc(x_67);
x_68 = lean_nat_add(x_66, x_67);
lean_dec(x_67);
lean_dec(x_66);
x_69 = lean_unsigned_to_nat(0u);
x_70 = l_Lean_Expr_getAppNumArgsAux(x_2, x_69);
x_71 = lean_nat_dec_eq(x_68, x_70);
lean_dec(x_68);
if (x_71 == 0)
{
lean_object* x_72; 
lean_dec(x_70);
lean_dec(x_65);
lean_dec(x_2);
x_72 = lean_box(0);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_73 = l_Lean_levelZero;
x_74 = l_Lean_mkSort(x_73);
lean_inc(x_70);
x_75 = lean_mk_array(x_70, x_74);
x_76 = lean_unsigned_to_nat(1u);
x_77 = lean_nat_sub(x_70, x_76);
lean_dec(x_70);
x_78 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_2, x_75, x_77);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_65);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_80, 0, x_79);
return x_80;
}
}
}
}
else
{
lean_object* x_81; 
lean_dec(x_45);
lean_dec(x_2);
lean_dec(x_1);
x_81 = lean_box(0);
return x_81;
}
}
}
else
{
lean_object* x_82; 
x_82 = l_Lean_Expr_getAppFn(x_2);
if (lean_obj_tag(x_82) == 4)
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
lean_dec(x_82);
x_84 = l___private_Lean_Util_Recognizers_0__Lean_Expr_getConstructorVal_x3f(x_1, x_83);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; 
lean_dec(x_2);
x_85 = lean_box(0);
return x_85;
}
else
{
uint8_t x_86; 
x_86 = !lean_is_exclusive(x_84);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_87 = lean_ctor_get(x_84, 0);
x_88 = lean_ctor_get(x_87, 3);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 4);
lean_inc(x_89);
x_90 = lean_nat_add(x_88, x_89);
lean_dec(x_89);
lean_dec(x_88);
x_91 = lean_unsigned_to_nat(0u);
x_92 = l_Lean_Expr_getAppNumArgsAux(x_2, x_91);
x_93 = lean_nat_dec_eq(x_90, x_92);
lean_dec(x_90);
if (x_93 == 0)
{
lean_object* x_94; 
lean_dec(x_92);
lean_free_object(x_84);
lean_dec(x_87);
lean_dec(x_2);
x_94 = lean_box(0);
return x_94;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_95 = l_Lean_levelZero;
x_96 = l_Lean_mkSort(x_95);
lean_inc(x_92);
x_97 = lean_mk_array(x_92, x_96);
x_98 = lean_unsigned_to_nat(1u);
x_99 = lean_nat_sub(x_92, x_98);
lean_dec(x_92);
x_100 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_2, x_97, x_99);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_87);
lean_ctor_set(x_101, 1, x_100);
lean_ctor_set(x_84, 0, x_101);
return x_84;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; 
x_102 = lean_ctor_get(x_84, 0);
lean_inc(x_102);
lean_dec(x_84);
x_103 = lean_ctor_get(x_102, 3);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 4);
lean_inc(x_104);
x_105 = lean_nat_add(x_103, x_104);
lean_dec(x_104);
lean_dec(x_103);
x_106 = lean_unsigned_to_nat(0u);
x_107 = l_Lean_Expr_getAppNumArgsAux(x_2, x_106);
x_108 = lean_nat_dec_eq(x_105, x_107);
lean_dec(x_105);
if (x_108 == 0)
{
lean_object* x_109; 
lean_dec(x_107);
lean_dec(x_102);
lean_dec(x_2);
x_109 = lean_box(0);
return x_109;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_110 = l_Lean_levelZero;
x_111 = l_Lean_mkSort(x_110);
lean_inc(x_107);
x_112 = lean_mk_array(x_107, x_111);
x_113 = lean_unsigned_to_nat(1u);
x_114 = lean_nat_sub(x_107, x_113);
lean_dec(x_107);
x_115 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_2, x_112, x_114);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_102);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_117, 0, x_116);
return x_117;
}
}
}
}
else
{
lean_object* x_118; 
lean_dec(x_82);
lean_dec(x_2);
lean_dec(x_1);
x_118 = lean_box(0);
return x_118;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Environment(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Util_Recognizers(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
