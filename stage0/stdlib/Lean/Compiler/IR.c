// Lean compiler output
// Module: Lean.Compiler.IR
// Imports: Init Lean.Compiler.IR.Basic Lean.Compiler.IR.Format Lean.Compiler.IR.CompilerM Lean.Compiler.IR.PushProj Lean.Compiler.IR.ElimDeadVars Lean.Compiler.IR.SimpCase Lean.Compiler.IR.ResetReuse Lean.Compiler.IR.NormIds Lean.Compiler.IR.Checker Lean.Compiler.IR.Borrow Lean.Compiler.IR.Boxing Lean.Compiler.IR.RC Lean.Compiler.IR.ExpandResetReuse Lean.Compiler.IR.UnboxResult Lean.Compiler.IR.ElimDeadBranches Lean.Compiler.IR.EmitC Lean.Compiler.IR.CtorLayout Lean.Compiler.IR.Sorry
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
uint8_t l_Lean_IR_ExplicitBoxing_requiresBoxedVersion(lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_ir_add_boxed_version(lean_object*, lean_object*);
lean_object* l_Lean_IR_addBoxedVersionAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_addBoxedVersionAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__2(size_t, size_t, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_compile_match__1(lean_object*);
lean_object* l_Lean_IR_getEnv___rarg(lean_object*);
lean_object* l_Lean_IR_explicitRC(lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_IR_Decl_insertResetReuse(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__4(size_t, size_t, lean_object*);
lean_object* lean_ir_compile(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_0__Lean_IR_compileAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_explicitBoxing(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_IR_addBoxedVersionAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_checkDecls(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_0__Lean_IR_compileAux___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_addDecls(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_IR_tracePrefixOptionName;
lean_object* l_Lean_IR_Decl_elimDead(lean_object*);
lean_object* l_Lean_IR_Decl_simpCase(lean_object*);
lean_object* l_Lean_IR_Decl_expandResetReuse(lean_object*);
lean_object* l_Lean_IR_elimDeadBranches(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_updateSorryDep(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__5(size_t, size_t, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__6___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_ExplicitBoxing_mkBoxedVersion(lean_object*);
lean_object* l_Lean_IR_inferBorrow(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_addBoxedVersionAux___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_pushProj(lean_object*);
lean_object* l_Lean_IR_Decl_normalizeIds(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__3(size_t, size_t, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__1(size_t, size_t, lean_object*);
extern lean_object* l_Lean_IR_declMapExt;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__6(size_t, size_t, lean_object*);
lean_object* l_Lean_IR_compile_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = l_Lean_IR_Decl_pushProj(x_9);
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
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__2(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = l_Lean_IR_Decl_insertResetReuse(x_9);
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
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__3(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = l_Lean_IR_Decl_elimDead(x_9);
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
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__4(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = l_Lean_IR_Decl_simpCase(x_9);
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
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__5(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = l_Lean_IR_Decl_normalizeIds(x_9);
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
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__6(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = l_Lean_IR_Decl_expandResetReuse(x_9);
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
lean_object* l___private_Lean_Compiler_IR_0__Lean_IR_compileAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_box(0);
x_5 = lean_mk_string("init");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = l_Lean_IR_tracePrefixOptionName;
lean_inc(x_6);
x_8 = l_Lean_Name_append(x_7, x_6);
lean_inc(x_1);
x_9 = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(x_8, x_6, x_1, x_2, x_3);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
lean_inc(x_1);
x_11 = l_Lean_IR_checkDecls(x_1, x_2, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; size_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; size_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; size_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; size_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; size_t x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; size_t x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_IR_elimDeadBranches(x_1, x_2, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_mk_string("elim_dead_branches");
x_17 = lean_name_mk_string(x_4, x_16);
lean_inc(x_17);
x_18 = l_Lean_Name_append(x_7, x_17);
lean_inc(x_14);
x_19 = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(x_18, x_17, x_14, x_2, x_15);
lean_dec(x_18);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_array_get_size(x_14);
x_22 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_23 = 0;
x_24 = x_14;
x_25 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__1(x_22, x_23, x_24);
x_26 = x_25;
x_27 = lean_mk_string("push_proj");
x_28 = lean_name_mk_string(x_4, x_27);
lean_inc(x_28);
x_29 = l_Lean_Name_append(x_7, x_28);
lean_inc(x_26);
lean_inc(x_28);
x_30 = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(x_29, x_28, x_26, x_2, x_20);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_array_get_size(x_26);
x_33 = lean_usize_of_nat(x_32);
lean_dec(x_32);
x_34 = x_26;
x_35 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__2(x_33, x_23, x_34);
x_36 = x_35;
x_37 = lean_mk_string("reset_reuse");
x_38 = lean_name_mk_string(x_4, x_37);
lean_inc(x_38);
x_39 = l_Lean_Name_append(x_7, x_38);
lean_inc(x_36);
x_40 = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(x_39, x_38, x_36, x_2, x_31);
lean_dec(x_39);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_array_get_size(x_36);
x_43 = lean_usize_of_nat(x_42);
lean_dec(x_42);
x_44 = x_36;
x_45 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__3(x_43, x_23, x_44);
x_46 = x_45;
x_47 = lean_mk_string("elim_dead");
x_48 = lean_name_mk_string(x_4, x_47);
lean_inc(x_48);
x_49 = l_Lean_Name_append(x_7, x_48);
lean_inc(x_46);
x_50 = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(x_49, x_48, x_46, x_2, x_41);
lean_dec(x_49);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_array_get_size(x_46);
x_53 = lean_usize_of_nat(x_52);
lean_dec(x_52);
x_54 = x_46;
x_55 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__4(x_53, x_23, x_54);
x_56 = x_55;
x_57 = lean_mk_string("simp_case");
x_58 = lean_name_mk_string(x_4, x_57);
lean_inc(x_58);
x_59 = l_Lean_Name_append(x_7, x_58);
lean_inc(x_56);
x_60 = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(x_59, x_58, x_56, x_2, x_51);
lean_dec(x_59);
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_62 = lean_array_get_size(x_56);
x_63 = lean_usize_of_nat(x_62);
lean_dec(x_62);
x_64 = x_56;
x_65 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__5(x_63, x_23, x_64);
x_66 = x_65;
x_67 = l_Lean_IR_inferBorrow(x_66, x_2, x_61);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_mk_string("borrow");
x_71 = lean_name_mk_string(x_4, x_70);
lean_inc(x_71);
x_72 = l_Lean_Name_append(x_7, x_71);
lean_inc(x_68);
x_73 = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(x_72, x_71, x_68, x_2, x_69);
lean_dec(x_72);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
lean_dec(x_73);
x_75 = l_Lean_IR_explicitBoxing(x_68, x_2, x_74);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_78 = lean_mk_string("boxing");
x_79 = lean_name_mk_string(x_4, x_78);
lean_inc(x_79);
x_80 = l_Lean_Name_append(x_7, x_79);
lean_inc(x_76);
x_81 = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(x_80, x_79, x_76, x_2, x_77);
lean_dec(x_80);
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
lean_dec(x_81);
x_83 = l_Lean_IR_explicitRC(x_76, x_2, x_82);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_86 = lean_mk_string("rc");
x_87 = lean_name_mk_string(x_4, x_86);
lean_inc(x_87);
x_88 = l_Lean_Name_append(x_7, x_87);
lean_inc(x_84);
x_89 = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(x_88, x_87, x_84, x_2, x_85);
lean_dec(x_88);
x_90 = lean_ctor_get(x_89, 1);
lean_inc(x_90);
lean_dec(x_89);
x_91 = lean_array_get_size(x_84);
x_92 = lean_usize_of_nat(x_91);
lean_dec(x_91);
x_93 = x_84;
x_94 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__6(x_92, x_23, x_93);
x_95 = x_94;
x_96 = lean_mk_string("expand_reset_reuse");
x_97 = lean_name_mk_string(x_4, x_96);
lean_inc(x_97);
x_98 = l_Lean_Name_append(x_7, x_97);
lean_inc(x_95);
x_99 = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(x_98, x_97, x_95, x_2, x_90);
lean_dec(x_98);
x_100 = lean_ctor_get(x_99, 1);
lean_inc(x_100);
lean_dec(x_99);
x_101 = lean_array_get_size(x_95);
x_102 = lean_usize_of_nat(x_101);
lean_dec(x_101);
x_103 = x_95;
x_104 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__1(x_102, x_23, x_103);
x_105 = x_104;
lean_inc(x_105);
x_106 = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(x_29, x_28, x_105, x_2, x_100);
lean_dec(x_29);
x_107 = lean_ctor_get(x_106, 1);
lean_inc(x_107);
lean_dec(x_106);
x_108 = l_Lean_IR_updateSorryDep(x_105, x_2, x_107);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
x_111 = lean_mk_string("result");
x_112 = lean_name_mk_string(x_4, x_111);
lean_inc(x_112);
x_113 = l_Lean_Name_append(x_7, x_112);
lean_inc(x_109);
x_114 = l___private_Lean_Compiler_IR_CompilerM_0__Lean_IR_logDeclsAux(x_113, x_112, x_109, x_2, x_110);
lean_dec(x_113);
x_115 = lean_ctor_get(x_114, 1);
lean_inc(x_115);
lean_dec(x_114);
lean_inc(x_109);
x_116 = l_Lean_IR_checkDecls(x_109, x_2, x_115);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; 
x_117 = lean_ctor_get(x_116, 1);
lean_inc(x_117);
lean_dec(x_116);
x_118 = l_Lean_IR_addDecls(x_109, x_2, x_117);
lean_dec(x_109);
return x_118;
}
else
{
uint8_t x_119; 
lean_dec(x_109);
x_119 = !lean_is_exclusive(x_116);
if (x_119 == 0)
{
return x_116;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_116, 0);
x_121 = lean_ctor_get(x_116, 1);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_116);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
}
}
else
{
uint8_t x_123; 
lean_dec(x_1);
x_123 = !lean_is_exclusive(x_11);
if (x_123 == 0)
{
return x_11;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_11, 0);
x_125 = lean_ctor_get(x_11, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_11);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__1(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__2(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__3(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__4(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__5(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Compiler_IR_0__Lean_IR_compileAux___spec__6(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l___private_Lean_Compiler_IR_0__Lean_IR_compileAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Compiler_IR_0__Lean_IR_compileAux(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_compile_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_IR_compile_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_compile_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* lean_ir_compile(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_mk_empty_array_with_capacity(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
x_7 = l___private_Lean_Compiler_IR_0__Lean_IR_compileAux(x_3, x_2, x_6);
lean_dec(x_2);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_7, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_dec(x_7);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_addBoxedVersionAux___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
lean_dec(x_4);
x_8 = lean_array_uget(x_1, x_2);
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = l_Lean_IR_declMapExt;
x_12 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_11, x_10, x_8);
lean_ctor_set(x_6, 0, x_12);
x_13 = 1;
x_14 = x_2 + x_13;
x_15 = lean_box(0);
x_2 = x_14;
x_4 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; size_t x_22; size_t x_23; lean_object* x_24; 
x_17 = lean_ctor_get(x_6, 0);
x_18 = lean_ctor_get(x_6, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_6);
x_19 = l_Lean_IR_declMapExt;
x_20 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_19, x_17, x_8);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
x_22 = 1;
x_23 = x_2 + x_22;
x_24 = lean_box(0);
x_2 = x_23;
x_4 = x_24;
x_6 = x_21;
goto _start;
}
}
else
{
lean_object* x_26; 
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_4);
lean_ctor_set(x_26, 1, x_6);
return x_26;
}
}
}
lean_object* l_Lean_IR_addBoxedVersionAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_Lean_IR_getEnv___rarg(x_3);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = l_Lean_IR_ExplicitBoxing_requiresBoxedVersion(x_6, x_1);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = lean_box(0);
lean_ctor_set(x_4, 0, x_9);
return x_4;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_free_object(x_4);
x_10 = l_Lean_IR_ExplicitBoxing_mkBoxedVersion(x_1);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_mk_empty_array_with_capacity(x_11);
x_13 = lean_array_push(x_12, x_10);
x_14 = l_Lean_IR_explicitRC(x_13, x_2, x_7);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_18 = lean_array_get_size(x_16);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_lt(x_19, x_18);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_18);
lean_dec(x_16);
x_21 = lean_box(0);
lean_ctor_set(x_14, 0, x_21);
return x_14;
}
else
{
uint8_t x_22; 
x_22 = lean_nat_dec_le(x_18, x_18);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_18);
lean_dec(x_16);
x_23 = lean_box(0);
lean_ctor_set(x_14, 0, x_23);
return x_14;
}
else
{
size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_free_object(x_14);
x_24 = 0;
x_25 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_26 = lean_box(0);
x_27 = l_Array_foldlMUnsafe_fold___at_Lean_IR_addBoxedVersionAux___spec__1(x_16, x_24, x_25, x_26, x_2, x_17);
lean_dec(x_16);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
x_29 = lean_ctor_get(x_27, 0);
lean_dec(x_29);
lean_ctor_set(x_27, 0, x_26);
return x_27;
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_dec(x_27);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_26);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_32 = lean_ctor_get(x_14, 0);
x_33 = lean_ctor_get(x_14, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_14);
x_34 = lean_array_get_size(x_32);
x_35 = lean_unsigned_to_nat(0u);
x_36 = lean_nat_dec_lt(x_35, x_34);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_34);
lean_dec(x_32);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_33);
return x_38;
}
else
{
uint8_t x_39; 
x_39 = lean_nat_dec_le(x_34, x_34);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_34);
lean_dec(x_32);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_33);
return x_41;
}
else
{
size_t x_42; size_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_42 = 0;
x_43 = lean_usize_of_nat(x_34);
lean_dec(x_34);
x_44 = lean_box(0);
x_45 = l_Array_foldlMUnsafe_fold___at_Lean_IR_addBoxedVersionAux___spec__1(x_32, x_42, x_43, x_44, x_2, x_33);
lean_dec(x_32);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_44);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
}
}
else
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = lean_ctor_get(x_4, 0);
x_50 = lean_ctor_get(x_4, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_4);
x_51 = l_Lean_IR_ExplicitBoxing_requiresBoxedVersion(x_49, x_1);
lean_dec(x_49);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_50);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_54 = l_Lean_IR_ExplicitBoxing_mkBoxedVersion(x_1);
x_55 = lean_unsigned_to_nat(1u);
x_56 = lean_mk_empty_array_with_capacity(x_55);
x_57 = lean_array_push(x_56, x_54);
x_58 = l_Lean_IR_explicitRC(x_57, x_2, x_50);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_61 = x_58;
} else {
 lean_dec_ref(x_58);
 x_61 = lean_box(0);
}
x_62 = lean_array_get_size(x_59);
x_63 = lean_unsigned_to_nat(0u);
x_64 = lean_nat_dec_lt(x_63, x_62);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_62);
lean_dec(x_59);
x_65 = lean_box(0);
if (lean_is_scalar(x_61)) {
 x_66 = lean_alloc_ctor(0, 2, 0);
} else {
 x_66 = x_61;
}
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_60);
return x_66;
}
else
{
uint8_t x_67; 
x_67 = lean_nat_dec_le(x_62, x_62);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; 
lean_dec(x_62);
lean_dec(x_59);
x_68 = lean_box(0);
if (lean_is_scalar(x_61)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_61;
}
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_60);
return x_69;
}
else
{
size_t x_70; size_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_61);
x_70 = 0;
x_71 = lean_usize_of_nat(x_62);
lean_dec(x_62);
x_72 = lean_box(0);
x_73 = l_Array_foldlMUnsafe_fold___at_Lean_IR_addBoxedVersionAux___spec__1(x_59, x_70, x_71, x_72, x_2, x_60);
lean_dec(x_59);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_75 = x_73;
} else {
 lean_dec_ref(x_73);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(0, 2, 0);
} else {
 x_76 = x_75;
}
lean_ctor_set(x_76, 0, x_72);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_addBoxedVersionAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_IR_addBoxedVersionAux___spec__1(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_IR_addBoxedVersionAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_addBoxedVersionAux(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* lean_ir_add_boxed_version(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_mk_empty_array_with_capacity(x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
x_6 = l_Lean_Options_empty;
x_7 = l_Lean_IR_addBoxedVersionAux(x_2, x_6, x_5);
lean_dec(x_2);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Compiler_IR_Basic(lean_object*);
lean_object* initialize_Lean_Compiler_IR_Format(lean_object*);
lean_object* initialize_Lean_Compiler_IR_CompilerM(lean_object*);
lean_object* initialize_Lean_Compiler_IR_PushProj(lean_object*);
lean_object* initialize_Lean_Compiler_IR_ElimDeadVars(lean_object*);
lean_object* initialize_Lean_Compiler_IR_SimpCase(lean_object*);
lean_object* initialize_Lean_Compiler_IR_ResetReuse(lean_object*);
lean_object* initialize_Lean_Compiler_IR_NormIds(lean_object*);
lean_object* initialize_Lean_Compiler_IR_Checker(lean_object*);
lean_object* initialize_Lean_Compiler_IR_Borrow(lean_object*);
lean_object* initialize_Lean_Compiler_IR_Boxing(lean_object*);
lean_object* initialize_Lean_Compiler_IR_RC(lean_object*);
lean_object* initialize_Lean_Compiler_IR_ExpandResetReuse(lean_object*);
lean_object* initialize_Lean_Compiler_IR_UnboxResult(lean_object*);
lean_object* initialize_Lean_Compiler_IR_ElimDeadBranches(lean_object*);
lean_object* initialize_Lean_Compiler_IR_EmitC(lean_object*);
lean_object* initialize_Lean_Compiler_IR_CtorLayout(lean_object*);
lean_object* initialize_Lean_Compiler_IR_Sorry(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Compiler_IR(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_Format(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_CompilerM(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_PushProj(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_ElimDeadVars(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_SimpCase(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_ResetReuse(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_NormIds(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_Checker(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_Borrow(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_Boxing(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_RC(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_ExpandResetReuse(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_UnboxResult(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_ElimDeadBranches(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_EmitC(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_CtorLayout(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_Sorry(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
