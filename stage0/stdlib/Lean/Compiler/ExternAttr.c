// Lean compiler output
// Module: Lean.Compiler.ExternAttr
// Imports: Init Lean.Expr Lean.Environment Lean.Attributes Lean.ProjFns Lean.Meta.Basic
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
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Lean_addMessageContextPartial___at_Lean_Core_instAddMessageContextCoreM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* lean_io_get_num_heartbeats(lean_object*);
lean_object* l_Std_RBNode_find___at_Lean_getExternAttrData___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_getExternEntryForAux(lean_object*, lean_object*);
lean_object* l_Lean_getExternConstArity___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_getD___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getExternConstArity_match__1(lean_object*);
lean_object* lean_get_extern_const_arity(lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_mkMapDeclarationExtension___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData_match__1(lean_object*);
lean_object* l_Lean_getExternNameFor___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_String_join___spec__1(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_parseOptNum(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedExternAttrData;
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(lean_object*, lean_object*);
lean_object* l_Lean_expandExternPattern(lean_object*, lean_object*);
lean_object* l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Monad_seqRight___default___rarg___lambda__1___boxed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_getExternConstArityExport_match__1(lean_object*);
lean_object* l_Lean_throwError___at_Lean_getExternConstArity___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_getExternConstArity_match__1___rarg(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExternEntry_backend___boxed(lean_object*);
lean_object* l_Lean_setEnv___at_Lean_registerTagAttribute___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getExternNameFor(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_parseOptNum_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_getExternNameFor_match__1(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_expandExternPatternAux_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_isConstructor(lean_object*, lean_object*);
lean_object* l_Lean_expandExternPattern___boxed(lean_object*, lean_object*);
lean_object* l_Lean_ExternEntry_backend_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExternEntry_backend(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_getExternAttrData___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerParametricAttribute___rarg___lambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__6(lean_object*, lean_object*, size_t, size_t);
uint8_t l_Lean_isExternC(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
uint8_t l_Lean_isExtern(lean_object*, lean_object*);
lean_object* lean_add_extern(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind;
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_ExternAttrData_arity_x3f___default;
lean_object* lean_array_swap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_expandExternPatternAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isStrLit_x3f(lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__2___boxed(lean_object*);
lean_object* l_Lean_ofExcept___at_Lean_initFn____x40_Lean_Class___hyg_692____spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExternEntry_backend_match__1(lean_object*);
lean_object* l_Lean_expandExternPatternAux_match__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_parseOptNum_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getExternConstArity___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickCmp(lean_object*, lean_object*);
lean_object* l_Lean_expandExternPatternAux_match__1(lean_object*);
lean_object* l_Array_binSearchAux___at_Lean_getExternAttrData___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedAttributeImpl___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getExternConstArity_match__3(lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Lean_registerTagAttribute___lambda__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__3___boxed(lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_persistentEnvExtensionsRef;
lean_object* l_Lean_isExtern___boxed(lean_object*, lean_object*);
lean_object* l_Array_qsort_sort___at_Lean_mkMapDeclarationExtension___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at_Lean_getExternConstArity___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*, lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__3___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Iterator_next(lean_object*);
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData_match__1___rarg(lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_getConstInfo___at_Lean_getExternConstArity___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_String_Iterator_hasNext(lean_object*);
extern lean_object* l_Lean_projectionFnInfoExt;
lean_object* l_Lean_registerParametricAttribute___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_isExternC_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1(lean_object*);
lean_object* l_Lean_isExternC___boxed(lean_object*, lean_object*);
lean_object* lean_get_extern_attr_data(lean_object*, lean_object*);
uint8_t l_UInt32_decEq(uint32_t, uint32_t);
lean_object* l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342_(lean_object*);
lean_object* l_Lean_getExternNameFor_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getExternEntryForAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
uint32_t l_String_Iterator_curr(lean_object*);
lean_object* l_Lean_getExternConstArity_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerParametricAttribute___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__1___lambda__1(lean_object*);
lean_object* l_Std_RBNode_fold___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__2(lean_object*, lean_object*);
lean_object* l_List_intersperse___rarg(lean_object*, lean_object*);
lean_object* l_Lean_registerParametricAttribute___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__1___lambda__1___boxed(lean_object*);
lean_object* l_Lean_throwError___at_Lean_getExternConstArity___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_expandExternPatternAux_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_addExtern___boxed(lean_object*, lean_object*);
lean_object* l_Lean_getExternEntryFor(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Array_qsort_sort___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_qsort_sort___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getExternConstArityExport_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_expandExternPatternAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getExternEntryForAux___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_registerParametricAttribute___rarg___lambda__3___boxed(lean_object*);
lean_object* l_Lean_instInhabitedAttributeImpl___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isExternC_match__1(lean_object*);
lean_object* l_Lean_getExternConstArity_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___at_Lean_getExternAttrData___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t l_Lean_MapDeclarationExtension_contains___at_Lean_Environment_isProjectionFn___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_String_Iterator_remainingBytes(lean_object*);
lean_object* l_Lean_expandExternPatternAux_match__2(lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__5(lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_fold___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__2___boxed(lean_object*, lean_object*);
uint8_t l_UInt32_decLe(uint32_t, uint32_t);
lean_object* l_EStateM_pure___rarg(lean_object*, lean_object*);
lean_object* l_Lean_getExternConstArity_match__2(lean_object*);
lean_object* l_Lean_mkSimpleFnCall(lean_object*, lean_object*);
lean_object* l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getExternEntryFor___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_parseOptNum_match__1(lean_object*);
lean_object* l_Lean_externAttr;
lean_object* l_Lean_registerParametricAttribute___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Array_anyMUnsafe_any___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getExternEntryForAux_match__1(lean_object*);
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Meta_Basic_0__Lean_Meta_beqInfoCacheKey____x40_Lean_Meta_Basic___hyg_245____spec__1(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_getExternConstArity(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_ExternAttrData_arity_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_instInhabitedExternAttrData() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 3);
x_6 = l_Lean_addMessageContextPartial___at_Lean_Core_instAddMessageContextCoreM___spec__1(x_1, x_2, x_3, x_4);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_6);
lean_inc(x_5);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 3);
x_8 = l_Lean_replaceRef(x_1, x_7);
lean_dec(x_7);
lean_ctor_set(x_3, 3, x_8);
x_9 = l_Lean_throwError___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__2(x_2, x_3, x_4, x_5);
lean_dec(x_3);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
x_12 = lean_ctor_get(x_3, 2);
x_13 = lean_ctor_get(x_3, 3);
x_14 = lean_ctor_get(x_3, 4);
x_15 = lean_ctor_get(x_3, 5);
x_16 = lean_ctor_get(x_3, 6);
x_17 = lean_ctor_get(x_3, 7);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_18 = l_Lean_replaceRef(x_1, x_13);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_19, 0, x_10);
lean_ctor_set(x_19, 1, x_11);
lean_ctor_set(x_19, 2, x_12);
lean_ctor_set(x_19, 3, x_18);
lean_ctor_set(x_19, 4, x_14);
lean_ctor_set(x_19, 5, x_15);
lean_ctor_set(x_19, 6, x_16);
lean_ctor_set(x_19, 7, x_17);
x_20 = l_Lean_throwError___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__2(x_2, x_19, x_4, x_5);
lean_dec(x_19);
return x_20;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_4);
x_12 = lean_array_push(x_3, x_11);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_7);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_4);
x_16 = lean_array_push(x_3, x_15);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_7);
return x_18;
}
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_3 < x_2;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_array_uget(x_1, x_3);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Lean_Syntax_getArg(x_10, x_11);
x_13 = l_Lean_Syntax_isNone(x_12);
x_14 = lean_unsigned_to_nat(2u);
x_15 = l_Lean_Syntax_getArg(x_10, x_14);
x_16 = l_Lean_Syntax_isStrLit_x3f(x_15);
if (x_13 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = l_Lean_Syntax_getArg(x_12, x_11);
lean_dec(x_12);
x_35 = l_Lean_Syntax_getId(x_34);
lean_dec(x_34);
x_17 = x_35;
goto block_33;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_12);
x_36 = lean_box(0);
x_37 = lean_mk_string("all");
x_38 = lean_name_mk_string(x_36, x_37);
x_17 = x_38;
goto block_33;
}
block_33:
{
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_4);
x_18 = lean_mk_string("string literal expected");
x_19 = l_Lean_stringToMessageData(x_18);
lean_dec(x_18);
x_20 = l_Lean_throwErrorAt___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__1(x_15, x_19, x_5, x_6, x_7);
lean_dec(x_15);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
return x_20;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_20);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; 
lean_dec(x_15);
x_25 = lean_ctor_get(x_16, 0);
lean_inc(x_25);
lean_dec(x_16);
x_26 = l_Array_forInUnsafe_loop___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__3___lambda__1(x_10, x_17, x_4, x_25, x_5, x_6, x_7);
lean_dec(x_10);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
lean_dec(x_27);
x_30 = 1;
x_31 = x_3 + x_30;
x_3 = x_31;
x_4 = x_29;
x_7 = x_28;
goto _start;
}
}
}
}
}
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; lean_object* x_12; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_mk_empty_array_with_capacity(x_8);
x_10 = lean_usize_of_nat(x_1);
x_11 = 0;
x_12 = l_Array_forInUnsafe_loop___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__3(x_2, x_10, x_11, x_9, x_5, x_6, x_7);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_array_to_list(lean_box(0), x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_3);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_12, 0, x_16);
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_array_to_list(lean_box(0), x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_3);
x_22 = !lean_is_exclusive(x_12);
if (x_22 == 0)
{
return x_12;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_12, 0);
x_24 = lean_ctor_get(x_12, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
x_7 = l_Lean_Syntax_isNone(x_6);
x_8 = lean_unsigned_to_nat(2u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l_Lean_Syntax_getArgs(x_9);
lean_dec(x_9);
x_11 = lean_array_get_size(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_eq(x_11, x_12);
if (x_7 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = l_Lean_Syntax_getArg(x_6, x_12);
lean_dec(x_6);
x_31 = l_Lean_numLitKind;
x_32 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_31, x_30);
lean_dec(x_30);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_12);
x_14 = x_33;
goto block_29;
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_32);
if (x_34 == 0)
{
x_14 = x_32;
goto block_29;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_32, 0);
lean_inc(x_35);
lean_dec(x_32);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_14 = x_36;
goto block_29;
}
}
}
else
{
lean_object* x_37; 
lean_dec(x_6);
x_37 = lean_box(0);
x_14 = x_37;
goto block_29;
}
block_29:
{
if (x_13 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___lambda__1(x_11, x_10, x_14, x_15, x_2, x_3, x_4);
lean_dec(x_10);
lean_dec(x_11);
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_box(0);
x_18 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Meta_Basic_0__Lean_Meta_beqInfoCacheKey____x40_Lean_Meta_Basic___hyg_245____spec__1(x_14, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_box(0);
x_20 = l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___lambda__1(x_11, x_10, x_14, x_19, x_2, x_3, x_4);
lean_dec(x_10);
lean_dec(x_11);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_2);
x_21 = lean_box(0);
x_22 = lean_mk_string("all");
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_17);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_4);
return x_28;
}
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwError___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_throwErrorAt___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_forInUnsafe_loop___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__3___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Array_forInUnsafe_loop___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = l_Array_forInUnsafe_loop___at___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___spec__3(x_1, x_8, x_9, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_addExtern___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_add_extern(x_1, x_2);
return x_3;
}
}
lean_object* l_Std_RBNode_fold___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_ctor_get(x_2, 3);
x_7 = l_Std_RBNode_fold___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__2(x_1, x_3);
lean_inc(x_5);
lean_inc(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_5);
x_9 = lean_array_push(x_7, x_8);
x_1 = x_9;
x_2 = x_6;
goto _start;
}
}
}
lean_object* l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = l_Lean_instInhabitedName;
x_8 = l_Lean_instInhabitedExternAttrData;
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
lean_object* l_Array_qsort_sort___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_16; 
x_4 = l_Lean_instInhabitedName;
x_5 = l_Lean_instInhabitedExternAttrData;
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
x_30 = l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__4(x_29, x_3, x_21, x_20, x_2, x_2);
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
x_34 = l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__4(x_33, x_3, x_32, x_31, x_2, x_2);
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
x_42 = l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__4(x_41, x_3, x_37, x_35, x_2, x_2);
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
x_46 = l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__4(x_45, x_3, x_44, x_43, x_2, x_2);
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
x_11 = l_Array_qsort_sort___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__3(x_9, x_2, x_8);
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
uint8_t l_Array_anyMUnsafe_any___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
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
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__5(lean_object* x_1, lean_object* x_2) {
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
x_18 = l_Array_anyMUnsafe_any___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__6(x_1, x_6, x_16, x_17);
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
x_41 = l_Array_anyMUnsafe_any___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__6(x_1, x_29, x_39, x_40);
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
lean_object* l_Lean_registerParametricAttribute___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__1___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_mk_empty_array_with_capacity(x_2);
x_4 = l_Std_RBNode_fold___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__2(x_3, x_1);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_5, x_6);
lean_dec(x_5);
x_8 = l_Array_qsort_sort___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__3(x_4, x_2, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l_Lean_registerParametricAttribute___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_box(0);
x_8 = lean_alloc_closure((void*)(l_EStateM_pure___rarg), 2, 1);
lean_closure_set(x_8, 0, x_7);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_Lean_registerParametricAttribute___rarg___lambda__1), 5, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_7);
x_10 = lean_alloc_closure((void*)(l_Lean_mkMapDeclarationExtension___rarg___lambda__1), 2, 0);
x_11 = lean_alloc_closure((void*)(l_Lean_registerParametricAttribute___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__1___lambda__1___boxed), 1, 0);
x_12 = lean_alloc_closure((void*)(l_Lean_registerParametricAttribute___rarg___lambda__3___boxed), 1, 0);
lean_inc(x_5);
x_13 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_13, 1, x_8);
lean_ctor_set(x_13, 2, x_9);
lean_ctor_set(x_13, 3, x_10);
lean_ctor_set(x_13, 4, x_11);
lean_ctor_set(x_13, 5, x_12);
x_14 = l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__5(x_13, x_2);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 0;
lean_inc(x_5);
lean_ctor_set_uint8(x_3, sizeof(void*)*2, x_17);
lean_inc(x_15);
x_18 = lean_alloc_closure((void*)(l_Lean_registerParametricAttribute___rarg___lambda__6___boxed), 9, 3);
lean_closure_set(x_18, 0, x_1);
lean_closure_set(x_18, 1, x_15);
lean_closure_set(x_18, 2, x_5);
x_19 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__7___boxed), 4, 0);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set(x_20, 2, x_19);
lean_inc(x_20);
x_21 = l_Lean_registerBuiltinAttribute(x_20, x_16);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_20);
lean_ctor_set(x_24, 1, x_15);
lean_ctor_set(x_21, 0, x_24);
return x_21;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_dec(x_21);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_15);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_20);
lean_dec(x_15);
x_28 = !lean_is_exclusive(x_21);
if (x_28 == 0)
{
return x_21;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_21, 0);
x_30 = lean_ctor_get(x_21, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_21);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_free_object(x_3);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_14);
if (x_32 == 0)
{
return x_14;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_14, 0);
x_34 = lean_ctor_get(x_14, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_14);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_36 = lean_ctor_get(x_3, 0);
x_37 = lean_ctor_get(x_3, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_3);
x_38 = lean_box(0);
x_39 = lean_alloc_closure((void*)(l_EStateM_pure___rarg), 2, 1);
lean_closure_set(x_39, 0, x_38);
lean_inc(x_1);
x_40 = lean_alloc_closure((void*)(l_Lean_registerParametricAttribute___rarg___lambda__1), 5, 2);
lean_closure_set(x_40, 0, x_1);
lean_closure_set(x_40, 1, x_38);
x_41 = lean_alloc_closure((void*)(l_Lean_mkMapDeclarationExtension___rarg___lambda__1), 2, 0);
x_42 = lean_alloc_closure((void*)(l_Lean_registerParametricAttribute___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__1___lambda__1___boxed), 1, 0);
x_43 = lean_alloc_closure((void*)(l_Lean_registerParametricAttribute___rarg___lambda__3___boxed), 1, 0);
lean_inc(x_36);
x_44 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_44, 0, x_36);
lean_ctor_set(x_44, 1, x_39);
lean_ctor_set(x_44, 2, x_40);
lean_ctor_set(x_44, 3, x_41);
lean_ctor_set(x_44, 4, x_42);
lean_ctor_set(x_44, 5, x_43);
x_45 = l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__5(x_44, x_2);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = 0;
lean_inc(x_36);
x_49 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_49, 0, x_36);
lean_ctor_set(x_49, 1, x_37);
lean_ctor_set_uint8(x_49, sizeof(void*)*2, x_48);
lean_inc(x_46);
x_50 = lean_alloc_closure((void*)(l_Lean_registerParametricAttribute___rarg___lambda__6___boxed), 9, 3);
lean_closure_set(x_50, 0, x_1);
lean_closure_set(x_50, 1, x_46);
lean_closure_set(x_50, 2, x_36);
x_51 = lean_alloc_closure((void*)(l_Lean_registerTagAttribute___lambda__7___boxed), 4, 0);
x_52 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_50);
lean_ctor_set(x_52, 2, x_51);
lean_inc(x_52);
x_53 = l_Lean_registerBuiltinAttribute(x_52, x_47);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_55 = x_53;
} else {
 lean_dec_ref(x_53);
 x_55 = lean_box(0);
}
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_52);
lean_ctor_set(x_56, 1, x_46);
if (lean_is_scalar(x_55)) {
 x_57 = lean_alloc_ctor(0, 2, 0);
} else {
 x_57 = x_55;
}
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_52);
lean_dec(x_46);
x_58 = lean_ctor_get(x_53, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_53, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_60 = x_53;
} else {
 lean_dec_ref(x_53);
 x_60 = lean_box(0);
}
if (lean_is_scalar(x_60)) {
 x_61 = lean_alloc_ctor(1, 2, 0);
} else {
 x_61 = x_60;
}
lean_ctor_set(x_61, 0, x_58);
lean_ctor_set(x_61, 1, x_59);
return x_61;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_1);
x_62 = lean_ctor_get(x_45, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_45, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_64 = x_45;
} else {
 lean_dec_ref(x_45);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(1, 2, 0);
} else {
 x_65 = x_64;
}
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
}
}
}
lean_object* l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Compiler_ExternAttr_0__Lean_syntaxToExternAttrData(x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_st_ref_get(x_4, x_5);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = lean_ctor_get(x_6, 1);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_projectionFnInfoExt;
lean_inc(x_1);
x_12 = l_Lean_MapDeclarationExtension_contains___at_Lean_Environment_isProjectionFn___spec__1(x_11, x_10, x_1);
if (x_12 == 0)
{
uint8_t x_13; 
lean_inc(x_1);
lean_inc(x_10);
x_13 = l_Lean_Environment_isConstructor(x_10, x_1);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_1);
x_14 = lean_box(0);
lean_ctor_set(x_6, 0, x_14);
return x_6;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_free_object(x_6);
x_15 = lean_add_extern(x_10, x_1);
x_16 = l_Lean_ofExcept___at_Lean_initFn____x40_Lean_Class___hyg_692____spec__1(x_15, x_3, x_4, x_9);
lean_dec(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_setEnv___at_Lean_registerTagAttribute___spec__4(x_17, x_3, x_4, x_18);
return x_19;
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_16);
if (x_20 == 0)
{
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_16, 0);
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_16);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_free_object(x_6);
x_24 = lean_add_extern(x_10, x_1);
x_25 = l_Lean_ofExcept___at_Lean_initFn____x40_Lean_Class___hyg_692____spec__1(x_24, x_3, x_4, x_9);
lean_dec(x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_setEnv___at_Lean_registerTagAttribute___spec__4(x_26, x_3, x_4, x_27);
return x_28;
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_25);
if (x_29 == 0)
{
return x_25;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_25, 0);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_25);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_33 = lean_ctor_get(x_6, 0);
x_34 = lean_ctor_get(x_6, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_6);
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_projectionFnInfoExt;
lean_inc(x_1);
x_37 = l_Lean_MapDeclarationExtension_contains___at_Lean_Environment_isProjectionFn___spec__1(x_36, x_35, x_1);
if (x_37 == 0)
{
uint8_t x_38; 
lean_inc(x_1);
lean_inc(x_35);
x_38 = l_Lean_Environment_isConstructor(x_35, x_1);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_35);
lean_dec(x_1);
x_39 = lean_box(0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_34);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_add_extern(x_35, x_1);
x_42 = l_Lean_ofExcept___at_Lean_initFn____x40_Lean_Class___hyg_692____spec__1(x_41, x_3, x_4, x_34);
lean_dec(x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_Lean_setEnv___at_Lean_registerTagAttribute___spec__4(x_43, x_3, x_4, x_44);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_46 = lean_ctor_get(x_42, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_42, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_48 = x_42;
} else {
 lean_dec_ref(x_42);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(1, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_add_extern(x_35, x_1);
x_51 = l_Lean_ofExcept___at_Lean_initFn____x40_Lean_Class___hyg_692____spec__1(x_50, x_3, x_4, x_34);
lean_dec(x_50);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_Lean_setEnv___at_Lean_registerTagAttribute___spec__4(x_52, x_3, x_4, x_53);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_51, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_51, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 x_57 = x_51;
} else {
 lean_dec_ref(x_51);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(1, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_55);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
}
}
}
lean_object* l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
lean_object* l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_2 = lean_box(0);
x_3 = lean_mk_string("extern");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("builtin and foreign functions");
x_6 = 0;
x_7 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*2, x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__1___boxed), 5, 0);
x_9 = lean_alloc_closure((void*)(l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__2___boxed), 5, 0);
x_10 = lean_alloc_closure((void*)(l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__3___boxed), 3, 0);
x_11 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_8);
lean_ctor_set(x_11, 2, x_9);
lean_ctor_set(x_11, 3, x_10);
x_12 = l_Lean_registerParametricAttribute___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__1(x_11, x_1);
return x_12;
}
}
lean_object* l_Std_RBNode_fold___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_fold___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_qpartition_loop___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Array_qsort_sort___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_qsort_sort___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__3(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__6(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Lean_registerParametricAttribute___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__1___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_registerParametricAttribute___at_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____spec__1___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342____lambda__3(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Std_RBNode_find___at_Lean_getExternAttrData___spec__2(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Array_binSearchAux___at_Lean_getExternAttrData___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = l_Lean_instInhabitedName;
x_6 = l_Lean_instInhabitedExternAttrData;
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
lean_object* l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Environment_getModuleIdxFor_x3f(x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_PersistentEnvExtension_getState___rarg(x_5, x_2);
x_7 = l_Std_RBNode_find___at_Lean_getExternAttrData___spec__2(x_6, x_3);
lean_dec(x_3);
lean_dec(x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_8 = lean_ctor_get(x_4, 0);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_ctor_get(x_1, 1);
x_10 = l_Lean_PersistentEnvExtension_getModuleEntries___rarg(x_9, x_2, x_8);
lean_dec(x_8);
x_11 = lean_box(0);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_3);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_array_get_size(x_10);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_15, x_16);
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_nat_dec_lt(x_18, x_15);
lean_dec(x_15);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_10);
x_20 = lean_box(0);
return x_20;
}
else
{
lean_object* x_21; 
x_21 = l_Array_binSearchAux___at_Lean_getExternAttrData___spec__3(x_10, x_14, x_18, x_17);
lean_dec(x_14);
lean_dec(x_10);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
x_22 = lean_box(0);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 0);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
lean_ctor_set(x_21, 0, x_25);
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_21, 0);
lean_inc(x_26);
lean_dec(x_21);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
return x_28;
}
}
}
}
}
}
lean_object* lean_get_extern_attr_data(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_externAttr;
x_4 = l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1(x_3, x_1, x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Std_RBNode_find___at_Lean_getExternAttrData___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at_Lean_getExternAttrData___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_binSearchAux___at_Lean_getExternAttrData___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_binSearchAux___at_Lean_getExternAttrData___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_parseOptNum_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_1, x_8);
x_10 = lean_apply_3(x_5, x_9, x_2, x_3);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_5);
x_11 = lean_apply_2(x_4, x_2, x_3);
return x_11;
}
}
}
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_parseOptNum_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Compiler_ExternAttr_0__Lean_parseOptNum_match__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_parseOptNum_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Compiler_ExternAttr_0__Lean_parseOptNum_match__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Compiler_ExternAttr_0__Lean_parseOptNum(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
lean_dec(x_1);
x_8 = l_String_Iterator_hasNext(x_2);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
else
{
uint32_t x_10; uint32_t x_11; uint8_t x_12; 
x_10 = l_String_Iterator_curr(x_2);
x_11 = 48;
x_12 = x_11 <= x_10;
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_7);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
uint32_t x_14; uint8_t x_15; 
x_14 = 57;
x_15 = x_10 <= x_14;
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_7);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_16, 1, x_3);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = l_String_Iterator_next(x_2);
x_18 = lean_unsigned_to_nat(10u);
x_19 = lean_nat_mul(x_3, x_18);
lean_dec(x_3);
x_20 = lean_uint32_to_nat(x_10);
x_21 = lean_unsigned_to_nat(48u);
x_22 = lean_nat_sub(x_20, x_21);
lean_dec(x_20);
x_23 = lean_nat_add(x_19, x_22);
lean_dec(x_22);
lean_dec(x_19);
x_1 = x_7;
x_2 = x_17;
x_3 = x_23;
goto _start;
}
}
}
}
else
{
lean_object* x_25; 
lean_dec(x_1);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_2);
lean_ctor_set(x_25, 1, x_3);
return x_25;
}
}
}
lean_object* l_Lean_expandExternPatternAux_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_expandExternPatternAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_expandExternPatternAux_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_expandExternPatternAux_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_1, x_8);
x_10 = lean_apply_3(x_5, x_9, x_2, x_3);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_5);
x_11 = lean_apply_2(x_4, x_2, x_3);
return x_11;
}
}
}
lean_object* l_Lean_expandExternPatternAux_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_expandExternPatternAux_match__2___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_expandExternPatternAux_match__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_expandExternPatternAux_match__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_expandExternPatternAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_2, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_2, x_7);
lean_dec(x_2);
x_9 = l_String_Iterator_hasNext(x_3);
if (x_9 == 0)
{
uint8_t x_10; uint8_t x_11; 
x_10 = 0;
x_11 = l_instDecidableNot___rarg(x_10);
if (x_11 == 0)
{
uint32_t x_12; uint32_t x_13; uint8_t x_14; uint8_t x_15; 
x_12 = l_String_Iterator_curr(x_3);
x_13 = 35;
x_14 = x_12 == x_13;
x_15 = l_instDecidableNot___rarg(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_16 = l_String_Iterator_next(x_3);
x_17 = l_String_Iterator_remainingBytes(x_16);
x_18 = l___private_Lean_Compiler_ExternAttr_0__Lean_parseOptNum(x_17, x_16, x_5);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_nat_sub(x_20, x_7);
lean_dec(x_20);
x_22 = lean_mk_string("");
x_23 = l_List_getD___rarg(x_21, x_1, x_22);
lean_dec(x_22);
x_24 = lean_string_append(x_4, x_23);
lean_dec(x_23);
x_2 = x_8;
x_3 = x_19;
x_4 = x_24;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = l_String_Iterator_next(x_3);
x_27 = lean_string_push(x_4, x_12);
x_2 = x_8;
x_3 = x_26;
x_4 = x_27;
goto _start;
}
}
else
{
lean_dec(x_8);
lean_dec(x_3);
return x_4;
}
}
else
{
uint8_t x_29; uint8_t x_30; 
x_29 = 1;
x_30 = l_instDecidableNot___rarg(x_29);
if (x_30 == 0)
{
uint32_t x_31; uint32_t x_32; uint8_t x_33; uint8_t x_34; 
x_31 = l_String_Iterator_curr(x_3);
x_32 = 35;
x_33 = x_31 == x_32;
x_34 = l_instDecidableNot___rarg(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_35 = l_String_Iterator_next(x_3);
x_36 = l_String_Iterator_remainingBytes(x_35);
x_37 = l___private_Lean_Compiler_ExternAttr_0__Lean_parseOptNum(x_36, x_35, x_5);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_nat_sub(x_39, x_7);
lean_dec(x_39);
x_41 = lean_mk_string("");
x_42 = l_List_getD___rarg(x_40, x_1, x_41);
lean_dec(x_41);
x_43 = lean_string_append(x_4, x_42);
lean_dec(x_42);
x_2 = x_8;
x_3 = x_38;
x_4 = x_43;
goto _start;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = l_String_Iterator_next(x_3);
x_46 = lean_string_push(x_4, x_31);
x_2 = x_8;
x_3 = x_45;
x_4 = x_46;
goto _start;
}
}
else
{
lean_dec(x_8);
lean_dec(x_3);
return x_4;
}
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
lean_object* l_Lean_expandExternPatternAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_expandExternPatternAux(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_expandExternPattern(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_string_length(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_mk_string("");
x_7 = l_Lean_expandExternPatternAux(x_2, x_3, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_expandExternPattern___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_expandExternPattern(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_mkSimpleFnCall(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_mk_string("(");
x_4 = lean_string_append(x_1, x_3);
lean_dec(x_3);
x_5 = lean_mk_string(", ");
x_6 = l_List_intersperse___rarg(x_5, x_2);
x_7 = lean_mk_string("");
x_8 = l_List_foldl___at_String_join___spec__1(x_7, x_6);
lean_dec(x_6);
x_9 = lean_string_append(x_4, x_8);
lean_dec(x_8);
x_10 = lean_mk_string(")");
x_11 = lean_string_append(x_9, x_10);
lean_dec(x_10);
return x_11;
}
}
lean_object* l_Lean_ExternEntry_backend_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_2(x_3, x_8, x_9);
return x_10;
}
case 2:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
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
default: 
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
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
}
}
}
lean_object* l_Lean_ExternEntry_backend_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_ExternEntry_backend_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_ExternEntry_backend(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Lean_ExternEntry_backend___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_ExternEntry_backend(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_getExternEntryForAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
}
lean_object* l_Lean_getExternEntryForAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_getExternEntryForAux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_getExternEntryForAux(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = l_Lean_ExternEntry_backend(x_4);
x_7 = lean_box(0);
x_8 = lean_mk_string("all");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_name_eq(x_6, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = lean_name_eq(x_6, x_1);
lean_dec(x_6);
if (x_11 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_13; 
lean_inc(x_4);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_4);
return x_13;
}
}
else
{
lean_object* x_14; 
lean_dec(x_6);
lean_inc(x_4);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_4);
return x_14;
}
}
}
}
lean_object* l_Lean_getExternEntryForAux___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_getExternEntryForAux(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_getExternEntryFor(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = l_Lean_getExternEntryForAux(x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_getExternEntryFor___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_getExternEntryFor(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
uint8_t l_Lean_isExtern(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_externAttr;
x_4 = l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1(x_3, x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 1;
return x_6;
}
}
}
lean_object* l_Lean_isExtern___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_isExtern(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_isExternC_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 2)
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
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_5);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_5, 0);
x_13 = lean_ctor_get(x_5, 1);
lean_dec(x_13);
x_14 = !lean_is_exclusive(x_6);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_6, 1);
x_16 = lean_ctor_get(x_6, 0);
lean_dec(x_16);
x_17 = !lean_is_exclusive(x_8);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_8, 1);
x_19 = lean_ctor_get(x_8, 0);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_9);
if (x_20 == 0)
{
lean_object* x_21; uint64_t x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_9, 1);
x_22 = lean_ctor_get_uint64(x_9, sizeof(void*)*2);
x_23 = lean_ctor_get(x_9, 0);
lean_dec(x_23);
x_24 = lean_mk_string("all");
x_25 = lean_string_dec_eq(x_21, x_24);
lean_dec(x_21);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_24);
lean_free_object(x_9);
lean_free_object(x_8);
lean_dec(x_18);
lean_free_object(x_6);
lean_dec(x_15);
lean_free_object(x_5);
lean_dec(x_12);
lean_dec(x_2);
x_26 = lean_apply_1(x_3, x_1);
return x_26;
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_1);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_1, 0);
lean_dec(x_28);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_free_object(x_1);
lean_dec(x_24);
lean_free_object(x_9);
lean_free_object(x_8);
lean_free_object(x_6);
lean_free_object(x_5);
lean_dec(x_3);
x_29 = lean_box_uint64(x_22);
x_30 = lean_apply_3(x_2, x_18, x_12, x_29);
return x_30;
}
else
{
lean_object* x_31; 
lean_dec(x_2);
lean_ctor_set(x_9, 1, x_24);
x_31 = lean_apply_1(x_3, x_1);
return x_31;
}
}
else
{
lean_dec(x_1);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_24);
lean_free_object(x_9);
lean_free_object(x_8);
lean_free_object(x_6);
lean_free_object(x_5);
lean_dec(x_3);
x_32 = lean_box_uint64(x_22);
x_33 = lean_apply_3(x_2, x_18, x_12, x_32);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_2);
lean_ctor_set(x_9, 1, x_24);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_5);
x_35 = lean_apply_1(x_3, x_34);
return x_35;
}
}
}
}
else
{
lean_object* x_36; uint64_t x_37; lean_object* x_38; uint8_t x_39; 
x_36 = lean_ctor_get(x_9, 1);
x_37 = lean_ctor_get_uint64(x_9, sizeof(void*)*2);
lean_inc(x_36);
lean_dec(x_9);
x_38 = lean_mk_string("all");
x_39 = lean_string_dec_eq(x_36, x_38);
lean_dec(x_36);
if (x_39 == 0)
{
lean_object* x_40; 
lean_dec(x_38);
lean_free_object(x_8);
lean_dec(x_18);
lean_free_object(x_6);
lean_dec(x_15);
lean_free_object(x_5);
lean_dec(x_12);
lean_dec(x_2);
x_40 = lean_apply_1(x_3, x_1);
return x_40;
}
else
{
lean_object* x_41; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_41 = x_1;
} else {
 lean_dec_ref(x_1);
 x_41 = lean_box(0);
}
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_41);
lean_dec(x_38);
lean_free_object(x_8);
lean_free_object(x_6);
lean_free_object(x_5);
lean_dec(x_3);
x_42 = lean_box_uint64(x_37);
x_43 = lean_apply_3(x_2, x_18, x_12, x_42);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_2);
x_44 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_44, 0, x_10);
lean_ctor_set(x_44, 1, x_38);
lean_ctor_set_uint64(x_44, sizeof(void*)*2, x_37);
lean_ctor_set(x_8, 0, x_44);
if (lean_is_scalar(x_41)) {
 x_45 = lean_alloc_ctor(1, 1, 0);
} else {
 x_45 = x_41;
}
lean_ctor_set(x_45, 0, x_5);
x_46 = lean_apply_1(x_3, x_45);
return x_46;
}
}
}
}
else
{
lean_object* x_47; lean_object* x_48; uint64_t x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_47 = lean_ctor_get(x_8, 1);
lean_inc(x_47);
lean_dec(x_8);
x_48 = lean_ctor_get(x_9, 1);
lean_inc(x_48);
x_49 = lean_ctor_get_uint64(x_9, sizeof(void*)*2);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_50 = x_9;
} else {
 lean_dec_ref(x_9);
 x_50 = lean_box(0);
}
x_51 = lean_mk_string("all");
x_52 = lean_string_dec_eq(x_48, x_51);
lean_dec(x_48);
if (x_52 == 0)
{
lean_object* x_53; 
lean_dec(x_51);
lean_dec(x_50);
lean_dec(x_47);
lean_free_object(x_6);
lean_dec(x_15);
lean_free_object(x_5);
lean_dec(x_12);
lean_dec(x_2);
x_53 = lean_apply_1(x_3, x_1);
return x_53;
}
else
{
lean_object* x_54; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_54 = x_1;
} else {
 lean_dec_ref(x_1);
 x_54 = lean_box(0);
}
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_54);
lean_dec(x_51);
lean_dec(x_50);
lean_free_object(x_6);
lean_free_object(x_5);
lean_dec(x_3);
x_55 = lean_box_uint64(x_49);
x_56 = lean_apply_3(x_2, x_47, x_12, x_55);
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_2);
if (lean_is_scalar(x_50)) {
 x_57 = lean_alloc_ctor(1, 2, 8);
} else {
 x_57 = x_50;
}
lean_ctor_set(x_57, 0, x_10);
lean_ctor_set(x_57, 1, x_51);
lean_ctor_set_uint64(x_57, sizeof(void*)*2, x_49);
x_58 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_47);
lean_ctor_set(x_6, 0, x_58);
if (lean_is_scalar(x_54)) {
 x_59 = lean_alloc_ctor(1, 1, 0);
} else {
 x_59 = x_54;
}
lean_ctor_set(x_59, 0, x_5);
x_60 = lean_apply_1(x_3, x_59);
return x_60;
}
}
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint64_t x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_61 = lean_ctor_get(x_6, 1);
lean_inc(x_61);
lean_dec(x_6);
x_62 = lean_ctor_get(x_8, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_8)) {
 lean_ctor_release(x_8, 0);
 lean_ctor_release(x_8, 1);
 x_63 = x_8;
} else {
 lean_dec_ref(x_8);
 x_63 = lean_box(0);
}
x_64 = lean_ctor_get(x_9, 1);
lean_inc(x_64);
x_65 = lean_ctor_get_uint64(x_9, sizeof(void*)*2);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_66 = x_9;
} else {
 lean_dec_ref(x_9);
 x_66 = lean_box(0);
}
x_67 = lean_mk_string("all");
x_68 = lean_string_dec_eq(x_64, x_67);
lean_dec(x_64);
if (x_68 == 0)
{
lean_object* x_69; 
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_free_object(x_5);
lean_dec(x_12);
lean_dec(x_2);
x_69 = lean_apply_1(x_3, x_1);
return x_69;
}
else
{
lean_object* x_70; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_70 = x_1;
} else {
 lean_dec_ref(x_1);
 x_70 = lean_box(0);
}
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_70);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_63);
lean_free_object(x_5);
lean_dec(x_3);
x_71 = lean_box_uint64(x_65);
x_72 = lean_apply_3(x_2, x_62, x_12, x_71);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_2);
if (lean_is_scalar(x_66)) {
 x_73 = lean_alloc_ctor(1, 2, 8);
} else {
 x_73 = x_66;
}
lean_ctor_set(x_73, 0, x_10);
lean_ctor_set(x_73, 1, x_67);
lean_ctor_set_uint64(x_73, sizeof(void*)*2, x_65);
if (lean_is_scalar(x_63)) {
 x_74 = lean_alloc_ctor(2, 2, 0);
} else {
 x_74 = x_63;
}
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_62);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_61);
lean_ctor_set(x_5, 1, x_75);
if (lean_is_scalar(x_70)) {
 x_76 = lean_alloc_ctor(1, 1, 0);
} else {
 x_76 = x_70;
}
lean_ctor_set(x_76, 0, x_5);
x_77 = lean_apply_1(x_3, x_76);
return x_77;
}
}
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; uint64_t x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_78 = lean_ctor_get(x_5, 0);
lean_inc(x_78);
lean_dec(x_5);
x_79 = lean_ctor_get(x_6, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_80 = x_6;
} else {
 lean_dec_ref(x_6);
 x_80 = lean_box(0);
}
x_81 = lean_ctor_get(x_8, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_8)) {
 lean_ctor_release(x_8, 0);
 lean_ctor_release(x_8, 1);
 x_82 = x_8;
} else {
 lean_dec_ref(x_8);
 x_82 = lean_box(0);
}
x_83 = lean_ctor_get(x_9, 1);
lean_inc(x_83);
x_84 = lean_ctor_get_uint64(x_9, sizeof(void*)*2);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_85 = x_9;
} else {
 lean_dec_ref(x_9);
 x_85 = lean_box(0);
}
x_86 = lean_mk_string("all");
x_87 = lean_string_dec_eq(x_83, x_86);
lean_dec(x_83);
if (x_87 == 0)
{
lean_object* x_88; 
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_82);
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_78);
lean_dec(x_2);
x_88 = lean_apply_1(x_3, x_1);
return x_88;
}
else
{
lean_object* x_89; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_89 = x_1;
} else {
 lean_dec_ref(x_1);
 x_89 = lean_box(0);
}
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_90; lean_object* x_91; 
lean_dec(x_89);
lean_dec(x_86);
lean_dec(x_85);
lean_dec(x_82);
lean_dec(x_80);
lean_dec(x_3);
x_90 = lean_box_uint64(x_84);
x_91 = lean_apply_3(x_2, x_81, x_78, x_90);
return x_91;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_2);
if (lean_is_scalar(x_85)) {
 x_92 = lean_alloc_ctor(1, 2, 8);
} else {
 x_92 = x_85;
}
lean_ctor_set(x_92, 0, x_10);
lean_ctor_set(x_92, 1, x_86);
lean_ctor_set_uint64(x_92, sizeof(void*)*2, x_84);
if (lean_is_scalar(x_82)) {
 x_93 = lean_alloc_ctor(2, 2, 0);
} else {
 x_93 = x_82;
}
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_81);
if (lean_is_scalar(x_80)) {
 x_94 = lean_alloc_ctor(1, 2, 0);
} else {
 x_94 = x_80;
}
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_79);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_78);
lean_ctor_set(x_95, 1, x_94);
if (lean_is_scalar(x_89)) {
 x_96 = lean_alloc_ctor(1, 1, 0);
} else {
 x_96 = x_89;
}
lean_ctor_set(x_96, 0, x_95);
x_97 = lean_apply_1(x_3, x_96);
return x_97;
}
}
}
}
else
{
lean_object* x_98; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_98 = lean_apply_1(x_3, x_1);
return x_98;
}
}
else
{
lean_object* x_99; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_99 = lean_apply_1(x_3, x_1);
return x_99;
}
}
else
{
lean_object* x_100; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_100 = lean_apply_1(x_3, x_1);
return x_100;
}
}
}
}
}
lean_object* l_Lean_isExternC_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_isExternC_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Lean_isExternC(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_externAttr;
x_4 = l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1(x_3, x_1, x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 2)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
if (lean_obj_tag(x_10) == 1)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_mk_string("all");
x_15 = lean_string_dec_eq(x_13, x_14);
lean_dec(x_14);
lean_dec(x_13);
if (x_15 == 0)
{
uint8_t x_16; 
lean_dec(x_12);
x_16 = 0;
return x_16;
}
else
{
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_17; 
x_17 = 1;
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_12);
x_18 = 0;
return x_18;
}
}
}
else
{
uint8_t x_19; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
x_19 = 0;
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec(x_7);
x_20 = 0;
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_9);
lean_dec(x_7);
x_21 = 0;
return x_21;
}
}
}
}
}
lean_object* l_Lean_isExternC___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_isExternC(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_getExternNameFor_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_2(x_2, x_5, x_6);
return x_7;
}
case 3:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_apply_2(x_3, x_8, x_9);
return x_10;
}
default: 
{
lean_object* x_11; 
lean_dec(x_3);
lean_dec(x_2);
x_11 = lean_apply_1(x_4, x_1);
return x_11;
}
}
}
}
lean_object* l_Lean_getExternNameFor_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_getExternNameFor_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_getExternNameFor(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_Lean_externAttr;
x_5 = l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1(x_4, x_1, x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = l_Lean_getExternEntryFor(x_7, x_2);
lean_dec(x_7);
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
switch (lean_obj_tag(x_11)) {
case 2:
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
lean_ctor_set(x_8, 0, x_12);
return x_8;
}
case 3:
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_ctor_set(x_8, 0, x_13);
return x_8;
}
default: 
{
lean_object* x_14; 
lean_free_object(x_8);
lean_dec(x_11);
x_14 = lean_box(0);
return x_14;
}
}
}
else
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
lean_dec(x_8);
switch (lean_obj_tag(x_15)) {
case 2:
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
case 3:
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
default: 
{
lean_object* x_20; 
lean_dec(x_15);
x_20 = lean_box(0);
return x_20;
}
}
}
}
}
}
}
lean_object* l_Lean_getExternNameFor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_getExternNameFor(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_getExternConstArity_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_getExternConstArity_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_getExternConstArity_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_getExternConstArity_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_getExternConstArity_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_getExternConstArity_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_getExternConstArity_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_getExternConstArity_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_getExternConstArity_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_getExternConstArity___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 3);
x_6 = l_Lean_addMessageContextPartial___at_Lean_Core_instAddMessageContextCoreM___spec__1(x_1, x_2, x_3, x_4);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_6);
lean_inc(x_5);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
}
lean_object* l_Lean_getConstInfo___at_Lean_getExternConstArity___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_1);
x_10 = lean_environment_find(x_9, x_1);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_free_object(x_5);
x_11 = lean_mk_string("unknown constant '");
x_12 = l_Lean_stringToMessageData(x_11);
lean_dec(x_11);
x_13 = lean_box(0);
x_14 = l_Lean_mkConst(x_1, x_13);
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_mk_string("'");
x_18 = l_Lean_stringToMessageData(x_17);
lean_dec(x_17);
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_16);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_throwError___at_Lean_getExternConstArity___spec__2(x_19, x_2, x_3, x_8);
return x_20;
}
else
{
lean_object* x_21; 
lean_dec(x_1);
x_21 = lean_ctor_get(x_10, 0);
lean_inc(x_21);
lean_dec(x_10);
lean_ctor_set(x_5, 0, x_21);
return x_5;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_5, 0);
x_23 = lean_ctor_get(x_5, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_5);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_1);
x_25 = lean_environment_find(x_24, x_1);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_26 = lean_mk_string("unknown constant '");
x_27 = l_Lean_stringToMessageData(x_26);
lean_dec(x_26);
x_28 = lean_box(0);
x_29 = l_Lean_mkConst(x_1, x_28);
x_30 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_27);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_mk_string("'");
x_33 = l_Lean_stringToMessageData(x_32);
lean_dec(x_32);
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_Lean_throwError___at_Lean_getExternConstArity___spec__2(x_34, x_2, x_3, x_23);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_1);
x_36 = lean_ctor_get(x_25, 0);
lean_inc(x_36);
lean_dec(x_25);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_23);
return x_37;
}
}
}
}
lean_object* l_Lean_getExternConstArity___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_array_get_size(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
lean_object* l_Lean_getExternConstArity(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = l_Lean_externAttr;
lean_inc(x_1);
x_11 = l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1(x_10, x_9, x_1);
lean_dec(x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(0);
lean_ctor_set(x_5, 0, x_12);
return x_5;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
lean_free_object(x_5);
x_16 = l_Lean_getConstInfo___at_Lean_getExternConstArity___spec__1(x_1, x_2, x_3, x_8);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; size_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_ConstantInfo_type(x_17);
lean_dec(x_17);
x_20 = 0;
x_21 = 1;
x_22 = 1;
x_23 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_23, 0, x_20);
lean_ctor_set_uint8(x_23, 1, x_20);
lean_ctor_set_uint8(x_23, 2, x_20);
lean_ctor_set_uint8(x_23, 3, x_20);
lean_ctor_set_uint8(x_23, 4, x_20);
lean_ctor_set_uint8(x_23, 5, x_21);
lean_ctor_set_uint8(x_23, 6, x_22);
lean_ctor_set_uint8(x_23, 7, x_20);
lean_ctor_set_uint8(x_23, 8, x_22);
lean_ctor_set_uint8(x_23, 9, x_22);
x_24 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_unsigned_to_nat(0u);
lean_inc(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_unsigned_to_nat(32u);
x_29 = lean_mk_empty_array_with_capacity(x_28);
lean_inc(x_29);
x_30 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = 5;
x_32 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_29);
lean_ctor_set(x_32, 2, x_26);
lean_ctor_set(x_32, 3, x_26);
lean_ctor_set_usize(x_32, 4, x_31);
lean_inc(x_32);
lean_inc(x_27);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_27);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_mk_empty_array_with_capacity(x_26);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_36, 0, x_23);
lean_ctor_set(x_36, 1, x_33);
lean_ctor_set(x_36, 2, x_34);
lean_ctor_set(x_36, 3, x_35);
lean_inc_n(x_27, 4);
x_37 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_37, 0, x_26);
lean_ctor_set(x_37, 1, x_27);
lean_ctor_set(x_37, 2, x_27);
lean_ctor_set(x_37, 3, x_27);
lean_ctor_set(x_37, 4, x_27);
lean_ctor_set(x_37, 5, x_27);
lean_inc(x_25);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_25);
lean_ctor_set(x_38, 1, x_26);
lean_inc(x_25);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_25);
lean_ctor_set(x_39, 1, x_26);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_25);
lean_ctor_set(x_40, 1, x_26);
lean_inc_n(x_38, 2);
x_41 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_39);
lean_ctor_set(x_41, 2, x_40);
lean_ctor_set(x_41, 3, x_38);
lean_ctor_set(x_41, 4, x_38);
x_42 = l_Lean_NameSet_empty;
x_43 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_43, 0, x_37);
lean_ctor_set(x_43, 1, x_41);
lean_ctor_set(x_43, 2, x_42);
lean_ctor_set(x_43, 3, x_32);
x_44 = lean_st_ref_get(x_3, x_18);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_st_mk_ref(x_43, x_45);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = lean_alloc_closure((void*)(l_Lean_getExternConstArity___lambda__1___boxed), 7, 0);
lean_inc(x_3);
lean_inc(x_47);
x_50 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_19, x_49, x_36, x_47, x_2, x_3, x_48);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_st_ref_get(x_3, x_52);
lean_dec(x_3);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_st_ref_get(x_47, x_54);
lean_dec(x_47);
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
lean_object* x_57; 
x_57 = lean_ctor_get(x_55, 0);
lean_dec(x_57);
lean_ctor_set(x_11, 0, x_51);
lean_ctor_set(x_55, 0, x_11);
return x_55;
}
else
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_55, 1);
lean_inc(x_58);
lean_dec(x_55);
lean_ctor_set(x_11, 0, x_51);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_11);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
else
{
uint8_t x_60; 
lean_dec(x_47);
lean_free_object(x_11);
lean_dec(x_3);
x_60 = !lean_is_exclusive(x_50);
if (x_60 == 0)
{
return x_50;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_50, 0);
x_62 = lean_ctor_get(x_50, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_50);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
else
{
uint8_t x_64; 
lean_free_object(x_11);
lean_dec(x_3);
lean_dec(x_2);
x_64 = !lean_is_exclusive(x_16);
if (x_64 == 0)
{
return x_16;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_16, 0);
x_66 = lean_ctor_get(x_16, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_16);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
uint8_t x_68; 
lean_free_object(x_11);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_68 = !lean_is_exclusive(x_15);
if (x_68 == 0)
{
lean_ctor_set(x_5, 0, x_15);
return x_5;
}
else
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_15, 0);
lean_inc(x_69);
lean_dec(x_15);
x_70 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_5, 0, x_70);
return x_5;
}
}
}
else
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_ctor_get(x_11, 0);
lean_inc(x_71);
lean_dec(x_11);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
lean_dec(x_71);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; 
lean_free_object(x_5);
x_73 = l_Lean_getConstInfo___at_Lean_getExternConstArity___spec__1(x_1, x_2, x_3, x_8);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; uint8_t x_78; uint8_t x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; size_t x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = l_Lean_ConstantInfo_type(x_74);
lean_dec(x_74);
x_77 = 0;
x_78 = 1;
x_79 = 1;
x_80 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_80, 0, x_77);
lean_ctor_set_uint8(x_80, 1, x_77);
lean_ctor_set_uint8(x_80, 2, x_77);
lean_ctor_set_uint8(x_80, 3, x_77);
lean_ctor_set_uint8(x_80, 4, x_77);
lean_ctor_set_uint8(x_80, 5, x_78);
lean_ctor_set_uint8(x_80, 6, x_79);
lean_ctor_set_uint8(x_80, 7, x_77);
lean_ctor_set_uint8(x_80, 8, x_79);
lean_ctor_set_uint8(x_80, 9, x_79);
x_81 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_82 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_82, 0, x_81);
x_83 = lean_unsigned_to_nat(0u);
lean_inc(x_82);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_unsigned_to_nat(32u);
x_86 = lean_mk_empty_array_with_capacity(x_85);
lean_inc(x_86);
x_87 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_87, 0, x_86);
x_88 = 5;
x_89 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_86);
lean_ctor_set(x_89, 2, x_83);
lean_ctor_set(x_89, 3, x_83);
lean_ctor_set_usize(x_89, 4, x_88);
lean_inc(x_89);
lean_inc(x_84);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_84);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_mk_empty_array_with_capacity(x_83);
x_92 = lean_box(0);
x_93 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_93, 0, x_80);
lean_ctor_set(x_93, 1, x_90);
lean_ctor_set(x_93, 2, x_91);
lean_ctor_set(x_93, 3, x_92);
lean_inc_n(x_84, 4);
x_94 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_94, 0, x_83);
lean_ctor_set(x_94, 1, x_84);
lean_ctor_set(x_94, 2, x_84);
lean_ctor_set(x_94, 3, x_84);
lean_ctor_set(x_94, 4, x_84);
lean_ctor_set(x_94, 5, x_84);
lean_inc(x_82);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_82);
lean_ctor_set(x_95, 1, x_83);
lean_inc(x_82);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_82);
lean_ctor_set(x_96, 1, x_83);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_82);
lean_ctor_set(x_97, 1, x_83);
lean_inc_n(x_95, 2);
x_98 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_96);
lean_ctor_set(x_98, 2, x_97);
lean_ctor_set(x_98, 3, x_95);
lean_ctor_set(x_98, 4, x_95);
x_99 = l_Lean_NameSet_empty;
x_100 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_100, 0, x_94);
lean_ctor_set(x_100, 1, x_98);
lean_ctor_set(x_100, 2, x_99);
lean_ctor_set(x_100, 3, x_89);
x_101 = lean_st_ref_get(x_3, x_75);
x_102 = lean_ctor_get(x_101, 1);
lean_inc(x_102);
lean_dec(x_101);
x_103 = lean_st_mk_ref(x_100, x_102);
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec(x_103);
x_106 = lean_alloc_closure((void*)(l_Lean_getExternConstArity___lambda__1___boxed), 7, 0);
lean_inc(x_3);
lean_inc(x_104);
x_107 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_76, x_106, x_93, x_104, x_2, x_3, x_105);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_107, 1);
lean_inc(x_109);
lean_dec(x_107);
x_110 = lean_st_ref_get(x_3, x_109);
lean_dec(x_3);
x_111 = lean_ctor_get(x_110, 1);
lean_inc(x_111);
lean_dec(x_110);
x_112 = lean_st_ref_get(x_104, x_111);
lean_dec(x_104);
x_113 = lean_ctor_get(x_112, 1);
lean_inc(x_113);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_114 = x_112;
} else {
 lean_dec_ref(x_112);
 x_114 = lean_box(0);
}
x_115 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_115, 0, x_108);
if (lean_is_scalar(x_114)) {
 x_116 = lean_alloc_ctor(0, 2, 0);
} else {
 x_116 = x_114;
}
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_113);
return x_116;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
lean_dec(x_104);
lean_dec(x_3);
x_117 = lean_ctor_get(x_107, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_107, 1);
lean_inc(x_118);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 x_119 = x_107;
} else {
 lean_dec_ref(x_107);
 x_119 = lean_box(0);
}
if (lean_is_scalar(x_119)) {
 x_120 = lean_alloc_ctor(1, 2, 0);
} else {
 x_120 = x_119;
}
lean_ctor_set(x_120, 0, x_117);
lean_ctor_set(x_120, 1, x_118);
return x_120;
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
lean_dec(x_3);
lean_dec(x_2);
x_121 = lean_ctor_get(x_73, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_73, 1);
lean_inc(x_122);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_123 = x_73;
} else {
 lean_dec_ref(x_73);
 x_123 = lean_box(0);
}
if (lean_is_scalar(x_123)) {
 x_124 = lean_alloc_ctor(1, 2, 0);
} else {
 x_124 = x_123;
}
lean_ctor_set(x_124, 0, x_121);
lean_ctor_set(x_124, 1, x_122);
return x_124;
}
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_125 = lean_ctor_get(x_72, 0);
lean_inc(x_125);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 x_126 = x_72;
} else {
 lean_dec_ref(x_72);
 x_126 = lean_box(0);
}
if (lean_is_scalar(x_126)) {
 x_127 = lean_alloc_ctor(1, 1, 0);
} else {
 x_127 = x_126;
}
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_5, 0, x_127);
return x_5;
}
}
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_128 = lean_ctor_get(x_5, 0);
x_129 = lean_ctor_get(x_5, 1);
lean_inc(x_129);
lean_inc(x_128);
lean_dec(x_5);
x_130 = lean_ctor_get(x_128, 0);
lean_inc(x_130);
lean_dec(x_128);
x_131 = l_Lean_externAttr;
lean_inc(x_1);
x_132 = l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1(x_131, x_130, x_1);
lean_dec(x_130);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; lean_object* x_134; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_133 = lean_box(0);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_129);
return x_134;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_132, 0);
lean_inc(x_135);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 x_136 = x_132;
} else {
 lean_dec_ref(x_132);
 x_136 = lean_box(0);
}
x_137 = lean_ctor_get(x_135, 0);
lean_inc(x_137);
lean_dec(x_135);
if (lean_obj_tag(x_137) == 0)
{
lean_object* x_138; 
x_138 = l_Lean_getConstInfo___at_Lean_getExternConstArity___spec__1(x_1, x_2, x_3, x_129);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; uint8_t x_142; uint8_t x_143; uint8_t x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; size_t x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_139 = lean_ctor_get(x_138, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_138, 1);
lean_inc(x_140);
lean_dec(x_138);
x_141 = l_Lean_ConstantInfo_type(x_139);
lean_dec(x_139);
x_142 = 0;
x_143 = 1;
x_144 = 1;
x_145 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_145, 0, x_142);
lean_ctor_set_uint8(x_145, 1, x_142);
lean_ctor_set_uint8(x_145, 2, x_142);
lean_ctor_set_uint8(x_145, 3, x_142);
lean_ctor_set_uint8(x_145, 4, x_142);
lean_ctor_set_uint8(x_145, 5, x_143);
lean_ctor_set_uint8(x_145, 6, x_144);
lean_ctor_set_uint8(x_145, 7, x_142);
lean_ctor_set_uint8(x_145, 8, x_144);
lean_ctor_set_uint8(x_145, 9, x_144);
x_146 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_147 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_147, 0, x_146);
x_148 = lean_unsigned_to_nat(0u);
lean_inc(x_147);
x_149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_149, 0, x_147);
lean_ctor_set(x_149, 1, x_148);
x_150 = lean_unsigned_to_nat(32u);
x_151 = lean_mk_empty_array_with_capacity(x_150);
lean_inc(x_151);
x_152 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_152, 0, x_151);
x_153 = 5;
x_154 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_151);
lean_ctor_set(x_154, 2, x_148);
lean_ctor_set(x_154, 3, x_148);
lean_ctor_set_usize(x_154, 4, x_153);
lean_inc(x_154);
lean_inc(x_149);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_149);
lean_ctor_set(x_155, 1, x_154);
x_156 = lean_mk_empty_array_with_capacity(x_148);
x_157 = lean_box(0);
x_158 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_158, 0, x_145);
lean_ctor_set(x_158, 1, x_155);
lean_ctor_set(x_158, 2, x_156);
lean_ctor_set(x_158, 3, x_157);
lean_inc_n(x_149, 4);
x_159 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_159, 0, x_148);
lean_ctor_set(x_159, 1, x_149);
lean_ctor_set(x_159, 2, x_149);
lean_ctor_set(x_159, 3, x_149);
lean_ctor_set(x_159, 4, x_149);
lean_ctor_set(x_159, 5, x_149);
lean_inc(x_147);
x_160 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_160, 0, x_147);
lean_ctor_set(x_160, 1, x_148);
lean_inc(x_147);
x_161 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_161, 0, x_147);
lean_ctor_set(x_161, 1, x_148);
x_162 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_162, 0, x_147);
lean_ctor_set(x_162, 1, x_148);
lean_inc_n(x_160, 2);
x_163 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_163, 0, x_160);
lean_ctor_set(x_163, 1, x_161);
lean_ctor_set(x_163, 2, x_162);
lean_ctor_set(x_163, 3, x_160);
lean_ctor_set(x_163, 4, x_160);
x_164 = l_Lean_NameSet_empty;
x_165 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_165, 0, x_159);
lean_ctor_set(x_165, 1, x_163);
lean_ctor_set(x_165, 2, x_164);
lean_ctor_set(x_165, 3, x_154);
x_166 = lean_st_ref_get(x_3, x_140);
x_167 = lean_ctor_get(x_166, 1);
lean_inc(x_167);
lean_dec(x_166);
x_168 = lean_st_mk_ref(x_165, x_167);
x_169 = lean_ctor_get(x_168, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_168, 1);
lean_inc(x_170);
lean_dec(x_168);
x_171 = lean_alloc_closure((void*)(l_Lean_getExternConstArity___lambda__1___boxed), 7, 0);
lean_inc(x_3);
lean_inc(x_169);
x_172 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_141, x_171, x_158, x_169, x_2, x_3, x_170);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_173 = lean_ctor_get(x_172, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_172, 1);
lean_inc(x_174);
lean_dec(x_172);
x_175 = lean_st_ref_get(x_3, x_174);
lean_dec(x_3);
x_176 = lean_ctor_get(x_175, 1);
lean_inc(x_176);
lean_dec(x_175);
x_177 = lean_st_ref_get(x_169, x_176);
lean_dec(x_169);
x_178 = lean_ctor_get(x_177, 1);
lean_inc(x_178);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 x_179 = x_177;
} else {
 lean_dec_ref(x_177);
 x_179 = lean_box(0);
}
if (lean_is_scalar(x_136)) {
 x_180 = lean_alloc_ctor(1, 1, 0);
} else {
 x_180 = x_136;
}
lean_ctor_set(x_180, 0, x_173);
if (lean_is_scalar(x_179)) {
 x_181 = lean_alloc_ctor(0, 2, 0);
} else {
 x_181 = x_179;
}
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_178);
return x_181;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
lean_dec(x_169);
lean_dec(x_136);
lean_dec(x_3);
x_182 = lean_ctor_get(x_172, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_172, 1);
lean_inc(x_183);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 lean_ctor_release(x_172, 1);
 x_184 = x_172;
} else {
 lean_dec_ref(x_172);
 x_184 = lean_box(0);
}
if (lean_is_scalar(x_184)) {
 x_185 = lean_alloc_ctor(1, 2, 0);
} else {
 x_185 = x_184;
}
lean_ctor_set(x_185, 0, x_182);
lean_ctor_set(x_185, 1, x_183);
return x_185;
}
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
lean_dec(x_136);
lean_dec(x_3);
lean_dec(x_2);
x_186 = lean_ctor_get(x_138, 0);
lean_inc(x_186);
x_187 = lean_ctor_get(x_138, 1);
lean_inc(x_187);
if (lean_is_exclusive(x_138)) {
 lean_ctor_release(x_138, 0);
 lean_ctor_release(x_138, 1);
 x_188 = x_138;
} else {
 lean_dec_ref(x_138);
 x_188 = lean_box(0);
}
if (lean_is_scalar(x_188)) {
 x_189 = lean_alloc_ctor(1, 2, 0);
} else {
 x_189 = x_188;
}
lean_ctor_set(x_189, 0, x_186);
lean_ctor_set(x_189, 1, x_187);
return x_189;
}
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
lean_dec(x_136);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_190 = lean_ctor_get(x_137, 0);
lean_inc(x_190);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 x_191 = x_137;
} else {
 lean_dec_ref(x_137);
 x_191 = lean_box(0);
}
if (lean_is_scalar(x_191)) {
 x_192 = lean_alloc_ctor(1, 1, 0);
} else {
 x_192 = x_191;
}
lean_ctor_set(x_192, 0, x_190);
x_193 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_129);
return x_193;
}
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_getExternConstArity___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwError___at_Lean_getExternConstArity___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_getConstInfo___at_Lean_getExternConstArity___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_getConstInfo___at_Lean_getExternConstArity___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_getExternConstArity___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_getExternConstArity___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_getExternConstArityExport_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_getExternConstArityExport_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_getExternConstArityExport_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* lean_get_extern_const_arity(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_4 = lean_box(0);
x_5 = l_Lean_Core_getMaxHeartbeats(x_4);
x_6 = l_Lean_firstFrontendMacroScope;
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_6, x_7);
x_9 = lean_box(0);
x_10 = lean_mk_string("_uniq");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_7);
x_13 = lean_unsigned_to_nat(32u);
x_14 = lean_mk_empty_array_with_capacity(x_13);
lean_inc(x_14);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = 5;
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_14);
lean_ctor_set(x_18, 2, x_17);
lean_ctor_set(x_18, 3, x_17);
lean_ctor_set_usize(x_18, 4, x_16);
x_19 = 1;
x_20 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set_uint8(x_20, sizeof(void*)*1, x_19);
x_21 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_21, 0, x_1);
lean_ctor_set(x_21, 1, x_8);
lean_ctor_set(x_21, 2, x_12);
lean_ctor_set(x_21, 3, x_20);
x_22 = lean_io_get_num_heartbeats(x_3);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_unsigned_to_nat(1000u);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_27, 0, x_4);
lean_ctor_set(x_27, 1, x_17);
lean_ctor_set(x_27, 2, x_25);
lean_ctor_set(x_27, 3, x_26);
lean_ctor_set(x_27, 4, x_9);
lean_ctor_set(x_27, 5, x_4);
lean_ctor_set(x_27, 6, x_23);
lean_ctor_set(x_27, 7, x_5);
x_28 = lean_st_mk_ref(x_21, x_24);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
lean_inc(x_29);
x_31 = l_Lean_getExternConstArity(x_2, x_27, x_29, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_st_ref_get(x_29, x_33);
lean_dec(x_29);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_34, 0);
lean_dec(x_36);
lean_ctor_set(x_34, 0, x_32);
return x_34;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_dec(x_34);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_32);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
else
{
lean_object* x_39; 
lean_dec(x_29);
x_39 = lean_ctor_get(x_31, 0);
lean_inc(x_39);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_31, 1);
lean_inc(x_40);
lean_dec(x_31);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_Lean_MessageData_toString(x_41, x_40);
if (lean_obj_tag(x_42) == 0)
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_42, 0);
lean_dec(x_44);
x_45 = lean_box(0);
lean_ctor_set(x_42, 0, x_45);
return x_42;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_42, 1);
lean_inc(x_46);
lean_dec(x_42);
x_47 = lean_box(0);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
else
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_42);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_42, 0);
lean_dec(x_50);
x_51 = lean_box(0);
lean_ctor_set_tag(x_42, 0);
lean_ctor_set(x_42, 0, x_51);
return x_42;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_42, 1);
lean_inc(x_52);
lean_dec(x_42);
x_53 = lean_box(0);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_39);
x_55 = !lean_is_exclusive(x_31);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_31, 0);
lean_dec(x_56);
x_57 = lean_box(0);
lean_ctor_set_tag(x_31, 0);
lean_ctor_set(x_31, 0, x_57);
return x_31;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_31, 1);
lean_inc(x_58);
lean_dec(x_31);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
return x_60;
}
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_21);
lean_dec(x_5);
lean_dec(x_2);
x_61 = !lean_is_exclusive(x_22);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_22, 0);
lean_dec(x_62);
x_63 = lean_box(0);
lean_ctor_set_tag(x_22, 0);
lean_ctor_set(x_22, 0, x_63);
return x_22;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_22, 1);
lean_inc(x_64);
lean_dec(x_22);
x_65 = lean_box(0);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Expr(lean_object*);
lean_object* initialize_Lean_Environment(lean_object*);
lean_object* initialize_Lean_Attributes(lean_object*);
lean_object* initialize_Lean_ProjFns(lean_object*);
lean_object* initialize_Lean_Meta_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Compiler_ExternAttr(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Expr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Attributes(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ProjFns(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_ExternAttrData_arity_x3f___default = _init_l_Lean_ExternAttrData_arity_x3f___default();
lean_mark_persistent(l_Lean_ExternAttrData_arity_x3f___default);
l_Lean_instInhabitedExternAttrData = _init_l_Lean_instInhabitedExternAttrData();
lean_mark_persistent(l_Lean_instInhabitedExternAttrData);
res = l_Lean_initFn____x40_Lean_Compiler_ExternAttr___hyg_342_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_externAttr = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_externAttr);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
