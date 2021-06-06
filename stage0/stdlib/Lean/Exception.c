// Lean compiler output
// Module: Lean.Exception
// Imports: Init Lean.Message Lean.InternalExceptionId Lean.Data.Options Lean.Util.MonadCache
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
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_InternalExceptionId_toString(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_instMonadRecDepthReaderT___rarg___lambda__2(lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_withIncRecDepth___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_withIncRecDepth___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_withRef___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_withIncRecDepth___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadRecDepthReaderT___rarg___lambda__3(lean_object*, lean_object*);
lean_object* l_StateRefT_x27_run___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwUnknownConstant___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_termThrowError____;
lean_object* lean_array_push(lean_object*, lean_object*);
extern lean_object* l_Lean_interpolatedStrKind;
lean_object* l_Lean_throwKernelException(lean_object*, lean_object*);
lean_object* l_Lean_instMonadRecDepthStateRefT_x27(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_instMonadRecDepthMonadCacheT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_instMonadRecDepthReaderT___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadRecDepthReaderT___rarg___lambda__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instMonadRecDepthMonadCacheT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_withIncRecDepth___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_instMonadRecDepthReaderT___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadRecDepthMonadCacheT___rarg(lean_object*);
lean_object* l_Lean_throwKernelException___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KernelException_toMessageData(lean_object*, lean_object*);
lean_object* l_Lean_instAddErrorMessageContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ofExcept_match__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instAddErrorMessageContext(lean_object*);
lean_object* l_Lean_instMonadRecDepthReaderT___rarg(lean_object*);
lean_object* l_Lean_throwError_match__1(lean_object*);
lean_object* l_Lean_throwErrorAt___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadRecDepthReaderT(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData_match__1(lean_object*);
lean_object* l_Lean_Exception_getRef___boxed(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_throwError(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedException;
lean_object* l_Lean_withIncRecDepth(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_throwKernelException___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Exception_getRef(lean_object*);
lean_object* l_Lean_throwErrorAt(lean_object*, lean_object*);
lean_object* l_Lean_throwError___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_withIncRecDepth___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_throwUnknownConstant(lean_object*, lean_object*);
lean_object* l_Lean_termThrowErrorAt______;
lean_object* l_Lean_throwError___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadRecDepthStateRefT_x27___rarg(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_ofExcept(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadRecDepthReaderT___rarg___lambda__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_myMacro____x40_Lean_Exception___hyg_778_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_myMacro____x40_Lean_Exception___hyg_944_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadRecDepthStateRefT_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_ofExcept_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ofExcept___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_withIncRecDepth___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Exception_toMessageData_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Exception_toMessageData_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Exception_toMessageData(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_InternalExceptionId_toString(x_3);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Exception_getRef(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
else
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
}
}
lean_object* l_Lean_Exception_getRef___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Exception_getRef(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_instInhabitedException() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* l_Lean_instAddErrorMessageContext___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_apply_1(x_1, x_4);
x_7 = lean_alloc_closure((void*)(l_StateRefT_x27_run___rarg___lambda__1), 3, 2);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_3);
x_8 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_instAddErrorMessageContext(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_instAddErrorMessageContext___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_throwError_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_throwError_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_2(x_7, lean_box(0), x_6);
return x_8;
}
}
lean_object* l_Lean_throwError___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_apply_2(x_5, x_4, x_2);
x_7 = lean_alloc_closure((void*)(l_Lean_throwError___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_throwError___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_throwError___rarg___lambda__2), 4, 3);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_4);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_throwError(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_throwError___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Lean_throwError___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_throwError___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_throwUnknownConstant___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_4 = lean_mk_string("unknown constant '");
x_5 = l_Lean_stringToMessageData(x_4);
lean_dec(x_4);
x_6 = lean_box(0);
x_7 = l_Lean_mkConst(x_3, x_6);
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_mk_string("'");
x_11 = l_Lean_stringToMessageData(x_10);
lean_dec(x_10);
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_throwError___rarg(x_1, x_2, x_12);
return x_13;
}
}
lean_object* l_Lean_throwUnknownConstant(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_throwUnknownConstant___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Lean_throwErrorAt___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_inc(x_1);
x_6 = l_Lean_throwError___rarg(x_1, x_2, x_4);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l_Lean_withRef___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_5);
lean_closure_set(x_9, 2, x_6);
x_10 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_throwErrorAt(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_throwErrorAt___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Lean_ofExcept_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
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
lean_object* l_Lean_ofExcept_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_ofExcept_match__1___rarg), 3, 0);
return x_4;
}
}
lean_object* l_Lean_ofExcept___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_3, x_5);
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = l_Lean_throwError___rarg(x_1, x_2, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_apply_2(x_12, lean_box(0), x_10);
return x_13;
}
}
}
lean_object* l_Lean_ofExcept(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_ofExcept___rarg), 4, 0);
return x_4;
}
}
lean_object* l_Lean_throwKernelException___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_KernelException_toMessageData(x_1, x_4);
x_6 = l_Lean_throwError___rarg(x_2, x_3, x_5);
return x_6;
}
}
lean_object* l_Lean_throwKernelException___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Lean_throwKernelException___rarg___lambda__1), 4, 3);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_1);
lean_closure_set(x_6, 2, x_2);
x_7 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_3, x_6);
return x_7;
}
}
lean_object* l_Lean_throwKernelException(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_throwKernelException___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Lean_instMonadRecDepthReaderT___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_4, x_5);
x_8 = lean_apply_3(x_6, lean_box(0), x_3, x_7);
return x_8;
}
}
lean_object* l_Lean_instMonadRecDepthReaderT___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
return x_3;
}
}
lean_object* l_Lean_instMonadRecDepthReaderT___rarg___lambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
return x_3;
}
}
lean_object* l_Lean_instMonadRecDepthReaderT___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_Lean_instMonadRecDepthReaderT___rarg___lambda__1), 5, 1);
lean_closure_set(x_2, 0, x_1);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_instMonadRecDepthReaderT___rarg___lambda__2___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_instMonadRecDepthReaderT___rarg___lambda__3___boxed), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
return x_5;
}
}
lean_object* l_Lean_instMonadRecDepthReaderT(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_instMonadRecDepthReaderT___rarg), 1, 0);
return x_4;
}
}
lean_object* l_Lean_instMonadRecDepthReaderT___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_instMonadRecDepthReaderT___rarg___lambda__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_instMonadRecDepthReaderT___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_instMonadRecDepthReaderT___rarg___lambda__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_instMonadRecDepthReaderT___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_instMonadRecDepthReaderT(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_instMonadRecDepthStateRefT_x27___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_instMonadRecDepthReaderT___rarg(x_1);
return x_2;
}
}
lean_object* l_Lean_instMonadRecDepthStateRefT_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_instMonadRecDepthStateRefT_x27___rarg), 1, 0);
return x_5;
}
}
lean_object* l_Lean_instMonadRecDepthStateRefT_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_instMonadRecDepthStateRefT_x27(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Lean_instMonadRecDepthMonadCacheT___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_instMonadRecDepthReaderT___rarg(x_1);
return x_2;
}
}
lean_object* l_Lean_instMonadRecDepthMonadCacheT(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_alloc_closure((void*)(l_Lean_instMonadRecDepthMonadCacheT___rarg), 1, 0);
return x_9;
}
}
lean_object* l_Lean_instMonadRecDepthMonadCacheT___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_instMonadRecDepthMonadCacheT(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_9;
}
}
lean_object* l_Lean_withIncRecDepth___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_2, x_6);
x_8 = lean_apply_3(x_5, lean_box(0), x_7, x_3);
return x_8;
}
}
lean_object* l_Lean_withIncRecDepth___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
lean_inc(x_2);
x_8 = lean_alloc_closure((void*)(l_Lean_withIncRecDepth___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
lean_closure_set(x_8, 2, x_3);
x_9 = lean_nat_dec_eq(x_2, x_7);
lean_dec(x_2);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_box(0);
x_13 = lean_apply_2(x_11, lean_box(0), x_12);
x_14 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_13, x_8);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = l_Lean_maxRecDepthErrorMessage;
x_16 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = l_Lean_throwError___rarg(x_4, x_6, x_17);
x_19 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_18, x_8);
return x_19;
}
}
}
lean_object* l_Lean_withIncRecDepth___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_inc(x_4);
x_8 = lean_alloc_closure((void*)(l_Lean_withIncRecDepth___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_6);
lean_closure_set(x_8, 2, x_2);
lean_closure_set(x_8, 3, x_3);
lean_closure_set(x_8, 4, x_4);
lean_closure_set(x_8, 5, x_5);
x_9 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_withIncRecDepth___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
x_7 = lean_alloc_closure((void*)(l_Lean_withIncRecDepth___rarg___lambda__3), 6, 5);
lean_closure_set(x_7, 0, x_3);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_1);
lean_closure_set(x_7, 3, x_5);
lean_closure_set(x_7, 4, x_2);
x_8 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_withIncRecDepth(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_withIncRecDepth___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Lean_withIncRecDepth___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_withIncRecDepth___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_withIncRecDepth___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_withIncRecDepth___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
static lean_object* _init_l_Lean_termThrowError____() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("termThrowError__");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("andthen");
x_7 = lean_name_mk_string(x_1, x_6);
x_8 = lean_mk_string("throwError ");
x_9 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_mk_string("orelse");
x_11 = lean_name_mk_string(x_1, x_10);
x_12 = lean_mk_string("interpolatedStr");
x_13 = lean_name_mk_string(x_1, x_12);
x_14 = lean_mk_string("term");
x_15 = lean_name_mk_string(x_1, x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
lean_inc(x_17);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_19, 0, x_11);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_19, 2, x_17);
x_20 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_20, 0, x_7);
lean_ctor_set(x_20, 1, x_9);
lean_ctor_set(x_20, 2, x_19);
x_21 = lean_unsigned_to_nat(1022u);
x_22 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_22, 0, x_5);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_22, 2, x_20);
return x_22;
}
}
static lean_object* _init_l_Lean_termThrowErrorAt______() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("termThrowErrorAt___");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("andthen");
x_7 = lean_name_mk_string(x_1, x_6);
x_8 = lean_mk_string("throwErrorAt ");
x_9 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_mk_string("term");
x_11 = lean_name_mk_string(x_1, x_10);
x_12 = lean_unsigned_to_nat(1024u);
lean_inc(x_11);
x_13 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
lean_inc(x_7);
x_14 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_9);
lean_ctor_set(x_14, 2, x_13);
x_15 = lean_mk_string("orelse");
x_16 = lean_name_mk_string(x_1, x_15);
x_17 = lean_mk_string("interpolatedStr");
x_18 = lean_name_mk_string(x_1, x_17);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_20, 0, x_11);
lean_ctor_set(x_20, 1, x_19);
lean_inc(x_20);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_22, 0, x_16);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_22, 2, x_20);
x_23 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_23, 0, x_7);
lean_ctor_set(x_23, 1, x_14);
lean_ctor_set(x_23, 2, x_22);
x_24 = lean_unsigned_to_nat(1022u);
x_25 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_25, 0, x_5);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_25, 2, x_23);
return x_25;
}
}
lean_object* l_Lean_myMacro____x40_Lean_Exception___hyg_778_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Lean");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("termThrowError__");
lean_inc(x_6);
x_8 = lean_name_mk_string(x_6, x_7);
lean_inc(x_1);
x_9 = l_Lean_Syntax_isOfKind(x_1, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_box(1);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
lean_dec(x_1);
lean_inc(x_13);
x_14 = l_Lean_Syntax_getKind(x_13);
x_15 = l_Lean_interpolatedStrKind;
x_16 = lean_name_eq(x_14, x_15);
lean_dec(x_14);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_2, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
lean_dec(x_2);
x_22 = lean_mk_string("Parser");
lean_inc(x_6);
x_23 = lean_name_mk_string(x_6, x_22);
x_24 = lean_mk_string("Term");
x_25 = lean_name_mk_string(x_23, x_24);
x_26 = lean_mk_string("app");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("Lean.throwError");
x_29 = lean_string_utf8_byte_size(x_28);
x_30 = lean_unsigned_to_nat(0u);
x_31 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_30);
lean_ctor_set(x_31, 2, x_29);
x_32 = lean_mk_string("throwError");
x_33 = lean_name_mk_string(x_6, x_32);
lean_inc(x_33);
x_34 = l_Lean_addMacroScope(x_21, x_33, x_20);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_38, 0, x_19);
lean_ctor_set(x_38, 1, x_31);
lean_ctor_set(x_38, 2, x_34);
lean_ctor_set(x_38, 3, x_37);
x_39 = lean_mk_string("null");
x_40 = lean_name_mk_string(x_4, x_39);
x_41 = lean_mk_empty_array_with_capacity(x_12);
x_42 = lean_array_push(x_41, x_13);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_unsigned_to_nat(2u);
x_45 = lean_mk_empty_array_with_capacity(x_44);
x_46 = lean_array_push(x_45, x_38);
x_47 = lean_array_push(x_46, x_43);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_27);
lean_ctor_set(x_48, 1, x_47);
lean_ctor_set(x_17, 0, x_48);
return x_17;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_49 = lean_ctor_get(x_17, 0);
x_50 = lean_ctor_get(x_17, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_17);
x_51 = lean_ctor_get(x_2, 2);
lean_inc(x_51);
x_52 = lean_ctor_get(x_2, 1);
lean_inc(x_52);
lean_dec(x_2);
x_53 = lean_mk_string("Parser");
lean_inc(x_6);
x_54 = lean_name_mk_string(x_6, x_53);
x_55 = lean_mk_string("Term");
x_56 = lean_name_mk_string(x_54, x_55);
x_57 = lean_mk_string("app");
x_58 = lean_name_mk_string(x_56, x_57);
x_59 = lean_mk_string("Lean.throwError");
x_60 = lean_string_utf8_byte_size(x_59);
x_61 = lean_unsigned_to_nat(0u);
x_62 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_61);
lean_ctor_set(x_62, 2, x_60);
x_63 = lean_mk_string("throwError");
x_64 = lean_name_mk_string(x_6, x_63);
lean_inc(x_64);
x_65 = l_Lean_addMacroScope(x_52, x_64, x_51);
x_66 = lean_box(0);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_66);
x_69 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_69, 0, x_49);
lean_ctor_set(x_69, 1, x_62);
lean_ctor_set(x_69, 2, x_65);
lean_ctor_set(x_69, 3, x_68);
x_70 = lean_mk_string("null");
x_71 = lean_name_mk_string(x_4, x_70);
x_72 = lean_mk_empty_array_with_capacity(x_12);
x_73 = lean_array_push(x_72, x_13);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_unsigned_to_nat(2u);
x_76 = lean_mk_empty_array_with_capacity(x_75);
x_77 = lean_array_push(x_76, x_69);
x_78 = lean_array_push(x_77, x_74);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_58);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_50);
return x_80;
}
}
else
{
lean_object* x_81; uint8_t x_82; 
x_81 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_83 = lean_ctor_get(x_81, 0);
x_84 = lean_ctor_get(x_2, 2);
lean_inc(x_84);
x_85 = lean_ctor_get(x_2, 1);
lean_inc(x_85);
lean_dec(x_2);
x_86 = lean_mk_string("Parser");
lean_inc(x_6);
x_87 = lean_name_mk_string(x_6, x_86);
x_88 = lean_mk_string("Term");
x_89 = lean_name_mk_string(x_87, x_88);
x_90 = lean_mk_string("app");
lean_inc(x_89);
x_91 = lean_name_mk_string(x_89, x_90);
x_92 = lean_mk_string("Lean.throwError");
x_93 = lean_string_utf8_byte_size(x_92);
x_94 = lean_unsigned_to_nat(0u);
x_95 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_95, 0, x_92);
lean_ctor_set(x_95, 1, x_94);
lean_ctor_set(x_95, 2, x_93);
x_96 = lean_mk_string("throwError");
lean_inc(x_6);
x_97 = lean_name_mk_string(x_6, x_96);
lean_inc(x_97);
x_98 = l_Lean_addMacroScope(x_85, x_97, x_84);
x_99 = lean_box(0);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_99);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
lean_inc(x_83);
x_102 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_102, 0, x_83);
lean_ctor_set(x_102, 1, x_95);
lean_ctor_set(x_102, 2, x_98);
lean_ctor_set(x_102, 3, x_101);
x_103 = lean_mk_string("null");
x_104 = lean_name_mk_string(x_4, x_103);
x_105 = lean_mk_string("paren");
x_106 = lean_name_mk_string(x_89, x_105);
x_107 = lean_mk_string("(");
lean_inc(x_83);
x_108 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_108, 0, x_83);
lean_ctor_set(x_108, 1, x_107);
x_109 = lean_mk_string("termM!_");
x_110 = lean_name_mk_string(x_6, x_109);
x_111 = lean_mk_string("m!");
lean_inc(x_83);
x_112 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_112, 0, x_83);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_unsigned_to_nat(2u);
x_114 = lean_mk_empty_array_with_capacity(x_113);
lean_inc(x_114);
x_115 = lean_array_push(x_114, x_112);
x_116 = lean_array_push(x_115, x_13);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_110);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_mk_empty_array_with_capacity(x_94);
lean_inc(x_104);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_104);
lean_ctor_set(x_119, 1, x_118);
lean_inc(x_114);
x_120 = lean_array_push(x_114, x_117);
x_121 = lean_array_push(x_120, x_119);
lean_inc(x_104);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_104);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_mk_string(")");
x_124 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_124, 0, x_83);
lean_ctor_set(x_124, 1, x_123);
x_125 = lean_unsigned_to_nat(3u);
x_126 = lean_mk_empty_array_with_capacity(x_125);
x_127 = lean_array_push(x_126, x_108);
x_128 = lean_array_push(x_127, x_122);
x_129 = lean_array_push(x_128, x_124);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_106);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_mk_empty_array_with_capacity(x_12);
x_132 = lean_array_push(x_131, x_130);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_104);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_array_push(x_114, x_102);
x_135 = lean_array_push(x_134, x_133);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_91);
lean_ctor_set(x_136, 1, x_135);
lean_ctor_set(x_81, 0, x_136);
return x_81;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_137 = lean_ctor_get(x_81, 0);
x_138 = lean_ctor_get(x_81, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_81);
x_139 = lean_ctor_get(x_2, 2);
lean_inc(x_139);
x_140 = lean_ctor_get(x_2, 1);
lean_inc(x_140);
lean_dec(x_2);
x_141 = lean_mk_string("Parser");
lean_inc(x_6);
x_142 = lean_name_mk_string(x_6, x_141);
x_143 = lean_mk_string("Term");
x_144 = lean_name_mk_string(x_142, x_143);
x_145 = lean_mk_string("app");
lean_inc(x_144);
x_146 = lean_name_mk_string(x_144, x_145);
x_147 = lean_mk_string("Lean.throwError");
x_148 = lean_string_utf8_byte_size(x_147);
x_149 = lean_unsigned_to_nat(0u);
x_150 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_150, 0, x_147);
lean_ctor_set(x_150, 1, x_149);
lean_ctor_set(x_150, 2, x_148);
x_151 = lean_mk_string("throwError");
lean_inc(x_6);
x_152 = lean_name_mk_string(x_6, x_151);
lean_inc(x_152);
x_153 = l_Lean_addMacroScope(x_140, x_152, x_139);
x_154 = lean_box(0);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_152);
lean_ctor_set(x_155, 1, x_154);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_156, 1, x_154);
lean_inc(x_137);
x_157 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_157, 0, x_137);
lean_ctor_set(x_157, 1, x_150);
lean_ctor_set(x_157, 2, x_153);
lean_ctor_set(x_157, 3, x_156);
x_158 = lean_mk_string("null");
x_159 = lean_name_mk_string(x_4, x_158);
x_160 = lean_mk_string("paren");
x_161 = lean_name_mk_string(x_144, x_160);
x_162 = lean_mk_string("(");
lean_inc(x_137);
x_163 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_163, 0, x_137);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_mk_string("termM!_");
x_165 = lean_name_mk_string(x_6, x_164);
x_166 = lean_mk_string("m!");
lean_inc(x_137);
x_167 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_167, 0, x_137);
lean_ctor_set(x_167, 1, x_166);
x_168 = lean_unsigned_to_nat(2u);
x_169 = lean_mk_empty_array_with_capacity(x_168);
lean_inc(x_169);
x_170 = lean_array_push(x_169, x_167);
x_171 = lean_array_push(x_170, x_13);
x_172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_172, 0, x_165);
lean_ctor_set(x_172, 1, x_171);
x_173 = lean_mk_empty_array_with_capacity(x_149);
lean_inc(x_159);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_159);
lean_ctor_set(x_174, 1, x_173);
lean_inc(x_169);
x_175 = lean_array_push(x_169, x_172);
x_176 = lean_array_push(x_175, x_174);
lean_inc(x_159);
x_177 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_177, 0, x_159);
lean_ctor_set(x_177, 1, x_176);
x_178 = lean_mk_string(")");
x_179 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_179, 0, x_137);
lean_ctor_set(x_179, 1, x_178);
x_180 = lean_unsigned_to_nat(3u);
x_181 = lean_mk_empty_array_with_capacity(x_180);
x_182 = lean_array_push(x_181, x_163);
x_183 = lean_array_push(x_182, x_177);
x_184 = lean_array_push(x_183, x_179);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_161);
lean_ctor_set(x_185, 1, x_184);
x_186 = lean_mk_empty_array_with_capacity(x_12);
x_187 = lean_array_push(x_186, x_185);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_159);
lean_ctor_set(x_188, 1, x_187);
x_189 = lean_array_push(x_169, x_157);
x_190 = lean_array_push(x_189, x_188);
x_191 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_191, 0, x_146);
lean_ctor_set(x_191, 1, x_190);
x_192 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_138);
return x_192;
}
}
}
}
}
lean_object* l_Lean_myMacro____x40_Lean_Exception___hyg_944_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Lean");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("termThrowErrorAt___");
lean_inc(x_6);
x_8 = lean_name_mk_string(x_6, x_7);
lean_inc(x_1);
x_9 = l_Lean_Syntax_isOfKind(x_1, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_box(1);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = lean_unsigned_to_nat(2u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
lean_inc(x_15);
x_16 = l_Lean_Syntax_getKind(x_15);
x_17 = l_Lean_interpolatedStrKind;
x_18 = lean_name_eq(x_16, x_17);
lean_dec(x_16);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_2, 2);
lean_inc(x_22);
x_23 = lean_ctor_get(x_2, 1);
lean_inc(x_23);
lean_dec(x_2);
x_24 = lean_mk_string("Parser");
lean_inc(x_6);
x_25 = lean_name_mk_string(x_6, x_24);
x_26 = lean_mk_string("Term");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("app");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Lean.throwErrorAt");
x_31 = lean_string_utf8_byte_size(x_30);
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set(x_33, 2, x_31);
x_34 = lean_mk_string("throwErrorAt");
x_35 = lean_name_mk_string(x_6, x_34);
lean_inc(x_35);
x_36 = l_Lean_addMacroScope(x_23, x_35, x_22);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
x_40 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_40, 0, x_21);
lean_ctor_set(x_40, 1, x_33);
lean_ctor_set(x_40, 2, x_36);
lean_ctor_set(x_40, 3, x_39);
x_41 = lean_mk_string("null");
x_42 = lean_name_mk_string(x_4, x_41);
x_43 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_43);
x_44 = lean_array_push(x_43, x_13);
x_45 = lean_array_push(x_44, x_15);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_42);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_array_push(x_43, x_40);
x_48 = lean_array_push(x_47, x_46);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_29);
lean_ctor_set(x_49, 1, x_48);
lean_ctor_set(x_19, 0, x_49);
return x_19;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_50 = lean_ctor_get(x_19, 0);
x_51 = lean_ctor_get(x_19, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_19);
x_52 = lean_ctor_get(x_2, 2);
lean_inc(x_52);
x_53 = lean_ctor_get(x_2, 1);
lean_inc(x_53);
lean_dec(x_2);
x_54 = lean_mk_string("Parser");
lean_inc(x_6);
x_55 = lean_name_mk_string(x_6, x_54);
x_56 = lean_mk_string("Term");
x_57 = lean_name_mk_string(x_55, x_56);
x_58 = lean_mk_string("app");
x_59 = lean_name_mk_string(x_57, x_58);
x_60 = lean_mk_string("Lean.throwErrorAt");
x_61 = lean_string_utf8_byte_size(x_60);
x_62 = lean_unsigned_to_nat(0u);
x_63 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_62);
lean_ctor_set(x_63, 2, x_61);
x_64 = lean_mk_string("throwErrorAt");
x_65 = lean_name_mk_string(x_6, x_64);
lean_inc(x_65);
x_66 = l_Lean_addMacroScope(x_53, x_65, x_52);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_67);
x_70 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_70, 0, x_50);
lean_ctor_set(x_70, 1, x_63);
lean_ctor_set(x_70, 2, x_66);
lean_ctor_set(x_70, 3, x_69);
x_71 = lean_mk_string("null");
x_72 = lean_name_mk_string(x_4, x_71);
x_73 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_73);
x_74 = lean_array_push(x_73, x_13);
x_75 = lean_array_push(x_74, x_15);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_72);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_array_push(x_73, x_70);
x_78 = lean_array_push(x_77, x_76);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_59);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_51);
return x_80;
}
}
else
{
lean_object* x_81; uint8_t x_82; 
x_81 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_83 = lean_ctor_get(x_81, 0);
x_84 = lean_ctor_get(x_2, 2);
lean_inc(x_84);
x_85 = lean_ctor_get(x_2, 1);
lean_inc(x_85);
lean_dec(x_2);
x_86 = lean_mk_string("Parser");
lean_inc(x_6);
x_87 = lean_name_mk_string(x_6, x_86);
x_88 = lean_mk_string("Term");
x_89 = lean_name_mk_string(x_87, x_88);
x_90 = lean_mk_string("app");
lean_inc(x_89);
x_91 = lean_name_mk_string(x_89, x_90);
x_92 = lean_mk_string("Lean.throwErrorAt");
x_93 = lean_string_utf8_byte_size(x_92);
x_94 = lean_unsigned_to_nat(0u);
x_95 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_95, 0, x_92);
lean_ctor_set(x_95, 1, x_94);
lean_ctor_set(x_95, 2, x_93);
x_96 = lean_mk_string("throwErrorAt");
lean_inc(x_6);
x_97 = lean_name_mk_string(x_6, x_96);
lean_inc(x_97);
x_98 = l_Lean_addMacroScope(x_85, x_97, x_84);
x_99 = lean_box(0);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_99);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
lean_inc(x_83);
x_102 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_102, 0, x_83);
lean_ctor_set(x_102, 1, x_95);
lean_ctor_set(x_102, 2, x_98);
lean_ctor_set(x_102, 3, x_101);
x_103 = lean_mk_string("null");
x_104 = lean_name_mk_string(x_4, x_103);
x_105 = lean_mk_string("paren");
x_106 = lean_name_mk_string(x_89, x_105);
x_107 = lean_mk_string("(");
lean_inc(x_83);
x_108 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_108, 0, x_83);
lean_ctor_set(x_108, 1, x_107);
x_109 = lean_mk_string("termM!_");
x_110 = lean_name_mk_string(x_6, x_109);
x_111 = lean_mk_string("m!");
lean_inc(x_83);
x_112 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_112, 0, x_83);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_113);
x_114 = lean_array_push(x_113, x_112);
x_115 = lean_array_push(x_114, x_15);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_110);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_mk_empty_array_with_capacity(x_94);
lean_inc(x_104);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_104);
lean_ctor_set(x_118, 1, x_117);
lean_inc(x_113);
x_119 = lean_array_push(x_113, x_116);
x_120 = lean_array_push(x_119, x_118);
lean_inc(x_104);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_104);
lean_ctor_set(x_121, 1, x_120);
x_122 = lean_mk_string(")");
x_123 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_123, 0, x_83);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_unsigned_to_nat(3u);
x_125 = lean_mk_empty_array_with_capacity(x_124);
x_126 = lean_array_push(x_125, x_108);
x_127 = lean_array_push(x_126, x_121);
x_128 = lean_array_push(x_127, x_123);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_106);
lean_ctor_set(x_129, 1, x_128);
lean_inc(x_113);
x_130 = lean_array_push(x_113, x_13);
x_131 = lean_array_push(x_130, x_129);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_104);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_array_push(x_113, x_102);
x_134 = lean_array_push(x_133, x_132);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_91);
lean_ctor_set(x_135, 1, x_134);
lean_ctor_set(x_81, 0, x_135);
return x_81;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_136 = lean_ctor_get(x_81, 0);
x_137 = lean_ctor_get(x_81, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_81);
x_138 = lean_ctor_get(x_2, 2);
lean_inc(x_138);
x_139 = lean_ctor_get(x_2, 1);
lean_inc(x_139);
lean_dec(x_2);
x_140 = lean_mk_string("Parser");
lean_inc(x_6);
x_141 = lean_name_mk_string(x_6, x_140);
x_142 = lean_mk_string("Term");
x_143 = lean_name_mk_string(x_141, x_142);
x_144 = lean_mk_string("app");
lean_inc(x_143);
x_145 = lean_name_mk_string(x_143, x_144);
x_146 = lean_mk_string("Lean.throwErrorAt");
x_147 = lean_string_utf8_byte_size(x_146);
x_148 = lean_unsigned_to_nat(0u);
x_149 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_149, 0, x_146);
lean_ctor_set(x_149, 1, x_148);
lean_ctor_set(x_149, 2, x_147);
x_150 = lean_mk_string("throwErrorAt");
lean_inc(x_6);
x_151 = lean_name_mk_string(x_6, x_150);
lean_inc(x_151);
x_152 = l_Lean_addMacroScope(x_139, x_151, x_138);
x_153 = lean_box(0);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_151);
lean_ctor_set(x_154, 1, x_153);
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_153);
lean_inc(x_136);
x_156 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_156, 0, x_136);
lean_ctor_set(x_156, 1, x_149);
lean_ctor_set(x_156, 2, x_152);
lean_ctor_set(x_156, 3, x_155);
x_157 = lean_mk_string("null");
x_158 = lean_name_mk_string(x_4, x_157);
x_159 = lean_mk_string("paren");
x_160 = lean_name_mk_string(x_143, x_159);
x_161 = lean_mk_string("(");
lean_inc(x_136);
x_162 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_162, 0, x_136);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_mk_string("termM!_");
x_164 = lean_name_mk_string(x_6, x_163);
x_165 = lean_mk_string("m!");
lean_inc(x_136);
x_166 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_166, 0, x_136);
lean_ctor_set(x_166, 1, x_165);
x_167 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_167);
x_168 = lean_array_push(x_167, x_166);
x_169 = lean_array_push(x_168, x_15);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_164);
lean_ctor_set(x_170, 1, x_169);
x_171 = lean_mk_empty_array_with_capacity(x_148);
lean_inc(x_158);
x_172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_172, 0, x_158);
lean_ctor_set(x_172, 1, x_171);
lean_inc(x_167);
x_173 = lean_array_push(x_167, x_170);
x_174 = lean_array_push(x_173, x_172);
lean_inc(x_158);
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_158);
lean_ctor_set(x_175, 1, x_174);
x_176 = lean_mk_string(")");
x_177 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_177, 0, x_136);
lean_ctor_set(x_177, 1, x_176);
x_178 = lean_unsigned_to_nat(3u);
x_179 = lean_mk_empty_array_with_capacity(x_178);
x_180 = lean_array_push(x_179, x_162);
x_181 = lean_array_push(x_180, x_175);
x_182 = lean_array_push(x_181, x_177);
x_183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_183, 0, x_160);
lean_ctor_set(x_183, 1, x_182);
lean_inc(x_167);
x_184 = lean_array_push(x_167, x_13);
x_185 = lean_array_push(x_184, x_183);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_158);
lean_ctor_set(x_186, 1, x_185);
x_187 = lean_array_push(x_167, x_156);
x_188 = lean_array_push(x_187, x_186);
x_189 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_189, 0, x_145);
lean_ctor_set(x_189, 1, x_188);
x_190 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_137);
return x_190;
}
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Message(lean_object*);
lean_object* initialize_Lean_InternalExceptionId(lean_object*);
lean_object* initialize_Lean_Data_Options(lean_object*);
lean_object* initialize_Lean_Util_MonadCache(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Exception(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Message(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_InternalExceptionId(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Options(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_MonadCache(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedException = _init_l_Lean_instInhabitedException();
lean_mark_persistent(l_Lean_instInhabitedException);
l_Lean_termThrowError____ = _init_l_Lean_termThrowError____();
lean_mark_persistent(l_Lean_termThrowError____);
l_Lean_termThrowErrorAt______ = _init_l_Lean_termThrowErrorAt______();
lean_mark_persistent(l_Lean_termThrowErrorAt______);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
