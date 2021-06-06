// Lean compiler output
// Module: Init.Data.ToString.Macro
// Imports: Init.Meta Init.Data.ToString.Basic
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
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_17_(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Syntax_expandInterpolatedStr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_termS_x21__;
static lean_object* _init_l_termS_x21__() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_1 = lean_box(0);
x_2 = lean_mk_string("termS!_");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("andthen");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = lean_mk_string("s!");
x_7 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_mk_string("interpolatedStr");
x_9 = lean_name_mk_string(x_1, x_8);
x_10 = lean_mk_string("term");
x_11 = lean_name_mk_string(x_1, x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_9);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_15, 0, x_5);
lean_ctor_set(x_15, 1, x_7);
lean_ctor_set(x_15, 2, x_14);
x_16 = lean_unsigned_to_nat(1024u);
x_17 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_17, 0, x_3);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set(x_17, 2, x_15);
return x_17;
}
}
lean_object* l_myMacro____x40_Init_Data_ToString_Macro___hyg_17_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_box(0);
x_5 = lean_mk_string("termS!_");
x_6 = lean_name_mk_string(x_4, x_5);
lean_inc(x_1);
x_7 = l_Lean_Syntax_isOfKind(x_1, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(1);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_dec(x_1);
x_12 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
x_17 = lean_mk_string("String");
x_18 = lean_string_utf8_byte_size(x_17);
x_19 = lean_unsigned_to_nat(0u);
lean_inc(x_17);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_20, 2, x_18);
x_21 = lean_name_mk_string(x_4, x_17);
lean_inc(x_15);
lean_inc(x_21);
lean_inc(x_16);
x_22 = l_Lean_addMacroScope(x_16, x_21, x_15);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_26, 0, x_13);
lean_ctor_set(x_26, 1, x_20);
lean_ctor_set(x_26, 2, x_22);
lean_ctor_set(x_26, 3, x_25);
x_27 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_14);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_mk_string("toString");
x_31 = lean_string_utf8_byte_size(x_30);
lean_inc(x_30);
x_32 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_19);
lean_ctor_set(x_32, 2, x_31);
lean_inc(x_30);
x_33 = lean_name_mk_string(x_4, x_30);
x_34 = l_Lean_addMacroScope(x_16, x_33, x_15);
x_35 = lean_mk_string("ToString");
x_36 = lean_name_mk_string(x_4, x_35);
x_37 = lean_name_mk_string(x_36, x_30);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_23);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_23);
x_40 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_40, 0, x_28);
lean_ctor_set(x_40, 1, x_32);
lean_ctor_set(x_40, 2, x_34);
lean_ctor_set(x_40, 3, x_39);
x_41 = l_Lean_Syntax_expandInterpolatedStr(x_11, x_26, x_40, x_2, x_29);
lean_dec(x_11);
return x_41;
}
}
}
lean_object* initialize_Init_Meta(lean_object*);
lean_object* initialize_Init_Data_ToString_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Data_ToString_Macro(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Meta(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_termS_x21__ = _init_l_termS_x21__();
lean_mark_persistent(l_termS_x21__);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
