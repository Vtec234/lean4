// Lean compiler output
// Module: Init.Control.Id
// Imports: Init.Core
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
lean_object* l_Id_instOfNatId___rarg(lean_object*);
lean_object* l_Id_instMonadId___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instOfNatId(lean_object*, lean_object*);
lean_object* l_Id_instOfNatId___boxed(lean_object*, lean_object*);
lean_object* l_Id_run(lean_object*);
lean_object* l_Id_instMonadId___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_run___rarg___boxed(lean_object*);
lean_object* l_Id_instOfNatId___rarg___boxed(lean_object*);
lean_object* l_Id_instMonadId___lambda__3___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonadId;
lean_object* l_Id_instMonadId___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonadId___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_run___rarg(lean_object*);
lean_object* l_Id_instMonadId___lambda__3(lean_object*, lean_object*);
lean_object* l_Id_instMonadId___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonadId___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonadId___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
}
lean_object* l_Id_instMonadId___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_3);
return x_3;
}
}
lean_object* l_Id_instMonadId___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Id_instMonadId___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_inc(x_4);
return x_4;
}
}
lean_object* l_Id_instMonadId___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_1(x_4, x_3);
return x_5;
}
}
static lean_object* _init_l_Id_instMonadId() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = lean_alloc_closure((void*)(l_Id_instMonadId___lambda__1), 4, 0);
x_2 = lean_alloc_closure((void*)(l_Id_instMonadId___lambda__2___boxed), 4, 0);
lean_inc(x_2);
lean_inc(x_1);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Id_instMonadId___lambda__3___boxed), 2, 0);
x_5 = lean_alloc_closure((void*)(l_Id_instMonadId___lambda__4___boxed), 4, 0);
x_6 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_1);
lean_ctor_set(x_6, 3, x_2);
lean_ctor_set(x_6, 4, x_5);
x_7 = lean_alloc_closure((void*)(l_Id_instMonadId___lambda__5), 4, 0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
lean_object* l_Id_instMonadId___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Id_instMonadId___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Id_instMonadId___lambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Id_instMonadId___lambda__3(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Id_instMonadId___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Id_instMonadId___lambda__4(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Id_run___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Id_run(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Id_run___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_Id_run___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Id_run___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Id_instOfNatId___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Id_instOfNatId(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Id_instOfNatId___rarg___boxed), 1, 0);
return x_3;
}
}
lean_object* l_Id_instOfNatId___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Id_instOfNatId___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Id_instOfNatId___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Id_instOfNatId(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init_Core(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Control_Id(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Core(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Id_instMonadId = _init_l_Id_instMonadId();
lean_mark_persistent(l_Id_instMonadId);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
