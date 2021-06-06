// Lean compiler output
// Module: Lean.Compiler.IR.Checker
// Imports: Init Lean.Compiler.IR.CompilerM Lean.Compiler.IR.Format
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
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_IR_Checker_checkExpr___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkArg_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_checkFnBody___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_LocalContext_isJP(lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_maxCtorScalarsSize;
lean_object* l_Lean_IR_Checker_markVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkExpr(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_IRType_isStruct(lean_object*);
lean_object* l_Lean_IR_Checker_getType(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkType(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_getUSizeSize___boxed(lean_object*);
lean_object* l_Lean_IR_Checker_checkFullApp___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_LocalContext_isParam(lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkDecl_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_IR_getEnv___rarg(lean_object*);
lean_object* l_Lean_IR_checkDecls___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_getDecl_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_getMaxCtorScalarsSize(lean_object*);
lean_object* l_Lean_IR_Checker_checkJP(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_IRType_isObj(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkExpr_match__1(lean_object*);
lean_object* l_Lean_IR_Decl_name(lean_object*);
lean_object* l_Lean_IR_Checker_checkVar___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_getType(lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_getDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkArgs___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_AltCore_body(lean_object*);
lean_object* l_Lean_IR_Checker_markIndex___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_CheckerContext_localCtx___default;
lean_object* l_Lean_IR_Checker_checkExpr___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_checkDecl_match__1(lean_object*);
uint8_t l_Lean_IR_CtorInfo_isRef(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_checkFnBody___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_addJP(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_getMaxCtorFields___boxed(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_IR_Checker_checkObjVar___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkObjType(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_findCore___at_Lean_IR_Checker_markIndex___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_getDecl___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkPartialApp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkExpr_match__2(lean_object*);
lean_object* l_Lean_IR_LocalContext_addParam(lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Lean_IR_Checker_withParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_IRType_beq(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_checkArgs___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_format_pretty(lean_object*, lean_object*);
lean_object* l_Lean_IR_findEnvDecl_x27(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_markIndex(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkScalarType(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkEqTypes___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkObjType___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_checkDecls(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_CheckerState_foundVars___default;
lean_object* l_Lean_IR_Checker_checkFullApp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_checkDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkArg_match__1(lean_object*);
lean_object* l_Lean_IR_Checker_getMaxCtorScalarsSize___boxed(lean_object*);
uint8_t l_Lean_IR_IRType_isUnion(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_IR_Checker_checkScalarType___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_getType_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_checkDecl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkFullApp___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkObjVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_checkDecls___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_checkArgs___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_markIndex___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkVarType(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_withParams___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_markJP(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkVarType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_IR_LocalContext_isLocalVar(lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(lean_object*);
lean_object* l_Lean_IR_Checker_checkExpr_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkExpr_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_getType___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkPartialApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_markVar___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_markJP___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_LocalContext_addLocal(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_getUSizeSize(lean_object*);
lean_object* l_Lean_IR_Checker_checkFnBody_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_getDecl_match__1(lean_object*);
lean_object* l_Lean_IR_Checker_getMaxCtorFields(lean_object*);
lean_object* l_Lean_IR_checkDecl_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_findCore___at_Lean_IR_Checker_markIndex___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkArgs(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_usizeSize;
lean_object* l_Lean_IR_Checker_checkFnBody(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkFullApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkExpr___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkJP___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkExpr___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_withParams(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_withParams___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkScalarVar___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkDecl_match__1(lean_object*);
lean_object* l_Lean_IR_Checker_checkScalarVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_getType_match__1(lean_object*);
lean_object* l_Lean_IR_Checker_checkType___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_params(lean_object*);
lean_object* l_Lean_IR_Checker_checkEqTypes(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_checkArg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_checkDecls___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_maxCtorFields;
lean_object* l_Lean_IR_Checker_checkFnBody_match__1(lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_IR_mkIndexSet___spec__1(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_Lean_IR_IRType_isScalar(lean_object*);
lean_object* l_Lean_IR_Checker_markIndex___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_Checker_getMaxCtorFields___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(LEAN_MAX_CTOR_FIELDS);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_Checker_maxCtorFields() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_box(LEAN_MAX_CTOR_FIELDS);
return x_2;
}
}
lean_object* l_Lean_IR_Checker_getMaxCtorScalarsSize___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(LEAN_MAX_CTOR_SCALARS_SIZE);
return x_2;
}
}
static lean_object* _init_l_Lean_IR_Checker_maxCtorScalarsSize() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_box(LEAN_MAX_CTOR_SCALARS_SIZE);
return x_2;
}
}
lean_object* l_Lean_IR_Checker_getUSizeSize___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(sizeof(size_t));
return x_2;
}
}
static lean_object* _init_l_Lean_IR_Checker_usizeSize() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_box(sizeof(size_t));
return x_2;
}
}
static lean_object* _init_l_Lean_IR_Checker_CheckerContext_localCtx___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_IR_Checker_CheckerState_foundVars___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_Std_RBNode_findCore___at_Lean_IR_Checker_markIndex___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_1, 3);
x_8 = lean_nat_dec_lt(x_2, x_5);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = lean_nat_dec_eq(x_2, x_5);
if (x_9 == 0)
{
x_1 = x_7;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_inc(x_6);
lean_inc(x_5);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_5);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
x_1 = x_4;
goto _start;
}
}
}
}
lean_object* l_Lean_IR_Checker_markIndex___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = l_Std_RBNode_insert___at_Lean_IR_mkIndexSet___spec__1(x_4, x_1, x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
lean_object* l_Lean_IR_Checker_markIndex(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_RBNode_findCore___at_Lean_IR_Checker_markIndex___spec__1(x_3, x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_Lean_IR_Checker_markIndex___lambda__1(x_1, x_5, x_2, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
x_7 = l_Nat_repr(x_1);
x_8 = lean_mk_string("variable / joinpoint index ");
x_9 = lean_string_append(x_8, x_7);
lean_dec(x_7);
x_10 = lean_mk_string(" has already been used");
x_11 = lean_string_append(x_9, x_10);
lean_dec(x_10);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
}
}
lean_object* l_Std_RBNode_findCore___at_Lean_IR_Checker_markIndex___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_findCore___at_Lean_IR_Checker_markIndex___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_IR_Checker_markIndex___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_Checker_markIndex___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_IR_Checker_markIndex___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_Checker_markIndex(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_Checker_markVar(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_Checker_markIndex(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_IR_Checker_markVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_Checker_markVar(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_Checker_markJP(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_Checker_markIndex(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_IR_Checker_markJP___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_Checker_markJP(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_Checker_getDecl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_IR_Checker_getDecl_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_Checker_getDecl_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_Checker_getDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = l_Lean_IR_findEnvDecl_x27(x_4, x_1, x_5);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = 1;
x_8 = l_Lean_Name_toString(x_1, x_7);
x_9 = lean_mk_string("unknown declaration '");
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = lean_mk_string("'");
x_12 = lean_string_append(x_10, x_11);
lean_dec(x_11);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_3);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_1);
x_15 = lean_ctor_get(x_6, 0);
lean_inc(x_15);
lean_dec(x_6);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_3);
return x_17;
}
}
}
lean_object* l_Lean_IR_Checker_getDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_Checker_getDecl(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_Checker_checkVar(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_Lean_IR_LocalContext_isLocalVar(x_4, x_1);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = l_Lean_IR_LocalContext_isParam(x_4, x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = l_Nat_repr(x_1);
x_8 = lean_mk_string("x_");
x_9 = lean_string_append(x_8, x_7);
lean_dec(x_7);
x_10 = lean_mk_string("unknown variable '");
x_11 = lean_string_append(x_10, x_9);
lean_dec(x_9);
x_12 = lean_mk_string("'");
x_13 = lean_string_append(x_11, x_12);
lean_dec(x_12);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_1);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_3);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_1);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_3);
return x_21;
}
}
}
lean_object* l_Lean_IR_Checker_checkVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_Checker_checkVar(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_Checker_checkJP(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_Lean_IR_LocalContext_isJP(x_4, x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = l_Nat_repr(x_1);
x_7 = lean_mk_string("block_");
x_8 = lean_string_append(x_7, x_6);
lean_dec(x_6);
x_9 = lean_mk_string("unknown join point '");
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = lean_mk_string("'");
x_12 = lean_string_append(x_10, x_11);
lean_dec(x_11);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_3);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_1);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_3);
return x_17;
}
}
}
lean_object* l_Lean_IR_Checker_checkJP___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_Checker_checkJP(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_Checker_checkArg_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_IR_Checker_checkArg_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_Checker_checkArg_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_Checker_checkArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Lean_IR_Checker_checkVar(x_4, x_2, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
}
}
lean_object* l_Lean_IR_Checker_checkArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_Checker_checkArg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_checkArgs___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_8 = lean_array_uget(x_1, x_2);
x_9 = l_Lean_IR_Checker_checkArg(x_8, x_5, x_6);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
x_13 = !lean_is_exclusive(x_10);
if (x_13 == 0)
{
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_dec(x_9);
x_17 = lean_ctor_get(x_10, 0);
lean_inc(x_17);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 x_18 = x_10;
} else {
 lean_dec_ref(x_10);
 x_18 = lean_box(0);
}
if (lean_is_scalar(x_18)) {
 x_19 = lean_alloc_ctor(0, 1, 0);
} else {
 x_19 = x_18;
}
lean_ctor_set(x_19, 0, x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_16);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; 
x_21 = lean_ctor_get(x_9, 1);
lean_inc(x_21);
lean_dec(x_9);
x_22 = lean_ctor_get(x_10, 0);
lean_inc(x_22);
lean_dec(x_10);
x_23 = 1;
x_24 = x_2 + x_23;
x_2 = x_24;
x_4 = x_22;
x_6 = x_21;
goto _start;
}
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_4);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_6);
return x_27;
}
}
}
lean_object* l_Lean_IR_Checker_checkArgs(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = lean_nat_dec_le(x_4, x_4);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; 
x_14 = 0;
x_15 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_16 = lean_box(0);
x_17 = l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_checkArgs___spec__1(x_1, x_14, x_15, x_16, x_2, x_3);
return x_17;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_checkArgs___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_checkArgs___spec__1(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_IR_Checker_checkArgs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_Checker_checkArgs(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_IR_Checker_checkEqTypes(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Lean_IR_IRType_beq(x_1, x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_mk_string("unexpected type");
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_4);
return x_11;
}
}
}
lean_object* l_Lean_IR_Checker_checkEqTypes___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_Checker_checkEqTypes(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_Checker_checkType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_5 = lean_apply_1(x_2, x_1);
x_6 = lean_unbox(x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_1);
x_8 = l_Std_Format_defWidth;
x_9 = lean_format_pretty(x_7, x_8);
x_10 = lean_mk_string("unexpected type '");
x_11 = lean_string_append(x_10, x_9);
lean_dec(x_9);
x_12 = lean_mk_string("'");
x_13 = lean_string_append(x_11, x_12);
lean_dec(x_12);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_4);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_1);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_4);
return x_18;
}
}
}
lean_object* l_Lean_IR_Checker_checkType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_Checker_checkType(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_IR_Checker_checkObjType(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_IR_IRType_isObj(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_1);
x_6 = l_Std_Format_defWidth;
x_7 = lean_format_pretty(x_5, x_6);
x_8 = lean_mk_string("unexpected type '");
x_9 = lean_string_append(x_8, x_7);
lean_dec(x_7);
x_10 = lean_mk_string("'");
x_11 = lean_string_append(x_9, x_10);
lean_dec(x_10);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_3);
return x_16;
}
}
}
lean_object* l_Lean_IR_Checker_checkObjType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_Checker_checkObjType(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_Checker_checkScalarType(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_IR_IRType_isScalar(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_1);
x_6 = l_Std_Format_defWidth;
x_7 = lean_format_pretty(x_5, x_6);
x_8 = lean_mk_string("unexpected type '");
x_9 = lean_string_append(x_8, x_7);
lean_dec(x_7);
x_10 = lean_mk_string("'");
x_11 = lean_string_append(x_9, x_10);
lean_dec(x_10);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_3);
return x_16;
}
}
}
lean_object* l_Lean_IR_Checker_checkScalarType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_Checker_checkScalarType(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_Checker_getType_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_IR_Checker_getType_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_Checker_getType_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_Checker_getType(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 1);
x_5 = l_Lean_IR_LocalContext_getType(x_4, x_1);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = l_Nat_repr(x_1);
x_7 = lean_mk_string("x_");
x_8 = lean_string_append(x_7, x_6);
lean_dec(x_6);
x_9 = lean_mk_string("unknown variable '");
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = lean_mk_string("'");
x_12 = lean_string_append(x_10, x_11);
lean_dec(x_11);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_3);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_1);
x_15 = lean_ctor_get(x_5, 0);
lean_inc(x_15);
lean_dec(x_5);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_3);
return x_17;
}
}
}
lean_object* l_Lean_IR_Checker_getType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_Checker_getType(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_Checker_checkVarType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_IR_Checker_getType(x_1, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
lean_dec(x_2);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_dec(x_8);
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_5, 0, x_11);
return x_5;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
lean_dec(x_5);
x_13 = lean_ctor_get(x_6, 0);
lean_inc(x_13);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 x_14 = x_6;
} else {
 lean_dec_ref(x_6);
 x_14 = lean_box(0);
}
if (lean_is_scalar(x_14)) {
 x_15 = lean_alloc_ctor(0, 1, 0);
} else {
 x_15 = x_14;
}
lean_ctor_set(x_15, 0, x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_12);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_5);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_5, 0);
lean_dec(x_18);
x_19 = !lean_is_exclusive(x_6);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_6, 0);
lean_inc(x_20);
x_21 = lean_apply_1(x_2, x_20);
x_22 = lean_unbox(x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_23 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_20);
x_24 = l_Std_Format_defWidth;
x_25 = lean_format_pretty(x_23, x_24);
x_26 = lean_mk_string("unexpected type '");
x_27 = lean_string_append(x_26, x_25);
lean_dec(x_25);
x_28 = lean_mk_string("'");
x_29 = lean_string_append(x_27, x_28);
lean_dec(x_28);
lean_ctor_set_tag(x_6, 0);
lean_ctor_set(x_6, 0, x_29);
return x_5;
}
else
{
lean_object* x_30; 
lean_dec(x_20);
x_30 = lean_box(0);
lean_ctor_set(x_6, 0, x_30);
return x_5;
}
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_6, 0);
lean_inc(x_31);
lean_dec(x_6);
lean_inc(x_31);
x_32 = lean_apply_1(x_2, x_31);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_34 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_31);
x_35 = l_Std_Format_defWidth;
x_36 = lean_format_pretty(x_34, x_35);
x_37 = lean_mk_string("unexpected type '");
x_38 = lean_string_append(x_37, x_36);
lean_dec(x_36);
x_39 = lean_mk_string("'");
x_40 = lean_string_append(x_38, x_39);
lean_dec(x_39);
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_5, 0, x_41);
return x_5;
}
else
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_31);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_5, 0, x_43);
return x_5;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_44 = lean_ctor_get(x_5, 1);
lean_inc(x_44);
lean_dec(x_5);
x_45 = lean_ctor_get(x_6, 0);
lean_inc(x_45);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 x_46 = x_6;
} else {
 lean_dec_ref(x_6);
 x_46 = lean_box(0);
}
lean_inc(x_45);
x_47 = lean_apply_1(x_2, x_45);
x_48 = lean_unbox(x_47);
lean_dec(x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_49 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_45);
x_50 = l_Std_Format_defWidth;
x_51 = lean_format_pretty(x_49, x_50);
x_52 = lean_mk_string("unexpected type '");
x_53 = lean_string_append(x_52, x_51);
lean_dec(x_51);
x_54 = lean_mk_string("'");
x_55 = lean_string_append(x_53, x_54);
lean_dec(x_54);
if (lean_is_scalar(x_46)) {
 x_56 = lean_alloc_ctor(0, 1, 0);
} else {
 x_56 = x_46;
 lean_ctor_set_tag(x_56, 0);
}
lean_ctor_set(x_56, 0, x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_44);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_45);
x_58 = lean_box(0);
if (lean_is_scalar(x_46)) {
 x_59 = lean_alloc_ctor(1, 1, 0);
} else {
 x_59 = x_46;
}
lean_ctor_set(x_59, 0, x_58);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_44);
return x_60;
}
}
}
}
}
lean_object* l_Lean_IR_Checker_checkVarType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_Checker_checkVarType(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_IR_Checker_checkObjVar(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_IR_Checker_getType(x_1, x_2, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_4, 0);
lean_dec(x_7);
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
return x_4;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_4, 0, x_10);
return x_4;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 x_13 = x_5;
} else {
 lean_dec_ref(x_5);
 x_13 = lean_box(0);
}
if (lean_is_scalar(x_13)) {
 x_14 = lean_alloc_ctor(0, 1, 0);
} else {
 x_14 = x_13;
}
lean_ctor_set(x_14, 0, x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_11);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_4);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_4, 0);
lean_dec(x_17);
x_18 = !lean_is_exclusive(x_5);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_5, 0);
x_20 = l_Lean_IR_IRType_isObj(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_19);
x_22 = l_Std_Format_defWidth;
x_23 = lean_format_pretty(x_21, x_22);
x_24 = lean_mk_string("unexpected type '");
x_25 = lean_string_append(x_24, x_23);
lean_dec(x_23);
x_26 = lean_mk_string("'");
x_27 = lean_string_append(x_25, x_26);
lean_dec(x_26);
lean_ctor_set_tag(x_5, 0);
lean_ctor_set(x_5, 0, x_27);
return x_4;
}
else
{
lean_object* x_28; 
lean_dec(x_19);
x_28 = lean_box(0);
lean_ctor_set(x_5, 0, x_28);
return x_4;
}
}
else
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_5, 0);
lean_inc(x_29);
lean_dec(x_5);
x_30 = l_Lean_IR_IRType_isObj(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_31 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_29);
x_32 = l_Std_Format_defWidth;
x_33 = lean_format_pretty(x_31, x_32);
x_34 = lean_mk_string("unexpected type '");
x_35 = lean_string_append(x_34, x_33);
lean_dec(x_33);
x_36 = lean_mk_string("'");
x_37 = lean_string_append(x_35, x_36);
lean_dec(x_36);
x_38 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_4, 0, x_38);
return x_4;
}
else
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_29);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_4, 0, x_40);
return x_4;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_41 = lean_ctor_get(x_4, 1);
lean_inc(x_41);
lean_dec(x_4);
x_42 = lean_ctor_get(x_5, 0);
lean_inc(x_42);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 x_43 = x_5;
} else {
 lean_dec_ref(x_5);
 x_43 = lean_box(0);
}
x_44 = l_Lean_IR_IRType_isObj(x_42);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_45 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_42);
x_46 = l_Std_Format_defWidth;
x_47 = lean_format_pretty(x_45, x_46);
x_48 = lean_mk_string("unexpected type '");
x_49 = lean_string_append(x_48, x_47);
lean_dec(x_47);
x_50 = lean_mk_string("'");
x_51 = lean_string_append(x_49, x_50);
lean_dec(x_50);
if (lean_is_scalar(x_43)) {
 x_52 = lean_alloc_ctor(0, 1, 0);
} else {
 x_52 = x_43;
 lean_ctor_set_tag(x_52, 0);
}
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_41);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_42);
x_54 = lean_box(0);
if (lean_is_scalar(x_43)) {
 x_55 = lean_alloc_ctor(1, 1, 0);
} else {
 x_55 = x_43;
}
lean_ctor_set(x_55, 0, x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_41);
return x_56;
}
}
}
}
}
lean_object* l_Lean_IR_Checker_checkObjVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_Checker_checkObjVar(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_Checker_checkScalarVar(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_IR_Checker_getType(x_1, x_2, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_4, 0);
lean_dec(x_7);
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
return x_4;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_4, 0, x_10);
return x_4;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_4, 1);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 x_13 = x_5;
} else {
 lean_dec_ref(x_5);
 x_13 = lean_box(0);
}
if (lean_is_scalar(x_13)) {
 x_14 = lean_alloc_ctor(0, 1, 0);
} else {
 x_14 = x_13;
}
lean_ctor_set(x_14, 0, x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_11);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_4);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_4, 0);
lean_dec(x_17);
x_18 = !lean_is_exclusive(x_5);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_5, 0);
x_20 = l_Lean_IR_IRType_isScalar(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_19);
x_22 = l_Std_Format_defWidth;
x_23 = lean_format_pretty(x_21, x_22);
x_24 = lean_mk_string("unexpected type '");
x_25 = lean_string_append(x_24, x_23);
lean_dec(x_23);
x_26 = lean_mk_string("'");
x_27 = lean_string_append(x_25, x_26);
lean_dec(x_26);
lean_ctor_set_tag(x_5, 0);
lean_ctor_set(x_5, 0, x_27);
return x_4;
}
else
{
lean_object* x_28; 
lean_dec(x_19);
x_28 = lean_box(0);
lean_ctor_set(x_5, 0, x_28);
return x_4;
}
}
else
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_5, 0);
lean_inc(x_29);
lean_dec(x_5);
x_30 = l_Lean_IR_IRType_isScalar(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_31 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_29);
x_32 = l_Std_Format_defWidth;
x_33 = lean_format_pretty(x_31, x_32);
x_34 = lean_mk_string("unexpected type '");
x_35 = lean_string_append(x_34, x_33);
lean_dec(x_33);
x_36 = lean_mk_string("'");
x_37 = lean_string_append(x_35, x_36);
lean_dec(x_36);
x_38 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_4, 0, x_38);
return x_4;
}
else
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_29);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_4, 0, x_40);
return x_4;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_41 = lean_ctor_get(x_4, 1);
lean_inc(x_41);
lean_dec(x_4);
x_42 = lean_ctor_get(x_5, 0);
lean_inc(x_42);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 x_43 = x_5;
} else {
 lean_dec_ref(x_5);
 x_43 = lean_box(0);
}
x_44 = l_Lean_IR_IRType_isScalar(x_42);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_45 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_42);
x_46 = l_Std_Format_defWidth;
x_47 = lean_format_pretty(x_45, x_46);
x_48 = lean_mk_string("unexpected type '");
x_49 = lean_string_append(x_48, x_47);
lean_dec(x_47);
x_50 = lean_mk_string("'");
x_51 = lean_string_append(x_49, x_50);
lean_dec(x_50);
if (lean_is_scalar(x_43)) {
 x_52 = lean_alloc_ctor(0, 1, 0);
} else {
 x_52 = x_43;
 lean_ctor_set_tag(x_52, 0);
}
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_41);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_42);
x_54 = lean_box(0);
if (lean_is_scalar(x_43)) {
 x_55 = lean_alloc_ctor(1, 1, 0);
} else {
 x_55 = x_43;
}
lean_ctor_set(x_55, 0, x_54);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_41);
return x_56;
}
}
}
}
}
lean_object* l_Lean_IR_Checker_checkScalarVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_Checker_checkScalarVar(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_IR_Checker_checkFullApp___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_Checker_checkArgs(x_1, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_IR_Checker_checkFullApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_5 = l_Lean_IR_Checker_getDecl(x_1, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_dec(x_8);
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_5, 0, x_11);
return x_5;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
lean_dec(x_5);
x_13 = lean_ctor_get(x_6, 0);
lean_inc(x_13);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 x_14 = x_6;
} else {
 lean_dec_ref(x_6);
 x_14 = lean_box(0);
}
if (lean_is_scalar(x_14)) {
 x_15 = lean_alloc_ctor(0, 1, 0);
} else {
 x_15 = x_14;
}
lean_ctor_set(x_15, 0, x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_12);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_5);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_5, 1);
x_19 = lean_ctor_get(x_5, 0);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_6);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_6, 0);
x_22 = lean_array_get_size(x_2);
x_23 = l_Lean_IR_Decl_params(x_21);
lean_dec(x_21);
x_24 = lean_array_get_size(x_23);
lean_dec(x_23);
x_25 = lean_nat_dec_eq(x_22, x_24);
if (x_25 == 0)
{
uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_26 = 1;
x_27 = l_Lean_Name_toString(x_1, x_26);
x_28 = lean_mk_string("incorrect number of arguments to '");
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
x_30 = lean_mk_string("', ");
x_31 = lean_string_append(x_29, x_30);
lean_dec(x_30);
x_32 = l_Nat_repr(x_22);
x_33 = lean_string_append(x_31, x_32);
lean_dec(x_32);
x_34 = lean_mk_string(" provided, ");
x_35 = lean_string_append(x_33, x_34);
lean_dec(x_34);
x_36 = l_Nat_repr(x_24);
x_37 = lean_string_append(x_35, x_36);
lean_dec(x_36);
x_38 = lean_mk_string(" expected");
x_39 = lean_string_append(x_37, x_38);
lean_dec(x_38);
lean_ctor_set_tag(x_6, 0);
lean_ctor_set(x_6, 0, x_39);
return x_5;
}
else
{
lean_object* x_40; 
lean_dec(x_24);
lean_dec(x_22);
lean_free_object(x_6);
lean_free_object(x_5);
lean_dec(x_1);
x_40 = l_Lean_IR_Checker_checkArgs(x_2, x_3, x_18);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_41 = lean_ctor_get(x_6, 0);
lean_inc(x_41);
lean_dec(x_6);
x_42 = lean_array_get_size(x_2);
x_43 = l_Lean_IR_Decl_params(x_41);
lean_dec(x_41);
x_44 = lean_array_get_size(x_43);
lean_dec(x_43);
x_45 = lean_nat_dec_eq(x_42, x_44);
if (x_45 == 0)
{
uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_46 = 1;
x_47 = l_Lean_Name_toString(x_1, x_46);
x_48 = lean_mk_string("incorrect number of arguments to '");
x_49 = lean_string_append(x_48, x_47);
lean_dec(x_47);
x_50 = lean_mk_string("', ");
x_51 = lean_string_append(x_49, x_50);
lean_dec(x_50);
x_52 = l_Nat_repr(x_42);
x_53 = lean_string_append(x_51, x_52);
lean_dec(x_52);
x_54 = lean_mk_string(" provided, ");
x_55 = lean_string_append(x_53, x_54);
lean_dec(x_54);
x_56 = l_Nat_repr(x_44);
x_57 = lean_string_append(x_55, x_56);
lean_dec(x_56);
x_58 = lean_mk_string(" expected");
x_59 = lean_string_append(x_57, x_58);
lean_dec(x_58);
x_60 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_5, 0, x_60);
return x_5;
}
else
{
lean_object* x_61; 
lean_dec(x_44);
lean_dec(x_42);
lean_free_object(x_5);
lean_dec(x_1);
x_61 = l_Lean_IR_Checker_checkArgs(x_2, x_3, x_18);
return x_61;
}
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_62 = lean_ctor_get(x_5, 1);
lean_inc(x_62);
lean_dec(x_5);
x_63 = lean_ctor_get(x_6, 0);
lean_inc(x_63);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 x_64 = x_6;
} else {
 lean_dec_ref(x_6);
 x_64 = lean_box(0);
}
x_65 = lean_array_get_size(x_2);
x_66 = l_Lean_IR_Decl_params(x_63);
lean_dec(x_63);
x_67 = lean_array_get_size(x_66);
lean_dec(x_66);
x_68 = lean_nat_dec_eq(x_65, x_67);
if (x_68 == 0)
{
uint8_t x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_69 = 1;
x_70 = l_Lean_Name_toString(x_1, x_69);
x_71 = lean_mk_string("incorrect number of arguments to '");
x_72 = lean_string_append(x_71, x_70);
lean_dec(x_70);
x_73 = lean_mk_string("', ");
x_74 = lean_string_append(x_72, x_73);
lean_dec(x_73);
x_75 = l_Nat_repr(x_65);
x_76 = lean_string_append(x_74, x_75);
lean_dec(x_75);
x_77 = lean_mk_string(" provided, ");
x_78 = lean_string_append(x_76, x_77);
lean_dec(x_77);
x_79 = l_Nat_repr(x_67);
x_80 = lean_string_append(x_78, x_79);
lean_dec(x_79);
x_81 = lean_mk_string(" expected");
x_82 = lean_string_append(x_80, x_81);
lean_dec(x_81);
if (lean_is_scalar(x_64)) {
 x_83 = lean_alloc_ctor(0, 1, 0);
} else {
 x_83 = x_64;
 lean_ctor_set_tag(x_83, 0);
}
lean_ctor_set(x_83, 0, x_82);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_62);
return x_84;
}
else
{
lean_object* x_85; 
lean_dec(x_67);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_1);
x_85 = l_Lean_IR_Checker_checkArgs(x_2, x_3, x_62);
return x_85;
}
}
}
}
}
lean_object* l_Lean_IR_Checker_checkFullApp___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_Checker_checkFullApp___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_Checker_checkFullApp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_Checker_checkFullApp(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_IR_Checker_checkPartialApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_5 = l_Lean_IR_Checker_getDecl(x_1, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
lean_dec(x_1);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_dec(x_8);
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 0);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_5, 0, x_11);
return x_5;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
lean_dec(x_5);
x_13 = lean_ctor_get(x_6, 0);
lean_inc(x_13);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 x_14 = x_6;
} else {
 lean_dec_ref(x_6);
 x_14 = lean_box(0);
}
if (lean_is_scalar(x_14)) {
 x_15 = lean_alloc_ctor(0, 1, 0);
} else {
 x_15 = x_14;
}
lean_ctor_set(x_15, 0, x_13);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_12);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_5);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_5, 1);
x_19 = lean_ctor_get(x_5, 0);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_6);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_6, 0);
x_22 = lean_array_get_size(x_2);
x_23 = l_Lean_IR_Decl_params(x_21);
lean_dec(x_21);
x_24 = lean_array_get_size(x_23);
lean_dec(x_23);
x_25 = lean_nat_dec_lt(x_22, x_24);
if (x_25 == 0)
{
uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_26 = 1;
x_27 = l_Lean_Name_toString(x_1, x_26);
x_28 = lean_mk_string("too many arguments too partial application '");
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
x_30 = lean_mk_string("', num. args: ");
x_31 = lean_string_append(x_29, x_30);
lean_dec(x_30);
x_32 = l_Nat_repr(x_22);
x_33 = lean_string_append(x_31, x_32);
lean_dec(x_32);
x_34 = lean_mk_string(", arity: ");
x_35 = lean_string_append(x_33, x_34);
lean_dec(x_34);
x_36 = l_Nat_repr(x_24);
x_37 = lean_string_append(x_35, x_36);
lean_dec(x_36);
x_38 = lean_mk_string("");
x_39 = lean_string_append(x_37, x_38);
lean_dec(x_38);
lean_ctor_set_tag(x_6, 0);
lean_ctor_set(x_6, 0, x_39);
return x_5;
}
else
{
lean_object* x_40; 
lean_dec(x_24);
lean_dec(x_22);
lean_free_object(x_6);
lean_free_object(x_5);
lean_dec(x_1);
x_40 = l_Lean_IR_Checker_checkArgs(x_2, x_3, x_18);
return x_40;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_41 = lean_ctor_get(x_6, 0);
lean_inc(x_41);
lean_dec(x_6);
x_42 = lean_array_get_size(x_2);
x_43 = l_Lean_IR_Decl_params(x_41);
lean_dec(x_41);
x_44 = lean_array_get_size(x_43);
lean_dec(x_43);
x_45 = lean_nat_dec_lt(x_42, x_44);
if (x_45 == 0)
{
uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_46 = 1;
x_47 = l_Lean_Name_toString(x_1, x_46);
x_48 = lean_mk_string("too many arguments too partial application '");
x_49 = lean_string_append(x_48, x_47);
lean_dec(x_47);
x_50 = lean_mk_string("', num. args: ");
x_51 = lean_string_append(x_49, x_50);
lean_dec(x_50);
x_52 = l_Nat_repr(x_42);
x_53 = lean_string_append(x_51, x_52);
lean_dec(x_52);
x_54 = lean_mk_string(", arity: ");
x_55 = lean_string_append(x_53, x_54);
lean_dec(x_54);
x_56 = l_Nat_repr(x_44);
x_57 = lean_string_append(x_55, x_56);
lean_dec(x_56);
x_58 = lean_mk_string("");
x_59 = lean_string_append(x_57, x_58);
lean_dec(x_58);
x_60 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_5, 0, x_60);
return x_5;
}
else
{
lean_object* x_61; 
lean_dec(x_44);
lean_dec(x_42);
lean_free_object(x_5);
lean_dec(x_1);
x_61 = l_Lean_IR_Checker_checkArgs(x_2, x_3, x_18);
return x_61;
}
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_62 = lean_ctor_get(x_5, 1);
lean_inc(x_62);
lean_dec(x_5);
x_63 = lean_ctor_get(x_6, 0);
lean_inc(x_63);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 x_64 = x_6;
} else {
 lean_dec_ref(x_6);
 x_64 = lean_box(0);
}
x_65 = lean_array_get_size(x_2);
x_66 = l_Lean_IR_Decl_params(x_63);
lean_dec(x_63);
x_67 = lean_array_get_size(x_66);
lean_dec(x_66);
x_68 = lean_nat_dec_lt(x_65, x_67);
if (x_68 == 0)
{
uint8_t x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_69 = 1;
x_70 = l_Lean_Name_toString(x_1, x_69);
x_71 = lean_mk_string("too many arguments too partial application '");
x_72 = lean_string_append(x_71, x_70);
lean_dec(x_70);
x_73 = lean_mk_string("', num. args: ");
x_74 = lean_string_append(x_72, x_73);
lean_dec(x_73);
x_75 = l_Nat_repr(x_65);
x_76 = lean_string_append(x_74, x_75);
lean_dec(x_75);
x_77 = lean_mk_string(", arity: ");
x_78 = lean_string_append(x_76, x_77);
lean_dec(x_77);
x_79 = l_Nat_repr(x_67);
x_80 = lean_string_append(x_78, x_79);
lean_dec(x_79);
x_81 = lean_mk_string("");
x_82 = lean_string_append(x_80, x_81);
lean_dec(x_81);
if (lean_is_scalar(x_64)) {
 x_83 = lean_alloc_ctor(0, 1, 0);
} else {
 x_83 = x_64;
 lean_ctor_set_tag(x_83, 0);
}
lean_ctor_set(x_83, 0, x_82);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_62);
return x_84;
}
else
{
lean_object* x_85; 
lean_dec(x_67);
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_1);
x_85 = l_Lean_IR_Checker_checkArgs(x_2, x_3, x_62);
return x_85;
}
}
}
}
}
lean_object* l_Lean_IR_Checker_checkPartialApp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_Checker_checkPartialApp(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_IR_Checker_checkExpr_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 7:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_2, x_7);
return x_8;
}
case 8:
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
case 9:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_2(x_4, x_11, x_12);
return x_13;
}
case 10:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_apply_2(x_5, x_14, x_15);
return x_16;
}
default: 
{
lean_object* x_17; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = lean_apply_1(x_6, x_1);
return x_17;
}
}
}
}
lean_object* l_Lean_IR_Checker_checkExpr_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_Checker_checkExpr_match__1___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_IR_Checker_checkExpr_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_apply_2(x_5, x_17, x_18);
return x_19;
}
case 1:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_apply_2(x_6, x_20, x_21);
return x_22;
}
case 2:
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_23 = lean_ctor_get(x_1, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_1, 1);
lean_inc(x_24);
x_25 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_26 = lean_ctor_get(x_1, 2);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_box(x_25);
x_28 = lean_apply_4(x_7, x_23, x_24, x_27, x_26);
return x_28;
}
case 3:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = lean_ctor_get(x_1, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_1, 1);
lean_inc(x_30);
lean_dec(x_1);
x_31 = lean_apply_2(x_10, x_29, x_30);
return x_31;
}
case 4:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = lean_ctor_get(x_1, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_1, 1);
lean_inc(x_33);
lean_dec(x_1);
x_34 = lean_apply_2(x_11, x_32, x_33);
return x_34;
}
case 5:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = lean_ctor_get(x_1, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 1);
lean_inc(x_36);
x_37 = lean_ctor_get(x_1, 2);
lean_inc(x_37);
lean_dec(x_1);
x_38 = lean_apply_3(x_12, x_35, x_36, x_37);
return x_38;
}
case 6:
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_39 = lean_ctor_get(x_1, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_1, 1);
lean_inc(x_40);
lean_dec(x_1);
x_41 = lean_apply_2(x_4, x_39, x_40);
return x_41;
}
case 7:
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_42 = lean_ctor_get(x_1, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_1, 1);
lean_inc(x_43);
lean_dec(x_1);
x_44 = lean_apply_2(x_2, x_42, x_43);
return x_44;
}
case 8:
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_45 = lean_ctor_get(x_1, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_1, 1);
lean_inc(x_46);
lean_dec(x_1);
x_47 = lean_apply_2(x_3, x_45, x_46);
return x_47;
}
case 9:
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_1, 1);
lean_inc(x_49);
lean_dec(x_1);
x_50 = lean_apply_2(x_8, x_48, x_49);
return x_50;
}
case 10:
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_51 = lean_ctor_get(x_1, 0);
lean_inc(x_51);
lean_dec(x_1);
x_52 = lean_apply_1(x_9, x_51);
return x_52;
}
case 11:
{
lean_object* x_53; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_53 = lean_ctor_get(x_1, 0);
lean_inc(x_53);
lean_dec(x_1);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; 
lean_dec(x_15);
x_54 = lean_apply_1(x_16, x_53);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_16);
x_55 = lean_ctor_get(x_53, 0);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_apply_1(x_15, x_55);
return x_56;
}
}
case 12:
{
lean_object* x_57; lean_object* x_58; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_57 = lean_ctor_get(x_1, 0);
lean_inc(x_57);
lean_dec(x_1);
x_58 = lean_apply_1(x_13, x_57);
return x_58;
}
default: 
{
lean_object* x_59; lean_object* x_60; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_59 = lean_ctor_get(x_1, 0);
lean_inc(x_59);
lean_dec(x_1);
x_60 = lean_apply_1(x_14, x_59);
return x_60;
}
}
}
}
lean_object* l_Lean_IR_Checker_checkExpr_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_Checker_checkExpr_match__2___rarg), 16, 0);
return x_2;
}
}
lean_object* l_Lean_IR_Checker_checkExpr___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = l_Lean_IR_IRType_isStruct(x_1);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = l_Lean_IR_IRType_isUnion(x_1);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = l_Lean_IR_CtorInfo_isRef(x_2);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = l_Lean_IR_Checker_checkObjType(x_1, x_5, x_6);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = !lean_is_exclusive(x_14);
if (x_17 == 0)
{
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_13, 0, x_19);
return x_13;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_dec(x_13);
x_21 = lean_ctor_get(x_14, 0);
lean_inc(x_21);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 x_22 = x_14;
} else {
 lean_dec_ref(x_14);
 x_22 = lean_box(0);
}
if (lean_is_scalar(x_22)) {
 x_23 = lean_alloc_ctor(0, 1, 0);
} else {
 x_23 = x_22;
}
lean_ctor_set(x_23, 0, x_21);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_20);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
x_25 = lean_ctor_get(x_13, 1);
lean_inc(x_25);
lean_dec(x_13);
x_26 = l_Lean_IR_Checker_checkArgs(x_3, x_5, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_6);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_1);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_6);
return x_32;
}
}
}
lean_object* l_Lean_IR_Checker_checkExpr___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_7 = lean_ctor_get(x_2, 4);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 3);
lean_inc(x_8);
x_9 = l_Lean_IR_Checker_usizeSize;
x_10 = lean_nat_mul(x_8, x_9);
lean_dec(x_8);
x_11 = lean_nat_add(x_7, x_10);
lean_dec(x_10);
lean_dec(x_7);
x_12 = l_Lean_IR_Checker_maxCtorScalarsSize;
x_13 = lean_nat_dec_lt(x_12, x_11);
lean_dec(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = l_Lean_IR_Checker_checkExpr___lambda__1(x_1, x_2, x_3, x_14, x_5, x_6);
lean_dec(x_2);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_1);
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
lean_dec(x_2);
x_17 = 1;
x_18 = l_Lean_Name_toString(x_16, x_17);
x_19 = lean_mk_string("constructor '");
x_20 = lean_string_append(x_19, x_18);
lean_dec(x_18);
x_21 = lean_mk_string("' has too many scalar fields");
x_22 = lean_string_append(x_20, x_21);
lean_dec(x_21);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_6);
return x_24;
}
}
}
lean_object* l_Lean_IR_Checker_checkExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_ctor_get(x_5, 2);
lean_inc(x_7);
x_8 = l_Lean_IR_Checker_maxCtorFields;
x_9 = lean_nat_dec_lt(x_8, x_7);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_IR_Checker_checkExpr___lambda__2(x_1, x_5, x_6, x_10, x_3, x_4);
lean_dec(x_6);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_1);
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
x_13 = 1;
x_14 = l_Lean_Name_toString(x_12, x_13);
x_15 = lean_mk_string("constructor '");
x_16 = lean_string_append(x_15, x_14);
lean_dec(x_14);
x_17 = lean_mk_string("' has too many fields");
x_18 = lean_string_append(x_16, x_17);
lean_dec(x_17);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_4);
return x_20;
}
}
case 1:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
lean_dec(x_2);
x_22 = l_Lean_IR_Checker_checkObjVar(x_21, x_3, x_4);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_22);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_22, 0);
lean_dec(x_25);
x_26 = !lean_is_exclusive(x_23);
if (x_26 == 0)
{
return x_22;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_23, 0);
lean_inc(x_27);
lean_dec(x_23);
x_28 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_22, 0, x_28);
return x_22;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_22, 1);
lean_inc(x_29);
lean_dec(x_22);
x_30 = lean_ctor_get(x_23, 0);
lean_inc(x_30);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 x_31 = x_23;
} else {
 lean_dec_ref(x_23);
 x_31 = lean_box(0);
}
if (lean_is_scalar(x_31)) {
 x_32 = lean_alloc_ctor(0, 1, 0);
} else {
 x_32 = x_31;
}
lean_ctor_set(x_32, 0, x_30);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_29);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_23);
x_34 = lean_ctor_get(x_22, 1);
lean_inc(x_34);
lean_dec(x_22);
x_35 = l_Lean_IR_Checker_checkObjType(x_1, x_3, x_34);
return x_35;
}
}
case 2:
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_2, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_2, 2);
lean_inc(x_37);
lean_dec(x_2);
x_38 = l_Lean_IR_Checker_checkObjVar(x_36, x_3, x_4);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
if (lean_obj_tag(x_39) == 0)
{
uint8_t x_40; 
lean_dec(x_37);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_38);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_ctor_get(x_38, 0);
lean_dec(x_41);
x_42 = !lean_is_exclusive(x_39);
if (x_42 == 0)
{
return x_38;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_39, 0);
lean_inc(x_43);
lean_dec(x_39);
x_44 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_38, 0, x_44);
return x_38;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_45 = lean_ctor_get(x_38, 1);
lean_inc(x_45);
lean_dec(x_38);
x_46 = lean_ctor_get(x_39, 0);
lean_inc(x_46);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 x_47 = x_39;
} else {
 lean_dec_ref(x_39);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(0, 1, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_46);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_45);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_39);
