// Lean compiler output
// Module: Init.Control.StateCps
// Imports: Init.Control.Lawful
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
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateOfStateCpsT___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_run___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateOfStateCpsT(lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadLiftStateCpsT(lean_object*, lean_object*);
lean_object* l_StateCpsT_lift___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_lift(lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_runK___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateOfStateCpsT___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateOfStateCpsT_match__1___rarg(lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateOfStateCpsT___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateCpsT(lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__10(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__12(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_runK(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadReaderT___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_run_x27___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateOfStateCpsT___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_run_x27(lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_run(lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_run___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOfReaderT___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadStateOfStateCpsT_match__1(lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_instMonadLiftStateCpsT___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateCpsT_runK___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_3(x_1, lean_box(0), x_2, x_3);
return x_4;
}
}
lean_object* l_StateCpsT_runK(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_StateCpsT_runK___rarg), 3, 0);
return x_5;
}
}
lean_object* l_StateCpsT_run___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_StateRefT_x27_run___rarg___lambda__1), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_apply_3(x_2, lean_box(0), x_3, x_4);
return x_5;
}
}
lean_object* l_StateCpsT_run(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_StateCpsT_run___rarg), 3, 0);
return x_4;
}
}
lean_object* l_StateCpsT_run_x27___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_ReaderT_instMonadReaderT___rarg___lambda__4___boxed), 3, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_apply_3(x_2, lean_box(0), x_3, x_4);
return x_5;
}
}
lean_object* l_StateCpsT_run_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_StateCpsT_run_x27___rarg), 3, 0);
return x_4;
}
}
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_1, x_3);
x_6 = lean_apply_2(x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateCpsT___lambda__1), 4, 2);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_apply_3(x_4, lean_box(0), x_6, x_8);
return x_9;
}
}
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_2(x_1, x_2, x_4);
return x_5;
}
}
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateCpsT___lambda__3___boxed), 4, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_3);
x_9 = lean_apply_3(x_4, lean_box(0), x_6, x_8);
return x_9;
}
}
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_2(x_5, x_2, x_4);
return x_6;
}
}
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateCpsT___lambda__1), 4, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_1);
x_6 = lean_apply_3(x_2, lean_box(0), x_4, x_5);
return x_6;
}
}
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateCpsT___lambda__6), 4, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_4);
x_9 = lean_apply_3(x_3, lean_box(0), x_6, x_8);
return x_9;
}
}
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateCpsT___lambda__3___boxed), 4, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_apply_3(x_2, lean_box(0), x_4, x_5);
return x_6;
}
}
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateCpsT___lambda__8), 4, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_4);
x_9 = lean_apply_3(x_3, lean_box(0), x_6, x_8);
return x_9;
}
}
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_3(x_1, lean_box(0), x_4, x_2);
return x_5;
}
}
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateCpsT___lambda__10___boxed), 4, 2);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_apply_3(x_3, lean_box(0), x_6, x_8);
return x_9;
}
}
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_4(x_1, x_3, lean_box(0), x_4, x_2);
return x_5;
}
}
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateCpsT___lambda__12), 4, 2);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_apply_3(x_3, lean_box(0), x_6, x_8);
return x_9;
}
}
lean_object* l_StateCpsT_instMonadStateCpsT(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateCpsT___lambda__2), 7, 0);
x_4 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateCpsT___lambda__4), 7, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateCpsT___lambda__5), 5, 0);
x_7 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateCpsT___lambda__7), 7, 0);
x_8 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateCpsT___lambda__9), 7, 0);
x_9 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateCpsT___lambda__11), 7, 0);
x_10 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_6);
lean_ctor_set(x_10, 2, x_7);
lean_ctor_set(x_10, 3, x_8);
lean_ctor_set(x_10, 4, x_9);
x_11 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateCpsT___lambda__13), 7, 0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_StateCpsT_instMonadStateCpsT___lambda__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_StateCpsT_instMonadStateCpsT___lambda__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_StateCpsT_instMonadStateCpsT___lambda__10(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_StateCpsT_instMonadStateOfStateCpsT_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_StateCpsT_instMonadStateOfStateCpsT_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateOfStateCpsT_match__1___rarg), 2, 0);
return x_4;
}
}
lean_object* l_StateCpsT_instMonadStateOfStateCpsT___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_2);
x_4 = lean_apply_2(x_3, x_2, x_2);
return x_4;
}
}
lean_object* l_StateCpsT_instMonadStateOfStateCpsT___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = lean_apply_2(x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_StateCpsT_instMonadStateOfStateCpsT___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_apply_1(x_2, x_4);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_5, x_7, x_8);
return x_9;
}
}
lean_object* l_StateCpsT_instMonadStateOfStateCpsT(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateOfStateCpsT___lambda__1), 3, 0);
x_4 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateOfStateCpsT___lambda__2___boxed), 4, 0);
x_5 = lean_alloc_closure((void*)(l_StateCpsT_instMonadStateOfStateCpsT___lambda__3), 5, 0);
x_6 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_5);
return x_6;
}
}
lean_object* l_StateCpsT_instMonadStateOfStateCpsT___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_StateCpsT_instMonadStateOfStateCpsT___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_StateCpsT_lift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOfReaderT___rarg___lambda__2), 3, 2);
lean_closure_set(x_7, 0, x_5);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_2, x_7);
return x_8;
}
}
lean_object* l_StateCpsT_lift(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_StateCpsT_lift___rarg), 5, 0);
return x_4;
}
}
lean_object* l_StateCpsT_instMonadLiftStateCpsT___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOfReaderT___rarg___lambda__2), 3, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_5);
x_9 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_3, x_8);
return x_9;
}
}
lean_object* l_StateCpsT_instMonadLiftStateCpsT(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_StateCpsT_instMonadLiftStateCpsT___rarg), 6, 0);
return x_3;
}
}
lean_object* initialize_Init_Control_Lawful(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Control_StateCps(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_Lawful(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
