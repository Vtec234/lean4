// Lean compiler output
// Module: Init.Data.Format.Macro
// Imports: Init.Data.Format.Basic Init.Data.ToString.Macro
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
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Std_termF_x21__;
lean_object* l_Lean_Syntax_expandInterpolatedStr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
static lean_object* _init_l_Std_termF_x21__() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Std");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("termF!_");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("andthen");
x_7 = lean_name_mk_string(x_1, x_6);
x_8 = lean_mk_string("f!");
x_9 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_mk_string("interpolatedStr");
x_11 = lean_name_mk_string(x_1, x_10);
x_12 = lean_mk_string("term");
x_13 = lean_name_mk_string(x_1, x_12);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_17, 0, x_7);
lean_ctor_set(x_17, 1, x_9);
lean_ctor_set(x_17, 2, x_16);
x_18 = lean_unsigned_to_nat(1024u);
x_19 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_19, 0, x_5);
lean_ctor_set(x_19, 1, x_18);
lean_ctor_set(x_19, 2, x_17);
return x_19;
}
}
lean_object* l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Std");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("termF!_");
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
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
lean_dec(x_1);
x_14 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_2, 2);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
x_19 = lean_mk_string("Format");
x_20 = lean_string_utf8_byte_size(x_19);
x_21 = lean_unsigned_to_nat(0u);
lean_inc(x_19);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_22, 2, x_20);
lean_inc(x_19);
x_23 = lean_name_mk_string(x_4, x_19);
lean_inc(x_17);
lean_inc(x_18);
x_24 = l_Lean_addMacroScope(x_18, x_23, x_17);
lean_inc(x_6);
x_25 = lean_name_mk_string(x_6, x_19);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_29, 0, x_15);
lean_ctor_set(x_29, 1, x_22);
lean_ctor_set(x_29, 2, x_24);
lean_ctor_set(x_29, 3, x_28);
x_30 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_16);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_mk_string("fmt");
x_34 = lean_string_utf8_byte_size(x_33);
lean_inc(x_33);
x_35 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_21);
lean_ctor_set(x_35, 2, x_34);
lean_inc(x_33);
x_36 = lean_name_mk_string(x_4, x_33);
x_37 = l_Lean_addMacroScope(x_18, x_36, x_17);
x_38 = lean_name_mk_string(x_6, x_33);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_26);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_26);
x_41 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_41, 0, x_31);
lean_ctor_set(x_41, 1, x_35);
lean_ctor_set(x_41, 2, x_37);
lean_ctor_set(x_41, 3, x_40);
x_42 = l_Lean_Syntax_expandInterpolatedStr(x_13, x_29, x_41, x_2, x_32);
lean_dec(x_13);
return x_42;
}
}
}
lean_object* initialize_Init_Data_Format_Basic(lean_object*);
lean_object* initialize_Init_Data_ToString_Macro(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Data_Format_Macro(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Format_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_termF_x21__ = _init_l_Std_termF_x21__();
lean_mark_persistent(l_Std_termF_x21__);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
