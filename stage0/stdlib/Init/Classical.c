// Lean compiler output
// Module: Init.Classical
// Imports: Init.Core Init.NotationExtra
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Classical_myMacro____x40_Init_Classical___hyg_949_(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Classical_typeDecidable_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Classical_tacticByCases_____x3a__;
lean_object* l_Classical_typeDecidable_match__1(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Classical_typeDecidable_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_Classical_typeDecidable_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (x_1 == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, lean_box(0));
return x_4;
}
else
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_apply_1(x_2, lean_box(0));
return x_5;
}
}
}
lean_object* l_Classical_typeDecidable_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Classical_typeDecidable_match__1___rarg___boxed), 3, 0);
return x_3;
}
}
lean_object* l_Classical_typeDecidable_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Classical_typeDecidable_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
static lean_object* _init_l_Classical_tacticByCases_____x3a__() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Classical");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("tacticByCases__:_");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("andthen");
x_7 = lean_name_mk_string(x_1, x_6);
x_8 = lean_mk_string("byCases");
x_9 = 0;
x_10 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set_uint8(x_10, sizeof(void*)*1, x_9);
x_11 = lean_mk_string("ident");
x_12 = lean_name_mk_string(x_1, x_11);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
lean_inc(x_7);
x_14 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_10);
lean_ctor_set(x_14, 2, x_13);
x_15 = lean_mk_string(":");
x_16 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_16, 0, x_15);
lean_inc(x_7);
x_17 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_17, 0, x_7);
lean_ctor_set(x_17, 1, x_14);
lean_ctor_set(x_17, 2, x_16);
x_18 = lean_mk_string("term");
x_19 = lean_name_mk_string(x_1, x_18);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_22, 0, x_7);
lean_ctor_set(x_22, 1, x_17);
lean_ctor_set(x_22, 2, x_21);
x_23 = lean_unsigned_to_nat(1022u);
x_24 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_24, 0, x_5);
lean_ctor_set(x_24, 1, x_23);
lean_ctor_set(x_24, 2, x_22);
return x_24;
}
}
lean_object* l_Classical_myMacro____x40_Init_Classical___hyg_949_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Classical");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("tacticByCases__:_");
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
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = lean_unsigned_to_nat(3u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_2, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_2, 1);
lean_inc(x_20);
lean_dec(x_2);
x_21 = lean_mk_string("Lean");
x_22 = lean_name_mk_string(x_4, x_21);
x_23 = lean_mk_string("Parser");
x_24 = lean_name_mk_string(x_22, x_23);
x_25 = lean_mk_string("Tactic");
lean_inc(x_24);
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = lean_mk_string("seq1");
lean_inc(x_26);
x_28 = lean_name_mk_string(x_26, x_27);
x_29 = lean_mk_string("null");
x_30 = lean_name_mk_string(x_4, x_29);
x_31 = lean_mk_string("cases");
lean_inc(x_31);
lean_inc(x_26);
x_32 = lean_name_mk_string(x_26, x_31);
lean_inc(x_18);
x_33 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_33, 0, x_18);
lean_ctor_set(x_33, 1, x_31);
x_34 = lean_mk_string("casesTarget");
lean_inc(x_26);
x_35 = lean_name_mk_string(x_26, x_34);
x_36 = lean_unsigned_to_nat(0u);
x_37 = lean_mk_empty_array_with_capacity(x_36);
lean_inc(x_30);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_30);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_mk_string("Term");
x_40 = lean_name_mk_string(x_24, x_39);
x_41 = lean_mk_string("app");
lean_inc(x_40);
x_42 = lean_name_mk_string(x_40, x_41);
x_43 = lean_mk_string("em");
x_44 = lean_string_utf8_byte_size(x_43);
lean_inc(x_43);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_36);
lean_ctor_set(x_45, 2, x_44);
lean_inc(x_43);
x_46 = lean_name_mk_string(x_4, x_43);
lean_inc(x_19);
lean_inc(x_20);
x_47 = l_Lean_addMacroScope(x_20, x_46, x_19);
x_48 = lean_name_mk_string(x_6, x_43);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
lean_inc(x_18);
x_52 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_52, 0, x_18);
lean_ctor_set(x_52, 1, x_45);
lean_ctor_set(x_52, 2, x_47);
lean_ctor_set(x_52, 3, x_51);
x_53 = lean_mk_empty_array_with_capacity(x_12);
lean_inc(x_53);
x_54 = lean_array_push(x_53, x_15);
lean_inc(x_30);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_30);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_unsigned_to_nat(2u);
x_57 = lean_mk_empty_array_with_capacity(x_56);
lean_inc(x_57);
x_58 = lean_array_push(x_57, x_52);
x_59 = lean_array_push(x_58, x_55);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_42);
lean_ctor_set(x_60, 1, x_59);
lean_inc(x_38);
lean_inc(x_57);
x_61 = lean_array_push(x_57, x_38);
lean_inc(x_61);
x_62 = lean_array_push(x_61, x_60);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_35);
lean_ctor_set(x_63, 1, x_62);
lean_inc(x_53);
x_64 = lean_array_push(x_53, x_63);
lean_inc(x_30);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_30);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_mk_string("inductionAlts");
lean_inc(x_26);
x_67 = lean_name_mk_string(x_26, x_66);
x_68 = lean_mk_string("with");
lean_inc(x_18);
x_69 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_69, 0, x_18);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_mk_string("inductionAlt");
x_71 = lean_name_mk_string(x_26, x_70);
x_72 = lean_mk_string("|");
lean_inc(x_18);
x_73 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_73, 0, x_18);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_mk_string("group");
x_75 = lean_name_mk_string(x_4, x_74);
x_76 = lean_mk_string("inl");
x_77 = lean_string_utf8_byte_size(x_76);
lean_inc(x_76);
x_78 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_36);
lean_ctor_set(x_78, 2, x_77);
x_79 = lean_name_mk_string(x_4, x_76);
lean_inc(x_19);
lean_inc(x_20);
x_80 = l_Lean_addMacroScope(x_20, x_79, x_19);
lean_inc(x_18);
x_81 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_81, 0, x_18);
lean_ctor_set(x_81, 1, x_78);
lean_ctor_set(x_81, 2, x_80);
lean_ctor_set(x_81, 3, x_49);
lean_inc(x_61);
x_82 = lean_array_push(x_61, x_81);
lean_inc(x_75);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_75);
lean_ctor_set(x_83, 1, x_82);
lean_inc(x_53);
x_84 = lean_array_push(x_53, x_13);
lean_inc(x_30);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_30);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_mk_string("=>");
lean_inc(x_18);
x_87 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_87, 0, x_18);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_mk_string("hole");
x_89 = lean_name_mk_string(x_40, x_88);
x_90 = lean_mk_string("_");
lean_inc(x_18);
x_91 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_91, 0, x_18);
lean_ctor_set(x_91, 1, x_90);
lean_inc(x_53);
x_92 = lean_array_push(x_53, x_91);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_89);
lean_ctor_set(x_93, 1, x_92);
x_94 = lean_unsigned_to_nat(5u);
x_95 = lean_mk_empty_array_with_capacity(x_94);
x_96 = lean_array_push(x_95, x_73);
lean_inc(x_96);
x_97 = lean_array_push(x_96, x_83);
lean_inc(x_85);
x_98 = lean_array_push(x_97, x_85);
lean_inc(x_87);
x_99 = lean_array_push(x_98, x_87);
lean_inc(x_93);
x_100 = lean_array_push(x_99, x_93);
lean_inc(x_71);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_71);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_mk_string("inr");
x_103 = lean_string_utf8_byte_size(x_102);
lean_inc(x_102);
x_104 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_36);
lean_ctor_set(x_104, 2, x_103);
x_105 = lean_name_mk_string(x_4, x_102);
x_106 = l_Lean_addMacroScope(x_20, x_105, x_19);
x_107 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_107, 0, x_18);
lean_ctor_set(x_107, 1, x_104);
lean_ctor_set(x_107, 2, x_106);
lean_ctor_set(x_107, 3, x_49);
x_108 = lean_array_push(x_61, x_107);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_75);
lean_ctor_set(x_109, 1, x_108);
x_110 = lean_array_push(x_96, x_109);
x_111 = lean_array_push(x_110, x_85);
x_112 = lean_array_push(x_111, x_87);
x_113 = lean_array_push(x_112, x_93);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_71);
lean_ctor_set(x_114, 1, x_113);
x_115 = lean_array_push(x_57, x_101);
x_116 = lean_array_push(x_115, x_114);
lean_inc(x_30);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_30);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_mk_empty_array_with_capacity(x_14);
x_119 = lean_array_push(x_118, x_69);
lean_inc(x_38);
x_120 = lean_array_push(x_119, x_38);
x_121 = lean_array_push(x_120, x_117);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_67);
lean_ctor_set(x_122, 1, x_121);
lean_inc(x_53);
x_123 = lean_array_push(x_53, x_122);
lean_inc(x_30);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_30);
lean_ctor_set(x_124, 1, x_123);
x_125 = lean_unsigned_to_nat(4u);
x_126 = lean_mk_empty_array_with_capacity(x_125);
x_127 = lean_array_push(x_126, x_33);
x_128 = lean_array_push(x_127, x_65);
x_129 = lean_array_push(x_128, x_38);
x_130 = lean_array_push(x_129, x_124);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_32);
lean_ctor_set(x_131, 1, x_130);
lean_inc(x_53);
x_132 = lean_array_push(x_53, x_131);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_30);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_array_push(x_53, x_133);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_28);
lean_ctor_set(x_135, 1, x_134);
lean_ctor_set(x_16, 0, x_135);
return x_16;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_136 = lean_ctor_get(x_16, 0);
x_137 = lean_ctor_get(x_16, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_16);
x_138 = lean_ctor_get(x_2, 2);
lean_inc(x_138);
x_139 = lean_ctor_get(x_2, 1);
lean_inc(x_139);
lean_dec(x_2);
x_140 = lean_mk_string("Lean");
x_141 = lean_name_mk_string(x_4, x_140);
x_142 = lean_mk_string("Parser");
x_143 = lean_name_mk_string(x_141, x_142);
x_144 = lean_mk_string("Tactic");
lean_inc(x_143);
x_145 = lean_name_mk_string(x_143, x_144);
x_146 = lean_mk_string("seq1");
lean_inc(x_145);
x_147 = lean_name_mk_string(x_145, x_146);
x_148 = lean_mk_string("null");
x_149 = lean_name_mk_string(x_4, x_148);
x_150 = lean_mk_string("cases");
lean_inc(x_150);
lean_inc(x_145);
x_151 = lean_name_mk_string(x_145, x_150);
lean_inc(x_136);
x_152 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_152, 0, x_136);
lean_ctor_set(x_152, 1, x_150);
x_153 = lean_mk_string("casesTarget");
lean_inc(x_145);
x_154 = lean_name_mk_string(x_145, x_153);
x_155 = lean_unsigned_to_nat(0u);
x_156 = lean_mk_empty_array_with_capacity(x_155);
lean_inc(x_149);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_149);
lean_ctor_set(x_157, 1, x_156);
x_158 = lean_mk_string("Term");
x_159 = lean_name_mk_string(x_143, x_158);
x_160 = lean_mk_string("app");
lean_inc(x_159);
x_161 = lean_name_mk_string(x_159, x_160);
x_162 = lean_mk_string("em");
x_163 = lean_string_utf8_byte_size(x_162);
lean_inc(x_162);
x_164 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_155);
lean_ctor_set(x_164, 2, x_163);
lean_inc(x_162);
x_165 = lean_name_mk_string(x_4, x_162);
lean_inc(x_138);
lean_inc(x_139);
x_166 = l_Lean_addMacroScope(x_139, x_165, x_138);
x_167 = lean_name_mk_string(x_6, x_162);
x_168 = lean_box(0);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_169);
lean_ctor_set(x_170, 1, x_168);
lean_inc(x_136);
x_171 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_171, 0, x_136);
lean_ctor_set(x_171, 1, x_164);
lean_ctor_set(x_171, 2, x_166);
lean_ctor_set(x_171, 3, x_170);
x_172 = lean_mk_empty_array_with_capacity(x_12);
lean_inc(x_172);
x_173 = lean_array_push(x_172, x_15);
lean_inc(x_149);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_149);
lean_ctor_set(x_174, 1, x_173);
x_175 = lean_unsigned_to_nat(2u);
x_176 = lean_mk_empty_array_with_capacity(x_175);
lean_inc(x_176);
x_177 = lean_array_push(x_176, x_171);
x_178 = lean_array_push(x_177, x_174);
x_179 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_179, 0, x_161);
lean_ctor_set(x_179, 1, x_178);
lean_inc(x_157);
lean_inc(x_176);
x_180 = lean_array_push(x_176, x_157);
lean_inc(x_180);
x_181 = lean_array_push(x_180, x_179);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_154);
lean_ctor_set(x_182, 1, x_181);
lean_inc(x_172);
x_183 = lean_array_push(x_172, x_182);
lean_inc(x_149);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_149);
lean_ctor_set(x_184, 1, x_183);
x_185 = lean_mk_string("inductionAlts");
lean_inc(x_145);
x_186 = lean_name_mk_string(x_145, x_185);
x_187 = lean_mk_string("with");
lean_inc(x_136);
x_188 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_188, 0, x_136);
lean_ctor_set(x_188, 1, x_187);
x_189 = lean_mk_string("inductionAlt");
x_190 = lean_name_mk_string(x_145, x_189);
x_191 = lean_mk_string("|");
lean_inc(x_136);
x_192 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_192, 0, x_136);
lean_ctor_set(x_192, 1, x_191);
x_193 = lean_mk_string("group");
x_194 = lean_name_mk_string(x_4, x_193);
x_195 = lean_mk_string("inl");
x_196 = lean_string_utf8_byte_size(x_195);
lean_inc(x_195);
x_197 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_197, 0, x_195);
lean_ctor_set(x_197, 1, x_155);
lean_ctor_set(x_197, 2, x_196);
x_198 = lean_name_mk_string(x_4, x_195);
lean_inc(x_138);
lean_inc(x_139);
x_199 = l_Lean_addMacroScope(x_139, x_198, x_138);
lean_inc(x_136);
x_200 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_200, 0, x_136);
lean_ctor_set(x_200, 1, x_197);
lean_ctor_set(x_200, 2, x_199);
lean_ctor_set(x_200, 3, x_168);
lean_inc(x_180);
x_201 = lean_array_push(x_180, x_200);
lean_inc(x_194);
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_194);
lean_ctor_set(x_202, 1, x_201);
lean_inc(x_172);
x_203 = lean_array_push(x_172, x_13);
lean_inc(x_149);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_149);
lean_ctor_set(x_204, 1, x_203);
x_205 = lean_mk_string("=>");
lean_inc(x_136);
x_206 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_206, 0, x_136);
lean_ctor_set(x_206, 1, x_205);
x_207 = lean_mk_string("hole");
x_208 = lean_name_mk_string(x_159, x_207);
x_209 = lean_mk_string("_");
lean_inc(x_136);
x_210 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_210, 0, x_136);
lean_ctor_set(x_210, 1, x_209);
lean_inc(x_172);
x_211 = lean_array_push(x_172, x_210);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_208);
lean_ctor_set(x_212, 1, x_211);
x_213 = lean_unsigned_to_nat(5u);
x_214 = lean_mk_empty_array_with_capacity(x_213);
x_215 = lean_array_push(x_214, x_192);
lean_inc(x_215);
x_216 = lean_array_push(x_215, x_202);
lean_inc(x_204);
x_217 = lean_array_push(x_216, x_204);
lean_inc(x_206);
x_218 = lean_array_push(x_217, x_206);
lean_inc(x_212);
x_219 = lean_array_push(x_218, x_212);
lean_inc(x_190);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_190);
lean_ctor_set(x_220, 1, x_219);
x_221 = lean_mk_string("inr");
x_222 = lean_string_utf8_byte_size(x_221);
lean_inc(x_221);
x_223 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_223, 0, x_221);
lean_ctor_set(x_223, 1, x_155);
lean_ctor_set(x_223, 2, x_222);
x_224 = lean_name_mk_string(x_4, x_221);
x_225 = l_Lean_addMacroScope(x_139, x_224, x_138);
x_226 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_226, 0, x_136);
lean_ctor_set(x_226, 1, x_223);
lean_ctor_set(x_226, 2, x_225);
lean_ctor_set(x_226, 3, x_168);
x_227 = lean_array_push(x_180, x_226);
x_228 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_228, 0, x_194);
lean_ctor_set(x_228, 1, x_227);
x_229 = lean_array_push(x_215, x_228);
x_230 = lean_array_push(x_229, x_204);
x_231 = lean_array_push(x_230, x_206);
x_232 = lean_array_push(x_231, x_212);
x_233 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_233, 0, x_190);
lean_ctor_set(x_233, 1, x_232);
x_234 = lean_array_push(x_176, x_220);
x_235 = lean_array_push(x_234, x_233);
lean_inc(x_149);
x_236 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_236, 0, x_149);
lean_ctor_set(x_236, 1, x_235);
x_237 = lean_mk_empty_array_with_capacity(x_14);
x_238 = lean_array_push(x_237, x_188);
lean_inc(x_157);
x_239 = lean_array_push(x_238, x_157);
x_240 = lean_array_push(x_239, x_236);
x_241 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_241, 0, x_186);
lean_ctor_set(x_241, 1, x_240);
lean_inc(x_172);
x_242 = lean_array_push(x_172, x_241);
lean_inc(x_149);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_149);
lean_ctor_set(x_243, 1, x_242);
x_244 = lean_unsigned_to_nat(4u);
x_245 = lean_mk_empty_array_with_capacity(x_244);
x_246 = lean_array_push(x_245, x_152);
x_247 = lean_array_push(x_246, x_184);
x_248 = lean_array_push(x_247, x_157);
x_249 = lean_array_push(x_248, x_243);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_151);
lean_ctor_set(x_250, 1, x_249);
lean_inc(x_172);
x_251 = lean_array_push(x_172, x_250);
x_252 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_252, 0, x_149);
lean_ctor_set(x_252, 1, x_251);
x_253 = lean_array_push(x_172, x_252);
x_254 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_254, 0, x_147);
lean_ctor_set(x_254, 1, x_253);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_254);
lean_ctor_set(x_255, 1, x_137);
return x_255;
}
}
}
}
lean_object* initialize_Init_Core(lean_object*);
lean_object* initialize_Init_NotationExtra(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Classical(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Core(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_NotationExtra(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Classical_tacticByCases_____x3a__ = _init_l_Classical_tacticByCases_____x3a__();
lean_mark_persistent(l_Classical_tacticByCases_____x3a__);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
