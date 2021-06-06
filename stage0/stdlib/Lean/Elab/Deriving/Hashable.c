// Lean compiler output
// Module: Lean.Elab.Deriving.Hashable
// Imports: Init Lean.Meta.Inductive Lean.Elab.Deriving.Basic Lean.Elab.Deriving.Util
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
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__5___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Deriving_Hashable_mkHashableHandler(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Hashable_mkHashableHeader___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Deriving_Hashable_0__Lean_Elab_Deriving_Hashable_mkHashableInstanceCmds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_betaReduce___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l_Lean_isInductive___at_Lean_Elab_Deriving_Hashable_mkHashableHandler___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Hashable_mkHashFuncs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkDiscrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts_match__2___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind;
lean_object* l_Lean_Elab_Deriving_Hashable_mkAuxFunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInstanceCmds(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts_match__2(lean_object*);
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductive___at_Lean_Elab_Deriving_Hashable_mkHashableHandler___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Hashable_mkHashableHandler___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkHashFuncs___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts_match__1(lean_object*);
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkHeader___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Hashable_mkAuxFunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Hashable_mkHashableHandler___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at___private_Lean_Elab_Deriving_Hashable_0__Lean_Elab_Deriving_Hashable_mkHashableInstanceCmds___spec__1(lean_object*);
lean_object* l___private_Lean_Elab_Deriving_Hashable_0__Lean_Elab_Deriving_Hashable_mkHashableInstanceCmds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__5___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(size_t, size_t, lean_object*);
lean_object* l_List_redLength___rarg(lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__4___lambda__1___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Hashable_mkHashableHeader(lean_object*);
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Hashable_initFn____x40_Lean_Elab_Deriving_Hashable___hyg_1587_(lean_object*);
uint8_t l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__4___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_List_toArrayAux___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_registerBuiltinDerivingHandler(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_syntax_ident(lean_object*);
extern lean_object* l_Lean_instInhabitedInductiveVal;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Array_findIdx_x3f_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_betaReduce___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts_match__3___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts_match__3(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Hashable_mkHashableHeader___boxed(lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkHashFuncs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkLit(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Hashable_mkHashableHeader___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_box(0);
x_10 = lean_mk_string("Hashable");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_unsigned_to_nat(1u);
x_13 = l_Lean_Elab_Deriving_mkHeader___rarg(x_11, x_12, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_13;
}
}
lean_object* l_Lean_Elab_Deriving_Hashable_mkHashableHeader(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Hashable_mkHashableHeader___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_Hashable_mkHashableHeader___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Deriving_Hashable_mkHashableHeader(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts_match__3___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
x_27 = l_Lean_throwError___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__2(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
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
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
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
uint8_t l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__4___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_name_eq(x_2, x_1);
return x_3;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
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
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_7, x_21);
lean_dec(x_7);
x_30 = lean_ctor_get(x_9, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_9, 1);
lean_inc(x_31);
lean_dec(x_9);
x_32 = lean_nat_add(x_5, x_8);
x_33 = l_Lean_instInhabitedExpr;
x_34 = lean_array_get(x_33, x_4, x_32);
lean_dec(x_32);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_35 = l_Lean_Meta_inferType(x_34, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Lean_Expr_getAppFn(x_36);
lean_dec(x_36);
x_39 = l_Lean_Expr_constName_x21(x_38);
lean_dec(x_38);
x_40 = lean_box(0);
x_41 = lean_mk_string("a");
x_42 = lean_name_mk_string(x_40, x_41);
x_43 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_42, x_14, x_15, x_37);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_mk_syntax_ident(x_44);
lean_inc(x_46);
x_47 = lean_array_push(x_30, x_46);
x_48 = lean_alloc_closure((void*)(l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__4___lambda__1___boxed), 2, 1);
lean_closure_set(x_48, 0, x_39);
x_49 = lean_array_get_size(x_3);
x_50 = l_Array_findIdx_x3f_loop___rarg(x_3, x_48, x_49, x_19, lean_box(0));
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_51 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_45);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_53);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_mk_string("Lean");
x_61 = lean_name_mk_string(x_40, x_60);
x_62 = lean_mk_string("Parser");
x_63 = lean_name_mk_string(x_61, x_62);
x_64 = lean_mk_string("Term");
x_65 = lean_name_mk_string(x_63, x_64);
x_66 = lean_mk_string("app");
lean_inc(x_65);
x_67 = lean_name_mk_string(x_65, x_66);
x_68 = lean_mk_string("mixHash");
x_69 = lean_string_utf8_byte_size(x_68);
lean_inc(x_68);
x_70 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_19);
lean_ctor_set(x_70, 2, x_69);
x_71 = lean_name_mk_string(x_40, x_68);
lean_inc(x_55);
lean_inc(x_71);
lean_inc(x_58);
x_72 = l_Lean_addMacroScope(x_58, x_71, x_55);
x_73 = lean_box(0);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_73);
lean_inc(x_52);
x_76 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_76, 0, x_52);
lean_ctor_set(x_76, 1, x_70);
lean_ctor_set(x_76, 2, x_72);
lean_ctor_set(x_76, 3, x_75);
x_77 = lean_mk_string("null");
x_78 = lean_name_mk_string(x_40, x_77);
x_79 = lean_mk_string("paren");
x_80 = lean_name_mk_string(x_65, x_79);
x_81 = lean_mk_string("(");
lean_inc(x_52);
x_82 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_82, 0, x_52);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_mk_string("hash");
x_84 = lean_string_utf8_byte_size(x_83);
lean_inc(x_83);
x_85 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_19);
lean_ctor_set(x_85, 2, x_84);
lean_inc(x_83);
x_86 = lean_name_mk_string(x_40, x_83);
x_87 = l_Lean_addMacroScope(x_58, x_86, x_55);
x_88 = lean_mk_string("Hashable");
x_89 = lean_name_mk_string(x_40, x_88);
x_90 = lean_name_mk_string(x_89, x_83);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_73);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_73);
lean_inc(x_52);
x_93 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_93, 0, x_52);
lean_ctor_set(x_93, 1, x_85);
lean_ctor_set(x_93, 2, x_87);
lean_ctor_set(x_93, 3, x_92);
x_94 = lean_mk_empty_array_with_capacity(x_21);
x_95 = lean_array_push(x_94, x_46);
lean_inc(x_78);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_78);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_unsigned_to_nat(2u);
x_98 = lean_mk_empty_array_with_capacity(x_97);
lean_inc(x_98);
x_99 = lean_array_push(x_98, x_93);
x_100 = lean_array_push(x_99, x_96);
lean_inc(x_67);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_67);
lean_ctor_set(x_101, 1, x_100);
lean_inc(x_2);
lean_inc(x_78);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_78);
lean_ctor_set(x_102, 1, x_2);
lean_inc(x_98);
x_103 = lean_array_push(x_98, x_101);
x_104 = lean_array_push(x_103, x_102);
lean_inc(x_78);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_78);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_mk_string(")");
x_107 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_107, 0, x_52);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_unsigned_to_nat(3u);
x_109 = lean_mk_empty_array_with_capacity(x_108);
x_110 = lean_array_push(x_109, x_82);
x_111 = lean_array_push(x_110, x_105);
x_112 = lean_array_push(x_111, x_107);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_80);
lean_ctor_set(x_113, 1, x_112);
lean_inc(x_98);
x_114 = lean_array_push(x_98, x_31);
x_115 = lean_array_push(x_114, x_113);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_78);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_array_push(x_98, x_76);
x_118 = lean_array_push(x_117, x_116);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_67);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_47);
lean_ctor_set(x_120, 1, x_119);
x_121 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_121, 0, x_120);
x_23 = x_121;
x_24 = x_59;
goto block_29;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_122 = lean_ctor_get(x_50, 0);
lean_inc(x_122);
lean_dec(x_50);
x_123 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_45);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_123, 1);
lean_inc(x_125);
lean_dec(x_123);
x_126 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_125);
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_126, 1);
lean_inc(x_128);
lean_dec(x_126);
x_129 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_128);
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_129, 1);
lean_inc(x_131);
lean_dec(x_129);
x_132 = lean_mk_string("Lean");
x_133 = lean_name_mk_string(x_40, x_132);
x_134 = lean_mk_string("Parser");
x_135 = lean_name_mk_string(x_133, x_134);
x_136 = lean_mk_string("Term");
x_137 = lean_name_mk_string(x_135, x_136);
x_138 = lean_mk_string("app");
lean_inc(x_137);
x_139 = lean_name_mk_string(x_137, x_138);
x_140 = lean_mk_string("mixHash");
x_141 = lean_string_utf8_byte_size(x_140);
lean_inc(x_140);
x_142 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_142, 0, x_140);
lean_ctor_set(x_142, 1, x_19);
lean_ctor_set(x_142, 2, x_141);
x_143 = lean_name_mk_string(x_40, x_140);
lean_inc(x_143);
x_144 = l_Lean_addMacroScope(x_130, x_143, x_127);
x_145 = lean_box(0);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_143);
lean_ctor_set(x_146, 1, x_145);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_146);
lean_ctor_set(x_147, 1, x_145);
lean_inc(x_124);
x_148 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_148, 0, x_124);
lean_ctor_set(x_148, 1, x_142);
lean_ctor_set(x_148, 2, x_144);
lean_ctor_set(x_148, 3, x_147);
x_149 = lean_mk_string("null");
x_150 = lean_name_mk_string(x_40, x_149);
x_151 = lean_mk_string("paren");
x_152 = lean_name_mk_string(x_137, x_151);
x_153 = lean_mk_string("(");
lean_inc(x_124);
x_154 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_154, 0, x_124);
lean_ctor_set(x_154, 1, x_153);
x_155 = lean_ctor_get(x_1, 1);
x_156 = l_Lean_instInhabitedName;
x_157 = lean_array_get(x_156, x_155, x_122);
lean_dec(x_122);
x_158 = lean_mk_syntax_ident(x_157);
x_159 = lean_mk_empty_array_with_capacity(x_21);
x_160 = lean_array_push(x_159, x_46);
lean_inc(x_150);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_150);
lean_ctor_set(x_161, 1, x_160);
x_162 = lean_unsigned_to_nat(2u);
x_163 = lean_mk_empty_array_with_capacity(x_162);
lean_inc(x_163);
x_164 = lean_array_push(x_163, x_158);
x_165 = lean_array_push(x_164, x_161);
lean_inc(x_139);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_139);
lean_ctor_set(x_166, 1, x_165);
lean_inc(x_2);
lean_inc(x_150);
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_150);
lean_ctor_set(x_167, 1, x_2);
lean_inc(x_163);
x_168 = lean_array_push(x_163, x_166);
x_169 = lean_array_push(x_168, x_167);
lean_inc(x_150);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_150);
lean_ctor_set(x_170, 1, x_169);
x_171 = lean_mk_string(")");
x_172 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_172, 0, x_124);
lean_ctor_set(x_172, 1, x_171);
x_173 = lean_unsigned_to_nat(3u);
x_174 = lean_mk_empty_array_with_capacity(x_173);
x_175 = lean_array_push(x_174, x_154);
x_176 = lean_array_push(x_175, x_170);
x_177 = lean_array_push(x_176, x_172);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_152);
lean_ctor_set(x_178, 1, x_177);
lean_inc(x_163);
x_179 = lean_array_push(x_163, x_31);
x_180 = lean_array_push(x_179, x_178);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_150);
lean_ctor_set(x_181, 1, x_180);
x_182 = lean_array_push(x_163, x_148);
x_183 = lean_array_push(x_182, x_181);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_139);
lean_ctor_set(x_184, 1, x_183);
x_185 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_185, 0, x_47);
lean_ctor_set(x_185, 1, x_184);
x_186 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_186, 0, x_185);
x_23 = x_186;
x_24 = x_131;
goto block_29;
}
}
else
{
uint8_t x_187; 
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_2);
x_187 = !lean_is_exclusive(x_35);
if (x_187 == 0)
{
return x_35;
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_188 = lean_ctor_get(x_35, 0);
x_189 = lean_ctor_get(x_35, 1);
lean_inc(x_189);
lean_inc(x_188);
lean_dec(x_35);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_188);
lean_ctor_set(x_190, 1, x_189);
return x_190;
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
lean_object* x_191; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_191 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_191, 0, x_9);
lean_ctor_set(x_191, 1, x_16);
return x_191;
}
}
else
{
lean_object* x_192; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
x_192 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_192, 0, x_9);
lean_ctor_set(x_192, 1, x_16);
return x_192;
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__5___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
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
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 2);
lean_inc(x_22);
lean_dec(x_1);
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_unsigned_to_nat(1u);
lean_inc(x_22);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_22);
lean_ctor_set(x_25, 2, x_24);
lean_inc(x_2);
x_26 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__3(x_25, x_22, x_23, x_2, x_10, x_11, x_12, x_13, x_14, x_15, x_20);
lean_dec(x_25);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_28);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_30);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_32);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
lean_dec(x_33);
x_35 = l_Nat_repr(x_3);
x_36 = l_Lean_numLitKind;
x_37 = lean_box(2);
x_38 = l_Lean_Syntax_mkLit(x_36, x_35, x_37);
lean_inc(x_21);
x_39 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_39, 0, x_23);
lean_ctor_set(x_39, 1, x_21);
lean_ctor_set(x_39, 2, x_24);
lean_inc(x_2);
lean_inc(x_21);
x_40 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__3(x_39, x_21, x_23, x_2, x_10, x_11, x_12, x_13, x_14, x_15, x_34);
lean_dec(x_39);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_ctor_get(x_4, 4);
lean_inc(x_43);
lean_dec(x_4);
lean_inc(x_43);
x_44 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_44, 0, x_23);
lean_ctor_set(x_44, 1, x_43);
lean_ctor_set(x_44, 2, x_24);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_41);
lean_ctor_set(x_45, 1, x_38);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_2);
x_46 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__4(x_5, x_2, x_6, x_8, x_21, x_44, x_43, x_23, x_45, x_10, x_11, x_12, x_13, x_14, x_15, x_42);
lean_dec(x_44);
lean_dec(x_21);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_ctor_get(x_47, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_dec(x_47);
x_51 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_48);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_53);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_56 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_55);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
lean_dec(x_56);
x_58 = lean_box(0);
x_59 = lean_mk_string("Lean");
x_60 = lean_name_mk_string(x_58, x_59);
x_61 = lean_mk_string("Parser");
x_62 = lean_name_mk_string(x_60, x_61);
x_63 = lean_mk_string("Term");
x_64 = lean_name_mk_string(x_62, x_63);
x_65 = lean_mk_string("app");
lean_inc(x_64);
x_66 = lean_name_mk_string(x_64, x_65);
x_67 = lean_mk_string("explicit");
lean_inc(x_64);
x_68 = lean_name_mk_string(x_64, x_67);
x_69 = lean_mk_string("@");
x_70 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_70, 0, x_52);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_mk_syntax_ident(x_7);
x_72 = lean_unsigned_to_nat(2u);
x_73 = lean_mk_empty_array_with_capacity(x_72);
lean_inc(x_73);
x_74 = lean_array_push(x_73, x_70);
x_75 = lean_array_push(x_74, x_71);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_68);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_mk_string("null");
x_78 = lean_name_mk_string(x_58, x_77);
lean_inc(x_2);
x_79 = l_Array_append___rarg(x_2, x_49);
lean_dec(x_49);
lean_inc(x_78);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_array_push(x_73, x_76);
x_82 = lean_array_push(x_81, x_80);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_66);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_array_push(x_27, x_83);
x_85 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_57);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_87);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
x_89 = lean_ctor_get(x_88, 1);
lean_inc(x_89);
lean_dec(x_88);
x_90 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_89);
lean_dec(x_15);
x_91 = !lean_is_exclusive(x_90);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; size_t x_98; size_t x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_92 = lean_ctor_get(x_90, 0);
lean_dec(x_92);
x_93 = lean_mk_string("matchAlt");
x_94 = lean_name_mk_string(x_64, x_93);
x_95 = lean_mk_string("|");
lean_inc(x_86);
x_96 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_96, 0, x_86);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_array_get_size(x_84);
x_98 = lean_usize_of_nat(x_97);
lean_dec(x_97);
x_99 = 0;
x_100 = x_84;
x_101 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_98, x_99, x_100);
x_102 = x_101;
x_103 = lean_mk_string(",");
x_104 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_104, 0, x_37);
lean_ctor_set(x_104, 1, x_103);
x_105 = l_Lean_mkSepArray(x_102, x_104);
lean_dec(x_102);
x_106 = l_Array_append___rarg(x_2, x_105);
lean_dec(x_105);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_78);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_mk_string("=>");
x_109 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_109, 0, x_86);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_unsigned_to_nat(4u);
x_111 = lean_mk_empty_array_with_capacity(x_110);
x_112 = lean_array_push(x_111, x_96);
x_113 = lean_array_push(x_112, x_107);
x_114 = lean_array_push(x_113, x_109);
x_115 = lean_array_push(x_114, x_50);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_94);
lean_ctor_set(x_116, 1, x_115);
lean_ctor_set(x_90, 0, x_116);
return x_90;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; size_t x_123; size_t x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_117 = lean_ctor_get(x_90, 1);
lean_inc(x_117);
lean_dec(x_90);
x_118 = lean_mk_string("matchAlt");
x_119 = lean_name_mk_string(x_64, x_118);
x_120 = lean_mk_string("|");
lean_inc(x_86);
x_121 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_121, 0, x_86);
lean_ctor_set(x_121, 1, x_120);
x_122 = lean_array_get_size(x_84);
x_123 = lean_usize_of_nat(x_122);
lean_dec(x_122);
x_124 = 0;
x_125 = x_84;
x_126 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_123, x_124, x_125);
x_127 = x_126;
x_128 = lean_mk_string(",");
x_129 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_129, 0, x_37);
lean_ctor_set(x_129, 1, x_128);
x_130 = l_Lean_mkSepArray(x_127, x_129);
lean_dec(x_127);
x_131 = l_Array_append___rarg(x_2, x_130);
lean_dec(x_130);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_78);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_mk_string("=>");
x_134 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_134, 0, x_86);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_unsigned_to_nat(4u);
x_136 = lean_mk_empty_array_with_capacity(x_135);
x_137 = lean_array_push(x_136, x_121);
x_138 = lean_array_push(x_137, x_132);
x_139 = lean_array_push(x_138, x_134);
x_140 = lean_array_push(x_139, x_50);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_119);
lean_ctor_set(x_141, 1, x_140);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_117);
return x_142;
}
}
else
{
uint8_t x_143; 
lean_dec(x_27);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_2);
x_143 = !lean_is_exclusive(x_46);
if (x_143 == 0)
{
return x_46;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_46, 0);
x_145 = lean_ctor_get(x_46, 1);
lean_inc(x_145);
lean_inc(x_144);
lean_dec(x_46);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
return x_146;
}
}
}
else
{
uint8_t x_147; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_147 = !lean_is_exclusive(x_19);
if (x_147 == 0)
{
return x_19;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_19, 0);
x_149 = lean_ctor_get(x_19, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_19);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
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
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_5, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_5, 1);
lean_inc(x_16);
lean_dec(x_5);
x_17 = lean_ctor_get(x_6, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_6, 1);
lean_inc(x_18);
lean_dec(x_6);
lean_inc(x_7);
lean_inc(x_15);
x_19 = l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__1(x_15, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_22, 2);
lean_inc(x_23);
lean_dec(x_22);
lean_inc(x_4);
lean_inc(x_1);
lean_inc(x_17);
lean_inc(x_3);
lean_inc(x_2);
x_24 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__5___lambda__1___boxed), 16, 7);
lean_closure_set(x_24, 0, x_2);
lean_closure_set(x_24, 1, x_3);
lean_closure_set(x_24, 2, x_17);
lean_closure_set(x_24, 3, x_20);
lean_closure_set(x_24, 4, x_1);
lean_closure_set(x_24, 5, x_4);
lean_closure_set(x_24, 6, x_15);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_25 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(x_23, x_24, x_7, x_8, x_9, x_10, x_11, x_12, x_21);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_array_push(x_18, x_26);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_17, x_29);
lean_dec(x_17);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_28);
x_5 = x_16;
x_6 = x_31;
x_13 = x_27;
goto _start;
}
else
{
uint8_t x_33; 
lean_dec(x_18);
lean_dec(x_17);
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
x_33 = !lean_is_exclusive(x_25);
if (x_33 == 0)
{
return x_25;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_25, 0);
x_35 = lean_ctor_get(x_25, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_25);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
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
x_37 = !lean_is_exclusive(x_19);
if (x_37 == 0)
{
return x_19;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_19, 0);
x_39 = lean_ctor_get(x_19, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_19);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
}
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_mk_empty_array_with_capacity(x_10);
x_12 = lean_ctor_get(x_2, 3);
lean_inc(x_12);
x_13 = l_List_redLength___rarg(x_12);
x_14 = lean_mk_empty_array_with_capacity(x_13);
lean_dec(x_13);
x_15 = l_List_toArrayAux___rarg(x_12, x_14);
x_16 = lean_ctor_get(x_2, 4);
lean_inc(x_16);
lean_inc(x_11);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_11);
x_18 = l_List_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__5(x_1, x_2, x_11, x_15, x_16, x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_21);
return x_18;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_18, 0);
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_18);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_18);
if (x_26 == 0)
{
return x_18;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_18, 0);
x_28 = lean_ctor_get(x_18, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_18);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__4___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
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
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__5___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_List_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts___spec__5___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
return x_17;
}
}
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
x_12 = l_Lean_Elab_Deriving_mkDiscrs(x_2, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
x_15 = l_Lean_Elab_Deriving_Hashable_mkMatch_mkAlts(x_1, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_14);
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
lean_dec(x_1);
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
lean_object* l_Lean_Elab_Deriving_Hashable_mkMatch___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Deriving_Hashable_mkMatch(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_12;
}
}
lean_object* l_Lean_Elab_Deriving_Hashable_mkAuxFunction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = l_Lean_instInhabitedName;
x_12 = lean_array_get(x_11, x_10, x_2);
lean_dec(x_10);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = l_Lean_instInhabitedInductiveVal;
x_15 = lean_array_get(x_14, x_13, x_2);
lean_dec(x_13);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_15);
x_16 = l_Lean_Elab_Deriving_Hashable_mkHashableHeader___rarg(x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
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
lean_inc(x_17);
lean_inc(x_1);
x_19 = l_Lean_Elab_Deriving_Hashable_mkMatch(x_1, x_17, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
lean_dec(x_1);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_ctor_get(x_17, 0);
lean_inc(x_23);
lean_dec(x_17);
x_24 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_7, x_8, x_22);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_26);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_29);
lean_dec(x_8);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_box(0);
x_34 = lean_mk_string("Lean");
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = lean_mk_string("Parser");
x_37 = lean_name_mk_string(x_35, x_36);
x_38 = lean_mk_string("Command");
lean_inc(x_37);
x_39 = lean_name_mk_string(x_37, x_38);
x_40 = lean_mk_string("declaration");
lean_inc(x_39);
x_41 = lean_name_mk_string(x_39, x_40);
x_42 = lean_mk_string("declModifiers");
lean_inc(x_39);
x_43 = lean_name_mk_string(x_39, x_42);
x_44 = lean_mk_string("null");
x_45 = lean_name_mk_string(x_33, x_44);
x_46 = lean_unsigned_to_nat(0u);
x_47 = lean_mk_empty_array_with_capacity(x_46);
lean_inc(x_47);
lean_inc(x_45);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_mk_string("private");
lean_inc(x_49);
lean_inc(x_39);
x_50 = lean_name_mk_string(x_39, x_49);
lean_inc(x_25);
x_51 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_51, 0, x_25);
lean_ctor_set(x_51, 1, x_49);
x_52 = lean_unsigned_to_nat(1u);
x_53 = lean_mk_empty_array_with_capacity(x_52);
lean_inc(x_53);
x_54 = lean_array_push(x_53, x_51);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_50);
lean_ctor_set(x_55, 1, x_54);
lean_inc(x_53);
x_56 = lean_array_push(x_53, x_55);
lean_inc(x_45);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_45);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_unsigned_to_nat(6u);
x_59 = lean_mk_empty_array_with_capacity(x_58);
lean_inc(x_48);
x_60 = lean_array_push(x_59, x_48);
lean_inc(x_48);
x_61 = lean_array_push(x_60, x_48);
x_62 = lean_array_push(x_61, x_57);
lean_inc(x_48);
x_63 = lean_array_push(x_62, x_48);
lean_inc(x_48);
x_64 = lean_array_push(x_63, x_48);
lean_inc(x_48);
x_65 = lean_array_push(x_64, x_48);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_43);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_mk_string("def");
lean_inc(x_67);
lean_inc(x_39);
x_68 = lean_name_mk_string(x_39, x_67);
lean_inc(x_25);
x_69 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_69, 0, x_25);
lean_ctor_set(x_69, 1, x_67);
x_70 = lean_mk_string("declId");
lean_inc(x_39);
x_71 = lean_name_mk_string(x_39, x_70);
x_72 = lean_mk_syntax_ident(x_12);
x_73 = lean_unsigned_to_nat(2u);
x_74 = lean_mk_empty_array_with_capacity(x_73);
lean_inc(x_74);
x_75 = lean_array_push(x_74, x_72);
lean_inc(x_48);
x_76 = lean_array_push(x_75, x_48);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_71);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_mk_string("optDeclSig");
lean_inc(x_39);
x_79 = lean_name_mk_string(x_39, x_78);
x_80 = l_Array_append___rarg(x_47, x_23);
lean_dec(x_23);
lean_inc(x_45);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_45);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_mk_string("Term");
x_83 = lean_name_mk_string(x_37, x_82);
x_84 = lean_mk_string("typeSpec");
x_85 = lean_name_mk_string(x_83, x_84);
x_86 = lean_mk_string(":");
lean_inc(x_25);
x_87 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_87, 0, x_25);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_mk_string("UInt64");
x_89 = lean_string_utf8_byte_size(x_88);
lean_inc(x_88);
x_90 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_46);
lean_ctor_set(x_90, 2, x_89);
x_91 = lean_name_mk_string(x_33, x_88);
lean_inc(x_91);
x_92 = l_Lean_addMacroScope(x_32, x_91, x_28);
x_93 = lean_box(0);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_93);
lean_inc(x_25);
x_96 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_96, 0, x_25);
lean_ctor_set(x_96, 1, x_90);
lean_ctor_set(x_96, 2, x_92);
lean_ctor_set(x_96, 3, x_95);
lean_inc(x_74);
x_97 = lean_array_push(x_74, x_87);
x_98 = lean_array_push(x_97, x_96);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_85);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_array_push(x_53, x_99);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_45);
lean_ctor_set(x_101, 1, x_100);
lean_inc(x_74);
x_102 = lean_array_push(x_74, x_81);
x_103 = lean_array_push(x_102, x_101);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_79);
lean_ctor_set(x_104, 1, x_103);
x_105 = lean_mk_string("declValSimple");
x_106 = lean_name_mk_string(x_39, x_105);
x_107 = lean_mk_string(":=");
x_108 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_108, 0, x_25);
lean_ctor_set(x_108, 1, x_107);
x_109 = lean_unsigned_to_nat(3u);
x_110 = lean_mk_empty_array_with_capacity(x_109);
x_111 = lean_array_push(x_110, x_108);
x_112 = lean_array_push(x_111, x_21);
x_113 = lean_array_push(x_112, x_48);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_106);
lean_ctor_set(x_114, 1, x_113);
x_115 = lean_unsigned_to_nat(4u);
x_116 = lean_mk_empty_array_with_capacity(x_115);
x_117 = lean_array_push(x_116, x_69);
x_118 = lean_array_push(x_117, x_77);
x_119 = lean_array_push(x_118, x_104);
x_120 = lean_array_push(x_119, x_114);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_68);
lean_ctor_set(x_121, 1, x_120);
x_122 = lean_array_push(x_74, x_66);
x_123 = lean_array_push(x_122, x_121);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_41);
lean_ctor_set(x_124, 1, x_123);
lean_ctor_set(x_30, 0, x_124);
return x_30;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_125 = lean_ctor_get(x_30, 0);
x_126 = lean_ctor_get(x_30, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_30);
x_127 = lean_box(0);
x_128 = lean_mk_string("Lean");
x_129 = lean_name_mk_string(x_127, x_128);
x_130 = lean_mk_string("Parser");
x_131 = lean_name_mk_string(x_129, x_130);
x_132 = lean_mk_string("Command");
lean_inc(x_131);
x_133 = lean_name_mk_string(x_131, x_132);
x_134 = lean_mk_string("declaration");
lean_inc(x_133);
x_135 = lean_name_mk_string(x_133, x_134);
x_136 = lean_mk_string("declModifiers");
lean_inc(x_133);
x_137 = lean_name_mk_string(x_133, x_136);
x_138 = lean_mk_string("null");
x_139 = lean_name_mk_string(x_127, x_138);
x_140 = lean_unsigned_to_nat(0u);
x_141 = lean_mk_empty_array_with_capacity(x_140);
lean_inc(x_141);
lean_inc(x_139);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_139);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_mk_string("private");
lean_inc(x_143);
lean_inc(x_133);
x_144 = lean_name_mk_string(x_133, x_143);
lean_inc(x_25);
x_145 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_145, 0, x_25);
lean_ctor_set(x_145, 1, x_143);
x_146 = lean_unsigned_to_nat(1u);
x_147 = lean_mk_empty_array_with_capacity(x_146);
lean_inc(x_147);
x_148 = lean_array_push(x_147, x_145);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_144);
lean_ctor_set(x_149, 1, x_148);
lean_inc(x_147);
x_150 = lean_array_push(x_147, x_149);
lean_inc(x_139);
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_139);
lean_ctor_set(x_151, 1, x_150);
x_152 = lean_unsigned_to_nat(6u);
x_153 = lean_mk_empty_array_with_capacity(x_152);
lean_inc(x_142);
x_154 = lean_array_push(x_153, x_142);
lean_inc(x_142);
x_155 = lean_array_push(x_154, x_142);
x_156 = lean_array_push(x_155, x_151);
lean_inc(x_142);
x_157 = lean_array_push(x_156, x_142);
lean_inc(x_142);
x_158 = lean_array_push(x_157, x_142);
lean_inc(x_142);
x_159 = lean_array_push(x_158, x_142);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_137);
lean_ctor_set(x_160, 1, x_159);
x_161 = lean_mk_string("def");
lean_inc(x_161);
lean_inc(x_133);
x_162 = lean_name_mk_string(x_133, x_161);
lean_inc(x_25);
x_163 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_163, 0, x_25);
lean_ctor_set(x_163, 1, x_161);
x_164 = lean_mk_string("declId");
lean_inc(x_133);
x_165 = lean_name_mk_string(x_133, x_164);
x_166 = lean_mk_syntax_ident(x_12);
x_167 = lean_unsigned_to_nat(2u);
x_168 = lean_mk_empty_array_with_capacity(x_167);
lean_inc(x_168);
x_169 = lean_array_push(x_168, x_166);
lean_inc(x_142);
x_170 = lean_array_push(x_169, x_142);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_165);
lean_ctor_set(x_171, 1, x_170);
x_172 = lean_mk_string("optDeclSig");
lean_inc(x_133);
x_173 = lean_name_mk_string(x_133, x_172);
x_174 = l_Array_append___rarg(x_141, x_23);
lean_dec(x_23);
lean_inc(x_139);
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_139);
lean_ctor_set(x_175, 1, x_174);
x_176 = lean_mk_string("Term");
x_177 = lean_name_mk_string(x_131, x_176);
x_178 = lean_mk_string("typeSpec");
x_179 = lean_name_mk_string(x_177, x_178);
x_180 = lean_mk_string(":");
lean_inc(x_25);
x_181 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_181, 0, x_25);
lean_ctor_set(x_181, 1, x_180);
x_182 = lean_mk_string("UInt64");
x_183 = lean_string_utf8_byte_size(x_182);
lean_inc(x_182);
x_184 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_184, 0, x_182);
lean_ctor_set(x_184, 1, x_140);
lean_ctor_set(x_184, 2, x_183);
x_185 = lean_name_mk_string(x_127, x_182);
lean_inc(x_185);
x_186 = l_Lean_addMacroScope(x_125, x_185, x_28);
x_187 = lean_box(0);
x_188 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_188, 0, x_185);
lean_ctor_set(x_188, 1, x_187);
x_189 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_187);
lean_inc(x_25);
x_190 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_190, 0, x_25);
lean_ctor_set(x_190, 1, x_184);
lean_ctor_set(x_190, 2, x_186);
lean_ctor_set(x_190, 3, x_189);
lean_inc(x_168);
x_191 = lean_array_push(x_168, x_181);
x_192 = lean_array_push(x_191, x_190);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_179);
lean_ctor_set(x_193, 1, x_192);
x_194 = lean_array_push(x_147, x_193);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_139);
lean_ctor_set(x_195, 1, x_194);
lean_inc(x_168);
x_196 = lean_array_push(x_168, x_175);
x_197 = lean_array_push(x_196, x_195);
x_198 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_198, 0, x_173);
lean_ctor_set(x_198, 1, x_197);
x_199 = lean_mk_string("declValSimple");
x_200 = lean_name_mk_string(x_133, x_199);
x_201 = lean_mk_string(":=");
x_202 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_202, 0, x_25);
lean_ctor_set(x_202, 1, x_201);
x_203 = lean_unsigned_to_nat(3u);
x_204 = lean_mk_empty_array_with_capacity(x_203);
x_205 = lean_array_push(x_204, x_202);
x_206 = lean_array_push(x_205, x_21);
x_207 = lean_array_push(x_206, x_142);
x_208 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_208, 0, x_200);
lean_ctor_set(x_208, 1, x_207);
x_209 = lean_unsigned_to_nat(4u);
x_210 = lean_mk_empty_array_with_capacity(x_209);
x_211 = lean_array_push(x_210, x_163);
x_212 = lean_array_push(x_211, x_171);
x_213 = lean_array_push(x_212, x_198);
x_214 = lean_array_push(x_213, x_208);
x_215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_215, 0, x_162);
lean_ctor_set(x_215, 1, x_214);
x_216 = lean_array_push(x_168, x_160);
x_217 = lean_array_push(x_216, x_215);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_135);
lean_ctor_set(x_218, 1, x_217);
x_219 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_219, 0, x_218);
lean_ctor_set(x_219, 1, x_126);
return x_219;
}
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; uint8_t x_230; 
x_220 = lean_ctor_get(x_19, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_19, 1);
lean_inc(x_221);
lean_dec(x_19);
x_222 = lean_ctor_get(x_17, 0);
lean_inc(x_222);
lean_dec(x_17);
x_223 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_7, x_8, x_221);
x_224 = lean_ctor_get(x_223, 0);
lean_inc(x_224);
x_225 = lean_ctor_get(x_223, 1);
lean_inc(x_225);
lean_dec(x_223);
x_226 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_225);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_227 = lean_ctor_get(x_226, 0);
lean_inc(x_227);
x_228 = lean_ctor_get(x_226, 1);
lean_inc(x_228);
lean_dec(x_226);
x_229 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_228);
lean_dec(x_8);
x_230 = !lean_is_exclusive(x_229);
if (x_230 == 0)
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; 
x_231 = lean_ctor_get(x_229, 0);
x_232 = lean_box(0);
x_233 = lean_mk_string("Lean");
x_234 = lean_name_mk_string(x_232, x_233);
x_235 = lean_mk_string("Parser");
x_236 = lean_name_mk_string(x_234, x_235);
x_237 = lean_mk_string("Command");
lean_inc(x_236);
x_238 = lean_name_mk_string(x_236, x_237);
x_239 = lean_mk_string("declaration");
lean_inc(x_238);
x_240 = lean_name_mk_string(x_238, x_239);
x_241 = lean_mk_string("declModifiers");
lean_inc(x_238);
x_242 = lean_name_mk_string(x_238, x_241);
x_243 = lean_mk_string("null");
x_244 = lean_name_mk_string(x_232, x_243);
x_245 = lean_unsigned_to_nat(0u);
x_246 = lean_mk_empty_array_with_capacity(x_245);
lean_inc(x_246);
lean_inc(x_244);
x_247 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_247, 0, x_244);
lean_ctor_set(x_247, 1, x_246);
x_248 = lean_mk_string("private");
lean_inc(x_248);
lean_inc(x_238);
x_249 = lean_name_mk_string(x_238, x_248);
lean_inc(x_224);
x_250 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_250, 0, x_224);
lean_ctor_set(x_250, 1, x_248);
x_251 = lean_unsigned_to_nat(1u);
x_252 = lean_mk_empty_array_with_capacity(x_251);
lean_inc(x_252);
x_253 = lean_array_push(x_252, x_250);
x_254 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_254, 0, x_249);
lean_ctor_set(x_254, 1, x_253);
lean_inc(x_252);
x_255 = lean_array_push(x_252, x_254);
lean_inc(x_244);
x_256 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_256, 0, x_244);
lean_ctor_set(x_256, 1, x_255);
x_257 = lean_mk_string("partial");
lean_inc(x_257);
lean_inc(x_238);
x_258 = lean_name_mk_string(x_238, x_257);
lean_inc(x_224);
x_259 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_259, 0, x_224);
lean_ctor_set(x_259, 1, x_257);
lean_inc(x_252);
x_260 = lean_array_push(x_252, x_259);
x_261 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_261, 0, x_258);
lean_ctor_set(x_261, 1, x_260);
lean_inc(x_252);
x_262 = lean_array_push(x_252, x_261);
lean_inc(x_244);
x_263 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_263, 0, x_244);
lean_ctor_set(x_263, 1, x_262);
x_264 = lean_unsigned_to_nat(6u);
x_265 = lean_mk_empty_array_with_capacity(x_264);
lean_inc(x_247);
x_266 = lean_array_push(x_265, x_247);
lean_inc(x_247);
x_267 = lean_array_push(x_266, x_247);
x_268 = lean_array_push(x_267, x_256);
lean_inc(x_247);
x_269 = lean_array_push(x_268, x_247);
lean_inc(x_247);
x_270 = lean_array_push(x_269, x_247);
x_271 = lean_array_push(x_270, x_263);
x_272 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_272, 0, x_242);
lean_ctor_set(x_272, 1, x_271);
x_273 = lean_mk_string("def");
lean_inc(x_273);
lean_inc(x_238);
x_274 = lean_name_mk_string(x_238, x_273);
lean_inc(x_224);
x_275 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_275, 0, x_224);
lean_ctor_set(x_275, 1, x_273);
x_276 = lean_mk_string("declId");
lean_inc(x_238);
x_277 = lean_name_mk_string(x_238, x_276);
x_278 = lean_mk_syntax_ident(x_12);
x_279 = lean_unsigned_to_nat(2u);
x_280 = lean_mk_empty_array_with_capacity(x_279);
lean_inc(x_280);
x_281 = lean_array_push(x_280, x_278);
lean_inc(x_247);
x_282 = lean_array_push(x_281, x_247);
x_283 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_283, 0, x_277);
lean_ctor_set(x_283, 1, x_282);
x_284 = lean_mk_string("optDeclSig");
lean_inc(x_238);
x_285 = lean_name_mk_string(x_238, x_284);
x_286 = l_Array_append___rarg(x_246, x_222);
lean_dec(x_222);
lean_inc(x_244);
x_287 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_287, 0, x_244);
lean_ctor_set(x_287, 1, x_286);
x_288 = lean_mk_string("Term");
x_289 = lean_name_mk_string(x_236, x_288);
x_290 = lean_mk_string("typeSpec");
x_291 = lean_name_mk_string(x_289, x_290);
x_292 = lean_mk_string(":");
lean_inc(x_224);
x_293 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_293, 0, x_224);
lean_ctor_set(x_293, 1, x_292);
x_294 = lean_mk_string("UInt64");
x_295 = lean_string_utf8_byte_size(x_294);
lean_inc(x_294);
x_296 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_296, 0, x_294);
lean_ctor_set(x_296, 1, x_245);
lean_ctor_set(x_296, 2, x_295);
x_297 = lean_name_mk_string(x_232, x_294);
lean_inc(x_297);
x_298 = l_Lean_addMacroScope(x_231, x_297, x_227);
x_299 = lean_box(0);
x_300 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_300, 0, x_297);
lean_ctor_set(x_300, 1, x_299);
x_301 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_301, 0, x_300);
lean_ctor_set(x_301, 1, x_299);
lean_inc(x_224);
x_302 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_302, 0, x_224);
lean_ctor_set(x_302, 1, x_296);
lean_ctor_set(x_302, 2, x_298);
lean_ctor_set(x_302, 3, x_301);
lean_inc(x_280);
x_303 = lean_array_push(x_280, x_293);
x_304 = lean_array_push(x_303, x_302);
x_305 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_305, 0, x_291);
lean_ctor_set(x_305, 1, x_304);
x_306 = lean_array_push(x_252, x_305);
x_307 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_307, 0, x_244);
lean_ctor_set(x_307, 1, x_306);
lean_inc(x_280);
x_308 = lean_array_push(x_280, x_287);
x_309 = lean_array_push(x_308, x_307);
x_310 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_310, 0, x_285);
lean_ctor_set(x_310, 1, x_309);
x_311 = lean_mk_string("declValSimple");
x_312 = lean_name_mk_string(x_238, x_311);
x_313 = lean_mk_string(":=");
x_314 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_314, 0, x_224);
lean_ctor_set(x_314, 1, x_313);
x_315 = lean_unsigned_to_nat(3u);
x_316 = lean_mk_empty_array_with_capacity(x_315);
x_317 = lean_array_push(x_316, x_314);
x_318 = lean_array_push(x_317, x_220);
x_319 = lean_array_push(x_318, x_247);
x_320 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_320, 0, x_312);
lean_ctor_set(x_320, 1, x_319);
x_321 = lean_unsigned_to_nat(4u);
x_322 = lean_mk_empty_array_with_capacity(x_321);
x_323 = lean_array_push(x_322, x_275);
x_324 = lean_array_push(x_323, x_283);
x_325 = lean_array_push(x_324, x_310);
x_326 = lean_array_push(x_325, x_320);
x_327 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_327, 0, x_274);
lean_ctor_set(x_327, 1, x_326);
x_328 = lean_array_push(x_280, x_272);
x_329 = lean_array_push(x_328, x_327);
x_330 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_330, 0, x_240);
lean_ctor_set(x_330, 1, x_329);
lean_ctor_set(x_229, 0, x_330);
return x_229;
}
else
{
lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; 
x_331 = lean_ctor_get(x_229, 0);
x_332 = lean_ctor_get(x_229, 1);
lean_inc(x_332);
lean_inc(x_331);
lean_dec(x_229);
x_333 = lean_box(0);
x_334 = lean_mk_string("Lean");
x_335 = lean_name_mk_string(x_333, x_334);
x_336 = lean_mk_string("Parser");
x_337 = lean_name_mk_string(x_335, x_336);
x_338 = lean_mk_string("Command");
lean_inc(x_337);
x_339 = lean_name_mk_string(x_337, x_338);
x_340 = lean_mk_string("declaration");
lean_inc(x_339);
x_341 = lean_name_mk_string(x_339, x_340);
x_342 = lean_mk_string("declModifiers");
lean_inc(x_339);
x_343 = lean_name_mk_string(x_339, x_342);
x_344 = lean_mk_string("null");
x_345 = lean_name_mk_string(x_333, x_344);
x_346 = lean_unsigned_to_nat(0u);
x_347 = lean_mk_empty_array_with_capacity(x_346);
lean_inc(x_347);
lean_inc(x_345);
x_348 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_348, 0, x_345);
lean_ctor_set(x_348, 1, x_347);
x_349 = lean_mk_string("private");
lean_inc(x_349);
lean_inc(x_339);
x_350 = lean_name_mk_string(x_339, x_349);
lean_inc(x_224);
x_351 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_351, 0, x_224);
lean_ctor_set(x_351, 1, x_349);
x_352 = lean_unsigned_to_nat(1u);
x_353 = lean_mk_empty_array_with_capacity(x_352);
lean_inc(x_353);
x_354 = lean_array_push(x_353, x_351);
x_355 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_355, 0, x_350);
lean_ctor_set(x_355, 1, x_354);
lean_inc(x_353);
x_356 = lean_array_push(x_353, x_355);
lean_inc(x_345);
x_357 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_357, 0, x_345);
lean_ctor_set(x_357, 1, x_356);
x_358 = lean_mk_string("partial");
lean_inc(x_358);
lean_inc(x_339);
x_359 = lean_name_mk_string(x_339, x_358);
lean_inc(x_224);
x_360 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_360, 0, x_224);
lean_ctor_set(x_360, 1, x_358);
lean_inc(x_353);
x_361 = lean_array_push(x_353, x_360);
x_362 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_362, 0, x_359);
lean_ctor_set(x_362, 1, x_361);
lean_inc(x_353);
x_363 = lean_array_push(x_353, x_362);
lean_inc(x_345);
x_364 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_364, 0, x_345);
lean_ctor_set(x_364, 1, x_363);
x_365 = lean_unsigned_to_nat(6u);
x_366 = lean_mk_empty_array_with_capacity(x_365);
lean_inc(x_348);
x_367 = lean_array_push(x_366, x_348);
lean_inc(x_348);
x_368 = lean_array_push(x_367, x_348);
x_369 = lean_array_push(x_368, x_357);
lean_inc(x_348);
x_370 = lean_array_push(x_369, x_348);
lean_inc(x_348);
x_371 = lean_array_push(x_370, x_348);
x_372 = lean_array_push(x_371, x_364);
x_373 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_373, 0, x_343);
lean_ctor_set(x_373, 1, x_372);
x_374 = lean_mk_string("def");
lean_inc(x_374);
lean_inc(x_339);
x_375 = lean_name_mk_string(x_339, x_374);
lean_inc(x_224);
x_376 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_376, 0, x_224);
lean_ctor_set(x_376, 1, x_374);
x_377 = lean_mk_string("declId");
lean_inc(x_339);
x_378 = lean_name_mk_string(x_339, x_377);
x_379 = lean_mk_syntax_ident(x_12);
x_380 = lean_unsigned_to_nat(2u);
x_381 = lean_mk_empty_array_with_capacity(x_380);
lean_inc(x_381);
x_382 = lean_array_push(x_381, x_379);
lean_inc(x_348);
x_383 = lean_array_push(x_382, x_348);
x_384 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_384, 0, x_378);
lean_ctor_set(x_384, 1, x_383);
x_385 = lean_mk_string("optDeclSig");
lean_inc(x_339);
x_386 = lean_name_mk_string(x_339, x_385);
x_387 = l_Array_append___rarg(x_347, x_222);
lean_dec(x_222);
lean_inc(x_345);
x_388 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_388, 0, x_345);
lean_ctor_set(x_388, 1, x_387);
x_389 = lean_mk_string("Term");
x_390 = lean_name_mk_string(x_337, x_389);
x_391 = lean_mk_string("typeSpec");
x_392 = lean_name_mk_string(x_390, x_391);
x_393 = lean_mk_string(":");
lean_inc(x_224);
x_394 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_394, 0, x_224);
lean_ctor_set(x_394, 1, x_393);
x_395 = lean_mk_string("UInt64");
x_396 = lean_string_utf8_byte_size(x_395);
lean_inc(x_395);
x_397 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_397, 0, x_395);
lean_ctor_set(x_397, 1, x_346);
lean_ctor_set(x_397, 2, x_396);
x_398 = lean_name_mk_string(x_333, x_395);
lean_inc(x_398);
x_399 = l_Lean_addMacroScope(x_331, x_398, x_227);
x_400 = lean_box(0);
x_401 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_401, 0, x_398);
lean_ctor_set(x_401, 1, x_400);
x_402 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_402, 0, x_401);
lean_ctor_set(x_402, 1, x_400);
lean_inc(x_224);
x_403 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_403, 0, x_224);
lean_ctor_set(x_403, 1, x_397);
lean_ctor_set(x_403, 2, x_399);
lean_ctor_set(x_403, 3, x_402);
lean_inc(x_381);
x_404 = lean_array_push(x_381, x_394);
x_405 = lean_array_push(x_404, x_403);
x_406 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_406, 0, x_392);
lean_ctor_set(x_406, 1, x_405);
x_407 = lean_array_push(x_353, x_406);
x_408 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_408, 0, x_345);
lean_ctor_set(x_408, 1, x_407);
lean_inc(x_381);
x_409 = lean_array_push(x_381, x_388);
x_410 = lean_array_push(x_409, x_408);
x_411 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_411, 0, x_386);
lean_ctor_set(x_411, 1, x_410);
x_412 = lean_mk_string("declValSimple");
x_413 = lean_name_mk_string(x_339, x_412);
x_414 = lean_mk_string(":=");
x_415 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_415, 0, x_224);
lean_ctor_set(x_415, 1, x_414);
x_416 = lean_unsigned_to_nat(3u);
x_417 = lean_mk_empty_array_with_capacity(x_416);
x_418 = lean_array_push(x_417, x_415);
x_419 = lean_array_push(x_418, x_220);
x_420 = lean_array_push(x_419, x_348);
x_421 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_421, 0, x_413);
lean_ctor_set(x_421, 1, x_420);
x_422 = lean_unsigned_to_nat(4u);
x_423 = lean_mk_empty_array_with_capacity(x_422);
x_424 = lean_array_push(x_423, x_376);
x_425 = lean_array_push(x_424, x_384);
x_426 = lean_array_push(x_425, x_411);
x_427 = lean_array_push(x_426, x_421);
x_428 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_428, 0, x_375);
lean_ctor_set(x_428, 1, x_427);
x_429 = lean_array_push(x_381, x_373);
x_430 = lean_array_push(x_429, x_428);
x_431 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_431, 0, x_341);
lean_ctor_set(x_431, 1, x_430);
x_432 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_432, 0, x_431);
lean_ctor_set(x_432, 1, x_332);
return x_432;
}
}
}
else
{
uint8_t x_433; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_433 = !lean_is_exclusive(x_19);
if (x_433 == 0)
{
return x_19;
}
else
{
lean_object* x_434; lean_object* x_435; lean_object* x_436; 
x_434 = lean_ctor_get(x_19, 0);
x_435 = lean_ctor_get(x_19, 1);
lean_inc(x_435);
lean_inc(x_434);
lean_dec(x_19);
x_436 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_436, 0, x_434);
lean_ctor_set(x_436, 1, x_435);
return x_436;
}
}
}
else
{
uint8_t x_437; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_437 = !lean_is_exclusive(x_16);
if (x_437 == 0)
{
return x_16;
}
else
{
lean_object* x_438; lean_object* x_439; lean_object* x_440; 
x_438 = lean_ctor_get(x_16, 0);
x_439 = lean_ctor_get(x_16, 1);
lean_inc(x_439);
lean_inc(x_438);
lean_dec(x_16);
x_440 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_440, 0, x_438);
lean_ctor_set(x_440, 1, x_439);
return x_440;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_Hashable_mkAuxFunction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Deriving_Hashable_mkAuxFunction(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkHashFuncs___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
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
lean_inc(x_1);
x_19 = l_Lean_Elab_Deriving_Hashable_mkAuxFunction(x_1, x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
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
lean_dec(x_1);
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
lean_dec(x_1);
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
lean_dec(x_1);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_5);
lean_ctor_set(x_31, 1, x_12);
return x_31;
}
}
}
lean_object* l_Lean_Elab_Deriving_Hashable_mkHashFuncs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_mk_empty_array_with_capacity(x_9);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_array_get_size(x_11);
lean_dec(x_11);
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
x_15 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkHashFuncs___spec__1(x_1, x_14, x_12, x_9, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
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
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkHashFuncs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Hashable_mkHashFuncs___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_List_map___at___private_Lean_Elab_Deriving_Hashable_0__Lean_Elab_Deriving_Hashable_mkHashableInstanceCmds___spec__1(lean_object* x_1) {
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
x_7 = l_List_map___at___private_Lean_Elab_Deriving_Hashable_0__Lean_Elab_Deriving_Hashable_mkHashableInstanceCmds___spec__1(x_5);
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
x_11 = l_List_map___at___private_Lean_Elab_Deriving_Hashable_0__Lean_Elab_Deriving_Hashable_mkHashableInstanceCmds___spec__1(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l___private_Lean_Elab_Deriving_Hashable_0__Lean_Elab_Deriving_Hashable_mkHashableInstanceCmds(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = l_Lean_instInhabitedName;
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_array_get(x_9, x_1, x_10);
x_12 = lean_mk_string("hash");
lean_inc(x_2);
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
lean_inc(x_14);
x_16 = l_Lean_Elab_Deriving_Hashable_mkHashFuncs(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_box(0);
x_20 = lean_mk_string("Hashable");
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
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
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
x_35 = lean_mk_string("hashable");
x_36 = lean_name_mk_string(x_34, x_35);
x_55 = lean_st_ref_get(x_7, x_25);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_56, 3);
lean_inc(x_57);
lean_dec(x_56);
x_58 = lean_ctor_get_uint8(x_57, sizeof(void*)*1);
lean_dec(x_57);
if (x_58 == 0)
{
lean_object* x_59; uint8_t x_60; 
x_59 = lean_ctor_get(x_55, 1);
lean_inc(x_59);
lean_dec(x_55);
x_60 = 0;
x_37 = x_60;
x_38 = x_59;
goto block_54;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_61 = lean_ctor_get(x_55, 1);
lean_inc(x_61);
lean_dec(x_55);
lean_inc(x_36);
x_62 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_36, x_2, x_3, x_4, x_5, x_6, x_7, x_61);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_unbox(x_63);
lean_dec(x_63);
x_37 = x_65;
x_38 = x_64;
goto block_54;
}
block_54:
{
if (x_37 == 0)
{
lean_object* x_39; 
lean_dec(x_36);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_26)) {
 x_39 = lean_alloc_ctor(0, 2, 0);
} else {
 x_39 = x_26;
}
lean_ctor_set(x_39, 0, x_30);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
lean_dec(x_26);
x_40 = lean_mk_string("\n");
x_41 = l_Lean_stringToMessageData(x_40);
lean_dec(x_40);
lean_inc(x_30);
x_42 = lean_array_to_list(lean_box(0), x_30);
x_43 = l_List_map___at___private_Lean_Elab_Deriving_Hashable_0__Lean_Elab_Deriving_Hashable_mkHashableInstanceCmds___spec__1(x_42);
x_44 = l_Lean_MessageData_ofList(x_43);
lean_dec(x_43);
x_45 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_45, 0, x_41);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_mk_string("");
x_47 = l_Lean_stringToMessageData(x_46);
lean_dec(x_46);
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_36, x_48, x_2, x_3, x_4, x_5, x_6, x_7, x_38);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; 
x_51 = lean_ctor_get(x_49, 0);
lean_dec(x_51);
lean_ctor_set(x_49, 0, x_30);
return x_49;
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_49, 1);
lean_inc(x_52);
lean_dec(x_49);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_30);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_66 = !lean_is_exclusive(x_23);
if (x_66 == 0)
{
return x_23;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_23, 0);
x_68 = lean_ctor_get(x_23, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_23);
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
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_70 = !lean_is_exclusive(x_16);
if (x_70 == 0)
{
return x_16;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_16, 0);
x_72 = lean_ctor_get(x_16, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_16);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_74 = !lean_is_exclusive(x_13);
if (x_74 == 0)
{
return x_13;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_13, 0);
x_76 = lean_ctor_get(x_13, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_13);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
}
lean_object* l___private_Lean_Elab_Deriving_Hashable_0__Lean_Elab_Deriving_Hashable_mkHashableInstanceCmds___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Deriving_Hashable_0__Lean_Elab_Deriving_Hashable_mkHashableInstanceCmds(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_isInductive___at_Lean_Elab_Deriving_Hashable_mkHashableHandler___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Hashable_mkHashableHandler___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_uget(x_1, x_2);
x_9 = l_Lean_isInductive___at_Lean_Elab_Deriving_Hashable_mkHashableHandler___spec__1(x_8, x_4, x_5, x_6);
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
lean_object* l_Lean_Elab_Deriving_Hashable_mkHashableHandler(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
x_81 = l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Hashable_mkHashableHandler___spec__2(x_1, x_79, x_80, x_2, x_3, x_4);
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
x_17 = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Hashable_0__Lean_Elab_Deriving_Hashable_mkHashableInstanceCmds___boxed), 8, 1);
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
lean_object* l_Lean_isInductive___at_Lean_Elab_Deriving_Hashable_mkHashableHandler___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_isInductive___at_Lean_Elab_Deriving_Hashable_mkHashableHandler___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Hashable_mkHashableHandler___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Hashable_mkHashableHandler___spec__2(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Deriving_Hashable_initFn____x40_Lean_Elab_Deriving_Hashable___hyg_1587_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Hashable");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Hashable_mkHashableHandler), 4, 0);
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
x_12 = lean_mk_string("hashable");
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
lean_object* initialize_Lean_Meta_Inductive(lean_object*);
lean_object* initialize_Lean_Elab_Deriving_Basic(lean_object*);
lean_object* initialize_Lean_Elab_Deriving_Util(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Deriving_Hashable(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
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
res = l_Lean_Elab_Deriving_Hashable_initFn____x40_Lean_Elab_Deriving_Hashable___hyg_1587_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
