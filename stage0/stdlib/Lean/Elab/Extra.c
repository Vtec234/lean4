// Lean compiler output
// Module: Lean.Elab.Extra
// Imports: Init Lean.Elab.App
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
lean_object* l_Lean_Elab_Term_elabForIn_getMonad_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinRel___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__3;
lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_hasUnknownType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabForIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinOp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__2;
extern lean_object* l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabForIn___closed__2;
lean_object* l_Lean_Elab_Term_elabBinRel_match__1(lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Term_elabForIn___closed__1;
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinRel___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ensureHasType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabForIn_getMonad_match__1(lean_object*);
lean_object* l_Lean_Elab_Term_elabForIn_getMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabForIn_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabForIn_match__1(lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinOp_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinRel___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabAppArgs(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinOp_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Term_elabBinRel___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinRel___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveId_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinRel___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinRel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinRel_match__2(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabBinOp(lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l_Lean_Elab_Term_elabForIn_throwFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinOp_match__2(lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsUsingDefault(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinRel___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabForIn___closed__3;
lean_object* l_Lean_Meta_trySynthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelSucc(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabForIn(lean_object*);
lean_object* l_Lean_Elab_Term_SavedState_restore(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinRel_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinRel_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isTypeApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabForIn___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_adaptExpander___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinOp_match__1(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabBinRel(lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Term_elabBinRel___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_forInMacro___closed__2;
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_binrel___closed__2;
lean_object* l_Lean_Elab_Term_tryPostpone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVar___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__2;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__1;
lean_object* l_Lean_Elab_Term_isLocalIdent_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_saveState___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__1;
lean_object* l_Lean_Elab_Term_elabForIn_throwFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabForIn_getMonad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltinParser_Lean_Parser_Term_binop___closed__2;
lean_object* l_Lean_Elab_Term_elabBinOp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinRel_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Term_elabBinRel_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinRel_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabBinRel_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_elabBinRel_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinRel_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Term_elabBinRel___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_9 = lean_mk_string("unknown constant '");
x_10 = l_Lean_stringToMessageData(x_9);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = l_Lean_mkConst(x_1, x_11);
x_13 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_mk_string("'");
x_16 = l_Lean_stringToMessageData(x_15);
lean_dec(x_15);
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_18;
}
}
lean_object* l_Lean_Elab_Term_elabBinRel___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
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
lean_object* l_Lean_Elab_Term_elabBinRel___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_11 = lean_unsigned_to_nat(3u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = 1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_14 = l_Lean_Elab_Term_elabTerm(x_12, x_2, x_13, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinRel___lambda__1___boxed), 10, 0);
x_18 = lean_box(0);
x_19 = lean_mk_string("OfNat");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_mk_string("ofNat");
x_22 = lean_name_mk_string(x_20, x_21);
x_23 = l_Lean_Expr_isAppOfArity(x_3, x_22, x_11);
if (x_23 == 0)
{
uint8_t x_24; 
x_24 = l_Lean_Expr_isAppOfArity(x_15, x_22, x_11);
lean_dec(x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_2);
x_25 = lean_box(0);
x_26 = lean_apply_10(x_17, x_3, x_15, x_25, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
return x_26;
}
else
{
lean_object* x_27; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_3);
x_27 = l_Lean_Meta_inferType(x_3, x_6, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_28);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_31 = l_Lean_Elab_Term_ensureHasType(x_30, x_15, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_29);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_box(0);
x_35 = lean_apply_10(x_17, x_3, x_32, x_34, x_4, x_5, x_6, x_7, x_8, x_9, x_33);
return x_35;
}
else
{
uint8_t x_36; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
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
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_40 = !lean_is_exclusive(x_27);
if (x_40 == 0)
{
return x_27;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_27, 0);
x_42 = lean_ctor_get(x_27, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_27);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
else
{
lean_object* x_44; 
lean_dec(x_22);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_15);
x_44 = l_Lean_Meta_inferType(x_15, x_6, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_45);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_48 = l_Lean_Elab_Term_ensureHasType(x_47, x_3, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_46);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_box(0);
x_52 = lean_apply_10(x_17, x_49, x_15, x_51, x_4, x_5, x_6, x_7, x_8, x_9, x_50);
return x_52;
}
else
{
uint8_t x_53; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_53 = !lean_is_exclusive(x_48);
if (x_53 == 0)
{
return x_48;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_48, 0);
x_55 = lean_ctor_get(x_48, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_48);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_57 = !lean_is_exclusive(x_44);
if (x_57 == 0)
{
return x_44;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_44, 0);
x_59 = lean_ctor_get(x_44, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_44);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_61 = !lean_is_exclusive(x_14);
if (x_61 == 0)
{
return x_14;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_14, 0);
x_63 = lean_ctor_get(x_14, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_14);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabBinRel___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_mk_empty_array_with_capacity(x_13);
lean_inc(x_11);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_11);
lean_inc(x_12);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_12);
x_17 = lean_unsigned_to_nat(2u);
x_18 = lean_mk_empty_array_with_capacity(x_17);
x_19 = lean_array_push(x_18, x_15);
x_20 = lean_array_push(x_19, x_16);
x_21 = 0;
x_22 = l_Lean_Elab_Term_elabAppArgs(x_1, x_14, x_20, x_2, x_21, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_22;
}
}
lean_object* l_Lean_Elab_Term_elabBinRel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_mk_string("term");
x_13 = 0;
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_11);
x_14 = l_Lean_Elab_Term_resolveId_x3f(x_11, x_12, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_2);
lean_dec(x_1);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Syntax_getId(x_11);
lean_dec(x_11);
x_18 = l_Lean_throwUnknownConstant___at_Lean_Elab_Term_elabBinRel___spec__1(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_11);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec(x_14);
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = l_Lean_Elab_Term_saveState___rarg(x_4, x_5, x_6, x_7, x_8, x_19);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_unsigned_to_nat(2u);
x_26 = l_Lean_Syntax_getArg(x_1, x_25);
x_27 = lean_box(0);
x_28 = 1;
x_29 = lean_box(x_28);
x_30 = lean_box(x_28);
lean_inc(x_26);
x_31 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(x_31, 0, x_26);
lean_closure_set(x_31, 1, x_27);
lean_closure_set(x_31, 2, x_29);
lean_closure_set(x_31, 3, x_30);
lean_inc(x_1);
x_32 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinRel___lambda__2___boxed), 10, 2);
lean_closure_set(x_32, 0, x_1);
lean_closure_set(x_32, 1, x_27);
x_33 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_33, 0, x_31);
lean_closure_set(x_33, 1, x_32);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_34 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(x_33, x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = !lean_is_exclusive(x_35);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_35, 0);
x_39 = lean_ctor_get(x_35, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_38);
x_40 = l_Lean_Meta_inferType(x_38, x_5, x_6, x_7, x_8, x_36);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_39);
x_43 = l_Lean_Meta_inferType(x_39, x_5, x_6, x_7, x_8, x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_unsigned_to_nat(3u);
x_47 = l_Lean_Syntax_getArg(x_1, x_46);
lean_dec(x_1);
lean_ctor_set(x_15, 0, x_41);
x_48 = lean_ctor_get(x_7, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_7, 1);
lean_inc(x_49);
x_50 = lean_ctor_get(x_7, 2);
lean_inc(x_50);
x_51 = lean_ctor_get(x_7, 3);
lean_inc(x_51);
x_52 = lean_ctor_get(x_7, 4);
lean_inc(x_52);
x_53 = lean_ctor_get(x_7, 5);
lean_inc(x_53);
x_54 = lean_ctor_get(x_7, 6);
lean_inc(x_54);
x_55 = lean_ctor_get(x_7, 7);
lean_inc(x_55);
x_56 = l_Lean_replaceRef(x_47, x_51);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
x_57 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_57, 0, x_48);
lean_ctor_set(x_57, 1, x_49);
lean_ctor_set(x_57, 2, x_50);
lean_ctor_set(x_57, 3, x_56);
lean_ctor_set(x_57, 4, x_52);
lean_ctor_set(x_57, 5, x_53);
lean_ctor_set(x_57, 6, x_54);
lean_ctor_set(x_57, 7, x_55);
lean_inc(x_8);
lean_inc(x_57);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_39);
x_58 = l_Lean_Elab_Term_ensureHasType(x_15, x_39, x_27, x_3, x_4, x_5, x_6, x_57, x_8, x_45);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_57);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_44);
lean_dec(x_39);
lean_dec(x_26);
lean_dec(x_23);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
lean_ctor_set(x_35, 1, x_59);
x_61 = l_Lean_Elab_Term_elabBinRel___lambda__3(x_21, x_2, x_35, x_3, x_4, x_5, x_6, x_7, x_8, x_60);
lean_dec(x_35);
return x_61;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_62 = lean_ctor_get(x_58, 1);
lean_inc(x_62);
lean_dec(x_58);
x_63 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_63, 0, x_44);
x_64 = l_Lean_replaceRef(x_26, x_51);
lean_dec(x_51);
x_65 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_65, 0, x_48);
lean_ctor_set(x_65, 1, x_49);
lean_ctor_set(x_65, 2, x_50);
lean_ctor_set(x_65, 3, x_64);
lean_ctor_set(x_65, 4, x_52);
lean_ctor_set(x_65, 5, x_53);
lean_ctor_set(x_65, 6, x_54);
lean_ctor_set(x_65, 7, x_55);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_66 = l_Lean_Elab_Term_ensureHasType(x_63, x_38, x_27, x_3, x_4, x_5, x_6, x_65, x_8, x_62);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_57);
lean_dec(x_47);
lean_dec(x_26);
lean_dec(x_23);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
lean_ctor_set(x_35, 0, x_67);
x_69 = l_Lean_Elab_Term_elabBinRel___lambda__3(x_21, x_2, x_35, x_3, x_4, x_5, x_6, x_7, x_8, x_68);
lean_dec(x_35);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_39);
x_70 = lean_ctor_get(x_66, 1);
lean_inc(x_70);
lean_dec(x_66);
x_71 = l_Lean_Elab_Term_SavedState_restore(x_23, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_70);
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
lean_dec(x_71);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_73 = l_Lean_Elab_Term_elabTerm(x_26, x_27, x_28, x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_72);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_76 = l_Lean_Elab_Term_elabTerm(x_47, x_27, x_28, x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_75);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_74);
x_79 = l_Lean_Meta_inferType(x_74, x_5, x_6, x_7, x_8, x_78);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_77);
x_82 = l_Lean_Meta_inferType(x_77, x_5, x_6, x_7, x_8, x_81);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
lean_dec(x_82);
x_84 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_84, 0, x_80);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_85 = l_Lean_Elab_Term_ensureHasType(x_84, x_77, x_27, x_3, x_4, x_5, x_6, x_57, x_8, x_83);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
lean_ctor_set(x_35, 1, x_86);
lean_ctor_set(x_35, 0, x_74);
x_88 = l_Lean_Elab_Term_elabBinRel___lambda__3(x_21, x_2, x_35, x_3, x_4, x_5, x_6, x_7, x_8, x_87);
lean_dec(x_35);
return x_88;
}
else
{
uint8_t x_89; 
lean_dec(x_74);
lean_free_object(x_35);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_85);
if (x_89 == 0)
{
return x_85;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_85, 0);
x_91 = lean_ctor_get(x_85, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_85);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
else
{
uint8_t x_93; 
lean_dec(x_80);
lean_dec(x_77);
lean_dec(x_74);
lean_dec(x_57);
lean_free_object(x_35);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_93 = !lean_is_exclusive(x_82);
if (x_93 == 0)
{
return x_82;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_82, 0);
x_95 = lean_ctor_get(x_82, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_82);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
else
{
uint8_t x_97; 
lean_dec(x_77);
lean_dec(x_74);
lean_dec(x_57);
lean_free_object(x_35);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_97 = !lean_is_exclusive(x_79);
if (x_97 == 0)
{
return x_79;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_79, 0);
x_99 = lean_ctor_get(x_79, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_79);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
else
{
uint8_t x_101; 
lean_dec(x_74);
lean_dec(x_57);
lean_free_object(x_35);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_101 = !lean_is_exclusive(x_76);
if (x_101 == 0)
{
return x_76;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_76, 0);
x_103 = lean_ctor_get(x_76, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_76);
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
lean_dec(x_57);
lean_dec(x_47);
lean_free_object(x_35);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_105 = !lean_is_exclusive(x_73);
if (x_105 == 0)
{
return x_73;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_73, 0);
x_107 = lean_ctor_get(x_73, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_73);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
}
}
else
{
uint8_t x_109; 
lean_dec(x_41);
lean_free_object(x_35);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_26);
lean_dec(x_23);
lean_free_object(x_15);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_109 = !lean_is_exclusive(x_43);
if (x_109 == 0)
{
return x_43;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_43, 0);
x_111 = lean_ctor_get(x_43, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_43);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
else
{
uint8_t x_113; 
lean_free_object(x_35);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_26);
lean_dec(x_23);
lean_free_object(x_15);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_113 = !lean_is_exclusive(x_40);
if (x_113 == 0)
{
return x_40;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_40, 0);
x_115 = lean_ctor_get(x_40, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_40);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_35, 0);
x_118 = lean_ctor_get(x_35, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_35);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_117);
x_119 = l_Lean_Meta_inferType(x_117, x_5, x_6, x_7, x_8, x_36);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_118);
x_122 = l_Lean_Meta_inferType(x_118, x_5, x_6, x_7, x_8, x_121);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
x_125 = lean_unsigned_to_nat(3u);
x_126 = l_Lean_Syntax_getArg(x_1, x_125);
lean_dec(x_1);
lean_ctor_set(x_15, 0, x_120);
x_127 = lean_ctor_get(x_7, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_7, 1);
lean_inc(x_128);
x_129 = lean_ctor_get(x_7, 2);
lean_inc(x_129);
x_130 = lean_ctor_get(x_7, 3);
lean_inc(x_130);
x_131 = lean_ctor_get(x_7, 4);
lean_inc(x_131);
x_132 = lean_ctor_get(x_7, 5);
lean_inc(x_132);
x_133 = lean_ctor_get(x_7, 6);
lean_inc(x_133);
x_134 = lean_ctor_get(x_7, 7);
lean_inc(x_134);
x_135 = l_Lean_replaceRef(x_126, x_130);
lean_inc(x_134);
lean_inc(x_133);
lean_inc(x_132);
lean_inc(x_131);
lean_inc(x_129);
lean_inc(x_128);
lean_inc(x_127);
x_136 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_136, 0, x_127);
lean_ctor_set(x_136, 1, x_128);
lean_ctor_set(x_136, 2, x_129);
lean_ctor_set(x_136, 3, x_135);
lean_ctor_set(x_136, 4, x_131);
lean_ctor_set(x_136, 5, x_132);
lean_ctor_set(x_136, 6, x_133);
lean_ctor_set(x_136, 7, x_134);
lean_inc(x_8);
lean_inc(x_136);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_118);
x_137 = l_Lean_Elab_Term_ensureHasType(x_15, x_118, x_27, x_3, x_4, x_5, x_6, x_136, x_8, x_124);
if (lean_obj_tag(x_137) == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_136);
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_132);
lean_dec(x_131);
lean_dec(x_130);
lean_dec(x_129);
lean_dec(x_128);
lean_dec(x_127);
lean_dec(x_126);
lean_dec(x_123);
lean_dec(x_118);
lean_dec(x_26);
lean_dec(x_23);
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_137, 1);
lean_inc(x_139);
lean_dec(x_137);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_117);
lean_ctor_set(x_140, 1, x_138);
x_141 = l_Lean_Elab_Term_elabBinRel___lambda__3(x_21, x_2, x_140, x_3, x_4, x_5, x_6, x_7, x_8, x_139);
lean_dec(x_140);
return x_141;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_142 = lean_ctor_get(x_137, 1);
lean_inc(x_142);
lean_dec(x_137);
x_143 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_143, 0, x_123);
x_144 = l_Lean_replaceRef(x_26, x_130);
lean_dec(x_130);
x_145 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_145, 0, x_127);
lean_ctor_set(x_145, 1, x_128);
lean_ctor_set(x_145, 2, x_129);
lean_ctor_set(x_145, 3, x_144);
lean_ctor_set(x_145, 4, x_131);
lean_ctor_set(x_145, 5, x_132);
lean_ctor_set(x_145, 6, x_133);
lean_ctor_set(x_145, 7, x_134);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_146 = l_Lean_Elab_Term_ensureHasType(x_143, x_117, x_27, x_3, x_4, x_5, x_6, x_145, x_8, x_142);
if (lean_obj_tag(x_146) == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
lean_dec(x_136);
lean_dec(x_126);
lean_dec(x_26);
lean_dec(x_23);
x_147 = lean_ctor_get(x_146, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_146, 1);
lean_inc(x_148);
lean_dec(x_146);
x_149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_149, 0, x_147);
lean_ctor_set(x_149, 1, x_118);
x_150 = l_Lean_Elab_Term_elabBinRel___lambda__3(x_21, x_2, x_149, x_3, x_4, x_5, x_6, x_7, x_8, x_148);
lean_dec(x_149);
return x_150;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
lean_dec(x_118);
x_151 = lean_ctor_get(x_146, 1);
lean_inc(x_151);
lean_dec(x_146);
x_152 = l_Lean_Elab_Term_SavedState_restore(x_23, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_151);
x_153 = lean_ctor_get(x_152, 1);
lean_inc(x_153);
lean_dec(x_152);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_154 = l_Lean_Elab_Term_elabTerm(x_26, x_27, x_28, x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_153);
if (lean_obj_tag(x_154) == 0)
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_154, 1);
lean_inc(x_156);
lean_dec(x_154);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_157 = l_Lean_Elab_Term_elabTerm(x_126, x_27, x_28, x_28, x_3, x_4, x_5, x_6, x_7, x_8, x_156);
if (lean_obj_tag(x_157) == 0)
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_158 = lean_ctor_get(x_157, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_157, 1);
lean_inc(x_159);
lean_dec(x_157);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_155);
x_160 = l_Lean_Meta_inferType(x_155, x_5, x_6, x_7, x_8, x_159);
if (lean_obj_tag(x_160) == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_161 = lean_ctor_get(x_160, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_160, 1);
lean_inc(x_162);
lean_dec(x_160);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_158);
x_163 = l_Lean_Meta_inferType(x_158, x_5, x_6, x_7, x_8, x_162);
if (lean_obj_tag(x_163) == 0)
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_163, 1);
lean_inc(x_164);
lean_dec(x_163);
x_165 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_165, 0, x_161);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_166 = l_Lean_Elab_Term_ensureHasType(x_165, x_158, x_27, x_3, x_4, x_5, x_6, x_136, x_8, x_164);
if (lean_obj_tag(x_166) == 0)
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_167 = lean_ctor_get(x_166, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_166, 1);
lean_inc(x_168);
lean_dec(x_166);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_155);
lean_ctor_set(x_169, 1, x_167);
x_170 = l_Lean_Elab_Term_elabBinRel___lambda__3(x_21, x_2, x_169, x_3, x_4, x_5, x_6, x_7, x_8, x_168);
lean_dec(x_169);
return x_170;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
lean_dec(x_155);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_171 = lean_ctor_get(x_166, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_166, 1);
lean_inc(x_172);
if (lean_is_exclusive(x_166)) {
 lean_ctor_release(x_166, 0);
 lean_ctor_release(x_166, 1);
 x_173 = x_166;
} else {
 lean_dec_ref(x_166);
 x_173 = lean_box(0);
}
if (lean_is_scalar(x_173)) {
 x_174 = lean_alloc_ctor(1, 2, 0);
} else {
 x_174 = x_173;
}
lean_ctor_set(x_174, 0, x_171);
lean_ctor_set(x_174, 1, x_172);
return x_174;
}
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
lean_dec(x_161);
lean_dec(x_158);
lean_dec(x_155);
lean_dec(x_136);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_175 = lean_ctor_get(x_163, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_163, 1);
lean_inc(x_176);
if (lean_is_exclusive(x_163)) {
 lean_ctor_release(x_163, 0);
 lean_ctor_release(x_163, 1);
 x_177 = x_163;
} else {
 lean_dec_ref(x_163);
 x_177 = lean_box(0);
}
if (lean_is_scalar(x_177)) {
 x_178 = lean_alloc_ctor(1, 2, 0);
} else {
 x_178 = x_177;
}
lean_ctor_set(x_178, 0, x_175);
lean_ctor_set(x_178, 1, x_176);
return x_178;
}
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
lean_dec(x_158);
lean_dec(x_155);
lean_dec(x_136);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_179 = lean_ctor_get(x_160, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_160, 1);
lean_inc(x_180);
if (lean_is_exclusive(x_160)) {
 lean_ctor_release(x_160, 0);
 lean_ctor_release(x_160, 1);
 x_181 = x_160;
} else {
 lean_dec_ref(x_160);
 x_181 = lean_box(0);
}
if (lean_is_scalar(x_181)) {
 x_182 = lean_alloc_ctor(1, 2, 0);
} else {
 x_182 = x_181;
}
lean_ctor_set(x_182, 0, x_179);
lean_ctor_set(x_182, 1, x_180);
return x_182;
}
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_155);
lean_dec(x_136);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_183 = lean_ctor_get(x_157, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_157, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_157)) {
 lean_ctor_release(x_157, 0);
 lean_ctor_release(x_157, 1);
 x_185 = x_157;
} else {
 lean_dec_ref(x_157);
 x_185 = lean_box(0);
}
if (lean_is_scalar(x_185)) {
 x_186 = lean_alloc_ctor(1, 2, 0);
} else {
 x_186 = x_185;
}
lean_ctor_set(x_186, 0, x_183);
lean_ctor_set(x_186, 1, x_184);
return x_186;
}
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
lean_dec(x_136);
lean_dec(x_126);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_187 = lean_ctor_get(x_154, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_154, 1);
lean_inc(x_188);
if (lean_is_exclusive(x_154)) {
 lean_ctor_release(x_154, 0);
 lean_ctor_release(x_154, 1);
 x_189 = x_154;
} else {
 lean_dec_ref(x_154);
 x_189 = lean_box(0);
}
if (lean_is_scalar(x_189)) {
 x_190 = lean_alloc_ctor(1, 2, 0);
} else {
 x_190 = x_189;
}
lean_ctor_set(x_190, 0, x_187);
lean_ctor_set(x_190, 1, x_188);
return x_190;
}
}
}
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
lean_dec(x_120);
lean_dec(x_118);
lean_dec(x_117);
lean_dec(x_26);
lean_dec(x_23);
lean_free_object(x_15);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_191 = lean_ctor_get(x_122, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_122, 1);
lean_inc(x_192);
if (lean_is_exclusive(x_122)) {
 lean_ctor_release(x_122, 0);
 lean_ctor_release(x_122, 1);
 x_193 = x_122;
} else {
 lean_dec_ref(x_122);
 x_193 = lean_box(0);
}
if (lean_is_scalar(x_193)) {
 x_194 = lean_alloc_ctor(1, 2, 0);
} else {
 x_194 = x_193;
}
lean_ctor_set(x_194, 0, x_191);
lean_ctor_set(x_194, 1, x_192);
return x_194;
}
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
lean_dec(x_118);
lean_dec(x_117);
lean_dec(x_26);
lean_dec(x_23);
lean_free_object(x_15);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_195 = lean_ctor_get(x_119, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_119, 1);
lean_inc(x_196);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_197 = x_119;
} else {
 lean_dec_ref(x_119);
 x_197 = lean_box(0);
}
if (lean_is_scalar(x_197)) {
 x_198 = lean_alloc_ctor(1, 2, 0);
} else {
 x_198 = x_197;
}
lean_ctor_set(x_198, 0, x_195);
lean_ctor_set(x_198, 1, x_196);
return x_198;
}
}
}
else
{
uint8_t x_199; 
lean_dec(x_26);
lean_dec(x_23);
lean_free_object(x_15);
lean_dec(x_21);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_199 = !lean_is_exclusive(x_34);
if (x_199 == 0)
{
return x_34;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_200 = lean_ctor_get(x_34, 0);
x_201 = lean_ctor_get(x_34, 1);
lean_inc(x_201);
lean_inc(x_200);
lean_dec(x_34);
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_200);
lean_ctor_set(x_202, 1, x_201);
return x_202;
}
}
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; uint8_t x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_203 = lean_ctor_get(x_15, 0);
lean_inc(x_203);
lean_dec(x_15);
x_204 = l_Lean_Elab_Term_saveState___rarg(x_4, x_5, x_6, x_7, x_8, x_19);
x_205 = lean_ctor_get(x_204, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_204, 1);
lean_inc(x_206);
lean_dec(x_204);
x_207 = lean_unsigned_to_nat(2u);
x_208 = l_Lean_Syntax_getArg(x_1, x_207);
x_209 = lean_box(0);
x_210 = 1;
x_211 = lean_box(x_210);
x_212 = lean_box(x_210);
lean_inc(x_208);
x_213 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(x_213, 0, x_208);
lean_closure_set(x_213, 1, x_209);
lean_closure_set(x_213, 2, x_211);
lean_closure_set(x_213, 3, x_212);
lean_inc(x_1);
x_214 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinRel___lambda__2___boxed), 10, 2);
lean_closure_set(x_214, 0, x_1);
lean_closure_set(x_214, 1, x_209);
x_215 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_215, 0, x_213);
lean_closure_set(x_215, 1, x_214);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_216 = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp___rarg(x_215, x_210, x_3, x_4, x_5, x_6, x_7, x_8, x_206);
if (lean_obj_tag(x_216) == 0)
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_217 = lean_ctor_get(x_216, 0);
lean_inc(x_217);
x_218 = lean_ctor_get(x_216, 1);
lean_inc(x_218);
lean_dec(x_216);
x_219 = lean_ctor_get(x_217, 0);
lean_inc(x_219);
x_220 = lean_ctor_get(x_217, 1);
lean_inc(x_220);
if (lean_is_exclusive(x_217)) {
 lean_ctor_release(x_217, 0);
 lean_ctor_release(x_217, 1);
 x_221 = x_217;
} else {
 lean_dec_ref(x_217);
 x_221 = lean_box(0);
}
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_219);
x_222 = l_Lean_Meta_inferType(x_219, x_5, x_6, x_7, x_8, x_218);
if (lean_obj_tag(x_222) == 0)
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_223 = lean_ctor_get(x_222, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_222, 1);
lean_inc(x_224);
lean_dec(x_222);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_220);
x_225 = l_Lean_Meta_inferType(x_220, x_5, x_6, x_7, x_8, x_224);
if (lean_obj_tag(x_225) == 0)
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_226 = lean_ctor_get(x_225, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_225, 1);
lean_inc(x_227);
lean_dec(x_225);
x_228 = lean_unsigned_to_nat(3u);
x_229 = l_Lean_Syntax_getArg(x_1, x_228);
lean_dec(x_1);
x_230 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_230, 0, x_223);
x_231 = lean_ctor_get(x_7, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_7, 1);
lean_inc(x_232);
x_233 = lean_ctor_get(x_7, 2);
lean_inc(x_233);
x_234 = lean_ctor_get(x_7, 3);
lean_inc(x_234);
x_235 = lean_ctor_get(x_7, 4);
lean_inc(x_235);
x_236 = lean_ctor_get(x_7, 5);
lean_inc(x_236);
x_237 = lean_ctor_get(x_7, 6);
lean_inc(x_237);
x_238 = lean_ctor_get(x_7, 7);
lean_inc(x_238);
x_239 = l_Lean_replaceRef(x_229, x_234);
lean_inc(x_238);
lean_inc(x_237);
lean_inc(x_236);
lean_inc(x_235);
lean_inc(x_233);
lean_inc(x_232);
lean_inc(x_231);
x_240 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_240, 0, x_231);
lean_ctor_set(x_240, 1, x_232);
lean_ctor_set(x_240, 2, x_233);
lean_ctor_set(x_240, 3, x_239);
lean_ctor_set(x_240, 4, x_235);
lean_ctor_set(x_240, 5, x_236);
lean_ctor_set(x_240, 6, x_237);
lean_ctor_set(x_240, 7, x_238);
lean_inc(x_8);
lean_inc(x_240);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_220);
x_241 = l_Lean_Elab_Term_ensureHasType(x_230, x_220, x_209, x_3, x_4, x_5, x_6, x_240, x_8, x_227);
if (lean_obj_tag(x_241) == 0)
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
lean_dec(x_240);
lean_dec(x_238);
lean_dec(x_237);
lean_dec(x_236);
lean_dec(x_235);
lean_dec(x_234);
lean_dec(x_233);
lean_dec(x_232);
lean_dec(x_231);
lean_dec(x_229);
lean_dec(x_226);
lean_dec(x_220);
lean_dec(x_208);
lean_dec(x_205);
x_242 = lean_ctor_get(x_241, 0);
lean_inc(x_242);
x_243 = lean_ctor_get(x_241, 1);
lean_inc(x_243);
lean_dec(x_241);
if (lean_is_scalar(x_221)) {
 x_244 = lean_alloc_ctor(0, 2, 0);
} else {
 x_244 = x_221;
}
lean_ctor_set(x_244, 0, x_219);
lean_ctor_set(x_244, 1, x_242);
x_245 = l_Lean_Elab_Term_elabBinRel___lambda__3(x_203, x_2, x_244, x_3, x_4, x_5, x_6, x_7, x_8, x_243);
lean_dec(x_244);
return x_245;
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; 
x_246 = lean_ctor_get(x_241, 1);
lean_inc(x_246);
lean_dec(x_241);
x_247 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_247, 0, x_226);
x_248 = l_Lean_replaceRef(x_208, x_234);
lean_dec(x_234);
x_249 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_249, 0, x_231);
lean_ctor_set(x_249, 1, x_232);
lean_ctor_set(x_249, 2, x_233);
lean_ctor_set(x_249, 3, x_248);
lean_ctor_set(x_249, 4, x_235);
lean_ctor_set(x_249, 5, x_236);
lean_ctor_set(x_249, 6, x_237);
lean_ctor_set(x_249, 7, x_238);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_250 = l_Lean_Elab_Term_ensureHasType(x_247, x_219, x_209, x_3, x_4, x_5, x_6, x_249, x_8, x_246);
if (lean_obj_tag(x_250) == 0)
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; 
lean_dec(x_240);
lean_dec(x_229);
lean_dec(x_208);
lean_dec(x_205);
x_251 = lean_ctor_get(x_250, 0);
lean_inc(x_251);
x_252 = lean_ctor_get(x_250, 1);
lean_inc(x_252);
lean_dec(x_250);
if (lean_is_scalar(x_221)) {
 x_253 = lean_alloc_ctor(0, 2, 0);
} else {
 x_253 = x_221;
}
lean_ctor_set(x_253, 0, x_251);
lean_ctor_set(x_253, 1, x_220);
x_254 = l_Lean_Elab_Term_elabBinRel___lambda__3(x_203, x_2, x_253, x_3, x_4, x_5, x_6, x_7, x_8, x_252);
lean_dec(x_253);
return x_254;
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
lean_dec(x_220);
x_255 = lean_ctor_get(x_250, 1);
lean_inc(x_255);
lean_dec(x_250);
x_256 = l_Lean_Elab_Term_SavedState_restore(x_205, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_255);
x_257 = lean_ctor_get(x_256, 1);
lean_inc(x_257);
lean_dec(x_256);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_258 = l_Lean_Elab_Term_elabTerm(x_208, x_209, x_210, x_210, x_3, x_4, x_5, x_6, x_7, x_8, x_257);
if (lean_obj_tag(x_258) == 0)
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; 
x_259 = lean_ctor_get(x_258, 0);
lean_inc(x_259);
x_260 = lean_ctor_get(x_258, 1);
lean_inc(x_260);
lean_dec(x_258);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_261 = l_Lean_Elab_Term_elabTerm(x_229, x_209, x_210, x_210, x_3, x_4, x_5, x_6, x_7, x_8, x_260);
if (lean_obj_tag(x_261) == 0)
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; 
x_262 = lean_ctor_get(x_261, 0);
lean_inc(x_262);
x_263 = lean_ctor_get(x_261, 1);
lean_inc(x_263);
lean_dec(x_261);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_259);
x_264 = l_Lean_Meta_inferType(x_259, x_5, x_6, x_7, x_8, x_263);
if (lean_obj_tag(x_264) == 0)
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; 
x_265 = lean_ctor_get(x_264, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_264, 1);
lean_inc(x_266);
lean_dec(x_264);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_262);
x_267 = l_Lean_Meta_inferType(x_262, x_5, x_6, x_7, x_8, x_266);
if (lean_obj_tag(x_267) == 0)
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; 
x_268 = lean_ctor_get(x_267, 1);
lean_inc(x_268);
lean_dec(x_267);
x_269 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_269, 0, x_265);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_270 = l_Lean_Elab_Term_ensureHasType(x_269, x_262, x_209, x_3, x_4, x_5, x_6, x_240, x_8, x_268);
if (lean_obj_tag(x_270) == 0)
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_271 = lean_ctor_get(x_270, 0);
lean_inc(x_271);
x_272 = lean_ctor_get(x_270, 1);
lean_inc(x_272);
lean_dec(x_270);
if (lean_is_scalar(x_221)) {
 x_273 = lean_alloc_ctor(0, 2, 0);
} else {
 x_273 = x_221;
}
lean_ctor_set(x_273, 0, x_259);
lean_ctor_set(x_273, 1, x_271);
x_274 = l_Lean_Elab_Term_elabBinRel___lambda__3(x_203, x_2, x_273, x_3, x_4, x_5, x_6, x_7, x_8, x_272);
lean_dec(x_273);
return x_274;
}
else
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; 
lean_dec(x_259);
lean_dec(x_221);
lean_dec(x_203);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_275 = lean_ctor_get(x_270, 0);
lean_inc(x_275);
x_276 = lean_ctor_get(x_270, 1);
lean_inc(x_276);
if (lean_is_exclusive(x_270)) {
 lean_ctor_release(x_270, 0);
 lean_ctor_release(x_270, 1);
 x_277 = x_270;
} else {
 lean_dec_ref(x_270);
 x_277 = lean_box(0);
}
if (lean_is_scalar(x_277)) {
 x_278 = lean_alloc_ctor(1, 2, 0);
} else {
 x_278 = x_277;
}
lean_ctor_set(x_278, 0, x_275);
lean_ctor_set(x_278, 1, x_276);
return x_278;
}
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
lean_dec(x_265);
lean_dec(x_262);
lean_dec(x_259);
lean_dec(x_240);
lean_dec(x_221);
lean_dec(x_203);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; 
lean_dec(x_262);
lean_dec(x_259);
lean_dec(x_240);
lean_dec(x_221);
lean_dec(x_203);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_283 = lean_ctor_get(x_264, 0);
lean_inc(x_283);
x_284 = lean_ctor_get(x_264, 1);
lean_inc(x_284);
if (lean_is_exclusive(x_264)) {
 lean_ctor_release(x_264, 0);
 lean_ctor_release(x_264, 1);
 x_285 = x_264;
} else {
 lean_dec_ref(x_264);
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
lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
lean_dec(x_259);
lean_dec(x_240);
lean_dec(x_221);
lean_dec(x_203);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_287 = lean_ctor_get(x_261, 0);
lean_inc(x_287);
x_288 = lean_ctor_get(x_261, 1);
lean_inc(x_288);
if (lean_is_exclusive(x_261)) {
 lean_ctor_release(x_261, 0);
 lean_ctor_release(x_261, 1);
 x_289 = x_261;
} else {
 lean_dec_ref(x_261);
 x_289 = lean_box(0);
}
if (lean_is_scalar(x_289)) {
 x_290 = lean_alloc_ctor(1, 2, 0);
} else {
 x_290 = x_289;
}
lean_ctor_set(x_290, 0, x_287);
lean_ctor_set(x_290, 1, x_288);
return x_290;
}
}
else
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; 
lean_dec(x_240);
lean_dec(x_229);
lean_dec(x_221);
lean_dec(x_203);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_291 = lean_ctor_get(x_258, 0);
lean_inc(x_291);
x_292 = lean_ctor_get(x_258, 1);
lean_inc(x_292);
if (lean_is_exclusive(x_258)) {
 lean_ctor_release(x_258, 0);
 lean_ctor_release(x_258, 1);
 x_293 = x_258;
} else {
 lean_dec_ref(x_258);
 x_293 = lean_box(0);
}
if (lean_is_scalar(x_293)) {
 x_294 = lean_alloc_ctor(1, 2, 0);
} else {
 x_294 = x_293;
}
lean_ctor_set(x_294, 0, x_291);
lean_ctor_set(x_294, 1, x_292);
return x_294;
}
}
}
}
else
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; 
lean_dec(x_223);
lean_dec(x_221);
lean_dec(x_220);
lean_dec(x_219);
lean_dec(x_208);
lean_dec(x_205);
lean_dec(x_203);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_295 = lean_ctor_get(x_225, 0);
lean_inc(x_295);
x_296 = lean_ctor_get(x_225, 1);
lean_inc(x_296);
if (lean_is_exclusive(x_225)) {
 lean_ctor_release(x_225, 0);
 lean_ctor_release(x_225, 1);
 x_297 = x_225;
} else {
 lean_dec_ref(x_225);
 x_297 = lean_box(0);
}
if (lean_is_scalar(x_297)) {
 x_298 = lean_alloc_ctor(1, 2, 0);
} else {
 x_298 = x_297;
}
lean_ctor_set(x_298, 0, x_295);
lean_ctor_set(x_298, 1, x_296);
return x_298;
}
}
else
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; 
lean_dec(x_221);
lean_dec(x_220);
lean_dec(x_219);
lean_dec(x_208);
lean_dec(x_205);
lean_dec(x_203);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_299 = lean_ctor_get(x_222, 0);
lean_inc(x_299);
x_300 = lean_ctor_get(x_222, 1);
lean_inc(x_300);
if (lean_is_exclusive(x_222)) {
 lean_ctor_release(x_222, 0);
 lean_ctor_release(x_222, 1);
 x_301 = x_222;
} else {
 lean_dec_ref(x_222);
 x_301 = lean_box(0);
}
if (lean_is_scalar(x_301)) {
 x_302 = lean_alloc_ctor(1, 2, 0);
} else {
 x_302 = x_301;
}
lean_ctor_set(x_302, 0, x_299);
lean_ctor_set(x_302, 1, x_300);
return x_302;
}
}
else
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
lean_dec(x_208);
lean_dec(x_205);
lean_dec(x_203);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_303 = lean_ctor_get(x_216, 0);
lean_inc(x_303);
x_304 = lean_ctor_get(x_216, 1);
lean_inc(x_304);
if (lean_is_exclusive(x_216)) {
 lean_ctor_release(x_216, 0);
 lean_ctor_release(x_216, 1);
 x_305 = x_216;
} else {
 lean_dec_ref(x_216);
 x_305 = lean_box(0);
}
if (lean_is_scalar(x_305)) {
 x_306 = lean_alloc_ctor(1, 2, 0);
} else {
 x_306 = x_305;
}
lean_ctor_set(x_306, 0, x_303);
lean_ctor_set(x_306, 1, x_304);
return x_306;
}
}
}
}
else
{
uint8_t x_307; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_307 = !lean_is_exclusive(x_14);
if (x_307 == 0)
{
return x_14;
}
else
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; 
x_308 = lean_ctor_get(x_14, 0);
x_309 = lean_ctor_get(x_14, 1);
lean_inc(x_309);
lean_inc(x_308);
lean_dec(x_14);
x_310 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_310, 0, x_308);
lean_ctor_set(x_310, 1, x_309);
return x_310;
}
}
}
}
lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Term_elabBinRel___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwUnknownConstant___at_Lean_Elab_Term_elabBinRel___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabBinRel___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_elabBinRel___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
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
lean_object* l_Lean_Elab_Term_elabBinRel___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_elabBinRel___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_elabBinRel___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_elabBinRel___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
return x_11;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabBinRel");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinRel), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabBinRel(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_binrel___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Extra_0__Lean_Elab_Term_hasUnknownType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_inferType(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = l_Lean_Expr_getAppFn(x_9);
lean_dec(x_9);
x_11 = l_Lean_Expr_isMVar(x_10);
lean_dec(x_10);
x_12 = lean_box(x_11);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_7);
x_15 = l_Lean_Expr_getAppFn(x_13);
lean_dec(x_13);
x_16 = l_Lean_Expr_isMVar(x_15);
lean_dec(x_15);
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_14);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_7);
if (x_19 == 0)
{
return x_7;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_7, 0);
x_21 = lean_ctor_get(x_7, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_7);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabBinOp_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Elab_Term_elabBinOp_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinOp_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabBinOp_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_elabBinOp_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinOp_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabBinOp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_10 = lean_box(0);
x_11 = lean_mk_string("Lean");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_mk_string("Parser");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_mk_string("Term");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_mk_string("binop");
lean_inc(x_16);
x_18 = lean_name_mk_string(x_16, x_17);
lean_inc(x_1);
x_19 = l_Lean_Syntax_isOfKind(x_1, x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_20 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = l_Lean_Syntax_getArg(x_1, x_21);
x_23 = lean_unsigned_to_nat(2u);
x_24 = l_Lean_Syntax_getArg(x_1, x_23);
x_25 = lean_unsigned_to_nat(3u);
x_26 = l_Lean_Syntax_getArg(x_1, x_25);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_27 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_7, x_8, x_9);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_28);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_30);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_mk_string("app");
x_34 = lean_name_mk_string(x_16, x_33);
x_35 = lean_mk_string("null");
x_36 = lean_name_mk_string(x_10, x_35);
x_37 = lean_mk_empty_array_with_capacity(x_23);
lean_inc(x_37);
x_38 = lean_array_push(x_37, x_24);
x_39 = lean_array_push(x_38, x_26);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_36);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_array_push(x_37, x_22);
x_42 = lean_array_push(x_41, x_40);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_34);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_box(0);
lean_inc(x_43);
lean_inc(x_1);
x_45 = lean_alloc_closure((void*)(l_Lean_Elab_Term_adaptExpander___lambda__1), 10, 3);
lean_closure_set(x_45, 0, x_1);
lean_closure_set(x_45, 1, x_43);
lean_closure_set(x_45, 2, x_44);
x_46 = l_Lean_Elab_withMacroExpansionInfo___at___private_Lean_Elab_Term_0__Lean_Elab_Term_elabTermAux___spec__2(x_1, x_43, x_45, x_3, x_4, x_5, x_6, x_7, x_8, x_32);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; 
lean_dec(x_16);
x_47 = lean_ctor_get(x_2, 0);
x_48 = lean_mk_string("term");
x_49 = 0;
lean_inc(x_7);
lean_inc(x_5);
lean_inc(x_3);
x_50 = l_Lean_Elab_Term_resolveId_x3f(x_22, x_48, x_49, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_48);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_26);
lean_dec(x_24);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Lean_Syntax_getArg(x_1, x_21);
lean_dec(x_1);
x_54 = l_Lean_Syntax_getId(x_53);
lean_dec(x_53);
x_55 = l_Lean_throwUnknownConstant___at_Lean_Elab_Term_elabBinRel___spec__1(x_54, x_3, x_4, x_5, x_6, x_7, x_8, x_52);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_55;
}
else
{
lean_object* x_56; uint8_t x_57; 
lean_dec(x_1);
x_56 = lean_ctor_get(x_50, 1);
lean_inc(x_56);
lean_dec(x_50);
x_57 = !lean_is_exclusive(x_51);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_96; lean_object* x_97; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_58 = lean_ctor_get(x_51, 0);
x_59 = lean_st_ref_get(x_8, x_56);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
x_61 = lean_st_ref_get(x_4, x_60);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_124 = lean_st_ref_get(x_8, x_63);
x_125 = lean_ctor_get(x_124, 1);
lean_inc(x_125);
lean_dec(x_124);
x_126 = lean_st_ref_take(x_4, x_125);
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
lean_dec(x_126);
x_129 = !lean_is_exclusive(x_127);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; lean_object* x_136; 
x_130 = lean_ctor_get(x_127, 1);
lean_dec(x_130);
x_131 = lean_box(0);
lean_ctor_set(x_127, 1, x_131);
x_132 = lean_st_ref_set(x_4, x_127, x_128);
x_133 = lean_ctor_get(x_132, 1);
lean_inc(x_133);
lean_dec(x_132);
x_134 = lean_box(0);
x_135 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_136 = l_Lean_Elab_Term_elabTerm(x_24, x_134, x_135, x_135, x_3, x_4, x_5, x_6, x_7, x_8, x_133);
if (lean_obj_tag(x_136) == 0)
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = lean_ctor_get(x_136, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_136, 1);
lean_inc(x_138);
lean_dec(x_136);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_139 = l_Lean_Elab_Term_elabTerm(x_26, x_134, x_135, x_135, x_3, x_4, x_5, x_6, x_7, x_8, x_138);
if (lean_obj_tag(x_139) == 0)
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_139, 1);
lean_inc(x_141);
lean_dec(x_139);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_137);
x_142 = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_hasUnknownType(x_137, x_5, x_6, x_7, x_8, x_141);
if (lean_obj_tag(x_142) == 0)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_142, 1);
lean_inc(x_144);
lean_dec(x_142);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_140);
x_145 = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_hasUnknownType(x_140, x_5, x_6, x_7, x_8, x_144);
if (lean_obj_tag(x_145) == 0)
{
uint8_t x_146; 
x_146 = lean_unbox(x_143);
lean_dec(x_143);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
lean_free_object(x_51);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
lean_dec(x_145);
x_148 = lean_unsigned_to_nat(0u);
x_149 = lean_mk_empty_array_with_capacity(x_148);
x_150 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_150, 0, x_137);
x_151 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_151, 0, x_140);
x_152 = lean_mk_empty_array_with_capacity(x_23);
x_153 = lean_array_push(x_152, x_150);
x_154 = lean_array_push(x_153, x_151);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_155 = l_Lean_Elab_Term_elabAppArgs(x_58, x_149, x_154, x_134, x_49, x_49, x_3, x_4, x_5, x_6, x_7, x_8, x_147);
if (lean_obj_tag(x_155) == 0)
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
lean_dec(x_155);
lean_inc(x_8);
lean_inc(x_4);
x_158 = l_Lean_Elab_Term_synthesizeSyntheticMVarsUsingDefault(x_3, x_4, x_5, x_6, x_7, x_8, x_157);
if (lean_obj_tag(x_158) == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_ctor_get(x_158, 1);
lean_inc(x_159);
lean_dec(x_158);
x_160 = lean_box(0);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_156);
lean_ctor_set(x_161, 1, x_160);
x_65 = x_161;
x_66 = x_159;
goto block_95;
}
else
{
lean_object* x_162; lean_object* x_163; 
lean_dec(x_156);
x_162 = lean_ctor_get(x_158, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_158, 1);
lean_inc(x_163);
lean_dec(x_158);
x_96 = x_162;
x_97 = x_163;
goto block_123;
}
}
else
{
lean_object* x_164; lean_object* x_165; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_164 = lean_ctor_get(x_155, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_155, 1);
lean_inc(x_165);
lean_dec(x_155);
x_96 = x_164;
x_97 = x_165;
goto block_123;
}
}
else
{
lean_object* x_166; uint8_t x_167; 
x_166 = lean_ctor_get(x_145, 0);
lean_inc(x_166);
x_167 = lean_unbox(x_166);
lean_dec(x_166);
if (x_167 == 0)
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
lean_free_object(x_51);
x_168 = lean_ctor_get(x_145, 1);
lean_inc(x_168);
lean_dec(x_145);
x_169 = lean_unsigned_to_nat(0u);
x_170 = lean_mk_empty_array_with_capacity(x_169);
x_171 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_171, 0, x_137);
x_172 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_172, 0, x_140);
x_173 = lean_mk_empty_array_with_capacity(x_23);
x_174 = lean_array_push(x_173, x_171);
x_175 = lean_array_push(x_174, x_172);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_176 = l_Lean_Elab_Term_elabAppArgs(x_58, x_170, x_175, x_134, x_49, x_49, x_3, x_4, x_5, x_6, x_7, x_8, x_168);
if (lean_obj_tag(x_176) == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_176, 1);
lean_inc(x_178);
lean_dec(x_176);
lean_inc(x_8);
lean_inc(x_4);
x_179 = l_Lean_Elab_Term_synthesizeSyntheticMVarsUsingDefault(x_3, x_4, x_5, x_6, x_7, x_8, x_178);
if (lean_obj_tag(x_179) == 0)
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_179, 1);
lean_inc(x_180);
lean_dec(x_179);
x_181 = lean_box(0);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_177);
lean_ctor_set(x_182, 1, x_181);
x_65 = x_182;
x_66 = x_180;
goto block_95;
}
else
{
lean_object* x_183; lean_object* x_184; 
lean_dec(x_177);
x_183 = lean_ctor_get(x_179, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_179, 1);
lean_inc(x_184);
lean_dec(x_179);
x_96 = x_183;
x_97 = x_184;
goto block_123;
}
}
else
{
lean_object* x_185; lean_object* x_186; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_185 = lean_ctor_get(x_176, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_176, 1);
lean_inc(x_186);
lean_dec(x_176);
x_96 = x_185;
x_97 = x_186;
goto block_123;
}
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_187 = lean_ctor_get(x_145, 1);
lean_inc(x_187);
lean_dec(x_145);
x_188 = lean_unsigned_to_nat(0u);
x_189 = lean_mk_empty_array_with_capacity(x_188);
x_190 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_190, 0, x_137);
x_191 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_191, 0, x_140);
x_192 = lean_mk_empty_array_with_capacity(x_23);
x_193 = lean_array_push(x_192, x_190);
x_194 = lean_array_push(x_193, x_191);
lean_inc(x_47);
lean_ctor_set(x_51, 0, x_47);
lean_inc(x_8);
lean_inc(x_4);
x_195 = l_Lean_Elab_Term_elabAppArgs(x_58, x_189, x_194, x_51, x_49, x_49, x_3, x_4, x_5, x_6, x_7, x_8, x_187);
if (lean_obj_tag(x_195) == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_195, 1);
lean_inc(x_197);
lean_dec(x_195);
x_198 = lean_box(0);
x_199 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_199, 0, x_196);
lean_ctor_set(x_199, 1, x_198);
x_65 = x_199;
x_66 = x_197;
goto block_95;
}
else
{
lean_object* x_200; lean_object* x_201; 
x_200 = lean_ctor_get(x_195, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_195, 1);
lean_inc(x_201);
lean_dec(x_195);
x_96 = x_200;
x_97 = x_201;
goto block_123;
}
}
}
}
else
{
lean_object* x_202; lean_object* x_203; 
lean_dec(x_143);
lean_dec(x_140);
lean_dec(x_137);
lean_free_object(x_51);
lean_dec(x_58);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_202 = lean_ctor_get(x_145, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_145, 1);
lean_inc(x_203);
lean_dec(x_145);
x_96 = x_202;
x_97 = x_203;
goto block_123;
}
}
else
{
lean_object* x_204; lean_object* x_205; 
lean_dec(x_140);
lean_dec(x_137);
lean_free_object(x_51);
lean_dec(x_58);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_204 = lean_ctor_get(x_142, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_142, 1);
lean_inc(x_205);
lean_dec(x_142);
x_96 = x_204;
x_97 = x_205;
goto block_123;
}
}
else
{
lean_object* x_206; lean_object* x_207; 
lean_dec(x_137);
lean_free_object(x_51);
lean_dec(x_58);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_206 = lean_ctor_get(x_139, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_139, 1);
lean_inc(x_207);
lean_dec(x_139);
x_96 = x_206;
x_97 = x_207;
goto block_123;
}
}
else
{
lean_object* x_208; lean_object* x_209; 
lean_free_object(x_51);
lean_dec(x_58);
lean_dec(x_26);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_208 = lean_ctor_get(x_136, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_136, 1);
lean_inc(x_209);
lean_dec(x_136);
x_96 = x_208;
x_97 = x_209;
goto block_123;
}
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; uint8_t x_220; lean_object* x_221; 
x_210 = lean_ctor_get(x_127, 0);
x_211 = lean_ctor_get(x_127, 2);
x_212 = lean_ctor_get(x_127, 3);
x_213 = lean_ctor_get(x_127, 4);
x_214 = lean_ctor_get(x_127, 5);
lean_inc(x_214);
lean_inc(x_213);
lean_inc(x_212);
lean_inc(x_211);
lean_inc(x_210);
lean_dec(x_127);
x_215 = lean_box(0);
x_216 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_216, 0, x_210);
lean_ctor_set(x_216, 1, x_215);
lean_ctor_set(x_216, 2, x_211);
lean_ctor_set(x_216, 3, x_212);
lean_ctor_set(x_216, 4, x_213);
lean_ctor_set(x_216, 5, x_214);
x_217 = lean_st_ref_set(x_4, x_216, x_128);
x_218 = lean_ctor_get(x_217, 1);
lean_inc(x_218);
lean_dec(x_217);
x_219 = lean_box(0);
x_220 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_221 = l_Lean_Elab_Term_elabTerm(x_24, x_219, x_220, x_220, x_3, x_4, x_5, x_6, x_7, x_8, x_218);
if (lean_obj_tag(x_221) == 0)
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
lean_dec(x_221);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_224 = l_Lean_Elab_Term_elabTerm(x_26, x_219, x_220, x_220, x_3, x_4, x_5, x_6, x_7, x_8, x_223);
if (lean_obj_tag(x_224) == 0)
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_225 = lean_ctor_get(x_224, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_224, 1);
lean_inc(x_226);
lean_dec(x_224);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_222);
x_227 = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_hasUnknownType(x_222, x_5, x_6, x_7, x_8, x_226);
if (lean_obj_tag(x_227) == 0)
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; 
x_228 = lean_ctor_get(x_227, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_227, 1);
lean_inc(x_229);
lean_dec(x_227);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_225);
x_230 = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_hasUnknownType(x_225, x_5, x_6, x_7, x_8, x_229);
if (lean_obj_tag(x_230) == 0)
{
uint8_t x_231; 
x_231 = lean_unbox(x_228);
lean_dec(x_228);
if (x_231 == 0)
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; 
lean_free_object(x_51);
x_232 = lean_ctor_get(x_230, 1);
lean_inc(x_232);
lean_dec(x_230);
x_233 = lean_unsigned_to_nat(0u);
x_234 = lean_mk_empty_array_with_capacity(x_233);
x_235 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_235, 0, x_222);
x_236 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_236, 0, x_225);
x_237 = lean_mk_empty_array_with_capacity(x_23);
x_238 = lean_array_push(x_237, x_235);
x_239 = lean_array_push(x_238, x_236);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_240 = l_Lean_Elab_Term_elabAppArgs(x_58, x_234, x_239, x_219, x_49, x_49, x_3, x_4, x_5, x_6, x_7, x_8, x_232);
if (lean_obj_tag(x_240) == 0)
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_241 = lean_ctor_get(x_240, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_240, 1);
lean_inc(x_242);
lean_dec(x_240);
lean_inc(x_8);
lean_inc(x_4);
x_243 = l_Lean_Elab_Term_synthesizeSyntheticMVarsUsingDefault(x_3, x_4, x_5, x_6, x_7, x_8, x_242);
if (lean_obj_tag(x_243) == 0)
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_244 = lean_ctor_get(x_243, 1);
lean_inc(x_244);
lean_dec(x_243);
x_245 = lean_box(0);
x_246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_246, 0, x_241);
lean_ctor_set(x_246, 1, x_245);
x_65 = x_246;
x_66 = x_244;
goto block_95;
}
else
{
lean_object* x_247; lean_object* x_248; 
lean_dec(x_241);
x_247 = lean_ctor_get(x_243, 0);
lean_inc(x_247);
x_248 = lean_ctor_get(x_243, 1);
lean_inc(x_248);
lean_dec(x_243);
x_96 = x_247;
x_97 = x_248;
goto block_123;
}
}
else
{
lean_object* x_249; lean_object* x_250; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_249 = lean_ctor_get(x_240, 0);
lean_inc(x_249);
x_250 = lean_ctor_get(x_240, 1);
lean_inc(x_250);
lean_dec(x_240);
x_96 = x_249;
x_97 = x_250;
goto block_123;
}
}
else
{
lean_object* x_251; uint8_t x_252; 
x_251 = lean_ctor_get(x_230, 0);
lean_inc(x_251);
x_252 = lean_unbox(x_251);
lean_dec(x_251);
if (x_252 == 0)
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
lean_free_object(x_51);
x_253 = lean_ctor_get(x_230, 1);
lean_inc(x_253);
lean_dec(x_230);
x_254 = lean_unsigned_to_nat(0u);
x_255 = lean_mk_empty_array_with_capacity(x_254);
x_256 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_256, 0, x_222);
x_257 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_257, 0, x_225);
x_258 = lean_mk_empty_array_with_capacity(x_23);
x_259 = lean_array_push(x_258, x_256);
x_260 = lean_array_push(x_259, x_257);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_261 = l_Lean_Elab_Term_elabAppArgs(x_58, x_255, x_260, x_219, x_49, x_49, x_3, x_4, x_5, x_6, x_7, x_8, x_253);
if (lean_obj_tag(x_261) == 0)
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; 
x_262 = lean_ctor_get(x_261, 0);
lean_inc(x_262);
x_263 = lean_ctor_get(x_261, 1);
lean_inc(x_263);
lean_dec(x_261);
lean_inc(x_8);
lean_inc(x_4);
x_264 = l_Lean_Elab_Term_synthesizeSyntheticMVarsUsingDefault(x_3, x_4, x_5, x_6, x_7, x_8, x_263);
if (lean_obj_tag(x_264) == 0)
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; 
x_265 = lean_ctor_get(x_264, 1);
lean_inc(x_265);
lean_dec(x_264);
x_266 = lean_box(0);
x_267 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_267, 0, x_262);
lean_ctor_set(x_267, 1, x_266);
x_65 = x_267;
x_66 = x_265;
goto block_95;
}
else
{
lean_object* x_268; lean_object* x_269; 
lean_dec(x_262);
x_268 = lean_ctor_get(x_264, 0);
lean_inc(x_268);
x_269 = lean_ctor_get(x_264, 1);
lean_inc(x_269);
lean_dec(x_264);
x_96 = x_268;
x_97 = x_269;
goto block_123;
}
}
else
{
lean_object* x_270; lean_object* x_271; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_270 = lean_ctor_get(x_261, 0);
lean_inc(x_270);
x_271 = lean_ctor_get(x_261, 1);
lean_inc(x_271);
lean_dec(x_261);
x_96 = x_270;
x_97 = x_271;
goto block_123;
}
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; 
x_272 = lean_ctor_get(x_230, 1);
lean_inc(x_272);
lean_dec(x_230);
x_273 = lean_unsigned_to_nat(0u);
x_274 = lean_mk_empty_array_with_capacity(x_273);
x_275 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_275, 0, x_222);
x_276 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_276, 0, x_225);
x_277 = lean_mk_empty_array_with_capacity(x_23);
x_278 = lean_array_push(x_277, x_275);
x_279 = lean_array_push(x_278, x_276);
lean_inc(x_47);
lean_ctor_set(x_51, 0, x_47);
lean_inc(x_8);
lean_inc(x_4);
x_280 = l_Lean_Elab_Term_elabAppArgs(x_58, x_274, x_279, x_51, x_49, x_49, x_3, x_4, x_5, x_6, x_7, x_8, x_272);
if (lean_obj_tag(x_280) == 0)
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_281 = lean_ctor_get(x_280, 0);
lean_inc(x_281);
x_282 = lean_ctor_get(x_280, 1);
lean_inc(x_282);
lean_dec(x_280);
x_283 = lean_box(0);
x_284 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_284, 0, x_281);
lean_ctor_set(x_284, 1, x_283);
x_65 = x_284;
x_66 = x_282;
goto block_95;
}
else
{
lean_object* x_285; lean_object* x_286; 
x_285 = lean_ctor_get(x_280, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_280, 1);
lean_inc(x_286);
lean_dec(x_280);
x_96 = x_285;
x_97 = x_286;
goto block_123;
}
}
}
}
else
{
lean_object* x_287; lean_object* x_288; 
lean_dec(x_228);
lean_dec(x_225);
lean_dec(x_222);
lean_free_object(x_51);
lean_dec(x_58);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_287 = lean_ctor_get(x_230, 0);
lean_inc(x_287);
x_288 = lean_ctor_get(x_230, 1);
lean_inc(x_288);
lean_dec(x_230);
x_96 = x_287;
x_97 = x_288;
goto block_123;
}
}
else
{
lean_object* x_289; lean_object* x_290; 
lean_dec(x_225);
lean_dec(x_222);
lean_free_object(x_51);
lean_dec(x_58);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_289 = lean_ctor_get(x_227, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_227, 1);
lean_inc(x_290);
lean_dec(x_227);
x_96 = x_289;
x_97 = x_290;
goto block_123;
}
}
else
{
lean_object* x_291; lean_object* x_292; 
lean_dec(x_222);
lean_free_object(x_51);
lean_dec(x_58);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_291 = lean_ctor_get(x_224, 0);
lean_inc(x_291);
x_292 = lean_ctor_get(x_224, 1);
lean_inc(x_292);
lean_dec(x_224);
x_96 = x_291;
x_97 = x_292;
goto block_123;
}
}
else
{
lean_object* x_293; lean_object* x_294; 
lean_free_object(x_51);
lean_dec(x_58);
lean_dec(x_26);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_293 = lean_ctor_get(x_221, 0);
lean_inc(x_293);
x_294 = lean_ctor_get(x_221, 1);
lean_inc(x_294);
lean_dec(x_221);
x_96 = x_293;
x_97 = x_294;
goto block_123;
}
}
block_95:
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_67 = lean_st_ref_get(x_8, x_66);
lean_dec(x_8);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
lean_dec(x_67);
x_69 = lean_st_ref_take(x_4, x_68);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = !lean_is_exclusive(x_70);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_73 = lean_ctor_get(x_70, 1);
x_74 = l_List_append___rarg(x_73, x_64);
lean_ctor_set(x_70, 1, x_74);
x_75 = lean_st_ref_set(x_4, x_70, x_71);
lean_dec(x_4);
x_76 = !lean_is_exclusive(x_75);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_75, 0);
lean_dec(x_77);
x_78 = lean_ctor_get(x_65, 0);
lean_inc(x_78);
lean_dec(x_65);
lean_ctor_set(x_75, 0, x_78);
return x_75;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_75, 1);
lean_inc(x_79);
lean_dec(x_75);
x_80 = lean_ctor_get(x_65, 0);
lean_inc(x_80);
lean_dec(x_65);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
return x_81;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_82 = lean_ctor_get(x_70, 0);
x_83 = lean_ctor_get(x_70, 1);
x_84 = lean_ctor_get(x_70, 2);
x_85 = lean_ctor_get(x_70, 3);
x_86 = lean_ctor_get(x_70, 4);
x_87 = lean_ctor_get(x_70, 5);
lean_inc(x_87);
lean_inc(x_86);
lean_inc(x_85);
lean_inc(x_84);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_70);
x_88 = l_List_append___rarg(x_83, x_64);
x_89 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_89, 0, x_82);
lean_ctor_set(x_89, 1, x_88);
lean_ctor_set(x_89, 2, x_84);
lean_ctor_set(x_89, 3, x_85);
lean_ctor_set(x_89, 4, x_86);
lean_ctor_set(x_89, 5, x_87);
x_90 = lean_st_ref_set(x_4, x_89, x_71);
lean_dec(x_4);
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_92 = x_90;
} else {
 lean_dec_ref(x_90);
 x_92 = lean_box(0);
}
x_93 = lean_ctor_get(x_65, 0);
lean_inc(x_93);
lean_dec(x_65);
if (lean_is_scalar(x_92)) {
 x_94 = lean_alloc_ctor(0, 2, 0);
} else {
 x_94 = x_92;
}
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_91);
return x_94;
}
}
block_123:
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
x_98 = lean_st_ref_get(x_8, x_97);
lean_dec(x_8);
x_99 = lean_ctor_get(x_98, 1);
lean_inc(x_99);
lean_dec(x_98);
x_100 = lean_st_ref_take(x_4, x_99);
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = !lean_is_exclusive(x_101);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_104 = lean_ctor_get(x_101, 1);
x_105 = l_List_append___rarg(x_104, x_64);
lean_ctor_set(x_101, 1, x_105);
x_106 = lean_st_ref_set(x_4, x_101, x_102);
lean_dec(x_4);
x_107 = !lean_is_exclusive(x_106);
if (x_107 == 0)
{
lean_object* x_108; 
x_108 = lean_ctor_get(x_106, 0);
lean_dec(x_108);
lean_ctor_set_tag(x_106, 1);
lean_ctor_set(x_106, 0, x_96);
return x_106;
}
else
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_106, 1);
lean_inc(x_109);
lean_dec(x_106);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_96);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_111 = lean_ctor_get(x_101, 0);
x_112 = lean_ctor_get(x_101, 1);
x_113 = lean_ctor_get(x_101, 2);
x_114 = lean_ctor_get(x_101, 3);
x_115 = lean_ctor_get(x_101, 4);
x_116 = lean_ctor_get(x_101, 5);
lean_inc(x_116);
lean_inc(x_115);
lean_inc(x_114);
lean_inc(x_113);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_101);
x_117 = l_List_append___rarg(x_112, x_64);
x_118 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_118, 0, x_111);
lean_ctor_set(x_118, 1, x_117);
lean_ctor_set(x_118, 2, x_113);
lean_ctor_set(x_118, 3, x_114);
lean_ctor_set(x_118, 4, x_115);
lean_ctor_set(x_118, 5, x_116);
x_119 = lean_st_ref_set(x_4, x_118, x_102);
lean_dec(x_4);
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_119)) {
 lean_ctor_release(x_119, 0);
 lean_ctor_release(x_119, 1);
 x_121 = x_119;
} else {
 lean_dec_ref(x_119);
 x_121 = lean_box(0);
}
if (lean_is_scalar(x_121)) {
 x_122 = lean_alloc_ctor(1, 2, 0);
} else {
 x_122 = x_121;
 lean_ctor_set_tag(x_122, 1);
}
lean_ctor_set(x_122, 0, x_96);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
}
}
else
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_324; lean_object* x_325; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; uint8_t x_361; lean_object* x_362; 
x_295 = lean_ctor_get(x_51, 0);
lean_inc(x_295);
lean_dec(x_51);
x_296 = lean_st_ref_get(x_8, x_56);
x_297 = lean_ctor_get(x_296, 1);
lean_inc(x_297);
lean_dec(x_296);
x_298 = lean_st_ref_get(x_4, x_297);
x_299 = lean_ctor_get(x_298, 0);
lean_inc(x_299);
x_300 = lean_ctor_get(x_298, 1);
lean_inc(x_300);
lean_dec(x_298);
x_301 = lean_ctor_get(x_299, 1);
lean_inc(x_301);
lean_dec(x_299);
x_345 = lean_st_ref_get(x_8, x_300);
x_346 = lean_ctor_get(x_345, 1);
lean_inc(x_346);
lean_dec(x_345);
x_347 = lean_st_ref_take(x_4, x_346);
x_348 = lean_ctor_get(x_347, 0);
lean_inc(x_348);
x_349 = lean_ctor_get(x_347, 1);
lean_inc(x_349);
lean_dec(x_347);
x_350 = lean_ctor_get(x_348, 0);
lean_inc(x_350);
x_351 = lean_ctor_get(x_348, 2);
lean_inc(x_351);
x_352 = lean_ctor_get(x_348, 3);
lean_inc(x_352);
x_353 = lean_ctor_get(x_348, 4);
lean_inc(x_353);
x_354 = lean_ctor_get(x_348, 5);
lean_inc(x_354);
if (lean_is_exclusive(x_348)) {
 lean_ctor_release(x_348, 0);
 lean_ctor_release(x_348, 1);
 lean_ctor_release(x_348, 2);
 lean_ctor_release(x_348, 3);
 lean_ctor_release(x_348, 4);
 lean_ctor_release(x_348, 5);
 x_355 = x_348;
} else {
 lean_dec_ref(x_348);
 x_355 = lean_box(0);
}
x_356 = lean_box(0);
if (lean_is_scalar(x_355)) {
 x_357 = lean_alloc_ctor(0, 6, 0);
} else {
 x_357 = x_355;
}
lean_ctor_set(x_357, 0, x_350);
lean_ctor_set(x_357, 1, x_356);
lean_ctor_set(x_357, 2, x_351);
lean_ctor_set(x_357, 3, x_352);
lean_ctor_set(x_357, 4, x_353);
lean_ctor_set(x_357, 5, x_354);
x_358 = lean_st_ref_set(x_4, x_357, x_349);
x_359 = lean_ctor_get(x_358, 1);
lean_inc(x_359);
lean_dec(x_358);
x_360 = lean_box(0);
x_361 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_362 = l_Lean_Elab_Term_elabTerm(x_24, x_360, x_361, x_361, x_3, x_4, x_5, x_6, x_7, x_8, x_359);
if (lean_obj_tag(x_362) == 0)
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; 
x_363 = lean_ctor_get(x_362, 0);
lean_inc(x_363);
x_364 = lean_ctor_get(x_362, 1);
lean_inc(x_364);
lean_dec(x_362);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_365 = l_Lean_Elab_Term_elabTerm(x_26, x_360, x_361, x_361, x_3, x_4, x_5, x_6, x_7, x_8, x_364);
if (lean_obj_tag(x_365) == 0)
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; 
x_366 = lean_ctor_get(x_365, 0);
lean_inc(x_366);
x_367 = lean_ctor_get(x_365, 1);
lean_inc(x_367);
lean_dec(x_365);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_363);
x_368 = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_hasUnknownType(x_363, x_5, x_6, x_7, x_8, x_367);
if (lean_obj_tag(x_368) == 0)
{
lean_object* x_369; lean_object* x_370; lean_object* x_371; 
x_369 = lean_ctor_get(x_368, 0);
lean_inc(x_369);
x_370 = lean_ctor_get(x_368, 1);
lean_inc(x_370);
lean_dec(x_368);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_366);
x_371 = l___private_Lean_Elab_Extra_0__Lean_Elab_Term_hasUnknownType(x_366, x_5, x_6, x_7, x_8, x_370);
if (lean_obj_tag(x_371) == 0)
{
uint8_t x_372; 
x_372 = lean_unbox(x_369);
lean_dec(x_369);
if (x_372 == 0)
{
lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; 
x_373 = lean_ctor_get(x_371, 1);
lean_inc(x_373);
lean_dec(x_371);
x_374 = lean_unsigned_to_nat(0u);
x_375 = lean_mk_empty_array_with_capacity(x_374);
x_376 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_376, 0, x_363);
x_377 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_377, 0, x_366);
x_378 = lean_mk_empty_array_with_capacity(x_23);
x_379 = lean_array_push(x_378, x_376);
x_380 = lean_array_push(x_379, x_377);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_381 = l_Lean_Elab_Term_elabAppArgs(x_295, x_375, x_380, x_360, x_49, x_49, x_3, x_4, x_5, x_6, x_7, x_8, x_373);
if (lean_obj_tag(x_381) == 0)
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; 
x_382 = lean_ctor_get(x_381, 0);
lean_inc(x_382);
x_383 = lean_ctor_get(x_381, 1);
lean_inc(x_383);
lean_dec(x_381);
lean_inc(x_8);
lean_inc(x_4);
x_384 = l_Lean_Elab_Term_synthesizeSyntheticMVarsUsingDefault(x_3, x_4, x_5, x_6, x_7, x_8, x_383);
if (lean_obj_tag(x_384) == 0)
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; 
x_385 = lean_ctor_get(x_384, 1);
lean_inc(x_385);
lean_dec(x_384);
x_386 = lean_box(0);
x_387 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_387, 0, x_382);
lean_ctor_set(x_387, 1, x_386);
x_302 = x_387;
x_303 = x_385;
goto block_323;
}
else
{
lean_object* x_388; lean_object* x_389; 
lean_dec(x_382);
x_388 = lean_ctor_get(x_384, 0);
lean_inc(x_388);
x_389 = lean_ctor_get(x_384, 1);
lean_inc(x_389);
lean_dec(x_384);
x_324 = x_388;
x_325 = x_389;
goto block_344;
}
}
else
{
lean_object* x_390; lean_object* x_391; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_390 = lean_ctor_get(x_381, 0);
lean_inc(x_390);
x_391 = lean_ctor_get(x_381, 1);
lean_inc(x_391);
lean_dec(x_381);
x_324 = x_390;
x_325 = x_391;
goto block_344;
}
}
else
{
lean_object* x_392; uint8_t x_393; 
x_392 = lean_ctor_get(x_371, 0);
lean_inc(x_392);
x_393 = lean_unbox(x_392);
lean_dec(x_392);
if (x_393 == 0)
{
lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; 
x_394 = lean_ctor_get(x_371, 1);
lean_inc(x_394);
lean_dec(x_371);
x_395 = lean_unsigned_to_nat(0u);
x_396 = lean_mk_empty_array_with_capacity(x_395);
x_397 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_397, 0, x_363);
x_398 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_398, 0, x_366);
x_399 = lean_mk_empty_array_with_capacity(x_23);
x_400 = lean_array_push(x_399, x_397);
x_401 = lean_array_push(x_400, x_398);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_402 = l_Lean_Elab_Term_elabAppArgs(x_295, x_396, x_401, x_360, x_49, x_49, x_3, x_4, x_5, x_6, x_7, x_8, x_394);
if (lean_obj_tag(x_402) == 0)
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; 
x_403 = lean_ctor_get(x_402, 0);
lean_inc(x_403);
x_404 = lean_ctor_get(x_402, 1);
lean_inc(x_404);
lean_dec(x_402);
lean_inc(x_8);
lean_inc(x_4);
x_405 = l_Lean_Elab_Term_synthesizeSyntheticMVarsUsingDefault(x_3, x_4, x_5, x_6, x_7, x_8, x_404);
if (lean_obj_tag(x_405) == 0)
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; 
x_406 = lean_ctor_get(x_405, 1);
lean_inc(x_406);
lean_dec(x_405);
x_407 = lean_box(0);
x_408 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_408, 0, x_403);
lean_ctor_set(x_408, 1, x_407);
x_302 = x_408;
x_303 = x_406;
goto block_323;
}
else
{
lean_object* x_409; lean_object* x_410; 
lean_dec(x_403);
x_409 = lean_ctor_get(x_405, 0);
lean_inc(x_409);
x_410 = lean_ctor_get(x_405, 1);
lean_inc(x_410);
lean_dec(x_405);
x_324 = x_409;
x_325 = x_410;
goto block_344;
}
}
else
{
lean_object* x_411; lean_object* x_412; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_411 = lean_ctor_get(x_402, 0);
lean_inc(x_411);
x_412 = lean_ctor_get(x_402, 1);
lean_inc(x_412);
lean_dec(x_402);
x_324 = x_411;
x_325 = x_412;
goto block_344;
}
}
else
{
lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; 
x_413 = lean_ctor_get(x_371, 1);
lean_inc(x_413);
lean_dec(x_371);
x_414 = lean_unsigned_to_nat(0u);
x_415 = lean_mk_empty_array_with_capacity(x_414);
x_416 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_416, 0, x_363);
x_417 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_417, 0, x_366);
x_418 = lean_mk_empty_array_with_capacity(x_23);
x_419 = lean_array_push(x_418, x_416);
x_420 = lean_array_push(x_419, x_417);
lean_inc(x_47);
x_421 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_421, 0, x_47);
lean_inc(x_8);
lean_inc(x_4);
x_422 = l_Lean_Elab_Term_elabAppArgs(x_295, x_415, x_420, x_421, x_49, x_49, x_3, x_4, x_5, x_6, x_7, x_8, x_413);
if (lean_obj_tag(x_422) == 0)
{
lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; 
x_423 = lean_ctor_get(x_422, 0);
lean_inc(x_423);
x_424 = lean_ctor_get(x_422, 1);
lean_inc(x_424);
lean_dec(x_422);
x_425 = lean_box(0);
x_426 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_426, 0, x_423);
lean_ctor_set(x_426, 1, x_425);
x_302 = x_426;
x_303 = x_424;
goto block_323;
}
else
{
lean_object* x_427; lean_object* x_428; 
x_427 = lean_ctor_get(x_422, 0);
lean_inc(x_427);
x_428 = lean_ctor_get(x_422, 1);
lean_inc(x_428);
lean_dec(x_422);
x_324 = x_427;
x_325 = x_428;
goto block_344;
}
}
}
}
else
{
lean_object* x_429; lean_object* x_430; 
lean_dec(x_369);
lean_dec(x_366);
lean_dec(x_363);
lean_dec(x_295);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_429 = lean_ctor_get(x_371, 0);
lean_inc(x_429);
x_430 = lean_ctor_get(x_371, 1);
lean_inc(x_430);
lean_dec(x_371);
x_324 = x_429;
x_325 = x_430;
goto block_344;
}
}
else
{
lean_object* x_431; lean_object* x_432; 
lean_dec(x_366);
lean_dec(x_363);
lean_dec(x_295);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_431 = lean_ctor_get(x_368, 0);
lean_inc(x_431);
x_432 = lean_ctor_get(x_368, 1);
lean_inc(x_432);
lean_dec(x_368);
x_324 = x_431;
x_325 = x_432;
goto block_344;
}
}
else
{
lean_object* x_433; lean_object* x_434; 
lean_dec(x_363);
lean_dec(x_295);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_433 = lean_ctor_get(x_365, 0);
lean_inc(x_433);
x_434 = lean_ctor_get(x_365, 1);
lean_inc(x_434);
lean_dec(x_365);
x_324 = x_433;
x_325 = x_434;
goto block_344;
}
}
else
{
lean_object* x_435; lean_object* x_436; 
lean_dec(x_295);
lean_dec(x_26);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_435 = lean_ctor_get(x_362, 0);
lean_inc(x_435);
x_436 = lean_ctor_get(x_362, 1);
lean_inc(x_436);
lean_dec(x_362);
x_324 = x_435;
x_325 = x_436;
goto block_344;
}
block_323:
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; 
x_304 = lean_st_ref_get(x_8, x_303);
lean_dec(x_8);
x_305 = lean_ctor_get(x_304, 1);
lean_inc(x_305);
lean_dec(x_304);
x_306 = lean_st_ref_take(x_4, x_305);
x_307 = lean_ctor_get(x_306, 0);
lean_inc(x_307);
x_308 = lean_ctor_get(x_306, 1);
lean_inc(x_308);
lean_dec(x_306);
x_309 = lean_ctor_get(x_307, 0);
lean_inc(x_309);
x_310 = lean_ctor_get(x_307, 1);
lean_inc(x_310);
x_311 = lean_ctor_get(x_307, 2);
lean_inc(x_311);
x_312 = lean_ctor_get(x_307, 3);
lean_inc(x_312);
x_313 = lean_ctor_get(x_307, 4);
lean_inc(x_313);
x_314 = lean_ctor_get(x_307, 5);
lean_inc(x_314);
if (lean_is_exclusive(x_307)) {
 lean_ctor_release(x_307, 0);
 lean_ctor_release(x_307, 1);
 lean_ctor_release(x_307, 2);
 lean_ctor_release(x_307, 3);
 lean_ctor_release(x_307, 4);
 lean_ctor_release(x_307, 5);
 x_315 = x_307;
} else {
 lean_dec_ref(x_307);
 x_315 = lean_box(0);
}
x_316 = l_List_append___rarg(x_310, x_301);
if (lean_is_scalar(x_315)) {
 x_317 = lean_alloc_ctor(0, 6, 0);
} else {
 x_317 = x_315;
}
lean_ctor_set(x_317, 0, x_309);
lean_ctor_set(x_317, 1, x_316);
lean_ctor_set(x_317, 2, x_311);
lean_ctor_set(x_317, 3, x_312);
lean_ctor_set(x_317, 4, x_313);
lean_ctor_set(x_317, 5, x_314);
x_318 = lean_st_ref_set(x_4, x_317, x_308);
lean_dec(x_4);
x_319 = lean_ctor_get(x_318, 1);
lean_inc(x_319);
if (lean_is_exclusive(x_318)) {
 lean_ctor_release(x_318, 0);
 lean_ctor_release(x_318, 1);
 x_320 = x_318;
} else {
 lean_dec_ref(x_318);
 x_320 = lean_box(0);
}
x_321 = lean_ctor_get(x_302, 0);
lean_inc(x_321);
lean_dec(x_302);
if (lean_is_scalar(x_320)) {
 x_322 = lean_alloc_ctor(0, 2, 0);
} else {
 x_322 = x_320;
}
lean_ctor_set(x_322, 0, x_321);
lean_ctor_set(x_322, 1, x_319);
return x_322;
}
block_344:
{
lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; 
x_326 = lean_st_ref_get(x_8, x_325);
lean_dec(x_8);
x_327 = lean_ctor_get(x_326, 1);
lean_inc(x_327);
lean_dec(x_326);
x_328 = lean_st_ref_take(x_4, x_327);
x_329 = lean_ctor_get(x_328, 0);
lean_inc(x_329);
x_330 = lean_ctor_get(x_328, 1);
lean_inc(x_330);
lean_dec(x_328);
x_331 = lean_ctor_get(x_329, 0);
lean_inc(x_331);
x_332 = lean_ctor_get(x_329, 1);
lean_inc(x_332);
x_333 = lean_ctor_get(x_329, 2);
lean_inc(x_333);
x_334 = lean_ctor_get(x_329, 3);
lean_inc(x_334);
x_335 = lean_ctor_get(x_329, 4);
lean_inc(x_335);
x_336 = lean_ctor_get(x_329, 5);
lean_inc(x_336);
if (lean_is_exclusive(x_329)) {
 lean_ctor_release(x_329, 0);
 lean_ctor_release(x_329, 1);
 lean_ctor_release(x_329, 2);
 lean_ctor_release(x_329, 3);
 lean_ctor_release(x_329, 4);
 lean_ctor_release(x_329, 5);
 x_337 = x_329;
} else {
 lean_dec_ref(x_329);
 x_337 = lean_box(0);
}
x_338 = l_List_append___rarg(x_332, x_301);
if (lean_is_scalar(x_337)) {
 x_339 = lean_alloc_ctor(0, 6, 0);
} else {
 x_339 = x_337;
}
lean_ctor_set(x_339, 0, x_331);
lean_ctor_set(x_339, 1, x_338);
lean_ctor_set(x_339, 2, x_333);
lean_ctor_set(x_339, 3, x_334);
lean_ctor_set(x_339, 4, x_335);
lean_ctor_set(x_339, 5, x_336);
x_340 = lean_st_ref_set(x_4, x_339, x_330);
lean_dec(x_4);
x_341 = lean_ctor_get(x_340, 1);
lean_inc(x_341);
if (lean_is_exclusive(x_340)) {
 lean_ctor_release(x_340, 0);
 lean_ctor_release(x_340, 1);
 x_342 = x_340;
} else {
 lean_dec_ref(x_340);
 x_342 = lean_box(0);
}
if (lean_is_scalar(x_342)) {
 x_343 = lean_alloc_ctor(1, 2, 0);
} else {
 x_343 = x_342;
 lean_ctor_set_tag(x_343, 1);
}
lean_ctor_set(x_343, 0, x_324);
lean_ctor_set(x_343, 1, x_341);
return x_343;
}
}
}
}
else
{
uint8_t x_437; 
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_437 = !lean_is_exclusive(x_50);
if (x_437 == 0)
{
return x_50;
}
else
{
lean_object* x_438; lean_object* x_439; lean_object* x_440; 
x_438 = lean_ctor_get(x_50, 0);
x_439 = lean_ctor_get(x_50, 1);
lean_inc(x_439);
lean_inc(x_438);
lean_dec(x_50);
x_440 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_440, 0, x_438);
lean_ctor_set(x_440, 1, x_439);
return x_440;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_elabBinOp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabBinOp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabBinOp");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinOp___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabBinOp(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_binop___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Term_elabForIn_getMonad_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Term_elabForIn_getMonad_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabForIn_getMonad_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabForIn_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_2, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabForIn_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabForIn_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabForIn_getMonad(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_mk_string("invalid 'forIn%' notation, expected type is not available");
x_10 = l_Lean_stringToMessageData(x_9);
lean_dec(x_9);
x_11 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_12);
x_13 = l_Lean_Elab_Term_isTypeApp_x3f(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_mk_string("invalid 'forIn%' notation, expected type is not of of the form `M α`");
x_17 = l_Lean_stringToMessageData(x_16);
lean_dec(x_16);
x_18 = l_Lean_indentExpr(x_12);
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_mk_string("");
x_21 = l_Lean_stringToMessageData(x_20);
lean_dec(x_20);
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_23;
}
else
{
lean_object* x_24; uint8_t x_25; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_24 = lean_ctor_get(x_14, 0);
lean_inc(x_24);
lean_dec(x_14);
x_25 = !lean_is_exclusive(x_13);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_13, 0);
lean_dec(x_26);
x_27 = lean_ctor_get(x_24, 0);
lean_inc(x_27);
lean_dec(x_24);
lean_ctor_set(x_13, 0, x_27);
return x_13;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_13, 1);
lean_inc(x_28);
lean_dec(x_13);
x_29 = lean_ctor_get(x_24, 0);
lean_inc(x_29);
lean_dec(x_24);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_13);
if (x_31 == 0)
{
return x_13;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_13, 0);
x_33 = lean_ctor_get(x_13, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_13);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_elabForIn_getMonad___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_elabForIn_getMonad(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabForIn_throwFailure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_mk_string("failed to synthesize instance for 'forIn%' notation");
x_10 = l_Lean_stringToMessageData(x_9);
lean_dec(x_9);
x_11 = l_Lean_indentExpr(x_1);
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_mk_string("");
x_14 = l_Lean_stringToMessageData(x_13);
lean_dec(x_13);
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_16;
}
}
lean_object* l_Lean_Elab_Term_elabForIn_throwFailure___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_elabForIn_throwFailure(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Elab_Term_elabForIn___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_5);
x_14 = l_Lean_Meta_trySynthInstance(x_5, x_13, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
switch (lean_obj_tag(x_15)) {
case 0:
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Elab_Term_elabForIn_throwFailure(x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_17;
}
case 1:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_15);
lean_dec(x_5);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_box(0);
x_20 = lean_mk_string("ForIn");
x_21 = lean_name_mk_string(x_19, x_20);
x_22 = lean_mk_string("forIn");
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = lean_box(0);
lean_inc(x_6);
x_25 = l_Lean_Elab_Term_mkConst(x_23, x_24, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; lean_object* x_39; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_unsigned_to_nat(0u);
x_29 = lean_mk_empty_array_with_capacity(x_28);
x_30 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_30, 0, x_1);
x_31 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_31, 0, x_2);
x_32 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_32, 0, x_3);
x_33 = lean_unsigned_to_nat(3u);
x_34 = lean_mk_empty_array_with_capacity(x_33);
x_35 = lean_array_push(x_34, x_30);
x_36 = lean_array_push(x_35, x_31);
x_37 = lean_array_push(x_36, x_32);
x_38 = 0;
x_39 = l_Lean_Elab_Term_elabAppArgs(x_26, x_29, x_37, x_4, x_38, x_38, x_6, x_7, x_8, x_9, x_10, x_11, x_27);
return x_39;
}
else
{
uint8_t x_40; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_25);
if (x_40 == 0)
{
return x_25;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_25, 0);
x_42 = lean_ctor_get(x_25, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_25);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
default: 
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = lean_ctor_get(x_14, 1);
lean_inc(x_44);
lean_dec(x_14);
x_45 = l_Lean_Elab_Term_tryPostpone(x_6, x_7, x_8, x_9, x_10, x_11, x_44);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = l_Lean_Elab_Term_elabForIn_throwFailure(x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_46);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_47;
}
else
{
uint8_t x_48; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_48 = !lean_is_exclusive(x_45);
if (x_48 == 0)
{
return x_45;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_45, 0);
x_50 = lean_ctor_get(x_45, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_45);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
}
else
{
uint8_t x_52; 
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
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_14);
if (x_52 == 0)
{
return x_14;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_14, 0);
x_54 = lean_ctor_get(x_14, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_14);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabForIn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_10 = lean_box(0);
x_11 = lean_mk_string("Lean");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_mk_string("Parser");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_mk_string("Term");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_mk_string("forInMacro");
lean_inc(x_16);
x_18 = lean_name_mk_string(x_16, x_17);
lean_inc(x_1);
x_19 = l_Lean_Syntax_isOfKind(x_1, x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_20 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = l_Lean_Syntax_getArg(x_1, x_21);
x_23 = lean_unsigned_to_nat(2u);
x_24 = l_Lean_Syntax_getArg(x_1, x_23);
x_25 = lean_unsigned_to_nat(3u);
x_26 = l_Lean_Syntax_getArg(x_1, x_25);
lean_dec(x_1);
lean_inc(x_5);
lean_inc(x_22);
x_27 = l_Lean_Elab_Term_isLocalIdent_x3f(x_22, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; lean_object* x_90; 
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Term_quoteAutoTactic___spec__1___rarg(x_7, x_8, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_32);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_35);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_mk_string("let");
lean_inc(x_39);
lean_inc(x_16);
x_40 = lean_name_mk_string(x_16, x_39);
lean_inc(x_31);
x_41 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_41, 0, x_31);
lean_ctor_set(x_41, 1, x_39);
x_42 = lean_mk_string("letDecl");
lean_inc(x_16);
x_43 = lean_name_mk_string(x_16, x_42);
x_44 = lean_mk_string("letIdDecl");
x_45 = lean_name_mk_string(x_16, x_44);
x_46 = lean_mk_string("col");
x_47 = lean_string_utf8_byte_size(x_46);
x_48 = lean_unsigned_to_nat(0u);
lean_inc(x_46);
x_49 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_48);
lean_ctor_set(x_49, 2, x_47);
x_50 = lean_name_mk_string(x_10, x_46);
x_51 = l_Lean_addMacroScope(x_37, x_50, x_34);
x_52 = lean_box(0);
lean_inc(x_31);
x_53 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_53, 0, x_31);
lean_ctor_set(x_53, 1, x_49);
lean_ctor_set(x_53, 2, x_51);
lean_ctor_set(x_53, 3, x_52);
x_54 = lean_mk_string("null");
x_55 = lean_name_mk_string(x_10, x_54);
x_56 = lean_mk_empty_array_with_capacity(x_48);
lean_inc(x_55);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_mk_string(":=");
lean_inc(x_31);
x_59 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_59, 0, x_31);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_unsigned_to_nat(5u);
x_61 = lean_mk_empty_array_with_capacity(x_60);
lean_inc(x_53);
x_62 = lean_array_push(x_61, x_53);
lean_inc(x_57);
x_63 = lean_array_push(x_62, x_57);
x_64 = lean_array_push(x_63, x_57);
x_65 = lean_array_push(x_64, x_59);
x_66 = lean_array_push(x_65, x_22);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_45);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_mk_empty_array_with_capacity(x_21);
lean_inc(x_68);
x_69 = lean_array_push(x_68, x_67);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_43);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_mk_string(";");
lean_inc(x_31);
x_72 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_72, 0, x_31);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_array_push(x_68, x_72);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_55);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_mk_string("forIn%");
x_76 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_76, 0, x_31);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_unsigned_to_nat(4u);
x_78 = lean_mk_empty_array_with_capacity(x_77);
lean_inc(x_78);
x_79 = lean_array_push(x_78, x_76);
x_80 = lean_array_push(x_79, x_53);
x_81 = lean_array_push(x_80, x_24);
x_82 = lean_array_push(x_81, x_26);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_18);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_array_push(x_78, x_41);
x_85 = lean_array_push(x_84, x_70);
x_86 = lean_array_push(x_85, x_74);
x_87 = lean_array_push(x_86, x_83);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_40);
lean_ctor_set(x_88, 1, x_87);
x_89 = 1;
x_90 = l_Lean_Elab_Term_elabTerm(x_88, x_2, x_89, x_89, x_3, x_4, x_5, x_6, x_7, x_8, x_38);
return x_90;
}
else
{
lean_object* x_91; uint8_t x_92; 
lean_dec(x_18);
lean_dec(x_16);
x_91 = lean_ctor_get(x_27, 1);
lean_inc(x_91);
lean_dec(x_27);
x_92 = !lean_is_exclusive(x_28);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; 
x_93 = lean_ctor_get(x_28, 0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
x_94 = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_91);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; lean_object* x_96; 
x_95 = lean_ctor_get(x_94, 1);
lean_inc(x_95);
lean_dec(x_94);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
x_96 = l_Lean_Elab_Term_elabForIn_getMonad(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_95);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
lean_dec(x_96);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_99 = l_Lean_Meta_inferType(x_93, x_5, x_6, x_7, x_8, x_98);
if (lean_obj_tag(x_99) == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
lean_dec(x_99);
x_102 = l_Lean_Meta_mkFreshLevelMVar___rarg(x_6, x_7, x_8, x_101);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = l_Lean_mkLevelSucc(x_103);
x_106 = l_Lean_mkSort(x_105);
lean_ctor_set(x_28, 0, x_106);
x_107 = 0;
lean_inc(x_5);
x_108 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_28, x_107, x_10, x_5, x_6, x_7, x_8, x_104);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
x_111 = lean_mk_string("ForIn");
x_112 = lean_name_mk_string(x_10, x_111);
x_113 = lean_mk_empty_array_with_capacity(x_25);
lean_inc(x_97);
x_114 = lean_array_push(x_113, x_97);
lean_inc(x_100);
x_115 = lean_array_push(x_114, x_100);
x_116 = lean_array_push(x_115, x_109);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_117 = l_Lean_Meta_mkAppM(x_112, x_116, x_5, x_6, x_7, x_8, x_110);
if (lean_obj_tag(x_117) == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
lean_dec(x_100);
lean_dec(x_97);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
lean_dec(x_117);
x_120 = l_Lean_Elab_Term_elabForIn___lambda__1(x_22, x_24, x_26, x_2, x_118, x_3, x_4, x_5, x_6, x_7, x_8, x_119);
return x_120;
}
else
{
lean_object* x_121; lean_object* x_122; 
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_2);
x_121 = lean_ctor_get(x_117, 1);
lean_inc(x_121);
lean_dec(x_117);
x_122 = l_Lean_Elab_Term_tryPostpone(x_3, x_4, x_5, x_6, x_7, x_8, x_121);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; uint8_t x_137; 
x_123 = lean_ctor_get(x_122, 1);
lean_inc(x_123);
lean_dec(x_122);
x_124 = lean_mk_string("failed to construct 'ForIn' instance for collection");
x_125 = l_Lean_stringToMessageData(x_124);
lean_dec(x_124);
x_126 = l_Lean_indentExpr(x_100);
x_127 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
x_128 = lean_mk_string("\nand monad");
x_129 = l_Lean_stringToMessageData(x_128);
lean_dec(x_128);
x_130 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_130, 0, x_127);
lean_ctor_set(x_130, 1, x_129);
x_131 = l_Lean_indentExpr(x_97);
x_132 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_mk_string("");
x_134 = l_Lean_stringToMessageData(x_133);
lean_dec(x_133);
x_135 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_135, 0, x_132);
lean_ctor_set(x_135, 1, x_134);
x_136 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_135, x_3, x_4, x_5, x_6, x_7, x_8, x_123);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_137 = !lean_is_exclusive(x_136);
if (x_137 == 0)
{
return x_136;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_138 = lean_ctor_get(x_136, 0);
x_139 = lean_ctor_get(x_136, 1);
lean_inc(x_139);
lean_inc(x_138);
lean_dec(x_136);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
return x_140;
}
}
else
{
uint8_t x_141; 
lean_dec(x_100);
lean_dec(x_97);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_141 = !lean_is_exclusive(x_122);
if (x_141 == 0)
{
return x_122;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_142 = lean_ctor_get(x_122, 0);
x_143 = lean_ctor_get(x_122, 1);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_122);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set(x_144, 1, x_143);
return x_144;
}
}
}
}
else
{
uint8_t x_145; 
lean_dec(x_97);
lean_free_object(x_28);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_145 = !lean_is_exclusive(x_99);
if (x_145 == 0)
{
return x_99;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_146 = lean_ctor_get(x_99, 0);
x_147 = lean_ctor_get(x_99, 1);
lean_inc(x_147);
lean_inc(x_146);
lean_dec(x_99);
x_148 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_148, 0, x_146);
lean_ctor_set(x_148, 1, x_147);
return x_148;
}
}
}
else
{
uint8_t x_149; 
lean_free_object(x_28);
lean_dec(x_93);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_149 = !lean_is_exclusive(x_96);
if (x_149 == 0)
{
return x_96;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_150 = lean_ctor_get(x_96, 0);
x_151 = lean_ctor_get(x_96, 1);
lean_inc(x_151);
lean_inc(x_150);
lean_dec(x_96);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_151);
return x_152;
}
}
}
else
{
uint8_t x_153; 
lean_free_object(x_28);
lean_dec(x_93);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_153 = !lean_is_exclusive(x_94);
if (x_153 == 0)
{
return x_94;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_94, 0);
x_155 = lean_ctor_get(x_94, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_94);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
return x_156;
}
}
}
else
{
lean_object* x_157; lean_object* x_158; 
x_157 = lean_ctor_get(x_28, 0);
lean_inc(x_157);
lean_dec(x_28);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
x_158 = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_91);
if (lean_obj_tag(x_158) == 0)
{
lean_object* x_159; lean_object* x_160; 
x_159 = lean_ctor_get(x_158, 1);
lean_inc(x_159);
lean_dec(x_158);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
x_160 = l_Lean_Elab_Term_elabForIn_getMonad(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_159);
if (lean_obj_tag(x_160) == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_161 = lean_ctor_get(x_160, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_160, 1);
lean_inc(x_162);
lean_dec(x_160);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_163 = l_Lean_Meta_inferType(x_157, x_5, x_6, x_7, x_8, x_162);
if (lean_obj_tag(x_163) == 0)
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_164 = lean_ctor_get(x_163, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_163, 1);
lean_inc(x_165);
lean_dec(x_163);
x_166 = l_Lean_Meta_mkFreshLevelMVar___rarg(x_6, x_7, x_8, x_165);
x_167 = lean_ctor_get(x_166, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_166, 1);
lean_inc(x_168);
lean_dec(x_166);
x_169 = l_Lean_mkLevelSucc(x_167);
x_170 = l_Lean_mkSort(x_169);
x_171 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_171, 0, x_170);
x_172 = 0;
lean_inc(x_5);
x_173 = l___private_Lean_Meta_Basic_0__Lean_Meta_mkFreshExprMVarImpl(x_171, x_172, x_10, x_5, x_6, x_7, x_8, x_168);
x_174 = lean_ctor_get(x_173, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_173, 1);
lean_inc(x_175);
lean_dec(x_173);
x_176 = lean_mk_string("ForIn");
x_177 = lean_name_mk_string(x_10, x_176);
x_178 = lean_mk_empty_array_with_capacity(x_25);
lean_inc(x_161);
x_179 = lean_array_push(x_178, x_161);
lean_inc(x_164);
x_180 = lean_array_push(x_179, x_164);
x_181 = lean_array_push(x_180, x_174);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_182 = l_Lean_Meta_mkAppM(x_177, x_181, x_5, x_6, x_7, x_8, x_175);
if (lean_obj_tag(x_182) == 0)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; 
lean_dec(x_164);
lean_dec(x_161);
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_182, 1);
lean_inc(x_184);
lean_dec(x_182);
x_185 = l_Lean_Elab_Term_elabForIn___lambda__1(x_22, x_24, x_26, x_2, x_183, x_3, x_4, x_5, x_6, x_7, x_8, x_184);
return x_185;
}
else
{
lean_object* x_186; lean_object* x_187; 
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_2);
x_186 = lean_ctor_get(x_182, 1);
lean_inc(x_186);
lean_dec(x_182);
x_187 = l_Lean_Elab_Term_tryPostpone(x_3, x_4, x_5, x_6, x_7, x_8, x_186);
if (lean_obj_tag(x_187) == 0)
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_188 = lean_ctor_get(x_187, 1);
lean_inc(x_188);
lean_dec(x_187);
x_189 = lean_mk_string("failed to construct 'ForIn' instance for collection");
x_190 = l_Lean_stringToMessageData(x_189);
lean_dec(x_189);
x_191 = l_Lean_indentExpr(x_164);
x_192 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_192, 0, x_190);
lean_ctor_set(x_192, 1, x_191);
x_193 = lean_mk_string("\nand monad");
x_194 = l_Lean_stringToMessageData(x_193);
lean_dec(x_193);
x_195 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_195, 0, x_192);
lean_ctor_set(x_195, 1, x_194);
x_196 = l_Lean_indentExpr(x_161);
x_197 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set(x_197, 1, x_196);
x_198 = lean_mk_string("");
x_199 = l_Lean_stringToMessageData(x_198);
lean_dec(x_198);
x_200 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_200, 0, x_197);
lean_ctor_set(x_200, 1, x_199);
x_201 = l_Lean_throwError___at_Lean_Elab_Term_synthesizeInst___spec__1(x_200, x_3, x_4, x_5, x_6, x_7, x_8, x_188);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_202 = lean_ctor_get(x_201, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_201, 1);
lean_inc(x_203);
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 lean_ctor_release(x_201, 1);
 x_204 = x_201;
} else {
 lean_dec_ref(x_201);
 x_204 = lean_box(0);
}
if (lean_is_scalar(x_204)) {
 x_205 = lean_alloc_ctor(1, 2, 0);
} else {
 x_205 = x_204;
}
lean_ctor_set(x_205, 0, x_202);
lean_ctor_set(x_205, 1, x_203);
return x_205;
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
lean_dec(x_164);
lean_dec(x_161);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_206 = lean_ctor_get(x_187, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_187, 1);
lean_inc(x_207);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 x_208 = x_187;
} else {
 lean_dec_ref(x_187);
 x_208 = lean_box(0);
}
if (lean_is_scalar(x_208)) {
 x_209 = lean_alloc_ctor(1, 2, 0);
} else {
 x_209 = x_208;
}
lean_ctor_set(x_209, 0, x_206);
lean_ctor_set(x_209, 1, x_207);
return x_209;
}
}
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
lean_dec(x_161);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_210 = lean_ctor_get(x_163, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_163, 1);
lean_inc(x_211);
if (lean_is_exclusive(x_163)) {
 lean_ctor_release(x_163, 0);
 lean_ctor_release(x_163, 1);
 x_212 = x_163;
} else {
 lean_dec_ref(x_163);
 x_212 = lean_box(0);
}
if (lean_is_scalar(x_212)) {
 x_213 = lean_alloc_ctor(1, 2, 0);
} else {
 x_213 = x_212;
}
lean_ctor_set(x_213, 0, x_210);
lean_ctor_set(x_213, 1, x_211);
return x_213;
}
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
lean_dec(x_157);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_214 = lean_ctor_get(x_160, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_160, 1);
lean_inc(x_215);
if (lean_is_exclusive(x_160)) {
 lean_ctor_release(x_160, 0);
 lean_ctor_release(x_160, 1);
 x_216 = x_160;
} else {
 lean_dec_ref(x_160);
 x_216 = lean_box(0);
}
if (lean_is_scalar(x_216)) {
 x_217 = lean_alloc_ctor(1, 2, 0);
} else {
 x_217 = x_216;
}
lean_ctor_set(x_217, 0, x_214);
lean_ctor_set(x_217, 1, x_215);
return x_217;
}
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
lean_dec(x_157);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_218 = lean_ctor_get(x_158, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_158, 1);
lean_inc(x_219);
if (lean_is_exclusive(x_158)) {
 lean_ctor_release(x_158, 0);
 lean_ctor_release(x_158, 1);
 x_220 = x_158;
} else {
 lean_dec_ref(x_158);
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
}
}
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForIn___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elabForIn");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForIn___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Elab_Term_elabProp___closed__3;
x_2 = l___regBuiltin_Lean_Elab_Term_elabForIn___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabForIn___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabForIn), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabForIn(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Term_forInMacro___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabForIn___closed__2;
x_5 = l___regBuiltin_Lean_Elab_Term_elabForIn___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Elab_App(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Extra(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_App(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__1);
l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__2);
l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabBinRel___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabBinRel(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__1);
l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__2);
l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabBinOp___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabBinOp(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabForIn___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabForIn___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForIn___closed__1);
l___regBuiltin_Lean_Elab_Term_elabForIn___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabForIn___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForIn___closed__2);
l___regBuiltin_Lean_Elab_Term_elabForIn___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabForIn___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabForIn___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabForIn(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
