// Lean compiler output
// Module: Init.Data.Float
// Imports: Init.Core Init.Data.Int.Basic Init.Data.ToString.Basic
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
lean_object* l_Float_tanh___boxed(lean_object*);
uint8_t l_floatDecLe(double, double);
lean_object* l_instBEqFloat;
double log2(double);
lean_object* l_Float_cosh___boxed(lean_object*);
double sin(double);
double asin(double);
lean_object* l_instLTFloat;
double tan(double);
lean_object* l_Float_ofInt_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_floatSpec___elambda__1(lean_object*, lean_object*);
double lean_float_of_scientific(lean_object*, uint8_t, lean_object*);
double tanh(double);
double lean_float_of_nat(lean_object*);
double l_Nat_toFloat(lean_object*);
lean_object* l_Float_cos___boxed(lean_object*);
lean_object* l_instReprFloat(double, lean_object*);
extern uint8_t l_instDecidableTrue;
lean_object* l_instReprFloat___boxed(lean_object*, lean_object*);
double l_instOfNatFloat(lean_object*);
uint8_t l_Float_beq(double, double);
size_t l_Float_toUSize(double);
double sqrt(double);
lean_object* l_Float_log10___boxed(lean_object*);
lean_object* l_Float_div___boxed(lean_object*, lean_object*);
lean_object* l_Float_pow___boxed(lean_object*, lean_object*);
lean_object* l_Float_toUInt64___boxed(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Float_cbrt___boxed(lean_object*);
lean_object* l_Float_ofInt_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Float_atanh___boxed(lean_object*);
lean_object* l_instReprAtomFloat;
double atanh(double);
uint8_t l_Float_decLe(double, double);
lean_object* l_instNegFloat;
double sinh(double);
lean_object* l_Float_toUInt16___boxed(lean_object*);
lean_object* l_Float_asin___boxed(lean_object*);
lean_object* l_instInhabitedFloat;
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Float_decLt(double, double);
lean_object* l_Float_toUInt32___boxed(lean_object*);
lean_object* l_Float_tan___boxed(lean_object*);
lean_object* l_Float_sinh___boxed(lean_object*);
lean_object* l_Float_ofInt_match__1(lean_object*);
lean_object* l_instAddFloat;
lean_object* l_Float_mul___boxed(lean_object*, lean_object*);
lean_object* l_Float_sin___boxed(lean_object*);
lean_object* l_Float_acos___boxed(lean_object*);
lean_object* l_Float_ofNat___boxed(lean_object*);
lean_object* lean_float_to_string(double);
double l_Float_div(double, double);
lean_object* l_Float_ofScientific___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instToStringFloat;
lean_object* l_Float_decLt___boxed(lean_object*, lean_object*);
double cosh(double);
uint16_t l_Float_toUInt16(double);
double l_Float_sub(double, double);
lean_object* l_floatSpec___elambda__1___boxed(lean_object*, lean_object*);
double l_Float_add(double, double);
double log(double);
lean_object* l_Float_neg___boxed(lean_object*);
lean_object* l_Float_log___boxed(lean_object*);
lean_object* l_instDivFloat;
lean_object* l_instLEFloat;
double log10(double);
lean_object* l_Float_ofInt___boxed(lean_object*);
lean_object* l_Float_atan___boxed(lean_object*);
lean_object* l_Float_toUSize___boxed(lean_object*);
double atan(double);
double atan2(double, double);
double exp(double);
double cos(double);
lean_object* l_Float_exp2___boxed(lean_object*);
lean_object* l_instSubFloat;
lean_object* l_Nat_toFloat___boxed(lean_object*);
double pow(double, double);
lean_object* l_Float_decLe___boxed(lean_object*, lean_object*);
double asinh(double);
double acosh(double);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Float_atan2___boxed(lean_object*, lean_object*);
double acos(double);
lean_object* l_Float_sub___boxed(lean_object*, lean_object*);
double l_Float_neg(double);
lean_object* lean_nat_abs(lean_object*);
double cbrt(double);
lean_object* l_Float_sqrt___boxed(lean_object*);
uint8_t l_floatDecLt(double, double);
lean_object* l_floatSpec;
lean_object* l_floatDecLe___boxed(lean_object*, lean_object*);
lean_object* l_instOfNatFloat___boxed(lean_object*);
lean_object* l_Float_toString___boxed(lean_object*);
double exp2(double);
lean_object* l_instMulFloat;
lean_object* l_Float_beq___boxed(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Float_exp___boxed(lean_object*);
lean_object* l_Float_add___boxed(lean_object*, lean_object*);
uint64_t l_Float_toUInt64(double);
lean_object* l_instPowFloat;
uint32_t l_Float_toUInt32(double);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_floatDecLt___boxed(lean_object*, lean_object*);
uint8_t l_Float_toUInt8(double);
lean_object* l_Float_log2___boxed(lean_object*);
lean_object* l_Float_asinh___boxed(lean_object*);
lean_object* l_Float_toUInt8___boxed(lean_object*);
double l_Float_mul(double, double);
lean_object* l_Float_acosh___boxed(lean_object*);
uint8_t l_floatSpec___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_instDecidableTrue;
return x_3;
}
}
static lean_object* _init_l_floatSpec() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_alloc_closure((void*)(l_floatSpec___elambda__1___boxed), 2, 0);
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 2, x_2);
return x_3;
}
}
lean_object* l_floatSpec___elambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_floatSpec___elambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_instInhabitedFloat() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Float_ofNat___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = lean_float_of_nat(x_1);
lean_dec(x_1);
x_3 = lean_box_float(x_2);
return x_3;
}
}
lean_object* l_Float_add___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; double x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = x_3 + x_4;
x_6 = lean_box_float(x_5);
return x_6;
}
}
lean_object* l_Float_sub___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; double x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = x_3 - x_4;
x_6 = lean_box_float(x_5);
return x_6;
}
}
lean_object* l_Float_mul___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; double x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = x_3 * x_4;
x_6 = lean_box_float(x_5);
return x_6;
}
}
lean_object* l_Float_div___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; double x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = x_3 / x_4;
x_6 = lean_box_float(x_5);
return x_6;
}
}
lean_object* l_Float_neg___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = (- x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_ofInt_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_to_int(x_4);
x_6 = lean_int_dec_lt(x_1, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_7 = lean_nat_abs(x_1);
x_8 = lean_apply_1(x_2, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_2);
x_9 = lean_nat_abs(x_1);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_sub(x_9, x_10);
lean_dec(x_9);
x_12 = lean_apply_1(x_3, x_11);
return x_12;
}
}
}
lean_object* l_Float_ofInt_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Float_ofInt_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Float_ofInt_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Float_ofInt_match__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
double l_Float_ofInt(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_to_int(x_2);
x_4 = lean_int_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; double x_6; 
x_5 = lean_nat_abs(x_1);
x_6 = lean_float_of_nat(x_5);
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; double x_11; double x_12; 
x_7 = lean_nat_abs(x_1);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_7, x_8);
lean_dec(x_7);
x_10 = lean_nat_add(x_9, x_8);
lean_dec(x_9);
x_11 = lean_float_of_nat(x_10);
lean_dec(x_10);
x_12 = (- x_11);
return x_12;
}
}
}
lean_object* l_Float_ofInt___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = l_Float_ofInt(x_1);
lean_dec(x_1);
x_3 = lean_box_float(x_2);
return x_3;
}
}
double l_instOfNatFloat(lean_object* x_1) {
_start:
{
double x_2; 
x_2 = lean_float_of_nat(x_1);
return x_2;
}
}
lean_object* l_instOfNatFloat___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = l_instOfNatFloat(x_1);
lean_dec(x_1);
x_3 = lean_box_float(x_2);
return x_3;
}
}
static lean_object* _init_l_instAddFloat() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Float_add___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instSubFloat() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Float_sub___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instMulFloat() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Float_mul___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instDivFloat() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Float_div___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instNegFloat() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Float_neg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_instLTFloat() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_instLEFloat() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_Float_beq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = x_3 == x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
static lean_object* _init_l_instBEqFloat() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Float_beq___boxed), 2, 0);
return x_1;
}
}
lean_object* l_Float_decLt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = x_3 < x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Float_decLe___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = x_3 <= x_4;
x_6 = lean_box(x_5);
return x_6;
}
}
uint8_t l_floatDecLt(double x_1, double x_2) {
_start:
{
uint8_t x_3; 
x_3 = x_1 < x_2;
return x_3;
}
}
lean_object* l_floatDecLt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = l_floatDecLt(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
uint8_t l_floatDecLe(double x_1, double x_2) {
_start:
{
uint8_t x_3; 
x_3 = x_1 <= x_2;
return x_3;
}
}
lean_object* l_floatDecLe___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = l_floatDecLe(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Float_toString___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = lean_float_to_string(x_2);
return x_3;
}
}
lean_object* l_Float_toUInt8___boxed(lean_object* x_1) {
_start:
{
double x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = (uint8_t)x_2;
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Float_toUInt16___boxed(lean_object* x_1) {
_start:
{
double x_2; uint16_t x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = (uint16_t)x_2;
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Float_toUInt32___boxed(lean_object* x_1) {
_start:
{
double x_2; uint32_t x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = (uint32_t)x_2;
x_4 = lean_box_uint32(x_3);
return x_4;
}
}
lean_object* l_Float_toUInt64___boxed(lean_object* x_1) {
_start:
{
double x_2; uint64_t x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = (uint64_t)x_2;
x_4 = lean_box_uint64(x_3);
return x_4;
}
}
lean_object* l_Float_toUSize___boxed(lean_object* x_1) {
_start:
{
double x_2; size_t x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = (size_t)x_2;
x_4 = lean_box_usize(x_3);
return x_4;
}
}
static lean_object* _init_l_instToStringFloat() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Float_toString___boxed), 1, 0);
return x_1;
}
}
lean_object* l_instReprFloat(double x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_float_to_string(x_1);
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
lean_object* l_instReprFloat___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; lean_object* x_4; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = l_instReprFloat(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_instReprAtomFloat() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
double l_Nat_toFloat(lean_object* x_1) {
_start:
{
double x_2; 
x_2 = lean_float_of_nat(x_1);
return x_2;
}
}
lean_object* l_Nat_toFloat___boxed(lean_object* x_1) {
_start:
{
double x_2; lean_object* x_3; 
x_2 = l_Nat_toFloat(x_1);
lean_dec(x_1);
x_3 = lean_box_float(x_2);
return x_3;
}
}
lean_object* l_Float_sin___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = sin(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_cos___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = cos(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_tan___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = tan(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_asin___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = asin(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_acos___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = acos(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_atan___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = atan(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_atan2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; double x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = atan2(x_3, x_4);
x_6 = lean_box_float(x_5);
return x_6;
}
}
lean_object* l_Float_sinh___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = sinh(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_cosh___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = cosh(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_tanh___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = tanh(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_asinh___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = asinh(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_acosh___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = acosh(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_atanh___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = atanh(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_exp___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = exp(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_exp2___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = exp2(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_log___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = log(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_log2___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = log2(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_log10___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = log10(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_pow___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
double x_3; double x_4; double x_5; lean_object* x_6; 
x_3 = lean_unbox_float(x_1);
lean_dec(x_1);
x_4 = lean_unbox_float(x_2);
lean_dec(x_2);
x_5 = pow(x_3, x_4);
x_6 = lean_box_float(x_5);
return x_6;
}
}
lean_object* l_Float_sqrt___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = sqrt(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
lean_object* l_Float_cbrt___boxed(lean_object* x_1) {
_start:
{
double x_2; double x_3; lean_object* x_4; 
x_2 = lean_unbox_float(x_1);
lean_dec(x_1);
x_3 = cbrt(x_2);
x_4 = lean_box_float(x_3);
return x_4;
}
}
static lean_object* _init_l_instPowFloat() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Float_pow___boxed), 2, 0);
return x_1;
}
}
lean_object* l_Float_ofScientific___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; double x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = lean_float_of_scientific(x_1, x_4, x_3);
x_6 = lean_box_float(x_5);
return x_6;
}
}
lean_object* initialize_Init_Core(lean_object*);
lean_object* initialize_Init_Data_Int_Basic(lean_object*);
lean_object* initialize_Init_Data_ToString_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Data_Float(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Core(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_floatSpec = _init_l_floatSpec();
lean_mark_persistent(l_floatSpec);
l_instInhabitedFloat = _init_l_instInhabitedFloat();
lean_mark_persistent(l_instInhabitedFloat);
l_instAddFloat = _init_l_instAddFloat();
lean_mark_persistent(l_instAddFloat);
l_instSubFloat = _init_l_instSubFloat();
lean_mark_persistent(l_instSubFloat);
l_instMulFloat = _init_l_instMulFloat();
lean_mark_persistent(l_instMulFloat);
l_instDivFloat = _init_l_instDivFloat();
lean_mark_persistent(l_instDivFloat);
l_instNegFloat = _init_l_instNegFloat();
lean_mark_persistent(l_instNegFloat);
l_instLTFloat = _init_l_instLTFloat();
lean_mark_persistent(l_instLTFloat);
l_instLEFloat = _init_l_instLEFloat();
lean_mark_persistent(l_instLEFloat);
l_instBEqFloat = _init_l_instBEqFloat();
lean_mark_persistent(l_instBEqFloat);
l_instToStringFloat = _init_l_instToStringFloat();
lean_mark_persistent(l_instToStringFloat);
l_instReprAtomFloat = _init_l_instReprAtomFloat();
lean_mark_persistent(l_instReprAtomFloat);
l_instPowFloat = _init_l_instPowFloat();
lean_mark_persistent(l_instPowFloat);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