x_50 = lean_ctor_get(x_38, 1);
lean_inc(x_50);
lean_dec(x_38);
x_51 = l_Lean_IR_Checker_checkArgs(x_37, x_3, x_50);
lean_dec(x_37);
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
if (lean_obj_tag(x_52) == 0)
{
uint8_t x_53; 
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_51);
if (x_53 == 0)
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_ctor_get(x_51, 0);
lean_dec(x_54);
x_55 = !lean_is_exclusive(x_52);
if (x_55 == 0)
{
return x_51;
}
else
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_52, 0);
lean_inc(x_56);
lean_dec(x_52);
x_57 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_51, 0, x_57);
return x_51;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_58 = lean_ctor_get(x_51, 1);
lean_inc(x_58);
lean_dec(x_51);
x_59 = lean_ctor_get(x_52, 0);
lean_inc(x_59);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 x_60 = x_52;
} else {
 lean_dec_ref(x_52);
 x_60 = lean_box(0);
}
if (lean_is_scalar(x_60)) {
 x_61 = lean_alloc_ctor(0, 1, 0);
} else {
 x_61 = x_60;
}
lean_ctor_set(x_61, 0, x_59);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_58);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_52);
x_63 = lean_ctor_get(x_51, 1);
lean_inc(x_63);
lean_dec(x_51);
x_64 = l_Lean_IR_Checker_checkObjType(x_1, x_3, x_63);
return x_64;
}
}
}
case 3:
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_2, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_2, 1);
lean_inc(x_66);
lean_dec(x_2);
x_67 = l_Lean_IR_Checker_getType(x_66, x_3, x_4);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
if (lean_obj_tag(x_68) == 0)
{
uint8_t x_69; 
lean_dec(x_65);
lean_dec(x_1);
x_69 = !lean_is_exclusive(x_67);
if (x_69 == 0)
{
lean_object* x_70; uint8_t x_71; 
x_70 = lean_ctor_get(x_67, 0);
lean_dec(x_70);
x_71 = !lean_is_exclusive(x_68);
if (x_71 == 0)
{
return x_67;
}
else
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_68, 0);
lean_inc(x_72);
lean_dec(x_68);
x_73 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_67, 0, x_73);
return x_67;
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_74 = lean_ctor_get(x_67, 1);
lean_inc(x_74);
lean_dec(x_67);
x_75 = lean_ctor_get(x_68, 0);
lean_inc(x_75);
if (lean_is_exclusive(x_68)) {
 lean_ctor_release(x_68, 0);
 x_76 = x_68;
} else {
 lean_dec_ref(x_68);
 x_76 = lean_box(0);
}
if (lean_is_scalar(x_76)) {
 x_77 = lean_alloc_ctor(0, 1, 0);
} else {
 x_77 = x_76;
}
lean_ctor_set(x_77, 0, x_75);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_74);
return x_78;
}
}
else
{
uint8_t x_79; 
x_79 = !lean_is_exclusive(x_68);
if (x_79 == 0)
{
lean_object* x_80; 
x_80 = lean_ctor_get(x_68, 0);
switch (lean_obj_tag(x_80)) {
case 7:
{
lean_object* x_81; lean_object* x_82; 
lean_free_object(x_68);
lean_dec(x_65);
x_81 = lean_ctor_get(x_67, 1);
lean_inc(x_81);
lean_dec(x_67);
x_82 = l_Lean_IR_Checker_checkObjType(x_1, x_3, x_81);
return x_82;
}
case 8:
{
lean_object* x_83; lean_object* x_84; 
lean_free_object(x_68);
lean_dec(x_65);
x_83 = lean_ctor_get(x_67, 1);
lean_inc(x_83);
lean_dec(x_67);
x_84 = l_Lean_IR_Checker_checkObjType(x_1, x_3, x_83);
return x_84;
}
case 9:
{
uint8_t x_85; 
x_85 = !lean_is_exclusive(x_67);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_86 = lean_ctor_get(x_67, 0);
lean_dec(x_86);
x_87 = lean_ctor_get(x_80, 1);
lean_inc(x_87);
lean_dec(x_80);
x_88 = lean_array_get_size(x_87);
x_89 = lean_nat_dec_lt(x_65, x_88);
lean_dec(x_88);
if (x_89 == 0)
{
lean_object* x_90; 
lean_dec(x_87);
lean_dec(x_65);
lean_dec(x_1);
x_90 = lean_mk_string("invalid proj index");
lean_ctor_set_tag(x_68, 0);
lean_ctor_set(x_68, 0, x_90);
return x_67;
}
else
{
lean_object* x_91; uint8_t x_92; 
x_91 = lean_array_fget(x_87, x_65);
lean_dec(x_65);
lean_dec(x_87);
x_92 = l_Lean_IR_IRType_beq(x_91, x_1);
lean_dec(x_1);
lean_dec(x_91);
if (x_92 == 0)
{
lean_object* x_93; 
x_93 = lean_mk_string("unexpected type");
lean_ctor_set_tag(x_68, 0);
lean_ctor_set(x_68, 0, x_93);
return x_67;
}
else
{
lean_object* x_94; 
x_94 = lean_box(0);
lean_ctor_set(x_68, 0, x_94);
return x_67;
}
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_95 = lean_ctor_get(x_67, 1);
lean_inc(x_95);
lean_dec(x_67);
x_96 = lean_ctor_get(x_80, 1);
lean_inc(x_96);
lean_dec(x_80);
x_97 = lean_array_get_size(x_96);
x_98 = lean_nat_dec_lt(x_65, x_97);
lean_dec(x_97);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; 
lean_dec(x_96);
lean_dec(x_65);
lean_dec(x_1);
x_99 = lean_mk_string("invalid proj index");
lean_ctor_set_tag(x_68, 0);
lean_ctor_set(x_68, 0, x_99);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_68);
lean_ctor_set(x_100, 1, x_95);
return x_100;
}
else
{
lean_object* x_101; uint8_t x_102; 
x_101 = lean_array_fget(x_96, x_65);
lean_dec(x_65);
lean_dec(x_96);
x_102 = l_Lean_IR_IRType_beq(x_101, x_1);
lean_dec(x_1);
lean_dec(x_101);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; 
x_103 = lean_mk_string("unexpected type");
lean_ctor_set_tag(x_68, 0);
lean_ctor_set(x_68, 0, x_103);
x_104 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_104, 0, x_68);
lean_ctor_set(x_104, 1, x_95);
return x_104;
}
else
{
lean_object* x_105; lean_object* x_106; 
x_105 = lean_box(0);
lean_ctor_set(x_68, 0, x_105);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_68);
lean_ctor_set(x_106, 1, x_95);
return x_106;
}
}
}
}
case 10:
{
uint8_t x_107; 
x_107 = !lean_is_exclusive(x_67);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; 
x_108 = lean_ctor_get(x_67, 0);
lean_dec(x_108);
x_109 = lean_ctor_get(x_80, 1);
lean_inc(x_109);
lean_dec(x_80);
x_110 = lean_array_get_size(x_109);
x_111 = lean_nat_dec_lt(x_65, x_110);
lean_dec(x_110);
if (x_111 == 0)
{
lean_object* x_112; 
lean_dec(x_109);
lean_dec(x_65);
lean_dec(x_1);
x_112 = lean_mk_string("invalid proj index");
lean_ctor_set_tag(x_68, 0);
lean_ctor_set(x_68, 0, x_112);
return x_67;
}
else
{
lean_object* x_113; uint8_t x_114; 
x_113 = lean_array_fget(x_109, x_65);
lean_dec(x_65);
lean_dec(x_109);
x_114 = l_Lean_IR_IRType_beq(x_113, x_1);
lean_dec(x_1);
lean_dec(x_113);
if (x_114 == 0)
{
lean_object* x_115; 
x_115 = lean_mk_string("unexpected type");
lean_ctor_set_tag(x_68, 0);
lean_ctor_set(x_68, 0, x_115);
return x_67;
}
else
{
lean_object* x_116; 
x_116 = lean_box(0);
lean_ctor_set(x_68, 0, x_116);
return x_67;
}
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; 
x_117 = lean_ctor_get(x_67, 1);
lean_inc(x_117);
lean_dec(x_67);
x_118 = lean_ctor_get(x_80, 1);
lean_inc(x_118);
lean_dec(x_80);
x_119 = lean_array_get_size(x_118);
x_120 = lean_nat_dec_lt(x_65, x_119);
lean_dec(x_119);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; 
lean_dec(x_118);
lean_dec(x_65);
lean_dec(x_1);
x_121 = lean_mk_string("invalid proj index");
lean_ctor_set_tag(x_68, 0);
lean_ctor_set(x_68, 0, x_121);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_68);
lean_ctor_set(x_122, 1, x_117);
return x_122;
}
else
{
lean_object* x_123; uint8_t x_124; 
x_123 = lean_array_fget(x_118, x_65);
lean_dec(x_65);
lean_dec(x_118);
x_124 = l_Lean_IR_IRType_beq(x_123, x_1);
lean_dec(x_1);
lean_dec(x_123);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; 
x_125 = lean_mk_string("unexpected type");
lean_ctor_set_tag(x_68, 0);
lean_ctor_set(x_68, 0, x_125);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_68);
lean_ctor_set(x_126, 1, x_117);
return x_126;
}
else
{
lean_object* x_127; lean_object* x_128; 
x_127 = lean_box(0);
lean_ctor_set(x_68, 0, x_127);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_68);
lean_ctor_set(x_128, 1, x_117);
return x_128;
}
}
}
}
default: 
{
uint8_t x_129; 
lean_dec(x_65);
lean_dec(x_1);
x_129 = !lean_is_exclusive(x_67);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_130 = lean_ctor_get(x_67, 0);
lean_dec(x_130);
x_131 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_80);
x_132 = l_Std_Format_defWidth;
x_133 = lean_format_pretty(x_131, x_132);
x_134 = lean_mk_string("unexpected IR type '");
x_135 = lean_string_append(x_134, x_133);
lean_dec(x_133);
x_136 = lean_mk_string("'");
x_137 = lean_string_append(x_135, x_136);
lean_dec(x_136);
lean_ctor_set_tag(x_68, 0);
lean_ctor_set(x_68, 0, x_137);
return x_67;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_138 = lean_ctor_get(x_67, 1);
lean_inc(x_138);
lean_dec(x_67);
x_139 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_80);
x_140 = l_Std_Format_defWidth;
x_141 = lean_format_pretty(x_139, x_140);
x_142 = lean_mk_string("unexpected IR type '");
x_143 = lean_string_append(x_142, x_141);
lean_dec(x_141);
x_144 = lean_mk_string("'");
x_145 = lean_string_append(x_143, x_144);
lean_dec(x_144);
lean_ctor_set_tag(x_68, 0);
lean_ctor_set(x_68, 0, x_145);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_68);
lean_ctor_set(x_146, 1, x_138);
return x_146;
}
}
}
}
else
{
lean_object* x_147; 
x_147 = lean_ctor_get(x_68, 0);
lean_inc(x_147);
lean_dec(x_68);
switch (lean_obj_tag(x_147)) {
case 7:
{
lean_object* x_148; lean_object* x_149; 
lean_dec(x_65);
x_148 = lean_ctor_get(x_67, 1);
lean_inc(x_148);
lean_dec(x_67);
x_149 = l_Lean_IR_Checker_checkObjType(x_1, x_3, x_148);
return x_149;
}
case 8:
{
lean_object* x_150; lean_object* x_151; 
lean_dec(x_65);
x_150 = lean_ctor_get(x_67, 1);
lean_inc(x_150);
lean_dec(x_67);
x_151 = l_Lean_IR_Checker_checkObjType(x_1, x_3, x_150);
return x_151;
}
case 9:
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; uint8_t x_156; 
x_152 = lean_ctor_get(x_67, 1);
lean_inc(x_152);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_153 = x_67;
} else {
 lean_dec_ref(x_67);
 x_153 = lean_box(0);
}
x_154 = lean_ctor_get(x_147, 1);
lean_inc(x_154);
lean_dec(x_147);
x_155 = lean_array_get_size(x_154);
x_156 = lean_nat_dec_lt(x_65, x_155);
lean_dec(x_155);
if (x_156 == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
lean_dec(x_154);
lean_dec(x_65);
lean_dec(x_1);
x_157 = lean_mk_string("invalid proj index");
x_158 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_158, 0, x_157);
if (lean_is_scalar(x_153)) {
 x_159 = lean_alloc_ctor(0, 2, 0);
} else {
 x_159 = x_153;
}
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_152);
return x_159;
}
else
{
lean_object* x_160; uint8_t x_161; 
x_160 = lean_array_fget(x_154, x_65);
lean_dec(x_65);
lean_dec(x_154);
x_161 = l_Lean_IR_IRType_beq(x_160, x_1);
lean_dec(x_1);
lean_dec(x_160);
if (x_161 == 0)
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_162 = lean_mk_string("unexpected type");
x_163 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_163, 0, x_162);
if (lean_is_scalar(x_153)) {
 x_164 = lean_alloc_ctor(0, 2, 0);
} else {
 x_164 = x_153;
}
lean_ctor_set(x_164, 0, x_163);
lean_ctor_set(x_164, 1, x_152);
return x_164;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_165 = lean_box(0);
x_166 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_166, 0, x_165);
if (lean_is_scalar(x_153)) {
 x_167 = lean_alloc_ctor(0, 2, 0);
} else {
 x_167 = x_153;
}
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_152);
return x_167;
}
}
}
case 10:
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; uint8_t x_172; 
x_168 = lean_ctor_get(x_67, 1);
lean_inc(x_168);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_169 = x_67;
} else {
 lean_dec_ref(x_67);
 x_169 = lean_box(0);
}
x_170 = lean_ctor_get(x_147, 1);
lean_inc(x_170);
lean_dec(x_147);
x_171 = lean_array_get_size(x_170);
x_172 = lean_nat_dec_lt(x_65, x_171);
lean_dec(x_171);
if (x_172 == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_170);
lean_dec(x_65);
lean_dec(x_1);
x_173 = lean_mk_string("invalid proj index");
x_174 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_174, 0, x_173);
if (lean_is_scalar(x_169)) {
 x_175 = lean_alloc_ctor(0, 2, 0);
} else {
 x_175 = x_169;
}
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_168);
return x_175;
}
else
{
lean_object* x_176; uint8_t x_177; 
x_176 = lean_array_fget(x_170, x_65);
lean_dec(x_65);
lean_dec(x_170);
x_177 = l_Lean_IR_IRType_beq(x_176, x_1);
lean_dec(x_1);
lean_dec(x_176);
if (x_177 == 0)
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_mk_string("unexpected type");
x_179 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_179, 0, x_178);
if (lean_is_scalar(x_169)) {
 x_180 = lean_alloc_ctor(0, 2, 0);
} else {
 x_180 = x_169;
}
lean_ctor_set(x_180, 0, x_179);
lean_ctor_set(x_180, 1, x_168);
return x_180;
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; 
x_181 = lean_box(0);
x_182 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_182, 0, x_181);
if (lean_is_scalar(x_169)) {
 x_183 = lean_alloc_ctor(0, 2, 0);
} else {
 x_183 = x_169;
}
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_183, 1, x_168);
return x_183;
}
}
}
default: 
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
lean_dec(x_65);
lean_dec(x_1);
x_184 = lean_ctor_get(x_67, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_185 = x_67;
} else {
 lean_dec_ref(x_67);
 x_185 = lean_box(0);
}
x_186 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_147);
x_187 = l_Std_Format_defWidth;
x_188 = lean_format_pretty(x_186, x_187);
x_189 = lean_mk_string("unexpected IR type '");
x_190 = lean_string_append(x_189, x_188);
lean_dec(x_188);
x_191 = lean_mk_string("'");
x_192 = lean_string_append(x_190, x_191);
lean_dec(x_191);
x_193 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_193, 0, x_192);
if (lean_is_scalar(x_185)) {
 x_194 = lean_alloc_ctor(0, 2, 0);
} else {
 x_194 = x_185;
}
lean_ctor_set(x_194, 0, x_193);
lean_ctor_set(x_194, 1, x_184);
return x_194;
}
}
}
}
}
case 4:
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_195 = lean_ctor_get(x_2, 1);
lean_inc(x_195);
lean_dec(x_2);
x_196 = l_Lean_IR_Checker_checkObjVar(x_195, x_3, x_4);
x_197 = lean_ctor_get(x_196, 0);
lean_inc(x_197);
if (lean_obj_tag(x_197) == 0)
{
uint8_t x_198; 
lean_dec(x_1);
x_198 = !lean_is_exclusive(x_196);
if (x_198 == 0)
{
lean_object* x_199; uint8_t x_200; 
x_199 = lean_ctor_get(x_196, 0);
lean_dec(x_199);
x_200 = !lean_is_exclusive(x_197);
if (x_200 == 0)
{
return x_196;
}
else
{
lean_object* x_201; lean_object* x_202; 
x_201 = lean_ctor_get(x_197, 0);
lean_inc(x_201);
lean_dec(x_197);
x_202 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_196, 0, x_202);
return x_196;
}
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; 
x_203 = lean_ctor_get(x_196, 1);
lean_inc(x_203);
lean_dec(x_196);
x_204 = lean_ctor_get(x_197, 0);
lean_inc(x_204);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 x_205 = x_197;
} else {
 lean_dec_ref(x_197);
 x_205 = lean_box(0);
}
if (lean_is_scalar(x_205)) {
 x_206 = lean_alloc_ctor(0, 1, 0);
} else {
 x_206 = x_205;
}
lean_ctor_set(x_206, 0, x_204);
x_207 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_207, 0, x_206);
lean_ctor_set(x_207, 1, x_203);
return x_207;
}
}
else
{
uint8_t x_208; 
x_208 = !lean_is_exclusive(x_197);
if (x_208 == 0)
{
lean_object* x_209; uint8_t x_210; 
x_209 = lean_ctor_get(x_197, 0);
lean_dec(x_209);
x_210 = !lean_is_exclusive(x_196);
if (x_210 == 0)
{
lean_object* x_211; lean_object* x_212; uint8_t x_213; 
x_211 = lean_ctor_get(x_196, 0);
lean_dec(x_211);
x_212 = lean_box(5);
x_213 = l_Lean_IR_IRType_beq(x_1, x_212);
if (x_213 == 0)
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_214 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_1);
x_215 = l_Std_Format_defWidth;
x_216 = lean_format_pretty(x_214, x_215);
x_217 = lean_mk_string("unexpected type '");
x_218 = lean_string_append(x_217, x_216);
lean_dec(x_216);
x_219 = lean_mk_string("'");
x_220 = lean_string_append(x_218, x_219);
lean_dec(x_219);
lean_ctor_set_tag(x_197, 0);
lean_ctor_set(x_197, 0, x_220);
return x_196;
}
else
{
lean_object* x_221; 
lean_dec(x_1);
x_221 = lean_box(0);
lean_ctor_set(x_197, 0, x_221);
return x_196;
}
}
else
{
lean_object* x_222; lean_object* x_223; uint8_t x_224; 
x_222 = lean_ctor_get(x_196, 1);
lean_inc(x_222);
lean_dec(x_196);
x_223 = lean_box(5);
x_224 = l_Lean_IR_IRType_beq(x_1, x_223);
if (x_224 == 0)
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_225 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_1);
x_226 = l_Std_Format_defWidth;
x_227 = lean_format_pretty(x_225, x_226);
x_228 = lean_mk_string("unexpected type '");
x_229 = lean_string_append(x_228, x_227);
lean_dec(x_227);
x_230 = lean_mk_string("'");
x_231 = lean_string_append(x_229, x_230);
lean_dec(x_230);
lean_ctor_set_tag(x_197, 0);
lean_ctor_set(x_197, 0, x_231);
x_232 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_232, 0, x_197);
lean_ctor_set(x_232, 1, x_222);
return x_232;
}
else
{
lean_object* x_233; lean_object* x_234; 
lean_dec(x_1);
x_233 = lean_box(0);
lean_ctor_set(x_197, 0, x_233);
x_234 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_234, 0, x_197);
lean_ctor_set(x_234, 1, x_222);
return x_234;
}
}
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; uint8_t x_238; 
lean_dec(x_197);
x_235 = lean_ctor_get(x_196, 1);
lean_inc(x_235);
if (lean_is_exclusive(x_196)) {
 lean_ctor_release(x_196, 0);
 lean_ctor_release(x_196, 1);
 x_236 = x_196;
} else {
 lean_dec_ref(x_196);
 x_236 = lean_box(0);
}
x_237 = lean_box(5);
x_238 = l_Lean_IR_IRType_beq(x_1, x_237);
if (x_238 == 0)
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_239 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_1);
x_240 = l_Std_Format_defWidth;
x_241 = lean_format_pretty(x_239, x_240);
x_242 = lean_mk_string("unexpected type '");
x_243 = lean_string_append(x_242, x_241);
lean_dec(x_241);
x_244 = lean_mk_string("'");
x_245 = lean_string_append(x_243, x_244);
lean_dec(x_244);
x_246 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_246, 0, x_245);
if (lean_is_scalar(x_236)) {
 x_247 = lean_alloc_ctor(0, 2, 0);
} else {
 x_247 = x_236;
}
lean_ctor_set(x_247, 0, x_246);
lean_ctor_set(x_247, 1, x_235);
return x_247;
}
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; 
lean_dec(x_1);
x_248 = lean_box(0);
x_249 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_249, 0, x_248);
if (lean_is_scalar(x_236)) {
 x_250 = lean_alloc_ctor(0, 2, 0);
} else {
 x_250 = x_236;
}
lean_ctor_set(x_250, 0, x_249);
lean_ctor_set(x_250, 1, x_235);
return x_250;
}
}
}
}
case 5:
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_251 = lean_ctor_get(x_2, 2);
lean_inc(x_251);
lean_dec(x_2);
x_252 = l_Lean_IR_Checker_checkObjVar(x_251, x_3, x_4);
x_253 = lean_ctor_get(x_252, 0);
lean_inc(x_253);
if (lean_obj_tag(x_253) == 0)
{
uint8_t x_254; 
lean_dec(x_1);
x_254 = !lean_is_exclusive(x_252);
if (x_254 == 0)
{
lean_object* x_255; uint8_t x_256; 
x_255 = lean_ctor_get(x_252, 0);
lean_dec(x_255);
x_256 = !lean_is_exclusive(x_253);
if (x_256 == 0)
{
return x_252;
}
else
{
lean_object* x_257; lean_object* x_258; 
x_257 = lean_ctor_get(x_253, 0);
lean_inc(x_257);
lean_dec(x_253);
x_258 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_258, 0, x_257);
lean_ctor_set(x_252, 0, x_258);
return x_252;
}
}
else
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
x_259 = lean_ctor_get(x_252, 1);
lean_inc(x_259);
lean_dec(x_252);
x_260 = lean_ctor_get(x_253, 0);
lean_inc(x_260);
if (lean_is_exclusive(x_253)) {
 lean_ctor_release(x_253, 0);
 x_261 = x_253;
} else {
 lean_dec_ref(x_253);
 x_261 = lean_box(0);
}
if (lean_is_scalar(x_261)) {
 x_262 = lean_alloc_ctor(0, 1, 0);
} else {
 x_262 = x_261;
}
lean_ctor_set(x_262, 0, x_260);
x_263 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_263, 0, x_262);
lean_ctor_set(x_263, 1, x_259);
return x_263;
}
}
else
{
lean_object* x_264; lean_object* x_265; 
lean_dec(x_253);
x_264 = lean_ctor_get(x_252, 1);
lean_inc(x_264);
lean_dec(x_252);
x_265 = l_Lean_IR_Checker_checkScalarType(x_1, x_3, x_264);
return x_265;
}
}
case 6:
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; 
lean_dec(x_1);
x_266 = lean_ctor_get(x_2, 0);
lean_inc(x_266);
x_267 = lean_ctor_get(x_2, 1);
lean_inc(x_267);
lean_dec(x_2);
x_268 = l_Lean_IR_Checker_checkFullApp(x_266, x_267, x_3, x_4);
lean_dec(x_267);
return x_268;
}
case 7:
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; 
x_269 = lean_ctor_get(x_2, 0);
lean_inc(x_269);
x_270 = lean_ctor_get(x_2, 1);
lean_inc(x_270);
lean_dec(x_2);
x_271 = l_Lean_IR_Checker_checkPartialApp(x_269, x_270, x_3, x_4);
lean_dec(x_270);
x_272 = lean_ctor_get(x_271, 0);
lean_inc(x_272);
if (lean_obj_tag(x_272) == 0)
{
uint8_t x_273; 
lean_dec(x_1);
x_273 = !lean_is_exclusive(x_271);
if (x_273 == 0)
{
lean_object* x_274; uint8_t x_275; 
x_274 = lean_ctor_get(x_271, 0);
lean_dec(x_274);
x_275 = !lean_is_exclusive(x_272);
if (x_275 == 0)
{
return x_271;
}
else
{
lean_object* x_276; lean_object* x_277; 
x_276 = lean_ctor_get(x_272, 0);
lean_inc(x_276);
lean_dec(x_272);
x_277 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_277, 0, x_276);
lean_ctor_set(x_271, 0, x_277);
return x_271;
}
}
else
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_278 = lean_ctor_get(x_271, 1);
lean_inc(x_278);
lean_dec(x_271);
x_279 = lean_ctor_get(x_272, 0);
lean_inc(x_279);
if (lean_is_exclusive(x_272)) {
 lean_ctor_release(x_272, 0);
 x_280 = x_272;
} else {
 lean_dec_ref(x_272);
 x_280 = lean_box(0);
}
if (lean_is_scalar(x_280)) {
 x_281 = lean_alloc_ctor(0, 1, 0);
} else {
 x_281 = x_280;
}
lean_ctor_set(x_281, 0, x_279);
x_282 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_282, 0, x_281);
lean_ctor_set(x_282, 1, x_278);
return x_282;
}
}
else
{
lean_object* x_283; lean_object* x_284; 
lean_dec(x_272);
x_283 = lean_ctor_get(x_271, 1);
lean_inc(x_283);
lean_dec(x_271);
x_284 = l_Lean_IR_Checker_checkObjType(x_1, x_3, x_283);
return x_284;
}
}
case 8:
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; 
lean_dec(x_1);
x_285 = lean_ctor_get(x_2, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_2, 1);
lean_inc(x_286);
lean_dec(x_2);
x_287 = l_Lean_IR_Checker_checkObjVar(x_285, x_3, x_4);
x_288 = lean_ctor_get(x_287, 0);
lean_inc(x_288);
if (lean_obj_tag(x_288) == 0)
{
uint8_t x_289; 
lean_dec(x_286);
x_289 = !lean_is_exclusive(x_287);
if (x_289 == 0)
{
lean_object* x_290; uint8_t x_291; 
x_290 = lean_ctor_get(x_287, 0);
lean_dec(x_290);
x_291 = !lean_is_exclusive(x_288);
if (x_291 == 0)
{
return x_287;
}
else
{
lean_object* x_292; lean_object* x_293; 
x_292 = lean_ctor_get(x_288, 0);
lean_inc(x_292);
lean_dec(x_288);
x_293 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_293, 0, x_292);
lean_ctor_set(x_287, 0, x_293);
return x_287;
}
}
else
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; 
x_294 = lean_ctor_get(x_287, 1);
lean_inc(x_294);
lean_dec(x_287);
x_295 = lean_ctor_get(x_288, 0);
lean_inc(x_295);
if (lean_is_exclusive(x_288)) {
 lean_ctor_release(x_288, 0);
 x_296 = x_288;
} else {
 lean_dec_ref(x_288);
 x_296 = lean_box(0);
}
if (lean_is_scalar(x_296)) {
 x_297 = lean_alloc_ctor(0, 1, 0);
} else {
 x_297 = x_296;
}
lean_ctor_set(x_297, 0, x_295);
x_298 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_298, 0, x_297);
lean_ctor_set(x_298, 1, x_294);
return x_298;
}
}
else
{
lean_object* x_299; lean_object* x_300; 
lean_dec(x_288);
x_299 = lean_ctor_get(x_287, 1);
lean_inc(x_299);
lean_dec(x_287);
x_300 = l_Lean_IR_Checker_checkArgs(x_286, x_3, x_299);
lean_dec(x_286);
return x_300;
}
}
case 9:
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; 
x_301 = lean_ctor_get(x_2, 0);
lean_inc(x_301);
x_302 = lean_ctor_get(x_2, 1);
lean_inc(x_302);
lean_dec(x_2);
x_303 = l_Lean_IR_Checker_checkObjType(x_1, x_3, x_4);
x_304 = lean_ctor_get(x_303, 0);
lean_inc(x_304);
if (lean_obj_tag(x_304) == 0)
{
uint8_t x_305; 
lean_dec(x_302);
lean_dec(x_301);
x_305 = !lean_is_exclusive(x_303);
if (x_305 == 0)
{
lean_object* x_306; uint8_t x_307; 
x_306 = lean_ctor_get(x_303, 0);
lean_dec(x_306);
x_307 = !lean_is_exclusive(x_304);
if (x_307 == 0)
{
return x_303;
}
else
{
lean_object* x_308; lean_object* x_309; 
x_308 = lean_ctor_get(x_304, 0);
lean_inc(x_308);
lean_dec(x_304);
x_309 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_309, 0, x_308);
lean_ctor_set(x_303, 0, x_309);
return x_303;
}
}
else
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; 
x_310 = lean_ctor_get(x_303, 1);
lean_inc(x_310);
lean_dec(x_303);
x_311 = lean_ctor_get(x_304, 0);
lean_inc(x_311);
if (lean_is_exclusive(x_304)) {
 lean_ctor_release(x_304, 0);
 x_312 = x_304;
} else {
 lean_dec_ref(x_304);
 x_312 = lean_box(0);
}
if (lean_is_scalar(x_312)) {
 x_313 = lean_alloc_ctor(0, 1, 0);
} else {
 x_313 = x_312;
}
lean_ctor_set(x_313, 0, x_311);
x_314 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_314, 0, x_313);
lean_ctor_set(x_314, 1, x_310);
return x_314;
}
}
else
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; 
lean_dec(x_304);
x_315 = lean_ctor_get(x_303, 1);
lean_inc(x_315);
lean_dec(x_303);
lean_inc(x_302);
x_316 = l_Lean_IR_Checker_checkScalarVar(x_302, x_3, x_315);
x_317 = lean_ctor_get(x_316, 0);
lean_inc(x_317);
if (lean_obj_tag(x_317) == 0)
{
uint8_t x_318; 
lean_dec(x_302);
lean_dec(x_301);
x_318 = !lean_is_exclusive(x_316);
if (x_318 == 0)
{
lean_object* x_319; uint8_t x_320; 
x_319 = lean_ctor_get(x_316, 0);
lean_dec(x_319);
x_320 = !lean_is_exclusive(x_317);
if (x_320 == 0)
{
return x_316;
}
else
{
lean_object* x_321; lean_object* x_322; 
x_321 = lean_ctor_get(x_317, 0);
lean_inc(x_321);
lean_dec(x_317);
x_322 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_322, 0, x_321);
lean_ctor_set(x_316, 0, x_322);
return x_316;
}
}
else
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; 
x_323 = lean_ctor_get(x_316, 1);
lean_inc(x_323);
lean_dec(x_316);
x_324 = lean_ctor_get(x_317, 0);
lean_inc(x_324);
if (lean_is_exclusive(x_317)) {
 lean_ctor_release(x_317, 0);
 x_325 = x_317;
} else {
 lean_dec_ref(x_317);
 x_325 = lean_box(0);
}
if (lean_is_scalar(x_325)) {
 x_326 = lean_alloc_ctor(0, 1, 0);
} else {
 x_326 = x_325;
}
lean_ctor_set(x_326, 0, x_324);
x_327 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_327, 0, x_326);
lean_ctor_set(x_327, 1, x_323);
return x_327;
}
}
else
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; 
lean_dec(x_317);
x_328 = lean_ctor_get(x_316, 1);
lean_inc(x_328);
lean_dec(x_316);
x_329 = l_Lean_IR_Checker_getType(x_302, x_3, x_328);
x_330 = lean_ctor_get(x_329, 0);
lean_inc(x_330);
if (lean_obj_tag(x_330) == 0)
{
uint8_t x_331; 
lean_dec(x_301);
x_331 = !lean_is_exclusive(x_329);
if (x_331 == 0)
{
lean_object* x_332; uint8_t x_333; 
x_332 = lean_ctor_get(x_329, 0);
lean_dec(x_332);
x_333 = !lean_is_exclusive(x_330);
if (x_333 == 0)
{
return x_329;
}
else
{
lean_object* x_334; lean_object* x_335; 
x_334 = lean_ctor_get(x_330, 0);
lean_inc(x_334);
lean_dec(x_330);
x_335 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_335, 0, x_334);
lean_ctor_set(x_329, 0, x_335);
return x_329;
}
}
else
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; 
x_336 = lean_ctor_get(x_329, 1);
lean_inc(x_336);
lean_dec(x_329);
x_337 = lean_ctor_get(x_330, 0);
lean_inc(x_337);
if (lean_is_exclusive(x_330)) {
 lean_ctor_release(x_330, 0);
 x_338 = x_330;
} else {
 lean_dec_ref(x_330);
 x_338 = lean_box(0);
}
if (lean_is_scalar(x_338)) {
 x_339 = lean_alloc_ctor(0, 1, 0);
} else {
 x_339 = x_338;
}
lean_ctor_set(x_339, 0, x_337);
x_340 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_340, 0, x_339);
lean_ctor_set(x_340, 1, x_336);
return x_340;
}
}
else
{
uint8_t x_341; 
x_341 = !lean_is_exclusive(x_329);
if (x_341 == 0)
{
lean_object* x_342; uint8_t x_343; 
x_342 = lean_ctor_get(x_329, 0);
lean_dec(x_342);
x_343 = !lean_is_exclusive(x_330);
if (x_343 == 0)
{
lean_object* x_344; uint8_t x_345; 
x_344 = lean_ctor_get(x_330, 0);
x_345 = l_Lean_IR_IRType_beq(x_344, x_301);
lean_dec(x_301);
if (x_345 == 0)
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; 
x_346 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_344);
x_347 = l_Std_Format_defWidth;
x_348 = lean_format_pretty(x_346, x_347);
x_349 = lean_mk_string("unexpected type '");
x_350 = lean_string_append(x_349, x_348);
lean_dec(x_348);
x_351 = lean_mk_string("'");
x_352 = lean_string_append(x_350, x_351);
lean_dec(x_351);
lean_ctor_set_tag(x_330, 0);
lean_ctor_set(x_330, 0, x_352);
return x_329;
}
else
{
lean_object* x_353; 
lean_dec(x_344);
x_353 = lean_box(0);
lean_ctor_set(x_330, 0, x_353);
return x_329;
}
}
else
{
lean_object* x_354; uint8_t x_355; 
x_354 = lean_ctor_get(x_330, 0);
lean_inc(x_354);
lean_dec(x_330);
x_355 = l_Lean_IR_IRType_beq(x_354, x_301);
lean_dec(x_301);
if (x_355 == 0)
{
lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; 
x_356 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_354);
x_357 = l_Std_Format_defWidth;
x_358 = lean_format_pretty(x_356, x_357);
x_359 = lean_mk_string("unexpected type '");
x_360 = lean_string_append(x_359, x_358);
lean_dec(x_358);
x_361 = lean_mk_string("'");
x_362 = lean_string_append(x_360, x_361);
lean_dec(x_361);
x_363 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_363, 0, x_362);
lean_ctor_set(x_329, 0, x_363);
return x_329;
}
else
{
lean_object* x_364; lean_object* x_365; 
lean_dec(x_354);
x_364 = lean_box(0);
x_365 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_365, 0, x_364);
lean_ctor_set(x_329, 0, x_365);
return x_329;
}
}
}
else
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; uint8_t x_369; 
x_366 = lean_ctor_get(x_329, 1);
lean_inc(x_366);
lean_dec(x_329);
x_367 = lean_ctor_get(x_330, 0);
lean_inc(x_367);
if (lean_is_exclusive(x_330)) {
 lean_ctor_release(x_330, 0);
 x_368 = x_330;
} else {
 lean_dec_ref(x_330);
 x_368 = lean_box(0);
}
x_369 = l_Lean_IR_IRType_beq(x_367, x_301);
lean_dec(x_301);
if (x_369 == 0)
{
lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; 
x_370 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_367);
x_371 = l_Std_Format_defWidth;
x_372 = lean_format_pretty(x_370, x_371);
x_373 = lean_mk_string("unexpected type '");
x_374 = lean_string_append(x_373, x_372);
lean_dec(x_372);
x_375 = lean_mk_string("'");
x_376 = lean_string_append(x_374, x_375);
lean_dec(x_375);
if (lean_is_scalar(x_368)) {
 x_377 = lean_alloc_ctor(0, 1, 0);
} else {
 x_377 = x_368;
 lean_ctor_set_tag(x_377, 0);
}
lean_ctor_set(x_377, 0, x_376);
x_378 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_378, 0, x_377);
lean_ctor_set(x_378, 1, x_366);
return x_378;
}
else
{
lean_object* x_379; lean_object* x_380; lean_object* x_381; 
lean_dec(x_367);
x_379 = lean_box(0);
if (lean_is_scalar(x_368)) {
 x_380 = lean_alloc_ctor(1, 1, 0);
} else {
 x_380 = x_368;
}
lean_ctor_set(x_380, 0, x_379);
x_381 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_381, 0, x_380);
lean_ctor_set(x_381, 1, x_366);
return x_381;
}
}
}
}
}
}
case 10:
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; 
x_382 = lean_ctor_get(x_2, 0);
lean_inc(x_382);
lean_dec(x_2);
x_383 = l_Lean_IR_Checker_checkScalarType(x_1, x_3, x_4);
x_384 = lean_ctor_get(x_383, 0);
lean_inc(x_384);
if (lean_obj_tag(x_384) == 0)
{
uint8_t x_385; 
lean_dec(x_382);
x_385 = !lean_is_exclusive(x_383);
if (x_385 == 0)
{
lean_object* x_386; uint8_t x_387; 
x_386 = lean_ctor_get(x_383, 0);
lean_dec(x_386);
x_387 = !lean_is_exclusive(x_384);
if (x_387 == 0)
{
return x_383;
}
else
{
lean_object* x_388; lean_object* x_389; 
x_388 = lean_ctor_get(x_384, 0);
lean_inc(x_388);
lean_dec(x_384);
x_389 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_389, 0, x_388);
lean_ctor_set(x_383, 0, x_389);
return x_383;
}
}
else
{
lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; 
x_390 = lean_ctor_get(x_383, 1);
lean_inc(x_390);
lean_dec(x_383);
x_391 = lean_ctor_get(x_384, 0);
lean_inc(x_391);
if (lean_is_exclusive(x_384)) {
 lean_ctor_release(x_384, 0);
 x_392 = x_384;
} else {
 lean_dec_ref(x_384);
 x_392 = lean_box(0);
}
if (lean_is_scalar(x_392)) {
 x_393 = lean_alloc_ctor(0, 1, 0);
} else {
 x_393 = x_392;
}
lean_ctor_set(x_393, 0, x_391);
x_394 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_394, 0, x_393);
lean_ctor_set(x_394, 1, x_390);
return x_394;
}
}
else
{
lean_object* x_395; lean_object* x_396; 
lean_dec(x_384);
x_395 = lean_ctor_get(x_383, 1);
lean_inc(x_395);
lean_dec(x_383);
x_396 = l_Lean_IR_Checker_checkObjVar(x_382, x_3, x_395);
return x_396;
}
}
case 11:
{
lean_object* x_397; 
x_397 = lean_ctor_get(x_2, 0);
lean_inc(x_397);
lean_dec(x_2);
if (lean_obj_tag(x_397) == 0)
{
lean_object* x_398; lean_object* x_399; lean_object* x_400; 
lean_dec(x_397);
lean_dec(x_1);
x_398 = lean_box(0);
x_399 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_399, 0, x_398);
x_400 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_400, 0, x_399);
lean_ctor_set(x_400, 1, x_4);
return x_400;
}
else
{
lean_object* x_401; 
lean_dec(x_397);
x_401 = l_Lean_IR_Checker_checkObjType(x_1, x_3, x_4);
return x_401;
}
}
default: 
{
lean_object* x_402; lean_object* x_403; lean_object* x_404; 
x_402 = lean_ctor_get(x_2, 0);
lean_inc(x_402);
lean_dec(x_2);
x_403 = l_Lean_IR_Checker_checkObjVar(x_402, x_3, x_4);
x_404 = lean_ctor_get(x_403, 0);
lean_inc(x_404);
if (lean_obj_tag(x_404) == 0)
{
uint8_t x_405; 
lean_dec(x_1);
x_405 = !lean_is_exclusive(x_403);
if (x_405 == 0)
{
lean_object* x_406; uint8_t x_407; 
x_406 = lean_ctor_get(x_403, 0);
lean_dec(x_406);
x_407 = !lean_is_exclusive(x_404);
if (x_407 == 0)
{
return x_403;
}
else
{
lean_object* x_408; lean_object* x_409; 
x_408 = lean_ctor_get(x_404, 0);
lean_inc(x_408);
lean_dec(x_404);
x_409 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_409, 0, x_408);
lean_ctor_set(x_403, 0, x_409);
return x_403;
}
}
else
{
lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; 
x_410 = lean_ctor_get(x_403, 1);
lean_inc(x_410);
lean_dec(x_403);
x_411 = lean_ctor_get(x_404, 0);
lean_inc(x_411);
if (lean_is_exclusive(x_404)) {
 lean_ctor_release(x_404, 0);
 x_412 = x_404;
} else {
 lean_dec_ref(x_404);
 x_412 = lean_box(0);
}
if (lean_is_scalar(x_412)) {
 x_413 = lean_alloc_ctor(0, 1, 0);
} else {
 x_413 = x_412;
}
lean_ctor_set(x_413, 0, x_411);
x_414 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_414, 0, x_413);
lean_ctor_set(x_414, 1, x_410);
return x_414;
}
}
else
{
uint8_t x_415; 
x_415 = !lean_is_exclusive(x_404);
if (x_415 == 0)
{
lean_object* x_416; uint8_t x_417; 
x_416 = lean_ctor_get(x_404, 0);
lean_dec(x_416);
x_417 = !lean_is_exclusive(x_403);
if (x_417 == 0)
{
lean_object* x_418; lean_object* x_419; uint8_t x_420; 
x_418 = lean_ctor_get(x_403, 0);
lean_dec(x_418);
x_419 = lean_box(1);
x_420 = l_Lean_IR_IRType_beq(x_1, x_419);
if (x_420 == 0)
{
lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; 
x_421 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_1);
x_422 = l_Std_Format_defWidth;
x_423 = lean_format_pretty(x_421, x_422);
x_424 = lean_mk_string("unexpected type '");
x_425 = lean_string_append(x_424, x_423);
lean_dec(x_423);
x_426 = lean_mk_string("'");
x_427 = lean_string_append(x_425, x_426);
lean_dec(x_426);
lean_ctor_set_tag(x_404, 0);
lean_ctor_set(x_404, 0, x_427);
return x_403;
}
else
{
lean_object* x_428; 
lean_dec(x_1);
x_428 = lean_box(0);
lean_ctor_set(x_404, 0, x_428);
return x_403;
}
}
else
{
lean_object* x_429; lean_object* x_430; uint8_t x_431; 
x_429 = lean_ctor_get(x_403, 1);
lean_inc(x_429);
lean_dec(x_403);
x_430 = lean_box(1);
x_431 = l_Lean_IR_IRType_beq(x_1, x_430);
if (x_431 == 0)
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; 
x_432 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_1);
x_433 = l_Std_Format_defWidth;
x_434 = lean_format_pretty(x_432, x_433);
x_435 = lean_mk_string("unexpected type '");
x_436 = lean_string_append(x_435, x_434);
lean_dec(x_434);
x_437 = lean_mk_string("'");
x_438 = lean_string_append(x_436, x_437);
lean_dec(x_437);
lean_ctor_set_tag(x_404, 0);
lean_ctor_set(x_404, 0, x_438);
x_439 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_439, 0, x_404);
lean_ctor_set(x_439, 1, x_429);
return x_439;
}
else
{
lean_object* x_440; lean_object* x_441; 
lean_dec(x_1);
x_440 = lean_box(0);
lean_ctor_set(x_404, 0, x_440);
x_441 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_441, 0, x_404);
lean_ctor_set(x_441, 1, x_429);
return x_441;
}
}
}
else
{
lean_object* x_442; lean_object* x_443; lean_object* x_444; uint8_t x_445; 
lean_dec(x_404);
x_442 = lean_ctor_get(x_403, 1);
lean_inc(x_442);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 x_443 = x_403;
} else {
 lean_dec_ref(x_403);
 x_443 = lean_box(0);
}
x_444 = lean_box(1);
x_445 = l_Lean_IR_IRType_beq(x_1, x_444);
if (x_445 == 0)
{
lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; 
x_446 = l___private_Lean_Compiler_IR_Format_0__Lean_IR_formatIRType(x_1);
x_447 = l_Std_Format_defWidth;
x_448 = lean_format_pretty(x_446, x_447);
x_449 = lean_mk_string("unexpected type '");
x_450 = lean_string_append(x_449, x_448);
lean_dec(x_448);
x_451 = lean_mk_string("'");
x_452 = lean_string_append(x_450, x_451);
lean_dec(x_451);
x_453 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_453, 0, x_452);
if (lean_is_scalar(x_443)) {
 x_454 = lean_alloc_ctor(0, 2, 0);
} else {
 x_454 = x_443;
}
lean_ctor_set(x_454, 0, x_453);
lean_ctor_set(x_454, 1, x_442);
return x_454;
}
else
{
lean_object* x_455; lean_object* x_456; lean_object* x_457; 
lean_dec(x_1);
x_455 = lean_box(0);
x_456 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_456, 0, x_455);
if (lean_is_scalar(x_443)) {
 x_457 = lean_alloc_ctor(0, 2, 0);
} else {
 x_457 = x_443;
}
lean_ctor_set(x_457, 0, x_456);
lean_ctor_set(x_457, 1, x_442);
return x_457;
}
}
}
}
}
}
}
lean_object* l_Lean_IR_Checker_checkExpr___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_IR_Checker_checkExpr___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_IR_Checker_checkExpr___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_IR_Checker_checkExpr___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Lean_IR_Checker_checkExpr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_Checker_checkExpr(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_withParams___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_array_uget(x_1, x_2);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = l_Lean_IR_Checker_markIndex(x_9, x_5, x_6);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_8);
lean_dec(x_4);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_11, 0);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_10, 0, x_16);
return x_10;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_dec(x_10);
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 x_19 = x_11;
} else {
 lean_dec_ref(x_11);
 x_19 = lean_box(0);
}
if (lean_is_scalar(x_19)) {
 x_20 = lean_alloc_ctor(0, 1, 0);
} else {
 x_20 = x_19;
}
lean_ctor_set(x_20, 0, x_18);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_17);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; 
lean_dec(x_11);
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_dec(x_10);
x_23 = l_Lean_IR_LocalContext_addParam(x_4, x_8);
x_24 = 1;
x_25 = x_2 + x_24;
x_2 = x_25;
x_4 = x_23;
x_6 = x_22;
goto _start;
}
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_4);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_6);
return x_28;
}
}
}
lean_object* l_Lean_IR_Checker_withParams(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 2);
lean_inc(x_7);
x_8 = lean_array_get_size(x_1);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_8);
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_3, 2);
lean_dec(x_12);
x_13 = lean_ctor_get(x_3, 1);
lean_dec(x_13);
x_14 = lean_ctor_get(x_3, 0);
lean_dec(x_14);
x_15 = lean_apply_2(x_2, x_3, x_4);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_5);
lean_ctor_set(x_16, 1, x_6);
lean_ctor_set(x_16, 2, x_7);
x_17 = lean_apply_2(x_2, x_16, x_4);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = lean_nat_dec_le(x_8, x_8);
if (x_18 == 0)
{
uint8_t x_19; 
lean_dec(x_8);
x_19 = !lean_is_exclusive(x_3);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_3, 2);
lean_dec(x_20);
x_21 = lean_ctor_get(x_3, 1);
lean_dec(x_21);
x_22 = lean_ctor_get(x_3, 0);
lean_dec(x_22);
x_23 = lean_apply_2(x_2, x_3, x_4);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_5);
lean_ctor_set(x_24, 1, x_6);
lean_ctor_set(x_24, 2, x_7);
x_25 = lean_apply_2(x_2, x_24, x_4);
return x_25;
}
}
else
{
size_t x_26; size_t x_27; lean_object* x_28; uint8_t x_29; 
x_26 = 0;
x_27 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_28 = l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_withParams___spec__1(x_1, x_26, x_27, x_6, x_3, x_4);
x_29 = !lean_is_exclusive(x_3);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_3, 2);
lean_dec(x_30);
x_31 = lean_ctor_get(x_3, 1);
lean_dec(x_31);
x_32 = lean_ctor_get(x_3, 0);
lean_dec(x_32);
x_33 = lean_ctor_get(x_28, 0);
lean_inc(x_33);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
lean_free_object(x_3);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
x_34 = !lean_is_exclusive(x_28);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_ctor_get(x_28, 0);
lean_dec(x_35);
x_36 = !lean_is_exclusive(x_33);
if (x_36 == 0)
{
return x_28;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_33, 0);
lean_inc(x_37);
lean_dec(x_33);
x_38 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_28, 0, x_38);
return x_28;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_39 = lean_ctor_get(x_28, 1);
lean_inc(x_39);
lean_dec(x_28);
x_40 = lean_ctor_get(x_33, 0);
lean_inc(x_40);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 x_41 = x_33;
} else {
 lean_dec_ref(x_33);
 x_41 = lean_box(0);
}
if (lean_is_scalar(x_41)) {
 x_42 = lean_alloc_ctor(0, 1, 0);
} else {
 x_42 = x_41;
}
lean_ctor_set(x_42, 0, x_40);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_39);
return x_43;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_28, 1);
lean_inc(x_44);
lean_dec(x_28);
x_45 = lean_ctor_get(x_33, 0);
lean_inc(x_45);
lean_dec(x_33);
lean_ctor_set(x_3, 1, x_45);
x_46 = lean_apply_2(x_2, x_3, x_44);
return x_46;
}
}
else
{
lean_object* x_47; 
lean_dec(x_3);
x_47 = lean_ctor_get(x_28, 0);
lean_inc(x_47);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
x_48 = lean_ctor_get(x_28, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_49 = x_28;
} else {
 lean_dec_ref(x_28);
 x_49 = lean_box(0);
}
x_50 = lean_ctor_get(x_47, 0);
lean_inc(x_50);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 x_51 = x_47;
} else {
 lean_dec_ref(x_47);
 x_51 = lean_box(0);
}
if (lean_is_scalar(x_51)) {
 x_52 = lean_alloc_ctor(0, 1, 0);
} else {
 x_52 = x_51;
}
lean_ctor_set(x_52, 0, x_50);
if (lean_is_scalar(x_49)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_49;
}
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_48);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_28, 1);
lean_inc(x_54);
lean_dec(x_28);
x_55 = lean_ctor_get(x_47, 0);
lean_inc(x_55);
lean_dec(x_47);
x_56 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_56, 0, x_5);
lean_ctor_set(x_56, 1, x_55);
lean_ctor_set(x_56, 2, x_7);
x_57 = lean_apply_2(x_2, x_56, x_54);
return x_57;
}
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_withParams___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_withParams___spec__1(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_IR_Checker_withParams___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_Checker_withParams(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_IR_Checker_checkFnBody_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_1, 2);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 3);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_apply_4(x_2, x_16, x_17, x_18, x_19);
return x_20;
}
case 1:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 2);
lean_inc(x_23);
x_24 = lean_ctor_get(x_1, 3);
lean_inc(x_24);
lean_dec(x_1);
x_25 = lean_apply_4(x_3, x_21, x_22, x_23, x_24);
return x_25;
}
case 2:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_1, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 2);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 3);
lean_inc(x_29);
lean_dec(x_1);
x_30 = lean_apply_4(x_4, x_26, x_27, x_28, x_29);
return x_30;
}
case 3:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = lean_ctor_get(x_1, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_1, 1);
lean_inc(x_32);
x_33 = lean_ctor_get(x_1, 2);
lean_inc(x_33);
lean_dec(x_1);
x_34 = lean_apply_3(x_7, x_31, x_32, x_33);
return x_34;
}
case 4:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_35 = lean_ctor_get(x_1, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 1);
lean_inc(x_36);
x_37 = lean_ctor_get(x_1, 2);
lean_inc(x_37);
x_38 = lean_ctor_get(x_1, 3);
lean_inc(x_38);
lean_dec(x_1);
x_39 = lean_apply_4(x_5, x_35, x_36, x_37, x_38);
return x_39;
}
case 5:
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_40 = lean_ctor_get(x_1, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_1, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_1, 2);
lean_inc(x_42);
x_43 = lean_ctor_get(x_1, 3);
lean_inc(x_43);
x_44 = lean_ctor_get(x_1, 4);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 5);
lean_inc(x_45);
lean_dec(x_1);
x_46 = lean_apply_6(x_6, x_40, x_41, x_42, x_43, x_44, x_45);
return x_46;
}
case 6:
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_47 = lean_ctor_get(x_1, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_1, 1);
lean_inc(x_48);
x_49 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_50 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 1);
x_51 = lean_ctor_get(x_1, 2);
lean_inc(x_51);
lean_dec(x_1);
x_52 = lean_box(x_49);
x_53 = lean_box(x_50);
x_54 = lean_apply_5(x_8, x_47, x_48, x_52, x_53, x_51);
return x_54;
}
case 7:
{
lean_object* x_55; lean_object* x_56; uint8_t x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_55 = lean_ctor_get(x_1, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_1, 1);
lean_inc(x_56);
x_57 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_58 = lean_ctor_get_uint8(x_1, sizeof(void*)*3 + 1);
x_59 = lean_ctor_get(x_1, 2);
lean_inc(x_59);
lean_dec(x_1);
x_60 = lean_box(x_57);
x_61 = lean_box(x_58);
x_62 = lean_apply_5(x_9, x_55, x_56, x_60, x_61, x_59);
return x_62;
}
case 8:
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_63 = lean_ctor_get(x_1, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_1, 1);
lean_inc(x_64);
lean_dec(x_1);
x_65 = lean_apply_2(x_10, x_63, x_64);
return x_65;
}
case 9:
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_66 = lean_ctor_get(x_1, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_1, 1);
lean_inc(x_67);
lean_dec(x_1);
x_68 = lean_apply_2(x_11, x_66, x_67);
return x_68;
}
case 10:
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_15);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_69 = lean_ctor_get(x_1, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_1, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_1, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_1, 3);
lean_inc(x_72);
lean_dec(x_1);
x_73 = lean_apply_4(x_14, x_69, x_70, x_71, x_72);
return x_73;
}
case 11:
{
lean_object* x_74; lean_object* x_75; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_74 = lean_ctor_get(x_1, 0);
lean_inc(x_74);
lean_dec(x_1);
x_75 = lean_apply_1(x_13, x_74);
return x_75;
}
case 12:
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_76 = lean_ctor_get(x_1, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_1, 1);
lean_inc(x_77);
lean_dec(x_1);
x_78 = lean_apply_2(x_12, x_76, x_77);
return x_78;
}
default: 
{
lean_object* x_79; lean_object* x_80; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_79 = lean_box(0);
x_80 = lean_apply_1(x_15, x_79);
return x_80;
}
}
}
}
lean_object* l_Lean_IR_Checker_checkFnBody_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_Checker_checkFnBody_match__1___rarg), 15, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_checkFnBody___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_8 = lean_array_uget(x_1, x_2);
x_9 = l_Lean_IR_AltCore_body(x_8);
lean_dec(x_8);
lean_inc(x_5);
x_10 = l_Lean_IR_Checker_checkFnBody(x_9, x_5, x_6);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_5);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_10, 0);
lean_dec(x_13);
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_11, 0);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_10, 0, x_16);
return x_10;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_dec(x_10);
x_18 = lean_ctor_get(x_11, 0);
lean_inc(x_18);
if (lean_is_exclusive(x_11)) {
 lean_ctor_release(x_11, 0);
 x_19 = x_11;
} else {
 lean_dec_ref(x_11);
 x_19 = lean_box(0);
}
if (lean_is_scalar(x_19)) {
 x_20 = lean_alloc_ctor(0, 1, 0);
} else {
 x_20 = x_19;
}
lean_ctor_set(x_20, 0, x_18);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_17);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; 
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_dec(x_10);
x_23 = lean_ctor_get(x_11, 0);
lean_inc(x_23);
lean_dec(x_11);
x_24 = 1;
x_25 = x_2 + x_24;
x_2 = x_25;
x_4 = x_23;
x_6 = x_22;
goto _start;
}
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_5);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_4);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_6);
return x_28;
}
}
}
lean_object* l_Lean_IR_Checker_checkFnBody(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
lean_inc(x_6);
lean_inc(x_5);
x_8 = l_Lean_IR_Checker_checkExpr(x_5, x_6, x_2, x_3);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_8, 0);
lean_dec(x_11);
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_8, 0, x_14);
return x_8;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 x_17 = x_9;
} else {
 lean_dec_ref(x_9);
 x_17 = lean_box(0);
}
if (lean_is_scalar(x_17)) {
 x_18 = lean_alloc_ctor(0, 1, 0);
} else {
 x_18 = x_17;
}
lean_ctor_set(x_18, 0, x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_15);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_9);
x_20 = lean_ctor_get(x_8, 1);
lean_inc(x_20);
lean_dec(x_8);
lean_inc(x_4);
x_21 = l_Lean_IR_Checker_markIndex(x_4, x_2, x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_21, 0);
lean_dec(x_24);
x_25 = !lean_is_exclusive(x_22);
if (x_25 == 0)
{
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_22, 0);
lean_inc(x_26);
lean_dec(x_22);
x_27 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_21, 0, x_27);
return x_21;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_dec(x_21);
x_29 = lean_ctor_get(x_22, 0);
lean_inc(x_29);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 x_30 = x_22;
} else {
 lean_dec_ref(x_22);
 x_30 = lean_box(0);
}
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(0, 1, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_28);
return x_32;
}
}
else
{
lean_object* x_33; uint8_t x_34; 
lean_dec(x_22);
x_33 = lean_ctor_get(x_21, 1);
lean_inc(x_33);
lean_dec(x_21);
x_34 = !lean_is_exclusive(x_2);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_2, 1);
x_36 = l_Lean_IR_LocalContext_addLocal(x_35, x_4, x_5, x_6);
lean_ctor_set(x_2, 1, x_36);
x_1 = x_7;
x_3 = x_33;
goto _start;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_38 = lean_ctor_get(x_2, 0);
x_39 = lean_ctor_get(x_2, 1);
x_40 = lean_ctor_get(x_2, 2);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_2);
x_41 = l_Lean_IR_LocalContext_addLocal(x_39, x_4, x_5, x_6);
x_42 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_42, 0, x_38);
lean_ctor_set(x_42, 1, x_41);
lean_ctor_set(x_42, 2, x_40);
x_1 = x_7;
x_2 = x_42;
x_3 = x_33;
goto _start;
}
}
}
}
case 1:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 1);
lean_inc(x_45);
x_46 = lean_ctor_get(x_1, 2);
lean_inc(x_46);
x_47 = lean_ctor_get(x_1, 3);
lean_inc(x_47);
lean_dec(x_1);
lean_inc(x_44);
x_48 = l_Lean_IR_Checker_markIndex(x_44, x_2, x_3);
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
if (lean_obj_tag(x_49) == 0)
{
uint8_t x_50; 
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_2);
x_50 = !lean_is_exclusive(x_48);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; 
x_51 = lean_ctor_get(x_48, 0);
lean_dec(x_51);
x_52 = !lean_is_exclusive(x_49);
if (x_52 == 0)
{
return x_48;
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_49, 0);
lean_inc(x_53);
lean_dec(x_49);
x_54 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_48, 0, x_54);
return x_48;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_55 = lean_ctor_get(x_48, 1);
lean_inc(x_55);
lean_dec(x_48);
x_56 = lean_ctor_get(x_49, 0);
lean_inc(x_56);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 x_57 = x_49;
} else {
 lean_dec_ref(x_49);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(0, 1, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_56);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_55);
