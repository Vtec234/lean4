// Lean compiler output
// Module: Lean.Meta.Tactic.Rewrite
// Imports: Init Lean.Meta.AppBuilder Lean.Meta.MatchUtil Lean.Meta.KAbstract Lean.Meta.Check Lean.Meta.Tactic.Apply
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
lean_object* l_Lean_Meta_rewrite___lambda__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_rewrite___spec__4(size_t, size_t, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Meta_rewrite___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_rewrite_match__2(lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__6___boxed(lean_object**);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_Meta_checkNotAssigned___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_postprocessAppMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite_match__4___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__13(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__9___boxed(lean_object**);
lean_object* l_Lean_Meta_rewrite___lambda__3___boxed(lean_object**);
uint8_t l_Array_contains___at_Lean_Meta_rewrite___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__12(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_contains___at_Lean_Meta_rewrite___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqNDRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__12___boxed(lean_object**);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Meta_rewrite_match__1(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite_match__3(lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_rewrite___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprMVarAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite_match__4(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_rewrite___spec__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_Meta_rewrite___spec__2(lean_object*, lean_object*, size_t, size_t);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_kabstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite___lambda__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_rewrite_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_rewrite_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_rewrite_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_rewrite_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Meta_rewrite_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Meta_rewrite_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_apply_3(x_3, x_8, x_9, x_10);
return x_11;
}
}
}
lean_object* l_Lean_Meta_rewrite_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_rewrite_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_rewrite_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_rewrite_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_rewrite_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_rewrite_match__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_rewrite_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_rewrite_match__4___rarg), 2, 0);
return x_2;
}
}
uint8_t l_Array_anyMUnsafe_any___at_Lean_Meta_rewrite___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 == x_4;
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_name_eq(x_1, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
size_t x_8; size_t x_9; 
x_8 = 1;
x_9 = x_3 + x_8;
x_3 = x_9;
goto _start;
}
else
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
}
uint8_t l_Array_contains___at_Lean_Meta_rewrite___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_3, x_3);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_3);
x_8 = 0;
return x_8;
}
else
{
size_t x_9; size_t x_10; uint8_t x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_11 = l_Array_anyMUnsafe_any___at_Lean_Meta_rewrite___spec__2(x_2, x_1, x_9, x_10);
return x_11;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; size_t x_9; size_t x_10; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = l_Array_contains___at_Lean_Meta_rewrite___spec__1(x_1, x_7);
x_9 = 1;
x_10 = x_3 + x_9;
if (x_8 == 0)
{
lean_object* x_11; 
x_11 = lean_array_push(x_5, x_7);
x_3 = x_10;
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_7);
x_3 = x_10;
goto _start;
}
}
else
{
return x_5;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_rewrite___spec__4(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = x_3;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = l_Lean_Expr_mvarId_x21(x_9);
lean_dec(x_9);
x_11 = 1;
x_12 = x_2 + x_11;
x_13 = x_10;
x_14 = lean_array_uset(x_8, x_2, x_13);
x_2 = x_12;
x_3 = x_14;
goto _start;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = x_2 == x_3;
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_array_uget(x_1, x_2);
x_12 = l_Lean_Meta_isExprMVarAssigned(x_11, x_5, x_6, x_7, x_8, x_9);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_array_push(x_4, x_11);
x_17 = 1;
x_18 = x_2 + x_17;
x_2 = x_18;
x_4 = x_16;
x_9 = x_15;
goto _start;
}
else
{
lean_object* x_20; size_t x_21; size_t x_22; 
lean_dec(x_11);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_dec(x_12);
x_21 = 1;
x_22 = x_2 + x_21;
x_2 = x_22;
x_9 = x_20;
goto _start;
}
}
else
{
lean_object* x_24; 
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_4);
lean_ctor_set(x_24, 1, x_9);
return x_24;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; size_t x_9; size_t x_10; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = l_Array_contains___at_Lean_Meta_rewrite___spec__1(x_1, x_7);
x_9 = 1;
x_10 = x_3 + x_9;
if (x_8 == 0)
{
lean_object* x_11; 
x_11 = lean_array_push(x_5, x_7);
x_3 = x_10;
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_7);
x_3 = x_10;
goto _start;
}
}
else
{
return x_5;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__7(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; size_t x_9; size_t x_10; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = l_Array_contains___at_Lean_Meta_rewrite___spec__1(x_1, x_7);
x_9 = 1;
x_10 = x_3 + x_9;
if (x_8 == 0)
{
lean_object* x_11; 
x_11 = lean_array_push(x_5, x_7);
x_3 = x_10;
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_7);
x_3 = x_10;
goto _start;
}
}
else
{
return x_5;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__8(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; size_t x_9; size_t x_10; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = l_Array_contains___at_Lean_Meta_rewrite___spec__1(x_1, x_7);
x_9 = 1;
x_10 = x_3 + x_9;
if (x_8 == 0)
{
lean_object* x_11; 
x_11 = lean_array_push(x_5, x_7);
x_3 = x_10;
x_5 = x_11;
goto _start;
}
else
{
lean_dec(x_7);
x_3 = x_10;
goto _start;
}
}
else
{
return x_5;
}
}
}
lean_object* l_Lean_Meta_rewrite___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_15 = l_Lean_Meta_mkEqRefl(x_1, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_18 = l_Lean_Meta_mkEqNDRec(x_2, x_16, x_3, x_10, x_11, x_12, x_13, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_70; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_70 = l_Lean_Meta_postprocessAppMVars(x_5, x_6, x_7, x_8, x_10, x_11, x_12, x_13, x_20);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_72 = lean_array_get_size(x_7);
x_73 = lean_usize_of_nat(x_72);
lean_dec(x_72);
x_74 = 0;
x_75 = x_7;
x_76 = l_Array_mapMUnsafe_map___at_Lean_Meta_rewrite___spec__4(x_73, x_74, x_75);
x_77 = x_76;
x_78 = lean_array_get_size(x_77);
x_79 = lean_unsigned_to_nat(0u);
x_80 = lean_mk_empty_array_with_capacity(x_79);
x_81 = lean_nat_dec_lt(x_79, x_78);
if (x_81 == 0)
{
lean_dec(x_78);
lean_dec(x_77);
x_21 = x_80;
x_22 = x_71;
goto block_69;
}
else
{
uint8_t x_82; 
x_82 = lean_nat_dec_le(x_78, x_78);
if (x_82 == 0)
{
lean_dec(x_78);
lean_dec(x_77);
x_21 = x_80;
x_22 = x_71;
goto block_69;
}
else
{
size_t x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_83 = lean_usize_of_nat(x_78);
lean_dec(x_78);
x_84 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__5(x_77, x_74, x_83, x_80, x_10, x_11, x_12, x_13, x_71);
lean_dec(x_77);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_21 = x_85;
x_22 = x_86;
goto block_69;
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_19);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_4);
x_87 = !lean_is_exclusive(x_70);
if (x_87 == 0)
{
return x_70;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_70, 0);
x_89 = lean_ctor_get(x_70, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_70);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
block_69:
{
lean_object* x_23; 
lean_inc(x_19);
x_23 = l_Lean_Meta_getMVarsNoDelayed(x_19, x_10, x_11, x_12, x_13, x_22);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_array_get_size(x_25);
x_27 = lean_unsigned_to_nat(0u);
x_28 = lean_mk_empty_array_with_capacity(x_27);
x_29 = lean_nat_dec_lt(x_27, x_26);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_26);
lean_dec(x_25);
x_30 = l_Array_append___rarg(x_21, x_28);
lean_dec(x_28);
x_31 = lean_array_to_list(lean_box(0), x_30);
x_32 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_19);
lean_ctor_set(x_32, 2, x_31);
lean_ctor_set(x_23, 0, x_32);
return x_23;
}
else
{
uint8_t x_33; 
x_33 = lean_nat_dec_le(x_26, x_26);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_26);
lean_dec(x_25);
x_34 = l_Array_append___rarg(x_21, x_28);
lean_dec(x_28);
x_35 = lean_array_to_list(lean_box(0), x_34);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_4);
lean_ctor_set(x_36, 1, x_19);
lean_ctor_set(x_36, 2, x_35);
lean_ctor_set(x_23, 0, x_36);
return x_23;
}
else
{
size_t x_37; size_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_37 = 0;
x_38 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_39 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__3(x_21, x_25, x_37, x_38, x_28);
lean_dec(x_25);
x_40 = l_Array_append___rarg(x_21, x_39);
lean_dec(x_39);
x_41 = lean_array_to_list(lean_box(0), x_40);
x_42 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_42, 0, x_4);
lean_ctor_set(x_42, 1, x_19);
lean_ctor_set(x_42, 2, x_41);
lean_ctor_set(x_23, 0, x_42);
return x_23;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_43 = lean_ctor_get(x_23, 0);
x_44 = lean_ctor_get(x_23, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_23);
x_45 = lean_array_get_size(x_43);
x_46 = lean_unsigned_to_nat(0u);
x_47 = lean_mk_empty_array_with_capacity(x_46);
x_48 = lean_nat_dec_lt(x_46, x_45);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_45);
lean_dec(x_43);
x_49 = l_Array_append___rarg(x_21, x_47);
lean_dec(x_47);
x_50 = lean_array_to_list(lean_box(0), x_49);
x_51 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_51, 0, x_4);
lean_ctor_set(x_51, 1, x_19);
lean_ctor_set(x_51, 2, x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_44);
return x_52;
}
else
{
uint8_t x_53; 
x_53 = lean_nat_dec_le(x_45, x_45);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_45);
lean_dec(x_43);
x_54 = l_Array_append___rarg(x_21, x_47);
lean_dec(x_47);
x_55 = lean_array_to_list(lean_box(0), x_54);
x_56 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_56, 0, x_4);
lean_ctor_set(x_56, 1, x_19);
lean_ctor_set(x_56, 2, x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_44);
return x_57;
}
else
{
size_t x_58; size_t x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_58 = 0;
x_59 = lean_usize_of_nat(x_45);
lean_dec(x_45);
x_60 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__3(x_21, x_43, x_58, x_59, x_47);
lean_dec(x_43);
x_61 = l_Array_append___rarg(x_21, x_60);
lean_dec(x_60);
x_62 = lean_array_to_list(lean_box(0), x_61);
x_63 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_63, 0, x_4);
lean_ctor_set(x_63, 1, x_19);
lean_ctor_set(x_63, 2, x_62);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_44);
return x_64;
}
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_4);
x_65 = !lean_is_exclusive(x_23);
if (x_65 == 0)
{
return x_23;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_23, 0);
x_67 = lean_ctor_get(x_23, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_23);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_91 = !lean_is_exclusive(x_18);
if (x_91 == 0)
{
return x_18;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_18, 0);
x_93 = lean_ctor_get(x_18, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_18);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
else
{
uint8_t x_95; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_95 = !lean_is_exclusive(x_15);
if (x_95 == 0)
{
return x_15;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_15, 0);
x_97 = lean_ctor_get(x_15, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_15);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
lean_object* l_Lean_Meta_rewrite___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_expr_instantiate1(x_1, x_2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_17 = l_Lean_Meta_instantiateMVars(x_16, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc_n(x_3, 2);
x_20 = l_Lean_Meta_mkEq(x_3, x_3, x_11, x_12, x_13, x_14, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Expr_appFn_x21(x_21);
lean_dec(x_21);
x_24 = l_Lean_mkApp(x_23, x_1);
x_25 = lean_box(0);
x_26 = lean_mk_string("_a");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = 0;
x_29 = l_Lean_mkLambda(x_27, x_28, x_4, x_24);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_29);
x_30 = l_Lean_Meta_isTypeCorrect(x_29, x_11, x_12, x_13, x_14, x_22);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
lean_dec(x_29);
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_mk_string("motive is not type correct");
x_35 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_box(0);
x_38 = l_Lean_Meta_throwTacticEx___rarg(x_6, x_7, x_36, x_37, x_11, x_12, x_13, x_14, x_33);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
return x_38;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_38);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_30, 1);
lean_inc(x_43);
lean_dec(x_30);
x_44 = lean_box(0);
x_45 = l_Lean_Meta_rewrite___lambda__1(x_3, x_29, x_5, x_18, x_6, x_7, x_8, x_9, x_44, x_11, x_12, x_13, x_14, x_43);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_20);
if (x_46 == 0)
{
return x_20;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_20, 0);
x_48 = lean_ctor_get(x_20, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_20);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_17);
if (x_50 == 0)
{
return x_17;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_17, 0);
x_52 = lean_ctor_get(x_17, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_17);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
lean_object* l_Lean_Meta_rewrite___lambda__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; 
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_18 = l_Lean_Meta_instantiateMVars(x_1, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_19 = lean_ctor_get(x_13, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_13, 2);
lean_inc(x_23);
x_24 = lean_ctor_get(x_13, 3);
lean_inc(x_24);
x_25 = !lean_is_exclusive(x_19);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_ctor_set_uint8(x_19, 5, x_2);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_19);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_24);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_3);
lean_inc(x_20);
x_27 = l_Lean_Meta_kabstract(x_20, x_3, x_4, x_26, x_14, x_15, x_16, x_21);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Expr_hasLooseBVars(x_28);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_dec(x_28);
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
x_31 = lean_mk_string("did not find instance of the pattern in the target expression");
x_32 = l_Lean_stringToMessageData(x_31);
lean_dec(x_31);
x_33 = l_Lean_indentExpr(x_3);
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_mk_string("");
x_36 = l_Lean_stringToMessageData(x_35);
lean_dec(x_35);
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_box(0);
x_39 = l_Lean_Meta_throwTacticEx___rarg(x_8, x_9, x_37, x_38, x_13, x_14, x_15, x_16, x_29);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
return x_39;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_39);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_3);
x_44 = lean_box(0);
x_45 = l_Lean_Meta_rewrite___lambda__2(x_28, x_5, x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_44, x_13, x_14, x_15, x_16, x_29);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_46 = !lean_is_exclusive(x_27);
if (x_46 == 0)
{
return x_27;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_27, 0);
x_48 = lean_ctor_get(x_27, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_27);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_50 = lean_ctor_get_uint8(x_19, 0);
x_51 = lean_ctor_get_uint8(x_19, 1);
x_52 = lean_ctor_get_uint8(x_19, 2);
x_53 = lean_ctor_get_uint8(x_19, 3);
x_54 = lean_ctor_get_uint8(x_19, 4);
x_55 = lean_ctor_get_uint8(x_19, 6);
x_56 = lean_ctor_get_uint8(x_19, 7);
x_57 = lean_ctor_get_uint8(x_19, 8);
x_58 = lean_ctor_get_uint8(x_19, 9);
lean_dec(x_19);
x_59 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_59, 0, x_50);
lean_ctor_set_uint8(x_59, 1, x_51);
lean_ctor_set_uint8(x_59, 2, x_52);
lean_ctor_set_uint8(x_59, 3, x_53);
lean_ctor_set_uint8(x_59, 4, x_54);
lean_ctor_set_uint8(x_59, 5, x_2);
lean_ctor_set_uint8(x_59, 6, x_55);
lean_ctor_set_uint8(x_59, 7, x_56);
lean_ctor_set_uint8(x_59, 8, x_57);
lean_ctor_set_uint8(x_59, 9, x_58);
x_60 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_22);
lean_ctor_set(x_60, 2, x_23);
lean_ctor_set(x_60, 3, x_24);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_3);
lean_inc(x_20);
x_61 = l_Lean_Meta_kabstract(x_20, x_3, x_4, x_60, x_14, x_15, x_16, x_21);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = l_Lean_Expr_hasLooseBVars(x_62);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_62);
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
x_65 = lean_mk_string("did not find instance of the pattern in the target expression");
x_66 = l_Lean_stringToMessageData(x_65);
lean_dec(x_65);
x_67 = l_Lean_indentExpr(x_3);
x_68 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_mk_string("");
x_70 = l_Lean_stringToMessageData(x_69);
lean_dec(x_69);
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_box(0);
x_73 = l_Lean_Meta_throwTacticEx___rarg(x_8, x_9, x_71, x_72, x_13, x_14, x_15, x_16, x_63);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_76 = x_73;
} else {
 lean_dec_ref(x_73);
 x_76 = lean_box(0);
}
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(1, 2, 0);
} else {
 x_77 = x_76;
}
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_75);
return x_77;
}
else
{
lean_object* x_78; lean_object* x_79; 
lean_dec(x_3);
x_78 = lean_box(0);
x_79 = l_Lean_Meta_rewrite___lambda__2(x_62, x_5, x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_78, x_13, x_14, x_15, x_16, x_63);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_80 = lean_ctor_get(x_61, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_61, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_82 = x_61;
} else {
 lean_dec_ref(x_61);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_84 = !lean_is_exclusive(x_18);
if (x_84 == 0)
{
return x_18;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_18, 0);
x_86 = lean_ctor_get(x_18, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_18);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
}
lean_object* l_Lean_Meta_rewrite___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_15 = l_Lean_Meta_mkEqRefl(x_1, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_18 = l_Lean_Meta_mkEqNDRec(x_2, x_16, x_3, x_10, x_11, x_12, x_13, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_70; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_70 = l_Lean_Meta_postprocessAppMVars(x_5, x_6, x_7, x_8, x_10, x_11, x_12, x_13, x_20);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_72 = lean_array_get_size(x_7);
x_73 = lean_usize_of_nat(x_72);
lean_dec(x_72);
x_74 = 0;
x_75 = x_7;
x_76 = l_Array_mapMUnsafe_map___at_Lean_Meta_rewrite___spec__4(x_73, x_74, x_75);
x_77 = x_76;
x_78 = lean_array_get_size(x_77);
x_79 = lean_unsigned_to_nat(0u);
x_80 = lean_mk_empty_array_with_capacity(x_79);
x_81 = lean_nat_dec_lt(x_79, x_78);
if (x_81 == 0)
{
lean_dec(x_78);
lean_dec(x_77);
x_21 = x_80;
x_22 = x_71;
goto block_69;
}
else
{
uint8_t x_82; 
x_82 = lean_nat_dec_le(x_78, x_78);
if (x_82 == 0)
{
lean_dec(x_78);
lean_dec(x_77);
x_21 = x_80;
x_22 = x_71;
goto block_69;
}
else
{
size_t x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_83 = lean_usize_of_nat(x_78);
lean_dec(x_78);
x_84 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__5(x_77, x_74, x_83, x_80, x_10, x_11, x_12, x_13, x_71);
lean_dec(x_77);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_21 = x_85;
x_22 = x_86;
goto block_69;
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_19);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_4);
x_87 = !lean_is_exclusive(x_70);
if (x_87 == 0)
{
return x_70;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_70, 0);
x_89 = lean_ctor_get(x_70, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_70);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
block_69:
{
lean_object* x_23; 
lean_inc(x_19);
x_23 = l_Lean_Meta_getMVarsNoDelayed(x_19, x_10, x_11, x_12, x_13, x_22);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_array_get_size(x_25);
x_27 = lean_unsigned_to_nat(0u);
x_28 = lean_mk_empty_array_with_capacity(x_27);
x_29 = lean_nat_dec_lt(x_27, x_26);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_26);
lean_dec(x_25);
x_30 = l_Array_append___rarg(x_21, x_28);
lean_dec(x_28);
x_31 = lean_array_to_list(lean_box(0), x_30);
x_32 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_19);
lean_ctor_set(x_32, 2, x_31);
lean_ctor_set(x_23, 0, x_32);
return x_23;
}
else
{
uint8_t x_33; 
x_33 = lean_nat_dec_le(x_26, x_26);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_26);
lean_dec(x_25);
x_34 = l_Array_append___rarg(x_21, x_28);
lean_dec(x_28);
x_35 = lean_array_to_list(lean_box(0), x_34);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_4);
lean_ctor_set(x_36, 1, x_19);
lean_ctor_set(x_36, 2, x_35);
lean_ctor_set(x_23, 0, x_36);
return x_23;
}
else
{
size_t x_37; size_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_37 = 0;
x_38 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_39 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__6(x_21, x_25, x_37, x_38, x_28);
lean_dec(x_25);
x_40 = l_Array_append___rarg(x_21, x_39);
lean_dec(x_39);
x_41 = lean_array_to_list(lean_box(0), x_40);
x_42 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_42, 0, x_4);
lean_ctor_set(x_42, 1, x_19);
lean_ctor_set(x_42, 2, x_41);
lean_ctor_set(x_23, 0, x_42);
return x_23;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_43 = lean_ctor_get(x_23, 0);
x_44 = lean_ctor_get(x_23, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_23);
x_45 = lean_array_get_size(x_43);
x_46 = lean_unsigned_to_nat(0u);
x_47 = lean_mk_empty_array_with_capacity(x_46);
x_48 = lean_nat_dec_lt(x_46, x_45);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_45);
lean_dec(x_43);
x_49 = l_Array_append___rarg(x_21, x_47);
lean_dec(x_47);
x_50 = lean_array_to_list(lean_box(0), x_49);
x_51 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_51, 0, x_4);
lean_ctor_set(x_51, 1, x_19);
lean_ctor_set(x_51, 2, x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_44);
return x_52;
}
else
{
uint8_t x_53; 
x_53 = lean_nat_dec_le(x_45, x_45);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_45);
lean_dec(x_43);
x_54 = l_Array_append___rarg(x_21, x_47);
lean_dec(x_47);
x_55 = lean_array_to_list(lean_box(0), x_54);
x_56 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_56, 0, x_4);
lean_ctor_set(x_56, 1, x_19);
lean_ctor_set(x_56, 2, x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_44);
return x_57;
}
else
{
size_t x_58; size_t x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_58 = 0;
x_59 = lean_usize_of_nat(x_45);
lean_dec(x_45);
x_60 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__6(x_21, x_43, x_58, x_59, x_47);
lean_dec(x_43);
x_61 = l_Array_append___rarg(x_21, x_60);
lean_dec(x_60);
x_62 = lean_array_to_list(lean_box(0), x_61);
x_63 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_63, 0, x_4);
lean_ctor_set(x_63, 1, x_19);
lean_ctor_set(x_63, 2, x_62);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_44);
return x_64;
}
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_4);
x_65 = !lean_is_exclusive(x_23);
if (x_65 == 0)
{
return x_23;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_23, 0);
x_67 = lean_ctor_get(x_23, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_23);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_91 = !lean_is_exclusive(x_18);
if (x_91 == 0)
{
return x_18;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_18, 0);
x_93 = lean_ctor_get(x_18, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_18);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
else
{
uint8_t x_95; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_95 = !lean_is_exclusive(x_15);
if (x_95 == 0)
{
return x_15;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_15, 0);
x_97 = lean_ctor_get(x_15, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_15);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
lean_object* l_Lean_Meta_rewrite___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_expr_instantiate1(x_1, x_2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_17 = l_Lean_Meta_instantiateMVars(x_16, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc_n(x_3, 2);
x_20 = l_Lean_Meta_mkEq(x_3, x_3, x_11, x_12, x_13, x_14, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Expr_appFn_x21(x_21);
lean_dec(x_21);
x_24 = l_Lean_mkApp(x_23, x_1);
x_25 = lean_box(0);
x_26 = lean_mk_string("_a");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = 0;
x_29 = l_Lean_mkLambda(x_27, x_28, x_4, x_24);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_29);
x_30 = l_Lean_Meta_isTypeCorrect(x_29, x_11, x_12, x_13, x_14, x_22);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
lean_dec(x_29);
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_mk_string("motive is not type correct");
x_35 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_box(0);
x_38 = l_Lean_Meta_throwTacticEx___rarg(x_6, x_7, x_36, x_37, x_11, x_12, x_13, x_14, x_33);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
return x_38;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_38);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_30, 1);
lean_inc(x_43);
lean_dec(x_30);
x_44 = lean_box(0);
x_45 = l_Lean_Meta_rewrite___lambda__4(x_3, x_29, x_5, x_18, x_6, x_7, x_8, x_9, x_44, x_11, x_12, x_13, x_14, x_43);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_20);
if (x_46 == 0)
{
return x_20;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_20, 0);
x_48 = lean_ctor_get(x_20, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_20);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_17);
if (x_50 == 0)
{
return x_17;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_17, 0);
x_52 = lean_ctor_get(x_17, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_17);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
lean_object* l_Lean_Meta_rewrite___lambda__6(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; 
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_18 = l_Lean_Meta_instantiateMVars(x_1, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_19 = lean_ctor_get(x_13, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_13, 2);
lean_inc(x_23);
x_24 = lean_ctor_get(x_13, 3);
lean_inc(x_24);
x_25 = !lean_is_exclusive(x_19);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_ctor_set_uint8(x_19, 5, x_2);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_19);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_24);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_3);
lean_inc(x_20);
x_27 = l_Lean_Meta_kabstract(x_20, x_3, x_4, x_26, x_14, x_15, x_16, x_21);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Expr_hasLooseBVars(x_28);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_dec(x_28);
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
x_31 = lean_mk_string("did not find instance of the pattern in the target expression");
x_32 = l_Lean_stringToMessageData(x_31);
lean_dec(x_31);
x_33 = l_Lean_indentExpr(x_3);
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_mk_string("");
x_36 = l_Lean_stringToMessageData(x_35);
lean_dec(x_35);
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_box(0);
x_39 = l_Lean_Meta_throwTacticEx___rarg(x_8, x_9, x_37, x_38, x_13, x_14, x_15, x_16, x_29);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
return x_39;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_39);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_3);
x_44 = lean_box(0);
x_45 = l_Lean_Meta_rewrite___lambda__5(x_28, x_5, x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_44, x_13, x_14, x_15, x_16, x_29);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_46 = !lean_is_exclusive(x_27);
if (x_46 == 0)
{
return x_27;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_27, 0);
x_48 = lean_ctor_get(x_27, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_27);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_50 = lean_ctor_get_uint8(x_19, 0);
x_51 = lean_ctor_get_uint8(x_19, 1);
x_52 = lean_ctor_get_uint8(x_19, 2);
x_53 = lean_ctor_get_uint8(x_19, 3);
x_54 = lean_ctor_get_uint8(x_19, 4);
x_55 = lean_ctor_get_uint8(x_19, 6);
x_56 = lean_ctor_get_uint8(x_19, 7);
x_57 = lean_ctor_get_uint8(x_19, 8);
x_58 = lean_ctor_get_uint8(x_19, 9);
lean_dec(x_19);
x_59 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_59, 0, x_50);
lean_ctor_set_uint8(x_59, 1, x_51);
lean_ctor_set_uint8(x_59, 2, x_52);
lean_ctor_set_uint8(x_59, 3, x_53);
lean_ctor_set_uint8(x_59, 4, x_54);
lean_ctor_set_uint8(x_59, 5, x_2);
lean_ctor_set_uint8(x_59, 6, x_55);
lean_ctor_set_uint8(x_59, 7, x_56);
lean_ctor_set_uint8(x_59, 8, x_57);
lean_ctor_set_uint8(x_59, 9, x_58);
x_60 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_22);
lean_ctor_set(x_60, 2, x_23);
lean_ctor_set(x_60, 3, x_24);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_3);
lean_inc(x_20);
x_61 = l_Lean_Meta_kabstract(x_20, x_3, x_4, x_60, x_14, x_15, x_16, x_21);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = l_Lean_Expr_hasLooseBVars(x_62);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_62);
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
x_65 = lean_mk_string("did not find instance of the pattern in the target expression");
x_66 = l_Lean_stringToMessageData(x_65);
lean_dec(x_65);
x_67 = l_Lean_indentExpr(x_3);
x_68 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_mk_string("");
x_70 = l_Lean_stringToMessageData(x_69);
lean_dec(x_69);
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_box(0);
x_73 = l_Lean_Meta_throwTacticEx___rarg(x_8, x_9, x_71, x_72, x_13, x_14, x_15, x_16, x_63);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_76 = x_73;
} else {
 lean_dec_ref(x_73);
 x_76 = lean_box(0);
}
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(1, 2, 0);
} else {
 x_77 = x_76;
}
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_75);
return x_77;
}
else
{
lean_object* x_78; lean_object* x_79; 
lean_dec(x_3);
x_78 = lean_box(0);
x_79 = l_Lean_Meta_rewrite___lambda__5(x_62, x_5, x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_78, x_13, x_14, x_15, x_16, x_63);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_80 = lean_ctor_get(x_61, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_61, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_82 = x_61;
} else {
 lean_dec_ref(x_61);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_84 = !lean_is_exclusive(x_18);
if (x_84 == 0)
{
return x_18;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_18, 0);
x_86 = lean_ctor_get(x_18, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_18);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
}
lean_object* l_Lean_Meta_rewrite___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_15 = l_Lean_Meta_mkEqRefl(x_1, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_18 = l_Lean_Meta_mkEqNDRec(x_2, x_16, x_3, x_10, x_11, x_12, x_13, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_70; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_70 = l_Lean_Meta_postprocessAppMVars(x_5, x_6, x_7, x_8, x_10, x_11, x_12, x_13, x_20);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_72 = lean_array_get_size(x_7);
x_73 = lean_usize_of_nat(x_72);
lean_dec(x_72);
x_74 = 0;
x_75 = x_7;
x_76 = l_Array_mapMUnsafe_map___at_Lean_Meta_rewrite___spec__4(x_73, x_74, x_75);
x_77 = x_76;
x_78 = lean_array_get_size(x_77);
x_79 = lean_unsigned_to_nat(0u);
x_80 = lean_mk_empty_array_with_capacity(x_79);
x_81 = lean_nat_dec_lt(x_79, x_78);
if (x_81 == 0)
{
lean_dec(x_78);
lean_dec(x_77);
x_21 = x_80;
x_22 = x_71;
goto block_69;
}
else
{
uint8_t x_82; 
x_82 = lean_nat_dec_le(x_78, x_78);
if (x_82 == 0)
{
lean_dec(x_78);
lean_dec(x_77);
x_21 = x_80;
x_22 = x_71;
goto block_69;
}
else
{
size_t x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_83 = lean_usize_of_nat(x_78);
lean_dec(x_78);
x_84 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__5(x_77, x_74, x_83, x_80, x_10, x_11, x_12, x_13, x_71);
lean_dec(x_77);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_21 = x_85;
x_22 = x_86;
goto block_69;
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_19);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_4);
x_87 = !lean_is_exclusive(x_70);
if (x_87 == 0)
{
return x_70;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_70, 0);
x_89 = lean_ctor_get(x_70, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_70);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
block_69:
{
lean_object* x_23; 
lean_inc(x_19);
x_23 = l_Lean_Meta_getMVarsNoDelayed(x_19, x_10, x_11, x_12, x_13, x_22);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_array_get_size(x_25);
x_27 = lean_unsigned_to_nat(0u);
x_28 = lean_mk_empty_array_with_capacity(x_27);
x_29 = lean_nat_dec_lt(x_27, x_26);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_26);
lean_dec(x_25);
x_30 = l_Array_append___rarg(x_21, x_28);
lean_dec(x_28);
x_31 = lean_array_to_list(lean_box(0), x_30);
x_32 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_19);
lean_ctor_set(x_32, 2, x_31);
lean_ctor_set(x_23, 0, x_32);
return x_23;
}
else
{
uint8_t x_33; 
x_33 = lean_nat_dec_le(x_26, x_26);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_26);
lean_dec(x_25);
x_34 = l_Array_append___rarg(x_21, x_28);
lean_dec(x_28);
x_35 = lean_array_to_list(lean_box(0), x_34);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_4);
lean_ctor_set(x_36, 1, x_19);
lean_ctor_set(x_36, 2, x_35);
lean_ctor_set(x_23, 0, x_36);
return x_23;
}
else
{
size_t x_37; size_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_37 = 0;
x_38 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_39 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__7(x_21, x_25, x_37, x_38, x_28);
lean_dec(x_25);
x_40 = l_Array_append___rarg(x_21, x_39);
lean_dec(x_39);
x_41 = lean_array_to_list(lean_box(0), x_40);
x_42 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_42, 0, x_4);
lean_ctor_set(x_42, 1, x_19);
lean_ctor_set(x_42, 2, x_41);
lean_ctor_set(x_23, 0, x_42);
return x_23;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_43 = lean_ctor_get(x_23, 0);
x_44 = lean_ctor_get(x_23, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_23);
x_45 = lean_array_get_size(x_43);
x_46 = lean_unsigned_to_nat(0u);
x_47 = lean_mk_empty_array_with_capacity(x_46);
x_48 = lean_nat_dec_lt(x_46, x_45);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_45);
lean_dec(x_43);
x_49 = l_Array_append___rarg(x_21, x_47);
lean_dec(x_47);
x_50 = lean_array_to_list(lean_box(0), x_49);
x_51 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_51, 0, x_4);
lean_ctor_set(x_51, 1, x_19);
lean_ctor_set(x_51, 2, x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_44);
return x_52;
}
else
{
uint8_t x_53; 
x_53 = lean_nat_dec_le(x_45, x_45);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_45);
lean_dec(x_43);
x_54 = l_Array_append___rarg(x_21, x_47);
lean_dec(x_47);
x_55 = lean_array_to_list(lean_box(0), x_54);
x_56 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_56, 0, x_4);
lean_ctor_set(x_56, 1, x_19);
lean_ctor_set(x_56, 2, x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_44);
return x_57;
}
else
{
size_t x_58; size_t x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_58 = 0;
x_59 = lean_usize_of_nat(x_45);
lean_dec(x_45);
x_60 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__7(x_21, x_43, x_58, x_59, x_47);
lean_dec(x_43);
x_61 = l_Array_append___rarg(x_21, x_60);
lean_dec(x_60);
x_62 = lean_array_to_list(lean_box(0), x_61);
x_63 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_63, 0, x_4);
lean_ctor_set(x_63, 1, x_19);
lean_ctor_set(x_63, 2, x_62);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_44);
return x_64;
}
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_4);
x_65 = !lean_is_exclusive(x_23);
if (x_65 == 0)
{
return x_23;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_23, 0);
x_67 = lean_ctor_get(x_23, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_23);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_91 = !lean_is_exclusive(x_18);
if (x_91 == 0)
{
return x_18;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_18, 0);
x_93 = lean_ctor_get(x_18, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_18);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
else
{
uint8_t x_95; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_95 = !lean_is_exclusive(x_15);
if (x_95 == 0)
{
return x_15;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_15, 0);
x_97 = lean_ctor_get(x_15, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_15);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
lean_object* l_Lean_Meta_rewrite___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_expr_instantiate1(x_1, x_2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_17 = l_Lean_Meta_instantiateMVars(x_16, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc_n(x_3, 2);
x_20 = l_Lean_Meta_mkEq(x_3, x_3, x_11, x_12, x_13, x_14, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Expr_appFn_x21(x_21);
lean_dec(x_21);
x_24 = l_Lean_mkApp(x_23, x_1);
x_25 = lean_box(0);
x_26 = lean_mk_string("_a");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = 0;
x_29 = l_Lean_mkLambda(x_27, x_28, x_4, x_24);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_29);
x_30 = l_Lean_Meta_isTypeCorrect(x_29, x_11, x_12, x_13, x_14, x_22);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
lean_dec(x_29);
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_mk_string("motive is not type correct");
x_35 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_box(0);
x_38 = l_Lean_Meta_throwTacticEx___rarg(x_6, x_7, x_36, x_37, x_11, x_12, x_13, x_14, x_33);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
return x_38;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_38);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_30, 1);
lean_inc(x_43);
lean_dec(x_30);
x_44 = lean_box(0);
x_45 = l_Lean_Meta_rewrite___lambda__7(x_3, x_29, x_5, x_18, x_6, x_7, x_8, x_9, x_44, x_11, x_12, x_13, x_14, x_43);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_20);
if (x_46 == 0)
{
return x_20;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_20, 0);
x_48 = lean_ctor_get(x_20, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_20);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_17);
if (x_50 == 0)
{
return x_17;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_17, 0);
x_52 = lean_ctor_get(x_17, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_17);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
lean_object* l_Lean_Meta_rewrite___lambda__9(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; 
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_18 = l_Lean_Meta_instantiateMVars(x_1, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_19 = lean_ctor_get(x_13, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_13, 2);
lean_inc(x_23);
x_24 = lean_ctor_get(x_13, 3);
lean_inc(x_24);
x_25 = !lean_is_exclusive(x_19);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_ctor_set_uint8(x_19, 5, x_2);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_19);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_24);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_3);
lean_inc(x_20);
x_27 = l_Lean_Meta_kabstract(x_20, x_3, x_4, x_26, x_14, x_15, x_16, x_21);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Expr_hasLooseBVars(x_28);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_dec(x_28);
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
x_31 = lean_mk_string("did not find instance of the pattern in the target expression");
x_32 = l_Lean_stringToMessageData(x_31);
lean_dec(x_31);
x_33 = l_Lean_indentExpr(x_3);
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_mk_string("");
x_36 = l_Lean_stringToMessageData(x_35);
lean_dec(x_35);
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_box(0);
x_39 = l_Lean_Meta_throwTacticEx___rarg(x_8, x_9, x_37, x_38, x_13, x_14, x_15, x_16, x_29);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
return x_39;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_39);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_3);
x_44 = lean_box(0);
x_45 = l_Lean_Meta_rewrite___lambda__8(x_28, x_5, x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_44, x_13, x_14, x_15, x_16, x_29);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_46 = !lean_is_exclusive(x_27);
if (x_46 == 0)
{
return x_27;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_27, 0);
x_48 = lean_ctor_get(x_27, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_27);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_50 = lean_ctor_get_uint8(x_19, 0);
x_51 = lean_ctor_get_uint8(x_19, 1);
x_52 = lean_ctor_get_uint8(x_19, 2);
x_53 = lean_ctor_get_uint8(x_19, 3);
x_54 = lean_ctor_get_uint8(x_19, 4);
x_55 = lean_ctor_get_uint8(x_19, 6);
x_56 = lean_ctor_get_uint8(x_19, 7);
x_57 = lean_ctor_get_uint8(x_19, 8);
x_58 = lean_ctor_get_uint8(x_19, 9);
lean_dec(x_19);
x_59 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_59, 0, x_50);
lean_ctor_set_uint8(x_59, 1, x_51);
lean_ctor_set_uint8(x_59, 2, x_52);
lean_ctor_set_uint8(x_59, 3, x_53);
lean_ctor_set_uint8(x_59, 4, x_54);
lean_ctor_set_uint8(x_59, 5, x_2);
lean_ctor_set_uint8(x_59, 6, x_55);
lean_ctor_set_uint8(x_59, 7, x_56);
lean_ctor_set_uint8(x_59, 8, x_57);
lean_ctor_set_uint8(x_59, 9, x_58);
x_60 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_22);
lean_ctor_set(x_60, 2, x_23);
lean_ctor_set(x_60, 3, x_24);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_3);
lean_inc(x_20);
x_61 = l_Lean_Meta_kabstract(x_20, x_3, x_4, x_60, x_14, x_15, x_16, x_21);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = l_Lean_Expr_hasLooseBVars(x_62);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_62);
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
x_65 = lean_mk_string("did not find instance of the pattern in the target expression");
x_66 = l_Lean_stringToMessageData(x_65);
lean_dec(x_65);
x_67 = l_Lean_indentExpr(x_3);
x_68 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_mk_string("");
x_70 = l_Lean_stringToMessageData(x_69);
lean_dec(x_69);
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_box(0);
x_73 = l_Lean_Meta_throwTacticEx___rarg(x_8, x_9, x_71, x_72, x_13, x_14, x_15, x_16, x_63);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_76 = x_73;
} else {
 lean_dec_ref(x_73);
 x_76 = lean_box(0);
}
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(1, 2, 0);
} else {
 x_77 = x_76;
}
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_75);
return x_77;
}
else
{
lean_object* x_78; lean_object* x_79; 
lean_dec(x_3);
x_78 = lean_box(0);
x_79 = l_Lean_Meta_rewrite___lambda__8(x_62, x_5, x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_78, x_13, x_14, x_15, x_16, x_63);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_80 = lean_ctor_get(x_61, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_61, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_82 = x_61;
} else {
 lean_dec_ref(x_61);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_84 = !lean_is_exclusive(x_18);
if (x_84 == 0)
{
return x_18;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_18, 0);
x_86 = lean_ctor_get(x_18, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_18);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
}
lean_object* l_Lean_Meta_rewrite___lambda__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_15 = l_Lean_Meta_mkEqRefl(x_1, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_18 = l_Lean_Meta_mkEqNDRec(x_2, x_16, x_3, x_10, x_11, x_12, x_13, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_70; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_70 = l_Lean_Meta_postprocessAppMVars(x_5, x_6, x_7, x_8, x_10, x_11, x_12, x_13, x_20);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; size_t x_73; size_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_72 = lean_array_get_size(x_7);
x_73 = lean_usize_of_nat(x_72);
lean_dec(x_72);
x_74 = 0;
x_75 = x_7;
x_76 = l_Array_mapMUnsafe_map___at_Lean_Meta_rewrite___spec__4(x_73, x_74, x_75);
x_77 = x_76;
x_78 = lean_array_get_size(x_77);
x_79 = lean_unsigned_to_nat(0u);
x_80 = lean_mk_empty_array_with_capacity(x_79);
x_81 = lean_nat_dec_lt(x_79, x_78);
if (x_81 == 0)
{
lean_dec(x_78);
lean_dec(x_77);
x_21 = x_80;
x_22 = x_71;
goto block_69;
}
else
{
uint8_t x_82; 
x_82 = lean_nat_dec_le(x_78, x_78);
if (x_82 == 0)
{
lean_dec(x_78);
lean_dec(x_77);
x_21 = x_80;
x_22 = x_71;
goto block_69;
}
else
{
size_t x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_83 = lean_usize_of_nat(x_78);
lean_dec(x_78);
x_84 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__5(x_77, x_74, x_83, x_80, x_10, x_11, x_12, x_13, x_71);
lean_dec(x_77);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_21 = x_85;
x_22 = x_86;
goto block_69;
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_19);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_4);
x_87 = !lean_is_exclusive(x_70);
if (x_87 == 0)
{
return x_70;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_70, 0);
x_89 = lean_ctor_get(x_70, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_70);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
block_69:
{
lean_object* x_23; 
lean_inc(x_19);
x_23 = l_Lean_Meta_getMVarsNoDelayed(x_19, x_10, x_11, x_12, x_13, x_22);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_array_get_size(x_25);
x_27 = lean_unsigned_to_nat(0u);
x_28 = lean_mk_empty_array_with_capacity(x_27);
x_29 = lean_nat_dec_lt(x_27, x_26);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_26);
lean_dec(x_25);
x_30 = l_Array_append___rarg(x_21, x_28);
lean_dec(x_28);
x_31 = lean_array_to_list(lean_box(0), x_30);
x_32 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_19);
lean_ctor_set(x_32, 2, x_31);
lean_ctor_set(x_23, 0, x_32);
return x_23;
}
else
{
uint8_t x_33; 
x_33 = lean_nat_dec_le(x_26, x_26);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_26);
lean_dec(x_25);
x_34 = l_Array_append___rarg(x_21, x_28);
lean_dec(x_28);
x_35 = lean_array_to_list(lean_box(0), x_34);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_4);
lean_ctor_set(x_36, 1, x_19);
lean_ctor_set(x_36, 2, x_35);
lean_ctor_set(x_23, 0, x_36);
return x_23;
}
else
{
size_t x_37; size_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_37 = 0;
x_38 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_39 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__8(x_21, x_25, x_37, x_38, x_28);
lean_dec(x_25);
x_40 = l_Array_append___rarg(x_21, x_39);
lean_dec(x_39);
x_41 = lean_array_to_list(lean_box(0), x_40);
x_42 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_42, 0, x_4);
lean_ctor_set(x_42, 1, x_19);
lean_ctor_set(x_42, 2, x_41);
lean_ctor_set(x_23, 0, x_42);
return x_23;
}
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_43 = lean_ctor_get(x_23, 0);
x_44 = lean_ctor_get(x_23, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_23);
x_45 = lean_array_get_size(x_43);
x_46 = lean_unsigned_to_nat(0u);
x_47 = lean_mk_empty_array_with_capacity(x_46);
x_48 = lean_nat_dec_lt(x_46, x_45);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_45);
lean_dec(x_43);
x_49 = l_Array_append___rarg(x_21, x_47);
lean_dec(x_47);
x_50 = lean_array_to_list(lean_box(0), x_49);
x_51 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_51, 0, x_4);
lean_ctor_set(x_51, 1, x_19);
lean_ctor_set(x_51, 2, x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_44);
return x_52;
}
else
{
uint8_t x_53; 
x_53 = lean_nat_dec_le(x_45, x_45);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_45);
lean_dec(x_43);
x_54 = l_Array_append___rarg(x_21, x_47);
lean_dec(x_47);
x_55 = lean_array_to_list(lean_box(0), x_54);
x_56 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_56, 0, x_4);
lean_ctor_set(x_56, 1, x_19);
lean_ctor_set(x_56, 2, x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_44);
return x_57;
}
else
{
size_t x_58; size_t x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_58 = 0;
x_59 = lean_usize_of_nat(x_45);
lean_dec(x_45);
x_60 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__8(x_21, x_43, x_58, x_59, x_47);
lean_dec(x_43);
x_61 = l_Array_append___rarg(x_21, x_60);
lean_dec(x_60);
x_62 = lean_array_to_list(lean_box(0), x_61);
x_63 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_63, 0, x_4);
lean_ctor_set(x_63, 1, x_19);
lean_ctor_set(x_63, 2, x_62);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_44);
return x_64;
}
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_4);
x_65 = !lean_is_exclusive(x_23);
if (x_65 == 0)
{
return x_23;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_23, 0);
x_67 = lean_ctor_get(x_23, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_23);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_91 = !lean_is_exclusive(x_18);
if (x_91 == 0)
{
return x_18;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_18, 0);
x_93 = lean_ctor_get(x_18, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_18);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
else
{
uint8_t x_95; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_95 = !lean_is_exclusive(x_15);
if (x_95 == 0)
{
return x_15;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_15, 0);
x_97 = lean_ctor_get(x_15, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_15);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
lean_object* l_Lean_Meta_rewrite___lambda__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_expr_instantiate1(x_1, x_2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_17 = l_Lean_Meta_instantiateMVars(x_16, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc_n(x_3, 2);
x_20 = l_Lean_Meta_mkEq(x_3, x_3, x_11, x_12, x_13, x_14, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Expr_appFn_x21(x_21);
lean_dec(x_21);
x_24 = l_Lean_mkApp(x_23, x_1);
x_25 = lean_box(0);
x_26 = lean_mk_string("_a");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = 0;
x_29 = l_Lean_mkLambda(x_27, x_28, x_4, x_24);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_29);
x_30 = l_Lean_Meta_isTypeCorrect(x_29, x_11, x_12, x_13, x_14, x_22);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
lean_dec(x_29);
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_mk_string("motive is not type correct");
x_35 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_box(0);
x_38 = l_Lean_Meta_throwTacticEx___rarg(x_6, x_7, x_36, x_37, x_11, x_12, x_13, x_14, x_33);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
return x_38;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_38);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_30, 1);
lean_inc(x_43);
lean_dec(x_30);
x_44 = lean_box(0);
x_45 = l_Lean_Meta_rewrite___lambda__10(x_3, x_29, x_5, x_18, x_6, x_7, x_8, x_9, x_44, x_11, x_12, x_13, x_14, x_43);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_20);
if (x_46 == 0)
{
return x_20;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_20, 0);
x_48 = lean_ctor_get(x_20, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_20);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_17);
if (x_50 == 0)
{
return x_17;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_17, 0);
x_52 = lean_ctor_get(x_17, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_17);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
lean_object* l_Lean_Meta_rewrite___lambda__12(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; 
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
x_18 = l_Lean_Meta_instantiateMVars(x_1, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_19 = lean_ctor_get(x_13, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_13, 2);
lean_inc(x_23);
x_24 = lean_ctor_get(x_13, 3);
lean_inc(x_24);
x_25 = !lean_is_exclusive(x_19);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_ctor_set_uint8(x_19, 5, x_2);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_19);
lean_ctor_set(x_26, 1, x_22);
lean_ctor_set(x_26, 2, x_23);
lean_ctor_set(x_26, 3, x_24);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_3);
lean_inc(x_20);
x_27 = l_Lean_Meta_kabstract(x_20, x_3, x_4, x_26, x_14, x_15, x_16, x_21);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Expr_hasLooseBVars(x_28);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_dec(x_28);
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
x_31 = lean_mk_string("did not find instance of the pattern in the target expression");
x_32 = l_Lean_stringToMessageData(x_31);
lean_dec(x_31);
x_33 = l_Lean_indentExpr(x_3);
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_mk_string("");
x_36 = l_Lean_stringToMessageData(x_35);
lean_dec(x_35);
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_box(0);
x_39 = l_Lean_Meta_throwTacticEx___rarg(x_8, x_9, x_37, x_38, x_13, x_14, x_15, x_16, x_29);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
return x_39;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_39);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_3);
x_44 = lean_box(0);
x_45 = l_Lean_Meta_rewrite___lambda__11(x_28, x_5, x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_44, x_13, x_14, x_15, x_16, x_29);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_46 = !lean_is_exclusive(x_27);
if (x_46 == 0)
{
return x_27;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_27, 0);
x_48 = lean_ctor_get(x_27, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_27);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_50 = lean_ctor_get_uint8(x_19, 0);
x_51 = lean_ctor_get_uint8(x_19, 1);
x_52 = lean_ctor_get_uint8(x_19, 2);
x_53 = lean_ctor_get_uint8(x_19, 3);
x_54 = lean_ctor_get_uint8(x_19, 4);
x_55 = lean_ctor_get_uint8(x_19, 6);
x_56 = lean_ctor_get_uint8(x_19, 7);
x_57 = lean_ctor_get_uint8(x_19, 8);
x_58 = lean_ctor_get_uint8(x_19, 9);
lean_dec(x_19);
x_59 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_59, 0, x_50);
lean_ctor_set_uint8(x_59, 1, x_51);
lean_ctor_set_uint8(x_59, 2, x_52);
lean_ctor_set_uint8(x_59, 3, x_53);
lean_ctor_set_uint8(x_59, 4, x_54);
lean_ctor_set_uint8(x_59, 5, x_2);
lean_ctor_set_uint8(x_59, 6, x_55);
lean_ctor_set_uint8(x_59, 7, x_56);
lean_ctor_set_uint8(x_59, 8, x_57);
lean_ctor_set_uint8(x_59, 9, x_58);
x_60 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_22);
lean_ctor_set(x_60, 2, x_23);
lean_ctor_set(x_60, 3, x_24);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_3);
lean_inc(x_20);
x_61 = l_Lean_Meta_kabstract(x_20, x_3, x_4, x_60, x_14, x_15, x_16, x_21);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = l_Lean_Expr_hasLooseBVars(x_62);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_62);
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
x_65 = lean_mk_string("did not find instance of the pattern in the target expression");
x_66 = l_Lean_stringToMessageData(x_65);
lean_dec(x_65);
x_67 = l_Lean_indentExpr(x_3);
x_68 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_mk_string("");
x_70 = l_Lean_stringToMessageData(x_69);
lean_dec(x_69);
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_box(0);
x_73 = l_Lean_Meta_throwTacticEx___rarg(x_8, x_9, x_71, x_72, x_13, x_14, x_15, x_16, x_63);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_76 = x_73;
} else {
 lean_dec_ref(x_73);
 x_76 = lean_box(0);
}
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(1, 2, 0);
} else {
 x_77 = x_76;
}
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_75);
return x_77;
}
else
{
lean_object* x_78; lean_object* x_79; 
lean_dec(x_3);
x_78 = lean_box(0);
x_79 = l_Lean_Meta_rewrite___lambda__11(x_62, x_5, x_20, x_6, x_7, x_8, x_9, x_10, x_11, x_78, x_13, x_14, x_15, x_16, x_63);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_20);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_80 = lean_ctor_get(x_61, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_61, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_82 = x_61;
} else {
 lean_dec_ref(x_61);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_84 = !lean_is_exclusive(x_18);
if (x_84 == 0)
{
return x_18;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_18, 0);
x_86 = lean_ctor_get(x_18, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_18);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
}
lean_object* l_Lean_Meta_rewrite___lambda__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_1);
x_14 = l_Lean_Meta_inferType(x_1, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_box(0);
x_18 = 1;
x_19 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_20 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(x_15, x_18, x_17, x_19, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_ctor_get(x_21, 0);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_22, 1);
lean_inc(x_26);
lean_dec(x_22);
x_27 = l_Lean_mkAppN(x_1, x_24);
x_28 = lean_box(0);
x_29 = lean_mk_string("Iff");
x_30 = lean_name_mk_string(x_28, x_29);
x_31 = lean_unsigned_to_nat(2u);
x_32 = l_Lean_Expr_isAppOfArity(x_26, x_30, x_31);
lean_dec(x_30);
if (x_32 == 0)
{
lean_object* x_33; 
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_26);
x_33 = l_Lean_Meta_matchEq_x3f(x_26, x_9, x_10, x_11, x_12, x_23);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_5);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_mk_string("equality or iff proof expected");
x_37 = l_Lean_stringToMessageData(x_36);
lean_dec(x_36);
x_38 = l_Lean_indentExpr(x_26);
x_39 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_mk_string("");
x_41 = l_Lean_stringToMessageData(x_40);
lean_dec(x_40);
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_box(0);
x_44 = l_Lean_Meta_throwTacticEx___rarg(x_2, x_3, x_42, x_43, x_9, x_10, x_11, x_12, x_35);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_34, 0);
lean_inc(x_45);
lean_dec(x_34);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (x_4 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_47 = lean_ctor_get(x_33, 1);
lean_inc(x_47);
lean_dec(x_33);
x_48 = lean_ctor_get(x_45, 0);
lean_inc(x_48);
lean_dec(x_45);
x_49 = lean_ctor_get(x_46, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_46, 1);
lean_inc(x_50);
lean_dec(x_46);
x_51 = l_Lean_Expr_getAppFn(x_49);
x_52 = l_Lean_Expr_isMVar(x_51);
lean_dec(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_26);
x_53 = lean_box(0);
x_54 = l_Lean_Meta_rewrite___lambda__3(x_5, x_6, x_49, x_7, x_50, x_48, x_27, x_2, x_3, x_24, x_25, x_53, x_9, x_10, x_11, x_12, x_47);
lean_dec(x_25);
lean_dec(x_50);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
lean_dec(x_50);
lean_dec(x_48);
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_5);
x_55 = lean_mk_string("pattern is a metavariable");
x_56 = l_Lean_stringToMessageData(x_55);
lean_dec(x_55);
x_57 = l_Lean_indentExpr(x_49);
x_58 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_mk_string("\nfrom equation");
x_60 = l_Lean_stringToMessageData(x_59);
lean_dec(x_59);
x_61 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set(x_61, 1, x_60);
x_62 = l_Lean_indentExpr(x_26);
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_mk_string("");
x_65 = l_Lean_stringToMessageData(x_64);
lean_dec(x_64);
x_66 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_box(0);
x_68 = l_Lean_Meta_throwTacticEx___rarg(x_2, x_3, x_66, x_67, x_9, x_10, x_11, x_12, x_47);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_69 = !lean_is_exclusive(x_68);
if (x_69 == 0)
{
return x_68;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_68, 0);
x_71 = lean_ctor_get(x_68, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_68);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_26);
x_73 = lean_ctor_get(x_33, 1);
lean_inc(x_73);
lean_dec(x_33);
x_74 = lean_ctor_get(x_45, 0);
lean_inc(x_74);
lean_dec(x_45);
x_75 = lean_ctor_get(x_46, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_46, 1);
lean_inc(x_76);
lean_dec(x_46);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_77 = l_Lean_Meta_mkEqSymm(x_27, x_9, x_10, x_11, x_12, x_73);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_75);
lean_inc(x_76);
x_80 = l_Lean_Meta_mkEq(x_76, x_75, x_9, x_10, x_11, x_12, x_79);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_83 = l_Lean_Expr_getAppFn(x_76);
x_84 = l_Lean_Expr_isMVar(x_83);
lean_dec(x_83);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; 
lean_dec(x_81);
x_85 = lean_box(0);
x_86 = l_Lean_Meta_rewrite___lambda__6(x_5, x_6, x_76, x_7, x_75, x_74, x_78, x_2, x_3, x_24, x_25, x_85, x_9, x_10, x_11, x_12, x_82);
lean_dec(x_25);
lean_dec(x_75);
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; 
lean_dec(x_78);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_5);
x_87 = lean_mk_string("pattern is a metavariable");
x_88 = l_Lean_stringToMessageData(x_87);
lean_dec(x_87);
x_89 = l_Lean_indentExpr(x_76);
x_90 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_mk_string("\nfrom equation");
x_92 = l_Lean_stringToMessageData(x_91);
lean_dec(x_91);
x_93 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_92);
x_94 = l_Lean_indentExpr(x_81);
x_95 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
x_96 = lean_mk_string("");
x_97 = l_Lean_stringToMessageData(x_96);
lean_dec(x_96);
x_98 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_box(0);
x_100 = l_Lean_Meta_throwTacticEx___rarg(x_2, x_3, x_98, x_99, x_9, x_10, x_11, x_12, x_82);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_101 = !lean_is_exclusive(x_100);
if (x_101 == 0)
{
return x_100;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_100, 0);
x_103 = lean_ctor_get(x_100, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_100);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
}
else
{
uint8_t x_105; 
lean_dec(x_78);
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_105 = !lean_is_exclusive(x_80);
if (x_105 == 0)
{
return x_80;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_80, 0);
x_107 = lean_ctor_get(x_80, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_80);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
else
{
uint8_t x_109; 
lean_dec(x_76);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_109 = !lean_is_exclusive(x_77);
if (x_109 == 0)
{
return x_77;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_77, 0);
x_111 = lean_ctor_get(x_77, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_77);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
}
}
else
{
uint8_t x_113; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_113 = !lean_is_exclusive(x_33);
if (x_113 == 0)
{
return x_33;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_33, 0);
x_115 = lean_ctor_get(x_33, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_33);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_117 = l_Lean_Expr_appFn_x21(x_26);
x_118 = l_Lean_Expr_appArg_x21(x_117);
lean_dec(x_117);
x_119 = l_Lean_Expr_appArg_x21(x_26);
lean_dec(x_26);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_119);
lean_inc(x_118);
x_120 = l_Lean_Meta_mkEq(x_118, x_119, x_9, x_10, x_11, x_12, x_23);
if (lean_obj_tag(x_120) == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_123 = lean_mk_string("propext");
x_124 = lean_name_mk_string(x_28, x_123);
x_125 = lean_box(0);
x_126 = l_Lean_mkConst(x_124, x_125);
x_127 = l_Lean_mkApp3(x_126, x_118, x_119, x_27);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_121);
x_128 = l_Lean_Meta_matchEq_x3f(x_121, x_9, x_10, x_11, x_12, x_122);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; 
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_127);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_5);
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
lean_dec(x_128);
x_131 = lean_mk_string("equality or iff proof expected");
x_132 = l_Lean_stringToMessageData(x_131);
lean_dec(x_131);
x_133 = l_Lean_indentExpr(x_121);
x_134 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_mk_string("");
x_136 = l_Lean_stringToMessageData(x_135);
lean_dec(x_135);
x_137 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_137, 0, x_134);
lean_ctor_set(x_137, 1, x_136);
x_138 = lean_box(0);
x_139 = l_Lean_Meta_throwTacticEx___rarg(x_2, x_3, x_137, x_138, x_9, x_10, x_11, x_12, x_130);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_139;
}
else
{
lean_object* x_140; lean_object* x_141; 
x_140 = lean_ctor_get(x_129, 0);
lean_inc(x_140);
lean_dec(x_129);
x_141 = lean_ctor_get(x_140, 1);
lean_inc(x_141);
if (x_4 == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; uint8_t x_147; 
x_142 = lean_ctor_get(x_128, 1);
lean_inc(x_142);
lean_dec(x_128);
x_143 = lean_ctor_get(x_140, 0);
lean_inc(x_143);
lean_dec(x_140);
x_144 = lean_ctor_get(x_141, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_141, 1);
lean_inc(x_145);
lean_dec(x_141);
x_146 = l_Lean_Expr_getAppFn(x_144);
x_147 = l_Lean_Expr_isMVar(x_146);
lean_dec(x_146);
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; 
lean_dec(x_121);
x_148 = lean_box(0);
x_149 = l_Lean_Meta_rewrite___lambda__9(x_5, x_6, x_144, x_7, x_145, x_143, x_127, x_2, x_3, x_24, x_25, x_148, x_9, x_10, x_11, x_12, x_142);
lean_dec(x_25);
lean_dec(x_145);
return x_149;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; uint8_t x_164; 
lean_dec(x_145);
lean_dec(x_143);
lean_dec(x_127);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_5);
x_150 = lean_mk_string("pattern is a metavariable");
x_151 = l_Lean_stringToMessageData(x_150);
lean_dec(x_150);
x_152 = l_Lean_indentExpr(x_144);
x_153 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set(x_153, 1, x_152);
x_154 = lean_mk_string("\nfrom equation");
x_155 = l_Lean_stringToMessageData(x_154);
lean_dec(x_154);
x_156 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set(x_156, 1, x_155);
x_157 = l_Lean_indentExpr(x_121);
x_158 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
x_159 = lean_mk_string("");
x_160 = l_Lean_stringToMessageData(x_159);
lean_dec(x_159);
x_161 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_161, 0, x_158);
lean_ctor_set(x_161, 1, x_160);
x_162 = lean_box(0);
x_163 = l_Lean_Meta_throwTacticEx___rarg(x_2, x_3, x_161, x_162, x_9, x_10, x_11, x_12, x_142);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_164 = !lean_is_exclusive(x_163);
if (x_164 == 0)
{
return x_163;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_165 = lean_ctor_get(x_163, 0);
x_166 = lean_ctor_get(x_163, 1);
lean_inc(x_166);
lean_inc(x_165);
lean_dec(x_163);
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
lean_dec(x_121);
x_168 = lean_ctor_get(x_128, 1);
lean_inc(x_168);
lean_dec(x_128);
x_169 = lean_ctor_get(x_140, 0);
lean_inc(x_169);
lean_dec(x_140);
x_170 = lean_ctor_get(x_141, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_141, 1);
lean_inc(x_171);
lean_dec(x_141);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_172 = l_Lean_Meta_mkEqSymm(x_127, x_9, x_10, x_11, x_12, x_168);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
lean_dec(x_172);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_170);
lean_inc(x_171);
x_175 = l_Lean_Meta_mkEq(x_171, x_170, x_9, x_10, x_11, x_12, x_174);
if (lean_obj_tag(x_175) == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; uint8_t x_179; 
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
lean_dec(x_175);
x_178 = l_Lean_Expr_getAppFn(x_171);
x_179 = l_Lean_Expr_isMVar(x_178);
lean_dec(x_178);
if (x_179 == 0)
{
lean_object* x_180; lean_object* x_181; 
lean_dec(x_176);
x_180 = lean_box(0);
x_181 = l_Lean_Meta_rewrite___lambda__12(x_5, x_6, x_171, x_7, x_170, x_169, x_173, x_2, x_3, x_24, x_25, x_180, x_9, x_10, x_11, x_12, x_177);
lean_dec(x_25);
lean_dec(x_170);
return x_181;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; uint8_t x_196; 
lean_dec(x_173);
lean_dec(x_170);
lean_dec(x_169);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_5);
x_182 = lean_mk_string("pattern is a metavariable");
x_183 = l_Lean_stringToMessageData(x_182);
lean_dec(x_182);
x_184 = l_Lean_indentExpr(x_171);
x_185 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_185, 0, x_183);
lean_ctor_set(x_185, 1, x_184);
x_186 = lean_mk_string("\nfrom equation");
x_187 = l_Lean_stringToMessageData(x_186);
lean_dec(x_186);
x_188 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_188, 0, x_185);
lean_ctor_set(x_188, 1, x_187);
x_189 = l_Lean_indentExpr(x_176);
x_190 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_190, 0, x_188);
lean_ctor_set(x_190, 1, x_189);
x_191 = lean_mk_string("");
x_192 = l_Lean_stringToMessageData(x_191);
lean_dec(x_191);
x_193 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_193, 0, x_190);
lean_ctor_set(x_193, 1, x_192);
x_194 = lean_box(0);
x_195 = l_Lean_Meta_throwTacticEx___rarg(x_2, x_3, x_193, x_194, x_9, x_10, x_11, x_12, x_177);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_196 = !lean_is_exclusive(x_195);
if (x_196 == 0)
{
return x_195;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_197 = lean_ctor_get(x_195, 0);
x_198 = lean_ctor_get(x_195, 1);
lean_inc(x_198);
lean_inc(x_197);
lean_dec(x_195);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_197);
lean_ctor_set(x_199, 1, x_198);
return x_199;
}
}
}
else
{
uint8_t x_200; 
lean_dec(x_173);
lean_dec(x_171);
lean_dec(x_170);
lean_dec(x_169);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_200 = !lean_is_exclusive(x_175);
if (x_200 == 0)
{
return x_175;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_201 = lean_ctor_get(x_175, 0);
x_202 = lean_ctor_get(x_175, 1);
lean_inc(x_202);
lean_inc(x_201);
lean_dec(x_175);
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_201);
lean_ctor_set(x_203, 1, x_202);
return x_203;
}
}
}
else
{
uint8_t x_204; 
lean_dec(x_171);
lean_dec(x_170);
lean_dec(x_169);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_204 = !lean_is_exclusive(x_172);
if (x_204 == 0)
{
return x_172;
}
else
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; 
x_205 = lean_ctor_get(x_172, 0);
x_206 = lean_ctor_get(x_172, 1);
lean_inc(x_206);
lean_inc(x_205);
lean_dec(x_172);
x_207 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_207, 0, x_205);
lean_ctor_set(x_207, 1, x_206);
return x_207;
}
}
}
}
}
else
{
uint8_t x_208; 
lean_dec(x_127);
lean_dec(x_121);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_208 = !lean_is_exclusive(x_128);
if (x_208 == 0)
{
return x_128;
}
else
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_209 = lean_ctor_get(x_128, 0);
x_210 = lean_ctor_get(x_128, 1);
lean_inc(x_210);
lean_inc(x_209);
lean_dec(x_128);
x_211 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_211, 0, x_209);
lean_ctor_set(x_211, 1, x_210);
return x_211;
}
}
}
else
{
uint8_t x_212; 
lean_dec(x_119);
lean_dec(x_118);
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_212 = !lean_is_exclusive(x_120);
if (x_212 == 0)
{
return x_120;
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_213 = lean_ctor_get(x_120, 0);
x_214 = lean_ctor_get(x_120, 1);
lean_inc(x_214);
lean_inc(x_213);
lean_dec(x_120);
x_215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_215, 0, x_213);
lean_ctor_set(x_215, 1, x_214);
return x_215;
}
}
}
}
else
{
uint8_t x_216; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_216 = !lean_is_exclusive(x_20);
if (x_216 == 0)
{
return x_20;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_217 = lean_ctor_get(x_20, 0);
x_218 = lean_ctor_get(x_20, 1);
lean_inc(x_218);
lean_inc(x_217);
lean_dec(x_20);
x_219 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_219, 0, x_217);
lean_ctor_set(x_219, 1, x_218);
return x_219;
}
}
}
else
{
uint8_t x_220; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_220 = !lean_is_exclusive(x_14);
if (x_220 == 0)
{
return x_14;
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; 
x_221 = lean_ctor_get(x_14, 0);
x_222 = lean_ctor_get(x_14, 1);
lean_inc(x_222);
lean_inc(x_221);
lean_dec(x_14);
x_223 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_223, 0, x_221);
lean_ctor_set(x_223, 1, x_222);
return x_223;
}
}
}
}
lean_object* l_Lean_Meta_rewrite(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_box(0);
x_13 = lean_mk_string("rewrite");
x_14 = lean_name_mk_string(x_12, x_13);
lean_inc(x_14);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_Lean_Meta_checkNotAssigned___boxed), 7, 2);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_14);
x_16 = lean_box(x_4);
x_17 = lean_box(x_6);
lean_inc(x_1);
x_18 = lean_alloc_closure((void*)(l_Lean_Meta_rewrite___lambda__13___boxed), 13, 7);
lean_closure_set(x_18, 0, x_3);
lean_closure_set(x_18, 1, x_14);
lean_closure_set(x_18, 2, x_1);
lean_closure_set(x_18, 3, x_16);
lean_closure_set(x_18, 4, x_2);
lean_closure_set(x_18, 5, x_17);
lean_closure_set(x_18, 6, x_5);
x_19 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_19, 0, x_15);
lean_closure_set(x_19, 1, x_18);
x_20 = l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(x_1, x_19, x_7, x_8, x_9, x_10, x_11);
return x_20;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_rewrite___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_Meta_rewrite___spec__2(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Array_contains___at_Lean_Meta_rewrite___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_contains___at_Lean_Meta_rewrite___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__3(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_rewrite___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Meta_rewrite___spec__4(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__5(x_1, x_10, x_11, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__6(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__7(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_rewrite___spec__8(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Meta_rewrite___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Lean_Meta_rewrite___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_9);
lean_dec(x_8);
return x_15;
}
}
lean_object* l_Lean_Meta_rewrite___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Meta_rewrite___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
return x_16;
}
}
lean_object* l_Lean_Meta_rewrite___lambda__3___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
uint8_t x_18; lean_object* x_19; 
x_18 = lean_unbox(x_2);
lean_dec(x_2);
x_19 = l_Lean_Meta_rewrite___lambda__3(x_1, x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
return x_19;
}
}
lean_object* l_Lean_Meta_rewrite___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Lean_Meta_rewrite___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_9);
lean_dec(x_8);
return x_15;
}
}
lean_object* l_Lean_Meta_rewrite___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Meta_rewrite___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
return x_16;
}
}
lean_object* l_Lean_Meta_rewrite___lambda__6___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
uint8_t x_18; lean_object* x_19; 
x_18 = lean_unbox(x_2);
lean_dec(x_2);
x_19 = l_Lean_Meta_rewrite___lambda__6(x_1, x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
return x_19;
}
}
lean_object* l_Lean_Meta_rewrite___lambda__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Lean_Meta_rewrite___lambda__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_9);
lean_dec(x_8);
return x_15;
}
}
lean_object* l_Lean_Meta_rewrite___lambda__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Meta_rewrite___lambda__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
return x_16;
}
}
lean_object* l_Lean_Meta_rewrite___lambda__9___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
uint8_t x_18; lean_object* x_19; 
x_18 = lean_unbox(x_2);
lean_dec(x_2);
x_19 = l_Lean_Meta_rewrite___lambda__9(x_1, x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
return x_19;
}
}
lean_object* l_Lean_Meta_rewrite___lambda__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Lean_Meta_rewrite___lambda__10(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_9);
lean_dec(x_8);
return x_15;
}
}
lean_object* l_Lean_Meta_rewrite___lambda__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Meta_rewrite___lambda__11(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
return x_16;
}
}
lean_object* l_Lean_Meta_rewrite___lambda__12___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
uint8_t x_18; lean_object* x_19; 
x_18 = lean_unbox(x_2);
lean_dec(x_2);
x_19 = l_Lean_Meta_rewrite___lambda__12(x_1, x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
return x_19;
}
}
lean_object* l_Lean_Meta_rewrite___lambda__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_4);
lean_dec(x_4);
x_15 = lean_unbox(x_6);
lean_dec(x_6);
x_16 = l_Lean_Meta_rewrite___lambda__13(x_1, x_2, x_3, x_14, x_5, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
return x_16;
}
}
lean_object* l_Lean_Meta_rewrite___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_unbox(x_4);
lean_dec(x_4);
x_13 = lean_unbox(x_6);
lean_dec(x_6);
x_14 = l_Lean_Meta_rewrite(x_1, x_2, x_3, x_12, x_5, x_13, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_AppBuilder(lean_object*);
lean_object* initialize_Lean_Meta_MatchUtil(lean_object*);
lean_object* initialize_Lean_Meta_KAbstract(lean_object*);
lean_object* initialize_Lean_Meta_Check(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Apply(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_Tactic_Rewrite(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_MatchUtil(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_KAbstract(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Check(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Apply(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
