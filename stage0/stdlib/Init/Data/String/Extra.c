// Lean compiler output
// Module: Init.Data.String.Extra
// Imports: Init.Control.Except Init.Data.ByteArray Init.Util
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
lean_object* l_String_toNat_x3f___lambda__1___boxed(lean_object*, lean_object*);
extern lean_object* l_instInhabitedNat;
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
uint8_t l_String_isNat(lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_String_foldlAux_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toUTF8___boxed(lean_object*);
lean_object* l_String_fromUTF8Unchecked___boxed(lean_object*);
lean_object* l_String_toNat_x21___boxed(lean_object*);
lean_object* l_String_toNat_x21(lean_object*);
lean_object* l_String_toNat_x21(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_String_isNat(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_mk_string("Init.Data.String.Extra");
x_4 = lean_mk_string("String.toNat!");
x_5 = lean_unsigned_to_nat(17u);
x_6 = lean_unsigned_to_nat(4u);
x_7 = lean_mk_string("Nat expected");
x_8 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_3, x_4, x_5, x_6, x_7);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = l_instInhabitedNat;
x_10 = lean_panic_fn(x_9, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_string_utf8_byte_size(x_1);
x_12 = lean_alloc_closure((void*)(l_String_toNat_x3f___lambda__1___boxed), 2, 0);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_String_foldlAux_loop___rarg(x_12, x_1, x_11, x_13, x_13);
lean_dec(x_11);
return x_14;
}
}
}
lean_object* l_String_toNat_x21___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_String_toNat_x21(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_String_fromUTF8Unchecked___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_string_from_utf8_unchecked(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_String_toUTF8___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_string_to_utf8(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init_Control_Except(lean_object*);
lean_object* initialize_Init_Data_ByteArray(lean_object*);
lean_object* initialize_Init_Util(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Data_String_Extra(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_Except(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ByteArray(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Util(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
