// Lean compiler output
// Module: Lean.Data.Options
// Imports: Init Lean.Data.KVMap
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
lean_object* l_Lean_getBoolOption___rarg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_KVMap_setBool(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_setOptionFromString_match__1(lean_object*);
lean_object* l_Lean_Option_register(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Option_commandRegister__builtin__option_____x3a___x3a_x3d__;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_OptionDecl_group___default;
lean_object* l_Std_RBNode_find___at_Lean_getOptionDecl___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_KVMap_setNat(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_Decl_group___default;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_KVMap_setString(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setOptionFromString_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Option_get___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getOptionDefaulValue(lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecls(lean_object*);
lean_object* l_Lean_Option_get_x3f(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_String_toInt_x3f(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_KVMap_instToStringKVMap(lean_object*);
lean_object* l_IO_mkRef___at___private_Lean_Data_Options_0__Lean_initOptionDeclsRef___spec__1(lean_object*, lean_object*);
lean_object* l_String_splitOn(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t l_Lean_NameMap_contains___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_nameLitKind;
lean_object* l_Lean_setOptionFromString_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedOptions;
lean_object* l_Lean_setOptionFromString_match__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getNatOption(lean_object*);
lean_object* l_Lean_getBoolOption___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_get___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_setIfNotSet___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_setIfNotSet(lean_object*);
lean_object* l_Lean_KVMap_instForInKVMapProdNameDataValue(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Options_0__Lean_optionDeclsRef;
lean_object* l_String_toName(lean_object*);
lean_object* l_Lean_instMonadOptions(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecl(lean_object*, lean_object*);
lean_object* l_Lean_OptionDecl_descr___default;
lean_object* l_Lean_instToStringOptions;
uint8_t l_Lean_KVMap_getBool(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_setOptionFromString_match__4(lean_object*);
lean_object* l_Lean_instMonadOptions___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Option_myMacro____x40_Lean_Data_Options___hyg_979_(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickCmp(lean_object*, lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_quoteNameMk(lean_object*);
lean_object* lean_get_option_decls_array(lean_object*);
lean_object* l_Lean_getNatOption___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KVMap_setInt(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instForInOptionsProdNameDataValue(lean_object*);
uint8_t l_Lean_KVMap_contains(lean_object*, lean_object*);
lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Option_set___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedOptionDecl;
lean_object* l_Lean_getBoolOption___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KVMap_getNat(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getOptionDecl_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_fold___at_Lean_getOptionDeclsArray___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_KVMap_setName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_register___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Std_RBNode_find___at_Lean_getOptionDecl___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Option_get_x3f___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setOptionFromString(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerOption___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setOptionFromString_match__3(lean_object*);
lean_object* l_Lean_KVMap_insertCore(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getBoolOption___rarg___lambda__1(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_getNatOption___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_get_x3f___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedOption(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Option_Decl_descr___default;
lean_object* l_Lean_getBoolOption(lean_object*);
lean_object* l_Lean_KVMap_findCore(lean_object*, lean_object*);
lean_object* l_Lean_Option_set(lean_object*);
lean_object* l_String_trim(lean_object*);
lean_object* l_Lean_getOptionDecl_match__1(lean_object*);
lean_object* l_Lean_setOptionFromString_match__2(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Std_RBNode_fold___at_Lean_getOptionDeclsArray___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_setOptionFromString___spec__1(lean_object*);
lean_object* l___private_Lean_Data_Options_0__Lean_initOptionDeclsRef(lean_object*);
lean_object* l_Lean_Option_get(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_String_toNat_x3f(lean_object*);
lean_object* l_Lean_registerOption___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedOptionDecls;
lean_object* l_Lean_setOptionFromString_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getOptionDescr(lean_object*, lean_object*);
lean_object* l_Lean_getNatOption___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedOption___rarg(lean_object*);
lean_object* l_Lean_Syntax_mkLit(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Options_empty() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_instInhabitedOptions() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_instToStringOptions() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_KVMap_instToStringKVMap), 1, 0);
return x_1;
}
}
lean_object* l_Lean_instForInOptionsProdNameDataValue(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_KVMap_instForInKVMapProdNameDataValue), 2, 1);
lean_closure_set(x_2, 0, lean_box(0));
return x_2;
}
}
static lean_object* _init_l_Lean_OptionDecl_group___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
static lean_object* _init_l_Lean_OptionDecl_descr___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
static lean_object* _init_l_Lean_instInhabitedOptionDecl() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_mk_string("");
lean_inc(x_1);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
lean_inc(x_1);
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_instInhabitedOptionDecls() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_IO_mkRef___at___private_Lean_Data_Options_0__Lean_initOptionDeclsRef___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_st_mk_ref(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
lean_object* l___private_Lean_Data_Options_0__Lean_initOptionDeclsRef(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_IO_mkRef___at___private_Lean_Data_Options_0__Lean_initOptionDeclsRef___spec__1(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_registerOption___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = l_Std_RBNode_insert___at_Lean_NameMap_insert___spec__1___rarg(x_1, x_2, x_3);
x_7 = l___private_Lean_Data_Options_0__Lean_optionDeclsRef;
x_8 = lean_st_ref_set(x_7, x_6, x_5);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
return x_8;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
lean_object* lean_register_option(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = l___private_Lean_Data_Options_0__Lean_optionDeclsRef;
x_5 = lean_st_ref_get(x_4, x_3);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = l_Lean_NameMap_contains___rarg(x_7, x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_free_object(x_5);
x_10 = lean_box(0);
x_11 = l_Lean_registerOption___lambda__1(x_7, x_1, x_2, x_10, x_8);
return x_11;
}
else
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_7);
lean_dec(x_2);
x_12 = 1;
x_13 = l_Lean_Name_toString(x_1, x_12);
x_14 = lean_mk_string("invalid option declaration '");
x_15 = lean_string_append(x_14, x_13);
lean_dec(x_13);
x_16 = lean_mk_string("', option already exists");
x_17 = lean_string_append(x_15, x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_18);
return x_5;
}
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_5, 0);
x_20 = lean_ctor_get(x_5, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_5);
x_21 = l_Lean_NameMap_contains___rarg(x_19, x_1);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_box(0);
x_23 = l_Lean_registerOption___lambda__1(x_19, x_1, x_2, x_22, x_20);
return x_23;
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_19);
lean_dec(x_2);
x_24 = 1;
x_25 = l_Lean_Name_toString(x_1, x_24);
x_26 = lean_mk_string("invalid option declaration '");
x_27 = lean_string_append(x_26, x_25);
lean_dec(x_25);
x_28 = lean_mk_string("', option already exists");
x_29 = lean_string_append(x_27, x_28);
lean_dec(x_28);
x_30 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_20);
return x_31;
}
}
}
}
lean_object* l_Lean_registerOption___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_registerOption___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_getOptionDecls(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l___private_Lean_Data_Options_0__Lean_optionDeclsRef;
x_3 = lean_st_ref_get(x_2, x_1);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
lean_object* l_Std_RBNode_fold___at_Lean_getOptionDeclsArray___spec__1(lean_object* x_1, lean_object* x_2) {
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
x_7 = l_Std_RBNode_fold___at_Lean_getOptionDeclsArray___spec__1(x_1, x_3);
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
lean_object* lean_get_option_decls_array(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_getOptionDecls(x_1);
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_mk_empty_array_with_capacity(x_5);
x_7 = l_Std_RBNode_fold___at_Lean_getOptionDeclsArray___spec__1(x_6, x_4);
lean_dec(x_4);
lean_ctor_set(x_2, 0, x_7);
return x_2;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_2);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_mk_empty_array_with_capacity(x_10);
x_12 = l_Std_RBNode_fold___at_Lean_getOptionDeclsArray___spec__1(x_11, x_8);
lean_dec(x_8);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
}
}
lean_object* l_Std_RBNode_fold___at_Lean_getOptionDeclsArray___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_fold___at_Lean_getOptionDeclsArray___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_getOptionDecl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_getOptionDecl_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_getOptionDecl_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_RBNode_find___at_Lean_getOptionDecl___spec__1(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_getOptionDecl(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_getOptionDecls(x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = l_Std_RBNode_find___at_Lean_getOptionDecl___spec__1(x_5, x_1);
lean_dec(x_5);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = 1;
x_8 = l_Lean_Name_toString(x_1, x_7);
x_9 = lean_mk_string("unknown option '");
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = lean_mk_string("'");
x_12 = lean_string_append(x_10, x_11);
lean_dec(x_11);
x_13 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_13);
return x_3;
}
else
{
lean_object* x_14; 
lean_dec(x_1);
x_14 = lean_ctor_get(x_6, 0);
lean_inc(x_14);
lean_dec(x_6);
lean_ctor_set(x_3, 0, x_14);
return x_3;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_3, 0);
x_16 = lean_ctor_get(x_3, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_3);
x_17 = l_Std_RBNode_find___at_Lean_getOptionDecl___spec__1(x_15, x_1);
lean_dec(x_15);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_18 = 1;
x_19 = l_Lean_Name_toString(x_1, x_18);
x_20 = lean_mk_string("unknown option '");
x_21 = lean_string_append(x_20, x_19);
lean_dec(x_19);
x_22 = lean_mk_string("'");
x_23 = lean_string_append(x_21, x_22);
lean_dec(x_22);
x_24 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_16);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_1);
x_26 = lean_ctor_get(x_17, 0);
lean_inc(x_26);
lean_dec(x_17);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_16);
return x_27;
}
}
}
}
lean_object* l_Std_RBNode_find___at_Lean_getOptionDecl___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_RBNode_find___at_Lean_getOptionDecl___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_getOptionDefaulValue(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_getOptionDecl(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
lean_ctor_set(x_3, 0, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_getOptionDescr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_getOptionDecl(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
lean_dec(x_5);
lean_ctor_set(x_3, 0, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = lean_ctor_get(x_7, 2);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_setOptionFromString_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_setOptionFromString_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_setOptionFromString_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_setOptionFromString_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_setOptionFromString_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_setOptionFromString_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_setOptionFromString_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_2, x_7);
return x_8;
}
case 1:
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_ctor_get_uint8(x_1, 0);
lean_dec(x_1);
x_10 = lean_box(x_9);
x_11 = lean_apply_1(x_3, x_10);
return x_11;
}
case 2:
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_1(x_4, x_12);
return x_13;
}
case 3:
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_1(x_5, x_14);
return x_15;
}
default: 
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_apply_1(x_6, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_setOptionFromString_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_setOptionFromString_match__3___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_setOptionFromString_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_2);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_apply_2(x_2, x_8, x_9);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_2);
x_11 = lean_apply_1(x_3, x_1);
return x_11;
}
}
}
}
}
lean_object* l_Lean_setOptionFromString_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_setOptionFromString_match__4___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_map___at_Lean_setOptionFromString___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_String_trim(x_4);
lean_dec(x_4);
x_7 = l_List_map___at_Lean_setOptionFromString___spec__1(x_5);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_String_trim(x_8);
lean_dec(x_8);
x_11 = l_List_map___at_Lean_setOptionFromString___spec__1(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_Lean_setOptionFromString(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_mk_string("=");
x_5 = l_String_splitOn(x_2, x_4);
lean_dec(x_4);
x_6 = l_List_map___at_Lean_setOptionFromString___spec__1(x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_1);
x_7 = lean_mk_string("invalid configuration option entry, it must be of the form '<key> = <value>'");
x_8 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
else
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_1);
x_11 = lean_mk_string("invalid configuration option entry, it must be of the form '<key> = <value>'");
x_12 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_6, 0);
lean_inc(x_15);
lean_dec(x_6);
x_16 = lean_ctor_get(x_10, 0);
lean_inc(x_16);
lean_dec(x_10);
x_17 = lean_box(0);
x_18 = lean_name_mk_string(x_17, x_15);
lean_inc(x_18);
x_19 = l_Lean_getOptionDefaulValue(x_18, x_3);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
switch (lean_obj_tag(x_20)) {
case 0:
{
uint8_t x_21; 
lean_dec(x_20);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 0);
lean_dec(x_22);
x_23 = l_Lean_KVMap_setString(x_1, x_18, x_16);
lean_ctor_set(x_19, 0, x_23);
return x_19;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
lean_dec(x_19);
x_25 = l_Lean_KVMap_setString(x_1, x_18, x_16);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
case 1:
{
uint8_t x_27; 
lean_dec(x_20);
x_27 = !lean_is_exclusive(x_19);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = lean_ctor_get(x_19, 0);
lean_dec(x_28);
x_29 = lean_mk_string("true");
x_30 = lean_name_mk_string(x_17, x_29);
x_31 = lean_name_eq(x_18, x_30);
lean_dec(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_mk_string("false");
x_33 = lean_name_mk_string(x_17, x_32);
x_34 = lean_name_eq(x_18, x_33);
lean_dec(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_18);
lean_dec(x_1);
x_35 = lean_mk_string("invalid Bool option value '");
x_36 = lean_string_append(x_35, x_16);
lean_dec(x_16);
x_37 = lean_mk_string("'");
x_38 = lean_string_append(x_36, x_37);
lean_dec(x_37);
x_39 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set_tag(x_19, 1);
lean_ctor_set(x_19, 0, x_39);
return x_19;
}
else
{
uint8_t x_40; lean_object* x_41; 
lean_dec(x_16);
x_40 = 0;
x_41 = l_Lean_KVMap_setBool(x_1, x_18, x_40);
lean_ctor_set(x_19, 0, x_41);
return x_19;
}
}
else
{
uint8_t x_42; lean_object* x_43; 
lean_dec(x_16);
x_42 = 1;
x_43 = l_Lean_KVMap_setBool(x_1, x_18, x_42);
lean_ctor_set(x_19, 0, x_43);
return x_19;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_44 = lean_ctor_get(x_19, 1);
lean_inc(x_44);
lean_dec(x_19);
x_45 = lean_mk_string("true");
x_46 = lean_name_mk_string(x_17, x_45);
x_47 = lean_name_eq(x_18, x_46);
lean_dec(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_48 = lean_mk_string("false");
x_49 = lean_name_mk_string(x_17, x_48);
x_50 = lean_name_eq(x_18, x_49);
lean_dec(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_18);
lean_dec(x_1);
x_51 = lean_mk_string("invalid Bool option value '");
x_52 = lean_string_append(x_51, x_16);
lean_dec(x_16);
x_53 = lean_mk_string("'");
x_54 = lean_string_append(x_52, x_53);
lean_dec(x_53);
x_55 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_55, 0, x_54);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_44);
return x_56;
}
else
{
uint8_t x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_16);
x_57 = 0;
x_58 = l_Lean_KVMap_setBool(x_1, x_18, x_57);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_44);
return x_59;
}
}
else
{
uint8_t x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_16);
x_60 = 1;
x_61 = l_Lean_KVMap_setBool(x_1, x_18, x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_44);
return x_62;
}
}
}
case 2:
{
uint8_t x_63; 
lean_dec(x_20);
x_63 = !lean_is_exclusive(x_19);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_19, 0);
lean_dec(x_64);
x_65 = l_String_toName(x_16);
x_66 = l_Lean_KVMap_setName(x_1, x_18, x_65);
lean_ctor_set(x_19, 0, x_66);
return x_19;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_67 = lean_ctor_get(x_19, 1);
lean_inc(x_67);
lean_dec(x_19);
x_68 = l_String_toName(x_16);
x_69 = l_Lean_KVMap_setName(x_1, x_18, x_68);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_67);
return x_70;
}
}
case 3:
{
uint8_t x_71; 
lean_dec(x_20);
x_71 = !lean_is_exclusive(x_19);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_19, 0);
lean_dec(x_72);
x_73 = l_String_toNat_x3f(x_16);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_18);
lean_dec(x_1);
x_74 = lean_mk_string("invalid Nat option value '");
x_75 = lean_string_append(x_74, x_16);
lean_dec(x_16);
x_76 = lean_mk_string("'");
x_77 = lean_string_append(x_75, x_76);
lean_dec(x_76);
x_78 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set_tag(x_19, 1);
lean_ctor_set(x_19, 0, x_78);
return x_19;
}
else
{
lean_object* x_79; lean_object* x_80; 
lean_dec(x_16);
x_79 = lean_ctor_get(x_73, 0);
lean_inc(x_79);
lean_dec(x_73);
x_80 = l_Lean_KVMap_setNat(x_1, x_18, x_79);
lean_ctor_set(x_19, 0, x_80);
return x_19;
}
}
else
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_19, 1);
lean_inc(x_81);
lean_dec(x_19);
x_82 = l_String_toNat_x3f(x_16);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_18);
lean_dec(x_1);
x_83 = lean_mk_string("invalid Nat option value '");
x_84 = lean_string_append(x_83, x_16);
lean_dec(x_16);
x_85 = lean_mk_string("'");
x_86 = lean_string_append(x_84, x_85);
lean_dec(x_85);
x_87 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_87, 0, x_86);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_81);
return x_88;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_16);
x_89 = lean_ctor_get(x_82, 0);
lean_inc(x_89);
lean_dec(x_82);
x_90 = l_Lean_KVMap_setNat(x_1, x_18, x_89);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_81);
return x_91;
}
}
}
default: 
{
uint8_t x_92; 
lean_dec(x_20);
x_92 = !lean_is_exclusive(x_19);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; 
x_93 = lean_ctor_get(x_19, 0);
lean_dec(x_93);
lean_inc(x_16);
x_94 = l_String_toInt_x3f(x_16);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec(x_18);
lean_dec(x_1);
x_95 = lean_mk_string("invalid Int option value '");
x_96 = lean_string_append(x_95, x_16);
lean_dec(x_16);
x_97 = lean_mk_string("'");
x_98 = lean_string_append(x_96, x_97);
lean_dec(x_97);
x_99 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set_tag(x_19, 1);
lean_ctor_set(x_19, 0, x_99);
return x_19;
}
else
{
lean_object* x_100; lean_object* x_101; 
lean_dec(x_16);
x_100 = lean_ctor_get(x_94, 0);
lean_inc(x_100);
lean_dec(x_94);
x_101 = l_Lean_KVMap_setInt(x_1, x_18, x_100);
lean_ctor_set(x_19, 0, x_101);
return x_19;
}
}
else
{
lean_object* x_102; lean_object* x_103; 
x_102 = lean_ctor_get(x_19, 1);
lean_inc(x_102);
lean_dec(x_19);
lean_inc(x_16);
x_103 = l_String_toInt_x3f(x_16);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
lean_dec(x_18);
lean_dec(x_1);
x_104 = lean_mk_string("invalid Int option value '");
x_105 = lean_string_append(x_104, x_16);
lean_dec(x_16);
x_106 = lean_mk_string("'");
x_107 = lean_string_append(x_105, x_106);
lean_dec(x_106);
x_108 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_108, 0, x_107);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_102);
return x_109;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
lean_dec(x_16);
x_110 = lean_ctor_get(x_103, 0);
lean_inc(x_110);
lean_dec(x_103);
x_111 = l_Lean_KVMap_setInt(x_1, x_18, x_110);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_102);
return x_112;
}
}
}
}
}
else
{
uint8_t x_113; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_1);
x_113 = !lean_is_exclusive(x_19);
if (x_113 == 0)
{
return x_19;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_19, 0);
x_115 = lean_ctor_get(x_19, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_19);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_1);
x_117 = lean_mk_string("invalid configuration option entry, it must be of the form '<key> = <value>'");
x_118 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_118, 0, x_117);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_3);
return x_119;
}
}
}
}
}
lean_object* l_Lean_instMonadOptions___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_1, lean_box(0), x_2);
return x_3;
}
}
lean_object* l_Lean_instMonadOptions(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_instMonadOptions___rarg), 2, 0);
return x_3;
}
}
lean_object* l_Lean_getBoolOption___rarg___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_KVMap_getBool(x_4, x_2, x_3);
x_8 = lean_box(x_7);
x_9 = lean_apply_2(x_6, lean_box(0), x_8);
return x_9;
}
}
lean_object* l_Lean_getBoolOption___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_box(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_getBoolOption___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_6);
x_8 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_2, x_7);
return x_8;
}
}
lean_object* l_Lean_getBoolOption(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_getBoolOption___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_getBoolOption___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_Lean_getBoolOption___rarg___lambda__1(x_1, x_2, x_5, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_getBoolOption___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_4);
lean_dec(x_4);
x_6 = l_Lean_getBoolOption___rarg(x_1, x_2, x_3, x_5);
return x_6;
}
}
lean_object* l_Lean_getNatOption___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_KVMap_getNat(x_4, x_2, x_3);
x_8 = lean_apply_2(x_6, lean_box(0), x_7);
return x_8;
}
}
lean_object* l_Lean_getNatOption___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_Lean_getNatOption___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_4);
x_7 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_2, x_6);
return x_7;
}
}
lean_object* l_Lean_getNatOption(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_getNatOption___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_getNatOption___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_getNatOption___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_instInhabitedOption___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_instInhabitedOption(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_instInhabitedOption___rarg), 1, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Option_Decl_group___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
static lean_object* _init_l_Lean_Option_Decl_descr___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
lean_object* l_Lean_Option_get_x3f___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = l_Lean_KVMap_findCore(x_2, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
lean_dec(x_1);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_8, x_7);
return x_9;
}
}
}
lean_object* l_Lean_Option_get_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Option_get_x3f___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Option_get_x3f___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Option_get_x3f___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Option_get___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = l_Lean_KVMap_findCore(x_2, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_dec(x_1);
lean_inc(x_5);
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_8, x_7);
if (lean_obj_tag(x_9) == 0)
{
lean_inc(x_5);
return x_5;
}
else
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
return x_10;
}
}
}
}
lean_object* l_Lean_Option_get(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Option_get___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Option_get___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Option_get___rarg(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Option_set___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_6, x_4);
x_8 = l_Lean_KVMap_insertCore(x_2, x_5, x_7);
return x_8;
}
}
lean_object* l_Lean_Option_set(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Option_set___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Option_setIfNotSet___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = l_Lean_KVMap_contains(x_2, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = l_Lean_Option_set___rarg(x_1, x_2, x_3, x_4);
return x_7;
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_2;
}
}
}
lean_object* l_Lean_Option_setIfNotSet(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Option_setIfNotSet___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Option_register___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 2);
lean_inc(x_8);
lean_dec(x_3);
lean_inc(x_6);
x_9 = lean_apply_1(x_5, x_6);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
lean_ctor_set(x_10, 2, x_8);
lean_inc(x_2);
x_11 = lean_register_option(x_2, x_10, x_4);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_dec(x_13);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_6);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_16, 1, x_6);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_6);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_11);
if (x_18 == 0)
{
return x_11;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_11, 0);
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_11);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Lean_Option_register(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Option_register___rarg), 4, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Option_commandRegister__builtin__option_____x3a___x3a_x3d__() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Option");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("commandRegister_builtin_option__:_:=_");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("andthen");
x_9 = lean_name_mk_string(x_1, x_8);
x_10 = lean_mk_string("register_builtin_option");
x_11 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_mk_string("ident");
x_13 = lean_name_mk_string(x_1, x_12);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
lean_inc(x_9);
x_15 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_15, 0, x_9);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
x_16 = lean_mk_string(" : ");
x_17 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_inc(x_9);
x_18 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_18, 0, x_9);
lean_ctor_set(x_18, 1, x_15);
lean_ctor_set(x_18, 2, x_17);
x_19 = lean_mk_string("term");
x_20 = lean_name_mk_string(x_1, x_19);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
lean_inc(x_22);
lean_inc(x_9);
x_23 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_23, 0, x_9);
lean_ctor_set(x_23, 1, x_18);
lean_ctor_set(x_23, 2, x_22);
x_24 = lean_mk_string(" := ");
x_25 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_25, 0, x_24);
lean_inc(x_9);
x_26 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_26, 0, x_9);
lean_ctor_set(x_26, 1, x_23);
lean_ctor_set(x_26, 2, x_25);
x_27 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_27, 0, x_9);
lean_ctor_set(x_27, 1, x_26);
lean_ctor_set(x_27, 2, x_22);
x_28 = lean_unsigned_to_nat(1022u);
x_29 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_29, 0, x_7);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_29, 2, x_27);
return x_29;
}
}
lean_object* l_Lean_Option_myMacro____x40_Lean_Data_Options___hyg_979_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Lean");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Option");
lean_inc(x_6);
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("commandRegister_builtin_option__:_:=_");
lean_inc(x_8);
x_10 = lean_name_mk_string(x_8, x_9);
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(1);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(3u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = lean_unsigned_to_nat(5u);
x_19 = l_Lean_Syntax_getArg(x_1, x_18);
lean_dec(x_1);
x_20 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_2, 2);
lean_inc(x_23);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_mk_string("Parser");
x_26 = lean_name_mk_string(x_6, x_25);
x_27 = lean_mk_string("Command");
lean_inc(x_26);
x_28 = lean_name_mk_string(x_26, x_27);
x_29 = lean_mk_string("builtin_initialize");
lean_inc(x_29);
x_30 = lean_name_mk_string(x_28, x_29);
lean_inc(x_22);
x_31 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_31, 0, x_22);
lean_ctor_set(x_31, 1, x_29);
x_32 = lean_mk_string("null");
x_33 = lean_name_mk_string(x_4, x_32);
x_34 = lean_mk_string("Term");
x_35 = lean_name_mk_string(x_26, x_34);
x_36 = lean_mk_string("typeSpec");
lean_inc(x_35);
x_37 = lean_name_mk_string(x_35, x_36);
x_38 = lean_mk_string(":");
lean_inc(x_22);
x_39 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_39, 0, x_22);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_mk_string("app");
lean_inc(x_35);
x_41 = lean_name_mk_string(x_35, x_40);
x_42 = lean_mk_string("Lean.Option");
x_43 = lean_string_utf8_byte_size(x_42);
x_44 = lean_unsigned_to_nat(0u);
x_45 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_44);
lean_ctor_set(x_45, 2, x_43);
lean_inc(x_23);
lean_inc(x_8);
lean_inc(x_24);
x_46 = l_Lean_addMacroScope(x_24, x_8, x_23);
x_47 = lean_box(0);
lean_inc(x_8);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_8);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
lean_inc(x_22);
x_50 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_50, 0, x_22);
lean_ctor_set(x_50, 1, x_45);
lean_ctor_set(x_50, 2, x_46);
lean_ctor_set(x_50, 3, x_49);
x_51 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_51);
x_52 = lean_array_push(x_51, x_17);
lean_inc(x_33);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_33);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_unsigned_to_nat(2u);
x_55 = lean_mk_empty_array_with_capacity(x_54);
lean_inc(x_55);
x_56 = lean_array_push(x_55, x_50);
x_57 = lean_array_push(x_56, x_53);
lean_inc(x_41);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_41);
lean_ctor_set(x_58, 1, x_57);
lean_inc(x_55);
x_59 = lean_array_push(x_55, x_39);
x_60 = lean_array_push(x_59, x_58);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_37);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_mk_string("←");
lean_inc(x_22);
x_63 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_63, 0, x_22);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_15);
lean_inc(x_64);
x_65 = lean_array_push(x_64, x_15);
x_66 = lean_array_push(x_65, x_61);
x_67 = lean_array_push(x_66, x_63);
lean_inc(x_33);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_33);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_mk_string("doSeqIndent");
lean_inc(x_35);
x_70 = lean_name_mk_string(x_35, x_69);
x_71 = lean_mk_string("doSeqItem");
lean_inc(x_35);
x_72 = lean_name_mk_string(x_35, x_71);
x_73 = lean_mk_string("doExpr");
lean_inc(x_35);
x_74 = lean_name_mk_string(x_35, x_73);
x_75 = lean_mk_string("Lean.Option.register");
x_76 = lean_string_utf8_byte_size(x_75);
x_77 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_44);
lean_ctor_set(x_77, 2, x_76);
x_78 = lean_mk_string("register");
x_79 = lean_name_mk_string(x_8, x_78);
lean_inc(x_79);
x_80 = l_Lean_addMacroScope(x_24, x_79, x_23);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_47);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_47);
x_83 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_83, 0, x_22);
lean_ctor_set(x_83, 1, x_77);
lean_ctor_set(x_83, 2, x_80);
lean_ctor_set(x_83, 3, x_82);
x_84 = l_Lean_Syntax_getId(x_15);
lean_dec(x_15);
lean_inc(x_84);
x_85 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_47, x_84);
lean_inc(x_55);
x_86 = lean_array_push(x_55, x_83);
x_87 = lean_mk_empty_array_with_capacity(x_44);
lean_inc(x_33);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_33);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_array_push(x_64, x_31);
x_90 = lean_array_push(x_89, x_68);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_dec(x_35);
x_91 = l___private_Init_Meta_0__Lean_quoteNameMk(x_84);
lean_inc(x_55);
x_92 = lean_array_push(x_55, x_91);
x_93 = lean_array_push(x_92, x_19);
lean_inc(x_33);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_33);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_array_push(x_86, x_94);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_41);
lean_ctor_set(x_96, 1, x_95);
lean_inc(x_51);
x_97 = lean_array_push(x_51, x_96);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_74);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_array_push(x_55, x_98);
x_100 = lean_array_push(x_99, x_88);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_72);
lean_ctor_set(x_101, 1, x_100);
lean_inc(x_51);
x_102 = lean_array_push(x_51, x_101);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_33);
lean_ctor_set(x_103, 1, x_102);
x_104 = lean_array_push(x_51, x_103);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_70);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_array_push(x_90, x_105);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_30);
lean_ctor_set(x_107, 1, x_106);
lean_ctor_set(x_20, 0, x_107);
return x_20;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
lean_dec(x_84);
x_108 = lean_ctor_get(x_85, 0);
lean_inc(x_108);
lean_dec(x_85);
x_109 = lean_mk_string("quotedName");
x_110 = lean_name_mk_string(x_35, x_109);
x_111 = lean_mk_string(".");
x_112 = l_String_intercalate(x_111, x_108);
x_113 = lean_mk_string("`");
x_114 = lean_string_append(x_113, x_112);
lean_dec(x_112);
x_115 = l_Lean_nameLitKind;
x_116 = lean_box(2);
x_117 = l_Lean_Syntax_mkLit(x_115, x_114, x_116);
lean_inc(x_51);
x_118 = lean_array_push(x_51, x_117);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_110);
lean_ctor_set(x_119, 1, x_118);
lean_inc(x_55);
x_120 = lean_array_push(x_55, x_119);
x_121 = lean_array_push(x_120, x_19);
lean_inc(x_33);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_33);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_array_push(x_86, x_122);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_41);
lean_ctor_set(x_124, 1, x_123);
lean_inc(x_51);
x_125 = lean_array_push(x_51, x_124);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_74);
lean_ctor_set(x_126, 1, x_125);
x_127 = lean_array_push(x_55, x_126);
x_128 = lean_array_push(x_127, x_88);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_72);
lean_ctor_set(x_129, 1, x_128);
lean_inc(x_51);
x_130 = lean_array_push(x_51, x_129);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_33);
lean_ctor_set(x_131, 1, x_130);
x_132 = lean_array_push(x_51, x_131);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_70);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_array_push(x_90, x_133);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_30);
lean_ctor_set(x_135, 1, x_134);
lean_ctor_set(x_20, 0, x_135);
return x_20;
}
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_136 = lean_ctor_get(x_20, 0);
x_137 = lean_ctor_get(x_20, 1);
lean_inc(x_137);
lean_inc(x_136);
lean_dec(x_20);
x_138 = lean_ctor_get(x_2, 2);
lean_inc(x_138);
x_139 = lean_ctor_get(x_2, 1);
lean_inc(x_139);
lean_dec(x_2);
x_140 = lean_mk_string("Parser");
x_141 = lean_name_mk_string(x_6, x_140);
x_142 = lean_mk_string("Command");
lean_inc(x_141);
x_143 = lean_name_mk_string(x_141, x_142);
x_144 = lean_mk_string("builtin_initialize");
lean_inc(x_144);
x_145 = lean_name_mk_string(x_143, x_144);
lean_inc(x_136);
x_146 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_146, 0, x_136);
lean_ctor_set(x_146, 1, x_144);
x_147 = lean_mk_string("null");
x_148 = lean_name_mk_string(x_4, x_147);
x_149 = lean_mk_string("Term");
x_150 = lean_name_mk_string(x_141, x_149);
x_151 = lean_mk_string("typeSpec");
lean_inc(x_150);
x_152 = lean_name_mk_string(x_150, x_151);
x_153 = lean_mk_string(":");
lean_inc(x_136);
x_154 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_154, 0, x_136);
lean_ctor_set(x_154, 1, x_153);
x_155 = lean_mk_string("app");
lean_inc(x_150);
x_156 = lean_name_mk_string(x_150, x_155);
x_157 = lean_mk_string("Lean.Option");
x_158 = lean_string_utf8_byte_size(x_157);
x_159 = lean_unsigned_to_nat(0u);
x_160 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_160, 0, x_157);
lean_ctor_set(x_160, 1, x_159);
lean_ctor_set(x_160, 2, x_158);
lean_inc(x_138);
lean_inc(x_8);
lean_inc(x_139);
x_161 = l_Lean_addMacroScope(x_139, x_8, x_138);
x_162 = lean_box(0);
lean_inc(x_8);
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_8);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_163);
lean_ctor_set(x_164, 1, x_162);
lean_inc(x_136);
x_165 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_165, 0, x_136);
lean_ctor_set(x_165, 1, x_160);
lean_ctor_set(x_165, 2, x_161);
lean_ctor_set(x_165, 3, x_164);
x_166 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_166);
x_167 = lean_array_push(x_166, x_17);
lean_inc(x_148);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_148);
lean_ctor_set(x_168, 1, x_167);
x_169 = lean_unsigned_to_nat(2u);
x_170 = lean_mk_empty_array_with_capacity(x_169);
lean_inc(x_170);
x_171 = lean_array_push(x_170, x_165);
x_172 = lean_array_push(x_171, x_168);
lean_inc(x_156);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_156);
lean_ctor_set(x_173, 1, x_172);
lean_inc(x_170);
x_174 = lean_array_push(x_170, x_154);
x_175 = lean_array_push(x_174, x_173);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_152);
lean_ctor_set(x_176, 1, x_175);
x_177 = lean_mk_string("←");
lean_inc(x_136);
x_178 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_178, 0, x_136);
lean_ctor_set(x_178, 1, x_177);
x_179 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_15);
lean_inc(x_179);
x_180 = lean_array_push(x_179, x_15);
x_181 = lean_array_push(x_180, x_176);
x_182 = lean_array_push(x_181, x_178);
lean_inc(x_148);
x_183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_183, 0, x_148);
lean_ctor_set(x_183, 1, x_182);
x_184 = lean_mk_string("doSeqIndent");
lean_inc(x_150);
x_185 = lean_name_mk_string(x_150, x_184);
x_186 = lean_mk_string("doSeqItem");
lean_inc(x_150);
x_187 = lean_name_mk_string(x_150, x_186);
x_188 = lean_mk_string("doExpr");
lean_inc(x_150);
x_189 = lean_name_mk_string(x_150, x_188);
x_190 = lean_mk_string("Lean.Option.register");
x_191 = lean_string_utf8_byte_size(x_190);
x_192 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_192, 0, x_190);
lean_ctor_set(x_192, 1, x_159);
lean_ctor_set(x_192, 2, x_191);
x_193 = lean_mk_string("register");
x_194 = lean_name_mk_string(x_8, x_193);
lean_inc(x_194);
x_195 = l_Lean_addMacroScope(x_139, x_194, x_138);
x_196 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_196, 0, x_194);
lean_ctor_set(x_196, 1, x_162);
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_162);
x_198 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_198, 0, x_136);
lean_ctor_set(x_198, 1, x_192);
lean_ctor_set(x_198, 2, x_195);
lean_ctor_set(x_198, 3, x_197);
x_199 = l_Lean_Syntax_getId(x_15);
lean_dec(x_15);
lean_inc(x_199);
x_200 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_162, x_199);
lean_inc(x_170);
x_201 = lean_array_push(x_170, x_198);
x_202 = lean_mk_empty_array_with_capacity(x_159);
lean_inc(x_148);
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_148);
lean_ctor_set(x_203, 1, x_202);
x_204 = lean_array_push(x_179, x_146);
x_205 = lean_array_push(x_204, x_183);
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; 
lean_dec(x_150);
x_206 = l___private_Init_Meta_0__Lean_quoteNameMk(x_199);
lean_inc(x_170);
x_207 = lean_array_push(x_170, x_206);
x_208 = lean_array_push(x_207, x_19);
lean_inc(x_148);
x_209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_209, 0, x_148);
lean_ctor_set(x_209, 1, x_208);
x_210 = lean_array_push(x_201, x_209);
x_211 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_211, 0, x_156);
lean_ctor_set(x_211, 1, x_210);
lean_inc(x_166);
x_212 = lean_array_push(x_166, x_211);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_189);
lean_ctor_set(x_213, 1, x_212);
x_214 = lean_array_push(x_170, x_213);
x_215 = lean_array_push(x_214, x_203);
x_216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_216, 0, x_187);
lean_ctor_set(x_216, 1, x_215);
lean_inc(x_166);
x_217 = lean_array_push(x_166, x_216);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_148);
lean_ctor_set(x_218, 1, x_217);
x_219 = lean_array_push(x_166, x_218);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_185);
lean_ctor_set(x_220, 1, x_219);
x_221 = lean_array_push(x_205, x_220);
x_222 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_222, 0, x_145);
lean_ctor_set(x_222, 1, x_221);
x_223 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_223, 0, x_222);
lean_ctor_set(x_223, 1, x_137);
return x_223;
}
else
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
lean_dec(x_199);
x_224 = lean_ctor_get(x_200, 0);
lean_inc(x_224);
lean_dec(x_200);
x_225 = lean_mk_string("quotedName");
x_226 = lean_name_mk_string(x_150, x_225);
x_227 = lean_mk_string(".");
x_228 = l_String_intercalate(x_227, x_224);
x_229 = lean_mk_string("`");
x_230 = lean_string_append(x_229, x_228);
lean_dec(x_228);
x_231 = l_Lean_nameLitKind;
x_232 = lean_box(2);
x_233 = l_Lean_Syntax_mkLit(x_231, x_230, x_232);
lean_inc(x_166);
x_234 = lean_array_push(x_166, x_233);
x_235 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_235, 0, x_226);
lean_ctor_set(x_235, 1, x_234);
lean_inc(x_170);
x_236 = lean_array_push(x_170, x_235);
x_237 = lean_array_push(x_236, x_19);
lean_inc(x_148);
x_238 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_238, 0, x_148);
lean_ctor_set(x_238, 1, x_237);
x_239 = lean_array_push(x_201, x_238);
x_240 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_240, 0, x_156);
lean_ctor_set(x_240, 1, x_239);
lean_inc(x_166);
x_241 = lean_array_push(x_166, x_240);
x_242 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_242, 0, x_189);
lean_ctor_set(x_242, 1, x_241);
x_243 = lean_array_push(x_170, x_242);
x_244 = lean_array_push(x_243, x_203);
x_245 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_245, 0, x_187);
lean_ctor_set(x_245, 1, x_244);
lean_inc(x_166);
x_246 = lean_array_push(x_166, x_245);
x_247 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_247, 0, x_148);
lean_ctor_set(x_247, 1, x_246);
x_248 = lean_array_push(x_166, x_247);
x_249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_249, 0, x_185);
lean_ctor_set(x_249, 1, x_248);
x_250 = lean_array_push(x_205, x_249);
x_251 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_251, 0, x_145);
lean_ctor_set(x_251, 1, x_250);
x_252 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_252, 0, x_251);
lean_ctor_set(x_252, 1, x_137);
return x_252;
}
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Data_KVMap(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Data_Options(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_KVMap(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Options_empty = _init_l_Lean_Options_empty();
lean_mark_persistent(l_Lean_Options_empty);
l_Lean_instInhabitedOptions = _init_l_Lean_instInhabitedOptions();
lean_mark_persistent(l_Lean_instInhabitedOptions);
l_Lean_instToStringOptions = _init_l_Lean_instToStringOptions();
lean_mark_persistent(l_Lean_instToStringOptions);
l_Lean_OptionDecl_group___default = _init_l_Lean_OptionDecl_group___default();
lean_mark_persistent(l_Lean_OptionDecl_group___default);
l_Lean_OptionDecl_descr___default = _init_l_Lean_OptionDecl_descr___default();
lean_mark_persistent(l_Lean_OptionDecl_descr___default);
l_Lean_instInhabitedOptionDecl = _init_l_Lean_instInhabitedOptionDecl();
lean_mark_persistent(l_Lean_instInhabitedOptionDecl);
l_Lean_instInhabitedOptionDecls = _init_l_Lean_instInhabitedOptionDecls();
lean_mark_persistent(l_Lean_instInhabitedOptionDecls);
res = l___private_Lean_Data_Options_0__Lean_initOptionDeclsRef(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Data_Options_0__Lean_optionDeclsRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Data_Options_0__Lean_optionDeclsRef);
lean_dec_ref(res);
l_Lean_Option_Decl_group___default = _init_l_Lean_Option_Decl_group___default();
lean_mark_persistent(l_Lean_Option_Decl_group___default);
l_Lean_Option_Decl_descr___default = _init_l_Lean_Option_Decl_descr___default();
lean_mark_persistent(l_Lean_Option_Decl_descr___default);
l_Lean_Option_commandRegister__builtin__option_____x3a___x3a_x3d__ = _init_l_Lean_Option_commandRegister__builtin__option_____x3a___x3a_x3d__();
lean_mark_persistent(l_Lean_Option_commandRegister__builtin__option_____x3a___x3a_x3d__);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
