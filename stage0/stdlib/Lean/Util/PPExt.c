// Lean compiler output
// Module: Lean.Util.PPExt
// Imports: Init Lean.Environment Lean.Syntax Lean.MetavarContext Lean.Data.OpenDecl
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PPContext_mctx___default;
lean_object* l_Lean_MetavarContext_instantiateMVars(lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_PPContext_opts___default;
lean_object* l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg(lean_object*, lean_object*);
lean_object* l_Lean_PPContext_lctx___default;
lean_object* l_Lean_PPContext_openDecls___default;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_pp_raw_showInfo;
lean_object* l_Std_fmt___at_Lean_ppExpr___spec__3(lean_object*);
lean_object* l_IO_mkRef___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__2(lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_279_(lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_29_(lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_54_(lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_79_(lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231_(lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_4_(lean_object*);
lean_object* l_Lean_pp_raw;
lean_object* l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1(lean_object*, lean_object*);
uint8_t l_Lean_Option_get___at_Lean_ppTerm___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Option_register___at_Std_Format_initFn____x40_Lean_Data_Format___hyg_25____spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppGoal(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_pp_raw_maxDepth;
lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_ppExpr___spec__3___boxed(lean_object*);
lean_object* l_Lean_pp_rawOnError;
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_register___at_Std_Format_initFn____x40_Lean_Data_Format___hyg_49____spec__1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Option_get___at_Lean_ppExpr___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_ppFnsRef;
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* l_Lean_ppExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PPContext_currNamespace___default;
lean_object* l_Lean_Option_get___at_Lean_ppExpr___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPPFns;
lean_object* l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1(lean_object*);
lean_object* l_Lean_Option_get___at_Lean_ppTerm___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_279____lambda__1(lean_object*);
lean_object* l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_ppExpr___spec__2(lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppTerm(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KVMap_findCore(lean_object*, lean_object*);
lean_object* l_Lean_ppExt;
lean_object* l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStxAux(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_4_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_2 = lean_box(0);
x_3 = lean_mk_string("pp");
lean_inc(x_3);
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("raw");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = 0;
x_8 = lean_mk_string("(pretty printer) print raw expression/syntax tree");
x_9 = lean_box(x_7);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
lean_ctor_set(x_10, 2, x_8);
x_11 = l_Lean_Option_register___at_Std_Format_initFn____x40_Lean_Data_Format___hyg_49____spec__1(x_6, x_10, x_1);
lean_dec(x_10);
return x_11;
}
}
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_29_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_2 = lean_box(0);
x_3 = lean_mk_string("pp");
lean_inc(x_3);
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("raw");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("showInfo");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = 0;
x_10 = lean_mk_string("(pretty printer) print `SourceInfo` metadata with raw printer");
x_11 = lean_box(x_9);
x_12 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
lean_ctor_set(x_12, 2, x_10);
x_13 = l_Lean_Option_register___at_Std_Format_initFn____x40_Lean_Data_Format___hyg_49____spec__1(x_8, x_12, x_1);
lean_dec(x_12);
return x_13;
}
}
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_54_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_2 = lean_box(0);
x_3 = lean_mk_string("pp");
lean_inc(x_3);
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("raw");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("maxDepth");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_unsigned_to_nat(32u);
x_10 = lean_mk_string("(pretty printer) maximum `Syntax` depth for raw printer");
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_3);
lean_ctor_set(x_11, 2, x_10);
x_12 = l_Lean_Option_register___at_Std_Format_initFn____x40_Lean_Data_Format___hyg_25____spec__1(x_8, x_11, x_1);
lean_dec(x_11);
return x_12;
}
}
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_79_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_2 = lean_box(0);
x_3 = lean_mk_string("pp");
lean_inc(x_3);
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("rawOnError");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = 0;
x_8 = lean_mk_string("(pretty printer) fallback to 'raw' printer when pretty printer fails");
x_9 = lean_box(x_7);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
lean_ctor_set(x_10, 2, x_8);
x_11 = l_Lean_Option_register___at_Std_Format_initFn____x40_Lean_Data_Format___hyg_49____spec__1(x_6, x_10, x_1);
lean_dec(x_10);
return x_11;
}
}
static lean_object* _init_l_Lean_PPContext_mctx___default() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_inc_n(x_4, 4);
x_5 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_4);
lean_ctor_set(x_5, 4, x_4);
lean_ctor_set(x_5, 5, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_PPContext_lctx___default() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_1 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_unsigned_to_nat(32u);
x_6 = lean_mk_empty_array_with_capacity(x_5);
lean_inc(x_6);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = 5;
x_9 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set(x_9, 2, x_3);
lean_ctor_set(x_9, 3, x_3);
lean_ctor_set_usize(x_9, 4, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
static lean_object* _init_l_Lean_PPContext_opts___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_PPContext_currNamespace___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_PPContext_openDecls___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_instInhabitedPPFns() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_alloc_closure((void*)(l_Lean_instInhabitedPersistentEnvExtension___lambda__1___boxed), 3, 0);
lean_inc_n(x_1, 2);
x_2 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
lean_ctor_set(x_2, 2, x_1);
return x_2;
}
}
lean_object* l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_Lean_KVMap_findCore(x_1, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_inc(x_4);
return x_4;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
if (lean_obj_tag(x_6) == 3)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
else
{
lean_dec(x_6);
lean_inc(x_4);
return x_4;
}
}
}
}
lean_object* l_IO_mkRef___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_st_mk_ref(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_expr_dbg_to_string(x_2);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_1, 3);
x_5 = l_Lean_pp_raw_maxDepth;
x_6 = l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1(x_4, x_5);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = 0;
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Syntax_formatStxAux(x_7, x_8, x_9, x_2);
lean_dec(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
}
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_mk_string("goal");
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_alloc_closure((void*)(l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__1___boxed), 3, 0);
x_3 = lean_alloc_closure((void*)(l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__2___boxed), 3, 0);
x_4 = lean_alloc_closure((void*)(l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__3___boxed), 3, 0);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
x_6 = l_IO_mkRef___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__2(x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__2(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____lambda__3(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_279____lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_ppFnsRef;
x_3 = lean_st_ref_get(x_2, x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
lean_object* l_Lean_initFn____x40_Lean_Util_PPExt___hyg_279_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_Lean_initFn____x40_Lean_Util_PPExt___hyg_279____lambda__1), 1, 0);
x_3 = l_Lean_EnvExtensionInterfaceUnsafe_registerExt___rarg(x_2, x_1);
return x_3;
}
}
uint8_t l_Lean_Option_get___at_Lean_ppExpr___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_Lean_KVMap_findCore(x_1, x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = lean_unbox(x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
if (lean_obj_tag(x_7) == 1)
{
uint8_t x_8; 
x_8 = lean_ctor_get_uint8(x_7, 0);
lean_dec(x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = lean_unbox(x_4);
return x_9;
}
}
}
}
lean_object* l_Std_fmt___at_Lean_ppExpr___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_io_error_to_string(x_1);
x_3 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
lean_object* l_Std_fmt___at_Lean_ppExpr___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_expr_dbg_to_string(x_1);
x_3 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
lean_object* l_Lean_ppExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = l_Lean_MetavarContext_instantiateMVars(x_4, x_2);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = l_Lean_pp_raw;
x_9 = l_Lean_Option_get___at_Lean_ppExpr___spec__1(x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = l_Lean_ppExt;
x_12 = l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg(x_11, x_10);
lean_dec(x_10);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
lean_inc(x_6);
x_14 = lean_apply_3(x_13, x_1, x_6, x_3);
if (lean_obj_tag(x_14) == 0)
{
lean_dec(x_7);
lean_dec(x_6);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = l_Lean_pp_rawOnError;
x_18 = l_Lean_Option_get___at_Lean_ppExpr___spec__1(x_7, x_17);
lean_dec(x_7);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_16);
lean_dec(x_6);
x_19 = lean_mk_string("failed to pretty print expression (use 'set_option pp.rawOnError true' for raw representation)");
x_20 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set_tag(x_14, 0);
lean_ctor_set(x_14, 0, x_20);
return x_14;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_21 = lean_mk_string("[Error pretty printing expression: ");
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = l_Std_fmt___at_Lean_ppExpr___spec__2(x_16);
x_24 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_mk_string(". Falling back to raw printer.]");
x_26 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_box(1);
x_29 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_mk_string("");
x_31 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_31, 0, x_30);
lean_inc(x_31);
x_32 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Std_fmt___at_Lean_ppExpr___spec__3(x_6);
lean_dec(x_6);
x_34 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_31);
lean_ctor_set_tag(x_14, 0);
lean_ctor_set(x_14, 0, x_35);
return x_14;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_36 = lean_ctor_get(x_14, 0);
x_37 = lean_ctor_get(x_14, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_14);
x_38 = l_Lean_pp_rawOnError;
x_39 = l_Lean_Option_get___at_Lean_ppExpr___spec__1(x_7, x_38);
lean_dec(x_7);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_36);
lean_dec(x_6);
x_40 = lean_mk_string("failed to pretty print expression (use 'set_option pp.rawOnError true' for raw representation)");
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_40);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_37);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_43 = lean_mk_string("[Error pretty printing expression: ");
x_44 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = l_Std_fmt___at_Lean_ppExpr___spec__2(x_36);
x_46 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_mk_string(". Falling back to raw printer.]");
x_48 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_box(1);
x_51 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_mk_string("");
x_53 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_53, 0, x_52);
lean_inc(x_53);
x_54 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_53);
x_55 = l_Std_fmt___at_Lean_ppExpr___spec__3(x_6);
lean_dec(x_6);
x_56 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_53);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_37);
return x_58;
}
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_7);
lean_dec(x_1);
x_59 = lean_expr_dbg_to_string(x_6);
lean_dec(x_6);
x_60 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_60, 0, x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_3);
return x_61;
}
}
}
lean_object* l_Lean_Option_get___at_Lean_ppExpr___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Option_get___at_Lean_ppExpr___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Std_fmt___at_Lean_ppExpr___spec__3___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_fmt___at_Lean_ppExpr___spec__3(x_1);
lean_dec(x_1);
return x_2;
}
}
uint8_t l_Lean_Option_get___at_Lean_ppTerm___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_Lean_KVMap_findCore(x_1, x_3);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = lean_unbox(x_4);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
if (lean_obj_tag(x_7) == 1)
{
uint8_t x_8; 
x_8 = lean_ctor_get_uint8(x_7, 0);
lean_dec(x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = lean_unbox(x_4);
return x_9;
}
}
}
}
lean_object* l_Lean_ppTerm(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
x_5 = l_Lean_pp_raw;
x_6 = l_Lean_Option_get___at_Lean_ppExpr___spec__1(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = l_Lean_ppExt;
x_9 = l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg(x_8, x_7);
lean_dec(x_7);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_2);
x_11 = lean_apply_3(x_10, x_1, x_2, x_3);
if (lean_obj_tag(x_11) == 0)
{
lean_dec(x_4);
lean_dec(x_2);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = l_Lean_pp_rawOnError;
x_15 = l_Lean_Option_get___at_Lean_ppExpr___spec__1(x_4, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_2);
x_16 = lean_mk_string("failed to pretty print term (use 'set_option pp.rawOnError true' for raw representation)");
x_17 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set_tag(x_11, 0);
lean_ctor_set(x_11, 0, x_17);
return x_11;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_18 = lean_mk_string("[Error pretty printing syntax: ");
x_19 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = l_Std_fmt___at_Lean_ppExpr___spec__2(x_13);
x_21 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_mk_string(". Falling back to raw printer.]");
x_23 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_box(1);
x_26 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_mk_string("");
x_28 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_28, 0, x_27);
lean_inc(x_28);
x_29 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_pp_raw_maxDepth;
x_31 = l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1(x_4, x_30);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = l_Lean_pp_raw_showInfo;
x_34 = l_Lean_Option_get___at_Lean_ppTerm___spec__1(x_4, x_33);
lean_dec(x_4);
x_35 = lean_unsigned_to_nat(0u);
x_36 = l_Lean_Syntax_formatStxAux(x_32, x_34, x_35, x_2);
lean_dec(x_32);
x_37 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_37, 0, x_29);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_28);
lean_ctor_set_tag(x_11, 0);
lean_ctor_set(x_11, 0, x_38);
return x_11;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_39 = lean_ctor_get(x_11, 0);
x_40 = lean_ctor_get(x_11, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_11);
x_41 = l_Lean_pp_rawOnError;
x_42 = l_Lean_Option_get___at_Lean_ppExpr___spec__1(x_4, x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_39);
lean_dec(x_4);
lean_dec(x_2);
x_43 = lean_mk_string("failed to pretty print term (use 'set_option pp.rawOnError true' for raw representation)");
x_44 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_44, 0, x_43);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_40);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_46 = lean_mk_string("[Error pretty printing syntax: ");
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = l_Std_fmt___at_Lean_ppExpr___spec__2(x_39);
x_49 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_mk_string(". Falling back to raw printer.]");
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_box(1);
x_54 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_mk_string("");
x_56 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_56, 0, x_55);
lean_inc(x_56);
x_57 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_57, 0, x_54);
lean_ctor_set(x_57, 1, x_56);
x_58 = l_Lean_pp_raw_maxDepth;
x_59 = l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1(x_4, x_58);
x_60 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_60, 0, x_59);
x_61 = l_Lean_pp_raw_showInfo;
x_62 = l_Lean_Option_get___at_Lean_ppTerm___spec__1(x_4, x_61);
lean_dec(x_4);
x_63 = lean_unsigned_to_nat(0u);
x_64 = l_Lean_Syntax_formatStxAux(x_60, x_62, x_63, x_2);
lean_dec(x_60);
x_65 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_65, 0, x_57);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_56);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_40);
return x_67;
}
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_1);
x_68 = l_Lean_pp_raw_maxDepth;
x_69 = l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1(x_4, x_68);
x_70 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_70, 0, x_69);
x_71 = l_Lean_pp_raw_showInfo;
x_72 = l_Lean_Option_get___at_Lean_ppTerm___spec__1(x_4, x_71);
lean_dec(x_4);
x_73 = lean_unsigned_to_nat(0u);
x_74 = l_Lean_Syntax_formatStxAux(x_70, x_72, x_73, x_2);
lean_dec(x_70);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_3);
return x_75;
}
}
}
lean_object* l_Lean_Option_get___at_Lean_ppTerm___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Option_get___at_Lean_ppTerm___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_ppGoal(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = l_Lean_ppExt;
x_6 = l_Lean_EnvExtensionInterfaceUnsafe_getState___rarg(x_5, x_4);
lean_dec(x_4);
x_7 = lean_ctor_get(x_6, 2);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_apply_3(x_7, x_1, x_2, x_3);
return x_8;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Environment(lean_object*);
lean_object* initialize_Lean_Syntax(lean_object*);
lean_object* initialize_Lean_MetavarContext(lean_object*);
lean_object* initialize_Lean_Data_OpenDecl(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Util_PPExt(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Syntax(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_MetavarContext(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_OpenDecl(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_initFn____x40_Lean_Util_PPExt___hyg_4_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_pp_raw = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_pp_raw);
lean_dec_ref(res);
res = l_Lean_initFn____x40_Lean_Util_PPExt___hyg_29_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_pp_raw_showInfo = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_pp_raw_showInfo);
lean_dec_ref(res);
res = l_Lean_initFn____x40_Lean_Util_PPExt___hyg_54_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_pp_raw_maxDepth = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_pp_raw_maxDepth);
lean_dec_ref(res);
res = l_Lean_initFn____x40_Lean_Util_PPExt___hyg_79_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_pp_rawOnError = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_pp_rawOnError);
lean_dec_ref(res);
l_Lean_PPContext_mctx___default = _init_l_Lean_PPContext_mctx___default();
lean_mark_persistent(l_Lean_PPContext_mctx___default);
l_Lean_PPContext_lctx___default = _init_l_Lean_PPContext_lctx___default();
lean_mark_persistent(l_Lean_PPContext_lctx___default);
l_Lean_PPContext_opts___default = _init_l_Lean_PPContext_opts___default();
lean_mark_persistent(l_Lean_PPContext_opts___default);
l_Lean_PPContext_currNamespace___default = _init_l_Lean_PPContext_currNamespace___default();
lean_mark_persistent(l_Lean_PPContext_currNamespace___default);
l_Lean_PPContext_openDecls___default = _init_l_Lean_PPContext_openDecls___default();
lean_mark_persistent(l_Lean_PPContext_openDecls___default);
l_Lean_instInhabitedPPFns = _init_l_Lean_instInhabitedPPFns();
lean_mark_persistent(l_Lean_instInhabitedPPFns);
res = l_Lean_initFn____x40_Lean_Util_PPExt___hyg_231_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_ppFnsRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_ppFnsRef);
lean_dec_ref(res);
res = l_Lean_initFn____x40_Lean_Util_PPExt___hyg_279_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_ppExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_ppExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
