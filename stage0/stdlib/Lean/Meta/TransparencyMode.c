// Lean compiler output
// Module: Lean.Meta.TransparencyMode
// Imports: Init
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
uint64_t l_Lean_Meta_TransparencyMode_hash(uint8_t);
uint8_t l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_beqTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_11_(uint8_t, uint8_t);
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_beqTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_11__match__1(lean_object*);
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_reprTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_59__match__1(lean_object*);
uint8_t l_Lean_Meta_instInhabitedTransparencyMode;
lean_object* l_Lean_Meta_TransparencyMode_instHashableTransparencyMode;
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_reprTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_59__match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_TransparencyMode_lt___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_reprTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_59_(uint8_t, lean_object*);
lean_object* l_Lean_Meta_instReprTransparencyMode;
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_beqTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_11__match__1___rarg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_reprTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_59____boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_beqTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_11____boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_beqTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_11__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_TransparencyMode_lt_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_reprTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_59__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_TransparencyMode_lt_match__1(lean_object*);
lean_object* l_Lean_Meta_TransparencyMode_hash___boxed(lean_object*);
lean_object* l_Lean_Meta_instBEqTransparencyMode;
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Meta_TransparencyMode_lt_match__1___rarg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
static uint8_t _init_l_Lean_Meta_instInhabitedTransparencyMode() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_beqTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_11__match__1___rarg(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_8 = lean_box(x_2);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_3);
x_11 = lean_box(x_1);
x_12 = lean_box(x_2);
x_13 = lean_apply_2(x_7, x_11, x_12);
return x_13;
}
}
case 1:
{
lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_14 = lean_box(x_2);
if (lean_obj_tag(x_14) == 1)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_7);
x_15 = lean_box(0);
x_16 = lean_apply_1(x_4, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_14);
lean_dec(x_4);
x_17 = lean_box(x_1);
x_18 = lean_box(x_2);
x_19 = lean_apply_2(x_7, x_17, x_18);
return x_19;
}
}
case 2:
{
lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_20 = lean_box(x_2);
if (lean_obj_tag(x_20) == 2)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_7);
x_21 = lean_box(0);
x_22 = lean_apply_1(x_5, x_21);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_5);
x_23 = lean_box(x_1);
x_24 = lean_box(x_2);
x_25 = lean_apply_2(x_7, x_23, x_24);
return x_25;
}
}
default: 
{
lean_object* x_26; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_26 = lean_box(x_2);
if (lean_obj_tag(x_26) == 3)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_7);
x_27 = lean_box(0);
x_28 = lean_apply_1(x_6, x_27);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_26);
lean_dec(x_6);
x_29 = lean_box(x_1);
x_30 = lean_box(x_2);
x_31 = lean_apply_2(x_7, x_29, x_30);
return x_31;
}
}
}
}
}
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_beqTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_11__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_beqTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_11__match__1___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_beqTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_11__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_beqTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_11__match__1___rarg(x_8, x_9, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
uint8_t l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_beqTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_11_(uint8_t x_1, uint8_t x_2) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_3; 
x_3 = lean_box(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
}
case 1:
{
lean_object* x_6; 
x_6 = lean_box(x_2);
if (lean_obj_tag(x_6) == 1)
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_6);
x_8 = 0;
return x_8;
}
}
case 2:
{
lean_object* x_9; 
x_9 = lean_box(x_2);
if (lean_obj_tag(x_9) == 2)
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
else
{
uint8_t x_11; 
lean_dec(x_9);
x_11 = 0;
return x_11;
}
}
default: 
{
lean_object* x_12; 
x_12 = lean_box(x_2);
if (lean_obj_tag(x_12) == 3)
{
uint8_t x_13; 
x_13 = 1;
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_12);
x_14 = 0;
return x_14;
}
}
}
}
}
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_beqTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_11____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_beqTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_11_(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Meta_instBEqTransparencyMode() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_beqTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_11____boxed), 2, 0);
return x_1;
}
}
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_reprTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_59__match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_box(0);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = lean_apply_1(x_4, x_10);
return x_11;
}
default: 
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_apply_1(x_5, x_12);
return x_13;
}
}
}
}
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_reprTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_59__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_reprTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_59__match__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_reprTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_59__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_reprTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_59__match__1___rarg(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_reprTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_59_(uint8_t x_1, lean_object* x_2) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_unsigned_to_nat(1024u);
x_4 = lean_nat_dec_le(x_3, x_2);
x_5 = lean_mk_string("Lean.Meta.TransparencyMode.all");
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
if (x_4 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_unsigned_to_nat(2u);
x_8 = lean_nat_to_int(x_7);
x_9 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
x_10 = 0;
x_11 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set_uint8(x_11, sizeof(void*)*1, x_10);
x_12 = l_Repr_addAppParen(x_11, x_2);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_to_int(x_13);
x_15 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_6);
x_16 = 0;
x_17 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set_uint8(x_17, sizeof(void*)*1, x_16);
x_18 = l_Repr_addAppParen(x_17, x_2);
return x_18;
}
}
case 1:
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_unsigned_to_nat(1024u);
x_20 = lean_nat_dec_le(x_19, x_2);
x_21 = lean_mk_string("Lean.Meta.TransparencyMode.default");
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
if (x_20 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_unsigned_to_nat(2u);
x_24 = lean_nat_to_int(x_23);
x_25 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
x_26 = 0;
x_27 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set_uint8(x_27, sizeof(void*)*1, x_26);
x_28 = l_Repr_addAppParen(x_27, x_2);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_to_int(x_29);
x_31 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_22);
x_32 = 0;
x_33 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set_uint8(x_33, sizeof(void*)*1, x_32);
x_34 = l_Repr_addAppParen(x_33, x_2);
return x_34;
}
}
case 2:
{
lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_unsigned_to_nat(1024u);
x_36 = lean_nat_dec_le(x_35, x_2);
x_37 = lean_mk_string("Lean.Meta.TransparencyMode.reducible");
x_38 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_38, 0, x_37);
if (x_36 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_unsigned_to_nat(2u);
x_40 = lean_nat_to_int(x_39);
x_41 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_38);
x_42 = 0;
x_43 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set_uint8(x_43, sizeof(void*)*1, x_42);
x_44 = l_Repr_addAppParen(x_43, x_2);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; 
x_45 = lean_unsigned_to_nat(1u);
x_46 = lean_nat_to_int(x_45);
x_47 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_38);
x_48 = 0;
x_49 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set_uint8(x_49, sizeof(void*)*1, x_48);
x_50 = l_Repr_addAppParen(x_49, x_2);
return x_50;
}
}
default: 
{
lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_unsigned_to_nat(1024u);
x_52 = lean_nat_dec_le(x_51, x_2);
x_53 = lean_mk_string("Lean.Meta.TransparencyMode.instances");
x_54 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_54, 0, x_53);
if (x_52 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; 
x_55 = lean_unsigned_to_nat(2u);
x_56 = lean_nat_to_int(x_55);
x_57 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
x_58 = 0;
x_59 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set_uint8(x_59, sizeof(void*)*1, x_58);
x_60 = l_Repr_addAppParen(x_59, x_2);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; lean_object* x_65; lean_object* x_66; 
x_61 = lean_unsigned_to_nat(1u);
x_62 = lean_nat_to_int(x_61);
x_63 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_54);
x_64 = 0;
x_65 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set_uint8(x_65, sizeof(void*)*1, x_64);
x_66 = l_Repr_addAppParen(x_65, x_2);
return x_66;
}
}
}
}
}
lean_object* l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_reprTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_59____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_reprTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_59_(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_instReprTransparencyMode() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Meta_TransparencyMode_0__Lean_Meta_reprTransparencyMode____x40_Lean_Meta_TransparencyMode___hyg_59____boxed), 2, 0);
return x_1;
}
}
uint64_t l_Lean_Meta_TransparencyMode_hash(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
uint64_t x_2; 
x_2 = 7;
return x_2;
}
case 1:
{
uint64_t x_3; 
x_3 = 11;
return x_3;
}
case 2:
{
uint64_t x_4; 
x_4 = 13;
return x_4;
}
default: 
{
uint64_t x_5; 
x_5 = 17;
return x_5;
}
}
}
}
lean_object* l_Lean_Meta_TransparencyMode_hash___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint64_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lean_Meta_TransparencyMode_hash(x_2);
x_4 = lean_box_uint64(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_TransparencyMode_instHashableTransparencyMode() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_TransparencyMode_hash___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_TransparencyMode_lt_match__1___rarg(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = lean_box(x_1);
x_11 = lean_box(x_2);
x_12 = lean_apply_2(x_9, x_10, x_11);
return x_12;
}
case 1:
{
lean_object* x_13; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_13 = lean_box(x_2);
switch (lean_obj_tag(x_13)) {
case 0:
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_9);
x_14 = lean_box(0);
x_15 = lean_apply_1(x_8, x_14);
return x_15;
}
case 1:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_8);
x_16 = lean_box(x_2);
x_17 = lean_box(x_2);
x_18 = lean_apply_2(x_9, x_16, x_17);
return x_18;
}
default: 
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_13);
lean_dec(x_8);
x_19 = lean_box(x_1);
x_20 = lean_box(x_2);
x_21 = lean_apply_2(x_9, x_19, x_20);
return x_21;
}
}
}
case 2:
{
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
switch (x_2) {
case 0:
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_3);
x_22 = lean_box(0);
x_23 = lean_apply_1(x_4, x_22);
return x_23;
}
case 1:
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_9);
lean_dec(x_5);
lean_dec(x_4);
x_24 = lean_box(0);
x_25 = lean_apply_1(x_3, x_24);
return x_25;
}
case 2:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_26 = lean_box(x_2);
x_27 = lean_box(x_2);
x_28 = lean_apply_2(x_9, x_26, x_27);
return x_28;
}
default: 
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_3);
x_29 = lean_box(0);
x_30 = lean_apply_1(x_5, x_29);
return x_30;
}
}
}
default: 
{
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
switch (x_2) {
case 0:
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_9);
lean_dec(x_6);
x_31 = lean_box(0);
x_32 = lean_apply_1(x_7, x_31);
return x_32;
}
case 1:
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_9);
lean_dec(x_7);
x_33 = lean_box(0);
x_34 = lean_apply_1(x_6, x_33);
return x_34;
}
case 2:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_7);
lean_dec(x_6);
x_35 = lean_box(x_1);
x_36 = lean_box(x_2);
x_37 = lean_apply_2(x_9, x_35, x_36);
return x_37;
}
default: 
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_7);
lean_dec(x_6);
x_38 = lean_box(x_2);
x_39 = lean_box(x_2);
x_40 = lean_apply_2(x_9, x_38, x_39);
return x_40;
}
}
}
}
}
}
lean_object* l_Lean_Meta_TransparencyMode_lt_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_TransparencyMode_lt_match__1___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_TransparencyMode_lt_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_10 = lean_unbox(x_1);
lean_dec(x_1);
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l_Lean_Meta_TransparencyMode_lt_match__1___rarg(x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t x_1, uint8_t x_2) {
_start:
{
switch (x_1) {
case 0:
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
case 1:
{
lean_object* x_4; 
x_4 = lean_box(x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
}
case 2:
{
lean_object* x_7; 
x_7 = lean_box(x_2);
if (lean_obj_tag(x_7) == 2)
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_7);
x_9 = 1;
return x_9;
}
}
default: 
{
lean_object* x_10; 
x_10 = lean_box(x_2);
switch (lean_obj_tag(x_10)) {
case 2:
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
case 3:
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
default: 
{
uint8_t x_13; 
lean_dec(x_10);
x_13 = 1;
return x_13;
}
}
}
}
}
}
lean_object* l_Lean_Meta_TransparencyMode_lt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_Lean_Meta_TransparencyMode_lt(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* initialize_Init(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_TransparencyMode(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_instInhabitedTransparencyMode = _init_l_Lean_Meta_instInhabitedTransparencyMode();
l_Lean_Meta_instBEqTransparencyMode = _init_l_Lean_Meta_instBEqTransparencyMode();
lean_mark_persistent(l_Lean_Meta_instBEqTransparencyMode);
l_Lean_Meta_instReprTransparencyMode = _init_l_Lean_Meta_instReprTransparencyMode();
lean_mark_persistent(l_Lean_Meta_instReprTransparencyMode);
l_Lean_Meta_TransparencyMode_instHashableTransparencyMode = _init_l_Lean_Meta_TransparencyMode_instHashableTransparencyMode();
lean_mark_persistent(l_Lean_Meta_TransparencyMode_instHashableTransparencyMode);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
