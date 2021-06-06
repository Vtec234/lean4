// Lean compiler output
// Module: Lean.Meta.Tactic.Simp.Rewrite
// Imports: Init Lean.Meta.SynthInstance Lean.Meta.Tactic.Simp.Types
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
uint8_t l_Lean_Meta_Simp_rewrite_inErasedSet(lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__3(lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_rewrite___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteUsingDecide_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__1(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_Simp_tryRewriteUsingDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__2(lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_match__2(lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_inErasedSet_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemma_getName(lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_match__1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constructorApp_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isClass_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t lean_expr_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_postDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1(lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewritePre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f_match__1(lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__1(lean_object*);
uint8_t l_Std_PersistentHashMap_contains___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_Meta_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance_match__1(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_insertionSort_swapLoop___at_Lean_Meta_Simp_rewrite___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewritePost(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_hasAssignableMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_preDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__2(lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_inErasedSet_match__1(lean_object*);
lean_object* l_Lean_Meta_mkEqFalse_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2(lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkNoConfusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_rewrite___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_tryRewriteCtorEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getMatch___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_insertionSort_traverse___at_Lean_Meta_Simp_rewrite___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_tryRewriteCtorEq_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemma_getValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_tryRewriteCtorEq_match__1(lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_inErasedSet___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_rewrite_match__2___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Meta_instToMessageDataSimpLemma___spec__1(lean_object*);
lean_object* l_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
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
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_synthesizeArgs_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_synthesizeArgs_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_Simp_synthesizeArgs_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_synthesizeArgs_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_10 = lean_ctor_get(x_7, 3);
x_11 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_2, x_5, x_6, x_7, x_8, x_9);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_take(x_8, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 3);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_15, 3);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_21 = lean_ctor_get(x_16, 0);
x_22 = lean_mk_string("[");
x_23 = l_Lean_stringToMessageData(x_22);
lean_dec(x_22);
lean_inc(x_1);
x_24 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_24, 0, x_1);
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_mk_string("] ");
x_27 = l_Lean_stringToMessageData(x_26);
lean_dec(x_26);
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_12);
x_30 = lean_mk_string("");
x_31 = l_Lean_stringToMessageData(x_30);
lean_dec(x_30);
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_32);
lean_inc(x_10);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_10);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_Std_PersistentArray_push___rarg(x_21, x_34);
lean_ctor_set(x_16, 0, x_35);
x_36 = lean_st_ref_set(x_8, x_15, x_17);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_36, 0);
lean_dec(x_38);
x_39 = lean_box(0);
lean_ctor_set(x_36, 0, x_39);
return x_36;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_36, 1);
lean_inc(x_40);
lean_dec(x_36);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
else
{
uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_43 = lean_ctor_get_uint8(x_16, sizeof(void*)*1);
x_44 = lean_ctor_get(x_16, 0);
lean_inc(x_44);
lean_dec(x_16);
x_45 = lean_mk_string("[");
x_46 = l_Lean_stringToMessageData(x_45);
lean_dec(x_45);
lean_inc(x_1);
x_47 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_47, 0, x_1);
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_mk_string("] ");
x_50 = l_Lean_stringToMessageData(x_49);
lean_dec(x_49);
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_48);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_12);
x_53 = lean_mk_string("");
x_54 = l_Lean_stringToMessageData(x_53);
lean_dec(x_53);
x_55 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_56, 0, x_1);
lean_ctor_set(x_56, 1, x_55);
lean_inc(x_10);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_10);
lean_ctor_set(x_57, 1, x_56);
x_58 = l_Std_PersistentArray_push___rarg(x_44, x_57);
x_59 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set_uint8(x_59, sizeof(void*)*1, x_43);
lean_ctor_set(x_15, 3, x_59);
x_60 = lean_st_ref_set(x_8, x_15, x_17);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_62 = x_60;
} else {
 lean_dec_ref(x_60);
 x_62 = lean_box(0);
}
x_63 = lean_box(0);
if (lean_is_scalar(x_62)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_62;
}
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_61);
return x_64;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_65 = lean_ctor_get(x_15, 0);
x_66 = lean_ctor_get(x_15, 1);
x_67 = lean_ctor_get(x_15, 2);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_15);
x_68 = lean_ctor_get_uint8(x_16, sizeof(void*)*1);
x_69 = lean_ctor_get(x_16, 0);
lean_inc(x_69);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 x_70 = x_16;
} else {
 lean_dec_ref(x_16);
 x_70 = lean_box(0);
}
x_71 = lean_mk_string("[");
x_72 = l_Lean_stringToMessageData(x_71);
lean_dec(x_71);
lean_inc(x_1);
x_73 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_73, 0, x_1);
x_74 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_mk_string("] ");
x_76 = l_Lean_stringToMessageData(x_75);
lean_dec(x_75);
x_77 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_77, 0, x_74);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_12);
x_79 = lean_mk_string("");
x_80 = l_Lean_stringToMessageData(x_79);
lean_dec(x_79);
x_81 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_81, 0, x_78);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_82, 0, x_1);
lean_ctor_set(x_82, 1, x_81);
lean_inc(x_10);
x_83 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_83, 0, x_10);
lean_ctor_set(x_83, 1, x_82);
x_84 = l_Std_PersistentArray_push___rarg(x_69, x_83);
if (lean_is_scalar(x_70)) {
 x_85 = lean_alloc_ctor(0, 1, 1);
} else {
 x_85 = x_70;
}
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set_uint8(x_85, sizeof(void*)*1, x_68);
x_86 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_86, 0, x_65);
lean_ctor_set(x_86, 1, x_66);
lean_ctor_set(x_86, 2, x_67);
lean_ctor_set(x_86, 3, x_85);
x_87 = lean_st_ref_set(x_8, x_86, x_17);
x_88 = lean_ctor_get(x_87, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_87)) {
 lean_ctor_release(x_87, 0);
 lean_ctor_release(x_87, 1);
 x_89 = x_87;
} else {
 lean_dec_ref(x_87);
 x_89 = lean_box(0);
}
x_90 = lean_box(0);
if (lean_is_scalar(x_89)) {
 x_91 = lean_alloc_ctor(0, 2, 0);
} else {
 x_91 = x_89;
}
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_88);
return x_91;
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_6, 0);
x_10 = l_Lean_checkTraceOption(x_9, x_1);
x_11 = lean_box(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_8);
return x_12;
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_3);
x_12 = l_Lean_Meta_trySynthInstance(x_3, x_11, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
switch (lean_obj_tag(x_13)) {
case 0:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
lean_dec(x_2);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 x_15 = x_12;
} else {
 lean_dec_ref(x_12);
 x_15 = lean_box(0);
}
x_16 = lean_box(0);
x_17 = lean_mk_string("Meta");
x_18 = lean_name_mk_string(x_16, x_17);
x_19 = lean_mk_string("Tactic");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_mk_string("simp");
x_22 = lean_name_mk_string(x_20, x_21);
x_23 = lean_mk_string("discharge");
x_24 = lean_name_mk_string(x_22, x_23);
x_50 = lean_st_ref_get(x_9, x_14);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_51, 3);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_ctor_get_uint8(x_52, sizeof(void*)*1);
lean_dec(x_52);
if (x_53 == 0)
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_ctor_get(x_50, 1);
lean_inc(x_54);
lean_dec(x_50);
x_55 = 0;
x_25 = x_55;
x_26 = x_54;
goto block_49;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_56 = lean_ctor_get(x_50, 1);
lean_inc(x_56);
lean_dec(x_50);
lean_inc(x_24);
x_57 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2(x_24, x_4, x_5, x_6, x_7, x_8, x_9, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_unbox(x_58);
lean_dec(x_58);
x_25 = x_60;
x_26 = x_59;
goto block_49;
}
block_49:
{
if (x_25 == 0)
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_24);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_27 = 0;
x_28 = lean_box(x_27);
if (lean_is_scalar(x_15)) {
 x_29 = lean_alloc_ctor(0, 2, 0);
} else {
 x_29 = x_15;
}
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_26);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
lean_dec(x_15);
x_30 = lean_mk_string("");
x_31 = l_Lean_stringToMessageData(x_30);
lean_dec(x_30);
x_32 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_32, 0, x_1);
lean_inc(x_31);
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_mk_string(", failed to synthesize instance");
x_35 = l_Lean_stringToMessageData(x_34);
lean_dec(x_34);
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_indentExpr(x_3);
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_31);
x_40 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1(x_24, x_39, x_4, x_5, x_6, x_7, x_8, x_9, x_26);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
x_43 = 0;
x_44 = lean_box(x_43);
lean_ctor_set(x_40, 0, x_44);
return x_40;
}
else
{
lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_40, 1);
lean_inc(x_45);
lean_dec(x_40);
x_46 = 0;
x_47 = lean_box(x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_45);
return x_48;
}
}
}
}
case 1:
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_12, 1);
lean_inc(x_61);
lean_dec(x_12);
x_62 = lean_ctor_get(x_13, 0);
lean_inc(x_62);
lean_dec(x_13);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_63 = l_Lean_Meta_isExprDefEq(x_2, x_62, x_6, x_7, x_8, x_9, x_61);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; uint8_t x_65; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_unbox(x_64);
lean_dec(x_64);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; lean_object* x_78; lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; 
x_66 = lean_ctor_get(x_63, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_67 = x_63;
} else {
 lean_dec_ref(x_63);
 x_67 = lean_box(0);
}
x_68 = lean_box(0);
x_69 = lean_mk_string("Meta");
x_70 = lean_name_mk_string(x_68, x_69);
x_71 = lean_mk_string("Tactic");
x_72 = lean_name_mk_string(x_70, x_71);
x_73 = lean_mk_string("simp");
x_74 = lean_name_mk_string(x_72, x_73);
x_75 = lean_mk_string("discharge");
x_76 = lean_name_mk_string(x_74, x_75);
x_102 = lean_st_ref_get(x_9, x_66);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_103, 3);
lean_inc(x_104);
lean_dec(x_103);
x_105 = lean_ctor_get_uint8(x_104, sizeof(void*)*1);
lean_dec(x_104);
if (x_105 == 0)
{
lean_object* x_106; uint8_t x_107; 
x_106 = lean_ctor_get(x_102, 1);
lean_inc(x_106);
lean_dec(x_102);
x_107 = 0;
x_77 = x_107;
x_78 = x_106;
goto block_101;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_108 = lean_ctor_get(x_102, 1);
lean_inc(x_108);
lean_dec(x_102);
lean_inc(x_76);
x_109 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2(x_76, x_4, x_5, x_6, x_7, x_8, x_9, x_108);
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_109, 1);
lean_inc(x_111);
lean_dec(x_109);
x_112 = lean_unbox(x_110);
lean_dec(x_110);
x_77 = x_112;
x_78 = x_111;
goto block_101;
}
block_101:
{
if (x_77 == 0)
{
uint8_t x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_76);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_79 = 0;
x_80 = lean_box(x_79);
if (lean_is_scalar(x_67)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_67;
}
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_78);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; 
lean_dec(x_67);
x_82 = lean_mk_string("");
x_83 = l_Lean_stringToMessageData(x_82);
lean_dec(x_82);
x_84 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_84, 0, x_1);
lean_inc(x_83);
x_85 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_mk_string(", failed to assign instance");
x_87 = l_Lean_stringToMessageData(x_86);
lean_dec(x_86);
x_88 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_88, 0, x_85);
lean_ctor_set(x_88, 1, x_87);
x_89 = l_Lean_indentExpr(x_3);
x_90 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_83);
x_92 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1(x_76, x_91, x_4, x_5, x_6, x_7, x_8, x_9, x_78);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_93 = !lean_is_exclusive(x_92);
if (x_93 == 0)
{
lean_object* x_94; uint8_t x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_92, 0);
lean_dec(x_94);
x_95 = 0;
x_96 = lean_box(x_95);
lean_ctor_set(x_92, 0, x_96);
return x_92;
}
else
{
lean_object* x_97; uint8_t x_98; lean_object* x_99; lean_object* x_100; 
x_97 = lean_ctor_get(x_92, 1);
lean_inc(x_97);
lean_dec(x_92);
x_98 = 0;
x_99 = lean_box(x_98);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_97);
return x_100;
}
}
}
}
else
{
uint8_t x_113; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_113 = !lean_is_exclusive(x_63);
if (x_113 == 0)
{
lean_object* x_114; uint8_t x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_63, 0);
lean_dec(x_114);
x_115 = 1;
x_116 = lean_box(x_115);
lean_ctor_set(x_63, 0, x_116);
return x_63;
}
else
{
lean_object* x_117; uint8_t x_118; lean_object* x_119; lean_object* x_120; 
x_117 = lean_ctor_get(x_63, 1);
lean_inc(x_117);
lean_dec(x_63);
x_118 = 1;
x_119 = lean_box(x_118);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_117);
return x_120;
}
}
}
else
{
uint8_t x_121; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_121 = !lean_is_exclusive(x_63);
if (x_121 == 0)
{
return x_63;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_63, 0);
x_123 = lean_ctor_get(x_63, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_63);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
return x_124;
}
}
}
default: 
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; uint8_t x_136; lean_object* x_137; lean_object* x_161; lean_object* x_162; lean_object* x_163; uint8_t x_164; 
lean_dec(x_2);
x_125 = lean_ctor_get(x_12, 1);
lean_inc(x_125);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 lean_ctor_release(x_12, 1);
 x_126 = x_12;
} else {
 lean_dec_ref(x_12);
 x_126 = lean_box(0);
}
x_127 = lean_box(0);
x_128 = lean_mk_string("Meta");
x_129 = lean_name_mk_string(x_127, x_128);
x_130 = lean_mk_string("Tactic");
x_131 = lean_name_mk_string(x_129, x_130);
x_132 = lean_mk_string("simp");
x_133 = lean_name_mk_string(x_131, x_132);
x_134 = lean_mk_string("discharge");
x_135 = lean_name_mk_string(x_133, x_134);
x_161 = lean_st_ref_get(x_9, x_125);
x_162 = lean_ctor_get(x_161, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_162, 3);
lean_inc(x_163);
lean_dec(x_162);
x_164 = lean_ctor_get_uint8(x_163, sizeof(void*)*1);
lean_dec(x_163);
if (x_164 == 0)
{
lean_object* x_165; uint8_t x_166; 
x_165 = lean_ctor_get(x_161, 1);
lean_inc(x_165);
lean_dec(x_161);
x_166 = 0;
x_136 = x_166;
x_137 = x_165;
goto block_160;
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; uint8_t x_171; 
x_167 = lean_ctor_get(x_161, 1);
lean_inc(x_167);
lean_dec(x_161);
lean_inc(x_135);
x_168 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2(x_135, x_4, x_5, x_6, x_7, x_8, x_9, x_167);
x_169 = lean_ctor_get(x_168, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_168, 1);
lean_inc(x_170);
lean_dec(x_168);
x_171 = lean_unbox(x_169);
lean_dec(x_169);
x_136 = x_171;
x_137 = x_170;
goto block_160;
}
block_160:
{
if (x_136 == 0)
{
uint8_t x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_135);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_138 = 0;
x_139 = lean_box(x_138);
if (lean_is_scalar(x_126)) {
 x_140 = lean_alloc_ctor(0, 2, 0);
} else {
 x_140 = x_126;
}
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_137);
return x_140;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; 
lean_dec(x_126);
x_141 = lean_mk_string("");
x_142 = l_Lean_stringToMessageData(x_141);
lean_dec(x_141);
x_143 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_143, 0, x_1);
lean_inc(x_142);
x_144 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set(x_144, 1, x_143);
x_145 = lean_mk_string(", failed to synthesize instance");
x_146 = l_Lean_stringToMessageData(x_145);
lean_dec(x_145);
x_147 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_147, 0, x_144);
lean_ctor_set(x_147, 1, x_146);
x_148 = l_Lean_indentExpr(x_3);
x_149 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_149, 0, x_147);
lean_ctor_set(x_149, 1, x_148);
x_150 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_142);
x_151 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1(x_135, x_150, x_4, x_5, x_6, x_7, x_8, x_9, x_137);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_152 = !lean_is_exclusive(x_151);
if (x_152 == 0)
{
lean_object* x_153; uint8_t x_154; lean_object* x_155; 
x_153 = lean_ctor_get(x_151, 0);
lean_dec(x_153);
x_154 = 0;
x_155 = lean_box(x_154);
lean_ctor_set(x_151, 0, x_155);
return x_151;
}
else
{
lean_object* x_156; uint8_t x_157; lean_object* x_158; lean_object* x_159; 
x_156 = lean_ctor_get(x_151, 1);
lean_inc(x_156);
lean_dec(x_151);
x_157 = 0;
x_158 = lean_box(x_157);
x_159 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_156);
return x_159;
}
}
}
}
}
}
else
{
uint8_t x_172; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_172 = !lean_is_exclusive(x_12);
if (x_172 == 0)
{
return x_12;
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_173 = lean_ctor_get(x_12, 0);
x_174 = lean_ctor_get(x_12, 1);
lean_inc(x_174);
lean_inc(x_173);
lean_dec(x_12);
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_173);
lean_ctor_set(x_175, 1, x_174);
return x_175;
}
}
}
}
lean_object* l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; uint8_t x_24; 
x_24 = x_6 < x_5;
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_7);
lean_ctor_set(x_25, 1, x_14);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_26 = lean_array_uget(x_4, x_6);
x_27 = lean_ctor_get(x_7, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_28 = x_7;
} else {
 lean_dec_ref(x_7);
 x_28 = lean_box(0);
}
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_27, 2);
lean_inc(x_31);
x_32 = lean_nat_dec_lt(x_30, x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_26);
lean_inc(x_3);
if (lean_is_scalar(x_28)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_28;
}
lean_ctor_set(x_33, 0, x_3);
lean_ctor_set(x_33, 1, x_27);
x_34 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_15 = x_34;
x_16 = x_14;
goto block_23;
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_27);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_36 = lean_ctor_get(x_27, 2);
lean_dec(x_36);
x_37 = lean_ctor_get(x_27, 1);
lean_dec(x_37);
x_38 = lean_ctor_get(x_27, 0);
lean_dec(x_38);
x_39 = lean_array_fget(x_29, x_30);
x_40 = lean_unbox(x_39);
lean_dec(x_39);
x_41 = lean_unsigned_to_nat(1u);
x_42 = lean_nat_add(x_30, x_41);
lean_dec(x_30);
lean_ctor_set(x_27, 1, x_42);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_26);
x_43 = l_Lean_Meta_inferType(x_26, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l_Lean_BinderInfo_isInstImplicit(x_40);
if (x_46 == 0)
{
lean_object* x_47; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_26);
x_47 = l_Lean_Meta_instantiateMVars(x_26, x_10, x_11, x_12, x_13, x_45);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = l_Lean_Expr_isMVar(x_48);
lean_dec(x_48);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_44);
lean_dec(x_26);
lean_inc(x_3);
if (lean_is_scalar(x_28)) {
 x_51 = lean_alloc_ctor(0, 2, 0);
} else {
 x_51 = x_28;
}
lean_ctor_set(x_51, 0, x_3);
lean_ctor_set(x_51, 1, x_27);
x_52 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_15 = x_52;
x_16 = x_49;
goto block_23;
}
else
{
lean_object* x_53; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_44);
x_53 = l_Lean_Meta_isProp(x_44, x_10, x_11, x_12, x_13, x_49);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_unbox(x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_53, 1);
lean_inc(x_56);
lean_dec(x_53);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_44);
x_57 = l_Lean_Meta_isClass_x3f(x_44, x_10, x_11, x_12, x_13, x_56);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_44);
lean_dec(x_26);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
lean_inc(x_3);
if (lean_is_scalar(x_28)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_28;
}
lean_ctor_set(x_60, 0, x_3);
lean_ctor_set(x_60, 1, x_27);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_60);
x_15 = x_61;
x_16 = x_59;
goto block_23;
}
else
{
uint8_t x_62; 
x_62 = !lean_is_exclusive(x_58);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_58, 0);
lean_dec(x_63);
x_64 = lean_ctor_get(x_57, 1);
lean_inc(x_64);
lean_dec(x_57);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_1);
x_65 = l_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance(x_1, x_26, x_44, x_8, x_9, x_10, x_11, x_12, x_13, x_64);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; uint8_t x_67; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_unbox(x_66);
lean_dec(x_66);
if (x_67 == 0)
{
lean_object* x_68; uint8_t x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
lean_dec(x_65);
x_69 = 0;
x_70 = lean_box(x_69);
lean_ctor_set(x_58, 0, x_70);
if (lean_is_scalar(x_28)) {
 x_71 = lean_alloc_ctor(0, 2, 0);
} else {
 x_71 = x_28;
}
lean_ctor_set(x_71, 0, x_58);
lean_ctor_set(x_71, 1, x_27);
x_72 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_15 = x_72;
x_16 = x_68;
goto block_23;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_free_object(x_58);
x_73 = lean_ctor_get(x_65, 1);
lean_inc(x_73);
lean_dec(x_65);
lean_inc(x_3);
if (lean_is_scalar(x_28)) {
 x_74 = lean_alloc_ctor(0, 2, 0);
} else {
 x_74 = x_28;
}
lean_ctor_set(x_74, 0, x_3);
lean_ctor_set(x_74, 1, x_27);
x_75 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_75, 0, x_74);
x_15 = x_75;
x_16 = x_73;
goto block_23;
}
}
else
{
uint8_t x_76; 
lean_free_object(x_58);
lean_dec(x_27);
lean_dec(x_28);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_76 = !lean_is_exclusive(x_65);
if (x_76 == 0)
{
return x_65;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_65, 0);
x_78 = lean_ctor_get(x_65, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_65);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
else
{
lean_object* x_80; lean_object* x_81; 
lean_dec(x_58);
x_80 = lean_ctor_get(x_57, 1);
lean_inc(x_80);
lean_dec(x_57);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_1);
x_81 = l_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance(x_1, x_26, x_44, x_8, x_9, x_10, x_11, x_12, x_13, x_80);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; uint8_t x_83; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_unbox(x_82);
lean_dec(x_82);
if (x_83 == 0)
{
lean_object* x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_84 = lean_ctor_get(x_81, 1);
lean_inc(x_84);
lean_dec(x_81);
x_85 = 0;
x_86 = lean_box(x_85);
x_87 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_87, 0, x_86);
if (lean_is_scalar(x_28)) {
 x_88 = lean_alloc_ctor(0, 2, 0);
} else {
 x_88 = x_28;
}
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_27);
x_89 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_89, 0, x_88);
x_15 = x_89;
x_16 = x_84;
goto block_23;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_81, 1);
lean_inc(x_90);
lean_dec(x_81);
lean_inc(x_3);
if (lean_is_scalar(x_28)) {
 x_91 = lean_alloc_ctor(0, 2, 0);
} else {
 x_91 = x_28;
}
lean_ctor_set(x_91, 0, x_3);
lean_ctor_set(x_91, 1, x_27);
x_92 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_92, 0, x_91);
x_15 = x_92;
x_16 = x_90;
goto block_23;
}
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_27);
lean_dec(x_28);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_93 = lean_ctor_get(x_81, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_81, 1);
lean_inc(x_94);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_95 = x_81;
} else {
 lean_dec_ref(x_81);
 x_95 = lean_box(0);
}
if (lean_is_scalar(x_95)) {
 x_96 = lean_alloc_ctor(1, 2, 0);
} else {
 x_96 = x_95;
}
lean_ctor_set(x_96, 0, x_93);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
}
}
}
else
{
uint8_t x_97; 
lean_dec(x_44);
lean_dec(x_27);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_97 = !lean_is_exclusive(x_57);
if (x_97 == 0)
{
return x_57;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_57, 0);
x_99 = lean_ctor_get(x_57, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_57);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
else
{
lean_object* x_101; lean_object* x_102; 
x_101 = lean_ctor_get(x_53, 1);
lean_inc(x_101);
lean_dec(x_53);
lean_inc(x_2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_44);
x_102 = lean_apply_8(x_2, x_44, x_8, x_9, x_10, x_11, x_12, x_13, x_101);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; 
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; uint8_t x_114; lean_object* x_115; lean_object* x_139; lean_object* x_140; lean_object* x_141; uint8_t x_142; 
lean_dec(x_26);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = lean_box(0);
x_106 = lean_mk_string("Meta");
x_107 = lean_name_mk_string(x_105, x_106);
x_108 = lean_mk_string("Tactic");
x_109 = lean_name_mk_string(x_107, x_108);
x_110 = lean_mk_string("simp");
x_111 = lean_name_mk_string(x_109, x_110);
x_112 = lean_mk_string("discharge");
x_113 = lean_name_mk_string(x_111, x_112);
x_139 = lean_st_ref_get(x_13, x_104);
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_140, 3);
lean_inc(x_141);
lean_dec(x_140);
x_142 = lean_ctor_get_uint8(x_141, sizeof(void*)*1);
lean_dec(x_141);
if (x_142 == 0)
{
lean_object* x_143; uint8_t x_144; 
x_143 = lean_ctor_get(x_139, 1);
lean_inc(x_143);
lean_dec(x_139);
x_144 = 0;
x_114 = x_144;
x_115 = x_143;
goto block_138;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; uint8_t x_149; 
x_145 = lean_ctor_get(x_139, 1);
lean_inc(x_145);
lean_dec(x_139);
lean_inc(x_113);
x_146 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2(x_113, x_8, x_9, x_10, x_11, x_12, x_13, x_145);
x_147 = lean_ctor_get(x_146, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_146, 1);
lean_inc(x_148);
lean_dec(x_146);
x_149 = lean_unbox(x_147);
lean_dec(x_147);
x_114 = x_149;
x_115 = x_148;
goto block_138;
}
block_138:
{
if (x_114 == 0)
{
uint8_t x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
lean_dec(x_113);
lean_dec(x_44);
x_116 = 0;
x_117 = lean_box(x_116);
x_118 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_118, 0, x_117);
if (lean_is_scalar(x_28)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_28;
}
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_27);
x_120 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_120, 0, x_119);
x_15 = x_120;
x_16 = x_115;
goto block_23;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; uint8_t x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_121 = lean_mk_string("");
x_122 = l_Lean_stringToMessageData(x_121);
lean_dec(x_121);
lean_inc(x_1);
x_123 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_123, 0, x_1);
lean_inc(x_122);
x_124 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
x_125 = lean_mk_string(", failed to discharge hypotheses");
x_126 = l_Lean_stringToMessageData(x_125);
lean_dec(x_125);
x_127 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_127, 0, x_124);
lean_ctor_set(x_127, 1, x_126);
x_128 = l_Lean_indentExpr(x_44);
x_129 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_129, 0, x_127);
lean_ctor_set(x_129, 1, x_128);
x_130 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_122);
x_131 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1(x_113, x_130, x_8, x_9, x_10, x_11, x_12, x_13, x_115);
x_132 = lean_ctor_get(x_131, 1);
lean_inc(x_132);
lean_dec(x_131);
x_133 = 0;
x_134 = lean_box(x_133);
x_135 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_135, 0, x_134);
if (lean_is_scalar(x_28)) {
 x_136 = lean_alloc_ctor(0, 2, 0);
} else {
 x_136 = x_28;
}
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_27);
x_137 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_137, 0, x_136);
x_15 = x_137;
x_16 = x_132;
goto block_23;
}
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_150 = lean_ctor_get(x_102, 1);
lean_inc(x_150);
lean_dec(x_102);
x_151 = lean_ctor_get(x_103, 0);
lean_inc(x_151);
if (lean_is_exclusive(x_103)) {
 lean_ctor_release(x_103, 0);
 x_152 = x_103;
} else {
 lean_dec_ref(x_103);
 x_152 = lean_box(0);
}
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_153 = l_Lean_Meta_isExprDefEq(x_26, x_151, x_10, x_11, x_12, x_13, x_150);
if (lean_obj_tag(x_153) == 0)
{
lean_object* x_154; uint8_t x_155; 
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
x_155 = lean_unbox(x_154);
lean_dec(x_154);
if (x_155 == 0)
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; uint8_t x_166; lean_object* x_167; lean_object* x_191; lean_object* x_192; lean_object* x_193; uint8_t x_194; 
x_156 = lean_ctor_get(x_153, 1);
lean_inc(x_156);
lean_dec(x_153);
x_157 = lean_box(0);
x_158 = lean_mk_string("Meta");
x_159 = lean_name_mk_string(x_157, x_158);
x_160 = lean_mk_string("Tactic");
x_161 = lean_name_mk_string(x_159, x_160);
x_162 = lean_mk_string("simp");
x_163 = lean_name_mk_string(x_161, x_162);
x_164 = lean_mk_string("discharge");
x_165 = lean_name_mk_string(x_163, x_164);
x_191 = lean_st_ref_get(x_13, x_156);
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_192, 3);
lean_inc(x_193);
lean_dec(x_192);
x_194 = lean_ctor_get_uint8(x_193, sizeof(void*)*1);
lean_dec(x_193);
if (x_194 == 0)
{
lean_object* x_195; uint8_t x_196; 
x_195 = lean_ctor_get(x_191, 1);
lean_inc(x_195);
lean_dec(x_191);
x_196 = 0;
x_166 = x_196;
x_167 = x_195;
goto block_190;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; uint8_t x_201; 
x_197 = lean_ctor_get(x_191, 1);
lean_inc(x_197);
lean_dec(x_191);
lean_inc(x_165);
x_198 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2(x_165, x_8, x_9, x_10, x_11, x_12, x_13, x_197);
x_199 = lean_ctor_get(x_198, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_198, 1);
lean_inc(x_200);
lean_dec(x_198);
x_201 = lean_unbox(x_199);
lean_dec(x_199);
x_166 = x_201;
x_167 = x_200;
goto block_190;
}
block_190:
{
if (x_166 == 0)
{
uint8_t x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
lean_dec(x_165);
lean_dec(x_44);
x_168 = 0;
x_169 = lean_box(x_168);
if (lean_is_scalar(x_152)) {
 x_170 = lean_alloc_ctor(1, 1, 0);
} else {
 x_170 = x_152;
}
lean_ctor_set(x_170, 0, x_169);
if (lean_is_scalar(x_28)) {
 x_171 = lean_alloc_ctor(0, 2, 0);
} else {
 x_171 = x_28;
}
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_27);
x_172 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_172, 0, x_171);
x_15 = x_172;
x_16 = x_167;
goto block_23;
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; uint8_t x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_173 = lean_mk_string("");
x_174 = l_Lean_stringToMessageData(x_173);
lean_dec(x_173);
lean_inc(x_1);
x_175 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_175, 0, x_1);
lean_inc(x_174);
x_176 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_176, 0, x_174);
lean_ctor_set(x_176, 1, x_175);
x_177 = lean_mk_string(", failed to assign proof");
x_178 = l_Lean_stringToMessageData(x_177);
lean_dec(x_177);
x_179 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_179, 0, x_176);
lean_ctor_set(x_179, 1, x_178);
x_180 = l_Lean_indentExpr(x_44);
x_181 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set(x_181, 1, x_180);
x_182 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_174);
x_183 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1(x_165, x_182, x_8, x_9, x_10, x_11, x_12, x_13, x_167);
x_184 = lean_ctor_get(x_183, 1);
lean_inc(x_184);
lean_dec(x_183);
x_185 = 0;
x_186 = lean_box(x_185);
if (lean_is_scalar(x_152)) {
 x_187 = lean_alloc_ctor(1, 1, 0);
} else {
 x_187 = x_152;
}
lean_ctor_set(x_187, 0, x_186);
if (lean_is_scalar(x_28)) {
 x_188 = lean_alloc_ctor(0, 2, 0);
} else {
 x_188 = x_28;
}
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_27);
x_189 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_189, 0, x_188);
x_15 = x_189;
x_16 = x_184;
goto block_23;
}
}
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; 
lean_dec(x_152);
lean_dec(x_44);
x_202 = lean_ctor_get(x_153, 1);
lean_inc(x_202);
lean_dec(x_153);
lean_inc(x_3);
if (lean_is_scalar(x_28)) {
 x_203 = lean_alloc_ctor(0, 2, 0);
} else {
 x_203 = x_28;
}
lean_ctor_set(x_203, 0, x_3);
lean_ctor_set(x_203, 1, x_27);
x_204 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_204, 0, x_203);
x_15 = x_204;
x_16 = x_202;
goto block_23;
}
}
else
{
uint8_t x_205; 
lean_dec(x_152);
lean_dec(x_44);
lean_dec(x_27);
lean_dec(x_28);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_205 = !lean_is_exclusive(x_153);
if (x_205 == 0)
{
return x_153;
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_206 = lean_ctor_get(x_153, 0);
x_207 = lean_ctor_get(x_153, 1);
lean_inc(x_207);
lean_inc(x_206);
lean_dec(x_153);
x_208 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_208, 0, x_206);
lean_ctor_set(x_208, 1, x_207);
return x_208;
}
}
}
}
else
{
uint8_t x_209; 
lean_dec(x_44);
lean_dec(x_27);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_209 = !lean_is_exclusive(x_102);
if (x_209 == 0)
{
return x_102;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_210 = lean_ctor_get(x_102, 0);
x_211 = lean_ctor_get(x_102, 1);
lean_inc(x_211);
lean_inc(x_210);
lean_dec(x_102);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_210);
lean_ctor_set(x_212, 1, x_211);
return x_212;
}
}
}
}
else
{
uint8_t x_213; 
lean_dec(x_44);
lean_dec(x_27);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_213 = !lean_is_exclusive(x_53);
if (x_213 == 0)
{
return x_53;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_214 = lean_ctor_get(x_53, 0);
x_215 = lean_ctor_get(x_53, 1);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_53);
x_216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_216, 0, x_214);
lean_ctor_set(x_216, 1, x_215);
return x_216;
}
}
}
}
else
{
uint8_t x_217; 
lean_dec(x_44);
lean_dec(x_27);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_217 = !lean_is_exclusive(x_47);
if (x_217 == 0)
{
return x_47;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_218 = lean_ctor_get(x_47, 0);
x_219 = lean_ctor_get(x_47, 1);
lean_inc(x_219);
lean_inc(x_218);
lean_dec(x_47);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_218);
lean_ctor_set(x_220, 1, x_219);
return x_220;
}
}
}
else
{
lean_object* x_221; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_1);
x_221 = l_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance(x_1, x_26, x_44, x_8, x_9, x_10, x_11, x_12, x_13, x_45);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; uint8_t x_223; 
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_unbox(x_222);
lean_dec(x_222);
if (x_223 == 0)
{
lean_object* x_224; uint8_t x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_224 = lean_ctor_get(x_221, 1);
lean_inc(x_224);
lean_dec(x_221);
x_225 = 0;
x_226 = lean_box(x_225);
x_227 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_227, 0, x_226);
if (lean_is_scalar(x_28)) {
 x_228 = lean_alloc_ctor(0, 2, 0);
} else {
 x_228 = x_28;
}
lean_ctor_set(x_228, 0, x_227);
lean_ctor_set(x_228, 1, x_27);
x_229 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_229, 0, x_228);
x_15 = x_229;
x_16 = x_224;
goto block_23;
}
else
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_230 = lean_ctor_get(x_221, 1);
lean_inc(x_230);
lean_dec(x_221);
lean_inc(x_3);
if (lean_is_scalar(x_28)) {
 x_231 = lean_alloc_ctor(0, 2, 0);
} else {
 x_231 = x_28;
}
lean_ctor_set(x_231, 0, x_3);
lean_ctor_set(x_231, 1, x_27);
x_232 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_232, 0, x_231);
x_15 = x_232;
x_16 = x_230;
goto block_23;
}
}
else
{
uint8_t x_233; 
lean_dec(x_27);
lean_dec(x_28);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_233 = !lean_is_exclusive(x_221);
if (x_233 == 0)
{
return x_221;
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_234 = lean_ctor_get(x_221, 0);
x_235 = lean_ctor_get(x_221, 1);
lean_inc(x_235);
lean_inc(x_234);
lean_dec(x_221);
x_236 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_236, 0, x_234);
lean_ctor_set(x_236, 1, x_235);
return x_236;
}
}
}
}
else
{
uint8_t x_237; 
lean_dec(x_27);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_237 = !lean_is_exclusive(x_43);
if (x_237 == 0)
{
return x_43;
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; 
x_238 = lean_ctor_get(x_43, 0);
x_239 = lean_ctor_get(x_43, 1);
lean_inc(x_239);
lean_inc(x_238);
lean_dec(x_43);
x_240 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_240, 0, x_238);
lean_ctor_set(x_240, 1, x_239);
return x_240;
}
}
}
else
{
lean_object* x_241; uint8_t x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
lean_dec(x_27);
x_241 = lean_array_fget(x_29, x_30);
x_242 = lean_unbox(x_241);
lean_dec(x_241);
x_243 = lean_unsigned_to_nat(1u);
x_244 = lean_nat_add(x_30, x_243);
lean_dec(x_30);
x_245 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_245, 0, x_29);
lean_ctor_set(x_245, 1, x_244);
lean_ctor_set(x_245, 2, x_31);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_26);
x_246 = l_Lean_Meta_inferType(x_26, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_246) == 0)
{
lean_object* x_247; lean_object* x_248; uint8_t x_249; 
x_247 = lean_ctor_get(x_246, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_246, 1);
lean_inc(x_248);
lean_dec(x_246);
x_249 = l_Lean_BinderInfo_isInstImplicit(x_242);
if (x_249 == 0)
{
lean_object* x_250; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_26);
x_250 = l_Lean_Meta_instantiateMVars(x_26, x_10, x_11, x_12, x_13, x_248);
if (lean_obj_tag(x_250) == 0)
{
lean_object* x_251; lean_object* x_252; uint8_t x_253; 
x_251 = lean_ctor_get(x_250, 0);
lean_inc(x_251);
x_252 = lean_ctor_get(x_250, 1);
lean_inc(x_252);
lean_dec(x_250);
x_253 = l_Lean_Expr_isMVar(x_251);
lean_dec(x_251);
if (x_253 == 0)
{
lean_object* x_254; lean_object* x_255; 
lean_dec(x_247);
lean_dec(x_26);
lean_inc(x_3);
if (lean_is_scalar(x_28)) {
 x_254 = lean_alloc_ctor(0, 2, 0);
} else {
 x_254 = x_28;
}
lean_ctor_set(x_254, 0, x_3);
lean_ctor_set(x_254, 1, x_245);
x_255 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_255, 0, x_254);
x_15 = x_255;
x_16 = x_252;
goto block_23;
}
else
{
lean_object* x_256; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_247);
x_256 = l_Lean_Meta_isProp(x_247, x_10, x_11, x_12, x_13, x_252);
if (lean_obj_tag(x_256) == 0)
{
lean_object* x_257; uint8_t x_258; 
x_257 = lean_ctor_get(x_256, 0);
lean_inc(x_257);
x_258 = lean_unbox(x_257);
lean_dec(x_257);
if (x_258 == 0)
{
lean_object* x_259; lean_object* x_260; 
x_259 = lean_ctor_get(x_256, 1);
lean_inc(x_259);
lean_dec(x_256);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_247);
x_260 = l_Lean_Meta_isClass_x3f(x_247, x_10, x_11, x_12, x_13, x_259);
if (lean_obj_tag(x_260) == 0)
{
lean_object* x_261; 
x_261 = lean_ctor_get(x_260, 0);
lean_inc(x_261);
if (lean_obj_tag(x_261) == 0)
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; 
lean_dec(x_247);
lean_dec(x_26);
x_262 = lean_ctor_get(x_260, 1);
lean_inc(x_262);
lean_dec(x_260);
lean_inc(x_3);
if (lean_is_scalar(x_28)) {
 x_263 = lean_alloc_ctor(0, 2, 0);
} else {
 x_263 = x_28;
}
lean_ctor_set(x_263, 0, x_3);
lean_ctor_set(x_263, 1, x_245);
x_264 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_264, 0, x_263);
x_15 = x_264;
x_16 = x_262;
goto block_23;
}
else
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; 
if (lean_is_exclusive(x_261)) {
 lean_ctor_release(x_261, 0);
 x_265 = x_261;
} else {
 lean_dec_ref(x_261);
 x_265 = lean_box(0);
}
x_266 = lean_ctor_get(x_260, 1);
lean_inc(x_266);
lean_dec(x_260);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_1);
x_267 = l_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance(x_1, x_26, x_247, x_8, x_9, x_10, x_11, x_12, x_13, x_266);
if (lean_obj_tag(x_267) == 0)
{
lean_object* x_268; uint8_t x_269; 
x_268 = lean_ctor_get(x_267, 0);
lean_inc(x_268);
x_269 = lean_unbox(x_268);
lean_dec(x_268);
if (x_269 == 0)
{
lean_object* x_270; uint8_t x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_270 = lean_ctor_get(x_267, 1);
lean_inc(x_270);
lean_dec(x_267);
x_271 = 0;
x_272 = lean_box(x_271);
if (lean_is_scalar(x_265)) {
 x_273 = lean_alloc_ctor(1, 1, 0);
} else {
 x_273 = x_265;
}
lean_ctor_set(x_273, 0, x_272);
if (lean_is_scalar(x_28)) {
 x_274 = lean_alloc_ctor(0, 2, 0);
} else {
 x_274 = x_28;
}
lean_ctor_set(x_274, 0, x_273);
lean_ctor_set(x_274, 1, x_245);
x_275 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_275, 0, x_274);
x_15 = x_275;
x_16 = x_270;
goto block_23;
}
else
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; 
lean_dec(x_265);
x_276 = lean_ctor_get(x_267, 1);
lean_inc(x_276);
lean_dec(x_267);
lean_inc(x_3);
if (lean_is_scalar(x_28)) {
 x_277 = lean_alloc_ctor(0, 2, 0);
} else {
 x_277 = x_28;
}
lean_ctor_set(x_277, 0, x_3);
lean_ctor_set(x_277, 1, x_245);
x_278 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_278, 0, x_277);
x_15 = x_278;
x_16 = x_276;
goto block_23;
}
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
lean_dec(x_265);
lean_dec(x_245);
lean_dec(x_28);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_279 = lean_ctor_get(x_267, 0);
lean_inc(x_279);
x_280 = lean_ctor_get(x_267, 1);
lean_inc(x_280);
if (lean_is_exclusive(x_267)) {
 lean_ctor_release(x_267, 0);
 lean_ctor_release(x_267, 1);
 x_281 = x_267;
} else {
 lean_dec_ref(x_267);
 x_281 = lean_box(0);
}
if (lean_is_scalar(x_281)) {
 x_282 = lean_alloc_ctor(1, 2, 0);
} else {
 x_282 = x_281;
}
lean_ctor_set(x_282, 0, x_279);
lean_ctor_set(x_282, 1, x_280);
return x_282;
}
}
}
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; 
lean_dec(x_247);
lean_dec(x_245);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_283 = lean_ctor_get(x_260, 0);
lean_inc(x_283);
x_284 = lean_ctor_get(x_260, 1);
lean_inc(x_284);
if (lean_is_exclusive(x_260)) {
 lean_ctor_release(x_260, 0);
 lean_ctor_release(x_260, 1);
 x_285 = x_260;
} else {
 lean_dec_ref(x_260);
 x_285 = lean_box(0);
}
if (lean_is_scalar(x_285)) {
 x_286 = lean_alloc_ctor(1, 2, 0);
} else {
 x_286 = x_285;
}
lean_ctor_set(x_286, 0, x_283);
lean_ctor_set(x_286, 1, x_284);
return x_286;
}
}
else
{
lean_object* x_287; lean_object* x_288; 
x_287 = lean_ctor_get(x_256, 1);
lean_inc(x_287);
lean_dec(x_256);
lean_inc(x_2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_247);
x_288 = lean_apply_8(x_2, x_247, x_8, x_9, x_10, x_11, x_12, x_13, x_287);
if (lean_obj_tag(x_288) == 0)
{
lean_object* x_289; 
x_289 = lean_ctor_get(x_288, 0);
lean_inc(x_289);
if (lean_obj_tag(x_289) == 0)
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; uint8_t x_300; lean_object* x_301; lean_object* x_325; lean_object* x_326; lean_object* x_327; uint8_t x_328; 
lean_dec(x_26);
x_290 = lean_ctor_get(x_288, 1);
lean_inc(x_290);
lean_dec(x_288);
x_291 = lean_box(0);
x_292 = lean_mk_string("Meta");
x_293 = lean_name_mk_string(x_291, x_292);
x_294 = lean_mk_string("Tactic");
x_295 = lean_name_mk_string(x_293, x_294);
x_296 = lean_mk_string("simp");
x_297 = lean_name_mk_string(x_295, x_296);
x_298 = lean_mk_string("discharge");
x_299 = lean_name_mk_string(x_297, x_298);
x_325 = lean_st_ref_get(x_13, x_290);
x_326 = lean_ctor_get(x_325, 0);
lean_inc(x_326);
x_327 = lean_ctor_get(x_326, 3);
lean_inc(x_327);
lean_dec(x_326);
x_328 = lean_ctor_get_uint8(x_327, sizeof(void*)*1);
lean_dec(x_327);
if (x_328 == 0)
{
lean_object* x_329; uint8_t x_330; 
x_329 = lean_ctor_get(x_325, 1);
lean_inc(x_329);
lean_dec(x_325);
x_330 = 0;
x_300 = x_330;
x_301 = x_329;
goto block_324;
}
else
{
lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; uint8_t x_335; 
x_331 = lean_ctor_get(x_325, 1);
lean_inc(x_331);
lean_dec(x_325);
lean_inc(x_299);
x_332 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2(x_299, x_8, x_9, x_10, x_11, x_12, x_13, x_331);
x_333 = lean_ctor_get(x_332, 0);
lean_inc(x_333);
x_334 = lean_ctor_get(x_332, 1);
lean_inc(x_334);
lean_dec(x_332);
x_335 = lean_unbox(x_333);
lean_dec(x_333);
x_300 = x_335;
x_301 = x_334;
goto block_324;
}
block_324:
{
if (x_300 == 0)
{
uint8_t x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
lean_dec(x_299);
lean_dec(x_247);
x_302 = 0;
x_303 = lean_box(x_302);
x_304 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_304, 0, x_303);
if (lean_is_scalar(x_28)) {
 x_305 = lean_alloc_ctor(0, 2, 0);
} else {
 x_305 = x_28;
}
lean_ctor_set(x_305, 0, x_304);
lean_ctor_set(x_305, 1, x_245);
x_306 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_306, 0, x_305);
x_15 = x_306;
x_16 = x_301;
goto block_23;
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; uint8_t x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; 
x_307 = lean_mk_string("");
x_308 = l_Lean_stringToMessageData(x_307);
lean_dec(x_307);
lean_inc(x_1);
x_309 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_309, 0, x_1);
lean_inc(x_308);
x_310 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_310, 0, x_308);
lean_ctor_set(x_310, 1, x_309);
x_311 = lean_mk_string(", failed to discharge hypotheses");
x_312 = l_Lean_stringToMessageData(x_311);
lean_dec(x_311);
x_313 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_313, 0, x_310);
lean_ctor_set(x_313, 1, x_312);
x_314 = l_Lean_indentExpr(x_247);
x_315 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_315, 0, x_313);
lean_ctor_set(x_315, 1, x_314);
x_316 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_316, 0, x_315);
lean_ctor_set(x_316, 1, x_308);
x_317 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1(x_299, x_316, x_8, x_9, x_10, x_11, x_12, x_13, x_301);
x_318 = lean_ctor_get(x_317, 1);
lean_inc(x_318);
lean_dec(x_317);
x_319 = 0;
x_320 = lean_box(x_319);
x_321 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_321, 0, x_320);
if (lean_is_scalar(x_28)) {
 x_322 = lean_alloc_ctor(0, 2, 0);
} else {
 x_322 = x_28;
}
lean_ctor_set(x_322, 0, x_321);
lean_ctor_set(x_322, 1, x_245);
x_323 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_323, 0, x_322);
x_15 = x_323;
x_16 = x_318;
goto block_23;
}
}
}
else
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_336 = lean_ctor_get(x_288, 1);
lean_inc(x_336);
lean_dec(x_288);
x_337 = lean_ctor_get(x_289, 0);
lean_inc(x_337);
if (lean_is_exclusive(x_289)) {
 lean_ctor_release(x_289, 0);
 x_338 = x_289;
} else {
 lean_dec_ref(x_289);
 x_338 = lean_box(0);
}
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_339 = l_Lean_Meta_isExprDefEq(x_26, x_337, x_10, x_11, x_12, x_13, x_336);
if (lean_obj_tag(x_339) == 0)
{
lean_object* x_340; uint8_t x_341; 
x_340 = lean_ctor_get(x_339, 0);
lean_inc(x_340);
x_341 = lean_unbox(x_340);
lean_dec(x_340);
if (x_341 == 0)
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; uint8_t x_352; lean_object* x_353; lean_object* x_377; lean_object* x_378; lean_object* x_379; uint8_t x_380; 
x_342 = lean_ctor_get(x_339, 1);
lean_inc(x_342);
lean_dec(x_339);
x_343 = lean_box(0);
x_344 = lean_mk_string("Meta");
x_345 = lean_name_mk_string(x_343, x_344);
x_346 = lean_mk_string("Tactic");
x_347 = lean_name_mk_string(x_345, x_346);
x_348 = lean_mk_string("simp");
x_349 = lean_name_mk_string(x_347, x_348);
x_350 = lean_mk_string("discharge");
x_351 = lean_name_mk_string(x_349, x_350);
x_377 = lean_st_ref_get(x_13, x_342);
x_378 = lean_ctor_get(x_377, 0);
lean_inc(x_378);
x_379 = lean_ctor_get(x_378, 3);
lean_inc(x_379);
lean_dec(x_378);
x_380 = lean_ctor_get_uint8(x_379, sizeof(void*)*1);
lean_dec(x_379);
if (x_380 == 0)
{
lean_object* x_381; uint8_t x_382; 
x_381 = lean_ctor_get(x_377, 1);
lean_inc(x_381);
lean_dec(x_377);
x_382 = 0;
x_352 = x_382;
x_353 = x_381;
goto block_376;
}
else
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; uint8_t x_387; 
x_383 = lean_ctor_get(x_377, 1);
lean_inc(x_383);
lean_dec(x_377);
lean_inc(x_351);
x_384 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2(x_351, x_8, x_9, x_10, x_11, x_12, x_13, x_383);
x_385 = lean_ctor_get(x_384, 0);
lean_inc(x_385);
x_386 = lean_ctor_get(x_384, 1);
lean_inc(x_386);
lean_dec(x_384);
x_387 = lean_unbox(x_385);
lean_dec(x_385);
x_352 = x_387;
x_353 = x_386;
goto block_376;
}
block_376:
{
if (x_352 == 0)
{
uint8_t x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; 
lean_dec(x_351);
lean_dec(x_247);
x_354 = 0;
x_355 = lean_box(x_354);
if (lean_is_scalar(x_338)) {
 x_356 = lean_alloc_ctor(1, 1, 0);
} else {
 x_356 = x_338;
}
lean_ctor_set(x_356, 0, x_355);
if (lean_is_scalar(x_28)) {
 x_357 = lean_alloc_ctor(0, 2, 0);
} else {
 x_357 = x_28;
}
lean_ctor_set(x_357, 0, x_356);
lean_ctor_set(x_357, 1, x_245);
x_358 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_358, 0, x_357);
x_15 = x_358;
x_16 = x_353;
goto block_23;
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; uint8_t x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; 
x_359 = lean_mk_string("");
x_360 = l_Lean_stringToMessageData(x_359);
lean_dec(x_359);
lean_inc(x_1);
x_361 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_361, 0, x_1);
lean_inc(x_360);
x_362 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_362, 0, x_360);
lean_ctor_set(x_362, 1, x_361);
x_363 = lean_mk_string(", failed to assign proof");
x_364 = l_Lean_stringToMessageData(x_363);
lean_dec(x_363);
x_365 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_365, 0, x_362);
lean_ctor_set(x_365, 1, x_364);
x_366 = l_Lean_indentExpr(x_247);
x_367 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_367, 0, x_365);
lean_ctor_set(x_367, 1, x_366);
x_368 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_368, 0, x_367);
lean_ctor_set(x_368, 1, x_360);
x_369 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1(x_351, x_368, x_8, x_9, x_10, x_11, x_12, x_13, x_353);
x_370 = lean_ctor_get(x_369, 1);
lean_inc(x_370);
lean_dec(x_369);
x_371 = 0;
x_372 = lean_box(x_371);
if (lean_is_scalar(x_338)) {
 x_373 = lean_alloc_ctor(1, 1, 0);
} else {
 x_373 = x_338;
}
lean_ctor_set(x_373, 0, x_372);
if (lean_is_scalar(x_28)) {
 x_374 = lean_alloc_ctor(0, 2, 0);
} else {
 x_374 = x_28;
}
lean_ctor_set(x_374, 0, x_373);
lean_ctor_set(x_374, 1, x_245);
x_375 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_375, 0, x_374);
x_15 = x_375;
x_16 = x_370;
goto block_23;
}
}
}
else
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; 
lean_dec(x_338);
lean_dec(x_247);
x_388 = lean_ctor_get(x_339, 1);
lean_inc(x_388);
lean_dec(x_339);
lean_inc(x_3);
if (lean_is_scalar(x_28)) {
 x_389 = lean_alloc_ctor(0, 2, 0);
} else {
 x_389 = x_28;
}
lean_ctor_set(x_389, 0, x_3);
lean_ctor_set(x_389, 1, x_245);
x_390 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_390, 0, x_389);
x_15 = x_390;
x_16 = x_388;
goto block_23;
}
}
else
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; 
lean_dec(x_338);
lean_dec(x_247);
lean_dec(x_245);
lean_dec(x_28);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_391 = lean_ctor_get(x_339, 0);
lean_inc(x_391);
x_392 = lean_ctor_get(x_339, 1);
lean_inc(x_392);
if (lean_is_exclusive(x_339)) {
 lean_ctor_release(x_339, 0);
 lean_ctor_release(x_339, 1);
 x_393 = x_339;
} else {
 lean_dec_ref(x_339);
 x_393 = lean_box(0);
}
if (lean_is_scalar(x_393)) {
 x_394 = lean_alloc_ctor(1, 2, 0);
} else {
 x_394 = x_393;
}
lean_ctor_set(x_394, 0, x_391);
lean_ctor_set(x_394, 1, x_392);
return x_394;
}
}
}
else
{
lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; 
lean_dec(x_247);
lean_dec(x_245);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_395 = lean_ctor_get(x_288, 0);
lean_inc(x_395);
x_396 = lean_ctor_get(x_288, 1);
lean_inc(x_396);
if (lean_is_exclusive(x_288)) {
 lean_ctor_release(x_288, 0);
 lean_ctor_release(x_288, 1);
 x_397 = x_288;
} else {
 lean_dec_ref(x_288);
 x_397 = lean_box(0);
}
if (lean_is_scalar(x_397)) {
 x_398 = lean_alloc_ctor(1, 2, 0);
} else {
 x_398 = x_397;
}
lean_ctor_set(x_398, 0, x_395);
lean_ctor_set(x_398, 1, x_396);
return x_398;
}
}
}
else
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; 
lean_dec(x_247);
lean_dec(x_245);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_399 = lean_ctor_get(x_256, 0);
lean_inc(x_399);
x_400 = lean_ctor_get(x_256, 1);
lean_inc(x_400);
if (lean_is_exclusive(x_256)) {
 lean_ctor_release(x_256, 0);
 lean_ctor_release(x_256, 1);
 x_401 = x_256;
} else {
 lean_dec_ref(x_256);
 x_401 = lean_box(0);
}
if (lean_is_scalar(x_401)) {
 x_402 = lean_alloc_ctor(1, 2, 0);
} else {
 x_402 = x_401;
}
lean_ctor_set(x_402, 0, x_399);
lean_ctor_set(x_402, 1, x_400);
return x_402;
}
}
}
else
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; 
lean_dec(x_247);
lean_dec(x_245);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_403 = lean_ctor_get(x_250, 0);
lean_inc(x_403);
x_404 = lean_ctor_get(x_250, 1);
lean_inc(x_404);
if (lean_is_exclusive(x_250)) {
 lean_ctor_release(x_250, 0);
 lean_ctor_release(x_250, 1);
 x_405 = x_250;
} else {
 lean_dec_ref(x_250);
 x_405 = lean_box(0);
}
if (lean_is_scalar(x_405)) {
 x_406 = lean_alloc_ctor(1, 2, 0);
} else {
 x_406 = x_405;
}
lean_ctor_set(x_406, 0, x_403);
lean_ctor_set(x_406, 1, x_404);
return x_406;
}
}
else
{
lean_object* x_407; 
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_1);
x_407 = l_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance(x_1, x_26, x_247, x_8, x_9, x_10, x_11, x_12, x_13, x_248);
if (lean_obj_tag(x_407) == 0)
{
lean_object* x_408; uint8_t x_409; 
x_408 = lean_ctor_get(x_407, 0);
lean_inc(x_408);
x_409 = lean_unbox(x_408);
lean_dec(x_408);
if (x_409 == 0)
{
lean_object* x_410; uint8_t x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; 
x_410 = lean_ctor_get(x_407, 1);
lean_inc(x_410);
lean_dec(x_407);
x_411 = 0;
x_412 = lean_box(x_411);
x_413 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_413, 0, x_412);
if (lean_is_scalar(x_28)) {
 x_414 = lean_alloc_ctor(0, 2, 0);
} else {
 x_414 = x_28;
}
lean_ctor_set(x_414, 0, x_413);
lean_ctor_set(x_414, 1, x_245);
x_415 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_415, 0, x_414);
x_15 = x_415;
x_16 = x_410;
goto block_23;
}
else
{
lean_object* x_416; lean_object* x_417; lean_object* x_418; 
x_416 = lean_ctor_get(x_407, 1);
lean_inc(x_416);
lean_dec(x_407);
lean_inc(x_3);
if (lean_is_scalar(x_28)) {
 x_417 = lean_alloc_ctor(0, 2, 0);
} else {
 x_417 = x_28;
}
lean_ctor_set(x_417, 0, x_3);
lean_ctor_set(x_417, 1, x_245);
x_418 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_418, 0, x_417);
x_15 = x_418;
x_16 = x_416;
goto block_23;
}
}
else
{
lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; 
lean_dec(x_245);
lean_dec(x_28);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_419 = lean_ctor_get(x_407, 0);
lean_inc(x_419);
x_420 = lean_ctor_get(x_407, 1);
lean_inc(x_420);
if (lean_is_exclusive(x_407)) {
 lean_ctor_release(x_407, 0);
 lean_ctor_release(x_407, 1);
 x_421 = x_407;
} else {
 lean_dec_ref(x_407);
 x_421 = lean_box(0);
}
if (lean_is_scalar(x_421)) {
 x_422 = lean_alloc_ctor(1, 2, 0);
} else {
 x_422 = x_421;
}
lean_ctor_set(x_422, 0, x_419);
lean_ctor_set(x_422, 1, x_420);
return x_422;
}
}
}
else
{
lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; 
lean_dec(x_245);
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_423 = lean_ctor_get(x_246, 0);
lean_inc(x_423);
x_424 = lean_ctor_get(x_246, 1);
lean_inc(x_424);
if (lean_is_exclusive(x_246)) {
 lean_ctor_release(x_246, 0);
 lean_ctor_release(x_246, 1);
 x_425 = x_246;
} else {
 lean_dec_ref(x_246);
 x_425 = lean_box(0);
}
if (lean_is_scalar(x_425)) {
 x_426 = lean_alloc_ctor(1, 2, 0);
} else {
 x_426 = x_425;
}
lean_ctor_set(x_426, 0, x_423);
lean_ctor_set(x_426, 1, x_424);
return x_426;
}
}
}
}
block_23:
{
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
else
{
lean_object* x_19; size_t x_20; size_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
lean_dec(x_15);
x_20 = 1;
x_21 = x_6 + x_20;
x_6 = x_21;
x_7 = x_19;
x_14 = x_16;
goto _start;
}
}
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_9 = 1;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; lean_object* x_20; 
x_12 = lean_array_get_size(x_3);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_toSubarray___rarg(x_3, x_13, x_12);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_array_get_size(x_2);
x_18 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_19 = 0;
x_20 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__1(x_1, x_4, x_15, x_2, x_18, x_19, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_20);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_20, 0);
lean_dec(x_24);
x_25 = 1;
x_26 = lean_box(x_25);
lean_ctor_set(x_20, 0, x_26);
return x_20;
}
else
{
lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_20, 1);
lean_inc(x_27);
lean_dec(x_20);
x_28 = 1;
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_20);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_20, 0);
lean_dec(x_32);
x_33 = lean_ctor_get(x_22, 0);
lean_inc(x_33);
lean_dec(x_22);
lean_ctor_set(x_20, 0, x_33);
return x_20;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_20, 1);
lean_inc(x_34);
lean_dec(x_20);
x_35 = lean_ctor_get(x_22, 0);
lean_inc(x_35);
lean_dec(x_22);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
}
else
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_20);
if (x_37 == 0)
{
return x_20;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_20, 0);
x_39 = lean_ctor_get(x_20, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_20);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
size_t x_15; size_t x_16; lean_object* x_17; 
x_15 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_16 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_17 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_synthesizeArgs___spec__1(x_1, x_2, x_3, x_4, x_15, x_16, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_4);
return x_17;
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_Simp_synthesizeArgs___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Meta_Simp_synthesizeArgs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_Simp_synthesizeArgs(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
return x_12;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_inErasedSet_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_Simp_rewrite_inErasedSet_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewrite_inErasedSet_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewrite_tryLemma_x3f_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Meta_Simp_rewrite_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewrite_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_Simp_rewrite_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewrite_match__2___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_Meta_Simp_rewrite_inErasedSet(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 4);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
lean_dec(x_1);
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = l_Std_PersistentHashMap_contains___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__1(x_1, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Meta_Simp_rewrite_inErasedSet___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_Simp_rewrite_inErasedSet(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = lean_apply_7(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_apply_8(x_2, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___rarg), 9, 0);
return x_3;
}
}
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_apply_2(x_1, x_2, x_3);
x_10 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___rarg(x_9, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_SimpLemma_getValue(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_13 = lean_box(0);
x_14 = lean_mk_string("Meta");
x_15 = lean_name_mk_string(x_13, x_14);
x_16 = lean_mk_string("Tactic");
x_17 = lean_name_mk_string(x_15, x_16);
x_18 = lean_mk_string("simp");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = lean_mk_string("rewrite");
x_21 = lean_name_mk_string(x_19, x_20);
x_56 = lean_st_ref_get(x_11, x_12);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_57, 3);
lean_inc(x_58);
lean_dec(x_57);
x_59 = lean_ctor_get_uint8(x_58, sizeof(void*)*1);
lean_dec(x_58);
if (x_59 == 0)
{
lean_object* x_60; uint8_t x_61; 
x_60 = lean_ctor_get(x_56, 1);
lean_inc(x_60);
lean_dec(x_56);
x_61 = 0;
x_22 = x_61;
x_23 = x_60;
goto block_55;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_62 = lean_ctor_get(x_56, 1);
lean_inc(x_62);
lean_dec(x_56);
lean_inc(x_21);
x_63 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2(x_21, x_6, x_7, x_8, x_9, x_10, x_11, x_62);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_unbox(x_64);
lean_dec(x_64);
x_22 = x_66;
x_23 = x_65;
goto block_55;
}
block_55:
{
if (x_22 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_21);
lean_dec(x_4);
lean_dec(x_3);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_2);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_23);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_28 = lean_mk_string("");
x_29 = l_Lean_stringToMessageData(x_28);
lean_dec(x_28);
x_30 = l_Std_fmt___at_Lean_Meta_instToMessageDataSimpLemma___spec__1(x_3);
x_31 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_31, 0, x_30);
lean_inc(x_29);
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_mk_string(", ");
x_34 = l_Lean_stringToMessageData(x_33);
lean_dec(x_33);
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_36, 0, x_4);
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_mk_string(" ==> ");
x_39 = l_Lean_stringToMessageData(x_38);
lean_dec(x_38);
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_39);
lean_inc(x_2);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_2);
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_29);
x_44 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1(x_21, x_43, x_6, x_7, x_8, x_9, x_10, x_11, x_23);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_46 = lean_ctor_get(x_44, 0);
lean_dec(x_46);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_1);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_2);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_44, 0, x_49);
return x_44;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_50 = lean_ctor_get(x_44, 1);
lean_inc(x_50);
lean_dec(x_44);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_1);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_2);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_53, 0, x_52);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_50);
return x_54;
}
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = lean_ctor_get_uint8(x_3, sizeof(void*)*5 + 1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_5);
x_15 = lean_box(0);
x_16 = l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__3(x_1, x_2, x_3, x_4, x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = lean_expr_lt(x_2, x_4);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
lean_dec(x_1);
x_18 = lean_box(0);
x_19 = lean_mk_string("Meta");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_mk_string("Tactic");
x_22 = lean_name_mk_string(x_20, x_21);
x_23 = lean_mk_string("simp");
x_24 = lean_name_mk_string(x_22, x_23);
x_25 = lean_mk_string("rewrite");
x_26 = lean_name_mk_string(x_24, x_25);
x_52 = lean_st_ref_get(x_12, x_13);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_53, 3);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_ctor_get_uint8(x_54, sizeof(void*)*1);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; uint8_t x_57; 
x_56 = lean_ctor_get(x_52, 1);
lean_inc(x_56);
lean_dec(x_52);
x_57 = 0;
x_27 = x_57;
x_28 = x_56;
goto block_51;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_58 = lean_ctor_get(x_52, 1);
lean_inc(x_58);
lean_dec(x_52);
lean_inc(x_26);
x_59 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2(x_26, x_7, x_8, x_9, x_10, x_11, x_12, x_58);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = lean_unbox(x_60);
lean_dec(x_60);
x_27 = x_62;
x_28 = x_61;
goto block_51;
}
block_51:
{
if (x_27 == 0)
{
lean_object* x_29; 
lean_dec(x_26);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_5);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_30 = lean_mk_string("");
x_31 = l_Lean_stringToMessageData(x_30);
lean_dec(x_30);
x_32 = l_Std_fmt___at_Lean_Meta_instToMessageDataSimpLemma___spec__1(x_3);
x_33 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_33, 0, x_32);
lean_inc(x_31);
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_mk_string(", perm rejected ");
x_36 = l_Lean_stringToMessageData(x_35);
lean_dec(x_35);
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_38, 0, x_4);
x_39 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_mk_string(" ==> ");
x_41 = l_Lean_stringToMessageData(x_40);
lean_dec(x_40);
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_43, 0, x_2);
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_31);
x_46 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1(x_26, x_45, x_7, x_8, x_9, x_10, x_11, x_12, x_28);
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_46, 0);
lean_dec(x_48);
lean_ctor_set(x_46, 0, x_5);
return x_46;
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_49);
lean_dec(x_46);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_5);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
else
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_5);
x_63 = lean_box(0);
x_64 = l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__3(x_1, x_2, x_3, x_4, x_63, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_64;
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Lean_Expr_appArg_x21(x_1);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_15 = l_Lean_Meta_instantiateMVars(x_14, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = lean_expr_eqv(x_4, x_17);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_free_object(x_15);
x_20 = lean_box(0);
x_21 = l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__4(x_2, x_17, x_3, x_4, x_5, x_20, x_7, x_8, x_9, x_10, x_11, x_12, x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_21;
}
else
{
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_15, 0, x_5);
return x_15;
}
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_expr_eqv(x_4, x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_box(0);
x_26 = l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__4(x_2, x_22, x_3, x_4, x_5, x_25, x_7, x_8, x_9, x_10, x_11, x_12, x_23);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_26;
}
else
{
lean_object* x_27; 
lean_dec(x_22);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_5);
lean_ctor_set(x_27, 1, x_23);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_15);
if (x_28 == 0)
{
return x_15;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_15, 0);
x_30 = lean_ctor_get(x_15, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_15);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_mkAppN(x_1, x_2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_16 = l_Lean_Meta_instantiateMVars(x_15, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Meta_hasAssignableMVar(x_17, x_10, x_11, x_12, x_13, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_box(0);
x_24 = l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__5(x_3, x_17, x_4, x_5, x_6, x_23, x_8, x_9, x_10, x_11, x_12, x_13, x_22);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
lean_dec(x_17);
lean_dec(x_5);
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_19)) {
 lean_ctor_release(x_19, 0);
 lean_ctor_release(x_19, 1);
 x_26 = x_19;
} else {
 lean_dec_ref(x_19);
 x_26 = lean_box(0);
}
x_27 = lean_box(0);
x_28 = lean_mk_string("Meta");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Tactic");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("simp");
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("rewrite");
x_35 = lean_name_mk_string(x_33, x_34);
x_53 = lean_st_ref_get(x_13, x_25);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_54, 3);
lean_inc(x_55);
lean_dec(x_54);
x_56 = lean_ctor_get_uint8(x_55, sizeof(void*)*1);
lean_dec(x_55);
if (x_56 == 0)
{
lean_object* x_57; uint8_t x_58; 
x_57 = lean_ctor_get(x_53, 1);
lean_inc(x_57);
lean_dec(x_53);
x_58 = 0;
x_36 = x_58;
x_37 = x_57;
goto block_52;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_59 = lean_ctor_get(x_53, 1);
lean_inc(x_59);
lean_dec(x_53);
lean_inc(x_35);
x_60 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2(x_35, x_8, x_9, x_10, x_11, x_12, x_13, x_59);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = lean_unbox(x_61);
lean_dec(x_61);
x_36 = x_63;
x_37 = x_62;
goto block_52;
}
block_52:
{
if (x_36 == 0)
{
lean_object* x_38; 
lean_dec(x_35);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_4);
if (lean_is_scalar(x_26)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_26;
}
lean_ctor_set(x_38, 0, x_6);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
lean_dec(x_26);
x_39 = lean_mk_string("");
x_40 = l_Lean_stringToMessageData(x_39);
lean_dec(x_39);
x_41 = l_Std_fmt___at_Lean_Meta_instToMessageDataSimpLemma___spec__1(x_4);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_mk_string(", has unassigned metavariables after unification");
x_45 = l_Lean_stringToMessageData(x_44);
lean_dec(x_44);
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1(x_35, x_46, x_8, x_9, x_10, x_11, x_12, x_13, x_37);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
lean_object* x_49; 
x_49 = lean_ctor_get(x_47, 0);
lean_dec(x_49);
lean_ctor_set(x_47, 0, x_6);
return x_47;
}
else
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_dec(x_47);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_6);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
}
else
{
uint8_t x_64; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_64 = !lean_is_exclusive(x_16);
if (x_64 == 0)
{
return x_16;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_16, 0);
x_66 = lean_ctor_get(x_16, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_16);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
x_12 = l_Lean_Meta_inferType(x_4, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_box(0);
x_16 = 1;
x_17 = 0;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_18 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(x_13, x_16, x_15, x_17, x_7, x_8, x_9, x_10, x_14);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_ctor_get(x_20, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_dec(x_20);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_25 = l_Lean_Meta_instantiateMVars(x_24, x_7, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_Expr_appFn_x21(x_26);
x_29 = l_Lean_Expr_appArg_x21(x_28);
lean_dec(x_28);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
lean_inc(x_29);
x_30 = l_Lean_Meta_isExprDefEq(x_29, x_1, x_7, x_8, x_9, x_10, x_27);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_unbox(x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_4);
lean_dec(x_3);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_30)) {
 lean_ctor_release(x_30, 0);
 lean_ctor_release(x_30, 1);
 x_34 = x_30;
} else {
 lean_dec_ref(x_30);
 x_34 = lean_box(0);
}
x_35 = l_Lean_Expr_isMVar(x_29);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_36 = lean_box(0);
x_37 = lean_mk_string("Meta");
x_38 = lean_name_mk_string(x_36, x_37);
x_39 = lean_mk_string("Tactic");
x_40 = lean_name_mk_string(x_38, x_39);
x_41 = lean_mk_string("simp");
x_42 = lean_name_mk_string(x_40, x_41);
x_43 = lean_mk_string("unify");
x_44 = lean_name_mk_string(x_42, x_43);
x_70 = lean_st_ref_get(x_10, x_33);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_71, 3);
lean_inc(x_72);
lean_dec(x_71);
x_73 = lean_ctor_get_uint8(x_72, sizeof(void*)*1);
lean_dec(x_72);
if (x_73 == 0)
{
lean_object* x_74; uint8_t x_75; 
x_74 = lean_ctor_get(x_70, 1);
lean_inc(x_74);
lean_dec(x_70);
x_75 = 0;
x_45 = x_75;
x_46 = x_74;
goto block_69;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_76 = lean_ctor_get(x_70, 1);
lean_inc(x_76);
lean_dec(x_70);
lean_inc(x_44);
x_77 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2(x_44, x_5, x_6, x_7, x_8, x_9, x_10, x_76);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = lean_unbox(x_78);
lean_dec(x_78);
x_45 = x_80;
x_46 = x_79;
goto block_69;
}
block_69:
{
if (x_45 == 0)
{
lean_object* x_47; 
lean_dec(x_44);
lean_dec(x_29);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
if (lean_is_scalar(x_34)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_34;
}
lean_ctor_set(x_47, 0, x_15);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
lean_dec(x_34);
x_48 = lean_mk_string("");
x_49 = l_Lean_stringToMessageData(x_48);
lean_dec(x_48);
x_50 = l_Std_fmt___at_Lean_Meta_instToMessageDataSimpLemma___spec__1(x_2);
x_51 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_51, 0, x_50);
lean_inc(x_49);
x_52 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_mk_string(", failed to unify ");
x_54 = l_Lean_stringToMessageData(x_53);
lean_dec(x_53);
x_55 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_56, 0, x_29);
x_57 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_mk_string(" with ");
x_59 = l_Lean_stringToMessageData(x_58);
lean_dec(x_58);
x_60 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_61, 0, x_1);
x_62 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_49);
x_64 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1(x_44, x_63, x_5, x_6, x_7, x_8, x_9, x_10, x_46);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_65 = !lean_is_exclusive(x_64);
if (x_65 == 0)
{
lean_object* x_66; 
x_66 = lean_ctor_get(x_64, 0);
lean_dec(x_66);
lean_ctor_set(x_64, 0, x_15);
return x_64;
}
else
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_64, 1);
lean_inc(x_67);
lean_dec(x_64);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_15);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
else
{
lean_object* x_81; 
lean_dec(x_29);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
if (lean_is_scalar(x_34)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_34;
}
lean_ctor_set(x_81, 0, x_15);
lean_ctor_set(x_81, 1, x_33);
return x_81;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_29);
x_82 = lean_ctor_get(x_30, 1);
lean_inc(x_82);
lean_dec(x_30);
x_83 = l_Lean_Meta_SimpLemma_getName(x_2);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_84 = l_Lean_Meta_Simp_synthesizeArgs(x_83, x_22, x_23, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_82);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; uint8_t x_86; 
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_unbox(x_85);
lean_dec(x_85);
if (x_86 == 0)
{
uint8_t x_87; 
lean_dec(x_26);
lean_dec(x_22);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_87 = !lean_is_exclusive(x_84);
if (x_87 == 0)
{
lean_object* x_88; 
x_88 = lean_ctor_get(x_84, 0);
lean_dec(x_88);
lean_ctor_set(x_84, 0, x_15);
return x_84;
}
else
{
lean_object* x_89; lean_object* x_90; 
x_89 = lean_ctor_get(x_84, 1);
lean_inc(x_89);
lean_dec(x_84);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_15);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_84, 1);
lean_inc(x_91);
lean_dec(x_84);
x_92 = lean_box(0);
x_93 = l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__6(x_4, x_22, x_26, x_2, x_1, x_15, x_92, x_5, x_6, x_7, x_8, x_9, x_10, x_91);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_26);
lean_dec(x_22);
return x_93;
}
}
else
{
uint8_t x_94; 
lean_dec(x_26);
lean_dec(x_22);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_94 = !lean_is_exclusive(x_84);
if (x_94 == 0)
{
return x_84;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_84, 0);
x_96 = lean_ctor_get(x_84, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_84);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
}
else
{
uint8_t x_98; 
lean_dec(x_29);
lean_dec(x_26);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_98 = !lean_is_exclusive(x_30);
if (x_98 == 0)
{
return x_30;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_30, 0);
x_100 = lean_ctor_get(x_30, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_30);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
else
{
uint8_t x_102; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_102 = !lean_is_exclusive(x_25);
if (x_102 == 0)
{
return x_25;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_25, 0);
x_104 = lean_ctor_get(x_25, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_25);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
}
else
{
uint8_t x_106; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_106 = !lean_is_exclusive(x_18);
if (x_106 == 0)
{
return x_18;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_18, 0);
x_108 = lean_ctor_get(x_18, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_18);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
else
{
uint8_t x_110; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_110 = !lean_is_exclusive(x_12);
if (x_110 == 0)
{
return x_12;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_12, 0);
x_112 = lean_ctor_get(x_12, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_12);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_3);
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__1___boxed), 8, 1);
lean_closure_set(x_11, 0, x_3);
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__7), 11, 3);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_3);
lean_closure_set(x_12, 2, x_2);
x_13 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__1___rarg), 9, 2);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_12);
x_14 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_Simp_rewrite_tryLemma_x3f___spec__2___rarg(x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_14;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_14;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Lean_Meta_Simp_rewrite_tryLemma_x3f___lambda__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
lean_dec(x_2);
return x_15;
}
}
lean_object* l_Array_insertionSort_swapLoop___at_Lean_Meta_Simp_rewrite___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_2, x_6);
x_8 = lean_array_fget(x_1, x_2);
x_9 = lean_array_fget(x_1, x_7);
x_10 = lean_ctor_get(x_8, 3);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 3);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_nat_dec_lt(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
if (x_12 == 0)
{
lean_dec(x_7);
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_13; 
x_13 = lean_array_fswap(x_1, x_2, x_7);
lean_dec(x_2);
x_1 = x_13;
x_2 = x_7;
x_3 = lean_box(0);
goto _start;
}
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
lean_object* l_Array_insertionSort_traverse___at_Lean_Meta_Simp_rewrite___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_3, x_6);
lean_dec(x_3);
x_8 = lean_array_get_size(x_1);
x_9 = lean_nat_dec_lt(x_2, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_dec(x_7);
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_inc(x_2);
x_10 = l_Array_insertionSort_swapLoop___at_Lean_Meta_Simp_rewrite___spec__2(x_1, x_2, lean_box(0));
x_11 = lean_nat_add(x_2, x_6);
lean_dec(x_2);
x_1 = x_10;
x_2 = x_11;
x_3 = x_7;
goto _start;
}
}
else
{
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_rewrite___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, size_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
uint8_t x_16; 
x_16 = x_7 < x_6;
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_8);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
else
{
lean_object* x_18; uint8_t x_19; 
lean_dec(x_8);
x_18 = lean_array_uget(x_5, x_7);
lean_inc(x_2);
x_19 = l_Lean_Meta_Simp_rewrite_inErasedSet(x_2, x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_3);
lean_inc(x_1);
x_20 = l_Lean_Meta_Simp_rewrite_tryLemma_x3f(x_1, x_3, x_18, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; size_t x_23; size_t x_24; 
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = x_7 + x_23;
lean_inc(x_4);
{
size_t _tmp_6 = x_24;
lean_object* _tmp_7 = x_4;
lean_object* _tmp_14 = x_22;
x_7 = _tmp_6;
x_8 = _tmp_7;
x_15 = _tmp_14;
}
goto _start;
}
else
{
uint8_t x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_20);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_ctor_get(x_20, 0);
lean_dec(x_27);
x_28 = !lean_is_exclusive(x_21);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_21);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_20, 0, x_30);
return x_20;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_21, 0);
lean_inc(x_31);
lean_dec(x_21);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
lean_ctor_set(x_20, 0, x_34);
return x_20;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_35 = lean_ctor_get(x_20, 1);
lean_inc(x_35);
lean_dec(x_20);
x_36 = lean_ctor_get(x_21, 0);
lean_inc(x_36);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 x_37 = x_21;
} else {
 lean_dec_ref(x_21);
 x_37 = lean_box(0);
}
if (lean_is_scalar(x_37)) {
 x_38 = lean_alloc_ctor(1, 1, 0);
} else {
 x_38 = x_37;
}
lean_ctor_set(x_38, 0, x_36);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_35);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_20);
if (x_42 == 0)
{
return x_20;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_20, 0);
x_44 = lean_ctor_get(x_20, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_20);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
size_t x_46; size_t x_47; 
lean_dec(x_18);
x_46 = 1;
x_47 = x_7 + x_46;
lean_inc(x_4);
{
size_t _tmp_6 = x_47;
lean_object* _tmp_7 = x_4;
x_7 = _tmp_6;
x_8 = _tmp_7;
}
goto _start;
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewrite___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
lean_object* l_Lean_Meta_Simp_rewrite(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_1);
x_13 = l_Lean_Meta_DiscrTree_getMatch___rarg(x_2, x_1, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 x_16 = x_13;
} else {
 lean_dec_ref(x_13);
 x_16 = lean_box(0);
}
x_17 = l_Array_isEmpty___rarg(x_14);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; lean_object* x_27; 
lean_dec(x_16);
x_18 = lean_array_get_size(x_14);
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_Array_insertionSort_traverse___at_Lean_Meta_Simp_rewrite___spec__1(x_14, x_19, x_18);
x_21 = lean_box(0);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_array_get_size(x_20);
x_25 = lean_usize_of_nat(x_24);
lean_dec(x_24);
x_26 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_23);
lean_inc(x_1);
x_27 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_rewrite___spec__3(x_1, x_3, x_4, x_23, x_20, x_25, x_26, x_23, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
lean_dec(x_20);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
lean_dec(x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = l_Lean_Meta_Simp_rewrite___lambda__1(x_1, x_21, x_22, x_6, x_7, x_8, x_9, x_10, x_11, x_30);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_31;
}
else
{
uint8_t x_32; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_27);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_27, 0);
lean_dec(x_33);
x_34 = lean_ctor_get(x_29, 0);
lean_inc(x_34);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_34);
return x_27;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_27, 1);
lean_inc(x_35);
lean_dec(x_27);
x_36 = lean_ctor_get(x_29, 0);
lean_inc(x_36);
lean_dec(x_29);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_27);
if (x_38 == 0)
{
return x_27;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_27, 0);
x_40 = lean_ctor_get(x_27, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_27);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; lean_object* x_52; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
x_42 = lean_box(0);
x_43 = lean_mk_string("Debug");
x_44 = lean_name_mk_string(x_42, x_43);
x_45 = lean_mk_string("Meta");
x_46 = lean_name_mk_string(x_44, x_45);
x_47 = lean_mk_string("Tactic");
x_48 = lean_name_mk_string(x_46, x_47);
x_49 = lean_mk_string("simp");
x_50 = lean_name_mk_string(x_48, x_49);
x_78 = lean_st_ref_get(x_11, x_15);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_79, 3);
lean_inc(x_80);
lean_dec(x_79);
x_81 = lean_ctor_get_uint8(x_80, sizeof(void*)*1);
lean_dec(x_80);
if (x_81 == 0)
{
lean_object* x_82; uint8_t x_83; 
x_82 = lean_ctor_get(x_78, 1);
lean_inc(x_82);
lean_dec(x_78);
x_83 = 0;
x_51 = x_83;
x_52 = x_82;
goto block_77;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_84 = lean_ctor_get(x_78, 1);
lean_inc(x_84);
lean_dec(x_78);
lean_inc(x_50);
x_85 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__2(x_50, x_6, x_7, x_8, x_9, x_10, x_11, x_84);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = lean_unbox(x_86);
lean_dec(x_86);
x_51 = x_88;
x_52 = x_87;
goto block_77;
}
block_77:
{
if (x_51 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_50);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_53 = lean_box(0);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_1);
lean_ctor_set(x_54, 1, x_53);
if (lean_is_scalar(x_16)) {
 x_55 = lean_alloc_ctor(0, 2, 0);
} else {
 x_55 = x_16;
}
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_52);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
lean_dec(x_16);
x_56 = lean_mk_string("no theorems found for ");
x_57 = l_Lean_stringToMessageData(x_56);
lean_dec(x_56);
x_58 = l_Lean_stringToMessageData(x_5);
x_59 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_mk_string("-rewriting ");
x_61 = l_Lean_stringToMessageData(x_60);
lean_dec(x_60);
x_62 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_61);
lean_inc(x_1);
x_63 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_63, 0, x_1);
x_64 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_mk_string("");
x_66 = l_Lean_stringToMessageData(x_65);
lean_dec(x_65);
x_67 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_66);
x_68 = l_Lean_addTrace___at_Lean_Meta_Simp_synthesizeArgs_synthesizeInstance___spec__1(x_50, x_67, x_6, x_7, x_8, x_9, x_10, x_11, x_52);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_69 = !lean_is_exclusive(x_68);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_68, 0);
lean_dec(x_70);
x_71 = lean_box(0);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_1);
lean_ctor_set(x_72, 1, x_71);
lean_ctor_set(x_68, 0, x_72);
return x_68;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_73 = lean_ctor_get(x_68, 1);
lean_inc(x_73);
lean_dec(x_68);
x_74 = lean_box(0);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_1);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_73);
return x_76;
}
}
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_89 = !lean_is_exclusive(x_13);
if (x_89 == 0)
{
return x_13;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_13, 0);
x_91 = lean_ctor_get(x_13, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_13);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_rewrite___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_17 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_18 = l_Array_forInUnsafe_loop___at_Lean_Meta_Simp_rewrite___spec__3(x_1, x_2, x_3, x_4, x_5, x_16, x_17, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_5);
return x_18;
}
}
lean_object* l_Lean_Meta_Simp_rewrite___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_Simp_rewrite___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Meta_Simp_rewrite___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Meta_Simp_rewrite(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
return x_13;
}
}
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_apply_2(x_4, x_1, x_2);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; 
lean_dec(x_6);
lean_dec(x_3);
x_7 = lean_apply_2(x_4, x_1, x_2);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_apply_4(x_3, x_9, x_10, x_11, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewriteCtorEq_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_box(0);
x_8 = lean_mk_string("False");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_box(0);
x_11 = l_Lean_mkConst(x_9, x_10);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
lean_inc(x_11);
x_12 = l_Lean_Meta_mkNoConfusion(x_11, x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_mk_empty_array_with_capacity(x_15);
x_17 = lean_array_push(x_16, x_1);
x_18 = 0;
x_19 = 1;
lean_inc(x_2);
x_20 = l_Lean_Meta_mkLambdaFVars(x_17, x_13, x_18, x_19, x_2, x_3, x_4, x_5, x_14);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Meta_mkEqFalse_x27(x_21, x_2, x_3, x_4, x_5, x_22);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_11);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_23, 0, x_28);
return x_23;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_23, 0);
x_30 = lean_ctor_get(x_23, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_23);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_11);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_30);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_11);
x_35 = !lean_is_exclusive(x_23);
if (x_35 == 0)
{
return x_23;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_23, 0);
x_37 = lean_ctor_get(x_23, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_23);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_20);
if (x_39 == 0)
{
return x_20;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_20, 0);
x_41 = lean_ctor_get(x_20, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_20);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_43 = !lean_is_exclusive(x_12);
if (x_43 == 0)
{
return x_12;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_12, 0);
x_45 = lean_ctor_get(x_12, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_12);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewriteCtorEq_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_box(0);
x_8 = lean_mk_string("Eq");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_unsigned_to_nat(3u);
x_11 = l_Lean_Expr_isAppOfArity(x_1, x_9, x_10);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = l_Lean_Expr_appFn_x21(x_1);
x_15 = l_Lean_Expr_appArg_x21(x_14);
lean_dec(x_14);
x_16 = l_Lean_Expr_appArg_x21(x_1);
x_17 = !lean_is_exclusive(x_2);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_2, 0);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
uint8_t x_20; lean_object* x_21; 
x_20 = 3;
lean_ctor_set_uint8(x_18, 5, x_20);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_21 = l_Lean_Meta_whnf(x_15, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_24 = l_Lean_Meta_whnf(x_16, x_2, x_3, x_4, x_5, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_st_ref_get(x_5, x_26);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_27, 1);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
lean_dec(x_29);
lean_inc(x_31);
x_32 = l_Lean_Expr_constructorApp_x3f(x_31, x_22);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
lean_dec(x_31);
lean_dec(x_25);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_33 = lean_box(0);
lean_ctor_set(x_27, 0, x_33);
return x_27;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Lean_Expr_constructorApp_x3f(x_31, x_25);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
lean_dec(x_34);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_36 = lean_box(0);
lean_ctor_set(x_27, 0, x_36);
return x_27;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_34, 0);
lean_inc(x_38);
lean_dec(x_34);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_ctor_get(x_39, 0);
lean_inc(x_42);
lean_dec(x_39);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_name_eq(x_41, x_43);
lean_dec(x_43);
lean_dec(x_41);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; 
lean_free_object(x_27);
x_45 = lean_mk_string("h");
x_46 = lean_name_mk_string(x_7, x_45);
x_47 = 0;
x_48 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewriteCtorEq_x3f___lambda__1), 6, 0);
x_49 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(x_46, x_47, x_1, x_48, x_2, x_3, x_4, x_5, x_30);
if (lean_obj_tag(x_49) == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
return x_49;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_49, 0);
x_52 = lean_ctor_get(x_49, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_49);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
else
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_49);
if (x_54 == 0)
{
return x_49;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_49, 0);
x_56 = lean_ctor_get(x_49, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_49);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; 
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_58 = lean_box(0);
lean_ctor_set(x_27, 0, x_58);
return x_27;
}
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_59 = lean_ctor_get(x_27, 0);
x_60 = lean_ctor_get(x_27, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_27);
x_61 = lean_ctor_get(x_59, 0);
lean_inc(x_61);
lean_dec(x_59);
lean_inc(x_61);
x_62 = l_Lean_Expr_constructorApp_x3f(x_61, x_22);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_61);
lean_dec(x_25);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_63 = lean_box(0);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_60);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_62, 0);
lean_inc(x_65);
lean_dec(x_62);
x_66 = l_Lean_Expr_constructorApp_x3f(x_61, x_25);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_65);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_60);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_69 = lean_ctor_get(x_66, 0);
lean_inc(x_69);
lean_dec(x_66);
x_70 = lean_ctor_get(x_65, 0);
lean_inc(x_70);
lean_dec(x_65);
x_71 = lean_ctor_get(x_69, 0);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_ctor_get(x_70, 0);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
lean_dec(x_72);
x_74 = lean_ctor_get(x_71, 0);
lean_inc(x_74);
lean_dec(x_71);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
lean_dec(x_74);
x_76 = lean_name_eq(x_73, x_75);
lean_dec(x_75);
lean_dec(x_73);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; uint8_t x_79; lean_object* x_80; lean_object* x_81; 
x_77 = lean_mk_string("h");
x_78 = lean_name_mk_string(x_7, x_77);
x_79 = 0;
x_80 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewriteCtorEq_x3f___lambda__1), 6, 0);
x_81 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(x_78, x_79, x_1, x_80, x_2, x_3, x_4, x_5, x_60);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_84 = x_81;
} else {
 lean_dec_ref(x_81);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_81, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_81, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_88 = x_81;
} else {
 lean_dec_ref(x_81);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(1, 2, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
}
else
{
lean_object* x_90; lean_object* x_91; 
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_90 = lean_box(0);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_60);
return x_91;
}
}
}
}
}
else
{
uint8_t x_92; 
lean_dec(x_22);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_92 = !lean_is_exclusive(x_24);
if (x_92 == 0)
{
return x_24;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_24, 0);
x_94 = lean_ctor_get(x_24, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_24);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_2);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_96 = !lean_is_exclusive(x_21);
if (x_96 == 0)
{
return x_21;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_21, 0);
x_98 = lean_ctor_get(x_21, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_21);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
else
{
uint8_t x_100; uint8_t x_101; uint8_t x_102; uint8_t x_103; uint8_t x_104; uint8_t x_105; uint8_t x_106; uint8_t x_107; uint8_t x_108; uint8_t x_109; lean_object* x_110; lean_object* x_111; 
x_100 = lean_ctor_get_uint8(x_18, 0);
x_101 = lean_ctor_get_uint8(x_18, 1);
x_102 = lean_ctor_get_uint8(x_18, 2);
x_103 = lean_ctor_get_uint8(x_18, 3);
x_104 = lean_ctor_get_uint8(x_18, 4);
x_105 = lean_ctor_get_uint8(x_18, 6);
x_106 = lean_ctor_get_uint8(x_18, 7);
x_107 = lean_ctor_get_uint8(x_18, 8);
x_108 = lean_ctor_get_uint8(x_18, 9);
lean_dec(x_18);
x_109 = 3;
x_110 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_110, 0, x_100);
lean_ctor_set_uint8(x_110, 1, x_101);
lean_ctor_set_uint8(x_110, 2, x_102);
lean_ctor_set_uint8(x_110, 3, x_103);
lean_ctor_set_uint8(x_110, 4, x_104);
lean_ctor_set_uint8(x_110, 5, x_109);
lean_ctor_set_uint8(x_110, 6, x_105);
lean_ctor_set_uint8(x_110, 7, x_106);
lean_ctor_set_uint8(x_110, 8, x_107);
lean_ctor_set_uint8(x_110, 9, x_108);
lean_ctor_set(x_2, 0, x_110);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_111 = l_Lean_Meta_whnf(x_15, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_111) == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_111, 1);
lean_inc(x_113);
lean_dec(x_111);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_114 = l_Lean_Meta_whnf(x_16, x_2, x_3, x_4, x_5, x_113);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_115 = lean_ctor_get(x_114, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
lean_dec(x_114);
x_117 = lean_st_ref_get(x_5, x_116);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 lean_ctor_release(x_117, 1);
 x_120 = x_117;
} else {
 lean_dec_ref(x_117);
 x_120 = lean_box(0);
}
x_121 = lean_ctor_get(x_118, 0);
lean_inc(x_121);
lean_dec(x_118);
lean_inc(x_121);
x_122 = l_Lean_Expr_constructorApp_x3f(x_121, x_112);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; lean_object* x_124; 
lean_dec(x_121);
lean_dec(x_115);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_123 = lean_box(0);
if (lean_is_scalar(x_120)) {
 x_124 = lean_alloc_ctor(0, 2, 0);
} else {
 x_124 = x_120;
}
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_119);
return x_124;
}
else
{
lean_object* x_125; lean_object* x_126; 
x_125 = lean_ctor_get(x_122, 0);
lean_inc(x_125);
lean_dec(x_122);
x_126 = l_Lean_Expr_constructorApp_x3f(x_121, x_115);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; 
lean_dec(x_125);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_127 = lean_box(0);
if (lean_is_scalar(x_120)) {
 x_128 = lean_alloc_ctor(0, 2, 0);
} else {
 x_128 = x_120;
}
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_119);
return x_128;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; uint8_t x_136; 
x_129 = lean_ctor_get(x_126, 0);
lean_inc(x_129);
lean_dec(x_126);
x_130 = lean_ctor_get(x_125, 0);
lean_inc(x_130);
lean_dec(x_125);
x_131 = lean_ctor_get(x_129, 0);
lean_inc(x_131);
lean_dec(x_129);
x_132 = lean_ctor_get(x_130, 0);
lean_inc(x_132);
lean_dec(x_130);
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
lean_dec(x_132);
x_134 = lean_ctor_get(x_131, 0);
lean_inc(x_134);
lean_dec(x_131);
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
lean_dec(x_134);
x_136 = lean_name_eq(x_133, x_135);
lean_dec(x_135);
lean_dec(x_133);
if (x_136 == 0)
{
lean_object* x_137; lean_object* x_138; uint8_t x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_120);
x_137 = lean_mk_string("h");
x_138 = lean_name_mk_string(x_7, x_137);
x_139 = 0;
x_140 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewriteCtorEq_x3f___lambda__1), 6, 0);
x_141 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(x_138, x_139, x_1, x_140, x_2, x_3, x_4, x_5, x_119);
if (lean_obj_tag(x_141) == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_142 = lean_ctor_get(x_141, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_141, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_144 = x_141;
} else {
 lean_dec_ref(x_141);
 x_144 = lean_box(0);
}
if (lean_is_scalar(x_144)) {
 x_145 = lean_alloc_ctor(0, 2, 0);
} else {
 x_145 = x_144;
}
lean_ctor_set(x_145, 0, x_142);
lean_ctor_set(x_145, 1, x_143);
return x_145;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_146 = lean_ctor_get(x_141, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_141, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_148 = x_141;
} else {
 lean_dec_ref(x_141);
 x_148 = lean_box(0);
}
if (lean_is_scalar(x_148)) {
 x_149 = lean_alloc_ctor(1, 2, 0);
} else {
 x_149 = x_148;
}
lean_ctor_set(x_149, 0, x_146);
lean_ctor_set(x_149, 1, x_147);
return x_149;
}
}
else
{
lean_object* x_150; lean_object* x_151; 
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_150 = lean_box(0);
if (lean_is_scalar(x_120)) {
 x_151 = lean_alloc_ctor(0, 2, 0);
} else {
 x_151 = x_120;
}
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_119);
return x_151;
}
}
}
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
lean_dec(x_112);
lean_dec(x_2);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_152 = lean_ctor_get(x_114, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_114, 1);
lean_inc(x_153);
if (lean_is_exclusive(x_114)) {
 lean_ctor_release(x_114, 0);
 lean_ctor_release(x_114, 1);
 x_154 = x_114;
} else {
 lean_dec_ref(x_114);
 x_154 = lean_box(0);
}
if (lean_is_scalar(x_154)) {
 x_155 = lean_alloc_ctor(1, 2, 0);
} else {
 x_155 = x_154;
}
lean_ctor_set(x_155, 0, x_152);
lean_ctor_set(x_155, 1, x_153);
return x_155;
}
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
lean_dec(x_2);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_156 = lean_ctor_get(x_111, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_111, 1);
lean_inc(x_157);
if (lean_is_exclusive(x_111)) {
 lean_ctor_release(x_111, 0);
 lean_ctor_release(x_111, 1);
 x_158 = x_111;
} else {
 lean_dec_ref(x_111);
 x_158 = lean_box(0);
}
if (lean_is_scalar(x_158)) {
 x_159 = lean_alloc_ctor(1, 2, 0);
} else {
 x_159 = x_158;
}
lean_ctor_set(x_159, 0, x_156);
lean_ctor_set(x_159, 1, x_157);
return x_159;
}
}
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; uint8_t x_164; uint8_t x_165; uint8_t x_166; uint8_t x_167; uint8_t x_168; uint8_t x_169; uint8_t x_170; uint8_t x_171; uint8_t x_172; lean_object* x_173; uint8_t x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_160 = lean_ctor_get(x_2, 0);
x_161 = lean_ctor_get(x_2, 1);
x_162 = lean_ctor_get(x_2, 2);
x_163 = lean_ctor_get(x_2, 3);
lean_inc(x_163);
lean_inc(x_162);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_2);
x_164 = lean_ctor_get_uint8(x_160, 0);
x_165 = lean_ctor_get_uint8(x_160, 1);
x_166 = lean_ctor_get_uint8(x_160, 2);
x_167 = lean_ctor_get_uint8(x_160, 3);
x_168 = lean_ctor_get_uint8(x_160, 4);
x_169 = lean_ctor_get_uint8(x_160, 6);
x_170 = lean_ctor_get_uint8(x_160, 7);
x_171 = lean_ctor_get_uint8(x_160, 8);
x_172 = lean_ctor_get_uint8(x_160, 9);
if (lean_is_exclusive(x_160)) {
 x_173 = x_160;
} else {
 lean_dec_ref(x_160);
 x_173 = lean_box(0);
}
x_174 = 3;
if (lean_is_scalar(x_173)) {
 x_175 = lean_alloc_ctor(0, 0, 10);
} else {
 x_175 = x_173;
}
lean_ctor_set_uint8(x_175, 0, x_164);
lean_ctor_set_uint8(x_175, 1, x_165);
lean_ctor_set_uint8(x_175, 2, x_166);
lean_ctor_set_uint8(x_175, 3, x_167);
lean_ctor_set_uint8(x_175, 4, x_168);
lean_ctor_set_uint8(x_175, 5, x_174);
lean_ctor_set_uint8(x_175, 6, x_169);
lean_ctor_set_uint8(x_175, 7, x_170);
lean_ctor_set_uint8(x_175, 8, x_171);
lean_ctor_set_uint8(x_175, 9, x_172);
x_176 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_161);
lean_ctor_set(x_176, 2, x_162);
lean_ctor_set(x_176, 3, x_163);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_176);
x_177 = l_Lean_Meta_whnf(x_15, x_176, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_177) == 0)
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_177, 1);
lean_inc(x_179);
lean_dec(x_177);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_176);
x_180 = l_Lean_Meta_whnf(x_16, x_176, x_3, x_4, x_5, x_179);
if (lean_obj_tag(x_180) == 0)
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
x_182 = lean_ctor_get(x_180, 1);
lean_inc(x_182);
lean_dec(x_180);
x_183 = lean_st_ref_get(x_5, x_182);
x_184 = lean_ctor_get(x_183, 0);
lean_inc(x_184);
x_185 = lean_ctor_get(x_183, 1);
lean_inc(x_185);
if (lean_is_exclusive(x_183)) {
 lean_ctor_release(x_183, 0);
 lean_ctor_release(x_183, 1);
 x_186 = x_183;
} else {
 lean_dec_ref(x_183);
 x_186 = lean_box(0);
}
x_187 = lean_ctor_get(x_184, 0);
lean_inc(x_187);
lean_dec(x_184);
lean_inc(x_187);
x_188 = l_Lean_Expr_constructorApp_x3f(x_187, x_178);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_189; lean_object* x_190; 
lean_dec(x_187);
lean_dec(x_181);
lean_dec(x_176);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_189 = lean_box(0);
if (lean_is_scalar(x_186)) {
 x_190 = lean_alloc_ctor(0, 2, 0);
} else {
 x_190 = x_186;
}
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_185);
return x_190;
}
else
{
lean_object* x_191; lean_object* x_192; 
x_191 = lean_ctor_get(x_188, 0);
lean_inc(x_191);
lean_dec(x_188);
x_192 = l_Lean_Expr_constructorApp_x3f(x_187, x_181);
if (lean_obj_tag(x_192) == 0)
{
lean_object* x_193; lean_object* x_194; 
lean_dec(x_191);
lean_dec(x_176);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_193 = lean_box(0);
if (lean_is_scalar(x_186)) {
 x_194 = lean_alloc_ctor(0, 2, 0);
} else {
 x_194 = x_186;
}
lean_ctor_set(x_194, 0, x_193);
lean_ctor_set(x_194, 1, x_185);
return x_194;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; uint8_t x_202; 
x_195 = lean_ctor_get(x_192, 0);
lean_inc(x_195);
lean_dec(x_192);
x_196 = lean_ctor_get(x_191, 0);
lean_inc(x_196);
lean_dec(x_191);
x_197 = lean_ctor_get(x_195, 0);
lean_inc(x_197);
lean_dec(x_195);
x_198 = lean_ctor_get(x_196, 0);
lean_inc(x_198);
lean_dec(x_196);
x_199 = lean_ctor_get(x_198, 0);
lean_inc(x_199);
lean_dec(x_198);
x_200 = lean_ctor_get(x_197, 0);
lean_inc(x_200);
lean_dec(x_197);
x_201 = lean_ctor_get(x_200, 0);
lean_inc(x_201);
lean_dec(x_200);
x_202 = lean_name_eq(x_199, x_201);
lean_dec(x_201);
lean_dec(x_199);
if (x_202 == 0)
{
lean_object* x_203; lean_object* x_204; uint8_t x_205; lean_object* x_206; lean_object* x_207; 
lean_dec(x_186);
x_203 = lean_mk_string("h");
x_204 = lean_name_mk_string(x_7, x_203);
x_205 = 0;
x_206 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_rewriteCtorEq_x3f___lambda__1), 6, 0);
x_207 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(x_204, x_205, x_1, x_206, x_176, x_3, x_4, x_5, x_185);
if (lean_obj_tag(x_207) == 0)
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_208 = lean_ctor_get(x_207, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_207, 1);
lean_inc(x_209);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 x_210 = x_207;
} else {
 lean_dec_ref(x_207);
 x_210 = lean_box(0);
}
if (lean_is_scalar(x_210)) {
 x_211 = lean_alloc_ctor(0, 2, 0);
} else {
 x_211 = x_210;
}
lean_ctor_set(x_211, 0, x_208);
lean_ctor_set(x_211, 1, x_209);
return x_211;
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_212 = lean_ctor_get(x_207, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_207, 1);
lean_inc(x_213);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 x_214 = x_207;
} else {
 lean_dec_ref(x_207);
 x_214 = lean_box(0);
}
if (lean_is_scalar(x_214)) {
 x_215 = lean_alloc_ctor(1, 2, 0);
} else {
 x_215 = x_214;
}
lean_ctor_set(x_215, 0, x_212);
lean_ctor_set(x_215, 1, x_213);
return x_215;
}
}
else
{
lean_object* x_216; lean_object* x_217; 
lean_dec(x_176);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_216 = lean_box(0);
if (lean_is_scalar(x_186)) {
 x_217 = lean_alloc_ctor(0, 2, 0);
} else {
 x_217 = x_186;
}
lean_ctor_set(x_217, 0, x_216);
lean_ctor_set(x_217, 1, x_185);
return x_217;
}
}
}
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
lean_dec(x_178);
lean_dec(x_176);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_218 = lean_ctor_get(x_180, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_180, 1);
lean_inc(x_219);
if (lean_is_exclusive(x_180)) {
 lean_ctor_release(x_180, 0);
 lean_ctor_release(x_180, 1);
 x_220 = x_180;
} else {
 lean_dec_ref(x_180);
 x_220 = lean_box(0);
}
if (lean_is_scalar(x_220)) {
 x_221 = lean_alloc_ctor(1, 2, 0);
} else {
 x_221 = x_220;
}
lean_ctor_set(x_221, 0, x_218);
lean_ctor_set(x_221, 1, x_219);
return x_221;
}
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; 
lean_dec(x_176);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_222 = lean_ctor_get(x_177, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_177, 1);
lean_inc(x_223);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 x_224 = x_177;
} else {
 lean_dec_ref(x_177);
 x_224 = lean_box(0);
}
if (lean_is_scalar(x_224)) {
 x_225 = lean_alloc_ctor(1, 2, 0);
} else {
 x_225 = x_224;
}
lean_ctor_set(x_225, 0, x_222);
lean_ctor_set(x_225, 1, x_223);
return x_225;
}
}
}
}
}
lean_object* l_Lean_Meta_Simp_tryRewriteCtorEq_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_Simp_tryRewriteCtorEq_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Simp_tryRewriteCtorEq_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Simp_tryRewriteCtorEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Meta_Simp_rewriteCtorEq_x3f(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
lean_dec(x_15);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_10, 0, x_17);
return x_10;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_dec(x_10);
x_19 = lean_ctor_get(x_11, 0);
lean_inc(x_19);
lean_dec(x_11);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_10);
if (x_22 == 0)
{
return x_10;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_10, 0);
x_24 = lean_ctor_get(x_10, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_10);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewriteUsingDecide_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = l_Lean_Expr_hasFVar(x_1);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = l_Lean_Expr_hasMVar(x_1);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_box(0);
x_10 = lean_mk_string("True");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = l_Lean_Expr_isConstOf(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_mk_string("False");
x_14 = lean_name_mk_string(x_9, x_13);
x_15 = l_Lean_Expr_isConstOf(x_1, x_14);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_2);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_2, 0);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; uint8_t x_29; uint8_t x_30; uint8_t x_31; lean_object* x_32; 
x_19 = lean_ctor_get(x_2, 1);
x_20 = lean_ctor_get(x_2, 2);
x_21 = lean_ctor_get(x_2, 3);
x_22 = lean_ctor_get_uint8(x_17, 0);
x_23 = lean_ctor_get_uint8(x_17, 1);
x_24 = lean_ctor_get_uint8(x_17, 2);
x_25 = lean_ctor_get_uint8(x_17, 3);
x_26 = lean_ctor_get_uint8(x_17, 4);
x_27 = lean_ctor_get_uint8(x_17, 6);
x_28 = lean_ctor_get_uint8(x_17, 7);
x_29 = lean_ctor_get_uint8(x_17, 8);
x_30 = lean_ctor_get_uint8(x_17, 9);
x_31 = 3;
lean_ctor_set_uint8(x_17, 5, x_31);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_32 = l_Lean_Meta_mkDecide(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = 1;
x_36 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_36, 0, x_22);
lean_ctor_set_uint8(x_36, 1, x_23);
lean_ctor_set_uint8(x_36, 2, x_24);
lean_ctor_set_uint8(x_36, 3, x_25);
lean_ctor_set_uint8(x_36, 4, x_26);
lean_ctor_set_uint8(x_36, 5, x_35);
lean_ctor_set_uint8(x_36, 6, x_27);
lean_ctor_set_uint8(x_36, 7, x_28);
lean_ctor_set_uint8(x_36, 8, x_29);
lean_ctor_set_uint8(x_36, 9, x_30);
x_37 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_19);
lean_ctor_set(x_37, 2, x_20);
lean_ctor_set(x_37, 3, x_21);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_33);
x_38 = l_Lean_Meta_whnf(x_33, x_37, x_3, x_4, x_5, x_34);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = lean_ctor_get(x_38, 1);
x_42 = lean_mk_string("Bool");
x_43 = lean_name_mk_string(x_9, x_42);
x_44 = lean_mk_string("true");
lean_inc(x_43);
x_45 = lean_name_mk_string(x_43, x_44);
x_46 = l_Lean_Expr_isConstOf(x_40, x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; 
lean_dec(x_45);
lean_dec(x_11);
x_47 = lean_mk_string("false");
x_48 = lean_name_mk_string(x_43, x_47);
x_49 = l_Lean_Expr_isConstOf(x_40, x_48);
lean_dec(x_40);
if (x_49 == 0)
{
lean_object* x_50; 
lean_dec(x_48);
lean_dec(x_33);
lean_dec(x_2);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_50 = lean_box(0);
lean_ctor_set(x_38, 0, x_50);
return x_38;
}
else
{
lean_object* x_51; 
lean_free_object(x_38);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_33);
x_51 = l_Lean_Meta_mkEqRefl(x_33, x_2, x_3, x_4, x_5, x_41);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_box(0);
x_54 = l_Lean_mkConst(x_48, x_53);
x_55 = l_Lean_Meta_mkEqRefl(x_54, x_2, x_3, x_4, x_5, x_52);
if (lean_obj_tag(x_55) == 0)
{
uint8_t x_56; 
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_57 = lean_ctor_get(x_55, 0);
x_58 = l_Lean_mkConst(x_14, x_53);
x_59 = lean_mk_string("eqFalseOfDecide");
x_60 = lean_name_mk_string(x_9, x_59);
x_61 = l_Lean_mkConst(x_60, x_53);
x_62 = l_Lean_Expr_appArg_x21(x_33);
lean_dec(x_33);
x_63 = lean_unsigned_to_nat(3u);
x_64 = lean_mk_empty_array_with_capacity(x_63);
x_65 = lean_array_push(x_64, x_1);
x_66 = lean_array_push(x_65, x_62);
x_67 = lean_array_push(x_66, x_57);
x_68 = l_Lean_mkAppN(x_61, x_67);
lean_dec(x_67);
x_69 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_69, 0, x_68);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_58);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_55, 0, x_71);
return x_55;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_72 = lean_ctor_get(x_55, 0);
x_73 = lean_ctor_get(x_55, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_55);
x_74 = l_Lean_mkConst(x_14, x_53);
x_75 = lean_mk_string("eqFalseOfDecide");
x_76 = lean_name_mk_string(x_9, x_75);
x_77 = l_Lean_mkConst(x_76, x_53);
x_78 = l_Lean_Expr_appArg_x21(x_33);
lean_dec(x_33);
x_79 = lean_unsigned_to_nat(3u);
x_80 = lean_mk_empty_array_with_capacity(x_79);
x_81 = lean_array_push(x_80, x_1);
x_82 = lean_array_push(x_81, x_78);
x_83 = lean_array_push(x_82, x_72);
x_84 = l_Lean_mkAppN(x_77, x_83);
lean_dec(x_83);
x_85 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_85, 0, x_84);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_74);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_87, 0, x_86);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_73);
return x_88;
}
}
else
{
uint8_t x_89; 
lean_dec(x_33);
lean_dec(x_14);
lean_dec(x_1);
x_89 = !lean_is_exclusive(x_55);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; 
x_90 = lean_ctor_get(x_55, 0);
lean_dec(x_90);
x_91 = lean_box(0);
lean_ctor_set_tag(x_55, 0);
lean_ctor_set(x_55, 0, x_91);
return x_55;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_55, 1);
lean_inc(x_92);
lean_dec(x_55);
x_93 = lean_box(0);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
}
}
else
{
uint8_t x_95; 
lean_dec(x_48);
lean_dec(x_33);
lean_dec(x_2);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_95 = !lean_is_exclusive(x_51);
if (x_95 == 0)
{
lean_object* x_96; lean_object* x_97; 
x_96 = lean_ctor_get(x_51, 0);
lean_dec(x_96);
x_97 = lean_box(0);
lean_ctor_set_tag(x_51, 0);
lean_ctor_set(x_51, 0, x_97);
return x_51;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_51, 1);
lean_inc(x_98);
lean_dec(x_51);
x_99 = lean_box(0);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_98);
return x_100;
}
}
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_43);
lean_free_object(x_38);
lean_dec(x_40);
lean_dec(x_14);
x_101 = lean_box(0);
x_102 = l_Lean_mkConst(x_45, x_101);
x_103 = l_Lean_Meta_mkEqRefl(x_102, x_2, x_3, x_4, x_5, x_41);
if (lean_obj_tag(x_103) == 0)
{
uint8_t x_104; 
x_104 = !lean_is_exclusive(x_103);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_105 = lean_ctor_get(x_103, 0);
x_106 = l_Lean_mkConst(x_11, x_101);
x_107 = lean_mk_string("eqTrueOfDecide");
x_108 = lean_name_mk_string(x_9, x_107);
x_109 = l_Lean_mkConst(x_108, x_101);
x_110 = l_Lean_Expr_appArg_x21(x_33);
lean_dec(x_33);
x_111 = lean_unsigned_to_nat(3u);
x_112 = lean_mk_empty_array_with_capacity(x_111);
x_113 = lean_array_push(x_112, x_1);
x_114 = lean_array_push(x_113, x_110);
x_115 = lean_array_push(x_114, x_105);
x_116 = l_Lean_mkAppN(x_109, x_115);
lean_dec(x_115);
x_117 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_117, 0, x_116);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_106);
lean_ctor_set(x_118, 1, x_117);
x_119 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_103, 0, x_119);
return x_103;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_120 = lean_ctor_get(x_103, 0);
x_121 = lean_ctor_get(x_103, 1);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_103);
x_122 = l_Lean_mkConst(x_11, x_101);
x_123 = lean_mk_string("eqTrueOfDecide");
x_124 = lean_name_mk_string(x_9, x_123);
x_125 = l_Lean_mkConst(x_124, x_101);
x_126 = l_Lean_Expr_appArg_x21(x_33);
lean_dec(x_33);
x_127 = lean_unsigned_to_nat(3u);
x_128 = lean_mk_empty_array_with_capacity(x_127);
x_129 = lean_array_push(x_128, x_1);
x_130 = lean_array_push(x_129, x_126);
x_131 = lean_array_push(x_130, x_120);
x_132 = l_Lean_mkAppN(x_125, x_131);
lean_dec(x_131);
x_133 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_133, 0, x_132);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_122);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_135, 0, x_134);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_121);
return x_136;
}
}
else
{
uint8_t x_137; 
lean_dec(x_33);
lean_dec(x_11);
lean_dec(x_1);
x_137 = !lean_is_exclusive(x_103);
if (x_137 == 0)
{
lean_object* x_138; lean_object* x_139; 
x_138 = lean_ctor_get(x_103, 0);
lean_dec(x_138);
x_139 = lean_box(0);
lean_ctor_set_tag(x_103, 0);
lean_ctor_set(x_103, 0, x_139);
return x_103;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_140 = lean_ctor_get(x_103, 1);
lean_inc(x_140);
lean_dec(x_103);
x_141 = lean_box(0);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_140);
return x_142;
}
}
}
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; uint8_t x_149; 
x_143 = lean_ctor_get(x_38, 0);
x_144 = lean_ctor_get(x_38, 1);
lean_inc(x_144);
lean_inc(x_143);
lean_dec(x_38);
x_145 = lean_mk_string("Bool");
x_146 = lean_name_mk_string(x_9, x_145);
x_147 = lean_mk_string("true");
lean_inc(x_146);
x_148 = lean_name_mk_string(x_146, x_147);
x_149 = l_Lean_Expr_isConstOf(x_143, x_148);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; uint8_t x_152; 
lean_dec(x_148);
lean_dec(x_11);
x_150 = lean_mk_string("false");
x_151 = lean_name_mk_string(x_146, x_150);
x_152 = l_Lean_Expr_isConstOf(x_143, x_151);
lean_dec(x_143);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; 
lean_dec(x_151);
lean_dec(x_33);
lean_dec(x_2);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_153 = lean_box(0);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_144);
return x_154;
}
else
{
lean_object* x_155; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_33);
x_155 = l_Lean_Meta_mkEqRefl(x_33, x_2, x_3, x_4, x_5, x_144);
if (lean_obj_tag(x_155) == 0)
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_156 = lean_ctor_get(x_155, 1);
lean_inc(x_156);
lean_dec(x_155);
x_157 = lean_box(0);
x_158 = l_Lean_mkConst(x_151, x_157);
x_159 = l_Lean_Meta_mkEqRefl(x_158, x_2, x_3, x_4, x_5, x_156);
if (lean_obj_tag(x_159) == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_160 = lean_ctor_get(x_159, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_159, 1);
lean_inc(x_161);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 x_162 = x_159;
} else {
 lean_dec_ref(x_159);
 x_162 = lean_box(0);
}
x_163 = l_Lean_mkConst(x_14, x_157);
x_164 = lean_mk_string("eqFalseOfDecide");
x_165 = lean_name_mk_string(x_9, x_164);
x_166 = l_Lean_mkConst(x_165, x_157);
x_167 = l_Lean_Expr_appArg_x21(x_33);
lean_dec(x_33);
x_168 = lean_unsigned_to_nat(3u);
x_169 = lean_mk_empty_array_with_capacity(x_168);
x_170 = lean_array_push(x_169, x_1);
x_171 = lean_array_push(x_170, x_167);
x_172 = lean_array_push(x_171, x_160);
x_173 = l_Lean_mkAppN(x_166, x_172);
lean_dec(x_172);
x_174 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_174, 0, x_173);
x_175 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_175, 0, x_163);
lean_ctor_set(x_175, 1, x_174);
x_176 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_176, 0, x_175);
if (lean_is_scalar(x_162)) {
 x_177 = lean_alloc_ctor(0, 2, 0);
} else {
 x_177 = x_162;
}
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_161);
return x_177;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
lean_dec(x_33);
lean_dec(x_14);
lean_dec(x_1);
x_178 = lean_ctor_get(x_159, 1);
lean_inc(x_178);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 x_179 = x_159;
} else {
 lean_dec_ref(x_159);
 x_179 = lean_box(0);
}
x_180 = lean_box(0);
if (lean_is_scalar(x_179)) {
 x_181 = lean_alloc_ctor(0, 2, 0);
} else {
 x_181 = x_179;
 lean_ctor_set_tag(x_181, 0);
}
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_178);
return x_181;
}
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
lean_dec(x_151);
lean_dec(x_33);
lean_dec(x_2);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_182 = lean_ctor_get(x_155, 1);
lean_inc(x_182);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 lean_ctor_release(x_155, 1);
 x_183 = x_155;
} else {
 lean_dec_ref(x_155);
 x_183 = lean_box(0);
}
x_184 = lean_box(0);
if (lean_is_scalar(x_183)) {
 x_185 = lean_alloc_ctor(0, 2, 0);
} else {
 x_185 = x_183;
 lean_ctor_set_tag(x_185, 0);
}
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_182);
return x_185;
}
}
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; 
lean_dec(x_146);
lean_dec(x_143);
lean_dec(x_14);
x_186 = lean_box(0);
x_187 = l_Lean_mkConst(x_148, x_186);
x_188 = l_Lean_Meta_mkEqRefl(x_187, x_2, x_3, x_4, x_5, x_144);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_191 = x_188;
} else {
 lean_dec_ref(x_188);
 x_191 = lean_box(0);
}
x_192 = l_Lean_mkConst(x_11, x_186);
x_193 = lean_mk_string("eqTrueOfDecide");
x_194 = lean_name_mk_string(x_9, x_193);
x_195 = l_Lean_mkConst(x_194, x_186);
x_196 = l_Lean_Expr_appArg_x21(x_33);
lean_dec(x_33);
x_197 = lean_unsigned_to_nat(3u);
x_198 = lean_mk_empty_array_with_capacity(x_197);
x_199 = lean_array_push(x_198, x_1);
x_200 = lean_array_push(x_199, x_196);
x_201 = lean_array_push(x_200, x_189);
x_202 = l_Lean_mkAppN(x_195, x_201);
lean_dec(x_201);
x_203 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_203, 0, x_202);
x_204 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_204, 0, x_192);
lean_ctor_set(x_204, 1, x_203);
x_205 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_205, 0, x_204);
if (lean_is_scalar(x_191)) {
 x_206 = lean_alloc_ctor(0, 2, 0);
} else {
 x_206 = x_191;
}
lean_ctor_set(x_206, 0, x_205);
lean_ctor_set(x_206, 1, x_190);
return x_206;
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
lean_dec(x_33);
lean_dec(x_11);
lean_dec(x_1);
x_207 = lean_ctor_get(x_188, 1);
lean_inc(x_207);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_208 = x_188;
} else {
 lean_dec_ref(x_188);
 x_208 = lean_box(0);
}
x_209 = lean_box(0);
if (lean_is_scalar(x_208)) {
 x_210 = lean_alloc_ctor(0, 2, 0);
} else {
 x_210 = x_208;
 lean_ctor_set_tag(x_210, 0);
}
lean_ctor_set(x_210, 0, x_209);
lean_ctor_set(x_210, 1, x_207);
return x_210;
}
}
}
}
else
{
uint8_t x_211; 
lean_dec(x_33);
lean_dec(x_2);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_211 = !lean_is_exclusive(x_38);
if (x_211 == 0)
{
lean_object* x_212; lean_object* x_213; 
x_212 = lean_ctor_get(x_38, 0);
lean_dec(x_212);
x_213 = lean_box(0);
lean_ctor_set_tag(x_38, 0);
lean_ctor_set(x_38, 0, x_213);
return x_38;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_214 = lean_ctor_get(x_38, 1);
lean_inc(x_214);
lean_dec(x_38);
x_215 = lean_box(0);
x_216 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_216, 0, x_215);
lean_ctor_set(x_216, 1, x_214);
return x_216;
}
}
}
else
{
uint8_t x_217; 
lean_dec(x_2);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_217 = !lean_is_exclusive(x_32);
if (x_217 == 0)
{
lean_object* x_218; lean_object* x_219; 
x_218 = lean_ctor_get(x_32, 0);
lean_dec(x_218);
x_219 = lean_box(0);
lean_ctor_set_tag(x_32, 0);
lean_ctor_set(x_32, 0, x_219);
return x_32;
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_220 = lean_ctor_get(x_32, 1);
lean_inc(x_220);
lean_dec(x_32);
x_221 = lean_box(0);
x_222 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_220);
return x_222;
}
}
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; uint8_t x_226; uint8_t x_227; uint8_t x_228; uint8_t x_229; uint8_t x_230; uint8_t x_231; uint8_t x_232; uint8_t x_233; uint8_t x_234; uint8_t x_235; lean_object* x_236; lean_object* x_237; 
x_223 = lean_ctor_get(x_2, 1);
x_224 = lean_ctor_get(x_2, 2);
x_225 = lean_ctor_get(x_2, 3);
x_226 = lean_ctor_get_uint8(x_17, 0);
x_227 = lean_ctor_get_uint8(x_17, 1);
x_228 = lean_ctor_get_uint8(x_17, 2);
x_229 = lean_ctor_get_uint8(x_17, 3);
x_230 = lean_ctor_get_uint8(x_17, 4);
x_231 = lean_ctor_get_uint8(x_17, 6);
x_232 = lean_ctor_get_uint8(x_17, 7);
x_233 = lean_ctor_get_uint8(x_17, 8);
x_234 = lean_ctor_get_uint8(x_17, 9);
lean_dec(x_17);
x_235 = 3;
x_236 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_236, 0, x_226);
lean_ctor_set_uint8(x_236, 1, x_227);
lean_ctor_set_uint8(x_236, 2, x_228);
lean_ctor_set_uint8(x_236, 3, x_229);
lean_ctor_set_uint8(x_236, 4, x_230);
lean_ctor_set_uint8(x_236, 5, x_235);
lean_ctor_set_uint8(x_236, 6, x_231);
lean_ctor_set_uint8(x_236, 7, x_232);
lean_ctor_set_uint8(x_236, 8, x_233);
lean_ctor_set_uint8(x_236, 9, x_234);
lean_inc(x_225);
lean_inc(x_224);
lean_inc(x_223);
lean_ctor_set(x_2, 0, x_236);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_237 = l_Lean_Meta_mkDecide(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_237) == 0)
{
lean_object* x_238; lean_object* x_239; uint8_t x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_238 = lean_ctor_get(x_237, 0);
lean_inc(x_238);
x_239 = lean_ctor_get(x_237, 1);
lean_inc(x_239);
lean_dec(x_237);
x_240 = 1;
x_241 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_241, 0, x_226);
lean_ctor_set_uint8(x_241, 1, x_227);
lean_ctor_set_uint8(x_241, 2, x_228);
lean_ctor_set_uint8(x_241, 3, x_229);
lean_ctor_set_uint8(x_241, 4, x_230);
lean_ctor_set_uint8(x_241, 5, x_240);
lean_ctor_set_uint8(x_241, 6, x_231);
lean_ctor_set_uint8(x_241, 7, x_232);
lean_ctor_set_uint8(x_241, 8, x_233);
lean_ctor_set_uint8(x_241, 9, x_234);
x_242 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_242, 0, x_241);
lean_ctor_set(x_242, 1, x_223);
lean_ctor_set(x_242, 2, x_224);
lean_ctor_set(x_242, 3, x_225);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_238);
x_243 = l_Lean_Meta_whnf(x_238, x_242, x_3, x_4, x_5, x_239);
if (lean_obj_tag(x_243) == 0)
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; uint8_t x_251; 
x_244 = lean_ctor_get(x_243, 0);
lean_inc(x_244);
x_245 = lean_ctor_get(x_243, 1);
lean_inc(x_245);
if (lean_is_exclusive(x_243)) {
 lean_ctor_release(x_243, 0);
 lean_ctor_release(x_243, 1);
 x_246 = x_243;
} else {
 lean_dec_ref(x_243);
 x_246 = lean_box(0);
}
x_247 = lean_mk_string("Bool");
x_248 = lean_name_mk_string(x_9, x_247);
x_249 = lean_mk_string("true");
lean_inc(x_248);
x_250 = lean_name_mk_string(x_248, x_249);
x_251 = l_Lean_Expr_isConstOf(x_244, x_250);
if (x_251 == 0)
{
lean_object* x_252; lean_object* x_253; uint8_t x_254; 
lean_dec(x_250);
lean_dec(x_11);
x_252 = lean_mk_string("false");
x_253 = lean_name_mk_string(x_248, x_252);
x_254 = l_Lean_Expr_isConstOf(x_244, x_253);
lean_dec(x_244);
if (x_254 == 0)
{
lean_object* x_255; lean_object* x_256; 
lean_dec(x_253);
lean_dec(x_238);
lean_dec(x_2);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_255 = lean_box(0);
if (lean_is_scalar(x_246)) {
 x_256 = lean_alloc_ctor(0, 2, 0);
} else {
 x_256 = x_246;
}
lean_ctor_set(x_256, 0, x_255);
lean_ctor_set(x_256, 1, x_245);
return x_256;
}
else
{
lean_object* x_257; 
lean_dec(x_246);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_238);
x_257 = l_Lean_Meta_mkEqRefl(x_238, x_2, x_3, x_4, x_5, x_245);
if (lean_obj_tag(x_257) == 0)
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
x_258 = lean_ctor_get(x_257, 1);
lean_inc(x_258);
lean_dec(x_257);
x_259 = lean_box(0);
x_260 = l_Lean_mkConst(x_253, x_259);
x_261 = l_Lean_Meta_mkEqRefl(x_260, x_2, x_3, x_4, x_5, x_258);
if (lean_obj_tag(x_261) == 0)
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_262 = lean_ctor_get(x_261, 0);
lean_inc(x_262);
x_263 = lean_ctor_get(x_261, 1);
lean_inc(x_263);
if (lean_is_exclusive(x_261)) {
 lean_ctor_release(x_261, 0);
 lean_ctor_release(x_261, 1);
 x_264 = x_261;
} else {
 lean_dec_ref(x_261);
 x_264 = lean_box(0);
}
x_265 = l_Lean_mkConst(x_14, x_259);
x_266 = lean_mk_string("eqFalseOfDecide");
x_267 = lean_name_mk_string(x_9, x_266);
x_268 = l_Lean_mkConst(x_267, x_259);
x_269 = l_Lean_Expr_appArg_x21(x_238);
lean_dec(x_238);
x_270 = lean_unsigned_to_nat(3u);
x_271 = lean_mk_empty_array_with_capacity(x_270);
x_272 = lean_array_push(x_271, x_1);
x_273 = lean_array_push(x_272, x_269);
x_274 = lean_array_push(x_273, x_262);
x_275 = l_Lean_mkAppN(x_268, x_274);
lean_dec(x_274);
x_276 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_276, 0, x_275);
x_277 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_277, 0, x_265);
lean_ctor_set(x_277, 1, x_276);
x_278 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_278, 0, x_277);
if (lean_is_scalar(x_264)) {
 x_279 = lean_alloc_ctor(0, 2, 0);
} else {
 x_279 = x_264;
}
lean_ctor_set(x_279, 0, x_278);
lean_ctor_set(x_279, 1, x_263);
return x_279;
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
lean_dec(x_238);
lean_dec(x_14);
lean_dec(x_1);
x_280 = lean_ctor_get(x_261, 1);
lean_inc(x_280);
if (lean_is_exclusive(x_261)) {
 lean_ctor_release(x_261, 0);
 lean_ctor_release(x_261, 1);
 x_281 = x_261;
} else {
 lean_dec_ref(x_261);
 x_281 = lean_box(0);
}
x_282 = lean_box(0);
if (lean_is_scalar(x_281)) {
 x_283 = lean_alloc_ctor(0, 2, 0);
} else {
 x_283 = x_281;
 lean_ctor_set_tag(x_283, 0);
}
lean_ctor_set(x_283, 0, x_282);
lean_ctor_set(x_283, 1, x_280);
return x_283;
}
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; 
lean_dec(x_253);
lean_dec(x_238);
lean_dec(x_2);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_284 = lean_ctor_get(x_257, 1);
lean_inc(x_284);
if (lean_is_exclusive(x_257)) {
 lean_ctor_release(x_257, 0);
 lean_ctor_release(x_257, 1);
 x_285 = x_257;
} else {
 lean_dec_ref(x_257);
 x_285 = lean_box(0);
}
x_286 = lean_box(0);
if (lean_is_scalar(x_285)) {
 x_287 = lean_alloc_ctor(0, 2, 0);
} else {
 x_287 = x_285;
 lean_ctor_set_tag(x_287, 0);
}
lean_ctor_set(x_287, 0, x_286);
lean_ctor_set(x_287, 1, x_284);
return x_287;
}
}
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; 
lean_dec(x_248);
lean_dec(x_246);
lean_dec(x_244);
lean_dec(x_14);
x_288 = lean_box(0);
x_289 = l_Lean_mkConst(x_250, x_288);
x_290 = l_Lean_Meta_mkEqRefl(x_289, x_2, x_3, x_4, x_5, x_245);
if (lean_obj_tag(x_290) == 0)
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; 
x_291 = lean_ctor_get(x_290, 0);
lean_inc(x_291);
x_292 = lean_ctor_get(x_290, 1);
lean_inc(x_292);
if (lean_is_exclusive(x_290)) {
 lean_ctor_release(x_290, 0);
 lean_ctor_release(x_290, 1);
 x_293 = x_290;
} else {
 lean_dec_ref(x_290);
 x_293 = lean_box(0);
}
x_294 = l_Lean_mkConst(x_11, x_288);
x_295 = lean_mk_string("eqTrueOfDecide");
x_296 = lean_name_mk_string(x_9, x_295);
x_297 = l_Lean_mkConst(x_296, x_288);
x_298 = l_Lean_Expr_appArg_x21(x_238);
lean_dec(x_238);
x_299 = lean_unsigned_to_nat(3u);
x_300 = lean_mk_empty_array_with_capacity(x_299);
x_301 = lean_array_push(x_300, x_1);
x_302 = lean_array_push(x_301, x_298);
x_303 = lean_array_push(x_302, x_291);
x_304 = l_Lean_mkAppN(x_297, x_303);
lean_dec(x_303);
x_305 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_305, 0, x_304);
x_306 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_306, 0, x_294);
lean_ctor_set(x_306, 1, x_305);
x_307 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_307, 0, x_306);
if (lean_is_scalar(x_293)) {
 x_308 = lean_alloc_ctor(0, 2, 0);
} else {
 x_308 = x_293;
}
lean_ctor_set(x_308, 0, x_307);
lean_ctor_set(x_308, 1, x_292);
return x_308;
}
else
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; 
lean_dec(x_238);
lean_dec(x_11);
lean_dec(x_1);
x_309 = lean_ctor_get(x_290, 1);
lean_inc(x_309);
if (lean_is_exclusive(x_290)) {
 lean_ctor_release(x_290, 0);
 lean_ctor_release(x_290, 1);
 x_310 = x_290;
} else {
 lean_dec_ref(x_290);
 x_310 = lean_box(0);
}
x_311 = lean_box(0);
if (lean_is_scalar(x_310)) {
 x_312 = lean_alloc_ctor(0, 2, 0);
} else {
 x_312 = x_310;
 lean_ctor_set_tag(x_312, 0);
}
lean_ctor_set(x_312, 0, x_311);
lean_ctor_set(x_312, 1, x_309);
return x_312;
}
}
}
else
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; 
lean_dec(x_238);
lean_dec(x_2);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_313 = lean_ctor_get(x_243, 1);
lean_inc(x_313);
if (lean_is_exclusive(x_243)) {
 lean_ctor_release(x_243, 0);
 lean_ctor_release(x_243, 1);
 x_314 = x_243;
} else {
 lean_dec_ref(x_243);
 x_314 = lean_box(0);
}
x_315 = lean_box(0);
if (lean_is_scalar(x_314)) {
 x_316 = lean_alloc_ctor(0, 2, 0);
} else {
 x_316 = x_314;
 lean_ctor_set_tag(x_316, 0);
}
lean_ctor_set(x_316, 0, x_315);
lean_ctor_set(x_316, 1, x_313);
return x_316;
}
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; 
lean_dec(x_2);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_223);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_317 = lean_ctor_get(x_237, 1);
lean_inc(x_317);
if (lean_is_exclusive(x_237)) {
 lean_ctor_release(x_237, 0);
 lean_ctor_release(x_237, 1);
 x_318 = x_237;
} else {
 lean_dec_ref(x_237);
 x_318 = lean_box(0);
}
x_319 = lean_box(0);
if (lean_is_scalar(x_318)) {
 x_320 = lean_alloc_ctor(0, 2, 0);
} else {
 x_320 = x_318;
 lean_ctor_set_tag(x_320, 0);
}
lean_ctor_set(x_320, 0, x_319);
lean_ctor_set(x_320, 1, x_317);
return x_320;
}
}
}
else
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; uint8_t x_325; uint8_t x_326; uint8_t x_327; uint8_t x_328; uint8_t x_329; uint8_t x_330; uint8_t x_331; uint8_t x_332; uint8_t x_333; lean_object* x_334; uint8_t x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; 
x_321 = lean_ctor_get(x_2, 0);
x_322 = lean_ctor_get(x_2, 1);
x_323 = lean_ctor_get(x_2, 2);
x_324 = lean_ctor_get(x_2, 3);
lean_inc(x_324);
lean_inc(x_323);
lean_inc(x_322);
lean_inc(x_321);
lean_dec(x_2);
x_325 = lean_ctor_get_uint8(x_321, 0);
x_326 = lean_ctor_get_uint8(x_321, 1);
x_327 = lean_ctor_get_uint8(x_321, 2);
x_328 = lean_ctor_get_uint8(x_321, 3);
x_329 = lean_ctor_get_uint8(x_321, 4);
x_330 = lean_ctor_get_uint8(x_321, 6);
x_331 = lean_ctor_get_uint8(x_321, 7);
x_332 = lean_ctor_get_uint8(x_321, 8);
x_333 = lean_ctor_get_uint8(x_321, 9);
if (lean_is_exclusive(x_321)) {
 x_334 = x_321;
} else {
 lean_dec_ref(x_321);
 x_334 = lean_box(0);
}
x_335 = 3;
if (lean_is_scalar(x_334)) {
 x_336 = lean_alloc_ctor(0, 0, 10);
} else {
 x_336 = x_334;
}
lean_ctor_set_uint8(x_336, 0, x_325);
lean_ctor_set_uint8(x_336, 1, x_326);
lean_ctor_set_uint8(x_336, 2, x_327);
lean_ctor_set_uint8(x_336, 3, x_328);
lean_ctor_set_uint8(x_336, 4, x_329);
lean_ctor_set_uint8(x_336, 5, x_335);
lean_ctor_set_uint8(x_336, 6, x_330);
lean_ctor_set_uint8(x_336, 7, x_331);
lean_ctor_set_uint8(x_336, 8, x_332);
lean_ctor_set_uint8(x_336, 9, x_333);
lean_inc(x_324);
lean_inc(x_323);
lean_inc(x_322);
x_337 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_337, 0, x_336);
lean_ctor_set(x_337, 1, x_322);
lean_ctor_set(x_337, 2, x_323);
lean_ctor_set(x_337, 3, x_324);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_337);
lean_inc(x_1);
x_338 = l_Lean_Meta_mkDecide(x_1, x_337, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_338) == 0)
{
lean_object* x_339; lean_object* x_340; uint8_t x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; 
x_339 = lean_ctor_get(x_338, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_338, 1);
lean_inc(x_340);
lean_dec(x_338);
x_341 = 1;
x_342 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_342, 0, x_325);
lean_ctor_set_uint8(x_342, 1, x_326);
lean_ctor_set_uint8(x_342, 2, x_327);
lean_ctor_set_uint8(x_342, 3, x_328);
lean_ctor_set_uint8(x_342, 4, x_329);
lean_ctor_set_uint8(x_342, 5, x_341);
lean_ctor_set_uint8(x_342, 6, x_330);
lean_ctor_set_uint8(x_342, 7, x_331);
lean_ctor_set_uint8(x_342, 8, x_332);
lean_ctor_set_uint8(x_342, 9, x_333);
x_343 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_343, 0, x_342);
lean_ctor_set(x_343, 1, x_322);
lean_ctor_set(x_343, 2, x_323);
lean_ctor_set(x_343, 3, x_324);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_339);
x_344 = l_Lean_Meta_whnf(x_339, x_343, x_3, x_4, x_5, x_340);
if (lean_obj_tag(x_344) == 0)
{
lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; uint8_t x_352; 
x_345 = lean_ctor_get(x_344, 0);
lean_inc(x_345);
x_346 = lean_ctor_get(x_344, 1);
lean_inc(x_346);
if (lean_is_exclusive(x_344)) {
 lean_ctor_release(x_344, 0);
 lean_ctor_release(x_344, 1);
 x_347 = x_344;
} else {
 lean_dec_ref(x_344);
 x_347 = lean_box(0);
}
x_348 = lean_mk_string("Bool");
x_349 = lean_name_mk_string(x_9, x_348);
x_350 = lean_mk_string("true");
lean_inc(x_349);
x_351 = lean_name_mk_string(x_349, x_350);
x_352 = l_Lean_Expr_isConstOf(x_345, x_351);
if (x_352 == 0)
{
lean_object* x_353; lean_object* x_354; uint8_t x_355; 
lean_dec(x_351);
lean_dec(x_11);
x_353 = lean_mk_string("false");
x_354 = lean_name_mk_string(x_349, x_353);
x_355 = l_Lean_Expr_isConstOf(x_345, x_354);
lean_dec(x_345);
if (x_355 == 0)
{
lean_object* x_356; lean_object* x_357; 
lean_dec(x_354);
lean_dec(x_339);
lean_dec(x_337);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_356 = lean_box(0);
if (lean_is_scalar(x_347)) {
 x_357 = lean_alloc_ctor(0, 2, 0);
} else {
 x_357 = x_347;
}
lean_ctor_set(x_357, 0, x_356);
lean_ctor_set(x_357, 1, x_346);
return x_357;
}
else
{
lean_object* x_358; 
lean_dec(x_347);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_337);
lean_inc(x_339);
x_358 = l_Lean_Meta_mkEqRefl(x_339, x_337, x_3, x_4, x_5, x_346);
if (lean_obj_tag(x_358) == 0)
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; 
x_359 = lean_ctor_get(x_358, 1);
lean_inc(x_359);
lean_dec(x_358);
x_360 = lean_box(0);
x_361 = l_Lean_mkConst(x_354, x_360);
x_362 = l_Lean_Meta_mkEqRefl(x_361, x_337, x_3, x_4, x_5, x_359);
if (lean_obj_tag(x_362) == 0)
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; 
x_363 = lean_ctor_get(x_362, 0);
lean_inc(x_363);
x_364 = lean_ctor_get(x_362, 1);
lean_inc(x_364);
if (lean_is_exclusive(x_362)) {
 lean_ctor_release(x_362, 0);
 lean_ctor_release(x_362, 1);
 x_365 = x_362;
} else {
 lean_dec_ref(x_362);
 x_365 = lean_box(0);
}
x_366 = l_Lean_mkConst(x_14, x_360);
x_367 = lean_mk_string("eqFalseOfDecide");
x_368 = lean_name_mk_string(x_9, x_367);
x_369 = l_Lean_mkConst(x_368, x_360);
x_370 = l_Lean_Expr_appArg_x21(x_339);
lean_dec(x_339);
x_371 = lean_unsigned_to_nat(3u);
x_372 = lean_mk_empty_array_with_capacity(x_371);
x_373 = lean_array_push(x_372, x_1);
x_374 = lean_array_push(x_373, x_370);
x_375 = lean_array_push(x_374, x_363);
x_376 = l_Lean_mkAppN(x_369, x_375);
lean_dec(x_375);
x_377 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_377, 0, x_376);
x_378 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_378, 0, x_366);
lean_ctor_set(x_378, 1, x_377);
x_379 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_379, 0, x_378);
if (lean_is_scalar(x_365)) {
 x_380 = lean_alloc_ctor(0, 2, 0);
} else {
 x_380 = x_365;
}
lean_ctor_set(x_380, 0, x_379);
lean_ctor_set(x_380, 1, x_364);
return x_380;
}
else
{
lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; 
lean_dec(x_339);
lean_dec(x_14);
lean_dec(x_1);
x_381 = lean_ctor_get(x_362, 1);
lean_inc(x_381);
if (lean_is_exclusive(x_362)) {
 lean_ctor_release(x_362, 0);
 lean_ctor_release(x_362, 1);
 x_382 = x_362;
} else {
 lean_dec_ref(x_362);
 x_382 = lean_box(0);
}
x_383 = lean_box(0);
if (lean_is_scalar(x_382)) {
 x_384 = lean_alloc_ctor(0, 2, 0);
} else {
 x_384 = x_382;
 lean_ctor_set_tag(x_384, 0);
}
lean_ctor_set(x_384, 0, x_383);
lean_ctor_set(x_384, 1, x_381);
return x_384;
}
}
else
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; 
lean_dec(x_354);
lean_dec(x_339);
lean_dec(x_337);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_385 = lean_ctor_get(x_358, 1);
lean_inc(x_385);
if (lean_is_exclusive(x_358)) {
 lean_ctor_release(x_358, 0);
 lean_ctor_release(x_358, 1);
 x_386 = x_358;
} else {
 lean_dec_ref(x_358);
 x_386 = lean_box(0);
}
x_387 = lean_box(0);
if (lean_is_scalar(x_386)) {
 x_388 = lean_alloc_ctor(0, 2, 0);
} else {
 x_388 = x_386;
 lean_ctor_set_tag(x_388, 0);
}
lean_ctor_set(x_388, 0, x_387);
lean_ctor_set(x_388, 1, x_385);
return x_388;
}
}
}
else
{
lean_object* x_389; lean_object* x_390; lean_object* x_391; 
lean_dec(x_349);
lean_dec(x_347);
lean_dec(x_345);
lean_dec(x_14);
x_389 = lean_box(0);
x_390 = l_Lean_mkConst(x_351, x_389);
x_391 = l_Lean_Meta_mkEqRefl(x_390, x_337, x_3, x_4, x_5, x_346);
if (lean_obj_tag(x_391) == 0)
{
lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; 
x_392 = lean_ctor_get(x_391, 0);
lean_inc(x_392);
x_393 = lean_ctor_get(x_391, 1);
lean_inc(x_393);
if (lean_is_exclusive(x_391)) {
 lean_ctor_release(x_391, 0);
 lean_ctor_release(x_391, 1);
 x_394 = x_391;
} else {
 lean_dec_ref(x_391);
 x_394 = lean_box(0);
}
x_395 = l_Lean_mkConst(x_11, x_389);
x_396 = lean_mk_string("eqTrueOfDecide");
x_397 = lean_name_mk_string(x_9, x_396);
x_398 = l_Lean_mkConst(x_397, x_389);
x_399 = l_Lean_Expr_appArg_x21(x_339);
lean_dec(x_339);
x_400 = lean_unsigned_to_nat(3u);
x_401 = lean_mk_empty_array_with_capacity(x_400);
x_402 = lean_array_push(x_401, x_1);
x_403 = lean_array_push(x_402, x_399);
x_404 = lean_array_push(x_403, x_392);
x_405 = l_Lean_mkAppN(x_398, x_404);
lean_dec(x_404);
x_406 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_406, 0, x_405);
x_407 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_407, 0, x_395);
lean_ctor_set(x_407, 1, x_406);
x_408 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_408, 0, x_407);
if (lean_is_scalar(x_394)) {
 x_409 = lean_alloc_ctor(0, 2, 0);
} else {
 x_409 = x_394;
}
lean_ctor_set(x_409, 0, x_408);
lean_ctor_set(x_409, 1, x_393);
return x_409;
}
else
{
lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; 
lean_dec(x_339);
lean_dec(x_11);
lean_dec(x_1);
x_410 = lean_ctor_get(x_391, 1);
lean_inc(x_410);
if (lean_is_exclusive(x_391)) {
 lean_ctor_release(x_391, 0);
 lean_ctor_release(x_391, 1);
 x_411 = x_391;
} else {
 lean_dec_ref(x_391);
 x_411 = lean_box(0);
}
x_412 = lean_box(0);
if (lean_is_scalar(x_411)) {
 x_413 = lean_alloc_ctor(0, 2, 0);
} else {
 x_413 = x_411;
 lean_ctor_set_tag(x_413, 0);
}
lean_ctor_set(x_413, 0, x_412);
lean_ctor_set(x_413, 1, x_410);
return x_413;
}
}
}
else
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; 
lean_dec(x_339);
lean_dec(x_337);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_414 = lean_ctor_get(x_344, 1);
lean_inc(x_414);
if (lean_is_exclusive(x_344)) {
 lean_ctor_release(x_344, 0);
 lean_ctor_release(x_344, 1);
 x_415 = x_344;
} else {
 lean_dec_ref(x_344);
 x_415 = lean_box(0);
}
x_416 = lean_box(0);
if (lean_is_scalar(x_415)) {
 x_417 = lean_alloc_ctor(0, 2, 0);
} else {
 x_417 = x_415;
 lean_ctor_set_tag(x_417, 0);
}
lean_ctor_set(x_417, 0, x_416);
lean_ctor_set(x_417, 1, x_414);
return x_417;
}
}
else
{
lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; 
lean_dec(x_337);
lean_dec(x_324);
lean_dec(x_323);
lean_dec(x_322);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_418 = lean_ctor_get(x_338, 1);
lean_inc(x_418);
if (lean_is_exclusive(x_338)) {
 lean_ctor_release(x_338, 0);
 lean_ctor_release(x_338, 1);
 x_419 = x_338;
} else {
 lean_dec_ref(x_338);
 x_419 = lean_box(0);
}
x_420 = lean_box(0);
if (lean_is_scalar(x_419)) {
 x_421 = lean_alloc_ctor(0, 2, 0);
} else {
 x_421 = x_419;
 lean_ctor_set_tag(x_421, 0);
}
lean_ctor_set(x_421, 0, x_420);
lean_ctor_set(x_421, 1, x_418);
return x_421;
}
}
}
else
{
lean_object* x_422; lean_object* x_423; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_422 = lean_box(0);
x_423 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_423, 0, x_422);
lean_ctor_set(x_423, 1, x_6);
return x_423;
}
}
else
{
lean_object* x_424; lean_object* x_425; 
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_424 = lean_box(0);
x_425 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_425, 0, x_424);
lean_ctor_set(x_425, 1, x_6);
return x_425;
}
}
else
{
lean_object* x_426; lean_object* x_427; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_426 = lean_box(0);
x_427 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_427, 0, x_426);
lean_ctor_set(x_427, 1, x_6);
return x_427;
}
}
else
{
lean_object* x_428; lean_object* x_429; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_428 = lean_box(0);
x_429 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_429, 0, x_428);
lean_ctor_set(x_429, 1, x_6);
return x_429;
}
}
}
lean_object* l_Lean_Meta_Simp_tryRewriteUsingDecide(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
x_11 = lean_ctor_get_uint8(x_10, sizeof(void*)*2 + 9);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_1);
x_12 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f(x_1, x_5, x_6, x_7, x_8, x_9);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_apply_7(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 0);
lean_dec(x_18);
x_19 = lean_ctor_get(x_14, 0);
lean_inc(x_19);
lean_dec(x_14);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_13, 0, x_20);
return x_13;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec(x_14);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewritePre(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 4);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_mk_string("pre");
x_14 = l_Lean_Meta_Simp_rewrite(x_1, x_11, x_12, x_2, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_14, 0);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_14);
x_20 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_20, 0, x_18);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_14);
if (x_22 == 0)
{
return x_14;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_Meta_Simp_rewritePost(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 4);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_mk_string("post");
x_14 = l_Lean_Meta_Simp_rewrite(x_1, x_11, x_12, x_2, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_14, 0);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_14);
x_20 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_20, 0, x_18);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_14);
if (x_22 == 0)
{
return x_14;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_Meta_Simp_preDefault(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_10 = l_Lean_Meta_Simp_rewriteCtorEq_x3f(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Meta_Simp_rewritePre(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
lean_dec(x_15);
x_16 = lean_ctor_get(x_11, 0);
lean_inc(x_16);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_10, 0, x_17);
return x_10;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_dec(x_10);
x_19 = lean_ctor_get(x_11, 0);
lean_inc(x_19);
lean_dec(x_11);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_10);
if (x_22 == 0)
{
return x_10;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_10, 0);
x_24 = lean_ctor_get(x_10, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_10);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_Meta_Simp_postDefault(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_10 = l_Lean_Meta_Simp_rewriteCtorEq_x3f(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
x_13 = lean_ctor_get_uint8(x_12, sizeof(void*)*2 + 9);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = l_Lean_Meta_Simp_rewritePost(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_17 = l_Lean_Meta_Simp_rewriteUsingDecide_x3f(x_1, x_5, x_6, x_7, x_8, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Meta_Simp_rewritePost(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_21 = !lean_is_exclusive(x_17);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_17, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_18, 0);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_17, 0, x_24);
return x_17;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_17, 1);
lean_inc(x_25);
lean_dec(x_17);
x_26 = lean_ctor_get(x_18, 0);
lean_inc(x_26);
lean_dec(x_18);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
}
else
{
uint8_t x_29; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_10);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_10, 0);
lean_dec(x_30);
x_31 = lean_ctor_get(x_11, 0);
lean_inc(x_31);
lean_dec(x_11);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_10, 0, x_32);
return x_10;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_33 = lean_ctor_get(x_10, 1);
lean_inc(x_33);
lean_dec(x_10);
x_34 = lean_ctor_get(x_11, 0);
lean_inc(x_34);
lean_dec(x_11);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_37 = !lean_is_exclusive(x_10);
if (x_37 == 0)
{
return x_10;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_10, 0);
x_39 = lean_ctor_get(x_10, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_10);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_SynthInstance(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_Types(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_Tactic_Simp_Rewrite(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SynthInstance(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Types(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
