// Lean compiler output
// Module: Lean.Meta.Offset
// Imports: Init Lean.Data.LBool Lean.Meta.InferType
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
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqOffset_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalNat_visit_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__1___rarg(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalNat_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_isDefEqOffset___spec__1(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqOffset_match__2(lean_object*);
lean_object* l_Lean_Meta_isDefEqOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_isDefEqOffset___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalNat_match__1(lean_object*);
lean_object* l_Lean_Meta_isDefEqOffset_match__1(lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__2___rarg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__1(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_mkOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Bool_toLBool(uint8_t);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__2(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero_match__1(lean_object*);
lean_object* l_Lean_Meta_evalNat_visit_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqOffset_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars(lean_object*);
lean_object* l_Lean_Meta_evalNat_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_8 = l_Lean_Meta_instantiateMVars(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = l_Lean_Expr_getAppFn(x_10);
x_13 = l_Lean_Expr_isMVar(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_free_object(x_8);
x_14 = lean_apply_6(x_2, x_10, x_3, x_4, x_5, x_6, x_11);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_box(0);
lean_ctor_set(x_8, 0, x_15);
return x_8;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_8, 0);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_8);
x_18 = l_Lean_Expr_getAppFn(x_16);
x_19 = l_Lean_Expr_isMVar(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_apply_6(x_2, x_16, x_3, x_4, x_5, x_6, x_17);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_16);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_17);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_8);
if (x_23 == 0)
{
return x_8;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_8, 0);
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_8);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Offset_0__Lean_Meta_withInstantiatedMVars___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_evalNat_visit_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_2(x_2, x_5, x_7);
return x_8;
}
case 4:
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_12 = lean_box_uint64(x_11);
x_13 = lean_apply_3(x_3, x_9, x_10, x_12);
return x_13;
}
default: 
{
lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_apply_1(x_4, x_1);
return x_14;
}
}
}
}
lean_object* l_Lean_Meta_evalNat_visit_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_evalNat_visit_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_evalNat_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_8; uint64_t x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
x_10 = lean_box_uint64(x_9);
x_11 = lean_apply_3(x_6, x_1, x_8, x_10);
return x_11;
}
case 4:
{
lean_object* x_12; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 1)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 1)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
uint64_t x_17; lean_object* x_18; uint64_t x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_18 = lean_ctor_get(x_12, 1);
x_19 = lean_ctor_get_uint64(x_12, sizeof(void*)*2);
x_20 = lean_ctor_get(x_12, 0);
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
lean_object* x_22; uint64_t x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_22 = lean_ctor_get(x_13, 1);
x_23 = lean_ctor_get_uint64(x_13, sizeof(void*)*2);
x_24 = lean_ctor_get(x_13, 0);
lean_dec(x_24);
x_25 = lean_mk_string("Nat");
x_26 = lean_string_dec_eq(x_22, x_25);
lean_dec(x_22);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_25);
lean_free_object(x_13);
lean_free_object(x_12);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_4);
x_27 = lean_apply_1(x_7, x_1);
return x_27;
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_1);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_1, 1);
lean_dec(x_29);
x_30 = lean_ctor_get(x_1, 0);
lean_dec(x_30);
x_31 = lean_mk_string("zero");
x_32 = lean_string_dec_eq(x_18, x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; 
lean_dec(x_4);
lean_ctor_set(x_13, 1, x_25);
x_33 = lean_apply_1(x_7, x_1);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_free_object(x_1);
lean_dec(x_25);
lean_free_object(x_13);
lean_free_object(x_12);
lean_dec(x_18);
lean_dec(x_7);
x_34 = lean_box_uint64(x_17);
x_35 = lean_box_uint64(x_23);
x_36 = lean_box_uint64(x_19);
x_37 = lean_apply_4(x_4, x_15, x_34, x_35, x_36);
return x_37;
}
}
else
{
lean_object* x_38; uint8_t x_39; 
lean_dec(x_1);
x_38 = lean_mk_string("zero");
x_39 = lean_string_dec_eq(x_18, x_38);
lean_dec(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_4);
lean_ctor_set(x_13, 1, x_25);
x_40 = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(x_40, 0, x_12);
lean_ctor_set(x_40, 1, x_15);
lean_ctor_set_uint64(x_40, sizeof(void*)*2, x_17);
x_41 = lean_apply_1(x_7, x_40);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_25);
lean_free_object(x_13);
lean_free_object(x_12);
lean_dec(x_18);
lean_dec(x_7);
x_42 = lean_box_uint64(x_17);
x_43 = lean_box_uint64(x_23);
x_44 = lean_box_uint64(x_19);
x_45 = lean_apply_4(x_4, x_15, x_42, x_43, x_44);
return x_45;
}
}
}
}
else
{
lean_object* x_46; uint64_t x_47; lean_object* x_48; uint8_t x_49; 
x_46 = lean_ctor_get(x_13, 1);
x_47 = lean_ctor_get_uint64(x_13, sizeof(void*)*2);
lean_inc(x_46);
lean_dec(x_13);
x_48 = lean_mk_string("Nat");
x_49 = lean_string_dec_eq(x_46, x_48);
lean_dec(x_46);
if (x_49 == 0)
{
lean_object* x_50; 
lean_dec(x_48);
lean_free_object(x_12);
lean_dec(x_18);
lean_dec(x_15);
lean_dec(x_4);
x_50 = lean_apply_1(x_7, x_1);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_51 = x_1;
} else {
 lean_dec_ref(x_1);
 x_51 = lean_box(0);
}
x_52 = lean_mk_string("zero");
x_53 = lean_string_dec_eq(x_18, x_52);
lean_dec(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_4);
x_54 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_54, 0, x_14);
lean_ctor_set(x_54, 1, x_48);
lean_ctor_set_uint64(x_54, sizeof(void*)*2, x_47);
lean_ctor_set(x_12, 0, x_54);
if (lean_is_scalar(x_51)) {
 x_55 = lean_alloc_ctor(4, 2, 8);
} else {
 x_55 = x_51;
}
lean_ctor_set(x_55, 0, x_12);
lean_ctor_set(x_55, 1, x_15);
lean_ctor_set_uint64(x_55, sizeof(void*)*2, x_17);
x_56 = lean_apply_1(x_7, x_55);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_51);
lean_dec(x_48);
lean_free_object(x_12);
lean_dec(x_18);
lean_dec(x_7);
x_57 = lean_box_uint64(x_17);
x_58 = lean_box_uint64(x_47);
x_59 = lean_box_uint64(x_19);
x_60 = lean_apply_4(x_4, x_15, x_57, x_58, x_59);
return x_60;
}
}
}
}
else
{
uint64_t x_61; lean_object* x_62; uint64_t x_63; lean_object* x_64; uint64_t x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_61 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_62 = lean_ctor_get(x_12, 1);
x_63 = lean_ctor_get_uint64(x_12, sizeof(void*)*2);
lean_inc(x_62);
lean_dec(x_12);
x_64 = lean_ctor_get(x_13, 1);
lean_inc(x_64);
x_65 = lean_ctor_get_uint64(x_13, sizeof(void*)*2);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 x_66 = x_13;
} else {
 lean_dec_ref(x_13);
 x_66 = lean_box(0);
}
x_67 = lean_mk_string("Nat");
x_68 = lean_string_dec_eq(x_64, x_67);
lean_dec(x_64);
if (x_68 == 0)
{
lean_object* x_69; 
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_62);
lean_dec(x_15);
lean_dec(x_4);
x_69 = lean_apply_1(x_7, x_1);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; uint8_t x_72; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_70 = x_1;
} else {
 lean_dec_ref(x_1);
 x_70 = lean_box(0);
}
x_71 = lean_mk_string("zero");
x_72 = lean_string_dec_eq(x_62, x_71);
lean_dec(x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_4);
if (lean_is_scalar(x_66)) {
 x_73 = lean_alloc_ctor(1, 2, 8);
} else {
 x_73 = x_66;
}
lean_ctor_set(x_73, 0, x_14);
lean_ctor_set(x_73, 1, x_67);
lean_ctor_set_uint64(x_73, sizeof(void*)*2, x_65);
x_74 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_62);
lean_ctor_set_uint64(x_74, sizeof(void*)*2, x_63);
if (lean_is_scalar(x_70)) {
 x_75 = lean_alloc_ctor(4, 2, 8);
} else {
 x_75 = x_70;
}
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_15);
lean_ctor_set_uint64(x_75, sizeof(void*)*2, x_61);
x_76 = lean_apply_1(x_7, x_75);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_70);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_62);
lean_dec(x_7);
x_77 = lean_box_uint64(x_61);
x_78 = lean_box_uint64(x_65);
x_79 = lean_box_uint64(x_63);
x_80 = lean_apply_4(x_4, x_15, x_77, x_78, x_79);
return x_80;
}
}
}
}
else
{
lean_object* x_81; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_4);
x_81 = lean_apply_1(x_7, x_1);
return x_81;
}
}
else
{
lean_object* x_82; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_4);
x_82 = lean_apply_1(x_7, x_1);
return x_82;
}
}
else
{
lean_object* x_83; 
lean_dec(x_12);
lean_dec(x_4);
x_83 = lean_apply_1(x_7, x_1);
return x_83;
}
}
case 5:
{
lean_object* x_84; lean_object* x_85; uint64_t x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_84 = lean_ctor_get(x_1, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_1, 1);
lean_inc(x_85);
x_86 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_87 = lean_box_uint64(x_86);
x_88 = lean_apply_4(x_5, x_1, x_84, x_85, x_87);
return x_88;
}
case 9:
{
lean_object* x_89; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_89 = lean_ctor_get(x_1, 0);
lean_inc(x_89);
if (lean_obj_tag(x_89) == 0)
{
uint64_t x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_7);
x_90 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_91 = lean_ctor_get(x_89, 0);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_box_uint64(x_90);
x_93 = lean_apply_2(x_2, x_91, x_92);
return x_93;
}
else
{
lean_object* x_94; 
lean_dec(x_89);
lean_dec(x_2);
x_94 = lean_apply_1(x_7, x_1);
return x_94;
}
}
case 10:
{
lean_object* x_95; lean_object* x_96; uint64_t x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_95 = lean_ctor_get(x_1, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_1, 1);
lean_inc(x_96);
x_97 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_98 = lean_box_uint64(x_97);
x_99 = lean_apply_3(x_3, x_95, x_96, x_98);
return x_99;
}
default: 
{
lean_object* x_100; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_100 = lean_apply_1(x_7, x_1);
return x_100;
}
}
}
}
lean_object* l_Lean_Meta_evalNat_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_evalNat_match__1___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_evalNat_visit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Expr_getAppFn(x_1);
switch (lean_obj_tag(x_7)) {
case 2:
{
lean_object* x_8; 
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_Lean_Meta_instantiateMVars(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = l_Lean_Expr_getAppFn(x_10);
x_13 = l_Lean_Expr_isMVar(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_free_object(x_8);
x_14 = l_Lean_Meta_evalNat(x_10, x_2, x_3, x_4, x_5, x_11);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_box(0);
lean_ctor_set(x_8, 0, x_15);
return x_8;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_8, 0);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_8);
x_18 = l_Lean_Expr_getAppFn(x_16);
x_19 = l_Lean_Expr_isMVar(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = l_Lean_Meta_evalNat(x_16, x_2, x_3, x_4, x_5, x_17);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_17);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_8);
if (x_23 == 0)
{
return x_8;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_8, 0);
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_8);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
case 4:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_49; lean_object* x_167; lean_object* x_218; lean_object* x_297; lean_object* x_415; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_576; lean_object* x_577; uint8_t x_578; 
x_27 = lean_ctor_get(x_7, 0);
lean_inc(x_27);
lean_dec(x_7);
x_28 = lean_unsigned_to_nat(0u);
x_29 = l_Lean_Expr_getAppNumArgsAux(x_1, x_28);
x_464 = lean_box(0);
x_465 = lean_mk_string("Nat");
x_466 = lean_name_mk_string(x_464, x_465);
x_576 = lean_mk_string("succ");
lean_inc(x_466);
x_577 = lean_name_mk_string(x_466, x_576);
x_578 = lean_name_eq(x_27, x_577);
lean_dec(x_577);
if (x_578 == 0)
{
lean_object* x_579; lean_object* x_580; uint8_t x_581; 
x_579 = lean_mk_string("add");
lean_inc(x_466);
x_580 = lean_name_mk_string(x_466, x_579);
x_581 = lean_name_eq(x_27, x_580);
lean_dec(x_580);
if (x_581 == 0)
{
lean_object* x_582; 
x_582 = lean_box(0);
x_467 = x_582;
goto block_575;
}
else
{
lean_object* x_583; uint8_t x_584; 
x_583 = lean_unsigned_to_nat(2u);
x_584 = lean_nat_dec_eq(x_29, x_583);
if (x_584 == 0)
{
lean_object* x_585; 
x_585 = lean_box(0);
x_467 = x_585;
goto block_575;
}
else
{
lean_object* x_586; 
lean_dec(x_466);
lean_dec(x_27);
x_586 = lean_box(0);
x_415 = x_586;
goto block_463;
}
}
}
else
{
lean_object* x_587; uint8_t x_588; 
x_587 = lean_unsigned_to_nat(1u);
x_588 = lean_nat_dec_eq(x_29, x_587);
if (x_588 == 0)
{
lean_object* x_589; lean_object* x_590; uint8_t x_591; 
x_589 = lean_mk_string("add");
lean_inc(x_466);
x_590 = lean_name_mk_string(x_466, x_589);
x_591 = lean_name_eq(x_27, x_590);
lean_dec(x_590);
if (x_591 == 0)
{
lean_object* x_592; 
x_592 = lean_box(0);
x_467 = x_592;
goto block_575;
}
else
{
lean_object* x_593; uint8_t x_594; 
x_593 = lean_unsigned_to_nat(2u);
x_594 = lean_nat_dec_eq(x_29, x_593);
if (x_594 == 0)
{
lean_object* x_595; 
x_595 = lean_box(0);
x_467 = x_595;
goto block_575;
}
else
{
lean_object* x_596; 
lean_dec(x_466);
lean_dec(x_27);
x_596 = lean_box(0);
x_415 = x_596;
goto block_463;
}
}
}
else
{
lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; 
lean_dec(x_466);
lean_dec(x_27);
x_597 = lean_nat_sub(x_29, x_28);
lean_dec(x_29);
x_598 = lean_nat_sub(x_597, x_587);
lean_dec(x_597);
x_599 = l_Lean_Expr_getRevArg_x21(x_1, x_598);
lean_dec(x_1);
x_600 = l_Lean_Meta_evalNat(x_599, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_600) == 0)
{
lean_object* x_601; 
x_601 = lean_ctor_get(x_600, 0);
lean_inc(x_601);
if (lean_obj_tag(x_601) == 0)
{
uint8_t x_602; 
x_602 = !lean_is_exclusive(x_600);
if (x_602 == 0)
{
lean_object* x_603; lean_object* x_604; 
x_603 = lean_ctor_get(x_600, 0);
lean_dec(x_603);
x_604 = lean_box(0);
lean_ctor_set(x_600, 0, x_604);
return x_600;
}
else
{
lean_object* x_605; lean_object* x_606; lean_object* x_607; 
x_605 = lean_ctor_get(x_600, 1);
lean_inc(x_605);
lean_dec(x_600);
x_606 = lean_box(0);
x_607 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_607, 0, x_606);
lean_ctor_set(x_607, 1, x_605);
return x_607;
}
}
else
{
uint8_t x_608; 
x_608 = !lean_is_exclusive(x_600);
if (x_608 == 0)
{
lean_object* x_609; uint8_t x_610; 
x_609 = lean_ctor_get(x_600, 0);
lean_dec(x_609);
x_610 = !lean_is_exclusive(x_601);
if (x_610 == 0)
{
lean_object* x_611; lean_object* x_612; 
x_611 = lean_ctor_get(x_601, 0);
x_612 = lean_nat_add(x_611, x_587);
lean_dec(x_611);
lean_ctor_set(x_601, 0, x_612);
return x_600;
}
else
{
lean_object* x_613; lean_object* x_614; lean_object* x_615; 
x_613 = lean_ctor_get(x_601, 0);
lean_inc(x_613);
lean_dec(x_601);
x_614 = lean_nat_add(x_613, x_587);
lean_dec(x_613);
x_615 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_615, 0, x_614);
lean_ctor_set(x_600, 0, x_615);
return x_600;
}
}
else
{
lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; 
x_616 = lean_ctor_get(x_600, 1);
lean_inc(x_616);
lean_dec(x_600);
x_617 = lean_ctor_get(x_601, 0);
lean_inc(x_617);
if (lean_is_exclusive(x_601)) {
 lean_ctor_release(x_601, 0);
 x_618 = x_601;
} else {
 lean_dec_ref(x_601);
 x_618 = lean_box(0);
}
x_619 = lean_nat_add(x_617, x_587);
lean_dec(x_617);
if (lean_is_scalar(x_618)) {
 x_620 = lean_alloc_ctor(1, 1, 0);
} else {
 x_620 = x_618;
}
lean_ctor_set(x_620, 0, x_619);
x_621 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_621, 0, x_620);
lean_ctor_set(x_621, 1, x_616);
return x_621;
}
}
}
else
{
uint8_t x_622; 
x_622 = !lean_is_exclusive(x_600);
if (x_622 == 0)
{
return x_600;
}
else
{
lean_object* x_623; lean_object* x_624; lean_object* x_625; 
x_623 = lean_ctor_get(x_600, 0);
x_624 = lean_ctor_get(x_600, 1);
lean_inc(x_624);
lean_inc(x_623);
lean_dec(x_600);
x_625 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_625, 0, x_623);
lean_ctor_set(x_625, 1, x_624);
return x_625;
}
}
}
}
block_48:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_30);
x_31 = lean_box(0);
x_32 = lean_mk_string("OfNat");
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("ofNat");
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = lean_name_eq(x_27, x_35);
lean_dec(x_35);
lean_dec(x_27);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_6);
return x_38;
}
else
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_unsigned_to_nat(3u);
x_40 = lean_nat_dec_eq(x_29, x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_6);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_43 = lean_unsigned_to_nat(1u);
x_44 = lean_nat_sub(x_29, x_43);
lean_dec(x_29);
x_45 = lean_nat_sub(x_44, x_43);
lean_dec(x_44);
x_46 = l_Lean_Expr_getRevArg_x21(x_1, x_45);
lean_dec(x_1);
x_47 = l_Lean_Meta_evalNat(x_46, x_2, x_3, x_4, x_5, x_6);
return x_47;
}
}
}
block_166:
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
lean_dec(x_49);
x_50 = lean_box(0);
x_51 = lean_mk_string("HSub");
x_52 = lean_name_mk_string(x_50, x_51);
x_53 = lean_mk_string("hSub");
x_54 = lean_name_mk_string(x_52, x_53);
x_55 = lean_name_eq(x_27, x_54);
lean_dec(x_54);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_56 = lean_mk_string("HMul");
x_57 = lean_name_mk_string(x_50, x_56);
x_58 = lean_mk_string("hMul");
x_59 = lean_name_mk_string(x_57, x_58);
x_60 = lean_name_eq(x_27, x_59);
lean_dec(x_59);
if (x_60 == 0)
{
lean_object* x_61; 
x_61 = lean_box(0);
x_30 = x_61;
goto block_48;
}
else
{
lean_object* x_62; uint8_t x_63; 
x_62 = lean_unsigned_to_nat(6u);
x_63 = lean_nat_dec_eq(x_29, x_62);
if (x_63 == 0)
{
lean_object* x_64; 
x_64 = lean_box(0);
x_30 = x_64;
goto block_48;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_27);
x_65 = lean_unsigned_to_nat(4u);
x_66 = lean_nat_sub(x_29, x_65);
x_67 = lean_unsigned_to_nat(1u);
x_68 = lean_nat_sub(x_66, x_67);
lean_dec(x_66);
x_69 = l_Lean_Expr_getRevArg_x21(x_1, x_68);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_70 = l_Lean_Meta_evalNat(x_69, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
if (lean_obj_tag(x_71) == 0)
{
uint8_t x_72; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_72 = !lean_is_exclusive(x_70);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; 
x_73 = lean_ctor_get(x_70, 0);
lean_dec(x_73);
x_74 = lean_box(0);
lean_ctor_set(x_70, 0, x_74);
return x_70;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_70, 1);
lean_inc(x_75);
lean_dec(x_70);
x_76 = lean_box(0);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_75);
return x_77;
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_78 = lean_ctor_get(x_70, 1);
lean_inc(x_78);
lean_dec(x_70);
x_79 = lean_ctor_get(x_71, 0);
lean_inc(x_79);
lean_dec(x_71);
x_80 = lean_unsigned_to_nat(5u);
x_81 = lean_nat_sub(x_29, x_80);
lean_dec(x_29);
x_82 = lean_nat_sub(x_81, x_67);
lean_dec(x_81);
x_83 = l_Lean_Expr_getRevArg_x21(x_1, x_82);
lean_dec(x_1);
x_84 = l_Lean_Meta_evalNat(x_83, x_2, x_3, x_4, x_5, x_78);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; 
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
if (lean_obj_tag(x_85) == 0)
{
uint8_t x_86; 
lean_dec(x_79);
x_86 = !lean_is_exclusive(x_84);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_ctor_get(x_84, 0);
lean_dec(x_87);
x_88 = lean_box(0);
lean_ctor_set(x_84, 0, x_88);
return x_84;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_84, 1);
lean_inc(x_89);
lean_dec(x_84);
x_90 = lean_box(0);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_89);
return x_91;
}
}
else
{
uint8_t x_92; 
x_92 = !lean_is_exclusive(x_84);
if (x_92 == 0)
{
lean_object* x_93; uint8_t x_94; 
x_93 = lean_ctor_get(x_84, 0);
lean_dec(x_93);
x_94 = !lean_is_exclusive(x_85);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; 
x_95 = lean_ctor_get(x_85, 0);
x_96 = lean_nat_mul(x_79, x_95);
lean_dec(x_95);
lean_dec(x_79);
lean_ctor_set(x_85, 0, x_96);
return x_84;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_85, 0);
lean_inc(x_97);
lean_dec(x_85);
x_98 = lean_nat_mul(x_79, x_97);
lean_dec(x_97);
lean_dec(x_79);
x_99 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_84, 0, x_99);
return x_84;
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_100 = lean_ctor_get(x_84, 1);
lean_inc(x_100);
lean_dec(x_84);
x_101 = lean_ctor_get(x_85, 0);
lean_inc(x_101);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 x_102 = x_85;
} else {
 lean_dec_ref(x_85);
 x_102 = lean_box(0);
}
x_103 = lean_nat_mul(x_79, x_101);
lean_dec(x_101);
lean_dec(x_79);
if (lean_is_scalar(x_102)) {
 x_104 = lean_alloc_ctor(1, 1, 0);
} else {
 x_104 = x_102;
}
lean_ctor_set(x_104, 0, x_103);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_100);
return x_105;
}
}
}
else
{
uint8_t x_106; 
lean_dec(x_79);
x_106 = !lean_is_exclusive(x_84);
if (x_106 == 0)
{
return x_84;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_84, 0);
x_108 = lean_ctor_get(x_84, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_84);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
}
else
{
uint8_t x_110; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_110 = !lean_is_exclusive(x_70);
if (x_110 == 0)
{
return x_70;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_70, 0);
x_112 = lean_ctor_get(x_70, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_70);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
}
}
}
else
{
lean_object* x_114; uint8_t x_115; 
x_114 = lean_unsigned_to_nat(6u);
x_115 = lean_nat_dec_eq(x_29, x_114);
if (x_115 == 0)
{
lean_object* x_116; 
x_116 = lean_box(0);
x_30 = x_116;
goto block_48;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_27);
x_117 = lean_unsigned_to_nat(4u);
x_118 = lean_nat_sub(x_29, x_117);
x_119 = lean_unsigned_to_nat(1u);
x_120 = lean_nat_sub(x_118, x_119);
lean_dec(x_118);
x_121 = l_Lean_Expr_getRevArg_x21(x_1, x_120);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_122 = l_Lean_Meta_evalNat(x_121, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; 
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
if (lean_obj_tag(x_123) == 0)
{
uint8_t x_124; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_124 = !lean_is_exclusive(x_122);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; 
x_125 = lean_ctor_get(x_122, 0);
lean_dec(x_125);
x_126 = lean_box(0);
lean_ctor_set(x_122, 0, x_126);
return x_122;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_127 = lean_ctor_get(x_122, 1);
lean_inc(x_127);
lean_dec(x_122);
x_128 = lean_box(0);
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_127);
return x_129;
}
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_130 = lean_ctor_get(x_122, 1);
lean_inc(x_130);
lean_dec(x_122);
x_131 = lean_ctor_get(x_123, 0);
lean_inc(x_131);
lean_dec(x_123);
x_132 = lean_unsigned_to_nat(5u);
x_133 = lean_nat_sub(x_29, x_132);
lean_dec(x_29);
x_134 = lean_nat_sub(x_133, x_119);
lean_dec(x_133);
x_135 = l_Lean_Expr_getRevArg_x21(x_1, x_134);
lean_dec(x_1);
x_136 = l_Lean_Meta_evalNat(x_135, x_2, x_3, x_4, x_5, x_130);
if (lean_obj_tag(x_136) == 0)
{
lean_object* x_137; 
x_137 = lean_ctor_get(x_136, 0);
lean_inc(x_137);
if (lean_obj_tag(x_137) == 0)
{
uint8_t x_138; 
lean_dec(x_131);
x_138 = !lean_is_exclusive(x_136);
if (x_138 == 0)
{
lean_object* x_139; lean_object* x_140; 
x_139 = lean_ctor_get(x_136, 0);
lean_dec(x_139);
x_140 = lean_box(0);
lean_ctor_set(x_136, 0, x_140);
return x_136;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_141 = lean_ctor_get(x_136, 1);
lean_inc(x_141);
lean_dec(x_136);
x_142 = lean_box(0);
x_143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_141);
return x_143;
}
}
else
{
uint8_t x_144; 
x_144 = !lean_is_exclusive(x_136);
if (x_144 == 0)
{
lean_object* x_145; uint8_t x_146; 
x_145 = lean_ctor_get(x_136, 0);
lean_dec(x_145);
x_146 = !lean_is_exclusive(x_137);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; 
x_147 = lean_ctor_get(x_137, 0);
x_148 = lean_nat_sub(x_131, x_147);
lean_dec(x_147);
lean_dec(x_131);
lean_ctor_set(x_137, 0, x_148);
return x_136;
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_149 = lean_ctor_get(x_137, 0);
lean_inc(x_149);
lean_dec(x_137);
x_150 = lean_nat_sub(x_131, x_149);
lean_dec(x_149);
lean_dec(x_131);
x_151 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_136, 0, x_151);
return x_136;
}
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_152 = lean_ctor_get(x_136, 1);
lean_inc(x_152);
lean_dec(x_136);
x_153 = lean_ctor_get(x_137, 0);
lean_inc(x_153);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 x_154 = x_137;
} else {
 lean_dec_ref(x_137);
 x_154 = lean_box(0);
}
x_155 = lean_nat_sub(x_131, x_153);
lean_dec(x_153);
lean_dec(x_131);
if (lean_is_scalar(x_154)) {
 x_156 = lean_alloc_ctor(1, 1, 0);
} else {
 x_156 = x_154;
}
lean_ctor_set(x_156, 0, x_155);
x_157 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_152);
return x_157;
}
}
}
else
{
uint8_t x_158; 
lean_dec(x_131);
x_158 = !lean_is_exclusive(x_136);
if (x_158 == 0)
{
return x_136;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_ctor_get(x_136, 0);
x_160 = lean_ctor_get(x_136, 1);
lean_inc(x_160);
lean_inc(x_159);
lean_dec(x_136);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
}
}
}
else
{
uint8_t x_162; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_162 = !lean_is_exclusive(x_122);
if (x_162 == 0)
{
return x_122;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_163 = lean_ctor_get(x_122, 0);
x_164 = lean_ctor_get(x_122, 1);
lean_inc(x_164);
lean_inc(x_163);
lean_dec(x_122);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
return x_165;
}
}
}
}
}
block_217:
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_dec(x_167);
x_168 = lean_unsigned_to_nat(3u);
x_169 = lean_nat_sub(x_29, x_168);
x_170 = lean_unsigned_to_nat(1u);
x_171 = lean_nat_sub(x_169, x_170);
lean_dec(x_169);
x_172 = l_Lean_Expr_getRevArg_x21(x_1, x_171);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_173 = l_Lean_Meta_evalNat(x_172, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_173) == 0)
{
lean_object* x_174; 
x_174 = lean_ctor_get(x_173, 0);
lean_inc(x_174);
if (lean_obj_tag(x_174) == 0)
{
uint8_t x_175; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_175 = !lean_is_exclusive(x_173);
if (x_175 == 0)
{
lean_object* x_176; lean_object* x_177; 
x_176 = lean_ctor_get(x_173, 0);
lean_dec(x_176);
x_177 = lean_box(0);
lean_ctor_set(x_173, 0, x_177);
return x_173;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_ctor_get(x_173, 1);
lean_inc(x_178);
lean_dec(x_173);
x_179 = lean_box(0);
x_180 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_180, 0, x_179);
lean_ctor_set(x_180, 1, x_178);
return x_180;
}
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
x_181 = lean_ctor_get(x_173, 1);
lean_inc(x_181);
lean_dec(x_173);
x_182 = lean_ctor_get(x_174, 0);
lean_inc(x_182);
lean_dec(x_174);
x_183 = lean_unsigned_to_nat(5u);
x_184 = lean_nat_sub(x_29, x_183);
lean_dec(x_29);
x_185 = lean_nat_sub(x_184, x_170);
lean_dec(x_184);
x_186 = l_Lean_Expr_getRevArg_x21(x_1, x_185);
lean_dec(x_1);
x_187 = l_Lean_Meta_evalNat(x_186, x_2, x_3, x_4, x_5, x_181);
if (lean_obj_tag(x_187) == 0)
{
lean_object* x_188; 
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
if (lean_obj_tag(x_188) == 0)
{
uint8_t x_189; 
lean_dec(x_182);
x_189 = !lean_is_exclusive(x_187);
if (x_189 == 0)
{
lean_object* x_190; lean_object* x_191; 
x_190 = lean_ctor_get(x_187, 0);
lean_dec(x_190);
x_191 = lean_box(0);
lean_ctor_set(x_187, 0, x_191);
return x_187;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_192 = lean_ctor_get(x_187, 1);
lean_inc(x_192);
lean_dec(x_187);
x_193 = lean_box(0);
x_194 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_194, 0, x_193);
lean_ctor_set(x_194, 1, x_192);
return x_194;
}
}
else
{
uint8_t x_195; 
x_195 = !lean_is_exclusive(x_187);
if (x_195 == 0)
{
lean_object* x_196; uint8_t x_197; 
x_196 = lean_ctor_get(x_187, 0);
lean_dec(x_196);
x_197 = !lean_is_exclusive(x_188);
if (x_197 == 0)
{
lean_object* x_198; lean_object* x_199; 
x_198 = lean_ctor_get(x_188, 0);
x_199 = lean_nat_add(x_182, x_198);
lean_dec(x_198);
lean_dec(x_182);
lean_ctor_set(x_188, 0, x_199);
return x_187;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_200 = lean_ctor_get(x_188, 0);
lean_inc(x_200);
lean_dec(x_188);
x_201 = lean_nat_add(x_182, x_200);
lean_dec(x_200);
lean_dec(x_182);
x_202 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_187, 0, x_202);
return x_187;
}
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_203 = lean_ctor_get(x_187, 1);
lean_inc(x_203);
lean_dec(x_187);
x_204 = lean_ctor_get(x_188, 0);
lean_inc(x_204);
if (lean_is_exclusive(x_188)) {
 lean_ctor_release(x_188, 0);
 x_205 = x_188;
} else {
 lean_dec_ref(x_188);
 x_205 = lean_box(0);
}
x_206 = lean_nat_add(x_182, x_204);
lean_dec(x_204);
lean_dec(x_182);
if (lean_is_scalar(x_205)) {
 x_207 = lean_alloc_ctor(1, 1, 0);
} else {
 x_207 = x_205;
}
lean_ctor_set(x_207, 0, x_206);
x_208 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set(x_208, 1, x_203);
return x_208;
}
}
}
else
{
uint8_t x_209; 
lean_dec(x_182);
x_209 = !lean_is_exclusive(x_187);
if (x_209 == 0)
{
return x_187;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_210 = lean_ctor_get(x_187, 0);
x_211 = lean_ctor_get(x_187, 1);
lean_inc(x_211);
lean_inc(x_210);
lean_dec(x_187);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_210);
lean_ctor_set(x_212, 1, x_211);
return x_212;
}
}
}
}
else
{
uint8_t x_213; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_213 = !lean_is_exclusive(x_173);
if (x_213 == 0)
{
return x_173;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_214 = lean_ctor_get(x_173, 0);
x_215 = lean_ctor_get(x_173, 1);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_173);
x_216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_216, 0, x_214);
lean_ctor_set(x_216, 1, x_215);
return x_216;
}
}
}
block_296:
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; uint8_t x_224; 
lean_dec(x_218);
x_219 = lean_box(0);
x_220 = lean_mk_string("Mul");
x_221 = lean_name_mk_string(x_219, x_220);
x_222 = lean_mk_string("mul");
x_223 = lean_name_mk_string(x_221, x_222);
x_224 = lean_name_eq(x_27, x_223);
lean_dec(x_223);
if (x_224 == 0)
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; uint8_t x_229; 
x_225 = lean_mk_string("HAdd");
x_226 = lean_name_mk_string(x_219, x_225);
x_227 = lean_mk_string("hAdd");
x_228 = lean_name_mk_string(x_226, x_227);
x_229 = lean_name_eq(x_27, x_228);
lean_dec(x_228);
if (x_229 == 0)
{
lean_object* x_230; 
x_230 = lean_box(0);
x_49 = x_230;
goto block_166;
}
else
{
lean_object* x_231; uint8_t x_232; 
x_231 = lean_unsigned_to_nat(6u);
x_232 = lean_nat_dec_eq(x_29, x_231);
if (x_232 == 0)
{
lean_object* x_233; 
x_233 = lean_box(0);
x_49 = x_233;
goto block_166;
}
else
{
lean_object* x_234; 
lean_dec(x_27);
x_234 = lean_box(0);
x_167 = x_234;
goto block_217;
}
}
}
else
{
lean_object* x_235; uint8_t x_236; 
x_235 = lean_unsigned_to_nat(4u);
x_236 = lean_nat_dec_eq(x_29, x_235);
if (x_236 == 0)
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; uint8_t x_241; 
x_237 = lean_mk_string("HAdd");
x_238 = lean_name_mk_string(x_219, x_237);
x_239 = lean_mk_string("hAdd");
x_240 = lean_name_mk_string(x_238, x_239);
x_241 = lean_name_eq(x_27, x_240);
lean_dec(x_240);
if (x_241 == 0)
{
lean_object* x_242; 
x_242 = lean_box(0);
x_49 = x_242;
goto block_166;
}
else
{
lean_object* x_243; uint8_t x_244; 
x_243 = lean_unsigned_to_nat(6u);
x_244 = lean_nat_dec_eq(x_29, x_243);
if (x_244 == 0)
{
lean_object* x_245; 
x_245 = lean_box(0);
x_49 = x_245;
goto block_166;
}
else
{
lean_object* x_246; 
lean_dec(x_27);
x_246 = lean_box(0);
x_167 = x_246;
goto block_217;
}
}
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
lean_dec(x_27);
x_247 = lean_unsigned_to_nat(2u);
x_248 = lean_nat_sub(x_29, x_247);
x_249 = lean_unsigned_to_nat(1u);
x_250 = lean_nat_sub(x_248, x_249);
lean_dec(x_248);
x_251 = l_Lean_Expr_getRevArg_x21(x_1, x_250);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_252 = l_Lean_Meta_evalNat(x_251, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_252) == 0)
{
lean_object* x_253; 
x_253 = lean_ctor_get(x_252, 0);
lean_inc(x_253);
if (lean_obj_tag(x_253) == 0)
{
uint8_t x_254; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_254 = !lean_is_exclusive(x_252);
if (x_254 == 0)
{
lean_object* x_255; lean_object* x_256; 
x_255 = lean_ctor_get(x_252, 0);
lean_dec(x_255);
x_256 = lean_box(0);
lean_ctor_set(x_252, 0, x_256);
return x_252;
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; 
x_257 = lean_ctor_get(x_252, 1);
lean_inc(x_257);
lean_dec(x_252);
x_258 = lean_box(0);
x_259 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_259, 0, x_258);
lean_ctor_set(x_259, 1, x_257);
return x_259;
}
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_260 = lean_ctor_get(x_252, 1);
lean_inc(x_260);
lean_dec(x_252);
x_261 = lean_ctor_get(x_253, 0);
lean_inc(x_261);
lean_dec(x_253);
x_262 = lean_unsigned_to_nat(3u);
x_263 = lean_nat_sub(x_29, x_262);
lean_dec(x_29);
x_264 = lean_nat_sub(x_263, x_249);
lean_dec(x_263);
x_265 = l_Lean_Expr_getRevArg_x21(x_1, x_264);
lean_dec(x_1);
x_266 = l_Lean_Meta_evalNat(x_265, x_2, x_3, x_4, x_5, x_260);
if (lean_obj_tag(x_266) == 0)
{
lean_object* x_267; 
x_267 = lean_ctor_get(x_266, 0);
lean_inc(x_267);
if (lean_obj_tag(x_267) == 0)
{
uint8_t x_268; 
lean_dec(x_261);
x_268 = !lean_is_exclusive(x_266);
if (x_268 == 0)
{
lean_object* x_269; lean_object* x_270; 
x_269 = lean_ctor_get(x_266, 0);
lean_dec(x_269);
x_270 = lean_box(0);
lean_ctor_set(x_266, 0, x_270);
return x_266;
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; 
x_271 = lean_ctor_get(x_266, 1);
lean_inc(x_271);
lean_dec(x_266);
x_272 = lean_box(0);
x_273 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_273, 0, x_272);
lean_ctor_set(x_273, 1, x_271);
return x_273;
}
}
else
{
uint8_t x_274; 
x_274 = !lean_is_exclusive(x_266);
if (x_274 == 0)
{
lean_object* x_275; uint8_t x_276; 
x_275 = lean_ctor_get(x_266, 0);
lean_dec(x_275);
x_276 = !lean_is_exclusive(x_267);
if (x_276 == 0)
{
lean_object* x_277; lean_object* x_278; 
x_277 = lean_ctor_get(x_267, 0);
x_278 = lean_nat_mul(x_261, x_277);
lean_dec(x_277);
lean_dec(x_261);
lean_ctor_set(x_267, 0, x_278);
return x_266;
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; 
x_279 = lean_ctor_get(x_267, 0);
lean_inc(x_279);
lean_dec(x_267);
x_280 = lean_nat_mul(x_261, x_279);
lean_dec(x_279);
lean_dec(x_261);
x_281 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_281, 0, x_280);
lean_ctor_set(x_266, 0, x_281);
return x_266;
}
}
else
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; 
x_282 = lean_ctor_get(x_266, 1);
lean_inc(x_282);
lean_dec(x_266);
x_283 = lean_ctor_get(x_267, 0);
lean_inc(x_283);
if (lean_is_exclusive(x_267)) {
 lean_ctor_release(x_267, 0);
 x_284 = x_267;
} else {
 lean_dec_ref(x_267);
 x_284 = lean_box(0);
}
x_285 = lean_nat_mul(x_261, x_283);
lean_dec(x_283);
lean_dec(x_261);
if (lean_is_scalar(x_284)) {
 x_286 = lean_alloc_ctor(1, 1, 0);
} else {
 x_286 = x_284;
}
lean_ctor_set(x_286, 0, x_285);
x_287 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_287, 0, x_286);
lean_ctor_set(x_287, 1, x_282);
return x_287;
}
}
}
else
{
uint8_t x_288; 
lean_dec(x_261);
x_288 = !lean_is_exclusive(x_266);
if (x_288 == 0)
{
return x_266;
}
else
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; 
x_289 = lean_ctor_get(x_266, 0);
x_290 = lean_ctor_get(x_266, 1);
lean_inc(x_290);
lean_inc(x_289);
lean_dec(x_266);
x_291 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_291, 0, x_289);
lean_ctor_set(x_291, 1, x_290);
return x_291;
}
}
}
}
else
{
uint8_t x_292; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_292 = !lean_is_exclusive(x_252);
if (x_292 == 0)
{
return x_252;
}
else
{
lean_object* x_293; lean_object* x_294; lean_object* x_295; 
x_293 = lean_ctor_get(x_252, 0);
x_294 = lean_ctor_get(x_252, 1);
lean_inc(x_294);
lean_inc(x_293);
lean_dec(x_252);
x_295 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_295, 0, x_293);
lean_ctor_set(x_295, 1, x_294);
return x_295;
}
}
}
}
}
block_414:
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; uint8_t x_303; 
lean_dec(x_297);
x_298 = lean_box(0);
x_299 = lean_mk_string("Add");
x_300 = lean_name_mk_string(x_298, x_299);
x_301 = lean_mk_string("add");
x_302 = lean_name_mk_string(x_300, x_301);
x_303 = lean_name_eq(x_27, x_302);
lean_dec(x_302);
if (x_303 == 0)
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; uint8_t x_308; 
x_304 = lean_mk_string("Sub");
x_305 = lean_name_mk_string(x_298, x_304);
x_306 = lean_mk_string("sub");
x_307 = lean_name_mk_string(x_305, x_306);
x_308 = lean_name_eq(x_27, x_307);
lean_dec(x_307);
if (x_308 == 0)
{
lean_object* x_309; 
x_309 = lean_box(0);
x_218 = x_309;
goto block_296;
}
else
{
lean_object* x_310; uint8_t x_311; 
x_310 = lean_unsigned_to_nat(4u);
x_311 = lean_nat_dec_eq(x_29, x_310);
if (x_311 == 0)
{
lean_object* x_312; 
x_312 = lean_box(0);
x_218 = x_312;
goto block_296;
}
else
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; 
lean_dec(x_27);
x_313 = lean_unsigned_to_nat(2u);
x_314 = lean_nat_sub(x_29, x_313);
x_315 = lean_unsigned_to_nat(1u);
x_316 = lean_nat_sub(x_314, x_315);
lean_dec(x_314);
x_317 = l_Lean_Expr_getRevArg_x21(x_1, x_316);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_318 = l_Lean_Meta_evalNat(x_317, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_318) == 0)
{
lean_object* x_319; 
x_319 = lean_ctor_get(x_318, 0);
lean_inc(x_319);
if (lean_obj_tag(x_319) == 0)
{
uint8_t x_320; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_320 = !lean_is_exclusive(x_318);
if (x_320 == 0)
{
lean_object* x_321; lean_object* x_322; 
x_321 = lean_ctor_get(x_318, 0);
lean_dec(x_321);
x_322 = lean_box(0);
lean_ctor_set(x_318, 0, x_322);
return x_318;
}
else
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; 
x_323 = lean_ctor_get(x_318, 1);
lean_inc(x_323);
lean_dec(x_318);
x_324 = lean_box(0);
x_325 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_325, 0, x_324);
lean_ctor_set(x_325, 1, x_323);
return x_325;
}
}
else
{
lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; 
x_326 = lean_ctor_get(x_318, 1);
lean_inc(x_326);
lean_dec(x_318);
x_327 = lean_ctor_get(x_319, 0);
lean_inc(x_327);
lean_dec(x_319);
x_328 = lean_unsigned_to_nat(3u);
x_329 = lean_nat_sub(x_29, x_328);
lean_dec(x_29);
x_330 = lean_nat_sub(x_329, x_315);
lean_dec(x_329);
x_331 = l_Lean_Expr_getRevArg_x21(x_1, x_330);
lean_dec(x_1);
x_332 = l_Lean_Meta_evalNat(x_331, x_2, x_3, x_4, x_5, x_326);
if (lean_obj_tag(x_332) == 0)
{
lean_object* x_333; 
x_333 = lean_ctor_get(x_332, 0);
lean_inc(x_333);
if (lean_obj_tag(x_333) == 0)
{
uint8_t x_334; 
lean_dec(x_327);
x_334 = !lean_is_exclusive(x_332);
if (x_334 == 0)
{
lean_object* x_335; lean_object* x_336; 
x_335 = lean_ctor_get(x_332, 0);
lean_dec(x_335);
x_336 = lean_box(0);
lean_ctor_set(x_332, 0, x_336);
return x_332;
}
else
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_337 = lean_ctor_get(x_332, 1);
lean_inc(x_337);
lean_dec(x_332);
x_338 = lean_box(0);
x_339 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_339, 0, x_338);
lean_ctor_set(x_339, 1, x_337);
return x_339;
}
}
else
{
uint8_t x_340; 
x_340 = !lean_is_exclusive(x_332);
if (x_340 == 0)
{
lean_object* x_341; uint8_t x_342; 
x_341 = lean_ctor_get(x_332, 0);
lean_dec(x_341);
x_342 = !lean_is_exclusive(x_333);
if (x_342 == 0)
{
lean_object* x_343; lean_object* x_344; 
x_343 = lean_ctor_get(x_333, 0);
x_344 = lean_nat_sub(x_327, x_343);
lean_dec(x_343);
lean_dec(x_327);
lean_ctor_set(x_333, 0, x_344);
return x_332;
}
else
{
lean_object* x_345; lean_object* x_346; lean_object* x_347; 
x_345 = lean_ctor_get(x_333, 0);
lean_inc(x_345);
lean_dec(x_333);
x_346 = lean_nat_sub(x_327, x_345);
lean_dec(x_345);
lean_dec(x_327);
x_347 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_347, 0, x_346);
lean_ctor_set(x_332, 0, x_347);
return x_332;
}
}
else
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; 
x_348 = lean_ctor_get(x_332, 1);
lean_inc(x_348);
lean_dec(x_332);
x_349 = lean_ctor_get(x_333, 0);
lean_inc(x_349);
if (lean_is_exclusive(x_333)) {
 lean_ctor_release(x_333, 0);
 x_350 = x_333;
} else {
 lean_dec_ref(x_333);
 x_350 = lean_box(0);
}
x_351 = lean_nat_sub(x_327, x_349);
lean_dec(x_349);
lean_dec(x_327);
if (lean_is_scalar(x_350)) {
 x_352 = lean_alloc_ctor(1, 1, 0);
} else {
 x_352 = x_350;
}
lean_ctor_set(x_352, 0, x_351);
x_353 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_353, 0, x_352);
lean_ctor_set(x_353, 1, x_348);
return x_353;
}
}
}
else
{
uint8_t x_354; 
lean_dec(x_327);
x_354 = !lean_is_exclusive(x_332);
if (x_354 == 0)
{
return x_332;
}
else
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; 
x_355 = lean_ctor_get(x_332, 0);
x_356 = lean_ctor_get(x_332, 1);
lean_inc(x_356);
lean_inc(x_355);
lean_dec(x_332);
x_357 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_357, 0, x_355);
lean_ctor_set(x_357, 1, x_356);
return x_357;
}
}
}
}
else
{
uint8_t x_358; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_358 = !lean_is_exclusive(x_318);
if (x_358 == 0)
{
return x_318;
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; 
x_359 = lean_ctor_get(x_318, 0);
x_360 = lean_ctor_get(x_318, 1);
lean_inc(x_360);
lean_inc(x_359);
lean_dec(x_318);
x_361 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_361, 0, x_359);
lean_ctor_set(x_361, 1, x_360);
return x_361;
}
}
}
}
}
else
{
lean_object* x_362; uint8_t x_363; 
x_362 = lean_unsigned_to_nat(4u);
x_363 = lean_nat_dec_eq(x_29, x_362);
if (x_363 == 0)
{
lean_object* x_364; 
x_364 = lean_box(0);
x_218 = x_364;
goto block_296;
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; 
lean_dec(x_27);
x_365 = lean_unsigned_to_nat(2u);
x_366 = lean_nat_sub(x_29, x_365);
x_367 = lean_unsigned_to_nat(1u);
x_368 = lean_nat_sub(x_366, x_367);
lean_dec(x_366);
x_369 = l_Lean_Expr_getRevArg_x21(x_1, x_368);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_370 = l_Lean_Meta_evalNat(x_369, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_370) == 0)
{
lean_object* x_371; 
x_371 = lean_ctor_get(x_370, 0);
lean_inc(x_371);
if (lean_obj_tag(x_371) == 0)
{
uint8_t x_372; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_372 = !lean_is_exclusive(x_370);
if (x_372 == 0)
{
lean_object* x_373; lean_object* x_374; 
x_373 = lean_ctor_get(x_370, 0);
lean_dec(x_373);
x_374 = lean_box(0);
lean_ctor_set(x_370, 0, x_374);
return x_370;
}
else
{
lean_object* x_375; lean_object* x_376; lean_object* x_377; 
x_375 = lean_ctor_get(x_370, 1);
lean_inc(x_375);
lean_dec(x_370);
x_376 = lean_box(0);
x_377 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_377, 0, x_376);
lean_ctor_set(x_377, 1, x_375);
return x_377;
}
}
else
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; 
x_378 = lean_ctor_get(x_370, 1);
lean_inc(x_378);
lean_dec(x_370);
x_379 = lean_ctor_get(x_371, 0);
lean_inc(x_379);
lean_dec(x_371);
x_380 = lean_unsigned_to_nat(3u);
x_381 = lean_nat_sub(x_29, x_380);
lean_dec(x_29);
x_382 = lean_nat_sub(x_381, x_367);
lean_dec(x_381);
x_383 = l_Lean_Expr_getRevArg_x21(x_1, x_382);
lean_dec(x_1);
x_384 = l_Lean_Meta_evalNat(x_383, x_2, x_3, x_4, x_5, x_378);
if (lean_obj_tag(x_384) == 0)
{
lean_object* x_385; 
x_385 = lean_ctor_get(x_384, 0);
lean_inc(x_385);
if (lean_obj_tag(x_385) == 0)
{
uint8_t x_386; 
lean_dec(x_379);
x_386 = !lean_is_exclusive(x_384);
if (x_386 == 0)
{
lean_object* x_387; lean_object* x_388; 
x_387 = lean_ctor_get(x_384, 0);
lean_dec(x_387);
x_388 = lean_box(0);
lean_ctor_set(x_384, 0, x_388);
return x_384;
}
else
{
lean_object* x_389; lean_object* x_390; lean_object* x_391; 
x_389 = lean_ctor_get(x_384, 1);
lean_inc(x_389);
lean_dec(x_384);
x_390 = lean_box(0);
x_391 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_391, 0, x_390);
lean_ctor_set(x_391, 1, x_389);
return x_391;
}
}
else
{
uint8_t x_392; 
x_392 = !lean_is_exclusive(x_384);
if (x_392 == 0)
{
lean_object* x_393; uint8_t x_394; 
x_393 = lean_ctor_get(x_384, 0);
lean_dec(x_393);
x_394 = !lean_is_exclusive(x_385);
if (x_394 == 0)
{
lean_object* x_395; lean_object* x_396; 
x_395 = lean_ctor_get(x_385, 0);
x_396 = lean_nat_add(x_379, x_395);
lean_dec(x_395);
lean_dec(x_379);
lean_ctor_set(x_385, 0, x_396);
return x_384;
}
else
{
lean_object* x_397; lean_object* x_398; lean_object* x_399; 
x_397 = lean_ctor_get(x_385, 0);
lean_inc(x_397);
lean_dec(x_385);
x_398 = lean_nat_add(x_379, x_397);
lean_dec(x_397);
lean_dec(x_379);
x_399 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_399, 0, x_398);
lean_ctor_set(x_384, 0, x_399);
return x_384;
}
}
else
{
lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; 
x_400 = lean_ctor_get(x_384, 1);
lean_inc(x_400);
lean_dec(x_384);
x_401 = lean_ctor_get(x_385, 0);
lean_inc(x_401);
if (lean_is_exclusive(x_385)) {
 lean_ctor_release(x_385, 0);
 x_402 = x_385;
} else {
 lean_dec_ref(x_385);
 x_402 = lean_box(0);
}
x_403 = lean_nat_add(x_379, x_401);
lean_dec(x_401);
lean_dec(x_379);
if (lean_is_scalar(x_402)) {
 x_404 = lean_alloc_ctor(1, 1, 0);
} else {
 x_404 = x_402;
}
lean_ctor_set(x_404, 0, x_403);
x_405 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_405, 0, x_404);
lean_ctor_set(x_405, 1, x_400);
return x_405;
}
}
}
else
{
uint8_t x_406; 
lean_dec(x_379);
x_406 = !lean_is_exclusive(x_384);
if (x_406 == 0)
{
return x_384;
}
else
{
lean_object* x_407; lean_object* x_408; lean_object* x_409; 
x_407 = lean_ctor_get(x_384, 0);
x_408 = lean_ctor_get(x_384, 1);
lean_inc(x_408);
lean_inc(x_407);
lean_dec(x_384);
x_409 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_409, 0, x_407);
lean_ctor_set(x_409, 1, x_408);
return x_409;
}
}
}
}
else
{
uint8_t x_410; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_410 = !lean_is_exclusive(x_370);
if (x_410 == 0)
{
return x_370;
}
else
{
lean_object* x_411; lean_object* x_412; lean_object* x_413; 
x_411 = lean_ctor_get(x_370, 0);
x_412 = lean_ctor_get(x_370, 1);
lean_inc(x_412);
lean_inc(x_411);
lean_dec(x_370);
x_413 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_413, 0, x_411);
lean_ctor_set(x_413, 1, x_412);
return x_413;
}
}
}
}
}
block_463:
{
lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; 
lean_dec(x_415);
x_416 = lean_nat_sub(x_29, x_28);
x_417 = lean_unsigned_to_nat(1u);
x_418 = lean_nat_sub(x_416, x_417);
lean_dec(x_416);
x_419 = l_Lean_Expr_getRevArg_x21(x_1, x_418);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_420 = l_Lean_Meta_evalNat(x_419, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_420) == 0)
{
lean_object* x_421; 
x_421 = lean_ctor_get(x_420, 0);
lean_inc(x_421);
if (lean_obj_tag(x_421) == 0)
{
uint8_t x_422; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_422 = !lean_is_exclusive(x_420);
if (x_422 == 0)
{
lean_object* x_423; lean_object* x_424; 
x_423 = lean_ctor_get(x_420, 0);
lean_dec(x_423);
x_424 = lean_box(0);
lean_ctor_set(x_420, 0, x_424);
return x_420;
}
else
{
lean_object* x_425; lean_object* x_426; lean_object* x_427; 
x_425 = lean_ctor_get(x_420, 1);
lean_inc(x_425);
lean_dec(x_420);
x_426 = lean_box(0);
x_427 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_427, 0, x_426);
lean_ctor_set(x_427, 1, x_425);
return x_427;
}
}
else
{
lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; 
x_428 = lean_ctor_get(x_420, 1);
lean_inc(x_428);
lean_dec(x_420);
x_429 = lean_ctor_get(x_421, 0);
lean_inc(x_429);
lean_dec(x_421);
x_430 = lean_nat_sub(x_29, x_417);
lean_dec(x_29);
x_431 = lean_nat_sub(x_430, x_417);
lean_dec(x_430);
x_432 = l_Lean_Expr_getRevArg_x21(x_1, x_431);
lean_dec(x_1);
x_433 = l_Lean_Meta_evalNat(x_432, x_2, x_3, x_4, x_5, x_428);
if (lean_obj_tag(x_433) == 0)
{
lean_object* x_434; 
x_434 = lean_ctor_get(x_433, 0);
lean_inc(x_434);
if (lean_obj_tag(x_434) == 0)
{
uint8_t x_435; 
lean_dec(x_429);
x_435 = !lean_is_exclusive(x_433);
if (x_435 == 0)
{
lean_object* x_436; lean_object* x_437; 
x_436 = lean_ctor_get(x_433, 0);
lean_dec(x_436);
x_437 = lean_box(0);
lean_ctor_set(x_433, 0, x_437);
return x_433;
}
else
{
lean_object* x_438; lean_object* x_439; lean_object* x_440; 
x_438 = lean_ctor_get(x_433, 1);
lean_inc(x_438);
lean_dec(x_433);
x_439 = lean_box(0);
x_440 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_440, 0, x_439);
lean_ctor_set(x_440, 1, x_438);
return x_440;
}
}
else
{
uint8_t x_441; 
x_441 = !lean_is_exclusive(x_433);
if (x_441 == 0)
{
lean_object* x_442; uint8_t x_443; 
x_442 = lean_ctor_get(x_433, 0);
lean_dec(x_442);
x_443 = !lean_is_exclusive(x_434);
if (x_443 == 0)
{
lean_object* x_444; lean_object* x_445; 
x_444 = lean_ctor_get(x_434, 0);
x_445 = lean_nat_add(x_429, x_444);
lean_dec(x_444);
lean_dec(x_429);
lean_ctor_set(x_434, 0, x_445);
return x_433;
}
else
{
lean_object* x_446; lean_object* x_447; lean_object* x_448; 
x_446 = lean_ctor_get(x_434, 0);
lean_inc(x_446);
lean_dec(x_434);
x_447 = lean_nat_add(x_429, x_446);
lean_dec(x_446);
lean_dec(x_429);
x_448 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_448, 0, x_447);
lean_ctor_set(x_433, 0, x_448);
return x_433;
}
}
else
{
lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; 
x_449 = lean_ctor_get(x_433, 1);
lean_inc(x_449);
lean_dec(x_433);
x_450 = lean_ctor_get(x_434, 0);
lean_inc(x_450);
if (lean_is_exclusive(x_434)) {
 lean_ctor_release(x_434, 0);
 x_451 = x_434;
} else {
 lean_dec_ref(x_434);
 x_451 = lean_box(0);
}
x_452 = lean_nat_add(x_429, x_450);
lean_dec(x_450);
lean_dec(x_429);
if (lean_is_scalar(x_451)) {
 x_453 = lean_alloc_ctor(1, 1, 0);
} else {
 x_453 = x_451;
}
lean_ctor_set(x_453, 0, x_452);
x_454 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_454, 0, x_453);
lean_ctor_set(x_454, 1, x_449);
return x_454;
}
}
}
else
{
uint8_t x_455; 
lean_dec(x_429);
x_455 = !lean_is_exclusive(x_433);
if (x_455 == 0)
{
return x_433;
}
else
{
lean_object* x_456; lean_object* x_457; lean_object* x_458; 
x_456 = lean_ctor_get(x_433, 0);
x_457 = lean_ctor_get(x_433, 1);
lean_inc(x_457);
lean_inc(x_456);
lean_dec(x_433);
x_458 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_458, 0, x_456);
lean_ctor_set(x_458, 1, x_457);
return x_458;
}
}
}
}
else
{
uint8_t x_459; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_459 = !lean_is_exclusive(x_420);
if (x_459 == 0)
{
return x_420;
}
else
{
lean_object* x_460; lean_object* x_461; lean_object* x_462; 
x_460 = lean_ctor_get(x_420, 0);
x_461 = lean_ctor_get(x_420, 1);
lean_inc(x_461);
lean_inc(x_460);
lean_dec(x_420);
x_462 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_462, 0, x_460);
lean_ctor_set(x_462, 1, x_461);
return x_462;
}
}
}
block_575:
{
lean_object* x_468; lean_object* x_469; uint8_t x_470; 
lean_dec(x_467);
x_468 = lean_mk_string("sub");
lean_inc(x_466);
x_469 = lean_name_mk_string(x_466, x_468);
x_470 = lean_name_eq(x_27, x_469);
lean_dec(x_469);
if (x_470 == 0)
{
lean_object* x_471; lean_object* x_472; uint8_t x_473; 
x_471 = lean_mk_string("mul");
x_472 = lean_name_mk_string(x_466, x_471);
x_473 = lean_name_eq(x_27, x_472);
lean_dec(x_472);
if (x_473 == 0)
{
lean_object* x_474; 
x_474 = lean_box(0);
x_297 = x_474;
goto block_414;
}
else
{
lean_object* x_475; uint8_t x_476; 
x_475 = lean_unsigned_to_nat(2u);
x_476 = lean_nat_dec_eq(x_29, x_475);
if (x_476 == 0)
{
lean_object* x_477; 
x_477 = lean_box(0);
x_297 = x_477;
goto block_414;
}
else
{
lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; 
lean_dec(x_27);
x_478 = lean_nat_sub(x_29, x_28);
x_479 = lean_unsigned_to_nat(1u);
x_480 = lean_nat_sub(x_478, x_479);
lean_dec(x_478);
x_481 = l_Lean_Expr_getRevArg_x21(x_1, x_480);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_482 = l_Lean_Meta_evalNat(x_481, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_482) == 0)
{
lean_object* x_483; 
x_483 = lean_ctor_get(x_482, 0);
lean_inc(x_483);
if (lean_obj_tag(x_483) == 0)
{
uint8_t x_484; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_484 = !lean_is_exclusive(x_482);
if (x_484 == 0)
{
lean_object* x_485; lean_object* x_486; 
x_485 = lean_ctor_get(x_482, 0);
lean_dec(x_485);
x_486 = lean_box(0);
lean_ctor_set(x_482, 0, x_486);
return x_482;
}
else
{
lean_object* x_487; lean_object* x_488; lean_object* x_489; 
x_487 = lean_ctor_get(x_482, 1);
lean_inc(x_487);
lean_dec(x_482);
x_488 = lean_box(0);
x_489 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_489, 0, x_488);
lean_ctor_set(x_489, 1, x_487);
return x_489;
}
}
else
{
lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; 
x_490 = lean_ctor_get(x_482, 1);
lean_inc(x_490);
lean_dec(x_482);
x_491 = lean_ctor_get(x_483, 0);
lean_inc(x_491);
lean_dec(x_483);
x_492 = lean_nat_sub(x_29, x_479);
lean_dec(x_29);
x_493 = lean_nat_sub(x_492, x_479);
lean_dec(x_492);
x_494 = l_Lean_Expr_getRevArg_x21(x_1, x_493);
lean_dec(x_1);
x_495 = l_Lean_Meta_evalNat(x_494, x_2, x_3, x_4, x_5, x_490);
if (lean_obj_tag(x_495) == 0)
{
lean_object* x_496; 
x_496 = lean_ctor_get(x_495, 0);
lean_inc(x_496);
if (lean_obj_tag(x_496) == 0)
{
uint8_t x_497; 
lean_dec(x_491);
x_497 = !lean_is_exclusive(x_495);
if (x_497 == 0)
{
lean_object* x_498; lean_object* x_499; 
x_498 = lean_ctor_get(x_495, 0);
lean_dec(x_498);
x_499 = lean_box(0);
lean_ctor_set(x_495, 0, x_499);
return x_495;
}
else
{
lean_object* x_500; lean_object* x_501; lean_object* x_502; 
x_500 = lean_ctor_get(x_495, 1);
lean_inc(x_500);
lean_dec(x_495);
x_501 = lean_box(0);
x_502 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_502, 0, x_501);
lean_ctor_set(x_502, 1, x_500);
return x_502;
}
}
else
{
uint8_t x_503; 
x_503 = !lean_is_exclusive(x_495);
if (x_503 == 0)
{
lean_object* x_504; uint8_t x_505; 
x_504 = lean_ctor_get(x_495, 0);
lean_dec(x_504);
x_505 = !lean_is_exclusive(x_496);
if (x_505 == 0)
{
lean_object* x_506; lean_object* x_507; 
x_506 = lean_ctor_get(x_496, 0);
x_507 = lean_nat_mul(x_491, x_506);
lean_dec(x_506);
lean_dec(x_491);
lean_ctor_set(x_496, 0, x_507);
return x_495;
}
else
{
lean_object* x_508; lean_object* x_509; lean_object* x_510; 
x_508 = lean_ctor_get(x_496, 0);
lean_inc(x_508);
lean_dec(x_496);
x_509 = lean_nat_mul(x_491, x_508);
lean_dec(x_508);
lean_dec(x_491);
x_510 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_510, 0, x_509);
lean_ctor_set(x_495, 0, x_510);
return x_495;
}
}
else
{
lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; 
x_511 = lean_ctor_get(x_495, 1);
lean_inc(x_511);
lean_dec(x_495);
x_512 = lean_ctor_get(x_496, 0);
lean_inc(x_512);
if (lean_is_exclusive(x_496)) {
 lean_ctor_release(x_496, 0);
 x_513 = x_496;
} else {
 lean_dec_ref(x_496);
 x_513 = lean_box(0);
}
x_514 = lean_nat_mul(x_491, x_512);
lean_dec(x_512);
lean_dec(x_491);
if (lean_is_scalar(x_513)) {
 x_515 = lean_alloc_ctor(1, 1, 0);
} else {
 x_515 = x_513;
}
lean_ctor_set(x_515, 0, x_514);
x_516 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_516, 0, x_515);
lean_ctor_set(x_516, 1, x_511);
return x_516;
}
}
}
else
{
uint8_t x_517; 
lean_dec(x_491);
x_517 = !lean_is_exclusive(x_495);
if (x_517 == 0)
{
return x_495;
}
else
{
lean_object* x_518; lean_object* x_519; lean_object* x_520; 
x_518 = lean_ctor_get(x_495, 0);
x_519 = lean_ctor_get(x_495, 1);
lean_inc(x_519);
lean_inc(x_518);
lean_dec(x_495);
x_520 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_520, 0, x_518);
lean_ctor_set(x_520, 1, x_519);
return x_520;
}
}
}
}
else
{
uint8_t x_521; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_521 = !lean_is_exclusive(x_482);
if (x_521 == 0)
{
return x_482;
}
else
{
lean_object* x_522; lean_object* x_523; lean_object* x_524; 
x_522 = lean_ctor_get(x_482, 0);
x_523 = lean_ctor_get(x_482, 1);
lean_inc(x_523);
lean_inc(x_522);
lean_dec(x_482);
x_524 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_524, 0, x_522);
lean_ctor_set(x_524, 1, x_523);
return x_524;
}
}
}
}
}
else
{
lean_object* x_525; uint8_t x_526; 
lean_dec(x_466);
x_525 = lean_unsigned_to_nat(2u);
x_526 = lean_nat_dec_eq(x_29, x_525);
if (x_526 == 0)
{
lean_object* x_527; 
x_527 = lean_box(0);
x_297 = x_527;
goto block_414;
}
else
{
lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; 
lean_dec(x_27);
x_528 = lean_nat_sub(x_29, x_28);
x_529 = lean_unsigned_to_nat(1u);
x_530 = lean_nat_sub(x_528, x_529);
lean_dec(x_528);
x_531 = l_Lean_Expr_getRevArg_x21(x_1, x_530);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_532 = l_Lean_Meta_evalNat(x_531, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_532) == 0)
{
lean_object* x_533; 
x_533 = lean_ctor_get(x_532, 0);
lean_inc(x_533);
if (lean_obj_tag(x_533) == 0)
{
uint8_t x_534; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_534 = !lean_is_exclusive(x_532);
if (x_534 == 0)
{
lean_object* x_535; lean_object* x_536; 
x_535 = lean_ctor_get(x_532, 0);
lean_dec(x_535);
x_536 = lean_box(0);
lean_ctor_set(x_532, 0, x_536);
return x_532;
}
else
{
lean_object* x_537; lean_object* x_538; lean_object* x_539; 
x_537 = lean_ctor_get(x_532, 1);
lean_inc(x_537);
lean_dec(x_532);
x_538 = lean_box(0);
x_539 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_539, 0, x_538);
lean_ctor_set(x_539, 1, x_537);
return x_539;
}
}
else
{
lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; 
x_540 = lean_ctor_get(x_532, 1);
lean_inc(x_540);
lean_dec(x_532);
x_541 = lean_ctor_get(x_533, 0);
lean_inc(x_541);
lean_dec(x_533);
x_542 = lean_nat_sub(x_29, x_529);
lean_dec(x_29);
x_543 = lean_nat_sub(x_542, x_529);
lean_dec(x_542);
x_544 = l_Lean_Expr_getRevArg_x21(x_1, x_543);
lean_dec(x_1);
x_545 = l_Lean_Meta_evalNat(x_544, x_2, x_3, x_4, x_5, x_540);
if (lean_obj_tag(x_545) == 0)
{
lean_object* x_546; 
x_546 = lean_ctor_get(x_545, 0);
lean_inc(x_546);
if (lean_obj_tag(x_546) == 0)
{
uint8_t x_547; 
lean_dec(x_541);
x_547 = !lean_is_exclusive(x_545);
if (x_547 == 0)
{
lean_object* x_548; lean_object* x_549; 
x_548 = lean_ctor_get(x_545, 0);
lean_dec(x_548);
x_549 = lean_box(0);
lean_ctor_set(x_545, 0, x_549);
return x_545;
}
else
{
lean_object* x_550; lean_object* x_551; lean_object* x_552; 
x_550 = lean_ctor_get(x_545, 1);
lean_inc(x_550);
lean_dec(x_545);
x_551 = lean_box(0);
x_552 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_552, 0, x_551);
lean_ctor_set(x_552, 1, x_550);
return x_552;
}
}
else
{
uint8_t x_553; 
x_553 = !lean_is_exclusive(x_545);
if (x_553 == 0)
{
lean_object* x_554; uint8_t x_555; 
x_554 = lean_ctor_get(x_545, 0);
lean_dec(x_554);
x_555 = !lean_is_exclusive(x_546);
if (x_555 == 0)
{
lean_object* x_556; lean_object* x_557; 
x_556 = lean_ctor_get(x_546, 0);
x_557 = lean_nat_sub(x_541, x_556);
lean_dec(x_556);
lean_dec(x_541);
lean_ctor_set(x_546, 0, x_557);
return x_545;
}
else
{
lean_object* x_558; lean_object* x_559; lean_object* x_560; 
x_558 = lean_ctor_get(x_546, 0);
lean_inc(x_558);
lean_dec(x_546);
x_559 = lean_nat_sub(x_541, x_558);
lean_dec(x_558);
lean_dec(x_541);
x_560 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_560, 0, x_559);
lean_ctor_set(x_545, 0, x_560);
return x_545;
}
}
else
{
lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; 
x_561 = lean_ctor_get(x_545, 1);
lean_inc(x_561);
lean_dec(x_545);
x_562 = lean_ctor_get(x_546, 0);
lean_inc(x_562);
if (lean_is_exclusive(x_546)) {
 lean_ctor_release(x_546, 0);
 x_563 = x_546;
} else {
 lean_dec_ref(x_546);
 x_563 = lean_box(0);
}
x_564 = lean_nat_sub(x_541, x_562);
lean_dec(x_562);
lean_dec(x_541);
if (lean_is_scalar(x_563)) {
 x_565 = lean_alloc_ctor(1, 1, 0);
} else {
 x_565 = x_563;
}
lean_ctor_set(x_565, 0, x_564);
x_566 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_566, 0, x_565);
lean_ctor_set(x_566, 1, x_561);
return x_566;
}
}
}
else
{
uint8_t x_567; 
lean_dec(x_541);
x_567 = !lean_is_exclusive(x_545);
if (x_567 == 0)
{
return x_545;
}
else
{
lean_object* x_568; lean_object* x_569; lean_object* x_570; 
x_568 = lean_ctor_get(x_545, 0);
x_569 = lean_ctor_get(x_545, 1);
lean_inc(x_569);
lean_inc(x_568);
lean_dec(x_545);
x_570 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_570, 0, x_568);
lean_ctor_set(x_570, 1, x_569);
return x_570;
}
}
}
}
else
{
uint8_t x_571; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_571 = !lean_is_exclusive(x_532);
if (x_571 == 0)
{
return x_532;
}
else
{
lean_object* x_572; lean_object* x_573; lean_object* x_574; 
x_572 = lean_ctor_get(x_532, 0);
x_573 = lean_ctor_get(x_532, 1);
lean_inc(x_573);
lean_inc(x_572);
lean_dec(x_532);
x_574 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_574, 0, x_572);
lean_ctor_set(x_574, 1, x_573);
return x_574;
}
}
}
}
}
}
default: 
{
lean_object* x_626; lean_object* x_627; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_626 = lean_box(0);
x_627 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_627, 0, x_626);
lean_ctor_set(x_627, 1, x_6);
return x_627;
}
}
}
}
lean_object* l_Lean_Meta_evalNat(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_evalNat_visit(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
case 4:
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
if (lean_obj_tag(x_8) == 1)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_mk_string("Nat");
x_14 = lean_string_dec_eq(x_12, x_13);
lean_dec(x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_11);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_6);
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_mk_string("zero");
x_18 = lean_string_dec_eq(x_11, x_17);
lean_dec(x_17);
lean_dec(x_11);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_6);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_6);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_6);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_9);
lean_dec(x_8);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_6);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_8);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_6);
return x_29;
}
}
case 5:
{
lean_object* x_30; 
x_30 = l_Lean_Meta_evalNat_visit(x_1, x_2, x_3, x_4, x_5, x_6);
return x_30;
}
case 9:
{
lean_object* x_31; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = lean_ctor_get(x_1, 0);
lean_inc(x_31);
lean_dec(x_1);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_6);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_31);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_6);
return x_36;
}
}
case 10:
{
lean_object* x_37; 
x_37 = lean_ctor_get(x_1, 1);
lean_inc(x_37);
lean_dec(x_1);
x_1 = x_37;
goto _start;
}
default: 
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_6);
return x_40;
}
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__2___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_8 = lean_box_uint64(x_7);
x_9 = lean_box(x_2);
x_10 = lean_apply_5(x_3, x_1, x_5, x_6, x_8, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
x_11 = lean_box(x_2);
x_12 = lean_apply_2(x_4, x_1, x_11);
return x_12;
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__2___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux_match__2___rarg(x_1, x_5, x_3, x_4);
return x_6;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = l_Lean_Expr_getAppFn(x_1);
switch (lean_obj_tag(x_9)) {
case 2:
{
lean_object* x_10; 
lean_dec(x_9);
lean_dec(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = l_Lean_Meta_instantiateMVars(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = l_Lean_Expr_getAppFn(x_12);
x_15 = l_Lean_Expr_isMVar(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_free_object(x_10);
x_1 = x_12;
x_7 = x_13;
goto _start;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_17 = lean_box(0);
lean_ctor_set(x_10, 0, x_17);
return x_10;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_10, 0);
x_19 = lean_ctor_get(x_10, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_10);
x_20 = l_Lean_Expr_getAppFn(x_18);
x_21 = l_Lean_Expr_isMVar(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
x_1 = x_18;
x_7 = x_19;
goto _start;
}
else
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_19);
return x_24;
}
}
}
else
{
uint8_t x_25; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_25 = !lean_is_exclusive(x_10);
if (x_25 == 0)
{
return x_10;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_10, 0);
x_27 = lean_ctor_get(x_10, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_10);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
case 4:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_117; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_275; lean_object* x_276; uint8_t x_277; 
x_29 = lean_ctor_get(x_9, 0);
lean_inc(x_29);
lean_dec(x_9);
x_30 = lean_unsigned_to_nat(0u);
x_31 = l_Lean_Expr_getAppNumArgsAux(x_1, x_30);
x_184 = lean_box(0);
x_185 = lean_mk_string("Nat");
x_186 = lean_name_mk_string(x_184, x_185);
x_275 = lean_mk_string("succ");
lean_inc(x_186);
x_276 = lean_name_mk_string(x_186, x_275);
x_277 = lean_name_eq(x_29, x_276);
lean_dec(x_276);
if (x_277 == 0)
{
lean_object* x_278; 
lean_dec(x_8);
x_278 = lean_box(0);
x_187 = x_278;
goto block_274;
}
else
{
lean_object* x_279; uint8_t x_280; 
x_279 = lean_unsigned_to_nat(1u);
x_280 = lean_nat_dec_eq(x_31, x_279);
if (x_280 == 0)
{
lean_object* x_281; 
lean_dec(x_8);
x_281 = lean_box(0);
x_187 = x_281;
goto block_274;
}
else
{
uint8_t x_282; lean_object* x_283; 
lean_dec(x_186);
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_1);
x_282 = 0;
x_283 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_8, x_282, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_283) == 0)
{
lean_object* x_284; 
x_284 = lean_ctor_get(x_283, 0);
lean_inc(x_284);
if (lean_obj_tag(x_284) == 0)
{
uint8_t x_285; 
x_285 = !lean_is_exclusive(x_283);
if (x_285 == 0)
{
lean_object* x_286; lean_object* x_287; 
x_286 = lean_ctor_get(x_283, 0);
lean_dec(x_286);
x_287 = lean_box(0);
lean_ctor_set(x_283, 0, x_287);
return x_283;
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_288 = lean_ctor_get(x_283, 1);
lean_inc(x_288);
lean_dec(x_283);
x_289 = lean_box(0);
x_290 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_288);
return x_290;
}
}
else
{
uint8_t x_291; 
x_291 = !lean_is_exclusive(x_284);
if (x_291 == 0)
{
uint8_t x_292; 
x_292 = !lean_is_exclusive(x_283);
if (x_292 == 0)
{
lean_object* x_293; lean_object* x_294; uint8_t x_295; 
x_293 = lean_ctor_get(x_284, 0);
x_294 = lean_ctor_get(x_283, 0);
lean_dec(x_294);
x_295 = !lean_is_exclusive(x_293);
if (x_295 == 0)
{
lean_object* x_296; lean_object* x_297; 
x_296 = lean_ctor_get(x_293, 1);
x_297 = lean_nat_add(x_296, x_279);
lean_dec(x_296);
lean_ctor_set(x_293, 1, x_297);
return x_283;
}
else
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; 
x_298 = lean_ctor_get(x_293, 0);
x_299 = lean_ctor_get(x_293, 1);
lean_inc(x_299);
lean_inc(x_298);
lean_dec(x_293);
x_300 = lean_nat_add(x_299, x_279);
lean_dec(x_299);
x_301 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_301, 0, x_298);
lean_ctor_set(x_301, 1, x_300);
lean_ctor_set(x_284, 0, x_301);
return x_283;
}
}
else
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
x_302 = lean_ctor_get(x_284, 0);
x_303 = lean_ctor_get(x_283, 1);
lean_inc(x_303);
lean_dec(x_283);
x_304 = lean_ctor_get(x_302, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_302, 1);
lean_inc(x_305);
if (lean_is_exclusive(x_302)) {
 lean_ctor_release(x_302, 0);
 lean_ctor_release(x_302, 1);
 x_306 = x_302;
} else {
 lean_dec_ref(x_302);
 x_306 = lean_box(0);
}
x_307 = lean_nat_add(x_305, x_279);
lean_dec(x_305);
if (lean_is_scalar(x_306)) {
 x_308 = lean_alloc_ctor(0, 2, 0);
} else {
 x_308 = x_306;
}
lean_ctor_set(x_308, 0, x_304);
lean_ctor_set(x_308, 1, x_307);
lean_ctor_set(x_284, 0, x_308);
x_309 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_309, 0, x_284);
lean_ctor_set(x_309, 1, x_303);
return x_309;
}
}
else
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; 
x_310 = lean_ctor_get(x_284, 0);
lean_inc(x_310);
lean_dec(x_284);
x_311 = lean_ctor_get(x_283, 1);
lean_inc(x_311);
if (lean_is_exclusive(x_283)) {
 lean_ctor_release(x_283, 0);
 lean_ctor_release(x_283, 1);
 x_312 = x_283;
} else {
 lean_dec_ref(x_283);
 x_312 = lean_box(0);
}
x_313 = lean_ctor_get(x_310, 0);
lean_inc(x_313);
x_314 = lean_ctor_get(x_310, 1);
lean_inc(x_314);
if (lean_is_exclusive(x_310)) {
 lean_ctor_release(x_310, 0);
 lean_ctor_release(x_310, 1);
 x_315 = x_310;
} else {
 lean_dec_ref(x_310);
 x_315 = lean_box(0);
}
x_316 = lean_nat_add(x_314, x_279);
lean_dec(x_314);
if (lean_is_scalar(x_315)) {
 x_317 = lean_alloc_ctor(0, 2, 0);
} else {
 x_317 = x_315;
}
lean_ctor_set(x_317, 0, x_313);
lean_ctor_set(x_317, 1, x_316);
x_318 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_318, 0, x_317);
if (lean_is_scalar(x_312)) {
 x_319 = lean_alloc_ctor(0, 2, 0);
} else {
 x_319 = x_312;
}
lean_ctor_set(x_319, 0, x_318);
lean_ctor_set(x_319, 1, x_311);
return x_319;
}
}
}
else
{
uint8_t x_320; 
x_320 = !lean_is_exclusive(x_283);
if (x_320 == 0)
{
return x_283;
}
else
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; 
x_321 = lean_ctor_get(x_283, 0);
x_322 = lean_ctor_get(x_283, 1);
lean_inc(x_322);
lean_inc(x_321);
lean_dec(x_283);
x_323 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_323, 0, x_321);
lean_ctor_set(x_323, 1, x_322);
return x_323;
}
}
}
}
block_116:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_dec(x_32);
x_33 = lean_box(0);
x_34 = lean_mk_string("HAdd");
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = lean_mk_string("hAdd");
x_37 = lean_name_mk_string(x_35, x_36);
x_38 = lean_name_eq(x_29, x_37);
lean_dec(x_37);
lean_dec(x_29);
if (x_38 == 0)
{
lean_dec(x_31);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (x_2 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_1);
lean_ctor_set(x_39, 1, x_30);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_7);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_1);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_7);
return x_43;
}
}
else
{
lean_object* x_44; uint8_t x_45; 
x_44 = lean_unsigned_to_nat(6u);
x_45 = lean_nat_dec_eq(x_31, x_44);
if (x_45 == 0)
{
lean_dec(x_31);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (x_2 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_1);
lean_ctor_set(x_46, 1, x_30);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_7);
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_1);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_7);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_51 = lean_unsigned_to_nat(5u);
x_52 = lean_nat_sub(x_31, x_51);
x_53 = lean_unsigned_to_nat(1u);
x_54 = lean_nat_sub(x_52, x_53);
lean_dec(x_52);
x_55 = l_Lean_Expr_getRevArg_x21(x_1, x_54);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_56 = l_Lean_Meta_evalNat(x_55, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
if (lean_obj_tag(x_57) == 0)
{
uint8_t x_58; 
lean_dec(x_31);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_56);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_56, 0);
lean_dec(x_59);
x_60 = lean_box(0);
lean_ctor_set(x_56, 0, x_60);
return x_56;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_56, 1);
lean_inc(x_61);
lean_dec(x_56);
x_62 = lean_box(0);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; 
x_64 = lean_ctor_get(x_56, 1);
lean_inc(x_64);
lean_dec(x_56);
x_65 = lean_ctor_get(x_57, 0);
lean_inc(x_65);
lean_dec(x_57);
x_66 = lean_unsigned_to_nat(4u);
x_67 = lean_nat_sub(x_31, x_66);
lean_dec(x_31);
x_68 = lean_nat_sub(x_67, x_53);
lean_dec(x_67);
x_69 = l_Lean_Expr_getRevArg_x21(x_1, x_68);
lean_dec(x_1);
x_70 = 0;
x_71 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_69, x_70, x_3, x_4, x_5, x_6, x_64);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; 
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
if (lean_obj_tag(x_72) == 0)
{
uint8_t x_73; 
lean_dec(x_65);
x_73 = !lean_is_exclusive(x_71);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; 
x_74 = lean_ctor_get(x_71, 0);
lean_dec(x_74);
x_75 = lean_box(0);
lean_ctor_set(x_71, 0, x_75);
return x_71;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_71, 1);
lean_inc(x_76);
lean_dec(x_71);
x_77 = lean_box(0);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
}
else
{
uint8_t x_79; 
x_79 = !lean_is_exclusive(x_72);
if (x_79 == 0)
{
uint8_t x_80; 
x_80 = !lean_is_exclusive(x_71);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_81 = lean_ctor_get(x_72, 0);
x_82 = lean_ctor_get(x_71, 0);
lean_dec(x_82);
x_83 = !lean_is_exclusive(x_81);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_81, 1);
x_85 = lean_nat_add(x_84, x_65);
lean_dec(x_65);
lean_dec(x_84);
lean_ctor_set(x_81, 1, x_85);
return x_71;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_81, 0);
x_87 = lean_ctor_get(x_81, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_81);
x_88 = lean_nat_add(x_87, x_65);
lean_dec(x_65);
lean_dec(x_87);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_88);
lean_ctor_set(x_72, 0, x_89);
return x_71;
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_90 = lean_ctor_get(x_72, 0);
x_91 = lean_ctor_get(x_71, 1);
lean_inc(x_91);
lean_dec(x_71);
x_92 = lean_ctor_get(x_90, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_90, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_94 = x_90;
} else {
 lean_dec_ref(x_90);
 x_94 = lean_box(0);
}
x_95 = lean_nat_add(x_93, x_65);
lean_dec(x_65);
lean_dec(x_93);
if (lean_is_scalar(x_94)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_94;
}
lean_ctor_set(x_96, 0, x_92);
lean_ctor_set(x_96, 1, x_95);
lean_ctor_set(x_72, 0, x_96);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_72);
lean_ctor_set(x_97, 1, x_91);
return x_97;
}
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_98 = lean_ctor_get(x_72, 0);
lean_inc(x_98);
lean_dec(x_72);
x_99 = lean_ctor_get(x_71, 1);
lean_inc(x_99);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_100 = x_71;
} else {
 lean_dec_ref(x_71);
 x_100 = lean_box(0);
}
x_101 = lean_ctor_get(x_98, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_98, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_103 = x_98;
} else {
 lean_dec_ref(x_98);
 x_103 = lean_box(0);
}
x_104 = lean_nat_add(x_102, x_65);
lean_dec(x_65);
lean_dec(x_102);
if (lean_is_scalar(x_103)) {
 x_105 = lean_alloc_ctor(0, 2, 0);
} else {
 x_105 = x_103;
}
lean_ctor_set(x_105, 0, x_101);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_106, 0, x_105);
if (lean_is_scalar(x_100)) {
 x_107 = lean_alloc_ctor(0, 2, 0);
} else {
 x_107 = x_100;
}
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_99);
return x_107;
}
}
}
else
{
uint8_t x_108; 
lean_dec(x_65);
x_108 = !lean_is_exclusive(x_71);
if (x_108 == 0)
{
return x_71;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_71, 0);
x_110 = lean_ctor_get(x_71, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_71);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
}
else
{
uint8_t x_112; 
lean_dec(x_31);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_112 = !lean_is_exclusive(x_56);
if (x_112 == 0)
{
return x_56;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_56, 0);
x_114 = lean_ctor_get(x_56, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_56);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
}
}
}
block_183:
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_117);
x_118 = lean_unsigned_to_nat(3u);
x_119 = lean_nat_sub(x_31, x_118);
x_120 = lean_unsigned_to_nat(1u);
x_121 = lean_nat_sub(x_119, x_120);
lean_dec(x_119);
x_122 = l_Lean_Expr_getRevArg_x21(x_1, x_121);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_123 = l_Lean_Meta_evalNat(x_122, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_123) == 0)
{
lean_object* x_124; 
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
if (lean_obj_tag(x_124) == 0)
{
uint8_t x_125; 
lean_dec(x_31);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_125 = !lean_is_exclusive(x_123);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; 
x_126 = lean_ctor_get(x_123, 0);
lean_dec(x_126);
x_127 = lean_box(0);
lean_ctor_set(x_123, 0, x_127);
return x_123;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_123, 1);
lean_inc(x_128);
lean_dec(x_123);
x_129 = lean_box(0);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_128);
return x_130;
}
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; uint8_t x_137; lean_object* x_138; 
x_131 = lean_ctor_get(x_123, 1);
lean_inc(x_131);
lean_dec(x_123);
x_132 = lean_ctor_get(x_124, 0);
lean_inc(x_132);
lean_dec(x_124);
x_133 = lean_unsigned_to_nat(2u);
x_134 = lean_nat_sub(x_31, x_133);
lean_dec(x_31);
x_135 = lean_nat_sub(x_134, x_120);
lean_dec(x_134);
x_136 = l_Lean_Expr_getRevArg_x21(x_1, x_135);
lean_dec(x_1);
x_137 = 0;
x_138 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_136, x_137, x_3, x_4, x_5, x_6, x_131);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; 
x_139 = lean_ctor_get(x_138, 0);
lean_inc(x_139);
if (lean_obj_tag(x_139) == 0)
{
uint8_t x_140; 
lean_dec(x_132);
x_140 = !lean_is_exclusive(x_138);
if (x_140 == 0)
{
lean_object* x_141; lean_object* x_142; 
x_141 = lean_ctor_get(x_138, 0);
lean_dec(x_141);
x_142 = lean_box(0);
lean_ctor_set(x_138, 0, x_142);
return x_138;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_143 = lean_ctor_get(x_138, 1);
lean_inc(x_143);
lean_dec(x_138);
x_144 = lean_box(0);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_143);
return x_145;
}
}
else
{
uint8_t x_146; 
x_146 = !lean_is_exclusive(x_139);
if (x_146 == 0)
{
uint8_t x_147; 
x_147 = !lean_is_exclusive(x_138);
if (x_147 == 0)
{
lean_object* x_148; lean_object* x_149; uint8_t x_150; 
x_148 = lean_ctor_get(x_139, 0);
x_149 = lean_ctor_get(x_138, 0);
lean_dec(x_149);
x_150 = !lean_is_exclusive(x_148);
if (x_150 == 0)
{
lean_object* x_151; lean_object* x_152; 
x_151 = lean_ctor_get(x_148, 1);
x_152 = lean_nat_add(x_151, x_132);
lean_dec(x_132);
lean_dec(x_151);
lean_ctor_set(x_148, 1, x_152);
return x_138;
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_153 = lean_ctor_get(x_148, 0);
x_154 = lean_ctor_get(x_148, 1);
lean_inc(x_154);
lean_inc(x_153);
lean_dec(x_148);
x_155 = lean_nat_add(x_154, x_132);
lean_dec(x_132);
lean_dec(x_154);
x_156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set(x_156, 1, x_155);
lean_ctor_set(x_139, 0, x_156);
return x_138;
}
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_157 = lean_ctor_get(x_139, 0);
x_158 = lean_ctor_get(x_138, 1);
lean_inc(x_158);
lean_dec(x_138);
x_159 = lean_ctor_get(x_157, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_157, 1);
lean_inc(x_160);
if (lean_is_exclusive(x_157)) {
 lean_ctor_release(x_157, 0);
 lean_ctor_release(x_157, 1);
 x_161 = x_157;
} else {
 lean_dec_ref(x_157);
 x_161 = lean_box(0);
}
x_162 = lean_nat_add(x_160, x_132);
lean_dec(x_132);
lean_dec(x_160);
if (lean_is_scalar(x_161)) {
 x_163 = lean_alloc_ctor(0, 2, 0);
} else {
 x_163 = x_161;
}
lean_ctor_set(x_163, 0, x_159);
lean_ctor_set(x_163, 1, x_162);
lean_ctor_set(x_139, 0, x_163);
x_164 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_164, 0, x_139);
lean_ctor_set(x_164, 1, x_158);
return x_164;
}
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_165 = lean_ctor_get(x_139, 0);
lean_inc(x_165);
lean_dec(x_139);
x_166 = lean_ctor_get(x_138, 1);
lean_inc(x_166);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 x_167 = x_138;
} else {
 lean_dec_ref(x_138);
 x_167 = lean_box(0);
}
x_168 = lean_ctor_get(x_165, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_165, 1);
lean_inc(x_169);
if (lean_is_exclusive(x_165)) {
 lean_ctor_release(x_165, 0);
 lean_ctor_release(x_165, 1);
 x_170 = x_165;
} else {
 lean_dec_ref(x_165);
 x_170 = lean_box(0);
}
x_171 = lean_nat_add(x_169, x_132);
lean_dec(x_132);
lean_dec(x_169);
if (lean_is_scalar(x_170)) {
 x_172 = lean_alloc_ctor(0, 2, 0);
} else {
 x_172 = x_170;
}
lean_ctor_set(x_172, 0, x_168);
lean_ctor_set(x_172, 1, x_171);
x_173 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_173, 0, x_172);
if (lean_is_scalar(x_167)) {
 x_174 = lean_alloc_ctor(0, 2, 0);
} else {
 x_174 = x_167;
}
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_166);
return x_174;
}
}
}
else
{
uint8_t x_175; 
lean_dec(x_132);
x_175 = !lean_is_exclusive(x_138);
if (x_175 == 0)
{
return x_138;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_176 = lean_ctor_get(x_138, 0);
x_177 = lean_ctor_get(x_138, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_138);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
return x_178;
}
}
}
}
else
{
uint8_t x_179; 
lean_dec(x_31);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_179 = !lean_is_exclusive(x_123);
if (x_179 == 0)
{
return x_123;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_123, 0);
x_181 = lean_ctor_get(x_123, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_123);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
return x_182;
}
}
}
block_274:
{
lean_object* x_188; lean_object* x_189; uint8_t x_190; 
lean_dec(x_187);
x_188 = lean_mk_string("add");
lean_inc(x_188);
x_189 = lean_name_mk_string(x_186, x_188);
x_190 = lean_name_eq(x_29, x_189);
lean_dec(x_189);
if (x_190 == 0)
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; uint8_t x_194; 
x_191 = lean_mk_string("Add");
x_192 = lean_name_mk_string(x_184, x_191);
x_193 = lean_name_mk_string(x_192, x_188);
x_194 = lean_name_eq(x_29, x_193);
lean_dec(x_193);
if (x_194 == 0)
{
lean_object* x_195; 
x_195 = lean_box(0);
x_32 = x_195;
goto block_116;
}
else
{
lean_object* x_196; uint8_t x_197; 
x_196 = lean_unsigned_to_nat(4u);
x_197 = lean_nat_dec_eq(x_31, x_196);
if (x_197 == 0)
{
lean_object* x_198; 
x_198 = lean_box(0);
x_32 = x_198;
goto block_116;
}
else
{
lean_object* x_199; 
lean_dec(x_29);
x_199 = lean_box(0);
x_117 = x_199;
goto block_183;
}
}
}
else
{
lean_object* x_200; uint8_t x_201; 
x_200 = lean_unsigned_to_nat(2u);
x_201 = lean_nat_dec_eq(x_31, x_200);
if (x_201 == 0)
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; uint8_t x_205; 
x_202 = lean_mk_string("Add");
x_203 = lean_name_mk_string(x_184, x_202);
x_204 = lean_name_mk_string(x_203, x_188);
x_205 = lean_name_eq(x_29, x_204);
lean_dec(x_204);
if (x_205 == 0)
{
lean_object* x_206; 
x_206 = lean_box(0);
x_32 = x_206;
goto block_116;
}
else
{
lean_object* x_207; uint8_t x_208; 
x_207 = lean_unsigned_to_nat(4u);
x_208 = lean_nat_dec_eq(x_31, x_207);
if (x_208 == 0)
{
lean_object* x_209; 
x_209 = lean_box(0);
x_32 = x_209;
goto block_116;
}
else
{
lean_object* x_210; 
lean_dec(x_29);
x_210 = lean_box(0);
x_117 = x_210;
goto block_183;
}
}
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; 
lean_dec(x_188);
lean_dec(x_29);
x_211 = lean_unsigned_to_nat(1u);
x_212 = lean_nat_sub(x_31, x_211);
x_213 = lean_nat_sub(x_212, x_211);
lean_dec(x_212);
x_214 = l_Lean_Expr_getRevArg_x21(x_1, x_213);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_215 = l_Lean_Meta_evalNat(x_214, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_215) == 0)
{
lean_object* x_216; 
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
if (lean_obj_tag(x_216) == 0)
{
uint8_t x_217; 
lean_dec(x_31);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_217 = !lean_is_exclusive(x_215);
if (x_217 == 0)
{
lean_object* x_218; lean_object* x_219; 
x_218 = lean_ctor_get(x_215, 0);
lean_dec(x_218);
x_219 = lean_box(0);
lean_ctor_set(x_215, 0, x_219);
return x_215;
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_220 = lean_ctor_get(x_215, 1);
lean_inc(x_220);
lean_dec(x_215);
x_221 = lean_box(0);
x_222 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_220);
return x_222;
}
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; uint8_t x_228; lean_object* x_229; 
x_223 = lean_ctor_get(x_215, 1);
lean_inc(x_223);
lean_dec(x_215);
x_224 = lean_ctor_get(x_216, 0);
lean_inc(x_224);
lean_dec(x_216);
x_225 = lean_nat_sub(x_31, x_30);
lean_dec(x_31);
x_226 = lean_nat_sub(x_225, x_211);
lean_dec(x_225);
x_227 = l_Lean_Expr_getRevArg_x21(x_1, x_226);
lean_dec(x_1);
x_228 = 0;
x_229 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_227, x_228, x_3, x_4, x_5, x_6, x_223);
if (lean_obj_tag(x_229) == 0)
{
lean_object* x_230; 
x_230 = lean_ctor_get(x_229, 0);
lean_inc(x_230);
if (lean_obj_tag(x_230) == 0)
{
uint8_t x_231; 
lean_dec(x_224);
x_231 = !lean_is_exclusive(x_229);
if (x_231 == 0)
{
lean_object* x_232; lean_object* x_233; 
x_232 = lean_ctor_get(x_229, 0);
lean_dec(x_232);
x_233 = lean_box(0);
lean_ctor_set(x_229, 0, x_233);
return x_229;
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_234 = lean_ctor_get(x_229, 1);
lean_inc(x_234);
lean_dec(x_229);
x_235 = lean_box(0);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_235);
lean_ctor_set(x_236, 1, x_234);
return x_236;
}
}
else
{
uint8_t x_237; 
x_237 = !lean_is_exclusive(x_230);
if (x_237 == 0)
{
uint8_t x_238; 
x_238 = !lean_is_exclusive(x_229);
if (x_238 == 0)
{
lean_object* x_239; lean_object* x_240; uint8_t x_241; 
x_239 = lean_ctor_get(x_230, 0);
x_240 = lean_ctor_get(x_229, 0);
lean_dec(x_240);
x_241 = !lean_is_exclusive(x_239);
if (x_241 == 0)
{
lean_object* x_242; lean_object* x_243; 
x_242 = lean_ctor_get(x_239, 1);
x_243 = lean_nat_add(x_242, x_224);
lean_dec(x_224);
lean_dec(x_242);
lean_ctor_set(x_239, 1, x_243);
return x_229;
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_244 = lean_ctor_get(x_239, 0);
x_245 = lean_ctor_get(x_239, 1);
lean_inc(x_245);
lean_inc(x_244);
lean_dec(x_239);
x_246 = lean_nat_add(x_245, x_224);
lean_dec(x_224);
lean_dec(x_245);
x_247 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_247, 0, x_244);
lean_ctor_set(x_247, 1, x_246);
lean_ctor_set(x_230, 0, x_247);
return x_229;
}
}
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_248 = lean_ctor_get(x_230, 0);
x_249 = lean_ctor_get(x_229, 1);
lean_inc(x_249);
lean_dec(x_229);
x_250 = lean_ctor_get(x_248, 0);
lean_inc(x_250);
x_251 = lean_ctor_get(x_248, 1);
lean_inc(x_251);
if (lean_is_exclusive(x_248)) {
 lean_ctor_release(x_248, 0);
 lean_ctor_release(x_248, 1);
 x_252 = x_248;
} else {
 lean_dec_ref(x_248);
 x_252 = lean_box(0);
}
x_253 = lean_nat_add(x_251, x_224);
lean_dec(x_224);
lean_dec(x_251);
if (lean_is_scalar(x_252)) {
 x_254 = lean_alloc_ctor(0, 2, 0);
} else {
 x_254 = x_252;
}
lean_ctor_set(x_254, 0, x_250);
lean_ctor_set(x_254, 1, x_253);
lean_ctor_set(x_230, 0, x_254);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_230);
lean_ctor_set(x_255, 1, x_249);
return x_255;
}
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; 
x_256 = lean_ctor_get(x_230, 0);
lean_inc(x_256);
lean_dec(x_230);
x_257 = lean_ctor_get(x_229, 1);
lean_inc(x_257);
if (lean_is_exclusive(x_229)) {
 lean_ctor_release(x_229, 0);
 lean_ctor_release(x_229, 1);
 x_258 = x_229;
} else {
 lean_dec_ref(x_229);
 x_258 = lean_box(0);
}
x_259 = lean_ctor_get(x_256, 0);
lean_inc(x_259);
x_260 = lean_ctor_get(x_256, 1);
lean_inc(x_260);
if (lean_is_exclusive(x_256)) {
 lean_ctor_release(x_256, 0);
 lean_ctor_release(x_256, 1);
 x_261 = x_256;
} else {
 lean_dec_ref(x_256);
 x_261 = lean_box(0);
}
x_262 = lean_nat_add(x_260, x_224);
lean_dec(x_224);
lean_dec(x_260);
if (lean_is_scalar(x_261)) {
 x_263 = lean_alloc_ctor(0, 2, 0);
} else {
 x_263 = x_261;
}
lean_ctor_set(x_263, 0, x_259);
lean_ctor_set(x_263, 1, x_262);
x_264 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_264, 0, x_263);
if (lean_is_scalar(x_258)) {
 x_265 = lean_alloc_ctor(0, 2, 0);
} else {
 x_265 = x_258;
}
lean_ctor_set(x_265, 0, x_264);
lean_ctor_set(x_265, 1, x_257);
return x_265;
}
}
}
else
{
uint8_t x_266; 
lean_dec(x_224);
x_266 = !lean_is_exclusive(x_229);
if (x_266 == 0)
{
return x_229;
}
else
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_267 = lean_ctor_get(x_229, 0);
x_268 = lean_ctor_get(x_229, 1);
lean_inc(x_268);
lean_inc(x_267);
lean_dec(x_229);
x_269 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_269, 0, x_267);
lean_ctor_set(x_269, 1, x_268);
return x_269;
}
}
}
}
else
{
uint8_t x_270; 
lean_dec(x_31);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_270 = !lean_is_exclusive(x_215);
if (x_270 == 0)
{
return x_215;
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; 
x_271 = lean_ctor_get(x_215, 0);
x_272 = lean_ctor_get(x_215, 1);
lean_inc(x_272);
lean_inc(x_271);
lean_dec(x_215);
x_273 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_273, 0, x_271);
lean_ctor_set(x_273, 1, x_272);
return x_273;
}
}
}
}
}
}
default: 
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (x_2 == 0)
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; 
x_324 = lean_unsigned_to_nat(0u);
x_325 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_325, 0, x_1);
lean_ctor_set(x_325, 1, x_324);
x_326 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_326, 0, x_325);
x_327 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_327, 0, x_326);
lean_ctor_set(x_327, 1, x_7);
return x_327;
}
else
{
lean_object* x_328; lean_object* x_329; 
lean_dec(x_1);
x_328 = lean_box(0);
x_329 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_329, 0, x_328);
lean_ctor_set(x_329, 1, x_7);
return x_329;
}
}
}
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (x_2 == 0)
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; 
x_330 = lean_unsigned_to_nat(0u);
x_331 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_331, 0, x_1);
lean_ctor_set(x_331, 1, x_330);
x_332 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_332, 0, x_331);
x_333 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_333, 0, x_332);
lean_ctor_set(x_333, 1, x_7);
return x_333;
}
else
{
lean_object* x_334; lean_object* x_335; 
lean_dec(x_1);
x_334 = lean_box(0);
x_335 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_335, 0, x_334);
lean_ctor_set(x_335, 1, x_7);
return x_335;
}
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_getOffset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = 1;
x_8 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_4(x_2, x_1, x_4, x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 5)
{
lean_object* x_7; 
x_7 = l_Lean_Expr_getAppFn(x_1);
switch (lean_obj_tag(x_7)) {
case 2:
{
lean_object* x_8; 
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_Lean_Meta_instantiateMVars(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = l_Lean_Expr_getAppFn(x_10);
x_13 = l_Lean_Expr_isMVar(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_free_object(x_8);
x_1 = x_10;
x_6 = x_11;
goto _start;
}
else
{
lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_box(0);
lean_ctor_set(x_8, 0, x_15);
return x_8;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_16 = lean_ctor_get(x_8, 0);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_8);
x_18 = l_Lean_Expr_getAppFn(x_16);
x_19 = l_Lean_Expr_isMVar(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
x_1 = x_16;
x_6 = x_17;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_17);
return x_22;
}
}
}
else
{
uint8_t x_23; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_8);
if (x_23 == 0)
{
return x_8;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_8, 0);
x_25 = lean_ctor_get(x_8, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_8);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
case 4:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_27 = lean_ctor_get(x_7, 0);
lean_inc(x_27);
lean_dec(x_7);
x_28 = lean_unsigned_to_nat(0u);
x_29 = l_Lean_Expr_getAppNumArgsAux(x_1, x_28);
x_46 = lean_box(0);
x_47 = lean_mk_string("Nat");
x_48 = lean_name_mk_string(x_46, x_47);
x_78 = lean_mk_string("succ");
lean_inc(x_48);
x_79 = lean_name_mk_string(x_48, x_78);
x_80 = lean_name_eq(x_27, x_79);
lean_dec(x_79);
if (x_80 == 0)
{
lean_object* x_81; 
x_81 = lean_box(0);
x_49 = x_81;
goto block_77;
}
else
{
lean_object* x_82; uint8_t x_83; 
x_82 = lean_unsigned_to_nat(1u);
x_83 = lean_nat_dec_eq(x_29, x_82);
if (x_83 == 0)
{
lean_object* x_84; 
x_84 = lean_box(0);
x_49 = x_84;
goto block_77;
}
else
{
uint8_t x_85; lean_object* x_86; 
lean_dec(x_48);
lean_dec(x_29);
lean_dec(x_27);
x_85 = 1;
x_86 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_1, x_85, x_2, x_3, x_4, x_5, x_6);
return x_86;
}
}
block_45:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_30);
x_31 = lean_box(0);
x_32 = lean_mk_string("HAdd");
x_33 = lean_name_mk_string(x_31, x_32);
x_34 = lean_mk_string("hAdd");
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = lean_name_eq(x_27, x_35);
lean_dec(x_35);
lean_dec(x_27);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_29);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_6);
return x_38;
}
else
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_unsigned_to_nat(6u);
x_40 = lean_nat_dec_eq(x_29, x_39);
lean_dec(x_29);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_6);
return x_42;
}
else
{
uint8_t x_43; lean_object* x_44; 
x_43 = 1;
x_44 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_1, x_43, x_2, x_3, x_4, x_5, x_6);
return x_44;
}
}
}
block_77:
{
lean_object* x_50; lean_object* x_51; uint8_t x_52; 
lean_dec(x_49);
x_50 = lean_mk_string("add");
lean_inc(x_50);
x_51 = lean_name_mk_string(x_48, x_50);
x_52 = lean_name_eq(x_27, x_51);
lean_dec(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_53 = lean_mk_string("Add");
x_54 = lean_name_mk_string(x_46, x_53);
x_55 = lean_name_mk_string(x_54, x_50);
x_56 = lean_name_eq(x_27, x_55);
lean_dec(x_55);
if (x_56 == 0)
{
lean_object* x_57; 
x_57 = lean_box(0);
x_30 = x_57;
goto block_45;
}
else
{
lean_object* x_58; uint8_t x_59; 
x_58 = lean_unsigned_to_nat(4u);
x_59 = lean_nat_dec_eq(x_29, x_58);
if (x_59 == 0)
{
lean_object* x_60; 
x_60 = lean_box(0);
x_30 = x_60;
goto block_45;
}
else
{
uint8_t x_61; lean_object* x_62; 
lean_dec(x_29);
lean_dec(x_27);
x_61 = 1;
x_62 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_1, x_61, x_2, x_3, x_4, x_5, x_6);
return x_62;
}
}
}
else
{
lean_object* x_63; uint8_t x_64; 
x_63 = lean_unsigned_to_nat(2u);
x_64 = lean_nat_dec_eq(x_29, x_63);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_65 = lean_mk_string("Add");
x_66 = lean_name_mk_string(x_46, x_65);
x_67 = lean_name_mk_string(x_66, x_50);
x_68 = lean_name_eq(x_27, x_67);
lean_dec(x_67);
if (x_68 == 0)
{
lean_object* x_69; 
x_69 = lean_box(0);
x_30 = x_69;
goto block_45;
}
else
{
lean_object* x_70; uint8_t x_71; 
x_70 = lean_unsigned_to_nat(4u);
x_71 = lean_nat_dec_eq(x_29, x_70);
if (x_71 == 0)
{
lean_object* x_72; 
x_72 = lean_box(0);
x_30 = x_72;
goto block_45;
}
else
{
uint8_t x_73; lean_object* x_74; 
lean_dec(x_29);
lean_dec(x_27);
x_73 = 1;
x_74 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_1, x_73, x_2, x_3, x_4, x_5, x_6);
return x_74;
}
}
}
else
{
uint8_t x_75; lean_object* x_76; 
lean_dec(x_50);
lean_dec(x_29);
lean_dec(x_27);
x_75 = 1;
x_76 = l___private_Lean_Meta_Offset_0__Lean_Meta_getOffsetAux(x_1, x_75, x_2, x_3, x_4, x_5, x_6);
return x_76;
}
}
}
}
default: 
{
lean_object* x_87; lean_object* x_88; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_87 = lean_box(0);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_6);
return x_88;
}
}
}
else
{
lean_object* x_89; lean_object* x_90; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_89 = lean_box(0);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_6);
return x_90;
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_evalNat(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
x_11 = 0;
x_12 = lean_box(x_11);
lean_ctor_set(x_7, 0, x_12);
return x_7;
}
else
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = 0;
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_7);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_7, 0);
lean_dec(x_18);
x_19 = lean_ctor_get(x_8, 0);
lean_inc(x_19);
lean_dec(x_8);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_nat_dec_eq(x_19, x_20);
lean_dec(x_19);
x_22 = lean_box(x_21);
lean_ctor_set(x_7, 0, x_22);
return x_7;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_7, 1);
lean_inc(x_23);
lean_dec(x_7);
x_24 = lean_ctor_get(x_8, 0);
lean_inc(x_24);
lean_dec(x_8);
x_25 = lean_unsigned_to_nat(0u);
x_26 = lean_nat_dec_eq(x_24, x_25);
lean_dec(x_24);
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_23);
return x_28;
}
}
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_7);
if (x_29 == 0)
{
return x_7;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_7, 0);
x_31 = lean_ctor_get(x_7, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_7);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
lean_object* l___private_Lean_Meta_Offset_0__Lean_Meta_mkOffset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_2, x_8);
if (x_9 == 0)
{
lean_object* x_10; 
lean_inc(x_1);
x_10 = l___private_Lean_Meta_Offset_0__Lean_Meta_isNatZero(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_unbox(x_11);
lean_dec(x_11);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
x_15 = lean_box(0);
x_16 = lean_mk_string("Nat");
x_17 = lean_name_mk_string(x_15, x_16);
x_18 = lean_mk_string("add");
x_19 = lean_name_mk_string(x_17, x_18);
x_20 = lean_box(0);
x_21 = l_Lean_mkConst(x_19, x_20);
x_22 = l_Lean_mkNatLit(x_2);
x_23 = l_Lean_mkAppB(x_21, x_1, x_22);
lean_ctor_set(x_10, 0, x_23);
return x_10;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_24 = lean_ctor_get(x_10, 1);
lean_inc(x_24);
lean_dec(x_10);
x_25 = lean_box(0);
x_26 = lean_mk_string("Nat");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("add");
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_box(0);
x_31 = l_Lean_mkConst(x_29, x_30);
x_32 = l_Lean_mkNatLit(x_2);
x_33 = l_Lean_mkAppB(x_31, x_1, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_24);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_10);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_10, 0);
lean_dec(x_36);
x_37 = l_Lean_mkNatLit(x_2);
lean_ctor_set(x_10, 0, x_37);
return x_10;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_10, 1);
lean_inc(x_38);
lean_dec(x_10);
x_39 = l_Lean_mkNatLit(x_2);
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
lean_dec(x_2);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_10);
if (x_41 == 0)
{
return x_10;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_10, 0);
x_43 = lean_ctor_get(x_10, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_10);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_1);
lean_ctor_set(x_45, 1, x_7);
return x_45;
}
}
}
lean_object* l_Lean_Meta_isDefEqOffset_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_isDefEqOffset_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isDefEqOffset_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_isDefEqOffset_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Meta_isDefEqOffset_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_isDefEqOffset_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_isDefEqOffset___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
return x_7;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
return x_7;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_7);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
lean_object* l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_isDefEqOffset___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_isDefEqOffset___spec__1___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_isDefEqOffset(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_11 = l_Lean_Meta_evalNat(x_1, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_11, 0);
lean_dec(x_14);
x_15 = 2;
x_16 = lean_box(x_15);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
else
{
lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
x_18 = 2;
x_19 = lean_box(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_17);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_11, 1);
lean_inc(x_21);
lean_dec(x_11);
x_22 = lean_ctor_get(x_12, 0);
lean_inc(x_22);
lean_dec(x_12);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_23 = l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset(x_2, x_3, x_4, x_5, x_6, x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_26 = l_Lean_Meta_evalNat(x_2, x_3, x_4, x_5, x_6, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
lean_dec(x_22);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_26, 0);
lean_dec(x_29);
x_30 = 2;
x_31 = lean_box(x_30);
lean_ctor_set(x_26, 0, x_31);
return x_26;
}
else
{
lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_26, 1);
lean_inc(x_32);
lean_dec(x_26);
x_33 = 2;
x_34 = lean_box(x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; uint8_t x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_26, 1);
lean_inc(x_36);
lean_dec(x_26);
x_37 = lean_ctor_get(x_27, 0);
lean_inc(x_37);
lean_dec(x_27);
x_38 = lean_nat_dec_eq(x_22, x_37);
lean_dec(x_37);
lean_dec(x_22);
x_39 = l_Bool_toLBool(x_38);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_40 = l_Lean_Meta_inferType(x_1, x_3, x_4, x_5, x_6, x_36);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_box(0);
x_44 = lean_mk_string("Nat");
x_45 = lean_name_mk_string(x_43, x_44);
x_46 = lean_box(0);
x_47 = l_Lean_mkConst(x_45, x_46);
x_48 = lean_alloc_closure((void*)(l_Lean_Meta_isExprDefEqAux), 7, 2);
lean_closure_set(x_48, 0, x_41);
lean_closure_set(x_48, 1, x_47);
x_49 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_isDefEqOffset___spec__1___rarg(x_48, x_3, x_4, x_5, x_6, x_42);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; uint8_t x_51; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_unbox(x_50);
lean_dec(x_50);
if (x_51 == 0)
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_49);
if (x_52 == 0)
{
lean_object* x_53; uint8_t x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_49, 0);
lean_dec(x_53);
x_54 = 2;
x_55 = lean_box(x_54);
lean_ctor_set(x_49, 0, x_55);
return x_49;
}
else
{
lean_object* x_56; uint8_t x_57; lean_object* x_58; lean_object* x_59; 
x_56 = lean_ctor_get(x_49, 1);
lean_inc(x_56);
lean_dec(x_49);
x_57 = 2;
x_58 = lean_box(x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_56);
return x_59;
}
}
else
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_49);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_49, 0);
lean_dec(x_61);
x_62 = lean_box(x_39);
lean_ctor_set(x_49, 0, x_62);
return x_49;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_49, 1);
lean_inc(x_63);
lean_dec(x_49);
x_64 = lean_box(x_39);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
}
else
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_49);
if (x_66 == 0)
{
return x_49;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_49, 0);
x_68 = lean_ctor_get(x_49, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_49);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_70 = !lean_is_exclusive(x_40);
if (x_70 == 0)
{
return x_40;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_40, 0);
x_72 = lean_ctor_get(x_40, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_40);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_22);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_74 = !lean_is_exclusive(x_26);
if (x_74 == 0)
{
return x_26;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_75 = lean_ctor_get(x_26, 0);
x_76 = lean_ctor_get(x_26, 1);
lean_inc(x_76);
lean_inc(x_75);
lean_dec(x_26);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
return x_77;
}
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
lean_dec(x_2);
x_78 = lean_ctor_get(x_24, 0);
lean_inc(x_78);
lean_dec(x_24);
x_79 = lean_ctor_get(x_23, 1);
lean_inc(x_79);
lean_dec(x_23);
x_80 = lean_ctor_get(x_78, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_78, 1);
lean_inc(x_81);
lean_dec(x_78);
x_82 = lean_nat_dec_le(x_81, x_22);
if (x_82 == 0)
{
lean_object* x_83; 
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_22);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_83 = l_Lean_Meta_inferType(x_1, x_3, x_4, x_5, x_6, x_79);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_86 = lean_box(0);
x_87 = lean_mk_string("Nat");
x_88 = lean_name_mk_string(x_86, x_87);
x_89 = lean_box(0);
x_90 = l_Lean_mkConst(x_88, x_89);
x_91 = lean_alloc_closure((void*)(l_Lean_Meta_isExprDefEqAux), 7, 2);
lean_closure_set(x_91, 0, x_84);
lean_closure_set(x_91, 1, x_90);
x_92 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_isDefEqOffset___spec__1___rarg(x_91, x_3, x_4, x_5, x_6, x_85);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; uint8_t x_94; 
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_unbox(x_93);
lean_dec(x_93);
if (x_94 == 0)
{
uint8_t x_95; 
x_95 = !lean_is_exclusive(x_92);
if (x_95 == 0)
{
lean_object* x_96; uint8_t x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_92, 0);
lean_dec(x_96);
x_97 = 2;
x_98 = lean_box(x_97);
lean_ctor_set(x_92, 0, x_98);
return x_92;
}
else
{
lean_object* x_99; uint8_t x_100; lean_object* x_101; lean_object* x_102; 
x_99 = lean_ctor_get(x_92, 1);
lean_inc(x_99);
lean_dec(x_92);
x_100 = 2;
x_101 = lean_box(x_100);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_99);
return x_102;
}
}
else
{
uint8_t x_103; 
x_103 = !lean_is_exclusive(x_92);
if (x_103 == 0)
{
lean_object* x_104; uint8_t x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_92, 0);
lean_dec(x_104);
x_105 = 0;
x_106 = lean_box(x_105);
lean_ctor_set(x_92, 0, x_106);
return x_92;
}
else
{
lean_object* x_107; uint8_t x_108; lean_object* x_109; lean_object* x_110; 
x_107 = lean_ctor_get(x_92, 1);
lean_inc(x_107);
lean_dec(x_92);
x_108 = 0;
x_109 = lean_box(x_108);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_107);
return x_110;
}
}
}
else
{
uint8_t x_111; 
x_111 = !lean_is_exclusive(x_92);
if (x_111 == 0)
{
return x_92;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_92, 0);
x_113 = lean_ctor_get(x_92, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_92);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
return x_114;
}
}
}
else
{
uint8_t x_115; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_115 = !lean_is_exclusive(x_83);
if (x_115 == 0)
{
return x_83;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_83, 0);
x_117 = lean_ctor_get(x_83, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_83);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_119 = lean_nat_sub(x_22, x_81);
lean_dec(x_81);
lean_dec(x_22);
x_120 = l_Lean_mkNatLit(x_119);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_121 = l_Lean_Meta_inferType(x_1, x_3, x_4, x_5, x_6, x_79);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
lean_dec(x_121);
x_124 = lean_box(0);
x_125 = lean_mk_string("Nat");
x_126 = lean_name_mk_string(x_124, x_125);
x_127 = lean_box(0);
x_128 = l_Lean_mkConst(x_126, x_127);
x_129 = lean_alloc_closure((void*)(l_Lean_Meta_isExprDefEqAux), 7, 2);
lean_closure_set(x_129, 0, x_122);
lean_closure_set(x_129, 1, x_128);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_130 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_isDefEqOffset___spec__1___rarg(x_129, x_3, x_4, x_5, x_6, x_123);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; uint8_t x_132; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_unbox(x_131);
lean_dec(x_131);
if (x_132 == 0)
{
uint8_t x_133; 
lean_dec(x_120);
lean_dec(x_80);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_133 = !lean_is_exclusive(x_130);
if (x_133 == 0)
{
lean_object* x_134; uint8_t x_135; lean_object* x_136; 
x_134 = lean_ctor_get(x_130, 0);
lean_dec(x_134);
x_135 = 2;
x_136 = lean_box(x_135);
lean_ctor_set(x_130, 0, x_136);
return x_130;
}
else
{
lean_object* x_137; uint8_t x_138; lean_object* x_139; lean_object* x_140; 
x_137 = lean_ctor_get(x_130, 1);
lean_inc(x_137);
lean_dec(x_130);
x_138 = 2;
x_139 = lean_box(x_138);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_139);
lean_ctor_set(x_140, 1, x_137);
return x_140;
}
}
else
{
lean_object* x_141; lean_object* x_142; 
x_141 = lean_ctor_get(x_130, 1);
lean_inc(x_141);
lean_dec(x_130);
x_142 = l_Lean_Meta_isExprDefEqAux(x_120, x_80, x_3, x_4, x_5, x_6, x_141);
if (lean_obj_tag(x_142) == 0)
{
uint8_t x_143; 
x_143 = !lean_is_exclusive(x_142);
if (x_143 == 0)
{
lean_object* x_144; uint8_t x_145; uint8_t x_146; lean_object* x_147; 
x_144 = lean_ctor_get(x_142, 0);
x_145 = lean_unbox(x_144);
lean_dec(x_144);
x_146 = l_Bool_toLBool(x_145);
x_147 = lean_box(x_146);
lean_ctor_set(x_142, 0, x_147);
return x_142;
}
else
{
lean_object* x_148; lean_object* x_149; uint8_t x_150; uint8_t x_151; lean_object* x_152; lean_object* x_153; 
x_148 = lean_ctor_get(x_142, 0);
x_149 = lean_ctor_get(x_142, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_142);
x_150 = lean_unbox(x_148);
lean_dec(x_148);
x_151 = l_Bool_toLBool(x_150);
x_152 = lean_box(x_151);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_149);
return x_153;
}
}
else
{
uint8_t x_154; 
x_154 = !lean_is_exclusive(x_142);
if (x_154 == 0)
{
return x_142;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_142, 0);
x_156 = lean_ctor_get(x_142, 1);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_142);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_155);
lean_ctor_set(x_157, 1, x_156);
return x_157;
}
}
}
}
else
{
uint8_t x_158; 
lean_dec(x_120);
lean_dec(x_80);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_158 = !lean_is_exclusive(x_130);
if (x_158 == 0)
{
return x_130;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_ctor_get(x_130, 0);
x_160 = lean_ctor_get(x_130, 1);
lean_inc(x_160);
lean_inc(x_159);
lean_dec(x_130);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
}
}
else
{
uint8_t x_162; 
lean_dec(x_120);
lean_dec(x_80);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_162 = !lean_is_exclusive(x_121);
if (x_162 == 0)
{
return x_121;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_163 = lean_ctor_get(x_121, 0);
x_164 = lean_ctor_get(x_121, 1);
lean_inc(x_164);
lean_inc(x_163);
lean_dec(x_121);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
return x_165;
}
}
}
}
}
else
{
uint8_t x_166; 
lean_dec(x_22);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_166 = !lean_is_exclusive(x_23);
if (x_166 == 0)
{
return x_23;
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_167 = lean_ctor_get(x_23, 0);
x_168 = lean_ctor_get(x_23, 1);
lean_inc(x_168);
lean_inc(x_167);
lean_dec(x_23);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
return x_169;
}
}
}
}
else
{
uint8_t x_170; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_170 = !lean_is_exclusive(x_11);
if (x_170 == 0)
{
return x_11;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get(x_11, 0);
x_172 = lean_ctor_get(x_11, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_11);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_172);
return x_173;
}
}
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_174 = lean_ctor_get(x_9, 0);
lean_inc(x_174);
lean_dec(x_9);
x_175 = lean_ctor_get(x_8, 1);
lean_inc(x_175);
lean_dec(x_8);
x_176 = lean_ctor_get(x_174, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_174, 1);
lean_inc(x_177);
lean_dec(x_174);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_178 = l___private_Lean_Meta_Offset_0__Lean_Meta_isOffset(x_2, x_3, x_4, x_5, x_6, x_175);
if (lean_obj_tag(x_178) == 0)
{
lean_object* x_179; 
x_179 = lean_ctor_get(x_178, 0);
lean_inc(x_179);
if (lean_obj_tag(x_179) == 0)
{
lean_object* x_180; lean_object* x_181; 
x_180 = lean_ctor_get(x_178, 1);
lean_inc(x_180);
lean_dec(x_178);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_181 = l_Lean_Meta_evalNat(x_2, x_3, x_4, x_5, x_6, x_180);
if (lean_obj_tag(x_181) == 0)
{
lean_object* x_182; 
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
if (lean_obj_tag(x_182) == 0)
{
uint8_t x_183; 
lean_dec(x_177);
lean_dec(x_176);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_183 = !lean_is_exclusive(x_181);
if (x_183 == 0)
{
lean_object* x_184; uint8_t x_185; lean_object* x_186; 
x_184 = lean_ctor_get(x_181, 0);
lean_dec(x_184);
x_185 = 2;
x_186 = lean_box(x_185);
lean_ctor_set(x_181, 0, x_186);
return x_181;
}
else
{
lean_object* x_187; uint8_t x_188; lean_object* x_189; lean_object* x_190; 
x_187 = lean_ctor_get(x_181, 1);
lean_inc(x_187);
lean_dec(x_181);
x_188 = 2;
x_189 = lean_box(x_188);
x_190 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_187);
return x_190;
}
}
else
{
lean_object* x_191; lean_object* x_192; uint8_t x_193; 
x_191 = lean_ctor_get(x_181, 1);
lean_inc(x_191);
lean_dec(x_181);
x_192 = lean_ctor_get(x_182, 0);
lean_inc(x_192);
lean_dec(x_182);
x_193 = lean_nat_dec_le(x_177, x_192);
if (x_193 == 0)
{
lean_object* x_194; 
lean_dec(x_192);
lean_dec(x_177);
lean_dec(x_176);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_194 = l_Lean_Meta_inferType(x_1, x_3, x_4, x_5, x_6, x_191);
if (lean_obj_tag(x_194) == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_194, 1);
lean_inc(x_196);
lean_dec(x_194);
x_197 = lean_box(0);
x_198 = lean_mk_string("Nat");
x_199 = lean_name_mk_string(x_197, x_198);
x_200 = lean_box(0);
x_201 = l_Lean_mkConst(x_199, x_200);
x_202 = lean_alloc_closure((void*)(l_Lean_Meta_isExprDefEqAux), 7, 2);
lean_closure_set(x_202, 0, x_195);
lean_closure_set(x_202, 1, x_201);
x_203 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_isDefEqOffset___spec__1___rarg(x_202, x_3, x_4, x_5, x_6, x_196);
if (lean_obj_tag(x_203) == 0)
{
lean_object* x_204; uint8_t x_205; 
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
x_205 = lean_unbox(x_204);
lean_dec(x_204);
if (x_205 == 0)
{
uint8_t x_206; 
x_206 = !lean_is_exclusive(x_203);
if (x_206 == 0)
{
lean_object* x_207; uint8_t x_208; lean_object* x_209; 
x_207 = lean_ctor_get(x_203, 0);
lean_dec(x_207);
x_208 = 2;
x_209 = lean_box(x_208);
lean_ctor_set(x_203, 0, x_209);
return x_203;
}
else
{
lean_object* x_210; uint8_t x_211; lean_object* x_212; lean_object* x_213; 
x_210 = lean_ctor_get(x_203, 1);
lean_inc(x_210);
lean_dec(x_203);
x_211 = 2;
x_212 = lean_box(x_211);
x_213 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_213, 0, x_212);
lean_ctor_set(x_213, 1, x_210);
return x_213;
}
}
else
{
uint8_t x_214; 
x_214 = !lean_is_exclusive(x_203);
if (x_214 == 0)
{
lean_object* x_215; uint8_t x_216; lean_object* x_217; 
x_215 = lean_ctor_get(x_203, 0);
lean_dec(x_215);
x_216 = 0;
x_217 = lean_box(x_216);
lean_ctor_set(x_203, 0, x_217);
return x_203;
}
else
{
lean_object* x_218; uint8_t x_219; lean_object* x_220; lean_object* x_221; 
x_218 = lean_ctor_get(x_203, 1);
lean_inc(x_218);
lean_dec(x_203);
x_219 = 0;
x_220 = lean_box(x_219);
x_221 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_221, 0, x_220);
lean_ctor_set(x_221, 1, x_218);
return x_221;
}
}
}
else
{
uint8_t x_222; 
x_222 = !lean_is_exclusive(x_203);
if (x_222 == 0)
{
return x_203;
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_223 = lean_ctor_get(x_203, 0);
x_224 = lean_ctor_get(x_203, 1);
lean_inc(x_224);
lean_inc(x_223);
lean_dec(x_203);
x_225 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_225, 0, x_223);
lean_ctor_set(x_225, 1, x_224);
return x_225;
}
}
}
else
{
uint8_t x_226; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_226 = !lean_is_exclusive(x_194);
if (x_226 == 0)
{
return x_194;
}
else
{
lean_object* x_227; lean_object* x_228; lean_object* x_229; 
x_227 = lean_ctor_get(x_194, 0);
x_228 = lean_ctor_get(x_194, 1);
lean_inc(x_228);
lean_inc(x_227);
lean_dec(x_194);
x_229 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_229, 0, x_227);
lean_ctor_set(x_229, 1, x_228);
return x_229;
}
}
}
else
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_230 = lean_nat_sub(x_192, x_177);
lean_dec(x_177);
lean_dec(x_192);
x_231 = l_Lean_mkNatLit(x_230);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_232 = l_Lean_Meta_inferType(x_1, x_3, x_4, x_5, x_6, x_191);
if (lean_obj_tag(x_232) == 0)
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_233 = lean_ctor_get(x_232, 0);
lean_inc(x_233);
x_234 = lean_ctor_get(x_232, 1);
lean_inc(x_234);
lean_dec(x_232);
x_235 = lean_box(0);
x_236 = lean_mk_string("Nat");
x_237 = lean_name_mk_string(x_235, x_236);
x_238 = lean_box(0);
x_239 = l_Lean_mkConst(x_237, x_238);
x_240 = lean_alloc_closure((void*)(l_Lean_Meta_isExprDefEqAux), 7, 2);
lean_closure_set(x_240, 0, x_233);
lean_closure_set(x_240, 1, x_239);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_241 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_isDefEqOffset___spec__1___rarg(x_240, x_3, x_4, x_5, x_6, x_234);
if (lean_obj_tag(x_241) == 0)
{
lean_object* x_242; uint8_t x_243; 
x_242 = lean_ctor_get(x_241, 0);
lean_inc(x_242);
x_243 = lean_unbox(x_242);
lean_dec(x_242);
if (x_243 == 0)
{
uint8_t x_244; 
lean_dec(x_231);
lean_dec(x_176);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_244 = !lean_is_exclusive(x_241);
if (x_244 == 0)
{
lean_object* x_245; uint8_t x_246; lean_object* x_247; 
x_245 = lean_ctor_get(x_241, 0);
lean_dec(x_245);
x_246 = 2;
x_247 = lean_box(x_246);
lean_ctor_set(x_241, 0, x_247);
return x_241;
}
else
{
lean_object* x_248; uint8_t x_249; lean_object* x_250; lean_object* x_251; 
x_248 = lean_ctor_get(x_241, 1);
lean_inc(x_248);
lean_dec(x_241);
x_249 = 2;
x_250 = lean_box(x_249);
x_251 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_251, 0, x_250);
lean_ctor_set(x_251, 1, x_248);
return x_251;
}
}
else
{
lean_object* x_252; lean_object* x_253; 
x_252 = lean_ctor_get(x_241, 1);
lean_inc(x_252);
lean_dec(x_241);
x_253 = l_Lean_Meta_isExprDefEqAux(x_176, x_231, x_3, x_4, x_5, x_6, x_252);
if (lean_obj_tag(x_253) == 0)
{
uint8_t x_254; 
x_254 = !lean_is_exclusive(x_253);
if (x_254 == 0)
{
lean_object* x_255; uint8_t x_256; uint8_t x_257; lean_object* x_258; 
x_255 = lean_ctor_get(x_253, 0);
x_256 = lean_unbox(x_255);
lean_dec(x_255);
x_257 = l_Bool_toLBool(x_256);
x_258 = lean_box(x_257);
lean_ctor_set(x_253, 0, x_258);
return x_253;
}
else
{
lean_object* x_259; lean_object* x_260; uint8_t x_261; uint8_t x_262; lean_object* x_263; lean_object* x_264; 
x_259 = lean_ctor_get(x_253, 0);
x_260 = lean_ctor_get(x_253, 1);
lean_inc(x_260);
lean_inc(x_259);
lean_dec(x_253);
x_261 = lean_unbox(x_259);
lean_dec(x_259);
x_262 = l_Bool_toLBool(x_261);
x_263 = lean_box(x_262);
x_264 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_264, 0, x_263);
lean_ctor_set(x_264, 1, x_260);
return x_264;
}
}
else
{
uint8_t x_265; 
x_265 = !lean_is_exclusive(x_253);
if (x_265 == 0)
{
return x_253;
}
else
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_266 = lean_ctor_get(x_253, 0);
x_267 = lean_ctor_get(x_253, 1);
lean_inc(x_267);
lean_inc(x_266);
lean_dec(x_253);
x_268 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_268, 0, x_266);
lean_ctor_set(x_268, 1, x_267);
return x_268;
}
}
}
}
else
{
uint8_t x_269; 
lean_dec(x_231);
lean_dec(x_176);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_269 = !lean_is_exclusive(x_241);
if (x_269 == 0)
{
return x_241;
}
else
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; 
x_270 = lean_ctor_get(x_241, 0);
x_271 = lean_ctor_get(x_241, 1);
lean_inc(x_271);
lean_inc(x_270);
lean_dec(x_241);
x_272 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_272, 0, x_270);
lean_ctor_set(x_272, 1, x_271);
return x_272;
}
}
}
else
{
uint8_t x_273; 
lean_dec(x_231);
lean_dec(x_176);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_273 = !lean_is_exclusive(x_232);
if (x_273 == 0)
{
return x_232;
}
else
{
lean_object* x_274; lean_object* x_275; lean_object* x_276; 
x_274 = lean_ctor_get(x_232, 0);
x_275 = lean_ctor_get(x_232, 1);
lean_inc(x_275);
lean_inc(x_274);
lean_dec(x_232);
x_276 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_276, 0, x_274);
lean_ctor_set(x_276, 1, x_275);
return x_276;
}
}
}
}
}
else
{
uint8_t x_277; 
lean_dec(x_177);
lean_dec(x_176);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_277 = !lean_is_exclusive(x_181);
if (x_277 == 0)
{
return x_181;
}
else
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; 
x_278 = lean_ctor_get(x_181, 0);
x_279 = lean_ctor_get(x_181, 1);
lean_inc(x_279);
lean_inc(x_278);
lean_dec(x_181);
x_280 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_280, 0, x_278);
lean_ctor_set(x_280, 1, x_279);
return x_280;
}
}
}
else
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; uint8_t x_285; 
lean_dec(x_2);
x_281 = lean_ctor_get(x_179, 0);
lean_inc(x_281);
lean_dec(x_179);
x_282 = lean_ctor_get(x_178, 1);
lean_inc(x_282);
lean_dec(x_178);
x_283 = lean_ctor_get(x_281, 0);
lean_inc(x_283);
x_284 = lean_ctor_get(x_281, 1);
lean_inc(x_284);
lean_dec(x_281);
x_285 = lean_nat_dec_eq(x_177, x_284);
if (x_285 == 0)
{
uint8_t x_286; 
x_286 = lean_nat_dec_lt(x_177, x_284);
if (x_286 == 0)
{
lean_object* x_287; lean_object* x_288; 
x_287 = lean_nat_sub(x_177, x_284);
lean_dec(x_284);
lean_dec(x_177);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_288 = l___private_Lean_Meta_Offset_0__Lean_Meta_mkOffset(x_176, x_287, x_3, x_4, x_5, x_6, x_282);
if (lean_obj_tag(x_288) == 0)
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; 
x_289 = lean_ctor_get(x_288, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_288, 1);
lean_inc(x_290);
lean_dec(x_288);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_291 = l_Lean_Meta_inferType(x_1, x_3, x_4, x_5, x_6, x_290);
if (lean_obj_tag(x_291) == 0)
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; 
x_292 = lean_ctor_get(x_291, 0);
lean_inc(x_292);
x_293 = lean_ctor_get(x_291, 1);
lean_inc(x_293);
lean_dec(x_291);
x_294 = lean_box(0);
x_295 = lean_mk_string("Nat");
x_296 = lean_name_mk_string(x_294, x_295);
x_297 = lean_box(0);
x_298 = l_Lean_mkConst(x_296, x_297);
x_299 = lean_alloc_closure((void*)(l_Lean_Meta_isExprDefEqAux), 7, 2);
lean_closure_set(x_299, 0, x_292);
lean_closure_set(x_299, 1, x_298);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_300 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_isDefEqOffset___spec__1___rarg(x_299, x_3, x_4, x_5, x_6, x_293);
if (lean_obj_tag(x_300) == 0)
{
lean_object* x_301; uint8_t x_302; 
x_301 = lean_ctor_get(x_300, 0);
lean_inc(x_301);
x_302 = lean_unbox(x_301);
lean_dec(x_301);
if (x_302 == 0)
{
uint8_t x_303; 
lean_dec(x_289);
lean_dec(x_283);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_303 = !lean_is_exclusive(x_300);
if (x_303 == 0)
{
lean_object* x_304; uint8_t x_305; lean_object* x_306; 
x_304 = lean_ctor_get(x_300, 0);
lean_dec(x_304);
x_305 = 2;
x_306 = lean_box(x_305);
lean_ctor_set(x_300, 0, x_306);
return x_300;
}
else
{
lean_object* x_307; uint8_t x_308; lean_object* x_309; lean_object* x_310; 
x_307 = lean_ctor_get(x_300, 1);
lean_inc(x_307);
lean_dec(x_300);
x_308 = 2;
x_309 = lean_box(x_308);
x_310 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_310, 0, x_309);
lean_ctor_set(x_310, 1, x_307);
return x_310;
}
}
else
{
lean_object* x_311; lean_object* x_312; 
x_311 = lean_ctor_get(x_300, 1);
lean_inc(x_311);
lean_dec(x_300);
x_312 = l_Lean_Meta_isExprDefEqAux(x_289, x_283, x_3, x_4, x_5, x_6, x_311);
if (lean_obj_tag(x_312) == 0)
{
uint8_t x_313; 
x_313 = !lean_is_exclusive(x_312);
if (x_313 == 0)
{
lean_object* x_314; uint8_t x_315; uint8_t x_316; lean_object* x_317; 
x_314 = lean_ctor_get(x_312, 0);
x_315 = lean_unbox(x_314);
lean_dec(x_314);
x_316 = l_Bool_toLBool(x_315);
x_317 = lean_box(x_316);
lean_ctor_set(x_312, 0, x_317);
return x_312;
}
else
{
lean_object* x_318; lean_object* x_319; uint8_t x_320; uint8_t x_321; lean_object* x_322; lean_object* x_323; 
x_318 = lean_ctor_get(x_312, 0);
x_319 = lean_ctor_get(x_312, 1);
lean_inc(x_319);
lean_inc(x_318);
lean_dec(x_312);
x_320 = lean_unbox(x_318);
lean_dec(x_318);
x_321 = l_Bool_toLBool(x_320);
x_322 = lean_box(x_321);
x_323 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_323, 0, x_322);
lean_ctor_set(x_323, 1, x_319);
return x_323;
}
}
else
{
uint8_t x_324; 
x_324 = !lean_is_exclusive(x_312);
if (x_324 == 0)
{
return x_312;
}
else
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; 
x_325 = lean_ctor_get(x_312, 0);
x_326 = lean_ctor_get(x_312, 1);
lean_inc(x_326);
lean_inc(x_325);
lean_dec(x_312);
x_327 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_327, 0, x_325);
lean_ctor_set(x_327, 1, x_326);
return x_327;
}
}
}
}
else
{
uint8_t x_328; 
lean_dec(x_289);
lean_dec(x_283);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_328 = !lean_is_exclusive(x_300);
if (x_328 == 0)
{
return x_300;
}
else
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; 
x_329 = lean_ctor_get(x_300, 0);
x_330 = lean_ctor_get(x_300, 1);
lean_inc(x_330);
lean_inc(x_329);
lean_dec(x_300);
x_331 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_331, 0, x_329);
lean_ctor_set(x_331, 1, x_330);
return x_331;
}
}
}
else
{
uint8_t x_332; 
lean_dec(x_289);
lean_dec(x_283);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_332 = !lean_is_exclusive(x_291);
if (x_332 == 0)
{
return x_291;
}
else
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; 
x_333 = lean_ctor_get(x_291, 0);
x_334 = lean_ctor_get(x_291, 1);
lean_inc(x_334);
lean_inc(x_333);
lean_dec(x_291);
x_335 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_335, 0, x_333);
lean_ctor_set(x_335, 1, x_334);
return x_335;
}
}
}
else
{
uint8_t x_336; 
lean_dec(x_283);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_336 = !lean_is_exclusive(x_288);
if (x_336 == 0)
{
return x_288;
}
else
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_337 = lean_ctor_get(x_288, 0);
x_338 = lean_ctor_get(x_288, 1);
lean_inc(x_338);
lean_inc(x_337);
lean_dec(x_288);
x_339 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_339, 0, x_337);
lean_ctor_set(x_339, 1, x_338);
return x_339;
}
}
}
else
{
lean_object* x_340; lean_object* x_341; 
x_340 = lean_nat_sub(x_284, x_177);
lean_dec(x_177);
lean_dec(x_284);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_341 = l___private_Lean_Meta_Offset_0__Lean_Meta_mkOffset(x_283, x_340, x_3, x_4, x_5, x_6, x_282);
if (lean_obj_tag(x_341) == 0)
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; 
x_342 = lean_ctor_get(x_341, 0);
lean_inc(x_342);
x_343 = lean_ctor_get(x_341, 1);
lean_inc(x_343);
lean_dec(x_341);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_344 = l_Lean_Meta_inferType(x_1, x_3, x_4, x_5, x_6, x_343);
if (lean_obj_tag(x_344) == 0)
{
lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; 
x_345 = lean_ctor_get(x_344, 0);
lean_inc(x_345);
x_346 = lean_ctor_get(x_344, 1);
lean_inc(x_346);
lean_dec(x_344);
x_347 = lean_box(0);
x_348 = lean_mk_string("Nat");
x_349 = lean_name_mk_string(x_347, x_348);
x_350 = lean_box(0);
x_351 = l_Lean_mkConst(x_349, x_350);
x_352 = lean_alloc_closure((void*)(l_Lean_Meta_isExprDefEqAux), 7, 2);
lean_closure_set(x_352, 0, x_345);
lean_closure_set(x_352, 1, x_351);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_353 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_isDefEqOffset___spec__1___rarg(x_352, x_3, x_4, x_5, x_6, x_346);
if (lean_obj_tag(x_353) == 0)
{
lean_object* x_354; uint8_t x_355; 
x_354 = lean_ctor_get(x_353, 0);
lean_inc(x_354);
x_355 = lean_unbox(x_354);
lean_dec(x_354);
if (x_355 == 0)
{
uint8_t x_356; 
lean_dec(x_342);
lean_dec(x_176);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_356 = !lean_is_exclusive(x_353);
if (x_356 == 0)
{
lean_object* x_357; uint8_t x_358; lean_object* x_359; 
x_357 = lean_ctor_get(x_353, 0);
lean_dec(x_357);
x_358 = 2;
x_359 = lean_box(x_358);
lean_ctor_set(x_353, 0, x_359);
return x_353;
}
else
{
lean_object* x_360; uint8_t x_361; lean_object* x_362; lean_object* x_363; 
x_360 = lean_ctor_get(x_353, 1);
lean_inc(x_360);
lean_dec(x_353);
x_361 = 2;
x_362 = lean_box(x_361);
x_363 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_363, 0, x_362);
lean_ctor_set(x_363, 1, x_360);
return x_363;
}
}
else
{
lean_object* x_364; lean_object* x_365; 
x_364 = lean_ctor_get(x_353, 1);
lean_inc(x_364);
lean_dec(x_353);
x_365 = l_Lean_Meta_isExprDefEqAux(x_176, x_342, x_3, x_4, x_5, x_6, x_364);
if (lean_obj_tag(x_365) == 0)
{
uint8_t x_366; 
x_366 = !lean_is_exclusive(x_365);
if (x_366 == 0)
{
lean_object* x_367; uint8_t x_368; uint8_t x_369; lean_object* x_370; 
x_367 = lean_ctor_get(x_365, 0);
x_368 = lean_unbox(x_367);
lean_dec(x_367);
x_369 = l_Bool_toLBool(x_368);
x_370 = lean_box(x_369);
lean_ctor_set(x_365, 0, x_370);
return x_365;
}
else
{
lean_object* x_371; lean_object* x_372; uint8_t x_373; uint8_t x_374; lean_object* x_375; lean_object* x_376; 
x_371 = lean_ctor_get(x_365, 0);
x_372 = lean_ctor_get(x_365, 1);
lean_inc(x_372);
lean_inc(x_371);
lean_dec(x_365);
x_373 = lean_unbox(x_371);
lean_dec(x_371);
x_374 = l_Bool_toLBool(x_373);
x_375 = lean_box(x_374);
x_376 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_376, 0, x_375);
lean_ctor_set(x_376, 1, x_372);
return x_376;
}
}
else
{
uint8_t x_377; 
x_377 = !lean_is_exclusive(x_365);
if (x_377 == 0)
{
return x_365;
}
else
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; 
x_378 = lean_ctor_get(x_365, 0);
x_379 = lean_ctor_get(x_365, 1);
lean_inc(x_379);
lean_inc(x_378);
lean_dec(x_365);
x_380 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_380, 0, x_378);
lean_ctor_set(x_380, 1, x_379);
return x_380;
}
}
}
}
else
{
uint8_t x_381; 
lean_dec(x_342);
lean_dec(x_176);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_381 = !lean_is_exclusive(x_353);
if (x_381 == 0)
{
return x_353;
}
else
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; 
x_382 = lean_ctor_get(x_353, 0);
x_383 = lean_ctor_get(x_353, 1);
lean_inc(x_383);
lean_inc(x_382);
lean_dec(x_353);
x_384 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_384, 0, x_382);
lean_ctor_set(x_384, 1, x_383);
return x_384;
}
}
}
else
{
uint8_t x_385; 
lean_dec(x_342);
lean_dec(x_176);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_385 = !lean_is_exclusive(x_344);
if (x_385 == 0)
{
return x_344;
}
else
{
lean_object* x_386; lean_object* x_387; lean_object* x_388; 
x_386 = lean_ctor_get(x_344, 0);
x_387 = lean_ctor_get(x_344, 1);
lean_inc(x_387);
lean_inc(x_386);
lean_dec(x_344);
x_388 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_388, 0, x_386);
lean_ctor_set(x_388, 1, x_387);
return x_388;
}
}
}
else
{
uint8_t x_389; 
lean_dec(x_176);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_389 = !lean_is_exclusive(x_341);
if (x_389 == 0)
{
return x_341;
}
else
{
lean_object* x_390; lean_object* x_391; lean_object* x_392; 
x_390 = lean_ctor_get(x_341, 0);
x_391 = lean_ctor_get(x_341, 1);
lean_inc(x_391);
lean_inc(x_390);
lean_dec(x_341);
x_392 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_392, 0, x_390);
lean_ctor_set(x_392, 1, x_391);
return x_392;
}
}
}
}
else
{
lean_object* x_393; 
lean_dec(x_284);
lean_dec(x_177);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_393 = l_Lean_Meta_inferType(x_1, x_3, x_4, x_5, x_6, x_282);
if (lean_obj_tag(x_393) == 0)
{
lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; 
x_394 = lean_ctor_get(x_393, 0);
lean_inc(x_394);
x_395 = lean_ctor_get(x_393, 1);
lean_inc(x_395);
lean_dec(x_393);
x_396 = lean_box(0);
x_397 = lean_mk_string("Nat");
x_398 = lean_name_mk_string(x_396, x_397);
x_399 = lean_box(0);
x_400 = l_Lean_mkConst(x_398, x_399);
x_401 = lean_alloc_closure((void*)(l_Lean_Meta_isExprDefEqAux), 7, 2);
lean_closure_set(x_401, 0, x_394);
lean_closure_set(x_401, 1, x_400);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_402 = l_Lean_Meta_withNewMCtxDepth___at_Lean_Meta_isDefEqOffset___spec__1___rarg(x_401, x_3, x_4, x_5, x_6, x_395);
if (lean_obj_tag(x_402) == 0)
{
lean_object* x_403; uint8_t x_404; 
x_403 = lean_ctor_get(x_402, 0);
lean_inc(x_403);
x_404 = lean_unbox(x_403);
lean_dec(x_403);
if (x_404 == 0)
{
uint8_t x_405; 
lean_dec(x_283);
lean_dec(x_176);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_405 = !lean_is_exclusive(x_402);
if (x_405 == 0)
{
lean_object* x_406; uint8_t x_407; lean_object* x_408; 
x_406 = lean_ctor_get(x_402, 0);
lean_dec(x_406);
x_407 = 2;
x_408 = lean_box(x_407);
lean_ctor_set(x_402, 0, x_408);
return x_402;
}
else
{
lean_object* x_409; uint8_t x_410; lean_object* x_411; lean_object* x_412; 
x_409 = lean_ctor_get(x_402, 1);
lean_inc(x_409);
lean_dec(x_402);
x_410 = 2;
x_411 = lean_box(x_410);
x_412 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_412, 0, x_411);
lean_ctor_set(x_412, 1, x_409);
return x_412;
}
}
else
{
lean_object* x_413; lean_object* x_414; 
x_413 = lean_ctor_get(x_402, 1);
lean_inc(x_413);
lean_dec(x_402);
x_414 = l_Lean_Meta_isExprDefEqAux(x_176, x_283, x_3, x_4, x_5, x_6, x_413);
if (lean_obj_tag(x_414) == 0)
{
uint8_t x_415; 
x_415 = !lean_is_exclusive(x_414);
if (x_415 == 0)
{
lean_object* x_416; uint8_t x_417; uint8_t x_418; lean_object* x_419; 
x_416 = lean_ctor_get(x_414, 0);
x_417 = lean_unbox(x_416);
lean_dec(x_416);
x_418 = l_Bool_toLBool(x_417);
x_419 = lean_box(x_418);
lean_ctor_set(x_414, 0, x_419);
return x_414;
}
else
{
lean_object* x_420; lean_object* x_421; uint8_t x_422; uint8_t x_423; lean_object* x_424; lean_object* x_425; 
x_420 = lean_ctor_get(x_414, 0);
x_421 = lean_ctor_get(x_414, 1);
lean_inc(x_421);
lean_inc(x_420);
lean_dec(x_414);
x_422 = lean_unbox(x_420);
lean_dec(x_420);
x_423 = l_Bool_toLBool(x_422);
x_424 = lean_box(x_423);
x_425 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_425, 0, x_424);
lean_ctor_set(x_425, 1, x_421);
return x_425;
}
}
else
{
uint8_t x_426; 
x_426 = !lean_is_exclusive(x_414);
if (x_426 == 0)
{
return x_414;
}
else
{
lean_object* x_427; lean_object* x_428; lean_object* x_429; 
x_427 = lean_ctor_get(x_414, 0);
x_428 = lean_ctor_get(x_414, 1);
lean_inc(x_428);
lean_inc(x_427);
lean_dec(x_414);
x_429 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_429, 0, x_427);
lean_ctor_set(x_429, 1, x_428);
return x_429;
}
}
}
}
else
{
uint8_t x_430; 
lean_dec(x_283);
lean_dec(x_176);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_430 = !lean_is_exclusive(x_402);
if (x_430 == 0)
{
return x_402;
}
else
{
lean_object* x_431; lean_object* x_432; lean_object* x_433; 
x_431 = lean_ctor_get(x_402, 0);
x_432 = lean_ctor_get(x_402, 1);
lean_inc(x_432);
lean_inc(x_431);
lean_dec(x_402);
x_433 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_433, 0, x_431);
lean_ctor_set(x_433, 1, x_432);
return x_433;
}
}
}
else
{
uint8_t x_434; 
lean_dec(x_283);
lean_dec(x_176);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_434 = !lean_is_exclusive(x_393);
if (x_434 == 0)
{
return x_393;
}
else
{
lean_object* x_435; lean_object* x_436; lean_object* x_437; 
x_435 = lean_ctor_get(x_393, 0);
x_436 = lean_ctor_get(x_393, 1);
lean_inc(x_436);
lean_inc(x_435);
lean_dec(x_393);
x_437 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_437, 0, x_435);
lean_ctor_set(x_437, 1, x_436);
return x_437;
}
}
}
}
}
else
{
uint8_t x_438; 
lean_dec(x_177);
lean_dec(x_176);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_438 = !lean_is_exclusive(x_178);
if (x_438 == 0)
{
return x_178;
}
else
{
lean_object* x_439; lean_object* x_440; lean_object* x_441; 
x_439 = lean_ctor_get(x_178, 0);
x_440 = lean_ctor_get(x_178, 1);
lean_inc(x_440);
lean_inc(x_439);
lean_dec(x_178);
x_441 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_441, 0, x_439);
lean_ctor_set(x_441, 1, x_440);
return x_441;
}
}
}
}
else
{
uint8_t x_442; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_442 = !lean_is_exclusive(x_8);
if (x_442 == 0)
{
return x_8;
}
else
{
lean_object* x_443; lean_object* x_444; lean_object* x_445; 
x_443 = lean_ctor_get(x_8, 0);
x_444 = lean_ctor_get(x_8, 1);
lean_inc(x_444);
lean_inc(x_443);
lean_dec(x_8);
x_445 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_445, 0, x_443);
lean_ctor_set(x_445, 1, x_444);
return x_445;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Data_LBool(lean_object*);
lean_object* initialize_Lean_Meta_InferType(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_Offset(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_LBool(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_InferType(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
