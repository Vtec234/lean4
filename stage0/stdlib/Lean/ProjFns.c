// Lean compiler output
// Module: Lean.ProjFns
// Imports: Init Lean.Environment
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
lean_object* l_Lean_getProjectionFnInfo_x3f___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* lean_add_projection_info(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_mkMapDeclarationExtension___rarg___lambda__2___boxed(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_mkMapDeclarationExtension___rarg___lambda__1(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Environment_isProjectionFn___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isProjectionFn___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__5(lean_object*, lean_object*);
lean_object* l_Lean_projectionFnInfoExt___elambda__2___boxed(lean_object*);
lean_object* l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___at_Lean_Environment_getProjectionFnInfo_x3f___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionStructureName_x3f_match__2(lean_object*);
uint8_t l_Lean_NameMap_contains___rarg(lean_object*, lean_object*);
uint8_t l_Lean_Environment_isProjectionFn(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_get_projection_info(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionStructureName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_projectionFnInfoExt___elambda__3___boxed(lean_object*, lean_object*);
lean_object* l_Lean_projectionFnInfoExt___elambda__4___rarg(lean_object*);
lean_object* l_Std_RBNode_find___at_Lean_Environment_getProjectionFnInfo_x3f___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_contains___at_Lean_Environment_isProjectionFn___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isProjectionFn___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_getProjectionFnInfo_x3f___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_swap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_ProjFns___hyg_69_(lean_object*);
lean_object* l_Lean_projectionFnInfoExt___elambda__2(lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__3(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_instInhabitedProjectionFunctionInfo;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickCmp(lean_object*, lean_object*);
lean_object* l_Lean_addProjectionFnInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__1___lambda__1(lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
uint8_t lean_projection_info_from_class(lean_object*);
extern lean_object* l_Lean_persistentEnvExtensionsRef;
lean_object* l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Environment_getProjectionFnInfo_x3f___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_projectionFnInfoExt;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___rarg(lean_object*, lean_object*);
uint8_t l_Array_binSearchAux___at_Lean_Environment_isProjectionFn___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1(lean_object*);
lean_object* l_Array_qsort_sort___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionStructureName_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_projectionFnInfoExt___elambda__1(lean_object*);
lean_object* l_List_redLength___rarg(lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_ProjectionFunctionInfo_fromClassEx___boxed(lean_object*);
lean_object* l_Lean_isProjectionFn___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__4(lean_object*, lean_object*);
lean_object* l_Lean_mkProjectionInfoEx___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_projectionFnInfoExt___elambda__3(lean_object*, lean_object*);
lean_object* l_Lean_getProjectionFnInfo_x3f___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___boxed(lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___at_Lean_Environment_getProjectionFnInfo_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_List_toArrayAux___rarg(lean_object*, lean_object*);
lean_object* l_Lean_projectionFnInfoExt___elambda__4(lean_object*, lean_object*);
lean_object* l_Lean_isProjectionFn(lean_object*);
lean_object* l_Lean_getProjectionFnInfo_x3f(lean_object*);
lean_object* l_Array_qsort_sort___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_isProjectionFn___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionStructureName_x3f_match__1(lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___at_Lean_Environment_getProjectionFnInfo_x3f___spec__1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MapDeclarationExtension_contains___at_Lean_Environment_isProjectionFn___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionStructureName_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_projectionFnInfoExt___elambda__4___boxed(lean_object*, lean_object*);
lean_object* lean_mk_projection_info(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_EStateM_pure___rarg(lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__6(lean_object*, lean_object*, size_t, size_t);
uint32_t lean_uint32_of_nat(lean_object*);
lean_object* l_Lean_projectionFnInfoExt___elambda__1___boxed(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_Environment_getProjectionFnInfo_x3f___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_mk_projection_info(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*3, x_4);
return x_5;
}
}
lean_object* l_Lean_mkProjectionInfoEx___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = lean_mk_projection_info(x_1, x_2, x_3, x_5);
return x_6;
}
}
uint8_t lean_projection_info_from_class(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_ProjectionFunctionInfo_fromClassEx___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_projection_info_from_class(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_instInhabitedProjectionFunctionInfo() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(0u);
x_3 = 0;
x_4 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_2);
lean_ctor_set_uint8(x_4, sizeof(void*)*3, x_3);
return x_4;
}
}
lean_object* l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = l_Lean_instInhabitedName;
x_8 = l_Lean_instInhabitedProjectionFunctionInfo;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_nat_dec_lt(x_6, x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_11 = lean_array_swap(x_4, x_5, x_2);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_array_get(x_9, x_4, x_6);
lean_inc(x_1);
lean_inc(x_3);
x_14 = lean_apply_2(x_1, x_13, x_3);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_6, x_16);
lean_dec(x_6);
x_6 = x_17;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_array_swap(x_4, x_5, x_6);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_5, x_20);
lean_dec(x_5);
x_22 = lean_nat_add(x_6, x_20);
lean_dec(x_6);
x_4 = x_19;
x_5 = x_21;
x_6 = x_22;
goto _start;
}
}
}
}
lean_object* l_Array_qsort_sort___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_16; 
x_4 = l_Lean_instInhabitedName;
x_5 = l_Lean_instInhabitedProjectionFunctionInfo;
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_16 = lean_nat_dec_lt(x_2, x_3);
if (x_16 == 0)
{
lean_dec(x_6);
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_17 = lean_nat_add(x_2, x_3);
x_18 = lean_unsigned_to_nat(2u);
x_19 = lean_nat_div(x_17, x_18);
lean_dec(x_17);
lean_inc(x_6);
x_48 = lean_array_get(x_6, x_1, x_19);
lean_inc(x_6);
x_49 = lean_array_get(x_6, x_1, x_2);
x_50 = lean_ctor_get(x_48, 0);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_ctor_get(x_49, 0);
lean_inc(x_51);
lean_dec(x_49);
x_52 = l_Lean_Name_quickLt(x_50, x_51);
lean_dec(x_51);
lean_dec(x_50);
if (x_52 == 0)
{
x_20 = x_1;
goto block_47;
}
else
{
lean_object* x_53; 
x_53 = lean_array_swap(x_1, x_2, x_19);
x_20 = x_53;
goto block_47;
}
block_47:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_inc(x_6);
x_21 = lean_array_get(x_6, x_20, x_3);
lean_inc(x_6);
x_22 = lean_array_get(x_6, x_20, x_2);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_Name_quickLt(x_23, x_24);
lean_dec(x_24);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_inc(x_6);
x_26 = lean_array_get(x_6, x_20, x_19);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_Name_quickLt(x_27, x_23);
lean_dec(x_23);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_19);
lean_dec(x_6);
x_29 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___lambda__1___boxed), 2, 0);
lean_inc_n(x_2, 2);
x_30 = l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__3(x_29, x_3, x_21, x_20, x_2, x_2);
x_7 = x_30;
goto block_15;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_21);
x_31 = lean_array_swap(x_20, x_19, x_3);
lean_dec(x_19);
x_32 = lean_array_get(x_6, x_31, x_3);
x_33 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___lambda__1___boxed), 2, 0);
lean_inc_n(x_2, 2);
x_34 = l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__3(x_33, x_3, x_32, x_31, x_2, x_2);
x_7 = x_34;
goto block_15;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_dec(x_23);
lean_dec(x_21);
x_35 = lean_array_swap(x_20, x_2, x_3);
lean_inc(x_6);
x_36 = lean_array_get(x_6, x_35, x_19);
lean_inc(x_6);
x_37 = lean_array_get(x_6, x_35, x_3);
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
x_40 = l_Lean_Name_quickLt(x_38, x_39);
lean_dec(x_39);
lean_dec(x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_19);
lean_dec(x_6);
x_41 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___lambda__1___boxed), 2, 0);
lean_inc_n(x_2, 2);
x_42 = l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__3(x_41, x_3, x_37, x_35, x_2, x_2);
x_7 = x_42;
goto block_15;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_37);
x_43 = lean_array_swap(x_35, x_19, x_3);
lean_dec(x_19);
x_44 = lean_array_get(x_6, x_43, x_3);
x_45 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___lambda__1___boxed), 2, 0);
lean_inc_n(x_2, 2);
x_46 = l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__3(x_45, x_3, x_44, x_43, x_2, x_2);
x_7 = x_46;
goto block_15;
}
}
}
}
block_15:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_nat_dec_le(x_3, x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Array_qsort_sort___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__2(x_9, x_2, x_8);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_8, x_12);
lean_dec(x_8);
x_1 = x_11;
x_2 = x_13;
goto _start;
}
else
{
lean_dec(x_8);
lean_dec(x_2);
return x_9;
}
}
}
}
uint8_t l_Array_anyMUnsafe_any___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 == x_4;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_name_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
size_t x_10; size_t x_11; 
x_10 = 1;
x_11 = x_3 + x_10;
x_3 = x_11;
goto _start;
}
else
{
uint8_t x_13; 
x_13 = 1;
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
}
}
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_persistentEnvExtensionsRef;
x_4 = lean_st_ref_get(x_3, x_2);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_array_get_size(x_6);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_lt(x_9, x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_free_object(x_4);
lean_dec(x_6);
x_11 = lean_box(0);
x_12 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_11, x_7);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = lean_nat_dec_le(x_8, x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
lean_free_object(x_4);
lean_dec(x_6);
x_14 = lean_box(0);
x_15 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_14, x_7);
return x_15;
}
else
{
size_t x_16; size_t x_17; uint8_t x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_8);
lean_dec(x_8);
x_18 = l_Array_anyMUnsafe_any___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__6(x_1, x_6, x_16, x_17);
lean_dec(x_6);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_free_object(x_4);
x_19 = lean_box(0);
x_20 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_19, x_7);
return x_20;
}
else
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
lean_dec(x_1);
x_22 = 1;
x_23 = l_Lean_Name_toString(x_21, x_22);
x_24 = lean_mk_string("invalid environment extension, '");
x_25 = lean_string_append(x_24, x_23);
lean_dec(x_23);
x_26 = lean_mk_string("' has already been used");
x_27 = lean_string_append(x_25, x_26);
lean_dec(x_26);
x_28 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set_tag(x_4, 1);
lean_ctor_set(x_4, 0, x_28);
return x_4;
}
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_4, 0);
x_30 = lean_ctor_get(x_4, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_4);
x_31 = lean_array_get_size(x_29);
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_nat_dec_lt(x_32, x_31);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_31);
lean_dec(x_29);
x_34 = lean_box(0);
x_35 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_34, x_30);
return x_35;
}
else
{
uint8_t x_36; 
x_36 = lean_nat_dec_le(x_31, x_31);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_31);
lean_dec(x_29);
x_37 = lean_box(0);
x_38 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_37, x_30);
return x_38;
}
else
{
size_t x_39; size_t x_40; uint8_t x_41; 
x_39 = 0;
x_40 = lean_usize_of_nat(x_31);
lean_dec(x_31);
x_41 = l_Array_anyMUnsafe_any___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__6(x_1, x_29, x_39, x_40);
lean_dec(x_29);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_box(0);
x_43 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(x_1, x_42, x_30);
return x_43;
}
else
{
lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_44 = lean_ctor_get(x_1, 0);
lean_inc(x_44);
lean_dec(x_1);
x_45 = 1;
x_46 = l_Lean_Name_toString(x_44, x_45);
x_47 = lean_mk_string("invalid environment extension, '");
x_48 = lean_string_append(x_47, x_46);
lean_dec(x_46);
x_49 = lean_mk_string("' has already been used");
x_50 = lean_string_append(x_48, x_49);
lean_dec(x_49);
x_51 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_30);
return x_52;
}
}
}
}
}
}
lean_object* l_Lean_registerSimplePersistentEnvExtension___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_box(0);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_mk_empty_array_with_capacity(x_6);
lean_inc(x_4);
x_8 = lean_apply_1(x_4, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_closure((void*)(l_EStateM_pure___rarg), 2, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__1___boxed), 5, 2);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_5);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__2), 3, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__3), 2, 1);
lean_closure_set(x_13, 0, x_1);
x_14 = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___rarg___lambda__4___boxed), 1, 0);
x_15 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_15, 0, x_3);
lean_ctor_set(x_15, 1, x_10);
lean_ctor_set(x_15, 2, x_11);
lean_ctor_set(x_15, 3, x_12);
lean_ctor_set(x_15, 4, x_13);
lean_ctor_set(x_15, 5, x_14);
x_16 = l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__5(x_15, x_2);
return x_16;
}
}
lean_object* l_Lean_mkMapDeclarationExtension___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__1___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = l_List_redLength___rarg(x_1);
x_3 = lean_mk_empty_array_with_capacity(x_2);
lean_dec(x_2);
x_4 = l_List_toArrayAux___rarg(x_1, x_3);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_5, x_6);
lean_dec(x_5);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Array_qsort_sort___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__2(x_4, x_8, x_7);
lean_dec(x_7);
return x_9;
}
}
lean_object* l_Lean_mkMapDeclarationExtension___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_alloc_closure((void*)(l_Lean_mkMapDeclarationExtension___rarg___lambda__1), 2, 0);
x_4 = lean_alloc_closure((void*)(l_Lean_mkMapDeclarationExtension___rarg___lambda__2___boxed), 1, 0);
x_5 = lean_alloc_closure((void*)(l_Lean_mkMapDeclarationExtension___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__1___lambda__1), 1, 0);
x_6 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_4);
lean_ctor_set(x_6, 3, x_5);
x_7 = l_Lean_registerSimplePersistentEnvExtension___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__4(x_6, x_2);
return x_7;
}
}
lean_object* l_Lean_initFn____x40_Lean_ProjFns___hyg_69_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = lean_mk_string("projinfo");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = l_Lean_mkMapDeclarationExtension___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__1(x_4, x_1);
return x_5;
}
}
lean_object* l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Array_qsort_sort___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_qsort_sort___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_initFn____x40_Lean_ProjFns___hyg_69____spec__6(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Lean_projectionFnInfoExt___elambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
lean_object* l_Lean_projectionFnInfoExt___elambda__2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_mk_empty_array_with_capacity(x_2);
return x_3;
}
}
lean_object* l_Lean_projectionFnInfoExt___elambda__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_projectionFnInfoExt___elambda__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; uint32_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_uint32_of_nat(x_2);
x_4 = lean_mk_string("");
x_5 = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set_uint32(x_5, sizeof(void*)*1, x_3);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_1);
return x_6;
}
}
lean_object* l_Lean_projectionFnInfoExt___elambda__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_projectionFnInfoExt___elambda__4___rarg), 1, 0);
return x_3;
}
}
lean_object* l_Lean_projectionFnInfoExt___elambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_projectionFnInfoExt___elambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_projectionFnInfoExt___elambda__2___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_projectionFnInfoExt___elambda__2(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_projectionFnInfoExt___elambda__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_projectionFnInfoExt___elambda__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_projectionFnInfoExt___elambda__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_projectionFnInfoExt___elambda__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* lean_add_projection_info(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_4);
lean_ctor_set(x_7, 2, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*3, x_6);
x_8 = l_Lean_projectionFnInfoExt;
x_9 = l_Lean_MapDeclarationExtension_insert___rarg(x_8, x_1, x_2, x_7);
return x_9;
}
}
lean_object* l_Lean_addProjectionFnInfo___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = lean_add_projection_info(x_1, x_2, x_3, x_4, x_5, x_7);
return x_8;
}
}
lean_object* l_Std_RBNode_find___at_Lean_Environment_getProjectionFnInfo_x3f___spec__2(lean_object* x_1, lean_object* x_2) {
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
x_8 = l_Lean_Name_quickCmp(x_2, x_5);
switch (x_8) {
case 0:
{
x_1 = x_4;
goto _start;
}
case 1:
{
lean_object* x_10; 
lean_inc(x_6);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_6);
return x_10;
}
default: 
{
x_1 = x_7;
goto _start;
}
}
}
}
}
lean_object* l_Array_binSearchAux___at_Lean_Environment_getProjectionFnInfo_x3f___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_instInhabitedName;
x_6 = l_Lean_instInhabitedProjectionFunctionInfo;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = lean_box(0);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Name_quickLt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Name_quickLt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_13);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_13);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = lean_box(0);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
lean_object* l_Lean_MapDeclarationExtension_find_x3f___at_Lean_Environment_getProjectionFnInfo_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Environment_getModuleIdxFor_x3f(x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_1, x_2);
x_6 = l_Std_RBNode_find___at_Lean_Environment_getProjectionFnInfo_x3f___spec__2(x_5, x_3);
lean_dec(x_3);
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = l_Lean_PersistentEnvExtension_getModuleEntries___rarg(x_1, x_2, x_7);
lean_dec(x_7);
x_9 = lean_box(0);
x_10 = lean_unsigned_to_nat(0u);
x_11 = 0;
x_12 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_10);
lean_ctor_set(x_12, 2, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*3, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_array_get_size(x_8);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_14, x_15);
x_17 = lean_nat_dec_lt(x_10, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_8);
x_18 = lean_box(0);
return x_18;
}
else
{
lean_object* x_19; 
x_19 = l_Array_binSearchAux___at_Lean_Environment_getProjectionFnInfo_x3f___spec__3(x_8, x_13, x_10, x_16);
lean_dec(x_13);
lean_dec(x_8);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_box(0);
return x_20;
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 0);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
lean_ctor_set(x_19, 0, x_23);
return x_19;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_19, 0);
lean_inc(x_24);
lean_dec(x_19);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_25);
return x_26;
}
}
}
}
}
}
lean_object* lean_get_projection_info(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_projectionFnInfoExt;
x_4 = l_Lean_MapDeclarationExtension_find_x3f___at_Lean_Environment_getProjectionFnInfo_x3f___spec__1(x_3, x_1, x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Std_RBNode_find___at_Lean_Environment_getProjectionFnInfo_x3f___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at_Lean_Environment_getProjectionFnInfo_x3f___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Environment_getProjectionFnInfo_x3f___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_Environment_getProjectionFnInfo_x3f___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_MapDeclarationExtension_find_x3f___at_Lean_Environment_getProjectionFnInfo_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_MapDeclarationExtension_find_x3f___at_Lean_Environment_getProjectionFnInfo_x3f___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
uint8_t l_Array_binSearchAux___at_Lean_Environment_isProjectionFn___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_instInhabitedName;
x_6 = l_Lean_instInhabitedProjectionFunctionInfo;
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_nat_dec_le(x_3, x_4);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
x_9 = 0;
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_10 = lean_nat_add(x_3, x_4);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_div(x_10, x_11);
lean_dec(x_10);
x_13 = lean_array_get(x_7, x_1, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_ctor_get(x_2, 0);
x_16 = l_Lean_Name_quickLt(x_14, x_15);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_4);
x_17 = l_Lean_Name_quickLt(x_15, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
uint8_t x_18; 
lean_dec(x_12);
lean_dec(x_3);
x_18 = 1;
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_sub(x_12, x_21);
lean_dec(x_12);
x_4 = x_22;
goto _start;
}
else
{
uint8_t x_24; 
lean_dec(x_12);
lean_dec(x_3);
x_24 = 0;
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_14);
lean_dec(x_3);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_12, x_25);
lean_dec(x_12);
x_3 = x_26;
goto _start;
}
}
}
}
uint8_t l_Lean_MapDeclarationExtension_contains___at_Lean_Environment_isProjectionFn___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Environment_getModuleIdxFor_x3f(x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_SimplePersistentEnvExtension_getState___rarg(x_1, x_2);
x_6 = l_Lean_NameMap_contains___rarg(x_5, x_3);
lean_dec(x_3);
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = l_Lean_PersistentEnvExtension_getModuleEntries___rarg(x_1, x_2, x_7);
lean_dec(x_7);
x_9 = lean_box(0);
x_10 = lean_unsigned_to_nat(0u);
x_11 = 0;
x_12 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_10);
lean_ctor_set(x_12, 2, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*3, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_array_get_size(x_8);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_14, x_15);
x_17 = lean_nat_dec_lt(x_10, x_14);
lean_dec(x_14);
if (x_17 == 0)
{
uint8_t x_18; 
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_8);
x_18 = 0;
return x_18;
}
else
{
uint8_t x_19; 
x_19 = l_Array_binSearchAux___at_Lean_Environment_isProjectionFn___spec__2(x_8, x_13, x_10, x_16);
lean_dec(x_13);
lean_dec(x_8);
return x_19;
}
}
}
}
uint8_t l_Lean_Environment_isProjectionFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_projectionFnInfoExt;
x_4 = l_Lean_MapDeclarationExtension_contains___at_Lean_Environment_isProjectionFn___spec__1(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l_Array_binSearchAux___at_Lean_Environment_isProjectionFn___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_binSearchAux___at_Lean_Environment_isProjectionFn___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Lean_MapDeclarationExtension_contains___at_Lean_Environment_isProjectionFn___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_Lean_MapDeclarationExtension_contains___at_Lean_Environment_isProjectionFn___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Lean_Environment_isProjectionFn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Environment_isProjectionFn(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Environment_getProjectionStructureName_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Environment_getProjectionStructureName_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Environment_getProjectionStructureName_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Environment_getProjectionStructureName_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Environment_getProjectionStructureName_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Environment_getProjectionStructureName_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Environment_getProjectionStructureName_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_projectionFnInfoExt;
x_4 = l_Lean_MapDeclarationExtension_find_x3f___at_Lean_Environment_getProjectionFnInfo_x3f___spec__1(x_3, x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_environment_find(x_1, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_box(0);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_8, 0);
if (lean_obj_tag(x_11) == 6)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
lean_ctor_set(x_8, 0, x_13);
return x_8;
}
else
{
lean_object* x_14; 
lean_free_object(x_8);
lean_dec(x_11);
x_14 = lean_box(0);
return x_14;
}
}
else
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
lean_dec(x_8);
if (lean_obj_tag(x_15) == 6)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
else
{
lean_object* x_19; 
lean_dec(x_15);
x_19 = lean_box(0);
return x_19;
}
}
}
}
}
}
lean_object* l_Lean_isProjectionFn___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Lean_projectionFnInfoExt;
x_7 = l_Lean_MapDeclarationExtension_contains___at_Lean_Environment_isProjectionFn___spec__1(x_6, x_3, x_2);
x_8 = lean_box(x_7);
x_9 = lean_apply_2(x_5, lean_box(0), x_8);
return x_9;
}
}
lean_object* l_Lean_isProjectionFn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_closure((void*)(l_Lean_isProjectionFn___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_isProjectionFn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_isProjectionFn___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_isProjectionFn___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_isProjectionFn___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_getProjectionFnInfo_x3f___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Lean_projectionFnInfoExt;
x_7 = l_Lean_MapDeclarationExtension_find_x3f___at_Lean_Environment_getProjectionFnInfo_x3f___spec__1(x_6, x_3, x_2);
x_8 = lean_apply_2(x_5, lean_box(0), x_7);
return x_8;
}
}
lean_object* l_Lean_getProjectionFnInfo_x3f___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_closure((void*)(l_Lean_getProjectionFnInfo_x3f___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_3);
x_7 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_getProjectionFnInfo_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_getProjectionFnInfo_x3f___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_getProjectionFnInfo_x3f___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_getProjectionFnInfo_x3f___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Environment(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_ProjFns(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedProjectionFunctionInfo = _init_l_Lean_instInhabitedProjectionFunctionInfo();
lean_mark_persistent(l_Lean_instInhabitedProjectionFunctionInfo);
res = l_Lean_initFn____x40_Lean_ProjFns___hyg_69_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_projectionFnInfoExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_projectionFnInfoExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
