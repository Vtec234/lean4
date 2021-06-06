// Lean compiler output
// Module: Lean.Elab.Deriving.DecEq
// Imports: Init Lean.Meta.Transform Lean.Meta.Inductive Lean.Elab.Deriving.Basic Lean.Elab.Deriving.Util
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
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasAnyFVar_visit___at_Lean_Expr_containsFVar___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkSameCtorRhs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch___boxed(lean_object*);
lean_object* l_Lean_Meta_compatibleCtors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_betaReduce___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts_match__1(lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkDecEqHeader___boxed(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_Elab_Deriving_DecEq_mkDecEqCmds___spec__1(lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkDiscrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkDecEqHeader___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInstanceCmds(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkDecEqCmds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkAuxFunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at_Lean_Elab_elabDeriving___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkSameCtorRhs_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkHeader___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts_match__2(lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(size_t, size_t, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkDecEqHeader(lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkSameCtorRhs_match__1(lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_initFn____x40_Lean_Elab_Deriving_DecEq___hyg_2438_(lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__6___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkSameCtorRhs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getRef(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_registerBuiltinDerivingHandler(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkAuxFunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts_match__2___rarg(lean_object*, lean_object*);
lean_object* lean_mk_syntax_ident(lean_object*);
extern lean_object* l_Lean_instInhabitedInductiveVal;
lean_object* l_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_betaReduce___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__6___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_DecEq_mkDecEqHeader___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_box(0);
x_10 = lean_mk_string("DecidableEq");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_unsigned_to_nat(2u);
x_13 = l_Lean_Elab_Deriving_mkHeader___rarg(x_11, x_12, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_13;
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkDecEqHeader(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_DecEq_mkDecEqHeader___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkDecEqHeader___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Deriving_DecEq_mkDecEqHeader(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkSameCtorRhs_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_apply_4(x_3, x_9, x_10, x_11, x_8);
return x_12;
}
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkSameCtorRhs_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_DecEq_mkMatch_mkSameCtorRhs_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkSameCtorRhs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_dec(x_1);
x_10 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_7, x_8, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_3);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_15);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_box(0);
x_20 = lean_mk_string("Lean");
x_21 = lean_name_mk_string(x_19, x_20);
x_22 = lean_mk_string("Parser");
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = lean_mk_string("Term");
x_25 = lean_name_mk_string(x_23, x_24);
x_26 = lean_mk_string("app");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("isTrue");
x_29 = lean_string_utf8_byte_size(x_28);
x_30 = lean_unsigned_to_nat(0u);
lean_inc(x_28);
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_30);
lean_ctor_set(x_31, 2, x_29);
lean_inc(x_28);
x_32 = lean_name_mk_string(x_19, x_28);
lean_inc(x_14);
lean_inc(x_18);
x_33 = l_Lean_addMacroScope(x_18, x_32, x_14);
x_34 = lean_mk_string("Decidable");
x_35 = lean_name_mk_string(x_19, x_34);
x_36 = lean_name_mk_string(x_35, x_28);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
lean_inc(x_11);
x_40 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_40, 0, x_11);
lean_ctor_set(x_40, 1, x_31);
lean_ctor_set(x_40, 2, x_33);
lean_ctor_set(x_40, 3, x_39);
x_41 = lean_mk_string("null");
x_42 = lean_name_mk_string(x_19, x_41);
x_43 = lean_mk_string("rfl");
x_44 = lean_string_utf8_byte_size(x_43);
lean_inc(x_43);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_30);
lean_ctor_set(x_45, 2, x_44);
x_46 = lean_name_mk_string(x_19, x_43);
lean_inc(x_46);
x_47 = l_Lean_addMacroScope(x_18, x_46, x_14);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_37);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_37);
x_50 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_50, 0, x_11);
lean_ctor_set(x_50, 1, x_45);
lean_ctor_set(x_50, 2, x_47);
lean_ctor_set(x_50, 3, x_49);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_mk_empty_array_with_capacity(x_51);
x_53 = lean_array_push(x_52, x_50);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_42);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_unsigned_to_nat(2u);
x_56 = lean_mk_empty_array_with_capacity(x_55);
x_57 = lean_array_push(x_56, x_40);
x_58 = lean_array_push(x_57, x_54);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_27);
lean_ctor_set(x_59, 1, x_58);
lean_ctor_set(x_16, 0, x_59);
return x_16;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_60 = lean_ctor_get(x_16, 0);
x_61 = lean_ctor_get(x_16, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_16);
x_62 = lean_box(0);
x_63 = lean_mk_string("Lean");
x_64 = lean_name_mk_string(x_62, x_63);
x_65 = lean_mk_string("Parser");
x_66 = lean_name_mk_string(x_64, x_65);
x_67 = lean_mk_string("Term");
x_68 = lean_name_mk_string(x_66, x_67);
x_69 = lean_mk_string("app");
x_70 = lean_name_mk_string(x_68, x_69);
x_71 = lean_mk_string("isTrue");
x_72 = lean_string_utf8_byte_size(x_71);
x_73 = lean_unsigned_to_nat(0u);
lean_inc(x_71);
x_74 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_73);
lean_ctor_set(x_74, 2, x_72);
lean_inc(x_71);
x_75 = lean_name_mk_string(x_62, x_71);
lean_inc(x_14);
lean_inc(x_60);
x_76 = l_Lean_addMacroScope(x_60, x_75, x_14);
x_77 = lean_mk_string("Decidable");
x_78 = lean_name_mk_string(x_62, x_77);
x_79 = lean_name_mk_string(x_78, x_71);
x_80 = lean_box(0);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_80);
lean_inc(x_11);
x_83 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_83, 0, x_11);
lean_ctor_set(x_83, 1, x_74);
lean_ctor_set(x_83, 2, x_76);
lean_ctor_set(x_83, 3, x_82);
x_84 = lean_mk_string("null");
x_85 = lean_name_mk_string(x_62, x_84);
x_86 = lean_mk_string("rfl");
x_87 = lean_string_utf8_byte_size(x_86);
lean_inc(x_86);
x_88 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_73);
lean_ctor_set(x_88, 2, x_87);
x_89 = lean_name_mk_string(x_62, x_86);
lean_inc(x_89);
x_90 = l_Lean_addMacroScope(x_60, x_89, x_14);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_80);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_80);
x_93 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_93, 0, x_11);
lean_ctor_set(x_93, 1, x_88);
lean_ctor_set(x_93, 2, x_90);
lean_ctor_set(x_93, 3, x_92);
x_94 = lean_unsigned_to_nat(1u);
x_95 = lean_mk_empty_array_with_capacity(x_94);
x_96 = lean_array_push(x_95, x_93);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_85);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_unsigned_to_nat(2u);
x_99 = lean_mk_empty_array_with_capacity(x_98);
x_100 = lean_array_push(x_99, x_83);
x_101 = lean_array_push(x_100, x_97);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_70);
lean_ctor_set(x_102, 1, x_101);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_61);
return x_103;
}
}
else
{
lean_object* x_104; lean_object* x_105; uint8_t x_106; 
x_104 = lean_ctor_get(x_2, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_104, 1);
lean_inc(x_105);
x_106 = !lean_is_exclusive(x_2);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; uint8_t x_110; 
x_107 = lean_ctor_get(x_2, 1);
x_108 = lean_ctor_get(x_2, 0);
lean_dec(x_108);
x_109 = lean_ctor_get(x_104, 0);
lean_inc(x_109);
lean_dec(x_104);
x_110 = !lean_is_exclusive(x_105);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; uint8_t x_116; 
x_111 = lean_ctor_get(x_105, 0);
x_112 = lean_ctor_get(x_105, 1);
x_113 = lean_st_ref_take(x_8, x_9);
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_113, 1);
lean_inc(x_115);
lean_dec(x_113);
x_116 = !lean_is_exclusive(x_114);
if (x_116 == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; 
x_117 = lean_ctor_get(x_114, 1);
x_118 = lean_unsigned_to_nat(1u);
x_119 = lean_nat_add(x_117, x_118);
lean_ctor_set(x_114, 1, x_119);
x_120 = lean_st_ref_set(x_8, x_114, x_115);
x_121 = lean_ctor_get(x_120, 1);
lean_inc(x_121);
lean_dec(x_120);
x_122 = !lean_is_exclusive(x_3);
if (x_122 == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; 
x_123 = lean_ctor_get(x_3, 4);
lean_dec(x_123);
lean_ctor_set(x_3, 4, x_117);
lean_inc(x_3);
lean_inc(x_1);
x_124 = l_Lean_Elab_Deriving_DecEq_mkMatch_mkSameCtorRhs(x_1, x_107, x_3, x_4, x_5, x_6, x_7, x_8, x_121);
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
lean_dec(x_124);
x_127 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_7, x_8, x_126);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
lean_dec(x_127);
x_130 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_129);
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec(x_130);
x_133 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_132);
x_134 = !lean_is_exclusive(x_133);
if (x_134 == 0)
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; uint8_t x_333; 
x_135 = lean_ctor_get(x_133, 0);
x_136 = lean_ctor_get(x_133, 1);
x_137 = lean_box(0);
x_138 = lean_mk_string("termDepIfThenElse");
x_139 = lean_name_mk_string(x_137, x_138);
x_140 = lean_mk_string("if");
lean_inc(x_128);
x_141 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_141, 0, x_128);
lean_ctor_set(x_141, 1, x_140);
x_142 = lean_mk_string("h");
x_143 = lean_string_utf8_byte_size(x_142);
x_144 = lean_unsigned_to_nat(0u);
lean_inc(x_142);
x_145 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_145, 0, x_142);
lean_ctor_set(x_145, 1, x_144);
lean_ctor_set(x_145, 2, x_143);
x_146 = lean_name_mk_string(x_137, x_142);
lean_inc(x_131);
lean_inc(x_135);
x_147 = l_Lean_addMacroScope(x_135, x_146, x_131);
x_148 = lean_box(0);
lean_inc(x_128);
x_149 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_149, 0, x_128);
lean_ctor_set(x_149, 1, x_145);
lean_ctor_set(x_149, 2, x_147);
lean_ctor_set(x_149, 3, x_148);
x_150 = lean_mk_string(":");
lean_inc(x_128);
x_151 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_151, 0, x_128);
lean_ctor_set(x_151, 1, x_150);
x_152 = lean_mk_string("term_=_");
x_153 = lean_name_mk_string(x_137, x_152);
x_154 = lean_mk_string("=");
lean_inc(x_128);
x_155 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_155, 0, x_128);
lean_ctor_set(x_155, 1, x_154);
x_156 = lean_unsigned_to_nat(3u);
x_157 = lean_mk_empty_array_with_capacity(x_156);
lean_inc(x_109);
lean_inc(x_157);
x_158 = lean_array_push(x_157, x_109);
x_159 = lean_array_push(x_158, x_155);
lean_inc(x_111);
x_160 = lean_array_push(x_159, x_111);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_153);
lean_ctor_set(x_161, 1, x_160);
x_162 = lean_mk_string("then");
lean_inc(x_128);
x_163 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_163, 0, x_128);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_mk_string("Lean");
x_165 = lean_name_mk_string(x_137, x_164);
x_166 = lean_mk_string("Parser");
x_167 = lean_name_mk_string(x_165, x_166);
x_168 = lean_mk_string("Term");
lean_inc(x_167);
x_169 = lean_name_mk_string(x_167, x_168);
x_170 = lean_mk_string("byTactic");
lean_inc(x_169);
x_171 = lean_name_mk_string(x_169, x_170);
x_172 = lean_mk_string("by");
lean_inc(x_128);
x_173 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_173, 0, x_128);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_mk_string("Tactic");
x_175 = lean_name_mk_string(x_167, x_174);
x_176 = lean_mk_string("tacticSeq");
lean_inc(x_175);
x_177 = lean_name_mk_string(x_175, x_176);
x_178 = lean_mk_string("tacticSeq1Indented");
lean_inc(x_175);
x_179 = lean_name_mk_string(x_175, x_178);
x_180 = lean_mk_string("null");
x_181 = lean_name_mk_string(x_137, x_180);
x_182 = lean_mk_string("group");
x_183 = lean_name_mk_string(x_137, x_182);
x_184 = lean_mk_string("subst");
lean_inc(x_184);
lean_inc(x_175);
x_185 = lean_name_mk_string(x_175, x_184);
lean_inc(x_128);
x_186 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_186, 0, x_128);
lean_ctor_set(x_186, 1, x_184);
x_187 = lean_mk_empty_array_with_capacity(x_118);
lean_inc(x_149);
lean_inc(x_187);
x_188 = lean_array_push(x_187, x_149);
lean_inc(x_181);
x_189 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_189, 0, x_181);
lean_ctor_set(x_189, 1, x_188);
x_190 = lean_unsigned_to_nat(2u);
x_191 = lean_mk_empty_array_with_capacity(x_190);
lean_inc(x_191);
x_192 = lean_array_push(x_191, x_186);
x_193 = lean_array_push(x_192, x_189);
x_194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_194, 0, x_185);
lean_ctor_set(x_194, 1, x_193);
x_195 = lean_mk_string(";");
lean_inc(x_195);
lean_inc(x_128);
x_196 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_196, 0, x_128);
lean_ctor_set(x_196, 1, x_195);
lean_inc(x_187);
x_197 = lean_array_push(x_187, x_196);
lean_inc(x_181);
x_198 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_198, 0, x_181);
lean_ctor_set(x_198, 1, x_197);
lean_inc(x_191);
x_199 = lean_array_push(x_191, x_194);
lean_inc(x_198);
x_200 = lean_array_push(x_199, x_198);
lean_inc(x_183);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_183);
lean_ctor_set(x_201, 1, x_200);
x_202 = lean_mk_string("exact");
lean_inc(x_202);
lean_inc(x_175);
x_203 = lean_name_mk_string(x_175, x_202);
lean_inc(x_128);
x_204 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_204, 0, x_128);
lean_ctor_set(x_204, 1, x_202);
lean_inc(x_191);
x_205 = lean_array_push(x_191, x_204);
x_206 = lean_array_push(x_205, x_125);
x_207 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_207, 0, x_203);
lean_ctor_set(x_207, 1, x_206);
x_208 = lean_mk_empty_array_with_capacity(x_144);
lean_inc(x_181);
x_209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_209, 0, x_181);
lean_ctor_set(x_209, 1, x_208);
lean_inc(x_191);
x_210 = lean_array_push(x_191, x_207);
lean_inc(x_209);
x_211 = lean_array_push(x_210, x_209);
lean_inc(x_183);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_183);
lean_ctor_set(x_212, 1, x_211);
lean_inc(x_191);
x_213 = lean_array_push(x_191, x_201);
x_214 = lean_array_push(x_213, x_212);
lean_inc(x_181);
x_215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_215, 0, x_181);
lean_ctor_set(x_215, 1, x_214);
lean_inc(x_187);
x_216 = lean_array_push(x_187, x_215);
lean_inc(x_179);
x_217 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_217, 0, x_179);
lean_ctor_set(x_217, 1, x_216);
lean_inc(x_187);
x_218 = lean_array_push(x_187, x_217);
lean_inc(x_177);
x_219 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_219, 0, x_177);
lean_ctor_set(x_219, 1, x_218);
lean_inc(x_191);
x_220 = lean_array_push(x_191, x_173);
lean_inc(x_220);
x_221 = lean_array_push(x_220, x_219);
lean_inc(x_171);
x_222 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_222, 0, x_171);
lean_ctor_set(x_222, 1, x_221);
x_223 = lean_mk_string("else");
lean_inc(x_128);
x_224 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_224, 0, x_128);
lean_ctor_set(x_224, 1, x_223);
x_225 = lean_mk_string("app");
lean_inc(x_169);
x_226 = lean_name_mk_string(x_169, x_225);
x_227 = lean_mk_string("isFalse");
x_228 = lean_string_utf8_byte_size(x_227);
lean_inc(x_227);
x_229 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_229, 0, x_227);
lean_ctor_set(x_229, 1, x_144);
lean_ctor_set(x_229, 2, x_228);
lean_inc(x_227);
x_230 = lean_name_mk_string(x_137, x_227);
lean_inc(x_131);
lean_inc(x_135);
x_231 = l_Lean_addMacroScope(x_135, x_230, x_131);
x_232 = lean_mk_string("Decidable");
x_233 = lean_name_mk_string(x_137, x_232);
x_234 = lean_name_mk_string(x_233, x_227);
lean_ctor_set(x_105, 1, x_148);
lean_ctor_set(x_105, 0, x_234);
lean_ctor_set(x_2, 1, x_148);
lean_ctor_set(x_2, 0, x_105);
lean_inc(x_128);
x_235 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_235, 0, x_128);
lean_ctor_set(x_235, 1, x_229);
lean_ctor_set(x_235, 2, x_231);
lean_ctor_set(x_235, 3, x_2);
x_236 = lean_mk_string("paren");
lean_inc(x_169);
x_237 = lean_name_mk_string(x_169, x_236);
x_238 = lean_mk_string("(");
lean_inc(x_128);
x_239 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_239, 0, x_128);
lean_ctor_set(x_239, 1, x_238);
x_240 = lean_mk_string("intro");
lean_inc(x_240);
lean_inc(x_175);
x_241 = lean_name_mk_string(x_175, x_240);
lean_inc(x_128);
x_242 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_242, 0, x_128);
lean_ctor_set(x_242, 1, x_240);
x_243 = lean_mk_string("n");
x_244 = lean_string_utf8_byte_size(x_243);
lean_inc(x_243);
x_245 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_245, 0, x_243);
lean_ctor_set(x_245, 1, x_144);
lean_ctor_set(x_245, 2, x_244);
x_246 = lean_name_mk_string(x_137, x_243);
x_247 = l_Lean_addMacroScope(x_135, x_246, x_131);
lean_inc(x_128);
x_248 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_248, 0, x_128);
lean_ctor_set(x_248, 1, x_245);
lean_ctor_set(x_248, 2, x_247);
lean_ctor_set(x_248, 3, x_148);
lean_inc(x_248);
lean_inc(x_187);
x_249 = lean_array_push(x_187, x_248);
lean_inc(x_181);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_181);
lean_ctor_set(x_250, 1, x_249);
lean_inc(x_191);
x_251 = lean_array_push(x_191, x_242);
x_252 = lean_array_push(x_251, x_250);
x_253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_253, 0, x_241);
lean_ctor_set(x_253, 1, x_252);
lean_inc(x_191);
x_254 = lean_array_push(x_191, x_253);
lean_inc(x_198);
x_255 = lean_array_push(x_254, x_198);
lean_inc(x_183);
x_256 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_256, 0, x_183);
lean_ctor_set(x_256, 1, x_255);
x_257 = lean_mk_string("injection");
lean_inc(x_257);
lean_inc(x_175);
x_258 = lean_name_mk_string(x_175, x_257);
lean_inc(x_128);
x_259 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_259, 0, x_128);
lean_ctor_set(x_259, 1, x_257);
lean_inc(x_157);
x_260 = lean_array_push(x_157, x_259);
x_261 = lean_array_push(x_260, x_248);
lean_inc(x_209);
x_262 = lean_array_push(x_261, x_209);
x_263 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_263, 0, x_258);
lean_ctor_set(x_263, 1, x_262);
lean_inc(x_191);
x_264 = lean_array_push(x_191, x_263);
lean_inc(x_198);
x_265 = lean_array_push(x_264, x_198);
lean_inc(x_183);
x_266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_266, 0, x_183);
lean_ctor_set(x_266, 1, x_265);
x_267 = lean_mk_string("apply");
lean_inc(x_267);
lean_inc(x_175);
x_268 = lean_name_mk_string(x_175, x_267);
lean_inc(x_128);
x_269 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_269, 0, x_128);
lean_ctor_set(x_269, 1, x_267);
x_270 = lean_mk_string("hole");
lean_inc(x_169);
x_271 = lean_name_mk_string(x_169, x_270);
x_272 = lean_mk_string("_");
lean_inc(x_128);
x_273 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_273, 0, x_128);
lean_ctor_set(x_273, 1, x_272);
lean_inc(x_187);
x_274 = lean_array_push(x_187, x_273);
x_275 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_275, 0, x_271);
lean_ctor_set(x_275, 1, x_274);
lean_inc(x_187);
x_276 = lean_array_push(x_187, x_275);
lean_inc(x_181);
x_277 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_277, 0, x_181);
lean_ctor_set(x_277, 1, x_276);
lean_inc(x_149);
lean_inc(x_191);
x_278 = lean_array_push(x_191, x_149);
x_279 = lean_array_push(x_278, x_277);
lean_inc(x_226);
x_280 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_280, 0, x_226);
lean_ctor_set(x_280, 1, x_279);
lean_inc(x_191);
x_281 = lean_array_push(x_191, x_269);
x_282 = lean_array_push(x_281, x_280);
x_283 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_283, 0, x_268);
lean_ctor_set(x_283, 1, x_282);
lean_inc(x_191);
x_284 = lean_array_push(x_191, x_283);
x_285 = lean_array_push(x_284, x_198);
lean_inc(x_183);
x_286 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_286, 0, x_183);
lean_ctor_set(x_286, 1, x_285);
x_287 = lean_mk_string("assumption");
lean_inc(x_287);
x_288 = lean_name_mk_string(x_175, x_287);
lean_inc(x_128);
x_289 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_289, 0, x_128);
lean_ctor_set(x_289, 1, x_287);
lean_inc(x_187);
x_290 = lean_array_push(x_187, x_289);
x_291 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_291, 0, x_288);
lean_ctor_set(x_291, 1, x_290);
lean_inc(x_191);
x_292 = lean_array_push(x_191, x_291);
lean_inc(x_209);
x_293 = lean_array_push(x_292, x_209);
x_294 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_294, 0, x_183);
lean_ctor_set(x_294, 1, x_293);
x_295 = lean_unsigned_to_nat(4u);
x_296 = lean_mk_empty_array_with_capacity(x_295);
lean_inc(x_296);
x_297 = lean_array_push(x_296, x_256);
x_298 = lean_array_push(x_297, x_266);
x_299 = lean_array_push(x_298, x_286);
x_300 = lean_array_push(x_299, x_294);
lean_inc(x_181);
x_301 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_301, 0, x_181);
lean_ctor_set(x_301, 1, x_300);
lean_inc(x_187);
x_302 = lean_array_push(x_187, x_301);
x_303 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_303, 0, x_179);
lean_ctor_set(x_303, 1, x_302);
lean_inc(x_187);
x_304 = lean_array_push(x_187, x_303);
x_305 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_305, 0, x_177);
lean_ctor_set(x_305, 1, x_304);
x_306 = lean_array_push(x_220, x_305);
x_307 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_307, 0, x_171);
lean_ctor_set(x_307, 1, x_306);
lean_inc(x_191);
x_308 = lean_array_push(x_191, x_307);
lean_inc(x_209);
x_309 = lean_array_push(x_308, x_209);
lean_inc(x_181);
x_310 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_310, 0, x_181);
lean_ctor_set(x_310, 1, x_309);
x_311 = lean_mk_string(")");
x_312 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_312, 0, x_128);
lean_ctor_set(x_312, 1, x_311);
x_313 = lean_array_push(x_157, x_239);
x_314 = lean_array_push(x_313, x_310);
x_315 = lean_array_push(x_314, x_312);
x_316 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_316, 0, x_237);
lean_ctor_set(x_316, 1, x_315);
lean_inc(x_187);
x_317 = lean_array_push(x_187, x_316);
lean_inc(x_181);
x_318 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_318, 0, x_181);
lean_ctor_set(x_318, 1, x_317);
lean_inc(x_191);
x_319 = lean_array_push(x_191, x_235);
x_320 = lean_array_push(x_319, x_318);
lean_inc(x_226);
x_321 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_321, 0, x_226);
lean_ctor_set(x_321, 1, x_320);
x_322 = lean_unsigned_to_nat(8u);
x_323 = lean_mk_empty_array_with_capacity(x_322);
x_324 = lean_array_push(x_323, x_141);
x_325 = lean_array_push(x_324, x_149);
x_326 = lean_array_push(x_325, x_151);
x_327 = lean_array_push(x_326, x_161);
x_328 = lean_array_push(x_327, x_163);
x_329 = lean_array_push(x_328, x_222);
x_330 = lean_array_push(x_329, x_224);
x_331 = lean_array_push(x_330, x_321);
x_332 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_332, 0, x_139);
lean_ctor_set(x_332, 1, x_331);
x_333 = lean_unbox(x_112);
lean_dec(x_112);
if (x_333 == 0)
{
lean_dec(x_296);
lean_dec(x_226);
lean_dec(x_209);
lean_dec(x_195);
lean_dec(x_191);
lean_dec(x_187);
lean_dec(x_181);
lean_dec(x_169);
lean_dec(x_3);
lean_dec(x_111);
lean_dec(x_109);
lean_dec(x_1);
lean_ctor_set(x_133, 0, x_332);
return x_133;
}
else
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; uint8_t x_341; 
lean_free_object(x_133);
x_334 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_7, x_8, x_136);
x_335 = lean_ctor_get(x_334, 0);
lean_inc(x_335);
x_336 = lean_ctor_get(x_334, 1);
lean_inc(x_336);
lean_dec(x_334);
x_337 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_336);
lean_dec(x_3);
x_338 = lean_ctor_get(x_337, 0);
lean_inc(x_338);
x_339 = lean_ctor_get(x_337, 1);
lean_inc(x_339);
lean_dec(x_337);
x_340 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_339);
x_341 = !lean_is_exclusive(x_340);
if (x_341 == 0)
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; 
x_342 = lean_ctor_get(x_340, 0);
x_343 = lean_mk_string("let");
lean_inc(x_343);
lean_inc(x_169);
x_344 = lean_name_mk_string(x_169, x_343);
lean_inc(x_335);
x_345 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_345, 0, x_335);
lean_ctor_set(x_345, 1, x_343);
x_346 = lean_mk_string("letDecl");
lean_inc(x_169);
x_347 = lean_name_mk_string(x_169, x_346);
x_348 = lean_mk_string("letIdDecl");
x_349 = lean_name_mk_string(x_169, x_348);
x_350 = lean_mk_string("inst");
x_351 = lean_string_utf8_byte_size(x_350);
lean_inc(x_350);
x_352 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_352, 0, x_350);
lean_ctor_set(x_352, 1, x_144);
lean_ctor_set(x_352, 2, x_351);
x_353 = lean_name_mk_string(x_137, x_350);
x_354 = l_Lean_addMacroScope(x_342, x_353, x_338);
lean_inc(x_335);
x_355 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_355, 0, x_335);
lean_ctor_set(x_355, 1, x_352);
lean_ctor_set(x_355, 2, x_354);
lean_ctor_set(x_355, 3, x_148);
x_356 = lean_mk_string(":=");
lean_inc(x_335);
x_357 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_357, 0, x_335);
lean_ctor_set(x_357, 1, x_356);
x_358 = lean_mk_syntax_ident(x_1);
lean_inc(x_191);
x_359 = lean_array_push(x_191, x_109);
x_360 = lean_array_push(x_359, x_111);
lean_inc(x_181);
x_361 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_361, 0, x_181);
lean_ctor_set(x_361, 1, x_360);
x_362 = lean_array_push(x_191, x_358);
x_363 = lean_array_push(x_362, x_361);
x_364 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_364, 0, x_226);
lean_ctor_set(x_364, 1, x_363);
x_365 = lean_unsigned_to_nat(5u);
x_366 = lean_mk_empty_array_with_capacity(x_365);
x_367 = lean_array_push(x_366, x_355);
lean_inc(x_209);
x_368 = lean_array_push(x_367, x_209);
x_369 = lean_array_push(x_368, x_209);
x_370 = lean_array_push(x_369, x_357);
x_371 = lean_array_push(x_370, x_364);
x_372 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_372, 0, x_349);
lean_ctor_set(x_372, 1, x_371);
lean_inc(x_187);
x_373 = lean_array_push(x_187, x_372);
x_374 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_374, 0, x_347);
lean_ctor_set(x_374, 1, x_373);
x_375 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_375, 0, x_335);
lean_ctor_set(x_375, 1, x_195);
x_376 = lean_array_push(x_187, x_375);
x_377 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_377, 0, x_181);
lean_ctor_set(x_377, 1, x_376);
x_378 = lean_array_push(x_296, x_345);
x_379 = lean_array_push(x_378, x_374);
x_380 = lean_array_push(x_379, x_377);
x_381 = lean_array_push(x_380, x_332);
x_382 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_382, 0, x_344);
lean_ctor_set(x_382, 1, x_381);
lean_ctor_set(x_340, 0, x_382);
return x_340;
}
else
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; 
x_383 = lean_ctor_get(x_340, 0);
x_384 = lean_ctor_get(x_340, 1);
lean_inc(x_384);
lean_inc(x_383);
lean_dec(x_340);
x_385 = lean_mk_string("let");
lean_inc(x_385);
lean_inc(x_169);
x_386 = lean_name_mk_string(x_169, x_385);
lean_inc(x_335);
x_387 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_387, 0, x_335);
lean_ctor_set(x_387, 1, x_385);
x_388 = lean_mk_string("letDecl");
lean_inc(x_169);
x_389 = lean_name_mk_string(x_169, x_388);
x_390 = lean_mk_string("letIdDecl");
x_391 = lean_name_mk_string(x_169, x_390);
x_392 = lean_mk_string("inst");
x_393 = lean_string_utf8_byte_size(x_392);
lean_inc(x_392);
x_394 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_394, 0, x_392);
lean_ctor_set(x_394, 1, x_144);
lean_ctor_set(x_394, 2, x_393);
x_395 = lean_name_mk_string(x_137, x_392);
x_396 = l_Lean_addMacroScope(x_383, x_395, x_338);
lean_inc(x_335);
x_397 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_397, 0, x_335);
lean_ctor_set(x_397, 1, x_394);
lean_ctor_set(x_397, 2, x_396);
lean_ctor_set(x_397, 3, x_148);
x_398 = lean_mk_string(":=");
lean_inc(x_335);
x_399 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_399, 0, x_335);
lean_ctor_set(x_399, 1, x_398);
x_400 = lean_mk_syntax_ident(x_1);
lean_inc(x_191);
x_401 = lean_array_push(x_191, x_109);
x_402 = lean_array_push(x_401, x_111);
lean_inc(x_181);
x_403 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_403, 0, x_181);
lean_ctor_set(x_403, 1, x_402);
x_404 = lean_array_push(x_191, x_400);
x_405 = lean_array_push(x_404, x_403);
x_406 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_406, 0, x_226);
lean_ctor_set(x_406, 1, x_405);
x_407 = lean_unsigned_to_nat(5u);
x_408 = lean_mk_empty_array_with_capacity(x_407);
x_409 = lean_array_push(x_408, x_397);
lean_inc(x_209);
x_410 = lean_array_push(x_409, x_209);
x_411 = lean_array_push(x_410, x_209);
x_412 = lean_array_push(x_411, x_399);
x_413 = lean_array_push(x_412, x_406);
x_414 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_414, 0, x_391);
lean_ctor_set(x_414, 1, x_413);
lean_inc(x_187);
x_415 = lean_array_push(x_187, x_414);
x_416 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_416, 0, x_389);
lean_ctor_set(x_416, 1, x_415);
x_417 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_417, 0, x_335);
lean_ctor_set(x_417, 1, x_195);
x_418 = lean_array_push(x_187, x_417);
x_419 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_419, 0, x_181);
lean_ctor_set(x_419, 1, x_418);
x_420 = lean_array_push(x_296, x_387);
x_421 = lean_array_push(x_420, x_416);
x_422 = lean_array_push(x_421, x_419);
x_423 = lean_array_push(x_422, x_332);
x_424 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_424, 0, x_386);
lean_ctor_set(x_424, 1, x_423);
x_425 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_425, 0, x_424);
lean_ctor_set(x_425, 1, x_384);
return x_425;
}
}
}
else
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; uint8_t x_624; 
x_426 = lean_ctor_get(x_133, 0);
x_427 = lean_ctor_get(x_133, 1);
lean_inc(x_427);
lean_inc(x_426);
lean_dec(x_133);
x_428 = lean_box(0);
x_429 = lean_mk_string("termDepIfThenElse");
x_430 = lean_name_mk_string(x_428, x_429);
x_431 = lean_mk_string("if");
lean_inc(x_128);
x_432 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_432, 0, x_128);
lean_ctor_set(x_432, 1, x_431);
x_433 = lean_mk_string("h");
x_434 = lean_string_utf8_byte_size(x_433);
x_435 = lean_unsigned_to_nat(0u);
lean_inc(x_433);
x_436 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_436, 0, x_433);
lean_ctor_set(x_436, 1, x_435);
lean_ctor_set(x_436, 2, x_434);
x_437 = lean_name_mk_string(x_428, x_433);
lean_inc(x_131);
lean_inc(x_426);
x_438 = l_Lean_addMacroScope(x_426, x_437, x_131);
x_439 = lean_box(0);
lean_inc(x_128);
x_440 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_440, 0, x_128);
lean_ctor_set(x_440, 1, x_436);
lean_ctor_set(x_440, 2, x_438);
lean_ctor_set(x_440, 3, x_439);
x_441 = lean_mk_string(":");
lean_inc(x_128);
x_442 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_442, 0, x_128);
lean_ctor_set(x_442, 1, x_441);
x_443 = lean_mk_string("term_=_");
x_444 = lean_name_mk_string(x_428, x_443);
x_445 = lean_mk_string("=");
lean_inc(x_128);
x_446 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_446, 0, x_128);
lean_ctor_set(x_446, 1, x_445);
x_447 = lean_unsigned_to_nat(3u);
x_448 = lean_mk_empty_array_with_capacity(x_447);
lean_inc(x_109);
lean_inc(x_448);
x_449 = lean_array_push(x_448, x_109);
x_450 = lean_array_push(x_449, x_446);
lean_inc(x_111);
x_451 = lean_array_push(x_450, x_111);
x_452 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_452, 0, x_444);
lean_ctor_set(x_452, 1, x_451);
x_453 = lean_mk_string("then");
lean_inc(x_128);
x_454 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_454, 0, x_128);
lean_ctor_set(x_454, 1, x_453);
x_455 = lean_mk_string("Lean");
x_456 = lean_name_mk_string(x_428, x_455);
x_457 = lean_mk_string("Parser");
x_458 = lean_name_mk_string(x_456, x_457);
x_459 = lean_mk_string("Term");
lean_inc(x_458);
x_460 = lean_name_mk_string(x_458, x_459);
x_461 = lean_mk_string("byTactic");
lean_inc(x_460);
x_462 = lean_name_mk_string(x_460, x_461);
x_463 = lean_mk_string("by");
lean_inc(x_128);
x_464 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_464, 0, x_128);
lean_ctor_set(x_464, 1, x_463);
x_465 = lean_mk_string("Tactic");
x_466 = lean_name_mk_string(x_458, x_465);
x_467 = lean_mk_string("tacticSeq");
lean_inc(x_466);
x_468 = lean_name_mk_string(x_466, x_467);
x_469 = lean_mk_string("tacticSeq1Indented");
lean_inc(x_466);
x_470 = lean_name_mk_string(x_466, x_469);
x_471 = lean_mk_string("null");
x_472 = lean_name_mk_string(x_428, x_471);
x_473 = lean_mk_string("group");
x_474 = lean_name_mk_string(x_428, x_473);
x_475 = lean_mk_string("subst");
lean_inc(x_475);
lean_inc(x_466);
x_476 = lean_name_mk_string(x_466, x_475);
lean_inc(x_128);
x_477 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_477, 0, x_128);
lean_ctor_set(x_477, 1, x_475);
x_478 = lean_mk_empty_array_with_capacity(x_118);
lean_inc(x_440);
lean_inc(x_478);
x_479 = lean_array_push(x_478, x_440);
lean_inc(x_472);
x_480 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_480, 0, x_472);
lean_ctor_set(x_480, 1, x_479);
x_481 = lean_unsigned_to_nat(2u);
x_482 = lean_mk_empty_array_with_capacity(x_481);
lean_inc(x_482);
x_483 = lean_array_push(x_482, x_477);
x_484 = lean_array_push(x_483, x_480);
x_485 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_485, 0, x_476);
lean_ctor_set(x_485, 1, x_484);
x_486 = lean_mk_string(";");
lean_inc(x_486);
lean_inc(x_128);
x_487 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_487, 0, x_128);
lean_ctor_set(x_487, 1, x_486);
lean_inc(x_478);
x_488 = lean_array_push(x_478, x_487);
lean_inc(x_472);
x_489 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_489, 0, x_472);
lean_ctor_set(x_489, 1, x_488);
lean_inc(x_482);
x_490 = lean_array_push(x_482, x_485);
lean_inc(x_489);
x_491 = lean_array_push(x_490, x_489);
lean_inc(x_474);
x_492 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_492, 0, x_474);
lean_ctor_set(x_492, 1, x_491);
x_493 = lean_mk_string("exact");
lean_inc(x_493);
lean_inc(x_466);
x_494 = lean_name_mk_string(x_466, x_493);
lean_inc(x_128);
x_495 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_495, 0, x_128);
lean_ctor_set(x_495, 1, x_493);
lean_inc(x_482);
x_496 = lean_array_push(x_482, x_495);
x_497 = lean_array_push(x_496, x_125);
x_498 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_498, 0, x_494);
lean_ctor_set(x_498, 1, x_497);
x_499 = lean_mk_empty_array_with_capacity(x_435);
lean_inc(x_472);
x_500 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_500, 0, x_472);
lean_ctor_set(x_500, 1, x_499);
lean_inc(x_482);
x_501 = lean_array_push(x_482, x_498);
lean_inc(x_500);
x_502 = lean_array_push(x_501, x_500);
lean_inc(x_474);
x_503 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_503, 0, x_474);
lean_ctor_set(x_503, 1, x_502);
lean_inc(x_482);
x_504 = lean_array_push(x_482, x_492);
x_505 = lean_array_push(x_504, x_503);
lean_inc(x_472);
x_506 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_506, 0, x_472);
lean_ctor_set(x_506, 1, x_505);
lean_inc(x_478);
x_507 = lean_array_push(x_478, x_506);
lean_inc(x_470);
x_508 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_508, 0, x_470);
lean_ctor_set(x_508, 1, x_507);
lean_inc(x_478);
x_509 = lean_array_push(x_478, x_508);
lean_inc(x_468);
x_510 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_510, 0, x_468);
lean_ctor_set(x_510, 1, x_509);
lean_inc(x_482);
x_511 = lean_array_push(x_482, x_464);
lean_inc(x_511);
x_512 = lean_array_push(x_511, x_510);
lean_inc(x_462);
x_513 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_513, 0, x_462);
lean_ctor_set(x_513, 1, x_512);
x_514 = lean_mk_string("else");
lean_inc(x_128);
x_515 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_515, 0, x_128);
lean_ctor_set(x_515, 1, x_514);
x_516 = lean_mk_string("app");
lean_inc(x_460);
x_517 = lean_name_mk_string(x_460, x_516);
x_518 = lean_mk_string("isFalse");
x_519 = lean_string_utf8_byte_size(x_518);
lean_inc(x_518);
x_520 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_520, 0, x_518);
lean_ctor_set(x_520, 1, x_435);
lean_ctor_set(x_520, 2, x_519);
lean_inc(x_518);
x_521 = lean_name_mk_string(x_428, x_518);
lean_inc(x_131);
lean_inc(x_426);
x_522 = l_Lean_addMacroScope(x_426, x_521, x_131);
x_523 = lean_mk_string("Decidable");
x_524 = lean_name_mk_string(x_428, x_523);
x_525 = lean_name_mk_string(x_524, x_518);
lean_ctor_set(x_105, 1, x_439);
lean_ctor_set(x_105, 0, x_525);
lean_ctor_set(x_2, 1, x_439);
lean_ctor_set(x_2, 0, x_105);
lean_inc(x_128);
x_526 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_526, 0, x_128);
lean_ctor_set(x_526, 1, x_520);
lean_ctor_set(x_526, 2, x_522);
lean_ctor_set(x_526, 3, x_2);
x_527 = lean_mk_string("paren");
lean_inc(x_460);
x_528 = lean_name_mk_string(x_460, x_527);
x_529 = lean_mk_string("(");
lean_inc(x_128);
x_530 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_530, 0, x_128);
lean_ctor_set(x_530, 1, x_529);
x_531 = lean_mk_string("intro");
lean_inc(x_531);
lean_inc(x_466);
x_532 = lean_name_mk_string(x_466, x_531);
lean_inc(x_128);
x_533 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_533, 0, x_128);
lean_ctor_set(x_533, 1, x_531);
x_534 = lean_mk_string("n");
x_535 = lean_string_utf8_byte_size(x_534);
lean_inc(x_534);
x_536 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_536, 0, x_534);
lean_ctor_set(x_536, 1, x_435);
lean_ctor_set(x_536, 2, x_535);
x_537 = lean_name_mk_string(x_428, x_534);
x_538 = l_Lean_addMacroScope(x_426, x_537, x_131);
lean_inc(x_128);
x_539 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_539, 0, x_128);
lean_ctor_set(x_539, 1, x_536);
lean_ctor_set(x_539, 2, x_538);
lean_ctor_set(x_539, 3, x_439);
lean_inc(x_539);
lean_inc(x_478);
x_540 = lean_array_push(x_478, x_539);
lean_inc(x_472);
x_541 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_541, 0, x_472);
lean_ctor_set(x_541, 1, x_540);
lean_inc(x_482);
x_542 = lean_array_push(x_482, x_533);
x_543 = lean_array_push(x_542, x_541);
x_544 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_544, 0, x_532);
lean_ctor_set(x_544, 1, x_543);
lean_inc(x_482);
x_545 = lean_array_push(x_482, x_544);
lean_inc(x_489);
x_546 = lean_array_push(x_545, x_489);
lean_inc(x_474);
x_547 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_547, 0, x_474);
lean_ctor_set(x_547, 1, x_546);
x_548 = lean_mk_string("injection");
lean_inc(x_548);
lean_inc(x_466);
x_549 = lean_name_mk_string(x_466, x_548);
lean_inc(x_128);
x_550 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_550, 0, x_128);
lean_ctor_set(x_550, 1, x_548);
lean_inc(x_448);
x_551 = lean_array_push(x_448, x_550);
x_552 = lean_array_push(x_551, x_539);
lean_inc(x_500);
x_553 = lean_array_push(x_552, x_500);
x_554 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_554, 0, x_549);
lean_ctor_set(x_554, 1, x_553);
lean_inc(x_482);
x_555 = lean_array_push(x_482, x_554);
lean_inc(x_489);
x_556 = lean_array_push(x_555, x_489);
lean_inc(x_474);
x_557 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_557, 0, x_474);
lean_ctor_set(x_557, 1, x_556);
x_558 = lean_mk_string("apply");
lean_inc(x_558);
lean_inc(x_466);
x_559 = lean_name_mk_string(x_466, x_558);
lean_inc(x_128);
x_560 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_560, 0, x_128);
lean_ctor_set(x_560, 1, x_558);
x_561 = lean_mk_string("hole");
lean_inc(x_460);
x_562 = lean_name_mk_string(x_460, x_561);
x_563 = lean_mk_string("_");
lean_inc(x_128);
x_564 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_564, 0, x_128);
lean_ctor_set(x_564, 1, x_563);
lean_inc(x_478);
x_565 = lean_array_push(x_478, x_564);
x_566 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_566, 0, x_562);
lean_ctor_set(x_566, 1, x_565);
lean_inc(x_478);
x_567 = lean_array_push(x_478, x_566);
lean_inc(x_472);
x_568 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_568, 0, x_472);
lean_ctor_set(x_568, 1, x_567);
lean_inc(x_440);
lean_inc(x_482);
x_569 = lean_array_push(x_482, x_440);
x_570 = lean_array_push(x_569, x_568);
lean_inc(x_517);
x_571 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_571, 0, x_517);
lean_ctor_set(x_571, 1, x_570);
lean_inc(x_482);
x_572 = lean_array_push(x_482, x_560);
x_573 = lean_array_push(x_572, x_571);
x_574 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_574, 0, x_559);
lean_ctor_set(x_574, 1, x_573);
lean_inc(x_482);
x_575 = lean_array_push(x_482, x_574);
x_576 = lean_array_push(x_575, x_489);
lean_inc(x_474);
x_577 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_577, 0, x_474);
lean_ctor_set(x_577, 1, x_576);
x_578 = lean_mk_string("assumption");
lean_inc(x_578);
x_579 = lean_name_mk_string(x_466, x_578);
lean_inc(x_128);
x_580 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_580, 0, x_128);
lean_ctor_set(x_580, 1, x_578);
lean_inc(x_478);
x_581 = lean_array_push(x_478, x_580);
x_582 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_582, 0, x_579);
lean_ctor_set(x_582, 1, x_581);
lean_inc(x_482);
x_583 = lean_array_push(x_482, x_582);
lean_inc(x_500);
x_584 = lean_array_push(x_583, x_500);
x_585 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_585, 0, x_474);
lean_ctor_set(x_585, 1, x_584);
x_586 = lean_unsigned_to_nat(4u);
x_587 = lean_mk_empty_array_with_capacity(x_586);
lean_inc(x_587);
x_588 = lean_array_push(x_587, x_547);
x_589 = lean_array_push(x_588, x_557);
x_590 = lean_array_push(x_589, x_577);
x_591 = lean_array_push(x_590, x_585);
lean_inc(x_472);
x_592 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_592, 0, x_472);
lean_ctor_set(x_592, 1, x_591);
lean_inc(x_478);
x_593 = lean_array_push(x_478, x_592);
x_594 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_594, 0, x_470);
lean_ctor_set(x_594, 1, x_593);
lean_inc(x_478);
x_595 = lean_array_push(x_478, x_594);
x_596 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_596, 0, x_468);
lean_ctor_set(x_596, 1, x_595);
x_597 = lean_array_push(x_511, x_596);
x_598 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_598, 0, x_462);
lean_ctor_set(x_598, 1, x_597);
lean_inc(x_482);
x_599 = lean_array_push(x_482, x_598);
lean_inc(x_500);
x_600 = lean_array_push(x_599, x_500);
lean_inc(x_472);
x_601 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_601, 0, x_472);
lean_ctor_set(x_601, 1, x_600);
x_602 = lean_mk_string(")");
x_603 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_603, 0, x_128);
lean_ctor_set(x_603, 1, x_602);
x_604 = lean_array_push(x_448, x_530);
x_605 = lean_array_push(x_604, x_601);
x_606 = lean_array_push(x_605, x_603);
x_607 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_607, 0, x_528);
lean_ctor_set(x_607, 1, x_606);
lean_inc(x_478);
x_608 = lean_array_push(x_478, x_607);
lean_inc(x_472);
x_609 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_609, 0, x_472);
lean_ctor_set(x_609, 1, x_608);
lean_inc(x_482);
x_610 = lean_array_push(x_482, x_526);
x_611 = lean_array_push(x_610, x_609);
lean_inc(x_517);
x_612 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_612, 0, x_517);
lean_ctor_set(x_612, 1, x_611);
x_613 = lean_unsigned_to_nat(8u);
x_614 = lean_mk_empty_array_with_capacity(x_613);
x_615 = lean_array_push(x_614, x_432);
x_616 = lean_array_push(x_615, x_440);
x_617 = lean_array_push(x_616, x_442);
x_618 = lean_array_push(x_617, x_452);
x_619 = lean_array_push(x_618, x_454);
x_620 = lean_array_push(x_619, x_513);
x_621 = lean_array_push(x_620, x_515);
x_622 = lean_array_push(x_621, x_612);
x_623 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_623, 0, x_430);
lean_ctor_set(x_623, 1, x_622);
x_624 = lean_unbox(x_112);
lean_dec(x_112);
if (x_624 == 0)
{
lean_object* x_625; 
lean_dec(x_587);
lean_dec(x_517);
lean_dec(x_500);
lean_dec(x_486);
lean_dec(x_482);
lean_dec(x_478);
lean_dec(x_472);
lean_dec(x_460);
lean_dec(x_3);
lean_dec(x_111);
lean_dec(x_109);
lean_dec(x_1);
x_625 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_625, 0, x_623);
lean_ctor_set(x_625, 1, x_427);
return x_625;
}
else
{
lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; 
x_626 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_7, x_8, x_427);
x_627 = lean_ctor_get(x_626, 0);
lean_inc(x_627);
x_628 = lean_ctor_get(x_626, 1);
lean_inc(x_628);
lean_dec(x_626);
x_629 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_628);
lean_dec(x_3);
x_630 = lean_ctor_get(x_629, 0);
lean_inc(x_630);
x_631 = lean_ctor_get(x_629, 1);
lean_inc(x_631);
lean_dec(x_629);
x_632 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_631);
x_633 = lean_ctor_get(x_632, 0);
lean_inc(x_633);
x_634 = lean_ctor_get(x_632, 1);
lean_inc(x_634);
if (lean_is_exclusive(x_632)) {
 lean_ctor_release(x_632, 0);
 lean_ctor_release(x_632, 1);
 x_635 = x_632;
} else {
 lean_dec_ref(x_632);
 x_635 = lean_box(0);
}
x_636 = lean_mk_string("let");
lean_inc(x_636);
lean_inc(x_460);
x_637 = lean_name_mk_string(x_460, x_636);
lean_inc(x_627);
x_638 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_638, 0, x_627);
lean_ctor_set(x_638, 1, x_636);
x_639 = lean_mk_string("letDecl");
lean_inc(x_460);
x_640 = lean_name_mk_string(x_460, x_639);
x_641 = lean_mk_string("letIdDecl");
x_642 = lean_name_mk_string(x_460, x_641);
x_643 = lean_mk_string("inst");
x_644 = lean_string_utf8_byte_size(x_643);
lean_inc(x_643);
x_645 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_645, 0, x_643);
lean_ctor_set(x_645, 1, x_435);
lean_ctor_set(x_645, 2, x_644);
x_646 = lean_name_mk_string(x_428, x_643);
x_647 = l_Lean_addMacroScope(x_633, x_646, x_630);
lean_inc(x_627);
x_648 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_648, 0, x_627);
lean_ctor_set(x_648, 1, x_645);
lean_ctor_set(x_648, 2, x_647);
lean_ctor_set(x_648, 3, x_439);
x_649 = lean_mk_string(":=");
lean_inc(x_627);
x_650 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_650, 0, x_627);
lean_ctor_set(x_650, 1, x_649);
x_651 = lean_mk_syntax_ident(x_1);
lean_inc(x_482);
x_652 = lean_array_push(x_482, x_109);
x_653 = lean_array_push(x_652, x_111);
lean_inc(x_472);
x_654 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_654, 0, x_472);
lean_ctor_set(x_654, 1, x_653);
x_655 = lean_array_push(x_482, x_651);
x_656 = lean_array_push(x_655, x_654);
x_657 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_657, 0, x_517);
lean_ctor_set(x_657, 1, x_656);
x_658 = lean_unsigned_to_nat(5u);
x_659 = lean_mk_empty_array_with_capacity(x_658);
x_660 = lean_array_push(x_659, x_648);
lean_inc(x_500);
x_661 = lean_array_push(x_660, x_500);
x_662 = lean_array_push(x_661, x_500);
x_663 = lean_array_push(x_662, x_650);
x_664 = lean_array_push(x_663, x_657);
x_665 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_665, 0, x_642);
lean_ctor_set(x_665, 1, x_664);
lean_inc(x_478);
x_666 = lean_array_push(x_478, x_665);
x_667 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_667, 0, x_640);
lean_ctor_set(x_667, 1, x_666);
x_668 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_668, 0, x_627);
lean_ctor_set(x_668, 1, x_486);
x_669 = lean_array_push(x_478, x_668);
x_670 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_670, 0, x_472);
lean_ctor_set(x_670, 1, x_669);
x_671 = lean_array_push(x_587, x_638);
x_672 = lean_array_push(x_671, x_667);
x_673 = lean_array_push(x_672, x_670);
x_674 = lean_array_push(x_673, x_623);
x_675 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_675, 0, x_637);
lean_ctor_set(x_675, 1, x_674);
if (lean_is_scalar(x_635)) {
 x_676 = lean_alloc_ctor(0, 2, 0);
} else {
 x_676 = x_635;
}
lean_ctor_set(x_676, 0, x_675);
lean_ctor_set(x_676, 1, x_634);
return x_676;
}
}
}
else
{
lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; uint8_t x_681; uint8_t x_682; uint8_t x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; uint8_t x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_705; lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; lean_object* x_712; lean_object* x_713; lean_object* x_714; lean_object* x_715; lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; lean_object* x_753; lean_object* x_754; lean_object* x_755; lean_object* x_756; lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; lean_object* x_762; lean_object* x_763; lean_object* x_764; lean_object* x_765; lean_object* x_766; lean_object* x_767; lean_object* x_768; lean_object* x_769; lean_object* x_770; lean_object* x_771; lean_object* x_772; lean_object* x_773; lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; lean_object* x_783; lean_object* x_784; lean_object* x_785; lean_object* x_786; lean_object* x_787; lean_object* x_788; lean_object* x_789; lean_object* x_790; lean_object* x_791; lean_object* x_792; lean_object* x_793; lean_object* x_794; lean_object* x_795; lean_object* x_796; lean_object* x_797; lean_object* x_798; lean_object* x_799; lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; lean_object* x_804; lean_object* x_805; lean_object* x_806; lean_object* x_807; lean_object* x_808; lean_object* x_809; lean_object* x_810; lean_object* x_811; lean_object* x_812; lean_object* x_813; lean_object* x_814; lean_object* x_815; lean_object* x_816; lean_object* x_817; lean_object* x_818; lean_object* x_819; lean_object* x_820; lean_object* x_821; lean_object* x_822; lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_826; lean_object* x_827; lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; lean_object* x_832; lean_object* x_833; lean_object* x_834; lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; lean_object* x_841; lean_object* x_842; lean_object* x_843; lean_object* x_844; lean_object* x_845; lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; lean_object* x_850; lean_object* x_851; lean_object* x_852; lean_object* x_853; lean_object* x_854; lean_object* x_855; lean_object* x_856; lean_object* x_857; lean_object* x_858; lean_object* x_859; lean_object* x_860; lean_object* x_861; lean_object* x_862; lean_object* x_863; lean_object* x_864; lean_object* x_865; lean_object* x_866; lean_object* x_867; lean_object* x_868; lean_object* x_869; lean_object* x_870; lean_object* x_871; lean_object* x_872; lean_object* x_873; lean_object* x_874; lean_object* x_875; lean_object* x_876; lean_object* x_877; lean_object* x_878; lean_object* x_879; lean_object* x_880; lean_object* x_881; lean_object* x_882; lean_object* x_883; lean_object* x_884; lean_object* x_885; lean_object* x_886; lean_object* x_887; lean_object* x_888; lean_object* x_889; lean_object* x_890; lean_object* x_891; lean_object* x_892; lean_object* x_893; lean_object* x_894; lean_object* x_895; lean_object* x_896; lean_object* x_897; uint8_t x_898; 
x_677 = lean_ctor_get(x_3, 0);
x_678 = lean_ctor_get(x_3, 1);
x_679 = lean_ctor_get(x_3, 2);
x_680 = lean_ctor_get(x_3, 3);
x_681 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_682 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
x_683 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 2);
x_684 = lean_ctor_get(x_3, 5);
x_685 = lean_ctor_get(x_3, 6);
x_686 = lean_ctor_get(x_3, 7);
x_687 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 3);
lean_inc(x_686);
lean_inc(x_685);
lean_inc(x_684);
lean_inc(x_680);
lean_inc(x_679);
lean_inc(x_678);
lean_inc(x_677);
lean_dec(x_3);
x_688 = lean_alloc_ctor(0, 8, 4);
lean_ctor_set(x_688, 0, x_677);
lean_ctor_set(x_688, 1, x_678);
lean_ctor_set(x_688, 2, x_679);
lean_ctor_set(x_688, 3, x_680);
lean_ctor_set(x_688, 4, x_117);
lean_ctor_set(x_688, 5, x_684);
lean_ctor_set(x_688, 6, x_685);
lean_ctor_set(x_688, 7, x_686);
lean_ctor_set_uint8(x_688, sizeof(void*)*8, x_681);
lean_ctor_set_uint8(x_688, sizeof(void*)*8 + 1, x_682);
lean_ctor_set_uint8(x_688, sizeof(void*)*8 + 2, x_683);
lean_ctor_set_uint8(x_688, sizeof(void*)*8 + 3, x_687);
lean_inc(x_688);
lean_inc(x_1);
x_689 = l_Lean_Elab_Deriving_DecEq_mkMatch_mkSameCtorRhs(x_1, x_107, x_688, x_4, x_5, x_6, x_7, x_8, x_121);
x_690 = lean_ctor_get(x_689, 0);
lean_inc(x_690);
x_691 = lean_ctor_get(x_689, 1);
lean_inc(x_691);
lean_dec(x_689);
x_692 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_7, x_8, x_691);
x_693 = lean_ctor_get(x_692, 0);
lean_inc(x_693);
x_694 = lean_ctor_get(x_692, 1);
lean_inc(x_694);
lean_dec(x_692);
x_695 = l_Lean_Elab_Term_getCurrMacroScope(x_688, x_4, x_5, x_6, x_7, x_8, x_694);
x_696 = lean_ctor_get(x_695, 0);
lean_inc(x_696);
x_697 = lean_ctor_get(x_695, 1);
lean_inc(x_697);
lean_dec(x_695);
x_698 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_697);
x_699 = lean_ctor_get(x_698, 0);
lean_inc(x_699);
x_700 = lean_ctor_get(x_698, 1);
lean_inc(x_700);
if (lean_is_exclusive(x_698)) {
 lean_ctor_release(x_698, 0);
 lean_ctor_release(x_698, 1);
 x_701 = x_698;
} else {
 lean_dec_ref(x_698);
 x_701 = lean_box(0);
}
x_702 = lean_box(0);
x_703 = lean_mk_string("termDepIfThenElse");
x_704 = lean_name_mk_string(x_702, x_703);
x_705 = lean_mk_string("if");
lean_inc(x_693);
x_706 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_706, 0, x_693);
lean_ctor_set(x_706, 1, x_705);
x_707 = lean_mk_string("h");
x_708 = lean_string_utf8_byte_size(x_707);
x_709 = lean_unsigned_to_nat(0u);
lean_inc(x_707);
x_710 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_710, 0, x_707);
lean_ctor_set(x_710, 1, x_709);
lean_ctor_set(x_710, 2, x_708);
x_711 = lean_name_mk_string(x_702, x_707);
lean_inc(x_696);
lean_inc(x_699);
x_712 = l_Lean_addMacroScope(x_699, x_711, x_696);
x_713 = lean_box(0);
lean_inc(x_693);
x_714 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_714, 0, x_693);
lean_ctor_set(x_714, 1, x_710);
lean_ctor_set(x_714, 2, x_712);
lean_ctor_set(x_714, 3, x_713);
x_715 = lean_mk_string(":");
lean_inc(x_693);
x_716 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_716, 0, x_693);
lean_ctor_set(x_716, 1, x_715);
x_717 = lean_mk_string("term_=_");
x_718 = lean_name_mk_string(x_702, x_717);
x_719 = lean_mk_string("=");
lean_inc(x_693);
x_720 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_720, 0, x_693);
lean_ctor_set(x_720, 1, x_719);
x_721 = lean_unsigned_to_nat(3u);
x_722 = lean_mk_empty_array_with_capacity(x_721);
lean_inc(x_109);
lean_inc(x_722);
x_723 = lean_array_push(x_722, x_109);
x_724 = lean_array_push(x_723, x_720);
lean_inc(x_111);
x_725 = lean_array_push(x_724, x_111);
x_726 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_726, 0, x_718);
lean_ctor_set(x_726, 1, x_725);
x_727 = lean_mk_string("then");
lean_inc(x_693);
x_728 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_728, 0, x_693);
lean_ctor_set(x_728, 1, x_727);
x_729 = lean_mk_string("Lean");
x_730 = lean_name_mk_string(x_702, x_729);
x_731 = lean_mk_string("Parser");
x_732 = lean_name_mk_string(x_730, x_731);
x_733 = lean_mk_string("Term");
lean_inc(x_732);
x_734 = lean_name_mk_string(x_732, x_733);
x_735 = lean_mk_string("byTactic");
lean_inc(x_734);
x_736 = lean_name_mk_string(x_734, x_735);
x_737 = lean_mk_string("by");
lean_inc(x_693);
x_738 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_738, 0, x_693);
lean_ctor_set(x_738, 1, x_737);
x_739 = lean_mk_string("Tactic");
x_740 = lean_name_mk_string(x_732, x_739);
x_741 = lean_mk_string("tacticSeq");
lean_inc(x_740);
x_742 = lean_name_mk_string(x_740, x_741);
x_743 = lean_mk_string("tacticSeq1Indented");
lean_inc(x_740);
x_744 = lean_name_mk_string(x_740, x_743);
x_745 = lean_mk_string("null");
x_746 = lean_name_mk_string(x_702, x_745);
x_747 = lean_mk_string("group");
x_748 = lean_name_mk_string(x_702, x_747);
x_749 = lean_mk_string("subst");
lean_inc(x_749);
lean_inc(x_740);
x_750 = lean_name_mk_string(x_740, x_749);
lean_inc(x_693);
x_751 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_751, 0, x_693);
lean_ctor_set(x_751, 1, x_749);
x_752 = lean_mk_empty_array_with_capacity(x_118);
lean_inc(x_714);
lean_inc(x_752);
x_753 = lean_array_push(x_752, x_714);
lean_inc(x_746);
x_754 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_754, 0, x_746);
lean_ctor_set(x_754, 1, x_753);
x_755 = lean_unsigned_to_nat(2u);
x_756 = lean_mk_empty_array_with_capacity(x_755);
lean_inc(x_756);
x_757 = lean_array_push(x_756, x_751);
x_758 = lean_array_push(x_757, x_754);
x_759 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_759, 0, x_750);
lean_ctor_set(x_759, 1, x_758);
x_760 = lean_mk_string(";");
lean_inc(x_760);
lean_inc(x_693);
x_761 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_761, 0, x_693);
lean_ctor_set(x_761, 1, x_760);
lean_inc(x_752);
x_762 = lean_array_push(x_752, x_761);
lean_inc(x_746);
x_763 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_763, 0, x_746);
lean_ctor_set(x_763, 1, x_762);
lean_inc(x_756);
x_764 = lean_array_push(x_756, x_759);
lean_inc(x_763);
x_765 = lean_array_push(x_764, x_763);
lean_inc(x_748);
x_766 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_766, 0, x_748);
lean_ctor_set(x_766, 1, x_765);
x_767 = lean_mk_string("exact");
lean_inc(x_767);
lean_inc(x_740);
x_768 = lean_name_mk_string(x_740, x_767);
lean_inc(x_693);
x_769 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_769, 0, x_693);
lean_ctor_set(x_769, 1, x_767);
lean_inc(x_756);
x_770 = lean_array_push(x_756, x_769);
x_771 = lean_array_push(x_770, x_690);
x_772 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_772, 0, x_768);
lean_ctor_set(x_772, 1, x_771);
x_773 = lean_mk_empty_array_with_capacity(x_709);
lean_inc(x_746);
x_774 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_774, 0, x_746);
lean_ctor_set(x_774, 1, x_773);
lean_inc(x_756);
x_775 = lean_array_push(x_756, x_772);
lean_inc(x_774);
x_776 = lean_array_push(x_775, x_774);
lean_inc(x_748);
x_777 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_777, 0, x_748);
lean_ctor_set(x_777, 1, x_776);
lean_inc(x_756);
x_778 = lean_array_push(x_756, x_766);
x_779 = lean_array_push(x_778, x_777);
lean_inc(x_746);
x_780 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_780, 0, x_746);
lean_ctor_set(x_780, 1, x_779);
lean_inc(x_752);
x_781 = lean_array_push(x_752, x_780);
lean_inc(x_744);
x_782 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_782, 0, x_744);
lean_ctor_set(x_782, 1, x_781);
lean_inc(x_752);
x_783 = lean_array_push(x_752, x_782);
lean_inc(x_742);
x_784 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_784, 0, x_742);
lean_ctor_set(x_784, 1, x_783);
lean_inc(x_756);
x_785 = lean_array_push(x_756, x_738);
lean_inc(x_785);
x_786 = lean_array_push(x_785, x_784);
lean_inc(x_736);
x_787 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_787, 0, x_736);
lean_ctor_set(x_787, 1, x_786);
x_788 = lean_mk_string("else");
lean_inc(x_693);
x_789 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_789, 0, x_693);
lean_ctor_set(x_789, 1, x_788);
x_790 = lean_mk_string("app");
lean_inc(x_734);
x_791 = lean_name_mk_string(x_734, x_790);
x_792 = lean_mk_string("isFalse");
x_793 = lean_string_utf8_byte_size(x_792);
lean_inc(x_792);
x_794 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_794, 0, x_792);
lean_ctor_set(x_794, 1, x_709);
lean_ctor_set(x_794, 2, x_793);
lean_inc(x_792);
x_795 = lean_name_mk_string(x_702, x_792);
lean_inc(x_696);
lean_inc(x_699);
x_796 = l_Lean_addMacroScope(x_699, x_795, x_696);
x_797 = lean_mk_string("Decidable");
x_798 = lean_name_mk_string(x_702, x_797);
x_799 = lean_name_mk_string(x_798, x_792);
lean_ctor_set(x_105, 1, x_713);
lean_ctor_set(x_105, 0, x_799);
lean_ctor_set(x_2, 1, x_713);
lean_ctor_set(x_2, 0, x_105);
lean_inc(x_693);
x_800 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_800, 0, x_693);
lean_ctor_set(x_800, 1, x_794);
lean_ctor_set(x_800, 2, x_796);
lean_ctor_set(x_800, 3, x_2);
x_801 = lean_mk_string("paren");
lean_inc(x_734);
x_802 = lean_name_mk_string(x_734, x_801);
x_803 = lean_mk_string("(");
lean_inc(x_693);
x_804 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_804, 0, x_693);
lean_ctor_set(x_804, 1, x_803);
x_805 = lean_mk_string("intro");
lean_inc(x_805);
lean_inc(x_740);
x_806 = lean_name_mk_string(x_740, x_805);
lean_inc(x_693);
x_807 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_807, 0, x_693);
lean_ctor_set(x_807, 1, x_805);
x_808 = lean_mk_string("n");
x_809 = lean_string_utf8_byte_size(x_808);
lean_inc(x_808);
x_810 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_810, 0, x_808);
lean_ctor_set(x_810, 1, x_709);
lean_ctor_set(x_810, 2, x_809);
x_811 = lean_name_mk_string(x_702, x_808);
x_812 = l_Lean_addMacroScope(x_699, x_811, x_696);
lean_inc(x_693);
x_813 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_813, 0, x_693);
lean_ctor_set(x_813, 1, x_810);
lean_ctor_set(x_813, 2, x_812);
lean_ctor_set(x_813, 3, x_713);
lean_inc(x_813);
lean_inc(x_752);
x_814 = lean_array_push(x_752, x_813);
lean_inc(x_746);
x_815 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_815, 0, x_746);
lean_ctor_set(x_815, 1, x_814);
lean_inc(x_756);
x_816 = lean_array_push(x_756, x_807);
x_817 = lean_array_push(x_816, x_815);
x_818 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_818, 0, x_806);
lean_ctor_set(x_818, 1, x_817);
lean_inc(x_756);
x_819 = lean_array_push(x_756, x_818);
lean_inc(x_763);
x_820 = lean_array_push(x_819, x_763);
lean_inc(x_748);
x_821 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_821, 0, x_748);
lean_ctor_set(x_821, 1, x_820);
x_822 = lean_mk_string("injection");
lean_inc(x_822);
lean_inc(x_740);
x_823 = lean_name_mk_string(x_740, x_822);
lean_inc(x_693);
x_824 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_824, 0, x_693);
lean_ctor_set(x_824, 1, x_822);
lean_inc(x_722);
x_825 = lean_array_push(x_722, x_824);
x_826 = lean_array_push(x_825, x_813);
lean_inc(x_774);
x_827 = lean_array_push(x_826, x_774);
x_828 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_828, 0, x_823);
lean_ctor_set(x_828, 1, x_827);
lean_inc(x_756);
x_829 = lean_array_push(x_756, x_828);
lean_inc(x_763);
x_830 = lean_array_push(x_829, x_763);
lean_inc(x_748);
x_831 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_831, 0, x_748);
lean_ctor_set(x_831, 1, x_830);
x_832 = lean_mk_string("apply");
lean_inc(x_832);
lean_inc(x_740);
x_833 = lean_name_mk_string(x_740, x_832);
lean_inc(x_693);
x_834 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_834, 0, x_693);
lean_ctor_set(x_834, 1, x_832);
x_835 = lean_mk_string("hole");
lean_inc(x_734);
x_836 = lean_name_mk_string(x_734, x_835);
x_837 = lean_mk_string("_");
lean_inc(x_693);
x_838 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_838, 0, x_693);
lean_ctor_set(x_838, 1, x_837);
lean_inc(x_752);
x_839 = lean_array_push(x_752, x_838);
x_840 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_840, 0, x_836);
lean_ctor_set(x_840, 1, x_839);
lean_inc(x_752);
x_841 = lean_array_push(x_752, x_840);
lean_inc(x_746);
x_842 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_842, 0, x_746);
lean_ctor_set(x_842, 1, x_841);
lean_inc(x_714);
lean_inc(x_756);
x_843 = lean_array_push(x_756, x_714);
x_844 = lean_array_push(x_843, x_842);
lean_inc(x_791);
x_845 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_845, 0, x_791);
lean_ctor_set(x_845, 1, x_844);
lean_inc(x_756);
x_846 = lean_array_push(x_756, x_834);
x_847 = lean_array_push(x_846, x_845);
x_848 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_848, 0, x_833);
lean_ctor_set(x_848, 1, x_847);
lean_inc(x_756);
x_849 = lean_array_push(x_756, x_848);
x_850 = lean_array_push(x_849, x_763);
lean_inc(x_748);
x_851 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_851, 0, x_748);
lean_ctor_set(x_851, 1, x_850);
x_852 = lean_mk_string("assumption");
lean_inc(x_852);
x_853 = lean_name_mk_string(x_740, x_852);
lean_inc(x_693);
x_854 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_854, 0, x_693);
lean_ctor_set(x_854, 1, x_852);
lean_inc(x_752);
x_855 = lean_array_push(x_752, x_854);
x_856 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_856, 0, x_853);
lean_ctor_set(x_856, 1, x_855);
lean_inc(x_756);
x_857 = lean_array_push(x_756, x_856);
lean_inc(x_774);
x_858 = lean_array_push(x_857, x_774);
x_859 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_859, 0, x_748);
lean_ctor_set(x_859, 1, x_858);
x_860 = lean_unsigned_to_nat(4u);
x_861 = lean_mk_empty_array_with_capacity(x_860);
lean_inc(x_861);
x_862 = lean_array_push(x_861, x_821);
x_863 = lean_array_push(x_862, x_831);
x_864 = lean_array_push(x_863, x_851);
x_865 = lean_array_push(x_864, x_859);
lean_inc(x_746);
x_866 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_866, 0, x_746);
lean_ctor_set(x_866, 1, x_865);
lean_inc(x_752);
x_867 = lean_array_push(x_752, x_866);
x_868 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_868, 0, x_744);
lean_ctor_set(x_868, 1, x_867);
lean_inc(x_752);
x_869 = lean_array_push(x_752, x_868);
x_870 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_870, 0, x_742);
lean_ctor_set(x_870, 1, x_869);
x_871 = lean_array_push(x_785, x_870);
x_872 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_872, 0, x_736);
lean_ctor_set(x_872, 1, x_871);
lean_inc(x_756);
x_873 = lean_array_push(x_756, x_872);
lean_inc(x_774);
x_874 = lean_array_push(x_873, x_774);
lean_inc(x_746);
x_875 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_875, 0, x_746);
lean_ctor_set(x_875, 1, x_874);
x_876 = lean_mk_string(")");
x_877 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_877, 0, x_693);
lean_ctor_set(x_877, 1, x_876);
x_878 = lean_array_push(x_722, x_804);
x_879 = lean_array_push(x_878, x_875);
x_880 = lean_array_push(x_879, x_877);
x_881 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_881, 0, x_802);
lean_ctor_set(x_881, 1, x_880);
lean_inc(x_752);
x_882 = lean_array_push(x_752, x_881);
lean_inc(x_746);
x_883 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_883, 0, x_746);
lean_ctor_set(x_883, 1, x_882);
lean_inc(x_756);
x_884 = lean_array_push(x_756, x_800);
x_885 = lean_array_push(x_884, x_883);
lean_inc(x_791);
x_886 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_886, 0, x_791);
lean_ctor_set(x_886, 1, x_885);
x_887 = lean_unsigned_to_nat(8u);
x_888 = lean_mk_empty_array_with_capacity(x_887);
x_889 = lean_array_push(x_888, x_706);
x_890 = lean_array_push(x_889, x_714);
x_891 = lean_array_push(x_890, x_716);
x_892 = lean_array_push(x_891, x_726);
x_893 = lean_array_push(x_892, x_728);
x_894 = lean_array_push(x_893, x_787);
x_895 = lean_array_push(x_894, x_789);
x_896 = lean_array_push(x_895, x_886);
x_897 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_897, 0, x_704);
lean_ctor_set(x_897, 1, x_896);
x_898 = lean_unbox(x_112);
lean_dec(x_112);
if (x_898 == 0)
{
lean_object* x_899; 
lean_dec(x_861);
lean_dec(x_791);
lean_dec(x_774);
lean_dec(x_760);
lean_dec(x_756);
lean_dec(x_752);
lean_dec(x_746);
lean_dec(x_734);
lean_dec(x_688);
lean_dec(x_111);
lean_dec(x_109);
lean_dec(x_1);
if (lean_is_scalar(x_701)) {
 x_899 = lean_alloc_ctor(0, 2, 0);
} else {
 x_899 = x_701;
}
lean_ctor_set(x_899, 0, x_897);
lean_ctor_set(x_899, 1, x_700);
return x_899;
}
else
{
lean_object* x_900; lean_object* x_901; lean_object* x_902; lean_object* x_903; lean_object* x_904; lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; lean_object* x_915; lean_object* x_916; lean_object* x_917; lean_object* x_918; lean_object* x_919; lean_object* x_920; lean_object* x_921; lean_object* x_922; lean_object* x_923; lean_object* x_924; lean_object* x_925; lean_object* x_926; lean_object* x_927; lean_object* x_928; lean_object* x_929; lean_object* x_930; lean_object* x_931; lean_object* x_932; lean_object* x_933; lean_object* x_934; lean_object* x_935; lean_object* x_936; lean_object* x_937; lean_object* x_938; lean_object* x_939; lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; lean_object* x_946; lean_object* x_947; lean_object* x_948; lean_object* x_949; lean_object* x_950; 
lean_dec(x_701);
x_900 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_7, x_8, x_700);
x_901 = lean_ctor_get(x_900, 0);
lean_inc(x_901);
x_902 = lean_ctor_get(x_900, 1);
lean_inc(x_902);
lean_dec(x_900);
x_903 = l_Lean_Elab_Term_getCurrMacroScope(x_688, x_4, x_5, x_6, x_7, x_8, x_902);
lean_dec(x_688);
x_904 = lean_ctor_get(x_903, 0);
lean_inc(x_904);
x_905 = lean_ctor_get(x_903, 1);
lean_inc(x_905);
lean_dec(x_903);
x_906 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_905);
x_907 = lean_ctor_get(x_906, 0);
lean_inc(x_907);
x_908 = lean_ctor_get(x_906, 1);
lean_inc(x_908);
if (lean_is_exclusive(x_906)) {
 lean_ctor_release(x_906, 0);
 lean_ctor_release(x_906, 1);
 x_909 = x_906;
} else {
 lean_dec_ref(x_906);
 x_909 = lean_box(0);
}
x_910 = lean_mk_string("let");
lean_inc(x_910);
lean_inc(x_734);
x_911 = lean_name_mk_string(x_734, x_910);
lean_inc(x_901);
x_912 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_912, 0, x_901);
lean_ctor_set(x_912, 1, x_910);
x_913 = lean_mk_string("letDecl");
lean_inc(x_734);
x_914 = lean_name_mk_string(x_734, x_913);
x_915 = lean_mk_string("letIdDecl");
x_916 = lean_name_mk_string(x_734, x_915);
x_917 = lean_mk_string("inst");
x_918 = lean_string_utf8_byte_size(x_917);
lean_inc(x_917);
x_919 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_919, 0, x_917);
lean_ctor_set(x_919, 1, x_709);
lean_ctor_set(x_919, 2, x_918);
x_920 = lean_name_mk_string(x_702, x_917);
x_921 = l_Lean_addMacroScope(x_907, x_920, x_904);
lean_inc(x_901);
x_922 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_922, 0, x_901);
lean_ctor_set(x_922, 1, x_919);
lean_ctor_set(x_922, 2, x_921);
lean_ctor_set(x_922, 3, x_713);
x_923 = lean_mk_string(":=");
lean_inc(x_901);
x_924 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_924, 0, x_901);
lean_ctor_set(x_924, 1, x_923);
x_925 = lean_mk_syntax_ident(x_1);
lean_inc(x_756);
x_926 = lean_array_push(x_756, x_109);
x_927 = lean_array_push(x_926, x_111);
lean_inc(x_746);
x_928 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_928, 0, x_746);
lean_ctor_set(x_928, 1, x_927);
x_929 = lean_array_push(x_756, x_925);
x_930 = lean_array_push(x_929, x_928);
x_931 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_931, 0, x_791);
lean_ctor_set(x_931, 1, x_930);
x_932 = lean_unsigned_to_nat(5u);
x_933 = lean_mk_empty_array_with_capacity(x_932);
x_934 = lean_array_push(x_933, x_922);
lean_inc(x_774);
x_935 = lean_array_push(x_934, x_774);
x_936 = lean_array_push(x_935, x_774);
x_937 = lean_array_push(x_936, x_924);
x_938 = lean_array_push(x_937, x_931);
x_939 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_939, 0, x_916);
lean_ctor_set(x_939, 1, x_938);
lean_inc(x_752);
x_940 = lean_array_push(x_752, x_939);
x_941 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_941, 0, x_914);
lean_ctor_set(x_941, 1, x_940);
x_942 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_942, 0, x_901);
lean_ctor_set(x_942, 1, x_760);
x_943 = lean_array_push(x_752, x_942);
x_944 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_944, 0, x_746);
lean_ctor_set(x_944, 1, x_943);
x_945 = lean_array_push(x_861, x_912);
x_946 = lean_array_push(x_945, x_941);
x_947 = lean_array_push(x_946, x_944);
x_948 = lean_array_push(x_947, x_897);
x_949 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_949, 0, x_911);
lean_ctor_set(x_949, 1, x_948);
if (lean_is_scalar(x_909)) {
 x_950 = lean_alloc_ctor(0, 2, 0);
} else {
 x_950 = x_909;
}
lean_ctor_set(x_950, 0, x_949);
lean_ctor_set(x_950, 1, x_908);
return x_950;
}
}
}
else
{
lean_object* x_951; lean_object* x_952; lean_object* x_953; lean_object* x_954; lean_object* x_955; lean_object* x_956; lean_object* x_957; lean_object* x_958; lean_object* x_959; lean_object* x_960; lean_object* x_961; lean_object* x_962; lean_object* x_963; uint8_t x_964; uint8_t x_965; uint8_t x_966; lean_object* x_967; lean_object* x_968; lean_object* x_969; uint8_t x_970; lean_object* x_971; lean_object* x_972; lean_object* x_973; lean_object* x_974; lean_object* x_975; lean_object* x_976; lean_object* x_977; lean_object* x_978; lean_object* x_979; lean_object* x_980; lean_object* x_981; lean_object* x_982; lean_object* x_983; lean_object* x_984; lean_object* x_985; lean_object* x_986; lean_object* x_987; lean_object* x_988; lean_object* x_989; lean_object* x_990; lean_object* x_991; lean_object* x_992; lean_object* x_993; lean_object* x_994; lean_object* x_995; lean_object* x_996; lean_object* x_997; lean_object* x_998; lean_object* x_999; lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; lean_object* x_1006; lean_object* x_1007; lean_object* x_1008; lean_object* x_1009; lean_object* x_1010; lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; lean_object* x_1014; lean_object* x_1015; lean_object* x_1016; lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; lean_object* x_1031; lean_object* x_1032; lean_object* x_1033; lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; lean_object* x_1037; lean_object* x_1038; lean_object* x_1039; lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; lean_object* x_1047; lean_object* x_1048; lean_object* x_1049; lean_object* x_1050; lean_object* x_1051; lean_object* x_1052; lean_object* x_1053; lean_object* x_1054; lean_object* x_1055; lean_object* x_1056; lean_object* x_1057; lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; lean_object* x_1068; lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; lean_object* x_1072; lean_object* x_1073; lean_object* x_1074; lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; lean_object* x_1079; lean_object* x_1080; lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; lean_object* x_1087; lean_object* x_1088; lean_object* x_1089; lean_object* x_1090; lean_object* x_1091; lean_object* x_1092; lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; lean_object* x_1096; lean_object* x_1097; lean_object* x_1098; lean_object* x_1099; lean_object* x_1100; lean_object* x_1101; lean_object* x_1102; lean_object* x_1103; lean_object* x_1104; lean_object* x_1105; lean_object* x_1106; lean_object* x_1107; lean_object* x_1108; lean_object* x_1109; lean_object* x_1110; lean_object* x_1111; lean_object* x_1112; lean_object* x_1113; lean_object* x_1114; lean_object* x_1115; lean_object* x_1116; lean_object* x_1117; lean_object* x_1118; lean_object* x_1119; lean_object* x_1120; lean_object* x_1121; lean_object* x_1122; lean_object* x_1123; lean_object* x_1124; lean_object* x_1125; lean_object* x_1126; lean_object* x_1127; lean_object* x_1128; lean_object* x_1129; lean_object* x_1130; lean_object* x_1131; lean_object* x_1132; lean_object* x_1133; lean_object* x_1134; lean_object* x_1135; lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; lean_object* x_1139; lean_object* x_1140; lean_object* x_1141; lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; lean_object* x_1145; lean_object* x_1146; lean_object* x_1147; lean_object* x_1148; lean_object* x_1149; lean_object* x_1150; lean_object* x_1151; lean_object* x_1152; lean_object* x_1153; lean_object* x_1154; lean_object* x_1155; lean_object* x_1156; lean_object* x_1157; lean_object* x_1158; lean_object* x_1159; lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; lean_object* x_1163; lean_object* x_1164; lean_object* x_1165; lean_object* x_1166; lean_object* x_1167; lean_object* x_1168; lean_object* x_1169; lean_object* x_1170; lean_object* x_1171; lean_object* x_1172; lean_object* x_1173; lean_object* x_1174; lean_object* x_1175; lean_object* x_1176; lean_object* x_1177; lean_object* x_1178; lean_object* x_1179; lean_object* x_1180; lean_object* x_1181; uint8_t x_1182; 
x_951 = lean_ctor_get(x_114, 0);
x_952 = lean_ctor_get(x_114, 1);
x_953 = lean_ctor_get(x_114, 2);
x_954 = lean_ctor_get(x_114, 3);
lean_inc(x_954);
lean_inc(x_953);
lean_inc(x_952);
lean_inc(x_951);
lean_dec(x_114);
x_955 = lean_unsigned_to_nat(1u);
x_956 = lean_nat_add(x_952, x_955);
x_957 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_957, 0, x_951);
lean_ctor_set(x_957, 1, x_956);
lean_ctor_set(x_957, 2, x_953);
lean_ctor_set(x_957, 3, x_954);
x_958 = lean_st_ref_set(x_8, x_957, x_115);
x_959 = lean_ctor_get(x_958, 1);
lean_inc(x_959);
lean_dec(x_958);
x_960 = lean_ctor_get(x_3, 0);
lean_inc(x_960);
x_961 = lean_ctor_get(x_3, 1);
lean_inc(x_961);
x_962 = lean_ctor_get(x_3, 2);
lean_inc(x_962);
x_963 = lean_ctor_get(x_3, 3);
lean_inc(x_963);
x_964 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_965 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
x_966 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 2);
x_967 = lean_ctor_get(x_3, 5);
lean_inc(x_967);
x_968 = lean_ctor_get(x_3, 6);
lean_inc(x_968);
x_969 = lean_ctor_get(x_3, 7);
lean_inc(x_969);
x_970 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 lean_ctor_release(x_3, 4);
 lean_ctor_release(x_3, 5);
 lean_ctor_release(x_3, 6);
 lean_ctor_release(x_3, 7);
 x_971 = x_3;
} else {
 lean_dec_ref(x_3);
 x_971 = lean_box(0);
}
if (lean_is_scalar(x_971)) {
 x_972 = lean_alloc_ctor(0, 8, 4);
} else {
 x_972 = x_971;
}
lean_ctor_set(x_972, 0, x_960);
lean_ctor_set(x_972, 1, x_961);
lean_ctor_set(x_972, 2, x_962);
lean_ctor_set(x_972, 3, x_963);
lean_ctor_set(x_972, 4, x_952);
lean_ctor_set(x_972, 5, x_967);
lean_ctor_set(x_972, 6, x_968);
lean_ctor_set(x_972, 7, x_969);
lean_ctor_set_uint8(x_972, sizeof(void*)*8, x_964);
lean_ctor_set_uint8(x_972, sizeof(void*)*8 + 1, x_965);
lean_ctor_set_uint8(x_972, sizeof(void*)*8 + 2, x_966);
lean_ctor_set_uint8(x_972, sizeof(void*)*8 + 3, x_970);
lean_inc(x_972);
lean_inc(x_1);
x_973 = l_Lean_Elab_Deriving_DecEq_mkMatch_mkSameCtorRhs(x_1, x_107, x_972, x_4, x_5, x_6, x_7, x_8, x_959);
x_974 = lean_ctor_get(x_973, 0);
lean_inc(x_974);
x_975 = lean_ctor_get(x_973, 1);
lean_inc(x_975);
lean_dec(x_973);
x_976 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_7, x_8, x_975);
x_977 = lean_ctor_get(x_976, 0);
lean_inc(x_977);
x_978 = lean_ctor_get(x_976, 1);
lean_inc(x_978);
lean_dec(x_976);
x_979 = l_Lean_Elab_Term_getCurrMacroScope(x_972, x_4, x_5, x_6, x_7, x_8, x_978);
x_980 = lean_ctor_get(x_979, 0);
lean_inc(x_980);
x_981 = lean_ctor_get(x_979, 1);
lean_inc(x_981);
lean_dec(x_979);
x_982 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_981);
x_983 = lean_ctor_get(x_982, 0);
lean_inc(x_983);
x_984 = lean_ctor_get(x_982, 1);
lean_inc(x_984);
if (lean_is_exclusive(x_982)) {
 lean_ctor_release(x_982, 0);
 lean_ctor_release(x_982, 1);
 x_985 = x_982;
} else {
 lean_dec_ref(x_982);
 x_985 = lean_box(0);
}
x_986 = lean_box(0);
x_987 = lean_mk_string("termDepIfThenElse");
x_988 = lean_name_mk_string(x_986, x_987);
x_989 = lean_mk_string("if");
lean_inc(x_977);
x_990 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_990, 0, x_977);
lean_ctor_set(x_990, 1, x_989);
x_991 = lean_mk_string("h");
x_992 = lean_string_utf8_byte_size(x_991);
x_993 = lean_unsigned_to_nat(0u);
lean_inc(x_991);
x_994 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_994, 0, x_991);
lean_ctor_set(x_994, 1, x_993);
lean_ctor_set(x_994, 2, x_992);
x_995 = lean_name_mk_string(x_986, x_991);
lean_inc(x_980);
lean_inc(x_983);
x_996 = l_Lean_addMacroScope(x_983, x_995, x_980);
x_997 = lean_box(0);
lean_inc(x_977);
x_998 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_998, 0, x_977);
lean_ctor_set(x_998, 1, x_994);
lean_ctor_set(x_998, 2, x_996);
lean_ctor_set(x_998, 3, x_997);
x_999 = lean_mk_string(":");
lean_inc(x_977);
x_1000 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1000, 0, x_977);
lean_ctor_set(x_1000, 1, x_999);
x_1001 = lean_mk_string("term_=_");
x_1002 = lean_name_mk_string(x_986, x_1001);
x_1003 = lean_mk_string("=");
lean_inc(x_977);
x_1004 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1004, 0, x_977);
lean_ctor_set(x_1004, 1, x_1003);
x_1005 = lean_unsigned_to_nat(3u);
x_1006 = lean_mk_empty_array_with_capacity(x_1005);
lean_inc(x_109);
lean_inc(x_1006);
x_1007 = lean_array_push(x_1006, x_109);
x_1008 = lean_array_push(x_1007, x_1004);
lean_inc(x_111);
x_1009 = lean_array_push(x_1008, x_111);
x_1010 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1010, 0, x_1002);
lean_ctor_set(x_1010, 1, x_1009);
x_1011 = lean_mk_string("then");
lean_inc(x_977);
x_1012 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1012, 0, x_977);
lean_ctor_set(x_1012, 1, x_1011);
x_1013 = lean_mk_string("Lean");
x_1014 = lean_name_mk_string(x_986, x_1013);
x_1015 = lean_mk_string("Parser");
x_1016 = lean_name_mk_string(x_1014, x_1015);
x_1017 = lean_mk_string("Term");
lean_inc(x_1016);
x_1018 = lean_name_mk_string(x_1016, x_1017);
x_1019 = lean_mk_string("byTactic");
lean_inc(x_1018);
x_1020 = lean_name_mk_string(x_1018, x_1019);
x_1021 = lean_mk_string("by");
lean_inc(x_977);
x_1022 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1022, 0, x_977);
lean_ctor_set(x_1022, 1, x_1021);
x_1023 = lean_mk_string("Tactic");
x_1024 = lean_name_mk_string(x_1016, x_1023);
x_1025 = lean_mk_string("tacticSeq");
lean_inc(x_1024);
x_1026 = lean_name_mk_string(x_1024, x_1025);
x_1027 = lean_mk_string("tacticSeq1Indented");
lean_inc(x_1024);
x_1028 = lean_name_mk_string(x_1024, x_1027);
x_1029 = lean_mk_string("null");
x_1030 = lean_name_mk_string(x_986, x_1029);
x_1031 = lean_mk_string("group");
x_1032 = lean_name_mk_string(x_986, x_1031);
x_1033 = lean_mk_string("subst");
lean_inc(x_1033);
lean_inc(x_1024);
x_1034 = lean_name_mk_string(x_1024, x_1033);
lean_inc(x_977);
x_1035 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1035, 0, x_977);
lean_ctor_set(x_1035, 1, x_1033);
x_1036 = lean_mk_empty_array_with_capacity(x_955);
lean_inc(x_998);
lean_inc(x_1036);
x_1037 = lean_array_push(x_1036, x_998);
lean_inc(x_1030);
x_1038 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1038, 0, x_1030);
lean_ctor_set(x_1038, 1, x_1037);
x_1039 = lean_unsigned_to_nat(2u);
x_1040 = lean_mk_empty_array_with_capacity(x_1039);
lean_inc(x_1040);
x_1041 = lean_array_push(x_1040, x_1035);
x_1042 = lean_array_push(x_1041, x_1038);
x_1043 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1043, 0, x_1034);
lean_ctor_set(x_1043, 1, x_1042);
x_1044 = lean_mk_string(";");
lean_inc(x_1044);
lean_inc(x_977);
x_1045 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1045, 0, x_977);
lean_ctor_set(x_1045, 1, x_1044);
lean_inc(x_1036);
x_1046 = lean_array_push(x_1036, x_1045);
lean_inc(x_1030);
x_1047 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1047, 0, x_1030);
lean_ctor_set(x_1047, 1, x_1046);
lean_inc(x_1040);
x_1048 = lean_array_push(x_1040, x_1043);
lean_inc(x_1047);
x_1049 = lean_array_push(x_1048, x_1047);
lean_inc(x_1032);
x_1050 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1050, 0, x_1032);
lean_ctor_set(x_1050, 1, x_1049);
x_1051 = lean_mk_string("exact");
lean_inc(x_1051);
lean_inc(x_1024);
x_1052 = lean_name_mk_string(x_1024, x_1051);
lean_inc(x_977);
x_1053 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1053, 0, x_977);
lean_ctor_set(x_1053, 1, x_1051);
lean_inc(x_1040);
x_1054 = lean_array_push(x_1040, x_1053);
x_1055 = lean_array_push(x_1054, x_974);
x_1056 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1056, 0, x_1052);
lean_ctor_set(x_1056, 1, x_1055);
x_1057 = lean_mk_empty_array_with_capacity(x_993);
lean_inc(x_1030);
x_1058 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1058, 0, x_1030);
lean_ctor_set(x_1058, 1, x_1057);
lean_inc(x_1040);
x_1059 = lean_array_push(x_1040, x_1056);
lean_inc(x_1058);
x_1060 = lean_array_push(x_1059, x_1058);
lean_inc(x_1032);
x_1061 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1061, 0, x_1032);
lean_ctor_set(x_1061, 1, x_1060);
lean_inc(x_1040);
x_1062 = lean_array_push(x_1040, x_1050);
x_1063 = lean_array_push(x_1062, x_1061);
lean_inc(x_1030);
x_1064 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1064, 0, x_1030);
lean_ctor_set(x_1064, 1, x_1063);
lean_inc(x_1036);
x_1065 = lean_array_push(x_1036, x_1064);
lean_inc(x_1028);
x_1066 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1066, 0, x_1028);
lean_ctor_set(x_1066, 1, x_1065);
lean_inc(x_1036);
x_1067 = lean_array_push(x_1036, x_1066);
lean_inc(x_1026);
x_1068 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1068, 0, x_1026);
lean_ctor_set(x_1068, 1, x_1067);
lean_inc(x_1040);
x_1069 = lean_array_push(x_1040, x_1022);
lean_inc(x_1069);
x_1070 = lean_array_push(x_1069, x_1068);
lean_inc(x_1020);
x_1071 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1071, 0, x_1020);
lean_ctor_set(x_1071, 1, x_1070);
x_1072 = lean_mk_string("else");
lean_inc(x_977);
x_1073 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1073, 0, x_977);
lean_ctor_set(x_1073, 1, x_1072);
x_1074 = lean_mk_string("app");
lean_inc(x_1018);
x_1075 = lean_name_mk_string(x_1018, x_1074);
x_1076 = lean_mk_string("isFalse");
x_1077 = lean_string_utf8_byte_size(x_1076);
lean_inc(x_1076);
x_1078 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_1078, 0, x_1076);
lean_ctor_set(x_1078, 1, x_993);
lean_ctor_set(x_1078, 2, x_1077);
lean_inc(x_1076);
x_1079 = lean_name_mk_string(x_986, x_1076);
lean_inc(x_980);
lean_inc(x_983);
x_1080 = l_Lean_addMacroScope(x_983, x_1079, x_980);
x_1081 = lean_mk_string("Decidable");
x_1082 = lean_name_mk_string(x_986, x_1081);
x_1083 = lean_name_mk_string(x_1082, x_1076);
lean_ctor_set(x_105, 1, x_997);
lean_ctor_set(x_105, 0, x_1083);
lean_ctor_set(x_2, 1, x_997);
lean_ctor_set(x_2, 0, x_105);
lean_inc(x_977);
x_1084 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_1084, 0, x_977);
lean_ctor_set(x_1084, 1, x_1078);
lean_ctor_set(x_1084, 2, x_1080);
lean_ctor_set(x_1084, 3, x_2);
x_1085 = lean_mk_string("paren");
lean_inc(x_1018);
x_1086 = lean_name_mk_string(x_1018, x_1085);
x_1087 = lean_mk_string("(");
lean_inc(x_977);
x_1088 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1088, 0, x_977);
lean_ctor_set(x_1088, 1, x_1087);
x_1089 = lean_mk_string("intro");
lean_inc(x_1089);
lean_inc(x_1024);
x_1090 = lean_name_mk_string(x_1024, x_1089);
lean_inc(x_977);
x_1091 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1091, 0, x_977);
lean_ctor_set(x_1091, 1, x_1089);
x_1092 = lean_mk_string("n");
x_1093 = lean_string_utf8_byte_size(x_1092);
lean_inc(x_1092);
x_1094 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_1094, 0, x_1092);
lean_ctor_set(x_1094, 1, x_993);
lean_ctor_set(x_1094, 2, x_1093);
x_1095 = lean_name_mk_string(x_986, x_1092);
x_1096 = l_Lean_addMacroScope(x_983, x_1095, x_980);
lean_inc(x_977);
x_1097 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_1097, 0, x_977);
lean_ctor_set(x_1097, 1, x_1094);
lean_ctor_set(x_1097, 2, x_1096);
lean_ctor_set(x_1097, 3, x_997);
lean_inc(x_1097);
lean_inc(x_1036);
x_1098 = lean_array_push(x_1036, x_1097);
lean_inc(x_1030);
x_1099 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1099, 0, x_1030);
lean_ctor_set(x_1099, 1, x_1098);
lean_inc(x_1040);
x_1100 = lean_array_push(x_1040, x_1091);
x_1101 = lean_array_push(x_1100, x_1099);
x_1102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1102, 0, x_1090);
lean_ctor_set(x_1102, 1, x_1101);
lean_inc(x_1040);
x_1103 = lean_array_push(x_1040, x_1102);
lean_inc(x_1047);
x_1104 = lean_array_push(x_1103, x_1047);
lean_inc(x_1032);
x_1105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1105, 0, x_1032);
lean_ctor_set(x_1105, 1, x_1104);
x_1106 = lean_mk_string("injection");
lean_inc(x_1106);
lean_inc(x_1024);
x_1107 = lean_name_mk_string(x_1024, x_1106);
lean_inc(x_977);
x_1108 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1108, 0, x_977);
lean_ctor_set(x_1108, 1, x_1106);
lean_inc(x_1006);
x_1109 = lean_array_push(x_1006, x_1108);
x_1110 = lean_array_push(x_1109, x_1097);
lean_inc(x_1058);
x_1111 = lean_array_push(x_1110, x_1058);
x_1112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1112, 0, x_1107);
lean_ctor_set(x_1112, 1, x_1111);
lean_inc(x_1040);
x_1113 = lean_array_push(x_1040, x_1112);
lean_inc(x_1047);
x_1114 = lean_array_push(x_1113, x_1047);
lean_inc(x_1032);
x_1115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1115, 0, x_1032);
lean_ctor_set(x_1115, 1, x_1114);
x_1116 = lean_mk_string("apply");
lean_inc(x_1116);
lean_inc(x_1024);
x_1117 = lean_name_mk_string(x_1024, x_1116);
lean_inc(x_977);
x_1118 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1118, 0, x_977);
lean_ctor_set(x_1118, 1, x_1116);
x_1119 = lean_mk_string("hole");
lean_inc(x_1018);
x_1120 = lean_name_mk_string(x_1018, x_1119);
x_1121 = lean_mk_string("_");
lean_inc(x_977);
x_1122 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1122, 0, x_977);
lean_ctor_set(x_1122, 1, x_1121);
lean_inc(x_1036);
x_1123 = lean_array_push(x_1036, x_1122);
x_1124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1124, 0, x_1120);
lean_ctor_set(x_1124, 1, x_1123);
lean_inc(x_1036);
x_1125 = lean_array_push(x_1036, x_1124);
lean_inc(x_1030);
x_1126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1126, 0, x_1030);
lean_ctor_set(x_1126, 1, x_1125);
lean_inc(x_998);
lean_inc(x_1040);
x_1127 = lean_array_push(x_1040, x_998);
x_1128 = lean_array_push(x_1127, x_1126);
lean_inc(x_1075);
x_1129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1129, 0, x_1075);
lean_ctor_set(x_1129, 1, x_1128);
lean_inc(x_1040);
x_1130 = lean_array_push(x_1040, x_1118);
x_1131 = lean_array_push(x_1130, x_1129);
x_1132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1132, 0, x_1117);
lean_ctor_set(x_1132, 1, x_1131);
lean_inc(x_1040);
x_1133 = lean_array_push(x_1040, x_1132);
x_1134 = lean_array_push(x_1133, x_1047);
lean_inc(x_1032);
x_1135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1135, 0, x_1032);
lean_ctor_set(x_1135, 1, x_1134);
x_1136 = lean_mk_string("assumption");
lean_inc(x_1136);
x_1137 = lean_name_mk_string(x_1024, x_1136);
lean_inc(x_977);
x_1138 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1138, 0, x_977);
lean_ctor_set(x_1138, 1, x_1136);
lean_inc(x_1036);
x_1139 = lean_array_push(x_1036, x_1138);
x_1140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1140, 0, x_1137);
lean_ctor_set(x_1140, 1, x_1139);
lean_inc(x_1040);
x_1141 = lean_array_push(x_1040, x_1140);
lean_inc(x_1058);
x_1142 = lean_array_push(x_1141, x_1058);
x_1143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1143, 0, x_1032);
lean_ctor_set(x_1143, 1, x_1142);
x_1144 = lean_unsigned_to_nat(4u);
x_1145 = lean_mk_empty_array_with_capacity(x_1144);
lean_inc(x_1145);
x_1146 = lean_array_push(x_1145, x_1105);
x_1147 = lean_array_push(x_1146, x_1115);
x_1148 = lean_array_push(x_1147, x_1135);
x_1149 = lean_array_push(x_1148, x_1143);
lean_inc(x_1030);
x_1150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1150, 0, x_1030);
lean_ctor_set(x_1150, 1, x_1149);
lean_inc(x_1036);
x_1151 = lean_array_push(x_1036, x_1150);
x_1152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1152, 0, x_1028);
lean_ctor_set(x_1152, 1, x_1151);
lean_inc(x_1036);
x_1153 = lean_array_push(x_1036, x_1152);
x_1154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1154, 0, x_1026);
lean_ctor_set(x_1154, 1, x_1153);
x_1155 = lean_array_push(x_1069, x_1154);
x_1156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1156, 0, x_1020);
lean_ctor_set(x_1156, 1, x_1155);
lean_inc(x_1040);
x_1157 = lean_array_push(x_1040, x_1156);
lean_inc(x_1058);
x_1158 = lean_array_push(x_1157, x_1058);
lean_inc(x_1030);
x_1159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1159, 0, x_1030);
lean_ctor_set(x_1159, 1, x_1158);
x_1160 = lean_mk_string(")");
x_1161 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1161, 0, x_977);
lean_ctor_set(x_1161, 1, x_1160);
x_1162 = lean_array_push(x_1006, x_1088);
x_1163 = lean_array_push(x_1162, x_1159);
x_1164 = lean_array_push(x_1163, x_1161);
x_1165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1165, 0, x_1086);
lean_ctor_set(x_1165, 1, x_1164);
lean_inc(x_1036);
x_1166 = lean_array_push(x_1036, x_1165);
lean_inc(x_1030);
x_1167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1167, 0, x_1030);
lean_ctor_set(x_1167, 1, x_1166);
lean_inc(x_1040);
x_1168 = lean_array_push(x_1040, x_1084);
x_1169 = lean_array_push(x_1168, x_1167);
lean_inc(x_1075);
x_1170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1170, 0, x_1075);
lean_ctor_set(x_1170, 1, x_1169);
x_1171 = lean_unsigned_to_nat(8u);
x_1172 = lean_mk_empty_array_with_capacity(x_1171);
x_1173 = lean_array_push(x_1172, x_990);
x_1174 = lean_array_push(x_1173, x_998);
x_1175 = lean_array_push(x_1174, x_1000);
x_1176 = lean_array_push(x_1175, x_1010);
x_1177 = lean_array_push(x_1176, x_1012);
x_1178 = lean_array_push(x_1177, x_1071);
x_1179 = lean_array_push(x_1178, x_1073);
x_1180 = lean_array_push(x_1179, x_1170);
x_1181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1181, 0, x_988);
lean_ctor_set(x_1181, 1, x_1180);
x_1182 = lean_unbox(x_112);
lean_dec(x_112);
if (x_1182 == 0)
{
lean_object* x_1183; 
lean_dec(x_1145);
lean_dec(x_1075);
lean_dec(x_1058);
lean_dec(x_1044);
lean_dec(x_1040);
lean_dec(x_1036);
lean_dec(x_1030);
lean_dec(x_1018);
lean_dec(x_972);
lean_dec(x_111);
lean_dec(x_109);
lean_dec(x_1);
if (lean_is_scalar(x_985)) {
 x_1183 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1183 = x_985;
}
lean_ctor_set(x_1183, 0, x_1181);
lean_ctor_set(x_1183, 1, x_984);
return x_1183;
}
else
{
lean_object* x_1184; lean_object* x_1185; lean_object* x_1186; lean_object* x_1187; lean_object* x_1188; lean_object* x_1189; lean_object* x_1190; lean_object* x_1191; lean_object* x_1192; lean_object* x_1193; lean_object* x_1194; lean_object* x_1195; lean_object* x_1196; lean_object* x_1197; lean_object* x_1198; lean_object* x_1199; lean_object* x_1200; lean_object* x_1201; lean_object* x_1202; lean_object* x_1203; lean_object* x_1204; lean_object* x_1205; lean_object* x_1206; lean_object* x_1207; lean_object* x_1208; lean_object* x_1209; lean_object* x_1210; lean_object* x_1211; lean_object* x_1212; lean_object* x_1213; lean_object* x_1214; lean_object* x_1215; lean_object* x_1216; lean_object* x_1217; lean_object* x_1218; lean_object* x_1219; lean_object* x_1220; lean_object* x_1221; lean_object* x_1222; lean_object* x_1223; lean_object* x_1224; lean_object* x_1225; lean_object* x_1226; lean_object* x_1227; lean_object* x_1228; lean_object* x_1229; lean_object* x_1230; lean_object* x_1231; lean_object* x_1232; lean_object* x_1233; lean_object* x_1234; 
lean_dec(x_985);
x_1184 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_7, x_8, x_984);
x_1185 = lean_ctor_get(x_1184, 0);
lean_inc(x_1185);
x_1186 = lean_ctor_get(x_1184, 1);
lean_inc(x_1186);
lean_dec(x_1184);
x_1187 = l_Lean_Elab_Term_getCurrMacroScope(x_972, x_4, x_5, x_6, x_7, x_8, x_1186);
lean_dec(x_972);
x_1188 = lean_ctor_get(x_1187, 0);
lean_inc(x_1188);
x_1189 = lean_ctor_get(x_1187, 1);
lean_inc(x_1189);
lean_dec(x_1187);
x_1190 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_1189);
x_1191 = lean_ctor_get(x_1190, 0);
lean_inc(x_1191);
x_1192 = lean_ctor_get(x_1190, 1);
lean_inc(x_1192);
if (lean_is_exclusive(x_1190)) {
 lean_ctor_release(x_1190, 0);
 lean_ctor_release(x_1190, 1);
 x_1193 = x_1190;
} else {
 lean_dec_ref(x_1190);
 x_1193 = lean_box(0);
}
x_1194 = lean_mk_string("let");
lean_inc(x_1194);
lean_inc(x_1018);
x_1195 = lean_name_mk_string(x_1018, x_1194);
lean_inc(x_1185);
x_1196 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1196, 0, x_1185);
lean_ctor_set(x_1196, 1, x_1194);
x_1197 = lean_mk_string("letDecl");
lean_inc(x_1018);
x_1198 = lean_name_mk_string(x_1018, x_1197);
x_1199 = lean_mk_string("letIdDecl");
x_1200 = lean_name_mk_string(x_1018, x_1199);
x_1201 = lean_mk_string("inst");
x_1202 = lean_string_utf8_byte_size(x_1201);
lean_inc(x_1201);
x_1203 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_1203, 0, x_1201);
lean_ctor_set(x_1203, 1, x_993);
lean_ctor_set(x_1203, 2, x_1202);
x_1204 = lean_name_mk_string(x_986, x_1201);
x_1205 = l_Lean_addMacroScope(x_1191, x_1204, x_1188);
lean_inc(x_1185);
x_1206 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_1206, 0, x_1185);
lean_ctor_set(x_1206, 1, x_1203);
lean_ctor_set(x_1206, 2, x_1205);
lean_ctor_set(x_1206, 3, x_997);
x_1207 = lean_mk_string(":=");
lean_inc(x_1185);
x_1208 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1208, 0, x_1185);
lean_ctor_set(x_1208, 1, x_1207);
x_1209 = lean_mk_syntax_ident(x_1);
lean_inc(x_1040);
x_1210 = lean_array_push(x_1040, x_109);
x_1211 = lean_array_push(x_1210, x_111);
lean_inc(x_1030);
x_1212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1212, 0, x_1030);
lean_ctor_set(x_1212, 1, x_1211);
x_1213 = lean_array_push(x_1040, x_1209);
x_1214 = lean_array_push(x_1213, x_1212);
x_1215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1215, 0, x_1075);
lean_ctor_set(x_1215, 1, x_1214);
x_1216 = lean_unsigned_to_nat(5u);
x_1217 = lean_mk_empty_array_with_capacity(x_1216);
x_1218 = lean_array_push(x_1217, x_1206);
lean_inc(x_1058);
x_1219 = lean_array_push(x_1218, x_1058);
x_1220 = lean_array_push(x_1219, x_1058);
x_1221 = lean_array_push(x_1220, x_1208);
x_1222 = lean_array_push(x_1221, x_1215);
x_1223 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1223, 0, x_1200);
lean_ctor_set(x_1223, 1, x_1222);
lean_inc(x_1036);
x_1224 = lean_array_push(x_1036, x_1223);
x_1225 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1225, 0, x_1198);
lean_ctor_set(x_1225, 1, x_1224);
x_1226 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1226, 0, x_1185);
lean_ctor_set(x_1226, 1, x_1044);
x_1227 = lean_array_push(x_1036, x_1226);
x_1228 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1228, 0, x_1030);
lean_ctor_set(x_1228, 1, x_1227);
x_1229 = lean_array_push(x_1145, x_1196);
x_1230 = lean_array_push(x_1229, x_1225);
x_1231 = lean_array_push(x_1230, x_1228);
x_1232 = lean_array_push(x_1231, x_1181);
x_1233 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1233, 0, x_1195);
lean_ctor_set(x_1233, 1, x_1232);
if (lean_is_scalar(x_1193)) {
 x_1234 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1234 = x_1193;
}
lean_ctor_set(x_1234, 0, x_1233);
lean_ctor_set(x_1234, 1, x_1192);
return x_1234;
}
}
}
else
{
lean_object* x_1235; lean_object* x_1236; lean_object* x_1237; lean_object* x_1238; lean_object* x_1239; lean_object* x_1240; lean_object* x_1241; lean_object* x_1242; lean_object* x_1243; lean_object* x_1244; lean_object* x_1245; lean_object* x_1246; lean_object* x_1247; lean_object* x_1248; lean_object* x_1249; lean_object* x_1250; lean_object* x_1251; lean_object* x_1252; lean_object* x_1253; uint8_t x_1254; uint8_t x_1255; uint8_t x_1256; lean_object* x_1257; lean_object* x_1258; lean_object* x_1259; uint8_t x_1260; lean_object* x_1261; lean_object* x_1262; lean_object* x_1263; lean_object* x_1264; lean_object* x_1265; lean_object* x_1266; lean_object* x_1267; lean_object* x_1268; lean_object* x_1269; lean_object* x_1270; lean_object* x_1271; lean_object* x_1272; lean_object* x_1273; lean_object* x_1274; lean_object* x_1275; lean_object* x_1276; lean_object* x_1277; lean_object* x_1278; lean_object* x_1279; lean_object* x_1280; lean_object* x_1281; lean_object* x_1282; lean_object* x_1283; lean_object* x_1284; lean_object* x_1285; lean_object* x_1286; lean_object* x_1287; lean_object* x_1288; lean_object* x_1289; lean_object* x_1290; lean_object* x_1291; lean_object* x_1292; lean_object* x_1293; lean_object* x_1294; lean_object* x_1295; lean_object* x_1296; lean_object* x_1297; lean_object* x_1298; lean_object* x_1299; lean_object* x_1300; lean_object* x_1301; lean_object* x_1302; lean_object* x_1303; lean_object* x_1304; lean_object* x_1305; lean_object* x_1306; lean_object* x_1307; lean_object* x_1308; lean_object* x_1309; lean_object* x_1310; lean_object* x_1311; lean_object* x_1312; lean_object* x_1313; lean_object* x_1314; lean_object* x_1315; lean_object* x_1316; lean_object* x_1317; lean_object* x_1318; lean_object* x_1319; lean_object* x_1320; lean_object* x_1321; lean_object* x_1322; lean_object* x_1323; lean_object* x_1324; lean_object* x_1325; lean_object* x_1326; lean_object* x_1327; lean_object* x_1328; lean_object* x_1329; lean_object* x_1330; lean_object* x_1331; lean_object* x_1332; lean_object* x_1333; lean_object* x_1334; lean_object* x_1335; lean_object* x_1336; lean_object* x_1337; lean_object* x_1338; lean_object* x_1339; lean_object* x_1340; lean_object* x_1341; lean_object* x_1342; lean_object* x_1343; lean_object* x_1344; lean_object* x_1345; lean_object* x_1346; lean_object* x_1347; lean_object* x_1348; lean_object* x_1349; lean_object* x_1350; lean_object* x_1351; lean_object* x_1352; lean_object* x_1353; lean_object* x_1354; lean_object* x_1355; lean_object* x_1356; lean_object* x_1357; lean_object* x_1358; lean_object* x_1359; lean_object* x_1360; lean_object* x_1361; lean_object* x_1362; lean_object* x_1363; lean_object* x_1364; lean_object* x_1365; lean_object* x_1366; lean_object* x_1367; lean_object* x_1368; lean_object* x_1369; lean_object* x_1370; lean_object* x_1371; lean_object* x_1372; lean_object* x_1373; lean_object* x_1374; lean_object* x_1375; lean_object* x_1376; lean_object* x_1377; lean_object* x_1378; lean_object* x_1379; lean_object* x_1380; lean_object* x_1381; lean_object* x_1382; lean_object* x_1383; lean_object* x_1384; lean_object* x_1385; lean_object* x_1386; lean_object* x_1387; lean_object* x_1388; lean_object* x_1389; lean_object* x_1390; lean_object* x_1391; lean_object* x_1392; lean_object* x_1393; lean_object* x_1394; lean_object* x_1395; lean_object* x_1396; lean_object* x_1397; lean_object* x_1398; lean_object* x_1399; lean_object* x_1400; lean_object* x_1401; lean_object* x_1402; lean_object* x_1403; lean_object* x_1404; lean_object* x_1405; lean_object* x_1406; lean_object* x_1407; lean_object* x_1408; lean_object* x_1409; lean_object* x_1410; lean_object* x_1411; lean_object* x_1412; lean_object* x_1413; lean_object* x_1414; lean_object* x_1415; lean_object* x_1416; lean_object* x_1417; lean_object* x_1418; lean_object* x_1419; lean_object* x_1420; lean_object* x_1421; lean_object* x_1422; lean_object* x_1423; lean_object* x_1424; lean_object* x_1425; lean_object* x_1426; lean_object* x_1427; lean_object* x_1428; lean_object* x_1429; lean_object* x_1430; lean_object* x_1431; lean_object* x_1432; lean_object* x_1433; lean_object* x_1434; lean_object* x_1435; lean_object* x_1436; lean_object* x_1437; lean_object* x_1438; lean_object* x_1439; lean_object* x_1440; lean_object* x_1441; lean_object* x_1442; lean_object* x_1443; lean_object* x_1444; lean_object* x_1445; lean_object* x_1446; lean_object* x_1447; lean_object* x_1448; lean_object* x_1449; lean_object* x_1450; lean_object* x_1451; lean_object* x_1452; lean_object* x_1453; lean_object* x_1454; lean_object* x_1455; lean_object* x_1456; lean_object* x_1457; lean_object* x_1458; lean_object* x_1459; lean_object* x_1460; lean_object* x_1461; lean_object* x_1462; lean_object* x_1463; lean_object* x_1464; lean_object* x_1465; lean_object* x_1466; lean_object* x_1467; lean_object* x_1468; lean_object* x_1469; lean_object* x_1470; lean_object* x_1471; lean_object* x_1472; uint8_t x_1473; 
x_1235 = lean_ctor_get(x_105, 0);
x_1236 = lean_ctor_get(x_105, 1);
lean_inc(x_1236);
lean_inc(x_1235);
lean_dec(x_105);
x_1237 = lean_st_ref_take(x_8, x_9);
x_1238 = lean_ctor_get(x_1237, 0);
lean_inc(x_1238);
x_1239 = lean_ctor_get(x_1237, 1);
lean_inc(x_1239);
lean_dec(x_1237);
x_1240 = lean_ctor_get(x_1238, 0);
lean_inc(x_1240);
x_1241 = lean_ctor_get(x_1238, 1);
lean_inc(x_1241);
x_1242 = lean_ctor_get(x_1238, 2);
lean_inc(x_1242);
x_1243 = lean_ctor_get(x_1238, 3);
lean_inc(x_1243);
if (lean_is_exclusive(x_1238)) {
 lean_ctor_release(x_1238, 0);
 lean_ctor_release(x_1238, 1);
 lean_ctor_release(x_1238, 2);
 lean_ctor_release(x_1238, 3);
 x_1244 = x_1238;
} else {
 lean_dec_ref(x_1238);
 x_1244 = lean_box(0);
}
x_1245 = lean_unsigned_to_nat(1u);
x_1246 = lean_nat_add(x_1241, x_1245);
if (lean_is_scalar(x_1244)) {
 x_1247 = lean_alloc_ctor(0, 4, 0);
} else {
 x_1247 = x_1244;
}
lean_ctor_set(x_1247, 0, x_1240);
lean_ctor_set(x_1247, 1, x_1246);
lean_ctor_set(x_1247, 2, x_1242);
lean_ctor_set(x_1247, 3, x_1243);
x_1248 = lean_st_ref_set(x_8, x_1247, x_1239);
x_1249 = lean_ctor_get(x_1248, 1);
lean_inc(x_1249);
lean_dec(x_1248);
x_1250 = lean_ctor_get(x_3, 0);
lean_inc(x_1250);
x_1251 = lean_ctor_get(x_3, 1);
lean_inc(x_1251);
x_1252 = lean_ctor_get(x_3, 2);
lean_inc(x_1252);
x_1253 = lean_ctor_get(x_3, 3);
lean_inc(x_1253);
x_1254 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_1255 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
x_1256 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 2);
x_1257 = lean_ctor_get(x_3, 5);
lean_inc(x_1257);
x_1258 = lean_ctor_get(x_3, 6);
lean_inc(x_1258);
x_1259 = lean_ctor_get(x_3, 7);
lean_inc(x_1259);
x_1260 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 lean_ctor_release(x_3, 4);
 lean_ctor_release(x_3, 5);
 lean_ctor_release(x_3, 6);
 lean_ctor_release(x_3, 7);
 x_1261 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1261 = lean_box(0);
}
if (lean_is_scalar(x_1261)) {
 x_1262 = lean_alloc_ctor(0, 8, 4);
} else {
 x_1262 = x_1261;
}
lean_ctor_set(x_1262, 0, x_1250);
lean_ctor_set(x_1262, 1, x_1251);
lean_ctor_set(x_1262, 2, x_1252);
lean_ctor_set(x_1262, 3, x_1253);
lean_ctor_set(x_1262, 4, x_1241);
lean_ctor_set(x_1262, 5, x_1257);
lean_ctor_set(x_1262, 6, x_1258);
lean_ctor_set(x_1262, 7, x_1259);
lean_ctor_set_uint8(x_1262, sizeof(void*)*8, x_1254);
lean_ctor_set_uint8(x_1262, sizeof(void*)*8 + 1, x_1255);
lean_ctor_set_uint8(x_1262, sizeof(void*)*8 + 2, x_1256);
lean_ctor_set_uint8(x_1262, sizeof(void*)*8 + 3, x_1260);
lean_inc(x_1262);
lean_inc(x_1);
x_1263 = l_Lean_Elab_Deriving_DecEq_mkMatch_mkSameCtorRhs(x_1, x_107, x_1262, x_4, x_5, x_6, x_7, x_8, x_1249);
x_1264 = lean_ctor_get(x_1263, 0);
lean_inc(x_1264);
x_1265 = lean_ctor_get(x_1263, 1);
lean_inc(x_1265);
lean_dec(x_1263);
x_1266 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_7, x_8, x_1265);
x_1267 = lean_ctor_get(x_1266, 0);
lean_inc(x_1267);
x_1268 = lean_ctor_get(x_1266, 1);
lean_inc(x_1268);
lean_dec(x_1266);
x_1269 = l_Lean_Elab_Term_getCurrMacroScope(x_1262, x_4, x_5, x_6, x_7, x_8, x_1268);
x_1270 = lean_ctor_get(x_1269, 0);
lean_inc(x_1270);
x_1271 = lean_ctor_get(x_1269, 1);
lean_inc(x_1271);
lean_dec(x_1269);
x_1272 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_1271);
x_1273 = lean_ctor_get(x_1272, 0);
lean_inc(x_1273);
x_1274 = lean_ctor_get(x_1272, 1);
lean_inc(x_1274);
if (lean_is_exclusive(x_1272)) {
 lean_ctor_release(x_1272, 0);
 lean_ctor_release(x_1272, 1);
 x_1275 = x_1272;
} else {
 lean_dec_ref(x_1272);
 x_1275 = lean_box(0);
}
x_1276 = lean_box(0);
x_1277 = lean_mk_string("termDepIfThenElse");
x_1278 = lean_name_mk_string(x_1276, x_1277);
x_1279 = lean_mk_string("if");
lean_inc(x_1267);
x_1280 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1280, 0, x_1267);
lean_ctor_set(x_1280, 1, x_1279);
x_1281 = lean_mk_string("h");
x_1282 = lean_string_utf8_byte_size(x_1281);
x_1283 = lean_unsigned_to_nat(0u);
lean_inc(x_1281);
x_1284 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_1284, 0, x_1281);
lean_ctor_set(x_1284, 1, x_1283);
lean_ctor_set(x_1284, 2, x_1282);
x_1285 = lean_name_mk_string(x_1276, x_1281);
lean_inc(x_1270);
lean_inc(x_1273);
x_1286 = l_Lean_addMacroScope(x_1273, x_1285, x_1270);
x_1287 = lean_box(0);
lean_inc(x_1267);
x_1288 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_1288, 0, x_1267);
lean_ctor_set(x_1288, 1, x_1284);
lean_ctor_set(x_1288, 2, x_1286);
lean_ctor_set(x_1288, 3, x_1287);
x_1289 = lean_mk_string(":");
lean_inc(x_1267);
x_1290 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1290, 0, x_1267);
lean_ctor_set(x_1290, 1, x_1289);
x_1291 = lean_mk_string("term_=_");
x_1292 = lean_name_mk_string(x_1276, x_1291);
x_1293 = lean_mk_string("=");
lean_inc(x_1267);
x_1294 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1294, 0, x_1267);
lean_ctor_set(x_1294, 1, x_1293);
x_1295 = lean_unsigned_to_nat(3u);
x_1296 = lean_mk_empty_array_with_capacity(x_1295);
lean_inc(x_109);
lean_inc(x_1296);
x_1297 = lean_array_push(x_1296, x_109);
x_1298 = lean_array_push(x_1297, x_1294);
lean_inc(x_1235);
x_1299 = lean_array_push(x_1298, x_1235);
x_1300 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1300, 0, x_1292);
lean_ctor_set(x_1300, 1, x_1299);
x_1301 = lean_mk_string("then");
lean_inc(x_1267);
x_1302 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1302, 0, x_1267);
lean_ctor_set(x_1302, 1, x_1301);
x_1303 = lean_mk_string("Lean");
x_1304 = lean_name_mk_string(x_1276, x_1303);
x_1305 = lean_mk_string("Parser");
x_1306 = lean_name_mk_string(x_1304, x_1305);
x_1307 = lean_mk_string("Term");
lean_inc(x_1306);
x_1308 = lean_name_mk_string(x_1306, x_1307);
x_1309 = lean_mk_string("byTactic");
lean_inc(x_1308);
x_1310 = lean_name_mk_string(x_1308, x_1309);
x_1311 = lean_mk_string("by");
lean_inc(x_1267);
x_1312 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1312, 0, x_1267);
lean_ctor_set(x_1312, 1, x_1311);
x_1313 = lean_mk_string("Tactic");
x_1314 = lean_name_mk_string(x_1306, x_1313);
x_1315 = lean_mk_string("tacticSeq");
lean_inc(x_1314);
x_1316 = lean_name_mk_string(x_1314, x_1315);
x_1317 = lean_mk_string("tacticSeq1Indented");
lean_inc(x_1314);
x_1318 = lean_name_mk_string(x_1314, x_1317);
x_1319 = lean_mk_string("null");
x_1320 = lean_name_mk_string(x_1276, x_1319);
x_1321 = lean_mk_string("group");
x_1322 = lean_name_mk_string(x_1276, x_1321);
x_1323 = lean_mk_string("subst");
lean_inc(x_1323);
lean_inc(x_1314);
x_1324 = lean_name_mk_string(x_1314, x_1323);
lean_inc(x_1267);
x_1325 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1325, 0, x_1267);
lean_ctor_set(x_1325, 1, x_1323);
x_1326 = lean_mk_empty_array_with_capacity(x_1245);
lean_inc(x_1288);
lean_inc(x_1326);
x_1327 = lean_array_push(x_1326, x_1288);
lean_inc(x_1320);
x_1328 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1328, 0, x_1320);
lean_ctor_set(x_1328, 1, x_1327);
x_1329 = lean_unsigned_to_nat(2u);
x_1330 = lean_mk_empty_array_with_capacity(x_1329);
lean_inc(x_1330);
x_1331 = lean_array_push(x_1330, x_1325);
x_1332 = lean_array_push(x_1331, x_1328);
x_1333 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1333, 0, x_1324);
lean_ctor_set(x_1333, 1, x_1332);
x_1334 = lean_mk_string(";");
lean_inc(x_1334);
lean_inc(x_1267);
x_1335 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1335, 0, x_1267);
lean_ctor_set(x_1335, 1, x_1334);
lean_inc(x_1326);
x_1336 = lean_array_push(x_1326, x_1335);
lean_inc(x_1320);
x_1337 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1337, 0, x_1320);
lean_ctor_set(x_1337, 1, x_1336);
lean_inc(x_1330);
x_1338 = lean_array_push(x_1330, x_1333);
lean_inc(x_1337);
x_1339 = lean_array_push(x_1338, x_1337);
lean_inc(x_1322);
x_1340 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1340, 0, x_1322);
lean_ctor_set(x_1340, 1, x_1339);
x_1341 = lean_mk_string("exact");
lean_inc(x_1341);
lean_inc(x_1314);
x_1342 = lean_name_mk_string(x_1314, x_1341);
lean_inc(x_1267);
x_1343 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1343, 0, x_1267);
lean_ctor_set(x_1343, 1, x_1341);
lean_inc(x_1330);
x_1344 = lean_array_push(x_1330, x_1343);
x_1345 = lean_array_push(x_1344, x_1264);
x_1346 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1346, 0, x_1342);
lean_ctor_set(x_1346, 1, x_1345);
x_1347 = lean_mk_empty_array_with_capacity(x_1283);
lean_inc(x_1320);
x_1348 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1348, 0, x_1320);
lean_ctor_set(x_1348, 1, x_1347);
lean_inc(x_1330);
x_1349 = lean_array_push(x_1330, x_1346);
lean_inc(x_1348);
x_1350 = lean_array_push(x_1349, x_1348);
lean_inc(x_1322);
x_1351 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1351, 0, x_1322);
lean_ctor_set(x_1351, 1, x_1350);
lean_inc(x_1330);
x_1352 = lean_array_push(x_1330, x_1340);
x_1353 = lean_array_push(x_1352, x_1351);
lean_inc(x_1320);
x_1354 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1354, 0, x_1320);
lean_ctor_set(x_1354, 1, x_1353);
lean_inc(x_1326);
x_1355 = lean_array_push(x_1326, x_1354);
lean_inc(x_1318);
x_1356 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1356, 0, x_1318);
lean_ctor_set(x_1356, 1, x_1355);
lean_inc(x_1326);
x_1357 = lean_array_push(x_1326, x_1356);
lean_inc(x_1316);
x_1358 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1358, 0, x_1316);
lean_ctor_set(x_1358, 1, x_1357);
lean_inc(x_1330);
x_1359 = lean_array_push(x_1330, x_1312);
lean_inc(x_1359);
x_1360 = lean_array_push(x_1359, x_1358);
lean_inc(x_1310);
x_1361 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1361, 0, x_1310);
lean_ctor_set(x_1361, 1, x_1360);
x_1362 = lean_mk_string("else");
lean_inc(x_1267);
x_1363 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1363, 0, x_1267);
lean_ctor_set(x_1363, 1, x_1362);
x_1364 = lean_mk_string("app");
lean_inc(x_1308);
x_1365 = lean_name_mk_string(x_1308, x_1364);
x_1366 = lean_mk_string("isFalse");
x_1367 = lean_string_utf8_byte_size(x_1366);
lean_inc(x_1366);
x_1368 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_1368, 0, x_1366);
lean_ctor_set(x_1368, 1, x_1283);
lean_ctor_set(x_1368, 2, x_1367);
lean_inc(x_1366);
x_1369 = lean_name_mk_string(x_1276, x_1366);
lean_inc(x_1270);
lean_inc(x_1273);
x_1370 = l_Lean_addMacroScope(x_1273, x_1369, x_1270);
x_1371 = lean_mk_string("Decidable");
x_1372 = lean_name_mk_string(x_1276, x_1371);
x_1373 = lean_name_mk_string(x_1372, x_1366);
x_1374 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1374, 0, x_1373);
lean_ctor_set(x_1374, 1, x_1287);
lean_ctor_set(x_2, 1, x_1287);
lean_ctor_set(x_2, 0, x_1374);
lean_inc(x_1267);
x_1375 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_1375, 0, x_1267);
lean_ctor_set(x_1375, 1, x_1368);
lean_ctor_set(x_1375, 2, x_1370);
lean_ctor_set(x_1375, 3, x_2);
x_1376 = lean_mk_string("paren");
lean_inc(x_1308);
x_1377 = lean_name_mk_string(x_1308, x_1376);
x_1378 = lean_mk_string("(");
lean_inc(x_1267);
x_1379 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1379, 0, x_1267);
lean_ctor_set(x_1379, 1, x_1378);
x_1380 = lean_mk_string("intro");
lean_inc(x_1380);
lean_inc(x_1314);
x_1381 = lean_name_mk_string(x_1314, x_1380);
lean_inc(x_1267);
x_1382 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1382, 0, x_1267);
lean_ctor_set(x_1382, 1, x_1380);
x_1383 = lean_mk_string("n");
x_1384 = lean_string_utf8_byte_size(x_1383);
lean_inc(x_1383);
x_1385 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_1385, 0, x_1383);
lean_ctor_set(x_1385, 1, x_1283);
lean_ctor_set(x_1385, 2, x_1384);
x_1386 = lean_name_mk_string(x_1276, x_1383);
x_1387 = l_Lean_addMacroScope(x_1273, x_1386, x_1270);
lean_inc(x_1267);
x_1388 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_1388, 0, x_1267);
lean_ctor_set(x_1388, 1, x_1385);
lean_ctor_set(x_1388, 2, x_1387);
lean_ctor_set(x_1388, 3, x_1287);
lean_inc(x_1388);
lean_inc(x_1326);
x_1389 = lean_array_push(x_1326, x_1388);
lean_inc(x_1320);
x_1390 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1390, 0, x_1320);
lean_ctor_set(x_1390, 1, x_1389);
lean_inc(x_1330);
x_1391 = lean_array_push(x_1330, x_1382);
x_1392 = lean_array_push(x_1391, x_1390);
x_1393 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1393, 0, x_1381);
lean_ctor_set(x_1393, 1, x_1392);
lean_inc(x_1330);
x_1394 = lean_array_push(x_1330, x_1393);
lean_inc(x_1337);
x_1395 = lean_array_push(x_1394, x_1337);
lean_inc(x_1322);
x_1396 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1396, 0, x_1322);
lean_ctor_set(x_1396, 1, x_1395);
x_1397 = lean_mk_string("injection");
lean_inc(x_1397);
lean_inc(x_1314);
x_1398 = lean_name_mk_string(x_1314, x_1397);
lean_inc(x_1267);
x_1399 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1399, 0, x_1267);
lean_ctor_set(x_1399, 1, x_1397);
lean_inc(x_1296);
x_1400 = lean_array_push(x_1296, x_1399);
x_1401 = lean_array_push(x_1400, x_1388);
lean_inc(x_1348);
x_1402 = lean_array_push(x_1401, x_1348);
x_1403 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1403, 0, x_1398);
lean_ctor_set(x_1403, 1, x_1402);
lean_inc(x_1330);
x_1404 = lean_array_push(x_1330, x_1403);
lean_inc(x_1337);
x_1405 = lean_array_push(x_1404, x_1337);
lean_inc(x_1322);
x_1406 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1406, 0, x_1322);
lean_ctor_set(x_1406, 1, x_1405);
x_1407 = lean_mk_string("apply");
lean_inc(x_1407);
lean_inc(x_1314);
x_1408 = lean_name_mk_string(x_1314, x_1407);
lean_inc(x_1267);
x_1409 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1409, 0, x_1267);
lean_ctor_set(x_1409, 1, x_1407);
x_1410 = lean_mk_string("hole");
lean_inc(x_1308);
x_1411 = lean_name_mk_string(x_1308, x_1410);
x_1412 = lean_mk_string("_");
lean_inc(x_1267);
x_1413 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1413, 0, x_1267);
lean_ctor_set(x_1413, 1, x_1412);
lean_inc(x_1326);
x_1414 = lean_array_push(x_1326, x_1413);
x_1415 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1415, 0, x_1411);
lean_ctor_set(x_1415, 1, x_1414);
lean_inc(x_1326);
x_1416 = lean_array_push(x_1326, x_1415);
lean_inc(x_1320);
x_1417 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1417, 0, x_1320);
lean_ctor_set(x_1417, 1, x_1416);
lean_inc(x_1288);
lean_inc(x_1330);
x_1418 = lean_array_push(x_1330, x_1288);
x_1419 = lean_array_push(x_1418, x_1417);
lean_inc(x_1365);
x_1420 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1420, 0, x_1365);
lean_ctor_set(x_1420, 1, x_1419);
lean_inc(x_1330);
x_1421 = lean_array_push(x_1330, x_1409);
x_1422 = lean_array_push(x_1421, x_1420);
x_1423 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1423, 0, x_1408);
lean_ctor_set(x_1423, 1, x_1422);
lean_inc(x_1330);
x_1424 = lean_array_push(x_1330, x_1423);
x_1425 = lean_array_push(x_1424, x_1337);
lean_inc(x_1322);
x_1426 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1426, 0, x_1322);
lean_ctor_set(x_1426, 1, x_1425);
x_1427 = lean_mk_string("assumption");
lean_inc(x_1427);
x_1428 = lean_name_mk_string(x_1314, x_1427);
lean_inc(x_1267);
x_1429 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1429, 0, x_1267);
lean_ctor_set(x_1429, 1, x_1427);
lean_inc(x_1326);
x_1430 = lean_array_push(x_1326, x_1429);
x_1431 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1431, 0, x_1428);
lean_ctor_set(x_1431, 1, x_1430);
lean_inc(x_1330);
x_1432 = lean_array_push(x_1330, x_1431);
lean_inc(x_1348);
x_1433 = lean_array_push(x_1432, x_1348);
x_1434 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1434, 0, x_1322);
lean_ctor_set(x_1434, 1, x_1433);
x_1435 = lean_unsigned_to_nat(4u);
x_1436 = lean_mk_empty_array_with_capacity(x_1435);
lean_inc(x_1436);
x_1437 = lean_array_push(x_1436, x_1396);
x_1438 = lean_array_push(x_1437, x_1406);
x_1439 = lean_array_push(x_1438, x_1426);
x_1440 = lean_array_push(x_1439, x_1434);
lean_inc(x_1320);
x_1441 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1441, 0, x_1320);
lean_ctor_set(x_1441, 1, x_1440);
lean_inc(x_1326);
x_1442 = lean_array_push(x_1326, x_1441);
x_1443 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1443, 0, x_1318);
lean_ctor_set(x_1443, 1, x_1442);
lean_inc(x_1326);
x_1444 = lean_array_push(x_1326, x_1443);
x_1445 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1445, 0, x_1316);
lean_ctor_set(x_1445, 1, x_1444);
x_1446 = lean_array_push(x_1359, x_1445);
x_1447 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1447, 0, x_1310);
lean_ctor_set(x_1447, 1, x_1446);
lean_inc(x_1330);
x_1448 = lean_array_push(x_1330, x_1447);
lean_inc(x_1348);
x_1449 = lean_array_push(x_1448, x_1348);
lean_inc(x_1320);
x_1450 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1450, 0, x_1320);
lean_ctor_set(x_1450, 1, x_1449);
x_1451 = lean_mk_string(")");
x_1452 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1452, 0, x_1267);
lean_ctor_set(x_1452, 1, x_1451);
x_1453 = lean_array_push(x_1296, x_1379);
x_1454 = lean_array_push(x_1453, x_1450);
x_1455 = lean_array_push(x_1454, x_1452);
x_1456 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1456, 0, x_1377);
lean_ctor_set(x_1456, 1, x_1455);
lean_inc(x_1326);
x_1457 = lean_array_push(x_1326, x_1456);
lean_inc(x_1320);
x_1458 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1458, 0, x_1320);
lean_ctor_set(x_1458, 1, x_1457);
lean_inc(x_1330);
x_1459 = lean_array_push(x_1330, x_1375);
x_1460 = lean_array_push(x_1459, x_1458);
lean_inc(x_1365);
x_1461 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1461, 0, x_1365);
lean_ctor_set(x_1461, 1, x_1460);
x_1462 = lean_unsigned_to_nat(8u);
x_1463 = lean_mk_empty_array_with_capacity(x_1462);
x_1464 = lean_array_push(x_1463, x_1280);
x_1465 = lean_array_push(x_1464, x_1288);
x_1466 = lean_array_push(x_1465, x_1290);
x_1467 = lean_array_push(x_1466, x_1300);
x_1468 = lean_array_push(x_1467, x_1302);
x_1469 = lean_array_push(x_1468, x_1361);
x_1470 = lean_array_push(x_1469, x_1363);
x_1471 = lean_array_push(x_1470, x_1461);
x_1472 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1472, 0, x_1278);
lean_ctor_set(x_1472, 1, x_1471);
x_1473 = lean_unbox(x_1236);
lean_dec(x_1236);
if (x_1473 == 0)
{
lean_object* x_1474; 
lean_dec(x_1436);
lean_dec(x_1365);
lean_dec(x_1348);
lean_dec(x_1334);
lean_dec(x_1330);
lean_dec(x_1326);
lean_dec(x_1320);
lean_dec(x_1308);
lean_dec(x_1262);
lean_dec(x_1235);
lean_dec(x_109);
lean_dec(x_1);
if (lean_is_scalar(x_1275)) {
 x_1474 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1474 = x_1275;
}
lean_ctor_set(x_1474, 0, x_1472);
lean_ctor_set(x_1474, 1, x_1274);
return x_1474;
}
else
{
lean_object* x_1475; lean_object* x_1476; lean_object* x_1477; lean_object* x_1478; lean_object* x_1479; lean_object* x_1480; lean_object* x_1481; lean_object* x_1482; lean_object* x_1483; lean_object* x_1484; lean_object* x_1485; lean_object* x_1486; lean_object* x_1487; lean_object* x_1488; lean_object* x_1489; lean_object* x_1490; lean_object* x_1491; lean_object* x_1492; lean_object* x_1493; lean_object* x_1494; lean_object* x_1495; lean_object* x_1496; lean_object* x_1497; lean_object* x_1498; lean_object* x_1499; lean_object* x_1500; lean_object* x_1501; lean_object* x_1502; lean_object* x_1503; lean_object* x_1504; lean_object* x_1505; lean_object* x_1506; lean_object* x_1507; lean_object* x_1508; lean_object* x_1509; lean_object* x_1510; lean_object* x_1511; lean_object* x_1512; lean_object* x_1513; lean_object* x_1514; lean_object* x_1515; lean_object* x_1516; lean_object* x_1517; lean_object* x_1518; lean_object* x_1519; lean_object* x_1520; lean_object* x_1521; lean_object* x_1522; lean_object* x_1523; lean_object* x_1524; lean_object* x_1525; 
lean_dec(x_1275);
x_1475 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_7, x_8, x_1274);
x_1476 = lean_ctor_get(x_1475, 0);
lean_inc(x_1476);
x_1477 = lean_ctor_get(x_1475, 1);
lean_inc(x_1477);
lean_dec(x_1475);
x_1478 = l_Lean_Elab_Term_getCurrMacroScope(x_1262, x_4, x_5, x_6, x_7, x_8, x_1477);
lean_dec(x_1262);
x_1479 = lean_ctor_get(x_1478, 0);
lean_inc(x_1479);
x_1480 = lean_ctor_get(x_1478, 1);
lean_inc(x_1480);
lean_dec(x_1478);
x_1481 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_1480);
x_1482 = lean_ctor_get(x_1481, 0);
lean_inc(x_1482);
x_1483 = lean_ctor_get(x_1481, 1);
lean_inc(x_1483);
if (lean_is_exclusive(x_1481)) {
 lean_ctor_release(x_1481, 0);
 lean_ctor_release(x_1481, 1);
 x_1484 = x_1481;
} else {
 lean_dec_ref(x_1481);
 x_1484 = lean_box(0);
}
x_1485 = lean_mk_string("let");
lean_inc(x_1485);
lean_inc(x_1308);
x_1486 = lean_name_mk_string(x_1308, x_1485);
lean_inc(x_1476);
x_1487 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1487, 0, x_1476);
lean_ctor_set(x_1487, 1, x_1485);
x_1488 = lean_mk_string("letDecl");
lean_inc(x_1308);
x_1489 = lean_name_mk_string(x_1308, x_1488);
x_1490 = lean_mk_string("letIdDecl");
x_1491 = lean_name_mk_string(x_1308, x_1490);
x_1492 = lean_mk_string("inst");
x_1493 = lean_string_utf8_byte_size(x_1492);
lean_inc(x_1492);
x_1494 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_1494, 0, x_1492);
lean_ctor_set(x_1494, 1, x_1283);
lean_ctor_set(x_1494, 2, x_1493);
x_1495 = lean_name_mk_string(x_1276, x_1492);
x_1496 = l_Lean_addMacroScope(x_1482, x_1495, x_1479);
lean_inc(x_1476);
x_1497 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_1497, 0, x_1476);
lean_ctor_set(x_1497, 1, x_1494);
lean_ctor_set(x_1497, 2, x_1496);
lean_ctor_set(x_1497, 3, x_1287);
x_1498 = lean_mk_string(":=");
lean_inc(x_1476);
x_1499 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1499, 0, x_1476);
lean_ctor_set(x_1499, 1, x_1498);
x_1500 = lean_mk_syntax_ident(x_1);
lean_inc(x_1330);
x_1501 = lean_array_push(x_1330, x_109);
x_1502 = lean_array_push(x_1501, x_1235);
lean_inc(x_1320);
x_1503 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1503, 0, x_1320);
lean_ctor_set(x_1503, 1, x_1502);
x_1504 = lean_array_push(x_1330, x_1500);
x_1505 = lean_array_push(x_1504, x_1503);
x_1506 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1506, 0, x_1365);
lean_ctor_set(x_1506, 1, x_1505);
x_1507 = lean_unsigned_to_nat(5u);
x_1508 = lean_mk_empty_array_with_capacity(x_1507);
x_1509 = lean_array_push(x_1508, x_1497);
lean_inc(x_1348);
x_1510 = lean_array_push(x_1509, x_1348);
x_1511 = lean_array_push(x_1510, x_1348);
x_1512 = lean_array_push(x_1511, x_1499);
x_1513 = lean_array_push(x_1512, x_1506);
x_1514 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1514, 0, x_1491);
lean_ctor_set(x_1514, 1, x_1513);
lean_inc(x_1326);
x_1515 = lean_array_push(x_1326, x_1514);
x_1516 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1516, 0, x_1489);
lean_ctor_set(x_1516, 1, x_1515);
x_1517 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1517, 0, x_1476);
lean_ctor_set(x_1517, 1, x_1334);
x_1518 = lean_array_push(x_1326, x_1517);
x_1519 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1519, 0, x_1320);
lean_ctor_set(x_1519, 1, x_1518);
x_1520 = lean_array_push(x_1436, x_1487);
x_1521 = lean_array_push(x_1520, x_1516);
x_1522 = lean_array_push(x_1521, x_1519);
x_1523 = lean_array_push(x_1522, x_1472);
x_1524 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1524, 0, x_1486);
lean_ctor_set(x_1524, 1, x_1523);
if (lean_is_scalar(x_1484)) {
 x_1525 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1525 = x_1484;
}
lean_ctor_set(x_1525, 0, x_1524);
lean_ctor_set(x_1525, 1, x_1483);
return x_1525;
}
}
}
else
{
lean_object* x_1526; lean_object* x_1527; lean_object* x_1528; lean_object* x_1529; lean_object* x_1530; lean_object* x_1531; lean_object* x_1532; lean_object* x_1533; lean_object* x_1534; lean_object* x_1535; lean_object* x_1536; lean_object* x_1537; lean_object* x_1538; lean_object* x_1539; lean_object* x_1540; lean_object* x_1541; lean_object* x_1542; lean_object* x_1543; lean_object* x_1544; lean_object* x_1545; lean_object* x_1546; lean_object* x_1547; uint8_t x_1548; uint8_t x_1549; uint8_t x_1550; lean_object* x_1551; lean_object* x_1552; lean_object* x_1553; uint8_t x_1554; lean_object* x_1555; lean_object* x_1556; lean_object* x_1557; lean_object* x_1558; lean_object* x_1559; lean_object* x_1560; lean_object* x_1561; lean_object* x_1562; lean_object* x_1563; lean_object* x_1564; lean_object* x_1565; lean_object* x_1566; lean_object* x_1567; lean_object* x_1568; lean_object* x_1569; lean_object* x_1570; lean_object* x_1571; lean_object* x_1572; lean_object* x_1573; lean_object* x_1574; lean_object* x_1575; lean_object* x_1576; lean_object* x_1577; lean_object* x_1578; lean_object* x_1579; lean_object* x_1580; lean_object* x_1581; lean_object* x_1582; lean_object* x_1583; lean_object* x_1584; lean_object* x_1585; lean_object* x_1586; lean_object* x_1587; lean_object* x_1588; lean_object* x_1589; lean_object* x_1590; lean_object* x_1591; lean_object* x_1592; lean_object* x_1593; lean_object* x_1594; lean_object* x_1595; lean_object* x_1596; lean_object* x_1597; lean_object* x_1598; lean_object* x_1599; lean_object* x_1600; lean_object* x_1601; lean_object* x_1602; lean_object* x_1603; lean_object* x_1604; lean_object* x_1605; lean_object* x_1606; lean_object* x_1607; lean_object* x_1608; lean_object* x_1609; lean_object* x_1610; lean_object* x_1611; lean_object* x_1612; lean_object* x_1613; lean_object* x_1614; lean_object* x_1615; lean_object* x_1616; lean_object* x_1617; lean_object* x_1618; lean_object* x_1619; lean_object* x_1620; lean_object* x_1621; lean_object* x_1622; lean_object* x_1623; lean_object* x_1624; lean_object* x_1625; lean_object* x_1626; lean_object* x_1627; lean_object* x_1628; lean_object* x_1629; lean_object* x_1630; lean_object* x_1631; lean_object* x_1632; lean_object* x_1633; lean_object* x_1634; lean_object* x_1635; lean_object* x_1636; lean_object* x_1637; lean_object* x_1638; lean_object* x_1639; lean_object* x_1640; lean_object* x_1641; lean_object* x_1642; lean_object* x_1643; lean_object* x_1644; lean_object* x_1645; lean_object* x_1646; lean_object* x_1647; lean_object* x_1648; lean_object* x_1649; lean_object* x_1650; lean_object* x_1651; lean_object* x_1652; lean_object* x_1653; lean_object* x_1654; lean_object* x_1655; lean_object* x_1656; lean_object* x_1657; lean_object* x_1658; lean_object* x_1659; lean_object* x_1660; lean_object* x_1661; lean_object* x_1662; lean_object* x_1663; lean_object* x_1664; lean_object* x_1665; lean_object* x_1666; lean_object* x_1667; lean_object* x_1668; lean_object* x_1669; lean_object* x_1670; lean_object* x_1671; lean_object* x_1672; lean_object* x_1673; lean_object* x_1674; lean_object* x_1675; lean_object* x_1676; lean_object* x_1677; lean_object* x_1678; lean_object* x_1679; lean_object* x_1680; lean_object* x_1681; lean_object* x_1682; lean_object* x_1683; lean_object* x_1684; lean_object* x_1685; lean_object* x_1686; lean_object* x_1687; lean_object* x_1688; lean_object* x_1689; lean_object* x_1690; lean_object* x_1691; lean_object* x_1692; lean_object* x_1693; lean_object* x_1694; lean_object* x_1695; lean_object* x_1696; lean_object* x_1697; lean_object* x_1698; lean_object* x_1699; lean_object* x_1700; lean_object* x_1701; lean_object* x_1702; lean_object* x_1703; lean_object* x_1704; lean_object* x_1705; lean_object* x_1706; lean_object* x_1707; lean_object* x_1708; lean_object* x_1709; lean_object* x_1710; lean_object* x_1711; lean_object* x_1712; lean_object* x_1713; lean_object* x_1714; lean_object* x_1715; lean_object* x_1716; lean_object* x_1717; lean_object* x_1718; lean_object* x_1719; lean_object* x_1720; lean_object* x_1721; lean_object* x_1722; lean_object* x_1723; lean_object* x_1724; lean_object* x_1725; lean_object* x_1726; lean_object* x_1727; lean_object* x_1728; lean_object* x_1729; lean_object* x_1730; lean_object* x_1731; lean_object* x_1732; lean_object* x_1733; lean_object* x_1734; lean_object* x_1735; lean_object* x_1736; lean_object* x_1737; lean_object* x_1738; lean_object* x_1739; lean_object* x_1740; lean_object* x_1741; lean_object* x_1742; lean_object* x_1743; lean_object* x_1744; lean_object* x_1745; lean_object* x_1746; lean_object* x_1747; lean_object* x_1748; lean_object* x_1749; lean_object* x_1750; lean_object* x_1751; lean_object* x_1752; lean_object* x_1753; lean_object* x_1754; lean_object* x_1755; lean_object* x_1756; lean_object* x_1757; lean_object* x_1758; lean_object* x_1759; lean_object* x_1760; lean_object* x_1761; lean_object* x_1762; lean_object* x_1763; lean_object* x_1764; lean_object* x_1765; lean_object* x_1766; lean_object* x_1767; uint8_t x_1768; 
x_1526 = lean_ctor_get(x_2, 1);
lean_inc(x_1526);
lean_dec(x_2);
x_1527 = lean_ctor_get(x_104, 0);
lean_inc(x_1527);
lean_dec(x_104);
x_1528 = lean_ctor_get(x_105, 0);
lean_inc(x_1528);
x_1529 = lean_ctor_get(x_105, 1);
lean_inc(x_1529);
if (lean_is_exclusive(x_105)) {
 lean_ctor_release(x_105, 0);
 lean_ctor_release(x_105, 1);
 x_1530 = x_105;
} else {
 lean_dec_ref(x_105);
 x_1530 = lean_box(0);
}
x_1531 = lean_st_ref_take(x_8, x_9);
x_1532 = lean_ctor_get(x_1531, 0);
lean_inc(x_1532);
x_1533 = lean_ctor_get(x_1531, 1);
lean_inc(x_1533);
lean_dec(x_1531);
x_1534 = lean_ctor_get(x_1532, 0);
lean_inc(x_1534);
x_1535 = lean_ctor_get(x_1532, 1);
lean_inc(x_1535);
x_1536 = lean_ctor_get(x_1532, 2);
lean_inc(x_1536);
x_1537 = lean_ctor_get(x_1532, 3);
lean_inc(x_1537);
if (lean_is_exclusive(x_1532)) {
 lean_ctor_release(x_1532, 0);
 lean_ctor_release(x_1532, 1);
 lean_ctor_release(x_1532, 2);
 lean_ctor_release(x_1532, 3);
 x_1538 = x_1532;
} else {
 lean_dec_ref(x_1532);
 x_1538 = lean_box(0);
}
x_1539 = lean_unsigned_to_nat(1u);
x_1540 = lean_nat_add(x_1535, x_1539);
if (lean_is_scalar(x_1538)) {
 x_1541 = lean_alloc_ctor(0, 4, 0);
} else {
 x_1541 = x_1538;
}
lean_ctor_set(x_1541, 0, x_1534);
lean_ctor_set(x_1541, 1, x_1540);
lean_ctor_set(x_1541, 2, x_1536);
lean_ctor_set(x_1541, 3, x_1537);
x_1542 = lean_st_ref_set(x_8, x_1541, x_1533);
x_1543 = lean_ctor_get(x_1542, 1);
lean_inc(x_1543);
lean_dec(x_1542);
x_1544 = lean_ctor_get(x_3, 0);
lean_inc(x_1544);
x_1545 = lean_ctor_get(x_3, 1);
lean_inc(x_1545);
x_1546 = lean_ctor_get(x_3, 2);
lean_inc(x_1546);
x_1547 = lean_ctor_get(x_3, 3);
lean_inc(x_1547);
x_1548 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_1549 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
x_1550 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 2);
x_1551 = lean_ctor_get(x_3, 5);
lean_inc(x_1551);
x_1552 = lean_ctor_get(x_3, 6);
lean_inc(x_1552);
x_1553 = lean_ctor_get(x_3, 7);
lean_inc(x_1553);
x_1554 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 3);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 lean_ctor_release(x_3, 4);
 lean_ctor_release(x_3, 5);
 lean_ctor_release(x_3, 6);
 lean_ctor_release(x_3, 7);
 x_1555 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1555 = lean_box(0);
}
if (lean_is_scalar(x_1555)) {
 x_1556 = lean_alloc_ctor(0, 8, 4);
} else {
 x_1556 = x_1555;
}
lean_ctor_set(x_1556, 0, x_1544);
lean_ctor_set(x_1556, 1, x_1545);
lean_ctor_set(x_1556, 2, x_1546);
lean_ctor_set(x_1556, 3, x_1547);
lean_ctor_set(x_1556, 4, x_1535);
lean_ctor_set(x_1556, 5, x_1551);
lean_ctor_set(x_1556, 6, x_1552);
lean_ctor_set(x_1556, 7, x_1553);
lean_ctor_set_uint8(x_1556, sizeof(void*)*8, x_1548);
lean_ctor_set_uint8(x_1556, sizeof(void*)*8 + 1, x_1549);
lean_ctor_set_uint8(x_1556, sizeof(void*)*8 + 2, x_1550);
lean_ctor_set_uint8(x_1556, sizeof(void*)*8 + 3, x_1554);
lean_inc(x_1556);
lean_inc(x_1);
x_1557 = l_Lean_Elab_Deriving_DecEq_mkMatch_mkSameCtorRhs(x_1, x_1526, x_1556, x_4, x_5, x_6, x_7, x_8, x_1543);
x_1558 = lean_ctor_get(x_1557, 0);
lean_inc(x_1558);
x_1559 = lean_ctor_get(x_1557, 1);
lean_inc(x_1559);
lean_dec(x_1557);
x_1560 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_7, x_8, x_1559);
x_1561 = lean_ctor_get(x_1560, 0);
lean_inc(x_1561);
x_1562 = lean_ctor_get(x_1560, 1);
lean_inc(x_1562);
lean_dec(x_1560);
x_1563 = l_Lean_Elab_Term_getCurrMacroScope(x_1556, x_4, x_5, x_6, x_7, x_8, x_1562);
x_1564 = lean_ctor_get(x_1563, 0);
lean_inc(x_1564);
x_1565 = lean_ctor_get(x_1563, 1);
lean_inc(x_1565);
lean_dec(x_1563);
x_1566 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_1565);
x_1567 = lean_ctor_get(x_1566, 0);
lean_inc(x_1567);
x_1568 = lean_ctor_get(x_1566, 1);
lean_inc(x_1568);
if (lean_is_exclusive(x_1566)) {
 lean_ctor_release(x_1566, 0);
 lean_ctor_release(x_1566, 1);
 x_1569 = x_1566;
} else {
 lean_dec_ref(x_1566);
 x_1569 = lean_box(0);
}
x_1570 = lean_box(0);
x_1571 = lean_mk_string("termDepIfThenElse");
x_1572 = lean_name_mk_string(x_1570, x_1571);
x_1573 = lean_mk_string("if");
lean_inc(x_1561);
x_1574 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1574, 0, x_1561);
lean_ctor_set(x_1574, 1, x_1573);
x_1575 = lean_mk_string("h");
x_1576 = lean_string_utf8_byte_size(x_1575);
x_1577 = lean_unsigned_to_nat(0u);
lean_inc(x_1575);
x_1578 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_1578, 0, x_1575);
lean_ctor_set(x_1578, 1, x_1577);
lean_ctor_set(x_1578, 2, x_1576);
x_1579 = lean_name_mk_string(x_1570, x_1575);
lean_inc(x_1564);
lean_inc(x_1567);
x_1580 = l_Lean_addMacroScope(x_1567, x_1579, x_1564);
x_1581 = lean_box(0);
lean_inc(x_1561);
x_1582 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_1582, 0, x_1561);
lean_ctor_set(x_1582, 1, x_1578);
lean_ctor_set(x_1582, 2, x_1580);
lean_ctor_set(x_1582, 3, x_1581);
x_1583 = lean_mk_string(":");
lean_inc(x_1561);
x_1584 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1584, 0, x_1561);
lean_ctor_set(x_1584, 1, x_1583);
x_1585 = lean_mk_string("term_=_");
x_1586 = lean_name_mk_string(x_1570, x_1585);
x_1587 = lean_mk_string("=");
lean_inc(x_1561);
x_1588 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1588, 0, x_1561);
lean_ctor_set(x_1588, 1, x_1587);
x_1589 = lean_unsigned_to_nat(3u);
x_1590 = lean_mk_empty_array_with_capacity(x_1589);
lean_inc(x_1527);
lean_inc(x_1590);
x_1591 = lean_array_push(x_1590, x_1527);
x_1592 = lean_array_push(x_1591, x_1588);
lean_inc(x_1528);
x_1593 = lean_array_push(x_1592, x_1528);
x_1594 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1594, 0, x_1586);
lean_ctor_set(x_1594, 1, x_1593);
x_1595 = lean_mk_string("then");
lean_inc(x_1561);
x_1596 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1596, 0, x_1561);
lean_ctor_set(x_1596, 1, x_1595);
x_1597 = lean_mk_string("Lean");
x_1598 = lean_name_mk_string(x_1570, x_1597);
x_1599 = lean_mk_string("Parser");
x_1600 = lean_name_mk_string(x_1598, x_1599);
x_1601 = lean_mk_string("Term");
lean_inc(x_1600);
x_1602 = lean_name_mk_string(x_1600, x_1601);
x_1603 = lean_mk_string("byTactic");
lean_inc(x_1602);
x_1604 = lean_name_mk_string(x_1602, x_1603);
x_1605 = lean_mk_string("by");
lean_inc(x_1561);
x_1606 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1606, 0, x_1561);
lean_ctor_set(x_1606, 1, x_1605);
x_1607 = lean_mk_string("Tactic");
x_1608 = lean_name_mk_string(x_1600, x_1607);
x_1609 = lean_mk_string("tacticSeq");
lean_inc(x_1608);
x_1610 = lean_name_mk_string(x_1608, x_1609);
x_1611 = lean_mk_string("tacticSeq1Indented");
lean_inc(x_1608);
x_1612 = lean_name_mk_string(x_1608, x_1611);
x_1613 = lean_mk_string("null");
x_1614 = lean_name_mk_string(x_1570, x_1613);
x_1615 = lean_mk_string("group");
x_1616 = lean_name_mk_string(x_1570, x_1615);
x_1617 = lean_mk_string("subst");
lean_inc(x_1617);
lean_inc(x_1608);
x_1618 = lean_name_mk_string(x_1608, x_1617);
lean_inc(x_1561);
x_1619 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1619, 0, x_1561);
lean_ctor_set(x_1619, 1, x_1617);
x_1620 = lean_mk_empty_array_with_capacity(x_1539);
lean_inc(x_1582);
lean_inc(x_1620);
x_1621 = lean_array_push(x_1620, x_1582);
lean_inc(x_1614);
x_1622 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1622, 0, x_1614);
lean_ctor_set(x_1622, 1, x_1621);
x_1623 = lean_unsigned_to_nat(2u);
x_1624 = lean_mk_empty_array_with_capacity(x_1623);
lean_inc(x_1624);
x_1625 = lean_array_push(x_1624, x_1619);
x_1626 = lean_array_push(x_1625, x_1622);
x_1627 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1627, 0, x_1618);
lean_ctor_set(x_1627, 1, x_1626);
x_1628 = lean_mk_string(";");
lean_inc(x_1628);
lean_inc(x_1561);
x_1629 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1629, 0, x_1561);
lean_ctor_set(x_1629, 1, x_1628);
lean_inc(x_1620);
x_1630 = lean_array_push(x_1620, x_1629);
lean_inc(x_1614);
x_1631 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1631, 0, x_1614);
lean_ctor_set(x_1631, 1, x_1630);
lean_inc(x_1624);
x_1632 = lean_array_push(x_1624, x_1627);
lean_inc(x_1631);
x_1633 = lean_array_push(x_1632, x_1631);
lean_inc(x_1616);
x_1634 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1634, 0, x_1616);
lean_ctor_set(x_1634, 1, x_1633);
x_1635 = lean_mk_string("exact");
lean_inc(x_1635);
lean_inc(x_1608);
x_1636 = lean_name_mk_string(x_1608, x_1635);
lean_inc(x_1561);
x_1637 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1637, 0, x_1561);
lean_ctor_set(x_1637, 1, x_1635);
lean_inc(x_1624);
x_1638 = lean_array_push(x_1624, x_1637);
x_1639 = lean_array_push(x_1638, x_1558);
x_1640 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1640, 0, x_1636);
lean_ctor_set(x_1640, 1, x_1639);
x_1641 = lean_mk_empty_array_with_capacity(x_1577);
lean_inc(x_1614);
x_1642 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1642, 0, x_1614);
lean_ctor_set(x_1642, 1, x_1641);
lean_inc(x_1624);
x_1643 = lean_array_push(x_1624, x_1640);
lean_inc(x_1642);
x_1644 = lean_array_push(x_1643, x_1642);
lean_inc(x_1616);
x_1645 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1645, 0, x_1616);
lean_ctor_set(x_1645, 1, x_1644);
lean_inc(x_1624);
x_1646 = lean_array_push(x_1624, x_1634);
x_1647 = lean_array_push(x_1646, x_1645);
lean_inc(x_1614);
x_1648 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1648, 0, x_1614);
lean_ctor_set(x_1648, 1, x_1647);
lean_inc(x_1620);
x_1649 = lean_array_push(x_1620, x_1648);
lean_inc(x_1612);
x_1650 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1650, 0, x_1612);
lean_ctor_set(x_1650, 1, x_1649);
lean_inc(x_1620);
x_1651 = lean_array_push(x_1620, x_1650);
lean_inc(x_1610);
x_1652 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1652, 0, x_1610);
lean_ctor_set(x_1652, 1, x_1651);
lean_inc(x_1624);
x_1653 = lean_array_push(x_1624, x_1606);
lean_inc(x_1653);
x_1654 = lean_array_push(x_1653, x_1652);
lean_inc(x_1604);
x_1655 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1655, 0, x_1604);
lean_ctor_set(x_1655, 1, x_1654);
x_1656 = lean_mk_string("else");
lean_inc(x_1561);
x_1657 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1657, 0, x_1561);
lean_ctor_set(x_1657, 1, x_1656);
x_1658 = lean_mk_string("app");
lean_inc(x_1602);
x_1659 = lean_name_mk_string(x_1602, x_1658);
x_1660 = lean_mk_string("isFalse");
x_1661 = lean_string_utf8_byte_size(x_1660);
lean_inc(x_1660);
x_1662 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_1662, 0, x_1660);
lean_ctor_set(x_1662, 1, x_1577);
lean_ctor_set(x_1662, 2, x_1661);
lean_inc(x_1660);
x_1663 = lean_name_mk_string(x_1570, x_1660);
lean_inc(x_1564);
lean_inc(x_1567);
x_1664 = l_Lean_addMacroScope(x_1567, x_1663, x_1564);
x_1665 = lean_mk_string("Decidable");
x_1666 = lean_name_mk_string(x_1570, x_1665);
x_1667 = lean_name_mk_string(x_1666, x_1660);
if (lean_is_scalar(x_1530)) {
 x_1668 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1668 = x_1530;
}
lean_ctor_set(x_1668, 0, x_1667);
lean_ctor_set(x_1668, 1, x_1581);
x_1669 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1669, 0, x_1668);
lean_ctor_set(x_1669, 1, x_1581);
lean_inc(x_1561);
x_1670 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_1670, 0, x_1561);
lean_ctor_set(x_1670, 1, x_1662);
lean_ctor_set(x_1670, 2, x_1664);
lean_ctor_set(x_1670, 3, x_1669);
x_1671 = lean_mk_string("paren");
lean_inc(x_1602);
x_1672 = lean_name_mk_string(x_1602, x_1671);
x_1673 = lean_mk_string("(");
lean_inc(x_1561);
x_1674 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1674, 0, x_1561);
lean_ctor_set(x_1674, 1, x_1673);
x_1675 = lean_mk_string("intro");
lean_inc(x_1675);
lean_inc(x_1608);
x_1676 = lean_name_mk_string(x_1608, x_1675);
lean_inc(x_1561);
x_1677 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1677, 0, x_1561);
lean_ctor_set(x_1677, 1, x_1675);
x_1678 = lean_mk_string("n");
x_1679 = lean_string_utf8_byte_size(x_1678);
lean_inc(x_1678);
x_1680 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_1680, 0, x_1678);
lean_ctor_set(x_1680, 1, x_1577);
lean_ctor_set(x_1680, 2, x_1679);
x_1681 = lean_name_mk_string(x_1570, x_1678);
x_1682 = l_Lean_addMacroScope(x_1567, x_1681, x_1564);
lean_inc(x_1561);
x_1683 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_1683, 0, x_1561);
lean_ctor_set(x_1683, 1, x_1680);
lean_ctor_set(x_1683, 2, x_1682);
lean_ctor_set(x_1683, 3, x_1581);
lean_inc(x_1683);
lean_inc(x_1620);
x_1684 = lean_array_push(x_1620, x_1683);
lean_inc(x_1614);
x_1685 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1685, 0, x_1614);
lean_ctor_set(x_1685, 1, x_1684);
lean_inc(x_1624);
x_1686 = lean_array_push(x_1624, x_1677);
x_1687 = lean_array_push(x_1686, x_1685);
x_1688 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1688, 0, x_1676);
lean_ctor_set(x_1688, 1, x_1687);
lean_inc(x_1624);
x_1689 = lean_array_push(x_1624, x_1688);
lean_inc(x_1631);
x_1690 = lean_array_push(x_1689, x_1631);
lean_inc(x_1616);
x_1691 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1691, 0, x_1616);
lean_ctor_set(x_1691, 1, x_1690);
x_1692 = lean_mk_string("injection");
lean_inc(x_1692);
lean_inc(x_1608);
x_1693 = lean_name_mk_string(x_1608, x_1692);
lean_inc(x_1561);
x_1694 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1694, 0, x_1561);
lean_ctor_set(x_1694, 1, x_1692);
lean_inc(x_1590);
x_1695 = lean_array_push(x_1590, x_1694);
x_1696 = lean_array_push(x_1695, x_1683);
lean_inc(x_1642);
x_1697 = lean_array_push(x_1696, x_1642);
x_1698 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1698, 0, x_1693);
lean_ctor_set(x_1698, 1, x_1697);
lean_inc(x_1624);
x_1699 = lean_array_push(x_1624, x_1698);
lean_inc(x_1631);
x_1700 = lean_array_push(x_1699, x_1631);
lean_inc(x_1616);
x_1701 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1701, 0, x_1616);
lean_ctor_set(x_1701, 1, x_1700);
x_1702 = lean_mk_string("apply");
lean_inc(x_1702);
lean_inc(x_1608);
x_1703 = lean_name_mk_string(x_1608, x_1702);
lean_inc(x_1561);
x_1704 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1704, 0, x_1561);
lean_ctor_set(x_1704, 1, x_1702);
x_1705 = lean_mk_string("hole");
lean_inc(x_1602);
x_1706 = lean_name_mk_string(x_1602, x_1705);
x_1707 = lean_mk_string("_");
lean_inc(x_1561);
x_1708 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1708, 0, x_1561);
lean_ctor_set(x_1708, 1, x_1707);
lean_inc(x_1620);
x_1709 = lean_array_push(x_1620, x_1708);
x_1710 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1710, 0, x_1706);
lean_ctor_set(x_1710, 1, x_1709);
lean_inc(x_1620);
x_1711 = lean_array_push(x_1620, x_1710);
lean_inc(x_1614);
x_1712 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1712, 0, x_1614);
lean_ctor_set(x_1712, 1, x_1711);
lean_inc(x_1582);
lean_inc(x_1624);
x_1713 = lean_array_push(x_1624, x_1582);
x_1714 = lean_array_push(x_1713, x_1712);
lean_inc(x_1659);
x_1715 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1715, 0, x_1659);
lean_ctor_set(x_1715, 1, x_1714);
lean_inc(x_1624);
x_1716 = lean_array_push(x_1624, x_1704);
x_1717 = lean_array_push(x_1716, x_1715);
x_1718 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1718, 0, x_1703);
lean_ctor_set(x_1718, 1, x_1717);
lean_inc(x_1624);
x_1719 = lean_array_push(x_1624, x_1718);
x_1720 = lean_array_push(x_1719, x_1631);
lean_inc(x_1616);
x_1721 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1721, 0, x_1616);
lean_ctor_set(x_1721, 1, x_1720);
x_1722 = lean_mk_string("assumption");
lean_inc(x_1722);
x_1723 = lean_name_mk_string(x_1608, x_1722);
lean_inc(x_1561);
x_1724 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1724, 0, x_1561);
lean_ctor_set(x_1724, 1, x_1722);
lean_inc(x_1620);
x_1725 = lean_array_push(x_1620, x_1724);
x_1726 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1726, 0, x_1723);
lean_ctor_set(x_1726, 1, x_1725);
lean_inc(x_1624);
x_1727 = lean_array_push(x_1624, x_1726);
lean_inc(x_1642);
x_1728 = lean_array_push(x_1727, x_1642);
x_1729 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1729, 0, x_1616);
lean_ctor_set(x_1729, 1, x_1728);
x_1730 = lean_unsigned_to_nat(4u);
x_1731 = lean_mk_empty_array_with_capacity(x_1730);
lean_inc(x_1731);
x_1732 = lean_array_push(x_1731, x_1691);
x_1733 = lean_array_push(x_1732, x_1701);
x_1734 = lean_array_push(x_1733, x_1721);
x_1735 = lean_array_push(x_1734, x_1729);
lean_inc(x_1614);
x_1736 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1736, 0, x_1614);
lean_ctor_set(x_1736, 1, x_1735);
lean_inc(x_1620);
x_1737 = lean_array_push(x_1620, x_1736);
x_1738 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1738, 0, x_1612);
lean_ctor_set(x_1738, 1, x_1737);
lean_inc(x_1620);
x_1739 = lean_array_push(x_1620, x_1738);
x_1740 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1740, 0, x_1610);
lean_ctor_set(x_1740, 1, x_1739);
x_1741 = lean_array_push(x_1653, x_1740);
x_1742 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1742, 0, x_1604);
lean_ctor_set(x_1742, 1, x_1741);
lean_inc(x_1624);
x_1743 = lean_array_push(x_1624, x_1742);
lean_inc(x_1642);
x_1744 = lean_array_push(x_1743, x_1642);
lean_inc(x_1614);
x_1745 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1745, 0, x_1614);
lean_ctor_set(x_1745, 1, x_1744);
x_1746 = lean_mk_string(")");
x_1747 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1747, 0, x_1561);
lean_ctor_set(x_1747, 1, x_1746);
x_1748 = lean_array_push(x_1590, x_1674);
x_1749 = lean_array_push(x_1748, x_1745);
x_1750 = lean_array_push(x_1749, x_1747);
x_1751 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1751, 0, x_1672);
lean_ctor_set(x_1751, 1, x_1750);
lean_inc(x_1620);
x_1752 = lean_array_push(x_1620, x_1751);
lean_inc(x_1614);
x_1753 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1753, 0, x_1614);
lean_ctor_set(x_1753, 1, x_1752);
lean_inc(x_1624);
x_1754 = lean_array_push(x_1624, x_1670);
x_1755 = lean_array_push(x_1754, x_1753);
lean_inc(x_1659);
x_1756 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1756, 0, x_1659);
lean_ctor_set(x_1756, 1, x_1755);
x_1757 = lean_unsigned_to_nat(8u);
x_1758 = lean_mk_empty_array_with_capacity(x_1757);
x_1759 = lean_array_push(x_1758, x_1574);
x_1760 = lean_array_push(x_1759, x_1582);
x_1761 = lean_array_push(x_1760, x_1584);
x_1762 = lean_array_push(x_1761, x_1594);
x_1763 = lean_array_push(x_1762, x_1596);
x_1764 = lean_array_push(x_1763, x_1655);
x_1765 = lean_array_push(x_1764, x_1657);
x_1766 = lean_array_push(x_1765, x_1756);
x_1767 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1767, 0, x_1572);
lean_ctor_set(x_1767, 1, x_1766);
x_1768 = lean_unbox(x_1529);
lean_dec(x_1529);
if (x_1768 == 0)
{
lean_object* x_1769; 
lean_dec(x_1731);
lean_dec(x_1659);
lean_dec(x_1642);
lean_dec(x_1628);
lean_dec(x_1624);
lean_dec(x_1620);
lean_dec(x_1614);
lean_dec(x_1602);
lean_dec(x_1556);
lean_dec(x_1528);
lean_dec(x_1527);
lean_dec(x_1);
if (lean_is_scalar(x_1569)) {
 x_1769 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1769 = x_1569;
}
lean_ctor_set(x_1769, 0, x_1767);
lean_ctor_set(x_1769, 1, x_1568);
return x_1769;
}
else
{
lean_object* x_1770; lean_object* x_1771; lean_object* x_1772; lean_object* x_1773; lean_object* x_1774; lean_object* x_1775; lean_object* x_1776; lean_object* x_1777; lean_object* x_1778; lean_object* x_1779; lean_object* x_1780; lean_object* x_1781; lean_object* x_1782; lean_object* x_1783; lean_object* x_1784; lean_object* x_1785; lean_object* x_1786; lean_object* x_1787; lean_object* x_1788; lean_object* x_1789; lean_object* x_1790; lean_object* x_1791; lean_object* x_1792; lean_object* x_1793; lean_object* x_1794; lean_object* x_1795; lean_object* x_1796; lean_object* x_1797; lean_object* x_1798; lean_object* x_1799; lean_object* x_1800; lean_object* x_1801; lean_object* x_1802; lean_object* x_1803; lean_object* x_1804; lean_object* x_1805; lean_object* x_1806; lean_object* x_1807; lean_object* x_1808; lean_object* x_1809; lean_object* x_1810; lean_object* x_1811; lean_object* x_1812; lean_object* x_1813; lean_object* x_1814; lean_object* x_1815; lean_object* x_1816; lean_object* x_1817; lean_object* x_1818; lean_object* x_1819; lean_object* x_1820; 
lean_dec(x_1569);
x_1770 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_7, x_8, x_1568);
x_1771 = lean_ctor_get(x_1770, 0);
lean_inc(x_1771);
x_1772 = lean_ctor_get(x_1770, 1);
lean_inc(x_1772);
lean_dec(x_1770);
x_1773 = l_Lean_Elab_Term_getCurrMacroScope(x_1556, x_4, x_5, x_6, x_7, x_8, x_1772);
lean_dec(x_1556);
x_1774 = lean_ctor_get(x_1773, 0);
lean_inc(x_1774);
x_1775 = lean_ctor_get(x_1773, 1);
lean_inc(x_1775);
lean_dec(x_1773);
x_1776 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_1775);
x_1777 = lean_ctor_get(x_1776, 0);
lean_inc(x_1777);
x_1778 = lean_ctor_get(x_1776, 1);
lean_inc(x_1778);
if (lean_is_exclusive(x_1776)) {
 lean_ctor_release(x_1776, 0);
 lean_ctor_release(x_1776, 1);
 x_1779 = x_1776;
} else {
 lean_dec_ref(x_1776);
 x_1779 = lean_box(0);
}
x_1780 = lean_mk_string("let");
lean_inc(x_1780);
lean_inc(x_1602);
x_1781 = lean_name_mk_string(x_1602, x_1780);
lean_inc(x_1771);
x_1782 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1782, 0, x_1771);
lean_ctor_set(x_1782, 1, x_1780);
x_1783 = lean_mk_string("letDecl");
lean_inc(x_1602);
x_1784 = lean_name_mk_string(x_1602, x_1783);
x_1785 = lean_mk_string("letIdDecl");
x_1786 = lean_name_mk_string(x_1602, x_1785);
x_1787 = lean_mk_string("inst");
x_1788 = lean_string_utf8_byte_size(x_1787);
lean_inc(x_1787);
x_1789 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_1789, 0, x_1787);
lean_ctor_set(x_1789, 1, x_1577);
lean_ctor_set(x_1789, 2, x_1788);
x_1790 = lean_name_mk_string(x_1570, x_1787);
x_1791 = l_Lean_addMacroScope(x_1777, x_1790, x_1774);
lean_inc(x_1771);
x_1792 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_1792, 0, x_1771);
lean_ctor_set(x_1792, 1, x_1789);
lean_ctor_set(x_1792, 2, x_1791);
lean_ctor_set(x_1792, 3, x_1581);
x_1793 = lean_mk_string(":=");
lean_inc(x_1771);
x_1794 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1794, 0, x_1771);
lean_ctor_set(x_1794, 1, x_1793);
x_1795 = lean_mk_syntax_ident(x_1);
lean_inc(x_1624);
x_1796 = lean_array_push(x_1624, x_1527);
x_1797 = lean_array_push(x_1796, x_1528);
lean_inc(x_1614);
x_1798 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1798, 0, x_1614);
lean_ctor_set(x_1798, 1, x_1797);
x_1799 = lean_array_push(x_1624, x_1795);
x_1800 = lean_array_push(x_1799, x_1798);
x_1801 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1801, 0, x_1659);
lean_ctor_set(x_1801, 1, x_1800);
x_1802 = lean_unsigned_to_nat(5u);
x_1803 = lean_mk_empty_array_with_capacity(x_1802);
x_1804 = lean_array_push(x_1803, x_1792);
lean_inc(x_1642);
x_1805 = lean_array_push(x_1804, x_1642);
x_1806 = lean_array_push(x_1805, x_1642);
x_1807 = lean_array_push(x_1806, x_1794);
x_1808 = lean_array_push(x_1807, x_1801);
x_1809 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1809, 0, x_1786);
lean_ctor_set(x_1809, 1, x_1808);
lean_inc(x_1620);
x_1810 = lean_array_push(x_1620, x_1809);
x_1811 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1811, 0, x_1784);
lean_ctor_set(x_1811, 1, x_1810);
x_1812 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_1812, 0, x_1771);
lean_ctor_set(x_1812, 1, x_1628);
x_1813 = lean_array_push(x_1620, x_1812);
x_1814 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1814, 0, x_1614);
lean_ctor_set(x_1814, 1, x_1813);
x_1815 = lean_array_push(x_1731, x_1782);
x_1816 = lean_array_push(x_1815, x_1811);
x_1817 = lean_array_push(x_1816, x_1814);
x_1818 = lean_array_push(x_1817, x_1767);
x_1819 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1819, 0, x_1781);
lean_ctor_set(x_1819, 1, x_1818);
if (lean_is_scalar(x_1779)) {
 x_1820 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1820 = x_1779;
}
lean_ctor_set(x_1820, 0, x_1819);
lean_ctor_set(x_1820, 1, x_1778);
return x_1820;
}
}
}
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkSameCtorRhs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Deriving_DecEq_mkMatch_mkSameCtorRhs(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 6)
{
uint8_t x_11; 
lean_dec(x_2);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_10);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_mk_string("'");
x_19 = l_Lean_stringToMessageData(x_18);
lean_dec(x_18);
x_20 = lean_box(0);
x_21 = l_Lean_mkConst(x_1, x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_19);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_mk_string("' is not a constructor");
x_25 = l_Lean_stringToMessageData(x_24);
lean_dec(x_24);
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_throwError___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__2(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_9);
if (x_28 == 0)
{
return x_9;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_9, 0);
x_30 = lean_ctor_get(x_9, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_9);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_nat_dec_le(x_12, x_3);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_eq(x_2, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_2, x_16);
lean_dec(x_2);
x_18 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_9, x_10, x_11);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_box(0);
x_26 = lean_mk_string("Lean");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("Parser");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Term");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("hole");
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("_");
x_35 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_35, 0, x_19);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_mk_empty_array_with_capacity(x_16);
x_37 = lean_array_push(x_36, x_35);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_33);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_array_push(x_4, x_38);
x_40 = lean_ctor_get(x_1, 2);
x_41 = lean_nat_add(x_3, x_40);
lean_dec(x_3);
x_2 = x_17;
x_3 = x_41;
x_4 = x_39;
x_11 = x_24;
goto _start;
}
else
{
lean_object* x_43; 
lean_dec(x_3);
lean_dec(x_2);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_4);
lean_ctor_set(x_43, 1, x_11);
return x_43;
}
}
else
{
lean_object* x_44; 
lean_dec(x_3);
lean_dec(x_2);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_4);
lean_ctor_set(x_44, 1, x_11);
return x_44;
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_nat_dec_le(x_12, x_3);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_eq(x_2, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_2, x_16);
lean_dec(x_2);
x_18 = lean_ctor_get(x_4, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
lean_dec(x_4);
x_20 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_9, x_10, x_11);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_24);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_box(0);
x_28 = lean_mk_string("Lean");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Parser");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("Term");
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("hole");
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = lean_mk_string("_");
lean_inc(x_36);
x_37 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_37, 0, x_21);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_38);
x_39 = lean_array_push(x_38, x_37);
lean_inc(x_35);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_35);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_array_push(x_18, x_40);
x_42 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_9, x_10, x_26);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_44);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_46);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_49, 0, x_43);
lean_ctor_set(x_49, 1, x_36);
x_50 = lean_array_push(x_38, x_49);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_35);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_array_push(x_19, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_41);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_ctor_get(x_1, 2);
x_55 = lean_nat_add(x_3, x_54);
lean_dec(x_3);
x_2 = x_17;
x_3 = x_55;
x_4 = x_53;
x_11 = x_48;
goto _start;
}
else
{
lean_object* x_57; 
lean_dec(x_3);
lean_dec(x_2);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_4);
lean_ctor_set(x_57, 1, x_11);
return x_57;
}
}
else
{
lean_object* x_58; 
lean_dec(x_3);
lean_dec(x_2);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_4);
lean_ctor_set(x_58, 1, x_11);
return x_58;
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_5, 1);
x_17 = lean_nat_dec_le(x_16, x_7);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_nat_dec_eq(x_6, x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_sub(x_6, x_20);
lean_dec(x_6);
x_29 = lean_ctor_get(x_8, 1);
lean_inc(x_29);
x_30 = lean_ctor_get(x_8, 0);
lean_inc(x_30);
lean_dec(x_8);
x_31 = !lean_is_exclusive(x_29);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_32 = lean_ctor_get(x_29, 0);
x_33 = lean_ctor_get(x_29, 1);
x_34 = lean_nat_add(x_4, x_7);
x_35 = l_Lean_instInhabitedExpr;
x_36 = lean_array_get(x_35, x_2, x_34);
lean_dec(x_34);
x_37 = l_Lean_Expr_fvarId_x21(x_36);
x_38 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Expr_containsFVar___spec__1(x_37, x_3);
lean_dec(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_39 = lean_box(0);
x_40 = lean_mk_string("a");
x_41 = lean_name_mk_string(x_39, x_40);
x_42 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_41, x_13, x_14, x_15);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = lean_mk_syntax_ident(x_43);
x_46 = lean_mk_string("b");
x_47 = lean_name_mk_string(x_39, x_46);
x_48 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_47, x_13, x_14, x_44);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_mk_syntax_ident(x_49);
lean_inc(x_45);
x_52 = lean_array_push(x_30, x_45);
lean_inc(x_51);
x_53 = lean_array_push(x_32, x_51);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_54 = l_Lean_Meta_inferType(x_36, x_11, x_12, x_13, x_14, x_50);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_ctor_get(x_1, 0);
x_58 = lean_ctor_get(x_57, 0);
x_59 = l_Lean_Expr_isAppOf(x_55, x_58);
lean_dec(x_55);
x_60 = lean_box(x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_51);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_45);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_array_push(x_33, x_62);
lean_ctor_set(x_29, 1, x_63);
lean_ctor_set(x_29, 0, x_53);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_52);
lean_ctor_set(x_64, 1, x_29);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_22 = x_65;
x_23 = x_56;
goto block_28;
}
else
{
uint8_t x_66; 
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_51);
lean_dec(x_45);
lean_free_object(x_29);
lean_dec(x_33);
lean_dec(x_21);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
x_66 = !lean_is_exclusive(x_54);
if (x_66 == 0)
{
return x_54;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_54, 0);
x_68 = lean_ctor_get(x_54, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_54);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
lean_dec(x_36);
x_70 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_13, x_14, x_15);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = l_Lean_Elab_Term_getCurrMacroScope(x_9, x_10, x_11, x_12, x_13, x_14, x_72);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
lean_dec(x_73);
x_75 = l_Lean_Elab_Term_getMainModule___rarg(x_14, x_74);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = lean_box(0);
x_78 = lean_mk_string("Lean");
x_79 = lean_name_mk_string(x_77, x_78);
x_80 = lean_mk_string("Parser");
x_81 = lean_name_mk_string(x_79, x_80);
x_82 = lean_mk_string("Term");
x_83 = lean_name_mk_string(x_81, x_82);
x_84 = lean_mk_string("hole");
x_85 = lean_name_mk_string(x_83, x_84);
x_86 = lean_mk_string("_");
lean_inc(x_86);
x_87 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_87, 0, x_71);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_mk_empty_array_with_capacity(x_20);
lean_inc(x_88);
x_89 = lean_array_push(x_88, x_87);
lean_inc(x_85);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_85);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_array_push(x_30, x_90);
x_92 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_13, x_14, x_76);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_95 = l_Lean_Elab_Term_getCurrMacroScope(x_9, x_10, x_11, x_12, x_13, x_14, x_94);
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
lean_dec(x_95);
x_97 = l_Lean_Elab_Term_getMainModule___rarg(x_14, x_96);
x_98 = lean_ctor_get(x_97, 1);
lean_inc(x_98);
lean_dec(x_97);
x_99 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_99, 0, x_93);
lean_ctor_set(x_99, 1, x_86);
x_100 = lean_array_push(x_88, x_99);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_85);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_array_push(x_32, x_101);
lean_ctor_set(x_29, 0, x_102);
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_91);
lean_ctor_set(x_103, 1, x_29);
x_104 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_104, 0, x_103);
x_22 = x_104;
x_23 = x_98;
goto block_28;
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; 
x_105 = lean_ctor_get(x_29, 0);
x_106 = lean_ctor_get(x_29, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_29);
x_107 = lean_nat_add(x_4, x_7);
x_108 = l_Lean_instInhabitedExpr;
x_109 = lean_array_get(x_108, x_2, x_107);
lean_dec(x_107);
x_110 = l_Lean_Expr_fvarId_x21(x_109);
x_111 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Expr_containsFVar___spec__1(x_110, x_3);
lean_dec(x_110);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_112 = lean_box(0);
x_113 = lean_mk_string("a");
x_114 = lean_name_mk_string(x_112, x_113);
x_115 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_114, x_13, x_14, x_15);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
lean_dec(x_115);
x_118 = lean_mk_syntax_ident(x_116);
x_119 = lean_mk_string("b");
x_120 = lean_name_mk_string(x_112, x_119);
x_121 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_120, x_13, x_14, x_117);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_124 = lean_mk_syntax_ident(x_122);
lean_inc(x_118);
x_125 = lean_array_push(x_30, x_118);
lean_inc(x_124);
x_126 = lean_array_push(x_105, x_124);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_127 = l_Lean_Meta_inferType(x_109, x_11, x_12, x_13, x_14, x_123);
if (lean_obj_tag(x_127) == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; uint8_t x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
lean_dec(x_127);
x_130 = lean_ctor_get(x_1, 0);
x_131 = lean_ctor_get(x_130, 0);
x_132 = l_Lean_Expr_isAppOf(x_128, x_131);
lean_dec(x_128);
x_133 = lean_box(x_132);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_124);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_135, 0, x_118);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_array_push(x_106, x_135);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_126);
lean_ctor_set(x_137, 1, x_136);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_125);
lean_ctor_set(x_138, 1, x_137);
x_139 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_139, 0, x_138);
x_22 = x_139;
x_23 = x_129;
goto block_28;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_126);
lean_dec(x_125);
lean_dec(x_124);
lean_dec(x_118);
lean_dec(x_106);
lean_dec(x_21);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
x_140 = lean_ctor_get(x_127, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_127, 1);
lean_inc(x_141);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_142 = x_127;
} else {
 lean_dec_ref(x_127);
 x_142 = lean_box(0);
}
if (lean_is_scalar(x_142)) {
 x_143 = lean_alloc_ctor(1, 2, 0);
} else {
 x_143 = x_142;
}
lean_ctor_set(x_143, 0, x_140);
lean_ctor_set(x_143, 1, x_141);
return x_143;
}
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
lean_dec(x_109);
x_144 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_13, x_14, x_15);
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_144, 1);
lean_inc(x_146);
lean_dec(x_144);
x_147 = l_Lean_Elab_Term_getCurrMacroScope(x_9, x_10, x_11, x_12, x_13, x_14, x_146);
x_148 = lean_ctor_get(x_147, 1);
lean_inc(x_148);
lean_dec(x_147);
x_149 = l_Lean_Elab_Term_getMainModule___rarg(x_14, x_148);
x_150 = lean_ctor_get(x_149, 1);
lean_inc(x_150);
lean_dec(x_149);
x_151 = lean_box(0);
x_152 = lean_mk_string("Lean");
x_153 = lean_name_mk_string(x_151, x_152);
x_154 = lean_mk_string("Parser");
x_155 = lean_name_mk_string(x_153, x_154);
x_156 = lean_mk_string("Term");
x_157 = lean_name_mk_string(x_155, x_156);
x_158 = lean_mk_string("hole");
x_159 = lean_name_mk_string(x_157, x_158);
x_160 = lean_mk_string("_");
lean_inc(x_160);
x_161 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_161, 0, x_145);
lean_ctor_set(x_161, 1, x_160);
x_162 = lean_mk_empty_array_with_capacity(x_20);
lean_inc(x_162);
x_163 = lean_array_push(x_162, x_161);
lean_inc(x_159);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_159);
lean_ctor_set(x_164, 1, x_163);
x_165 = lean_array_push(x_30, x_164);
x_166 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_13, x_14, x_150);
x_167 = lean_ctor_get(x_166, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_166, 1);
lean_inc(x_168);
lean_dec(x_166);
x_169 = l_Lean_Elab_Term_getCurrMacroScope(x_9, x_10, x_11, x_12, x_13, x_14, x_168);
x_170 = lean_ctor_get(x_169, 1);
lean_inc(x_170);
lean_dec(x_169);
x_171 = l_Lean_Elab_Term_getMainModule___rarg(x_14, x_170);
x_172 = lean_ctor_get(x_171, 1);
lean_inc(x_172);
lean_dec(x_171);
x_173 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_173, 0, x_167);
lean_ctor_set(x_173, 1, x_160);
x_174 = lean_array_push(x_162, x_173);
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_159);
lean_ctor_set(x_175, 1, x_174);
x_176 = lean_array_push(x_105, x_175);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_106);
x_178 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_178, 0, x_165);
lean_ctor_set(x_178, 1, x_177);
x_179 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_179, 0, x_178);
x_22 = x_179;
x_23 = x_172;
goto block_28;
}
}
block_28:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_ctor_get(x_5, 2);
x_26 = lean_nat_add(x_7, x_25);
lean_dec(x_7);
x_6 = x_21;
x_7 = x_26;
x_8 = x_24;
x_15 = x_23;
goto _start;
}
}
else
{
lean_object* x_180; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
x_180 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_180, 0, x_8);
lean_ctor_set(x_180, 1, x_15);
return x_180;
}
}
else
{
lean_object* x_181; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_8);
lean_ctor_set(x_181, 1, x_15);
return x_181;
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__6___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_alloc_closure((void*)(l_Lean_Core_betaReduce___lambda__1___boxed), 4, 0);
x_18 = lean_alloc_closure((void*)(l_Lean_Core_betaReduce___lambda__2___boxed), 4, 0);
lean_inc(x_15);
lean_inc(x_14);
x_19 = l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(x_9, x_17, x_18, x_14, x_15, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_unsigned_to_nat(1u);
lean_inc(x_1);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_1);
lean_ctor_set(x_24, 2, x_23);
lean_inc_n(x_2, 2);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_2);
lean_ctor_set(x_25, 1, x_2);
lean_inc(x_1);
x_26 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__4(x_24, x_1, x_22, x_25, x_10, x_11, x_12, x_13, x_14, x_15, x_21);
lean_dec(x_24);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = !lean_is_exclusive(x_27);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_30 = lean_ctor_get(x_27, 0);
x_31 = lean_ctor_get(x_27, 1);
x_32 = lean_mk_empty_array_with_capacity(x_22);
x_33 = lean_ctor_get(x_3, 4);
lean_inc(x_33);
lean_dec(x_3);
lean_inc(x_33);
x_34 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_34, 0, x_22);
lean_ctor_set(x_34, 1, x_33);
lean_ctor_set(x_34, 2, x_23);
lean_ctor_set(x_27, 1, x_32);
lean_ctor_set(x_27, 0, x_31);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_30);
lean_ctor_set(x_35, 1, x_27);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_36 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__5(x_4, x_8, x_20, x_1, x_34, x_33, x_22, x_35, x_10, x_11, x_12, x_13, x_14, x_15, x_28);
lean_dec(x_34);
lean_dec(x_1);
lean_dec(x_20);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = lean_ctor_get(x_37, 0);
lean_inc(x_40);
lean_dec(x_37);
x_41 = lean_ctor_get(x_38, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_38, 1);
lean_inc(x_42);
lean_dec(x_38);
x_43 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_39);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_45);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_48 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_47);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
lean_dec(x_48);
x_50 = lean_box(0);
x_51 = lean_mk_string("Lean");
x_52 = lean_name_mk_string(x_50, x_51);
x_53 = lean_mk_string("Parser");
x_54 = lean_name_mk_string(x_52, x_53);
x_55 = lean_mk_string("Term");
x_56 = lean_name_mk_string(x_54, x_55);
x_57 = lean_mk_string("app");
lean_inc(x_56);
x_58 = lean_name_mk_string(x_56, x_57);
x_59 = lean_mk_string("explicit");
lean_inc(x_56);
x_60 = lean_name_mk_string(x_56, x_59);
x_61 = lean_mk_string("@");
lean_inc(x_61);
x_62 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_62, 0, x_44);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_mk_syntax_ident(x_5);
x_64 = lean_unsigned_to_nat(2u);
x_65 = lean_mk_empty_array_with_capacity(x_64);
lean_inc(x_65);
x_66 = lean_array_push(x_65, x_62);
lean_inc(x_63);
x_67 = lean_array_push(x_66, x_63);
lean_inc(x_60);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_60);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_mk_string("null");
x_70 = lean_name_mk_string(x_50, x_69);
lean_inc(x_2);
x_71 = l_Array_append___rarg(x_2, x_40);
lean_dec(x_40);
lean_inc(x_70);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
lean_inc(x_65);
x_73 = lean_array_push(x_65, x_68);
x_74 = lean_array_push(x_73, x_72);
lean_inc(x_58);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_58);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_array_push(x_6, x_75);
x_77 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_49);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_79);
x_81 = lean_ctor_get(x_80, 1);
lean_inc(x_81);
lean_dec(x_80);
x_82 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_81);
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
lean_dec(x_82);
x_84 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_84, 0, x_78);
lean_ctor_set(x_84, 1, x_61);
lean_inc(x_65);
x_85 = lean_array_push(x_65, x_84);
x_86 = lean_array_push(x_85, x_63);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_60);
lean_ctor_set(x_87, 1, x_86);
lean_inc(x_2);
x_88 = l_Array_append___rarg(x_2, x_41);
lean_dec(x_41);
lean_inc(x_70);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_70);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_array_push(x_65, x_87);
x_91 = lean_array_push(x_90, x_89);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_58);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_array_push(x_76, x_92);
x_94 = lean_array_to_list(lean_box(0), x_42);
lean_inc(x_10);
x_95 = l_Lean_Elab_Deriving_DecEq_mkMatch_mkSameCtorRhs(x_7, x_94, x_10, x_11, x_12, x_13, x_14, x_15, x_83);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_97);
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_98, 1);
lean_inc(x_100);
lean_dec(x_98);
x_101 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_100);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
x_102 = lean_ctor_get(x_101, 1);
lean_inc(x_102);
lean_dec(x_101);
x_103 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_102);
lean_dec(x_15);
x_104 = !lean_is_exclusive(x_103);
if (x_104 == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; size_t x_111; size_t x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_105 = lean_ctor_get(x_103, 0);
lean_dec(x_105);
x_106 = lean_mk_string("matchAlt");
x_107 = lean_name_mk_string(x_56, x_106);
x_108 = lean_mk_string("|");
lean_inc(x_99);
x_109 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_109, 0, x_99);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_array_get_size(x_93);
x_111 = lean_usize_of_nat(x_110);
lean_dec(x_110);
x_112 = 0;
x_113 = x_93;
x_114 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_111, x_112, x_113);
x_115 = x_114;
x_116 = lean_box(2);
x_117 = lean_mk_string(",");
x_118 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
x_119 = l_Lean_mkSepArray(x_115, x_118);
lean_dec(x_115);
x_120 = l_Array_append___rarg(x_2, x_119);
lean_dec(x_119);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_70);
lean_ctor_set(x_121, 1, x_120);
x_122 = lean_mk_string("=>");
x_123 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_123, 0, x_99);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_unsigned_to_nat(4u);
x_125 = lean_mk_empty_array_with_capacity(x_124);
x_126 = lean_array_push(x_125, x_109);
x_127 = lean_array_push(x_126, x_121);
x_128 = lean_array_push(x_127, x_123);
x_129 = lean_array_push(x_128, x_96);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_107);
lean_ctor_set(x_130, 1, x_129);
lean_ctor_set(x_103, 0, x_130);
return x_103;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; size_t x_137; size_t x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_131 = lean_ctor_get(x_103, 1);
lean_inc(x_131);
lean_dec(x_103);
x_132 = lean_mk_string("matchAlt");
x_133 = lean_name_mk_string(x_56, x_132);
x_134 = lean_mk_string("|");
lean_inc(x_99);
x_135 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_135, 0, x_99);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_array_get_size(x_93);
x_137 = lean_usize_of_nat(x_136);
lean_dec(x_136);
x_138 = 0;
x_139 = x_93;
x_140 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_137, x_138, x_139);
x_141 = x_140;
x_142 = lean_box(2);
x_143 = lean_mk_string(",");
x_144 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set(x_144, 1, x_143);
x_145 = l_Lean_mkSepArray(x_141, x_144);
lean_dec(x_141);
x_146 = l_Array_append___rarg(x_2, x_145);
lean_dec(x_145);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_70);
lean_ctor_set(x_147, 1, x_146);
x_148 = lean_mk_string("=>");
x_149 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_149, 0, x_99);
lean_ctor_set(x_149, 1, x_148);
x_150 = lean_unsigned_to_nat(4u);
x_151 = lean_mk_empty_array_with_capacity(x_150);
x_152 = lean_array_push(x_151, x_135);
x_153 = lean_array_push(x_152, x_147);
x_154 = lean_array_push(x_153, x_149);
x_155 = lean_array_push(x_154, x_96);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_133);
lean_ctor_set(x_156, 1, x_155);
x_157 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_131);
return x_157;
}
}
else
{
uint8_t x_158; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_158 = !lean_is_exclusive(x_36);
if (x_158 == 0)
{
return x_36;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_ctor_get(x_36, 0);
x_160 = lean_ctor_get(x_36, 1);
lean_inc(x_160);
lean_inc(x_159);
lean_dec(x_36);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
}
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_162 = lean_ctor_get(x_27, 0);
x_163 = lean_ctor_get(x_27, 1);
lean_inc(x_163);
lean_inc(x_162);
lean_dec(x_27);
x_164 = lean_mk_empty_array_with_capacity(x_22);
x_165 = lean_ctor_get(x_3, 4);
lean_inc(x_165);
lean_dec(x_3);
lean_inc(x_165);
x_166 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_166, 0, x_22);
lean_ctor_set(x_166, 1, x_165);
lean_ctor_set(x_166, 2, x_23);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_163);
lean_ctor_set(x_167, 1, x_164);
x_168 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_168, 0, x_162);
lean_ctor_set(x_168, 1, x_167);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_169 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__5(x_4, x_8, x_20, x_1, x_166, x_165, x_22, x_168, x_10, x_11, x_12, x_13, x_14, x_15, x_28);
lean_dec(x_166);
lean_dec(x_1);
lean_dec(x_20);
if (lean_obj_tag(x_169) == 0)
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; size_t x_244; size_t x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; 
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_170, 1);
lean_inc(x_171);
x_172 = lean_ctor_get(x_169, 1);
lean_inc(x_172);
lean_dec(x_169);
x_173 = lean_ctor_get(x_170, 0);
lean_inc(x_173);
lean_dec(x_170);
x_174 = lean_ctor_get(x_171, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_171, 1);
lean_inc(x_175);
lean_dec(x_171);
x_176 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_172);
x_177 = lean_ctor_get(x_176, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_176, 1);
lean_inc(x_178);
lean_dec(x_176);
x_179 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_178);
x_180 = lean_ctor_get(x_179, 1);
lean_inc(x_180);
lean_dec(x_179);
x_181 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_180);
x_182 = lean_ctor_get(x_181, 1);
lean_inc(x_182);
lean_dec(x_181);
x_183 = lean_box(0);
x_184 = lean_mk_string("Lean");
x_185 = lean_name_mk_string(x_183, x_184);
x_186 = lean_mk_string("Parser");
x_187 = lean_name_mk_string(x_185, x_186);
x_188 = lean_mk_string("Term");
x_189 = lean_name_mk_string(x_187, x_188);
x_190 = lean_mk_string("app");
lean_inc(x_189);
x_191 = lean_name_mk_string(x_189, x_190);
x_192 = lean_mk_string("explicit");
lean_inc(x_189);
x_193 = lean_name_mk_string(x_189, x_192);
x_194 = lean_mk_string("@");
lean_inc(x_194);
x_195 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_195, 0, x_177);
lean_ctor_set(x_195, 1, x_194);
x_196 = lean_mk_syntax_ident(x_5);
x_197 = lean_unsigned_to_nat(2u);
x_198 = lean_mk_empty_array_with_capacity(x_197);
lean_inc(x_198);
x_199 = lean_array_push(x_198, x_195);
lean_inc(x_196);
x_200 = lean_array_push(x_199, x_196);
lean_inc(x_193);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_193);
lean_ctor_set(x_201, 1, x_200);
x_202 = lean_mk_string("null");
x_203 = lean_name_mk_string(x_183, x_202);
lean_inc(x_2);
x_204 = l_Array_append___rarg(x_2, x_173);
lean_dec(x_173);
lean_inc(x_203);
x_205 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_205, 0, x_203);
lean_ctor_set(x_205, 1, x_204);
lean_inc(x_198);
x_206 = lean_array_push(x_198, x_201);
x_207 = lean_array_push(x_206, x_205);
lean_inc(x_191);
x_208 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_208, 0, x_191);
lean_ctor_set(x_208, 1, x_207);
x_209 = lean_array_push(x_6, x_208);
x_210 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_182);
x_211 = lean_ctor_get(x_210, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_210, 1);
lean_inc(x_212);
lean_dec(x_210);
x_213 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_212);
x_214 = lean_ctor_get(x_213, 1);
lean_inc(x_214);
lean_dec(x_213);
x_215 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_214);
x_216 = lean_ctor_get(x_215, 1);
lean_inc(x_216);
lean_dec(x_215);
x_217 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_217, 0, x_211);
lean_ctor_set(x_217, 1, x_194);
lean_inc(x_198);
x_218 = lean_array_push(x_198, x_217);
x_219 = lean_array_push(x_218, x_196);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_193);
lean_ctor_set(x_220, 1, x_219);
lean_inc(x_2);
x_221 = l_Array_append___rarg(x_2, x_174);
lean_dec(x_174);
lean_inc(x_203);
x_222 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_222, 0, x_203);
lean_ctor_set(x_222, 1, x_221);
x_223 = lean_array_push(x_198, x_220);
x_224 = lean_array_push(x_223, x_222);
x_225 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_225, 0, x_191);
lean_ctor_set(x_225, 1, x_224);
x_226 = lean_array_push(x_209, x_225);
x_227 = lean_array_to_list(lean_box(0), x_175);
lean_inc(x_10);
x_228 = l_Lean_Elab_Deriving_DecEq_mkMatch_mkSameCtorRhs(x_7, x_227, x_10, x_11, x_12, x_13, x_14, x_15, x_216);
x_229 = lean_ctor_get(x_228, 0);
lean_inc(x_229);
x_230 = lean_ctor_get(x_228, 1);
lean_inc(x_230);
lean_dec(x_228);
x_231 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_230);
x_232 = lean_ctor_get(x_231, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_231, 1);
lean_inc(x_233);
lean_dec(x_231);
x_234 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_233);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
x_235 = lean_ctor_get(x_234, 1);
lean_inc(x_235);
lean_dec(x_234);
x_236 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_235);
lean_dec(x_15);
x_237 = lean_ctor_get(x_236, 1);
lean_inc(x_237);
if (lean_is_exclusive(x_236)) {
 lean_ctor_release(x_236, 0);
 lean_ctor_release(x_236, 1);
 x_238 = x_236;
} else {
 lean_dec_ref(x_236);
 x_238 = lean_box(0);
}
x_239 = lean_mk_string("matchAlt");
x_240 = lean_name_mk_string(x_189, x_239);
x_241 = lean_mk_string("|");
lean_inc(x_232);
x_242 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_242, 0, x_232);
lean_ctor_set(x_242, 1, x_241);
x_243 = lean_array_get_size(x_226);
x_244 = lean_usize_of_nat(x_243);
lean_dec(x_243);
x_245 = 0;
x_246 = x_226;
x_247 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_244, x_245, x_246);
x_248 = x_247;
x_249 = lean_box(2);
x_250 = lean_mk_string(",");
x_251 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_251, 0, x_249);
lean_ctor_set(x_251, 1, x_250);
x_252 = l_Lean_mkSepArray(x_248, x_251);
lean_dec(x_248);
x_253 = l_Array_append___rarg(x_2, x_252);
lean_dec(x_252);
x_254 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_254, 0, x_203);
lean_ctor_set(x_254, 1, x_253);
x_255 = lean_mk_string("=>");
x_256 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_256, 0, x_232);
lean_ctor_set(x_256, 1, x_255);
x_257 = lean_unsigned_to_nat(4u);
x_258 = lean_mk_empty_array_with_capacity(x_257);
x_259 = lean_array_push(x_258, x_242);
x_260 = lean_array_push(x_259, x_254);
x_261 = lean_array_push(x_260, x_256);
x_262 = lean_array_push(x_261, x_229);
x_263 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_263, 0, x_240);
lean_ctor_set(x_263, 1, x_262);
if (lean_is_scalar(x_238)) {
 x_264 = lean_alloc_ctor(0, 2, 0);
} else {
 x_264 = x_238;
}
lean_ctor_set(x_264, 0, x_263);
lean_ctor_set(x_264, 1, x_237);
return x_264;
}
else
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_265 = lean_ctor_get(x_169, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_169, 1);
lean_inc(x_266);
if (lean_is_exclusive(x_169)) {
 lean_ctor_release(x_169, 0);
 lean_ctor_release(x_169, 1);
 x_267 = x_169;
} else {
 lean_dec_ref(x_169);
 x_267 = lean_box(0);
}
if (lean_is_scalar(x_267)) {
 x_268 = lean_alloc_ctor(1, 2, 0);
} else {
 x_268 = x_267;
}
lean_ctor_set(x_268, 0, x_265);
lean_ctor_set(x_268, 1, x_266);
return x_268;
}
}
}
else
{
uint8_t x_269; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_269 = !lean_is_exclusive(x_19);
if (x_269 == 0)
{
return x_19;
}
else
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; 
x_270 = lean_ctor_get(x_19, 0);
x_271 = lean_ctor_get(x_19, 1);
lean_inc(x_271);
lean_inc(x_270);
lean_dec(x_19);
x_272 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_272, 0, x_270);
lean_ctor_set(x_272, 1, x_271);
return x_272;
}
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_15; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_6);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_17 = lean_ctor_get(x_6, 0);
x_18 = lean_ctor_get(x_6, 1);
x_24 = lean_ctor_get(x_1, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_1, 2);
lean_inc(x_25);
x_26 = lean_unsigned_to_nat(0u);
x_27 = lean_unsigned_to_nat(1u);
lean_inc(x_25);
x_28 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_25);
lean_ctor_set(x_28, 2, x_27);
lean_inc(x_3);
x_29 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__3(x_28, x_25, x_26, x_3, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_28);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_name_eq(x_4, x_17);
if (x_32 == 0)
{
lean_object* x_33; 
lean_dec(x_24);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_17);
lean_inc(x_4);
x_33 = l_Lean_Meta_compatibleCtors(x_4, x_17, x_10, x_11, x_12, x_13, x_31);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_unbox(x_34);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_30);
lean_free_object(x_6);
lean_dec(x_17);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_7);
x_19 = x_37;
x_20 = x_36;
goto block_23;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; size_t x_197; size_t x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_38 = lean_ctor_get(x_33, 1);
lean_inc(x_38);
lean_dec(x_33);
x_39 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_12, x_13, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_Lean_Elab_Term_getCurrMacroScope(x_8, x_9, x_10, x_11, x_12, x_13, x_41);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = l_Lean_Elab_Term_getMainModule___rarg(x_13, x_43);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_box(0);
x_47 = lean_mk_string("Lean");
x_48 = lean_name_mk_string(x_46, x_47);
x_49 = lean_mk_string("Parser");
x_50 = lean_name_mk_string(x_48, x_49);
x_51 = lean_mk_string("Term");
lean_inc(x_50);
x_52 = lean_name_mk_string(x_50, x_51);
x_53 = lean_mk_string("app");
lean_inc(x_52);
x_54 = lean_name_mk_string(x_52, x_53);
lean_inc(x_4);
x_55 = lean_mk_syntax_ident(x_4);
x_56 = lean_mk_string("null");
x_57 = lean_name_mk_string(x_46, x_56);
x_58 = lean_mk_string("ellipsis");
lean_inc(x_52);
x_59 = lean_name_mk_string(x_52, x_58);
x_60 = lean_mk_string("..");
lean_inc(x_60);
x_61 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_61, 0, x_40);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_mk_empty_array_with_capacity(x_27);
lean_inc(x_62);
x_63 = lean_array_push(x_62, x_61);
lean_inc(x_59);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_59);
lean_ctor_set(x_64, 1, x_63);
lean_inc(x_62);
x_65 = lean_array_push(x_62, x_64);
lean_inc(x_57);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_57);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_unsigned_to_nat(2u);
x_68 = lean_mk_empty_array_with_capacity(x_67);
lean_inc(x_68);
x_69 = lean_array_push(x_68, x_55);
x_70 = lean_array_push(x_69, x_66);
lean_inc(x_54);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_54);
lean_ctor_set(x_71, 1, x_70);
x_72 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_12, x_13, x_45);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = l_Lean_Elab_Term_getCurrMacroScope(x_8, x_9, x_10, x_11, x_12, x_13, x_74);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = l_Lean_Elab_Term_getMainModule___rarg(x_13, x_76);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
lean_dec(x_77);
x_79 = lean_mk_syntax_ident(x_17);
x_80 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_80, 0, x_73);
lean_ctor_set(x_80, 1, x_60);
lean_inc(x_62);
x_81 = lean_array_push(x_62, x_80);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_59);
lean_ctor_set(x_82, 1, x_81);
lean_inc(x_62);
x_83 = lean_array_push(x_62, x_82);
lean_inc(x_57);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_57);
lean_ctor_set(x_84, 1, x_83);
lean_inc(x_68);
x_85 = lean_array_push(x_68, x_79);
x_86 = lean_array_push(x_85, x_84);
lean_inc(x_54);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_54);
lean_ctor_set(x_87, 1, x_86);
lean_inc(x_68);
x_88 = lean_array_push(x_68, x_71);
x_89 = lean_array_push(x_88, x_87);
x_90 = l_Array_append___rarg(x_30, x_89);
lean_dec(x_89);
x_91 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_12, x_13, x_78);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = l_Lean_Elab_Term_getCurrMacroScope(x_8, x_9, x_10, x_11, x_12, x_13, x_93);
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_94, 1);
lean_inc(x_96);
lean_dec(x_94);
x_97 = l_Lean_Elab_Term_getMainModule___rarg(x_13, x_96);
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_97, 1);
lean_inc(x_99);
lean_dec(x_97);
x_100 = lean_mk_string("isFalse");
x_101 = lean_string_utf8_byte_size(x_100);
lean_inc(x_100);
x_102 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_26);
lean_ctor_set(x_102, 2, x_101);
lean_inc(x_100);
x_103 = lean_name_mk_string(x_46, x_100);
lean_inc(x_95);
lean_inc(x_98);
x_104 = l_Lean_addMacroScope(x_98, x_103, x_95);
x_105 = lean_mk_string("Decidable");
x_106 = lean_name_mk_string(x_46, x_105);
x_107 = lean_name_mk_string(x_106, x_100);
x_108 = lean_box(0);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
lean_ctor_set(x_6, 1, x_108);
lean_ctor_set(x_6, 0, x_109);
lean_inc(x_92);
x_110 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_110, 0, x_92);
lean_ctor_set(x_110, 1, x_102);
lean_ctor_set(x_110, 2, x_104);
lean_ctor_set(x_110, 3, x_6);
x_111 = lean_mk_string("paren");
lean_inc(x_52);
x_112 = lean_name_mk_string(x_52, x_111);
x_113 = lean_mk_string("(");
lean_inc(x_92);
x_114 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_114, 0, x_92);
lean_ctor_set(x_114, 1, x_113);
x_115 = lean_mk_string("byTactic");
lean_inc(x_52);
x_116 = lean_name_mk_string(x_52, x_115);
x_117 = lean_mk_string("by");
lean_inc(x_92);
x_118 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_118, 0, x_92);
lean_ctor_set(x_118, 1, x_117);
x_119 = lean_mk_string("Tactic");
x_120 = lean_name_mk_string(x_50, x_119);
x_121 = lean_mk_string("tacticSeq");
lean_inc(x_120);
x_122 = lean_name_mk_string(x_120, x_121);
x_123 = lean_mk_string("tacticSeq1Indented");
lean_inc(x_120);
x_124 = lean_name_mk_string(x_120, x_123);
x_125 = lean_mk_string("group");
x_126 = lean_name_mk_string(x_46, x_125);
x_127 = lean_mk_string("intro");
lean_inc(x_127);
lean_inc(x_120);
x_128 = lean_name_mk_string(x_120, x_127);
lean_inc(x_92);
x_129 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_129, 0, x_92);
lean_ctor_set(x_129, 1, x_127);
x_130 = lean_mk_string("h");
x_131 = lean_string_utf8_byte_size(x_130);
lean_inc(x_130);
x_132 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_26);
lean_ctor_set(x_132, 2, x_131);
x_133 = lean_name_mk_string(x_46, x_130);
x_134 = l_Lean_addMacroScope(x_98, x_133, x_95);
lean_inc(x_92);
x_135 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_135, 0, x_92);
lean_ctor_set(x_135, 1, x_132);
lean_ctor_set(x_135, 2, x_134);
lean_ctor_set(x_135, 3, x_108);
lean_inc(x_135);
lean_inc(x_62);
x_136 = lean_array_push(x_62, x_135);
lean_inc(x_57);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_57);
lean_ctor_set(x_137, 1, x_136);
lean_inc(x_68);
x_138 = lean_array_push(x_68, x_129);
x_139 = lean_array_push(x_138, x_137);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_128);
lean_ctor_set(x_140, 1, x_139);
x_141 = lean_mk_string(";");
lean_inc(x_92);
x_142 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_142, 0, x_92);
lean_ctor_set(x_142, 1, x_141);
lean_inc(x_62);
x_143 = lean_array_push(x_62, x_142);
lean_inc(x_57);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_57);
lean_ctor_set(x_144, 1, x_143);
lean_inc(x_68);
x_145 = lean_array_push(x_68, x_140);
x_146 = lean_array_push(x_145, x_144);
lean_inc(x_126);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_126);
lean_ctor_set(x_147, 1, x_146);
x_148 = lean_mk_string("injection");
lean_inc(x_148);
x_149 = lean_name_mk_string(x_120, x_148);
lean_inc(x_92);
x_150 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_150, 0, x_92);
lean_ctor_set(x_150, 1, x_148);
lean_inc(x_3);
lean_inc(x_57);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_57);
lean_ctor_set(x_151, 1, x_3);
x_152 = lean_unsigned_to_nat(3u);
x_153 = lean_mk_empty_array_with_capacity(x_152);
lean_inc(x_153);
x_154 = lean_array_push(x_153, x_150);
x_155 = lean_array_push(x_154, x_135);
lean_inc(x_151);
x_156 = lean_array_push(x_155, x_151);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_149);
lean_ctor_set(x_157, 1, x_156);
lean_inc(x_68);
x_158 = lean_array_push(x_68, x_157);
lean_inc(x_151);
x_159 = lean_array_push(x_158, x_151);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_126);
lean_ctor_set(x_160, 1, x_159);
lean_inc(x_68);
x_161 = lean_array_push(x_68, x_147);
x_162 = lean_array_push(x_161, x_160);
lean_inc(x_57);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_57);
lean_ctor_set(x_163, 1, x_162);
lean_inc(x_62);
x_164 = lean_array_push(x_62, x_163);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_124);
lean_ctor_set(x_165, 1, x_164);
lean_inc(x_62);
x_166 = lean_array_push(x_62, x_165);
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_122);
lean_ctor_set(x_167, 1, x_166);
lean_inc(x_68);
x_168 = lean_array_push(x_68, x_118);
x_169 = lean_array_push(x_168, x_167);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_116);
lean_ctor_set(x_170, 1, x_169);
lean_inc(x_68);
x_171 = lean_array_push(x_68, x_170);
x_172 = lean_array_push(x_171, x_151);
lean_inc(x_57);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_57);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_mk_string(")");
x_175 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_175, 0, x_92);
lean_ctor_set(x_175, 1, x_174);
x_176 = lean_array_push(x_153, x_114);
x_177 = lean_array_push(x_176, x_173);
x_178 = lean_array_push(x_177, x_175);
x_179 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_179, 0, x_112);
lean_ctor_set(x_179, 1, x_178);
x_180 = lean_array_push(x_62, x_179);
lean_inc(x_57);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_57);
lean_ctor_set(x_181, 1, x_180);
x_182 = lean_array_push(x_68, x_110);
x_183 = lean_array_push(x_182, x_181);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_54);
lean_ctor_set(x_184, 1, x_183);
x_185 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_12, x_13, x_99);
x_186 = lean_ctor_get(x_185, 0);
lean_inc(x_186);
x_187 = lean_ctor_get(x_185, 1);
lean_inc(x_187);
lean_dec(x_185);
x_188 = l_Lean_Elab_Term_getCurrMacroScope(x_8, x_9, x_10, x_11, x_12, x_13, x_187);
x_189 = lean_ctor_get(x_188, 1);
lean_inc(x_189);
lean_dec(x_188);
x_190 = l_Lean_Elab_Term_getMainModule___rarg(x_13, x_189);
x_191 = lean_ctor_get(x_190, 1);
lean_inc(x_191);
lean_dec(x_190);
x_192 = lean_mk_string("matchAlt");
x_193 = lean_name_mk_string(x_52, x_192);
x_194 = lean_mk_string("|");
lean_inc(x_186);
x_195 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_195, 0, x_186);
lean_ctor_set(x_195, 1, x_194);
x_196 = lean_array_get_size(x_90);
x_197 = lean_usize_of_nat(x_196);
lean_dec(x_196);
x_198 = 0;
x_199 = x_90;
x_200 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_197, x_198, x_199);
x_201 = x_200;
x_202 = lean_box(2);
x_203 = lean_mk_string(",");
x_204 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_204, 0, x_202);
lean_ctor_set(x_204, 1, x_203);
x_205 = l_Lean_mkSepArray(x_201, x_204);
lean_dec(x_201);
lean_inc(x_3);
x_206 = l_Array_append___rarg(x_3, x_205);
lean_dec(x_205);
x_207 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_207, 0, x_57);
lean_ctor_set(x_207, 1, x_206);
x_208 = lean_mk_string("=>");
x_209 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_209, 0, x_186);
lean_ctor_set(x_209, 1, x_208);
x_210 = lean_unsigned_to_nat(4u);
x_211 = lean_mk_empty_array_with_capacity(x_210);
x_212 = lean_array_push(x_211, x_195);
x_213 = lean_array_push(x_212, x_207);
x_214 = lean_array_push(x_213, x_209);
x_215 = lean_array_push(x_214, x_184);
x_216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_216, 0, x_193);
lean_ctor_set(x_216, 1, x_215);
x_217 = lean_array_push(x_7, x_216);
x_218 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_218, 0, x_217);
x_19 = x_218;
x_20 = x_191;
goto block_23;
}
}
else
{
uint8_t x_219; 
lean_dec(x_30);
lean_free_object(x_6);
lean_dec(x_18);
lean_dec(x_17);
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
lean_dec(x_1);
x_219 = !lean_is_exclusive(x_33);
if (x_219 == 0)
{
return x_33;
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_220 = lean_ctor_get(x_33, 0);
x_221 = lean_ctor_get(x_33, 1);
lean_inc(x_221);
lean_inc(x_220);
lean_dec(x_33);
x_222 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_222, 0, x_220);
lean_ctor_set(x_222, 1, x_221);
return x_222;
}
}
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; 
lean_free_object(x_6);
lean_dec(x_17);
x_223 = lean_ctor_get(x_5, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_223, 2);
lean_inc(x_224);
lean_dec(x_223);
lean_inc(x_2);
lean_inc(x_4);
lean_inc(x_1);
lean_inc(x_5);
lean_inc(x_3);
x_225 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__6___lambda__1___boxed), 16, 7);
lean_closure_set(x_225, 0, x_24);
lean_closure_set(x_225, 1, x_3);
lean_closure_set(x_225, 2, x_5);
lean_closure_set(x_225, 3, x_1);
lean_closure_set(x_225, 4, x_4);
lean_closure_set(x_225, 5, x_30);
lean_closure_set(x_225, 6, x_2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_226 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(x_224, x_225, x_8, x_9, x_10, x_11, x_12, x_13, x_31);
if (lean_obj_tag(x_226) == 0)
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; 
x_227 = lean_ctor_get(x_226, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_226, 1);
lean_inc(x_228);
lean_dec(x_226);
x_229 = lean_array_push(x_7, x_227);
x_230 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_230, 0, x_229);
x_19 = x_230;
x_20 = x_228;
goto block_23;
}
else
{
uint8_t x_231; 
lean_dec(x_18);
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
lean_dec(x_1);
x_231 = !lean_is_exclusive(x_226);
if (x_231 == 0)
{
return x_226;
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_232 = lean_ctor_get(x_226, 0);
x_233 = lean_ctor_get(x_226, 1);
lean_inc(x_233);
lean_inc(x_232);
lean_dec(x_226);
x_234 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_234, 0, x_232);
lean_ctor_set(x_234, 1, x_233);
return x_234;
}
}
}
block_23:
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
x_6 = x_18;
x_7 = x_21;
x_14 = x_20;
goto _start;
}
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; uint8_t x_250; 
x_235 = lean_ctor_get(x_6, 0);
x_236 = lean_ctor_get(x_6, 1);
lean_inc(x_236);
lean_inc(x_235);
lean_dec(x_6);
x_242 = lean_ctor_get(x_1, 1);
lean_inc(x_242);
x_243 = lean_ctor_get(x_1, 2);
lean_inc(x_243);
x_244 = lean_unsigned_to_nat(0u);
x_245 = lean_unsigned_to_nat(1u);
lean_inc(x_243);
x_246 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_246, 0, x_244);
lean_ctor_set(x_246, 1, x_243);
lean_ctor_set(x_246, 2, x_245);
lean_inc(x_3);
x_247 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__3(x_246, x_243, x_244, x_3, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_246);
x_248 = lean_ctor_get(x_247, 0);
lean_inc(x_248);
x_249 = lean_ctor_get(x_247, 1);
lean_inc(x_249);
lean_dec(x_247);
x_250 = lean_name_eq(x_4, x_235);
if (x_250 == 0)
{
lean_object* x_251; 
lean_dec(x_242);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_235);
lean_inc(x_4);
x_251 = l_Lean_Meta_compatibleCtors(x_4, x_235, x_10, x_11, x_12, x_13, x_249);
if (lean_obj_tag(x_251) == 0)
{
lean_object* x_252; uint8_t x_253; 
x_252 = lean_ctor_get(x_251, 0);
lean_inc(x_252);
x_253 = lean_unbox(x_252);
lean_dec(x_252);
if (x_253 == 0)
{
lean_object* x_254; lean_object* x_255; 
lean_dec(x_248);
lean_dec(x_235);
x_254 = lean_ctor_get(x_251, 1);
lean_inc(x_254);
lean_dec(x_251);
x_255 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_255, 0, x_7);
x_237 = x_255;
x_238 = x_254;
goto block_241;
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; size_t x_416; size_t x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; 
x_256 = lean_ctor_get(x_251, 1);
lean_inc(x_256);
lean_dec(x_251);
x_257 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_12, x_13, x_256);
x_258 = lean_ctor_get(x_257, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_257, 1);
lean_inc(x_259);
lean_dec(x_257);
x_260 = l_Lean_Elab_Term_getCurrMacroScope(x_8, x_9, x_10, x_11, x_12, x_13, x_259);
x_261 = lean_ctor_get(x_260, 1);
lean_inc(x_261);
lean_dec(x_260);
x_262 = l_Lean_Elab_Term_getMainModule___rarg(x_13, x_261);
x_263 = lean_ctor_get(x_262, 1);
lean_inc(x_263);
lean_dec(x_262);
x_264 = lean_box(0);
x_265 = lean_mk_string("Lean");
x_266 = lean_name_mk_string(x_264, x_265);
x_267 = lean_mk_string("Parser");
x_268 = lean_name_mk_string(x_266, x_267);
x_269 = lean_mk_string("Term");
lean_inc(x_268);
x_270 = lean_name_mk_string(x_268, x_269);
x_271 = lean_mk_string("app");
lean_inc(x_270);
x_272 = lean_name_mk_string(x_270, x_271);
lean_inc(x_4);
x_273 = lean_mk_syntax_ident(x_4);
x_274 = lean_mk_string("null");
x_275 = lean_name_mk_string(x_264, x_274);
x_276 = lean_mk_string("ellipsis");
lean_inc(x_270);
x_277 = lean_name_mk_string(x_270, x_276);
x_278 = lean_mk_string("..");
lean_inc(x_278);
x_279 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_279, 0, x_258);
lean_ctor_set(x_279, 1, x_278);
x_280 = lean_mk_empty_array_with_capacity(x_245);
lean_inc(x_280);
x_281 = lean_array_push(x_280, x_279);
lean_inc(x_277);
x_282 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_282, 0, x_277);
lean_ctor_set(x_282, 1, x_281);
lean_inc(x_280);
x_283 = lean_array_push(x_280, x_282);
lean_inc(x_275);
x_284 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_284, 0, x_275);
lean_ctor_set(x_284, 1, x_283);
x_285 = lean_unsigned_to_nat(2u);
x_286 = lean_mk_empty_array_with_capacity(x_285);
lean_inc(x_286);
x_287 = lean_array_push(x_286, x_273);
x_288 = lean_array_push(x_287, x_284);
lean_inc(x_272);
x_289 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_289, 0, x_272);
lean_ctor_set(x_289, 1, x_288);
x_290 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_12, x_13, x_263);
x_291 = lean_ctor_get(x_290, 0);
lean_inc(x_291);
x_292 = lean_ctor_get(x_290, 1);
lean_inc(x_292);
lean_dec(x_290);
x_293 = l_Lean_Elab_Term_getCurrMacroScope(x_8, x_9, x_10, x_11, x_12, x_13, x_292);
x_294 = lean_ctor_get(x_293, 1);
lean_inc(x_294);
lean_dec(x_293);
x_295 = l_Lean_Elab_Term_getMainModule___rarg(x_13, x_294);
x_296 = lean_ctor_get(x_295, 1);
lean_inc(x_296);
lean_dec(x_295);
x_297 = lean_mk_syntax_ident(x_235);
x_298 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_298, 0, x_291);
lean_ctor_set(x_298, 1, x_278);
lean_inc(x_280);
x_299 = lean_array_push(x_280, x_298);
x_300 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_300, 0, x_277);
lean_ctor_set(x_300, 1, x_299);
lean_inc(x_280);
x_301 = lean_array_push(x_280, x_300);
lean_inc(x_275);
x_302 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_302, 0, x_275);
lean_ctor_set(x_302, 1, x_301);
lean_inc(x_286);
x_303 = lean_array_push(x_286, x_297);
x_304 = lean_array_push(x_303, x_302);
lean_inc(x_272);
x_305 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_305, 0, x_272);
lean_ctor_set(x_305, 1, x_304);
lean_inc(x_286);
x_306 = lean_array_push(x_286, x_289);
x_307 = lean_array_push(x_306, x_305);
x_308 = l_Array_append___rarg(x_248, x_307);
lean_dec(x_307);
x_309 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_12, x_13, x_296);
x_310 = lean_ctor_get(x_309, 0);
lean_inc(x_310);
x_311 = lean_ctor_get(x_309, 1);
lean_inc(x_311);
lean_dec(x_309);
x_312 = l_Lean_Elab_Term_getCurrMacroScope(x_8, x_9, x_10, x_11, x_12, x_13, x_311);
x_313 = lean_ctor_get(x_312, 0);
lean_inc(x_313);
x_314 = lean_ctor_get(x_312, 1);
lean_inc(x_314);
lean_dec(x_312);
x_315 = l_Lean_Elab_Term_getMainModule___rarg(x_13, x_314);
x_316 = lean_ctor_get(x_315, 0);
lean_inc(x_316);
x_317 = lean_ctor_get(x_315, 1);
lean_inc(x_317);
lean_dec(x_315);
x_318 = lean_mk_string("isFalse");
x_319 = lean_string_utf8_byte_size(x_318);
lean_inc(x_318);
x_320 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_320, 0, x_318);
lean_ctor_set(x_320, 1, x_244);
lean_ctor_set(x_320, 2, x_319);
lean_inc(x_318);
x_321 = lean_name_mk_string(x_264, x_318);
lean_inc(x_313);
lean_inc(x_316);
x_322 = l_Lean_addMacroScope(x_316, x_321, x_313);
x_323 = lean_mk_string("Decidable");
x_324 = lean_name_mk_string(x_264, x_323);
x_325 = lean_name_mk_string(x_324, x_318);
x_326 = lean_box(0);
x_327 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_327, 0, x_325);
lean_ctor_set(x_327, 1, x_326);
x_328 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_328, 0, x_327);
lean_ctor_set(x_328, 1, x_326);
lean_inc(x_310);
x_329 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_329, 0, x_310);
lean_ctor_set(x_329, 1, x_320);
lean_ctor_set(x_329, 2, x_322);
lean_ctor_set(x_329, 3, x_328);
x_330 = lean_mk_string("paren");
lean_inc(x_270);
x_331 = lean_name_mk_string(x_270, x_330);
x_332 = lean_mk_string("(");
lean_inc(x_310);
x_333 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_333, 0, x_310);
lean_ctor_set(x_333, 1, x_332);
x_334 = lean_mk_string("byTactic");
lean_inc(x_270);
x_335 = lean_name_mk_string(x_270, x_334);
x_336 = lean_mk_string("by");
lean_inc(x_310);
x_337 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_337, 0, x_310);
lean_ctor_set(x_337, 1, x_336);
x_338 = lean_mk_string("Tactic");
x_339 = lean_name_mk_string(x_268, x_338);
x_340 = lean_mk_string("tacticSeq");
lean_inc(x_339);
x_341 = lean_name_mk_string(x_339, x_340);
x_342 = lean_mk_string("tacticSeq1Indented");
lean_inc(x_339);
x_343 = lean_name_mk_string(x_339, x_342);
x_344 = lean_mk_string("group");
x_345 = lean_name_mk_string(x_264, x_344);
x_346 = lean_mk_string("intro");
lean_inc(x_346);
lean_inc(x_339);
x_347 = lean_name_mk_string(x_339, x_346);
lean_inc(x_310);
x_348 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_348, 0, x_310);
lean_ctor_set(x_348, 1, x_346);
x_349 = lean_mk_string("h");
x_350 = lean_string_utf8_byte_size(x_349);
lean_inc(x_349);
x_351 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_351, 0, x_349);
lean_ctor_set(x_351, 1, x_244);
lean_ctor_set(x_351, 2, x_350);
x_352 = lean_name_mk_string(x_264, x_349);
x_353 = l_Lean_addMacroScope(x_316, x_352, x_313);
lean_inc(x_310);
x_354 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_354, 0, x_310);
lean_ctor_set(x_354, 1, x_351);
lean_ctor_set(x_354, 2, x_353);
lean_ctor_set(x_354, 3, x_326);
lean_inc(x_354);
lean_inc(x_280);
x_355 = lean_array_push(x_280, x_354);
lean_inc(x_275);
x_356 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_356, 0, x_275);
lean_ctor_set(x_356, 1, x_355);
lean_inc(x_286);
x_357 = lean_array_push(x_286, x_348);
x_358 = lean_array_push(x_357, x_356);
x_359 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_359, 0, x_347);
lean_ctor_set(x_359, 1, x_358);
x_360 = lean_mk_string(";");
lean_inc(x_310);
x_361 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_361, 0, x_310);
lean_ctor_set(x_361, 1, x_360);
lean_inc(x_280);
x_362 = lean_array_push(x_280, x_361);
lean_inc(x_275);
x_363 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_363, 0, x_275);
lean_ctor_set(x_363, 1, x_362);
lean_inc(x_286);
x_364 = lean_array_push(x_286, x_359);
x_365 = lean_array_push(x_364, x_363);
lean_inc(x_345);
x_366 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_366, 0, x_345);
lean_ctor_set(x_366, 1, x_365);
x_367 = lean_mk_string("injection");
lean_inc(x_367);
x_368 = lean_name_mk_string(x_339, x_367);
lean_inc(x_310);
x_369 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_369, 0, x_310);
lean_ctor_set(x_369, 1, x_367);
lean_inc(x_3);
lean_inc(x_275);
x_370 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_370, 0, x_275);
lean_ctor_set(x_370, 1, x_3);
x_371 = lean_unsigned_to_nat(3u);
x_372 = lean_mk_empty_array_with_capacity(x_371);
lean_inc(x_372);
x_373 = lean_array_push(x_372, x_369);
x_374 = lean_array_push(x_373, x_354);
lean_inc(x_370);
x_375 = lean_array_push(x_374, x_370);
x_376 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_376, 0, x_368);
lean_ctor_set(x_376, 1, x_375);
lean_inc(x_286);
x_377 = lean_array_push(x_286, x_376);
lean_inc(x_370);
x_378 = lean_array_push(x_377, x_370);
x_379 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_379, 0, x_345);
lean_ctor_set(x_379, 1, x_378);
lean_inc(x_286);
x_380 = lean_array_push(x_286, x_366);
x_381 = lean_array_push(x_380, x_379);
lean_inc(x_275);
x_382 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_382, 0, x_275);
lean_ctor_set(x_382, 1, x_381);
lean_inc(x_280);
x_383 = lean_array_push(x_280, x_382);
x_384 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_384, 0, x_343);
lean_ctor_set(x_384, 1, x_383);
lean_inc(x_280);
x_385 = lean_array_push(x_280, x_384);
x_386 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_386, 0, x_341);
lean_ctor_set(x_386, 1, x_385);
lean_inc(x_286);
x_387 = lean_array_push(x_286, x_337);
x_388 = lean_array_push(x_387, x_386);
x_389 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_389, 0, x_335);
lean_ctor_set(x_389, 1, x_388);
lean_inc(x_286);
x_390 = lean_array_push(x_286, x_389);
x_391 = lean_array_push(x_390, x_370);
lean_inc(x_275);
x_392 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_392, 0, x_275);
lean_ctor_set(x_392, 1, x_391);
x_393 = lean_mk_string(")");
x_394 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_394, 0, x_310);
lean_ctor_set(x_394, 1, x_393);
x_395 = lean_array_push(x_372, x_333);
x_396 = lean_array_push(x_395, x_392);
x_397 = lean_array_push(x_396, x_394);
x_398 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_398, 0, x_331);
lean_ctor_set(x_398, 1, x_397);
x_399 = lean_array_push(x_280, x_398);
lean_inc(x_275);
x_400 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_400, 0, x_275);
lean_ctor_set(x_400, 1, x_399);
x_401 = lean_array_push(x_286, x_329);
x_402 = lean_array_push(x_401, x_400);
x_403 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_403, 0, x_272);
lean_ctor_set(x_403, 1, x_402);
x_404 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_12, x_13, x_317);
x_405 = lean_ctor_get(x_404, 0);
lean_inc(x_405);
x_406 = lean_ctor_get(x_404, 1);
lean_inc(x_406);
lean_dec(x_404);
x_407 = l_Lean_Elab_Term_getCurrMacroScope(x_8, x_9, x_10, x_11, x_12, x_13, x_406);
x_408 = lean_ctor_get(x_407, 1);
lean_inc(x_408);
lean_dec(x_407);
x_409 = l_Lean_Elab_Term_getMainModule___rarg(x_13, x_408);
x_410 = lean_ctor_get(x_409, 1);
lean_inc(x_410);
lean_dec(x_409);
x_411 = lean_mk_string("matchAlt");
x_412 = lean_name_mk_string(x_270, x_411);
x_413 = lean_mk_string("|");
lean_inc(x_405);
x_414 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_414, 0, x_405);
lean_ctor_set(x_414, 1, x_413);
x_415 = lean_array_get_size(x_308);
x_416 = lean_usize_of_nat(x_415);
lean_dec(x_415);
x_417 = 0;
x_418 = x_308;
x_419 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_416, x_417, x_418);
x_420 = x_419;
x_421 = lean_box(2);
x_422 = lean_mk_string(",");
x_423 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_423, 0, x_421);
lean_ctor_set(x_423, 1, x_422);
x_424 = l_Lean_mkSepArray(x_420, x_423);
lean_dec(x_420);
lean_inc(x_3);
x_425 = l_Array_append___rarg(x_3, x_424);
lean_dec(x_424);
x_426 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_426, 0, x_275);
lean_ctor_set(x_426, 1, x_425);
x_427 = lean_mk_string("=>");
x_428 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_428, 0, x_405);
lean_ctor_set(x_428, 1, x_427);
x_429 = lean_unsigned_to_nat(4u);
x_430 = lean_mk_empty_array_with_capacity(x_429);
x_431 = lean_array_push(x_430, x_414);
x_432 = lean_array_push(x_431, x_426);
x_433 = lean_array_push(x_432, x_428);
x_434 = lean_array_push(x_433, x_403);
x_435 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_435, 0, x_412);
lean_ctor_set(x_435, 1, x_434);
x_436 = lean_array_push(x_7, x_435);
x_437 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_437, 0, x_436);
x_237 = x_437;
x_238 = x_410;
goto block_241;
}
}
else
{
lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; 
lean_dec(x_248);
lean_dec(x_236);
lean_dec(x_235);
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
lean_dec(x_1);
x_438 = lean_ctor_get(x_251, 0);
lean_inc(x_438);
x_439 = lean_ctor_get(x_251, 1);
lean_inc(x_439);
if (lean_is_exclusive(x_251)) {
 lean_ctor_release(x_251, 0);
 lean_ctor_release(x_251, 1);
 x_440 = x_251;
} else {
 lean_dec_ref(x_251);
 x_440 = lean_box(0);
}
if (lean_is_scalar(x_440)) {
 x_441 = lean_alloc_ctor(1, 2, 0);
} else {
 x_441 = x_440;
}
lean_ctor_set(x_441, 0, x_438);
lean_ctor_set(x_441, 1, x_439);
return x_441;
}
}
else
{
lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; 
lean_dec(x_235);
x_442 = lean_ctor_get(x_5, 0);
lean_inc(x_442);
x_443 = lean_ctor_get(x_442, 2);
lean_inc(x_443);
lean_dec(x_442);
lean_inc(x_2);
lean_inc(x_4);
lean_inc(x_1);
lean_inc(x_5);
lean_inc(x_3);
x_444 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__6___lambda__1___boxed), 16, 7);
lean_closure_set(x_444, 0, x_242);
lean_closure_set(x_444, 1, x_3);
lean_closure_set(x_444, 2, x_5);
lean_closure_set(x_444, 3, x_1);
lean_closure_set(x_444, 4, x_4);
lean_closure_set(x_444, 5, x_248);
lean_closure_set(x_444, 6, x_2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_445 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(x_443, x_444, x_8, x_9, x_10, x_11, x_12, x_13, x_249);
if (lean_obj_tag(x_445) == 0)
{
lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; 
x_446 = lean_ctor_get(x_445, 0);
lean_inc(x_446);
x_447 = lean_ctor_get(x_445, 1);
lean_inc(x_447);
lean_dec(x_445);
x_448 = lean_array_push(x_7, x_446);
x_449 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_449, 0, x_448);
x_237 = x_449;
x_238 = x_447;
goto block_241;
}
else
{
lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; 
lean_dec(x_236);
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
lean_dec(x_1);
x_450 = lean_ctor_get(x_445, 0);
lean_inc(x_450);
x_451 = lean_ctor_get(x_445, 1);
lean_inc(x_451);
if (lean_is_exclusive(x_445)) {
 lean_ctor_release(x_445, 0);
 lean_ctor_release(x_445, 1);
 x_452 = x_445;
} else {
 lean_dec_ref(x_445);
 x_452 = lean_box(0);
}
if (lean_is_scalar(x_452)) {
 x_453 = lean_alloc_ctor(1, 2, 0);
} else {
 x_453 = x_452;
}
lean_ctor_set(x_453, 0, x_450);
lean_ctor_set(x_453, 1, x_451);
return x_453;
}
}
block_241:
{
lean_object* x_239; 
x_239 = lean_ctor_get(x_237, 0);
lean_inc(x_239);
lean_dec(x_237);
x_6 = x_236;
x_7 = x_239;
x_14 = x_238;
goto _start;
}
}
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_14; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_5, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_5, 1);
lean_inc(x_16);
lean_dec(x_5);
lean_inc(x_7);
lean_inc(x_15);
x_17 = l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__1(x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_20 = l_List_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__6(x_1, x_2, x_3, x_15, x_18, x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_5 = x_16;
x_6 = x_21;
x_13 = x_22;
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_16);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_20);
if (x_24 == 0)
{
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_20, 0);
x_26 = lean_ctor_get(x_20, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_20);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_16);
lean_dec(x_15);
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
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_17);
if (x_28 == 0)
{
return x_17;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_17, 0);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_17);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_mk_empty_array_with_capacity(x_10);
x_12 = lean_ctor_get(x_1, 4);
lean_inc(x_12);
lean_inc(x_12);
lean_inc(x_11);
x_13 = l_List_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__7(x_1, x_2, x_11, x_12, x_12, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_16;
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__6___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_List_forIn_loop___at_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts___spec__6___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_4);
return x_17;
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_2);
x_12 = l_Lean_Elab_Deriving_mkDiscrs(x_1, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_Lean_Elab_Deriving_DecEq_mkMatch_mkAlts(x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_9, x_10, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_20);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_22);
lean_dec(x_10);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; size_t x_42; size_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
x_26 = lean_box(0);
x_27 = lean_mk_string("Lean");
x_28 = lean_name_mk_string(x_26, x_27);
x_29 = lean_mk_string("Parser");
x_30 = lean_name_mk_string(x_28, x_29);
x_31 = lean_mk_string("Term");
x_32 = lean_name_mk_string(x_30, x_31);
x_33 = lean_mk_string("match");
lean_inc(x_33);
lean_inc(x_32);
x_34 = lean_name_mk_string(x_32, x_33);
lean_inc(x_19);
x_35 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_35, 0, x_19);
lean_ctor_set(x_35, 1, x_33);
x_36 = lean_mk_string("null");
x_37 = lean_name_mk_string(x_26, x_36);
x_38 = lean_unsigned_to_nat(0u);
x_39 = lean_mk_empty_array_with_capacity(x_38);
lean_inc(x_39);
lean_inc(x_37);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_array_get_size(x_13);
x_42 = lean_usize_of_nat(x_41);
lean_dec(x_41);
x_43 = 0;
x_44 = x_13;
x_45 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_42, x_43, x_44);
x_46 = x_45;
x_47 = lean_box(2);
x_48 = lean_mk_string(",");
x_49 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = l_Lean_mkSepArray(x_46, x_49);
lean_dec(x_46);
lean_inc(x_39);
x_51 = l_Array_append___rarg(x_39, x_50);
lean_dec(x_50);
lean_inc(x_37);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_37);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_mk_string("with");
x_54 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_54, 0, x_19);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_mk_string("matchAlts");
x_56 = lean_name_mk_string(x_32, x_55);
x_57 = l_Array_append___rarg(x_39, x_16);
lean_dec(x_16);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_37);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_unsigned_to_nat(1u);
x_60 = lean_mk_empty_array_with_capacity(x_59);
x_61 = lean_array_push(x_60, x_58);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_56);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_unsigned_to_nat(6u);
x_64 = lean_mk_empty_array_with_capacity(x_63);
x_65 = lean_array_push(x_64, x_35);
lean_inc(x_40);
x_66 = lean_array_push(x_65, x_40);
x_67 = lean_array_push(x_66, x_52);
x_68 = lean_array_push(x_67, x_40);
x_69 = lean_array_push(x_68, x_54);
x_70 = lean_array_push(x_69, x_62);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_34);
lean_ctor_set(x_71, 1, x_70);
lean_ctor_set(x_23, 0, x_71);
return x_23;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; size_t x_89; size_t x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_72 = lean_ctor_get(x_23, 1);
lean_inc(x_72);
lean_dec(x_23);
x_73 = lean_box(0);
x_74 = lean_mk_string("Lean");
x_75 = lean_name_mk_string(x_73, x_74);
x_76 = lean_mk_string("Parser");
x_77 = lean_name_mk_string(x_75, x_76);
x_78 = lean_mk_string("Term");
x_79 = lean_name_mk_string(x_77, x_78);
x_80 = lean_mk_string("match");
lean_inc(x_80);
lean_inc(x_79);
x_81 = lean_name_mk_string(x_79, x_80);
lean_inc(x_19);
x_82 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_82, 0, x_19);
lean_ctor_set(x_82, 1, x_80);
x_83 = lean_mk_string("null");
x_84 = lean_name_mk_string(x_73, x_83);
x_85 = lean_unsigned_to_nat(0u);
x_86 = lean_mk_empty_array_with_capacity(x_85);
lean_inc(x_86);
lean_inc(x_84);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_array_get_size(x_13);
x_89 = lean_usize_of_nat(x_88);
lean_dec(x_88);
x_90 = 0;
x_91 = x_13;
x_92 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_89, x_90, x_91);
x_93 = x_92;
x_94 = lean_box(2);
x_95 = lean_mk_string(",");
x_96 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
x_97 = l_Lean_mkSepArray(x_93, x_96);
lean_dec(x_93);
lean_inc(x_86);
x_98 = l_Array_append___rarg(x_86, x_97);
lean_dec(x_97);
lean_inc(x_84);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_84);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_mk_string("with");
x_101 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_101, 0, x_19);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_mk_string("matchAlts");
x_103 = lean_name_mk_string(x_79, x_102);
x_104 = l_Array_append___rarg(x_86, x_16);
lean_dec(x_16);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_84);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_unsigned_to_nat(1u);
x_107 = lean_mk_empty_array_with_capacity(x_106);
x_108 = lean_array_push(x_107, x_105);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_103);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_unsigned_to_nat(6u);
x_111 = lean_mk_empty_array_with_capacity(x_110);
x_112 = lean_array_push(x_111, x_82);
lean_inc(x_87);
x_113 = lean_array_push(x_112, x_87);
x_114 = lean_array_push(x_113, x_99);
x_115 = lean_array_push(x_114, x_87);
x_116 = lean_array_push(x_115, x_101);
x_117 = lean_array_push(x_116, x_109);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_81);
lean_ctor_set(x_118, 1, x_117);
x_119 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_72);
return x_119;
}
}
else
{
uint8_t x_120; 
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_120 = !lean_is_exclusive(x_15);
if (x_120 == 0)
{
return x_15;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_121 = lean_ctor_get(x_15, 0);
x_122 = lean_ctor_get(x_15, 1);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_15);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_122);
return x_123;
}
}
}
else
{
uint8_t x_124; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_124 = !lean_is_exclusive(x_12);
if (x_124 == 0)
{
return x_12;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_12, 0);
x_126 = lean_ctor_get(x_12, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_12);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_DecEq_mkMatch___rarg___boxed), 11, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Deriving_DecEq_mkMatch___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_12;
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkMatch___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Deriving_DecEq_mkMatch(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkAuxFunction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_ctor_get(x_1, 1);
x_10 = l_Lean_instInhabitedName;
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_get(x_10, x_9, x_11);
x_13 = lean_ctor_get(x_1, 0);
x_14 = l_Lean_instInhabitedInductiveVal;
x_15 = lean_array_get(x_14, x_13, x_11);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_15);
x_16 = l_Lean_Elab_Deriving_DecEq_mkDecEqHeader___rarg(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_12);
lean_inc(x_17);
x_20 = l_Lean_Elab_Deriving_DecEq_mkMatch___rarg(x_17, x_15, x_12, x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_18);
lean_dec(x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_ctor_get(x_17, 0);
lean_inc(x_23);
x_24 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_6, x_7, x_22);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_box(0);
x_34 = lean_mk_string("Lean");
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = lean_mk_string("Parser");
x_37 = lean_name_mk_string(x_35, x_36);
x_38 = lean_mk_string("Term");
lean_inc(x_37);
x_39 = lean_name_mk_string(x_37, x_38);
x_40 = lean_mk_string("app");
lean_inc(x_39);
x_41 = lean_name_mk_string(x_39, x_40);
x_42 = lean_mk_string("Decidable");
x_43 = lean_string_utf8_byte_size(x_42);
lean_inc(x_42);
x_44 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_11);
lean_ctor_set(x_44, 2, x_43);
x_45 = lean_name_mk_string(x_33, x_42);
lean_inc(x_45);
x_46 = l_Lean_addMacroScope(x_31, x_45, x_28);
x_47 = lean_box(0);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
lean_inc(x_25);
x_50 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_50, 0, x_25);
lean_ctor_set(x_50, 1, x_44);
lean_ctor_set(x_50, 2, x_46);
lean_ctor_set(x_50, 3, x_49);
x_51 = lean_mk_string("null");
x_52 = lean_name_mk_string(x_33, x_51);
x_53 = lean_mk_string("paren");
lean_inc(x_39);
x_54 = lean_name_mk_string(x_39, x_53);
x_55 = lean_mk_string("(");
lean_inc(x_25);
x_56 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_56, 0, x_25);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_mk_string("term_=_");
x_58 = lean_name_mk_string(x_33, x_57);
x_59 = lean_ctor_get(x_17, 2);
lean_inc(x_59);
lean_dec(x_17);
x_60 = lean_array_get(x_10, x_59, x_11);
x_61 = lean_mk_syntax_ident(x_60);
x_62 = lean_mk_string("=");
lean_inc(x_25);
x_63 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_63, 0, x_25);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_unsigned_to_nat(1u);
x_65 = lean_array_get(x_10, x_59, x_64);
lean_dec(x_59);
x_66 = lean_mk_syntax_ident(x_65);
x_67 = lean_unsigned_to_nat(3u);
x_68 = lean_mk_empty_array_with_capacity(x_67);
lean_inc(x_68);
x_69 = lean_array_push(x_68, x_61);
x_70 = lean_array_push(x_69, x_63);
x_71 = lean_array_push(x_70, x_66);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_58);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_mk_empty_array_with_capacity(x_11);
lean_inc(x_73);
lean_inc(x_52);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_52);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_unsigned_to_nat(2u);
x_76 = lean_mk_empty_array_with_capacity(x_75);
lean_inc(x_76);
x_77 = lean_array_push(x_76, x_72);
lean_inc(x_74);
x_78 = lean_array_push(x_77, x_74);
lean_inc(x_52);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_52);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_mk_string(")");
x_81 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_81, 0, x_25);
lean_ctor_set(x_81, 1, x_80);
lean_inc(x_68);
x_82 = lean_array_push(x_68, x_56);
x_83 = lean_array_push(x_82, x_79);
x_84 = lean_array_push(x_83, x_81);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_54);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_mk_empty_array_with_capacity(x_64);
lean_inc(x_86);
x_87 = lean_array_push(x_86, x_85);
lean_inc(x_52);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_52);
lean_ctor_set(x_88, 1, x_87);
lean_inc(x_76);
x_89 = lean_array_push(x_76, x_50);
x_90 = lean_array_push(x_89, x_88);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_41);
lean_ctor_set(x_91, 1, x_90);
x_92 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_6, x_7, x_32);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_95 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_94);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
lean_dec(x_95);
x_97 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_96);
lean_dec(x_7);
x_98 = !lean_is_exclusive(x_97);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_99 = lean_ctor_get(x_97, 0);
lean_dec(x_99);
x_100 = lean_mk_string("Command");
x_101 = lean_name_mk_string(x_37, x_100);
x_102 = lean_mk_string("declaration");
lean_inc(x_101);
x_103 = lean_name_mk_string(x_101, x_102);
x_104 = lean_mk_string("declModifiers");
lean_inc(x_101);
x_105 = lean_name_mk_string(x_101, x_104);
x_106 = lean_mk_string("private");
lean_inc(x_106);
lean_inc(x_101);
x_107 = lean_name_mk_string(x_101, x_106);
lean_inc(x_93);
x_108 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_108, 0, x_93);
lean_ctor_set(x_108, 1, x_106);
lean_inc(x_86);
x_109 = lean_array_push(x_86, x_108);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_107);
lean_ctor_set(x_110, 1, x_109);
lean_inc(x_86);
x_111 = lean_array_push(x_86, x_110);
lean_inc(x_52);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_52);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_unsigned_to_nat(6u);
x_114 = lean_mk_empty_array_with_capacity(x_113);
lean_inc(x_74);
x_115 = lean_array_push(x_114, x_74);
lean_inc(x_74);
x_116 = lean_array_push(x_115, x_74);
x_117 = lean_array_push(x_116, x_112);
lean_inc(x_74);
x_118 = lean_array_push(x_117, x_74);
lean_inc(x_74);
x_119 = lean_array_push(x_118, x_74);
lean_inc(x_74);
x_120 = lean_array_push(x_119, x_74);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_105);
lean_ctor_set(x_121, 1, x_120);
x_122 = lean_mk_string("def");
lean_inc(x_122);
lean_inc(x_101);
x_123 = lean_name_mk_string(x_101, x_122);
lean_inc(x_93);
x_124 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_124, 0, x_93);
lean_ctor_set(x_124, 1, x_122);
x_125 = lean_mk_string("declId");
lean_inc(x_101);
x_126 = lean_name_mk_string(x_101, x_125);
x_127 = lean_mk_syntax_ident(x_12);
lean_inc(x_76);
x_128 = lean_array_push(x_76, x_127);
lean_inc(x_74);
x_129 = lean_array_push(x_128, x_74);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_126);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_mk_string("optDeclSig");
lean_inc(x_101);
x_132 = lean_name_mk_string(x_101, x_131);
x_133 = l_Array_append___rarg(x_73, x_23);
lean_dec(x_23);
lean_inc(x_52);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_52);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_mk_string("typeSpec");
x_136 = lean_name_mk_string(x_39, x_135);
x_137 = lean_mk_string(":");
lean_inc(x_93);
x_138 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_138, 0, x_93);
lean_ctor_set(x_138, 1, x_137);
lean_inc(x_76);
x_139 = lean_array_push(x_76, x_138);
x_140 = lean_array_push(x_139, x_91);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_136);
lean_ctor_set(x_141, 1, x_140);
x_142 = lean_array_push(x_86, x_141);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_52);
lean_ctor_set(x_143, 1, x_142);
lean_inc(x_76);
x_144 = lean_array_push(x_76, x_134);
x_145 = lean_array_push(x_144, x_143);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_132);
lean_ctor_set(x_146, 1, x_145);
x_147 = lean_mk_string("declValSimple");
x_148 = lean_name_mk_string(x_101, x_147);
x_149 = lean_mk_string(":=");
x_150 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_150, 0, x_93);
lean_ctor_set(x_150, 1, x_149);
x_151 = lean_array_push(x_68, x_150);
x_152 = lean_array_push(x_151, x_21);
x_153 = lean_array_push(x_152, x_74);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_148);
lean_ctor_set(x_154, 1, x_153);
x_155 = lean_unsigned_to_nat(4u);
x_156 = lean_mk_empty_array_with_capacity(x_155);
x_157 = lean_array_push(x_156, x_124);
x_158 = lean_array_push(x_157, x_130);
x_159 = lean_array_push(x_158, x_146);
x_160 = lean_array_push(x_159, x_154);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_123);
lean_ctor_set(x_161, 1, x_160);
x_162 = lean_array_push(x_76, x_121);
x_163 = lean_array_push(x_162, x_161);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_103);
lean_ctor_set(x_164, 1, x_163);
lean_ctor_set(x_97, 0, x_164);
return x_97;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_165 = lean_ctor_get(x_97, 1);
lean_inc(x_165);
lean_dec(x_97);
x_166 = lean_mk_string("Command");
x_167 = lean_name_mk_string(x_37, x_166);
x_168 = lean_mk_string("declaration");
lean_inc(x_167);
x_169 = lean_name_mk_string(x_167, x_168);
x_170 = lean_mk_string("declModifiers");
lean_inc(x_167);
x_171 = lean_name_mk_string(x_167, x_170);
x_172 = lean_mk_string("private");
lean_inc(x_172);
lean_inc(x_167);
x_173 = lean_name_mk_string(x_167, x_172);
lean_inc(x_93);
x_174 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_174, 0, x_93);
lean_ctor_set(x_174, 1, x_172);
lean_inc(x_86);
x_175 = lean_array_push(x_86, x_174);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_173);
lean_ctor_set(x_176, 1, x_175);
lean_inc(x_86);
x_177 = lean_array_push(x_86, x_176);
lean_inc(x_52);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_52);
lean_ctor_set(x_178, 1, x_177);
x_179 = lean_unsigned_to_nat(6u);
x_180 = lean_mk_empty_array_with_capacity(x_179);
lean_inc(x_74);
x_181 = lean_array_push(x_180, x_74);
lean_inc(x_74);
x_182 = lean_array_push(x_181, x_74);
x_183 = lean_array_push(x_182, x_178);
lean_inc(x_74);
x_184 = lean_array_push(x_183, x_74);
lean_inc(x_74);
x_185 = lean_array_push(x_184, x_74);
lean_inc(x_74);
x_186 = lean_array_push(x_185, x_74);
x_187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_187, 0, x_171);
lean_ctor_set(x_187, 1, x_186);
x_188 = lean_mk_string("def");
lean_inc(x_188);
lean_inc(x_167);
x_189 = lean_name_mk_string(x_167, x_188);
lean_inc(x_93);
x_190 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_190, 0, x_93);
lean_ctor_set(x_190, 1, x_188);
x_191 = lean_mk_string("declId");
lean_inc(x_167);
x_192 = lean_name_mk_string(x_167, x_191);
x_193 = lean_mk_syntax_ident(x_12);
lean_inc(x_76);
x_194 = lean_array_push(x_76, x_193);
lean_inc(x_74);
x_195 = lean_array_push(x_194, x_74);
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_192);
lean_ctor_set(x_196, 1, x_195);
x_197 = lean_mk_string("optDeclSig");
lean_inc(x_167);
x_198 = lean_name_mk_string(x_167, x_197);
x_199 = l_Array_append___rarg(x_73, x_23);
lean_dec(x_23);
lean_inc(x_52);
x_200 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_200, 0, x_52);
lean_ctor_set(x_200, 1, x_199);
x_201 = lean_mk_string("typeSpec");
x_202 = lean_name_mk_string(x_39, x_201);
x_203 = lean_mk_string(":");
lean_inc(x_93);
x_204 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_204, 0, x_93);
lean_ctor_set(x_204, 1, x_203);
lean_inc(x_76);
x_205 = lean_array_push(x_76, x_204);
x_206 = lean_array_push(x_205, x_91);
x_207 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_207, 0, x_202);
lean_ctor_set(x_207, 1, x_206);
x_208 = lean_array_push(x_86, x_207);
x_209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_209, 0, x_52);
lean_ctor_set(x_209, 1, x_208);
lean_inc(x_76);
x_210 = lean_array_push(x_76, x_200);
x_211 = lean_array_push(x_210, x_209);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_198);
lean_ctor_set(x_212, 1, x_211);
x_213 = lean_mk_string("declValSimple");
x_214 = lean_name_mk_string(x_167, x_213);
x_215 = lean_mk_string(":=");
x_216 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_216, 0, x_93);
lean_ctor_set(x_216, 1, x_215);
x_217 = lean_array_push(x_68, x_216);
x_218 = lean_array_push(x_217, x_21);
x_219 = lean_array_push(x_218, x_74);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_214);
lean_ctor_set(x_220, 1, x_219);
x_221 = lean_unsigned_to_nat(4u);
x_222 = lean_mk_empty_array_with_capacity(x_221);
x_223 = lean_array_push(x_222, x_190);
x_224 = lean_array_push(x_223, x_196);
x_225 = lean_array_push(x_224, x_212);
x_226 = lean_array_push(x_225, x_220);
x_227 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_227, 0, x_189);
lean_ctor_set(x_227, 1, x_226);
x_228 = lean_array_push(x_76, x_187);
x_229 = lean_array_push(x_228, x_227);
x_230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_230, 0, x_169);
lean_ctor_set(x_230, 1, x_229);
x_231 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_231, 0, x_230);
lean_ctor_set(x_231, 1, x_165);
return x_231;
}
}
else
{
uint8_t x_232; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_232 = !lean_is_exclusive(x_20);
if (x_232 == 0)
{
return x_20;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_233 = lean_ctor_get(x_20, 0);
x_234 = lean_ctor_get(x_20, 1);
lean_inc(x_234);
lean_inc(x_233);
lean_dec(x_20);
x_235 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_235, 0, x_233);
lean_ctor_set(x_235, 1, x_234);
return x_235;
}
}
}
else
{
uint8_t x_236; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_236 = !lean_is_exclusive(x_16);
if (x_236 == 0)
{
return x_16;
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; 
x_237 = lean_ctor_get(x_16, 0);
x_238 = lean_ctor_get(x_16, 1);
lean_inc(x_238);
lean_inc(x_237);
lean_dec(x_16);
x_239 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_239, 0, x_237);
lean_ctor_set(x_239, 1, x_238);
return x_239;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkAuxFunction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Deriving_DecEq_mkAuxFunction(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_List_map___at_Lean_Elab_Deriving_DecEq_mkDecEqCmds___spec__1(lean_object* x_1) {
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
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_4);
x_7 = l_List_map___at_Lean_Elab_Deriving_DecEq_mkDecEqCmds___spec__1(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_8);
x_11 = l_List_map___at_Lean_Elab_Deriving_DecEq_mkDecEqCmds___spec__1(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkDecEqCmds(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_mk_string("decEq");
lean_inc(x_2);
lean_inc(x_10);
lean_inc(x_11);
x_12 = l_Lean_Elab_Deriving_mkContext(x_11, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_15 = l_Lean_Elab_Deriving_DecEq_mkAuxFunction(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_box(0);
x_19 = lean_mk_string("DecidableEq");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_mk_empty_array_with_capacity(x_21);
lean_inc(x_22);
x_23 = lean_array_push(x_22, x_10);
x_24 = 0;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_25 = l_Lean_Elab_Deriving_mkInstanceCmds(x_13, x_20, x_23, x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
lean_dec(x_23);
lean_dec(x_13);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 lean_ctor_release(x_25, 1);
 x_28 = x_25;
} else {
 lean_dec_ref(x_25);
 x_28 = lean_box(0);
}
x_29 = lean_array_push(x_22, x_16);
x_30 = l_Array_append___rarg(x_29, x_26);
lean_dec(x_26);
x_31 = lean_mk_string("Elab");
x_32 = lean_name_mk_string(x_18, x_31);
x_33 = lean_mk_string("Deriving");
x_34 = lean_name_mk_string(x_32, x_33);
x_35 = lean_name_mk_string(x_34, x_11);
x_54 = lean_st_ref_get(x_7, x_27);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_55, 3);
lean_inc(x_56);
lean_dec(x_55);
x_57 = lean_ctor_get_uint8(x_56, sizeof(void*)*1);
lean_dec(x_56);
if (x_57 == 0)
{
lean_object* x_58; 
x_58 = lean_ctor_get(x_54, 1);
lean_inc(x_58);
lean_dec(x_54);
x_36 = x_24;
x_37 = x_58;
goto block_53;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_59 = lean_ctor_get(x_54, 1);
lean_inc(x_59);
lean_dec(x_54);
lean_inc(x_35);
x_60 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_35, x_2, x_3, x_4, x_5, x_6, x_7, x_59);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = lean_unbox(x_61);
lean_dec(x_61);
x_36 = x_63;
x_37 = x_62;
goto block_53;
}
block_53:
{
if (x_36 == 0)
{
lean_object* x_38; 
lean_dec(x_35);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_28)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_28;
}
lean_ctor_set(x_38, 0, x_30);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
lean_dec(x_28);
x_39 = lean_mk_string("\n");
x_40 = l_Lean_stringToMessageData(x_39);
lean_dec(x_39);
lean_inc(x_30);
x_41 = lean_array_to_list(lean_box(0), x_30);
x_42 = l_List_map___at_Lean_Elab_Deriving_DecEq_mkDecEqCmds___spec__1(x_41);
x_43 = l_Lean_MessageData_ofList(x_42);
lean_dec(x_42);
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_40);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_mk_string("");
x_46 = l_Lean_stringToMessageData(x_45);
lean_dec(x_45);
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_46);
x_48 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_35, x_47, x_2, x_3, x_4, x_5, x_6, x_7, x_37);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
lean_object* x_50; 
x_50 = lean_ctor_get(x_48, 0);
lean_dec(x_50);
lean_ctor_set(x_48, 0, x_30);
return x_48;
}
else
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_dec(x_48);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_30);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
else
{
uint8_t x_64; 
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_64 = !lean_is_exclusive(x_25);
if (x_64 == 0)
{
return x_25;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_25, 0);
x_66 = lean_ctor_get(x_25, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_25);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
uint8_t x_68; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_68 = !lean_is_exclusive(x_15);
if (x_68 == 0)
{
return x_15;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_15, 0);
x_70 = lean_ctor_get(x_15, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_15);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
else
{
uint8_t x_72; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_72 = !lean_is_exclusive(x_12);
if (x_72 == 0)
{
return x_12;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_12, 0);
x_74 = lean_ctor_get(x_12, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_12);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = l_Lean_Elab_Command_getRef(x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_2, 4);
lean_inc(x_8);
lean_inc(x_8);
x_9 = l_Lean_Elab_getBetterRef(x_6, x_8);
lean_dec(x_6);
x_10 = l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(x_1, x_2, x_3, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(x_11, x_8, x_2, x_3, x_12);
lean_dec(x_2);
lean_dec(x_8);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set_tag(x_13, 1);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
}
lean_object* l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Lean_getConstInfo___at_Lean_Elab_elabDeriving___spec__7(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 5)
{
uint8_t x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_dec(x_8);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
lean_ctor_set(x_5, 0, x_9);
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_5, 1);
lean_inc(x_10);
lean_dec(x_5);
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_6);
x_13 = lean_ctor_get(x_5, 1);
lean_inc(x_13);
lean_dec(x_5);
x_14 = lean_mk_string("'");
x_15 = l_Lean_stringToMessageData(x_14);
lean_dec(x_14);
x_16 = lean_box(0);
x_17 = l_Lean_mkConst(x_1, x_16);
x_18 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_15);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_mk_string("' is not a inductive type");
x_21 = l_Lean_stringToMessageData(x_20);
lean_dec(x_20);
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_throwError___at_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler___spec__2(x_22, x_2, x_3, x_13);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_5);
if (x_24 == 0)
{
return x_5;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_5, 0);
x_26 = lean_ctor_get(x_5, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_5);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_array_get_size(x_1);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_dec_eq(x_5, x_6);
lean_dec(x_5);
if (x_7 == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_8 = 0;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_4);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = l_Lean_instInhabitedName;
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_array_get(x_11, x_1, x_12);
lean_inc(x_2);
x_14 = l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler___spec__1(x_13, x_2, x_3, x_4);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get_uint8(x_15, sizeof(void*)*5 + 3);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
x_18 = lean_box(0);
x_19 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_DecEq_mkDecEqCmds), 8, 1);
lean_closure_set(x_19, 0, x_15);
lean_inc(x_2);
x_20 = l_Lean_Elab_Command_liftTermElabM___rarg(x_18, x_19, x_2, x_3, x_17);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = lean_array_get_size(x_22);
x_25 = lean_nat_dec_lt(x_12, x_24);
if (x_25 == 0)
{
uint8_t x_26; lean_object* x_27; 
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_3);
lean_dec(x_2);
x_26 = 1;
x_27 = lean_box(x_26);
lean_ctor_set(x_20, 0, x_27);
return x_20;
}
else
{
uint8_t x_28; 
x_28 = lean_nat_dec_le(x_24, x_24);
if (x_28 == 0)
{
uint8_t x_29; lean_object* x_30; 
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_3);
lean_dec(x_2);
x_29 = 1;
x_30 = lean_box(x_29);
lean_ctor_set(x_20, 0, x_30);
return x_20;
}
else
{
size_t x_31; size_t x_32; lean_object* x_33; lean_object* x_34; 
lean_free_object(x_20);
x_31 = 0;
x_32 = lean_usize_of_nat(x_24);
lean_dec(x_24);
x_33 = lean_box(0);
x_34 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(x_22, x_31, x_32, x_33, x_2, x_3, x_23);
lean_dec(x_2);
lean_dec(x_22);
if (lean_obj_tag(x_34) == 0)
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
x_37 = 1;
x_38 = lean_box(x_37);
lean_ctor_set(x_34, 0, x_38);
return x_34;
}
else
{
lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_34, 1);
lean_inc(x_39);
lean_dec(x_34);
x_40 = 1;
x_41 = lean_box(x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_39);
return x_42;
}
}
else
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_34);
if (x_43 == 0)
{
return x_34;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_34, 0);
x_45 = lean_ctor_get(x_34, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_34);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_47 = lean_ctor_get(x_20, 0);
x_48 = lean_ctor_get(x_20, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_20);
x_49 = lean_array_get_size(x_47);
x_50 = lean_nat_dec_lt(x_12, x_49);
if (x_50 == 0)
{
uint8_t x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_3);
lean_dec(x_2);
x_51 = 1;
x_52 = lean_box(x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_48);
return x_53;
}
else
{
uint8_t x_54; 
x_54 = lean_nat_dec_le(x_49, x_49);
if (x_54 == 0)
{
uint8_t x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_3);
lean_dec(x_2);
x_55 = 1;
x_56 = lean_box(x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_48);
return x_57;
}
else
{
size_t x_58; size_t x_59; lean_object* x_60; lean_object* x_61; 
x_58 = 0;
x_59 = lean_usize_of_nat(x_49);
lean_dec(x_49);
x_60 = lean_box(0);
x_61 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(x_47, x_58, x_59, x_60, x_2, x_3, x_48);
lean_dec(x_2);
lean_dec(x_47);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; uint8_t x_64; lean_object* x_65; lean_object* x_66; 
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_63 = x_61;
} else {
 lean_dec_ref(x_61);
 x_63 = lean_box(0);
}
x_64 = 1;
x_65 = lean_box(x_64);
if (lean_is_scalar(x_63)) {
 x_66 = lean_alloc_ctor(0, 2, 0);
} else {
 x_66 = x_63;
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_62);
return x_66;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_67 = lean_ctor_get(x_61, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_61, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_69 = x_61;
} else {
 lean_dec_ref(x_61);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(1, 2, 0);
} else {
 x_70 = x_69;
}
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
}
}
}
else
{
uint8_t x_71; 
lean_dec(x_3);
lean_dec(x_2);
x_71 = !lean_is_exclusive(x_20);
if (x_71 == 0)
{
return x_20;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_20, 0);
x_73 = lean_ctor_get(x_20, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_20);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_15);
lean_dec(x_3);
lean_dec(x_2);
x_75 = !lean_is_exclusive(x_14);
if (x_75 == 0)
{
lean_object* x_76; uint8_t x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_14, 0);
lean_dec(x_76);
x_77 = 0;
x_78 = lean_box(x_77);
lean_ctor_set(x_14, 0, x_78);
return x_14;
}
else
{
lean_object* x_79; uint8_t x_80; lean_object* x_81; lean_object* x_82; 
x_79 = lean_ctor_get(x_14, 1);
lean_inc(x_79);
lean_dec(x_14);
x_80 = 0;
x_81 = lean_box(x_80);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_79);
return x_82;
}
}
}
else
{
uint8_t x_83; 
lean_dec(x_3);
lean_dec(x_2);
x_83 = !lean_is_exclusive(x_14);
if (x_83 == 0)
{
return x_14;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_14, 0);
x_85 = lean_ctor_get(x_14, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_14);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwError___at_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Deriving_DecEq_initFn____x40_Lean_Elab_Deriving_DecEq___hyg_2438_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_box(0);
x_3 = lean_mk_string("DecidableEq");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_DecEq_mkDecEqInstanceHandler___boxed), 4, 0);
x_6 = l_Lean_Elab_registerBuiltinDerivingHandler(x_4, x_5, x_1);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_mk_string("Elab");
x_9 = lean_name_mk_string(x_2, x_8);
x_10 = lean_mk_string("Deriving");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_mk_string("decEq");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = l_Lean_registerTraceClass(x_13, x_7);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_6);
if (x_15 == 0)
{
return x_6;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_6, 0);
x_17 = lean_ctor_get(x_6, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_6);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Transform(lean_object*);
lean_object* initialize_Lean_Meta_Inductive(lean_object*);
lean_object* initialize_Lean_Elab_Deriving_Basic(lean_object*);
lean_object* initialize_Lean_Elab_Deriving_Util(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Deriving_DecEq(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Inductive(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Util(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Deriving_DecEq_initFn____x40_Lean_Elab_Deriving_DecEq___hyg_2438_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
