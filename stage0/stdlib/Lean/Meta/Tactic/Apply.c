// Lean compiler output
// Module: Lean.Meta.Tactic.Apply
// Imports: Init Lean.Util.FindMVar Lean.Meta.ExprDefEq Lean.Meta.SynthInstance Lean.Meta.CollectMVars Lean.Meta.Tactic.Util
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
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_FindMVar_main___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_apply_match__1(lean_object*);
lean_object* l_Lean_Meta_getExpectedNumArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getExpectedNumArgs_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_applyRefl_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError(lean_object*);
lean_object* l_Lean_Meta_saveState___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_apply___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_append___rarg(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_observing_x3f___at_Lean_Meta_splitAnd___spec__1___at_Lean_Meta_splitAnd___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getExpectedNumArgs_match__1(lean_object*);
lean_object* l_Lean_Meta_apply___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_applyRefl___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_checkNotAssigned___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_appendTag(lean_object*, lean_object*);
lean_object* l_Lean_Meta_postprocessAppMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthAppInstances___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_FindMVar_main___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__1___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_apply___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_apply___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___at_Lean_Meta_apply___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_appendParentTag___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_apply___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderNonDependentFirst___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FindMVar_main___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_applyRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_headBetaMVarType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_apply___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FindMVar_visit(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FindMVar_main___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__1___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_apply___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_apply_match__1___rarg(lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_Meta_apply___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderNonDependentFirst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_Meta_synthAppInstances___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_applyRefl___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_Meta_saturate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getExpectedNumArgsAux___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Meta_getExpectedNumArgsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_Meta_synthAppInstances___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_apply___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_postprocessAppMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_apply___spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern uint8_t l_Lean_instInhabitedBinderInfo;
lean_object* l_Lean_Meta_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderNonDependentFirst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_elem___at_Lean_Meta_apply___spec__1___boxed(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_Meta_synthAppInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderNonDependentFirst___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_apply___spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_isExprMVarAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_applyRefl_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderNonDependentFirst_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderNonDependentFirst_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_getExpectedNumArgsAux___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_Meta_appendParentTag___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_setMVarTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_splitAnd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_forM_loop___at_Lean_Meta_appendParentTag___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_observing_x3f___at_Lean_Meta_splitAnd___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_applyRefl___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___boxed(lean_object*);
lean_object* l_Lean_Meta_appendParentTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_forM___at_Lean_Meta_apply___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getExpectedNumArgsAux___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_array_get_size(x_1);
x_9 = l_Lean_Expr_getAppFn(x_2);
x_10 = l_Lean_Expr_isMVar(x_9);
lean_dec(x_9);
x_11 = lean_box(x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_7);
return x_13;
}
}
lean_object* l_Lean_Meta_getExpectedNumArgsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_2);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_10 = 1;
lean_ctor_set_uint8(x_8, 5, x_10);
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_getExpectedNumArgsAux___lambda__1___boxed), 7, 0);
x_12 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_1, x_11, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
else
{
uint8_t x_21; uint8_t x_22; uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; uint8_t x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_21 = lean_ctor_get_uint8(x_8, 0);
x_22 = lean_ctor_get_uint8(x_8, 1);
x_23 = lean_ctor_get_uint8(x_8, 2);
x_24 = lean_ctor_get_uint8(x_8, 3);
x_25 = lean_ctor_get_uint8(x_8, 4);
x_26 = lean_ctor_get_uint8(x_8, 6);
x_27 = lean_ctor_get_uint8(x_8, 7);
x_28 = lean_ctor_get_uint8(x_8, 8);
x_29 = lean_ctor_get_uint8(x_8, 9);
lean_dec(x_8);
x_30 = 1;
x_31 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_31, 0, x_21);
lean_ctor_set_uint8(x_31, 1, x_22);
lean_ctor_set_uint8(x_31, 2, x_23);
lean_ctor_set_uint8(x_31, 3, x_24);
lean_ctor_set_uint8(x_31, 4, x_25);
lean_ctor_set_uint8(x_31, 5, x_30);
lean_ctor_set_uint8(x_31, 6, x_26);
lean_ctor_set_uint8(x_31, 7, x_27);
lean_ctor_set_uint8(x_31, 8, x_28);
lean_ctor_set_uint8(x_31, 9, x_29);
lean_ctor_set(x_2, 0, x_31);
x_32 = lean_alloc_closure((void*)(l_Lean_Meta_getExpectedNumArgsAux___lambda__1___boxed), 7, 0);
x_33 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_1, x_32, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_36 = x_33;
} else {
 lean_dec_ref(x_33);
 x_36 = lean_box(0);
}
if (lean_is_scalar(x_36)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_36;
}
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_33, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_33, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_40 = x_33;
} else {
 lean_dec_ref(x_33);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(1, 2, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; uint8_t x_49; uint8_t x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; uint8_t x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_42 = lean_ctor_get(x_2, 0);
x_43 = lean_ctor_get(x_2, 1);
x_44 = lean_ctor_get(x_2, 2);
x_45 = lean_ctor_get(x_2, 3);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_2);
x_46 = lean_ctor_get_uint8(x_42, 0);
x_47 = lean_ctor_get_uint8(x_42, 1);
x_48 = lean_ctor_get_uint8(x_42, 2);
x_49 = lean_ctor_get_uint8(x_42, 3);
x_50 = lean_ctor_get_uint8(x_42, 4);
x_51 = lean_ctor_get_uint8(x_42, 6);
x_52 = lean_ctor_get_uint8(x_42, 7);
x_53 = lean_ctor_get_uint8(x_42, 8);
x_54 = lean_ctor_get_uint8(x_42, 9);
if (lean_is_exclusive(x_42)) {
 x_55 = x_42;
} else {
 lean_dec_ref(x_42);
 x_55 = lean_box(0);
}
x_56 = 1;
if (lean_is_scalar(x_55)) {
 x_57 = lean_alloc_ctor(0, 0, 10);
} else {
 x_57 = x_55;
}
lean_ctor_set_uint8(x_57, 0, x_46);
lean_ctor_set_uint8(x_57, 1, x_47);
lean_ctor_set_uint8(x_57, 2, x_48);
lean_ctor_set_uint8(x_57, 3, x_49);
lean_ctor_set_uint8(x_57, 4, x_50);
lean_ctor_set_uint8(x_57, 5, x_56);
lean_ctor_set_uint8(x_57, 6, x_51);
lean_ctor_set_uint8(x_57, 7, x_52);
lean_ctor_set_uint8(x_57, 8, x_53);
lean_ctor_set_uint8(x_57, 9, x_54);
x_58 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_43);
lean_ctor_set(x_58, 2, x_44);
lean_ctor_set(x_58, 3, x_45);
x_59 = lean_alloc_closure((void*)(l_Lean_Meta_getExpectedNumArgsAux___lambda__1___boxed), 7, 0);
x_60 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_1, x_59, x_58, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_63 = x_60;
} else {
 lean_dec_ref(x_60);
 x_63 = lean_box(0);
}
if (lean_is_scalar(x_63)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_63;
}
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_62);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_60, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_60, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_60)) {
 lean_ctor_release(x_60, 0);
 lean_ctor_release(x_60, 1);
 x_67 = x_60;
} else {
 lean_dec_ref(x_60);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(1, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
}
}
lean_object* l_Lean_Meta_getExpectedNumArgsAux___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_getExpectedNumArgsAux___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Meta_getExpectedNumArgs_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_getExpectedNumArgs_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_getExpectedNumArgs_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_getExpectedNumArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_getExpectedNumArgsAux(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
lean_ctor_set(x_7, 0, x_10);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_7);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_7);
if (x_15 == 0)
{
return x_7;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_7, 0);
x_17 = lean_ctor_get(x_7, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_7);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_9 = lean_box(0);
x_10 = lean_mk_string("apply");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_mk_string("failed to unify");
x_13 = l_Lean_stringToMessageData(x_12);
lean_dec(x_12);
x_14 = l_Lean_indentExpr(x_2);
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_mk_string("\nwith");
x_17 = l_Lean_stringToMessageData(x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_indentExpr(x_3);
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_mk_string("");
x_22 = l_Lean_stringToMessageData(x_21);
lean_dec(x_21);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_box(0);
x_25 = l_Lean_Meta_throwTacticEx___rarg(x_11, x_1, x_23, x_24, x_4, x_5, x_6, x_7, x_8);
return x_25;
}
}
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
lean_object* l_Nat_forM_loop___at_Lean_Meta_synthAppInstances___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_6, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; uint8_t x_22; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_6, x_14);
lean_dec(x_6);
x_16 = lean_nat_sub(x_5, x_15);
x_17 = lean_nat_sub(x_16, x_14);
lean_dec(x_16);
x_18 = l_Lean_instInhabitedBinderInfo;
x_19 = lean_box(x_18);
x_20 = lean_array_get(x_19, x_4, x_17);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
x_22 = l_Lean_BinderInfo_isInstImplicit(x_21);
if (x_22 == 0)
{
lean_dec(x_17);
x_6 = x_15;
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = l_Lean_instInhabitedExpr;
x_25 = lean_array_get(x_24, x_3, x_17);
lean_dec(x_17);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_25);
x_26 = l_Lean_Meta_inferType(x_25, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_box(0);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_30 = l_Lean_Meta_synthInstance(x_27, x_29, x_7, x_8, x_9, x_10, x_28);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_33 = l_Lean_Meta_isExprDefEq(x_25, x_31, x_7, x_8, x_9, x_10, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_unbox(x_34);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
lean_dec(x_15);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_mk_string("failed to assign synthesized instance");
x_38 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_38, 0, x_37);
x_39 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = lean_box(0);
x_41 = l_Lean_Meta_throwTacticEx___rarg(x_1, x_2, x_39, x_40, x_7, x_8, x_9, x_10, x_36);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
return x_41;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_41, 0);
x_44 = lean_ctor_get(x_41, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_41);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
else
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_33, 1);
lean_inc(x_46);
lean_dec(x_33);
x_6 = x_15;
x_11 = x_46;
goto _start;
}
}
else
{
uint8_t x_48; 
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_33);
if (x_48 == 0)
{
return x_33;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_33, 0);
x_50 = lean_ctor_get(x_33, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_33);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_25);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_30);
if (x_52 == 0)
{
return x_30;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_30, 0);
x_54 = lean_ctor_get(x_30, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_30);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_25);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_26);
if (x_56 == 0)
{
return x_26;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_26, 0);
x_58 = lean_ctor_get(x_26, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_26);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
else
{
lean_object* x_60; lean_object* x_61; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_60 = lean_box(0);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_11);
return x_61;
}
}
}
lean_object* l_Lean_Meta_synthAppInstances(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_get_size(x_3);
lean_inc(x_10);
x_11 = l_Nat_forM_loop___at_Lean_Meta_synthAppInstances___spec__1(x_1, x_2, x_3, x_4, x_10, x_10, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_10);
return x_11;
}
}
lean_object* l_Nat_forM_loop___at_Lean_Meta_synthAppInstances___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Nat_forM_loop___at_Lean_Meta_synthAppInstances___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_Lean_Meta_synthAppInstances___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_synthAppInstances(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Nat_forM_loop___at_Lean_Meta_appendParentTag___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_eq(x_5, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_5, x_13);
lean_dec(x_5);
x_15 = lean_nat_sub(x_4, x_14);
x_16 = lean_nat_sub(x_15, x_13);
lean_dec(x_15);
x_17 = l_Lean_instInhabitedExpr;
x_18 = lean_array_get(x_17, x_1, x_16);
x_19 = l_Lean_Expr_mvarId_x21(x_18);
lean_dec(x_18);
x_20 = l_Lean_Meta_isExprMVarAssigned(x_19, x_6, x_7, x_8, x_9, x_10);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_unbox(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; uint8_t x_28; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = l_Lean_instInhabitedBinderInfo;
x_25 = lean_box(x_24);
x_26 = lean_array_get(x_25, x_2, x_16);
lean_dec(x_16);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
x_28 = l_Lean_BinderInfo_isInstImplicit(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
lean_inc(x_19);
x_29 = l_Lean_Meta_getMVarTag(x_19, x_6, x_7, x_8, x_9, x_23);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
lean_inc(x_3);
x_32 = l_Lean_Meta_appendTag(x_3, x_30);
x_33 = l_Lean_Meta_setMVarTag(x_19, x_32, x_6, x_7, x_8, x_9, x_31);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_5 = x_14;
x_10 = x_34;
goto _start;
}
else
{
uint8_t x_36; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_3);
x_36 = !lean_is_exclusive(x_29);
if (x_36 == 0)
{
return x_29;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_29, 0);
x_38 = lean_ctor_get(x_29, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_29);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
lean_dec(x_19);
x_5 = x_14;
x_10 = x_23;
goto _start;
}
}
else
{
lean_object* x_41; 
lean_dec(x_19);
lean_dec(x_16);
x_41 = lean_ctor_get(x_20, 1);
lean_inc(x_41);
lean_dec(x_20);
x_5 = x_14;
x_10 = x_41;
goto _start;
}
}
else
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_5);
lean_dec(x_3);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_10);
return x_44;
}
}
}
lean_object* l_Lean_Meta_appendParentTag(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_getMVarTag(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
x_13 = lean_array_get_size(x_2);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_dec_eq(x_13, x_14);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = l_Lean_Name_isAnonymous(x_11);
if (x_16 == 0)
{
lean_object* x_17; 
lean_free_object(x_9);
lean_inc(x_13);
x_17 = l_Nat_forM_loop___at_Lean_Meta_appendParentTag___spec__1(x_2, x_3, x_11, x_13, x_13, x_4, x_5, x_6, x_7, x_12);
lean_dec(x_13);
return x_17;
}
else
{
lean_object* x_18; 
lean_dec(x_13);
lean_dec(x_11);
x_18 = lean_box(0);
lean_ctor_set(x_9, 0, x_18);
return x_9;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_13);
lean_free_object(x_9);
x_19 = l_Lean_instInhabitedExpr;
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_array_get(x_19, x_2, x_20);
x_22 = l_Lean_Expr_mvarId_x21(x_21);
lean_dec(x_21);
x_23 = l_Lean_Meta_setMVarTag(x_22, x_11, x_4, x_5, x_6, x_7, x_12);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_24 = lean_ctor_get(x_9, 0);
x_25 = lean_ctor_get(x_9, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_9);
x_26 = lean_array_get_size(x_2);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_dec_eq(x_26, x_27);
if (x_28 == 0)
{
uint8_t x_29; 
x_29 = l_Lean_Name_isAnonymous(x_24);
if (x_29 == 0)
{
lean_object* x_30; 
lean_inc(x_26);
x_30 = l_Nat_forM_loop___at_Lean_Meta_appendParentTag___spec__1(x_2, x_3, x_24, x_26, x_26, x_4, x_5, x_6, x_7, x_25);
lean_dec(x_26);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_26);
lean_dec(x_24);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_25);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_26);
x_33 = l_Lean_instInhabitedExpr;
x_34 = lean_unsigned_to_nat(0u);
x_35 = lean_array_get(x_33, x_2, x_34);
x_36 = l_Lean_Expr_mvarId_x21(x_35);
lean_dec(x_35);
x_37 = l_Lean_Meta_setMVarTag(x_36, x_24, x_4, x_5, x_6, x_7, x_25);
return x_37;
}
}
}
else
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_9);
if (x_38 == 0)
{
return x_9;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_9, 0);
x_40 = lean_ctor_get(x_9, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_9);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
lean_object* l_Nat_forM_loop___at_Lean_Meta_appendParentTag___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Nat_forM_loop___at_Lean_Meta_appendParentTag___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Meta_appendParentTag___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_appendParentTag(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_postprocessAppMVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
x_10 = l_Lean_Meta_synthAppInstances(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l_Lean_Meta_appendParentTag(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Meta_postprocessAppMVars___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_postprocessAppMVars(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
uint8_t l_Lean_FindMVar_main___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__1___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_Expr_mvarId_x21(x_1);
x_4 = lean_name_eq(x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_FindMVar_main___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_FindMVar_main___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__1___lambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_1);
switch (lean_obj_tag(x_2)) {
case 2:
{
lean_dec(x_4);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Lean_Expr_mvarId_x21(x_1);
lean_dec(x_1);
x_7 = lean_name_eq(x_5, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_5);
return x_3;
}
else
{
lean_object* x_8; 
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_5);
return x_8;
}
}
else
{
lean_dec(x_2);
lean_dec(x_1);
lean_inc(x_3);
return x_3;
}
}
case 5:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
lean_inc(x_4);
x_11 = l_Lean_FindMVar_visit(x_4, x_9, x_3);
x_12 = l_Lean_FindMVar_visit(x_4, x_10, x_11);
lean_dec(x_11);
return x_12;
}
case 6:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 2);
lean_inc(x_14);
lean_dec(x_2);
lean_inc(x_4);
x_15 = l_Lean_FindMVar_visit(x_4, x_13, x_3);
x_16 = l_Lean_FindMVar_visit(x_4, x_14, x_15);
lean_dec(x_15);
return x_16;
}
case 7:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_1);
x_17 = lean_ctor_get(x_2, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 2);
lean_inc(x_18);
lean_dec(x_2);
lean_inc(x_4);
x_19 = l_Lean_FindMVar_visit(x_4, x_17, x_3);
x_20 = l_Lean_FindMVar_visit(x_4, x_18, x_19);
lean_dec(x_19);
return x_20;
}
case 8:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_1);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_2, 2);
lean_inc(x_22);
x_23 = lean_ctor_get(x_2, 3);
lean_inc(x_23);
lean_dec(x_2);
lean_inc(x_4);
x_24 = l_Lean_FindMVar_visit(x_4, x_21, x_3);
lean_inc(x_4);
x_25 = l_Lean_FindMVar_visit(x_4, x_22, x_24);
lean_dec(x_24);
x_26 = l_Lean_FindMVar_visit(x_4, x_23, x_25);
lean_dec(x_25);
return x_26;
}
case 10:
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_1);
x_27 = lean_ctor_get(x_2, 1);
lean_inc(x_27);
lean_dec(x_2);
x_28 = l_Lean_FindMVar_visit(x_4, x_27, x_3);
return x_28;
}
case 11:
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_1);
x_29 = lean_ctor_get(x_2, 2);
lean_inc(x_29);
lean_dec(x_2);
x_30 = l_Lean_FindMVar_visit(x_4, x_29, x_3);
return x_30;
}
default: 
{
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
lean_inc(x_3);
return x_3;
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = x_3 == x_4;
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_uget(x_2, x_3);
x_12 = lean_expr_eqv(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l_Lean_Meta_inferType(x_11, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
x_17 = lean_box(0);
lean_inc(x_1);
x_18 = l_Lean_FindMVar_main___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__1(x_1, x_15, x_17);
if (lean_obj_tag(x_18) == 0)
{
size_t x_19; size_t x_20; 
lean_free_object(x_13);
x_19 = 1;
x_20 = x_3 + x_19;
x_3 = x_20;
x_9 = x_16;
goto _start;
}
else
{
uint8_t x_22; lean_object* x_23; 
lean_dec(x_18);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_22 = 1;
x_23 = lean_box(x_22);
lean_ctor_set(x_13, 0, x_23);
return x_13;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_13, 0);
x_25 = lean_ctor_get(x_13, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_13);
x_26 = lean_box(0);
lean_inc(x_1);
x_27 = l_Lean_FindMVar_main___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__1(x_1, x_24, x_26);
if (lean_obj_tag(x_27) == 0)
{
size_t x_28; size_t x_29; 
x_28 = 1;
x_29 = x_3 + x_28;
x_3 = x_29;
x_9 = x_25;
goto _start;
}
else
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_31 = 1;
x_32 = lean_box(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_25);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_13);
if (x_34 == 0)
{
return x_13;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_13, 0);
x_36 = lean_ctor_get(x_13, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_13);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
size_t x_38; size_t x_39; 
lean_dec(x_11);
x_38 = 1;
x_39 = x_3 + x_38;
x_3 = x_39;
goto _start;
}
}
else
{
uint8_t x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_41 = 0;
x_42 = lean_box(x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_9);
return x_43;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_get_size(x_2);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_11 = 0;
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_7);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_8, x_8);
if (x_14 == 0)
{
uint8_t x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_15 = 0;
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_7);
return x_17;
}
else
{
size_t x_18; size_t x_19; lean_object* x_20; 
x_18 = 0;
x_19 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_20 = l_Array_anyMUnsafe_any___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__2(x_1, x_2, x_18, x_19, x_3, x_4, x_5, x_6, x_7);
return x_20;
}
}
}
}
lean_object* l_Lean_FindMVar_main___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_FindMVar_main___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__1___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_FindMVar_main___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_FindMVar_main___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_11 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_12 = l_Array_anyMUnsafe_any___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___spec__2(x_1, x_2, x_10, x_11, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderNonDependentFirst_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderNonDependentFirst_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderNonDependentFirst_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderNonDependentFirst___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_3 == x_4;
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_uget(x_2, x_3);
x_13 = !lean_is_exclusive(x_5);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_5, 0);
x_15 = lean_ctor_get(x_5, 1);
x_16 = l_Lean_Expr_mvarId_x21(x_12);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_17 = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(x_12, x_1, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_array_push(x_14, x_16);
lean_ctor_set(x_5, 0, x_21);
x_22 = 1;
x_23 = x_3 + x_22;
x_3 = x_23;
x_10 = x_20;
goto _start;
}
else
{
lean_object* x_25; lean_object* x_26; size_t x_27; size_t x_28; 
x_25 = lean_ctor_get(x_17, 1);
lean_inc(x_25);
lean_dec(x_17);
x_26 = lean_array_push(x_15, x_16);
lean_ctor_set(x_5, 1, x_26);
x_27 = 1;
x_28 = x_3 + x_27;
x_3 = x_28;
x_10 = x_25;
goto _start;
}
}
else
{
uint8_t x_30; 
lean_dec(x_16);
lean_free_object(x_5);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_30 = !lean_is_exclusive(x_17);
if (x_30 == 0)
{
return x_17;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_17, 0);
x_32 = lean_ctor_get(x_17, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_17);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_5, 0);
x_35 = lean_ctor_get(x_5, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_5);
x_36 = l_Lean_Expr_mvarId_x21(x_12);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_37 = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(x_12, x_1, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_unbox(x_38);
lean_dec(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; size_t x_43; size_t x_44; 
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = lean_array_push(x_34, x_36);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_35);
x_43 = 1;
x_44 = x_3 + x_43;
x_3 = x_44;
x_5 = x_42;
x_10 = x_40;
goto _start;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; size_t x_49; size_t x_50; 
x_46 = lean_ctor_get(x_37, 1);
lean_inc(x_46);
lean_dec(x_37);
x_47 = lean_array_push(x_35, x_36);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_34);
lean_ctor_set(x_48, 1, x_47);
x_49 = 1;
x_50 = x_3 + x_49;
x_3 = x_50;
x_5 = x_48;
x_10 = x_46;
goto _start;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_52 = lean_ctor_get(x_37, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_37, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_54 = x_37;
} else {
 lean_dec_ref(x_37);
 x_54 = lean_box(0);
}
if (lean_is_scalar(x_54)) {
 x_55 = lean_alloc_ctor(1, 2, 0);
} else {
 x_55 = x_54;
}
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_53);
return x_55;
}
}
}
else
{
lean_object* x_56; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_5);
lean_ctor_set(x_56, 1, x_10);
return x_56;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderNonDependentFirst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_mk_empty_array_with_capacity(x_7);
lean_inc_n(x_8, 2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_array_get_size(x_1);
x_11 = lean_nat_dec_lt(x_7, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_array_to_list(lean_box(0), x_8);
lean_inc(x_12);
x_13 = l_List_append___rarg(x_12, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_6);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_le(x_10, x_10);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_array_to_list(lean_box(0), x_8);
lean_inc(x_16);
x_17 = l_List_append___rarg(x_16, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_6);
return x_18;
}
else
{
size_t x_19; size_t x_20; lean_object* x_21; 
lean_dec(x_8);
x_19 = 0;
x_20 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_21 = l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderNonDependentFirst___spec__1(x_1, x_1, x_19, x_20, x_9, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_array_to_list(lean_box(0), x_24);
x_27 = lean_array_to_list(lean_box(0), x_25);
x_28 = l_List_append___rarg(x_26, x_27);
lean_ctor_set(x_21, 0, x_28);
return x_21;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_29 = lean_ctor_get(x_21, 0);
x_30 = lean_ctor_get(x_21, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_21);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = lean_array_to_list(lean_box(0), x_31);
x_34 = lean_array_to_list(lean_box(0), x_32);
x_35 = l_List_append___rarg(x_33, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_30);
return x_36;
}
}
else
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_21);
if (x_37 == 0)
{
return x_21;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_21, 0);
x_39 = lean_ctor_get(x_21, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_21);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderNonDependentFirst___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = l_Array_foldlMUnsafe_fold___at___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderNonDependentFirst___spec__1(x_1, x_2, x_11, x_12, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderNonDependentFirst___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderNonDependentFirst(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_apply_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_apply_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_apply_match__1___rarg), 2, 0);
return x_2;
}
}
uint8_t l_List_elem___at_Lean_Meta_apply___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_name_eq(x_1, x_4);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_List_forM___at_Lean_Meta_apply___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l_Lean_Meta_headBetaMVarType(x_9, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_1 = x_10;
x_6 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_10);
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_apply___spec__3(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; size_t x_9; size_t x_10; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = l_List_elem___at_Lean_Meta_apply___spec__1(x_7, x_1);
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
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_apply___spec__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = x_2 == x_3;
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_array_uget(x_1, x_2);
x_12 = l_Lean_Expr_mvarId_x21(x_11);
x_13 = l_Lean_Meta_isExprMVarAssigned(x_12, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_array_push(x_4, x_11);
x_18 = 1;
x_19 = x_2 + x_18;
x_2 = x_19;
x_4 = x_17;
x_9 = x_16;
goto _start;
}
else
{
lean_object* x_21; size_t x_22; size_t x_23; 
lean_dec(x_11);
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec(x_13);
x_22 = 1;
x_23 = x_2 + x_22;
x_2 = x_23;
x_9 = x_21;
goto _start;
}
}
else
{
lean_object* x_25; 
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_4);
lean_ctor_set(x_25, 1, x_9);
return x_25;
}
}
}
lean_object* l_Lean_Meta_apply___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
x_12 = l_Lean_Meta_postprocessAppMVars(x_1, x_2, x_3, x_4, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_14 = l_Lean_Meta_instantiateMVars(x_5, x_7, x_8, x_9, x_10, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_15);
x_75 = l_Lean_mkAppN(x_15, x_3);
x_76 = l_Lean_Meta_assignExprMVar(x_2, x_75, x_7, x_8, x_9, x_10, x_16);
x_77 = lean_ctor_get(x_76, 1);
lean_inc(x_77);
lean_dec(x_76);
x_78 = lean_array_get_size(x_3);
x_79 = lean_unsigned_to_nat(0u);
x_80 = lean_mk_empty_array_with_capacity(x_79);
x_81 = lean_nat_dec_lt(x_79, x_78);
if (x_81 == 0)
{
lean_dec(x_78);
x_17 = x_80;
x_18 = x_77;
goto block_74;
}
else
{
uint8_t x_82; 
x_82 = lean_nat_dec_le(x_78, x_78);
if (x_82 == 0)
{
lean_dec(x_78);
x_17 = x_80;
x_18 = x_77;
goto block_74;
}
else
{
size_t x_83; size_t x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_83 = 0;
x_84 = lean_usize_of_nat(x_78);
lean_dec(x_78);
x_85 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_apply___spec__4(x_3, x_83, x_84, x_80, x_7, x_8, x_9, x_10, x_77);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_17 = x_86;
x_18 = x_87;
goto block_74;
}
}
block_74:
{
lean_object* x_19; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_19 = l_Lean_Meta_getMVarsNoDelayed(x_15, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_22 = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderNonDependentFirst(x_17, x_7, x_8, x_9, x_10, x_21);
lean_dec(x_17);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_array_get_size(x_20);
x_26 = lean_unsigned_to_nat(0u);
x_27 = lean_mk_empty_array_with_capacity(x_26);
x_28 = lean_nat_dec_lt(x_26, x_25);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_25);
lean_dec(x_20);
x_29 = lean_array_to_list(lean_box(0), x_27);
x_30 = l_List_append___rarg(x_23, x_29);
lean_inc(x_30);
x_31 = l_List_forM___at_Lean_Meta_apply___spec__2(x_30, x_7, x_8, x_9, x_10, x_24);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_31, 0);
lean_dec(x_33);
lean_ctor_set(x_31, 0, x_30);
return x_31;
}
else
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_30);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_30);
x_36 = !lean_is_exclusive(x_31);
if (x_36 == 0)
{
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_31, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_31);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
x_40 = lean_nat_dec_le(x_25, x_25);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_25);
lean_dec(x_20);
x_41 = lean_array_to_list(lean_box(0), x_27);
x_42 = l_List_append___rarg(x_23, x_41);
lean_inc(x_42);
x_43 = l_List_forM___at_Lean_Meta_apply___spec__2(x_42, x_7, x_8, x_9, x_10, x_24);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
if (lean_obj_tag(x_43) == 0)
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_43);
if (x_44 == 0)
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_43, 0);
lean_dec(x_45);
lean_ctor_set(x_43, 0, x_42);
return x_43;
}
else
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_43, 1);
lean_inc(x_46);
lean_dec(x_43);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_42);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_42);
x_48 = !lean_is_exclusive(x_43);
if (x_48 == 0)
{
return x_43;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_43, 0);
x_50 = lean_ctor_get(x_43, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_43);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
size_t x_52; size_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_52 = 0;
x_53 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_54 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_apply___spec__3(x_23, x_20, x_52, x_53, x_27);
lean_dec(x_20);
x_55 = lean_array_to_list(lean_box(0), x_54);
x_56 = l_List_append___rarg(x_23, x_55);
lean_inc(x_56);
x_57 = l_List_forM___at_Lean_Meta_apply___spec__2(x_56, x_7, x_8, x_9, x_10, x_24);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
if (lean_obj_tag(x_57) == 0)
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
lean_object* x_59; 
x_59 = lean_ctor_get(x_57, 0);
lean_dec(x_59);
lean_ctor_set(x_57, 0, x_56);
return x_57;
}
else
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
lean_dec(x_57);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_56);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
else
{
uint8_t x_62; 
lean_dec(x_56);
x_62 = !lean_is_exclusive(x_57);
if (x_62 == 0)
{
return x_57;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_57, 0);
x_64 = lean_ctor_get(x_57, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_57);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_66 = !lean_is_exclusive(x_22);
if (x_66 == 0)
{
return x_22;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_22, 0);
x_68 = lean_ctor_get(x_22, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_22);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_70 = !lean_is_exclusive(x_19);
if (x_70 == 0)
{
return x_19;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_19, 0);
x_72 = lean_ctor_get(x_19, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_19);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
else
{
uint8_t x_88; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_88 = !lean_is_exclusive(x_14);
if (x_88 == 0)
{
return x_14;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_14, 0);
x_90 = lean_ctor_get(x_14, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_14);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
else
{
uint8_t x_92; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
x_92 = !lean_is_exclusive(x_12);
if (x_92 == 0)
{
return x_12;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_12, 0);
x_94 = lean_ctor_get(x_12, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_12);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
}
lean_object* l_Lean_Meta_apply___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_6);
x_14 = 1;
x_15 = 0;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_16 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(x_1, x_14, x_13, x_15, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_dec(x_18);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
lean_inc(x_22);
x_23 = l_Lean_Meta_isExprDefEq(x_22, x_2, x_8, x_9, x_10, x_11, x_19);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_unbox(x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_5);
lean_dec(x_3);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___rarg(x_4, x_22, x_2, x_8, x_9, x_10, x_11, x_26);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
return x_27;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_27);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_22);
lean_dec(x_2);
x_32 = lean_ctor_get(x_23, 1);
lean_inc(x_32);
lean_dec(x_23);
x_33 = lean_box(0);
x_34 = l_Lean_Meta_apply___lambda__1(x_3, x_4, x_20, x_21, x_5, x_33, x_8, x_9, x_10, x_11, x_32);
lean_dec(x_21);
lean_dec(x_20);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_16);
if (x_39 == 0)
{
return x_16;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_16, 0);
x_41 = lean_ctor_get(x_16, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_16);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
lean_object* l_Lean_Meta_apply___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_1);
x_10 = l_Lean_Meta_getMVarType(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
x_13 = l_Lean_Meta_inferType(x_2, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_14);
x_16 = l_Lean_Meta_getExpectedNumArgsAux(x_14, x_5, x_6, x_7, x_8, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_11);
x_22 = l_Lean_Meta_getExpectedNumArgs(x_11, x_5, x_6, x_7, x_8, x_20);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_nat_sub(x_21, x_23);
lean_dec(x_23);
lean_dec(x_21);
x_26 = lean_box(0);
x_27 = l_Lean_Meta_apply___lambda__2(x_14, x_11, x_3, x_1, x_2, x_25, x_26, x_5, x_6, x_7, x_8, x_24);
return x_27;
}
else
{
uint8_t x_28; 
lean_dec(x_21);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_22);
if (x_28 == 0)
{
return x_22;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_22, 0);
x_30 = lean_ctor_get(x_22, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_22);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_16, 1);
lean_inc(x_32);
lean_dec(x_16);
x_33 = lean_ctor_get(x_17, 0);
lean_inc(x_33);
lean_dec(x_17);
x_34 = lean_box(0);
x_35 = l_Lean_Meta_apply___lambda__2(x_14, x_11, x_3, x_1, x_2, x_33, x_34, x_5, x_6, x_7, x_8, x_32);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_36 = !lean_is_exclusive(x_16);
if (x_36 == 0)
{
return x_16;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_16, 0);
x_38 = lean_ctor_get(x_16, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_16);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_13);
if (x_40 == 0)
{
return x_13;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_13, 0);
x_42 = lean_ctor_get(x_13, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_13);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_10);
if (x_44 == 0)
{
return x_10;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_10, 0);
x_46 = lean_ctor_get(x_10, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_10);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
lean_object* l_Lean_Meta_apply(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_box(0);
x_9 = lean_mk_string("apply");
x_10 = lean_name_mk_string(x_8, x_9);
lean_inc(x_10);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_checkNotAssigned___boxed), 7, 2);
lean_closure_set(x_11, 0, x_1);
lean_closure_set(x_11, 1, x_10);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_apply___lambda__3___boxed), 9, 3);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_10);
x_13 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_12);
x_14 = l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(x_1, x_13, x_3, x_4, x_5, x_6, x_7);
return x_14;
}
}
lean_object* l_List_elem___at_Lean_Meta_apply___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_List_elem___at_Lean_Meta_apply___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_List_forM___at_Lean_Meta_apply___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_forM___at_Lean_Meta_apply___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_apply___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_apply___spec__3(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_apply___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_apply___spec__4(x_1, x_10, x_11, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Meta_apply___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_apply___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_Lean_Meta_apply___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Meta_apply___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
return x_13;
}
}
lean_object* l_Lean_Meta_apply___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_apply___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_observing_x3f___at_Lean_Meta_splitAnd___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Meta_saveState___rarg(x_3, x_4, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_10 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_dec(x_10);
x_19 = l_Lean_Meta_SavedState_restore(x_8, x_2, x_3, x_4, x_5, x_18);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_8);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
lean_dec(x_21);
x_22 = lean_box(0);
lean_ctor_set(x_19, 0, x_22);
return x_19;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
}
}
lean_object* l_Lean_observing_x3f___at_Lean_Meta_splitAnd___spec__1___at_Lean_Meta_splitAnd___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_7 = lean_box(0);
x_8 = lean_mk_string("And");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("intro");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_box(0);
x_13 = l_Lean_mkConst(x_11, x_12);
x_14 = l_Lean_Meta_saveState___rarg(x_3, x_4, x_5, x_6);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_17 = l_Lean_Meta_apply(x_1, x_13, x_2, x_3, x_4, x_5, x_16);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
lean_dec(x_15);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_17, 0);
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_17);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_21);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_17, 1);
lean_inc(x_25);
lean_dec(x_17);
x_26 = l_Lean_Meta_SavedState_restore(x_15, x_2, x_3, x_4, x_5, x_25);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_15);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
x_29 = lean_box(0);
lean_ctor_set(x_26, 0, x_29);
return x_26;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_26, 1);
lean_inc(x_30);
lean_dec(x_26);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
}
}
lean_object* l_Lean_Meta_splitAnd(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_Lean_observing_x3f___at_Lean_Meta_splitAnd___spec__1___at_Lean_Meta_splitAnd___spec__2), 6, 0);
x_8 = l_Lean_Meta_saturate(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Meta_applyRefl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_box(0);
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
lean_object* l_Lean_Meta_applyRefl_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_applyRefl_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_applyRefl___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_box(0);
x_9 = lean_mk_string("Eq");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("refl");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_mkConst(x_12, x_14);
x_16 = l_Lean_Meta_apply(x_1, x_15, x_3, x_4, x_5, x_6, x_7);
return x_16;
}
}
lean_object* l_Lean_Meta_applyRefl___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_box(0);
x_10 = lean_mk_string("refl");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_box(0);
x_13 = l_Lean_Meta_throwTacticEx___rarg(x_11, x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8);
return x_13;
}
else
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_3, 0);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_8);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_box(0);
x_18 = lean_mk_string("refl");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = lean_box(0);
x_21 = l_Lean_Meta_throwTacticEx___rarg(x_19, x_1, x_2, x_20, x_4, x_5, x_6, x_7, x_8);
return x_21;
}
}
}
}
lean_object* l_Lean_Meta_applyRefl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_applyRefl___lambda__1), 7, 1);
lean_closure_set(x_8, 0, x_1);
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshLevelMVar___boxed), 1, 0);
x_10 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_10, 0, x_9);
lean_closure_set(x_10, 1, x_8);
x_11 = lean_alloc_closure((void*)(l_Lean_observing_x3f___at_Lean_Meta_splitAnd___spec__1), 6, 1);
lean_closure_set(x_11, 0, x_10);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_applyRefl___lambda__2___boxed), 8, 2);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
x_13 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_12);
x_14 = l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(x_1, x_13, x_3, x_4, x_5, x_6, x_7);
return x_14;
}
}
lean_object* l_Lean_Meta_applyRefl___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_applyRefl___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_FindMVar(lean_object*);
lean_object* initialize_Lean_Meta_ExprDefEq(lean_object*);
lean_object* initialize_Lean_Meta_SynthInstance(lean_object*);
lean_object* initialize_Lean_Meta_CollectMVars(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Util(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_Tactic_Apply(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_FindMVar(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ExprDefEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SynthInstance(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CollectMVars(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Util(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
