// Lean compiler output
// Module: Lean.Meta.Tactic.Simp.SimpAll
// Imports: Init Lean.Meta.Tactic.Clear Lean.Meta.Tactic.Util Lean.Meta.Tactic.Simp.Main
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
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop_match__3(lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpAll___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpAll___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop_match__1(lean_object*);
lean_object* l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_getSimpLemmas(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpAll_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getNondepPropHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Std_PersistentHashMap_contains___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__1(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpAll_main_match__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpAll_main_match__1(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_eraseCore___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_transform___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Meta_assertHypotheses(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop_match__2(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Meta_SimpAll_State_modified___default;
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpAll_instInhabitedEntry;
lean_object* l_Lean_Meta_tryClearMany(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__2(size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_simpAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_add(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpAll_State_entries___default;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__1(size_t, size_t, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_getSimpLemmas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpAll___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_eraseCore___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_SimpAll_instInhabitedEntry() {
_start:
{
lean_object* x_1; uint64_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_uint64_of_nat(x_1);
x_3 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint64(x_3, sizeof(void*)*1, x_2);
x_4 = lean_box(0);
lean_inc(x_3);
x_5 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_4);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_3);
lean_ctor_set(x_5, 4, x_3);
return x_5;
}
}
static uint8_t _init_l_Lean_Meta_SimpAll_State_modified___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_SimpAll_State_entries___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; uint8_t x_19; 
x_19 = x_4 < x_3;
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_5);
lean_ctor_set(x_20, 1, x_11);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_5);
x_21 = lean_array_uget(x_2, x_4);
lean_inc(x_7);
x_22 = l_Lean_Meta_getLocalDecl(x_21, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_LocalDecl_userName(x_23);
lean_inc(x_1);
x_26 = l_Std_PersistentHashMap_contains___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__1(x_1, x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; 
x_27 = l_Lean_LocalDecl_fvarId(x_23);
x_28 = l_Lean_LocalDecl_toExpr(x_23);
x_29 = lean_box(0);
x_30 = lean_mk_string("h");
x_31 = lean_name_mk_string(x_29, x_30);
x_32 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_31, x_9, x_10, x_24);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_st_ref_get(x_10, x_34);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_st_ref_get(x_6, x_36);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_ctor_get(x_38, 2);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_unsigned_to_nat(0u);
x_43 = lean_mk_empty_array_with_capacity(x_42);
lean_inc(x_33);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_33);
x_45 = 1;
x_46 = lean_unsigned_to_nat(1000u);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_28);
x_47 = l_Lean_Meta_SimpLemmas_add(x_41, x_43, x_28, x_45, x_46, x_44, x_7, x_8, x_9, x_10, x_39);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = l_Lean_LocalDecl_type(x_23);
lean_dec(x_23);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_51 = l_Lean_Meta_instantiateMVars(x_50, x_7, x_8, x_9, x_10, x_49);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_54, 0, x_27);
lean_ctor_set(x_54, 1, x_25);
lean_ctor_set(x_54, 2, x_33);
lean_ctor_set(x_54, 3, x_52);
lean_ctor_set(x_54, 4, x_28);
x_55 = lean_st_ref_get(x_10, x_53);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_57 = lean_st_ref_take(x_6, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = !lean_is_exclusive(x_58);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_61 = lean_ctor_get(x_58, 1);
x_62 = lean_ctor_get(x_58, 2);
x_63 = lean_array_push(x_61, x_54);
x_64 = !lean_is_exclusive(x_62);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_65 = lean_ctor_get(x_62, 1);
lean_dec(x_65);
lean_ctor_set(x_62, 1, x_48);
lean_ctor_set(x_58, 1, x_63);
x_66 = lean_st_ref_set(x_6, x_58, x_59);
x_67 = lean_ctor_get(x_66, 1);
lean_inc(x_67);
lean_dec(x_66);
x_68 = lean_box(0);
x_69 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_69, 0, x_68);
x_12 = x_69;
x_13 = x_67;
goto block_18;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_70 = lean_ctor_get(x_62, 0);
x_71 = lean_ctor_get(x_62, 2);
x_72 = lean_ctor_get(x_62, 3);
x_73 = lean_ctor_get(x_62, 4);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_62);
x_74 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_74, 0, x_70);
lean_ctor_set(x_74, 1, x_48);
lean_ctor_set(x_74, 2, x_71);
lean_ctor_set(x_74, 3, x_72);
lean_ctor_set(x_74, 4, x_73);
lean_ctor_set(x_58, 2, x_74);
lean_ctor_set(x_58, 1, x_63);
x_75 = lean_st_ref_set(x_6, x_58, x_59);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_77 = lean_box(0);
x_78 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_78, 0, x_77);
x_12 = x_78;
x_13 = x_76;
goto block_18;
}
}
else
{
uint8_t x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_79 = lean_ctor_get_uint8(x_58, sizeof(void*)*3);
x_80 = lean_ctor_get(x_58, 0);
x_81 = lean_ctor_get(x_58, 1);
x_82 = lean_ctor_get(x_58, 2);
lean_inc(x_82);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_58);
x_83 = lean_array_push(x_81, x_54);
x_84 = lean_ctor_get(x_82, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_82, 2);
lean_inc(x_85);
x_86 = lean_ctor_get(x_82, 3);
lean_inc(x_86);
x_87 = lean_ctor_get(x_82, 4);
lean_inc(x_87);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 lean_ctor_release(x_82, 2);
 lean_ctor_release(x_82, 3);
 lean_ctor_release(x_82, 4);
 x_88 = x_82;
} else {
 lean_dec_ref(x_82);
 x_88 = lean_box(0);
}
if (lean_is_scalar(x_88)) {
 x_89 = lean_alloc_ctor(0, 5, 0);
} else {
 x_89 = x_88;
}
lean_ctor_set(x_89, 0, x_84);
lean_ctor_set(x_89, 1, x_48);
lean_ctor_set(x_89, 2, x_85);
lean_ctor_set(x_89, 3, x_86);
lean_ctor_set(x_89, 4, x_87);
x_90 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_90, 0, x_80);
lean_ctor_set(x_90, 1, x_83);
lean_ctor_set(x_90, 2, x_89);
lean_ctor_set_uint8(x_90, sizeof(void*)*3, x_79);
x_91 = lean_st_ref_set(x_6, x_90, x_59);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
lean_dec(x_91);
x_93 = lean_box(0);
x_94 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_94, 0, x_93);
x_12 = x_94;
x_13 = x_92;
goto block_18;
}
}
else
{
uint8_t x_95; 
lean_dec(x_48);
lean_dec(x_33);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_95 = !lean_is_exclusive(x_51);
if (x_95 == 0)
{
return x_51;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_51, 0);
x_97 = lean_ctor_get(x_51, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_51);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
else
{
uint8_t x_99; 
lean_dec(x_33);
lean_dec(x_28);
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_99 = !lean_is_exclusive(x_47);
if (x_99 == 0)
{
return x_47;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_47, 0);
x_101 = lean_ctor_get(x_47, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_47);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
else
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_25);
lean_dec(x_23);
x_103 = lean_box(0);
x_104 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_104, 0, x_103);
x_12 = x_104;
x_13 = x_24;
goto block_18;
}
}
else
{
uint8_t x_105; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_105 = !lean_is_exclusive(x_22);
if (x_105 == 0)
{
return x_22;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_22, 0);
x_107 = lean_ctor_get(x_22, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_22);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
block_18:
{
lean_object* x_14; size_t x_15; size_t x_16; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = 1;
x_16 = x_4 + x_15;
x_4 = x_16;
x_5 = x_14;
x_11 = x_13;
goto _start;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_st_ref_get(x_1, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_13 = l_Lean_Meta_getNondepPropHyps(x_12, x_2, x_3, x_4, x_5, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; size_t x_26; lean_object* x_27; lean_object* x_28; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_st_ref_get(x_5, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_st_ref_get(x_1, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_19, 2);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_ctor_get(x_22, 4);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_array_get_size(x_14);
x_25 = lean_usize_of_nat(x_24);
lean_dec(x_24);
x_26 = 0;
x_27 = lean_box(0);
x_28 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1(x_23, x_14, x_25, x_26, x_27, x_1, x_2, x_3, x_4, x_5, x_20);
lean_dec(x_14);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_28, 0);
lean_dec(x_30);
lean_ctor_set(x_28, 0, x_27);
return x_28;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_27);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_28);
if (x_33 == 0)
{
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_28, 0);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_28);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_13);
if (x_37 == 0)
{
return x_13;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_13, 0);
x_39 = lean_ctor_get(x_13, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_13);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_13 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_14 = l_Array_forInUnsafe_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___spec__1(x_1, x_2, x_12, x_13, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_2);
return x_14;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_getSimpLemmas(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_st_ref_get(x_1, x_8);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_9);
x_16 = lean_ctor_get(x_14, 2);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_15);
return x_18;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_getSimpLemmas___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_getSimpLemmas(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SimpLemmas_eraseCore___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get(x_1, 2);
x_11 = lean_ctor_get(x_1, 3);
x_12 = lean_ctor_get(x_1, 4);
x_13 = l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1(x_10, x_2);
x_14 = l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1(x_11, x_2);
x_15 = lean_box(0);
x_16 = l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__1(x_12, x_2, x_15);
lean_ctor_set(x_1, 4, x_16);
lean_ctor_set(x_1, 3, x_14);
lean_ctor_set(x_1, 2, x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_8);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
x_20 = lean_ctor_get(x_1, 2);
x_21 = lean_ctor_get(x_1, 3);
x_22 = lean_ctor_get(x_1, 4);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_23 = l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1(x_20, x_2);
x_24 = l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1(x_21, x_2);
x_25 = lean_box(0);
x_26 = l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__1(x_22, x_2, x_25);
x_27 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_27, 0, x_18);
lean_ctor_set(x_27, 1, x_19);
lean_ctor_set(x_27, 2, x_23);
lean_ctor_set(x_27, 3, x_24);
lean_ctor_set(x_27, 4, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_8);
return x_28;
}
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_2, 1);
x_13 = lean_nat_dec_le(x_12, x_4);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_eq(x_3, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
lean_dec(x_5);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_3, x_16);
lean_dec(x_3);
x_36 = lean_st_ref_get(x_10, x_11);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = lean_st_ref_get(x_6, x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_Lean_Meta_SimpAll_instInhabitedEntry;
x_43 = lean_array_get(x_42, x_41, x_4);
lean_dec(x_41);
x_44 = lean_st_ref_get(x_10, x_40);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_st_ref_get(x_6, x_45);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_ctor_get(x_47, 2);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_st_ref_get(x_10, x_48);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_st_ref_get(x_6, x_51);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = lean_ctor_get(x_53, 2);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_57 = !lean_is_exclusive(x_43);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_58 = lean_ctor_get(x_43, 0);
x_59 = lean_ctor_get(x_43, 1);
x_60 = lean_ctor_get(x_43, 2);
x_61 = lean_ctor_get(x_43, 3);
x_62 = lean_ctor_get(x_43, 4);
x_63 = l_Lean_Meta_SimpLemmas_eraseCore___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1(x_56, x_60, x_6, x_7, x_8, x_9, x_10, x_54);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = !lean_is_exclusive(x_49);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_67 = lean_ctor_get(x_49, 1);
lean_dec(x_67);
lean_ctor_set(x_49, 1, x_64);
x_68 = lean_st_ref_get(x_10, x_65);
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
lean_dec(x_68);
x_70 = lean_st_ref_get(x_6, x_69);
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = lean_ctor_get(x_71, 0);
lean_inc(x_73);
lean_dec(x_71);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_61);
x_74 = l_Lean_Meta_simpStep(x_73, x_62, x_61, x_49, x_7, x_8, x_9, x_10, x_72);
if (lean_obj_tag(x_74) == 0)
{
lean_object* x_75; 
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
if (lean_obj_tag(x_75) == 0)
{
uint8_t x_76; 
lean_free_object(x_43);
lean_dec(x_61);
lean_dec(x_59);
lean_dec(x_58);
x_76 = !lean_is_exclusive(x_74);
if (x_76 == 0)
{
lean_object* x_77; uint8_t x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_77 = lean_ctor_get(x_74, 0);
lean_dec(x_77);
x_78 = 1;
x_79 = lean_box(x_78);
x_80 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_80, 0, x_79);
x_81 = lean_box(0);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_74, 0, x_83);
x_18 = x_74;
goto block_35;
}
else
{
lean_object* x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_84 = lean_ctor_get(x_74, 1);
lean_inc(x_84);
lean_dec(x_74);
x_85 = 1;
x_86 = lean_box(x_85);
x_87 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_87, 0, x_86);
x_88 = lean_box(0);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_90, 0, x_89);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_84);
x_18 = x_91;
goto block_35;
}
}
else
{
uint8_t x_92; 
x_92 = !lean_is_exclusive(x_75);
if (x_92 == 0)
{
uint8_t x_93; 
x_93 = !lean_is_exclusive(x_74);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; uint8_t x_99; 
x_94 = lean_ctor_get(x_75, 0);
x_95 = lean_ctor_get(x_74, 1);
x_96 = lean_ctor_get(x_74, 0);
lean_dec(x_96);
x_97 = lean_ctor_get(x_94, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_94, 1);
lean_inc(x_98);
lean_dec(x_94);
x_99 = lean_expr_eqv(x_98, x_61);
lean_dec(x_61);
if (x_99 == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; uint8_t x_114; lean_object* x_115; lean_object* x_116; 
lean_free_object(x_74);
x_100 = lean_box(0);
x_101 = lean_mk_string("h");
x_102 = lean_name_mk_string(x_100, x_101);
x_103 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_102, x_9, x_10, x_95);
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec(x_103);
x_106 = lean_st_ref_get(x_10, x_105);
x_107 = lean_ctor_get(x_106, 1);
lean_inc(x_107);
lean_dec(x_106);
x_108 = lean_st_ref_get(x_6, x_107);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
x_111 = lean_ctor_get(x_109, 2);
lean_inc(x_111);
lean_dec(x_109);
x_112 = lean_ctor_get(x_111, 1);
lean_inc(x_112);
lean_dec(x_111);
x_113 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_104);
lean_ctor_set(x_75, 0, x_104);
x_114 = 1;
x_115 = lean_unsigned_to_nat(1000u);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_97);
x_116 = l_Lean_Meta_SimpLemmas_add(x_112, x_113, x_97, x_114, x_115, x_75, x_7, x_8, x_9, x_10, x_110);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
x_119 = lean_st_ref_get(x_10, x_118);
x_120 = lean_ctor_get(x_119, 1);
lean_inc(x_120);
lean_dec(x_119);
x_121 = lean_st_ref_take(x_6, x_120);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_124 = !lean_is_exclusive(x_122);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; uint8_t x_129; 
x_125 = lean_ctor_get(x_122, 1);
x_126 = lean_ctor_get(x_122, 2);
x_127 = lean_array_get_size(x_125);
x_128 = lean_nat_dec_lt(x_4, x_127);
lean_dec(x_127);
x_129 = !lean_is_exclusive(x_126);
if (x_129 == 0)
{
lean_object* x_130; 
x_130 = lean_ctor_get(x_126, 1);
lean_dec(x_130);
lean_ctor_set(x_126, 1, x_117);
if (x_128 == 0)
{
lean_object* x_131; uint8_t x_132; 
lean_dec(x_104);
lean_dec(x_98);
lean_dec(x_97);
lean_free_object(x_43);
lean_dec(x_59);
lean_dec(x_58);
lean_ctor_set_uint8(x_122, sizeof(void*)*3, x_114);
x_131 = lean_st_ref_set(x_6, x_122, x_123);
x_132 = !lean_is_exclusive(x_131);
if (x_132 == 0)
{
lean_object* x_133; lean_object* x_134; 
x_133 = lean_ctor_get(x_131, 0);
lean_dec(x_133);
lean_inc(x_1);
x_134 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_134, 0, x_1);
lean_ctor_set(x_131, 0, x_134);
x_18 = x_131;
goto block_35;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_131, 1);
lean_inc(x_135);
lean_dec(x_131);
lean_inc(x_1);
x_136 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_136, 0, x_1);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_135);
x_18 = x_137;
goto block_35;
}
}
else
{
uint64_t x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; uint8_t x_144; 
x_138 = lean_uint64_of_nat(x_14);
x_139 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_139, 0, x_14);
lean_ctor_set_uint64(x_139, sizeof(void*)*1, x_138);
lean_inc(x_139);
lean_ctor_set(x_43, 4, x_139);
lean_ctor_set(x_43, 3, x_139);
lean_ctor_set(x_43, 2, x_100);
lean_ctor_set(x_43, 1, x_100);
lean_ctor_set(x_43, 0, x_100);
x_140 = lean_array_fset(x_125, x_4, x_43);
x_141 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_141, 0, x_58);
lean_ctor_set(x_141, 1, x_59);
lean_ctor_set(x_141, 2, x_104);
lean_ctor_set(x_141, 3, x_98);
lean_ctor_set(x_141, 4, x_97);
x_142 = lean_array_fset(x_140, x_4, x_141);
lean_ctor_set(x_122, 1, x_142);
lean_ctor_set_uint8(x_122, sizeof(void*)*3, x_114);
x_143 = lean_st_ref_set(x_6, x_122, x_123);
x_144 = !lean_is_exclusive(x_143);
if (x_144 == 0)
{
lean_object* x_145; lean_object* x_146; 
x_145 = lean_ctor_get(x_143, 0);
lean_dec(x_145);
lean_inc(x_1);
x_146 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_146, 0, x_1);
lean_ctor_set(x_143, 0, x_146);
x_18 = x_143;
goto block_35;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_147 = lean_ctor_get(x_143, 1);
lean_inc(x_147);
lean_dec(x_143);
lean_inc(x_1);
x_148 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_148, 0, x_1);
x_149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_147);
x_18 = x_149;
goto block_35;
}
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_150 = lean_ctor_get(x_126, 0);
x_151 = lean_ctor_get(x_126, 2);
x_152 = lean_ctor_get(x_126, 3);
x_153 = lean_ctor_get(x_126, 4);
lean_inc(x_153);
lean_inc(x_152);
lean_inc(x_151);
lean_inc(x_150);
lean_dec(x_126);
x_154 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_154, 0, x_150);
lean_ctor_set(x_154, 1, x_117);
lean_ctor_set(x_154, 2, x_151);
lean_ctor_set(x_154, 3, x_152);
lean_ctor_set(x_154, 4, x_153);
if (x_128 == 0)
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
lean_dec(x_104);
lean_dec(x_98);
lean_dec(x_97);
lean_free_object(x_43);
lean_dec(x_59);
lean_dec(x_58);
lean_ctor_set(x_122, 2, x_154);
lean_ctor_set_uint8(x_122, sizeof(void*)*3, x_114);
x_155 = lean_st_ref_set(x_6, x_122, x_123);
x_156 = lean_ctor_get(x_155, 1);
lean_inc(x_156);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 lean_ctor_release(x_155, 1);
 x_157 = x_155;
} else {
 lean_dec_ref(x_155);
 x_157 = lean_box(0);
}
lean_inc(x_1);
x_158 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_158, 0, x_1);
if (lean_is_scalar(x_157)) {
 x_159 = lean_alloc_ctor(0, 2, 0);
} else {
 x_159 = x_157;
}
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_156);
x_18 = x_159;
goto block_35;
}
else
{
uint64_t x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_160 = lean_uint64_of_nat(x_14);
x_161 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_161, 0, x_14);
lean_ctor_set_uint64(x_161, sizeof(void*)*1, x_160);
lean_inc(x_161);
lean_ctor_set(x_43, 4, x_161);
lean_ctor_set(x_43, 3, x_161);
lean_ctor_set(x_43, 2, x_100);
lean_ctor_set(x_43, 1, x_100);
lean_ctor_set(x_43, 0, x_100);
x_162 = lean_array_fset(x_125, x_4, x_43);
x_163 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_163, 0, x_58);
lean_ctor_set(x_163, 1, x_59);
lean_ctor_set(x_163, 2, x_104);
lean_ctor_set(x_163, 3, x_98);
lean_ctor_set(x_163, 4, x_97);
x_164 = lean_array_fset(x_162, x_4, x_163);
lean_ctor_set(x_122, 2, x_154);
lean_ctor_set(x_122, 1, x_164);
lean_ctor_set_uint8(x_122, sizeof(void*)*3, x_114);
x_165 = lean_st_ref_set(x_6, x_122, x_123);
x_166 = lean_ctor_get(x_165, 1);
lean_inc(x_166);
if (lean_is_exclusive(x_165)) {
 lean_ctor_release(x_165, 0);
 lean_ctor_release(x_165, 1);
 x_167 = x_165;
} else {
 lean_dec_ref(x_165);
 x_167 = lean_box(0);
}
lean_inc(x_1);
x_168 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_168, 0, x_1);
if (lean_is_scalar(x_167)) {
 x_169 = lean_alloc_ctor(0, 2, 0);
} else {
 x_169 = x_167;
}
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_166);
x_18 = x_169;
goto block_35;
}
}
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; uint8_t x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_170 = lean_ctor_get(x_122, 0);
x_171 = lean_ctor_get(x_122, 1);
x_172 = lean_ctor_get(x_122, 2);
lean_inc(x_172);
lean_inc(x_171);
lean_inc(x_170);
lean_dec(x_122);
x_173 = lean_array_get_size(x_171);
x_174 = lean_nat_dec_lt(x_4, x_173);
lean_dec(x_173);
x_175 = lean_ctor_get(x_172, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_172, 2);
lean_inc(x_176);
x_177 = lean_ctor_get(x_172, 3);
lean_inc(x_177);
x_178 = lean_ctor_get(x_172, 4);
lean_inc(x_178);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 lean_ctor_release(x_172, 2);
 lean_ctor_release(x_172, 3);
 lean_ctor_release(x_172, 4);
 x_179 = x_172;
} else {
 lean_dec_ref(x_172);
 x_179 = lean_box(0);
}
if (lean_is_scalar(x_179)) {
 x_180 = lean_alloc_ctor(0, 5, 0);
} else {
 x_180 = x_179;
}
lean_ctor_set(x_180, 0, x_175);
lean_ctor_set(x_180, 1, x_117);
lean_ctor_set(x_180, 2, x_176);
lean_ctor_set(x_180, 3, x_177);
lean_ctor_set(x_180, 4, x_178);
if (x_174 == 0)
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_104);
lean_dec(x_98);
lean_dec(x_97);
lean_free_object(x_43);
lean_dec(x_59);
lean_dec(x_58);
x_181 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_181, 0, x_170);
lean_ctor_set(x_181, 1, x_171);
lean_ctor_set(x_181, 2, x_180);
lean_ctor_set_uint8(x_181, sizeof(void*)*3, x_114);
x_182 = lean_st_ref_set(x_6, x_181, x_123);
x_183 = lean_ctor_get(x_182, 1);
lean_inc(x_183);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 x_184 = x_182;
} else {
 lean_dec_ref(x_182);
 x_184 = lean_box(0);
}
lean_inc(x_1);
x_185 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_185, 0, x_1);
if (lean_is_scalar(x_184)) {
 x_186 = lean_alloc_ctor(0, 2, 0);
} else {
 x_186 = x_184;
}
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_183);
x_18 = x_186;
goto block_35;
}
else
{
uint64_t x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_187 = lean_uint64_of_nat(x_14);
x_188 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_188, 0, x_14);
lean_ctor_set_uint64(x_188, sizeof(void*)*1, x_187);
lean_inc(x_188);
lean_ctor_set(x_43, 4, x_188);
lean_ctor_set(x_43, 3, x_188);
lean_ctor_set(x_43, 2, x_100);
lean_ctor_set(x_43, 1, x_100);
lean_ctor_set(x_43, 0, x_100);
x_189 = lean_array_fset(x_171, x_4, x_43);
x_190 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_190, 0, x_58);
lean_ctor_set(x_190, 1, x_59);
lean_ctor_set(x_190, 2, x_104);
lean_ctor_set(x_190, 3, x_98);
lean_ctor_set(x_190, 4, x_97);
x_191 = lean_array_fset(x_189, x_4, x_190);
x_192 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_192, 0, x_170);
lean_ctor_set(x_192, 1, x_191);
lean_ctor_set(x_192, 2, x_180);
lean_ctor_set_uint8(x_192, sizeof(void*)*3, x_114);
x_193 = lean_st_ref_set(x_6, x_192, x_123);
x_194 = lean_ctor_get(x_193, 1);
lean_inc(x_194);
if (lean_is_exclusive(x_193)) {
 lean_ctor_release(x_193, 0);
 lean_ctor_release(x_193, 1);
 x_195 = x_193;
} else {
 lean_dec_ref(x_193);
 x_195 = lean_box(0);
}
lean_inc(x_1);
x_196 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_196, 0, x_1);
if (lean_is_scalar(x_195)) {
 x_197 = lean_alloc_ctor(0, 2, 0);
} else {
 x_197 = x_195;
}
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_194);
x_18 = x_197;
goto block_35;
}
}
}
else
{
uint8_t x_198; 
lean_dec(x_104);
lean_dec(x_98);
lean_dec(x_97);
lean_free_object(x_43);
lean_dec(x_59);
lean_dec(x_58);
x_198 = !lean_is_exclusive(x_116);
if (x_198 == 0)
{
x_18 = x_116;
goto block_35;
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_199 = lean_ctor_get(x_116, 0);
x_200 = lean_ctor_get(x_116, 1);
lean_inc(x_200);
lean_inc(x_199);
lean_dec(x_116);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
x_18 = x_201;
goto block_35;
}
}
}
else
{
lean_object* x_202; 
lean_dec(x_98);
lean_dec(x_97);
lean_free_object(x_75);
lean_free_object(x_43);
lean_dec(x_59);
lean_dec(x_58);
lean_inc(x_1);
x_202 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_202, 0, x_1);
lean_ctor_set(x_74, 0, x_202);
x_18 = x_74;
goto block_35;
}
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; uint8_t x_207; 
x_203 = lean_ctor_get(x_75, 0);
x_204 = lean_ctor_get(x_74, 1);
lean_inc(x_204);
lean_dec(x_74);
x_205 = lean_ctor_get(x_203, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_203, 1);
lean_inc(x_206);
lean_dec(x_203);
x_207 = lean_expr_eqv(x_206, x_61);
lean_dec(x_61);
if (x_207 == 0)
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; uint8_t x_222; lean_object* x_223; lean_object* x_224; 
x_208 = lean_box(0);
x_209 = lean_mk_string("h");
x_210 = lean_name_mk_string(x_208, x_209);
x_211 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_210, x_9, x_10, x_204);
x_212 = lean_ctor_get(x_211, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_211, 1);
lean_inc(x_213);
lean_dec(x_211);
x_214 = lean_st_ref_get(x_10, x_213);
x_215 = lean_ctor_get(x_214, 1);
lean_inc(x_215);
lean_dec(x_214);
x_216 = lean_st_ref_get(x_6, x_215);
x_217 = lean_ctor_get(x_216, 0);
lean_inc(x_217);
x_218 = lean_ctor_get(x_216, 1);
lean_inc(x_218);
lean_dec(x_216);
x_219 = lean_ctor_get(x_217, 2);
lean_inc(x_219);
lean_dec(x_217);
x_220 = lean_ctor_get(x_219, 1);
lean_inc(x_220);
lean_dec(x_219);
x_221 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_212);
lean_ctor_set(x_75, 0, x_212);
x_222 = 1;
x_223 = lean_unsigned_to_nat(1000u);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_205);
x_224 = l_Lean_Meta_SimpLemmas_add(x_220, x_221, x_205, x_222, x_223, x_75, x_7, x_8, x_9, x_10, x_218);
if (lean_obj_tag(x_224) == 0)
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; uint8_t x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_225 = lean_ctor_get(x_224, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_224, 1);
lean_inc(x_226);
lean_dec(x_224);
x_227 = lean_st_ref_get(x_10, x_226);
x_228 = lean_ctor_get(x_227, 1);
lean_inc(x_228);
lean_dec(x_227);
x_229 = lean_st_ref_take(x_6, x_228);
x_230 = lean_ctor_get(x_229, 0);
lean_inc(x_230);
x_231 = lean_ctor_get(x_229, 1);
lean_inc(x_231);
lean_dec(x_229);
x_232 = lean_ctor_get(x_230, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_230, 1);
lean_inc(x_233);
x_234 = lean_ctor_get(x_230, 2);
lean_inc(x_234);
if (lean_is_exclusive(x_230)) {
 lean_ctor_release(x_230, 0);
 lean_ctor_release(x_230, 1);
 lean_ctor_release(x_230, 2);
 x_235 = x_230;
} else {
 lean_dec_ref(x_230);
 x_235 = lean_box(0);
}
x_236 = lean_array_get_size(x_233);
x_237 = lean_nat_dec_lt(x_4, x_236);
lean_dec(x_236);
x_238 = lean_ctor_get(x_234, 0);
lean_inc(x_238);
x_239 = lean_ctor_get(x_234, 2);
lean_inc(x_239);
x_240 = lean_ctor_get(x_234, 3);
lean_inc(x_240);
x_241 = lean_ctor_get(x_234, 4);
lean_inc(x_241);
if (lean_is_exclusive(x_234)) {
 lean_ctor_release(x_234, 0);
 lean_ctor_release(x_234, 1);
 lean_ctor_release(x_234, 2);
 lean_ctor_release(x_234, 3);
 lean_ctor_release(x_234, 4);
 x_242 = x_234;
} else {
 lean_dec_ref(x_234);
 x_242 = lean_box(0);
}
if (lean_is_scalar(x_242)) {
 x_243 = lean_alloc_ctor(0, 5, 0);
} else {
 x_243 = x_242;
}
lean_ctor_set(x_243, 0, x_238);
lean_ctor_set(x_243, 1, x_225);
lean_ctor_set(x_243, 2, x_239);
lean_ctor_set(x_243, 3, x_240);
lean_ctor_set(x_243, 4, x_241);
if (x_237 == 0)
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
lean_dec(x_212);
lean_dec(x_206);
lean_dec(x_205);
lean_free_object(x_43);
lean_dec(x_59);
lean_dec(x_58);
if (lean_is_scalar(x_235)) {
 x_244 = lean_alloc_ctor(0, 3, 1);
} else {
 x_244 = x_235;
}
lean_ctor_set(x_244, 0, x_232);
lean_ctor_set(x_244, 1, x_233);
lean_ctor_set(x_244, 2, x_243);
lean_ctor_set_uint8(x_244, sizeof(void*)*3, x_222);
x_245 = lean_st_ref_set(x_6, x_244, x_231);
x_246 = lean_ctor_get(x_245, 1);
lean_inc(x_246);
if (lean_is_exclusive(x_245)) {
 lean_ctor_release(x_245, 0);
 lean_ctor_release(x_245, 1);
 x_247 = x_245;
} else {
 lean_dec_ref(x_245);
 x_247 = lean_box(0);
}
lean_inc(x_1);
x_248 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_248, 0, x_1);
if (lean_is_scalar(x_247)) {
 x_249 = lean_alloc_ctor(0, 2, 0);
} else {
 x_249 = x_247;
}
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_246);
x_18 = x_249;
goto block_35;
}
else
{
uint64_t x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; 
x_250 = lean_uint64_of_nat(x_14);
x_251 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_251, 0, x_14);
lean_ctor_set_uint64(x_251, sizeof(void*)*1, x_250);
lean_inc(x_251);
lean_ctor_set(x_43, 4, x_251);
lean_ctor_set(x_43, 3, x_251);
lean_ctor_set(x_43, 2, x_208);
lean_ctor_set(x_43, 1, x_208);
lean_ctor_set(x_43, 0, x_208);
x_252 = lean_array_fset(x_233, x_4, x_43);
x_253 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_253, 0, x_58);
lean_ctor_set(x_253, 1, x_59);
lean_ctor_set(x_253, 2, x_212);
lean_ctor_set(x_253, 3, x_206);
lean_ctor_set(x_253, 4, x_205);
x_254 = lean_array_fset(x_252, x_4, x_253);
if (lean_is_scalar(x_235)) {
 x_255 = lean_alloc_ctor(0, 3, 1);
} else {
 x_255 = x_235;
}
lean_ctor_set(x_255, 0, x_232);
lean_ctor_set(x_255, 1, x_254);
lean_ctor_set(x_255, 2, x_243);
lean_ctor_set_uint8(x_255, sizeof(void*)*3, x_222);
x_256 = lean_st_ref_set(x_6, x_255, x_231);
x_257 = lean_ctor_get(x_256, 1);
lean_inc(x_257);
if (lean_is_exclusive(x_256)) {
 lean_ctor_release(x_256, 0);
 lean_ctor_release(x_256, 1);
 x_258 = x_256;
} else {
 lean_dec_ref(x_256);
 x_258 = lean_box(0);
}
lean_inc(x_1);
x_259 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_259, 0, x_1);
if (lean_is_scalar(x_258)) {
 x_260 = lean_alloc_ctor(0, 2, 0);
} else {
 x_260 = x_258;
}
lean_ctor_set(x_260, 0, x_259);
lean_ctor_set(x_260, 1, x_257);
x_18 = x_260;
goto block_35;
}
}
else
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; 
lean_dec(x_212);
lean_dec(x_206);
lean_dec(x_205);
lean_free_object(x_43);
lean_dec(x_59);
lean_dec(x_58);
x_261 = lean_ctor_get(x_224, 0);
lean_inc(x_261);
x_262 = lean_ctor_get(x_224, 1);
lean_inc(x_262);
if (lean_is_exclusive(x_224)) {
 lean_ctor_release(x_224, 0);
 lean_ctor_release(x_224, 1);
 x_263 = x_224;
} else {
 lean_dec_ref(x_224);
 x_263 = lean_box(0);
}
if (lean_is_scalar(x_263)) {
 x_264 = lean_alloc_ctor(1, 2, 0);
} else {
 x_264 = x_263;
}
lean_ctor_set(x_264, 0, x_261);
lean_ctor_set(x_264, 1, x_262);
x_18 = x_264;
goto block_35;
}
}
else
{
lean_object* x_265; lean_object* x_266; 
lean_dec(x_206);
lean_dec(x_205);
lean_free_object(x_75);
lean_free_object(x_43);
lean_dec(x_59);
lean_dec(x_58);
lean_inc(x_1);
x_265 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_265, 0, x_1);
x_266 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_266, 0, x_265);
lean_ctor_set(x_266, 1, x_204);
x_18 = x_266;
goto block_35;
}
}
}
else
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; uint8_t x_272; 
x_267 = lean_ctor_get(x_75, 0);
lean_inc(x_267);
lean_dec(x_75);
x_268 = lean_ctor_get(x_74, 1);
lean_inc(x_268);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_269 = x_74;
} else {
 lean_dec_ref(x_74);
 x_269 = lean_box(0);
}
x_270 = lean_ctor_get(x_267, 0);
lean_inc(x_270);
x_271 = lean_ctor_get(x_267, 1);
lean_inc(x_271);
lean_dec(x_267);
x_272 = lean_expr_eqv(x_271, x_61);
lean_dec(x_61);
if (x_272 == 0)
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; uint8_t x_288; lean_object* x_289; lean_object* x_290; 
lean_dec(x_269);
x_273 = lean_box(0);
x_274 = lean_mk_string("h");
x_275 = lean_name_mk_string(x_273, x_274);
x_276 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_275, x_9, x_10, x_268);
x_277 = lean_ctor_get(x_276, 0);
lean_inc(x_277);
x_278 = lean_ctor_get(x_276, 1);
lean_inc(x_278);
lean_dec(x_276);
x_279 = lean_st_ref_get(x_10, x_278);
x_280 = lean_ctor_get(x_279, 1);
lean_inc(x_280);
lean_dec(x_279);
x_281 = lean_st_ref_get(x_6, x_280);
x_282 = lean_ctor_get(x_281, 0);
lean_inc(x_282);
x_283 = lean_ctor_get(x_281, 1);
lean_inc(x_283);
lean_dec(x_281);
x_284 = lean_ctor_get(x_282, 2);
lean_inc(x_284);
lean_dec(x_282);
x_285 = lean_ctor_get(x_284, 1);
lean_inc(x_285);
lean_dec(x_284);
x_286 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_277);
x_287 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_287, 0, x_277);
x_288 = 1;
x_289 = lean_unsigned_to_nat(1000u);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_270);
x_290 = l_Lean_Meta_SimpLemmas_add(x_285, x_286, x_270, x_288, x_289, x_287, x_7, x_8, x_9, x_10, x_283);
if (lean_obj_tag(x_290) == 0)
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; uint8_t x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
x_291 = lean_ctor_get(x_290, 0);
lean_inc(x_291);
x_292 = lean_ctor_get(x_290, 1);
lean_inc(x_292);
lean_dec(x_290);
x_293 = lean_st_ref_get(x_10, x_292);
x_294 = lean_ctor_get(x_293, 1);
lean_inc(x_294);
lean_dec(x_293);
x_295 = lean_st_ref_take(x_6, x_294);
x_296 = lean_ctor_get(x_295, 0);
lean_inc(x_296);
x_297 = lean_ctor_get(x_295, 1);
lean_inc(x_297);
lean_dec(x_295);
x_298 = lean_ctor_get(x_296, 0);
lean_inc(x_298);
x_299 = lean_ctor_get(x_296, 1);
lean_inc(x_299);
x_300 = lean_ctor_get(x_296, 2);
lean_inc(x_300);
if (lean_is_exclusive(x_296)) {
 lean_ctor_release(x_296, 0);
 lean_ctor_release(x_296, 1);
 lean_ctor_release(x_296, 2);
 x_301 = x_296;
} else {
 lean_dec_ref(x_296);
 x_301 = lean_box(0);
}
x_302 = lean_array_get_size(x_299);
x_303 = lean_nat_dec_lt(x_4, x_302);
lean_dec(x_302);
x_304 = lean_ctor_get(x_300, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_300, 2);
lean_inc(x_305);
x_306 = lean_ctor_get(x_300, 3);
lean_inc(x_306);
x_307 = lean_ctor_get(x_300, 4);
lean_inc(x_307);
if (lean_is_exclusive(x_300)) {
 lean_ctor_release(x_300, 0);
 lean_ctor_release(x_300, 1);
 lean_ctor_release(x_300, 2);
 lean_ctor_release(x_300, 3);
 lean_ctor_release(x_300, 4);
 x_308 = x_300;
} else {
 lean_dec_ref(x_300);
 x_308 = lean_box(0);
}
if (lean_is_scalar(x_308)) {
 x_309 = lean_alloc_ctor(0, 5, 0);
} else {
 x_309 = x_308;
}
lean_ctor_set(x_309, 0, x_304);
lean_ctor_set(x_309, 1, x_291);
lean_ctor_set(x_309, 2, x_305);
lean_ctor_set(x_309, 3, x_306);
lean_ctor_set(x_309, 4, x_307);
if (x_303 == 0)
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; 
lean_dec(x_277);
lean_dec(x_271);
lean_dec(x_270);
lean_free_object(x_43);
lean_dec(x_59);
lean_dec(x_58);
if (lean_is_scalar(x_301)) {
 x_310 = lean_alloc_ctor(0, 3, 1);
} else {
 x_310 = x_301;
}
lean_ctor_set(x_310, 0, x_298);
lean_ctor_set(x_310, 1, x_299);
lean_ctor_set(x_310, 2, x_309);
lean_ctor_set_uint8(x_310, sizeof(void*)*3, x_288);
x_311 = lean_st_ref_set(x_6, x_310, x_297);
x_312 = lean_ctor_get(x_311, 1);
lean_inc(x_312);
if (lean_is_exclusive(x_311)) {
 lean_ctor_release(x_311, 0);
 lean_ctor_release(x_311, 1);
 x_313 = x_311;
} else {
 lean_dec_ref(x_311);
 x_313 = lean_box(0);
}
lean_inc(x_1);
x_314 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_314, 0, x_1);
if (lean_is_scalar(x_313)) {
 x_315 = lean_alloc_ctor(0, 2, 0);
} else {
 x_315 = x_313;
}
lean_ctor_set(x_315, 0, x_314);
lean_ctor_set(x_315, 1, x_312);
x_18 = x_315;
goto block_35;
}
else
{
uint64_t x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; 
x_316 = lean_uint64_of_nat(x_14);
x_317 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_317, 0, x_14);
lean_ctor_set_uint64(x_317, sizeof(void*)*1, x_316);
lean_inc(x_317);
lean_ctor_set(x_43, 4, x_317);
lean_ctor_set(x_43, 3, x_317);
lean_ctor_set(x_43, 2, x_273);
lean_ctor_set(x_43, 1, x_273);
lean_ctor_set(x_43, 0, x_273);
x_318 = lean_array_fset(x_299, x_4, x_43);
x_319 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_319, 0, x_58);
lean_ctor_set(x_319, 1, x_59);
lean_ctor_set(x_319, 2, x_277);
lean_ctor_set(x_319, 3, x_271);
lean_ctor_set(x_319, 4, x_270);
x_320 = lean_array_fset(x_318, x_4, x_319);
if (lean_is_scalar(x_301)) {
 x_321 = lean_alloc_ctor(0, 3, 1);
} else {
 x_321 = x_301;
}
lean_ctor_set(x_321, 0, x_298);
lean_ctor_set(x_321, 1, x_320);
lean_ctor_set(x_321, 2, x_309);
lean_ctor_set_uint8(x_321, sizeof(void*)*3, x_288);
x_322 = lean_st_ref_set(x_6, x_321, x_297);
x_323 = lean_ctor_get(x_322, 1);
lean_inc(x_323);
if (lean_is_exclusive(x_322)) {
 lean_ctor_release(x_322, 0);
 lean_ctor_release(x_322, 1);
 x_324 = x_322;
} else {
 lean_dec_ref(x_322);
 x_324 = lean_box(0);
}
lean_inc(x_1);
x_325 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_325, 0, x_1);
if (lean_is_scalar(x_324)) {
 x_326 = lean_alloc_ctor(0, 2, 0);
} else {
 x_326 = x_324;
}
lean_ctor_set(x_326, 0, x_325);
lean_ctor_set(x_326, 1, x_323);
x_18 = x_326;
goto block_35;
}
}
else
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; 
lean_dec(x_277);
lean_dec(x_271);
lean_dec(x_270);
lean_free_object(x_43);
lean_dec(x_59);
lean_dec(x_58);
x_327 = lean_ctor_get(x_290, 0);
lean_inc(x_327);
x_328 = lean_ctor_get(x_290, 1);
lean_inc(x_328);
if (lean_is_exclusive(x_290)) {
 lean_ctor_release(x_290, 0);
 lean_ctor_release(x_290, 1);
 x_329 = x_290;
} else {
 lean_dec_ref(x_290);
 x_329 = lean_box(0);
}
if (lean_is_scalar(x_329)) {
 x_330 = lean_alloc_ctor(1, 2, 0);
} else {
 x_330 = x_329;
}
lean_ctor_set(x_330, 0, x_327);
lean_ctor_set(x_330, 1, x_328);
x_18 = x_330;
goto block_35;
}
}
else
{
lean_object* x_331; lean_object* x_332; 
lean_dec(x_271);
lean_dec(x_270);
lean_free_object(x_43);
lean_dec(x_59);
lean_dec(x_58);
lean_inc(x_1);
x_331 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_331, 0, x_1);
if (lean_is_scalar(x_269)) {
 x_332 = lean_alloc_ctor(0, 2, 0);
} else {
 x_332 = x_269;
}
lean_ctor_set(x_332, 0, x_331);
lean_ctor_set(x_332, 1, x_268);
x_18 = x_332;
goto block_35;
}
}
}
}
else
{
uint8_t x_333; 
lean_free_object(x_43);
lean_dec(x_61);
lean_dec(x_59);
lean_dec(x_58);
x_333 = !lean_is_exclusive(x_74);
if (x_333 == 0)
{
x_18 = x_74;
goto block_35;
}
else
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; 
x_334 = lean_ctor_get(x_74, 0);
x_335 = lean_ctor_get(x_74, 1);
lean_inc(x_335);
lean_inc(x_334);
lean_dec(x_74);
x_336 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_336, 0, x_334);
lean_ctor_set(x_336, 1, x_335);
x_18 = x_336;
goto block_35;
}
}
}
else
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; 
x_337 = lean_ctor_get(x_49, 0);
x_338 = lean_ctor_get(x_49, 2);
x_339 = lean_ctor_get(x_49, 3);
x_340 = lean_ctor_get(x_49, 4);
lean_inc(x_340);
lean_inc(x_339);
lean_inc(x_338);
lean_inc(x_337);
lean_dec(x_49);
x_341 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_341, 0, x_337);
lean_ctor_set(x_341, 1, x_64);
lean_ctor_set(x_341, 2, x_338);
lean_ctor_set(x_341, 3, x_339);
lean_ctor_set(x_341, 4, x_340);
x_342 = lean_st_ref_get(x_10, x_65);
x_343 = lean_ctor_get(x_342, 1);
lean_inc(x_343);
lean_dec(x_342);
x_344 = lean_st_ref_get(x_6, x_343);
x_345 = lean_ctor_get(x_344, 0);
lean_inc(x_345);
x_346 = lean_ctor_get(x_344, 1);
lean_inc(x_346);
lean_dec(x_344);
x_347 = lean_ctor_get(x_345, 0);
lean_inc(x_347);
lean_dec(x_345);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_61);
x_348 = l_Lean_Meta_simpStep(x_347, x_62, x_61, x_341, x_7, x_8, x_9, x_10, x_346);
if (lean_obj_tag(x_348) == 0)
{
lean_object* x_349; 
x_349 = lean_ctor_get(x_348, 0);
lean_inc(x_349);
if (lean_obj_tag(x_349) == 0)
{
lean_object* x_350; lean_object* x_351; uint8_t x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; 
lean_free_object(x_43);
lean_dec(x_61);
lean_dec(x_59);
lean_dec(x_58);
x_350 = lean_ctor_get(x_348, 1);
lean_inc(x_350);
if (lean_is_exclusive(x_348)) {
 lean_ctor_release(x_348, 0);
 lean_ctor_release(x_348, 1);
 x_351 = x_348;
} else {
 lean_dec_ref(x_348);
 x_351 = lean_box(0);
}
x_352 = 1;
x_353 = lean_box(x_352);
x_354 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_354, 0, x_353);
x_355 = lean_box(0);
x_356 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_356, 0, x_354);
lean_ctor_set(x_356, 1, x_355);
x_357 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_357, 0, x_356);
if (lean_is_scalar(x_351)) {
 x_358 = lean_alloc_ctor(0, 2, 0);
} else {
 x_358 = x_351;
}
lean_ctor_set(x_358, 0, x_357);
lean_ctor_set(x_358, 1, x_350);
x_18 = x_358;
goto block_35;
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; uint8_t x_365; 
x_359 = lean_ctor_get(x_349, 0);
lean_inc(x_359);
if (lean_is_exclusive(x_349)) {
 lean_ctor_release(x_349, 0);
 x_360 = x_349;
} else {
 lean_dec_ref(x_349);
 x_360 = lean_box(0);
}
x_361 = lean_ctor_get(x_348, 1);
lean_inc(x_361);
if (lean_is_exclusive(x_348)) {
 lean_ctor_release(x_348, 0);
 lean_ctor_release(x_348, 1);
 x_362 = x_348;
} else {
 lean_dec_ref(x_348);
 x_362 = lean_box(0);
}
x_363 = lean_ctor_get(x_359, 0);
lean_inc(x_363);
x_364 = lean_ctor_get(x_359, 1);
lean_inc(x_364);
lean_dec(x_359);
x_365 = lean_expr_eqv(x_364, x_61);
lean_dec(x_61);
if (x_365 == 0)
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; uint8_t x_381; lean_object* x_382; lean_object* x_383; 
lean_dec(x_362);
x_366 = lean_box(0);
x_367 = lean_mk_string("h");
x_368 = lean_name_mk_string(x_366, x_367);
x_369 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_368, x_9, x_10, x_361);
x_370 = lean_ctor_get(x_369, 0);
lean_inc(x_370);
x_371 = lean_ctor_get(x_369, 1);
lean_inc(x_371);
lean_dec(x_369);
x_372 = lean_st_ref_get(x_10, x_371);
x_373 = lean_ctor_get(x_372, 1);
lean_inc(x_373);
lean_dec(x_372);
x_374 = lean_st_ref_get(x_6, x_373);
x_375 = lean_ctor_get(x_374, 0);
lean_inc(x_375);
x_376 = lean_ctor_get(x_374, 1);
lean_inc(x_376);
lean_dec(x_374);
x_377 = lean_ctor_get(x_375, 2);
lean_inc(x_377);
lean_dec(x_375);
x_378 = lean_ctor_get(x_377, 1);
lean_inc(x_378);
lean_dec(x_377);
x_379 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_370);
if (lean_is_scalar(x_360)) {
 x_380 = lean_alloc_ctor(1, 1, 0);
} else {
 x_380 = x_360;
}
lean_ctor_set(x_380, 0, x_370);
x_381 = 1;
x_382 = lean_unsigned_to_nat(1000u);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_363);
x_383 = l_Lean_Meta_SimpLemmas_add(x_378, x_379, x_363, x_381, x_382, x_380, x_7, x_8, x_9, x_10, x_376);
if (lean_obj_tag(x_383) == 0)
{
lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; uint8_t x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; 
x_384 = lean_ctor_get(x_383, 0);
lean_inc(x_384);
x_385 = lean_ctor_get(x_383, 1);
lean_inc(x_385);
lean_dec(x_383);
x_386 = lean_st_ref_get(x_10, x_385);
x_387 = lean_ctor_get(x_386, 1);
lean_inc(x_387);
lean_dec(x_386);
x_388 = lean_st_ref_take(x_6, x_387);
x_389 = lean_ctor_get(x_388, 0);
lean_inc(x_389);
x_390 = lean_ctor_get(x_388, 1);
lean_inc(x_390);
lean_dec(x_388);
x_391 = lean_ctor_get(x_389, 0);
lean_inc(x_391);
x_392 = lean_ctor_get(x_389, 1);
lean_inc(x_392);
x_393 = lean_ctor_get(x_389, 2);
lean_inc(x_393);
if (lean_is_exclusive(x_389)) {
 lean_ctor_release(x_389, 0);
 lean_ctor_release(x_389, 1);
 lean_ctor_release(x_389, 2);
 x_394 = x_389;
} else {
 lean_dec_ref(x_389);
 x_394 = lean_box(0);
}
x_395 = lean_array_get_size(x_392);
x_396 = lean_nat_dec_lt(x_4, x_395);
lean_dec(x_395);
x_397 = lean_ctor_get(x_393, 0);
lean_inc(x_397);
x_398 = lean_ctor_get(x_393, 2);
lean_inc(x_398);
x_399 = lean_ctor_get(x_393, 3);
lean_inc(x_399);
x_400 = lean_ctor_get(x_393, 4);
lean_inc(x_400);
if (lean_is_exclusive(x_393)) {
 lean_ctor_release(x_393, 0);
 lean_ctor_release(x_393, 1);
 lean_ctor_release(x_393, 2);
 lean_ctor_release(x_393, 3);
 lean_ctor_release(x_393, 4);
 x_401 = x_393;
} else {
 lean_dec_ref(x_393);
 x_401 = lean_box(0);
}
if (lean_is_scalar(x_401)) {
 x_402 = lean_alloc_ctor(0, 5, 0);
} else {
 x_402 = x_401;
}
lean_ctor_set(x_402, 0, x_397);
lean_ctor_set(x_402, 1, x_384);
lean_ctor_set(x_402, 2, x_398);
lean_ctor_set(x_402, 3, x_399);
lean_ctor_set(x_402, 4, x_400);
if (x_396 == 0)
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; 
lean_dec(x_370);
lean_dec(x_364);
lean_dec(x_363);
lean_free_object(x_43);
lean_dec(x_59);
lean_dec(x_58);
if (lean_is_scalar(x_394)) {
 x_403 = lean_alloc_ctor(0, 3, 1);
} else {
 x_403 = x_394;
}
lean_ctor_set(x_403, 0, x_391);
lean_ctor_set(x_403, 1, x_392);
lean_ctor_set(x_403, 2, x_402);
lean_ctor_set_uint8(x_403, sizeof(void*)*3, x_381);
x_404 = lean_st_ref_set(x_6, x_403, x_390);
x_405 = lean_ctor_get(x_404, 1);
lean_inc(x_405);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 lean_ctor_release(x_404, 1);
 x_406 = x_404;
} else {
 lean_dec_ref(x_404);
 x_406 = lean_box(0);
}
lean_inc(x_1);
x_407 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_407, 0, x_1);
if (lean_is_scalar(x_406)) {
 x_408 = lean_alloc_ctor(0, 2, 0);
} else {
 x_408 = x_406;
}
lean_ctor_set(x_408, 0, x_407);
lean_ctor_set(x_408, 1, x_405);
x_18 = x_408;
goto block_35;
}
else
{
uint64_t x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; 
x_409 = lean_uint64_of_nat(x_14);
x_410 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_410, 0, x_14);
lean_ctor_set_uint64(x_410, sizeof(void*)*1, x_409);
lean_inc(x_410);
lean_ctor_set(x_43, 4, x_410);
lean_ctor_set(x_43, 3, x_410);
lean_ctor_set(x_43, 2, x_366);
lean_ctor_set(x_43, 1, x_366);
lean_ctor_set(x_43, 0, x_366);
x_411 = lean_array_fset(x_392, x_4, x_43);
x_412 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_412, 0, x_58);
lean_ctor_set(x_412, 1, x_59);
lean_ctor_set(x_412, 2, x_370);
lean_ctor_set(x_412, 3, x_364);
lean_ctor_set(x_412, 4, x_363);
x_413 = lean_array_fset(x_411, x_4, x_412);
if (lean_is_scalar(x_394)) {
 x_414 = lean_alloc_ctor(0, 3, 1);
} else {
 x_414 = x_394;
}
lean_ctor_set(x_414, 0, x_391);
lean_ctor_set(x_414, 1, x_413);
lean_ctor_set(x_414, 2, x_402);
lean_ctor_set_uint8(x_414, sizeof(void*)*3, x_381);
x_415 = lean_st_ref_set(x_6, x_414, x_390);
x_416 = lean_ctor_get(x_415, 1);
lean_inc(x_416);
if (lean_is_exclusive(x_415)) {
 lean_ctor_release(x_415, 0);
 lean_ctor_release(x_415, 1);
 x_417 = x_415;
} else {
 lean_dec_ref(x_415);
 x_417 = lean_box(0);
}
lean_inc(x_1);
x_418 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_418, 0, x_1);
if (lean_is_scalar(x_417)) {
 x_419 = lean_alloc_ctor(0, 2, 0);
} else {
 x_419 = x_417;
}
lean_ctor_set(x_419, 0, x_418);
lean_ctor_set(x_419, 1, x_416);
x_18 = x_419;
goto block_35;
}
}
else
{
lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; 
lean_dec(x_370);
lean_dec(x_364);
lean_dec(x_363);
lean_free_object(x_43);
lean_dec(x_59);
lean_dec(x_58);
x_420 = lean_ctor_get(x_383, 0);
lean_inc(x_420);
x_421 = lean_ctor_get(x_383, 1);
lean_inc(x_421);
if (lean_is_exclusive(x_383)) {
 lean_ctor_release(x_383, 0);
 lean_ctor_release(x_383, 1);
 x_422 = x_383;
} else {
 lean_dec_ref(x_383);
 x_422 = lean_box(0);
}
if (lean_is_scalar(x_422)) {
 x_423 = lean_alloc_ctor(1, 2, 0);
} else {
 x_423 = x_422;
}
lean_ctor_set(x_423, 0, x_420);
lean_ctor_set(x_423, 1, x_421);
x_18 = x_423;
goto block_35;
}
}
else
{
lean_object* x_424; lean_object* x_425; 
lean_dec(x_364);
lean_dec(x_363);
lean_dec(x_360);
lean_free_object(x_43);
lean_dec(x_59);
lean_dec(x_58);
lean_inc(x_1);
x_424 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_424, 0, x_1);
if (lean_is_scalar(x_362)) {
 x_425 = lean_alloc_ctor(0, 2, 0);
} else {
 x_425 = x_362;
}
lean_ctor_set(x_425, 0, x_424);
lean_ctor_set(x_425, 1, x_361);
x_18 = x_425;
goto block_35;
}
}
}
else
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; 
lean_free_object(x_43);
lean_dec(x_61);
lean_dec(x_59);
lean_dec(x_58);
x_426 = lean_ctor_get(x_348, 0);
lean_inc(x_426);
x_427 = lean_ctor_get(x_348, 1);
lean_inc(x_427);
if (lean_is_exclusive(x_348)) {
 lean_ctor_release(x_348, 0);
 lean_ctor_release(x_348, 1);
 x_428 = x_348;
} else {
 lean_dec_ref(x_348);
 x_428 = lean_box(0);
}
if (lean_is_scalar(x_428)) {
 x_429 = lean_alloc_ctor(1, 2, 0);
} else {
 x_429 = x_428;
}
lean_ctor_set(x_429, 0, x_426);
lean_ctor_set(x_429, 1, x_427);
x_18 = x_429;
goto block_35;
}
}
}
else
{
lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; 
x_430 = lean_ctor_get(x_43, 0);
x_431 = lean_ctor_get(x_43, 1);
x_432 = lean_ctor_get(x_43, 2);
x_433 = lean_ctor_get(x_43, 3);
x_434 = lean_ctor_get(x_43, 4);
lean_inc(x_434);
lean_inc(x_433);
lean_inc(x_432);
lean_inc(x_431);
lean_inc(x_430);
lean_dec(x_43);
x_435 = l_Lean_Meta_SimpLemmas_eraseCore___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1(x_56, x_432, x_6, x_7, x_8, x_9, x_10, x_54);
x_436 = lean_ctor_get(x_435, 0);
lean_inc(x_436);
x_437 = lean_ctor_get(x_435, 1);
lean_inc(x_437);
lean_dec(x_435);
x_438 = lean_ctor_get(x_49, 0);
lean_inc(x_438);
x_439 = lean_ctor_get(x_49, 2);
lean_inc(x_439);
x_440 = lean_ctor_get(x_49, 3);
lean_inc(x_440);
x_441 = lean_ctor_get(x_49, 4);
lean_inc(x_441);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 lean_ctor_release(x_49, 2);
 lean_ctor_release(x_49, 3);
 lean_ctor_release(x_49, 4);
 x_442 = x_49;
} else {
 lean_dec_ref(x_49);
 x_442 = lean_box(0);
}
if (lean_is_scalar(x_442)) {
 x_443 = lean_alloc_ctor(0, 5, 0);
} else {
 x_443 = x_442;
}
lean_ctor_set(x_443, 0, x_438);
lean_ctor_set(x_443, 1, x_436);
lean_ctor_set(x_443, 2, x_439);
lean_ctor_set(x_443, 3, x_440);
lean_ctor_set(x_443, 4, x_441);
x_444 = lean_st_ref_get(x_10, x_437);
x_445 = lean_ctor_get(x_444, 1);
lean_inc(x_445);
lean_dec(x_444);
x_446 = lean_st_ref_get(x_6, x_445);
x_447 = lean_ctor_get(x_446, 0);
lean_inc(x_447);
x_448 = lean_ctor_get(x_446, 1);
lean_inc(x_448);
lean_dec(x_446);
x_449 = lean_ctor_get(x_447, 0);
lean_inc(x_449);
lean_dec(x_447);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_433);
x_450 = l_Lean_Meta_simpStep(x_449, x_434, x_433, x_443, x_7, x_8, x_9, x_10, x_448);
if (lean_obj_tag(x_450) == 0)
{
lean_object* x_451; 
x_451 = lean_ctor_get(x_450, 0);
lean_inc(x_451);
if (lean_obj_tag(x_451) == 0)
{
lean_object* x_452; lean_object* x_453; uint8_t x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; 
lean_dec(x_433);
lean_dec(x_431);
lean_dec(x_430);
x_452 = lean_ctor_get(x_450, 1);
lean_inc(x_452);
if (lean_is_exclusive(x_450)) {
 lean_ctor_release(x_450, 0);
 lean_ctor_release(x_450, 1);
 x_453 = x_450;
} else {
 lean_dec_ref(x_450);
 x_453 = lean_box(0);
}
x_454 = 1;
x_455 = lean_box(x_454);
x_456 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_456, 0, x_455);
x_457 = lean_box(0);
x_458 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_458, 0, x_456);
lean_ctor_set(x_458, 1, x_457);
x_459 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_459, 0, x_458);
if (lean_is_scalar(x_453)) {
 x_460 = lean_alloc_ctor(0, 2, 0);
} else {
 x_460 = x_453;
}
lean_ctor_set(x_460, 0, x_459);
lean_ctor_set(x_460, 1, x_452);
x_18 = x_460;
goto block_35;
}
else
{
lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; uint8_t x_467; 
x_461 = lean_ctor_get(x_451, 0);
lean_inc(x_461);
if (lean_is_exclusive(x_451)) {
 lean_ctor_release(x_451, 0);
 x_462 = x_451;
} else {
 lean_dec_ref(x_451);
 x_462 = lean_box(0);
}
x_463 = lean_ctor_get(x_450, 1);
lean_inc(x_463);
if (lean_is_exclusive(x_450)) {
 lean_ctor_release(x_450, 0);
 lean_ctor_release(x_450, 1);
 x_464 = x_450;
} else {
 lean_dec_ref(x_450);
 x_464 = lean_box(0);
}
x_465 = lean_ctor_get(x_461, 0);
lean_inc(x_465);
x_466 = lean_ctor_get(x_461, 1);
lean_inc(x_466);
lean_dec(x_461);
x_467 = lean_expr_eqv(x_466, x_433);
lean_dec(x_433);
if (x_467 == 0)
{
lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; uint8_t x_483; lean_object* x_484; lean_object* x_485; 
lean_dec(x_464);
x_468 = lean_box(0);
x_469 = lean_mk_string("h");
x_470 = lean_name_mk_string(x_468, x_469);
x_471 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_470, x_9, x_10, x_463);
x_472 = lean_ctor_get(x_471, 0);
lean_inc(x_472);
x_473 = lean_ctor_get(x_471, 1);
lean_inc(x_473);
lean_dec(x_471);
x_474 = lean_st_ref_get(x_10, x_473);
x_475 = lean_ctor_get(x_474, 1);
lean_inc(x_475);
lean_dec(x_474);
x_476 = lean_st_ref_get(x_6, x_475);
x_477 = lean_ctor_get(x_476, 0);
lean_inc(x_477);
x_478 = lean_ctor_get(x_476, 1);
lean_inc(x_478);
lean_dec(x_476);
x_479 = lean_ctor_get(x_477, 2);
lean_inc(x_479);
lean_dec(x_477);
x_480 = lean_ctor_get(x_479, 1);
lean_inc(x_480);
lean_dec(x_479);
x_481 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_472);
if (lean_is_scalar(x_462)) {
 x_482 = lean_alloc_ctor(1, 1, 0);
} else {
 x_482 = x_462;
}
lean_ctor_set(x_482, 0, x_472);
x_483 = 1;
x_484 = lean_unsigned_to_nat(1000u);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_465);
x_485 = l_Lean_Meta_SimpLemmas_add(x_480, x_481, x_465, x_483, x_484, x_482, x_7, x_8, x_9, x_10, x_478);
if (lean_obj_tag(x_485) == 0)
{
lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; uint8_t x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; 
x_486 = lean_ctor_get(x_485, 0);
lean_inc(x_486);
x_487 = lean_ctor_get(x_485, 1);
lean_inc(x_487);
lean_dec(x_485);
x_488 = lean_st_ref_get(x_10, x_487);
x_489 = lean_ctor_get(x_488, 1);
lean_inc(x_489);
lean_dec(x_488);
x_490 = lean_st_ref_take(x_6, x_489);
x_491 = lean_ctor_get(x_490, 0);
lean_inc(x_491);
x_492 = lean_ctor_get(x_490, 1);
lean_inc(x_492);
lean_dec(x_490);
x_493 = lean_ctor_get(x_491, 0);
lean_inc(x_493);
x_494 = lean_ctor_get(x_491, 1);
lean_inc(x_494);
x_495 = lean_ctor_get(x_491, 2);
lean_inc(x_495);
if (lean_is_exclusive(x_491)) {
 lean_ctor_release(x_491, 0);
 lean_ctor_release(x_491, 1);
 lean_ctor_release(x_491, 2);
 x_496 = x_491;
} else {
 lean_dec_ref(x_491);
 x_496 = lean_box(0);
}
x_497 = lean_array_get_size(x_494);
x_498 = lean_nat_dec_lt(x_4, x_497);
lean_dec(x_497);
x_499 = lean_ctor_get(x_495, 0);
lean_inc(x_499);
x_500 = lean_ctor_get(x_495, 2);
lean_inc(x_500);
x_501 = lean_ctor_get(x_495, 3);
lean_inc(x_501);
x_502 = lean_ctor_get(x_495, 4);
lean_inc(x_502);
if (lean_is_exclusive(x_495)) {
 lean_ctor_release(x_495, 0);
 lean_ctor_release(x_495, 1);
 lean_ctor_release(x_495, 2);
 lean_ctor_release(x_495, 3);
 lean_ctor_release(x_495, 4);
 x_503 = x_495;
} else {
 lean_dec_ref(x_495);
 x_503 = lean_box(0);
}
if (lean_is_scalar(x_503)) {
 x_504 = lean_alloc_ctor(0, 5, 0);
} else {
 x_504 = x_503;
}
lean_ctor_set(x_504, 0, x_499);
lean_ctor_set(x_504, 1, x_486);
lean_ctor_set(x_504, 2, x_500);
lean_ctor_set(x_504, 3, x_501);
lean_ctor_set(x_504, 4, x_502);
if (x_498 == 0)
{
lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; 
lean_dec(x_472);
lean_dec(x_466);
lean_dec(x_465);
lean_dec(x_431);
lean_dec(x_430);
if (lean_is_scalar(x_496)) {
 x_505 = lean_alloc_ctor(0, 3, 1);
} else {
 x_505 = x_496;
}
lean_ctor_set(x_505, 0, x_493);
lean_ctor_set(x_505, 1, x_494);
lean_ctor_set(x_505, 2, x_504);
lean_ctor_set_uint8(x_505, sizeof(void*)*3, x_483);
x_506 = lean_st_ref_set(x_6, x_505, x_492);
x_507 = lean_ctor_get(x_506, 1);
lean_inc(x_507);
if (lean_is_exclusive(x_506)) {
 lean_ctor_release(x_506, 0);
 lean_ctor_release(x_506, 1);
 x_508 = x_506;
} else {
 lean_dec_ref(x_506);
 x_508 = lean_box(0);
}
lean_inc(x_1);
x_509 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_509, 0, x_1);
if (lean_is_scalar(x_508)) {
 x_510 = lean_alloc_ctor(0, 2, 0);
} else {
 x_510 = x_508;
}
lean_ctor_set(x_510, 0, x_509);
lean_ctor_set(x_510, 1, x_507);
x_18 = x_510;
goto block_35;
}
else
{
uint64_t x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; 
x_511 = lean_uint64_of_nat(x_14);
x_512 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_512, 0, x_14);
lean_ctor_set_uint64(x_512, sizeof(void*)*1, x_511);
lean_inc(x_512);
x_513 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_513, 0, x_468);
lean_ctor_set(x_513, 1, x_468);
lean_ctor_set(x_513, 2, x_468);
lean_ctor_set(x_513, 3, x_512);
lean_ctor_set(x_513, 4, x_512);
x_514 = lean_array_fset(x_494, x_4, x_513);
x_515 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_515, 0, x_430);
lean_ctor_set(x_515, 1, x_431);
lean_ctor_set(x_515, 2, x_472);
lean_ctor_set(x_515, 3, x_466);
lean_ctor_set(x_515, 4, x_465);
x_516 = lean_array_fset(x_514, x_4, x_515);
if (lean_is_scalar(x_496)) {
 x_517 = lean_alloc_ctor(0, 3, 1);
} else {
 x_517 = x_496;
}
lean_ctor_set(x_517, 0, x_493);
lean_ctor_set(x_517, 1, x_516);
lean_ctor_set(x_517, 2, x_504);
lean_ctor_set_uint8(x_517, sizeof(void*)*3, x_483);
x_518 = lean_st_ref_set(x_6, x_517, x_492);
x_519 = lean_ctor_get(x_518, 1);
lean_inc(x_519);
if (lean_is_exclusive(x_518)) {
 lean_ctor_release(x_518, 0);
 lean_ctor_release(x_518, 1);
 x_520 = x_518;
} else {
 lean_dec_ref(x_518);
 x_520 = lean_box(0);
}
lean_inc(x_1);
x_521 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_521, 0, x_1);
if (lean_is_scalar(x_520)) {
 x_522 = lean_alloc_ctor(0, 2, 0);
} else {
 x_522 = x_520;
}
lean_ctor_set(x_522, 0, x_521);
lean_ctor_set(x_522, 1, x_519);
x_18 = x_522;
goto block_35;
}
}
else
{
lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; 
lean_dec(x_472);
lean_dec(x_466);
lean_dec(x_465);
lean_dec(x_431);
lean_dec(x_430);
x_523 = lean_ctor_get(x_485, 0);
lean_inc(x_523);
x_524 = lean_ctor_get(x_485, 1);
lean_inc(x_524);
if (lean_is_exclusive(x_485)) {
 lean_ctor_release(x_485, 0);
 lean_ctor_release(x_485, 1);
 x_525 = x_485;
} else {
 lean_dec_ref(x_485);
 x_525 = lean_box(0);
}
if (lean_is_scalar(x_525)) {
 x_526 = lean_alloc_ctor(1, 2, 0);
} else {
 x_526 = x_525;
}
lean_ctor_set(x_526, 0, x_523);
lean_ctor_set(x_526, 1, x_524);
x_18 = x_526;
goto block_35;
}
}
else
{
lean_object* x_527; lean_object* x_528; 
lean_dec(x_466);
lean_dec(x_465);
lean_dec(x_462);
lean_dec(x_431);
lean_dec(x_430);
lean_inc(x_1);
x_527 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_527, 0, x_1);
if (lean_is_scalar(x_464)) {
 x_528 = lean_alloc_ctor(0, 2, 0);
} else {
 x_528 = x_464;
}
lean_ctor_set(x_528, 0, x_527);
lean_ctor_set(x_528, 1, x_463);
x_18 = x_528;
goto block_35;
}
}
}
else
{
lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; 
lean_dec(x_433);
lean_dec(x_431);
lean_dec(x_430);
x_529 = lean_ctor_get(x_450, 0);
lean_inc(x_529);
x_530 = lean_ctor_get(x_450, 1);
lean_inc(x_530);
if (lean_is_exclusive(x_450)) {
 lean_ctor_release(x_450, 0);
 lean_ctor_release(x_450, 1);
 x_531 = x_450;
} else {
 lean_dec_ref(x_450);
 x_531 = lean_box(0);
}
if (lean_is_scalar(x_531)) {
 x_532 = lean_alloc_ctor(1, 2, 0);
} else {
 x_532 = x_531;
}
lean_ctor_set(x_532, 0, x_529);
lean_ctor_set(x_532, 1, x_530);
x_18 = x_532;
goto block_35;
}
}
block_35:
{
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 0);
lean_dec(x_21);
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
lean_dec(x_19);
lean_ctor_set(x_18, 0, x_22);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_ctor_get(x_19, 0);
lean_inc(x_24);
lean_dec(x_19);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_dec(x_18);
x_27 = lean_ctor_get(x_19, 0);
lean_inc(x_27);
lean_dec(x_19);
x_28 = lean_ctor_get(x_2, 2);
x_29 = lean_nat_add(x_4, x_28);
lean_dec(x_4);
x_3 = x_17;
x_4 = x_29;
x_5 = x_27;
x_11 = x_26;
goto _start;
}
}
else
{
uint8_t x_31; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_18);
if (x_31 == 0)
{
return x_18;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_18, 0);
x_33 = lean_ctor_get(x_18, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_18);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
else
{
lean_object* x_533; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_533 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_533, 0, x_5);
lean_ctor_set(x_533, 1, x_11);
return x_533;
}
}
else
{
lean_object* x_534; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_534 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_534, 0, x_5);
lean_ctor_set(x_534, 1, x_11);
return x_534;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_st_ref_get(x_2, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get_uint8(x_11, sizeof(void*)*3);
lean_dec(x_11);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
x_15 = 0;
x_16 = lean_box(x_15);
lean_ctor_set(x_10, 0, x_16);
return x_10;
}
else
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_dec(x_10);
x_18 = 0;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_10, 1);
lean_inc(x_21);
lean_dec(x_10);
x_22 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop(x_2, x_3, x_4, x_5, x_6, x_21);
return x_22;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_st_ref_get(x_2, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_get(x_6, x_12);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_st_ref_get(x_2, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 2);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_13);
x_20 = l_Lean_Meta_simpTarget(x_13, x_19, x_3, x_4, x_5, x_6, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_20, 0);
lean_dec(x_23);
x_24 = 1;
x_25 = lean_box(x_24);
lean_ctor_set(x_20, 0, x_25);
return x_20;
}
else
{
lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_20, 1);
lean_inc(x_26);
lean_dec(x_20);
x_27 = 1;
x_28 = lean_box(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_26);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
lean_dec(x_20);
x_31 = lean_ctor_get(x_21, 0);
lean_inc(x_31);
lean_dec(x_21);
x_32 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__1___boxed), 7, 0);
x_33 = lean_name_eq(x_13, x_31);
lean_dec(x_13);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_34 = lean_st_ref_get(x_6, x_30);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_st_ref_take(x_2, x_35);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = !lean_is_exclusive(x_37);
if (x_39 == 0)
{
lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_37, 0);
lean_dec(x_40);
x_41 = 1;
lean_ctor_set(x_37, 0, x_31);
lean_ctor_set_uint8(x_37, sizeof(void*)*3, x_41);
x_42 = lean_st_ref_set(x_2, x_37, x_38);
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_box(0);
x_45 = lean_apply_7(x_32, x_44, x_2, x_3, x_4, x_5, x_6, x_43);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_46 = lean_ctor_get(x_37, 1);
x_47 = lean_ctor_get(x_37, 2);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_37);
x_48 = 1;
x_49 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_49, 0, x_31);
lean_ctor_set(x_49, 1, x_46);
lean_ctor_set(x_49, 2, x_47);
lean_ctor_set_uint8(x_49, sizeof(void*)*3, x_48);
x_50 = lean_st_ref_set(x_2, x_49, x_38);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_box(0);
x_53 = lean_apply_7(x_32, x_52, x_2, x_3, x_4, x_5, x_6, x_51);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_31);
x_54 = lean_box(0);
x_55 = lean_apply_7(x_32, x_54, x_2, x_3, x_4, x_5, x_6, x_30);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_56 = !lean_is_exclusive(x_20);
if (x_56 == 0)
{
return x_20;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_20, 0);
x_58 = lean_ctor_get(x_20, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_20);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_st_ref_take(x_1, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_13 = 0;
lean_ctor_set_uint8(x_10, sizeof(void*)*3, x_13);
x_14 = lean_st_ref_set(x_1, x_10, x_11);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_st_ref_get(x_5, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_st_ref_get(x_1, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_array_get_size(x_21);
lean_dec(x_21);
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_unsigned_to_nat(1u);
lean_inc(x_22);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_22);
lean_ctor_set(x_25, 2, x_24);
x_26 = lean_box(0);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_28);
x_29 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__2(x_28, x_25, x_22, x_23, x_28, x_1, x_2, x_3, x_4, x_5, x_20);
lean_dec(x_25);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
lean_dec(x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2___boxed), 7, 0);
x_34 = lean_apply_7(x_33, x_27, x_1, x_2, x_3, x_4, x_5, x_32);
return x_34;
}
else
{
uint8_t x_35; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_29);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_29, 0);
lean_dec(x_36);
x_37 = lean_ctor_get(x_31, 0);
lean_inc(x_37);
lean_dec(x_31);
lean_ctor_set(x_29, 0, x_37);
return x_29;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_29, 1);
lean_inc(x_38);
lean_dec(x_29);
x_39 = lean_ctor_get(x_31, 0);
lean_inc(x_39);
lean_dec(x_31);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_29);
if (x_41 == 0)
{
return x_29;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_29, 0);
x_43 = lean_ctor_get(x_29, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_29);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_45 = lean_ctor_get(x_10, 0);
x_46 = lean_ctor_get(x_10, 1);
x_47 = lean_ctor_get(x_10, 2);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_10);
x_48 = 0;
x_49 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_49, 0, x_45);
lean_ctor_set(x_49, 1, x_46);
lean_ctor_set(x_49, 2, x_47);
lean_ctor_set_uint8(x_49, sizeof(void*)*3, x_48);
x_50 = lean_st_ref_set(x_1, x_49, x_11);
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_st_ref_get(x_5, x_51);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
x_54 = lean_st_ref_get(x_1, x_53);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_58 = lean_array_get_size(x_57);
lean_dec(x_57);
x_59 = lean_unsigned_to_nat(0u);
x_60 = lean_unsigned_to_nat(1u);
lean_inc(x_58);
x_61 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_58);
lean_ctor_set(x_61, 2, x_60);
x_62 = lean_box(0);
x_63 = lean_box(0);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_64);
x_65 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__2(x_64, x_61, x_58, x_59, x_64, x_1, x_2, x_3, x_4, x_5, x_56);
lean_dec(x_61);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
lean_dec(x_66);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
lean_dec(x_65);
x_69 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2___boxed), 7, 0);
x_70 = lean_apply_7(x_69, x_63, x_1, x_2, x_3, x_4, x_5, x_68);
return x_70;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_71 = lean_ctor_get(x_65, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_72 = x_65;
} else {
 lean_dec_ref(x_65);
 x_72 = lean_box(0);
}
x_73 = lean_ctor_get(x_67, 0);
lean_inc(x_73);
lean_dec(x_67);
if (lean_is_scalar(x_72)) {
 x_74 = lean_alloc_ctor(0, 2, 0);
} else {
 x_74 = x_72;
}
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_71);
return x_74;
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_75 = lean_ctor_get(x_65, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_65, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_77 = x_65;
} else {
 lean_dec_ref(x_65);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(1, 2, 0);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
}
}
}
lean_object* l_Lean_Meta_SimpLemmas_eraseCore___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_SimpLemmas_eraseCore___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_2);
return x_12;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Meta_SimpAll_main_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_SimpAll_main_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SimpAll_main_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 3);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 4);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_11);
lean_ctor_set(x_13, 2, x_12);
x_14 = 1;
x_15 = x_2 + x_14;
x_16 = x_13;
x_17 = lean_array_uset(x_8, x_2, x_16);
x_2 = x_15;
x_3 = x_17;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__2(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
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
lean_object* l_Lean_Meta_SimpAll_main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_7 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_initEntries(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l___private_Lean_Meta_Tactic_Simp_SimpAll_0__Lean_Meta_SimpAll_loop(x_1, x_2, x_3, x_4, x_5, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_st_ref_get(x_5, x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_st_ref_get(x_1, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_st_ref_get(x_5, x_17);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_ref_get(x_1, x_20);
lean_dec(x_1);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_array_get_size(x_24);
x_26 = lean_usize_of_nat(x_25);
lean_dec(x_25);
x_27 = 0;
x_28 = x_24;
lean_inc(x_28);
x_29 = l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__1(x_26, x_27, x_28);
x_30 = x_29;
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_31 = l_Lean_Meta_assertHypotheses(x_18, x_30, x_2, x_3, x_4, x_5, x_23);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__2(x_26, x_27, x_28);
x_36 = x_35;
x_37 = l_Lean_Meta_tryClearMany(x_34, x_36, x_2, x_3, x_4, x_5, x_33);
lean_dec(x_36);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_37, 0, x_40);
return x_37;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_37, 0);
x_42 = lean_ctor_get(x_37, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_37);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_41);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
else
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_37);
if (x_45 == 0)
{
return x_37;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_37, 0);
x_47 = lean_ctor_get(x_37, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_37);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_28);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_31);
if (x_49 == 0)
{
return x_31;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_31, 0);
x_51 = lean_ctor_get(x_31, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_31);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_9);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_9, 0);
lean_dec(x_54);
x_55 = lean_box(0);
lean_ctor_set(x_9, 0, x_55);
return x_9;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_9, 1);
lean_inc(x_56);
lean_dec(x_9);
x_57 = lean_box(0);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_59 = !lean_is_exclusive(x_9);
if (x_59 == 0)
{
return x_9;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_9, 0);
x_61 = lean_ctor_get(x_9, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_9);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_7);
if (x_63 == 0)
{
return x_7;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_7, 0);
x_65 = lean_ctor_get(x_7, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_7);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__1(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Meta_SimpAll_main___spec__2(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Meta_simpAll___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_1);
x_7 = l_Lean_Meta_SimpAll_main(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_st_ref_get(x_5, x_9);
lean_dec(x_5);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_st_ref_get(x_1, x_11);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_8);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_5);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_7);
if (x_20 == 0)
{
return x_7;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_7, 0);
x_22 = lean_ctor_get(x_7, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_7);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Meta_simpAll___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
lean_object* l_Lean_Meta_simpAll(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_mk_empty_array_with_capacity(x_8);
x_10 = 0;
lean_inc(x_1);
x_11 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_11, 2, x_2);
lean_ctor_set_uint8(x_11, sizeof(void*)*3, x_10);
x_12 = lean_alloc_closure((void*)(l_Lean_Meta_transform___rarg___lambda__3___boxed), 6, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_simpAll___lambda__1), 6, 0);
x_14 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_13);
x_15 = lean_alloc_closure((void*)(l_Lean_Meta_simpAll___lambda__2___boxed), 6, 0);
x_16 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_16, 0, x_14);
lean_closure_set(x_16, 1, x_15);
x_17 = l_Lean_Meta_withMVarContext___at_Lean_Meta_admit___spec__1___rarg(x_1, x_16, x_3, x_4, x_5, x_6, x_7);
return x_17;
}
}
lean_object* l_Lean_Meta_simpAll___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_simpAll___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Clear(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Util(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_Tactic_Simp_SimpAll(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Clear(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Util(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_SimpAll_instInhabitedEntry = _init_l_Lean_Meta_SimpAll_instInhabitedEntry();
lean_mark_persistent(l_Lean_Meta_SimpAll_instInhabitedEntry);
l_Lean_Meta_SimpAll_State_modified___default = _init_l_Lean_Meta_SimpAll_State_modified___default();
l_Lean_Meta_SimpAll_State_entries___default = _init_l_Lean_Meta_SimpAll_State_entries___default();
lean_mark_persistent(l_Lean_Meta_SimpAll_State_entries___default);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
