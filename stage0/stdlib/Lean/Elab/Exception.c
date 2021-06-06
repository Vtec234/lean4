// Lean compiler output
// Module: Lean.Elab.Exception
// Imports: Init Lean.InternalExceptionId Lean.Meta.Basic
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_throwPostpone___rarg(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_Lean_Elab_isAbortExceptionId(lean_object*);
lean_object* l_Lean_Elab_throwAbortTactic(lean_object*, lean_object*);
lean_object* l_Lean_Elab_isAutoBoundImplicitLocalException_x3f___boxed(lean_object*);
lean_object* l_Lean_Elab_throwAbortTactic___rarg(lean_object*);
lean_object* l_Lean_Elab_autoBoundImplicitExceptionId;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___rarg(lean_object*);
lean_object* l_Lean_Elab_abortCommandExceptionId;
lean_object* l_Lean_Elab_isAbortExceptionId___boxed(lean_object*);
lean_object* l_Lean_Elab_throwIllFormedSyntax___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_29_(lean_object*);
lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_42_(lean_object*);
lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_3_(lean_object*);
lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_16_(lean_object*);
lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_55_(lean_object*);
lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_68_(lean_object*);
lean_object* l_Lean_Elab_throwPostpone(lean_object*, lean_object*);
lean_object* l_Lean_Elab_isAutoBoundImplicitLocalException_x3f_match__1(lean_object*);
lean_object* l_Lean_Elab_throwAutoBoundImplicitLocal___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkMessageCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwAutoBoundImplicitLocal(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwAbortTerm___rarg(lean_object*);
lean_object* l_Lean_Elab_mkMessageCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Elab_throwAbortCommand(lean_object*, lean_object*);
lean_object* l_Lean_Elab_abortTacticExceptionId;
lean_object* l_Lean_KVMap_getName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_abortTermExceptionId;
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwAbortCommand___rarg(lean_object*);
lean_object* l_Lean_registerInternalExceptionId(lean_object*, lean_object*);
lean_object* l_Lean_Elab_isAutoBoundImplicitLocalException_x3f(lean_object*);
lean_object* l_Lean_Elab_isAutoBoundImplicitLocalException_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_postponeExceptionId;
extern lean_object* l_Lean_KVMap_empty;
lean_object* l_Lean_Elab_throwUnsupportedSyntax(lean_object*, lean_object*);
lean_object* l_Lean_KVMap_insertCore(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwIllFormedSyntax(lean_object*, lean_object*);
lean_object* l_Lean_throwError___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
uint8_t l_Lean_Elab_isAbortTacticException(lean_object*);
lean_object* l_Lean_Elab_isAbortTacticException___boxed(lean_object*);
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwAbortTerm(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel(lean_object*, lean_object*);
lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_3_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = lean_mk_string("postpone");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = l_Lean_registerInternalExceptionId(x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_16_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = lean_mk_string("unsupportedSyntax");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = l_Lean_registerInternalExceptionId(x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_29_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = lean_mk_string("abortCommandElab");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = l_Lean_registerInternalExceptionId(x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_42_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = lean_mk_string("abortTermElab");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = l_Lean_registerInternalExceptionId(x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_55_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = lean_mk_string("abortTactic");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = l_Lean_registerInternalExceptionId(x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_68_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = lean_mk_string("autoBoundImplicit");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = l_Lean_registerInternalExceptionId(x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_throwPostpone___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_box(0);
x_3 = l_Lean_Elab_postponeExceptionId;
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_5, lean_box(0), x_4);
return x_6;
}
}
lean_object* l_Lean_Elab_throwPostpone(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_throwPostpone___rarg), 1, 0);
return x_3;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_box(0);
x_3 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_4 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_5, lean_box(0), x_4);
return x_6;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___rarg), 1, 0);
return x_3;
}
}
lean_object* l_Lean_Elab_throwIllFormedSyntax___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_mk_string("ill-formed syntax");
x_4 = l_Lean_stringToMessageData(x_3);
lean_dec(x_3);
x_5 = l_Lean_throwError___rarg(x_1, x_2, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_throwIllFormedSyntax(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_throwIllFormedSyntax___rarg), 2, 0);
return x_3;
}
}
lean_object* l_Lean_Elab_throwAutoBoundImplicitLocal___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_box(0);
x_4 = lean_mk_string("localId");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_2);
x_7 = l_Lean_KVMap_empty;
x_8 = l_Lean_KVMap_insertCore(x_7, x_5, x_6);
x_9 = l_Lean_Elab_autoBoundImplicitExceptionId;
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_2(x_11, lean_box(0), x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_throwAutoBoundImplicitLocal(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_throwAutoBoundImplicitLocal___rarg), 2, 0);
return x_3;
}
}
lean_object* l_Lean_Elab_isAutoBoundImplicitLocalException_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_2, x_5, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_isAutoBoundImplicitLocalException_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_isAutoBoundImplicitLocalException_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_isAutoBoundImplicitLocalException_x3f(lean_object* x_1) {
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
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_Lean_Elab_autoBoundImplicitExceptionId;
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_box(0);
x_9 = lean_mk_string("localId");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("x");
x_12 = lean_name_mk_string(x_8, x_11);
x_13 = l_Lean_KVMap_getName(x_4, x_10, x_12);
lean_dec(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_Elab_isAutoBoundImplicitLocalException_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_isAutoBoundImplicitLocalException_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_mk_string("a universe level named '");
x_5 = l_Lean_stringToMessageData(x_4);
lean_dec(x_4);
x_6 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_6, 0, x_3);
x_7 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_mk_string("' has already been declared");
x_9 = l_Lean_stringToMessageData(x_8);
lean_dec(x_8);
x_10 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_Lean_throwError___rarg(x_1, x_2, x_10);
return x_11;
}
}
lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Lean_Elab_throwAbortCommand___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_box(0);
x_4 = l_Lean_Elab_abortCommandExceptionId;
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_apply_2(x_2, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_throwAbortCommand(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_throwAbortCommand___rarg), 1, 0);
return x_3;
}
}
lean_object* l_Lean_Elab_throwAbortTerm___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_box(0);
x_4 = l_Lean_Elab_abortTermExceptionId;
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_apply_2(x_2, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_throwAbortTerm(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_throwAbortTerm___rarg), 1, 0);
return x_3;
}
}
lean_object* l_Lean_Elab_throwAbortTactic___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_box(0);
x_4 = l_Lean_Elab_abortTacticExceptionId;
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_apply_2(x_2, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_throwAbortTactic(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_throwAbortTactic___rarg), 1, 0);
return x_3;
}
}
uint8_t l_Lean_Elab_isAbortTacticException(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_Lean_Elab_abortTacticExceptionId;
x_5 = lean_nat_dec_eq(x_3, x_4);
return x_5;
}
}
}
lean_object* l_Lean_Elab_isAbortTacticException___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_isAbortTacticException(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_Lean_Elab_isAbortExceptionId(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_Elab_abortCommandExceptionId;
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_Elab_abortTermExceptionId;
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = l_Lean_Elab_abortTacticExceptionId;
x_7 = lean_nat_dec_eq(x_1, x_6);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
else
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
}
}
lean_object* l_Lean_Elab_isAbortExceptionId___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_isAbortExceptionId(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_mkMessageCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = l_Lean_FileMap_toPosition(x_2, x_5);
x_7 = lean_box(0);
x_8 = lean_mk_string("");
x_9 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_6);
lean_ctor_set(x_9, 2, x_7);
lean_ctor_set(x_9, 3, x_8);
lean_ctor_set(x_9, 4, x_3);
lean_ctor_set_uint8(x_9, sizeof(void*)*5, x_4);
return x_9;
}
}
lean_object* l_Lean_Elab_mkMessageCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_Lean_Elab_mkMessageCore(x_1, x_2, x_3, x_6, x_5);
lean_dec(x_5);
lean_dec(x_2);
return x_7;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_InternalExceptionId(lean_object*);
lean_object* initialize_Lean_Meta_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Exception(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_InternalExceptionId(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_3_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_postponeExceptionId = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_postponeExceptionId);
lean_dec_ref(res);
res = l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_16_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_unsupportedSyntaxExceptionId = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_unsupportedSyntaxExceptionId);
lean_dec_ref(res);
res = l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_29_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_abortCommandExceptionId = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_abortCommandExceptionId);
lean_dec_ref(res);
res = l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_42_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_abortTermExceptionId = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_abortTermExceptionId);
lean_dec_ref(res);
res = l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_55_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_abortTacticExceptionId = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_abortTacticExceptionId);
lean_dec_ref(res);
res = l_Lean_Elab_initFn____x40_Lean_Elab_Exception___hyg_68_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_autoBoundImplicitExceptionId = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_autoBoundImplicitExceptionId);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
