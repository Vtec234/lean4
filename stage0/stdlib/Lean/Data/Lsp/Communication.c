// Lean compiler output
// Module: Lean.Data.Lsp.Communication
// Imports: Init Init.System.IO Lean.Data.JsonRpc
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
lean_object* l_IO_FS_Stream_writeLspResponseError___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspRequest___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_parseHeaderField_match__1(lean_object*);
lean_object* l_Lean_Json_toStructured_x3f___rarg(lean_object*, lean_object*);
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readLspMessage(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspResponse(lean_object*);
lean_object* l_String_splitOn(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_IO_FS_Stream_readMessage(lean_object*, lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader_match__1(lean_object*);
lean_object* l_IO_FS_Stream_readResponseAs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toString___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__2(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_parseHeaderField(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_parseHeaderField_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readHeaderFields___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspResponseErrorWithData___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_IO_FS_Stream_writeLspResponseError(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspMessage(lean_object*, lean_object*, lean_object*);
lean_object* lean_format_pretty(lean_object*, lean_object*);
lean_object* l_String_takeRight(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspResponseErrorWithData(lean_object*);
lean_object* l_IO_FS_Stream_writeLspRequest(lean_object*);
lean_object* l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readHeaderFields_match__1(lean_object*);
lean_object* l_IO_FS_Stream_writeLspMessage___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_dropRight(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readNotificationAs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readHeaderFields_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readLspResponseAs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspNotification(lean_object*);
lean_object* l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__2(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readHeaderFields___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toStringAux___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_List_toStringAux___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__3(uint8_t, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readLspNotificationAs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader_match__2(lean_object*);
lean_object* l_List_lookup___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readHeaderFields(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readLspRequestAs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lookup___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toNat_x3f(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_IO_FS_Stream_readRequestAs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspNotification___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeLspResponse___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_parseHeaderField_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_apply_3(x_4, x_10, x_11, x_12);
return x_13;
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_parseHeaderField_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_parseHeaderField_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_parseHeaderField(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; uint8_t x_4; 
x_2 = lean_mk_string("");
x_3 = lean_string_dec_eq(x_1, x_2);
lean_dec(x_2);
x_4 = l_instDecidableNot___rarg(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_unsigned_to_nat(2u);
lean_inc(x_1);
x_7 = l_String_takeRight(x_1, x_6);
x_8 = lean_mk_string("\x0d\n");
x_9 = lean_string_dec_eq(x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_1);
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_String_dropRight(x_1, x_6);
x_12 = lean_mk_string(": ");
x_13 = l_String_splitOn(x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
lean_dec(x_12);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
lean_dec(x_13);
lean_dec(x_12);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_13, 0);
lean_inc(x_17);
lean_dec(x_13);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = l_String_intercalate(x_12, x_15);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_15, 0);
x_23 = lean_ctor_get(x_15, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_15);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_String_intercalate(x_12, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_17);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
return x_27;
}
}
}
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readHeaderFields_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readHeaderFields_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readHeaderFields_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readHeaderFields___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_mk_string("\x0d\n");
x_6 = lean_string_dec_eq(x_1, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_inc(x_1);
x_7 = l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_parseHeaderField(x_1);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_2);
x_8 = l_String_quote(x_1);
lean_dec(x_1);
x_9 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = l_Std_Format_defWidth;
x_11 = lean_format_pretty(x_9, x_10);
x_12 = lean_mk_string("Invalid header field: ");
x_13 = lean_string_append(x_12, x_11);
lean_dec(x_11);
x_14 = lean_mk_string("");
x_15 = lean_string_append(x_13, x_14);
lean_dec(x_14);
x_16 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_4);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_1);
x_18 = lean_ctor_get(x_7, 0);
lean_inc(x_18);
lean_dec(x_7);
x_19 = l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readHeaderFields(x_2, x_4);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_18);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_19, 0, x_22);
return x_19;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_19, 0);
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_19);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_18);
x_27 = !lean_is_exclusive(x_19);
if (x_27 == 0)
{
return x_19;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_19, 0);
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_19);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
else
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_2);
lean_dec(x_1);
x_31 = lean_box(0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_4);
return x_32;
}
}
}
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readHeaderFields(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 4);
lean_inc(x_3);
x_4 = lean_apply_1(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_apply_1(x_7, x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_box(0);
x_13 = l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readHeaderFields___lambda__1(x_5, x_1, x_12, x_11);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_5);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_8);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_8, 0);
lean_dec(x_15);
x_16 = lean_mk_string("Stream was closed");
x_17 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_17);
return x_8;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_dec(x_8);
x_19 = lean_mk_string("Stream was closed");
x_20 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_5);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_8);
if (x_22 == 0)
{
return x_8;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_8, 0);
x_24 = lean_ctor_get(x_8, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_8);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_1);
x_26 = !lean_is_exclusive(x_4);
if (x_26 == 0)
{
return x_4;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_4, 0);
x_28 = lean_ctor_get(x_4, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_4);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readHeaderFields___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readHeaderFields___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_lookup___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_string_dec_eq(x_1, x_6);
if (x_8 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_10; 
lean_inc(x_7);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_7);
return x_10;
}
}
}
}
lean_object* l_List_toStringAux___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__3(uint8_t x_1, lean_object* x_2) {
_start:
{
if (x_1 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_mk_string("");
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = 0;
x_7 = l_List_toStringAux___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__3(x_6, x_5);
x_8 = lean_ctor_get(x_4, 0);
x_9 = lean_ctor_get(x_4, 1);
x_10 = lean_mk_string("(");
x_11 = lean_string_append(x_10, x_8);
x_12 = lean_mk_string(", ");
x_13 = lean_string_append(x_11, x_12);
x_14 = lean_string_append(x_13, x_9);
x_15 = lean_mk_string(")");
x_16 = lean_string_append(x_14, x_15);
lean_dec(x_15);
x_17 = lean_string_append(x_12, x_16);
lean_dec(x_16);
x_18 = lean_string_append(x_17, x_7);
lean_dec(x_7);
return x_18;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_19; 
x_19 = lean_mk_string("");
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_20 = lean_ctor_get(x_2, 0);
x_21 = lean_ctor_get(x_2, 1);
x_22 = 0;
x_23 = l_List_toStringAux___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__3(x_22, x_21);
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_20, 1);
x_26 = lean_mk_string("(");
x_27 = lean_string_append(x_26, x_24);
x_28 = lean_mk_string(", ");
x_29 = lean_string_append(x_27, x_28);
lean_dec(x_28);
x_30 = lean_string_append(x_29, x_25);
x_31 = lean_mk_string(")");
x_32 = lean_string_append(x_30, x_31);
lean_dec(x_31);
x_33 = lean_string_append(x_32, x_23);
lean_dec(x_23);
return x_33;
}
}
}
}
lean_object* l_List_toString___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_mk_string("[]");
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = 1;
x_5 = l_List_toStringAux___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__3(x_4, x_1);
lean_dec(x_1);
x_6 = lean_mk_string("[");
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = lean_mk_string("]");
x_9 = lean_string_append(x_7, x_8);
lean_dec(x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = 1;
x_14 = l_List_toStringAux___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__3(x_13, x_12);
lean_dec(x_12);
x_15 = lean_mk_string("[");
x_16 = lean_string_append(x_15, x_14);
lean_dec(x_14);
x_17 = lean_mk_string("]");
x_18 = lean_string_append(x_16, x_17);
lean_dec(x_17);
return x_18;
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readHeaderFields(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_mk_string("Content-Length");
x_7 = l_List_lookup___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__1(x_6, x_5);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = l_List_toString___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__2(x_5);
x_9 = lean_mk_string("No Content-Length field in header: ");
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = lean_mk_string("");
x_12 = lean_string_append(x_10, x_11);
lean_dec(x_11);
x_13 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_13);
return x_3;
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
x_14 = lean_ctor_get(x_7, 0);
lean_inc(x_14);
lean_dec(x_7);
x_15 = l_String_toNat_x3f(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_mk_string("Content-Length header field value '");
x_17 = lean_string_append(x_16, x_14);
lean_dec(x_14);
x_18 = lean_mk_string("' is not a Nat");
x_19 = lean_string_append(x_17, x_18);
lean_dec(x_18);
x_20 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_20);
return x_3;
}
else
{
lean_object* x_21; 
lean_dec(x_14);
x_21 = lean_ctor_get(x_15, 0);
lean_inc(x_21);
lean_dec(x_15);
lean_ctor_set(x_3, 0, x_21);
return x_3;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_3, 0);
x_23 = lean_ctor_get(x_3, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_3);
x_24 = lean_mk_string("Content-Length");
x_25 = l_List_lookup___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__1(x_24, x_22);
lean_dec(x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = l_List_toString___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__2(x_22);
x_27 = lean_mk_string("No Content-Length field in header: ");
x_28 = lean_string_append(x_27, x_26);
lean_dec(x_26);
x_29 = lean_mk_string("");
x_30 = lean_string_append(x_28, x_29);
lean_dec(x_29);
x_31 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_23);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_22);
x_33 = lean_ctor_get(x_25, 0);
lean_inc(x_33);
lean_dec(x_25);
x_34 = l_String_toNat_x3f(x_33);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_35 = lean_mk_string("Content-Length header field value '");
x_36 = lean_string_append(x_35, x_33);
lean_dec(x_33);
x_37 = lean_mk_string("' is not a Nat");
x_38 = lean_string_append(x_36, x_37);
lean_dec(x_37);
x_39 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_23);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_33);
x_41 = lean_ctor_get(x_34, 0);
lean_inc(x_41);
lean_dec(x_34);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_23);
return x_42;
}
}
}
}
else
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_3);
if (x_43 == 0)
{
return x_3;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_3, 0);
x_45 = lean_ctor_get(x_3, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_3);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
lean_object* l_List_lookup___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_lookup___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_List_toStringAux___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_toStringAux___at___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader___spec__3(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_IO_FS_Stream_readLspMessage(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_1);
x_3 = l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = l_IO_FS_Stream_readMessage(x_1, x_4, x_5);
lean_dec(x_4);
if (lean_obj_tag(x_6) == 0)
{
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_io_error_to_string(x_8);
x_10 = lean_mk_string("Cannot read LSP message: ");
x_11 = lean_string_append(x_10, x_9);
lean_dec(x_9);
x_12 = lean_mk_string("");
x_13 = lean_string_append(x_11, x_12);
lean_dec(x_12);
x_14 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_6, 0, x_14);
return x_6;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_6, 0);
x_16 = lean_ctor_get(x_6, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_6);
x_17 = lean_io_error_to_string(x_15);
x_18 = lean_mk_string("Cannot read LSP message: ");
x_19 = lean_string_append(x_18, x_17);
lean_dec(x_17);
x_20 = lean_mk_string("");
x_21 = lean_string_append(x_19, x_20);
lean_dec(x_20);
x_22 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_16);
return x_23;
}
}
}
else
{
uint8_t x_24; 
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_3);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = lean_ctor_get(x_3, 0);
x_26 = lean_io_error_to_string(x_25);
x_27 = lean_mk_string("Cannot read LSP message: ");
x_28 = lean_string_append(x_27, x_26);
lean_dec(x_26);
x_29 = lean_mk_string("");
x_30 = lean_string_append(x_28, x_29);
lean_dec(x_29);
x_31 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_3, 0, x_31);
return x_3;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_32 = lean_ctor_get(x_3, 0);
x_33 = lean_ctor_get(x_3, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_3);
x_34 = lean_io_error_to_string(x_32);
x_35 = lean_mk_string("Cannot read LSP message: ");
x_36 = lean_string_append(x_35, x_34);
lean_dec(x_34);
x_37 = lean_mk_string("");
x_38 = lean_string_append(x_36, x_37);
lean_dec(x_37);
x_39 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_33);
return x_40;
}
}
}
}
lean_object* l_IO_FS_Stream_readLspRequestAs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_1);
x_6 = l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader(x_1, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_IO_FS_Stream_readRequestAs(x_1, x_7, x_2, lean_box(0), x_4, x_8);
lean_dec(x_7);
if (lean_obj_tag(x_9) == 0)
{
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_io_error_to_string(x_11);
x_13 = lean_mk_string("Cannot read LSP request: ");
x_14 = lean_string_append(x_13, x_12);
lean_dec(x_12);
x_15 = lean_mk_string("");
x_16 = lean_string_append(x_14, x_15);
lean_dec(x_15);
x_17 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_9, 0, x_17);
return x_9;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_9, 0);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_9);
x_20 = lean_io_error_to_string(x_18);
x_21 = lean_mk_string("Cannot read LSP request: ");
x_22 = lean_string_append(x_21, x_20);
lean_dec(x_20);
x_23 = lean_mk_string("");
x_24 = lean_string_append(x_22, x_23);
lean_dec(x_23);
x_25 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_19);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_6);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_ctor_get(x_6, 0);
x_29 = lean_io_error_to_string(x_28);
x_30 = lean_mk_string("Cannot read LSP request: ");
x_31 = lean_string_append(x_30, x_29);
lean_dec(x_29);
x_32 = lean_mk_string("");
x_33 = lean_string_append(x_31, x_32);
lean_dec(x_32);
x_34 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_6, 0, x_34);
return x_6;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_35 = lean_ctor_get(x_6, 0);
x_36 = lean_ctor_get(x_6, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_6);
x_37 = lean_io_error_to_string(x_35);
x_38 = lean_mk_string("Cannot read LSP request: ");
x_39 = lean_string_append(x_38, x_37);
lean_dec(x_37);
x_40 = lean_mk_string("");
x_41 = lean_string_append(x_39, x_40);
lean_dec(x_40);
x_42 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_36);
return x_43;
}
}
}
}
lean_object* l_IO_FS_Stream_readLspNotificationAs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_1);
x_6 = l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader(x_1, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_IO_FS_Stream_readNotificationAs(x_1, x_7, x_2, lean_box(0), x_4, x_8);
lean_dec(x_7);
if (lean_obj_tag(x_9) == 0)
{
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_io_error_to_string(x_11);
x_13 = lean_mk_string("Cannot read LSP notification: ");
x_14 = lean_string_append(x_13, x_12);
lean_dec(x_12);
x_15 = lean_mk_string("");
x_16 = lean_string_append(x_14, x_15);
lean_dec(x_15);
x_17 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_9, 0, x_17);
return x_9;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_9, 0);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_9);
x_20 = lean_io_error_to_string(x_18);
x_21 = lean_mk_string("Cannot read LSP notification: ");
x_22 = lean_string_append(x_21, x_20);
lean_dec(x_20);
x_23 = lean_mk_string("");
x_24 = lean_string_append(x_22, x_23);
lean_dec(x_23);
x_25 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_19);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_6);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_ctor_get(x_6, 0);
x_29 = lean_io_error_to_string(x_28);
x_30 = lean_mk_string("Cannot read LSP notification: ");
x_31 = lean_string_append(x_30, x_29);
lean_dec(x_29);
x_32 = lean_mk_string("");
x_33 = lean_string_append(x_31, x_32);
lean_dec(x_32);
x_34 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_6, 0, x_34);
return x_6;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_35 = lean_ctor_get(x_6, 0);
x_36 = lean_ctor_get(x_6, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_6);
x_37 = lean_io_error_to_string(x_35);
x_38 = lean_mk_string("Cannot read LSP notification: ");
x_39 = lean_string_append(x_38, x_37);
lean_dec(x_37);
x_40 = lean_mk_string("");
x_41 = lean_string_append(x_39, x_40);
lean_dec(x_40);
x_42 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_36);
return x_43;
}
}
}
}
lean_object* l_IO_FS_Stream_readLspResponseAs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_1);
x_6 = l___private_Lean_Data_Lsp_Communication_0__IO_FS_Stream_readLspHeader(x_1, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_IO_FS_Stream_readResponseAs(x_1, x_7, x_2, lean_box(0), x_4, x_8);
lean_dec(x_7);
if (lean_obj_tag(x_9) == 0)
{
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_io_error_to_string(x_11);
x_13 = lean_mk_string("Cannot read LSP response: ");
x_14 = lean_string_append(x_13, x_12);
lean_dec(x_12);
x_15 = lean_mk_string("");
x_16 = lean_string_append(x_14, x_15);
lean_dec(x_15);
x_17 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_9, 0, x_17);
return x_9;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_9, 0);
x_19 = lean_ctor_get(x_9, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_9);
x_20 = lean_io_error_to_string(x_18);
x_21 = lean_mk_string("Cannot read LSP response: ");
x_22 = lean_string_append(x_21, x_20);
lean_dec(x_20);
x_23 = lean_mk_string("");
x_24 = lean_string_append(x_22, x_23);
lean_dec(x_23);
x_25 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_19);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_6);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_ctor_get(x_6, 0);
x_29 = lean_io_error_to_string(x_28);
x_30 = lean_mk_string("Cannot read LSP response: ");
x_31 = lean_string_append(x_30, x_29);
lean_dec(x_29);
x_32 = lean_mk_string("");
x_33 = lean_string_append(x_31, x_32);
lean_dec(x_32);
x_34 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_6, 0, x_34);
return x_6;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_35 = lean_ctor_get(x_6, 0);
x_36 = lean_ctor_get(x_6, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_6);
x_37 = lean_io_error_to_string(x_35);
x_38 = lean_mk_string("Cannot read LSP response: ");
x_39 = lean_string_append(x_38, x_37);
lean_dec(x_37);
x_40 = lean_mk_string("");
x_41 = lean_string_append(x_39, x_40);
lean_dec(x_40);
x_42 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_36);
return x_43;
}
}
}
}
lean_object* l_IO_FS_Stream_writeLspMessage(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_mk_string("2.0");
x_5 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_mk_string("jsonrpc");
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_ctor_get(x_1, 5);
lean_inc(x_8);
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_27 = lean_ctor_get(x_2, 0);
x_28 = lean_ctor_get(x_2, 1);
x_29 = lean_ctor_get(x_2, 2);
lean_inc(x_28);
x_30 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_30, 0, x_28);
x_31 = lean_mk_string("method");
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_mk_string("params");
x_36 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_35, x_29);
switch (lean_obj_tag(x_27)) {
case 0:
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_37 = lean_ctor_get(x_27, 0);
lean_inc(x_37);
x_38 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_38, 0, x_37);
x_39 = lean_mk_string("id");
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_34);
x_42 = l_List_append___rarg(x_41, x_36);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_7);
lean_ctor_set(x_43, 1, x_42);
x_44 = l_Lean_Json_mkObj(x_43);
x_9 = x_44;
goto block_26;
}
case 1:
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_45 = lean_ctor_get(x_27, 0);
lean_inc(x_45);
x_46 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_46, 0, x_45);
x_47 = lean_mk_string("id");
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_34);
x_50 = l_List_append___rarg(x_49, x_36);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_7);
lean_ctor_set(x_51, 1, x_50);
x_52 = l_Lean_Json_mkObj(x_51);
x_9 = x_52;
goto block_26;
}
default: 
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_53 = lean_mk_string("id");
x_54 = lean_box(0);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_34);
x_57 = l_List_append___rarg(x_56, x_36);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_7);
lean_ctor_set(x_58, 1, x_57);
x_59 = l_Lean_Json_mkObj(x_58);
x_9 = x_59;
goto block_26;
}
}
}
case 1:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_60 = lean_ctor_get(x_2, 0);
x_61 = lean_ctor_get(x_2, 1);
lean_inc(x_60);
x_62 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_62, 0, x_60);
x_63 = lean_mk_string("method");
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_62);
x_65 = lean_mk_string("params");
x_66 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_65, x_61);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_7);
lean_ctor_set(x_68, 1, x_67);
x_69 = l_Lean_Json_mkObj(x_68);
x_9 = x_69;
goto block_26;
}
case 2:
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_70 = lean_ctor_get(x_2, 0);
x_71 = lean_ctor_get(x_2, 1);
x_72 = lean_mk_string("result");
lean_inc(x_71);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
x_74 = lean_box(0);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
switch (lean_obj_tag(x_70)) {
case 0:
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_76 = lean_ctor_get(x_70, 0);
lean_inc(x_76);
x_77 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_77, 0, x_76);
x_78 = lean_mk_string("id");
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_75);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_7);
lean_ctor_set(x_81, 1, x_80);
x_82 = l_Lean_Json_mkObj(x_81);
x_9 = x_82;
goto block_26;
}
case 1:
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_83 = lean_ctor_get(x_70, 0);
lean_inc(x_83);
x_84 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_84, 0, x_83);
x_85 = lean_mk_string("id");
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_84);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_75);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_7);
lean_ctor_set(x_88, 1, x_87);
x_89 = l_Lean_Json_mkObj(x_88);
x_9 = x_89;
goto block_26;
}
default: 
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_90 = lean_mk_string("id");
x_91 = lean_box(0);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_75);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_7);
lean_ctor_set(x_94, 1, x_93);
x_95 = l_Lean_Json_mkObj(x_94);
x_9 = x_95;
goto block_26;
}
}
}
default: 
{
lean_object* x_96; uint8_t x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_96 = lean_ctor_get(x_2, 0);
x_97 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_98 = lean_ctor_get(x_2, 1);
x_99 = lean_ctor_get(x_2, 2);
lean_inc(x_98);
x_100 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_100, 0, x_98);
x_101 = lean_mk_string("message");
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_100);
x_103 = lean_box(0);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
x_105 = lean_mk_string("data");
x_106 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__2(x_105, x_99);
switch (lean_obj_tag(x_96)) {
case 0:
{
lean_object* x_190; lean_object* x_191; 
x_190 = lean_ctor_get(x_96, 0);
lean_inc(x_190);
x_191 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_191, 0, x_190);
x_107 = x_191;
goto block_189;
}
case 1:
{
lean_object* x_192; lean_object* x_193; 
x_192 = lean_ctor_get(x_96, 0);
lean_inc(x_192);
x_193 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_193, 0, x_192);
x_107 = x_193;
goto block_189;
}
default: 
{
lean_object* x_194; 
x_194 = lean_box(0);
x_107 = x_194;
goto block_189;
}
}
block_189:
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_mk_string("id");
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_107);
switch (x_97) {
case 0:
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_123 = lean_unsigned_to_nat(32700u);
x_124 = lean_nat_to_int(x_123);
x_125 = lean_int_neg(x_124);
lean_dec(x_124);
x_126 = lean_unsigned_to_nat(0u);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
x_128 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_128, 0, x_127);
x_110 = x_128;
goto block_122;
}
case 1:
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_129 = lean_unsigned_to_nat(32600u);
x_130 = lean_nat_to_int(x_129);
x_131 = lean_int_neg(x_130);
lean_dec(x_130);
x_132 = lean_unsigned_to_nat(0u);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_134, 0, x_133);
x_110 = x_134;
goto block_122;
}
case 2:
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_135 = lean_unsigned_to_nat(32601u);
x_136 = lean_nat_to_int(x_135);
x_137 = lean_int_neg(x_136);
lean_dec(x_136);
x_138 = lean_unsigned_to_nat(0u);
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_137);
lean_ctor_set(x_139, 1, x_138);
x_140 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_140, 0, x_139);
x_110 = x_140;
goto block_122;
}
case 3:
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_141 = lean_unsigned_to_nat(32602u);
x_142 = lean_nat_to_int(x_141);
x_143 = lean_int_neg(x_142);
lean_dec(x_142);
x_144 = lean_unsigned_to_nat(0u);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_144);
x_146 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_146, 0, x_145);
x_110 = x_146;
goto block_122;
}
case 4:
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_147 = lean_unsigned_to_nat(32603u);
x_148 = lean_nat_to_int(x_147);
x_149 = lean_int_neg(x_148);
lean_dec(x_148);
x_150 = lean_unsigned_to_nat(0u);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_150);
x_152 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_152, 0, x_151);
x_110 = x_152;
goto block_122;
}
case 5:
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_153 = lean_unsigned_to_nat(32099u);
x_154 = lean_nat_to_int(x_153);
x_155 = lean_int_neg(x_154);
lean_dec(x_154);
x_156 = lean_unsigned_to_nat(0u);
x_157 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_157, 0, x_155);
lean_ctor_set(x_157, 1, x_156);
x_158 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_158, 0, x_157);
x_110 = x_158;
goto block_122;
}
case 6:
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_159 = lean_unsigned_to_nat(32000u);
x_160 = lean_nat_to_int(x_159);
x_161 = lean_int_neg(x_160);
lean_dec(x_160);
x_162 = lean_unsigned_to_nat(0u);
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_161);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_164, 0, x_163);
x_110 = x_164;
goto block_122;
}
case 7:
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_165 = lean_unsigned_to_nat(32002u);
x_166 = lean_nat_to_int(x_165);
x_167 = lean_int_neg(x_166);
lean_dec(x_166);
x_168 = lean_unsigned_to_nat(0u);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_170, 0, x_169);
x_110 = x_170;
goto block_122;
}
case 8:
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_171 = lean_unsigned_to_nat(32001u);
x_172 = lean_nat_to_int(x_171);
x_173 = lean_int_neg(x_172);
lean_dec(x_172);
x_174 = lean_unsigned_to_nat(0u);
x_175 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_175, 0, x_173);
lean_ctor_set(x_175, 1, x_174);
x_176 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_176, 0, x_175);
x_110 = x_176;
goto block_122;
}
case 9:
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_177 = lean_unsigned_to_nat(32800u);
x_178 = lean_nat_to_int(x_177);
x_179 = lean_int_neg(x_178);
lean_dec(x_178);
x_180 = lean_unsigned_to_nat(0u);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_179);
lean_ctor_set(x_181, 1, x_180);
x_182 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_182, 0, x_181);
x_110 = x_182;
goto block_122;
}
default: 
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_183 = lean_unsigned_to_nat(32801u);
x_184 = lean_nat_to_int(x_183);
x_185 = lean_int_neg(x_184);
lean_dec(x_184);
x_186 = lean_unsigned_to_nat(0u);
x_187 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_187, 0, x_185);
lean_ctor_set(x_187, 1, x_186);
x_188 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_188, 0, x_187);
x_110 = x_188;
goto block_122;
}
}
block_122:
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_111 = lean_mk_string("code");
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_110);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_104);
x_114 = l_List_append___rarg(x_113, x_106);
x_115 = l_Lean_Json_mkObj(x_114);
x_116 = lean_mk_string("error");
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_115);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_103);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_109);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_7);
lean_ctor_set(x_120, 1, x_119);
x_121 = l_Lean_Json_mkObj(x_120);
x_9 = x_121;
goto block_26;
}
}
}
}
block_26:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = l_Lean_Json_compress(x_9);
x_11 = lean_string_utf8_byte_size(x_10);
x_12 = l_Nat_repr(x_11);
x_13 = lean_mk_string("Content-Length: ");
x_14 = lean_string_append(x_13, x_12);
lean_dec(x_12);
x_15 = lean_mk_string("\x0d\n\x0d\n");
x_16 = lean_string_append(x_14, x_15);
lean_dec(x_15);
x_17 = lean_string_append(x_16, x_10);
lean_dec(x_10);
x_18 = lean_apply_2(x_8, x_17, x_3);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_apply_1(x_20, x_19);
return x_21;
}
else
{
uint8_t x_22; 
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_18);
if (x_22 == 0)
{
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 0);
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_18);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
lean_object* l_IO_FS_Stream_writeLspMessage___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Stream_writeLspMessage(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_IO_FS_Stream_writeLspRequest___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 2);
lean_inc(x_7);
lean_dec(x_3);
x_8 = l_Lean_Json_toStructured_x3f___rarg(x_1, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_6);
lean_ctor_set(x_10, 2, x_9);
x_11 = l_IO_FS_Stream_writeLspMessage(x_2, x_10, x_4);
lean_dec(x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_6);
lean_ctor_set(x_14, 2, x_13);
x_15 = l_IO_FS_Stream_writeLspMessage(x_2, x_14, x_4);
lean_dec(x_14);
return x_15;
}
}
}
lean_object* l_IO_FS_Stream_writeLspRequest(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Stream_writeLspRequest___rarg), 4, 0);
return x_2;
}
}
lean_object* l_IO_FS_Stream_writeLspNotification___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_Lean_Json_toStructured_x3f___rarg(x_1, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_IO_FS_Stream_writeLspMessage(x_2, x_9, x_4);
lean_dec(x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_IO_FS_Stream_writeLspMessage(x_2, x_13, x_4);
lean_dec(x_13);
return x_14;
}
}
}
lean_object* l_IO_FS_Stream_writeLspNotification(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Stream_writeLspNotification___rarg), 4, 0);
return x_2;
}
}
lean_object* l_IO_FS_Stream_writeLspResponse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_1(x_1, x_6);
x_8 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_IO_FS_Stream_writeLspMessage(x_2, x_8, x_4);
lean_dec(x_8);
return x_9;
}
}
lean_object* l_IO_FS_Stream_writeLspResponse(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Stream_writeLspResponse___rarg), 4, 0);
return x_2;
}
}
lean_object* l_IO_FS_Stream_writeLspResponseError(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_box(0);
lean_inc(x_6);
lean_inc(x_4);
x_8 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_8, 2, x_7);
lean_ctor_set_uint8(x_8, sizeof(void*)*3, x_5);
x_9 = l_IO_FS_Stream_writeLspMessage(x_1, x_8, x_3);
lean_dec(x_8);
return x_9;
}
}
lean_object* l_IO_FS_Stream_writeLspResponseError___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Stream_writeLspResponseError(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_IO_FS_Stream_writeLspResponseErrorWithData___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 2);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get_uint8(x_3, sizeof(void*)*3);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
lean_ctor_set_uint8(x_10, sizeof(void*)*3, x_7);
x_11 = l_IO_FS_Stream_writeLspMessage(x_2, x_10, x_4);
lean_dec(x_10);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
x_13 = lean_ctor_get_uint8(x_3, sizeof(void*)*3);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_dec(x_3);
x_15 = !lean_is_exclusive(x_5);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_5, 0);
x_17 = lean_apply_1(x_1, x_16);
lean_ctor_set(x_5, 0, x_17);
x_18 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_14);
lean_ctor_set(x_18, 2, x_5);
lean_ctor_set_uint8(x_18, sizeof(void*)*3, x_13);
x_19 = l_IO_FS_Stream_writeLspMessage(x_2, x_18, x_4);
lean_dec(x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_5, 0);
lean_inc(x_20);
lean_dec(x_5);
x_21 = lean_apply_1(x_1, x_20);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_23, 0, x_12);
lean_ctor_set(x_23, 1, x_14);
lean_ctor_set(x_23, 2, x_22);
lean_ctor_set_uint8(x_23, sizeof(void*)*3, x_13);
x_24 = l_IO_FS_Stream_writeLspMessage(x_2, x_23, x_4);
lean_dec(x_23);
return x_24;
}
}
}
}
lean_object* l_IO_FS_Stream_writeLspResponseErrorWithData(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Stream_writeLspResponseErrorWithData___rarg), 4, 0);
return x_2;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Init_System_IO(lean_object*);
lean_object* initialize_Lean_Data_JsonRpc(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Data_Lsp_Communication(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_IO(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_JsonRpc(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
