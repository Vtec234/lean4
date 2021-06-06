// Lean compiler output
// Module: Lean.Meta.Tactic.Simp
// Imports: Init Lean.Meta.Tactic.Simp.SimpLemmas Lean.Meta.Tactic.Simp.CongrLemmas Lean.Meta.Tactic.Simp.Types Lean.Meta.Tactic.Simp.Main Lean.Meta.Tactic.Simp.Rewrite Lean.Meta.Tactic.Simp.SimpAll
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
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Meta_Tactic_Simp___hyg_3_(lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Meta_Tactic_Simp___hyg_12_(lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Meta_Tactic_Simp___hyg_3_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Meta");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("Tactic");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("simp");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = l_Lean_registerTraceClass(x_8, x_1);
return x_9;
}
}
lean_object* l_Lean_initFn____x40_Lean_Meta_Tactic_Simp___hyg_12_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Debug");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("Meta");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Tactic");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("simp");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = l_Lean_registerTraceClass(x_10, x_1);
return x_11;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_SimpLemmas(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_CongrLemmas(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_Types(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_Rewrite(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_SimpAll(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_Tactic_Simp(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_SimpLemmas(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_CongrLemmas(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Types(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Rewrite(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_SimpAll(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_initFn____x40_Lean_Meta_Tactic_Simp___hyg_3_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_initFn____x40_Lean_Meta_Tactic_Simp___hyg_12_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
