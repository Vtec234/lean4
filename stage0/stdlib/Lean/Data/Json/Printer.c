// Lean compiler output
// Module: Lean.Data.Json.Printer
// Imports: Init Lean.Data.Format Lean.Data.Json.Basic
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
lean_object* lean_string_push(lean_object*, uint32_t);
size_t l_USize_add(size_t, size_t);
lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Json_escape(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_Json_render___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Json_render___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Json_compress___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_JsonNumber_toString(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Json_escape___boxed(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux(lean_object*, uint32_t);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l_Std_instToFormatFormat___boxed(lean_object*);
lean_object* lean_format_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Json_renderString(lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Lean_Json_renderString___boxed(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Json_compress___spec__1(size_t, size_t, lean_object*);
uint32_t l_Nat_digitChar(lean_object*);
lean_object* l_Std_Format_joinSep___rarg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Array_mapMUnsafe_map___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_UInt32_decEq(uint32_t, uint32_t);
lean_object* l_String_intercalate(lean_object*, lean_object*);
extern lean_object* l_Id_instMonadId;
lean_object* l_String_foldlAux_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_render_match__1(lean_object*);
lean_object* l_Lean_Json_instToFormatJson;
lean_object* l_Lean_Json_instToStringJson(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Json_render(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Std_RBNode_fold___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_fold___at_Lean_Json_compress___spec__2(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
uint8_t l_UInt32_decLe(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Json_render_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_mk(lean_object*);
lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux(lean_object* x_1, uint32_t x_2) {
_start:
{
lean_object* x_3; uint32_t x_32; uint8_t x_33; 
x_32 = 34;
x_33 = x_2 == x_32;
if (x_33 == 0)
{
uint32_t x_34; uint8_t x_35; 
x_34 = 92;
x_35 = x_2 == x_34;
if (x_35 == 0)
{
uint32_t x_36; uint8_t x_37; 
x_36 = 10;
x_37 = x_2 == x_36;
if (x_37 == 0)
{
uint32_t x_38; uint8_t x_39; 
x_38 = 13;
x_39 = x_2 == x_38;
if (x_39 == 0)
{
uint32_t x_40; uint8_t x_41; 
x_40 = 32;
x_41 = x_40 <= x_2;
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = lean_box(0);
x_3 = x_42;
goto block_31;
}
else
{
uint32_t x_43; uint8_t x_44; 
x_43 = 1114111;
x_44 = x_2 <= x_43;
if (x_44 == 0)
{
lean_object* x_45; 
x_45 = lean_box(0);
x_3 = x_45;
goto block_31;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_mk_string("");
x_47 = lean_string_push(x_46, x_2);
x_48 = lean_string_append(x_1, x_47);
lean_dec(x_47);
return x_48;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_mk_string("\\r");
x_50 = lean_string_append(x_1, x_49);
lean_dec(x_49);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_mk_string("\\n");
x_52 = lean_string_append(x_1, x_51);
lean_dec(x_51);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_mk_string("\\\\");
x_54 = lean_string_append(x_1, x_53);
lean_dec(x_53);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_mk_string("\\\"");
x_56 = lean_string_append(x_1, x_55);
lean_dec(x_55);
return x_56;
}
block_31:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint32_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint32_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint32_t x_17; lean_object* x_18; uint32_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_3);
x_4 = lean_uint32_to_nat(x_2);
x_5 = lean_mk_string("\\u");
x_6 = lean_string_append(x_1, x_5);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(4096u);
x_8 = lean_nat_div(x_4, x_7);
x_9 = l_Nat_digitChar(x_8);
lean_dec(x_8);
x_10 = lean_nat_mod(x_4, x_7);
x_11 = lean_unsigned_to_nat(256u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = l_Nat_digitChar(x_12);
lean_dec(x_12);
x_14 = lean_nat_mod(x_4, x_11);
x_15 = lean_unsigned_to_nat(16u);
x_16 = lean_nat_div(x_14, x_15);
lean_dec(x_14);
x_17 = l_Nat_digitChar(x_16);
lean_dec(x_16);
x_18 = lean_nat_mod(x_4, x_15);
lean_dec(x_4);
x_19 = l_Nat_digitChar(x_18);
lean_dec(x_18);
x_20 = lean_box(0);
x_21 = lean_box_uint32(x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = lean_box_uint32(x_17);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_box_uint32(x_13);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = lean_box_uint32(x_9);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = lean_string_mk(x_28);
x_30 = lean_string_append(x_6, x_29);
lean_dec(x_29);
return x_30;
}
}
}
lean_object* l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; 
x_3 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_4 = l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux(x_1, x_3);
return x_4;
}
}
lean_object* l_Lean_Json_escape(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_string_utf8_byte_size(x_1);
x_3 = lean_alloc_closure((void*)(l___private_Lean_Data_Json_Printer_0__Lean_Json_escapeAux___boxed), 2, 0);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_mk_string("");
x_6 = l_String_foldlAux_loop___rarg(x_3, x_1, x_2, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_Json_escape___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Json_escape(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Json_renderString(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Json_escape(x_1);
x_3 = lean_mk_string("\"");
lean_inc(x_3);
x_4 = lean_string_append(x_3, x_2);
lean_dec(x_2);
x_5 = lean_string_append(x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Json_renderString___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Json_renderString(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Json_render_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_2, x_9);
return x_10;
}
case 1:
{
uint8_t x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_11 = lean_ctor_get_uint8(x_1, 0);
lean_dec(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
x_12 = lean_box(0);
x_13 = lean_apply_1(x_4, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
x_14 = lean_box(0);
x_15 = lean_apply_1(x_3, x_14);
return x_15;
}
}
case 2:
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_apply_1(x_5, x_16);
return x_17;
}
case 3:
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_apply_1(x_6, x_18);
return x_19;
}
case 4:
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_apply_1(x_7, x_20);
return x_21;
}
default: 
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
lean_dec(x_1);
x_23 = lean_apply_1(x_8, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Json_render_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Json_render_match__1___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Json_render___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_4 = l_Lean_Json_renderString(x_2);
x_5 = lean_mk_string(":");
x_6 = lean_string_append(x_4, x_5);
lean_dec(x_5);
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_box(1);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_Lean_Json_render(x_3);
x_11 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = 0;
x_13 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set_uint8(x_13, sizeof(void*)*1, x_12);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_1);
return x_14;
}
}
lean_object* l_Lean_Json_render(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("null");
x_3 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
case 1:
{
uint8_t x_4; 
x_4 = lean_ctor_get_uint8(x_1, 0);
lean_dec(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_mk_string("false");
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_mk_string("true");
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
case 2:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = l_Lean_JsonNumber_toString(x_9);
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
case 3:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = l_Lean_Json_renderString(x_12);
lean_dec(x_12);
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
case 4:
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; 
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_array_get_size(x_15);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = x_15;
x_20 = l_Id_instMonadId;
x_21 = lean_alloc_closure((void*)(l_Lean_Json_render), 1, 0);
x_22 = l_Array_mapMUnsafe_map___rarg(x_20, x_21, x_17, x_18, x_19);
x_23 = x_22;
x_24 = lean_array_to_list(lean_box(0), x_23);
x_25 = lean_mk_string(",");
x_26 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_box(1);
x_28 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_closure((void*)(l_Std_instToFormatFormat___boxed), 1, 0);
x_30 = l_Std_Format_joinSep___rarg(x_29, x_24, x_28);
x_31 = lean_mk_string("[");
x_32 = lean_string_length(x_31);
x_33 = lean_nat_to_int(x_32);
x_34 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_34, 0, x_31);
x_35 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_30);
x_36 = lean_mk_string("]");
x_37 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_39, 0, x_33);
lean_ctor_set(x_39, 1, x_38);
x_40 = 0;
x_41 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set_uint8(x_41, sizeof(void*)*1, x_40);
return x_41;
}
default: 
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; lean_object* x_62; 
x_42 = lean_ctor_get(x_1, 0);
lean_inc(x_42);
lean_dec(x_1);
x_43 = lean_box(0);
x_44 = lean_alloc_closure((void*)(l_Lean_Json_render___lambda__1___boxed), 3, 0);
x_45 = l_Std_RBNode_fold___rarg(x_44, x_43, x_42);
x_46 = lean_mk_string(",");
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_box(1);
x_49 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_alloc_closure((void*)(l_Std_instToFormatFormat___boxed), 1, 0);
x_51 = l_Std_Format_joinSep___rarg(x_50, x_45, x_49);
x_52 = lean_mk_string("{");
x_53 = lean_string_length(x_52);
x_54 = lean_nat_to_int(x_53);
x_55 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_55, 0, x_52);
x_56 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_51);
x_57 = lean_mk_string("}");
x_58 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_60, 0, x_54);
lean_ctor_set(x_60, 1, x_59);
x_61 = 0;
x_62 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set_uint8(x_62, sizeof(void*)*1, x_61);
return x_62;
}
}
}
}
lean_object* l_Lean_Json_render___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Json_render___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Json_pretty(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Json_render(x_1);
x_4 = lean_format_pretty(x_3, x_2);
return x_4;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Json_compress___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = l_Lean_Json_compress(x_9);
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
lean_object* l_Std_RBNode_fold___at_Lean_Json_compress___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 3);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_Std_RBNode_fold___at_Lean_Json_compress___spec__2(x_1, x_3);
x_8 = l_Lean_Json_renderString(x_4);
lean_dec(x_4);
x_9 = lean_mk_string("");
lean_inc(x_9);
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = lean_mk_string(":");
x_12 = lean_string_append(x_10, x_11);
lean_dec(x_11);
x_13 = l_Lean_Json_compress(x_5);
x_14 = lean_string_append(x_12, x_13);
lean_dec(x_13);
x_15 = lean_string_append(x_14, x_9);
lean_dec(x_9);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_7);
x_1 = x_16;
x_2 = x_6;
goto _start;
}
}
}
lean_object* l_Lean_Json_compress(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = lean_mk_string("null");
return x_2;
}
case 1:
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_1, 0);
lean_dec(x_1);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_mk_string("false");
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_mk_string("true");
return x_5;
}
}
case 2:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Lean_JsonNumber_toString(x_6);
return x_7;
}
case 3:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_Lean_Json_renderString(x_8);
lean_dec(x_8);
return x_9;
}
case 4:
{
lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_array_get_size(x_10);
x_12 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_13 = 0;
x_14 = x_10;
x_15 = l_Array_mapMUnsafe_map___at_Lean_Json_compress___spec__1(x_12, x_13, x_14);
x_16 = x_15;
x_17 = lean_array_to_list(lean_box(0), x_16);
x_18 = lean_mk_string(",");
x_19 = l_String_intercalate(x_18, x_17);
x_20 = lean_mk_string("[");
x_21 = lean_string_append(x_20, x_19);
lean_dec(x_19);
x_22 = lean_mk_string("]");
x_23 = lean_string_append(x_21, x_22);
lean_dec(x_22);
return x_23;
}
default: 
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_24 = lean_ctor_get(x_1, 0);
lean_inc(x_24);
lean_dec(x_1);
x_25 = lean_box(0);
x_26 = l_Std_RBNode_fold___at_Lean_Json_compress___spec__2(x_25, x_24);
x_27 = lean_mk_string(",");
x_28 = l_String_intercalate(x_27, x_26);
x_29 = lean_mk_string("{");
x_30 = lean_string_append(x_29, x_28);
lean_dec(x_28);
x_31 = lean_mk_string("}");
x_32 = lean_string_append(x_30, x_31);
lean_dec(x_31);
return x_32;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Json_compress___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Json_compress___spec__1(x_4, x_5, x_3);
return x_6;
}
}
static lean_object* _init_l_Lean_Json_instToFormatJson() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Json_render), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Json_instToStringJson(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(80u);
x_3 = l_Lean_Json_pretty(x_1, x_2);
return x_3;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Data_Format(lean_object*);
lean_object* initialize_Lean_Data_Json_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Data_Json_Printer(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Format(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Json_instToFormatJson = _init_l_Lean_Json_instToFormatJson();
lean_mark_persistent(l_Lean_Json_instToFormatJson);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
