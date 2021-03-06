// Lean compiler output
// Module: Lean.Elab.Deriving.Ord
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
lean_object* l_List_map___at___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___spec__1(lean_object*);
uint8_t l_Lean_Expr_hasAnyFVar_visit___at_Lean_Expr_containsFVar___spec__1(lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__6___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkOrdHeader___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkOrdHeader(lean_object*);
lean_object* l_Lean_Core_betaReduce___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkMutualBlock___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMutualBlock___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkAuxFunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkDiscrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkAuxFunction___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch(lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch_mkAlts_match__2(lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInstanceCmds(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkOrdInstanceHandler(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch_mkAlts_match__1(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkMutualBlock(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductive___at_Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Array_reverse___rarg(lean_object*);
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkHeader___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch_mkAlts_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_initFn____x40_Lean_Elab_Deriving_Ord___hyg_2185_(lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkAuxFunction___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(size_t, size_t, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMutualBlock___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkOrdHeader___boxed(lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__5___boxed(lean_object**);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_registerBuiltinDerivingHandler(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkAuxFunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductive___at_Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__6___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_syntax_ident(lean_object*);
extern lean_object* l_Lean_instInhabitedInductiveVal;
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch_mkAlts_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_betaReduce___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch_mkAlts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch___boxed(lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Ord_mkOrdHeader___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_box(0);
x_10 = lean_mk_string("Ord");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_unsigned_to_nat(2u);
x_13 = l_Lean_Elab_Deriving_mkHeader___rarg(x_11, x_12, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_13;
}
}
lean_object* l_Lean_Elab_Deriving_Ord_mkOrdHeader(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Ord_mkOrdHeader___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_Ord_mkOrdHeader___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Deriving_Ord_mkOrdHeader(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch_mkAlts_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch_mkAlts_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Ord_mkMatch_mkAlts_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch_mkAlts_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch_mkAlts_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Ord_mkMatch_mkAlts_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
x_27 = l_Lean_throwError___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__2(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
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
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
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
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
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
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21) {
_start:
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_11, 1);
x_23 = lean_nat_dec_le(x_22, x_13);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_nat_dec_eq(x_12, x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_sub(x_12, x_26);
lean_dec(x_12);
x_35 = lean_ctor_get(x_14, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_14, 0);
lean_inc(x_36);
lean_dec(x_14);
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_39 = x_35;
} else {
 lean_dec_ref(x_35);
 x_39 = lean_box(0);
}
x_69 = lean_nat_add(x_10, x_13);
x_70 = l_Lean_instInhabitedExpr;
x_71 = lean_array_get(x_70, x_2, x_69);
lean_dec(x_69);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_71);
x_72 = l_Lean_Meta_inferType(x_71, x_17, x_18, x_19, x_20, x_21);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
x_75 = l_Lean_Meta_isProp(x_73, x_17, x_18, x_19, x_20, x_74);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = l_Lean_Expr_fvarId_x21(x_71);
lean_dec(x_71);
x_79 = l_Lean_Expr_hasAnyFVar_visit___at_Lean_Expr_containsFVar___spec__1(x_78, x_3);
lean_dec(x_78);
if (x_79 == 0)
{
uint8_t x_80; 
x_80 = lean_unbox(x_76);
lean_dec(x_76);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
lean_dec(x_39);
x_81 = lean_box(0);
x_82 = lean_mk_string("a");
x_83 = lean_name_mk_string(x_81, x_82);
x_84 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_83, x_19, x_20, x_77);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = lean_mk_syntax_ident(x_85);
x_88 = lean_mk_string("b");
x_89 = lean_name_mk_string(x_81, x_88);
x_90 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_89, x_19, x_20, x_86);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_93 = lean_mk_syntax_ident(x_91);
lean_inc(x_87);
x_94 = lean_array_push(x_36, x_87);
lean_inc(x_93);
x_95 = lean_array_push(x_37, x_93);
x_96 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_19, x_20, x_92);
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
lean_dec(x_96);
x_99 = l_Lean_Elab_Term_getCurrMacroScope(x_15, x_16, x_17, x_18, x_19, x_20, x_98);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
lean_dec(x_99);
x_102 = l_Lean_Elab_Term_getMainModule___rarg(x_20, x_101);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = lean_mk_string("Lean");
x_106 = lean_name_mk_string(x_81, x_105);
x_107 = lean_mk_string("Parser");
x_108 = lean_name_mk_string(x_106, x_107);
x_109 = lean_mk_string("Term");
x_110 = lean_name_mk_string(x_108, x_109);
x_111 = lean_mk_string("match");
lean_inc(x_111);
lean_inc(x_110);
x_112 = lean_name_mk_string(x_110, x_111);
lean_inc(x_97);
x_113 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_113, 0, x_97);
lean_ctor_set(x_113, 1, x_111);
x_114 = lean_mk_string("null");
x_115 = lean_name_mk_string(x_81, x_114);
lean_inc(x_1);
lean_inc(x_115);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_1);
x_117 = lean_mk_string("matchDiscr");
lean_inc(x_110);
x_118 = lean_name_mk_string(x_110, x_117);
x_119 = lean_mk_string("app");
lean_inc(x_110);
x_120 = lean_name_mk_string(x_110, x_119);
x_121 = lean_mk_string("compare");
x_122 = lean_string_utf8_byte_size(x_121);
lean_inc(x_121);
x_123 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_24);
lean_ctor_set(x_123, 2, x_122);
lean_inc(x_121);
x_124 = lean_name_mk_string(x_81, x_121);
lean_inc(x_100);
lean_inc(x_103);
x_125 = l_Lean_addMacroScope(x_103, x_124, x_100);
x_126 = lean_mk_string("Ord");
x_127 = lean_name_mk_string(x_81, x_126);
x_128 = lean_name_mk_string(x_127, x_121);
lean_inc(x_7);
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_7);
lean_inc(x_8);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_8);
lean_inc(x_97);
x_131 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_131, 0, x_97);
lean_ctor_set(x_131, 1, x_123);
lean_ctor_set(x_131, 2, x_125);
lean_ctor_set(x_131, 3, x_130);
x_132 = lean_unsigned_to_nat(2u);
x_133 = lean_mk_empty_array_with_capacity(x_132);
lean_inc(x_133);
x_134 = lean_array_push(x_133, x_87);
x_135 = lean_array_push(x_134, x_93);
lean_inc(x_115);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_115);
lean_ctor_set(x_136, 1, x_135);
lean_inc(x_133);
x_137 = lean_array_push(x_133, x_131);
x_138 = lean_array_push(x_137, x_136);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_120);
lean_ctor_set(x_139, 1, x_138);
lean_inc(x_116);
x_140 = lean_array_push(x_133, x_116);
x_141 = lean_array_push(x_140, x_139);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_118);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_mk_empty_array_with_capacity(x_26);
lean_inc(x_143);
x_144 = lean_array_push(x_143, x_142);
lean_inc(x_115);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_115);
lean_ctor_set(x_145, 1, x_144);
x_146 = lean_mk_string("with");
lean_inc(x_97);
x_147 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_147, 0, x_97);
lean_ctor_set(x_147, 1, x_146);
x_148 = lean_mk_string("matchAlts");
lean_inc(x_110);
x_149 = lean_name_mk_string(x_110, x_148);
x_150 = lean_mk_string("matchAlt");
x_151 = lean_name_mk_string(x_110, x_150);
x_152 = lean_mk_string("|");
lean_inc(x_97);
x_153 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_153, 0, x_97);
lean_ctor_set(x_153, 1, x_152);
x_154 = lean_mk_string("Ordering.lt");
x_155 = lean_string_utf8_byte_size(x_154);
x_156 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_24);
lean_ctor_set(x_156, 2, x_155);
x_157 = lean_mk_string("lt");
lean_inc(x_5);
x_158 = lean_name_mk_string(x_5, x_157);
lean_inc(x_100);
lean_inc(x_158);
lean_inc(x_103);
x_159 = l_Lean_addMacroScope(x_103, x_158, x_100);
lean_inc(x_7);
x_160 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_160, 0, x_158);
lean_ctor_set(x_160, 1, x_7);
lean_inc(x_8);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_160);
lean_ctor_set(x_161, 1, x_8);
lean_inc(x_97);
x_162 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_162, 0, x_97);
lean_ctor_set(x_162, 1, x_156);
lean_ctor_set(x_162, 2, x_159);
lean_ctor_set(x_162, 3, x_161);
lean_inc(x_162);
lean_inc(x_143);
x_163 = lean_array_push(x_143, x_162);
lean_inc(x_115);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_115);
lean_ctor_set(x_164, 1, x_163);
x_165 = lean_mk_string("=>");
lean_inc(x_97);
x_166 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_166, 0, x_97);
lean_ctor_set(x_166, 1, x_165);
x_167 = lean_unsigned_to_nat(4u);
x_168 = lean_mk_empty_array_with_capacity(x_167);
x_169 = lean_array_push(x_168, x_153);
lean_inc(x_169);
x_170 = lean_array_push(x_169, x_164);
lean_inc(x_166);
x_171 = lean_array_push(x_170, x_166);
x_172 = lean_array_push(x_171, x_162);
lean_inc(x_151);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_151);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_mk_string("Ordering.gt");
x_175 = lean_string_utf8_byte_size(x_174);
x_176 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_176, 0, x_174);
lean_ctor_set(x_176, 1, x_24);
lean_ctor_set(x_176, 2, x_175);
x_177 = lean_mk_string("gt");
lean_inc(x_5);
x_178 = lean_name_mk_string(x_5, x_177);
lean_inc(x_100);
lean_inc(x_178);
lean_inc(x_103);
x_179 = l_Lean_addMacroScope(x_103, x_178, x_100);
lean_inc(x_7);
x_180 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_7);
lean_inc(x_8);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_8);
lean_inc(x_97);
x_182 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_182, 0, x_97);
lean_ctor_set(x_182, 1, x_176);
lean_ctor_set(x_182, 2, x_179);
lean_ctor_set(x_182, 3, x_181);
lean_inc(x_182);
lean_inc(x_143);
x_183 = lean_array_push(x_143, x_182);
lean_inc(x_115);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_115);
lean_ctor_set(x_184, 1, x_183);
lean_inc(x_169);
x_185 = lean_array_push(x_169, x_184);
lean_inc(x_166);
x_186 = lean_array_push(x_185, x_166);
x_187 = lean_array_push(x_186, x_182);
lean_inc(x_151);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_151);
lean_ctor_set(x_188, 1, x_187);
lean_inc(x_6);
x_189 = l_Lean_addMacroScope(x_103, x_6, x_100);
lean_inc(x_9);
lean_inc(x_4);
x_190 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_190, 0, x_97);
lean_ctor_set(x_190, 1, x_4);
lean_ctor_set(x_190, 2, x_189);
lean_ctor_set(x_190, 3, x_9);
lean_inc(x_143);
x_191 = lean_array_push(x_143, x_190);
lean_inc(x_115);
x_192 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_192, 0, x_115);
lean_ctor_set(x_192, 1, x_191);
x_193 = lean_array_push(x_169, x_192);
x_194 = lean_array_push(x_193, x_166);
x_195 = lean_array_push(x_194, x_38);
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_151);
lean_ctor_set(x_196, 1, x_195);
x_197 = lean_unsigned_to_nat(3u);
x_198 = lean_mk_empty_array_with_capacity(x_197);
x_199 = lean_array_push(x_198, x_173);
x_200 = lean_array_push(x_199, x_188);
x_201 = lean_array_push(x_200, x_196);
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_115);
lean_ctor_set(x_202, 1, x_201);
x_203 = lean_array_push(x_143, x_202);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_149);
lean_ctor_set(x_204, 1, x_203);
x_205 = lean_unsigned_to_nat(6u);
x_206 = lean_mk_empty_array_with_capacity(x_205);
x_207 = lean_array_push(x_206, x_113);
lean_inc(x_116);
x_208 = lean_array_push(x_207, x_116);
x_209 = lean_array_push(x_208, x_145);
x_210 = lean_array_push(x_209, x_116);
x_211 = lean_array_push(x_210, x_147);
x_212 = lean_array_push(x_211, x_204);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_112);
lean_ctor_set(x_213, 1, x_212);
x_214 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_214, 0, x_95);
lean_ctor_set(x_214, 1, x_213);
x_215 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_215, 0, x_94);
lean_ctor_set(x_215, 1, x_214);
x_216 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_216, 0, x_215);
x_28 = x_216;
x_29 = x_104;
goto block_34;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_217 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_19, x_20, x_77);
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 1);
lean_inc(x_219);
lean_dec(x_217);
x_220 = l_Lean_Elab_Term_getCurrMacroScope(x_15, x_16, x_17, x_18, x_19, x_20, x_219);
x_221 = lean_ctor_get(x_220, 1);
lean_inc(x_221);
lean_dec(x_220);
x_222 = l_Lean_Elab_Term_getMainModule___rarg(x_20, x_221);
x_223 = lean_ctor_get(x_222, 1);
lean_inc(x_223);
lean_dec(x_222);
x_224 = lean_box(0);
x_225 = lean_mk_string("Lean");
x_226 = lean_name_mk_string(x_224, x_225);
x_227 = lean_mk_string("Parser");
x_228 = lean_name_mk_string(x_226, x_227);
x_229 = lean_mk_string("Term");
x_230 = lean_name_mk_string(x_228, x_229);
x_231 = lean_mk_string("hole");
x_232 = lean_name_mk_string(x_230, x_231);
x_233 = lean_mk_string("_");
x_234 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_234, 0, x_218);
lean_ctor_set(x_234, 1, x_233);
x_235 = lean_mk_empty_array_with_capacity(x_26);
x_236 = lean_array_push(x_235, x_234);
x_237 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_237, 0, x_232);
lean_ctor_set(x_237, 1, x_236);
x_40 = x_237;
x_41 = x_223;
goto block_68;
}
}
else
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
lean_dec(x_76);
x_238 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_19, x_20, x_77);
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_238, 1);
lean_inc(x_240);
lean_dec(x_238);
x_241 = l_Lean_Elab_Term_getCurrMacroScope(x_15, x_16, x_17, x_18, x_19, x_20, x_240);
x_242 = lean_ctor_get(x_241, 1);
lean_inc(x_242);
lean_dec(x_241);
x_243 = l_Lean_Elab_Term_getMainModule___rarg(x_20, x_242);
x_244 = lean_ctor_get(x_243, 1);
lean_inc(x_244);
lean_dec(x_243);
x_245 = lean_box(0);
x_246 = lean_mk_string("Lean");
x_247 = lean_name_mk_string(x_245, x_246);
x_248 = lean_mk_string("Parser");
x_249 = lean_name_mk_string(x_247, x_248);
x_250 = lean_mk_string("Term");
x_251 = lean_name_mk_string(x_249, x_250);
x_252 = lean_mk_string("hole");
x_253 = lean_name_mk_string(x_251, x_252);
x_254 = lean_mk_string("_");
x_255 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_255, 0, x_239);
lean_ctor_set(x_255, 1, x_254);
x_256 = lean_mk_empty_array_with_capacity(x_26);
x_257 = lean_array_push(x_256, x_255);
x_258 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_258, 0, x_253);
lean_ctor_set(x_258, 1, x_257);
x_40 = x_258;
x_41 = x_244;
goto block_68;
}
}
else
{
uint8_t x_259; 
lean_dec(x_71);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_259 = !lean_is_exclusive(x_75);
if (x_259 == 0)
{
return x_75;
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_260 = lean_ctor_get(x_75, 0);
x_261 = lean_ctor_get(x_75, 1);
lean_inc(x_261);
lean_inc(x_260);
lean_dec(x_75);
x_262 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_262, 0, x_260);
lean_ctor_set(x_262, 1, x_261);
return x_262;
}
}
}
else
{
uint8_t x_263; 
lean_dec(x_71);
lean_dec(x_39);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_27);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_263 = !lean_is_exclusive(x_72);
if (x_263 == 0)
{
return x_72;
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_264 = lean_ctor_get(x_72, 0);
x_265 = lean_ctor_get(x_72, 1);
lean_inc(x_265);
lean_inc(x_264);
lean_dec(x_72);
x_266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_266, 0, x_264);
lean_ctor_set(x_266, 1, x_265);
return x_266;
}
}
block_34:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_ctor_get(x_11, 2);
x_32 = lean_nat_add(x_13, x_31);
lean_dec(x_13);
x_12 = x_27;
x_13 = x_32;
x_14 = x_30;
x_21 = x_29;
goto _start;
}
block_68:
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_42 = lean_array_push(x_36, x_40);
x_43 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_19, x_20, x_41);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l_Lean_Elab_Term_getCurrMacroScope(x_15, x_16, x_17, x_18, x_19, x_20, x_45);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_48 = l_Lean_Elab_Term_getMainModule___rarg(x_20, x_47);
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
x_57 = lean_mk_string("hole");
x_58 = lean_name_mk_string(x_56, x_57);
x_59 = lean_mk_string("_");
x_60 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_60, 0, x_44);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_mk_empty_array_with_capacity(x_26);
x_62 = lean_array_push(x_61, x_60);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_58);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_array_push(x_37, x_63);
if (lean_is_scalar(x_39)) {
 x_65 = lean_alloc_ctor(0, 2, 0);
} else {
 x_65 = x_39;
}
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_38);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_42);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_67, 0, x_66);
x_28 = x_67;
x_29 = x_49;
goto block_34;
}
}
else
{
lean_object* x_267; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_267 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_267, 0, x_14);
lean_ctor_set(x_267, 1, x_21);
return x_267;
}
}
else
{
lean_object* x_268; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_14);
lean_ctor_set(x_268, 1, x_21);
return x_268;
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__6___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_alloc_closure((void*)(l_Lean_Core_betaReduce___lambda__1___boxed), 4, 0);
x_15 = lean_alloc_closure((void*)(l_Lean_Core_betaReduce___lambda__2___boxed), 4, 0);
lean_inc(x_12);
lean_inc(x_11);
x_16 = l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(x_6, x_14, x_15, x_11, x_12, x_13);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 2);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_unsigned_to_nat(1u);
lean_inc(x_20);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_20);
lean_ctor_set(x_23, 2, x_22);
lean_inc(x_2);
x_24 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__3(x_23, x_20, x_21, x_2, x_7, x_8, x_9, x_10, x_11, x_12, x_18);
lean_dec(x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_26);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_32);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_mk_string("Ordering.eq");
x_37 = lean_string_utf8_byte_size(x_36);
x_38 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_21);
lean_ctor_set(x_38, 2, x_37);
x_39 = lean_box(0);
x_40 = lean_mk_string("Ordering");
x_41 = lean_name_mk_string(x_39, x_40);
x_42 = lean_mk_string("eq");
lean_inc(x_41);
x_43 = lean_name_mk_string(x_41, x_42);
lean_inc(x_43);
x_44 = l_Lean_addMacroScope(x_34, x_43, x_31);
x_45 = lean_box(0);
lean_inc(x_43);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
lean_inc(x_47);
lean_inc(x_38);
x_48 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_48, 0, x_28);
lean_ctor_set(x_48, 1, x_38);
lean_ctor_set(x_48, 2, x_44);
lean_ctor_set(x_48, 3, x_47);
lean_inc(x_19);
x_49 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_49, 0, x_21);
lean_ctor_set(x_49, 1, x_19);
lean_ctor_set(x_49, 2, x_22);
lean_inc_n(x_2, 2);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_2);
lean_ctor_set(x_50, 1, x_2);
lean_inc(x_19);
x_51 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__4(x_49, x_19, x_21, x_50, x_7, x_8, x_9, x_10, x_11, x_12, x_35);
lean_dec(x_49);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = !lean_is_exclusive(x_52);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_55 = lean_ctor_get(x_52, 0);
x_56 = lean_ctor_get(x_52, 1);
x_57 = lean_ctor_get(x_3, 4);
lean_inc(x_57);
lean_dec(x_3);
lean_inc(x_57);
x_58 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_58, 0, x_21);
lean_ctor_set(x_58, 1, x_57);
lean_ctor_set(x_58, 2, x_22);
lean_ctor_set(x_52, 1, x_48);
lean_ctor_set(x_52, 0, x_56);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_55);
lean_ctor_set(x_59, 1, x_52);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_41);
lean_inc(x_2);
x_60 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__5(x_2, x_5, x_17, x_38, x_41, x_43, x_45, x_45, x_47, x_19, x_58, x_57, x_21, x_59, x_7, x_8, x_9, x_10, x_11, x_12, x_53);
lean_dec(x_58);
lean_dec(x_19);
lean_dec(x_17);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; size_t x_161; size_t x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; size_t x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; uint8_t x_221; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
x_63 = lean_ctor_get(x_60, 1);
lean_inc(x_63);
lean_dec(x_60);
x_64 = lean_ctor_get(x_61, 0);
lean_inc(x_64);
lean_dec(x_61);
x_65 = lean_ctor_get(x_62, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_62, 1);
lean_inc(x_66);
lean_dec(x_62);
x_67 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_63);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_69);
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_72 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_71);
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_dec(x_72);
x_74 = lean_mk_string("Lean");
x_75 = lean_name_mk_string(x_39, x_74);
x_76 = lean_mk_string("Parser");
x_77 = lean_name_mk_string(x_75, x_76);
x_78 = lean_mk_string("Term");
x_79 = lean_name_mk_string(x_77, x_78);
x_80 = lean_mk_string("app");
lean_inc(x_79);
x_81 = lean_name_mk_string(x_79, x_80);
x_82 = lean_mk_string("explicit");
lean_inc(x_79);
x_83 = lean_name_mk_string(x_79, x_82);
x_84 = lean_mk_string("@");
lean_inc(x_84);
x_85 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_85, 0, x_68);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_mk_syntax_ident(x_4);
x_87 = lean_unsigned_to_nat(2u);
x_88 = lean_mk_empty_array_with_capacity(x_87);
lean_inc(x_88);
x_89 = lean_array_push(x_88, x_85);
lean_inc(x_86);
x_90 = lean_array_push(x_89, x_86);
lean_inc(x_83);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_83);
lean_ctor_set(x_91, 1, x_90);
x_92 = lean_mk_string("null");
x_93 = lean_name_mk_string(x_39, x_92);
x_94 = l_Array_reverse___rarg(x_64);
lean_inc(x_2);
x_95 = l_Array_append___rarg(x_2, x_94);
lean_dec(x_94);
lean_inc(x_93);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_93);
lean_ctor_set(x_96, 1, x_95);
lean_inc(x_88);
x_97 = lean_array_push(x_88, x_91);
x_98 = lean_array_push(x_97, x_96);
lean_inc(x_81);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_81);
lean_ctor_set(x_99, 1, x_98);
x_100 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_73);
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_102);
x_104 = lean_ctor_get(x_103, 1);
lean_inc(x_104);
lean_dec(x_103);
x_105 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_104);
x_106 = lean_ctor_get(x_105, 1);
lean_inc(x_106);
lean_dec(x_105);
x_107 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_107, 0, x_101);
lean_ctor_set(x_107, 1, x_84);
lean_inc(x_88);
x_108 = lean_array_push(x_88, x_107);
x_109 = lean_array_push(x_108, x_86);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_83);
lean_ctor_set(x_110, 1, x_109);
x_111 = l_Array_reverse___rarg(x_65);
lean_inc(x_2);
x_112 = l_Array_append___rarg(x_2, x_111);
lean_dec(x_111);
lean_inc(x_93);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_93);
lean_ctor_set(x_113, 1, x_112);
lean_inc(x_88);
x_114 = lean_array_push(x_88, x_110);
x_115 = lean_array_push(x_114, x_113);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_81);
lean_ctor_set(x_116, 1, x_115);
lean_inc(x_88);
x_117 = lean_array_push(x_88, x_99);
lean_inc(x_116);
lean_inc(x_117);
x_118 = lean_array_push(x_117, x_116);
lean_inc(x_25);
x_119 = l_Array_append___rarg(x_25, x_118);
lean_dec(x_118);
x_120 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_106);
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_123 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_122);
x_124 = lean_ctor_get(x_123, 1);
lean_inc(x_124);
lean_dec(x_123);
x_125 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_124);
x_126 = lean_ctor_get(x_125, 1);
lean_inc(x_126);
lean_dec(x_125);
x_127 = lean_mk_string("hole");
lean_inc(x_79);
x_128 = lean_name_mk_string(x_79, x_127);
x_129 = lean_mk_string("_");
lean_inc(x_129);
x_130 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_130, 0, x_121);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_mk_empty_array_with_capacity(x_22);
lean_inc(x_131);
x_132 = lean_array_push(x_131, x_130);
lean_inc(x_128);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_128);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_array_push(x_117, x_133);
lean_inc(x_25);
x_135 = l_Array_append___rarg(x_25, x_134);
lean_dec(x_134);
x_136 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_126);
x_137 = lean_ctor_get(x_136, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_136, 1);
lean_inc(x_138);
lean_dec(x_136);
x_139 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_138);
x_140 = lean_ctor_get(x_139, 1);
lean_inc(x_140);
lean_dec(x_139);
x_141 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_140);
x_142 = lean_ctor_get(x_141, 1);
lean_inc(x_142);
lean_dec(x_141);
x_143 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_143, 0, x_137);
lean_ctor_set(x_143, 1, x_129);
x_144 = lean_array_push(x_131, x_143);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_128);
lean_ctor_set(x_145, 1, x_144);
x_146 = lean_array_push(x_88, x_145);
x_147 = lean_array_push(x_146, x_116);
x_148 = l_Array_append___rarg(x_25, x_147);
lean_dec(x_147);
x_149 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_142);
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_149, 1);
lean_inc(x_151);
lean_dec(x_149);
x_152 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_151);
x_153 = lean_ctor_get(x_152, 1);
lean_inc(x_153);
lean_dec(x_152);
x_154 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_153);
x_155 = lean_ctor_get(x_154, 1);
lean_inc(x_155);
lean_dec(x_154);
x_156 = lean_mk_string("matchAlt");
x_157 = lean_name_mk_string(x_79, x_156);
x_158 = lean_mk_string("|");
lean_inc(x_158);
lean_inc(x_150);
x_159 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_159, 0, x_150);
lean_ctor_set(x_159, 1, x_158);
x_160 = lean_array_get_size(x_119);
x_161 = lean_usize_of_nat(x_160);
lean_dec(x_160);
x_162 = 0;
x_163 = x_119;
x_164 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_161, x_162, x_163);
x_165 = x_164;
x_166 = lean_box(2);
x_167 = lean_mk_string(",");
x_168 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set(x_168, 1, x_167);
lean_inc(x_168);
x_169 = l_Lean_mkSepArray(x_165, x_168);
lean_dec(x_165);
lean_inc(x_2);
x_170 = l_Array_append___rarg(x_2, x_169);
lean_dec(x_169);
lean_inc(x_93);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_93);
lean_ctor_set(x_171, 1, x_170);
x_172 = lean_mk_string("=>");
lean_inc(x_172);
x_173 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_173, 0, x_150);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_unsigned_to_nat(4u);
x_175 = lean_mk_empty_array_with_capacity(x_174);
lean_inc(x_175);
x_176 = lean_array_push(x_175, x_159);
x_177 = lean_array_push(x_176, x_171);
x_178 = lean_array_push(x_177, x_173);
x_179 = lean_array_push(x_178, x_66);
lean_inc(x_157);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_157);
lean_ctor_set(x_180, 1, x_179);
x_181 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_155);
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_181, 1);
lean_inc(x_183);
lean_dec(x_181);
x_184 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_183);
x_185 = lean_ctor_get(x_184, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_184, 1);
lean_inc(x_186);
lean_dec(x_184);
x_187 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_186);
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 1);
lean_inc(x_189);
lean_dec(x_187);
lean_inc(x_158);
lean_inc(x_182);
x_190 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_190, 0, x_182);
lean_ctor_set(x_190, 1, x_158);
x_191 = lean_array_get_size(x_135);
x_192 = lean_usize_of_nat(x_191);
lean_dec(x_191);
x_193 = x_135;
x_194 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_192, x_162, x_193);
x_195 = x_194;
lean_inc(x_168);
x_196 = l_Lean_mkSepArray(x_195, x_168);
lean_dec(x_195);
lean_inc(x_2);
x_197 = l_Array_append___rarg(x_2, x_196);
lean_dec(x_196);
lean_inc(x_93);
x_198 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_198, 0, x_93);
lean_ctor_set(x_198, 1, x_197);
lean_inc(x_172);
lean_inc(x_182);
x_199 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_199, 0, x_182);
lean_ctor_set(x_199, 1, x_172);
x_200 = lean_mk_string("Ordering.lt");
x_201 = lean_string_utf8_byte_size(x_200);
x_202 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_202, 0, x_200);
lean_ctor_set(x_202, 1, x_21);
lean_ctor_set(x_202, 2, x_201);
x_203 = lean_mk_string("lt");
lean_inc(x_41);
x_204 = lean_name_mk_string(x_41, x_203);
lean_inc(x_204);
x_205 = l_Lean_addMacroScope(x_188, x_204, x_185);
x_206 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_206, 0, x_204);
lean_ctor_set(x_206, 1, x_45);
x_207 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_207, 0, x_206);
lean_ctor_set(x_207, 1, x_45);
x_208 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_208, 0, x_182);
lean_ctor_set(x_208, 1, x_202);
lean_ctor_set(x_208, 2, x_205);
lean_ctor_set(x_208, 3, x_207);
lean_inc(x_175);
x_209 = lean_array_push(x_175, x_190);
x_210 = lean_array_push(x_209, x_198);
x_211 = lean_array_push(x_210, x_199);
x_212 = lean_array_push(x_211, x_208);
lean_inc(x_157);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_157);
lean_ctor_set(x_213, 1, x_212);
x_214 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_189);
x_215 = lean_ctor_get(x_214, 0);
lean_inc(x_215);
x_216 = lean_ctor_get(x_214, 1);
lean_inc(x_216);
lean_dec(x_214);
x_217 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_216);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 1);
lean_inc(x_219);
lean_dec(x_217);
x_220 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_219);
lean_dec(x_12);
x_221 = !lean_is_exclusive(x_220);
if (x_221 == 0)
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; size_t x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; 
x_222 = lean_ctor_get(x_220, 0);
lean_inc(x_215);
x_223 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_223, 0, x_215);
lean_ctor_set(x_223, 1, x_158);
x_224 = lean_array_get_size(x_148);
x_225 = lean_usize_of_nat(x_224);
lean_dec(x_224);
x_226 = x_148;
x_227 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_225, x_162, x_226);
x_228 = x_227;
x_229 = l_Lean_mkSepArray(x_228, x_168);
lean_dec(x_228);
x_230 = l_Array_append___rarg(x_2, x_229);
lean_dec(x_229);
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_93);
lean_ctor_set(x_231, 1, x_230);
lean_inc(x_215);
x_232 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_232, 0, x_215);
lean_ctor_set(x_232, 1, x_172);
x_233 = lean_mk_string("Ordering.gt");
x_234 = lean_string_utf8_byte_size(x_233);
x_235 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_235, 0, x_233);
lean_ctor_set(x_235, 1, x_21);
lean_ctor_set(x_235, 2, x_234);
x_236 = lean_mk_string("gt");
x_237 = lean_name_mk_string(x_41, x_236);
lean_inc(x_237);
x_238 = l_Lean_addMacroScope(x_222, x_237, x_218);
x_239 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_239, 0, x_237);
lean_ctor_set(x_239, 1, x_45);
x_240 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_240, 0, x_239);
lean_ctor_set(x_240, 1, x_45);
x_241 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_241, 0, x_215);
lean_ctor_set(x_241, 1, x_235);
lean_ctor_set(x_241, 2, x_238);
lean_ctor_set(x_241, 3, x_240);
x_242 = lean_array_push(x_175, x_223);
x_243 = lean_array_push(x_242, x_231);
x_244 = lean_array_push(x_243, x_232);
x_245 = lean_array_push(x_244, x_241);
x_246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_246, 0, x_157);
lean_ctor_set(x_246, 1, x_245);
x_247 = lean_unsigned_to_nat(3u);
x_248 = lean_mk_empty_array_with_capacity(x_247);
x_249 = lean_array_push(x_248, x_180);
x_250 = lean_array_push(x_249, x_213);
x_251 = lean_array_push(x_250, x_246);
lean_ctor_set(x_220, 0, x_251);
return x_220;
}
else
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; size_t x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
x_252 = lean_ctor_get(x_220, 0);
x_253 = lean_ctor_get(x_220, 1);
lean_inc(x_253);
lean_inc(x_252);
lean_dec(x_220);
lean_inc(x_215);
x_254 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_254, 0, x_215);
lean_ctor_set(x_254, 1, x_158);
x_255 = lean_array_get_size(x_148);
x_256 = lean_usize_of_nat(x_255);
lean_dec(x_255);
x_257 = x_148;
x_258 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_256, x_162, x_257);
x_259 = x_258;
x_260 = l_Lean_mkSepArray(x_259, x_168);
lean_dec(x_259);
x_261 = l_Array_append___rarg(x_2, x_260);
lean_dec(x_260);
x_262 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_262, 0, x_93);
lean_ctor_set(x_262, 1, x_261);
lean_inc(x_215);
x_263 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_263, 0, x_215);
lean_ctor_set(x_263, 1, x_172);
x_264 = lean_mk_string("Ordering.gt");
x_265 = lean_string_utf8_byte_size(x_264);
x_266 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_266, 0, x_264);
lean_ctor_set(x_266, 1, x_21);
lean_ctor_set(x_266, 2, x_265);
x_267 = lean_mk_string("gt");
x_268 = lean_name_mk_string(x_41, x_267);
lean_inc(x_268);
x_269 = l_Lean_addMacroScope(x_252, x_268, x_218);
x_270 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_270, 0, x_268);
lean_ctor_set(x_270, 1, x_45);
x_271 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_271, 0, x_270);
lean_ctor_set(x_271, 1, x_45);
x_272 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_272, 0, x_215);
lean_ctor_set(x_272, 1, x_266);
lean_ctor_set(x_272, 2, x_269);
lean_ctor_set(x_272, 3, x_271);
x_273 = lean_array_push(x_175, x_254);
x_274 = lean_array_push(x_273, x_262);
x_275 = lean_array_push(x_274, x_263);
x_276 = lean_array_push(x_275, x_272);
x_277 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_277, 0, x_157);
lean_ctor_set(x_277, 1, x_276);
x_278 = lean_unsigned_to_nat(3u);
x_279 = lean_mk_empty_array_with_capacity(x_278);
x_280 = lean_array_push(x_279, x_180);
x_281 = lean_array_push(x_280, x_213);
x_282 = lean_array_push(x_281, x_277);
x_283 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_283, 0, x_282);
lean_ctor_set(x_283, 1, x_253);
return x_283;
}
}
else
{
uint8_t x_284; 
lean_dec(x_41);
lean_dec(x_25);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
x_284 = !lean_is_exclusive(x_60);
if (x_284 == 0)
{
return x_60;
}
else
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; 
x_285 = lean_ctor_get(x_60, 0);
x_286 = lean_ctor_get(x_60, 1);
lean_inc(x_286);
lean_inc(x_285);
lean_dec(x_60);
x_287 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_287, 0, x_285);
lean_ctor_set(x_287, 1, x_286);
return x_287;
}
}
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; 
x_288 = lean_ctor_get(x_52, 0);
x_289 = lean_ctor_get(x_52, 1);
lean_inc(x_289);
lean_inc(x_288);
lean_dec(x_52);
x_290 = lean_ctor_get(x_3, 4);
lean_inc(x_290);
lean_dec(x_3);
lean_inc(x_290);
x_291 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_291, 0, x_21);
lean_ctor_set(x_291, 1, x_290);
lean_ctor_set(x_291, 2, x_22);
x_292 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_292, 0, x_289);
lean_ctor_set(x_292, 1, x_48);
x_293 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_293, 0, x_288);
lean_ctor_set(x_293, 1, x_292);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_41);
lean_inc(x_2);
x_294 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__5(x_2, x_5, x_17, x_38, x_41, x_43, x_45, x_45, x_47, x_19, x_291, x_290, x_21, x_293, x_7, x_8, x_9, x_10, x_11, x_12, x_53);
lean_dec(x_291);
lean_dec(x_19);
lean_dec(x_17);
if (lean_obj_tag(x_294) == 0)
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; size_t x_395; size_t x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; size_t x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; size_t x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; 
x_295 = lean_ctor_get(x_294, 0);
lean_inc(x_295);
x_296 = lean_ctor_get(x_295, 1);
lean_inc(x_296);
x_297 = lean_ctor_get(x_294, 1);
lean_inc(x_297);
lean_dec(x_294);
x_298 = lean_ctor_get(x_295, 0);
lean_inc(x_298);
lean_dec(x_295);
x_299 = lean_ctor_get(x_296, 0);
lean_inc(x_299);
x_300 = lean_ctor_get(x_296, 1);
lean_inc(x_300);
lean_dec(x_296);
x_301 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_297);
x_302 = lean_ctor_get(x_301, 0);
lean_inc(x_302);
x_303 = lean_ctor_get(x_301, 1);
lean_inc(x_303);
lean_dec(x_301);
x_304 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_303);
x_305 = lean_ctor_get(x_304, 1);
lean_inc(x_305);
lean_dec(x_304);
x_306 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_305);
x_307 = lean_ctor_get(x_306, 1);
lean_inc(x_307);
lean_dec(x_306);
x_308 = lean_mk_string("Lean");
x_309 = lean_name_mk_string(x_39, x_308);
x_310 = lean_mk_string("Parser");
x_311 = lean_name_mk_string(x_309, x_310);
x_312 = lean_mk_string("Term");
x_313 = lean_name_mk_string(x_311, x_312);
x_314 = lean_mk_string("app");
lean_inc(x_313);
x_315 = lean_name_mk_string(x_313, x_314);
x_316 = lean_mk_string("explicit");
lean_inc(x_313);
x_317 = lean_name_mk_string(x_313, x_316);
x_318 = lean_mk_string("@");
lean_inc(x_318);
x_319 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_319, 0, x_302);
lean_ctor_set(x_319, 1, x_318);
x_320 = lean_mk_syntax_ident(x_4);
x_321 = lean_unsigned_to_nat(2u);
x_322 = lean_mk_empty_array_with_capacity(x_321);
lean_inc(x_322);
x_323 = lean_array_push(x_322, x_319);
lean_inc(x_320);
x_324 = lean_array_push(x_323, x_320);
lean_inc(x_317);
x_325 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_325, 0, x_317);
lean_ctor_set(x_325, 1, x_324);
x_326 = lean_mk_string("null");
x_327 = lean_name_mk_string(x_39, x_326);
x_328 = l_Array_reverse___rarg(x_298);
lean_inc(x_2);
x_329 = l_Array_append___rarg(x_2, x_328);
lean_dec(x_328);
lean_inc(x_327);
x_330 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_330, 0, x_327);
lean_ctor_set(x_330, 1, x_329);
lean_inc(x_322);
x_331 = lean_array_push(x_322, x_325);
x_332 = lean_array_push(x_331, x_330);
lean_inc(x_315);
x_333 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_333, 0, x_315);
lean_ctor_set(x_333, 1, x_332);
x_334 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_307);
x_335 = lean_ctor_get(x_334, 0);
lean_inc(x_335);
x_336 = lean_ctor_get(x_334, 1);
lean_inc(x_336);
lean_dec(x_334);
x_337 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_336);
x_338 = lean_ctor_get(x_337, 1);
lean_inc(x_338);
lean_dec(x_337);
x_339 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_338);
x_340 = lean_ctor_get(x_339, 1);
lean_inc(x_340);
lean_dec(x_339);
x_341 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_341, 0, x_335);
lean_ctor_set(x_341, 1, x_318);
lean_inc(x_322);
x_342 = lean_array_push(x_322, x_341);
x_343 = lean_array_push(x_342, x_320);
x_344 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_344, 0, x_317);
lean_ctor_set(x_344, 1, x_343);
x_345 = l_Array_reverse___rarg(x_299);
lean_inc(x_2);
x_346 = l_Array_append___rarg(x_2, x_345);
lean_dec(x_345);
lean_inc(x_327);
x_347 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_347, 0, x_327);
lean_ctor_set(x_347, 1, x_346);
lean_inc(x_322);
x_348 = lean_array_push(x_322, x_344);
x_349 = lean_array_push(x_348, x_347);
x_350 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_350, 0, x_315);
lean_ctor_set(x_350, 1, x_349);
lean_inc(x_322);
x_351 = lean_array_push(x_322, x_333);
lean_inc(x_350);
lean_inc(x_351);
x_352 = lean_array_push(x_351, x_350);
lean_inc(x_25);
x_353 = l_Array_append___rarg(x_25, x_352);
lean_dec(x_352);
x_354 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_340);
x_355 = lean_ctor_get(x_354, 0);
lean_inc(x_355);
x_356 = lean_ctor_get(x_354, 1);
lean_inc(x_356);
lean_dec(x_354);
x_357 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_356);
x_358 = lean_ctor_get(x_357, 1);
lean_inc(x_358);
lean_dec(x_357);
x_359 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_358);
x_360 = lean_ctor_get(x_359, 1);
lean_inc(x_360);
lean_dec(x_359);
x_361 = lean_mk_string("hole");
lean_inc(x_313);
x_362 = lean_name_mk_string(x_313, x_361);
x_363 = lean_mk_string("_");
lean_inc(x_363);
x_364 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_364, 0, x_355);
lean_ctor_set(x_364, 1, x_363);
x_365 = lean_mk_empty_array_with_capacity(x_22);
lean_inc(x_365);
x_366 = lean_array_push(x_365, x_364);
lean_inc(x_362);
x_367 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_367, 0, x_362);
lean_ctor_set(x_367, 1, x_366);
x_368 = lean_array_push(x_351, x_367);
lean_inc(x_25);
x_369 = l_Array_append___rarg(x_25, x_368);
lean_dec(x_368);
x_370 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_360);
x_371 = lean_ctor_get(x_370, 0);
lean_inc(x_371);
x_372 = lean_ctor_get(x_370, 1);
lean_inc(x_372);
lean_dec(x_370);
x_373 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_372);
x_374 = lean_ctor_get(x_373, 1);
lean_inc(x_374);
lean_dec(x_373);
x_375 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_374);
x_376 = lean_ctor_get(x_375, 1);
lean_inc(x_376);
lean_dec(x_375);
x_377 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_377, 0, x_371);
lean_ctor_set(x_377, 1, x_363);
x_378 = lean_array_push(x_365, x_377);
x_379 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_379, 0, x_362);
lean_ctor_set(x_379, 1, x_378);
x_380 = lean_array_push(x_322, x_379);
x_381 = lean_array_push(x_380, x_350);
x_382 = l_Array_append___rarg(x_25, x_381);
lean_dec(x_381);
x_383 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_376);
x_384 = lean_ctor_get(x_383, 0);
lean_inc(x_384);
x_385 = lean_ctor_get(x_383, 1);
lean_inc(x_385);
lean_dec(x_383);
x_386 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_385);
x_387 = lean_ctor_get(x_386, 1);
lean_inc(x_387);
lean_dec(x_386);
x_388 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_387);
x_389 = lean_ctor_get(x_388, 1);
lean_inc(x_389);
lean_dec(x_388);
x_390 = lean_mk_string("matchAlt");
x_391 = lean_name_mk_string(x_313, x_390);
x_392 = lean_mk_string("|");
lean_inc(x_392);
lean_inc(x_384);
x_393 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_393, 0, x_384);
lean_ctor_set(x_393, 1, x_392);
x_394 = lean_array_get_size(x_353);
x_395 = lean_usize_of_nat(x_394);
lean_dec(x_394);
x_396 = 0;
x_397 = x_353;
x_398 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_395, x_396, x_397);
x_399 = x_398;
x_400 = lean_box(2);
x_401 = lean_mk_string(",");
x_402 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_402, 0, x_400);
lean_ctor_set(x_402, 1, x_401);
lean_inc(x_402);
x_403 = l_Lean_mkSepArray(x_399, x_402);
lean_dec(x_399);
lean_inc(x_2);
x_404 = l_Array_append___rarg(x_2, x_403);
lean_dec(x_403);
lean_inc(x_327);
x_405 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_405, 0, x_327);
lean_ctor_set(x_405, 1, x_404);
x_406 = lean_mk_string("=>");
lean_inc(x_406);
x_407 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_407, 0, x_384);
lean_ctor_set(x_407, 1, x_406);
x_408 = lean_unsigned_to_nat(4u);
x_409 = lean_mk_empty_array_with_capacity(x_408);
lean_inc(x_409);
x_410 = lean_array_push(x_409, x_393);
x_411 = lean_array_push(x_410, x_405);
x_412 = lean_array_push(x_411, x_407);
x_413 = lean_array_push(x_412, x_300);
lean_inc(x_391);
x_414 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_414, 0, x_391);
lean_ctor_set(x_414, 1, x_413);
x_415 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_389);
x_416 = lean_ctor_get(x_415, 0);
lean_inc(x_416);
x_417 = lean_ctor_get(x_415, 1);
lean_inc(x_417);
lean_dec(x_415);
x_418 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_417);
x_419 = lean_ctor_get(x_418, 0);
lean_inc(x_419);
x_420 = lean_ctor_get(x_418, 1);
lean_inc(x_420);
lean_dec(x_418);
x_421 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_420);
x_422 = lean_ctor_get(x_421, 0);
lean_inc(x_422);
x_423 = lean_ctor_get(x_421, 1);
lean_inc(x_423);
lean_dec(x_421);
lean_inc(x_392);
lean_inc(x_416);
x_424 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_424, 0, x_416);
lean_ctor_set(x_424, 1, x_392);
x_425 = lean_array_get_size(x_369);
x_426 = lean_usize_of_nat(x_425);
lean_dec(x_425);
x_427 = x_369;
x_428 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_426, x_396, x_427);
x_429 = x_428;
lean_inc(x_402);
x_430 = l_Lean_mkSepArray(x_429, x_402);
lean_dec(x_429);
lean_inc(x_2);
x_431 = l_Array_append___rarg(x_2, x_430);
lean_dec(x_430);
lean_inc(x_327);
x_432 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_432, 0, x_327);
lean_ctor_set(x_432, 1, x_431);
lean_inc(x_406);
lean_inc(x_416);
x_433 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_433, 0, x_416);
lean_ctor_set(x_433, 1, x_406);
x_434 = lean_mk_string("Ordering.lt");
x_435 = lean_string_utf8_byte_size(x_434);
x_436 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_436, 0, x_434);
lean_ctor_set(x_436, 1, x_21);
lean_ctor_set(x_436, 2, x_435);
x_437 = lean_mk_string("lt");
lean_inc(x_41);
x_438 = lean_name_mk_string(x_41, x_437);
lean_inc(x_438);
x_439 = l_Lean_addMacroScope(x_422, x_438, x_419);
x_440 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_440, 0, x_438);
lean_ctor_set(x_440, 1, x_45);
x_441 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_441, 0, x_440);
lean_ctor_set(x_441, 1, x_45);
x_442 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_442, 0, x_416);
lean_ctor_set(x_442, 1, x_436);
lean_ctor_set(x_442, 2, x_439);
lean_ctor_set(x_442, 3, x_441);
lean_inc(x_409);
x_443 = lean_array_push(x_409, x_424);
x_444 = lean_array_push(x_443, x_432);
x_445 = lean_array_push(x_444, x_433);
x_446 = lean_array_push(x_445, x_442);
lean_inc(x_391);
x_447 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_447, 0, x_391);
lean_ctor_set(x_447, 1, x_446);
x_448 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_423);
x_449 = lean_ctor_get(x_448, 0);
lean_inc(x_449);
x_450 = lean_ctor_get(x_448, 1);
lean_inc(x_450);
lean_dec(x_448);
x_451 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_450);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_452 = lean_ctor_get(x_451, 0);
lean_inc(x_452);
x_453 = lean_ctor_get(x_451, 1);
lean_inc(x_453);
lean_dec(x_451);
x_454 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_453);
lean_dec(x_12);
x_455 = lean_ctor_get(x_454, 0);
lean_inc(x_455);
x_456 = lean_ctor_get(x_454, 1);
lean_inc(x_456);
if (lean_is_exclusive(x_454)) {
 lean_ctor_release(x_454, 0);
 lean_ctor_release(x_454, 1);
 x_457 = x_454;
} else {
 lean_dec_ref(x_454);
 x_457 = lean_box(0);
}
lean_inc(x_449);
x_458 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_458, 0, x_449);
lean_ctor_set(x_458, 1, x_392);
x_459 = lean_array_get_size(x_382);
x_460 = lean_usize_of_nat(x_459);
lean_dec(x_459);
x_461 = x_382;
x_462 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_460, x_396, x_461);
x_463 = x_462;
x_464 = l_Lean_mkSepArray(x_463, x_402);
lean_dec(x_463);
x_465 = l_Array_append___rarg(x_2, x_464);
lean_dec(x_464);
x_466 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_466, 0, x_327);
lean_ctor_set(x_466, 1, x_465);
lean_inc(x_449);
x_467 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_467, 0, x_449);
lean_ctor_set(x_467, 1, x_406);
x_468 = lean_mk_string("Ordering.gt");
x_469 = lean_string_utf8_byte_size(x_468);
x_470 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_470, 0, x_468);
lean_ctor_set(x_470, 1, x_21);
lean_ctor_set(x_470, 2, x_469);
x_471 = lean_mk_string("gt");
x_472 = lean_name_mk_string(x_41, x_471);
lean_inc(x_472);
x_473 = l_Lean_addMacroScope(x_455, x_472, x_452);
x_474 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_474, 0, x_472);
lean_ctor_set(x_474, 1, x_45);
x_475 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_475, 0, x_474);
lean_ctor_set(x_475, 1, x_45);
x_476 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_476, 0, x_449);
lean_ctor_set(x_476, 1, x_470);
lean_ctor_set(x_476, 2, x_473);
lean_ctor_set(x_476, 3, x_475);
x_477 = lean_array_push(x_409, x_458);
x_478 = lean_array_push(x_477, x_466);
x_479 = lean_array_push(x_478, x_467);
x_480 = lean_array_push(x_479, x_476);
x_481 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_481, 0, x_391);
lean_ctor_set(x_481, 1, x_480);
x_482 = lean_unsigned_to_nat(3u);
x_483 = lean_mk_empty_array_with_capacity(x_482);
x_484 = lean_array_push(x_483, x_414);
x_485 = lean_array_push(x_484, x_447);
x_486 = lean_array_push(x_485, x_481);
if (lean_is_scalar(x_457)) {
 x_487 = lean_alloc_ctor(0, 2, 0);
} else {
 x_487 = x_457;
}
lean_ctor_set(x_487, 0, x_486);
lean_ctor_set(x_487, 1, x_456);
return x_487;
}
else
{
lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; 
lean_dec(x_41);
lean_dec(x_25);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
x_488 = lean_ctor_get(x_294, 0);
lean_inc(x_488);
x_489 = lean_ctor_get(x_294, 1);
lean_inc(x_489);
if (lean_is_exclusive(x_294)) {
 lean_ctor_release(x_294, 0);
 lean_ctor_release(x_294, 1);
 x_490 = x_294;
} else {
 lean_dec_ref(x_294);
 x_490 = lean_box(0);
}
if (lean_is_scalar(x_490)) {
 x_491 = lean_alloc_ctor(1, 2, 0);
} else {
 x_491 = x_490;
}
lean_ctor_set(x_491, 0, x_488);
lean_ctor_set(x_491, 1, x_489);
return x_491;
}
}
}
else
{
uint8_t x_492; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_492 = !lean_is_exclusive(x_16);
if (x_492 == 0)
{
return x_16;
}
else
{
lean_object* x_493; lean_object* x_494; lean_object* x_495; 
x_493 = lean_ctor_get(x_16, 0);
x_494 = lean_ctor_get(x_16, 1);
lean_inc(x_494);
lean_inc(x_493);
lean_dec(x_16);
x_495 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_495, 0, x_493);
lean_ctor_set(x_495, 1, x_494);
return x_495;
}
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_12; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_dec(x_3);
lean_inc(x_5);
lean_inc(x_13);
x_15 = l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__1(x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 2);
lean_inc(x_19);
lean_dec(x_18);
lean_inc(x_2);
lean_inc(x_1);
x_20 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__6___lambda__1___boxed), 13, 4);
lean_closure_set(x_20, 0, x_1);
lean_closure_set(x_20, 1, x_2);
lean_closure_set(x_20, 2, x_16);
lean_closure_set(x_20, 3, x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_21 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(x_19, x_20, x_5, x_6, x_7, x_8, x_9, x_10, x_17);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Array_append___rarg(x_4, x_22);
lean_dec(x_22);
x_3 = x_14;
x_4 = x_24;
x_11 = x_23;
goto _start;
}
else
{
uint8_t x_26; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_21);
if (x_26 == 0)
{
return x_21;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_21, 0);
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_21);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_15);
if (x_30 == 0)
{
return x_15;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_15, 0);
x_32 = lean_ctor_get(x_15, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_15);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch_mkAlts(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_mk_empty_array_with_capacity(x_9);
x_11 = lean_ctor_get(x_1, 4);
lean_inc(x_11);
lean_inc(x_10);
x_12 = l_List_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__6(x_1, x_10, x_11, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_array_pop(x_14);
x_16 = lean_array_pop(x_15);
lean_ctor_set(x_12, 0, x_16);
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_array_pop(x_17);
x_20 = lean_array_pop(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_12);
if (x_22 == 0)
{
return x_12;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_12, 0);
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__5___boxed(lean_object** _args) {
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
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
_start:
{
lean_object* x_22; 
x_22 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_2);
return x_22;
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__6___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_List_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMatch_mkAlts___spec__6___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
return x_14;
}
}
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
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
x_14 = l_Lean_Elab_Deriving_Ord_mkMatch_mkAlts(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
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
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Ord_mkMatch___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Deriving_Ord_mkMatch___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Elab_Deriving_Ord_mkMatch___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Deriving_Ord_mkMatch(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_Ord_mkAuxFunction___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; uint8_t x_227; 
x_14 = lean_ctor_get(x_1, 0);
x_227 = lean_ctor_get_uint8(x_3, sizeof(void*)*2);
if (x_227 == 0)
{
uint8_t x_228; 
x_228 = lean_ctor_get_uint8(x_4, sizeof(void*)*5);
if (x_228 == 0)
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; uint8_t x_236; 
x_229 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_13);
x_230 = lean_ctor_get(x_229, 0);
lean_inc(x_230);
x_231 = lean_ctor_get(x_229, 1);
lean_inc(x_231);
lean_dec(x_229);
x_232 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_231);
x_233 = lean_ctor_get(x_232, 0);
lean_inc(x_233);
x_234 = lean_ctor_get(x_232, 1);
lean_inc(x_234);
lean_dec(x_232);
x_235 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_234);
x_236 = !lean_is_exclusive(x_235);
if (x_236 == 0)
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; 
x_237 = lean_ctor_get(x_235, 0);
x_238 = lean_box(0);
x_239 = lean_mk_string("Lean");
x_240 = lean_name_mk_string(x_238, x_239);
x_241 = lean_mk_string("Parser");
x_242 = lean_name_mk_string(x_240, x_241);
x_243 = lean_mk_string("Command");
lean_inc(x_242);
x_244 = lean_name_mk_string(x_242, x_243);
x_245 = lean_mk_string("declaration");
lean_inc(x_244);
x_246 = lean_name_mk_string(x_244, x_245);
x_247 = lean_mk_string("declModifiers");
lean_inc(x_244);
x_248 = lean_name_mk_string(x_244, x_247);
x_249 = lean_mk_string("null");
x_250 = lean_name_mk_string(x_238, x_249);
x_251 = lean_unsigned_to_nat(0u);
x_252 = lean_mk_empty_array_with_capacity(x_251);
lean_inc(x_252);
lean_inc(x_250);
x_253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_253, 0, x_250);
lean_ctor_set(x_253, 1, x_252);
x_254 = lean_mk_string("private");
lean_inc(x_254);
lean_inc(x_244);
x_255 = lean_name_mk_string(x_244, x_254);
lean_inc(x_230);
x_256 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_256, 0, x_230);
lean_ctor_set(x_256, 1, x_254);
x_257 = lean_unsigned_to_nat(1u);
x_258 = lean_mk_empty_array_with_capacity(x_257);
lean_inc(x_258);
x_259 = lean_array_push(x_258, x_256);
x_260 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_260, 0, x_255);
lean_ctor_set(x_260, 1, x_259);
lean_inc(x_258);
x_261 = lean_array_push(x_258, x_260);
lean_inc(x_250);
x_262 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_262, 0, x_250);
lean_ctor_set(x_262, 1, x_261);
x_263 = lean_unsigned_to_nat(6u);
x_264 = lean_mk_empty_array_with_capacity(x_263);
lean_inc(x_253);
x_265 = lean_array_push(x_264, x_253);
lean_inc(x_253);
x_266 = lean_array_push(x_265, x_253);
x_267 = lean_array_push(x_266, x_262);
lean_inc(x_253);
x_268 = lean_array_push(x_267, x_253);
lean_inc(x_253);
x_269 = lean_array_push(x_268, x_253);
lean_inc(x_253);
x_270 = lean_array_push(x_269, x_253);
x_271 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_271, 0, x_248);
lean_ctor_set(x_271, 1, x_270);
x_272 = lean_mk_string("def");
lean_inc(x_272);
lean_inc(x_244);
x_273 = lean_name_mk_string(x_244, x_272);
lean_inc(x_230);
x_274 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_274, 0, x_230);
lean_ctor_set(x_274, 1, x_272);
x_275 = lean_mk_string("declId");
lean_inc(x_244);
x_276 = lean_name_mk_string(x_244, x_275);
x_277 = lean_mk_syntax_ident(x_2);
x_278 = lean_unsigned_to_nat(2u);
x_279 = lean_mk_empty_array_with_capacity(x_278);
lean_inc(x_279);
x_280 = lean_array_push(x_279, x_277);
lean_inc(x_253);
x_281 = lean_array_push(x_280, x_253);
x_282 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_282, 0, x_276);
lean_ctor_set(x_282, 1, x_281);
x_283 = lean_mk_string("optDeclSig");
lean_inc(x_244);
x_284 = lean_name_mk_string(x_244, x_283);
x_285 = l_Array_append___rarg(x_252, x_14);
lean_inc(x_250);
x_286 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_286, 0, x_250);
lean_ctor_set(x_286, 1, x_285);
x_287 = lean_mk_string("Term");
x_288 = lean_name_mk_string(x_242, x_287);
x_289 = lean_mk_string("typeSpec");
x_290 = lean_name_mk_string(x_288, x_289);
x_291 = lean_mk_string(":");
lean_inc(x_230);
x_292 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_292, 0, x_230);
lean_ctor_set(x_292, 1, x_291);
x_293 = lean_mk_string("Ordering");
x_294 = lean_string_utf8_byte_size(x_293);
lean_inc(x_293);
x_295 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_295, 0, x_293);
lean_ctor_set(x_295, 1, x_251);
lean_ctor_set(x_295, 2, x_294);
x_296 = lean_name_mk_string(x_238, x_293);
lean_inc(x_296);
x_297 = l_Lean_addMacroScope(x_237, x_296, x_233);
x_298 = lean_box(0);
x_299 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_299, 0, x_296);
lean_ctor_set(x_299, 1, x_298);
x_300 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_300, 0, x_299);
lean_ctor_set(x_300, 1, x_298);
lean_inc(x_230);
x_301 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_301, 0, x_230);
lean_ctor_set(x_301, 1, x_295);
lean_ctor_set(x_301, 2, x_297);
lean_ctor_set(x_301, 3, x_300);
lean_inc(x_279);
x_302 = lean_array_push(x_279, x_292);
x_303 = lean_array_push(x_302, x_301);
x_304 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_304, 0, x_290);
lean_ctor_set(x_304, 1, x_303);
x_305 = lean_array_push(x_258, x_304);
x_306 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_306, 0, x_250);
lean_ctor_set(x_306, 1, x_305);
lean_inc(x_279);
x_307 = lean_array_push(x_279, x_286);
x_308 = lean_array_push(x_307, x_306);
x_309 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_309, 0, x_284);
lean_ctor_set(x_309, 1, x_308);
x_310 = lean_mk_string("declValSimple");
x_311 = lean_name_mk_string(x_244, x_310);
x_312 = lean_mk_string(":=");
x_313 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_313, 0, x_230);
lean_ctor_set(x_313, 1, x_312);
x_314 = lean_unsigned_to_nat(3u);
x_315 = lean_mk_empty_array_with_capacity(x_314);
x_316 = lean_array_push(x_315, x_313);
x_317 = lean_array_push(x_316, x_5);
x_318 = lean_array_push(x_317, x_253);
x_319 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_319, 0, x_311);
lean_ctor_set(x_319, 1, x_318);
x_320 = lean_unsigned_to_nat(4u);
x_321 = lean_mk_empty_array_with_capacity(x_320);
x_322 = lean_array_push(x_321, x_274);
x_323 = lean_array_push(x_322, x_282);
x_324 = lean_array_push(x_323, x_309);
x_325 = lean_array_push(x_324, x_319);
x_326 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_326, 0, x_273);
lean_ctor_set(x_326, 1, x_325);
x_327 = lean_array_push(x_279, x_271);
x_328 = lean_array_push(x_327, x_326);
x_329 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_329, 0, x_246);
lean_ctor_set(x_329, 1, x_328);
lean_ctor_set(x_235, 0, x_329);
return x_235;
}
else
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; 
x_330 = lean_ctor_get(x_235, 0);
x_331 = lean_ctor_get(x_235, 1);
lean_inc(x_331);
lean_inc(x_330);
lean_dec(x_235);
x_332 = lean_box(0);
x_333 = lean_mk_string("Lean");
x_334 = lean_name_mk_string(x_332, x_333);
x_335 = lean_mk_string("Parser");
x_336 = lean_name_mk_string(x_334, x_335);
x_337 = lean_mk_string("Command");
lean_inc(x_336);
x_338 = lean_name_mk_string(x_336, x_337);
x_339 = lean_mk_string("declaration");
lean_inc(x_338);
x_340 = lean_name_mk_string(x_338, x_339);
x_341 = lean_mk_string("declModifiers");
lean_inc(x_338);
x_342 = lean_name_mk_string(x_338, x_341);
x_343 = lean_mk_string("null");
x_344 = lean_name_mk_string(x_332, x_343);
x_345 = lean_unsigned_to_nat(0u);
x_346 = lean_mk_empty_array_with_capacity(x_345);
lean_inc(x_346);
lean_inc(x_344);
x_347 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_347, 0, x_344);
lean_ctor_set(x_347, 1, x_346);
x_348 = lean_mk_string("private");
lean_inc(x_348);
lean_inc(x_338);
x_349 = lean_name_mk_string(x_338, x_348);
lean_inc(x_230);
x_350 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_350, 0, x_230);
lean_ctor_set(x_350, 1, x_348);
x_351 = lean_unsigned_to_nat(1u);
x_352 = lean_mk_empty_array_with_capacity(x_351);
lean_inc(x_352);
x_353 = lean_array_push(x_352, x_350);
x_354 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_354, 0, x_349);
lean_ctor_set(x_354, 1, x_353);
lean_inc(x_352);
x_355 = lean_array_push(x_352, x_354);
lean_inc(x_344);
x_356 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_356, 0, x_344);
lean_ctor_set(x_356, 1, x_355);
x_357 = lean_unsigned_to_nat(6u);
x_358 = lean_mk_empty_array_with_capacity(x_357);
lean_inc(x_347);
x_359 = lean_array_push(x_358, x_347);
lean_inc(x_347);
x_360 = lean_array_push(x_359, x_347);
x_361 = lean_array_push(x_360, x_356);
lean_inc(x_347);
x_362 = lean_array_push(x_361, x_347);
lean_inc(x_347);
x_363 = lean_array_push(x_362, x_347);
lean_inc(x_347);
x_364 = lean_array_push(x_363, x_347);
x_365 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_365, 0, x_342);
lean_ctor_set(x_365, 1, x_364);
x_366 = lean_mk_string("def");
lean_inc(x_366);
lean_inc(x_338);
x_367 = lean_name_mk_string(x_338, x_366);
lean_inc(x_230);
x_368 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_368, 0, x_230);
lean_ctor_set(x_368, 1, x_366);
x_369 = lean_mk_string("declId");
lean_inc(x_338);
x_370 = lean_name_mk_string(x_338, x_369);
x_371 = lean_mk_syntax_ident(x_2);
x_372 = lean_unsigned_to_nat(2u);
x_373 = lean_mk_empty_array_with_capacity(x_372);
lean_inc(x_373);
x_374 = lean_array_push(x_373, x_371);
lean_inc(x_347);
x_375 = lean_array_push(x_374, x_347);
x_376 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_376, 0, x_370);
lean_ctor_set(x_376, 1, x_375);
x_377 = lean_mk_string("optDeclSig");
lean_inc(x_338);
x_378 = lean_name_mk_string(x_338, x_377);
x_379 = l_Array_append___rarg(x_346, x_14);
lean_inc(x_344);
x_380 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_380, 0, x_344);
lean_ctor_set(x_380, 1, x_379);
x_381 = lean_mk_string("Term");
x_382 = lean_name_mk_string(x_336, x_381);
x_383 = lean_mk_string("typeSpec");
x_384 = lean_name_mk_string(x_382, x_383);
x_385 = lean_mk_string(":");
lean_inc(x_230);
x_386 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_386, 0, x_230);
lean_ctor_set(x_386, 1, x_385);
x_387 = lean_mk_string("Ordering");
x_388 = lean_string_utf8_byte_size(x_387);
lean_inc(x_387);
x_389 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_389, 0, x_387);
lean_ctor_set(x_389, 1, x_345);
lean_ctor_set(x_389, 2, x_388);
x_390 = lean_name_mk_string(x_332, x_387);
lean_inc(x_390);
x_391 = l_Lean_addMacroScope(x_330, x_390, x_233);
x_392 = lean_box(0);
x_393 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_393, 0, x_390);
lean_ctor_set(x_393, 1, x_392);
x_394 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_394, 0, x_393);
lean_ctor_set(x_394, 1, x_392);
lean_inc(x_230);
x_395 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_395, 0, x_230);
lean_ctor_set(x_395, 1, x_389);
lean_ctor_set(x_395, 2, x_391);
lean_ctor_set(x_395, 3, x_394);
lean_inc(x_373);
x_396 = lean_array_push(x_373, x_386);
x_397 = lean_array_push(x_396, x_395);
x_398 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_398, 0, x_384);
lean_ctor_set(x_398, 1, x_397);
x_399 = lean_array_push(x_352, x_398);
x_400 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_400, 0, x_344);
lean_ctor_set(x_400, 1, x_399);
lean_inc(x_373);
x_401 = lean_array_push(x_373, x_380);
x_402 = lean_array_push(x_401, x_400);
x_403 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_403, 0, x_378);
lean_ctor_set(x_403, 1, x_402);
x_404 = lean_mk_string("declValSimple");
x_405 = lean_name_mk_string(x_338, x_404);
x_406 = lean_mk_string(":=");
x_407 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_407, 0, x_230);
lean_ctor_set(x_407, 1, x_406);
x_408 = lean_unsigned_to_nat(3u);
x_409 = lean_mk_empty_array_with_capacity(x_408);
x_410 = lean_array_push(x_409, x_407);
x_411 = lean_array_push(x_410, x_5);
x_412 = lean_array_push(x_411, x_347);
x_413 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_413, 0, x_405);
lean_ctor_set(x_413, 1, x_412);
x_414 = lean_unsigned_to_nat(4u);
x_415 = lean_mk_empty_array_with_capacity(x_414);
x_416 = lean_array_push(x_415, x_368);
x_417 = lean_array_push(x_416, x_376);
x_418 = lean_array_push(x_417, x_403);
x_419 = lean_array_push(x_418, x_413);
x_420 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_420, 0, x_367);
lean_ctor_set(x_420, 1, x_419);
x_421 = lean_array_push(x_373, x_365);
x_422 = lean_array_push(x_421, x_420);
x_423 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_423, 0, x_340);
lean_ctor_set(x_423, 1, x_422);
x_424 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_424, 0, x_423);
lean_ctor_set(x_424, 1, x_331);
return x_424;
}
}
else
{
lean_object* x_425; 
x_425 = lean_box(0);
x_15 = x_425;
goto block_226;
}
}
else
{
lean_object* x_426; 
x_426 = lean_box(0);
x_15 = x_426;
goto block_226;
}
block_226:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_15);
x_16 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_11, x_12, x_13);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_21);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_box(0);
x_26 = lean_mk_string("Lean");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("Parser");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Command");
lean_inc(x_29);
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("declaration");
lean_inc(x_31);
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("declModifiers");
lean_inc(x_31);
x_35 = lean_name_mk_string(x_31, x_34);
x_36 = lean_mk_string("null");
x_37 = lean_name_mk_string(x_25, x_36);
x_38 = lean_unsigned_to_nat(0u);
x_39 = lean_mk_empty_array_with_capacity(x_38);
lean_inc(x_39);
lean_inc(x_37);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_mk_string("private");
lean_inc(x_41);
lean_inc(x_31);
x_42 = lean_name_mk_string(x_31, x_41);
lean_inc(x_17);
x_43 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_43, 0, x_17);
lean_ctor_set(x_43, 1, x_41);
x_44 = lean_unsigned_to_nat(1u);
x_45 = lean_mk_empty_array_with_capacity(x_44);
lean_inc(x_45);
x_46 = lean_array_push(x_45, x_43);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_42);
lean_ctor_set(x_47, 1, x_46);
lean_inc(x_45);
x_48 = lean_array_push(x_45, x_47);
lean_inc(x_37);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_37);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_mk_string("partial");
lean_inc(x_50);
lean_inc(x_31);
x_51 = lean_name_mk_string(x_31, x_50);
lean_inc(x_17);
x_52 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_52, 0, x_17);
lean_ctor_set(x_52, 1, x_50);
lean_inc(x_45);
x_53 = lean_array_push(x_45, x_52);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_53);
lean_inc(x_45);
x_55 = lean_array_push(x_45, x_54);
lean_inc(x_37);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_37);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_unsigned_to_nat(6u);
x_58 = lean_mk_empty_array_with_capacity(x_57);
lean_inc(x_40);
x_59 = lean_array_push(x_58, x_40);
lean_inc(x_40);
x_60 = lean_array_push(x_59, x_40);
x_61 = lean_array_push(x_60, x_49);
lean_inc(x_40);
x_62 = lean_array_push(x_61, x_40);
lean_inc(x_40);
x_63 = lean_array_push(x_62, x_40);
x_64 = lean_array_push(x_63, x_56);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_35);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_mk_string("def");
lean_inc(x_66);
lean_inc(x_31);
x_67 = lean_name_mk_string(x_31, x_66);
lean_inc(x_17);
x_68 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_68, 0, x_17);
lean_ctor_set(x_68, 1, x_66);
x_69 = lean_mk_string("declId");
lean_inc(x_31);
x_70 = lean_name_mk_string(x_31, x_69);
x_71 = lean_mk_syntax_ident(x_2);
x_72 = lean_unsigned_to_nat(2u);
x_73 = lean_mk_empty_array_with_capacity(x_72);
lean_inc(x_73);
x_74 = lean_array_push(x_73, x_71);
lean_inc(x_40);
x_75 = lean_array_push(x_74, x_40);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_70);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_mk_string("optDeclSig");
lean_inc(x_31);
x_78 = lean_name_mk_string(x_31, x_77);
x_79 = l_Array_append___rarg(x_39, x_14);
lean_inc(x_37);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_37);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_mk_string("Term");
x_82 = lean_name_mk_string(x_29, x_81);
x_83 = lean_mk_string("typeSpec");
x_84 = lean_name_mk_string(x_82, x_83);
x_85 = lean_mk_string(":");
lean_inc(x_17);
x_86 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_86, 0, x_17);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_mk_string("Ordering");
x_88 = lean_string_utf8_byte_size(x_87);
lean_inc(x_87);
x_89 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_38);
lean_ctor_set(x_89, 2, x_88);
x_90 = lean_name_mk_string(x_25, x_87);
lean_inc(x_90);
x_91 = l_Lean_addMacroScope(x_24, x_90, x_20);
x_92 = lean_box(0);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_92);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_92);
lean_inc(x_17);
x_95 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_95, 0, x_17);
lean_ctor_set(x_95, 1, x_89);
lean_ctor_set(x_95, 2, x_91);
lean_ctor_set(x_95, 3, x_94);
lean_inc(x_73);
x_96 = lean_array_push(x_73, x_86);
x_97 = lean_array_push(x_96, x_95);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_84);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_array_push(x_45, x_98);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_37);
lean_ctor_set(x_100, 1, x_99);
lean_inc(x_73);
x_101 = lean_array_push(x_73, x_80);
x_102 = lean_array_push(x_101, x_100);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_78);
lean_ctor_set(x_103, 1, x_102);
x_104 = lean_mk_string("declValSimple");
x_105 = lean_name_mk_string(x_31, x_104);
x_106 = lean_mk_string(":=");
x_107 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_107, 0, x_17);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_unsigned_to_nat(3u);
x_109 = lean_mk_empty_array_with_capacity(x_108);
x_110 = lean_array_push(x_109, x_107);
x_111 = lean_array_push(x_110, x_5);
x_112 = lean_array_push(x_111, x_40);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_105);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_unsigned_to_nat(4u);
x_115 = lean_mk_empty_array_with_capacity(x_114);
x_116 = lean_array_push(x_115, x_68);
x_117 = lean_array_push(x_116, x_76);
x_118 = lean_array_push(x_117, x_103);
x_119 = lean_array_push(x_118, x_113);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_67);
lean_ctor_set(x_120, 1, x_119);
x_121 = lean_array_push(x_73, x_65);
x_122 = lean_array_push(x_121, x_120);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_33);
lean_ctor_set(x_123, 1, x_122);
lean_ctor_set(x_22, 0, x_123);
return x_22;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_124 = lean_ctor_get(x_22, 0);
x_125 = lean_ctor_get(x_22, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_22);
x_126 = lean_box(0);
x_127 = lean_mk_string("Lean");
x_128 = lean_name_mk_string(x_126, x_127);
x_129 = lean_mk_string("Parser");
x_130 = lean_name_mk_string(x_128, x_129);
x_131 = lean_mk_string("Command");
lean_inc(x_130);
x_132 = lean_name_mk_string(x_130, x_131);
x_133 = lean_mk_string("declaration");
lean_inc(x_132);
x_134 = lean_name_mk_string(x_132, x_133);
x_135 = lean_mk_string("declModifiers");
lean_inc(x_132);
x_136 = lean_name_mk_string(x_132, x_135);
x_137 = lean_mk_string("null");
x_138 = lean_name_mk_string(x_126, x_137);
x_139 = lean_unsigned_to_nat(0u);
x_140 = lean_mk_empty_array_with_capacity(x_139);
lean_inc(x_140);
lean_inc(x_138);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_138);
lean_ctor_set(x_141, 1, x_140);
x_142 = lean_mk_string("private");
lean_inc(x_142);
lean_inc(x_132);
x_143 = lean_name_mk_string(x_132, x_142);
lean_inc(x_17);
x_144 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_144, 0, x_17);
lean_ctor_set(x_144, 1, x_142);
x_145 = lean_unsigned_to_nat(1u);
x_146 = lean_mk_empty_array_with_capacity(x_145);
lean_inc(x_146);
x_147 = lean_array_push(x_146, x_144);
x_148 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_148, 0, x_143);
lean_ctor_set(x_148, 1, x_147);
lean_inc(x_146);
x_149 = lean_array_push(x_146, x_148);
lean_inc(x_138);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_138);
lean_ctor_set(x_150, 1, x_149);
x_151 = lean_mk_string("partial");
lean_inc(x_151);
lean_inc(x_132);
x_152 = lean_name_mk_string(x_132, x_151);
lean_inc(x_17);
x_153 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_153, 0, x_17);
lean_ctor_set(x_153, 1, x_151);
lean_inc(x_146);
x_154 = lean_array_push(x_146, x_153);
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_152);
lean_ctor_set(x_155, 1, x_154);
lean_inc(x_146);
x_156 = lean_array_push(x_146, x_155);
lean_inc(x_138);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_138);
lean_ctor_set(x_157, 1, x_156);
x_158 = lean_unsigned_to_nat(6u);
x_159 = lean_mk_empty_array_with_capacity(x_158);
lean_inc(x_141);
x_160 = lean_array_push(x_159, x_141);
lean_inc(x_141);
x_161 = lean_array_push(x_160, x_141);
x_162 = lean_array_push(x_161, x_150);
lean_inc(x_141);
x_163 = lean_array_push(x_162, x_141);
lean_inc(x_141);
x_164 = lean_array_push(x_163, x_141);
x_165 = lean_array_push(x_164, x_157);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_136);
lean_ctor_set(x_166, 1, x_165);
x_167 = lean_mk_string("def");
lean_inc(x_167);
lean_inc(x_132);
x_168 = lean_name_mk_string(x_132, x_167);
lean_inc(x_17);
x_169 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_169, 0, x_17);
lean_ctor_set(x_169, 1, x_167);
x_170 = lean_mk_string("declId");
lean_inc(x_132);
x_171 = lean_name_mk_string(x_132, x_170);
x_172 = lean_mk_syntax_ident(x_2);
x_173 = lean_unsigned_to_nat(2u);
x_174 = lean_mk_empty_array_with_capacity(x_173);
lean_inc(x_174);
x_175 = lean_array_push(x_174, x_172);
lean_inc(x_141);
x_176 = lean_array_push(x_175, x_141);
x_177 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_177, 0, x_171);
lean_ctor_set(x_177, 1, x_176);
x_178 = lean_mk_string("optDeclSig");
lean_inc(x_132);
x_179 = lean_name_mk_string(x_132, x_178);
x_180 = l_Array_append___rarg(x_140, x_14);
lean_inc(x_138);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_138);
lean_ctor_set(x_181, 1, x_180);
x_182 = lean_mk_string("Term");
x_183 = lean_name_mk_string(x_130, x_182);
x_184 = lean_mk_string("typeSpec");
x_185 = lean_name_mk_string(x_183, x_184);
x_186 = lean_mk_string(":");
lean_inc(x_17);
x_187 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_187, 0, x_17);
lean_ctor_set(x_187, 1, x_186);
x_188 = lean_mk_string("Ordering");
x_189 = lean_string_utf8_byte_size(x_188);
lean_inc(x_188);
x_190 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_190, 0, x_188);
lean_ctor_set(x_190, 1, x_139);
lean_ctor_set(x_190, 2, x_189);
x_191 = lean_name_mk_string(x_126, x_188);
lean_inc(x_191);
x_192 = l_Lean_addMacroScope(x_124, x_191, x_20);
x_193 = lean_box(0);
x_194 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_194, 0, x_191);
lean_ctor_set(x_194, 1, x_193);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_194);
lean_ctor_set(x_195, 1, x_193);
lean_inc(x_17);
x_196 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_196, 0, x_17);
lean_ctor_set(x_196, 1, x_190);
lean_ctor_set(x_196, 2, x_192);
lean_ctor_set(x_196, 3, x_195);
lean_inc(x_174);
x_197 = lean_array_push(x_174, x_187);
x_198 = lean_array_push(x_197, x_196);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_185);
lean_ctor_set(x_199, 1, x_198);
x_200 = lean_array_push(x_146, x_199);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_138);
lean_ctor_set(x_201, 1, x_200);
lean_inc(x_174);
x_202 = lean_array_push(x_174, x_181);
x_203 = lean_array_push(x_202, x_201);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_179);
lean_ctor_set(x_204, 1, x_203);
x_205 = lean_mk_string("declValSimple");
x_206 = lean_name_mk_string(x_132, x_205);
x_207 = lean_mk_string(":=");
x_208 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_208, 0, x_17);
lean_ctor_set(x_208, 1, x_207);
x_209 = lean_unsigned_to_nat(3u);
x_210 = lean_mk_empty_array_with_capacity(x_209);
x_211 = lean_array_push(x_210, x_208);
x_212 = lean_array_push(x_211, x_5);
x_213 = lean_array_push(x_212, x_141);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_206);
lean_ctor_set(x_214, 1, x_213);
x_215 = lean_unsigned_to_nat(4u);
x_216 = lean_mk_empty_array_with_capacity(x_215);
x_217 = lean_array_push(x_216, x_169);
x_218 = lean_array_push(x_217, x_177);
x_219 = lean_array_push(x_218, x_204);
x_220 = lean_array_push(x_219, x_214);
x_221 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_221, 0, x_168);
lean_ctor_set(x_221, 1, x_220);
x_222 = lean_array_push(x_174, x_166);
x_223 = lean_array_push(x_222, x_221);
x_224 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_224, 0, x_134);
lean_ctor_set(x_224, 1, x_223);
x_225 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_225, 0, x_224);
lean_ctor_set(x_225, 1, x_125);
return x_225;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_Ord_mkAuxFunction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
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
x_16 = l_Lean_Elab_Deriving_Ord_mkOrdHeader___rarg(x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
lean_inc(x_15);
lean_inc(x_17);
x_19 = l_Lean_Elab_Deriving_Ord_mkMatch___rarg(x_17, x_15, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = lean_ctor_get_uint8(x_15, sizeof(void*)*5);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
x_24 = lean_box(0);
x_25 = l_Lean_Elab_Deriving_Ord_mkAuxFunction___lambda__1(x_17, x_12, x_1, x_15, x_22, x_24, x_3, x_4, x_5, x_6, x_7, x_8, x_23);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_15);
lean_dec(x_17);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_19, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_19, 1);
lean_inc(x_27);
lean_dec(x_19);
x_28 = lean_box(0);
x_29 = lean_mk_string("Ord");
x_30 = lean_name_mk_string(x_28, x_29);
x_31 = lean_ctor_get(x_17, 1);
lean_inc(x_31);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_32 = l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(x_1, x_30, x_31, x_3, x_4, x_5, x_6, x_7, x_8, x_27);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Lean_Elab_Deriving_mkLet(x_33, x_26, x_3, x_4, x_5, x_6, x_7, x_8, x_34);
lean_dec(x_33);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_box(0);
x_39 = l_Lean_Elab_Deriving_Ord_mkAuxFunction___lambda__1(x_17, x_12, x_1, x_15, x_36, x_38, x_3, x_4, x_5, x_6, x_7, x_8, x_37);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_15);
lean_dec(x_17);
return x_39;
}
else
{
uint8_t x_40; 
lean_dec(x_26);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_40 = !lean_is_exclusive(x_32);
if (x_40 == 0)
{
return x_32;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_32, 0);
x_42 = lean_ctor_get(x_32, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_32);
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
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_44 = lean_ctor_get(x_19, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_19, 1);
lean_inc(x_45);
lean_dec(x_19);
x_46 = lean_box(0);
x_47 = lean_mk_string("Ord");
x_48 = lean_name_mk_string(x_46, x_47);
x_49 = lean_ctor_get(x_17, 1);
lean_inc(x_49);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_50 = l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(x_1, x_48, x_49, x_3, x_4, x_5, x_6, x_7, x_8, x_45);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Lean_Elab_Deriving_mkLet(x_51, x_44, x_3, x_4, x_5, x_6, x_7, x_8, x_52);
lean_dec(x_51);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_box(0);
x_57 = l_Lean_Elab_Deriving_Ord_mkAuxFunction___lambda__1(x_17, x_12, x_1, x_15, x_54, x_56, x_3, x_4, x_5, x_6, x_7, x_8, x_55);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_15);
lean_dec(x_17);
return x_57;
}
else
{
uint8_t x_58; 
lean_dec(x_44);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_58 = !lean_is_exclusive(x_50);
if (x_58 == 0)
{
return x_50;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_50, 0);
x_60 = lean_ctor_get(x_50, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_50);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_62 = !lean_is_exclusive(x_19);
if (x_62 == 0)
{
return x_19;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_19, 0);
x_64 = lean_ctor_get(x_19, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_19);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_66 = !lean_is_exclusive(x_16);
if (x_66 == 0)
{
return x_16;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_16, 0);
x_68 = lean_ctor_get(x_16, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_16);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_Ord_mkAuxFunction___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_Elab_Deriving_Ord_mkAuxFunction___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_Deriving_Ord_mkAuxFunction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Deriving_Ord_mkAuxFunction(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMutualBlock___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
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
x_19 = l_Lean_Elab_Deriving_Ord_mkAuxFunction(x_1, x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
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
lean_object* l_Lean_Elab_Deriving_Ord_mkMutualBlock(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_inc(x_10);
x_15 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMutualBlock___spec__1(x_1, x_14, x_12, x_9, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
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
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_22);
lean_dec(x_7);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
x_26 = lean_box(0);
x_27 = lean_mk_string("Lean");
x_28 = lean_name_mk_string(x_26, x_27);
x_29 = lean_mk_string("Parser");
x_30 = lean_name_mk_string(x_28, x_29);
x_31 = lean_mk_string("Command");
x_32 = lean_name_mk_string(x_30, x_31);
x_33 = lean_mk_string("mutual");
lean_inc(x_33);
x_34 = lean_name_mk_string(x_32, x_33);
lean_inc(x_19);
x_35 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_35, 0, x_19);
lean_ctor_set(x_35, 1, x_33);
x_36 = lean_mk_string("null");
x_37 = lean_name_mk_string(x_26, x_36);
x_38 = l_Array_append___rarg(x_10, x_16);
lean_dec(x_16);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_mk_string("end");
x_41 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_41, 0, x_19);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_unsigned_to_nat(3u);
x_43 = lean_mk_empty_array_with_capacity(x_42);
x_44 = lean_array_push(x_43, x_35);
x_45 = lean_array_push(x_44, x_39);
x_46 = lean_array_push(x_45, x_41);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_34);
lean_ctor_set(x_47, 1, x_46);
lean_ctor_set(x_23, 0, x_47);
return x_23;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_48 = lean_ctor_get(x_23, 1);
lean_inc(x_48);
lean_dec(x_23);
x_49 = lean_box(0);
x_50 = lean_mk_string("Lean");
x_51 = lean_name_mk_string(x_49, x_50);
x_52 = lean_mk_string("Parser");
x_53 = lean_name_mk_string(x_51, x_52);
x_54 = lean_mk_string("Command");
x_55 = lean_name_mk_string(x_53, x_54);
x_56 = lean_mk_string("mutual");
lean_inc(x_56);
x_57 = lean_name_mk_string(x_55, x_56);
lean_inc(x_19);
x_58 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_58, 0, x_19);
lean_ctor_set(x_58, 1, x_56);
x_59 = lean_mk_string("null");
x_60 = lean_name_mk_string(x_49, x_59);
x_61 = l_Array_append___rarg(x_10, x_16);
lean_dec(x_16);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_mk_string("end");
x_64 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_64, 0, x_19);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_unsigned_to_nat(3u);
x_66 = lean_mk_empty_array_with_capacity(x_65);
x_67 = lean_array_push(x_66, x_58);
x_68 = lean_array_push(x_67, x_62);
x_69 = lean_array_push(x_68, x_64);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_57);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_48);
return x_71;
}
}
else
{
uint8_t x_72; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_72 = !lean_is_exclusive(x_15);
if (x_72 == 0)
{
return x_15;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_15, 0);
x_74 = lean_ctor_get(x_15, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_15);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMutualBlock___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Ord_mkMutualBlock___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Elab_Deriving_Ord_mkMutualBlock___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Deriving_Ord_mkMutualBlock(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_List_map___at___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___spec__1(lean_object* x_1) {
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
x_7 = l_List_map___at___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___spec__1(x_5);
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
x_11 = l_List_map___at___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___spec__1(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = l_Lean_instInhabitedName;
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_array_get(x_9, x_1, x_10);
x_12 = lean_mk_string("ord");
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
x_16 = l_Lean_Elab_Deriving_Ord_mkMutualBlock(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_box(0);
x_20 = lean_mk_string("Ord");
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
x_42 = l_List_map___at___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___spec__1(x_41);
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
lean_object* l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_isInductive___at_Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_uget(x_1, x_2);
x_9 = l_Lean_isInductive___at_Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___spec__1(x_8, x_4, x_5, x_6);
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
lean_object* l_Lean_Elab_Deriving_Ord_mkOrdInstanceHandler(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
x_81 = l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___spec__2(x_1, x_79, x_80, x_2, x_3, x_4);
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
x_17 = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Ord_0__Lean_Elab_Deriving_Ord_mkOrdInstanceCmds___boxed), 8, 1);
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
lean_object* l_Lean_isInductive___at_Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_isInductive___at_Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Ord_mkOrdInstanceHandler___spec__2(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Deriving_Ord_initFn____x40_Lean_Elab_Deriving_Ord___hyg_2185_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Ord");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Ord_mkOrdInstanceHandler), 4, 0);
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
x_12 = lean_mk_string("ord");
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
lean_object* initialize_Lean_Elab_Deriving_Ord(lean_object* w) {
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
res = l_Lean_Elab_Deriving_Ord_initFn____x40_Lean_Elab_Deriving_Ord___hyg_2185_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
