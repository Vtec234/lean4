// Lean compiler output
// Module: Lean.Structure
// Imports: Init Lean.Environment Lean.ProjFns
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
lean_object* l_Lean_isStructureLike_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_getProjFnForField_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Structure_0__Lean_isSubobjectFieldAux_match__1(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_getParentStructures___spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_isInternalSubobjectFieldName_match__1(lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_deinternalizeFieldName_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Structure_0__Lean_getStructureFieldsAux_match__1(lean_object*);
lean_object* l_Lean_getPathToBaseStructureAux_match__1(lean_object*);
lean_object* l_Lean_isInternalSubobjectFieldName_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_getPathToBaseStructureAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t l_Lean_isInternalSubobjectFieldName(lean_object*);
lean_object* l___private_Lean_Structure_0__Lean_isSubobjectFieldAux_match__2(lean_object*);
lean_object* l_Lean_deinternalizeFieldName_match__1(lean_object*);
lean_object* l___private_Lean_Structure_0__Lean_getStructureFieldsAux_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getProjFnForField_x3f(lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_findField_x3f___spec__2(lean_object*, lean_object*, size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Structure_0__Lean_isSubobjectFieldAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getStructureFieldsFlattened___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux___spec__1(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_isStructureLike___boxed(lean_object*, lean_object*);
lean_object* l_Lean_getStructureCtor_match__1(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_getParentStructures___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedConstructorVal;
lean_object* l_Lean_getStructureFieldsFlattened(lean_object*, lean_object*, uint8_t);
uint8_t l_Array_contains___at_Lean_findField_x3f___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_getStructureFields(lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_getProjFnForField_x3f___spec__1(lean_object*, lean_object*, size_t, size_t);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* l_Lean_getPathToBaseStructure_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isStructureLike_match__1(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_getStructureCtor_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_findField_x3f___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_Lean_projectionFnInfoExt;
lean_object* l___private_Lean_Structure_0__Lean_hasProjFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_findField_x3f___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getAllParentStructures(lean_object*, lean_object*);
uint8_t l_UInt32_decEq(uint32_t, uint32_t);
lean_object* l_Array_contains___at_Lean_findField_x3f___spec__1___boxed(lean_object*, lean_object*);
uint8_t l___private_Lean_Structure_0__Lean_hasProjFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getParentStructures(lean_object*, lean_object*);
lean_object* l_Lean_mkInternalSubobjectFieldName(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_getParentStructures_match__1(lean_object*);
lean_object* l_Lean_getStructureCtor(lean_object*, lean_object*);
lean_object* l_Lean_isStructure___boxed(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_getAllParentStructures_visit___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_getPathToBaseStructureAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_isSubobjectField_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Structure_0__Lean_getStructureFieldsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getParentStructures_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Structure_0__Lean_isSubobjectFieldAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Structure_0__Lean_isSubobjectFieldAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_deinternalizeFieldName(lean_object*);
lean_object* l_Lean_findField_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getPathToBaseStructureAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MapDeclarationExtension_contains___at_Lean_Environment_isProjectionFn___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Structure_0__Lean_getStructureFieldsAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_before(lean_object*, lean_object*);
lean_object* l_Lean_getAllParentStructures_visit(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_getPathToBaseStructureAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Structure_0__Lean_isSubobjectFieldAux_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_drop(lean_object*, lean_object*);
lean_object* l_Lean_getPathToBaseStructure_x3f___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isStructureLike(lean_object*, lean_object*);
lean_object* l_Lean_findField_x3f___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInternalSubobjectFieldName___boxed(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_findField_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Array_forInUnsafe_loop___at_Lean_getAllParentStructures_visit___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l_Lean_getPathToBaseStructureAux(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_isStructureLike_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 5)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 4);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = lean_ctor_get_uint8(x_6, sizeof(void*)*5);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_3);
lean_dec(x_1);
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_6, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_6, 3);
lean_inc(x_14);
x_15 = lean_ctor_get_uint8(x_6, sizeof(void*)*5 + 1);
x_16 = lean_ctor_get_uint8(x_6, sizeof(void*)*5 + 2);
x_17 = lean_ctor_get_uint8(x_6, sizeof(void*)*5 + 3);
lean_dec(x_6);
x_18 = lean_ctor_get(x_7, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_7, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_7, 2);
lean_inc(x_20);
lean_dec(x_7);
x_21 = lean_ctor_get(x_8, 0);
lean_inc(x_21);
lean_dec(x_8);
x_22 = lean_box(x_15);
x_23 = lean_box(x_16);
x_24 = lean_box(x_17);
x_25 = lean_apply_10(x_2, x_21, x_18, x_19, x_20, x_12, x_13, x_14, x_22, x_23, x_24);
return x_25;
}
else
{
lean_object* x_26; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_26 = lean_apply_1(x_3, x_1);
return x_26;
}
}
else
{
lean_object* x_27; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_27 = lean_apply_1(x_3, x_1);
return x_27;
}
}
}
else
{
lean_object* x_28; 
lean_dec(x_5);
lean_dec(x_2);
x_28 = lean_apply_1(x_3, x_1);
return x_28;
}
}
}
}
lean_object* l_Lean_isStructureLike_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_isStructureLike_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_isStructureLike(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_environment_find(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 5)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_ctor_get(x_6, 4);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
lean_dec(x_6);
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = lean_ctor_get_uint8(x_6, sizeof(void*)*5);
lean_dec(x_6);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
else
{
uint8_t x_13; 
lean_dec(x_9);
lean_dec(x_6);
x_13 = 0;
return x_13;
}
}
}
else
{
uint8_t x_14; 
lean_dec(x_5);
x_14 = 0;
return x_14;
}
}
}
}
lean_object* l_Lean_isStructureLike___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_isStructureLike(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_mkInternalSubobjectFieldName(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("_");
x_3 = lean_name_append_before(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_isInternalSubobjectFieldName_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_3(x_2, x_4, x_5, x_7);
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
lean_object* l_Lean_isInternalSubobjectFieldName_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_isInternalSubobjectFieldName_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_isInternalSubobjectFieldName(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = lean_string_length(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
lean_dec(x_3);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
else
{
uint32_t x_7; uint32_t x_8; uint8_t x_9; 
x_7 = lean_string_utf8_get(x_2, x_4);
x_8 = 95;
x_9 = x_7 == x_8;
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
}
lean_object* l_Lean_isInternalSubobjectFieldName___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_isInternalSubobjectFieldName(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Lean_deinternalizeFieldName_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
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
lean_object* l_Lean_deinternalizeFieldName_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_deinternalizeFieldName_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_deinternalizeFieldName(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_string_length(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
lean_dec(x_4);
if (x_6 == 0)
{
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
else
{
uint32_t x_7; uint32_t x_8; uint8_t x_9; 
x_7 = lean_string_utf8_get(x_3, x_5);
x_8 = 95;
x_9 = x_7 == x_8;
if (x_9 == 0)
{
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_String_drop(x_3, x_10);
x_12 = lean_name_mk_string(x_2, x_11);
return x_12;
}
}
}
else
{
return x_1;
}
}
}
lean_object* l_Lean_getStructureCtor_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 6)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
}
lean_object* l_Lean_getStructureCtor_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_getStructureCtor_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_getStructureCtor(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_1);
x_3 = lean_environment_find(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_4 = lean_mk_string("Lean.Structure");
x_5 = lean_mk_string("Lean.getStructureCtor");
x_6 = lean_unsigned_to_nat(44u);
x_7 = lean_unsigned_to_nat(9u);
x_8 = lean_mk_string("structure expected");
x_9 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
x_10 = l_Lean_instInhabitedConstructorVal;
x_11 = lean_panic_fn(x_10, x_9);
return x_11;
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
lean_dec(x_3);
if (lean_obj_tag(x_12) == 5)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 4);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_13);
lean_dec(x_1);
x_15 = lean_mk_string("Lean.Structure");
x_16 = lean_mk_string("Lean.getStructureCtor");
x_17 = lean_unsigned_to_nat(44u);
x_18 = lean_unsigned_to_nat(9u);
x_19 = lean_mk_string("structure expected");
x_20 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_15, x_16, x_17, x_18, x_19);
lean_dec(x_19);
lean_dec(x_16);
lean_dec(x_15);
x_21 = l_Lean_instInhabitedConstructorVal;
x_22 = lean_panic_fn(x_21, x_20);
return x_22;
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_14, 1);
lean_inc(x_23);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = lean_ctor_get_uint8(x_13, sizeof(void*)*5);
lean_dec(x_13);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_14, 0);
lean_inc(x_25);
lean_dec(x_14);
x_26 = lean_environment_find(x_1, x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_27 = lean_mk_string("Lean.Structure");
x_28 = lean_mk_string("Lean.getStructureCtor");
x_29 = lean_unsigned_to_nat(43u);
x_30 = lean_unsigned_to_nat(11u);
x_31 = lean_mk_string("ill-formed environment");
x_32 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_27, x_28, x_29, x_30, x_31);
lean_dec(x_31);
lean_dec(x_28);
lean_dec(x_27);
x_33 = l_Lean_instInhabitedConstructorVal;
x_34 = lean_panic_fn(x_33, x_32);
return x_34;
}
else
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_26, 0);
lean_inc(x_35);
lean_dec(x_26);
if (lean_obj_tag(x_35) == 6)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
lean_dec(x_35);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_35);
x_37 = lean_mk_string("Lean.Structure");
x_38 = lean_mk_string("Lean.getStructureCtor");
x_39 = lean_unsigned_to_nat(43u);
x_40 = lean_unsigned_to_nat(11u);
x_41 = lean_mk_string("ill-formed environment");
x_42 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_37, x_38, x_39, x_40, x_41);
lean_dec(x_41);
lean_dec(x_38);
lean_dec(x_37);
x_43 = l_Lean_instInhabitedConstructorVal;
x_44 = lean_panic_fn(x_43, x_42);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_14);
lean_dec(x_1);
x_45 = lean_mk_string("Lean.Structure");
x_46 = lean_mk_string("Lean.getStructureCtor");
x_47 = lean_unsigned_to_nat(44u);
x_48 = lean_unsigned_to_nat(9u);
x_49 = lean_mk_string("structure expected");
x_50 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_45, x_46, x_47, x_48, x_49);
lean_dec(x_49);
lean_dec(x_46);
lean_dec(x_45);
x_51 = l_Lean_instInhabitedConstructorVal;
x_52 = lean_panic_fn(x_51, x_50);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_23);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_1);
x_53 = lean_mk_string("Lean.Structure");
x_54 = lean_mk_string("Lean.getStructureCtor");
x_55 = lean_unsigned_to_nat(44u);
x_56 = lean_unsigned_to_nat(9u);
x_57 = lean_mk_string("structure expected");
x_58 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_53, x_54, x_55, x_56, x_57);
lean_dec(x_57);
lean_dec(x_54);
lean_dec(x_53);
x_59 = l_Lean_instInhabitedConstructorVal;
x_60 = lean_panic_fn(x_59, x_58);
return x_60;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_12);
lean_dec(x_1);
x_61 = lean_mk_string("Lean.Structure");
x_62 = lean_mk_string("Lean.getStructureCtor");
x_63 = lean_unsigned_to_nat(44u);
x_64 = lean_unsigned_to_nat(9u);
x_65 = lean_mk_string("structure expected");
x_66 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_61, x_62, x_63, x_64, x_65);
lean_dec(x_65);
lean_dec(x_62);
lean_dec(x_61);
x_67 = l_Lean_instInhabitedConstructorVal;
x_68 = lean_panic_fn(x_67, x_66);
return x_68;
}
}
}
}
lean_object* l___private_Lean_Structure_0__Lean_getStructureFieldsAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_2) == 7)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint64_t x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 2);
lean_inc(x_8);
x_9 = lean_ctor_get_uint64(x_2, sizeof(void*)*3);
lean_dec(x_2);
x_10 = lean_box_uint64(x_9);
x_11 = lean_apply_6(x_4, x_1, x_6, x_7, x_8, x_10, x_3);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_4);
x_12 = lean_apply_3(x_5, x_1, x_2, x_3);
return x_12;
}
}
}
lean_object* l___private_Lean_Structure_0__Lean_getStructureFieldsAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_getStructureFieldsAux_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Structure_0__Lean_getStructureFieldsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 7)
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_nat_dec_lt(x_2, x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_2, x_8);
lean_dec(x_2);
x_10 = l_Lean_deinternalizeFieldName(x_5);
x_11 = lean_array_push(x_4, x_10);
x_2 = x_9;
x_3 = x_6;
x_4 = x_11;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_2, x_13);
lean_dec(x_2);
x_2 = x_14;
x_3 = x_6;
goto _start;
}
}
else
{
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
}
lean_object* l___private_Lean_Structure_0__Lean_getStructureFieldsAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Structure_0__Lean_getStructureFieldsAux(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_getStructureFields(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = l_Lean_getStructureCtor(x_1, x_2);
x_4 = lean_ctor_get(x_3, 3);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_mk_empty_array_with_capacity(x_7);
x_9 = l___private_Lean_Structure_0__Lean_getStructureFieldsAux(x_4, x_7, x_6, x_8);
lean_dec(x_4);
return x_9;
}
}
lean_object* l___private_Lean_Structure_0__Lean_isSubobjectFieldAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_3(x_2, x_4, x_5, x_7);
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
lean_object* l___private_Lean_Structure_0__Lean_isSubobjectFieldAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_isSubobjectFieldAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Structure_0__Lean_isSubobjectFieldAux_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_2) == 7)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 2);
lean_inc(x_7);
x_8 = lean_ctor_get_uint64(x_2, sizeof(void*)*3);
lean_dec(x_2);
x_9 = lean_box_uint64(x_8);
x_10 = lean_apply_5(x_3, x_1, x_5, x_6, x_7, x_9);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_3);
x_11 = lean_apply_2(x_4, x_1, x_2);
return x_11;
}
}
}
lean_object* l___private_Lean_Structure_0__Lean_isSubobjectFieldAux_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Structure_0__Lean_isSubobjectFieldAux_match__2___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Structure_0__Lean_isSubobjectFieldAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 7)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_4, 0);
x_6 = lean_ctor_get(x_4, 1);
x_7 = lean_ctor_get(x_4, 2);
x_8 = lean_nat_dec_lt(x_3, x_1);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = lean_name_eq(x_5, x_2);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_3 = x_11;
x_4 = x_7;
goto _start;
}
else
{
lean_object* x_13; 
lean_dec(x_3);
x_13 = l_Lean_Expr_getAppFn(x_6);
if (lean_obj_tag(x_13) == 4)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_13);
x_16 = lean_box(0);
x_17 = lean_mk_string("Lean.Structure");
x_18 = lean_mk_string("_private.Lean.Structure.0.Lean.isSubobjectFieldAux");
x_19 = lean_unsigned_to_nat(66u);
x_20 = lean_unsigned_to_nat(13u);
x_21 = lean_mk_string("ill-formed structure");
x_22 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_17, x_18, x_19, x_20, x_21);
lean_dec(x_21);
lean_dec(x_18);
lean_dec(x_17);
x_23 = lean_panic_fn(x_16, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_add(x_3, x_24);
lean_dec(x_3);
x_3 = x_25;
x_4 = x_7;
goto _start;
}
}
else
{
lean_object* x_27; 
lean_dec(x_3);
x_27 = lean_box(0);
return x_27;
}
}
}
lean_object* l___private_Lean_Structure_0__Lean_isSubobjectFieldAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Structure_0__Lean_isSubobjectFieldAux(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_isSubobjectField_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = l_Lean_getStructureCtor(x_1, x_2);
x_5 = lean_ctor_get(x_4, 3);
lean_inc(x_5);
x_6 = lean_mk_string("_");
x_7 = lean_name_append_before(x_3, x_6);
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_unsigned_to_nat(0u);
x_11 = l___private_Lean_Structure_0__Lean_isSubobjectFieldAux(x_5, x_7, x_10, x_9);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_5);
return x_11;
}
}
lean_object* l_Lean_getParentStructures_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_getParentStructures_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_getParentStructures_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_getParentStructures___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; 
x_8 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Lean_isSubobjectField_x3f(x_1, x_2, x_8);
x_10 = 1;
x_11 = x_4 + x_10;
if (lean_obj_tag(x_9) == 0)
{
x_4 = x_11;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_array_push(x_6, x_13);
x_4 = x_11;
x_6 = x_14;
goto _start;
}
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
}
lean_object* l_Lean_getParentStructures(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_Lean_getStructureFields(x_1, x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_mk_empty_array_with_capacity(x_4);
x_6 = lean_array_get_size(x_3);
x_7 = lean_nat_dec_lt(x_4, x_6);
if (x_7 == 0)
{
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
uint8_t x_8; 
x_8 = lean_nat_dec_le(x_6, x_6);
if (x_8 == 0)
{
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_11 = l_Array_foldlMUnsafe_fold___at_Lean_getParentStructures___spec__1(x_1, x_2, x_3, x_9, x_10, x_5);
lean_dec(x_3);
return x_11;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_getParentStructures___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_getParentStructures___spec__1(x_1, x_2, x_3, x_7, x_8, x_6);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_getAllParentStructures_visit___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 < x_3;
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; 
lean_dec(x_5);
x_9 = lean_array_uget(x_2, x_4);
lean_inc(x_9);
x_10 = lean_array_push(x_6, x_9);
lean_inc(x_1);
x_11 = l_Lean_getAllParentStructures_visit(x_1, x_9, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = 1;
x_14 = x_4 + x_13;
x_15 = lean_box(0);
x_4 = x_14;
x_5 = x_15;
x_6 = x_12;
goto _start;
}
}
}
lean_object* l_Lean_getAllParentStructures_visit(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_1);
x_4 = l_Lean_getParentStructures(x_1, x_2);
x_5 = lean_array_get_size(x_4);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = 0;
x_8 = lean_box(0);
x_9 = l_Array_forInUnsafe_loop___at_Lean_getAllParentStructures_visit___spec__1(x_1, x_4, x_6, x_7, x_8, x_3);
lean_dec(x_4);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_9, 0);
lean_dec(x_11);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_getAllParentStructures_visit___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Array_forInUnsafe_loop___at_Lean_getAllParentStructures_visit___spec__1(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_getAllParentStructures(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_mk_empty_array_with_capacity(x_3);
x_5 = l_Lean_getAllParentStructures_visit(x_1, x_2, x_4);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
return x_6;
}
}
uint8_t l_Array_anyMUnsafe_any___at_Lean_findField_x3f___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 == x_4;
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_name_eq(x_1, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
size_t x_8; size_t x_9; 
x_8 = 1;
x_9 = x_3 + x_8;
x_3 = x_9;
goto _start;
}
else
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
}
uint8_t l_Array_contains___at_Lean_findField_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_3, x_3);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_3);
x_8 = 0;
return x_8;
}
else
{
size_t x_9; size_t x_10; uint8_t x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_11 = l_Array_anyMUnsafe_any___at_Lean_findField_x3f___spec__2(x_2, x_1, x_9, x_10);
return x_11;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_findField_x3f___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_6 < x_5;
if (x_8 == 0)
{
lean_dec(x_1);
lean_inc(x_7);
return x_7;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_array_uget(x_4, x_6);
lean_inc(x_1);
x_10 = l_Lean_findField_x3f(x_1, x_9, x_2);
if (lean_obj_tag(x_10) == 0)
{
size_t x_11; size_t x_12; 
x_11 = 1;
x_12 = x_6 + x_11;
{
size_t _tmp_5 = x_12;
lean_object* _tmp_6 = x_3;
x_6 = _tmp_5;
x_7 = _tmp_6;
}
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_10);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_10, 0);
lean_inc(x_17);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
}
lean_object* l_Lean_findField_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = l_Lean_getStructureFields(x_1, x_2);
x_5 = l_Array_contains___at_Lean_findField_x3f___spec__1(x_4, x_3);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_1);
x_6 = l_Lean_getParentStructures(x_1, x_2);
x_7 = lean_box(0);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_array_get_size(x_6);
x_11 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_12 = 0;
x_13 = l_Array_forInUnsafe_loop___at_Lean_findField_x3f___spec__3(x_1, x_3, x_9, x_6, x_11, x_12, x_9);
lean_dec(x_6);
lean_dec(x_9);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
return x_7;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
else
{
lean_object* x_18; 
lean_dec(x_1);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_2);
return x_18;
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_findField_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_findField_x3f___spec__2(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Array_contains___at_Lean_findField_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_contains___at_Lean_findField_x3f___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_findField_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_forInUnsafe_loop___at_Lean_findField_x3f___spec__3(x_1, x_2, x_3, x_4, x_8, x_9, x_7);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_findField_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_findField_x3f(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux___spec__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_5 == x_6;
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; 
x_9 = lean_array_uget(x_4, x_5);
lean_inc(x_9);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_isSubobjectField_x3f(x_1, x_2, x_9);
x_11 = 1;
x_12 = x_5 + x_11;
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_13; 
x_13 = lean_array_push(x_7, x_9);
x_5 = x_12;
x_7 = x_13;
goto _start;
}
else
{
if (x_3 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_9);
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
lean_inc(x_1);
x_16 = l___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux(x_1, x_15, x_7, x_3);
x_5 = x_12;
x_7 = x_16;
goto _start;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_10, 0);
lean_inc(x_18);
lean_dec(x_10);
x_19 = lean_array_push(x_7, x_9);
lean_inc(x_1);
x_20 = l___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux(x_1, x_18, x_19, x_3);
x_5 = x_12;
x_7 = x_20;
goto _start;
}
}
}
else
{
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
}
lean_object* l___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Lean_getStructureFields(x_1, x_2);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_6, x_6);
if (x_9 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = 0;
x_11 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_12 = l_Array_foldlMUnsafe_fold___at___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux___spec__1(x_1, x_2, x_4, x_5, x_10, x_11, x_3);
lean_dec(x_5);
return x_12;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; size_t x_9; size_t x_10; lean_object* x_11; 
x_8 = lean_unbox(x_3);
lean_dec(x_3);
x_9 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_10 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_11 = l_Array_foldlMUnsafe_fold___at___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux___spec__1(x_1, x_2, x_8, x_4, x_9, x_10, x_7);
lean_dec(x_4);
return x_11;
}
}
lean_object* l___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux(x_1, x_2, x_3, x_5);
return x_6;
}
}
lean_object* l_Lean_getStructureFieldsFlattened(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_mk_empty_array_with_capacity(x_4);
x_6 = l___private_Lean_Structure_0__Lean_getStructureFieldsFlattenedAux(x_1, x_2, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_getStructureFieldsFlattened___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_getStructureFieldsFlattened(x_1, x_2, x_4);
return x_5;
}
}
uint8_t l___private_Lean_Structure_0__Lean_hasProjFn(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_5) == 7)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 2);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_nat_dec_lt(x_4, x_3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_dec(x_7);
lean_dec(x_4);
x_9 = l_Lean_deinternalizeFieldName(x_6);
x_10 = l_Lean_Name_append(x_2, x_9);
x_11 = l_Lean_projectionFnInfoExt;
x_12 = l_Lean_MapDeclarationExtension_contains___at_Lean_Environment_isProjectionFn___spec__1(x_11, x_1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_4, x_13);
lean_dec(x_4);
x_4 = x_14;
x_5 = x_7;
goto _start;
}
}
else
{
uint8_t x_16; 
lean_dec(x_5);
lean_dec(x_4);
x_16 = 0;
return x_16;
}
}
}
lean_object* l___private_Lean_Structure_0__Lean_hasProjFn___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l___private_Lean_Structure_0__Lean_hasProjFn(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
uint8_t l_Lean_isStructure(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
lean_inc(x_2);
lean_inc(x_1);
x_3 = l_Lean_isStructureLike(x_1, x_2);
if (x_3 == 0)
{
uint8_t x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Lean_getStructureCtor(x_1, x_2);
x_6 = lean_ctor_get(x_5, 3);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_7, 2);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l___private_Lean_Structure_0__Lean_hasProjFn(x_1, x_2, x_6, x_9, x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
}
lean_object* l_Lean_isStructure___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_isStructure(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Array_anyMUnsafe_any___at_Lean_getProjFnForField_x3f___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 == x_4;
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_name_eq(x_1, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
size_t x_8; size_t x_9; 
x_8 = 1;
x_9 = x_3 + x_8;
x_3 = x_9;
goto _start;
}
else
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
}
lean_object* l_Lean_getProjFnForField_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
lean_inc(x_2);
x_4 = l_Lean_getStructureFields(x_1, x_2);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_box(0);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_5, x_5);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_box(0);
return x_10;
}
else
{
size_t x_11; size_t x_12; uint8_t x_13; 
x_11 = 0;
x_12 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_13 = l_Array_anyMUnsafe_any___at_Lean_getProjFnForField_x3f___spec__1(x_3, x_4, x_11, x_12);
lean_dec(x_4);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_box(0);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Lean_Name_append(x_2, x_3);
lean_dec(x_2);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_getProjFnForField_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_getProjFnForField_x3f___spec__1(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Lean_getPathToBaseStructureAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_getPathToBaseStructureAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_getPathToBaseStructureAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_getPathToBaseStructureAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, size_t x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = x_8 < x_7;
if (x_10 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
lean_inc(x_9);
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_array_uget(x_6, x_8);
lean_inc(x_11);
lean_inc(x_3);
lean_inc(x_1);
x_12 = l_Lean_isSubobjectField_x3f(x_1, x_3, x_11);
if (lean_obj_tag(x_12) == 0)
{
size_t x_13; size_t x_14; 
lean_dec(x_11);
x_13 = 1;
x_14 = x_8 + x_13;
{
size_t _tmp_7 = x_14;
lean_object* _tmp_8 = x_5;
x_8 = _tmp_7;
x_9 = _tmp_8;
}
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_12, 0);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_3);
lean_inc(x_1);
x_17 = l_Lean_getProjFnForField_x3f(x_1, x_3, x_11);
if (lean_obj_tag(x_17) == 0)
{
size_t x_18; size_t x_19; 
lean_dec(x_16);
x_18 = 1;
x_19 = x_8 + x_18;
{
size_t _tmp_7 = x_19;
lean_object* _tmp_8 = x_5;
x_8 = _tmp_7;
x_9 = _tmp_8;
}
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
lean_inc(x_4);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_4);
lean_inc(x_1);
x_23 = l_Lean_getPathToBaseStructureAux(x_1, x_2, x_16, x_22);
if (lean_obj_tag(x_23) == 0)
{
size_t x_24; size_t x_25; 
x_24 = 1;
x_25 = x_8 + x_24;
{
size_t _tmp_7 = x_25;
lean_object* _tmp_8 = x_5;
x_8 = _tmp_7;
x_9 = _tmp_8;
}
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_23);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_23);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_23, 0);
lean_inc(x_30);
lean_dec(x_23);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_box(0);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
}
}
lean_object* l_Lean_getPathToBaseStructureAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_name_eq(x_2, x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_3);
lean_inc(x_1);
x_6 = l_Lean_getStructureFields(x_1, x_3);
x_7 = lean_box(0);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_array_get_size(x_6);
x_11 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_12 = 0;
x_13 = l_Array_forInUnsafe_loop___at_Lean_getPathToBaseStructureAux___spec__1(x_1, x_2, x_3, x_4, x_9, x_6, x_11, x_12, x_9);
lean_dec(x_6);
lean_dec(x_9);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
return x_7;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
}
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_3);
lean_dec(x_1);
x_18 = l_List_reverse___rarg(x_4);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_getPathToBaseStructureAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_11 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_12 = l_Array_forInUnsafe_loop___at_Lean_getPathToBaseStructureAux___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_10, x_11, x_9);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_12;
}
}
lean_object* l_Lean_getPathToBaseStructureAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_getPathToBaseStructureAux(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_getPathToBaseStructure_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_Lean_getPathToBaseStructureAux(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_getPathToBaseStructure_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_getPathToBaseStructure_x3f(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Environment(lean_object*);
lean_object* initialize_Lean_ProjFns(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Structure(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ProjFns(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
