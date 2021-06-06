// Lean compiler output
// Module: Lean.Elab.Tactic.Rewrite
// Imports: Init Lean.Meta.Tactic.Rewrite Lean.Meta.Tactic.Replace Lean.Elab.Tactic.Basic Lean.Elab.Tactic.ElabTerm Lean.Elab.Tactic.Location
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
extern lean_object* l___regBuiltin_Lean_Elab_Tactic_evalDone___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq(lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Elab_Tactic_rewriteAll___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_rewriteAll___spec__1(lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l_Lean_Elab_Tactic_rewriteTarget___lambda__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__5;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteAll(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__2;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__3;
lean_object* l_Lean_Elab_Tactic_withMainContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_rewriteAll___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__4;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_Elab_Tactic_rewriteTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_replaceLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteAll___lambda__1(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__1;
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteTarget(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_replaceTargetEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Tactic_evalRewriteCore___spec__3___boxed(lean_object**);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalERewriteSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_expandOptLocation(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_InfoTree_0__Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteTarget___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalRewriteCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___lambda__1(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__5;
lean_object* l_Lean_Meta_rewrite(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___rarg(lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedSyntax;
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_sortFVarIds___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Elab_Tactic_evalRewriteCore_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__1(uint8_t, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__3;
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalRewriteCore(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__2;
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalERewriteSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__4;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getFVarIds(lean_object*);
lean_object* l_Lean_Meta_getLocalDeclFromUserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__2(uint8_t, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Tactic_focusAndDone___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_tryTactic___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__1;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Tactic_evalRewriteCore___spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalRewriteSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalRewriteCore_match__1(lean_object*);
lean_object* l_Lean_Elab_Tactic_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_rewriteTarget___lambda__1(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Tactic_getMainGoal(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_16 = l_Lean_Elab_Tactic_getMainTarget(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_box(0);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_20 = l_Lean_Meta_rewrite(x_14, x_17, x_3, x_1, x_19, x_2, x_8, x_9, x_10, x_11, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Elab_Tactic_getMainGoal(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_22);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_21, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_21, 1);
lean_inc(x_27);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_28 = l_Lean_Meta_replaceTargetEq(x_24, x_26, x_27, x_8, x_9, x_10, x_11, x_25);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_ctor_get(x_21, 2);
lean_inc(x_31);
lean_dec(x_21);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Lean_Elab_Tactic_replaceMainGoal(x_32, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_30);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_34 = !lean_is_exclusive(x_28);
if (x_34 == 0)
{
return x_28;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_28, 0);
x_36 = lean_ctor_get(x_28, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_28);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_38 = !lean_is_exclusive(x_23);
if (x_38 == 0)
{
return x_23;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_23, 0);
x_40 = lean_ctor_get(x_23, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_23);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
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
uint8_t x_46; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_46 = !lean_is_exclusive(x_16);
if (x_46 == 0)
{
return x_16;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_16, 0);
x_48 = lean_ctor_get(x_16, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_16);
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
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_3);
x_50 = !lean_is_exclusive(x_13);
if (x_50 == 0)
{
return x_13;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_13, 0);
x_52 = lean_ctor_get(x_13, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_13);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
lean_object* l_Lean_Elab_Tactic_rewriteTarget(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_13 = lean_box(0);
x_14 = 1;
x_15 = lean_box(x_14);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabTerm___boxed), 12, 3);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_13);
lean_closure_set(x_16, 2, x_15);
x_17 = lean_box(x_2);
x_18 = lean_box(x_3);
x_19 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteTarget___lambda__1___boxed), 12, 2);
lean_closure_set(x_19, 0, x_17);
lean_closure_set(x_19, 1, x_18);
x_20 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Tactic_focusAndDone___spec__1___rarg), 11, 2);
lean_closure_set(x_20, 0, x_16);
lean_closure_set(x_20, 1, x_19);
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withMainContext___rarg), 10, 3);
lean_closure_set(x_21, 0, x_20);
lean_closure_set(x_21, 1, x_4);
lean_closure_set(x_21, 2, x_5);
x_22 = 0;
x_23 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(x_21, x_22, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_23;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteTarget___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = l_Lean_Elab_Tactic_rewriteTarget___lambda__1(x_13, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_15;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteTarget___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_unbox(x_2);
lean_dec(x_2);
x_14 = lean_unbox(x_3);
lean_dec(x_3);
x_15 = l_Lean_Elab_Tactic_rewriteTarget(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___lambda__1(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
lean_inc(x_9);
lean_inc(x_1);
x_14 = l_Lean_Meta_getLocalDecl(x_1, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Elab_Tactic_getMainGoal(x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_LocalDecl_type(x_15);
lean_dec(x_15);
x_21 = lean_box(0);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_22 = l_Lean_Meta_rewrite(x_18, x_20, x_4, x_2, x_21, x_3, x_9, x_10, x_11, x_12, x_19);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_Elab_Tactic_getMainGoal(x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_ctor_get(x_23, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_23, 1);
lean_inc(x_29);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_30 = l_Lean_Meta_replaceLocalDecl(x_26, x_1, x_28, x_29, x_9, x_10, x_11, x_12, x_27);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_ctor_get(x_23, 2);
lean_inc(x_34);
lean_dec(x_23);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Lean_Elab_Tactic_replaceMainGoal(x_35, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_32);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_36;
}
else
{
uint8_t x_37; 
lean_dec(x_23);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_37 = !lean_is_exclusive(x_30);
if (x_37 == 0)
{
return x_30;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_30, 0);
x_39 = lean_ctor_get(x_30, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_30);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_23);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_25);
if (x_41 == 0)
{
return x_25;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_25, 0);
x_43 = lean_ctor_get(x_25, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_25);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_22);
if (x_45 == 0)
{
return x_22;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_22, 0);
x_47 = lean_ctor_get(x_22, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_22);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_17);
if (x_49 == 0)
{
return x_17;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_17, 0);
x_51 = lean_ctor_get(x_17, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_17);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_14);
if (x_53 == 0)
{
return x_14;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_14, 0);
x_55 = lean_ctor_get(x_14, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_14);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId(lean_object* x_1, uint8_t x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_14 = lean_box(0);
x_15 = 1;
x_16 = lean_box(x_15);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabTerm___boxed), 12, 3);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_14);
lean_closure_set(x_17, 2, x_16);
x_18 = lean_box(x_2);
x_19 = lean_box(x_4);
x_20 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___lambda__1___boxed), 13, 3);
lean_closure_set(x_20, 0, x_3);
lean_closure_set(x_20, 1, x_18);
lean_closure_set(x_20, 2, x_19);
x_21 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Tactic_focusAndDone___spec__1___rarg), 11, 2);
lean_closure_set(x_21, 0, x_17);
lean_closure_set(x_21, 1, x_20);
x_22 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withMainContext___rarg), 10, 3);
lean_closure_set(x_22, 0, x_21);
lean_closure_set(x_22, 1, x_5);
lean_closure_set(x_22, 2, x_6);
x_23 = 0;
x_24 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(x_22, x_23, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_24;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = lean_unbox(x_3);
lean_dec(x_3);
x_16 = l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___lambda__1(x_1, x_14, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_16;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = lean_unbox(x_4);
lean_dec(x_4);
x_16 = l_Lean_Elab_Tactic_rewriteLocalDeclFVarId(x_1, x_14, x_3, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_getLocalDeclFromUserName(x_1, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__2(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_Lean_LocalDecl_fvarId(x_4);
x_15 = l_Lean_Elab_Tactic_rewriteLocalDeclFVarId(x_1, x_2, x_14, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl(lean_object* x_1, uint8_t x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__1___boxed), 10, 1);
lean_closure_set(x_14, 0, x_3);
x_15 = lean_box(x_2);
x_16 = lean_box(x_4);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__2___boxed), 13, 3);
lean_closure_set(x_17, 0, x_1);
lean_closure_set(x_17, 1, x_15);
lean_closure_set(x_17, 2, x_16);
x_18 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Tactic_focusAndDone___spec__1___rarg), 11, 2);
lean_closure_set(x_18, 0, x_14);
lean_closure_set(x_18, 1, x_17);
x_19 = l_Lean_Elab_Tactic_withMainContext___rarg(x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_19;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = lean_unbox(x_3);
lean_dec(x_3);
x_16 = l_Lean_Elab_Tactic_rewriteLocalDecl___lambda__2(x_1, x_14, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_4);
return x_16;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_unbox(x_2);
lean_dec(x_2);
x_15 = lean_unbox(x_4);
lean_dec(x_4);
x_16 = l_Lean_Elab_Tactic_rewriteLocalDecl(x_1, x_14, x_3, x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_16;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_rewriteAll___spec__1(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, size_t x_5, size_t x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; 
x_17 = x_6 < x_5;
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_18 = lean_box(x_7);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_array_uget(x_4, x_6);
x_21 = lean_box(x_2);
x_22 = lean_box(x_3);
lean_inc(x_1);
x_23 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteLocalDeclFVarId___boxed), 13, 4);
lean_closure_set(x_23, 0, x_1);
lean_closure_set(x_23, 1, x_21);
lean_closure_set(x_23, 2, x_20);
lean_closure_set(x_23, 3, x_22);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_24 = l_Lean_Elab_Tactic_tryTactic___rarg(x_23, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
if (x_7 == 0)
{
lean_object* x_25; lean_object* x_26; size_t x_27; size_t x_28; uint8_t x_29; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = 1;
x_28 = x_6 + x_27;
x_29 = lean_unbox(x_25);
lean_dec(x_25);
x_6 = x_28;
x_7 = x_29;
x_16 = x_26;
goto _start;
}
else
{
lean_object* x_31; size_t x_32; size_t x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_24, 1);
lean_inc(x_31);
lean_dec(x_24);
x_32 = 1;
x_33 = x_6 + x_32;
x_34 = 1;
x_6 = x_33;
x_7 = x_34;
x_16 = x_31;
goto _start;
}
}
}
}
lean_object* l_Lean_Elab_Tactic_rewriteAll___lambda__1(lean_object* x_1, uint8_t x_2, uint8_t x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_15 = l_Lean_LocalContext_getFVarIds(x_5);
x_16 = l_Array_reverse___rarg(x_15);
x_17 = lean_array_get_size(x_16);
x_18 = lean_usize_of_nat(x_17);
lean_dec(x_17);
x_19 = 0;
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_20 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_rewriteAll___spec__1(x_1, x_2, x_3, x_16, x_18, x_19, x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_16);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_unbox(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = l_Lean_Elab_Tactic_getMainGoal(x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_23);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_box(0);
x_28 = lean_mk_string("rewrite");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("did not find instance of the pattern in the current goal");
x_31 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_box(0);
x_34 = l_Lean_Meta_throwTacticEx___rarg(x_29, x_25, x_32, x_33, x_10, x_11, x_12, x_13, x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_34;
}
else
{
uint8_t x_35; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_35 = !lean_is_exclusive(x_24);
if (x_35 == 0)
{
return x_24;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_24, 0);
x_37 = lean_ctor_get(x_24, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_24);
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
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_39 = !lean_is_exclusive(x_20);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_20, 0);
lean_dec(x_40);
x_41 = lean_box(0);
lean_ctor_set(x_20, 0, x_41);
return x_20;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_20, 1);
lean_inc(x_42);
lean_dec(x_20);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
}
}
lean_object* l_Lean_Elab_Tactic_rewriteAll(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_13 = lean_box(x_2);
x_14 = lean_box(x_3);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteTarget___boxed), 12, 3);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_13);
lean_closure_set(x_15, 2, x_14);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_16 = l_Lean_Elab_Tactic_tryTactic___rarg(x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_box(x_2);
x_20 = lean_box(x_3);
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteAll___lambda__1___boxed), 14, 4);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_19);
lean_closure_set(x_21, 2, x_20);
lean_closure_set(x_21, 3, x_17);
x_22 = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_sortFVarIds___lambda__1___boxed), 9, 0);
x_23 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Tactic_focusAndDone___spec__1___rarg), 11, 2);
lean_closure_set(x_23, 0, x_22);
lean_closure_set(x_23, 1, x_21);
x_24 = l_Lean_Elab_Tactic_withMainContext___rarg(x_23, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
return x_24;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_rewriteAll___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; uint8_t x_18; size_t x_19; size_t x_20; uint8_t x_21; lean_object* x_22; 
x_17 = lean_unbox(x_2);
lean_dec(x_2);
x_18 = lean_unbox(x_3);
lean_dec(x_3);
x_19 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_20 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_21 = lean_unbox(x_7);
lean_dec(x_7);
x_22 = l_Array_forInUnsafe_loop___at_Lean_Elab_Tactic_rewriteAll___spec__1(x_1, x_17, x_18, x_4, x_19, x_20, x_21, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_4);
return x_22;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteAll___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_15 = lean_unbox(x_2);
lean_dec(x_2);
x_16 = lean_unbox(x_3);
lean_dec(x_3);
x_17 = lean_unbox(x_4);
lean_dec(x_4);
x_18 = l_Lean_Elab_Tactic_rewriteAll___lambda__1(x_1, x_15, x_16, x_17, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_5);
return x_18;
}
}
lean_object* l_Lean_Elab_Tactic_rewriteAll___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_unbox(x_2);
lean_dec(x_2);
x_14 = lean_unbox(x_3);
lean_dec(x_3);
x_15 = l_Lean_Elab_Tactic_rewriteAll(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_15;
}
}
lean_object* l_Lean_Elab_Tactic_evalRewriteCore_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_8 = lean_box(x_7);
x_9 = lean_apply_2(x_2, x_6, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Elab_Tactic_evalRewriteCore_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRewriteCore_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__1(uint8_t x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; 
x_17 = x_5 == x_6;
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = lean_array_uget(x_4, x_5);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
x_19 = l_Lean_Elab_Tactic_rewriteLocalDecl(x_2, x_3, x_18, x_1, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = 1;
x_23 = x_5 + x_22;
x_5 = x_23;
x_7 = x_20;
x_16 = x_21;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_19);
if (x_25 == 0)
{
return x_19;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_19, 0);
x_27 = lean_ctor_get(x_19, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_19);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_7);
lean_ctor_set(x_29, 1, x_16);
return x_29;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__2(uint8_t x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; 
x_17 = x_5 == x_6;
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_18 = lean_array_uget(x_4, x_5);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_2);
x_19 = l_Lean_Elab_Tactic_rewriteLocalDecl(x_2, x_3, x_18, x_1, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = 1;
x_23 = x_5 + x_22;
x_5 = x_23;
x_7 = x_20;
x_16 = x_21;
goto _start;
}
else
{
uint8_t x_25; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_25 = !lean_is_exclusive(x_19);
if (x_25 == 0)
{
return x_19;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_19, 0);
x_27 = lean_ctor_get(x_19, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_19);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_2);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_7);
lean_ctor_set(x_29, 1, x_16);
return x_29;
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Tactic_evalRewriteCore___spec__3(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_5, 1);
x_19 = lean_nat_dec_le(x_18, x_7);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_nat_dec_eq(x_6, x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_42; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_8);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_sub(x_6, x_22);
lean_dec(x_6);
x_56 = lean_unsigned_to_nat(2u);
x_57 = lean_nat_mul(x_7, x_56);
x_58 = l_Lean_instInhabitedSyntax;
x_59 = lean_array_get(x_58, x_2, x_57);
x_60 = lean_nat_add(x_57, x_22);
lean_dec(x_57);
x_61 = lean_nat_dec_lt(x_60, x_4);
x_62 = lean_mk_empty_array_with_capacity(x_56);
lean_inc(x_59);
x_63 = lean_array_push(x_62, x_59);
x_64 = l_Lean_Syntax_getArg(x_59, x_20);
x_65 = l_Lean_Syntax_isNone(x_64);
lean_dec(x_64);
x_66 = l_Lean_Syntax_getArg(x_59, x_22);
if (x_61 == 0)
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
lean_dec(x_60);
x_313 = lean_box(0);
x_314 = lean_array_push(x_63, x_313);
x_315 = l_Lean_nullKind;
x_316 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_316, 0, x_315);
lean_ctor_set(x_316, 1, x_314);
x_317 = l_Lean_Elab_Tactic_mkInitialTacticInfo(x_316, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
if (x_65 == 0)
{
lean_object* x_318; lean_object* x_319; uint8_t x_320; 
x_318 = lean_ctor_get(x_317, 0);
lean_inc(x_318);
x_319 = lean_ctor_get(x_317, 1);
lean_inc(x_319);
lean_dec(x_317);
x_320 = 1;
x_67 = x_320;
x_68 = x_318;
x_69 = x_319;
goto block_312;
}
else
{
lean_object* x_321; lean_object* x_322; uint8_t x_323; 
x_321 = lean_ctor_get(x_317, 0);
lean_inc(x_321);
x_322 = lean_ctor_get(x_317, 1);
lean_inc(x_322);
lean_dec(x_317);
x_323 = 0;
x_67 = x_323;
x_68 = x_321;
x_69 = x_322;
goto block_312;
}
}
else
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; 
x_324 = lean_array_fget(x_2, x_60);
lean_dec(x_60);
x_325 = lean_array_push(x_63, x_324);
x_326 = l_Lean_nullKind;
x_327 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_327, 0, x_326);
lean_ctor_set(x_327, 1, x_325);
x_328 = l_Lean_Elab_Tactic_mkInitialTacticInfo(x_327, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
if (x_65 == 0)
{
lean_object* x_329; lean_object* x_330; uint8_t x_331; 
x_329 = lean_ctor_get(x_328, 0);
lean_inc(x_329);
x_330 = lean_ctor_get(x_328, 1);
lean_inc(x_330);
lean_dec(x_328);
x_331 = 1;
x_67 = x_331;
x_68 = x_329;
x_69 = x_330;
goto block_312;
}
else
{
lean_object* x_332; lean_object* x_333; uint8_t x_334; 
x_332 = lean_ctor_get(x_328, 0);
lean_inc(x_332);
x_333 = lean_ctor_get(x_328, 1);
lean_inc(x_333);
lean_dec(x_328);
x_334 = 0;
x_67 = x_334;
x_68 = x_332;
x_69 = x_333;
goto block_312;
}
}
block_41:
{
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_23);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
x_26 = !lean_is_exclusive(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 0);
lean_dec(x_27);
x_28 = lean_ctor_get(x_25, 0);
lean_inc(x_28);
lean_dec(x_25);
lean_ctor_set(x_24, 0, x_28);
return x_24;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_24, 1);
lean_inc(x_29);
lean_dec(x_24);
x_30 = lean_ctor_get(x_25, 0);
lean_inc(x_30);
lean_dec(x_25);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_24, 1);
lean_inc(x_32);
lean_dec(x_24);
x_33 = lean_ctor_get(x_25, 0);
lean_inc(x_33);
lean_dec(x_25);
x_34 = lean_ctor_get(x_5, 2);
x_35 = lean_nat_add(x_7, x_34);
lean_dec(x_7);
x_6 = x_23;
x_7 = x_35;
x_8 = x_33;
x_17 = x_32;
goto _start;
}
}
else
{
uint8_t x_37; 
lean_dec(x_23);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
x_37 = !lean_is_exclusive(x_24);
if (x_37 == 0)
{
return x_24;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_24, 0);
x_39 = lean_ctor_get(x_24, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_24);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
block_55:
{
if (lean_obj_tag(x_42) == 0)
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
x_45 = lean_box(0);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_42, 0, x_46);
x_24 = x_42;
goto block_41;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_42, 1);
lean_inc(x_47);
lean_dec(x_42);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_47);
x_24 = x_50;
goto block_41;
}
}
else
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_42);
if (x_51 == 0)
{
x_24 = x_42;
goto block_41;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_42, 0);
x_53 = lean_ctor_get(x_42, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_42);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_24 = x_54;
goto block_41;
}
}
}
block_312:
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_70 = lean_st_ref_get(x_16, x_69);
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_72 = lean_st_ref_get(x_12, x_71);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_73, 5);
lean_inc(x_74);
lean_dec(x_73);
x_75 = lean_ctor_get_uint8(x_74, sizeof(void*)*2);
lean_dec(x_74);
if (x_75 == 0)
{
uint8_t x_76; 
lean_dec(x_68);
x_76 = !lean_is_exclusive(x_72);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_77 = lean_ctor_get(x_72, 1);
x_78 = lean_ctor_get(x_72, 0);
lean_dec(x_78);
x_79 = lean_ctor_get(x_15, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_15, 1);
lean_inc(x_80);
x_81 = lean_ctor_get(x_15, 2);
lean_inc(x_81);
x_82 = lean_ctor_get(x_15, 3);
lean_inc(x_82);
x_83 = lean_ctor_get(x_15, 4);
lean_inc(x_83);
x_84 = lean_ctor_get(x_15, 5);
lean_inc(x_84);
x_85 = lean_ctor_get(x_15, 6);
lean_inc(x_85);
x_86 = lean_ctor_get(x_15, 7);
lean_inc(x_86);
x_87 = l_Lean_replaceRef(x_59, x_82);
lean_dec(x_82);
lean_dec(x_59);
x_88 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_88, 0, x_79);
lean_ctor_set(x_88, 1, x_80);
lean_ctor_set(x_88, 2, x_81);
lean_ctor_set(x_88, 3, x_87);
lean_ctor_set(x_88, 4, x_83);
lean_ctor_set(x_88, 5, x_84);
lean_ctor_set(x_88, 6, x_85);
lean_ctor_set(x_88, 7, x_86);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_89; 
lean_free_object(x_72);
lean_inc(x_16);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_89 = l_Lean_Elab_Tactic_rewriteAll(x_66, x_67, x_1, x_9, x_10, x_11, x_12, x_13, x_14, x_88, x_16, x_77);
x_42 = x_89;
goto block_55;
}
else
{
lean_object* x_90; uint8_t x_91; lean_object* x_92; uint8_t x_93; 
x_90 = lean_ctor_get(x_3, 0);
x_91 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
x_92 = lean_array_get_size(x_90);
x_93 = lean_nat_dec_lt(x_20, x_92);
if (x_93 == 0)
{
lean_dec(x_92);
if (x_91 == 0)
{
lean_object* x_94; 
lean_dec(x_88);
lean_dec(x_66);
x_94 = lean_box(0);
lean_ctor_set(x_72, 0, x_94);
x_42 = x_72;
goto block_55;
}
else
{
lean_object* x_95; 
lean_free_object(x_72);
lean_inc(x_16);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_95 = l_Lean_Elab_Tactic_rewriteTarget(x_66, x_67, x_1, x_9, x_10, x_11, x_12, x_13, x_14, x_88, x_16, x_77);
x_42 = x_95;
goto block_55;
}
}
else
{
uint8_t x_96; 
x_96 = lean_nat_dec_le(x_92, x_92);
if (x_96 == 0)
{
lean_dec(x_92);
if (x_91 == 0)
{
lean_object* x_97; 
lean_dec(x_88);
lean_dec(x_66);
x_97 = lean_box(0);
lean_ctor_set(x_72, 0, x_97);
x_42 = x_72;
goto block_55;
}
else
{
lean_object* x_98; 
lean_free_object(x_72);
lean_inc(x_16);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_98 = l_Lean_Elab_Tactic_rewriteTarget(x_66, x_67, x_1, x_9, x_10, x_11, x_12, x_13, x_14, x_88, x_16, x_77);
x_42 = x_98;
goto block_55;
}
}
else
{
size_t x_99; size_t x_100; lean_object* x_101; lean_object* x_102; 
lean_free_object(x_72);
x_99 = 0;
x_100 = lean_usize_of_nat(x_92);
lean_dec(x_92);
x_101 = lean_box(0);
lean_inc(x_16);
lean_inc(x_88);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_66);
x_102 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__1(x_1, x_66, x_67, x_90, x_99, x_100, x_101, x_9, x_10, x_11, x_12, x_13, x_14, x_88, x_16, x_77);
if (lean_obj_tag(x_102) == 0)
{
if (x_91 == 0)
{
uint8_t x_103; 
lean_dec(x_88);
lean_dec(x_66);
x_103 = !lean_is_exclusive(x_102);
if (x_103 == 0)
{
lean_object* x_104; 
x_104 = lean_ctor_get(x_102, 0);
lean_dec(x_104);
lean_ctor_set(x_102, 0, x_101);
x_42 = x_102;
goto block_55;
}
else
{
lean_object* x_105; lean_object* x_106; 
x_105 = lean_ctor_get(x_102, 1);
lean_inc(x_105);
lean_dec(x_102);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_101);
lean_ctor_set(x_106, 1, x_105);
x_42 = x_106;
goto block_55;
}
}
else
{
lean_object* x_107; lean_object* x_108; 
x_107 = lean_ctor_get(x_102, 1);
lean_inc(x_107);
lean_dec(x_102);
lean_inc(x_16);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_108 = l_Lean_Elab_Tactic_rewriteTarget(x_66, x_67, x_1, x_9, x_10, x_11, x_12, x_13, x_14, x_88, x_16, x_107);
x_42 = x_108;
goto block_55;
}
}
else
{
uint8_t x_109; 
lean_dec(x_88);
lean_dec(x_66);
x_109 = !lean_is_exclusive(x_102);
if (x_109 == 0)
{
x_42 = x_102;
goto block_55;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_102, 0);
x_111 = lean_ctor_get(x_102, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_102);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
x_42 = x_112;
goto block_55;
}
}
}
}
}
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_113 = lean_ctor_get(x_72, 1);
lean_inc(x_113);
lean_dec(x_72);
x_114 = lean_ctor_get(x_15, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_15, 1);
lean_inc(x_115);
x_116 = lean_ctor_get(x_15, 2);
lean_inc(x_116);
x_117 = lean_ctor_get(x_15, 3);
lean_inc(x_117);
x_118 = lean_ctor_get(x_15, 4);
lean_inc(x_118);
x_119 = lean_ctor_get(x_15, 5);
lean_inc(x_119);
x_120 = lean_ctor_get(x_15, 6);
lean_inc(x_120);
x_121 = lean_ctor_get(x_15, 7);
lean_inc(x_121);
x_122 = l_Lean_replaceRef(x_59, x_117);
lean_dec(x_117);
lean_dec(x_59);
x_123 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_123, 0, x_114);
lean_ctor_set(x_123, 1, x_115);
lean_ctor_set(x_123, 2, x_116);
lean_ctor_set(x_123, 3, x_122);
lean_ctor_set(x_123, 4, x_118);
lean_ctor_set(x_123, 5, x_119);
lean_ctor_set(x_123, 6, x_120);
lean_ctor_set(x_123, 7, x_121);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_124; 
lean_inc(x_16);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_124 = l_Lean_Elab_Tactic_rewriteAll(x_66, x_67, x_1, x_9, x_10, x_11, x_12, x_13, x_14, x_123, x_16, x_113);
x_42 = x_124;
goto block_55;
}
else
{
lean_object* x_125; uint8_t x_126; lean_object* x_127; uint8_t x_128; 
x_125 = lean_ctor_get(x_3, 0);
x_126 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
x_127 = lean_array_get_size(x_125);
x_128 = lean_nat_dec_lt(x_20, x_127);
if (x_128 == 0)
{
lean_dec(x_127);
if (x_126 == 0)
{
lean_object* x_129; lean_object* x_130; 
lean_dec(x_123);
lean_dec(x_66);
x_129 = lean_box(0);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_113);
x_42 = x_130;
goto block_55;
}
else
{
lean_object* x_131; 
lean_inc(x_16);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_131 = l_Lean_Elab_Tactic_rewriteTarget(x_66, x_67, x_1, x_9, x_10, x_11, x_12, x_13, x_14, x_123, x_16, x_113);
x_42 = x_131;
goto block_55;
}
}
else
{
uint8_t x_132; 
x_132 = lean_nat_dec_le(x_127, x_127);
if (x_132 == 0)
{
lean_dec(x_127);
if (x_126 == 0)
{
lean_object* x_133; lean_object* x_134; 
lean_dec(x_123);
lean_dec(x_66);
x_133 = lean_box(0);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_113);
x_42 = x_134;
goto block_55;
}
else
{
lean_object* x_135; 
lean_inc(x_16);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_135 = l_Lean_Elab_Tactic_rewriteTarget(x_66, x_67, x_1, x_9, x_10, x_11, x_12, x_13, x_14, x_123, x_16, x_113);
x_42 = x_135;
goto block_55;
}
}
else
{
size_t x_136; size_t x_137; lean_object* x_138; lean_object* x_139; 
x_136 = 0;
x_137 = lean_usize_of_nat(x_127);
lean_dec(x_127);
x_138 = lean_box(0);
lean_inc(x_16);
lean_inc(x_123);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_66);
x_139 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__1(x_1, x_66, x_67, x_125, x_136, x_137, x_138, x_9, x_10, x_11, x_12, x_13, x_14, x_123, x_16, x_113);
if (lean_obj_tag(x_139) == 0)
{
if (x_126 == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_123);
lean_dec(x_66);
x_140 = lean_ctor_get(x_139, 1);
lean_inc(x_140);
if (lean_is_exclusive(x_139)) {
 lean_ctor_release(x_139, 0);
 lean_ctor_release(x_139, 1);
 x_141 = x_139;
} else {
 lean_dec_ref(x_139);
 x_141 = lean_box(0);
}
if (lean_is_scalar(x_141)) {
 x_142 = lean_alloc_ctor(0, 2, 0);
} else {
 x_142 = x_141;
}
lean_ctor_set(x_142, 0, x_138);
lean_ctor_set(x_142, 1, x_140);
x_42 = x_142;
goto block_55;
}
else
{
lean_object* x_143; lean_object* x_144; 
x_143 = lean_ctor_get(x_139, 1);
lean_inc(x_143);
lean_dec(x_139);
lean_inc(x_16);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_144 = l_Lean_Elab_Tactic_rewriteTarget(x_66, x_67, x_1, x_9, x_10, x_11, x_12, x_13, x_14, x_123, x_16, x_143);
x_42 = x_144;
goto block_55;
}
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_dec(x_123);
lean_dec(x_66);
x_145 = lean_ctor_get(x_139, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_139, 1);
lean_inc(x_146);
if (lean_is_exclusive(x_139)) {
 lean_ctor_release(x_139, 0);
 lean_ctor_release(x_139, 1);
 x_147 = x_139;
} else {
 lean_dec_ref(x_139);
 x_147 = lean_box(0);
}
if (lean_is_scalar(x_147)) {
 x_148 = lean_alloc_ctor(1, 2, 0);
} else {
 x_148 = x_147;
}
lean_ctor_set(x_148, 0, x_145);
lean_ctor_set(x_148, 1, x_146);
x_42 = x_148;
goto block_55;
}
}
}
}
}
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_210; lean_object* x_211; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; 
x_149 = lean_ctor_get(x_72, 1);
lean_inc(x_149);
lean_dec(x_72);
x_150 = l___private_Lean_Elab_InfoTree_0__Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__1___rarg(x_12, x_13, x_14, x_15, x_16, x_149);
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_150, 1);
lean_inc(x_152);
lean_dec(x_150);
x_267 = lean_ctor_get(x_15, 0);
lean_inc(x_267);
x_268 = lean_ctor_get(x_15, 1);
lean_inc(x_268);
x_269 = lean_ctor_get(x_15, 2);
lean_inc(x_269);
x_270 = lean_ctor_get(x_15, 3);
lean_inc(x_270);
x_271 = lean_ctor_get(x_15, 4);
lean_inc(x_271);
x_272 = lean_ctor_get(x_15, 5);
lean_inc(x_272);
x_273 = lean_ctor_get(x_15, 6);
lean_inc(x_273);
x_274 = lean_ctor_get(x_15, 7);
lean_inc(x_274);
x_275 = l_Lean_replaceRef(x_59, x_270);
lean_dec(x_270);
lean_dec(x_59);
x_276 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_276, 0, x_267);
lean_ctor_set(x_276, 1, x_268);
lean_ctor_set(x_276, 2, x_269);
lean_ctor_set(x_276, 3, x_275);
lean_ctor_set(x_276, 4, x_271);
lean_ctor_set(x_276, 5, x_272);
lean_ctor_set(x_276, 6, x_273);
lean_ctor_set(x_276, 7, x_274);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_277; 
lean_inc(x_16);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_277 = l_Lean_Elab_Tactic_rewriteAll(x_66, x_67, x_1, x_9, x_10, x_11, x_12, x_13, x_14, x_276, x_16, x_152);
if (lean_obj_tag(x_277) == 0)
{
lean_object* x_278; lean_object* x_279; 
x_278 = lean_ctor_get(x_277, 0);
lean_inc(x_278);
x_279 = lean_ctor_get(x_277, 1);
lean_inc(x_279);
lean_dec(x_277);
x_153 = x_278;
x_154 = x_279;
goto block_209;
}
else
{
lean_object* x_280; lean_object* x_281; 
x_280 = lean_ctor_get(x_277, 0);
lean_inc(x_280);
x_281 = lean_ctor_get(x_277, 1);
lean_inc(x_281);
lean_dec(x_277);
x_210 = x_280;
x_211 = x_281;
goto block_266;
}
}
else
{
lean_object* x_282; uint8_t x_283; lean_object* x_284; uint8_t x_285; 
x_282 = lean_ctor_get(x_3, 0);
x_283 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
x_284 = lean_array_get_size(x_282);
x_285 = lean_nat_dec_lt(x_20, x_284);
if (x_285 == 0)
{
lean_dec(x_284);
if (x_283 == 0)
{
lean_object* x_286; 
lean_dec(x_276);
lean_dec(x_66);
x_286 = lean_box(0);
x_153 = x_286;
x_154 = x_152;
goto block_209;
}
else
{
lean_object* x_287; 
lean_inc(x_16);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_287 = l_Lean_Elab_Tactic_rewriteTarget(x_66, x_67, x_1, x_9, x_10, x_11, x_12, x_13, x_14, x_276, x_16, x_152);
if (lean_obj_tag(x_287) == 0)
{
lean_object* x_288; lean_object* x_289; 
x_288 = lean_ctor_get(x_287, 0);
lean_inc(x_288);
x_289 = lean_ctor_get(x_287, 1);
lean_inc(x_289);
lean_dec(x_287);
x_153 = x_288;
x_154 = x_289;
goto block_209;
}
else
{
lean_object* x_290; lean_object* x_291; 
x_290 = lean_ctor_get(x_287, 0);
lean_inc(x_290);
x_291 = lean_ctor_get(x_287, 1);
lean_inc(x_291);
lean_dec(x_287);
x_210 = x_290;
x_211 = x_291;
goto block_266;
}
}
}
else
{
uint8_t x_292; 
x_292 = lean_nat_dec_le(x_284, x_284);
if (x_292 == 0)
{
lean_dec(x_284);
if (x_283 == 0)
{
lean_object* x_293; 
lean_dec(x_276);
lean_dec(x_66);
x_293 = lean_box(0);
x_153 = x_293;
x_154 = x_152;
goto block_209;
}
else
{
lean_object* x_294; 
lean_inc(x_16);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_294 = l_Lean_Elab_Tactic_rewriteTarget(x_66, x_67, x_1, x_9, x_10, x_11, x_12, x_13, x_14, x_276, x_16, x_152);
if (lean_obj_tag(x_294) == 0)
{
lean_object* x_295; lean_object* x_296; 
x_295 = lean_ctor_get(x_294, 0);
lean_inc(x_295);
x_296 = lean_ctor_get(x_294, 1);
lean_inc(x_296);
lean_dec(x_294);
x_153 = x_295;
x_154 = x_296;
goto block_209;
}
else
{
lean_object* x_297; lean_object* x_298; 
x_297 = lean_ctor_get(x_294, 0);
lean_inc(x_297);
x_298 = lean_ctor_get(x_294, 1);
lean_inc(x_298);
lean_dec(x_294);
x_210 = x_297;
x_211 = x_298;
goto block_266;
}
}
}
else
{
size_t x_299; size_t x_300; lean_object* x_301; lean_object* x_302; 
x_299 = 0;
x_300 = lean_usize_of_nat(x_284);
lean_dec(x_284);
x_301 = lean_box(0);
lean_inc(x_16);
lean_inc(x_276);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_66);
x_302 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__2(x_1, x_66, x_67, x_282, x_299, x_300, x_301, x_9, x_10, x_11, x_12, x_13, x_14, x_276, x_16, x_152);
if (lean_obj_tag(x_302) == 0)
{
if (x_283 == 0)
{
lean_object* x_303; 
lean_dec(x_276);
lean_dec(x_66);
x_303 = lean_ctor_get(x_302, 1);
lean_inc(x_303);
lean_dec(x_302);
x_153 = x_301;
x_154 = x_303;
goto block_209;
}
else
{
lean_object* x_304; lean_object* x_305; 
x_304 = lean_ctor_get(x_302, 1);
lean_inc(x_304);
lean_dec(x_302);
lean_inc(x_16);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_305 = l_Lean_Elab_Tactic_rewriteTarget(x_66, x_67, x_1, x_9, x_10, x_11, x_12, x_13, x_14, x_276, x_16, x_304);
if (lean_obj_tag(x_305) == 0)
{
lean_object* x_306; lean_object* x_307; 
x_306 = lean_ctor_get(x_305, 0);
lean_inc(x_306);
x_307 = lean_ctor_get(x_305, 1);
lean_inc(x_307);
lean_dec(x_305);
x_153 = x_306;
x_154 = x_307;
goto block_209;
}
else
{
lean_object* x_308; lean_object* x_309; 
x_308 = lean_ctor_get(x_305, 0);
lean_inc(x_308);
x_309 = lean_ctor_get(x_305, 1);
lean_inc(x_309);
lean_dec(x_305);
x_210 = x_308;
x_211 = x_309;
goto block_266;
}
}
}
else
{
lean_object* x_310; lean_object* x_311; 
lean_dec(x_276);
lean_dec(x_66);
x_310 = lean_ctor_get(x_302, 0);
lean_inc(x_310);
x_311 = lean_ctor_get(x_302, 1);
lean_inc(x_311);
lean_dec(x_302);
x_210 = x_310;
x_211 = x_311;
goto block_266;
}
}
}
}
block_209:
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_155 = lean_st_ref_get(x_16, x_154);
x_156 = lean_ctor_get(x_155, 1);
lean_inc(x_156);
lean_dec(x_155);
x_157 = lean_st_ref_get(x_12, x_156);
x_158 = lean_ctor_get(x_157, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_157, 1);
lean_inc(x_159);
lean_dec(x_157);
x_160 = lean_ctor_get(x_158, 5);
lean_inc(x_160);
lean_dec(x_158);
x_161 = lean_ctor_get(x_160, 1);
lean_inc(x_161);
lean_dec(x_160);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_162 = lean_apply_9(x_68, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_159);
if (lean_obj_tag(x_162) == 0)
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; 
x_163 = lean_ctor_get(x_162, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_162, 1);
lean_inc(x_164);
lean_dec(x_162);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_161);
x_166 = lean_st_ref_get(x_16, x_164);
x_167 = lean_ctor_get(x_166, 1);
lean_inc(x_167);
lean_dec(x_166);
x_168 = lean_st_ref_take(x_12, x_167);
x_169 = lean_ctor_get(x_168, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_169, 5);
lean_inc(x_170);
x_171 = lean_ctor_get(x_168, 1);
lean_inc(x_171);
lean_dec(x_168);
x_172 = !lean_is_exclusive(x_169);
if (x_172 == 0)
{
lean_object* x_173; uint8_t x_174; 
x_173 = lean_ctor_get(x_169, 5);
lean_dec(x_173);
x_174 = !lean_is_exclusive(x_170);
if (x_174 == 0)
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; uint8_t x_178; 
x_175 = lean_ctor_get(x_170, 1);
lean_dec(x_175);
x_176 = l_Std_PersistentArray_push___rarg(x_151, x_165);
lean_ctor_set(x_170, 1, x_176);
x_177 = lean_st_ref_set(x_12, x_169, x_171);
x_178 = !lean_is_exclusive(x_177);
if (x_178 == 0)
{
lean_object* x_179; 
x_179 = lean_ctor_get(x_177, 0);
lean_dec(x_179);
lean_ctor_set(x_177, 0, x_153);
x_42 = x_177;
goto block_55;
}
else
{
lean_object* x_180; lean_object* x_181; 
x_180 = lean_ctor_get(x_177, 1);
lean_inc(x_180);
lean_dec(x_177);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_153);
lean_ctor_set(x_181, 1, x_180);
x_42 = x_181;
goto block_55;
}
}
else
{
uint8_t x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_182 = lean_ctor_get_uint8(x_170, sizeof(void*)*2);
x_183 = lean_ctor_get(x_170, 0);
lean_inc(x_183);
lean_dec(x_170);
x_184 = l_Std_PersistentArray_push___rarg(x_151, x_165);
x_185 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_185, 0, x_183);
lean_ctor_set(x_185, 1, x_184);
lean_ctor_set_uint8(x_185, sizeof(void*)*2, x_182);
lean_ctor_set(x_169, 5, x_185);
x_186 = lean_st_ref_set(x_12, x_169, x_171);
x_187 = lean_ctor_get(x_186, 1);
lean_inc(x_187);
if (lean_is_exclusive(x_186)) {
 lean_ctor_release(x_186, 0);
 lean_ctor_release(x_186, 1);
 x_188 = x_186;
} else {
 lean_dec_ref(x_186);
 x_188 = lean_box(0);
}
if (lean_is_scalar(x_188)) {
 x_189 = lean_alloc_ctor(0, 2, 0);
} else {
 x_189 = x_188;
}
lean_ctor_set(x_189, 0, x_153);
lean_ctor_set(x_189, 1, x_187);
x_42 = x_189;
goto block_55;
}
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; uint8_t x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_190 = lean_ctor_get(x_169, 0);
x_191 = lean_ctor_get(x_169, 1);
x_192 = lean_ctor_get(x_169, 2);
x_193 = lean_ctor_get(x_169, 3);
x_194 = lean_ctor_get(x_169, 4);
lean_inc(x_194);
lean_inc(x_193);
lean_inc(x_192);
lean_inc(x_191);
lean_inc(x_190);
lean_dec(x_169);
x_195 = lean_ctor_get_uint8(x_170, sizeof(void*)*2);
x_196 = lean_ctor_get(x_170, 0);
lean_inc(x_196);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_197 = x_170;
} else {
 lean_dec_ref(x_170);
 x_197 = lean_box(0);
}
x_198 = l_Std_PersistentArray_push___rarg(x_151, x_165);
if (lean_is_scalar(x_197)) {
 x_199 = lean_alloc_ctor(0, 2, 1);
} else {
 x_199 = x_197;
}
lean_ctor_set(x_199, 0, x_196);
lean_ctor_set(x_199, 1, x_198);
lean_ctor_set_uint8(x_199, sizeof(void*)*2, x_195);
x_200 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_200, 0, x_190);
lean_ctor_set(x_200, 1, x_191);
lean_ctor_set(x_200, 2, x_192);
lean_ctor_set(x_200, 3, x_193);
lean_ctor_set(x_200, 4, x_194);
lean_ctor_set(x_200, 5, x_199);
x_201 = lean_st_ref_set(x_12, x_200, x_171);
x_202 = lean_ctor_get(x_201, 1);
lean_inc(x_202);
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 lean_ctor_release(x_201, 1);
 x_203 = x_201;
} else {
 lean_dec_ref(x_201);
 x_203 = lean_box(0);
}
if (lean_is_scalar(x_203)) {
 x_204 = lean_alloc_ctor(0, 2, 0);
} else {
 x_204 = x_203;
}
lean_ctor_set(x_204, 0, x_153);
lean_ctor_set(x_204, 1, x_202);
x_42 = x_204;
goto block_55;
}
}
else
{
uint8_t x_205; 
lean_dec(x_161);
lean_dec(x_153);
lean_dec(x_151);
x_205 = !lean_is_exclusive(x_162);
if (x_205 == 0)
{
x_42 = x_162;
goto block_55;
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_206 = lean_ctor_get(x_162, 0);
x_207 = lean_ctor_get(x_162, 1);
lean_inc(x_207);
lean_inc(x_206);
lean_dec(x_162);
x_208 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_208, 0, x_206);
lean_ctor_set(x_208, 1, x_207);
x_42 = x_208;
goto block_55;
}
}
}
block_266:
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_212 = lean_st_ref_get(x_16, x_211);
x_213 = lean_ctor_get(x_212, 1);
lean_inc(x_213);
lean_dec(x_212);
x_214 = lean_st_ref_get(x_12, x_213);
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_214, 1);
lean_inc(x_216);
lean_dec(x_214);
x_217 = lean_ctor_get(x_215, 5);
lean_inc(x_217);
lean_dec(x_215);
x_218 = lean_ctor_get(x_217, 1);
lean_inc(x_218);
lean_dec(x_217);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_219 = lean_apply_9(x_68, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_216);
if (lean_obj_tag(x_219) == 0)
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; uint8_t x_229; 
x_220 = lean_ctor_get(x_219, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_219, 1);
lean_inc(x_221);
lean_dec(x_219);
x_222 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_222, 0, x_220);
lean_ctor_set(x_222, 1, x_218);
x_223 = lean_st_ref_get(x_16, x_221);
x_224 = lean_ctor_get(x_223, 1);
lean_inc(x_224);
lean_dec(x_223);
x_225 = lean_st_ref_take(x_12, x_224);
x_226 = lean_ctor_get(x_225, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_226, 5);
lean_inc(x_227);
x_228 = lean_ctor_get(x_225, 1);
lean_inc(x_228);
lean_dec(x_225);
x_229 = !lean_is_exclusive(x_226);
if (x_229 == 0)
{
lean_object* x_230; uint8_t x_231; 
x_230 = lean_ctor_get(x_226, 5);
lean_dec(x_230);
x_231 = !lean_is_exclusive(x_227);
if (x_231 == 0)
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; uint8_t x_235; 
x_232 = lean_ctor_get(x_227, 1);
lean_dec(x_232);
x_233 = l_Std_PersistentArray_push___rarg(x_151, x_222);
lean_ctor_set(x_227, 1, x_233);
x_234 = lean_st_ref_set(x_12, x_226, x_228);
x_235 = !lean_is_exclusive(x_234);
if (x_235 == 0)
{
lean_object* x_236; 
x_236 = lean_ctor_get(x_234, 0);
lean_dec(x_236);
lean_ctor_set_tag(x_234, 1);
lean_ctor_set(x_234, 0, x_210);
x_42 = x_234;
goto block_55;
}
else
{
lean_object* x_237; lean_object* x_238; 
x_237 = lean_ctor_get(x_234, 1);
lean_inc(x_237);
lean_dec(x_234);
x_238 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_238, 0, x_210);
lean_ctor_set(x_238, 1, x_237);
x_42 = x_238;
goto block_55;
}
}
else
{
uint8_t x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_239 = lean_ctor_get_uint8(x_227, sizeof(void*)*2);
x_240 = lean_ctor_get(x_227, 0);
lean_inc(x_240);
lean_dec(x_227);
x_241 = l_Std_PersistentArray_push___rarg(x_151, x_222);
x_242 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_242, 0, x_240);
lean_ctor_set(x_242, 1, x_241);
lean_ctor_set_uint8(x_242, sizeof(void*)*2, x_239);
lean_ctor_set(x_226, 5, x_242);
x_243 = lean_st_ref_set(x_12, x_226, x_228);
x_244 = lean_ctor_get(x_243, 1);
lean_inc(x_244);
if (lean_is_exclusive(x_243)) {
 lean_ctor_release(x_243, 0);
 lean_ctor_release(x_243, 1);
 x_245 = x_243;
} else {
 lean_dec_ref(x_243);
 x_245 = lean_box(0);
}
if (lean_is_scalar(x_245)) {
 x_246 = lean_alloc_ctor(1, 2, 0);
} else {
 x_246 = x_245;
 lean_ctor_set_tag(x_246, 1);
}
lean_ctor_set(x_246, 0, x_210);
lean_ctor_set(x_246, 1, x_244);
x_42 = x_246;
goto block_55;
}
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; uint8_t x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
x_247 = lean_ctor_get(x_226, 0);
x_248 = lean_ctor_get(x_226, 1);
x_249 = lean_ctor_get(x_226, 2);
x_250 = lean_ctor_get(x_226, 3);
x_251 = lean_ctor_get(x_226, 4);
lean_inc(x_251);
lean_inc(x_250);
lean_inc(x_249);
lean_inc(x_248);
lean_inc(x_247);
lean_dec(x_226);
x_252 = lean_ctor_get_uint8(x_227, sizeof(void*)*2);
x_253 = lean_ctor_get(x_227, 0);
lean_inc(x_253);
if (lean_is_exclusive(x_227)) {
 lean_ctor_release(x_227, 0);
 lean_ctor_release(x_227, 1);
 x_254 = x_227;
} else {
 lean_dec_ref(x_227);
 x_254 = lean_box(0);
}
x_255 = l_Std_PersistentArray_push___rarg(x_151, x_222);
if (lean_is_scalar(x_254)) {
 x_256 = lean_alloc_ctor(0, 2, 1);
} else {
 x_256 = x_254;
}
lean_ctor_set(x_256, 0, x_253);
lean_ctor_set(x_256, 1, x_255);
lean_ctor_set_uint8(x_256, sizeof(void*)*2, x_252);
x_257 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_257, 0, x_247);
lean_ctor_set(x_257, 1, x_248);
lean_ctor_set(x_257, 2, x_249);
lean_ctor_set(x_257, 3, x_250);
lean_ctor_set(x_257, 4, x_251);
lean_ctor_set(x_257, 5, x_256);
x_258 = lean_st_ref_set(x_12, x_257, x_228);
x_259 = lean_ctor_get(x_258, 1);
lean_inc(x_259);
if (lean_is_exclusive(x_258)) {
 lean_ctor_release(x_258, 0);
 lean_ctor_release(x_258, 1);
 x_260 = x_258;
} else {
 lean_dec_ref(x_258);
 x_260 = lean_box(0);
}
if (lean_is_scalar(x_260)) {
 x_261 = lean_alloc_ctor(1, 2, 0);
} else {
 x_261 = x_260;
 lean_ctor_set_tag(x_261, 1);
}
lean_ctor_set(x_261, 0, x_210);
lean_ctor_set(x_261, 1, x_259);
x_42 = x_261;
goto block_55;
}
}
else
{
uint8_t x_262; 
lean_dec(x_218);
lean_dec(x_210);
lean_dec(x_151);
x_262 = !lean_is_exclusive(x_219);
if (x_262 == 0)
{
x_42 = x_219;
goto block_55;
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; 
x_263 = lean_ctor_get(x_219, 0);
x_264 = lean_ctor_get(x_219, 1);
lean_inc(x_264);
lean_inc(x_263);
lean_dec(x_219);
x_265 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_265, 0, x_263);
lean_ctor_set(x_265, 1, x_264);
x_42 = x_265;
goto block_55;
}
}
}
}
}
}
else
{
lean_object* x_335; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
x_335 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_335, 0, x_8);
lean_ctor_set(x_335, 1, x_17);
return x_335;
}
}
else
{
lean_object* x_336; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
x_336 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_336, 0, x_8);
lean_ctor_set(x_336, 1, x_17);
return x_336;
}
}
}
lean_object* l_Lean_Elab_Tactic_evalRewriteCore(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Syntax_getArg(x_2, x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_2, x_14);
x_16 = l_Lean_Syntax_getArg(x_15, x_12);
x_17 = l_Lean_Syntax_getArg(x_15, x_14);
lean_dec(x_15);
x_18 = l_Lean_Syntax_getArgs(x_17);
lean_dec(x_17);
x_19 = lean_unsigned_to_nat(2u);
x_20 = l_Lean_Syntax_getArg(x_2, x_19);
x_21 = l_Lean_Elab_Tactic_expandOptLocation(x_20);
lean_dec(x_20);
x_43 = lean_mk_empty_array_with_capacity(x_19);
x_44 = lean_array_push(x_43, x_13);
x_45 = lean_array_push(x_44, x_16);
x_46 = l_Lean_nullKind;
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = l_Lean_Elab_Tactic_mkInitialTacticInfo(x_47, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_st_ref_get(x_10, x_50);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_st_ref_get(x_6, x_52);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_54, 5);
lean_inc(x_55);
lean_dec(x_54);
x_56 = lean_ctor_get_uint8(x_55, sizeof(void*)*2);
lean_dec(x_55);
if (x_56 == 0)
{
uint8_t x_57; 
lean_dec(x_49);
x_57 = !lean_is_exclusive(x_53);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_53, 0);
lean_dec(x_58);
x_59 = lean_box(0);
lean_ctor_set(x_53, 0, x_59);
x_22 = x_53;
goto block_42;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_53, 1);
lean_inc(x_60);
lean_dec(x_53);
x_61 = lean_box(0);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_60);
x_22 = x_62;
goto block_42;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_63 = lean_ctor_get(x_53, 1);
lean_inc(x_63);
lean_dec(x_53);
x_64 = l___private_Lean_Elab_InfoTree_0__Lean_Elab_getResetInfoTrees___at_Lean_Elab_Tactic_withTacticInfoContext___spec__1___rarg(x_6, x_7, x_8, x_9, x_10, x_63);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_st_ref_get(x_10, x_66);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
lean_dec(x_67);
x_69 = lean_st_ref_get(x_6, x_68);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_ctor_get(x_70, 5);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_dec(x_72);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_74 = lean_apply_9(x_49, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_71);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_73);
x_78 = lean_st_ref_get(x_10, x_76);
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
lean_dec(x_78);
x_80 = lean_st_ref_take(x_6, x_79);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_81, 5);
lean_inc(x_82);
x_83 = lean_ctor_get(x_80, 1);
lean_inc(x_83);
lean_dec(x_80);
x_84 = !lean_is_exclusive(x_81);
if (x_84 == 0)
{
lean_object* x_85; uint8_t x_86; 
x_85 = lean_ctor_get(x_81, 5);
lean_dec(x_85);
x_86 = !lean_is_exclusive(x_82);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_87 = lean_ctor_get(x_82, 1);
lean_dec(x_87);
x_88 = l_Std_PersistentArray_push___rarg(x_65, x_77);
lean_ctor_set(x_82, 1, x_88);
x_89 = lean_st_ref_set(x_6, x_81, x_83);
x_90 = !lean_is_exclusive(x_89);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_89, 0);
lean_dec(x_91);
x_92 = lean_box(0);
lean_ctor_set(x_89, 0, x_92);
x_22 = x_89;
goto block_42;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_89, 1);
lean_inc(x_93);
lean_dec(x_89);
x_94 = lean_box(0);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_93);
x_22 = x_95;
goto block_42;
}
}
else
{
uint8_t x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_96 = lean_ctor_get_uint8(x_82, sizeof(void*)*2);
x_97 = lean_ctor_get(x_82, 0);
lean_inc(x_97);
lean_dec(x_82);
x_98 = l_Std_PersistentArray_push___rarg(x_65, x_77);
x_99 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
lean_ctor_set_uint8(x_99, sizeof(void*)*2, x_96);
lean_ctor_set(x_81, 5, x_99);
x_100 = lean_st_ref_set(x_6, x_81, x_83);
x_101 = lean_ctor_get(x_100, 1);
lean_inc(x_101);
if (lean_is_exclusive(x_100)) {
 lean_ctor_release(x_100, 0);
 lean_ctor_release(x_100, 1);
 x_102 = x_100;
} else {
 lean_dec_ref(x_100);
 x_102 = lean_box(0);
}
x_103 = lean_box(0);
if (lean_is_scalar(x_102)) {
 x_104 = lean_alloc_ctor(0, 2, 0);
} else {
 x_104 = x_102;
}
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_101);
x_22 = x_104;
goto block_42;
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; uint8_t x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_105 = lean_ctor_get(x_81, 0);
x_106 = lean_ctor_get(x_81, 1);
x_107 = lean_ctor_get(x_81, 2);
x_108 = lean_ctor_get(x_81, 3);
x_109 = lean_ctor_get(x_81, 4);
lean_inc(x_109);
lean_inc(x_108);
lean_inc(x_107);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_81);
x_110 = lean_ctor_get_uint8(x_82, sizeof(void*)*2);
x_111 = lean_ctor_get(x_82, 0);
lean_inc(x_111);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_112 = x_82;
} else {
 lean_dec_ref(x_82);
 x_112 = lean_box(0);
}
x_113 = l_Std_PersistentArray_push___rarg(x_65, x_77);
if (lean_is_scalar(x_112)) {
 x_114 = lean_alloc_ctor(0, 2, 1);
} else {
 x_114 = x_112;
}
lean_ctor_set(x_114, 0, x_111);
lean_ctor_set(x_114, 1, x_113);
lean_ctor_set_uint8(x_114, sizeof(void*)*2, x_110);
x_115 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_115, 0, x_105);
lean_ctor_set(x_115, 1, x_106);
lean_ctor_set(x_115, 2, x_107);
lean_ctor_set(x_115, 3, x_108);
lean_ctor_set(x_115, 4, x_109);
lean_ctor_set(x_115, 5, x_114);
x_116 = lean_st_ref_set(x_6, x_115, x_83);
x_117 = lean_ctor_get(x_116, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 x_118 = x_116;
} else {
 lean_dec_ref(x_116);
 x_118 = lean_box(0);
}
x_119 = lean_box(0);
if (lean_is_scalar(x_118)) {
 x_120 = lean_alloc_ctor(0, 2, 0);
} else {
 x_120 = x_118;
}
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_117);
x_22 = x_120;
goto block_42;
}
}
else
{
uint8_t x_121; 
lean_dec(x_73);
lean_dec(x_65);
x_121 = !lean_is_exclusive(x_74);
if (x_121 == 0)
{
x_22 = x_74;
goto block_42;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_74, 0);
x_123 = lean_ctor_get(x_74, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_74);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
x_22 = x_124;
goto block_42;
}
}
}
block_42:
{
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_array_get_size(x_18);
x_25 = lean_nat_add(x_24, x_14);
x_26 = lean_nat_div(x_25, x_19);
lean_dec(x_25);
lean_inc(x_26);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_12);
lean_ctor_set(x_27, 1, x_26);
lean_ctor_set(x_27, 2, x_14);
x_28 = lean_box(0);
x_29 = l_Std_Range_forIn_loop___at_Lean_Elab_Tactic_evalRewriteCore___spec__3(x_1, x_18, x_21, x_24, x_27, x_26, x_12, x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_23);
lean_dec(x_27);
lean_dec(x_24);
lean_dec(x_21);
lean_dec(x_18);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
lean_ctor_set(x_29, 0, x_28);
return x_29;
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_28);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_29);
if (x_34 == 0)
{
return x_29;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_29, 0);
x_36 = lean_ctor_get(x_29, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_29);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_21);
lean_dec(x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_38 = !lean_is_exclusive(x_22);
if (x_38 == 0)
{
return x_22;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_22, 0);
x_40 = lean_ctor_get(x_22, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_22);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; uint8_t x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_17 = lean_unbox(x_1);
lean_dec(x_1);
x_18 = lean_unbox(x_3);
lean_dec(x_3);
x_19 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_20 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_21 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__1(x_17, x_2, x_18, x_4, x_19, x_20, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_4);
return x_21;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; uint8_t x_18; size_t x_19; size_t x_20; lean_object* x_21; 
x_17 = lean_unbox(x_1);
lean_dec(x_1);
x_18 = lean_unbox(x_3);
lean_dec(x_3);
x_19 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_20 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_21 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Tactic_evalRewriteCore___spec__2(x_17, x_2, x_18, x_4, x_19, x_20, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_4);
return x_21;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Tactic_evalRewriteCore___spec__3___boxed(lean_object** _args) {
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
x_18 = lean_unbox(x_1);
lean_dec(x_1);
x_19 = l_Std_Range_forIn_loop___at_Lean_Elab_Tactic_evalRewriteCore___spec__3(x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_19;
}
}
lean_object* l_Lean_Elab_Tactic_evalRewriteCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_1);
lean_dec(x_1);
x_13 = l_Lean_Elab_Tactic_evalRewriteCore(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_Lean_Elab_Tactic_evalRewriteSeq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = 3;
x_12 = l_Lean_Elab_Tactic_evalRewriteCore(x_11, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Tactic_evalRewriteSeq(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rewriteSeq");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__2;
x_2 = l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("evalRewriteSeq");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_evalDone___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRewriteSeq___boxed), 10, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Tactic_tacticElabAttribute;
x_3 = l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__4;
x_5 = l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__5;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Tactic_evalERewriteSeq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = 1;
x_12 = l_Lean_Elab_Tactic_evalRewriteCore(x_11, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_Tactic_evalERewriteSeq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Tactic_evalERewriteSeq(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("erewriteSeq");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__2;
x_2 = l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("evalERewriteSeq");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Tactic_evalDone___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalERewriteSeq___boxed), 10, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Tactic_tacticElabAttribute;
x_3 = l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__4;
x_5 = l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__5;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Rewrite(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Replace(lean_object*);
lean_object* initialize_Lean_Elab_Tactic_Basic(lean_object*);
lean_object* initialize_Lean_Elab_Tactic_ElabTerm(lean_object*);
lean_object* initialize_Lean_Elab_Tactic_Location(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Tactic_Rewrite(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Rewrite(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Replace(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_ElabTerm(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Location(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__1 = _init_l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__1);
l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__2 = _init_l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__2);
l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__3 = _init_l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__3);
l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__4 = _init_l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__4);
l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__5 = _init_l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq___closed__5);
res = l___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__1 = _init_l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__1);
l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__2 = _init_l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__2);
l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__3 = _init_l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__3);
l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__4 = _init_l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__4);
l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__5 = _init_l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq___closed__5);
res = l___regBuiltin_Lean_Elab_Tactic_evalERewriteSeq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
