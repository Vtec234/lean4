// Lean compiler output
// Module: Lean.Elab.Deriving.BEq
// Imports: Init Lean.Meta.Transform Lean.Elab.Deriving.Basic Lean.Elab.Deriving.Util
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
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch_mkElseAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkBEqHeader___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch_mkElseAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkAuxFunction___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_betaReduce___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch_mkAlts_match__2___rarg(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkBEqHeader___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkDiscrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInstanceCmds(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch_mkAlts_match__1(lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch(lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch_mkAlts_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMutualBlock___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkAuxFunction___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductive___at_Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch_mkAlts_match__2(lean_object*);
lean_object* l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkHeader___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductive___at_Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkBEqHeader(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch_mkAlts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_initFn____x40_Lean_Elab_Deriving_BEq___hyg_2129_(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(size_t, size_t, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMutualBlock___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch___boxed(lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_registerBuiltinDerivingHandler(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkMutualBlock(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkMutualBlock___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkAuxFunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_syntax_ident(lean_object*);
extern lean_object* l_Lean_instInhabitedInductiveVal;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkElseAlt___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_betaReduce___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkBEqInstanceHandler(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkAuxFunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___spec__1(lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkElseAlt___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_BEq_mkBEqHeader___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_box(0);
x_10 = lean_mk_string("BEq");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_unsigned_to_nat(2u);
x_13 = l_Lean_Elab_Deriving_mkHeader___rarg(x_11, x_12, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_13;
}
}
lean_object* l_Lean_Elab_Deriving_BEq_mkBEqHeader(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_BEq_mkBEqHeader___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_BEq_mkBEqHeader___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Deriving_BEq_mkBEqHeader(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch_mkAlts_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch_mkAlts_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_BEq_mkMatch_mkAlts_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch_mkAlts_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch_mkAlts_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_BEq_mkMatch_mkAlts_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkElseAlt___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
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
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch_mkElseAlt(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_mk_empty_array_with_capacity(x_9);
x_11 = lean_ctor_get(x_1, 2);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_unsigned_to_nat(1u);
lean_inc(x_11);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_11);
lean_ctor_set(x_13, 2, x_12);
lean_inc(x_10);
x_14 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkElseAlt___spec__1(x_13, x_11, x_9, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_6, x_7, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_19);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_box(0);
x_25 = lean_mk_string("Lean");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = lean_mk_string("Parser");
x_28 = lean_name_mk_string(x_26, x_27);
x_29 = lean_mk_string("Term");
x_30 = lean_name_mk_string(x_28, x_29);
x_31 = lean_mk_string("hole");
lean_inc(x_30);
x_32 = lean_name_mk_string(x_30, x_31);
x_33 = lean_mk_string("_");
lean_inc(x_33);
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_18);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_mk_empty_array_with_capacity(x_12);
lean_inc(x_35);
x_36 = lean_array_push(x_35, x_34);
lean_inc(x_32);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_32);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_array_push(x_15, x_37);
x_39 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_6, x_7, x_23);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_41);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_43);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_46, 0, x_40);
lean_ctor_set(x_46, 1, x_33);
x_47 = lean_array_push(x_35, x_46);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_32);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_array_push(x_38, x_48);
x_50 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_6, x_7, x_45);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_52);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_55);
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = lean_mk_string("false");
x_60 = lean_string_utf8_byte_size(x_59);
lean_inc(x_59);
x_61 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_9);
lean_ctor_set(x_61, 2, x_60);
lean_inc(x_59);
x_62 = lean_name_mk_string(x_24, x_59);
x_63 = l_Lean_addMacroScope(x_57, x_62, x_54);
x_64 = lean_mk_string("Bool");
x_65 = lean_name_mk_string(x_24, x_64);
x_66 = lean_name_mk_string(x_65, x_59);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_67);
x_70 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_70, 0, x_51);
lean_ctor_set(x_70, 1, x_61);
lean_ctor_set(x_70, 2, x_63);
lean_ctor_set(x_70, 3, x_69);
x_71 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_6, x_7, x_58);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_74 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_73);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_76 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_75);
x_77 = !lean_is_exclusive(x_76);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; size_t x_86; size_t x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_78 = lean_ctor_get(x_76, 0);
lean_dec(x_78);
x_79 = lean_mk_string("matchAlt");
x_80 = lean_name_mk_string(x_30, x_79);
x_81 = lean_mk_string("|");
lean_inc(x_72);
x_82 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_82, 0, x_72);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_mk_string("null");
x_84 = lean_name_mk_string(x_24, x_83);
x_85 = lean_array_get_size(x_49);
x_86 = lean_usize_of_nat(x_85);
lean_dec(x_85);
x_87 = 0;
x_88 = x_49;
x_89 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_86, x_87, x_88);
x_90 = x_89;
x_91 = lean_box(2);
x_92 = lean_mk_string(",");
x_93 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
x_94 = l_Lean_mkSepArray(x_90, x_93);
lean_dec(x_90);
x_95 = l_Array_append___rarg(x_10, x_94);
lean_dec(x_94);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_84);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_mk_string("=>");
x_98 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_98, 0, x_72);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_unsigned_to_nat(4u);
x_100 = lean_mk_empty_array_with_capacity(x_99);
x_101 = lean_array_push(x_100, x_82);
x_102 = lean_array_push(x_101, x_96);
x_103 = lean_array_push(x_102, x_98);
x_104 = lean_array_push(x_103, x_70);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_80);
lean_ctor_set(x_105, 1, x_104);
lean_ctor_set(x_76, 0, x_105);
return x_76;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; size_t x_114; size_t x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_106 = lean_ctor_get(x_76, 1);
lean_inc(x_106);
lean_dec(x_76);
x_107 = lean_mk_string("matchAlt");
x_108 = lean_name_mk_string(x_30, x_107);
x_109 = lean_mk_string("|");
lean_inc(x_72);
x_110 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_110, 0, x_72);
lean_ctor_set(x_110, 1, x_109);
x_111 = lean_mk_string("null");
x_112 = lean_name_mk_string(x_24, x_111);
x_113 = lean_array_get_size(x_49);
x_114 = lean_usize_of_nat(x_113);
lean_dec(x_113);
x_115 = 0;
x_116 = x_49;
x_117 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_114, x_115, x_116);
x_118 = x_117;
x_119 = lean_box(2);
x_120 = lean_mk_string(",");
x_121 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
x_122 = l_Lean_mkSepArray(x_118, x_121);
lean_dec(x_118);
x_123 = l_Array_append___rarg(x_10, x_122);
lean_dec(x_122);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_112);
lean_ctor_set(x_124, 1, x_123);
x_125 = lean_mk_string("=>");
x_126 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_126, 0, x_72);
lean_ctor_set(x_126, 1, x_125);
x_127 = lean_unsigned_to_nat(4u);
x_128 = lean_mk_empty_array_with_capacity(x_127);
x_129 = lean_array_push(x_128, x_110);
x_130 = lean_array_push(x_129, x_124);
x_131 = lean_array_push(x_130, x_126);
x_132 = lean_array_push(x_131, x_70);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_108);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_106);
return x_134;
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkElseAlt___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkElseAlt___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch_mkElseAlt___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Deriving_BEq_mkMatch_mkElseAlt(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
x_27 = l_Lean_throwError___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__2(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
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
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
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
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_6, 1);
x_18 = lean_nat_dec_le(x_17, x_8);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_7, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_7, x_21);
lean_dec(x_7);
x_30 = lean_ctor_get(x_9, 1);
lean_inc(x_30);
x_31 = lean_ctor_get(x_9, 0);
lean_inc(x_31);
lean_dec(x_9);
x_32 = !lean_is_exclusive(x_30);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_33 = lean_ctor_get(x_30, 0);
x_34 = lean_ctor_get(x_30, 1);
x_35 = lean_nat_add(x_5, x_8);
x_36 = l_Lean_instInhabitedExpr;
x_37 = lean_array_get(x_36, x_3, x_35);
lean_dec(x_35);
x_38 = l_Lean_Expr_fvarId_x21(x_37);
x_39 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Expr_containsFVar___spec__1(x_38, x_4);
lean_dec(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_40 = lean_box(0);
x_41 = lean_mk_string("a");
x_42 = lean_name_mk_string(x_40, x_41);
x_43 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_42, x_14, x_15, x_16);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_mk_syntax_ident(x_44);
x_47 = lean_mk_string("b");
x_48 = lean_name_mk_string(x_40, x_47);
x_49 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_48, x_14, x_15, x_45);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_mk_syntax_ident(x_50);
lean_inc(x_46);
x_53 = lean_array_push(x_31, x_46);
lean_inc(x_52);
x_54 = lean_array_push(x_33, x_52);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_55 = l_Lean_Meta_inferType(x_37, x_12, x_13, x_14, x_15, x_51);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_ctor_get(x_1, 0);
x_59 = lean_ctor_get(x_58, 0);
x_60 = l_Lean_Expr_isAppOf(x_56, x_59);
lean_dec(x_56);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_61 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_57);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_63);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_65);
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
lean_dec(x_66);
x_68 = lean_mk_string("term_&&_");
x_69 = lean_name_mk_string(x_40, x_68);
x_70 = lean_mk_string("&&");
lean_inc(x_62);
x_71 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_71, 0, x_62);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_mk_string("term_==_");
x_73 = lean_name_mk_string(x_40, x_72);
x_74 = lean_mk_string("==");
x_75 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_75, 0, x_62);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_unsigned_to_nat(3u);
x_77 = lean_mk_empty_array_with_capacity(x_76);
lean_inc(x_77);
x_78 = lean_array_push(x_77, x_46);
x_79 = lean_array_push(x_78, x_75);
x_80 = lean_array_push(x_79, x_52);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_73);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_array_push(x_77, x_34);
x_83 = lean_array_push(x_82, x_71);
x_84 = lean_array_push(x_83, x_81);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_69);
lean_ctor_set(x_85, 1, x_84);
lean_ctor_set(x_30, 1, x_85);
lean_ctor_set(x_30, 0, x_54);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_53);
lean_ctor_set(x_86, 1, x_30);
x_87 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_87, 0, x_86);
x_23 = x_87;
x_24 = x_67;
goto block_29;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_88 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_57);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
lean_dec(x_88);
x_91 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_90);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
lean_dec(x_91);
x_93 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_92);
x_94 = lean_ctor_get(x_93, 1);
lean_inc(x_94);
lean_dec(x_93);
x_95 = lean_mk_string("term_&&_");
x_96 = lean_name_mk_string(x_40, x_95);
x_97 = lean_mk_string("&&");
x_98 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_98, 0, x_89);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_mk_string("Lean");
x_100 = lean_name_mk_string(x_40, x_99);
x_101 = lean_mk_string("Parser");
x_102 = lean_name_mk_string(x_100, x_101);
x_103 = lean_mk_string("Term");
x_104 = lean_name_mk_string(x_102, x_103);
x_105 = lean_mk_string("app");
x_106 = lean_name_mk_string(x_104, x_105);
lean_inc(x_2);
x_107 = lean_mk_syntax_ident(x_2);
x_108 = lean_mk_string("null");
x_109 = lean_name_mk_string(x_40, x_108);
x_110 = lean_unsigned_to_nat(2u);
x_111 = lean_mk_empty_array_with_capacity(x_110);
lean_inc(x_111);
x_112 = lean_array_push(x_111, x_46);
x_113 = lean_array_push(x_112, x_52);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_109);
lean_ctor_set(x_114, 1, x_113);
x_115 = lean_array_push(x_111, x_107);
x_116 = lean_array_push(x_115, x_114);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_106);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_unsigned_to_nat(3u);
x_119 = lean_mk_empty_array_with_capacity(x_118);
x_120 = lean_array_push(x_119, x_34);
x_121 = lean_array_push(x_120, x_98);
x_122 = lean_array_push(x_121, x_117);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_96);
lean_ctor_set(x_123, 1, x_122);
lean_ctor_set(x_30, 1, x_123);
lean_ctor_set(x_30, 0, x_54);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_53);
lean_ctor_set(x_124, 1, x_30);
x_125 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_125, 0, x_124);
x_23 = x_125;
x_24 = x_94;
goto block_29;
}
}
else
{
uint8_t x_126; 
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_46);
lean_free_object(x_30);
lean_dec(x_34);
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_2);
x_126 = !lean_is_exclusive(x_55);
if (x_126 == 0)
{
return x_55;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_127 = lean_ctor_get(x_55, 0);
x_128 = lean_ctor_get(x_55, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_55);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_127);
lean_ctor_set(x_129, 1, x_128);
return x_129;
}
}
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
lean_dec(x_37);
x_130 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_16);
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec(x_130);
x_133 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_132);
x_134 = lean_ctor_get(x_133, 1);
lean_inc(x_134);
lean_dec(x_133);
x_135 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_134);
x_136 = lean_ctor_get(x_135, 1);
lean_inc(x_136);
lean_dec(x_135);
x_137 = lean_box(0);
x_138 = lean_mk_string("Lean");
x_139 = lean_name_mk_string(x_137, x_138);
x_140 = lean_mk_string("Parser");
x_141 = lean_name_mk_string(x_139, x_140);
x_142 = lean_mk_string("Term");
x_143 = lean_name_mk_string(x_141, x_142);
x_144 = lean_mk_string("hole");
x_145 = lean_name_mk_string(x_143, x_144);
x_146 = lean_mk_string("_");
lean_inc(x_146);
x_147 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_147, 0, x_131);
lean_ctor_set(x_147, 1, x_146);
x_148 = lean_mk_empty_array_with_capacity(x_21);
lean_inc(x_148);
x_149 = lean_array_push(x_148, x_147);
lean_inc(x_145);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_145);
lean_ctor_set(x_150, 1, x_149);
x_151 = lean_array_push(x_31, x_150);
x_152 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_136);
x_153 = lean_ctor_get(x_152, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_152, 1);
lean_inc(x_154);
lean_dec(x_152);
x_155 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_154);
x_156 = lean_ctor_get(x_155, 1);
lean_inc(x_156);
lean_dec(x_155);
x_157 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_156);
x_158 = lean_ctor_get(x_157, 1);
lean_inc(x_158);
lean_dec(x_157);
x_159 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_159, 0, x_153);
lean_ctor_set(x_159, 1, x_146);
x_160 = lean_array_push(x_148, x_159);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_145);
lean_ctor_set(x_161, 1, x_160);
x_162 = lean_array_push(x_33, x_161);
lean_ctor_set(x_30, 0, x_162);
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_151);
lean_ctor_set(x_163, 1, x_30);
x_164 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_164, 0, x_163);
x_23 = x_164;
x_24 = x_158;
goto block_29;
}
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; uint8_t x_171; 
x_165 = lean_ctor_get(x_30, 0);
x_166 = lean_ctor_get(x_30, 1);
lean_inc(x_166);
lean_inc(x_165);
lean_dec(x_30);
x_167 = lean_nat_add(x_5, x_8);
x_168 = l_Lean_instInhabitedExpr;
x_169 = lean_array_get(x_168, x_3, x_167);
lean_dec(x_167);
x_170 = l_Lean_Expr_fvarId_x21(x_169);
x_171 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Expr_containsFVar___spec__1(x_170, x_4);
lean_dec(x_170);
if (x_171 == 0)
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
x_172 = lean_box(0);
x_173 = lean_mk_string("a");
x_174 = lean_name_mk_string(x_172, x_173);
x_175 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_174, x_14, x_15, x_16);
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
lean_dec(x_175);
x_178 = lean_mk_syntax_ident(x_176);
x_179 = lean_mk_string("b");
x_180 = lean_name_mk_string(x_172, x_179);
x_181 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_180, x_14, x_15, x_177);
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_181, 1);
lean_inc(x_183);
lean_dec(x_181);
x_184 = lean_mk_syntax_ident(x_182);
lean_inc(x_178);
x_185 = lean_array_push(x_31, x_178);
lean_inc(x_184);
x_186 = lean_array_push(x_165, x_184);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_187 = l_Lean_Meta_inferType(x_169, x_12, x_13, x_14, x_15, x_183);
if (lean_obj_tag(x_187) == 0)
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; uint8_t x_192; 
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 1);
lean_inc(x_189);
lean_dec(x_187);
x_190 = lean_ctor_get(x_1, 0);
x_191 = lean_ctor_get(x_190, 0);
x_192 = l_Lean_Expr_isAppOf(x_188, x_191);
lean_dec(x_188);
if (x_192 == 0)
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_193 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_189);
x_194 = lean_ctor_get(x_193, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_193, 1);
lean_inc(x_195);
lean_dec(x_193);
x_196 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_195);
x_197 = lean_ctor_get(x_196, 1);
lean_inc(x_197);
lean_dec(x_196);
x_198 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_197);
x_199 = lean_ctor_get(x_198, 1);
lean_inc(x_199);
lean_dec(x_198);
x_200 = lean_mk_string("term_&&_");
x_201 = lean_name_mk_string(x_172, x_200);
x_202 = lean_mk_string("&&");
lean_inc(x_194);
x_203 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_203, 0, x_194);
lean_ctor_set(x_203, 1, x_202);
x_204 = lean_mk_string("term_==_");
x_205 = lean_name_mk_string(x_172, x_204);
x_206 = lean_mk_string("==");
x_207 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_207, 0, x_194);
lean_ctor_set(x_207, 1, x_206);
x_208 = lean_unsigned_to_nat(3u);
x_209 = lean_mk_empty_array_with_capacity(x_208);
lean_inc(x_209);
x_210 = lean_array_push(x_209, x_178);
x_211 = lean_array_push(x_210, x_207);
x_212 = lean_array_push(x_211, x_184);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_205);
lean_ctor_set(x_213, 1, x_212);
x_214 = lean_array_push(x_209, x_166);
x_215 = lean_array_push(x_214, x_203);
x_216 = lean_array_push(x_215, x_213);
x_217 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_217, 0, x_201);
lean_ctor_set(x_217, 1, x_216);
x_218 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_218, 0, x_186);
lean_ctor_set(x_218, 1, x_217);
x_219 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_219, 0, x_185);
lean_ctor_set(x_219, 1, x_218);
x_220 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_220, 0, x_219);
x_23 = x_220;
x_24 = x_199;
goto block_29;
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; 
x_221 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_189);
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
lean_dec(x_221);
x_224 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_223);
x_225 = lean_ctor_get(x_224, 1);
lean_inc(x_225);
lean_dec(x_224);
x_226 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_225);
x_227 = lean_ctor_get(x_226, 1);
lean_inc(x_227);
lean_dec(x_226);
x_228 = lean_mk_string("term_&&_");
x_229 = lean_name_mk_string(x_172, x_228);
x_230 = lean_mk_string("&&");
x_231 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_231, 0, x_222);
lean_ctor_set(x_231, 1, x_230);
x_232 = lean_mk_string("Lean");
x_233 = lean_name_mk_string(x_172, x_232);
x_234 = lean_mk_string("Parser");
x_235 = lean_name_mk_string(x_233, x_234);
x_236 = lean_mk_string("Term");
x_237 = lean_name_mk_string(x_235, x_236);
x_238 = lean_mk_string("app");
x_239 = lean_name_mk_string(x_237, x_238);
lean_inc(x_2);
x_240 = lean_mk_syntax_ident(x_2);
x_241 = lean_mk_string("null");
x_242 = lean_name_mk_string(x_172, x_241);
x_243 = lean_unsigned_to_nat(2u);
x_244 = lean_mk_empty_array_with_capacity(x_243);
lean_inc(x_244);
x_245 = lean_array_push(x_244, x_178);
x_246 = lean_array_push(x_245, x_184);
x_247 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_247, 0, x_242);
lean_ctor_set(x_247, 1, x_246);
x_248 = lean_array_push(x_244, x_240);
x_249 = lean_array_push(x_248, x_247);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_239);
lean_ctor_set(x_250, 1, x_249);
x_251 = lean_unsigned_to_nat(3u);
x_252 = lean_mk_empty_array_with_capacity(x_251);
x_253 = lean_array_push(x_252, x_166);
x_254 = lean_array_push(x_253, x_231);
x_255 = lean_array_push(x_254, x_250);
x_256 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_256, 0, x_229);
lean_ctor_set(x_256, 1, x_255);
x_257 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_257, 0, x_186);
lean_ctor_set(x_257, 1, x_256);
x_258 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_258, 0, x_185);
lean_ctor_set(x_258, 1, x_257);
x_259 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_259, 0, x_258);
x_23 = x_259;
x_24 = x_227;
goto block_29;
}
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
lean_dec(x_186);
lean_dec(x_185);
lean_dec(x_184);
lean_dec(x_178);
lean_dec(x_166);
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_2);
x_260 = lean_ctor_get(x_187, 0);
lean_inc(x_260);
x_261 = lean_ctor_get(x_187, 1);
lean_inc(x_261);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 x_262 = x_187;
} else {
 lean_dec_ref(x_187);
 x_262 = lean_box(0);
}
if (lean_is_scalar(x_262)) {
 x_263 = lean_alloc_ctor(1, 2, 0);
} else {
 x_263 = x_262;
}
lean_ctor_set(x_263, 0, x_260);
lean_ctor_set(x_263, 1, x_261);
return x_263;
}
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; 
lean_dec(x_169);
x_264 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_16);
x_265 = lean_ctor_get(x_264, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_264, 1);
lean_inc(x_266);
lean_dec(x_264);
x_267 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_266);
x_268 = lean_ctor_get(x_267, 1);
lean_inc(x_268);
lean_dec(x_267);
x_269 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_268);
x_270 = lean_ctor_get(x_269, 1);
lean_inc(x_270);
lean_dec(x_269);
x_271 = lean_box(0);
x_272 = lean_mk_string("Lean");
x_273 = lean_name_mk_string(x_271, x_272);
x_274 = lean_mk_string("Parser");
x_275 = lean_name_mk_string(x_273, x_274);
x_276 = lean_mk_string("Term");
x_277 = lean_name_mk_string(x_275, x_276);
x_278 = lean_mk_string("hole");
x_279 = lean_name_mk_string(x_277, x_278);
x_280 = lean_mk_string("_");
lean_inc(x_280);
x_281 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_281, 0, x_265);
lean_ctor_set(x_281, 1, x_280);
x_282 = lean_mk_empty_array_with_capacity(x_21);
lean_inc(x_282);
x_283 = lean_array_push(x_282, x_281);
lean_inc(x_279);
x_284 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_284, 0, x_279);
lean_ctor_set(x_284, 1, x_283);
x_285 = lean_array_push(x_31, x_284);
x_286 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_270);
x_287 = lean_ctor_get(x_286, 0);
lean_inc(x_287);
x_288 = lean_ctor_get(x_286, 1);
lean_inc(x_288);
lean_dec(x_286);
x_289 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_288);
x_290 = lean_ctor_get(x_289, 1);
lean_inc(x_290);
lean_dec(x_289);
x_291 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_290);
x_292 = lean_ctor_get(x_291, 1);
lean_inc(x_292);
lean_dec(x_291);
x_293 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_293, 0, x_287);
lean_ctor_set(x_293, 1, x_280);
x_294 = lean_array_push(x_282, x_293);
x_295 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_295, 0, x_279);
lean_ctor_set(x_295, 1, x_294);
x_296 = lean_array_push(x_165, x_295);
x_297 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_297, 0, x_296);
lean_ctor_set(x_297, 1, x_166);
x_298 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_298, 0, x_285);
lean_ctor_set(x_298, 1, x_297);
x_299 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_299, 0, x_298);
x_23 = x_299;
x_24 = x_292;
goto block_29;
}
}
block_29:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_6, 2);
x_27 = lean_nat_add(x_8, x_26);
lean_dec(x_8);
x_7 = x_22;
x_8 = x_27;
x_9 = x_25;
x_16 = x_24;
goto _start;
}
}
else
{
lean_object* x_300; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_300 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_300, 0, x_9);
lean_ctor_set(x_300, 1, x_16);
return x_300;
}
}
else
{
lean_object* x_301; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_301 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_301, 0, x_9);
lean_ctor_set(x_301, 1, x_16);
return x_301;
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_alloc_closure((void*)(l_Lean_Core_betaReduce___lambda__1___boxed), 4, 0);
x_16 = lean_alloc_closure((void*)(l_Lean_Core_betaReduce___lambda__2___boxed), 4, 0);
lean_inc(x_13);
lean_inc(x_12);
x_17 = l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(x_7, x_15, x_16, x_12, x_13, x_14);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 2);
lean_inc(x_21);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_unsigned_to_nat(1u);
lean_inc(x_21);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_21);
lean_ctor_set(x_24, 2, x_23);
lean_inc(x_2);
x_25 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkElseAlt___spec__1(x_24, x_21, x_22, x_2, x_8, x_9, x_10, x_11, x_12, x_13, x_19);
lean_dec(x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_12, x_13, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_Elab_Term_getCurrMacroScope(x_8, x_9, x_10, x_11, x_12, x_13, x_30);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Elab_Term_getMainModule___rarg(x_13, x_33);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_mk_string("true");
x_38 = lean_string_utf8_byte_size(x_37);
lean_inc(x_37);
x_39 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_22);
lean_ctor_set(x_39, 2, x_38);
x_40 = lean_box(0);
lean_inc(x_37);
x_41 = lean_name_mk_string(x_40, x_37);
x_42 = l_Lean_addMacroScope(x_35, x_41, x_32);
x_43 = lean_mk_string("Bool");
x_44 = lean_name_mk_string(x_40, x_43);
x_45 = lean_name_mk_string(x_44, x_37);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_49, 0, x_29);
lean_ctor_set(x_49, 1, x_39);
lean_ctor_set(x_49, 2, x_42);
lean_ctor_set(x_49, 3, x_48);
lean_inc(x_20);
x_50 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_50, 0, x_22);
lean_ctor_set(x_50, 1, x_20);
lean_ctor_set(x_50, 2, x_23);
lean_inc_n(x_2, 2);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_2);
lean_ctor_set(x_51, 1, x_2);
lean_inc(x_20);
x_52 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__3(x_50, x_20, x_22, x_51, x_8, x_9, x_10, x_11, x_12, x_13, x_36);
lean_dec(x_50);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = !lean_is_exclusive(x_53);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_56 = lean_ctor_get(x_53, 0);
x_57 = lean_ctor_get(x_53, 1);
x_58 = lean_ctor_get(x_3, 4);
lean_inc(x_58);
lean_dec(x_3);
lean_inc(x_58);
x_59 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_59, 0, x_22);
lean_ctor_set(x_59, 1, x_58);
lean_ctor_set(x_59, 2, x_23);
lean_ctor_set(x_53, 1, x_49);
lean_ctor_set(x_53, 0, x_57);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_56);
lean_ctor_set(x_60, 1, x_53);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_61 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__4(x_1, x_4, x_6, x_18, x_20, x_59, x_58, x_22, x_60, x_8, x_9, x_10, x_11, x_12, x_13, x_54);
lean_dec(x_59);
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_1);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
x_64 = lean_ctor_get(x_61, 1);
lean_inc(x_64);
lean_dec(x_61);
x_65 = lean_ctor_get(x_62, 0);
lean_inc(x_65);
lean_dec(x_62);
x_66 = lean_ctor_get(x_63, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_63, 1);
lean_inc(x_67);
lean_dec(x_63);
x_68 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_12, x_13, x_64);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec(x_68);
x_71 = l_Lean_Elab_Term_getCurrMacroScope(x_8, x_9, x_10, x_11, x_12, x_13, x_70);
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
lean_dec(x_71);
x_73 = l_Lean_Elab_Term_getMainModule___rarg(x_13, x_72);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
lean_dec(x_73);
x_75 = lean_mk_string("Lean");
x_76 = lean_name_mk_string(x_40, x_75);
x_77 = lean_mk_string("Parser");
x_78 = lean_name_mk_string(x_76, x_77);
x_79 = lean_mk_string("Term");
x_80 = lean_name_mk_string(x_78, x_79);
x_81 = lean_mk_string("app");
lean_inc(x_80);
x_82 = lean_name_mk_string(x_80, x_81);
x_83 = lean_mk_string("explicit");
lean_inc(x_80);
x_84 = lean_name_mk_string(x_80, x_83);
x_85 = lean_mk_string("@");
lean_inc(x_85);
x_86 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_86, 0, x_69);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_mk_syntax_ident(x_5);
x_88 = lean_unsigned_to_nat(2u);
x_89 = lean_mk_empty_array_with_capacity(x_88);
lean_inc(x_89);
x_90 = lean_array_push(x_89, x_86);
lean_inc(x_87);
x_91 = lean_array_push(x_90, x_87);
lean_inc(x_84);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_84);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_mk_string("null");
x_94 = lean_name_mk_string(x_40, x_93);
lean_inc(x_2);
x_95 = l_Array_append___rarg(x_2, x_65);
lean_dec(x_65);
lean_inc(x_94);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
lean_inc(x_89);
x_97 = lean_array_push(x_89, x_92);
x_98 = lean_array_push(x_97, x_96);
lean_inc(x_82);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_82);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_array_push(x_26, x_99);
x_101 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_12, x_13, x_74);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_104 = l_Lean_Elab_Term_getCurrMacroScope(x_8, x_9, x_10, x_11, x_12, x_13, x_103);
x_105 = lean_ctor_get(x_104, 1);
lean_inc(x_105);
lean_dec(x_104);
x_106 = l_Lean_Elab_Term_getMainModule___rarg(x_13, x_105);
x_107 = lean_ctor_get(x_106, 1);
lean_inc(x_107);
lean_dec(x_106);
x_108 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_108, 0, x_102);
lean_ctor_set(x_108, 1, x_85);
lean_inc(x_89);
x_109 = lean_array_push(x_89, x_108);
x_110 = lean_array_push(x_109, x_87);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_84);
lean_ctor_set(x_111, 1, x_110);
lean_inc(x_2);
x_112 = l_Array_append___rarg(x_2, x_66);
lean_dec(x_66);
lean_inc(x_94);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_94);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_array_push(x_89, x_111);
x_115 = lean_array_push(x_114, x_113);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_82);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_array_push(x_100, x_116);
x_118 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_12, x_13, x_107);
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
lean_dec(x_118);
x_121 = l_Lean_Elab_Term_getCurrMacroScope(x_8, x_9, x_10, x_11, x_12, x_13, x_120);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_122 = lean_ctor_get(x_121, 1);
lean_inc(x_122);
lean_dec(x_121);
x_123 = l_Lean_Elab_Term_getMainModule___rarg(x_13, x_122);
lean_dec(x_13);
x_124 = !lean_is_exclusive(x_123);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; size_t x_131; size_t x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_125 = lean_ctor_get(x_123, 0);
lean_dec(x_125);
x_126 = lean_mk_string("matchAlt");
x_127 = lean_name_mk_string(x_80, x_126);
x_128 = lean_mk_string("|");
lean_inc(x_119);
x_129 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_129, 0, x_119);
lean_ctor_set(x_129, 1, x_128);
x_130 = lean_array_get_size(x_117);
x_131 = lean_usize_of_nat(x_130);
lean_dec(x_130);
x_132 = 0;
x_133 = x_117;
x_134 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_131, x_132, x_133);
x_135 = x_134;
x_136 = lean_box(2);
x_137 = lean_mk_string(",");
x_138 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_138, 0, x_136);
lean_ctor_set(x_138, 1, x_137);
x_139 = l_Lean_mkSepArray(x_135, x_138);
lean_dec(x_135);
x_140 = l_Array_append___rarg(x_2, x_139);
lean_dec(x_139);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_94);
lean_ctor_set(x_141, 1, x_140);
x_142 = lean_mk_string("=>");
x_143 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_143, 0, x_119);
lean_ctor_set(x_143, 1, x_142);
x_144 = lean_unsigned_to_nat(4u);
x_145 = lean_mk_empty_array_with_capacity(x_144);
x_146 = lean_array_push(x_145, x_129);
x_147 = lean_array_push(x_146, x_141);
x_148 = lean_array_push(x_147, x_143);
x_149 = lean_array_push(x_148, x_67);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_127);
lean_ctor_set(x_150, 1, x_149);
lean_ctor_set(x_123, 0, x_150);
return x_123;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; size_t x_157; size_t x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_151 = lean_ctor_get(x_123, 1);
lean_inc(x_151);
lean_dec(x_123);
x_152 = lean_mk_string("matchAlt");
x_153 = lean_name_mk_string(x_80, x_152);
x_154 = lean_mk_string("|");
lean_inc(x_119);
x_155 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_155, 0, x_119);
lean_ctor_set(x_155, 1, x_154);
x_156 = lean_array_get_size(x_117);
x_157 = lean_usize_of_nat(x_156);
lean_dec(x_156);
x_158 = 0;
x_159 = x_117;
x_160 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_157, x_158, x_159);
x_161 = x_160;
x_162 = lean_box(2);
x_163 = lean_mk_string(",");
x_164 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_163);
x_165 = l_Lean_mkSepArray(x_161, x_164);
lean_dec(x_161);
x_166 = l_Array_append___rarg(x_2, x_165);
lean_dec(x_165);
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_94);
lean_ctor_set(x_167, 1, x_166);
x_168 = lean_mk_string("=>");
x_169 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_169, 0, x_119);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_unsigned_to_nat(4u);
x_171 = lean_mk_empty_array_with_capacity(x_170);
x_172 = lean_array_push(x_171, x_155);
x_173 = lean_array_push(x_172, x_167);
x_174 = lean_array_push(x_173, x_169);
x_175 = lean_array_push(x_174, x_67);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_153);
lean_ctor_set(x_176, 1, x_175);
x_177 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_177, 0, x_176);
lean_ctor_set(x_177, 1, x_151);
return x_177;
}
}
else
{
uint8_t x_178; 
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_2);
x_178 = !lean_is_exclusive(x_61);
if (x_178 == 0)
{
return x_61;
}
else
{
lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_179 = lean_ctor_get(x_61, 0);
x_180 = lean_ctor_get(x_61, 1);
lean_inc(x_180);
lean_inc(x_179);
lean_dec(x_61);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set(x_181, 1, x_180);
return x_181;
}
}
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_182 = lean_ctor_get(x_53, 0);
x_183 = lean_ctor_get(x_53, 1);
lean_inc(x_183);
lean_inc(x_182);
lean_dec(x_53);
x_184 = lean_ctor_get(x_3, 4);
lean_inc(x_184);
lean_dec(x_3);
lean_inc(x_184);
x_185 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_185, 0, x_22);
lean_ctor_set(x_185, 1, x_184);
lean_ctor_set(x_185, 2, x_23);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_183);
lean_ctor_set(x_186, 1, x_49);
x_187 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_187, 0, x_182);
lean_ctor_set(x_187, 1, x_186);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
x_188 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__4(x_1, x_4, x_6, x_18, x_20, x_185, x_184, x_22, x_187, x_8, x_9, x_10, x_11, x_12, x_13, x_54);
lean_dec(x_185);
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_1);
if (lean_obj_tag(x_188) == 0)
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; size_t x_258; size_t x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; 
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_189, 1);
lean_inc(x_190);
x_191 = lean_ctor_get(x_188, 1);
lean_inc(x_191);
lean_dec(x_188);
x_192 = lean_ctor_get(x_189, 0);
lean_inc(x_192);
lean_dec(x_189);
x_193 = lean_ctor_get(x_190, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_190, 1);
lean_inc(x_194);
lean_dec(x_190);
x_195 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_12, x_13, x_191);
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_195, 1);
lean_inc(x_197);
lean_dec(x_195);
x_198 = l_Lean_Elab_Term_getCurrMacroScope(x_8, x_9, x_10, x_11, x_12, x_13, x_197);
x_199 = lean_ctor_get(x_198, 1);
lean_inc(x_199);
lean_dec(x_198);
x_200 = l_Lean_Elab_Term_getMainModule___rarg(x_13, x_199);
x_201 = lean_ctor_get(x_200, 1);
lean_inc(x_201);
lean_dec(x_200);
x_202 = lean_mk_string("Lean");
x_203 = lean_name_mk_string(x_40, x_202);
x_204 = lean_mk_string("Parser");
x_205 = lean_name_mk_string(x_203, x_204);
x_206 = lean_mk_string("Term");
x_207 = lean_name_mk_string(x_205, x_206);
x_208 = lean_mk_string("app");
lean_inc(x_207);
x_209 = lean_name_mk_string(x_207, x_208);
x_210 = lean_mk_string("explicit");
lean_inc(x_207);
x_211 = lean_name_mk_string(x_207, x_210);
x_212 = lean_mk_string("@");
lean_inc(x_212);
x_213 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_213, 0, x_196);
lean_ctor_set(x_213, 1, x_212);
x_214 = lean_mk_syntax_ident(x_5);
x_215 = lean_unsigned_to_nat(2u);
x_216 = lean_mk_empty_array_with_capacity(x_215);
lean_inc(x_216);
x_217 = lean_array_push(x_216, x_213);
lean_inc(x_214);
x_218 = lean_array_push(x_217, x_214);
lean_inc(x_211);
x_219 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_219, 0, x_211);
lean_ctor_set(x_219, 1, x_218);
x_220 = lean_mk_string("null");
x_221 = lean_name_mk_string(x_40, x_220);
lean_inc(x_2);
x_222 = l_Array_append___rarg(x_2, x_192);
lean_dec(x_192);
lean_inc(x_221);
x_223 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_223, 0, x_221);
lean_ctor_set(x_223, 1, x_222);
lean_inc(x_216);
x_224 = lean_array_push(x_216, x_219);
x_225 = lean_array_push(x_224, x_223);
lean_inc(x_209);
x_226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_226, 0, x_209);
lean_ctor_set(x_226, 1, x_225);
x_227 = lean_array_push(x_26, x_226);
x_228 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_12, x_13, x_201);
x_229 = lean_ctor_get(x_228, 0);
lean_inc(x_229);
x_230 = lean_ctor_get(x_228, 1);
lean_inc(x_230);
lean_dec(x_228);
x_231 = l_Lean_Elab_Term_getCurrMacroScope(x_8, x_9, x_10, x_11, x_12, x_13, x_230);
x_232 = lean_ctor_get(x_231, 1);
lean_inc(x_232);
lean_dec(x_231);
x_233 = l_Lean_Elab_Term_getMainModule___rarg(x_13, x_232);
x_234 = lean_ctor_get(x_233, 1);
lean_inc(x_234);
lean_dec(x_233);
x_235 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_235, 0, x_229);
lean_ctor_set(x_235, 1, x_212);
lean_inc(x_216);
x_236 = lean_array_push(x_216, x_235);
x_237 = lean_array_push(x_236, x_214);
x_238 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_238, 0, x_211);
lean_ctor_set(x_238, 1, x_237);
lean_inc(x_2);
x_239 = l_Array_append___rarg(x_2, x_193);
lean_dec(x_193);
lean_inc(x_221);
x_240 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_240, 0, x_221);
lean_ctor_set(x_240, 1, x_239);
x_241 = lean_array_push(x_216, x_238);
x_242 = lean_array_push(x_241, x_240);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_209);
lean_ctor_set(x_243, 1, x_242);
x_244 = lean_array_push(x_227, x_243);
x_245 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_12, x_13, x_234);
x_246 = lean_ctor_get(x_245, 0);
lean_inc(x_246);
x_247 = lean_ctor_get(x_245, 1);
lean_inc(x_247);
lean_dec(x_245);
x_248 = l_Lean_Elab_Term_getCurrMacroScope(x_8, x_9, x_10, x_11, x_12, x_13, x_247);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_249 = lean_ctor_get(x_248, 1);
lean_inc(x_249);
lean_dec(x_248);
x_250 = l_Lean_Elab_Term_getMainModule___rarg(x_13, x_249);
lean_dec(x_13);
x_251 = lean_ctor_get(x_250, 1);
lean_inc(x_251);
if (lean_is_exclusive(x_250)) {
 lean_ctor_release(x_250, 0);
 lean_ctor_release(x_250, 1);
 x_252 = x_250;
} else {
 lean_dec_ref(x_250);
 x_252 = lean_box(0);
}
x_253 = lean_mk_string("matchAlt");
x_254 = lean_name_mk_string(x_207, x_253);
x_255 = lean_mk_string("|");
lean_inc(x_246);
x_256 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_256, 0, x_246);
lean_ctor_set(x_256, 1, x_255);
x_257 = lean_array_get_size(x_244);
x_258 = lean_usize_of_nat(x_257);
lean_dec(x_257);
x_259 = 0;
x_260 = x_244;
x_261 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_258, x_259, x_260);
x_262 = x_261;
x_263 = lean_box(2);
x_264 = lean_mk_string(",");
x_265 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_265, 0, x_263);
lean_ctor_set(x_265, 1, x_264);
x_266 = l_Lean_mkSepArray(x_262, x_265);
lean_dec(x_262);
x_267 = l_Array_append___rarg(x_2, x_266);
lean_dec(x_266);
x_268 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_268, 0, x_221);
lean_ctor_set(x_268, 1, x_267);
x_269 = lean_mk_string("=>");
x_270 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_270, 0, x_246);
lean_ctor_set(x_270, 1, x_269);
x_271 = lean_unsigned_to_nat(4u);
x_272 = lean_mk_empty_array_with_capacity(x_271);
x_273 = lean_array_push(x_272, x_256);
x_274 = lean_array_push(x_273, x_268);
x_275 = lean_array_push(x_274, x_270);
x_276 = lean_array_push(x_275, x_194);
x_277 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_277, 0, x_254);
lean_ctor_set(x_277, 1, x_276);
if (lean_is_scalar(x_252)) {
 x_278 = lean_alloc_ctor(0, 2, 0);
} else {
 x_278 = x_252;
}
lean_ctor_set(x_278, 0, x_277);
lean_ctor_set(x_278, 1, x_251);
return x_278;
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
lean_dec(x_26);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_2);
x_279 = lean_ctor_get(x_188, 0);
lean_inc(x_279);
x_280 = lean_ctor_get(x_188, 1);
lean_inc(x_280);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 lean_ctor_release(x_188, 1);
 x_281 = x_188;
} else {
 lean_dec_ref(x_188);
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
uint8_t x_283; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_283 = !lean_is_exclusive(x_17);
if (x_283 == 0)
{
return x_17;
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; 
x_284 = lean_ctor_get(x_17, 0);
x_285 = lean_ctor_get(x_17, 1);
lean_inc(x_285);
lean_inc(x_284);
lean_dec(x_17);
x_286 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_286, 0, x_284);
lean_ctor_set(x_286, 1, x_285);
return x_286;
}
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_13; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_15);
lean_dec(x_4);
lean_inc(x_6);
lean_inc(x_14);
x_16 = l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__1(x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 2);
lean_inc(x_20);
lean_dec(x_19);
lean_inc(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__5___lambda__1___boxed), 14, 5);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_closure_set(x_21, 2, x_17);
lean_closure_set(x_21, 3, x_2);
lean_closure_set(x_21, 4, x_14);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_22 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(x_20, x_21, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_array_push(x_5, x_23);
x_4 = x_15;
x_5 = x_25;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_22);
if (x_27 == 0)
{
return x_22;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_22, 0);
x_29 = lean_ctor_get(x_22, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_22);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_16);
if (x_31 == 0)
{
return x_16;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_16, 0);
x_33 = lean_ctor_get(x_16, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_16);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
}
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch_mkAlts(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_mk_empty_array_with_capacity(x_10);
x_12 = lean_ctor_get(x_1, 4);
lean_inc(x_12);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_11);
lean_inc(x_1);
x_13 = l_List_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__5(x_1, x_2, x_11, x_12, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Elab_Deriving_BEq_mkMatch_mkElseAlt(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_array_push(x_14, x_18);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_16);
x_22 = lean_array_push(x_14, x_20);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_13);
if (x_24 == 0)
{
return x_13;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_13, 0);
x_26 = lean_ctor_get(x_13, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_13);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_17;
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_List_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMatch_mkAlts___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
return x_15;
}
}
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_11 = l_Lean_Elab_Deriving_mkDiscrs(x_1, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_14 = l_Lean_Elab_Deriving_BEq_mkMatch_mkAlts(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_8, x_9, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5, x_6, x_7, x_8, x_9, x_19);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_Elab_Term_getMainModule___rarg(x_9, x_21);
lean_dec(x_9);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; size_t x_41; size_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
x_25 = lean_box(0);
x_26 = lean_mk_string("Lean");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("Parser");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Term");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("match");
lean_inc(x_32);
lean_inc(x_31);
x_33 = lean_name_mk_string(x_31, x_32);
lean_inc(x_18);
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_18);
lean_ctor_set(x_34, 1, x_32);
x_35 = lean_mk_string("null");
x_36 = lean_name_mk_string(x_25, x_35);
x_37 = lean_unsigned_to_nat(0u);
x_38 = lean_mk_empty_array_with_capacity(x_37);
lean_inc(x_38);
lean_inc(x_36);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_36);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_array_get_size(x_12);
x_41 = lean_usize_of_nat(x_40);
lean_dec(x_40);
x_42 = 0;
x_43 = x_12;
x_44 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_41, x_42, x_43);
x_45 = x_44;
x_46 = lean_box(2);
x_47 = lean_mk_string(",");
x_48 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_Lean_mkSepArray(x_45, x_48);
lean_dec(x_45);
lean_inc(x_38);
x_50 = l_Array_append___rarg(x_38, x_49);
lean_dec(x_49);
lean_inc(x_36);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_36);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_mk_string("with");
x_53 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_53, 0, x_18);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_mk_string("matchAlts");
x_55 = lean_name_mk_string(x_31, x_54);
x_56 = l_Array_append___rarg(x_38, x_15);
lean_dec(x_15);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_36);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_unsigned_to_nat(1u);
x_59 = lean_mk_empty_array_with_capacity(x_58);
x_60 = lean_array_push(x_59, x_57);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_55);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_unsigned_to_nat(6u);
x_63 = lean_mk_empty_array_with_capacity(x_62);
x_64 = lean_array_push(x_63, x_34);
lean_inc(x_39);
x_65 = lean_array_push(x_64, x_39);
x_66 = lean_array_push(x_65, x_51);
x_67 = lean_array_push(x_66, x_39);
x_68 = lean_array_push(x_67, x_53);
x_69 = lean_array_push(x_68, x_61);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_33);
lean_ctor_set(x_70, 1, x_69);
lean_ctor_set(x_22, 0, x_70);
return x_22;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; size_t x_88; size_t x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_71 = lean_ctor_get(x_22, 1);
lean_inc(x_71);
lean_dec(x_22);
x_72 = lean_box(0);
x_73 = lean_mk_string("Lean");
x_74 = lean_name_mk_string(x_72, x_73);
x_75 = lean_mk_string("Parser");
x_76 = lean_name_mk_string(x_74, x_75);
x_77 = lean_mk_string("Term");
x_78 = lean_name_mk_string(x_76, x_77);
x_79 = lean_mk_string("match");
lean_inc(x_79);
lean_inc(x_78);
x_80 = lean_name_mk_string(x_78, x_79);
lean_inc(x_18);
x_81 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_81, 0, x_18);
lean_ctor_set(x_81, 1, x_79);
x_82 = lean_mk_string("null");
x_83 = lean_name_mk_string(x_72, x_82);
x_84 = lean_unsigned_to_nat(0u);
x_85 = lean_mk_empty_array_with_capacity(x_84);
lean_inc(x_85);
lean_inc(x_83);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_array_get_size(x_12);
x_88 = lean_usize_of_nat(x_87);
lean_dec(x_87);
x_89 = 0;
x_90 = x_12;
x_91 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_88, x_89, x_90);
x_92 = x_91;
x_93 = lean_box(2);
x_94 = lean_mk_string(",");
x_95 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
x_96 = l_Lean_mkSepArray(x_92, x_95);
lean_dec(x_92);
lean_inc(x_85);
x_97 = l_Array_append___rarg(x_85, x_96);
lean_dec(x_96);
lean_inc(x_83);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_83);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_mk_string("with");
x_100 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_100, 0, x_18);
lean_ctor_set(x_100, 1, x_99);
x_101 = lean_mk_string("matchAlts");
x_102 = lean_name_mk_string(x_78, x_101);
x_103 = l_Array_append___rarg(x_85, x_15);
lean_dec(x_15);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_83);
lean_ctor_set(x_104, 1, x_103);
x_105 = lean_unsigned_to_nat(1u);
x_106 = lean_mk_empty_array_with_capacity(x_105);
x_107 = lean_array_push(x_106, x_104);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_102);
lean_ctor_set(x_108, 1, x_107);
x_109 = lean_unsigned_to_nat(6u);
x_110 = lean_mk_empty_array_with_capacity(x_109);
x_111 = lean_array_push(x_110, x_81);
lean_inc(x_86);
x_112 = lean_array_push(x_111, x_86);
x_113 = lean_array_push(x_112, x_98);
x_114 = lean_array_push(x_113, x_86);
x_115 = lean_array_push(x_114, x_100);
x_116 = lean_array_push(x_115, x_108);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_80);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_71);
return x_118;
}
}
else
{
uint8_t x_119; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_119 = !lean_is_exclusive(x_14);
if (x_119 == 0)
{
return x_14;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_14, 0);
x_121 = lean_ctor_get(x_14, 1);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_14);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
}
}
else
{
uint8_t x_123; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_123 = !lean_is_exclusive(x_11);
if (x_123 == 0)
{
return x_11;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_11, 0);
x_125 = lean_ctor_get(x_11, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_11);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_BEq_mkMatch___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_BEq_mkMatch___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Deriving_BEq_mkMatch(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_BEq_mkAuxFunction___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_14 = lean_ctor_get(x_1, 0);
x_15 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_10, x_11, x_12);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Elab_Term_getCurrMacroScope(x_6, x_7, x_8, x_9, x_10, x_11, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_Term_getMainModule___rarg(x_11, x_20);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_box(0);
x_25 = lean_mk_string("Lean");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = lean_mk_string("Parser");
x_28 = lean_name_mk_string(x_26, x_27);
x_29 = lean_mk_string("Command");
lean_inc(x_28);
x_30 = lean_name_mk_string(x_28, x_29);
x_31 = lean_mk_string("declaration");
lean_inc(x_30);
x_32 = lean_name_mk_string(x_30, x_31);
x_33 = lean_mk_string("declModifiers");
lean_inc(x_30);
x_34 = lean_name_mk_string(x_30, x_33);
x_35 = lean_mk_string("null");
x_36 = lean_name_mk_string(x_24, x_35);
x_37 = lean_unsigned_to_nat(0u);
x_38 = lean_mk_empty_array_with_capacity(x_37);
lean_inc(x_38);
lean_inc(x_36);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_36);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_mk_string("private");
lean_inc(x_40);
lean_inc(x_30);
x_41 = lean_name_mk_string(x_30, x_40);
lean_inc(x_16);
x_42 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_42, 0, x_16);
lean_ctor_set(x_42, 1, x_40);
x_43 = lean_unsigned_to_nat(1u);
x_44 = lean_mk_empty_array_with_capacity(x_43);
lean_inc(x_44);
x_45 = lean_array_push(x_44, x_42);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_41);
lean_ctor_set(x_46, 1, x_45);
lean_inc(x_44);
x_47 = lean_array_push(x_44, x_46);
lean_inc(x_36);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_36);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_unsigned_to_nat(6u);
x_50 = lean_mk_empty_array_with_capacity(x_49);
lean_inc(x_39);
x_51 = lean_array_push(x_50, x_39);
lean_inc(x_39);
x_52 = lean_array_push(x_51, x_39);
x_53 = lean_array_push(x_52, x_48);
lean_inc(x_39);
x_54 = lean_array_push(x_53, x_39);
lean_inc(x_39);
x_55 = lean_array_push(x_54, x_39);
lean_inc(x_39);
x_56 = lean_array_push(x_55, x_39);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_34);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_mk_string("def");
lean_inc(x_58);
lean_inc(x_30);
x_59 = lean_name_mk_string(x_30, x_58);
lean_inc(x_16);
x_60 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_60, 0, x_16);
lean_ctor_set(x_60, 1, x_58);
x_61 = lean_mk_string("declId");
lean_inc(x_30);
x_62 = lean_name_mk_string(x_30, x_61);
x_63 = lean_mk_syntax_ident(x_3);
x_64 = lean_unsigned_to_nat(2u);
x_65 = lean_mk_empty_array_with_capacity(x_64);
lean_inc(x_65);
x_66 = lean_array_push(x_65, x_63);
lean_inc(x_39);
x_67 = lean_array_push(x_66, x_39);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_62);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_mk_string("optDeclSig");
lean_inc(x_30);
x_70 = lean_name_mk_string(x_30, x_69);
x_71 = l_Array_append___rarg(x_38, x_14);
lean_inc(x_36);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_36);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_mk_string("Term");
x_74 = lean_name_mk_string(x_28, x_73);
x_75 = lean_mk_string("typeSpec");
x_76 = lean_name_mk_string(x_74, x_75);
x_77 = lean_mk_string(":");
lean_inc(x_16);
x_78 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_78, 0, x_16);
lean_ctor_set(x_78, 1, x_77);
x_79 = lean_mk_string("Bool");
x_80 = lean_string_utf8_byte_size(x_79);
lean_inc(x_79);
x_81 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_37);
lean_ctor_set(x_81, 2, x_80);
x_82 = lean_name_mk_string(x_24, x_79);
lean_inc(x_82);
x_83 = l_Lean_addMacroScope(x_23, x_82, x_19);
x_84 = lean_box(0);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_84);
lean_inc(x_16);
x_87 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_87, 0, x_16);
lean_ctor_set(x_87, 1, x_81);
lean_ctor_set(x_87, 2, x_83);
lean_ctor_set(x_87, 3, x_86);
lean_inc(x_65);
x_88 = lean_array_push(x_65, x_78);
x_89 = lean_array_push(x_88, x_87);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_76);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_array_push(x_44, x_90);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_36);
lean_ctor_set(x_92, 1, x_91);
lean_inc(x_65);
x_93 = lean_array_push(x_65, x_72);
x_94 = lean_array_push(x_93, x_92);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_70);
lean_ctor_set(x_95, 1, x_94);
x_96 = lean_mk_string("declValSimple");
x_97 = lean_name_mk_string(x_30, x_96);
x_98 = lean_mk_string(":=");
x_99 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_99, 0, x_16);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_unsigned_to_nat(3u);
x_101 = lean_mk_empty_array_with_capacity(x_100);
x_102 = lean_array_push(x_101, x_99);
x_103 = lean_array_push(x_102, x_4);
x_104 = lean_array_push(x_103, x_39);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_97);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_unsigned_to_nat(4u);
x_107 = lean_mk_empty_array_with_capacity(x_106);
x_108 = lean_array_push(x_107, x_60);
x_109 = lean_array_push(x_108, x_68);
x_110 = lean_array_push(x_109, x_95);
x_111 = lean_array_push(x_110, x_105);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_59);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_array_push(x_65, x_57);
x_114 = lean_array_push(x_113, x_112);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_32);
lean_ctor_set(x_115, 1, x_114);
lean_ctor_set(x_21, 0, x_115);
return x_21;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_116 = lean_ctor_get(x_21, 0);
x_117 = lean_ctor_get(x_21, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_21);
x_118 = lean_box(0);
x_119 = lean_mk_string("Lean");
x_120 = lean_name_mk_string(x_118, x_119);
x_121 = lean_mk_string("Parser");
x_122 = lean_name_mk_string(x_120, x_121);
x_123 = lean_mk_string("Command");
lean_inc(x_122);
x_124 = lean_name_mk_string(x_122, x_123);
x_125 = lean_mk_string("declaration");
lean_inc(x_124);
x_126 = lean_name_mk_string(x_124, x_125);
x_127 = lean_mk_string("declModifiers");
lean_inc(x_124);
x_128 = lean_name_mk_string(x_124, x_127);
x_129 = lean_mk_string("null");
x_130 = lean_name_mk_string(x_118, x_129);
x_131 = lean_unsigned_to_nat(0u);
x_132 = lean_mk_empty_array_with_capacity(x_131);
lean_inc(x_132);
lean_inc(x_130);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_130);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_mk_string("private");
lean_inc(x_134);
lean_inc(x_124);
x_135 = lean_name_mk_string(x_124, x_134);
lean_inc(x_16);
x_136 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_136, 0, x_16);
lean_ctor_set(x_136, 1, x_134);
x_137 = lean_unsigned_to_nat(1u);
x_138 = lean_mk_empty_array_with_capacity(x_137);
lean_inc(x_138);
x_139 = lean_array_push(x_138, x_136);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_135);
lean_ctor_set(x_140, 1, x_139);
lean_inc(x_138);
x_141 = lean_array_push(x_138, x_140);
lean_inc(x_130);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_130);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_unsigned_to_nat(6u);
x_144 = lean_mk_empty_array_with_capacity(x_143);
lean_inc(x_133);
x_145 = lean_array_push(x_144, x_133);
lean_inc(x_133);
x_146 = lean_array_push(x_145, x_133);
x_147 = lean_array_push(x_146, x_142);
lean_inc(x_133);
x_148 = lean_array_push(x_147, x_133);
lean_inc(x_133);
x_149 = lean_array_push(x_148, x_133);
lean_inc(x_133);
x_150 = lean_array_push(x_149, x_133);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_128);
lean_ctor_set(x_151, 1, x_150);
x_152 = lean_mk_string("def");
lean_inc(x_152);
lean_inc(x_124);
x_153 = lean_name_mk_string(x_124, x_152);
lean_inc(x_16);
x_154 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_154, 0, x_16);
lean_ctor_set(x_154, 1, x_152);
x_155 = lean_mk_string("declId");
lean_inc(x_124);
x_156 = lean_name_mk_string(x_124, x_155);
x_157 = lean_mk_syntax_ident(x_3);
x_158 = lean_unsigned_to_nat(2u);
x_159 = lean_mk_empty_array_with_capacity(x_158);
lean_inc(x_159);
x_160 = lean_array_push(x_159, x_157);
lean_inc(x_133);
x_161 = lean_array_push(x_160, x_133);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_156);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_mk_string("optDeclSig");
lean_inc(x_124);
x_164 = lean_name_mk_string(x_124, x_163);
x_165 = l_Array_append___rarg(x_132, x_14);
lean_inc(x_130);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_130);
lean_ctor_set(x_166, 1, x_165);
x_167 = lean_mk_string("Term");
x_168 = lean_name_mk_string(x_122, x_167);
x_169 = lean_mk_string("typeSpec");
x_170 = lean_name_mk_string(x_168, x_169);
x_171 = lean_mk_string(":");
lean_inc(x_16);
x_172 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_172, 0, x_16);
lean_ctor_set(x_172, 1, x_171);
x_173 = lean_mk_string("Bool");
x_174 = lean_string_utf8_byte_size(x_173);
lean_inc(x_173);
x_175 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_175, 0, x_173);
lean_ctor_set(x_175, 1, x_131);
lean_ctor_set(x_175, 2, x_174);
x_176 = lean_name_mk_string(x_118, x_173);
lean_inc(x_176);
x_177 = l_Lean_addMacroScope(x_116, x_176, x_19);
x_178 = lean_box(0);
x_179 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_179, 0, x_176);
lean_ctor_set(x_179, 1, x_178);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_179);
lean_ctor_set(x_180, 1, x_178);
lean_inc(x_16);
x_181 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_181, 0, x_16);
lean_ctor_set(x_181, 1, x_175);
lean_ctor_set(x_181, 2, x_177);
lean_ctor_set(x_181, 3, x_180);
lean_inc(x_159);
x_182 = lean_array_push(x_159, x_172);
x_183 = lean_array_push(x_182, x_181);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_170);
lean_ctor_set(x_184, 1, x_183);
x_185 = lean_array_push(x_138, x_184);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_130);
lean_ctor_set(x_186, 1, x_185);
lean_inc(x_159);
x_187 = lean_array_push(x_159, x_166);
x_188 = lean_array_push(x_187, x_186);
x_189 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_189, 0, x_164);
lean_ctor_set(x_189, 1, x_188);
x_190 = lean_mk_string("declValSimple");
x_191 = lean_name_mk_string(x_124, x_190);
x_192 = lean_mk_string(":=");
x_193 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_193, 0, x_16);
lean_ctor_set(x_193, 1, x_192);
x_194 = lean_unsigned_to_nat(3u);
x_195 = lean_mk_empty_array_with_capacity(x_194);
x_196 = lean_array_push(x_195, x_193);
x_197 = lean_array_push(x_196, x_4);
x_198 = lean_array_push(x_197, x_133);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_191);
lean_ctor_set(x_199, 1, x_198);
x_200 = lean_unsigned_to_nat(4u);
x_201 = lean_mk_empty_array_with_capacity(x_200);
x_202 = lean_array_push(x_201, x_154);
x_203 = lean_array_push(x_202, x_162);
x_204 = lean_array_push(x_203, x_189);
x_205 = lean_array_push(x_204, x_199);
x_206 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_206, 0, x_153);
lean_ctor_set(x_206, 1, x_205);
x_207 = lean_array_push(x_159, x_151);
x_208 = lean_array_push(x_207, x_206);
x_209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_209, 0, x_126);
lean_ctor_set(x_209, 1, x_208);
x_210 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_210, 0, x_209);
lean_ctor_set(x_210, 1, x_117);
return x_210;
}
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; uint8_t x_219; 
x_211 = lean_ctor_get(x_1, 0);
x_212 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_10, x_11, x_12);
x_213 = lean_ctor_get(x_212, 0);
lean_inc(x_213);
x_214 = lean_ctor_get(x_212, 1);
lean_inc(x_214);
lean_dec(x_212);
x_215 = l_Lean_Elab_Term_getCurrMacroScope(x_6, x_7, x_8, x_9, x_10, x_11, x_214);
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_215, 1);
lean_inc(x_217);
lean_dec(x_215);
x_218 = l_Lean_Elab_Term_getMainModule___rarg(x_11, x_217);
x_219 = !lean_is_exclusive(x_218);
if (x_219 == 0)
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; 
x_220 = lean_ctor_get(x_218, 0);
x_221 = lean_box(0);
x_222 = lean_mk_string("Lean");
x_223 = lean_name_mk_string(x_221, x_222);
x_224 = lean_mk_string("Parser");
x_225 = lean_name_mk_string(x_223, x_224);
x_226 = lean_mk_string("Command");
lean_inc(x_225);
x_227 = lean_name_mk_string(x_225, x_226);
x_228 = lean_mk_string("declaration");
lean_inc(x_227);
x_229 = lean_name_mk_string(x_227, x_228);
x_230 = lean_mk_string("declModifiers");
lean_inc(x_227);
x_231 = lean_name_mk_string(x_227, x_230);
x_232 = lean_mk_string("null");
x_233 = lean_name_mk_string(x_221, x_232);
x_234 = lean_unsigned_to_nat(0u);
x_235 = lean_mk_empty_array_with_capacity(x_234);
lean_inc(x_235);
lean_inc(x_233);
x_236 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_236, 0, x_233);
lean_ctor_set(x_236, 1, x_235);
x_237 = lean_mk_string("private");
lean_inc(x_237);
lean_inc(x_227);
x_238 = lean_name_mk_string(x_227, x_237);
lean_inc(x_213);
x_239 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_239, 0, x_213);
lean_ctor_set(x_239, 1, x_237);
x_240 = lean_unsigned_to_nat(1u);
x_241 = lean_mk_empty_array_with_capacity(x_240);
lean_inc(x_241);
x_242 = lean_array_push(x_241, x_239);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_238);
lean_ctor_set(x_243, 1, x_242);
lean_inc(x_241);
x_244 = lean_array_push(x_241, x_243);
lean_inc(x_233);
x_245 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_245, 0, x_233);
lean_ctor_set(x_245, 1, x_244);
x_246 = lean_mk_string("partial");
lean_inc(x_246);
lean_inc(x_227);
x_247 = lean_name_mk_string(x_227, x_246);
lean_inc(x_213);
x_248 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_248, 0, x_213);
lean_ctor_set(x_248, 1, x_246);
lean_inc(x_241);
x_249 = lean_array_push(x_241, x_248);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_247);
lean_ctor_set(x_250, 1, x_249);
lean_inc(x_241);
x_251 = lean_array_push(x_241, x_250);
lean_inc(x_233);
x_252 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_252, 0, x_233);
lean_ctor_set(x_252, 1, x_251);
x_253 = lean_unsigned_to_nat(6u);
x_254 = lean_mk_empty_array_with_capacity(x_253);
lean_inc(x_236);
x_255 = lean_array_push(x_254, x_236);
lean_inc(x_236);
x_256 = lean_array_push(x_255, x_236);
x_257 = lean_array_push(x_256, x_245);
lean_inc(x_236);
x_258 = lean_array_push(x_257, x_236);
lean_inc(x_236);
x_259 = lean_array_push(x_258, x_236);
x_260 = lean_array_push(x_259, x_252);
x_261 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_261, 0, x_231);
lean_ctor_set(x_261, 1, x_260);
x_262 = lean_mk_string("def");
lean_inc(x_262);
lean_inc(x_227);
x_263 = lean_name_mk_string(x_227, x_262);
lean_inc(x_213);
x_264 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_264, 0, x_213);
lean_ctor_set(x_264, 1, x_262);
x_265 = lean_mk_string("declId");
lean_inc(x_227);
x_266 = lean_name_mk_string(x_227, x_265);
x_267 = lean_mk_syntax_ident(x_3);
x_268 = lean_unsigned_to_nat(2u);
x_269 = lean_mk_empty_array_with_capacity(x_268);
lean_inc(x_269);
x_270 = lean_array_push(x_269, x_267);
lean_inc(x_236);
x_271 = lean_array_push(x_270, x_236);
x_272 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_272, 0, x_266);
lean_ctor_set(x_272, 1, x_271);
x_273 = lean_mk_string("optDeclSig");
lean_inc(x_227);
x_274 = lean_name_mk_string(x_227, x_273);
x_275 = l_Array_append___rarg(x_235, x_211);
lean_inc(x_233);
x_276 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_276, 0, x_233);
lean_ctor_set(x_276, 1, x_275);
x_277 = lean_mk_string("Term");
x_278 = lean_name_mk_string(x_225, x_277);
x_279 = lean_mk_string("typeSpec");
x_280 = lean_name_mk_string(x_278, x_279);
x_281 = lean_mk_string(":");
lean_inc(x_213);
x_282 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_282, 0, x_213);
lean_ctor_set(x_282, 1, x_281);
x_283 = lean_mk_string("Bool");
x_284 = lean_string_utf8_byte_size(x_283);
lean_inc(x_283);
x_285 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_285, 0, x_283);
lean_ctor_set(x_285, 1, x_234);
lean_ctor_set(x_285, 2, x_284);
x_286 = lean_name_mk_string(x_221, x_283);
lean_inc(x_286);
x_287 = l_Lean_addMacroScope(x_220, x_286, x_216);
x_288 = lean_box(0);
x_289 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_289, 0, x_286);
lean_ctor_set(x_289, 1, x_288);
x_290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_288);
lean_inc(x_213);
x_291 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_291, 0, x_213);
lean_ctor_set(x_291, 1, x_285);
lean_ctor_set(x_291, 2, x_287);
lean_ctor_set(x_291, 3, x_290);
lean_inc(x_269);
x_292 = lean_array_push(x_269, x_282);
x_293 = lean_array_push(x_292, x_291);
x_294 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_294, 0, x_280);
lean_ctor_set(x_294, 1, x_293);
x_295 = lean_array_push(x_241, x_294);
x_296 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_296, 0, x_233);
lean_ctor_set(x_296, 1, x_295);
lean_inc(x_269);
x_297 = lean_array_push(x_269, x_276);
x_298 = lean_array_push(x_297, x_296);
x_299 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_299, 0, x_274);
lean_ctor_set(x_299, 1, x_298);
x_300 = lean_mk_string("declValSimple");
x_301 = lean_name_mk_string(x_227, x_300);
x_302 = lean_mk_string(":=");
x_303 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_303, 0, x_213);
lean_ctor_set(x_303, 1, x_302);
x_304 = lean_unsigned_to_nat(3u);
x_305 = lean_mk_empty_array_with_capacity(x_304);
x_306 = lean_array_push(x_305, x_303);
x_307 = lean_array_push(x_306, x_4);
x_308 = lean_array_push(x_307, x_236);
x_309 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_309, 0, x_301);
lean_ctor_set(x_309, 1, x_308);
x_310 = lean_unsigned_to_nat(4u);
x_311 = lean_mk_empty_array_with_capacity(x_310);
x_312 = lean_array_push(x_311, x_264);
x_313 = lean_array_push(x_312, x_272);
x_314 = lean_array_push(x_313, x_299);
x_315 = lean_array_push(x_314, x_309);
x_316 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_316, 0, x_263);
lean_ctor_set(x_316, 1, x_315);
x_317 = lean_array_push(x_269, x_261);
x_318 = lean_array_push(x_317, x_316);
x_319 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_319, 0, x_229);
lean_ctor_set(x_319, 1, x_318);
lean_ctor_set(x_218, 0, x_319);
return x_218;
}
else
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; 
x_320 = lean_ctor_get(x_218, 0);
x_321 = lean_ctor_get(x_218, 1);
lean_inc(x_321);
lean_inc(x_320);
lean_dec(x_218);
x_322 = lean_box(0);
x_323 = lean_mk_string("Lean");
x_324 = lean_name_mk_string(x_322, x_323);
x_325 = lean_mk_string("Parser");
x_326 = lean_name_mk_string(x_324, x_325);
x_327 = lean_mk_string("Command");
lean_inc(x_326);
x_328 = lean_name_mk_string(x_326, x_327);
x_329 = lean_mk_string("declaration");
lean_inc(x_328);
x_330 = lean_name_mk_string(x_328, x_329);
x_331 = lean_mk_string("declModifiers");
lean_inc(x_328);
x_332 = lean_name_mk_string(x_328, x_331);
x_333 = lean_mk_string("null");
x_334 = lean_name_mk_string(x_322, x_333);
x_335 = lean_unsigned_to_nat(0u);
x_336 = lean_mk_empty_array_with_capacity(x_335);
lean_inc(x_336);
lean_inc(x_334);
x_337 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_337, 0, x_334);
lean_ctor_set(x_337, 1, x_336);
x_338 = lean_mk_string("private");
lean_inc(x_338);
lean_inc(x_328);
x_339 = lean_name_mk_string(x_328, x_338);
lean_inc(x_213);
x_340 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_340, 0, x_213);
lean_ctor_set(x_340, 1, x_338);
x_341 = lean_unsigned_to_nat(1u);
x_342 = lean_mk_empty_array_with_capacity(x_341);
lean_inc(x_342);
x_343 = lean_array_push(x_342, x_340);
x_344 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_344, 0, x_339);
lean_ctor_set(x_344, 1, x_343);
lean_inc(x_342);
x_345 = lean_array_push(x_342, x_344);
lean_inc(x_334);
x_346 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_346, 0, x_334);
lean_ctor_set(x_346, 1, x_345);
x_347 = lean_mk_string("partial");
lean_inc(x_347);
lean_inc(x_328);
x_348 = lean_name_mk_string(x_328, x_347);
lean_inc(x_213);
x_349 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_349, 0, x_213);
lean_ctor_set(x_349, 1, x_347);
lean_inc(x_342);
x_350 = lean_array_push(x_342, x_349);
x_351 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_351, 0, x_348);
lean_ctor_set(x_351, 1, x_350);
lean_inc(x_342);
x_352 = lean_array_push(x_342, x_351);
lean_inc(x_334);
x_353 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_353, 0, x_334);
lean_ctor_set(x_353, 1, x_352);
x_354 = lean_unsigned_to_nat(6u);
x_355 = lean_mk_empty_array_with_capacity(x_354);
lean_inc(x_337);
x_356 = lean_array_push(x_355, x_337);
lean_inc(x_337);
x_357 = lean_array_push(x_356, x_337);
x_358 = lean_array_push(x_357, x_346);
lean_inc(x_337);
x_359 = lean_array_push(x_358, x_337);
lean_inc(x_337);
x_360 = lean_array_push(x_359, x_337);
x_361 = lean_array_push(x_360, x_353);
x_362 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_362, 0, x_332);
lean_ctor_set(x_362, 1, x_361);
x_363 = lean_mk_string("def");
lean_inc(x_363);
lean_inc(x_328);
x_364 = lean_name_mk_string(x_328, x_363);
lean_inc(x_213);
x_365 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_365, 0, x_213);
lean_ctor_set(x_365, 1, x_363);
x_366 = lean_mk_string("declId");
lean_inc(x_328);
x_367 = lean_name_mk_string(x_328, x_366);
x_368 = lean_mk_syntax_ident(x_3);
x_369 = lean_unsigned_to_nat(2u);
x_370 = lean_mk_empty_array_with_capacity(x_369);
lean_inc(x_370);
x_371 = lean_array_push(x_370, x_368);
lean_inc(x_337);
x_372 = lean_array_push(x_371, x_337);
x_373 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_373, 0, x_367);
lean_ctor_set(x_373, 1, x_372);
x_374 = lean_mk_string("optDeclSig");
lean_inc(x_328);
x_375 = lean_name_mk_string(x_328, x_374);
x_376 = l_Array_append___rarg(x_336, x_211);
lean_inc(x_334);
x_377 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_377, 0, x_334);
lean_ctor_set(x_377, 1, x_376);
x_378 = lean_mk_string("Term");
x_379 = lean_name_mk_string(x_326, x_378);
x_380 = lean_mk_string("typeSpec");
x_381 = lean_name_mk_string(x_379, x_380);
x_382 = lean_mk_string(":");
lean_inc(x_213);
x_383 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_383, 0, x_213);
lean_ctor_set(x_383, 1, x_382);
x_384 = lean_mk_string("Bool");
x_385 = lean_string_utf8_byte_size(x_384);
lean_inc(x_384);
x_386 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_386, 0, x_384);
lean_ctor_set(x_386, 1, x_335);
lean_ctor_set(x_386, 2, x_385);
x_387 = lean_name_mk_string(x_322, x_384);
lean_inc(x_387);
x_388 = l_Lean_addMacroScope(x_320, x_387, x_216);
x_389 = lean_box(0);
x_390 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_390, 0, x_387);
lean_ctor_set(x_390, 1, x_389);
x_391 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_391, 0, x_390);
lean_ctor_set(x_391, 1, x_389);
lean_inc(x_213);
x_392 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_392, 0, x_213);
lean_ctor_set(x_392, 1, x_386);
lean_ctor_set(x_392, 2, x_388);
lean_ctor_set(x_392, 3, x_391);
lean_inc(x_370);
x_393 = lean_array_push(x_370, x_383);
x_394 = lean_array_push(x_393, x_392);
x_395 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_395, 0, x_381);
lean_ctor_set(x_395, 1, x_394);
x_396 = lean_array_push(x_342, x_395);
x_397 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_397, 0, x_334);
lean_ctor_set(x_397, 1, x_396);
lean_inc(x_370);
x_398 = lean_array_push(x_370, x_377);
x_399 = lean_array_push(x_398, x_397);
x_400 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_400, 0, x_375);
lean_ctor_set(x_400, 1, x_399);
x_401 = lean_mk_string("declValSimple");
x_402 = lean_name_mk_string(x_328, x_401);
x_403 = lean_mk_string(":=");
x_404 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_404, 0, x_213);
lean_ctor_set(x_404, 1, x_403);
x_405 = lean_unsigned_to_nat(3u);
x_406 = lean_mk_empty_array_with_capacity(x_405);
x_407 = lean_array_push(x_406, x_404);
x_408 = lean_array_push(x_407, x_4);
x_409 = lean_array_push(x_408, x_337);
x_410 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_410, 0, x_402);
lean_ctor_set(x_410, 1, x_409);
x_411 = lean_unsigned_to_nat(4u);
x_412 = lean_mk_empty_array_with_capacity(x_411);
x_413 = lean_array_push(x_412, x_365);
x_414 = lean_array_push(x_413, x_373);
x_415 = lean_array_push(x_414, x_400);
x_416 = lean_array_push(x_415, x_410);
x_417 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_417, 0, x_364);
lean_ctor_set(x_417, 1, x_416);
x_418 = lean_array_push(x_370, x_362);
x_419 = lean_array_push(x_418, x_417);
x_420 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_420, 0, x_330);
lean_ctor_set(x_420, 1, x_419);
x_421 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_421, 0, x_420);
lean_ctor_set(x_421, 1, x_321);
return x_421;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_BEq_mkAuxFunction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 1);
x_11 = l_Lean_instInhabitedName;
x_12 = lean_array_get(x_11, x_10, x_2);
x_13 = lean_ctor_get(x_1, 0);
x_14 = l_Lean_instInhabitedInductiveVal;
x_15 = lean_array_get(x_14, x_13, x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_15);
x_16 = l_Lean_Elab_Deriving_BEq_mkBEqHeader___rarg(x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_12);
lean_inc(x_17);
x_19 = l_Lean_Elab_Deriving_BEq_mkMatch___rarg(x_17, x_15, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_box(0);
x_24 = l_Lean_Elab_Deriving_BEq_mkAuxFunction___lambda__1(x_17, x_1, x_12, x_21, x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_17);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = lean_ctor_get(x_19, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_dec(x_19);
x_27 = lean_box(0);
x_28 = lean_mk_string("BEq");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_31 = l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(x_1, x_29, x_30, x_3, x_4, x_5, x_6, x_7, x_8, x_26);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Elab_Deriving_mkLet(x_32, x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_33);
lean_dec(x_32);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_box(0);
x_38 = l_Lean_Elab_Deriving_BEq_mkAuxFunction___lambda__1(x_17, x_1, x_12, x_35, x_37, x_3, x_4, x_5, x_6, x_7, x_8, x_36);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_17);
return x_38;
}
else
{
uint8_t x_39; 
lean_dec(x_25);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_39 = !lean_is_exclusive(x_31);
if (x_39 == 0)
{
return x_31;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_31, 0);
x_41 = lean_ctor_get(x_31, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_31);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_43 = !lean_is_exclusive(x_19);
if (x_43 == 0)
{
return x_19;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_19, 0);
x_45 = lean_ctor_get(x_19, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_19);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_47 = !lean_is_exclusive(x_16);
if (x_47 == 0)
{
return x_16;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_16, 0);
x_49 = lean_ctor_get(x_16, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_16);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_BEq_mkAuxFunction___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Deriving_BEq_mkAuxFunction___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Elab_Deriving_BEq_mkAuxFunction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Deriving_BEq_mkAuxFunction(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMutualBlock___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_nat_dec_le(x_13, x_4);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_eq(x_3, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_3, x_17);
lean_dec(x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_19 = l_Lean_Elab_Deriving_BEq_mkAuxFunction(x_1, x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_array_push(x_5, x_20);
x_23 = lean_ctor_get(x_2, 2);
x_24 = lean_nat_add(x_4, x_23);
lean_dec(x_4);
x_3 = x_18;
x_4 = x_24;
x_5 = x_22;
x_12 = x_21;
goto _start;
}
else
{
uint8_t x_26; 
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_26 = !lean_is_exclusive(x_19);
if (x_26 == 0)
{
return x_19;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_19, 0);
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_19);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_5);
lean_ctor_set(x_30, 1, x_12);
return x_30;
}
}
else
{
lean_object* x_31; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_5);
lean_ctor_set(x_31, 1, x_12);
return x_31;
}
}
}
lean_object* l_Lean_Elab_Deriving_BEq_mkMutualBlock(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_mk_empty_array_with_capacity(x_9);
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_array_get_size(x_11);
x_13 = lean_unsigned_to_nat(1u);
lean_inc(x_12);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_14, 1, x_12);
lean_ctor_set(x_14, 2, x_13);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_15 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMutualBlock___spec__1(x_1, x_14, x_12, x_9, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_6, x_7, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_20);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_23);
lean_dec(x_7);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_box(0);
x_28 = lean_mk_string("Lean");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Parser");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("Command");
lean_inc(x_31);
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("mutual");
lean_inc(x_34);
lean_inc(x_33);
x_35 = lean_name_mk_string(x_33, x_34);
lean_inc(x_19);
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_19);
lean_ctor_set(x_36, 1, x_34);
x_37 = lean_mk_string("null");
x_38 = lean_name_mk_string(x_27, x_37);
x_39 = lean_mk_string("set_option");
lean_inc(x_39);
x_40 = lean_name_mk_string(x_33, x_39);
lean_inc(x_19);
x_41 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_41, 0, x_19);
lean_ctor_set(x_41, 1, x_39);
x_42 = lean_mk_string("match.ignoreUnusedAlts");
x_43 = lean_string_utf8_byte_size(x_42);
x_44 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_9);
lean_ctor_set(x_44, 2, x_43);
x_45 = lean_mk_string("match");
lean_inc(x_45);
x_46 = lean_name_mk_string(x_27, x_45);
x_47 = lean_mk_string("ignoreUnusedAlts");
lean_inc(x_47);
x_48 = lean_name_mk_string(x_46, x_47);
x_49 = l_Lean_addMacroScope(x_26, x_48, x_22);
x_50 = lean_mk_string("Term");
x_51 = lean_name_mk_string(x_31, x_50);
x_52 = lean_name_mk_string(x_51, x_45);
x_53 = lean_box(0);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_47);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_52);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_53);
lean_inc(x_19);
x_57 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_57, 0, x_19);
lean_ctor_set(x_57, 1, x_44);
lean_ctor_set(x_57, 2, x_49);
lean_ctor_set(x_57, 3, x_56);
x_58 = lean_mk_string("true");
lean_inc(x_19);
x_59 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_59, 0, x_19);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_unsigned_to_nat(3u);
x_61 = lean_mk_empty_array_with_capacity(x_60);
lean_inc(x_61);
x_62 = lean_array_push(x_61, x_41);
x_63 = lean_array_push(x_62, x_57);
x_64 = lean_array_push(x_63, x_59);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_40);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_mk_empty_array_with_capacity(x_13);
x_67 = lean_array_push(x_66, x_65);
x_68 = l_Array_append___rarg(x_67, x_16);
lean_dec(x_16);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_38);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_mk_string("end");
x_71 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_71, 0, x_19);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_array_push(x_61, x_36);
x_73 = lean_array_push(x_72, x_69);
x_74 = lean_array_push(x_73, x_71);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_35);
lean_ctor_set(x_75, 1, x_74);
lean_ctor_set(x_24, 0, x_75);
return x_24;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_76 = lean_ctor_get(x_24, 0);
x_77 = lean_ctor_get(x_24, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_24);
x_78 = lean_box(0);
x_79 = lean_mk_string("Lean");
x_80 = lean_name_mk_string(x_78, x_79);
x_81 = lean_mk_string("Parser");
x_82 = lean_name_mk_string(x_80, x_81);
x_83 = lean_mk_string("Command");
lean_inc(x_82);
x_84 = lean_name_mk_string(x_82, x_83);
x_85 = lean_mk_string("mutual");
lean_inc(x_85);
lean_inc(x_84);
x_86 = lean_name_mk_string(x_84, x_85);
lean_inc(x_19);
x_87 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_87, 0, x_19);
lean_ctor_set(x_87, 1, x_85);
x_88 = lean_mk_string("null");
x_89 = lean_name_mk_string(x_78, x_88);
x_90 = lean_mk_string("set_option");
lean_inc(x_90);
x_91 = lean_name_mk_string(x_84, x_90);
lean_inc(x_19);
x_92 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_92, 0, x_19);
lean_ctor_set(x_92, 1, x_90);
x_93 = lean_mk_string("match.ignoreUnusedAlts");
x_94 = lean_string_utf8_byte_size(x_93);
x_95 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_9);
lean_ctor_set(x_95, 2, x_94);
x_96 = lean_mk_string("match");
lean_inc(x_96);
x_97 = lean_name_mk_string(x_78, x_96);
x_98 = lean_mk_string("ignoreUnusedAlts");
lean_inc(x_98);
x_99 = lean_name_mk_string(x_97, x_98);
x_100 = l_Lean_addMacroScope(x_76, x_99, x_22);
x_101 = lean_mk_string("Term");
x_102 = lean_name_mk_string(x_82, x_101);
x_103 = lean_name_mk_string(x_102, x_96);
x_104 = lean_box(0);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_98);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_103);
lean_ctor_set(x_106, 1, x_105);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_104);
lean_inc(x_19);
x_108 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_108, 0, x_19);
lean_ctor_set(x_108, 1, x_95);
lean_ctor_set(x_108, 2, x_100);
lean_ctor_set(x_108, 3, x_107);
x_109 = lean_mk_string("true");
lean_inc(x_19);
x_110 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_110, 0, x_19);
lean_ctor_set(x_110, 1, x_109);
x_111 = lean_unsigned_to_nat(3u);
x_112 = lean_mk_empty_array_with_capacity(x_111);
lean_inc(x_112);
x_113 = lean_array_push(x_112, x_92);
x_114 = lean_array_push(x_113, x_108);
x_115 = lean_array_push(x_114, x_110);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_91);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_mk_empty_array_with_capacity(x_13);
x_118 = lean_array_push(x_117, x_116);
x_119 = l_Array_append___rarg(x_118, x_16);
lean_dec(x_16);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_89);
lean_ctor_set(x_120, 1, x_119);
x_121 = lean_mk_string("end");
x_122 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_122, 0, x_19);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_array_push(x_112, x_87);
x_124 = lean_array_push(x_123, x_120);
x_125 = lean_array_push(x_124, x_122);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_86);
lean_ctor_set(x_126, 1, x_125);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_77);
return x_127;
}
}
else
{
uint8_t x_128; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_128 = !lean_is_exclusive(x_15);
if (x_128 == 0)
{
return x_15;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_15, 0);
x_130 = lean_ctor_get(x_15, 1);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_15);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_130);
return x_131;
}
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMutualBlock___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_BEq_mkMutualBlock___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Elab_Deriving_BEq_mkMutualBlock___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Deriving_BEq_mkMutualBlock(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_List_map___at___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___spec__1(lean_object* x_1) {
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
x_7 = l_List_map___at___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___spec__1(x_5);
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
x_11 = l_List_map___at___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___spec__1(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = l_Lean_instInhabitedName;
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_array_get(x_9, x_1, x_10);
x_12 = lean_mk_string("beq");
lean_inc(x_2);
lean_inc(x_12);
x_13 = l_Lean_Elab_Deriving_mkContext(x_12, x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_16 = l_Lean_Elab_Deriving_BEq_mkMutualBlock(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_box(0);
x_20 = lean_mk_string("BEq");
x_21 = lean_name_mk_string(x_19, x_20);
x_22 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_23 = l_Lean_Elab_Deriving_mkInstanceCmds(x_14, x_21, x_1, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_18);
lean_dec(x_14);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_26 = x_23;
} else {
 lean_dec_ref(x_23);
 x_26 = lean_box(0);
}
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_mk_empty_array_with_capacity(x_27);
x_29 = lean_array_push(x_28, x_17);
x_30 = l_Array_append___rarg(x_29, x_24);
lean_dec(x_24);
x_31 = lean_mk_string("Elab");
x_32 = lean_name_mk_string(x_19, x_31);
x_33 = lean_mk_string("Deriving");
x_34 = lean_name_mk_string(x_32, x_33);
x_35 = lean_name_mk_string(x_34, x_12);
x_54 = lean_st_ref_get(x_7, x_25);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_55, 3);
lean_inc(x_56);
lean_dec(x_55);
x_57 = lean_ctor_get_uint8(x_56, sizeof(void*)*1);
lean_dec(x_56);
if (x_57 == 0)
{
lean_object* x_58; uint8_t x_59; 
x_58 = lean_ctor_get(x_54, 1);
lean_inc(x_58);
lean_dec(x_54);
x_59 = 0;
x_36 = x_59;
x_37 = x_58;
goto block_53;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_60 = lean_ctor_get(x_54, 1);
lean_inc(x_60);
lean_dec(x_54);
lean_inc(x_35);
x_61 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_35, x_2, x_3, x_4, x_5, x_6, x_7, x_60);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_unbox(x_62);
lean_dec(x_62);
x_36 = x_64;
x_37 = x_63;
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
if (lean_is_scalar(x_26)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_26;
}
lean_ctor_set(x_38, 0, x_30);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
lean_dec(x_26);
x_39 = lean_mk_string("\n");
x_40 = l_Lean_stringToMessageData(x_39);
lean_dec(x_39);
lean_inc(x_30);
x_41 = lean_array_to_list(lean_box(0), x_30);
x_42 = l_List_map___at___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___spec__1(x_41);
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
uint8_t x_65; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
else
{
uint8_t x_69; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_69 = !lean_is_exclusive(x_16);
if (x_69 == 0)
{
return x_16;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_16, 0);
x_71 = lean_ctor_get(x_16, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_16);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_73 = !lean_is_exclusive(x_13);
if (x_73 == 0)
{
return x_13;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_13, 0);
x_75 = lean_ctor_get(x_13, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_13);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
lean_object* l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_isInductive___at_Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_environment_find(x_8, x_1);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; lean_object* x_11; 
x_10 = 0;
x_11 = lean_box(x_10);
lean_ctor_set(x_5, 0, x_11);
return x_5;
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
lean_dec(x_9);
if (lean_obj_tag(x_12) == 5)
{
uint8_t x_13; lean_object* x_14; 
lean_dec(x_12);
x_13 = 1;
x_14 = lean_box(x_13);
lean_ctor_set(x_5, 0, x_14);
return x_5;
}
else
{
uint8_t x_15; lean_object* x_16; 
lean_dec(x_12);
x_15 = 0;
x_16 = lean_box(x_15);
lean_ctor_set(x_5, 0, x_16);
return x_5;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_5, 0);
x_18 = lean_ctor_get(x_5, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_5);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_environment_find(x_19, x_1);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_21 = 0;
x_22 = lean_box(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_18);
return x_23;
}
else
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_20, 0);
lean_inc(x_24);
lean_dec(x_20);
if (lean_obj_tag(x_24) == 5)
{
uint8_t x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_24);
x_25 = 1;
x_26 = lean_box(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_18);
return x_27;
}
else
{
uint8_t x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_24);
x_28 = 0;
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_18);
return x_30;
}
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_uget(x_1, x_2);
x_9 = l_Lean_isInductive___at_Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___spec__1(x_8, x_4, x_5, x_6);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 0);
lean_dec(x_13);
x_14 = 1;
x_15 = lean_box(x_14);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_dec(x_9);
x_17 = 1;
x_18 = lean_box(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
}
else
{
lean_object* x_20; size_t x_21; size_t x_22; 
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
lean_dec(x_9);
x_21 = 1;
x_22 = x_2 + x_21;
x_2 = x_22;
x_6 = x_20;
goto _start;
}
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_24 = 0;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_6);
return x_26;
}
}
}
lean_object* l_Lean_Elab_Deriving_BEq_mkBEqInstanceHandler(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_74; uint8_t x_75; 
x_5 = lean_array_get_size(x_1);
x_74 = lean_unsigned_to_nat(0u);
x_75 = lean_nat_dec_lt(x_74, x_5);
if (x_75 == 0)
{
uint8_t x_76; 
x_76 = 1;
x_6 = x_76;
x_7 = x_4;
goto block_73;
}
else
{
uint8_t x_77; 
x_77 = lean_nat_dec_le(x_5, x_5);
if (x_77 == 0)
{
uint8_t x_78; 
x_78 = 1;
x_6 = x_78;
x_7 = x_4;
goto block_73;
}
else
{
size_t x_79; size_t x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_79 = 0;
x_80 = lean_usize_of_nat(x_5);
x_81 = l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___spec__2(x_1, x_79, x_80, x_2, x_3, x_4);
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_unbox(x_82);
lean_dec(x_82);
if (x_83 == 0)
{
lean_object* x_84; uint8_t x_85; 
x_84 = lean_ctor_get(x_81, 1);
lean_inc(x_84);
lean_dec(x_81);
x_85 = 1;
x_6 = x_85;
x_7 = x_84;
goto block_73;
}
else
{
lean_object* x_86; uint8_t x_87; 
x_86 = lean_ctor_get(x_81, 1);
lean_inc(x_86);
lean_dec(x_81);
x_87 = 0;
x_6 = x_87;
x_7 = x_86;
goto block_73;
}
}
}
block_73:
{
if (x_6 == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = 0;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_5);
lean_dec(x_5);
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = 0;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_7);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_box(0);
x_17 = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_BEq_0__Lean_Elab_Deriving_BEq_mkBEqInstanceCmds___boxed), 8, 1);
lean_closure_set(x_17, 0, x_1);
lean_inc(x_2);
x_18 = l_Lean_Elab_Command_liftTermElabM___rarg(x_16, x_17, x_2, x_3, x_7);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
x_22 = lean_array_get_size(x_20);
x_23 = lean_nat_dec_lt(x_11, x_22);
if (x_23 == 0)
{
uint8_t x_24; lean_object* x_25; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_3);
lean_dec(x_2);
x_24 = 1;
x_25 = lean_box(x_24);
lean_ctor_set(x_18, 0, x_25);
return x_18;
}
else
{
uint8_t x_26; 
x_26 = lean_nat_dec_le(x_22, x_22);
if (x_26 == 0)
{
uint8_t x_27; lean_object* x_28; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_3);
lean_dec(x_2);
x_27 = 1;
x_28 = lean_box(x_27);
lean_ctor_set(x_18, 0, x_28);
return x_18;
}
else
{
size_t x_29; size_t x_30; lean_object* x_31; lean_object* x_32; 
lean_free_object(x_18);
x_29 = 0;
x_30 = lean_usize_of_nat(x_22);
lean_dec(x_22);
x_31 = lean_box(0);
x_32 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(x_20, x_29, x_30, x_31, x_2, x_3, x_21);
lean_dec(x_2);
lean_dec(x_20);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
x_35 = 1;
x_36 = lean_box(x_35);
lean_ctor_set(x_32, 0, x_36);
return x_32;
}
else
{
lean_object* x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_dec(x_32);
x_38 = 1;
x_39 = lean_box(x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_37);
return x_40;
}
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_32);
if (x_41 == 0)
{
return x_32;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_32, 0);
x_43 = lean_ctor_get(x_32, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_32);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_45 = lean_ctor_get(x_18, 0);
x_46 = lean_ctor_get(x_18, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_18);
x_47 = lean_array_get_size(x_45);
x_48 = lean_nat_dec_lt(x_11, x_47);
if (x_48 == 0)
{
uint8_t x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_47);
lean_dec(x_45);
lean_dec(x_3);
lean_dec(x_2);
x_49 = 1;
x_50 = lean_box(x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_46);
return x_51;
}
else
{
uint8_t x_52; 
x_52 = lean_nat_dec_le(x_47, x_47);
if (x_52 == 0)
{
uint8_t x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_47);
lean_dec(x_45);
lean_dec(x_3);
lean_dec(x_2);
x_53 = 1;
x_54 = lean_box(x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_46);
return x_55;
}
else
{
size_t x_56; size_t x_57; lean_object* x_58; lean_object* x_59; 
x_56 = 0;
x_57 = lean_usize_of_nat(x_47);
lean_dec(x_47);
x_58 = lean_box(0);
x_59 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(x_45, x_56, x_57, x_58, x_2, x_3, x_46);
lean_dec(x_2);
lean_dec(x_45);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; lean_object* x_64; 
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_61 = x_59;
} else {
 lean_dec_ref(x_59);
 x_61 = lean_box(0);
}
x_62 = 1;
x_63 = lean_box(x_62);
if (lean_is_scalar(x_61)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_61;
}
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_60);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_59, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_59, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_67 = x_59;
} else {
 lean_dec_ref(x_59);
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
}
else
{
uint8_t x_69; 
lean_dec(x_3);
lean_dec(x_2);
x_69 = !lean_is_exclusive(x_18);
if (x_69 == 0)
{
return x_18;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_18, 0);
x_71 = lean_ctor_get(x_18, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_18);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
}
}
}
}
lean_object* l_Lean_isInductive___at_Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_isInductive___at_Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_BEq_mkBEqInstanceHandler___spec__2(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Deriving_BEq_initFn____x40_Lean_Elab_Deriving_BEq___hyg_2129_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_box(0);
x_3 = lean_mk_string("BEq");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_BEq_mkBEqInstanceHandler), 4, 0);
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
x_12 = lean_mk_string("beq");
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
lean_object* initialize_Lean_Elab_Deriving_Basic(lean_object*);
lean_object* initialize_Lean_Elab_Deriving_Util(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Deriving_BEq(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Util(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Deriving_BEq_initFn____x40_Lean_Elab_Deriving_BEq___hyg_2129_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
