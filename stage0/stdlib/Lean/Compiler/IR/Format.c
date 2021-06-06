// Lean compiler output
// Module: Lean.Compiler.IR.Format
// Imports: Init Lean.Compiler.IR.Basic
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
lean_object* l_Std_Format_joinSep___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___spec__1(lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_IR_instToFormatDecl(lean_object*);
lean_object* l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_formatParams___spec__2(lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Lean_IR_instToFormatArg;
lean_object* l_Lean_IR_formatFnBody_loop(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_IR_instToFormatFnBody;
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_IR_instToFormatParam;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_formatParams___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_formatArray___at_Lean_IR_formatParams___spec__1(lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatLitVal(lean_object*);
lean_object* l_Lean_IR_formatArray___rarg(lean_object*, lean_object*);
lean_object* l_Lean_IR_instToFormatLitVal;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_formatFnBody_loop___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_IR_formatDecl_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_formatParams___boxed(lean_object*);
lean_object* l_Lean_IR_instToStringDecl;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_formatArray___spec__1(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_formatArray___spec__1___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_IR_instToStringExpr(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__2(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_IR_formatArray(lean_object*);
lean_object* l_Lean_IR_instToFormatCtorInfo;
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_format_pretty(lean_object*, lean_object*);
lean_object* l_Lean_formatKVMap(lean_object*);
lean_object* l_Function_comp___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Lean_IR_formatArray___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__1(lean_object*);
lean_object* l_Lean_IR_formatArray___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__1___boxed(lean_object*);
lean_object* l_Lean_IR_instToStringIRType;
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatLitVal_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_formatDecl_match__1(lean_object*);
lean_object* l_Lean_IR_instToStringFnBody(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_ir_decl_to_string(lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr(lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(lean_object*);
lean_object* l_Lean_IR_instToFormatIRType;
lean_object* l_Lean_IR_formatFnBodyHead_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_ir_format_fn_body_head(lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_match__1(lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_IR_formatDecl(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Lean_Syntax_instToStringSyntax___lambda__1(lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_formatFnBody_loop___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatLitVal_match__1(lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo(lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam(lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam_match__1(lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_formatArray___at_Lean_IR_formatParams___spec__1___boxed(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_formatArray___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_formatParams(lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo_match__1(lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType_match__1(lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_IR_formatFnBodyHead_match__1(lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_IR_formatAlt_match__1(lean_object*);
lean_object* l_Lean_IR_formatAlt_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_IR_instToFormatExpr;
lean_object* l_Lean_IR_formatFnBody(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg_match__1(lean_object*);
lean_object* l_Lean_IR_formatArray___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_formatAlt(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_6 = lean_box(0);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_Nat_repr(x_2);
x_4 = lean_mk_string("x_");
x_5 = lean_string_append(x_4, x_3);
lean_dec(x_3);
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_mk_string("◾");
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
}
static lean_object* _init_l_Lean_IR_instToFormatArg() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg), 1, 0);
return x_1;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_formatArray___spec__1___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = lean_mk_string(" ");
x_9 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_9);
lean_inc(x_1);
x_11 = lean_apply_1(x_1, x_7);
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = 1;
x_14 = x_3 + x_13;
x_3 = x_14;
x_5 = x_12;
goto _start;
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_formatArray___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_IR_formatArray___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_IR_formatArray___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(0);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_3, x_3);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_box(0);
return x_8;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_11 = lean_box(0);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_IR_formatArray___spec__1___rarg(x_1, x_2, x_9, x_10, x_11);
return x_12;
}
}
}
}
lean_object* l_Lean_IR_formatArray(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_formatArray___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_formatArray___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_IR_formatArray___spec__1___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_IR_formatArray___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_formatArray___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatLitVal_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatLitVal_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatLitVal_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatLitVal(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_Nat_repr(x_2);
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_String_quote(x_5);
lean_dec(x_5);
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
static lean_object* _init_l_Lean_IR_instToFormatLitVal() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatLitVal), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_5(x_2, x_3, x_4, x_6, x_7, x_5);
return x_8;
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_box(0);
x_6 = lean_name_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_3);
x_8 = lean_mk_string("[");
x_9 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(x_1);
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_mk_string("]");
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 4);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_mk_string("ctor_");
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_3);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_mk_string("");
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
lean_inc(x_11);
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_lt(x_13, x_4);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = lean_nat_dec_lt(x_13, x_5);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_5);
lean_dec(x_4);
x_16 = lean_box(0);
x_17 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___lambda__1(x_2, x_11, x_12, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_inc(x_11);
x_18 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_12);
x_19 = lean_mk_string(".");
x_20 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_20, 0, x_19);
lean_inc(x_20);
x_21 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_4);
x_23 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_20);
x_25 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_5);
x_26 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
lean_inc(x_11);
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_11);
x_28 = lean_box(0);
x_29 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___lambda__1(x_2, x_11, x_27, x_28);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_inc(x_11);
x_30 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_30, 0, x_11);
lean_ctor_set(x_30, 1, x_12);
x_31 = lean_mk_string(".");
x_32 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_32, 0, x_31);
lean_inc(x_32);
x_33 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_4);
x_35 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_32);
x_37 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_5);
x_38 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
lean_inc(x_11);
x_39 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_11);
x_40 = lean_box(0);
x_41 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___lambda__1(x_2, x_11, x_39, x_40);
return x_41;
}
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_IR_instToFormatCtorInfo() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_apply_2(x_2, x_16, x_17);
return x_18;
}
case 1:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_apply_2(x_3, x_19, x_20);
return x_21;
}
case 2:
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
x_24 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_25 = lean_ctor_get(x_1, 2);
lean_inc(x_25);
lean_dec(x_1);
x_26 = lean_box(x_24);
x_27 = lean_apply_4(x_4, x_22, x_23, x_26, x_25);
return x_27;
}
case 3:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_29);
lean_dec(x_1);
x_30 = lean_apply_2(x_5, x_28, x_29);
return x_30;
}
case 4:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
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
lean_dec(x_1);
x_33 = lean_apply_2(x_6, x_31, x_32);
return x_33;
}
case 5:
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = lean_ctor_get(x_1, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_1, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 2);
lean_inc(x_36);
lean_dec(x_1);
x_37 = lean_apply_3(x_7, x_34, x_35, x_36);
return x_37;
}
case 6:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_1, 1);
lean_inc(x_39);
lean_dec(x_1);
x_40 = lean_apply_2(x_8, x_38, x_39);
return x_40;
}
case 7:
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_41 = lean_ctor_get(x_1, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_1, 1);
lean_inc(x_42);
lean_dec(x_1);
x_43 = lean_apply_2(x_9, x_41, x_42);
return x_43;
}
case 8:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 1);
lean_inc(x_45);
lean_dec(x_1);
x_46 = lean_apply_2(x_10, x_44, x_45);
return x_46;
}
case 9:
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_47 = lean_ctor_get(x_1, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_1, 1);
lean_inc(x_48);
lean_dec(x_1);
x_49 = lean_apply_2(x_11, x_47, x_48);
return x_49;
}
case 10:
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_50 = lean_ctor_get(x_1, 0);
lean_inc(x_50);
lean_dec(x_1);
x_51 = lean_apply_1(x_12, x_50);
return x_51;
}
case 11:
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_52 = lean_ctor_get(x_1, 0);
lean_inc(x_52);
lean_dec(x_1);
x_53 = lean_apply_1(x_13, x_52);
return x_53;
}
case 12:
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_54 = lean_ctor_get(x_1, 0);
lean_inc(x_54);
lean_dec(x_1);
x_55 = lean_apply_1(x_14, x_54);
return x_55;
}
default: 
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_56 = lean_ctor_get(x_1, 0);
lean_inc(x_56);
lean_dec(x_1);
x_57 = lean_apply_1(x_15, x_56);
return x_57;
}
}
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr_match__1___rarg), 15, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = lean_mk_string(" ");
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_8);
x_10 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg(x_6);
x_11 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = 1;
x_13 = x_2 + x_12;
x_2 = x_13;
x_4 = x_11;
goto _start;
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_IR_formatArray___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_2);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_box(0);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lean_nat_dec_le(x_2, x_2);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_box(0);
return x_7;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_2);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__2(x_1, x_8, x_9, x_10);
return x_11;
}
}
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo(x_2);
x_5 = l_Lean_IR_formatArray___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__1(x_3);
lean_dec(x_3);
x_6 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_Nat_repr(x_7);
x_10 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_mk_string("reset[");
x_12 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
x_14 = lean_mk_string("] ");
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Nat_repr(x_8);
x_18 = lean_mk_string("x_");
x_19 = lean_string_append(x_18, x_17);
lean_dec(x_17);
x_20 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
case 2:
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
x_24 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_25 = lean_ctor_get(x_1, 2);
lean_inc(x_25);
lean_dec(x_1);
x_26 = l_Nat_repr(x_22);
x_27 = lean_mk_string("x_");
x_28 = lean_string_append(x_27, x_26);
lean_dec(x_26);
x_29 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_mk_string(" in ");
x_31 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatCtorInfo(x_23);
x_33 = l_Lean_IR_formatArray___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__1(x_25);
lean_dec(x_25);
if (x_24 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_34 = lean_mk_string("reuse");
x_35 = lean_mk_string("");
x_36 = lean_string_append(x_34, x_35);
lean_dec(x_35);
x_37 = lean_mk_string(" ");
x_38 = lean_string_append(x_36, x_37);
lean_dec(x_37);
x_39 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_29);
x_41 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_31);
x_42 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_32);
x_43 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_33);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_44 = lean_mk_string("reuse");
x_45 = lean_mk_string("!");
x_46 = lean_string_append(x_44, x_45);
lean_dec(x_45);
x_47 = lean_mk_string(" ");
x_48 = lean_string_append(x_46, x_47);
lean_dec(x_47);
x_49 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_49, 0, x_48);
x_50 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_29);
x_51 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_31);
x_52 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_32);
x_53 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_33);
return x_53;
}
}
case 3:
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_54 = lean_ctor_get(x_1, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_1, 1);
lean_inc(x_55);
lean_dec(x_1);
x_56 = l_Nat_repr(x_54);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = lean_mk_string("proj[");
x_59 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_59, 0, x_58);
x_60 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
x_61 = lean_mk_string("] ");
x_62 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_62, 0, x_61);
x_63 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_62);
x_64 = l_Nat_repr(x_55);
x_65 = lean_mk_string("x_");
x_66 = lean_string_append(x_65, x_64);
lean_dec(x_64);
x_67 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_67, 0, x_66);
x_68 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_68, 0, x_63);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
case 4:
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_69 = lean_ctor_get(x_1, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_1, 1);
lean_inc(x_70);
lean_dec(x_1);
x_71 = l_Nat_repr(x_69);
x_72 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_73 = lean_mk_string("uproj[");
x_74 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_74, 0, x_73);
x_75 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_72);
x_76 = lean_mk_string("] ");
x_77 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_77, 0, x_76);
x_78 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_77);
x_79 = l_Nat_repr(x_70);
x_80 = lean_mk_string("x_");
x_81 = lean_string_append(x_80, x_79);
lean_dec(x_79);
x_82 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_82, 0, x_81);
x_83 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_83, 0, x_78);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
case 5:
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_84 = lean_ctor_get(x_1, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_1, 1);
lean_inc(x_85);
x_86 = lean_ctor_get(x_1, 2);
lean_inc(x_86);
lean_dec(x_1);
x_87 = l_Nat_repr(x_84);
x_88 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_88, 0, x_87);
x_89 = lean_mk_string("sproj[");
x_90 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_90, 0, x_89);
x_91 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_88);
x_92 = lean_mk_string(", ");
x_93 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_93, 0, x_92);
x_94 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_93);
x_95 = l_Nat_repr(x_85);
x_96 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_96, 0, x_95);
x_97 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_mk_string("] ");
x_99 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_99, 0, x_98);
x_100 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_99);
x_101 = l_Nat_repr(x_86);
x_102 = lean_mk_string("x_");
x_103 = lean_string_append(x_102, x_101);
lean_dec(x_101);
x_104 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_104, 0, x_103);
x_105 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_105, 0, x_100);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
case 6:
{
lean_object* x_106; lean_object* x_107; uint8_t x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_106 = lean_ctor_get(x_1, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_1, 1);
lean_inc(x_107);
lean_dec(x_1);
x_108 = 1;
x_109 = l_Lean_Name_toString(x_106, x_108);
x_110 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_110, 0, x_109);
x_111 = l_Lean_IR_formatArray___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__1(x_107);
lean_dec(x_107);
x_112 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
case 7:
{
lean_object* x_113; lean_object* x_114; uint8_t x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_113 = lean_ctor_get(x_1, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_1, 1);
lean_inc(x_114);
lean_dec(x_1);
x_115 = 1;
x_116 = l_Lean_Name_toString(x_113, x_115);
x_117 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_117, 0, x_116);
x_118 = lean_mk_string("pap ");
x_119 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_119, 0, x_118);
x_120 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_117);
x_121 = l_Lean_IR_formatArray___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__1(x_114);
lean_dec(x_114);
x_122 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
case 8:
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_123 = lean_ctor_get(x_1, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_1, 1);
lean_inc(x_124);
lean_dec(x_1);
x_125 = l_Nat_repr(x_123);
x_126 = lean_mk_string("x_");
x_127 = lean_string_append(x_126, x_125);
lean_dec(x_125);
x_128 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_128, 0, x_127);
x_129 = lean_mk_string("app ");
x_130 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_130, 0, x_129);
x_131 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_128);
x_132 = l_Lean_IR_formatArray___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__1(x_124);
lean_dec(x_124);
x_133 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
return x_133;
}
case 9:
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_134 = lean_ctor_get(x_1, 1);
lean_inc(x_134);
lean_dec(x_1);
x_135 = l_Nat_repr(x_134);
x_136 = lean_mk_string("x_");
x_137 = lean_string_append(x_136, x_135);
lean_dec(x_135);
x_138 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_138, 0, x_137);
x_139 = lean_mk_string("box ");
x_140 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_140, 0, x_139);
x_141 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_138);
return x_141;
}
case 10:
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_142 = lean_ctor_get(x_1, 0);
lean_inc(x_142);
lean_dec(x_1);
x_143 = l_Nat_repr(x_142);
x_144 = lean_mk_string("x_");
x_145 = lean_string_append(x_144, x_143);
lean_dec(x_143);
x_146 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_146, 0, x_145);
x_147 = lean_mk_string("unbox ");
x_148 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_148, 0, x_147);
x_149 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_146);
return x_149;
}
case 11:
{
lean_object* x_150; lean_object* x_151; 
x_150 = lean_ctor_get(x_1, 0);
lean_inc(x_150);
lean_dec(x_1);
x_151 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatLitVal(x_150);
return x_151;
}
case 12:
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_152 = lean_ctor_get(x_1, 0);
lean_inc(x_152);
lean_dec(x_1);
x_153 = l_Nat_repr(x_152);
x_154 = lean_mk_string("x_");
x_155 = lean_string_append(x_154, x_153);
lean_dec(x_153);
x_156 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_156, 0, x_155);
x_157 = lean_mk_string("isShared ");
x_158 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_158, 0, x_157);
x_159 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_156);
return x_159;
}
default: 
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_160 = lean_ctor_get(x_1, 0);
lean_inc(x_160);
lean_dec(x_1);
x_161 = l_Nat_repr(x_160);
x_162 = lean_mk_string("x_");
x_163 = lean_string_append(x_162, x_161);
lean_dec(x_161);
x_164 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_164, 0, x_163);
x_165 = lean_mk_string("isTaggedPtr ");
x_166 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_166, 0, x_165);
x_167 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_164);
return x_167;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__2(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_IR_formatArray___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_formatArray___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_instToFormatExpr() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr), 1, 0);
return x_1;
}
}
lean_object* l_Lean_IR_instToStringExpr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr(x_1);
x_3 = l_Std_Format_defWidth;
x_4 = lean_format_pretty(x_2, x_3);
return x_4;
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_13 = lean_box(0);
x_14 = lean_apply_1(x_2, x_13);
return x_14;
}
case 1:
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_15 = lean_box(0);
x_16 = lean_apply_1(x_3, x_15);
return x_16;
}
case 2:
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_17 = lean_box(0);
x_18 = lean_apply_1(x_4, x_17);
return x_18;
}
case 3:
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = lean_box(0);
x_20 = lean_apply_1(x_5, x_19);
return x_20;
}
case 4:
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_box(0);
x_22 = lean_apply_1(x_6, x_21);
return x_22;
}
case 5:
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = lean_box(0);
x_24 = lean_apply_1(x_7, x_23);
return x_24;
}
case 6:
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = lean_box(0);
x_26 = lean_apply_1(x_8, x_25);
return x_26;
}
case 7:
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_27 = lean_box(0);
x_28 = lean_apply_1(x_9, x_27);
return x_28;
}
case 8:
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = lean_box(0);
x_30 = lean_apply_1(x_10, x_29);
return x_30;
}
case 9:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = lean_ctor_get(x_1, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_1, 1);
lean_inc(x_32);
lean_dec(x_1);
x_33 = lean_apply_2(x_11, x_31, x_32);
return x_33;
}
default: 
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_34 = lean_ctor_get(x_1, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_1, 1);
lean_inc(x_35);
lean_dec(x_1);
x_36 = lean_apply_2(x_12, x_34, x_35);
return x_36;
}
}
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType_match__1___rarg), 12, 0);
return x_2;
}
}
lean_object* l_Std_Format_joinSep___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_7);
lean_inc(x_2);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_2);
x_10 = l_Std_Format_joinSep___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___spec__1(x_4, x_2);
x_11 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("float");
x_3 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
case 1:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_mk_string("u8");
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
case 2:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_mk_string("u16");
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
case 3:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_mk_string("u32");
x_9 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
case 4:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_mk_string("u64");
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
case 5:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_mk_string("usize");
x_13 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
case 6:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_mk_string("◾");
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
case 7:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_mk_string("obj");
x_17 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
case 8:
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_mk_string("tobj");
x_19 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
case 9:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_array_to_list(lean_box(0), x_20);
x_22 = lean_mk_string(", ");
x_23 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = l_Std_Format_joinSep___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___spec__1(x_21, x_23);
x_25 = lean_mk_string("{");
x_26 = lean_string_length(x_25);
x_27 = lean_nat_to_int(x_26);
x_28 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_28, 0, x_25);
x_29 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_24);
x_30 = lean_mk_string("}");
x_31 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_33, 0, x_27);
lean_ctor_set(x_33, 1, x_32);
x_34 = 0;
x_35 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set_uint8(x_35, sizeof(void*)*1, x_34);
x_36 = lean_mk_string("struct ");
x_37 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_35);
return x_38;
}
default: 
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_39 = lean_ctor_get(x_1, 1);
lean_inc(x_39);
lean_dec(x_1);
x_40 = lean_array_to_list(lean_box(0), x_39);
x_41 = lean_mk_string(", ");
x_42 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = l_Std_Format_joinSep___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType___spec__1(x_40, x_42);
x_44 = lean_mk_string("{");
x_45 = lean_string_length(x_44);
x_46 = lean_nat_to_int(x_45);
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_44);
x_48 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_43);
x_49 = lean_mk_string("}");
x_50 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_51 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_51, 0, x_48);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_52, 0, x_46);
lean_ctor_set(x_52, 1, x_51);
x_53 = 0;
x_54 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set_uint8(x_54, sizeof(void*)*1, x_53);
x_55 = lean_mk_string("union ");
x_56 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_56, 0, x_55);
x_57 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
return x_57;
}
}
}
}
static lean_object* _init_l_Lean_IR_instToFormatIRType() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_instToStringIRType() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_alloc_closure((void*)(l_Lean_Syntax_instToStringSyntax___lambda__1), 1, 0);
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType), 1, 0);
x_3 = lean_alloc_closure((void*)(l_Function_comp___rarg), 3, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_box(x_4);
x_7 = lean_apply_3(x_2, x_3, x_6, x_5);
return x_7;
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Nat_repr(x_2);
x_6 = lean_mk_string("x_");
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_mk_string("(");
x_10 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
x_12 = lean_mk_string(" : ");
x_13 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
x_15 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_4);
x_16 = lean_mk_string(")");
x_17 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_17, 0, x_16);
if (x_3 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_mk_string("");
x_19 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_15);
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_17);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_mk_string("@& ");
x_24 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_25, 0, x_14);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_15);
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_17);
return x_27;
}
}
}
static lean_object* _init_l_Lean_IR_instToFormatParam() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam), 1, 0);
return x_1;
}
}
lean_object* l_Lean_IR_formatAlt_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
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
lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
}
}
lean_object* l_Lean_IR_formatAlt_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_formatAlt_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_formatAlt(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = 1;
x_8 = l_Lean_Name_toString(x_6, x_7);
x_9 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_mk_string(" →");
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_nat_to_int(x_2);
x_14 = lean_apply_1(x_1, x_5);
x_15 = lean_box(1);
x_16 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_3, 0);
lean_inc(x_19);
lean_dec(x_3);
x_20 = lean_nat_to_int(x_2);
x_21 = lean_apply_1(x_1, x_19);
x_22 = lean_box(1);
x_23 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_24, 0, x_20);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_mk_string("default →");
x_26 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
return x_27;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_formatParams___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = lean_mk_string(" ");
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_8);
x_10 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatParam(x_6);
x_11 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = 1;
x_13 = x_2 + x_12;
x_2 = x_13;
x_4 = x_11;
goto _start;
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_IR_formatArray___at_Lean_IR_formatParams___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_lt(x_3, x_2);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_box(0);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = lean_nat_dec_le(x_2, x_2);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_box(0);
return x_7;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_2);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_IR_formatParams___spec__2(x_1, x_8, x_9, x_10);
return x_11;
}
}
}
}
lean_object* l_Lean_IR_formatParams(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_formatArray___at_Lean_IR_formatParams___spec__1(x_1);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_formatParams___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_IR_formatParams___spec__2(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_IR_formatArray___at_Lean_IR_formatParams___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_formatArray___at_Lean_IR_formatParams___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_formatParams___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_formatParams(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_formatFnBodyHead_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 2);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 3);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_apply_4(x_2, x_16, x_17, x_18, x_19);
return x_20;
}
case 1:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 2);
lean_inc(x_23);
x_24 = lean_ctor_get(x_1, 3);
lean_inc(x_24);
lean_dec(x_1);
x_25 = lean_apply_4(x_3, x_21, x_22, x_23, x_24);
return x_25;
}
case 2:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 2);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 3);
lean_inc(x_29);
lean_dec(x_1);
x_30 = lean_apply_4(x_4, x_26, x_27, x_28, x_29);
return x_30;
}
case 3:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
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
lean_dec(x_1);
x_34 = lean_apply_3(x_7, x_31, x_32, x_33);
return x_34;
}
case 4:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = lean_ctor_get(x_1, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 1);
lean_inc(x_36);
x_37 = lean_ctor_get(x_1, 2);
lean_inc(x_37);
x_38 = lean_ctor_get(x_1, 3);
lean_inc(x_38);
lean_dec(x_1);
x_39 = lean_apply_4(x_5, x_35, x_36, x_37, x_38);
return x_39;
}
case 5:
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_40 = lean_ctor_get(x_1, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_1, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_1, 2);
lean_inc(x_42);
x_43 = lean_ctor_get(x_1, 3);
lean_inc(x_43);
x_44 = lean_ctor_get(x_1, 4);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 5);
lean_inc(x_45);
lean_dec(x_1);
x_46 = lean_apply_6(x_6, x_40, x_41, x_42, x_43, x_44, x_45);
return x_46;
}
case 6:
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_47 = lean_ctor_get(x_1, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_1, 1);
lean_inc(x_48);
x_49 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_50 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 1);
x_51 = lean_ctor_get(x_1, 2);
lean_inc(x_51);
lean_dec(x_1);
x_52 = lean_box(x_49);
x_53 = lean_box(x_50);
x_54 = lean_apply_5(x_8, x_47, x_48, x_52, x_53, x_51);
return x_54;
}
case 7:
{
lean_object* x_55; lean_object* x_56; uint8_t x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_55 = lean_ctor_get(x_1, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_1, 1);
lean_inc(x_56);
x_57 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_58 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 1);
x_59 = lean_ctor_get(x_1, 2);
lean_inc(x_59);
lean_dec(x_1);
x_60 = lean_box(x_57);
x_61 = lean_box(x_58);
x_62 = lean_apply_5(x_9, x_55, x_56, x_60, x_61, x_59);
return x_62;
}
case 8:
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_63 = lean_ctor_get(x_1, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_1, 1);
lean_inc(x_64);
lean_dec(x_1);
x_65 = lean_apply_2(x_10, x_63, x_64);
return x_65;
}
case 9:
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_66 = lean_ctor_get(x_1, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_1, 1);
lean_inc(x_67);
lean_dec(x_1);
x_68 = lean_apply_2(x_11, x_66, x_67);
return x_68;
}
case 10:
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_69 = lean_ctor_get(x_1, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_1, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_1, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_1, 3);
lean_inc(x_72);
lean_dec(x_1);
x_73 = lean_apply_4(x_12, x_69, x_70, x_71, x_72);
return x_73;
}
case 11:
{
lean_object* x_74; lean_object* x_75; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_74 = lean_ctor_get(x_1, 0);
lean_inc(x_74);
lean_dec(x_1);
x_75 = lean_apply_1(x_14, x_74);
return x_75;
}
case 12:
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_76 = lean_ctor_get(x_1, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_1, 1);
lean_inc(x_77);
lean_dec(x_1);
x_78 = lean_apply_2(x_13, x_76, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_79 = lean_box(0);
x_80 = lean_apply_1(x_15, x_79);
return x_80;
}
}
}
}
lean_object* l_Lean_IR_formatFnBodyHead_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_formatFnBodyHead_match__1___rarg), 15, 0);
return x_2;
}
}
lean_object* lean_ir_format_fn_body_head(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Nat_repr(x_2);
x_6 = lean_mk_string("x_");
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_mk_string("let ");
x_10 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
x_12 = lean_mk_string(" : ");
x_13 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
x_15 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_3);
x_16 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_mk_string(" := ");
x_18 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
x_20 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr(x_4);
x_21 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
case 1:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = l_Nat_repr(x_22);
x_25 = lean_mk_string("block_");
x_26 = lean_string_append(x_25, x_24);
lean_dec(x_24);
x_27 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = l_Lean_IR_formatArray___at_Lean_IR_formatParams___spec__1(x_23);
lean_dec(x_23);
x_29 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_mk_string(" := ...");
x_31 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
case 2:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_33 = lean_ctor_get(x_1, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_1, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_1, 2);
lean_inc(x_35);
lean_dec(x_1);
x_36 = l_Nat_repr(x_33);
x_37 = lean_mk_string("x_");
x_38 = lean_string_append(x_37, x_36);
lean_dec(x_36);
x_39 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = lean_mk_string("set ");
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_40);
x_42 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_39);
x_43 = lean_mk_string("[");
x_44 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_Nat_repr(x_34);
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_mk_string("] := ");
x_50 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_51 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_51, 0, x_48);
lean_ctor_set(x_51, 1, x_50);
x_52 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg(x_35);
x_53 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
case 3:
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_54 = lean_ctor_get(x_1, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_1, 1);
lean_inc(x_55);
lean_dec(x_1);
x_56 = l_Nat_repr(x_54);
x_57 = lean_mk_string("x_");
x_58 = lean_string_append(x_57, x_56);
lean_dec(x_56);
x_59 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_59, 0, x_58);
x_60 = lean_mk_string("setTag ");
x_61 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_61, 0, x_60);
x_62 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_59);
x_63 = lean_mk_string(" := ");
x_64 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_64, 0, x_63);
x_65 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_64);
x_66 = l_Nat_repr(x_55);
x_67 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_67, 0, x_66);
x_68 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
case 4:
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_69 = lean_ctor_get(x_1, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_1, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_1, 2);
lean_inc(x_71);
lean_dec(x_1);
x_72 = l_Nat_repr(x_69);
x_73 = lean_mk_string("x_");
lean_inc(x_73);
x_74 = lean_string_append(x_73, x_72);
lean_dec(x_72);
x_75 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_75, 0, x_74);
x_76 = lean_mk_string("uset ");
x_77 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_77, 0, x_76);
x_78 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_75);
x_79 = lean_mk_string("[");
x_80 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_80, 0, x_79);
x_81 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_80);
x_82 = l_Nat_repr(x_70);
x_83 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_83, 0, x_82);
x_84 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_84, 0, x_81);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_mk_string("] := ");
x_86 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_86, 0, x_85);
x_87 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_86);
x_88 = l_Nat_repr(x_71);
x_89 = lean_string_append(x_73, x_88);
lean_dec(x_88);
x_90 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_90, 0, x_89);
x_91 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_91, 0, x_87);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
case 5:
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_92 = lean_ctor_get(x_1, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_1, 1);
lean_inc(x_93);
x_94 = lean_ctor_get(x_1, 2);
lean_inc(x_94);
x_95 = lean_ctor_get(x_1, 3);
lean_inc(x_95);
x_96 = lean_ctor_get(x_1, 4);
lean_inc(x_96);
lean_dec(x_1);
x_97 = l_Nat_repr(x_92);
x_98 = lean_mk_string("x_");
lean_inc(x_98);
x_99 = lean_string_append(x_98, x_97);
lean_dec(x_97);
x_100 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_100, 0, x_99);
x_101 = lean_mk_string("sset ");
x_102 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_102, 0, x_101);
x_103 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_100);
x_104 = lean_mk_string("[");
x_105 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_105, 0, x_104);
x_106 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_106, 0, x_103);
lean_ctor_set(x_106, 1, x_105);
x_107 = l_Nat_repr(x_93);
x_108 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_108, 0, x_107);
x_109 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_109, 0, x_106);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_mk_string(", ");
x_111 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_111, 0, x_110);
x_112 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_112, 0, x_109);
lean_ctor_set(x_112, 1, x_111);
x_113 = l_Nat_repr(x_94);
x_114 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_114, 0, x_113);
x_115 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_115, 0, x_112);
lean_ctor_set(x_115, 1, x_114);
x_116 = lean_mk_string("] : ");
x_117 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_117, 0, x_116);
x_118 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_118, 0, x_115);
lean_ctor_set(x_118, 1, x_117);
x_119 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_96);
x_120 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
x_121 = lean_mk_string(" := ");
x_122 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_122, 0, x_121);
x_123 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_123, 0, x_120);
lean_ctor_set(x_123, 1, x_122);
x_124 = l_Nat_repr(x_95);
x_125 = lean_string_append(x_98, x_124);
lean_dec(x_124);
x_126 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_126, 0, x_125);
x_127 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_127, 0, x_123);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
case 6:
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; uint8_t x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_128 = lean_ctor_get(x_1, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_1, 1);
lean_inc(x_129);
lean_dec(x_1);
x_130 = lean_unsigned_to_nat(1u);
x_131 = lean_nat_dec_eq(x_129, x_130);
x_132 = lean_mk_string("inc");
x_133 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_133, 0, x_132);
x_134 = lean_mk_string(" ");
x_135 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_135, 0, x_134);
x_136 = l_Nat_repr(x_128);
x_137 = lean_mk_string("x_");
x_138 = lean_string_append(x_137, x_136);
lean_dec(x_136);
x_139 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_139, 0, x_138);
if (x_131 == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; uint8_t x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_140 = l_Nat_repr(x_129);
x_141 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_141, 0, x_140);
x_142 = lean_mk_string("[");
x_143 = lean_string_length(x_142);
x_144 = lean_nat_to_int(x_143);
x_145 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_145, 0, x_142);
x_146 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_141);
x_147 = lean_mk_string("]");
x_148 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_148, 0, x_147);
x_149 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_149, 0, x_146);
lean_ctor_set(x_149, 1, x_148);
x_150 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_150, 0, x_144);
lean_ctor_set(x_150, 1, x_149);
x_151 = 0;
x_152 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set_uint8(x_152, sizeof(void*)*1, x_151);
x_153 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_153, 0, x_133);
lean_ctor_set(x_153, 1, x_152);
x_154 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_135);
x_155 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_139);
return x_155;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_129);
x_156 = lean_mk_string("");
x_157 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_157, 0, x_156);
x_158 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_158, 0, x_133);
lean_ctor_set(x_158, 1, x_157);
x_159 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_135);
x_160 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_160, 0, x_159);
lean_ctor_set(x_160, 1, x_139);
return x_160;
}
}
case 7:
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; uint8_t x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_161 = lean_ctor_get(x_1, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_1, 1);
lean_inc(x_162);
lean_dec(x_1);
x_163 = lean_unsigned_to_nat(1u);
x_164 = lean_nat_dec_eq(x_162, x_163);
x_165 = lean_mk_string("dec");
x_166 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_166, 0, x_165);
x_167 = lean_mk_string(" ");
x_168 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_168, 0, x_167);
x_169 = l_Nat_repr(x_161);
x_170 = lean_mk_string("x_");
x_171 = lean_string_append(x_170, x_169);
lean_dec(x_169);
x_172 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_172, 0, x_171);
if (x_164 == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; uint8_t x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_173 = l_Nat_repr(x_162);
x_174 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_174, 0, x_173);
x_175 = lean_mk_string("[");
x_176 = lean_string_length(x_175);
x_177 = lean_nat_to_int(x_176);
x_178 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_178, 0, x_175);
x_179 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_179, 0, x_178);
lean_ctor_set(x_179, 1, x_174);
x_180 = lean_mk_string("]");
x_181 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_181, 0, x_180);
x_182 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_182, 0, x_179);
lean_ctor_set(x_182, 1, x_181);
x_183 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_183, 0, x_177);
lean_ctor_set(x_183, 1, x_182);
x_184 = 0;
x_185 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_185, 0, x_183);
lean_ctor_set_uint8(x_185, sizeof(void*)*1, x_184);
x_186 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_186, 0, x_166);
lean_ctor_set(x_186, 1, x_185);
x_187 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_187, 0, x_186);
lean_ctor_set(x_187, 1, x_168);
x_188 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_172);
return x_188;
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
lean_dec(x_162);
x_189 = lean_mk_string("");
x_190 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_190, 0, x_189);
x_191 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_191, 0, x_166);
lean_ctor_set(x_191, 1, x_190);
x_192 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_168);
x_193 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_172);
return x_193;
}
}
case 8:
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_194 = lean_ctor_get(x_1, 0);
lean_inc(x_194);
lean_dec(x_1);
x_195 = l_Nat_repr(x_194);
x_196 = lean_mk_string("x_");
x_197 = lean_string_append(x_196, x_195);
lean_dec(x_195);
x_198 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_198, 0, x_197);
x_199 = lean_mk_string("del ");
x_200 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_200, 0, x_199);
x_201 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_198);
return x_201;
}
case 9:
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_202 = lean_ctor_get(x_1, 0);
lean_inc(x_202);
lean_dec(x_1);
x_203 = l_Lean_formatKVMap(x_202);
x_204 = lean_mk_string("mdata ");
x_205 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_205, 0, x_204);
x_206 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_206, 0, x_205);
lean_ctor_set(x_206, 1, x_203);
return x_206;
}
case 10:
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
x_207 = lean_ctor_get(x_1, 1);
lean_inc(x_207);
lean_dec(x_1);
x_208 = l_Nat_repr(x_207);
x_209 = lean_mk_string("x_");
x_210 = lean_string_append(x_209, x_208);
lean_dec(x_208);
x_211 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_211, 0, x_210);
x_212 = lean_mk_string("case ");
x_213 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_213, 0, x_212);
x_214 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_211);
x_215 = lean_mk_string(" of ...");
x_216 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_216, 0, x_215);
x_217 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_217, 0, x_214);
lean_ctor_set(x_217, 1, x_216);
return x_217;
}
case 11:
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_218 = lean_ctor_get(x_1, 0);
lean_inc(x_218);
lean_dec(x_1);
x_219 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg(x_218);
x_220 = lean_mk_string("ret ");
x_221 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_221, 0, x_220);
x_222 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_219);
return x_222;
}
case 12:
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; 
x_223 = lean_ctor_get(x_1, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_1, 1);
lean_inc(x_224);
lean_dec(x_1);
x_225 = l_Nat_repr(x_223);
x_226 = lean_mk_string("block_");
x_227 = lean_string_append(x_226, x_225);
lean_dec(x_225);
x_228 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_228, 0, x_227);
x_229 = lean_mk_string("jmp ");
x_230 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_230, 0, x_229);
x_231 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_231, 0, x_230);
lean_ctor_set(x_231, 1, x_228);
x_232 = l_Lean_IR_formatArray___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__1(x_224);
lean_dec(x_224);
x_233 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_233, 0, x_231);
lean_ctor_set(x_233, 1, x_232);
return x_233;
}
default: 
{
lean_object* x_234; lean_object* x_235; 
x_234 = lean_mk_string("⊥");
x_235 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_235, 0, x_234);
return x_235;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_formatFnBody_loop___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = lean_box(1);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Lean_IR_formatFnBody_loop), 2, 1);
lean_closure_set(x_10, 0, x_1);
lean_inc(x_1);
x_11 = l_Lean_IR_formatAlt(x_10, x_1, x_7);
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = 1;
x_14 = x_3 + x_13;
x_3 = x_14;
x_5 = x_12;
goto _start;
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Lean_IR_formatFnBody_loop(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Nat_repr(x_3);
x_8 = lean_mk_string("x_");
x_9 = lean_string_append(x_8, x_7);
lean_dec(x_7);
x_10 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_mk_string("let ");
x_12 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
x_14 = lean_mk_string(" : ");
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_4);
x_18 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_mk_string(" := ");
x_20 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr(x_5);
x_23 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_mk_string(";");
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_box(1);
x_28 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_IR_formatFnBody_loop(x_1, x_6);
x_30 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
case 1:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_31 = lean_ctor_get(x_2, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_2, 1);
lean_inc(x_32);
x_33 = lean_ctor_get(x_2, 2);
lean_inc(x_33);
x_34 = lean_ctor_get(x_2, 3);
lean_inc(x_34);
lean_dec(x_2);
x_35 = l_Nat_repr(x_31);
x_36 = lean_mk_string("block_");
x_37 = lean_string_append(x_36, x_35);
lean_dec(x_35);
x_38 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_38, 0, x_37);
x_39 = l_Lean_IR_formatArray___at_Lean_IR_formatParams___spec__1(x_32);
lean_dec(x_32);
x_40 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_mk_string(" :=");
x_42 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_42);
lean_inc(x_1);
x_44 = lean_nat_to_int(x_1);
lean_inc(x_1);
x_45 = l_Lean_IR_formatFnBody_loop(x_1, x_33);
x_46 = lean_box(1);
x_47 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_48, 0, x_44);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_49, 0, x_43);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_mk_string(";");
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_46);
x_54 = l_Lean_IR_formatFnBody_loop(x_1, x_34);
x_55 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
case 2:
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_56 = lean_ctor_get(x_2, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_2, 1);
lean_inc(x_57);
x_58 = lean_ctor_get(x_2, 2);
lean_inc(x_58);
x_59 = lean_ctor_get(x_2, 3);
lean_inc(x_59);
lean_dec(x_2);
x_60 = l_Nat_repr(x_56);
x_61 = lean_mk_string("x_");
x_62 = lean_string_append(x_61, x_60);
lean_dec(x_60);
x_63 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_63, 0, x_62);
x_64 = lean_mk_string("set ");
x_65 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_63);
x_67 = lean_mk_string("[");
x_68 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_68, 0, x_67);
x_69 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_68);
x_70 = l_Nat_repr(x_57);
x_71 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_71, 0, x_70);
x_72 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_mk_string("] := ");
x_74 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_74, 0, x_73);
x_75 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_74);
x_76 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg(x_58);
x_77 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_mk_string(";");
x_79 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_79, 0, x_78);
x_80 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_box(1);
x_82 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
x_83 = l_Lean_IR_formatFnBody_loop(x_1, x_59);
x_84 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
case 3:
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_85 = lean_ctor_get(x_2, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_2, 1);
lean_inc(x_86);
x_87 = lean_ctor_get(x_2, 2);
lean_inc(x_87);
lean_dec(x_2);
x_88 = l_Nat_repr(x_85);
x_89 = lean_mk_string("x_");
x_90 = lean_string_append(x_89, x_88);
lean_dec(x_88);
x_91 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_91, 0, x_90);
x_92 = lean_mk_string("setTag ");
x_93 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_93, 0, x_92);
x_94 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_91);
x_95 = lean_mk_string(" := ");
x_96 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_96, 0, x_95);
x_97 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_96);
x_98 = l_Nat_repr(x_86);
x_99 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_99, 0, x_98);
x_100 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_99);
x_101 = lean_mk_string(";");
x_102 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_102, 0, x_101);
x_103 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_103, 0, x_100);
lean_ctor_set(x_103, 1, x_102);
x_104 = lean_box(1);
x_105 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
x_106 = l_Lean_IR_formatFnBody_loop(x_1, x_87);
x_107 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
case 4:
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_108 = lean_ctor_get(x_2, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_2, 1);
lean_inc(x_109);
x_110 = lean_ctor_get(x_2, 2);
lean_inc(x_110);
x_111 = lean_ctor_get(x_2, 3);
lean_inc(x_111);
lean_dec(x_2);
x_112 = l_Nat_repr(x_108);
x_113 = lean_mk_string("x_");
lean_inc(x_113);
x_114 = lean_string_append(x_113, x_112);
lean_dec(x_112);
x_115 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_115, 0, x_114);
x_116 = lean_mk_string("uset ");
x_117 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_117, 0, x_116);
x_118 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_115);
x_119 = lean_mk_string("[");
x_120 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_120, 0, x_119);
x_121 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_121, 0, x_118);
lean_ctor_set(x_121, 1, x_120);
x_122 = l_Nat_repr(x_109);
x_123 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_123, 0, x_122);
x_124 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_124, 0, x_121);
lean_ctor_set(x_124, 1, x_123);
x_125 = lean_mk_string("] := ");
x_126 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_126, 0, x_125);
x_127 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_127, 0, x_124);
lean_ctor_set(x_127, 1, x_126);
x_128 = l_Nat_repr(x_110);
x_129 = lean_string_append(x_113, x_128);
lean_dec(x_128);
x_130 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_130, 0, x_129);
x_131 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_131, 0, x_127);
lean_ctor_set(x_131, 1, x_130);
x_132 = lean_mk_string(";");
x_133 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_133, 0, x_132);
x_134 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_134, 0, x_131);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_box(1);
x_136 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_136, 0, x_134);
lean_ctor_set(x_136, 1, x_135);
x_137 = l_Lean_IR_formatFnBody_loop(x_1, x_111);
x_138 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_137);
return x_138;
}
case 5:
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_139 = lean_ctor_get(x_2, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_2, 1);
lean_inc(x_140);
x_141 = lean_ctor_get(x_2, 2);
lean_inc(x_141);
x_142 = lean_ctor_get(x_2, 3);
lean_inc(x_142);
x_143 = lean_ctor_get(x_2, 4);
lean_inc(x_143);
x_144 = lean_ctor_get(x_2, 5);
lean_inc(x_144);
lean_dec(x_2);
x_145 = l_Nat_repr(x_139);
x_146 = lean_mk_string("x_");
lean_inc(x_146);
x_147 = lean_string_append(x_146, x_145);
lean_dec(x_145);
x_148 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_148, 0, x_147);
x_149 = lean_mk_string("sset ");
x_150 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_150, 0, x_149);
x_151 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_148);
x_152 = lean_mk_string("[");
x_153 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_153, 0, x_152);
x_154 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_154, 0, x_151);
lean_ctor_set(x_154, 1, x_153);
x_155 = l_Nat_repr(x_140);
x_156 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_156, 0, x_155);
x_157 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_157, 0, x_154);
lean_ctor_set(x_157, 1, x_156);
x_158 = lean_mk_string(", ");
x_159 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_159, 0, x_158);
x_160 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_160, 0, x_157);
lean_ctor_set(x_160, 1, x_159);
x_161 = l_Nat_repr(x_141);
x_162 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_162, 0, x_161);
x_163 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_163, 0, x_160);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_mk_string("] : ");
x_165 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_165, 0, x_164);
x_166 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_166, 0, x_163);
lean_ctor_set(x_166, 1, x_165);
x_167 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_143);
x_168 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set(x_168, 1, x_167);
x_169 = lean_mk_string(" := ");
x_170 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_170, 0, x_169);
x_171 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_171, 0, x_168);
lean_ctor_set(x_171, 1, x_170);
x_172 = l_Nat_repr(x_142);
x_173 = lean_string_append(x_146, x_172);
lean_dec(x_172);
x_174 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_174, 0, x_173);
x_175 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_175, 0, x_171);
lean_ctor_set(x_175, 1, x_174);
x_176 = lean_mk_string(";");
x_177 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_177, 0, x_176);
x_178 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_178, 0, x_175);
lean_ctor_set(x_178, 1, x_177);
x_179 = lean_box(1);
x_180 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_179);
x_181 = l_Lean_IR_formatFnBody_loop(x_1, x_144);
x_182 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
return x_182;
}
case 6:
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; uint8_t x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_183 = lean_ctor_get(x_2, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_2, 1);
lean_inc(x_184);
x_185 = lean_ctor_get(x_2, 2);
lean_inc(x_185);
lean_dec(x_2);
x_186 = lean_unsigned_to_nat(1u);
x_187 = lean_nat_dec_eq(x_184, x_186);
x_188 = lean_mk_string("inc");
x_189 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_189, 0, x_188);
x_190 = lean_mk_string(" ");
x_191 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_191, 0, x_190);
x_192 = l_Nat_repr(x_183);
x_193 = lean_mk_string("x_");
x_194 = lean_string_append(x_193, x_192);
lean_dec(x_192);
x_195 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_195, 0, x_194);
x_196 = lean_mk_string(";");
x_197 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_197, 0, x_196);
x_198 = l_Lean_IR_formatFnBody_loop(x_1, x_185);
if (x_187 == 0)
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; uint8_t x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_199 = l_Nat_repr(x_184);
x_200 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_200, 0, x_199);
x_201 = lean_mk_string("[");
x_202 = lean_string_length(x_201);
x_203 = lean_nat_to_int(x_202);
x_204 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_204, 0, x_201);
x_205 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_205, 0, x_204);
lean_ctor_set(x_205, 1, x_200);
x_206 = lean_mk_string("]");
x_207 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_207, 0, x_206);
x_208 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_208, 0, x_205);
lean_ctor_set(x_208, 1, x_207);
x_209 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_209, 0, x_203);
lean_ctor_set(x_209, 1, x_208);
x_210 = 0;
x_211 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_211, 0, x_209);
lean_ctor_set_uint8(x_211, sizeof(void*)*1, x_210);
x_212 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_212, 0, x_189);
lean_ctor_set(x_212, 1, x_211);
x_213 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_213, 0, x_212);
lean_ctor_set(x_213, 1, x_191);
x_214 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_195);
x_215 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_197);
x_216 = lean_box(1);
x_217 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_217, 0, x_215);
lean_ctor_set(x_217, 1, x_216);
x_218 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_218, 0, x_217);
lean_ctor_set(x_218, 1, x_198);
return x_218;
}
else
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
lean_dec(x_184);
x_219 = lean_mk_string("");
x_220 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_220, 0, x_219);
x_221 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_221, 0, x_189);
lean_ctor_set(x_221, 1, x_220);
x_222 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_191);
x_223 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_223, 0, x_222);
lean_ctor_set(x_223, 1, x_195);
x_224 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_224, 0, x_223);
lean_ctor_set(x_224, 1, x_197);
x_225 = lean_box(1);
x_226 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_226, 0, x_224);
lean_ctor_set(x_226, 1, x_225);
x_227 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_227, 0, x_226);
lean_ctor_set(x_227, 1, x_198);
return x_227;
}
}
case 7:
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; uint8_t x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_228 = lean_ctor_get(x_2, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_2, 1);
lean_inc(x_229);
x_230 = lean_ctor_get(x_2, 2);
lean_inc(x_230);
lean_dec(x_2);
x_231 = lean_unsigned_to_nat(1u);
x_232 = lean_nat_dec_eq(x_229, x_231);
x_233 = lean_mk_string("dec");
x_234 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_234, 0, x_233);
x_235 = lean_mk_string(" ");
x_236 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_236, 0, x_235);
x_237 = l_Nat_repr(x_228);
x_238 = lean_mk_string("x_");
x_239 = lean_string_append(x_238, x_237);
lean_dec(x_237);
x_240 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_240, 0, x_239);
x_241 = lean_mk_string(";");
x_242 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_242, 0, x_241);
x_243 = l_Lean_IR_formatFnBody_loop(x_1, x_230);
if (x_232 == 0)
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; uint8_t x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
x_244 = l_Nat_repr(x_229);
x_245 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_245, 0, x_244);
x_246 = lean_mk_string("[");
x_247 = lean_string_length(x_246);
x_248 = lean_nat_to_int(x_247);
x_249 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_249, 0, x_246);
x_250 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_250, 0, x_249);
lean_ctor_set(x_250, 1, x_245);
x_251 = lean_mk_string("]");
x_252 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_252, 0, x_251);
x_253 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_253, 0, x_250);
lean_ctor_set(x_253, 1, x_252);
x_254 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_254, 0, x_248);
lean_ctor_set(x_254, 1, x_253);
x_255 = 0;
x_256 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_256, 0, x_254);
lean_ctor_set_uint8(x_256, sizeof(void*)*1, x_255);
x_257 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_257, 0, x_234);
lean_ctor_set(x_257, 1, x_256);
x_258 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_258, 0, x_257);
lean_ctor_set(x_258, 1, x_236);
x_259 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_259, 0, x_258);
lean_ctor_set(x_259, 1, x_240);
x_260 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_260, 0, x_259);
lean_ctor_set(x_260, 1, x_242);
x_261 = lean_box(1);
x_262 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_262, 0, x_260);
lean_ctor_set(x_262, 1, x_261);
x_263 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_263, 0, x_262);
lean_ctor_set(x_263, 1, x_243);
return x_263;
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; 
lean_dec(x_229);
x_264 = lean_mk_string("");
x_265 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_265, 0, x_264);
x_266 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_266, 0, x_234);
lean_ctor_set(x_266, 1, x_265);
x_267 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_267, 0, x_266);
lean_ctor_set(x_267, 1, x_236);
x_268 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_240);
x_269 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_269, 0, x_268);
lean_ctor_set(x_269, 1, x_242);
x_270 = lean_box(1);
x_271 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_271, 0, x_269);
lean_ctor_set(x_271, 1, x_270);
x_272 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_272, 0, x_271);
lean_ctor_set(x_272, 1, x_243);
return x_272;
}
}
case 8:
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; 
x_273 = lean_ctor_get(x_2, 0);
lean_inc(x_273);
x_274 = lean_ctor_get(x_2, 1);
lean_inc(x_274);
lean_dec(x_2);
x_275 = l_Nat_repr(x_273);
x_276 = lean_mk_string("x_");
x_277 = lean_string_append(x_276, x_275);
lean_dec(x_275);
x_278 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_278, 0, x_277);
x_279 = lean_mk_string("del ");
x_280 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_280, 0, x_279);
x_281 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_281, 0, x_280);
lean_ctor_set(x_281, 1, x_278);
x_282 = lean_mk_string(";");
x_283 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_283, 0, x_282);
x_284 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_284, 0, x_281);
lean_ctor_set(x_284, 1, x_283);
x_285 = lean_box(1);
x_286 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_286, 0, x_284);
lean_ctor_set(x_286, 1, x_285);
x_287 = l_Lean_IR_formatFnBody_loop(x_1, x_274);
x_288 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_288, 0, x_286);
lean_ctor_set(x_288, 1, x_287);
return x_288;
}
case 9:
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; 
x_289 = lean_ctor_get(x_2, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_2, 1);
lean_inc(x_290);
lean_dec(x_2);
x_291 = l_Lean_formatKVMap(x_289);
x_292 = lean_mk_string("mdata ");
x_293 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_293, 0, x_292);
x_294 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_294, 0, x_293);
lean_ctor_set(x_294, 1, x_291);
x_295 = lean_mk_string(";");
x_296 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_296, 0, x_295);
x_297 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_297, 0, x_294);
lean_ctor_set(x_297, 1, x_296);
x_298 = lean_box(1);
x_299 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_299, 0, x_297);
lean_ctor_set(x_299, 1, x_298);
x_300 = l_Lean_IR_formatFnBody_loop(x_1, x_290);
x_301 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_301, 0, x_299);
lean_ctor_set(x_301, 1, x_300);
return x_301;
}
case 10:
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; uint8_t x_322; 
x_302 = lean_ctor_get(x_2, 1);
lean_inc(x_302);
x_303 = lean_ctor_get(x_2, 2);
lean_inc(x_303);
x_304 = lean_ctor_get(x_2, 3);
lean_inc(x_304);
lean_dec(x_2);
x_305 = l_Nat_repr(x_302);
x_306 = lean_mk_string("x_");
x_307 = lean_string_append(x_306, x_305);
lean_dec(x_305);
x_308 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_308, 0, x_307);
x_309 = lean_mk_string("case ");
x_310 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_310, 0, x_309);
x_311 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_311, 0, x_310);
lean_ctor_set(x_311, 1, x_308);
x_312 = lean_mk_string(" : ");
x_313 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_313, 0, x_312);
x_314 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_314, 0, x_311);
lean_ctor_set(x_314, 1, x_313);
x_315 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_303);
x_316 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_316, 0, x_314);
lean_ctor_set(x_316, 1, x_315);
x_317 = lean_mk_string(" of");
x_318 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_318, 0, x_317);
x_319 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_319, 0, x_316);
lean_ctor_set(x_319, 1, x_318);
x_320 = lean_array_get_size(x_304);
x_321 = lean_unsigned_to_nat(0u);
x_322 = lean_nat_dec_lt(x_321, x_320);
if (x_322 == 0)
{
lean_object* x_323; lean_object* x_324; 
lean_dec(x_320);
lean_dec(x_304);
lean_dec(x_1);
x_323 = lean_box(0);
x_324 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_324, 0, x_319);
lean_ctor_set(x_324, 1, x_323);
return x_324;
}
else
{
uint8_t x_325; 
x_325 = lean_nat_dec_le(x_320, x_320);
if (x_325 == 0)
{
lean_object* x_326; lean_object* x_327; 
lean_dec(x_320);
lean_dec(x_304);
lean_dec(x_1);
x_326 = lean_box(0);
x_327 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_327, 0, x_319);
lean_ctor_set(x_327, 1, x_326);
return x_327;
}
else
{
size_t x_328; size_t x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; 
x_328 = 0;
x_329 = lean_usize_of_nat(x_320);
lean_dec(x_320);
x_330 = lean_box(0);
x_331 = l_Array_foldlMUnsafe_fold___at_Lean_IR_formatFnBody_loop___spec__1(x_1, x_304, x_328, x_329, x_330);
lean_dec(x_304);
x_332 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_332, 0, x_319);
lean_ctor_set(x_332, 1, x_331);
return x_332;
}
}
}
case 11:
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; 
lean_dec(x_1);
x_333 = lean_ctor_get(x_2, 0);
lean_inc(x_333);
lean_dec(x_2);
x_334 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatArg(x_333);
x_335 = lean_mk_string("ret ");
x_336 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_336, 0, x_335);
x_337 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_337, 0, x_336);
lean_ctor_set(x_337, 1, x_334);
return x_337;
}
case 12:
{
lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; 
lean_dec(x_1);
x_338 = lean_ctor_get(x_2, 0);
lean_inc(x_338);
x_339 = lean_ctor_get(x_2, 1);
lean_inc(x_339);
lean_dec(x_2);
x_340 = l_Nat_repr(x_338);
x_341 = lean_mk_string("block_");
x_342 = lean_string_append(x_341, x_340);
lean_dec(x_340);
x_343 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_343, 0, x_342);
x_344 = lean_mk_string("jmp ");
x_345 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_345, 0, x_344);
x_346 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_346, 0, x_345);
lean_ctor_set(x_346, 1, x_343);
x_347 = l_Lean_IR_formatArray___at___private_Lean_Compiler_IR_Format_0__Lean_IR_formatExpr___spec__1(x_339);
lean_dec(x_339);
x_348 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_348, 0, x_346);
lean_ctor_set(x_348, 1, x_347);
return x_348;
}
default: 
{
lean_object* x_349; lean_object* x_350; 
lean_dec(x_1);
x_349 = lean_mk_string("⊥");
x_350 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_350, 0, x_349);
return x_350;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_formatFnBody_loop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_IR_formatFnBody_loop___spec__1(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_IR_formatFnBody(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_IR_formatFnBody_loop(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_IR_instToFormatFnBody() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_alloc_closure((void*)(l_Lean_IR_formatFnBody_loop), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_IR_instToStringFnBody(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_unsigned_to_nat(2u);
x_3 = l_Lean_IR_formatFnBody_loop(x_2, x_1);
x_4 = l_Std_Format_defWidth;
x_5 = lean_format_pretty(x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_IR_formatDecl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 4);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_5(x_2, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 3);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_4(x_3, x_10, x_11, x_12, x_13);
return x_14;
}
}
}
lean_object* l_Lean_IR_formatDecl_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_formatDecl_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_formatDecl(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = 1;
x_8 = l_Lean_Name_toString(x_3, x_7);
x_9 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_mk_string("def ");
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
x_13 = l_Lean_IR_formatArray___at_Lean_IR_formatParams___spec__1(x_4);
lean_dec(x_4);
x_14 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_mk_string(" : ");
x_16 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
x_18 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_5);
x_19 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_mk_string(" :=");
x_21 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
lean_inc(x_2);
x_23 = lean_nat_to_int(x_2);
x_24 = l_Lean_IR_formatFnBody_loop(x_2, x_6);
x_25 = lean_box(1);
x_26 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_27, 0, x_23);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_28, 0, x_22);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_2);
x_29 = lean_ctor_get(x_1, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_1, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 2);
lean_inc(x_31);
lean_dec(x_1);
x_32 = 1;
x_33 = l_Lean_Name_toString(x_29, x_32);
x_34 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_mk_string("extern ");
x_36 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_34);
x_38 = l_Lean_IR_formatArray___at_Lean_IR_formatParams___spec__1(x_30);
lean_dec(x_30);
x_39 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_mk_string(" : ");
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_40);
x_42 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_41);
x_43 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_31);
x_44 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
lean_object* l_Lean_IR_instToFormatDecl(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(2u);
x_3 = l_Lean_IR_formatDecl(x_1, x_2);
return x_3;
}
}
lean_object* lean_ir_decl_to_string(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_unsigned_to_nat(2u);
x_3 = l_Lean_IR_formatDecl(x_1, x_2);
x_4 = l_Std_Format_defWidth;
x_5 = lean_format_pretty(x_3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_IR_instToStringDecl() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(lean_ir_decl_to_string), 1, 0);
return x_1;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Compiler_IR_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Compiler_IR_Format(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_IR_instToFormatArg = _init_l_Lean_IR_instToFormatArg();
lean_mark_persistent(l_Lean_IR_instToFormatArg);
l_Lean_IR_instToFormatLitVal = _init_l_Lean_IR_instToFormatLitVal();
lean_mark_persistent(l_Lean_IR_instToFormatLitVal);
l_Lean_IR_instToFormatCtorInfo = _init_l_Lean_IR_instToFormatCtorInfo();
lean_mark_persistent(l_Lean_IR_instToFormatCtorInfo);
l_Lean_IR_instToFormatExpr = _init_l_Lean_IR_instToFormatExpr();
lean_mark_persistent(l_Lean_IR_instToFormatExpr);
l_Lean_IR_instToFormatIRType = _init_l_Lean_IR_instToFormatIRType();
lean_mark_persistent(l_Lean_IR_instToFormatIRType);
l_Lean_IR_instToStringIRType = _init_l_Lean_IR_instToStringIRType();
lean_mark_persistent(l_Lean_IR_instToStringIRType);
l_Lean_IR_instToFormatParam = _init_l_Lean_IR_instToFormatParam();
lean_mark_persistent(l_Lean_IR_instToFormatParam);
l_Lean_IR_instToFormatFnBody = _init_l_Lean_IR_instToFormatFnBody();
lean_mark_persistent(l_Lean_IR_instToFormatFnBody);
l_Lean_IR_instToStringDecl = _init_l_Lean_IR_instToStringDecl();
lean_mark_persistent(l_Lean_IR_instToStringDecl);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
