// Lean compiler output
// Module: Lean.Elab.Deriving.Util
// Imports: Init Lean.Parser.Term Lean.Elab.Term
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
size_t l_USize_add(size_t, size_t);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstanceCmds___spec__1___lambda__1___boxed(lean_object**);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
extern lean_object* l_Lean_Parser_Term_instBinder;
lean_object* l_Subarray_forInUnsafe_loop___at_Lean_Elab_Deriving_mkDiscrs___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Deriving_mkInstImplicitBinders___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Deriving_mkLet___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInductiveApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInductArgNames___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Deriving_mkInductArgNames___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkContext_match__1(lean_object*);
lean_object* l_Lean_Elab_Deriving_implicitBinderF;
lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkHeader___boxed(lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2(lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescope___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryPureCoe_x3f___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_mkContext___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_mkContext___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_mkContext___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkDiscr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_instBinderF;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstImplicitBinders___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInductArgNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkHeader___rarg___boxed__const__1;
lean_object* l_Lean_Elab_Deriving_mkDiscrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_mkContext___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkInductiveApp___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkDiscrs___boxed__const__1;
lean_object* l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkDiscr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInstanceCmds(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Deriving_mkLet___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_forInUnsafe_loop___at_Lean_Elab_Deriving_mkDiscrs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_mkContext___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkDiscrs___spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstImplicitBinders___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Deriving_mkInstImplicitBinders___spec__2(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkHeader___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_contains___at_Lean_findField_x3f___spec__1(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Deriving_mkInductArgNames___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_implicitBinder(uint8_t);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstanceCmds___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstanceCmds___spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_explicitBinder(uint8_t);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkHeader___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkImplicitBinders___boxed__const__1;
lean_object* l_Lean_Elab_Deriving_mkInstanceCmds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkHeader(lean_object*);
lean_object* l_Lean_Elab_Deriving_mkContext_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkLocalInstanceLetDecls___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkHeader___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkDiscrs___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkInductiveApp___spec__1(size_t, size_t, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_explicitBinderF;
lean_object* l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_mkContext___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstanceCmds___spec__1___boxed(lean_object**);
lean_object* l_Array_ofSubarray___rarg(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkImplicitBinders___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkImplicitBinders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_mkContext___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkHeader___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_syntax_ident(lean_object*);
extern lean_object* l_Lean_instInhabitedInductiveVal;
lean_object* l_List_map___at_Lean_Elab_Deriving_mkContext___spec__5(lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkLocalInstanceLetDecls___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInductArgNames___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_mkContext___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkHeader___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkInductiveApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkImplicitBinders___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_Deriving_implicitBinderF() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = l_Lean_Parser_Term_implicitBinder(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_instBinderF() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Term_instBinder;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_explicitBinderF() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = l_Lean_Parser_Term_explicitBinder(x_1);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Deriving_mkInductArgNames___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_3 < x_2;
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_7);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_array_uget(x_1, x_3);
x_15 = l_Lean_Expr_fvarId_x21(x_14);
lean_dec(x_14);
lean_inc(x_7);
x_16 = l_Lean_Meta_getLocalDecl(x_15, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_LocalDecl_userName(x_17);
lean_dec(x_17);
x_20 = lean_erase_macro_scopes(x_19);
x_21 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_20, x_9, x_10, x_18);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_array_push(x_4, x_22);
x_25 = 1;
x_26 = x_3 + x_25;
x_3 = x_26;
x_4 = x_24;
x_11 = x_23;
goto _start;
}
else
{
uint8_t x_28; 
lean_dec(x_7);
lean_dec(x_4);
x_28 = !lean_is_exclusive(x_16);
if (x_28 == 0)
{
return x_16;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_16, 0);
x_30 = lean_ctor_get(x_16, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_16);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryPureCoe_x3f___spec__1___rarg___lambda__1), 10, 3);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_3);
lean_closure_set(x_10, 2, x_4);
x_11 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp___rarg(x_1, x_10, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_mkInductArgNames___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_mk_empty_array_with_capacity(x_10);
x_12 = lean_array_get_size(x_1);
x_13 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_14 = 0;
x_15 = l_Array_forInUnsafe_loop___at_Lean_Elab_Deriving_mkInductArgNames___spec__1(x_1, x_13, x_14, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_mkInductArgNames(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_mkInductArgNames___lambda__1___boxed), 9, 0);
x_12 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(x_10, x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_12;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Deriving_mkInductArgNames___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Elab_Deriving_mkInductArgNames___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_Deriving_mkInductArgNames___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Deriving_mkInductArgNames___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkInductiveApp___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = lean_mk_syntax_ident(x_9);
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
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 3);
x_5 = l_Lean_SourceInfo_fromRef(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg___boxed), 3, 0);
return x_5;
}
}
lean_object* l_Lean_Elab_Deriving_mkInductiveApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_mk_syntax_ident(x_11);
x_13 = lean_array_get_size(x_2);
x_14 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_15 = 0;
x_16 = x_2;
x_17 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkInductiveApp___spec__1(x_14, x_15, x_16);
x_18 = x_17;
x_19 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_7, x_8, x_9);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_23);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
x_27 = lean_box(0);
x_28 = lean_mk_string("Lean");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Parser");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = lean_mk_string("Term");
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("app");
lean_inc(x_33);
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = lean_mk_string("explicit");
x_37 = lean_name_mk_string(x_33, x_36);
x_38 = lean_mk_string("@");
x_39 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_39, 0, x_20);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_unsigned_to_nat(2u);
x_41 = lean_mk_empty_array_with_capacity(x_40);
lean_inc(x_41);
x_42 = lean_array_push(x_41, x_39);
x_43 = lean_array_push(x_42, x_12);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_37);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_mk_string("null");
x_46 = lean_name_mk_string(x_27, x_45);
x_47 = lean_unsigned_to_nat(0u);
x_48 = lean_mk_empty_array_with_capacity(x_47);
x_49 = l_Array_append___rarg(x_48, x_18);
lean_dec(x_18);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_46);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_array_push(x_41, x_44);
x_52 = lean_array_push(x_51, x_50);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_35);
lean_ctor_set(x_53, 1, x_52);
lean_ctor_set(x_24, 0, x_53);
return x_24;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_54 = lean_ctor_get(x_24, 1);
lean_inc(x_54);
lean_dec(x_24);
x_55 = lean_box(0);
x_56 = lean_mk_string("Lean");
x_57 = lean_name_mk_string(x_55, x_56);
x_58 = lean_mk_string("Parser");
x_59 = lean_name_mk_string(x_57, x_58);
x_60 = lean_mk_string("Term");
x_61 = lean_name_mk_string(x_59, x_60);
x_62 = lean_mk_string("app");
lean_inc(x_61);
x_63 = lean_name_mk_string(x_61, x_62);
x_64 = lean_mk_string("explicit");
x_65 = lean_name_mk_string(x_61, x_64);
x_66 = lean_mk_string("@");
x_67 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_67, 0, x_20);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_unsigned_to_nat(2u);
x_69 = lean_mk_empty_array_with_capacity(x_68);
lean_inc(x_69);
x_70 = lean_array_push(x_69, x_67);
x_71 = lean_array_push(x_70, x_12);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_65);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_mk_string("null");
x_74 = lean_name_mk_string(x_55, x_73);
x_75 = lean_unsigned_to_nat(0u);
x_76 = lean_mk_empty_array_with_capacity(x_75);
x_77 = l_Array_append___rarg(x_76, x_18);
lean_dec(x_18);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_74);
lean_ctor_set(x_78, 1, x_77);
x_79 = lean_array_push(x_69, x_72);
x_80 = lean_array_push(x_79, x_78);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_63);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_54);
return x_82;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkInductiveApp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkInductiveApp___spec__1(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Deriving_mkInductiveApp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Deriving_mkInductiveApp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkImplicitBinders___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_2 < x_1;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = x_3;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; size_t x_54; size_t x_55; lean_object* x_56; lean_object* x_57; 
x_14 = lean_array_uget(x_3, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_3, x_2, x_15);
x_17 = x_14;
x_18 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_8, x_9, x_10);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5, x_6, x_7, x_8, x_9, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_Elab_Term_getMainModule___rarg(x_9, x_22);
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
x_32 = lean_mk_string("implicitBinder");
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("{");
lean_inc(x_19);
x_35 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_35, 0, x_19);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_mk_string("null");
x_37 = lean_name_mk_string(x_25, x_36);
x_38 = lean_mk_syntax_ident(x_17);
x_39 = lean_unsigned_to_nat(1u);
x_40 = lean_mk_empty_array_with_capacity(x_39);
x_41 = lean_array_push(x_40, x_38);
lean_inc(x_37);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_37);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_mk_empty_array_with_capacity(x_15);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_37);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_mk_string("}");
x_46 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_46, 0, x_19);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_unsigned_to_nat(4u);
x_48 = lean_mk_empty_array_with_capacity(x_47);
x_49 = lean_array_push(x_48, x_35);
x_50 = lean_array_push(x_49, x_42);
x_51 = lean_array_push(x_50, x_44);
x_52 = lean_array_push(x_51, x_46);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_33);
lean_ctor_set(x_53, 1, x_52);
x_54 = 1;
x_55 = x_2 + x_54;
x_56 = x_53;
x_57 = lean_array_uset(x_16, x_2, x_56);
x_2 = x_55;
x_3 = x_57;
x_10 = x_24;
goto _start;
}
}
}
static lean_object* _init_l_Lean_Elab_Deriving_mkImplicitBinders___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_mkImplicitBinders(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_array_get_size(x_1);
x_10 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_11 = x_1;
x_12 = lean_box_usize(x_10);
x_13 = l_Lean_Elab_Deriving_mkImplicitBinders___boxed__const__1;
x_14 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkImplicitBinders___spec__1___boxed), 10, 3);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_13);
lean_closure_set(x_14, 2, x_11);
x_15 = x_14;
x_16 = lean_apply_7(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_16;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkImplicitBinders___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkImplicitBinders___spec__1(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstImplicitBinders___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
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
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_sub(x_6, x_20);
lean_dec(x_6);
x_29 = l_Lean_instInhabitedExpr;
x_30 = lean_array_get(x_29, x_3, x_7);
x_31 = lean_mk_empty_array_with_capacity(x_20);
lean_inc(x_31);
x_32 = lean_array_push(x_31, x_30);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_1);
x_33 = l_Lean_Meta_mkAppM(x_1, x_32, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_36 = l_Lean_Meta_isTypeCorrect(x_34, x_11, x_12, x_13, x_14, x_35);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_unbox(x_37);
lean_dec(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_31);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_8);
x_22 = x_40;
x_23 = x_39;
goto block_28;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_dec(x_36);
x_42 = l_Lean_instInhabitedName;
x_43 = lean_array_get(x_42, x_2, x_7);
x_44 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_13, x_14, x_41);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_Elab_Term_getCurrMacroScope(x_9, x_10, x_11, x_12, x_13, x_14, x_46);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = l_Lean_Elab_Term_getMainModule___rarg(x_14, x_48);
x_50 = lean_ctor_get(x_49, 1);
lean_inc(x_50);
lean_dec(x_49);
x_51 = lean_box(0);
x_52 = lean_mk_string("Lean");
x_53 = lean_name_mk_string(x_51, x_52);
x_54 = lean_mk_string("Parser");
x_55 = lean_name_mk_string(x_53, x_54);
x_56 = lean_mk_string("Term");
x_57 = lean_name_mk_string(x_55, x_56);
x_58 = lean_mk_string("instBinder");
lean_inc(x_57);
x_59 = lean_name_mk_string(x_57, x_58);
x_60 = lean_mk_string("[");
lean_inc(x_45);
x_61 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_61, 0, x_45);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_mk_string("null");
x_63 = lean_name_mk_string(x_51, x_62);
lean_inc(x_4);
lean_inc(x_63);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_4);
x_65 = lean_mk_string("app");
x_66 = lean_name_mk_string(x_57, x_65);
lean_inc(x_1);
x_67 = lean_mk_syntax_ident(x_1);
x_68 = lean_mk_syntax_ident(x_43);
x_69 = lean_array_push(x_31, x_68);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_63);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_unsigned_to_nat(2u);
x_72 = lean_mk_empty_array_with_capacity(x_71);
x_73 = lean_array_push(x_72, x_67);
x_74 = lean_array_push(x_73, x_70);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_66);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_mk_string("]");
x_77 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_77, 0, x_45);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_unsigned_to_nat(4u);
x_79 = lean_mk_empty_array_with_capacity(x_78);
x_80 = lean_array_push(x_79, x_61);
x_81 = lean_array_push(x_80, x_64);
x_82 = lean_array_push(x_81, x_75);
x_83 = lean_array_push(x_82, x_77);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_59);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_array_push(x_8, x_84);
x_86 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_86, 0, x_85);
x_22 = x_86;
x_23 = x_50;
goto block_28;
}
}
else
{
lean_object* x_87; lean_object* x_88; 
lean_dec(x_31);
x_87 = lean_ctor_get(x_33, 1);
lean_inc(x_87);
lean_dec(x_33);
x_88 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_88, 0, x_8);
x_22 = x_88;
x_23 = x_87;
goto block_28;
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
lean_object* x_89; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_8);
lean_ctor_set(x_89, 1, x_15);
return x_89;
}
}
else
{
lean_object* x_90; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_8);
lean_ctor_set(x_90, 1, x_15);
return x_90;
}
}
}
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Deriving_mkInstImplicitBinders___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___private_Lean_Elab_Term_0__Lean_Elab_Term_tryPureCoe_x3f___spec__1___rarg___lambda__1), 10, 3);
lean_closure_set(x_11, 0, x_3);
lean_closure_set(x_11, 1, x_4);
lean_closure_set(x_11, 2, x_5);
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux___rarg(x_1, x_2, x_11, x_6, x_7, x_8, x_9, x_10);
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
}
lean_object* l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Deriving_mkInstImplicitBinders___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Deriving_mkInstImplicitBinders___spec__2___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_mk_empty_array_with_capacity(x_12);
x_14 = lean_array_get_size(x_3);
x_15 = lean_unsigned_to_nat(1u);
lean_inc(x_14);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_16, 2, x_15);
lean_inc(x_13);
x_17 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstImplicitBinders___spec__1(x_1, x_2, x_3, x_13, x_16, x_14, x_12, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_16);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_mkInstImplicitBinders___lambda__1___boxed), 11, 2);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_3);
x_16 = l_Lean_Meta_forallBoundedTelescope___at_Lean_Elab_Deriving_mkInstImplicitBinders___spec__2___rarg(x_12, x_14, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_16;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstImplicitBinders___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstImplicitBinders___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
}
lean_object* l_Lean_Elab_Deriving_mkInstImplicitBinders___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Deriving_mkInstImplicitBinders___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* l_Lean_Elab_Deriving_mkContext_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_3(x_2, x_4, x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
lean_object* l_Lean_Elab_Deriving_mkContext_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_mkContext_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_mkContext___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
lean_object* l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_mkContext___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
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
if (lean_obj_tag(x_10) == 5)
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
x_24 = lean_mk_string("' is not a inductive type");
x_25 = l_Lean_stringToMessageData(x_24);
lean_dec(x_24);
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_throwError___at_Lean_Elab_Deriving_mkContext___spec__2(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
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
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_mkContext___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_10; 
lean_dec(x_3);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
lean_inc(x_3);
x_13 = l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_mkContext___spec__1(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_push(x_2, x_14);
x_1 = x_12;
x_2 = x_16;
x_9 = x_15;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_12);
lean_dec(x_3);
lean_dec(x_2);
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
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_mkContext___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_11; 
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_erase_macro_scopes(x_12);
if (lean_obj_tag(x_14) == 1)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
lean_inc(x_1);
x_16 = lean_string_append(x_1, x_15);
lean_dec(x_15);
x_17 = lean_box(0);
x_18 = lean_name_mk_string(x_17, x_16);
x_19 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_18, x_8, x_9, x_10);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_array_push(x_3, x_20);
x_2 = x_13;
x_3 = x_22;
x_10 = x_21;
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_14);
x_24 = lean_box(0);
x_25 = lean_mk_string("instFn");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_26, x_8, x_9, x_10);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_array_push(x_3, x_28);
x_2 = x_13;
x_3 = x_30;
x_10 = x_29;
goto _start;
}
}
}
}
lean_object* l_List_map___at_Lean_Elab_Deriving_mkContext___spec__5(lean_object* x_1) {
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
x_6 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_6, 0, x_4);
x_7 = l_List_map___at_Lean_Elab_Deriving_mkContext___spec__5(x_5);
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
x_10 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_10, 0, x_8);
x_11 = l_List_map___at_Lean_Elab_Deriving_mkContext___spec__5(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_mkContext(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_3);
x_10 = l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_mkContext___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_mk_empty_array_with_capacity(x_13);
x_15 = lean_ctor_get(x_11, 3);
lean_inc(x_15);
lean_inc(x_3);
lean_inc(x_14);
lean_inc(x_15);
x_16 = l_List_forIn_loop___at_Lean_Elab_Deriving_mkContext___spec__3(x_15, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_List_forIn_loop___at_Lean_Elab_Deriving_mkContext___spec__4(x_1, x_15, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
if (lean_is_exclusive(x_19)) {
 lean_ctor_release(x_19, 0);
 lean_ctor_release(x_19, 1);
 x_22 = x_19;
} else {
 lean_dec_ref(x_19);
 x_22 = lean_box(0);
}
x_23 = lean_box(0);
x_24 = lean_mk_string("Elab");
x_25 = lean_name_mk_string(x_23, x_24);
x_26 = lean_mk_string("Deriving");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("beq");
x_29 = lean_name_mk_string(x_27, x_28);
x_71 = lean_st_ref_get(x_8, x_21);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_72, 3);
lean_inc(x_73);
lean_dec(x_72);
x_74 = lean_ctor_get_uint8(x_73, sizeof(void*)*1);
lean_dec(x_73);
if (x_74 == 0)
{
lean_object* x_75; uint8_t x_76; 
x_75 = lean_ctor_get(x_71, 1);
lean_inc(x_75);
lean_dec(x_71);
x_76 = 0;
x_30 = x_76;
x_31 = x_75;
goto block_70;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_77 = lean_ctor_get(x_71, 1);
lean_inc(x_77);
lean_dec(x_71);
lean_inc(x_29);
x_78 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_29, x_3, x_4, x_5, x_6, x_7, x_8, x_77);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_unbox(x_79);
lean_dec(x_79);
x_30 = x_81;
x_31 = x_80;
goto block_70;
}
block_70:
{
if (x_30 == 0)
{
uint8_t x_32; 
lean_dec(x_29);
lean_dec(x_3);
x_32 = lean_ctor_get_uint8(x_11, sizeof(void*)*5 + 3);
lean_dec(x_11);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_array_get_size(x_17);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_dec_lt(x_34, x_33);
lean_dec(x_33);
x_36 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_36, 0, x_17);
lean_ctor_set(x_36, 1, x_20);
lean_ctor_set_uint8(x_36, sizeof(void*)*2, x_35);
if (lean_is_scalar(x_22)) {
 x_37 = lean_alloc_ctor(0, 2, 0);
} else {
 x_37 = x_22;
}
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_31);
return x_37;
}
else
{
uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_38 = 1;
x_39 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_39, 0, x_17);
lean_ctor_set(x_39, 1, x_20);
lean_ctor_set_uint8(x_39, sizeof(void*)*2, x_38);
if (lean_is_scalar(x_22)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_22;
}
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_31);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
lean_dec(x_22);
x_41 = lean_mk_string("");
x_42 = l_Lean_stringToMessageData(x_41);
lean_dec(x_41);
lean_inc(x_20);
x_43 = lean_array_to_list(lean_box(0), x_20);
x_44 = l_List_map___at_Lean_Elab_Deriving_mkContext___spec__5(x_43);
x_45 = l_Lean_MessageData_ofList(x_44);
lean_dec(x_44);
lean_inc(x_42);
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_42);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_42);
x_48 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_29, x_47, x_3, x_4, x_5, x_6, x_7, x_8, x_31);
lean_dec(x_3);
x_49 = lean_ctor_get_uint8(x_11, sizeof(void*)*5 + 3);
lean_dec(x_11);
if (x_49 == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_48);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; lean_object* x_55; 
x_51 = lean_ctor_get(x_48, 0);
lean_dec(x_51);
x_52 = lean_array_get_size(x_17);
x_53 = lean_unsigned_to_nat(1u);
x_54 = lean_nat_dec_lt(x_53, x_52);
lean_dec(x_52);
x_55 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_55, 0, x_17);
lean_ctor_set(x_55, 1, x_20);
lean_ctor_set_uint8(x_55, sizeof(void*)*2, x_54);
lean_ctor_set(x_48, 0, x_55);
return x_48;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; lean_object* x_60; lean_object* x_61; 
x_56 = lean_ctor_get(x_48, 1);
lean_inc(x_56);
lean_dec(x_48);
x_57 = lean_array_get_size(x_17);
x_58 = lean_unsigned_to_nat(1u);
x_59 = lean_nat_dec_lt(x_58, x_57);
lean_dec(x_57);
x_60 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_60, 0, x_17);
lean_ctor_set(x_60, 1, x_20);
lean_ctor_set_uint8(x_60, sizeof(void*)*2, x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_56);
return x_61;
}
}
else
{
uint8_t x_62; 
x_62 = !lean_is_exclusive(x_48);
if (x_62 == 0)
{
lean_object* x_63; uint8_t x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_48, 0);
lean_dec(x_63);
x_64 = 1;
x_65 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_65, 0, x_17);
lean_ctor_set(x_65, 1, x_20);
lean_ctor_set_uint8(x_65, sizeof(void*)*2, x_64);
lean_ctor_set(x_48, 0, x_65);
return x_48;
}
else
{
lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; 
x_66 = lean_ctor_get(x_48, 1);
lean_inc(x_66);
lean_dec(x_48);
x_67 = 1;
x_68 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_68, 0, x_17);
lean_ctor_set(x_68, 1, x_20);
lean_ctor_set_uint8(x_68, sizeof(void*)*2, x_67);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_66);
return x_69;
}
}
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_3);
lean_dec(x_1);
x_82 = !lean_is_exclusive(x_16);
if (x_82 == 0)
{
return x_16;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_16, 0);
x_84 = lean_ctor_get(x_16, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_16);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_3);
lean_dec(x_1);
x_86 = !lean_is_exclusive(x_10);
if (x_86 == 0)
{
return x_10;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_10, 0);
x_88 = lean_ctor_get(x_10, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_10);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_mkContext___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Deriving_mkContext___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_mkContext___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_getConstInfoInduct___at_Lean_Elab_Deriving_mkContext___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_mkContext___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_List_forIn_loop___at_Lean_Elab_Deriving_mkContext___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_mkContext___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_List_forIn_loop___at_Lean_Elab_Deriving_mkContext___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
lean_object* l_Lean_Elab_Deriving_mkContext___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Deriving_mkContext(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkLocalInstanceLetDecls___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
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
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_7, x_21);
lean_dec(x_7);
x_23 = l_Lean_instInhabitedInductiveVal;
x_24 = lean_array_get(x_23, x_5, x_8);
x_25 = lean_ctor_get(x_1, 1);
x_26 = l_Lean_instInhabitedName;
x_27 = lean_array_get(x_26, x_25, x_8);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_24);
x_28 = l_Lean_Elab_Deriving_mkInductArgNames(x_24, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_ctor_get(x_24, 1);
lean_inc(x_31);
x_32 = lean_array_get_size(x_29);
lean_inc(x_31);
x_33 = l_Array_toSubarray___rarg(x_29, x_31, x_32);
x_34 = l_Array_ofSubarray___rarg(x_33);
lean_dec(x_33);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_34);
x_35 = l_Lean_Elab_Deriving_mkImplicitBinders(x_34, x_10, x_11, x_12, x_13, x_14, x_15, x_30);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
lean_inc(x_3);
x_38 = l_Array_toSubarray___rarg(x_3, x_19, x_31);
x_39 = l_Array_ofSubarray___rarg(x_38);
lean_dec(x_38);
x_40 = l_Array_append___rarg(x_39, x_34);
lean_dec(x_34);
x_41 = l_Lean_Elab_Deriving_mkInductiveApp(x_24, x_40, x_10, x_11, x_12, x_13, x_14, x_15, x_37);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_43);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
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
lean_inc(x_2);
x_59 = lean_mk_syntax_ident(x_2);
x_60 = lean_mk_string("null");
x_61 = lean_name_mk_string(x_50, x_60);
x_62 = lean_mk_empty_array_with_capacity(x_21);
lean_inc(x_62);
x_63 = lean_array_push(x_62, x_42);
lean_inc(x_61);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_unsigned_to_nat(2u);
x_66 = lean_mk_empty_array_with_capacity(x_65);
lean_inc(x_66);
x_67 = lean_array_push(x_66, x_59);
x_68 = lean_array_push(x_67, x_64);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_58);
lean_ctor_set(x_69, 1, x_68);
x_70 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_49);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_72);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
lean_dec(x_73);
x_75 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_74);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = lean_mk_string("anonymousCtor");
lean_inc(x_56);
x_78 = lean_name_mk_string(x_56, x_77);
x_79 = lean_mk_string("⟨");
lean_inc(x_71);
x_80 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_80, 0, x_71);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_mk_syntax_ident(x_27);
lean_inc(x_62);
x_82 = lean_array_push(x_62, x_81);
lean_inc(x_61);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_61);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_mk_string("⟩");
x_85 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_85, 0, x_71);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_unsigned_to_nat(3u);
x_87 = lean_mk_empty_array_with_capacity(x_86);
x_88 = lean_array_push(x_87, x_80);
x_89 = lean_array_push(x_88, x_83);
x_90 = lean_array_push(x_89, x_85);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_78);
lean_ctor_set(x_91, 1, x_90);
x_92 = lean_mk_string("localinst");
x_93 = lean_name_mk_string(x_50, x_92);
x_94 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_93, x_14, x_15, x_76);
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_94, 1);
lean_inc(x_96);
lean_dec(x_94);
x_97 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_96);
x_98 = lean_ctor_get(x_97, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_97, 1);
lean_inc(x_99);
lean_dec(x_97);
x_100 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_99);
x_101 = lean_ctor_get(x_100, 1);
lean_inc(x_101);
lean_dec(x_100);
x_102 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_101);
x_103 = lean_ctor_get(x_102, 1);
lean_inc(x_103);
lean_dec(x_102);
x_104 = lean_mk_string("letDecl");
lean_inc(x_56);
x_105 = lean_name_mk_string(x_56, x_104);
x_106 = lean_mk_string("letIdDecl");
lean_inc(x_56);
x_107 = lean_name_mk_string(x_56, x_106);
x_108 = lean_mk_syntax_ident(x_95);
lean_inc(x_4);
x_109 = l_Array_append___rarg(x_4, x_36);
lean_dec(x_36);
lean_inc(x_61);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_61);
lean_ctor_set(x_110, 1, x_109);
x_111 = lean_mk_string("typeSpec");
x_112 = lean_name_mk_string(x_56, x_111);
x_113 = lean_mk_string(":");
lean_inc(x_98);
x_114 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_114, 0, x_98);
lean_ctor_set(x_114, 1, x_113);
x_115 = lean_array_push(x_66, x_114);
x_116 = lean_array_push(x_115, x_69);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_112);
lean_ctor_set(x_117, 1, x_116);
lean_inc(x_62);
x_118 = lean_array_push(x_62, x_117);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_61);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_mk_string(":=");
x_121 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_121, 0, x_98);
lean_ctor_set(x_121, 1, x_120);
x_122 = lean_unsigned_to_nat(5u);
x_123 = lean_mk_empty_array_with_capacity(x_122);
x_124 = lean_array_push(x_123, x_108);
x_125 = lean_array_push(x_124, x_110);
x_126 = lean_array_push(x_125, x_119);
x_127 = lean_array_push(x_126, x_121);
x_128 = lean_array_push(x_127, x_91);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_107);
lean_ctor_set(x_129, 1, x_128);
x_130 = lean_array_push(x_62, x_129);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_105);
lean_ctor_set(x_131, 1, x_130);
x_132 = lean_array_push(x_9, x_131);
x_133 = lean_ctor_get(x_6, 2);
x_134 = lean_nat_add(x_8, x_133);
lean_dec(x_8);
x_7 = x_22;
x_8 = x_134;
x_9 = x_132;
x_16 = x_103;
goto _start;
}
else
{
uint8_t x_136; 
lean_dec(x_34);
lean_dec(x_31);
lean_dec(x_27);
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_136 = !lean_is_exclusive(x_35);
if (x_136 == 0)
{
return x_35;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = lean_ctor_get(x_35, 0);
x_138 = lean_ctor_get(x_35, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_35);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_137);
lean_ctor_set(x_139, 1, x_138);
return x_139;
}
}
}
else
{
uint8_t x_140; 
lean_dec(x_27);
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_140 = !lean_is_exclusive(x_28);
if (x_140 == 0)
{
return x_28;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_141 = lean_ctor_get(x_28, 0);
x_142 = lean_ctor_get(x_28, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_28);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
return x_143;
}
}
}
else
{
lean_object* x_144; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_9);
lean_ctor_set(x_144, 1, x_16);
return x_144;
}
}
else
{
lean_object* x_145; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_9);
lean_ctor_set(x_145, 1, x_16);
return x_145;
}
}
}
lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_mk_empty_array_with_capacity(x_11);
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_array_get_size(x_13);
x_15 = lean_unsigned_to_nat(1u);
lean_inc(x_14);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_16, 2, x_15);
lean_inc(x_12);
x_17 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkLocalInstanceLetDecls___spec__1(x_1, x_2, x_3, x_12, x_13, x_16, x_14, x_11, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_16);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkLocalInstanceLetDecls___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkLocalInstanceLetDecls___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_17;
}
}
lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Deriving_mkLet___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_2 == x_3;
if (x_12 == 0)
{
size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_13 = 1;
x_14 = x_2 - x_13;
x_15 = lean_array_uget(x_1, x_14);
x_16 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_9, x_10, x_11);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_18);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_box(0);
x_24 = lean_mk_string("Lean");
x_25 = lean_name_mk_string(x_23, x_24);
x_26 = lean_mk_string("Parser");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("Term");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("let");
lean_inc(x_30);
x_31 = lean_name_mk_string(x_29, x_30);
lean_inc(x_17);
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_17);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_mk_string("null");
x_34 = lean_name_mk_string(x_23, x_33);
x_35 = lean_mk_string(";");
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_17);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_mk_empty_array_with_capacity(x_37);
x_39 = lean_array_push(x_38, x_36);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_34);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_unsigned_to_nat(4u);
x_42 = lean_mk_empty_array_with_capacity(x_41);
x_43 = lean_array_push(x_42, x_32);
x_44 = lean_array_push(x_43, x_15);
x_45 = lean_array_push(x_44, x_40);
x_46 = lean_array_push(x_45, x_4);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_31);
lean_ctor_set(x_47, 1, x_46);
x_2 = x_14;
x_4 = x_47;
x_11 = x_22;
goto _start;
}
else
{
lean_object* x_49; 
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_4);
lean_ctor_set(x_49, 1, x_11);
return x_49;
}
}
}
lean_object* l_Lean_Elab_Deriving_mkLet(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_get_size(x_1);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_15 = 0;
x_16 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Deriving_mkLet___spec__1(x_1, x_14, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_16;
}
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Deriving_mkLet___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Deriving_mkLet___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Elab_Deriving_mkLet___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Deriving_mkLet(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstanceCmds___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_18 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_15, x_16, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_Term_getCurrMacroScope(x_11, x_12, x_13, x_14, x_15, x_16, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_Elab_Term_getMainModule___rarg(x_16, x_22);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
x_26 = lean_mk_string("Command");
x_27 = lean_name_mk_string(x_1, x_26);
x_28 = lean_mk_string("declaration");
lean_inc(x_27);
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("declModifiers");
lean_inc(x_27);
x_31 = lean_name_mk_string(x_27, x_30);
lean_inc(x_3);
lean_inc(x_2);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_2);
lean_ctor_set(x_32, 1, x_3);
x_33 = lean_unsigned_to_nat(6u);
x_34 = lean_mk_empty_array_with_capacity(x_33);
lean_inc(x_32);
lean_inc(x_34);
x_35 = lean_array_push(x_34, x_32);
lean_inc(x_32);
x_36 = lean_array_push(x_35, x_32);
lean_inc(x_32);
x_37 = lean_array_push(x_36, x_32);
lean_inc(x_32);
x_38 = lean_array_push(x_37, x_32);
lean_inc(x_32);
x_39 = lean_array_push(x_38, x_32);
lean_inc(x_32);
x_40 = lean_array_push(x_39, x_32);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_31);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_mk_string("instance");
lean_inc(x_42);
lean_inc(x_27);
x_43 = lean_name_mk_string(x_27, x_42);
x_44 = lean_mk_string("attrKind");
lean_inc(x_4);
x_45 = lean_name_mk_string(x_4, x_44);
lean_inc(x_32);
x_46 = lean_array_push(x_5, x_32);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
lean_inc(x_19);
x_48 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_48, 0, x_19);
lean_ctor_set(x_48, 1, x_42);
x_49 = lean_mk_string("declSig");
lean_inc(x_27);
x_50 = lean_name_mk_string(x_27, x_49);
x_51 = l_Array_append___rarg(x_3, x_6);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_2);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_mk_string("typeSpec");
x_54 = lean_name_mk_string(x_4, x_53);
x_55 = lean_mk_string(":");
lean_inc(x_19);
x_56 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_56, 0, x_19);
lean_ctor_set(x_56, 1, x_55);
lean_inc(x_7);
x_57 = lean_array_push(x_7, x_56);
x_58 = lean_array_push(x_57, x_8);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_54);
lean_ctor_set(x_59, 1, x_58);
lean_inc(x_7);
x_60 = lean_array_push(x_7, x_52);
x_61 = lean_array_push(x_60, x_59);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_50);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_mk_string("declValSimple");
x_64 = lean_name_mk_string(x_27, x_63);
x_65 = lean_mk_string(":=");
x_66 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_66, 0, x_19);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_unsigned_to_nat(3u);
x_68 = lean_mk_empty_array_with_capacity(x_67);
x_69 = lean_array_push(x_68, x_66);
x_70 = lean_array_push(x_69, x_10);
lean_inc(x_32);
x_71 = lean_array_push(x_70, x_32);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_64);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_array_push(x_34, x_47);
x_74 = lean_array_push(x_73, x_48);
lean_inc(x_32);
x_75 = lean_array_push(x_74, x_32);
x_76 = lean_array_push(x_75, x_32);
x_77 = lean_array_push(x_76, x_62);
x_78 = lean_array_push(x_77, x_72);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_43);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_array_push(x_7, x_41);
x_81 = lean_array_push(x_80, x_79);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_29);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_array_push(x_9, x_82);
x_84 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_23, 0, x_84);
return x_23;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_85 = lean_ctor_get(x_23, 1);
lean_inc(x_85);
lean_dec(x_23);
x_86 = lean_mk_string("Command");
x_87 = lean_name_mk_string(x_1, x_86);
x_88 = lean_mk_string("declaration");
lean_inc(x_87);
x_89 = lean_name_mk_string(x_87, x_88);
x_90 = lean_mk_string("declModifiers");
lean_inc(x_87);
x_91 = lean_name_mk_string(x_87, x_90);
lean_inc(x_3);
lean_inc(x_2);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_2);
lean_ctor_set(x_92, 1, x_3);
x_93 = lean_unsigned_to_nat(6u);
x_94 = lean_mk_empty_array_with_capacity(x_93);
lean_inc(x_92);
lean_inc(x_94);
x_95 = lean_array_push(x_94, x_92);
lean_inc(x_92);
x_96 = lean_array_push(x_95, x_92);
lean_inc(x_92);
x_97 = lean_array_push(x_96, x_92);
lean_inc(x_92);
x_98 = lean_array_push(x_97, x_92);
lean_inc(x_92);
x_99 = lean_array_push(x_98, x_92);
lean_inc(x_92);
x_100 = lean_array_push(x_99, x_92);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_91);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_mk_string("instance");
lean_inc(x_102);
lean_inc(x_87);
x_103 = lean_name_mk_string(x_87, x_102);
x_104 = lean_mk_string("attrKind");
lean_inc(x_4);
x_105 = lean_name_mk_string(x_4, x_104);
lean_inc(x_92);
x_106 = lean_array_push(x_5, x_92);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
lean_inc(x_19);
x_108 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_108, 0, x_19);
lean_ctor_set(x_108, 1, x_102);
x_109 = lean_mk_string("declSig");
lean_inc(x_87);
x_110 = lean_name_mk_string(x_87, x_109);
x_111 = l_Array_append___rarg(x_3, x_6);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_2);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_mk_string("typeSpec");
x_114 = lean_name_mk_string(x_4, x_113);
x_115 = lean_mk_string(":");
lean_inc(x_19);
x_116 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_116, 0, x_19);
lean_ctor_set(x_116, 1, x_115);
lean_inc(x_7);
x_117 = lean_array_push(x_7, x_116);
x_118 = lean_array_push(x_117, x_8);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_114);
lean_ctor_set(x_119, 1, x_118);
lean_inc(x_7);
x_120 = lean_array_push(x_7, x_112);
x_121 = lean_array_push(x_120, x_119);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_110);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_mk_string("declValSimple");
x_124 = lean_name_mk_string(x_87, x_123);
x_125 = lean_mk_string(":=");
x_126 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_126, 0, x_19);
lean_ctor_set(x_126, 1, x_125);
x_127 = lean_unsigned_to_nat(3u);
x_128 = lean_mk_empty_array_with_capacity(x_127);
x_129 = lean_array_push(x_128, x_126);
x_130 = lean_array_push(x_129, x_10);
lean_inc(x_92);
x_131 = lean_array_push(x_130, x_92);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_124);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_array_push(x_94, x_107);
x_134 = lean_array_push(x_133, x_108);
lean_inc(x_92);
x_135 = lean_array_push(x_134, x_92);
x_136 = lean_array_push(x_135, x_92);
x_137 = lean_array_push(x_136, x_122);
x_138 = lean_array_push(x_137, x_132);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_103);
lean_ctor_set(x_139, 1, x_138);
x_140 = lean_array_push(x_7, x_101);
x_141 = lean_array_push(x_140, x_139);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_89);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_array_push(x_9, x_142);
x_144 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_144, 0, x_143);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_85);
return x_145;
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstanceCmds___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_7, 1);
x_19 = lean_nat_dec_le(x_18, x_9);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_nat_dec_eq(x_8, x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_sub(x_8, x_22);
lean_dec(x_8);
x_31 = l_Lean_instInhabitedInductiveVal;
x_32 = lean_array_get(x_31, x_6, x_9);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
lean_dec(x_33);
x_35 = l_Array_contains___at_Lean_findField_x3f___spec__1(x_3, x_34);
lean_dec(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
lean_dec(x_32);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_10);
x_24 = x_36;
x_25 = x_17;
goto block_30;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_1, 1);
x_38 = l_Lean_instInhabitedName;
x_39 = lean_array_get(x_38, x_37, x_9);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_32);
x_40 = l_Lean_Elab_Deriving_mkInductArgNames(x_32, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_41);
x_43 = l_Lean_Elab_Deriving_mkImplicitBinders(x_41, x_11, x_12, x_13, x_14, x_15, x_16, x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_41);
lean_inc(x_32);
lean_inc(x_2);
x_46 = l_Lean_Elab_Deriving_mkInstImplicitBinders(x_2, x_32, x_41, x_11, x_12, x_13, x_14, x_15, x_16, x_45);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = l_Array_append___rarg(x_44, x_47);
lean_dec(x_47);
x_50 = l_Lean_Elab_Deriving_mkInductiveApp(x_32, x_41, x_11, x_12, x_13, x_14, x_15, x_16, x_48);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_15, x_16, x_52);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = l_Lean_Elab_Term_getCurrMacroScope(x_11, x_12, x_13, x_14, x_15, x_16, x_54);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_57 = l_Lean_Elab_Term_getMainModule___rarg(x_16, x_56);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_59 = lean_box(0);
x_60 = lean_mk_string("Lean");
x_61 = lean_name_mk_string(x_59, x_60);
x_62 = lean_mk_string("Parser");
x_63 = lean_name_mk_string(x_61, x_62);
x_64 = lean_mk_string("Term");
lean_inc(x_63);
x_65 = lean_name_mk_string(x_63, x_64);
x_66 = lean_mk_string("app");
lean_inc(x_65);
x_67 = lean_name_mk_string(x_65, x_66);
lean_inc(x_2);
x_68 = lean_mk_syntax_ident(x_2);
x_69 = lean_mk_string("null");
x_70 = lean_name_mk_string(x_59, x_69);
x_71 = lean_mk_empty_array_with_capacity(x_22);
lean_inc(x_71);
x_72 = lean_array_push(x_71, x_51);
lean_inc(x_70);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_70);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_unsigned_to_nat(2u);
x_75 = lean_mk_empty_array_with_capacity(x_74);
lean_inc(x_75);
x_76 = lean_array_push(x_75, x_68);
x_77 = lean_array_push(x_76, x_73);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_67);
lean_ctor_set(x_78, 1, x_77);
if (x_4 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_79 = lean_mk_syntax_ident(x_39);
lean_inc(x_5);
x_80 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstanceCmds___spec__1___lambda__1(x_63, x_70, x_5, x_65, x_71, x_49, x_75, x_78, x_10, x_79, x_11, x_12, x_13, x_14, x_15, x_16, x_58);
lean_dec(x_49);
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_24 = x_81;
x_25 = x_82;
goto block_30;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_83 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_15, x_16, x_58);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_86 = l_Lean_Elab_Term_getCurrMacroScope(x_11, x_12, x_13, x_14, x_15, x_16, x_85);
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
lean_dec(x_86);
x_88 = l_Lean_Elab_Term_getMainModule___rarg(x_16, x_87);
x_89 = lean_ctor_get(x_88, 1);
lean_inc(x_89);
lean_dec(x_88);
x_90 = lean_mk_string("anonymousCtor");
lean_inc(x_65);
x_91 = lean_name_mk_string(x_65, x_90);
x_92 = lean_mk_string("⟨");
lean_inc(x_84);
x_93 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_93, 0, x_84);
lean_ctor_set(x_93, 1, x_92);
x_94 = lean_mk_syntax_ident(x_39);
lean_inc(x_71);
x_95 = lean_array_push(x_71, x_94);
lean_inc(x_70);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_70);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_mk_string("⟩");
x_98 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_98, 0, x_84);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_unsigned_to_nat(3u);
x_100 = lean_mk_empty_array_with_capacity(x_99);
x_101 = lean_array_push(x_100, x_93);
x_102 = lean_array_push(x_101, x_96);
x_103 = lean_array_push(x_102, x_98);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_91);
lean_ctor_set(x_104, 1, x_103);
lean_inc(x_5);
x_105 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstanceCmds___spec__1___lambda__1(x_63, x_70, x_5, x_65, x_71, x_49, x_75, x_78, x_10, x_104, x_11, x_12, x_13, x_14, x_15, x_16, x_89);
lean_dec(x_49);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
x_24 = x_106;
x_25 = x_107;
goto block_30;
}
}
else
{
uint8_t x_108; 
lean_dec(x_44);
lean_dec(x_41);
lean_dec(x_39);
lean_dec(x_32);
lean_dec(x_23);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_2);
x_108 = !lean_is_exclusive(x_46);
if (x_108 == 0)
{
return x_46;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_46, 0);
x_110 = lean_ctor_get(x_46, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_46);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
else
{
uint8_t x_112; 
lean_dec(x_41);
lean_dec(x_39);
lean_dec(x_32);
lean_dec(x_23);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_2);
x_112 = !lean_is_exclusive(x_43);
if (x_112 == 0)
{
return x_43;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_43, 0);
x_114 = lean_ctor_get(x_43, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_43);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
}
else
{
uint8_t x_116; 
lean_dec(x_39);
lean_dec(x_32);
lean_dec(x_23);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_2);
x_116 = !lean_is_exclusive(x_40);
if (x_116 == 0)
{
return x_40;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_40, 0);
x_118 = lean_ctor_get(x_40, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_40);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
return x_119;
}
}
}
block_30:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_ctor_get(x_7, 2);
x_28 = lean_nat_add(x_9, x_27);
lean_dec(x_9);
x_8 = x_23;
x_9 = x_28;
x_10 = x_26;
x_17 = x_25;
goto _start;
}
}
else
{
lean_object* x_120; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_2);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_10);
lean_ctor_set(x_120, 1, x_17);
return x_120;
}
}
else
{
lean_object* x_121; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_2);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_10);
lean_ctor_set(x_121, 1, x_17);
return x_121;
}
}
}
lean_object* l_Lean_Elab_Deriving_mkInstanceCmds(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_mk_empty_array_with_capacity(x_12);
x_14 = lean_ctor_get(x_1, 0);
x_15 = lean_array_get_size(x_14);
x_16 = lean_unsigned_to_nat(1u);
lean_inc(x_15);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_15);
lean_ctor_set(x_17, 2, x_16);
lean_inc(x_13);
x_18 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstanceCmds___spec__1(x_1, x_2, x_3, x_4, x_13, x_14, x_17, x_15, x_12, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_17);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
return x_18;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstanceCmds___spec__1___lambda__1___boxed(lean_object** _args) {
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
lean_object* x_18; 
x_18 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstanceCmds___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
return x_18;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstanceCmds___spec__1___boxed(lean_object** _args) {
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
x_18 = lean_unbox(x_4);
lean_dec(x_4);
x_19 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkInstanceCmds___spec__1(x_1, x_2, x_3, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_19;
}
}
lean_object* l_Lean_Elab_Deriving_mkInstanceCmds___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_4);
lean_dec(x_4);
x_13 = l_Lean_Elab_Deriving_mkInstanceCmds(x_1, x_2, x_3, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Elab_Deriving_mkDiscr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_12);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
x_16 = lean_box(0);
x_17 = lean_mk_string("Lean");
x_18 = lean_name_mk_string(x_16, x_17);
x_19 = lean_mk_string("Parser");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_mk_string("Term");
x_22 = lean_name_mk_string(x_20, x_21);
x_23 = lean_mk_string("matchDiscr");
x_24 = lean_name_mk_string(x_22, x_23);
x_25 = lean_mk_string("null");
x_26 = lean_name_mk_string(x_16, x_25);
x_27 = lean_unsigned_to_nat(0u);
x_28 = lean_mk_empty_array_with_capacity(x_27);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_mk_syntax_ident(x_1);
x_31 = lean_unsigned_to_nat(2u);
x_32 = lean_mk_empty_array_with_capacity(x_31);
x_33 = lean_array_push(x_32, x_29);
x_34 = lean_array_push(x_33, x_30);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_24);
lean_ctor_set(x_35, 1, x_34);
lean_ctor_set(x_13, 0, x_35);
return x_13;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_36 = lean_ctor_get(x_13, 1);
lean_inc(x_36);
lean_dec(x_13);
x_37 = lean_box(0);
x_38 = lean_mk_string("Lean");
x_39 = lean_name_mk_string(x_37, x_38);
x_40 = lean_mk_string("Parser");
x_41 = lean_name_mk_string(x_39, x_40);
x_42 = lean_mk_string("Term");
x_43 = lean_name_mk_string(x_41, x_42);
x_44 = lean_mk_string("matchDiscr");
x_45 = lean_name_mk_string(x_43, x_44);
x_46 = lean_mk_string("null");
x_47 = lean_name_mk_string(x_37, x_46);
x_48 = lean_unsigned_to_nat(0u);
x_49 = lean_mk_empty_array_with_capacity(x_48);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_mk_syntax_ident(x_1);
x_52 = lean_unsigned_to_nat(2u);
x_53 = lean_mk_empty_array_with_capacity(x_52);
x_54 = lean_array_push(x_53, x_50);
x_55 = lean_array_push(x_54, x_51);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_45);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_36);
return x_57;
}
}
}
lean_object* l_Lean_Elab_Deriving_mkDiscr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Deriving_mkDiscr(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkHeader___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
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
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_2, x_16);
lean_dec(x_2);
x_18 = lean_box(0);
x_19 = lean_mk_string("x");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_20, x_9, x_10, x_11);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_array_push(x_4, x_22);
x_25 = lean_ctor_get(x_1, 2);
x_26 = lean_nat_add(x_3, x_25);
lean_dec(x_3);
x_2 = x_17;
x_3 = x_26;
x_4 = x_24;
x_11 = x_23;
goto _start;
}
else
{
lean_object* x_28; 
lean_dec(x_3);
lean_dec(x_2);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_4);
lean_ctor_set(x_28, 1, x_11);
return x_28;
}
}
else
{
lean_object* x_29; 
lean_dec(x_3);
lean_dec(x_2);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_4);
lean_ctor_set(x_29, 1, x_11);
return x_29;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkHeader___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_3 < x_2;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_1);
x_13 = x_4;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; size_t x_63; size_t x_64; lean_object* x_65; lean_object* x_66; 
x_15 = lean_array_uget(x_4, x_3);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_uset(x_4, x_3, x_16);
x_18 = x_15;
x_19 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_9, x_10, x_11);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_23);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_box(0);
x_27 = lean_mk_string("Lean");
x_28 = lean_name_mk_string(x_26, x_27);
x_29 = lean_mk_string("Parser");
x_30 = lean_name_mk_string(x_28, x_29);
x_31 = lean_mk_string("Term");
x_32 = lean_name_mk_string(x_30, x_31);
x_33 = lean_mk_string("explicitBinder");
x_34 = lean_name_mk_string(x_32, x_33);
x_35 = lean_mk_string("(");
lean_inc(x_20);
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_20);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_mk_string("null");
x_38 = lean_name_mk_string(x_26, x_37);
x_39 = lean_mk_syntax_ident(x_18);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_mk_empty_array_with_capacity(x_40);
x_42 = lean_array_push(x_41, x_39);
lean_inc(x_38);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_38);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_mk_string(":");
lean_inc(x_20);
x_45 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_45, 0, x_20);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_unsigned_to_nat(2u);
x_47 = lean_mk_empty_array_with_capacity(x_46);
x_48 = lean_array_push(x_47, x_45);
lean_inc(x_1);
x_49 = lean_array_push(x_48, x_1);
lean_inc(x_38);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_38);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_mk_empty_array_with_capacity(x_16);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_38);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_mk_string(")");
x_54 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_54, 0, x_20);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_unsigned_to_nat(5u);
x_56 = lean_mk_empty_array_with_capacity(x_55);
x_57 = lean_array_push(x_56, x_36);
x_58 = lean_array_push(x_57, x_43);
x_59 = lean_array_push(x_58, x_50);
x_60 = lean_array_push(x_59, x_52);
x_61 = lean_array_push(x_60, x_54);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_34);
lean_ctor_set(x_62, 1, x_61);
x_63 = 1;
x_64 = x_3 + x_63;
x_65 = x_62;
x_66 = lean_array_uset(x_17, x_3, x_65);
x_3 = x_64;
x_4 = x_66;
x_11 = x_25;
goto _start;
}
}
}
static lean_object* _init_l_Lean_Elab_Deriving_mkHeader___rarg___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_mkHeader___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_11 = l_Lean_Elab_Deriving_mkInductArgNames(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
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
lean_inc(x_12);
x_14 = l_Lean_Elab_Deriving_mkImplicitBinders(x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
lean_inc(x_12);
lean_inc(x_3);
x_17 = l_Lean_Elab_Deriving_mkInductiveApp(x_3, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_mk_empty_array_with_capacity(x_20);
x_22 = lean_unsigned_to_nat(1u);
lean_inc(x_2);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_2);
lean_ctor_set(x_23, 2, x_22);
x_24 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkHeader___spec__1(x_23, x_2, x_20, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_19);
lean_dec(x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_12);
x_27 = l_Lean_Elab_Deriving_mkInstImplicitBinders(x_1, x_3, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; size_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = l_Array_append___rarg(x_15, x_28);
lean_dec(x_28);
x_31 = lean_array_get_size(x_25);
x_32 = lean_usize_of_nat(x_31);
lean_dec(x_31);
lean_inc(x_25);
x_33 = x_25;
x_34 = lean_box_usize(x_32);
x_35 = l_Lean_Elab_Deriving_mkHeader___rarg___boxed__const__1;
x_36 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkHeader___spec__2___boxed), 11, 4);
lean_closure_set(x_36, 0, x_18);
lean_closure_set(x_36, 1, x_34);
lean_closure_set(x_36, 2, x_35);
lean_closure_set(x_36, 3, x_33);
x_37 = x_36;
x_38 = lean_apply_7(x_37, x_4, x_5, x_6, x_7, x_8, x_9, x_29);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = l_Array_append___rarg(x_30, x_40);
lean_dec(x_40);
x_42 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_12);
lean_ctor_set(x_42, 2, x_25);
lean_ctor_set(x_38, 0, x_42);
return x_38;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_43 = lean_ctor_get(x_38, 0);
x_44 = lean_ctor_get(x_38, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_38);
x_45 = l_Array_append___rarg(x_30, x_43);
lean_dec(x_43);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_12);
lean_ctor_set(x_46, 2, x_25);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_44);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_30);
lean_dec(x_25);
lean_dec(x_12);
x_48 = !lean_is_exclusive(x_38);
if (x_48 == 0)
{
return x_38;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_38, 0);
x_50 = lean_ctor_get(x_38, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_38);
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
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_52 = !lean_is_exclusive(x_27);
if (x_52 == 0)
{
return x_27;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_27, 0);
x_54 = lean_ctor_get(x_27, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_27);
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
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_14);
if (x_56 == 0)
{
return x_14;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_14, 0);
x_58 = lean_ctor_get(x_14, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_14);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
uint8_t x_60; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_60 = !lean_is_exclusive(x_11);
if (x_60 == 0)
{
return x_11;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_11, 0);
x_62 = lean_ctor_get(x_11, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_11);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_mkHeader(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_mkHeader___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkHeader___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_mkHeader___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
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
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkHeader___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkHeader___spec__2(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_14;
}
}
lean_object* l_Lean_Elab_Deriving_mkHeader___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Deriving_mkHeader(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Subarray_forInUnsafe_loop___at_Lean_Elab_Deriving_mkDiscrs___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_3 < x_2;
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; 
x_14 = lean_ctor_get(x_1, 0);
x_15 = lean_array_uget(x_14, x_3);
x_16 = l_Lean_Elab_Deriving_mkDiscr(x_15, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_array_push(x_4, x_17);
x_20 = 1;
x_21 = x_3 + x_20;
x_3 = x_21;
x_4 = x_19;
x_11 = x_18;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkDiscrs___spec__2(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_2 < x_1;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = x_3;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; size_t x_21; size_t x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_array_uget(x_3, x_2);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_uset(x_3, x_2, x_15);
x_17 = x_14;
x_18 = l_Lean_Elab_Deriving_mkDiscr(x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 1;
x_22 = x_2 + x_21;
x_23 = x_19;
x_24 = lean_array_uset(x_16, x_2, x_23);
x_2 = x_22;
x_3 = x_24;
x_10 = x_20;
goto _start;
}
}
}
static lean_object* _init_l_Lean_Elab_Deriving_mkDiscrs___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_mkDiscrs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; lean_object* x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_mk_empty_array_with_capacity(x_10);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 1);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_array_get_size(x_12);
x_15 = l_Array_toSubarray___rarg(x_12, x_13, x_14);
x_16 = lean_ctor_get(x_15, 2);
lean_inc(x_16);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
x_19 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_20 = l_Subarray_forInUnsafe_loop___at_Lean_Elab_Deriving_mkDiscrs___spec__1(x_15, x_17, x_19, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_15);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_ctor_get(x_1, 2);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_array_get_size(x_23);
x_25 = lean_usize_of_nat(x_24);
lean_dec(x_24);
x_26 = x_23;
x_27 = lean_box_usize(x_25);
x_28 = l_Lean_Elab_Deriving_mkDiscrs___boxed__const__1;
x_29 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkDiscrs___spec__2___boxed), 10, 3);
lean_closure_set(x_29, 0, x_27);
lean_closure_set(x_29, 1, x_28);
lean_closure_set(x_29, 2, x_26);
x_30 = x_29;
x_31 = lean_apply_7(x_30, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = l_Array_append___rarg(x_21, x_33);
lean_dec(x_33);
lean_ctor_set(x_31, 0, x_34);
return x_31;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_31, 0);
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_31);
x_37 = l_Array_append___rarg(x_21, x_35);
lean_dec(x_35);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_21);
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
lean_object* l_Subarray_forInUnsafe_loop___at_Lean_Elab_Deriving_mkDiscrs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Subarray_forInUnsafe_loop___at_Lean_Elab_Deriving_mkDiscrs___spec__1(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkDiscrs___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = l_Array_mapMUnsafe_map___at_Lean_Elab_Deriving_mkDiscrs___spec__2(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Parser_Term(lean_object*);
lean_object* initialize_Lean_Elab_Term(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Deriving_Util(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Term(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Deriving_implicitBinderF = _init_l_Lean_Elab_Deriving_implicitBinderF();
lean_mark_persistent(l_Lean_Elab_Deriving_implicitBinderF);
l_Lean_Elab_Deriving_instBinderF = _init_l_Lean_Elab_Deriving_instBinderF();
lean_mark_persistent(l_Lean_Elab_Deriving_instBinderF);
l_Lean_Elab_Deriving_explicitBinderF = _init_l_Lean_Elab_Deriving_explicitBinderF();
lean_mark_persistent(l_Lean_Elab_Deriving_explicitBinderF);
l_Lean_Elab_Deriving_mkImplicitBinders___boxed__const__1 = _init_l_Lean_Elab_Deriving_mkImplicitBinders___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_Deriving_mkImplicitBinders___boxed__const__1);
l_Lean_Elab_Deriving_mkHeader___rarg___boxed__const__1 = _init_l_Lean_Elab_Deriving_mkHeader___rarg___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_Deriving_mkHeader___rarg___boxed__const__1);
l_Lean_Elab_Deriving_mkDiscrs___boxed__const__1 = _init_l_Lean_Elab_Deriving_mkDiscrs___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_Deriving_mkDiscrs___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