return x_59;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
lean_dec(x_49);
x_60 = lean_ctor_get(x_48, 1);
lean_inc(x_60);
lean_dec(x_48);
x_85 = lean_ctor_get(x_2, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_2, 1);
lean_inc(x_86);
x_87 = lean_ctor_get(x_2, 2);
lean_inc(x_87);
x_88 = lean_array_get_size(x_45);
x_89 = lean_unsigned_to_nat(0u);
x_90 = lean_nat_dec_lt(x_89, x_88);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; 
lean_dec(x_88);
x_91 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_91, 0, x_85);
lean_ctor_set(x_91, 1, x_86);
lean_ctor_set(x_91, 2, x_87);
lean_inc(x_46);
x_92 = l_Lean_IR_Checker_checkFnBody(x_46, x_91, x_60);
x_61 = x_92;
goto block_84;
}
else
{
uint8_t x_93; 
x_93 = lean_nat_dec_le(x_88, x_88);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; 
lean_dec(x_88);
x_94 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_94, 0, x_85);
lean_ctor_set(x_94, 1, x_86);
lean_ctor_set(x_94, 2, x_87);
lean_inc(x_46);
x_95 = l_Lean_IR_Checker_checkFnBody(x_46, x_94, x_60);
x_61 = x_95;
goto block_84;
}
else
{
size_t x_96; size_t x_97; lean_object* x_98; lean_object* x_99; 
x_96 = 0;
x_97 = lean_usize_of_nat(x_88);
lean_dec(x_88);
x_98 = l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_withParams___spec__1(x_45, x_96, x_97, x_86, x_2, x_60);
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
if (lean_obj_tag(x_99) == 0)
{
uint8_t x_100; 
lean_dec(x_87);
lean_dec(x_85);
x_100 = !lean_is_exclusive(x_98);
if (x_100 == 0)
{
lean_object* x_101; uint8_t x_102; 
x_101 = lean_ctor_get(x_98, 0);
lean_dec(x_101);
x_102 = !lean_is_exclusive(x_99);
if (x_102 == 0)
{
x_61 = x_98;
goto block_84;
}
else
{
lean_object* x_103; lean_object* x_104; 
x_103 = lean_ctor_get(x_99, 0);
lean_inc(x_103);
lean_dec(x_99);
x_104 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_98, 0, x_104);
x_61 = x_98;
goto block_84;
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_105 = lean_ctor_get(x_98, 1);
lean_inc(x_105);
lean_dec(x_98);
x_106 = lean_ctor_get(x_99, 0);
lean_inc(x_106);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 x_107 = x_99;
} else {
 lean_dec_ref(x_99);
 x_107 = lean_box(0);
}
if (lean_is_scalar(x_107)) {
 x_108 = lean_alloc_ctor(0, 1, 0);
} else {
 x_108 = x_107;
}
lean_ctor_set(x_108, 0, x_106);
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_105);
x_61 = x_109;
goto block_84;
}
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_110 = lean_ctor_get(x_98, 1);
lean_inc(x_110);
lean_dec(x_98);
x_111 = lean_ctor_get(x_99, 0);
lean_inc(x_111);
lean_dec(x_99);
x_112 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_112, 0, x_85);
lean_ctor_set(x_112, 1, x_111);
lean_ctor_set(x_112, 2, x_87);
lean_inc(x_46);
x_113 = l_Lean_IR_Checker_checkFnBody(x_46, x_112, x_110);
x_61 = x_113;
goto block_84;
}
}
}
block_84:
{
lean_object* x_62; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
if (lean_obj_tag(x_62) == 0)
{
uint8_t x_63; 
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_2);
x_63 = !lean_is_exclusive(x_61);
if (x_63 == 0)
{
lean_object* x_64; uint8_t x_65; 
x_64 = lean_ctor_get(x_61, 0);
lean_dec(x_64);
x_65 = !lean_is_exclusive(x_62);
if (x_65 == 0)
{
return x_61;
}
else
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_62, 0);
lean_inc(x_66);
lean_dec(x_62);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_61, 0, x_67);
return x_61;
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_68 = lean_ctor_get(x_61, 1);
lean_inc(x_68);
lean_dec(x_61);
x_69 = lean_ctor_get(x_62, 0);
lean_inc(x_69);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 x_70 = x_62;
} else {
 lean_dec_ref(x_62);
 x_70 = lean_box(0);
}
if (lean_is_scalar(x_70)) {
 x_71 = lean_alloc_ctor(0, 1, 0);
} else {
 x_71 = x_70;
}
lean_ctor_set(x_71, 0, x_69);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_68);
return x_72;
}
}
else
{
lean_object* x_73; uint8_t x_74; 
lean_dec(x_62);
x_73 = lean_ctor_get(x_61, 1);
lean_inc(x_73);
lean_dec(x_61);
x_74 = !lean_is_exclusive(x_2);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_ctor_get(x_2, 1);
x_76 = l_Lean_IR_LocalContext_addJP(x_75, x_44, x_45, x_46);
lean_ctor_set(x_2, 1, x_76);
x_1 = x_47;
x_3 = x_73;
goto _start;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_78 = lean_ctor_get(x_2, 0);
x_79 = lean_ctor_get(x_2, 1);
x_80 = lean_ctor_get(x_2, 2);
lean_inc(x_80);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_2);
x_81 = l_Lean_IR_LocalContext_addJP(x_79, x_44, x_45, x_46);
x_82 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_82, 0, x_78);
lean_ctor_set(x_82, 1, x_81);
lean_ctor_set(x_82, 2, x_80);
x_1 = x_47;
x_2 = x_82;
x_3 = x_73;
goto _start;
}
}
}
}
}
case 2:
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_114 = lean_ctor_get(x_1, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_1, 2);
lean_inc(x_115);
x_116 = lean_ctor_get(x_1, 3);
lean_inc(x_116);
lean_dec(x_1);
x_117 = l_Lean_IR_Checker_checkVar(x_114, x_2, x_3);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
if (lean_obj_tag(x_118) == 0)
{
uint8_t x_119; 
lean_dec(x_116);
lean_dec(x_115);
lean_dec(x_2);
x_119 = !lean_is_exclusive(x_117);
if (x_119 == 0)
{
lean_object* x_120; uint8_t x_121; 
x_120 = lean_ctor_get(x_117, 0);
lean_dec(x_120);
x_121 = !lean_is_exclusive(x_118);
if (x_121 == 0)
{
return x_117;
}
else
{
lean_object* x_122; lean_object* x_123; 
x_122 = lean_ctor_get(x_118, 0);
lean_inc(x_122);
lean_dec(x_118);
x_123 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_117, 0, x_123);
return x_117;
}
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_124 = lean_ctor_get(x_117, 1);
lean_inc(x_124);
lean_dec(x_117);
x_125 = lean_ctor_get(x_118, 0);
lean_inc(x_125);
if (lean_is_exclusive(x_118)) {
 lean_ctor_release(x_118, 0);
 x_126 = x_118;
} else {
 lean_dec_ref(x_118);
 x_126 = lean_box(0);
}
if (lean_is_scalar(x_126)) {
 x_127 = lean_alloc_ctor(0, 1, 0);
} else {
 x_127 = x_126;
}
lean_ctor_set(x_127, 0, x_125);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_124);
return x_128;
}
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_dec(x_118);
x_129 = lean_ctor_get(x_117, 1);
lean_inc(x_129);
lean_dec(x_117);
x_130 = l_Lean_IR_Checker_checkArg(x_115, x_2, x_129);
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
if (lean_obj_tag(x_131) == 0)
{
uint8_t x_132; 
lean_dec(x_116);
lean_dec(x_2);
x_132 = !lean_is_exclusive(x_130);
if (x_132 == 0)
{
lean_object* x_133; uint8_t x_134; 
x_133 = lean_ctor_get(x_130, 0);
lean_dec(x_133);
x_134 = !lean_is_exclusive(x_131);
if (x_134 == 0)
{
return x_130;
}
else
{
lean_object* x_135; lean_object* x_136; 
x_135 = lean_ctor_get(x_131, 0);
lean_inc(x_135);
lean_dec(x_131);
x_136 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_130, 0, x_136);
return x_130;
}
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_137 = lean_ctor_get(x_130, 1);
lean_inc(x_137);
lean_dec(x_130);
x_138 = lean_ctor_get(x_131, 0);
lean_inc(x_138);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 x_139 = x_131;
} else {
 lean_dec_ref(x_131);
 x_139 = lean_box(0);
}
if (lean_is_scalar(x_139)) {
 x_140 = lean_alloc_ctor(0, 1, 0);
} else {
 x_140 = x_139;
}
lean_ctor_set(x_140, 0, x_138);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_137);
return x_141;
}
}
else
{
lean_object* x_142; 
lean_dec(x_131);
x_142 = lean_ctor_get(x_130, 1);
lean_inc(x_142);
lean_dec(x_130);
x_1 = x_116;
x_3 = x_142;
goto _start;
}
}
}
case 4:
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_144 = lean_ctor_get(x_1, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_1, 2);
lean_inc(x_145);
x_146 = lean_ctor_get(x_1, 3);
lean_inc(x_146);
lean_dec(x_1);
x_147 = l_Lean_IR_Checker_checkVar(x_144, x_2, x_3);
x_148 = lean_ctor_get(x_147, 0);
lean_inc(x_148);
if (lean_obj_tag(x_148) == 0)
{
uint8_t x_149; 
lean_dec(x_146);
lean_dec(x_145);
lean_dec(x_2);
x_149 = !lean_is_exclusive(x_147);
if (x_149 == 0)
{
lean_object* x_150; uint8_t x_151; 
x_150 = lean_ctor_get(x_147, 0);
lean_dec(x_150);
x_151 = !lean_is_exclusive(x_148);
if (x_151 == 0)
{
return x_147;
}
else
{
lean_object* x_152; lean_object* x_153; 
x_152 = lean_ctor_get(x_148, 0);
lean_inc(x_152);
lean_dec(x_148);
x_153 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_147, 0, x_153);
return x_147;
}
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_154 = lean_ctor_get(x_147, 1);
lean_inc(x_154);
lean_dec(x_147);
x_155 = lean_ctor_get(x_148, 0);
lean_inc(x_155);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 x_156 = x_148;
} else {
 lean_dec_ref(x_148);
 x_156 = lean_box(0);
}
if (lean_is_scalar(x_156)) {
 x_157 = lean_alloc_ctor(0, 1, 0);
} else {
 x_157 = x_156;
}
lean_ctor_set(x_157, 0, x_155);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_154);
return x_158;
}
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
lean_dec(x_148);
x_159 = lean_ctor_get(x_147, 1);
lean_inc(x_159);
lean_dec(x_147);
x_160 = l_Lean_IR_Checker_checkVar(x_145, x_2, x_159);
x_161 = lean_ctor_get(x_160, 0);
lean_inc(x_161);
if (lean_obj_tag(x_161) == 0)
{
uint8_t x_162; 
lean_dec(x_146);
lean_dec(x_2);
x_162 = !lean_is_exclusive(x_160);
if (x_162 == 0)
{
lean_object* x_163; uint8_t x_164; 
x_163 = lean_ctor_get(x_160, 0);
lean_dec(x_163);
x_164 = !lean_is_exclusive(x_161);
if (x_164 == 0)
{
return x_160;
}
else
{
lean_object* x_165; lean_object* x_166; 
x_165 = lean_ctor_get(x_161, 0);
lean_inc(x_165);
lean_dec(x_161);
x_166 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_160, 0, x_166);
return x_160;
}
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_167 = lean_ctor_get(x_160, 1);
lean_inc(x_167);
lean_dec(x_160);
x_168 = lean_ctor_get(x_161, 0);
lean_inc(x_168);
if (lean_is_exclusive(x_161)) {
 lean_ctor_release(x_161, 0);
 x_169 = x_161;
} else {
 lean_dec_ref(x_161);
 x_169 = lean_box(0);
}
if (lean_is_scalar(x_169)) {
 x_170 = lean_alloc_ctor(0, 1, 0);
} else {
 x_170 = x_169;
}
lean_ctor_set(x_170, 0, x_168);
x_171 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_167);
return x_171;
}
}
else
{
lean_object* x_172; 
lean_dec(x_161);
x_172 = lean_ctor_get(x_160, 1);
lean_inc(x_172);
lean_dec(x_160);
x_1 = x_146;
x_3 = x_172;
goto _start;
}
}
}
case 5:
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_174 = lean_ctor_get(x_1, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_1, 3);
lean_inc(x_175);
x_176 = lean_ctor_get(x_1, 5);
lean_inc(x_176);
lean_dec(x_1);
x_177 = l_Lean_IR_Checker_checkVar(x_174, x_2, x_3);
x_178 = lean_ctor_get(x_177, 0);
lean_inc(x_178);
if (lean_obj_tag(x_178) == 0)
{
uint8_t x_179; 
lean_dec(x_176);
lean_dec(x_175);
lean_dec(x_2);
x_179 = !lean_is_exclusive(x_177);
if (x_179 == 0)
{
lean_object* x_180; uint8_t x_181; 
x_180 = lean_ctor_get(x_177, 0);
lean_dec(x_180);
x_181 = !lean_is_exclusive(x_178);
if (x_181 == 0)
{
return x_177;
}
else
{
lean_object* x_182; lean_object* x_183; 
x_182 = lean_ctor_get(x_178, 0);
lean_inc(x_182);
lean_dec(x_178);
x_183 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_177, 0, x_183);
return x_177;
}
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_184 = lean_ctor_get(x_177, 1);
lean_inc(x_184);
lean_dec(x_177);
x_185 = lean_ctor_get(x_178, 0);
lean_inc(x_185);
if (lean_is_exclusive(x_178)) {
 lean_ctor_release(x_178, 0);
 x_186 = x_178;
} else {
 lean_dec_ref(x_178);
 x_186 = lean_box(0);
}
if (lean_is_scalar(x_186)) {
 x_187 = lean_alloc_ctor(0, 1, 0);
} else {
 x_187 = x_186;
}
lean_ctor_set(x_187, 0, x_185);
x_188 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_184);
return x_188;
}
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; 
lean_dec(x_178);
x_189 = lean_ctor_get(x_177, 1);
lean_inc(x_189);
lean_dec(x_177);
x_190 = l_Lean_IR_Checker_checkVar(x_175, x_2, x_189);
x_191 = lean_ctor_get(x_190, 0);
lean_inc(x_191);
if (lean_obj_tag(x_191) == 0)
{
uint8_t x_192; 
lean_dec(x_176);
lean_dec(x_2);
x_192 = !lean_is_exclusive(x_190);
if (x_192 == 0)
{
lean_object* x_193; uint8_t x_194; 
x_193 = lean_ctor_get(x_190, 0);
lean_dec(x_193);
x_194 = !lean_is_exclusive(x_191);
if (x_194 == 0)
{
return x_190;
}
else
{
lean_object* x_195; lean_object* x_196; 
x_195 = lean_ctor_get(x_191, 0);
lean_inc(x_195);
lean_dec(x_191);
x_196 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_190, 0, x_196);
return x_190;
}
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_197 = lean_ctor_get(x_190, 1);
lean_inc(x_197);
lean_dec(x_190);
x_198 = lean_ctor_get(x_191, 0);
lean_inc(x_198);
if (lean_is_exclusive(x_191)) {
 lean_ctor_release(x_191, 0);
 x_199 = x_191;
} else {
 lean_dec_ref(x_191);
 x_199 = lean_box(0);
}
if (lean_is_scalar(x_199)) {
 x_200 = lean_alloc_ctor(0, 1, 0);
} else {
 x_200 = x_199;
}
lean_ctor_set(x_200, 0, x_198);
x_201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_197);
return x_201;
}
}
else
{
lean_object* x_202; 
lean_dec(x_191);
x_202 = lean_ctor_get(x_190, 1);
lean_inc(x_202);
lean_dec(x_190);
x_1 = x_176;
x_3 = x_202;
goto _start;
}
}
}
case 8:
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; 
x_204 = lean_ctor_get(x_1, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_1, 1);
lean_inc(x_205);
lean_dec(x_1);
x_206 = l_Lean_IR_Checker_checkVar(x_204, x_2, x_3);
x_207 = lean_ctor_get(x_206, 0);
lean_inc(x_207);
if (lean_obj_tag(x_207) == 0)
{
uint8_t x_208; 
lean_dec(x_205);
lean_dec(x_2);
x_208 = !lean_is_exclusive(x_206);
if (x_208 == 0)
{
lean_object* x_209; uint8_t x_210; 
x_209 = lean_ctor_get(x_206, 0);
lean_dec(x_209);
x_210 = !lean_is_exclusive(x_207);
if (x_210 == 0)
{
return x_206;
}
else
{
lean_object* x_211; lean_object* x_212; 
x_211 = lean_ctor_get(x_207, 0);
lean_inc(x_211);
lean_dec(x_207);
x_212 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_212, 0, x_211);
lean_ctor_set(x_206, 0, x_212);
return x_206;
}
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
x_213 = lean_ctor_get(x_206, 1);
lean_inc(x_213);
lean_dec(x_206);
x_214 = lean_ctor_get(x_207, 0);
lean_inc(x_214);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 x_215 = x_207;
} else {
 lean_dec_ref(x_207);
 x_215 = lean_box(0);
}
if (lean_is_scalar(x_215)) {
 x_216 = lean_alloc_ctor(0, 1, 0);
} else {
 x_216 = x_215;
}
lean_ctor_set(x_216, 0, x_214);
x_217 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_217, 0, x_216);
lean_ctor_set(x_217, 1, x_213);
return x_217;
}
}
else
{
lean_object* x_218; 
lean_dec(x_207);
x_218 = lean_ctor_get(x_206, 1);
lean_inc(x_218);
lean_dec(x_206);
x_1 = x_205;
x_3 = x_218;
goto _start;
}
}
case 9:
{
lean_object* x_220; 
x_220 = lean_ctor_get(x_1, 1);
lean_inc(x_220);
lean_dec(x_1);
x_1 = x_220;
goto _start;
}
case 10:
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; uint8_t x_226; lean_object* x_227; lean_object* x_228; 
x_222 = lean_ctor_get(x_1, 1);
lean_inc(x_222);
x_223 = lean_ctor_get(x_1, 3);
lean_inc(x_223);
lean_dec(x_1);
x_224 = lean_array_get_size(x_223);
x_225 = lean_unsigned_to_nat(0u);
x_226 = lean_nat_dec_lt(x_225, x_224);
x_227 = l_Lean_IR_Checker_checkVar(x_222, x_2, x_3);
x_228 = lean_ctor_get(x_227, 0);
lean_inc(x_228);
if (lean_obj_tag(x_228) == 0)
{
uint8_t x_229; 
lean_dec(x_224);
lean_dec(x_223);
lean_dec(x_2);
x_229 = !lean_is_exclusive(x_227);
if (x_229 == 0)
{
lean_object* x_230; uint8_t x_231; 
x_230 = lean_ctor_get(x_227, 0);
lean_dec(x_230);
x_231 = !lean_is_exclusive(x_228);
if (x_231 == 0)
{
return x_227;
}
else
{
lean_object* x_232; lean_object* x_233; 
x_232 = lean_ctor_get(x_228, 0);
lean_inc(x_232);
lean_dec(x_228);
x_233 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_233, 0, x_232);
lean_ctor_set(x_227, 0, x_233);
return x_227;
}
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_234 = lean_ctor_get(x_227, 1);
lean_inc(x_234);
lean_dec(x_227);
x_235 = lean_ctor_get(x_228, 0);
lean_inc(x_235);
if (lean_is_exclusive(x_228)) {
 lean_ctor_release(x_228, 0);
 x_236 = x_228;
} else {
 lean_dec_ref(x_228);
 x_236 = lean_box(0);
}
if (lean_is_scalar(x_236)) {
 x_237 = lean_alloc_ctor(0, 1, 0);
} else {
 x_237 = x_236;
}
lean_ctor_set(x_237, 0, x_235);
x_238 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_238, 0, x_237);
lean_ctor_set(x_238, 1, x_234);
return x_238;
}
}
else
{
uint8_t x_239; 
x_239 = !lean_is_exclusive(x_228);
if (x_239 == 0)
{
lean_object* x_240; 
x_240 = lean_ctor_get(x_228, 0);
lean_dec(x_240);
if (x_226 == 0)
{
uint8_t x_241; 
lean_dec(x_224);
lean_dec(x_223);
lean_dec(x_2);
x_241 = !lean_is_exclusive(x_227);
if (x_241 == 0)
{
lean_object* x_242; lean_object* x_243; 
x_242 = lean_ctor_get(x_227, 0);
lean_dec(x_242);
x_243 = lean_box(0);
lean_ctor_set(x_228, 0, x_243);
return x_227;
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_244 = lean_ctor_get(x_227, 1);
lean_inc(x_244);
lean_dec(x_227);
x_245 = lean_box(0);
lean_ctor_set(x_228, 0, x_245);
x_246 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_246, 0, x_228);
lean_ctor_set(x_246, 1, x_244);
return x_246;
}
}
else
{
uint8_t x_247; 
x_247 = !lean_is_exclusive(x_227);
if (x_247 == 0)
{
lean_object* x_248; lean_object* x_249; uint8_t x_250; 
x_248 = lean_ctor_get(x_227, 1);
x_249 = lean_ctor_get(x_227, 0);
lean_dec(x_249);
x_250 = lean_nat_dec_le(x_224, x_224);
if (x_250 == 0)
{
lean_object* x_251; 
lean_dec(x_224);
lean_dec(x_223);
lean_dec(x_2);
x_251 = lean_box(0);
lean_ctor_set(x_228, 0, x_251);
return x_227;
}
else
{
size_t x_252; size_t x_253; lean_object* x_254; lean_object* x_255; 
lean_free_object(x_227);
lean_free_object(x_228);
x_252 = 0;
x_253 = lean_usize_of_nat(x_224);
lean_dec(x_224);
x_254 = lean_box(0);
x_255 = l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_checkFnBody___spec__1(x_223, x_252, x_253, x_254, x_2, x_248);
lean_dec(x_223);
return x_255;
}
}
else
{
lean_object* x_256; uint8_t x_257; 
x_256 = lean_ctor_get(x_227, 1);
lean_inc(x_256);
lean_dec(x_227);
x_257 = lean_nat_dec_le(x_224, x_224);
if (x_257 == 0)
{
lean_object* x_258; lean_object* x_259; 
lean_dec(x_224);
lean_dec(x_223);
lean_dec(x_2);
x_258 = lean_box(0);
lean_ctor_set(x_228, 0, x_258);
x_259 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_259, 0, x_228);
lean_ctor_set(x_259, 1, x_256);
return x_259;
}
else
{
size_t x_260; size_t x_261; lean_object* x_262; lean_object* x_263; 
lean_free_object(x_228);
x_260 = 0;
x_261 = lean_usize_of_nat(x_224);
lean_dec(x_224);
x_262 = lean_box(0);
x_263 = l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_checkFnBody___spec__1(x_223, x_260, x_261, x_262, x_2, x_256);
lean_dec(x_223);
return x_263;
}
}
}
}
else
{
lean_dec(x_228);
if (x_226 == 0)
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
lean_dec(x_224);
lean_dec(x_223);
lean_dec(x_2);
x_264 = lean_ctor_get(x_227, 1);
lean_inc(x_264);
if (lean_is_exclusive(x_227)) {
 lean_ctor_release(x_227, 0);
 lean_ctor_release(x_227, 1);
 x_265 = x_227;
} else {
 lean_dec_ref(x_227);
 x_265 = lean_box(0);
}
x_266 = lean_box(0);
x_267 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_267, 0, x_266);
if (lean_is_scalar(x_265)) {
 x_268 = lean_alloc_ctor(0, 2, 0);
} else {
 x_268 = x_265;
}
lean_ctor_set(x_268, 0, x_267);
lean_ctor_set(x_268, 1, x_264);
return x_268;
}
else
{
lean_object* x_269; lean_object* x_270; uint8_t x_271; 
x_269 = lean_ctor_get(x_227, 1);
lean_inc(x_269);
if (lean_is_exclusive(x_227)) {
 lean_ctor_release(x_227, 0);
 lean_ctor_release(x_227, 1);
 x_270 = x_227;
} else {
 lean_dec_ref(x_227);
 x_270 = lean_box(0);
}
x_271 = lean_nat_dec_le(x_224, x_224);
if (x_271 == 0)
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; 
lean_dec(x_224);
lean_dec(x_223);
lean_dec(x_2);
x_272 = lean_box(0);
x_273 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_273, 0, x_272);
if (lean_is_scalar(x_270)) {
 x_274 = lean_alloc_ctor(0, 2, 0);
} else {
 x_274 = x_270;
}
lean_ctor_set(x_274, 0, x_273);
lean_ctor_set(x_274, 1, x_269);
return x_274;
}
else
{
size_t x_275; size_t x_276; lean_object* x_277; lean_object* x_278; 
lean_dec(x_270);
x_275 = 0;
x_276 = lean_usize_of_nat(x_224);
lean_dec(x_224);
x_277 = lean_box(0);
x_278 = l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_checkFnBody___spec__1(x_223, x_275, x_276, x_277, x_2, x_269);
lean_dec(x_223);
return x_278;
}
}
}
}
}
case 11:
{
lean_object* x_279; lean_object* x_280; 
x_279 = lean_ctor_get(x_1, 0);
lean_inc(x_279);
lean_dec(x_1);
x_280 = l_Lean_IR_Checker_checkArg(x_279, x_2, x_3);
lean_dec(x_2);
return x_280;
}
case 12:
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_281 = lean_ctor_get(x_1, 0);
lean_inc(x_281);
x_282 = lean_ctor_get(x_1, 1);
lean_inc(x_282);
lean_dec(x_1);
x_283 = l_Lean_IR_Checker_checkJP(x_281, x_2, x_3);
x_284 = lean_ctor_get(x_283, 0);
lean_inc(x_284);
if (lean_obj_tag(x_284) == 0)
{
uint8_t x_285; 
lean_dec(x_282);
lean_dec(x_2);
x_285 = !lean_is_exclusive(x_283);
if (x_285 == 0)
{
lean_object* x_286; uint8_t x_287; 
x_286 = lean_ctor_get(x_283, 0);
lean_dec(x_286);
x_287 = !lean_is_exclusive(x_284);
if (x_287 == 0)
{
return x_283;
}
else
{
lean_object* x_288; lean_object* x_289; 
x_288 = lean_ctor_get(x_284, 0);
lean_inc(x_288);
lean_dec(x_284);
x_289 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_289, 0, x_288);
lean_ctor_set(x_283, 0, x_289);
return x_283;
}
}
else
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; 
x_290 = lean_ctor_get(x_283, 1);
lean_inc(x_290);
lean_dec(x_283);
x_291 = lean_ctor_get(x_284, 0);
lean_inc(x_291);
if (lean_is_exclusive(x_284)) {
 lean_ctor_release(x_284, 0);
 x_292 = x_284;
} else {
 lean_dec_ref(x_284);
 x_292 = lean_box(0);
}
if (lean_is_scalar(x_292)) {
 x_293 = lean_alloc_ctor(0, 1, 0);
} else {
 x_293 = x_292;
}
lean_ctor_set(x_293, 0, x_291);
x_294 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_294, 0, x_293);
lean_ctor_set(x_294, 1, x_290);
return x_294;
}
}
else
{
lean_object* x_295; lean_object* x_296; 
lean_dec(x_284);
x_295 = lean_ctor_get(x_283, 1);
lean_inc(x_295);
lean_dec(x_283);
x_296 = l_Lean_IR_Checker_checkArgs(x_282, x_2, x_295);
lean_dec(x_2);
lean_dec(x_282);
return x_296;
}
}
case 13:
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; 
lean_dec(x_2);
x_297 = lean_box(0);
x_298 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_298, 0, x_297);
x_299 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_299, 0, x_298);
lean_ctor_set(x_299, 1, x_3);
return x_299;
}
default: 
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; 
x_300 = lean_ctor_get(x_1, 0);
lean_inc(x_300);
x_301 = lean_ctor_get(x_1, 2);
lean_inc(x_301);
lean_dec(x_1);
x_302 = l_Lean_IR_Checker_checkVar(x_300, x_2, x_3);
x_303 = lean_ctor_get(x_302, 0);
lean_inc(x_303);
if (lean_obj_tag(x_303) == 0)
{
uint8_t x_304; 
lean_dec(x_301);
lean_dec(x_2);
x_304 = !lean_is_exclusive(x_302);
if (x_304 == 0)
{
lean_object* x_305; uint8_t x_306; 
x_305 = lean_ctor_get(x_302, 0);
lean_dec(x_305);
x_306 = !lean_is_exclusive(x_303);
if (x_306 == 0)
{
return x_302;
}
else
{
lean_object* x_307; lean_object* x_308; 
x_307 = lean_ctor_get(x_303, 0);
lean_inc(x_307);
lean_dec(x_303);
x_308 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_308, 0, x_307);
lean_ctor_set(x_302, 0, x_308);
return x_302;
}
}
else
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; 
x_309 = lean_ctor_get(x_302, 1);
lean_inc(x_309);
lean_dec(x_302);
x_310 = lean_ctor_get(x_303, 0);
lean_inc(x_310);
if (lean_is_exclusive(x_303)) {
 lean_ctor_release(x_303, 0);
 x_311 = x_303;
} else {
 lean_dec_ref(x_303);
 x_311 = lean_box(0);
}
if (lean_is_scalar(x_311)) {
 x_312 = lean_alloc_ctor(0, 1, 0);
} else {
 x_312 = x_311;
}
lean_ctor_set(x_312, 0, x_310);
x_313 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_313, 0, x_312);
lean_ctor_set(x_313, 1, x_309);
return x_313;
}
}
else
{
lean_object* x_314; 
lean_dec(x_303);
x_314 = lean_ctor_get(x_302, 1);
lean_inc(x_314);
lean_dec(x_302);
x_1 = x_301;
x_3 = x_314;
goto _start;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_checkFnBody___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_checkFnBody___spec__1(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_IR_Checker_checkDecl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 4);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_5(x_2, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 3);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_4(x_3, x_10, x_11, x_12, x_13);
return x_14;
}
}
}
lean_object* l_Lean_IR_Checker_checkDecl_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_Checker_checkDecl_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_Checker_checkDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 2);
lean_inc(x_8);
x_9 = lean_array_get_size(x_4);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_lt(x_10, x_9);
if (x_11 == 0)
{
uint8_t x_12; 
lean_dec(x_9);
lean_dec(x_4);
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_ctor_get(x_2, 2);
lean_dec(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_dec(x_14);
x_15 = lean_ctor_get(x_2, 0);
lean_dec(x_15);
x_16 = l_Lean_IR_Checker_checkFnBody(x_5, x_2, x_3);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_2);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_7);
lean_ctor_set(x_17, 2, x_8);
x_18 = l_Lean_IR_Checker_checkFnBody(x_5, x_17, x_3);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = lean_nat_dec_le(x_9, x_9);
if (x_19 == 0)
{
uint8_t x_20; 
lean_dec(x_9);
lean_dec(x_4);
x_20 = !lean_is_exclusive(x_2);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_2, 2);
lean_dec(x_21);
x_22 = lean_ctor_get(x_2, 1);
lean_dec(x_22);
x_23 = lean_ctor_get(x_2, 0);
lean_dec(x_23);
x_24 = l_Lean_IR_Checker_checkFnBody(x_5, x_2, x_3);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_2);
x_25 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_25, 0, x_6);
lean_ctor_set(x_25, 1, x_7);
lean_ctor_set(x_25, 2, x_8);
x_26 = l_Lean_IR_Checker_checkFnBody(x_5, x_25, x_3);
return x_26;
}
}
else
{
size_t x_27; size_t x_28; lean_object* x_29; uint8_t x_30; 
x_27 = 0;
x_28 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_29 = l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_withParams___spec__1(x_4, x_27, x_28, x_7, x_2, x_3);
lean_dec(x_4);
x_30 = !lean_is_exclusive(x_2);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_2, 2);
lean_dec(x_31);
x_32 = lean_ctor_get(x_2, 1);
lean_dec(x_32);
x_33 = lean_ctor_get(x_2, 0);
lean_dec(x_33);
x_34 = lean_ctor_get(x_29, 0);
lean_inc(x_34);
if (lean_obj_tag(x_34) == 0)
{
uint8_t x_35; 
lean_free_object(x_2);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_35 = !lean_is_exclusive(x_29);
if (x_35 == 0)
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_29, 0);
lean_dec(x_36);
x_37 = !lean_is_exclusive(x_34);
if (x_37 == 0)
{
return x_29;
}
else
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_34, 0);
lean_inc(x_38);
lean_dec(x_34);
x_39 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_29, 0, x_39);
return x_29;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_40 = lean_ctor_get(x_29, 1);
lean_inc(x_40);
lean_dec(x_29);
x_41 = lean_ctor_get(x_34, 0);
lean_inc(x_41);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 x_42 = x_34;
} else {
 lean_dec_ref(x_34);
 x_42 = lean_box(0);
}
if (lean_is_scalar(x_42)) {
 x_43 = lean_alloc_ctor(0, 1, 0);
} else {
 x_43 = x_42;
}
lean_ctor_set(x_43, 0, x_41);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_40);
return x_44;
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_29, 1);
lean_inc(x_45);
lean_dec(x_29);
x_46 = lean_ctor_get(x_34, 0);
lean_inc(x_46);
lean_dec(x_34);
lean_ctor_set(x_2, 1, x_46);
x_47 = l_Lean_IR_Checker_checkFnBody(x_5, x_2, x_45);
return x_47;
}
}
else
{
lean_object* x_48; 
lean_dec(x_2);
x_48 = lean_ctor_get(x_29, 0);
lean_inc(x_48);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_49 = lean_ctor_get(x_29, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_50 = x_29;
} else {
 lean_dec_ref(x_29);
 x_50 = lean_box(0);
}
x_51 = lean_ctor_get(x_48, 0);
lean_inc(x_51);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 x_52 = x_48;
} else {
 lean_dec_ref(x_48);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(0, 1, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_51);
if (lean_is_scalar(x_50)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_50;
}
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_49);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_29, 1);
lean_inc(x_55);
lean_dec(x_29);
x_56 = lean_ctor_get(x_48, 0);
lean_inc(x_56);
lean_dec(x_48);
x_57 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_57, 0, x_6);
lean_ctor_set(x_57, 1, x_56);
lean_ctor_set(x_57, 2, x_8);
x_58 = l_Lean_IR_Checker_checkFnBody(x_5, x_57, x_55);
return x_58;
}
}
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_59 = lean_ctor_get(x_1, 1);
lean_inc(x_59);
lean_dec(x_1);
x_60 = lean_ctor_get(x_2, 1);
lean_inc(x_60);
x_61 = lean_array_get_size(x_59);
x_62 = lean_unsigned_to_nat(0u);
x_63 = lean_nat_dec_lt(x_62, x_61);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_2);
x_64 = lean_box(0);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_3);
return x_66;
}
else
{
uint8_t x_67; 
x_67 = lean_nat_dec_le(x_61, x_61);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_59);
lean_dec(x_2);
x_68 = lean_box(0);
x_69 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_69, 0, x_68);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_3);
return x_70;
}
else
{
size_t x_71; size_t x_72; lean_object* x_73; lean_object* x_74; 
x_71 = 0;
x_72 = lean_usize_of_nat(x_61);
lean_dec(x_61);
x_73 = l_Array_foldlMUnsafe_fold___at_Lean_IR_Checker_withParams___spec__1(x_59, x_71, x_72, x_60, x_2, x_3);
lean_dec(x_2);
lean_dec(x_59);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
if (lean_obj_tag(x_74) == 0)
{
uint8_t x_75; 
x_75 = !lean_is_exclusive(x_73);
if (x_75 == 0)
{
lean_object* x_76; uint8_t x_77; 
x_76 = lean_ctor_get(x_73, 0);
lean_dec(x_76);
x_77 = !lean_is_exclusive(x_74);
if (x_77 == 0)
{
return x_73;
}
else
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_ctor_get(x_74, 0);
lean_inc(x_78);
lean_dec(x_74);
x_79 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_73, 0, x_79);
return x_73;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_80 = lean_ctor_get(x_73, 1);
lean_inc(x_80);
lean_dec(x_73);
x_81 = lean_ctor_get(x_74, 0);
lean_inc(x_81);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 x_82 = x_74;
} else {
 lean_dec_ref(x_74);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(0, 1, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_81);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_80);
return x_84;
}
}
else
{
uint8_t x_85; 
x_85 = !lean_is_exclusive(x_74);
if (x_85 == 0)
{
lean_object* x_86; uint8_t x_87; 
x_86 = lean_ctor_get(x_74, 0);
lean_dec(x_86);
x_87 = !lean_is_exclusive(x_73);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_ctor_get(x_73, 0);
lean_dec(x_88);
x_89 = lean_box(0);
lean_ctor_set(x_74, 0, x_89);
return x_73;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_73, 1);
lean_inc(x_90);
lean_dec(x_73);
x_91 = lean_box(0);
lean_ctor_set(x_74, 0, x_91);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_74);
lean_ctor_set(x_92, 1, x_90);
return x_92;
}
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_74);
x_93 = lean_ctor_get(x_73, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_94 = x_73;
} else {
 lean_dec_ref(x_73);
 x_94 = lean_box(0);
}
x_95 = lean_box(0);
x_96 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_96, 0, x_95);
if (lean_is_scalar(x_94)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_94;
}
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_93);
return x_97;
}
}
}
}
}
}
}
lean_object* l_Lean_IR_checkDecl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
}
}
lean_object* l_Lean_IR_checkDecl_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_IR_checkDecl_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_IR_checkDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_IR_getEnv___rarg(x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set(x_9, 2, x_1);
lean_inc(x_2);
x_10 = l_Lean_IR_Checker_checkDecl(x_2, x_9, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_IR_Decl_name(x_2);
lean_dec(x_2);
x_14 = 1;
x_15 = l_Lean_Name_toString(x_13, x_14);
x_16 = lean_mk_string("IR check failed at '");
x_17 = lean_string_append(x_16, x_15);
lean_dec(x_15);
x_18 = lean_mk_string("', error: ");
x_19 = lean_string_append(x_17, x_18);
lean_dec(x_18);
x_20 = lean_string_append(x_19, x_12);
lean_dec(x_12);
x_21 = lean_mk_string("");
x_22 = lean_string_append(x_20, x_21);
lean_dec(x_21);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_22);
return x_5;
}
else
{
lean_object* x_23; 
lean_dec(x_11);
lean_dec(x_2);
x_23 = lean_box(0);
lean_ctor_set(x_5, 0, x_23);
return x_5;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = lean_ctor_get(x_5, 0);
x_25 = lean_ctor_get(x_5, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_5);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_26);
lean_ctor_set(x_27, 2, x_1);
lean_inc(x_2);
x_28 = l_Lean_IR_Checker_checkDecl(x_2, x_27, x_26);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
lean_dec(x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
lean_dec(x_29);
x_31 = l_Lean_IR_Decl_name(x_2);
lean_dec(x_2);
x_32 = 1;
x_33 = l_Lean_Name_toString(x_31, x_32);
x_34 = lean_mk_string("IR check failed at '");
x_35 = lean_string_append(x_34, x_33);
lean_dec(x_33);
x_36 = lean_mk_string("', error: ");
x_37 = lean_string_append(x_35, x_36);
lean_dec(x_36);
x_38 = lean_string_append(x_37, x_30);
lean_dec(x_30);
x_39 = lean_mk_string("");
x_40 = lean_string_append(x_38, x_39);
lean_dec(x_39);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_25);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_29);
lean_dec(x_2);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_25);
return x_43;
}
}
}
}
lean_object* l_Lean_IR_checkDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_IR_checkDecl(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_checkDecls___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_3 == x_4;
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
x_9 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
x_10 = l_Lean_IR_checkDecl(x_1, x_9, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = 1;
x_14 = x_3 + x_13;
x_3 = x_14;
x_5 = x_11;
x_7 = x_12;
goto _start;
}
else
{
uint8_t x_16; 
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_10);
if (x_16 == 0)
{
return x_10;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_10, 0);
x_18 = lean_ctor_get(x_10, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_10);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
else
{
lean_object* x_20; 
lean_dec(x_1);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_5);
lean_ctor_set(x_20, 1, x_7);
return x_20;
}
}
}
lean_object* l_Lean_IR_checkDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_1);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_4, x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_1);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
else
{
size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; 
x_12 = 0;
x_13 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_14 = lean_box(0);
lean_inc(x_1);
x_15 = l_Array_foldlMUnsafe_fold___at_Lean_IR_checkDecls___spec__1(x_1, x_1, x_12, x_13, x_14, x_2, x_3);
lean_dec(x_1);
return x_15;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_IR_checkDecls___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_IR_checkDecls___spec__1(x_1, x_2, x_8, x_9, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_IR_checkDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_checkDecls(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Compiler_IR_CompilerM(lean_object*);
lean_object* initialize_Lean_Compiler_IR_Format(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Compiler_IR_Checker(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_CompilerM(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_Format(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_IR_Checker_maxCtorFields = _init_l_Lean_IR_Checker_maxCtorFields();
lean_mark_persistent(l_Lean_IR_Checker_maxCtorFields);
l_Lean_IR_Checker_maxCtorScalarsSize = _init_l_Lean_IR_Checker_maxCtorScalarsSize();
lean_mark_persistent(l_Lean_IR_Checker_maxCtorScalarsSize);
l_Lean_IR_Checker_usizeSize = _init_l_Lean_IR_Checker_usizeSize();
lean_mark_persistent(l_Lean_IR_Checker_usizeSize);
l_Lean_IR_Checker_CheckerContext_localCtx___default = _init_l_Lean_IR_Checker_CheckerContext_localCtx___default();
lean_mark_persistent(l_Lean_IR_Checker_CheckerContext_localCtx___default);
l_Lean_IR_Checker_CheckerState_foundVars___default = _init_l_Lean_IR_Checker_CheckerState_foundVars___default();
lean_mark_persistent(l_Lean_IR_Checker_CheckerState_foundVars___default);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
