// Lean compiler output
// Module: Lean.Elab.Level
// Imports: Init Lean.Meta.LevelDefEq Lean.Elab.Exception Lean.Elab.Log Lean.Elab.AutoBound
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
lean_object* l_Lean_Elab_Level_instMonadRefLevelElabM;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(lean_object*);
lean_object* l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_MetavarContext_addLevelMVarDecl(lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Level_instMonadOptionsLevelElabM___spec__2(lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___at_Lean_Elab_Level_mkFreshLevelMVar___spec__1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_instMonadRefLevelElabM___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_Level_elabLevel(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_instAddMessageContextLevelElabM(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_mkFreshLevelMVar___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_instMonadRefLevelElabM___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_instMonadOptionsLevelElabM___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Level_elabLevel___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_instMonadOptionsLevelElabM___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_mkFreshLevelMVar(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_maxUniverseOffset;
lean_object* lean_level_mk_max_simp(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_level_mk_imax_simp(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_initFn____x40_Lean_Elab_Level___hyg_212_(lean_object*);
lean_object* l_Lean_Elab_Level_elabLevel_match__1(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Level_addOffsetAux(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_instMonadRefLevelElabM___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_elabLevel_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_mkLevelMVar(lean_object*);
lean_object* l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset(lean_object*);
lean_object* l_Lean_Option_register___at_Lean_initFn____x40_Lean_Util_RecDepth___hyg_4____spec__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_identKind;
uint8_t l_List_elem___at_Lean_NameHashSet_insert___spec__2(lean_object*, lean_object*);
uint8_t l_Lean_Elab_isValidAutoBoundLevelName(lean_object*);
lean_object* l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Level_elabLevel___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__5___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Elab_Level_instMonadOptionsLevelElabM;
lean_object* l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___at_Lean_Elab_Level_mkFreshLevelMVar___spec__1___boxed(lean_object*);
lean_object* l_Lean_throwError___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___at_Lean_Elab_Level_elabLevel___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___at_Lean_Elab_Level_mkFreshLevelMVar___spec__1___rarg(lean_object*);
lean_object* l_Lean_Elab_Level_instAddMessageContextLevelElabM___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_read___at_Lean_Elab_Level_instMonadOptionsLevelElabM___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___at_Lean_Elab_Level_elabLevel___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_elabLevel___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Level_instMonadOptionsLevelElabM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(lean_object*);
lean_object* l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM;
lean_object* l_Lean_Elab_Level_elabLevel___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_ReaderT_read___at_Lean_Elab_Level_instMonadOptionsLevelElabM___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_ReaderT_bind___at_Lean_Elab_Level_instMonadOptionsLevelElabM___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
x_5 = lean_apply_2(x_1, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_3(x_2, x_6, x_3, x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_5);
if (x_9 == 0)
{
return x_5;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_5, 0);
x_11 = lean_ctor_get(x_5, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_5);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
lean_object* l_ReaderT_bind___at_Lean_Elab_Level_instMonadOptionsLevelElabM___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Level_instMonadOptionsLevelElabM___spec__2___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Lean_Elab_Level_instMonadOptionsLevelElabM___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Level_instMonadOptionsLevelElabM() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_alloc_closure((void*)(l_ReaderT_read___at_Lean_Elab_Level_instMonadOptionsLevelElabM___spec__1), 2, 0);
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Level_instMonadOptionsLevelElabM___lambda__1___boxed), 3, 0);
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Level_instMonadOptionsLevelElabM___spec__2___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Level_instMonadOptionsLevelElabM___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Level_instMonadOptionsLevelElabM___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Level_instMonadRefLevelElabM___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Level_instMonadRefLevelElabM___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 1);
lean_dec(x_7);
lean_ctor_set(x_4, 1, x_2);
x_8 = lean_apply_2(x_3, x_4, x_5);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get_uint8(x_4, sizeof(void*)*2);
lean_inc(x_9);
lean_dec(x_4);
x_11 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_2);
lean_ctor_set_uint8(x_11, sizeof(void*)*2, x_10);
x_12 = lean_apply_2(x_3, x_11, x_5);
return x_12;
}
}
}
static lean_object* _init_l_Lean_Elab_Level_instMonadRefLevelElabM() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_alloc_closure((void*)(l_ReaderT_read___at_Lean_Elab_Level_instMonadOptionsLevelElabM___spec__1), 2, 0);
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Level_instMonadRefLevelElabM___lambda__1___boxed), 3, 0);
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Level_instMonadOptionsLevelElabM___spec__2___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Elab_Level_instMonadRefLevelElabM___lambda__2), 5, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Level_instMonadRefLevelElabM___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Level_instMonadRefLevelElabM___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Level_instAddMessageContextLevelElabM(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_Level_instAddMessageContextLevelElabM___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Level_instAddMessageContextLevelElabM(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_dec(x_5);
lean_ctor_set(x_3, 0, x_1);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_3, 1);
x_9 = lean_ctor_get(x_3, 2);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_3);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
}
static lean_object* _init_l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__1___boxed), 2, 0);
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__2___boxed), 3, 0);
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Level_instMonadOptionsLevelElabM___spec__2___rarg), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__3___boxed), 3, 0);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM___lambda__3(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_mkFreshId___at_Lean_Elab_Level_mkFreshLevelMVar___spec__1___rarg(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
x_7 = lean_name_mk_numeral(x_5, x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_6, x_8);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_9);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_1);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_12);
lean_inc(x_11);
x_13 = lean_name_mk_numeral(x_11, x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_12, x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_1, 0, x_16);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_1);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
x_20 = lean_ctor_get(x_1, 2);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 x_23 = x_18;
} else {
 lean_dec_ref(x_18);
 x_23 = lean_box(0);
}
lean_inc(x_22);
lean_inc(x_21);
x_24 = lean_name_mk_numeral(x_21, x_22);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_22, x_25);
lean_dec(x_22);
if (lean_is_scalar(x_23)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_23;
}
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_19);
lean_ctor_set(x_28, 2, x_20);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_24);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
lean_object* l_Lean_mkFreshId___at_Lean_Elab_Level_mkFreshLevelMVar___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_mkFreshId___at_Lean_Elab_Level_mkFreshLevelMVar___spec__1___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Level_mkFreshLevelMVar(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_mkFreshId___at_Lean_Elab_Level_mkFreshLevelMVar___spec__1___rarg(x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
x_9 = l_Lean_MetavarContext_addLevelMVarDecl(x_8, x_7);
lean_ctor_set(x_5, 1, x_9);
x_10 = l_Lean_mkLevelMVar(x_7);
lean_ctor_set(x_3, 0, x_10);
return x_3;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_5, 0);
x_13 = lean_ctor_get(x_5, 1);
x_14 = lean_ctor_get(x_5, 2);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_5);
lean_inc(x_11);
x_15 = l_Lean_MetavarContext_addLevelMVarDecl(x_13, x_11);
x_16 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set(x_16, 2, x_14);
x_17 = l_Lean_mkLevelMVar(x_11);
lean_ctor_set(x_3, 1, x_16);
lean_ctor_set(x_3, 0, x_17);
return x_3;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_18 = lean_ctor_get(x_3, 1);
x_19 = lean_ctor_get(x_3, 0);
lean_inc(x_18);
lean_inc(x_19);
lean_dec(x_3);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_18, 2);
lean_inc(x_22);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 lean_ctor_release(x_18, 2);
 x_23 = x_18;
} else {
 lean_dec_ref(x_18);
 x_23 = lean_box(0);
}
lean_inc(x_19);
x_24 = l_Lean_MetavarContext_addLevelMVarDecl(x_21, x_19);
if (lean_is_scalar(x_23)) {
 x_25 = lean_alloc_ctor(0, 3, 0);
} else {
 x_25 = x_23;
}
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_25, 2, x_22);
x_26 = l_Lean_mkLevelMVar(x_19);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
}
lean_object* l_Lean_mkFreshId___at_Lean_Elab_Level_mkFreshLevelMVar___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_mkFreshId___at_Lean_Elab_Level_mkFreshLevelMVar___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Level_mkFreshLevelMVar___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Level_mkFreshLevelMVar(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Level_initFn____x40_Lean_Elab_Level___hyg_212_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_box(0);
x_3 = lean_mk_string("maxUniverseOffset");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_unsigned_to_nat(32u);
x_6 = lean_mk_string("");
x_7 = lean_mk_string("maximum universe level offset");
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_8, 2, x_7);
x_9 = l_Lean_Option_register___at_Lean_initFn____x40_Lean_Util_RecDepth___hyg_4____spec__1(x_4, x_8, x_1);
lean_dec(x_8);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = l_Lean_Elab_Level_maxUniverseOffset;
x_6 = l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1(x_4, x_5);
x_7 = lean_nat_dec_le(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_mk_string("maximum universe level offset threshold (");
x_9 = l_Lean_stringToMessageData(x_8);
lean_dec(x_8);
x_10 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_6);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_mk_string(") has been reached, you can increase the limit using option `set_option maxUniverseOffset <limit>`, but you are probably misusing universe levels since offsets are usually small natural numbers");
x_14 = l_Lean_stringToMessageData(x_13);
lean_dec(x_13);
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_throwError___rarg(x_2, x_3, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_3);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
lean_dec(x_2);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_box(0);
x_20 = lean_apply_2(x_18, lean_box(0), x_19);
return x_20;
}
}
}
lean_object* l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_1);
lean_closure_set(x_6, 2, x_2);
x_7 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_3, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___rarg), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Level_elabLevel_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Level_elabLevel_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Level_elabLevel_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
lean_object* l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Level_elabLevel___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_mk_string("ill-formed syntax");
x_4 = l_Lean_stringToMessageData(x_3);
lean_dec(x_3);
x_5 = l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__1(x_4, x_1, x_2);
return x_5;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___at_Lean_Elab_Level_elabLevel___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_Lean_Elab_Level_maxUniverseOffset;
x_6 = l_Lean_Option_get___at_Lean_initFn____x40_Lean_Util_PPExt___hyg_231____spec__1(x_4, x_5);
x_7 = lean_nat_dec_le(x_1, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_mk_string("maximum universe level offset threshold (");
x_9 = l_Lean_stringToMessageData(x_8);
lean_dec(x_8);
x_10 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_6);
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_mk_string(") has been reached, you can increase the limit using option `set_option maxUniverseOffset <limit>`, but you are probably misusing universe levels since offsets are usually small natural numbers");
x_14 = l_Lean_stringToMessageData(x_13);
lean_dec(x_13);
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__4(x_15, x_2, x_3);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_6);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_3);
return x_18;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_3);
return x_6;
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__6(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = 1;
x_9 = x_2 - x_8;
x_10 = lean_array_uget(x_1, x_9);
lean_inc(x_5);
x_11 = l_Lean_Elab_Level_elabLevel(x_10, x_5, x_6);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_level_mk_imax_simp(x_12, x_4);
x_2 = x_9;
x_4 = x_14;
x_6 = x_13;
goto _start;
}
else
{
uint8_t x_16; 
lean_dec(x_5);
lean_dec(x_4);
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
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
lean_dec(x_5);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_4);
lean_ctor_set(x_20, 1, x_6);
return x_20;
}
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__7(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = 1;
x_9 = x_2 - x_8;
x_10 = lean_array_uget(x_1, x_9);
lean_inc(x_5);
x_11 = l_Lean_Elab_Level_elabLevel(x_10, x_5, x_6);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_level_mk_max_simp(x_12, x_4);
x_2 = x_9;
x_4 = x_14;
x_6 = x_13;
goto _start;
}
else
{
uint8_t x_16; 
lean_dec(x_5);
lean_dec(x_4);
x_16 = !lean_is_exclusive(x_11);
if (x_16 == 0)
{
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 0);
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_11);
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
lean_dec(x_5);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_4);
lean_ctor_set(x_20, 1, x_6);
return x_20;
}
}
}
lean_object* l_Lean_Elab_Level_elabLevel___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_mkLevelParam(x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
lean_object* l_Lean_Elab_Level_elabLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; uint8_t x_15; 
lean_inc(x_1);
x_4 = l_Lean_Syntax_getKind(x_1);
x_5 = lean_box(0);
x_6 = lean_mk_string("Lean");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Parser");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("Level");
x_11 = lean_name_mk_string(x_9, x_10);
x_12 = lean_mk_string("paren");
lean_inc(x_11);
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_name_eq(x_4, x_13);
lean_dec(x_13);
x_15 = !lean_is_exclusive(x_2);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_2, 1);
x_17 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
x_18 = l_Lean_replaceRef(x_1, x_16);
lean_dec(x_16);
lean_ctor_set(x_2, 1, x_18);
if (x_14 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_mk_string("max");
lean_inc(x_11);
x_20 = lean_name_mk_string(x_11, x_19);
x_21 = lean_name_eq(x_4, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = lean_mk_string("imax");
lean_inc(x_11);
x_23 = lean_name_mk_string(x_11, x_22);
x_24 = lean_name_eq(x_4, x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_mk_string("hole");
lean_inc(x_11);
x_26 = lean_name_mk_string(x_11, x_25);
x_27 = lean_name_eq(x_4, x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; uint8_t x_29; 
x_28 = l_Lean_numLitKind;
x_29 = lean_name_eq(x_4, x_28);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = l_Lean_identKind;
x_31 = lean_name_eq(x_4, x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_32 = lean_mk_string("addLit");
x_33 = lean_name_mk_string(x_11, x_32);
x_34 = lean_name_eq(x_4, x_33);
lean_dec(x_33);
lean_dec(x_4);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_1);
x_35 = lean_mk_string("unexpected universe level syntax kind");
x_36 = l_Lean_stringToMessageData(x_35);
lean_dec(x_35);
x_37 = l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__1(x_36, x_2, x_3);
lean_dec(x_2);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_unsigned_to_nat(0u);
x_39 = l_Lean_Syntax_getArg(x_1, x_38);
lean_inc(x_2);
x_40 = l_Lean_Elab_Level_elabLevel(x_39, x_2, x_3);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_unsigned_to_nat(2u);
x_44 = l_Lean_Syntax_getArg(x_1, x_43);
lean_dec(x_1);
x_45 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_28, x_44);
lean_dec(x_44);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; 
lean_dec(x_41);
x_46 = l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Level_elabLevel___spec__2(x_2, x_42);
lean_dec(x_2);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_45, 0);
lean_inc(x_47);
lean_dec(x_45);
x_48 = l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___at_Lean_Elab_Level_elabLevel___spec__3(x_47, x_2, x_42);
lean_dec(x_2);
if (lean_obj_tag(x_48) == 0)
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_48, 0);
lean_dec(x_50);
x_51 = l_Lean_Level_addOffsetAux(x_47, x_41);
lean_ctor_set(x_48, 0, x_51);
return x_48;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_48, 1);
lean_inc(x_52);
lean_dec(x_48);
x_53 = l_Lean_Level_addOffsetAux(x_47, x_41);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
else
{
uint8_t x_55; 
lean_dec(x_47);
lean_dec(x_41);
x_55 = !lean_is_exclusive(x_48);
if (x_55 == 0)
{
return x_48;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_48, 0);
x_57 = lean_ctor_get(x_48, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_48);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_2);
lean_dec(x_1);
x_59 = !lean_is_exclusive(x_40);
if (x_59 == 0)
{
return x_40;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_40, 0);
x_61 = lean_ctor_get(x_40, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_40);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
lean_dec(x_11);
lean_dec(x_4);
x_63 = l_Lean_Syntax_getId(x_1);
lean_dec(x_1);
x_64 = lean_ctor_get(x_3, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_3, 1);
lean_inc(x_65);
x_66 = lean_ctor_get(x_3, 2);
lean_inc(x_66);
x_67 = l_List_elem___at_Lean_NameHashSet_insert___spec__2(x_63, x_66);
if (x_67 == 0)
{
if (x_17 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
x_68 = lean_mk_string("unknown universe level '");
x_69 = l_Lean_stringToMessageData(x_68);
lean_dec(x_68);
x_70 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_70, 0, x_63);
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_mk_string("'");
x_73 = l_Lean_stringToMessageData(x_72);
lean_dec(x_72);
x_74 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_73);
x_75 = l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__5(x_74, x_2, x_3);
lean_dec(x_2);
x_76 = !lean_is_exclusive(x_75);
if (x_76 == 0)
{
return x_75;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_75, 0);
x_78 = lean_ctor_get(x_75, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_75);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
else
{
uint8_t x_80; 
lean_inc(x_63);
x_80 = l_Lean_Elab_isValidAutoBoundLevelName(x_63);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; 
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
x_81 = lean_mk_string("unknown universe level '");
x_82 = l_Lean_stringToMessageData(x_81);
lean_dec(x_81);
x_83 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_83, 0, x_63);
x_84 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_mk_string("'");
x_86 = l_Lean_stringToMessageData(x_85);
lean_dec(x_85);
x_87 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_86);
x_88 = l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__5(x_87, x_2, x_3);
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_88);
if (x_89 == 0)
{
return x_88;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_88, 0);
x_91 = lean_ctor_get(x_88, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_88);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
else
{
uint8_t x_93; 
x_93 = !lean_is_exclusive(x_3);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_94 = lean_ctor_get(x_3, 2);
lean_dec(x_94);
x_95 = lean_ctor_get(x_3, 1);
lean_dec(x_95);
x_96 = lean_ctor_get(x_3, 0);
lean_dec(x_96);
lean_inc(x_63);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_63);
lean_ctor_set(x_97, 1, x_66);
lean_ctor_set(x_3, 2, x_97);
x_98 = lean_box(0);
x_99 = l_Lean_Elab_Level_elabLevel___lambda__1(x_63, x_98, x_2, x_3);
lean_dec(x_2);
return x_99;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_3);
lean_inc(x_63);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_63);
lean_ctor_set(x_100, 1, x_66);
x_101 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_101, 0, x_64);
lean_ctor_set(x_101, 1, x_65);
lean_ctor_set(x_101, 2, x_100);
x_102 = lean_box(0);
x_103 = l_Lean_Elab_Level_elabLevel___lambda__1(x_63, x_102, x_2, x_101);
lean_dec(x_2);
return x_103;
}
}
}
}
else
{
lean_object* x_104; lean_object* x_105; 
lean_dec(x_66);
lean_dec(x_65);
lean_dec(x_64);
x_104 = lean_box(0);
x_105 = l_Lean_Elab_Level_elabLevel___lambda__1(x_63, x_104, x_2, x_3);
lean_dec(x_2);
return x_105;
}
}
}
else
{
lean_object* x_106; 
lean_dec(x_11);
lean_dec(x_4);
x_106 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_28, x_1);
lean_dec(x_1);
if (lean_obj_tag(x_106) == 0)
{
lean_object* x_107; 
x_107 = l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Level_elabLevel___spec__2(x_2, x_3);
lean_dec(x_2);
return x_107;
}
else
{
lean_object* x_108; lean_object* x_109; 
x_108 = lean_ctor_get(x_106, 0);
lean_inc(x_108);
lean_dec(x_106);
x_109 = l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___at_Lean_Elab_Level_elabLevel___spec__3(x_108, x_2, x_3);
lean_dec(x_2);
if (lean_obj_tag(x_109) == 0)
{
uint8_t x_110; 
x_110 = !lean_is_exclusive(x_109);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; 
x_111 = lean_ctor_get(x_109, 0);
lean_dec(x_111);
x_112 = l_Lean_Level_ofNat(x_108);
lean_dec(x_108);
lean_ctor_set(x_109, 0, x_112);
return x_109;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_109, 1);
lean_inc(x_113);
lean_dec(x_109);
x_114 = l_Lean_Level_ofNat(x_108);
lean_dec(x_108);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_113);
return x_115;
}
}
else
{
uint8_t x_116; 
lean_dec(x_108);
x_116 = !lean_is_exclusive(x_109);
if (x_116 == 0)
{
return x_109;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_109, 0);
x_118 = lean_ctor_get(x_109, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_109);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
return x_119;
}
}
}
}
}
else
{
lean_object* x_120; 
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_1);
x_120 = l_Lean_Elab_Level_mkFreshLevelMVar(x_2, x_3);
lean_dec(x_2);
return x_120;
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
lean_dec(x_11);
lean_dec(x_4);
x_121 = lean_unsigned_to_nat(1u);
x_122 = l_Lean_Syntax_getArg(x_1, x_121);
lean_dec(x_1);
x_123 = l_Lean_Syntax_getArgs(x_122);
lean_dec(x_122);
x_124 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_123);
lean_inc(x_2);
x_125 = l_Lean_Elab_Level_elabLevel(x_124, x_2, x_3);
if (lean_obj_tag(x_125) == 0)
{
uint8_t x_126; 
x_126 = !lean_is_exclusive(x_125);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; uint8_t x_137; 
x_127 = lean_ctor_get(x_125, 0);
x_128 = lean_ctor_get(x_125, 1);
x_129 = lean_array_get_size(x_123);
x_130 = lean_nat_sub(x_129, x_121);
lean_dec(x_129);
x_131 = lean_unsigned_to_nat(0u);
x_132 = l_Array_toSubarray___rarg(x_123, x_131, x_130);
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_132, 2);
lean_inc(x_134);
x_135 = lean_ctor_get(x_132, 1);
lean_inc(x_135);
lean_dec(x_132);
x_136 = lean_array_get_size(x_133);
x_137 = lean_nat_dec_le(x_134, x_136);
if (x_137 == 0)
{
uint8_t x_138; 
lean_dec(x_134);
x_138 = lean_nat_dec_lt(x_135, x_136);
if (x_138 == 0)
{
lean_dec(x_136);
lean_dec(x_135);
lean_dec(x_133);
lean_dec(x_2);
return x_125;
}
else
{
size_t x_139; size_t x_140; lean_object* x_141; 
lean_free_object(x_125);
x_139 = lean_usize_of_nat(x_136);
lean_dec(x_136);
x_140 = lean_usize_of_nat(x_135);
lean_dec(x_135);
x_141 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__6(x_133, x_139, x_140, x_127, x_2, x_128);
lean_dec(x_133);
return x_141;
}
}
else
{
uint8_t x_142; 
lean_dec(x_136);
x_142 = lean_nat_dec_lt(x_135, x_134);
if (x_142 == 0)
{
lean_dec(x_135);
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_2);
return x_125;
}
else
{
size_t x_143; size_t x_144; lean_object* x_145; 
lean_free_object(x_125);
x_143 = lean_usize_of_nat(x_134);
lean_dec(x_134);
x_144 = lean_usize_of_nat(x_135);
lean_dec(x_135);
x_145 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__6(x_133, x_143, x_144, x_127, x_2, x_128);
lean_dec(x_133);
return x_145;
}
}
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; uint8_t x_156; 
x_146 = lean_ctor_get(x_125, 0);
x_147 = lean_ctor_get(x_125, 1);
lean_inc(x_147);
lean_inc(x_146);
lean_dec(x_125);
x_148 = lean_array_get_size(x_123);
x_149 = lean_nat_sub(x_148, x_121);
lean_dec(x_148);
x_150 = lean_unsigned_to_nat(0u);
x_151 = l_Array_toSubarray___rarg(x_123, x_150, x_149);
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_151, 2);
lean_inc(x_153);
x_154 = lean_ctor_get(x_151, 1);
lean_inc(x_154);
lean_dec(x_151);
x_155 = lean_array_get_size(x_152);
x_156 = lean_nat_dec_le(x_153, x_155);
if (x_156 == 0)
{
uint8_t x_157; 
lean_dec(x_153);
x_157 = lean_nat_dec_lt(x_154, x_155);
if (x_157 == 0)
{
lean_object* x_158; 
lean_dec(x_155);
lean_dec(x_154);
lean_dec(x_152);
lean_dec(x_2);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_146);
lean_ctor_set(x_158, 1, x_147);
return x_158;
}
else
{
size_t x_159; size_t x_160; lean_object* x_161; 
x_159 = lean_usize_of_nat(x_155);
lean_dec(x_155);
x_160 = lean_usize_of_nat(x_154);
lean_dec(x_154);
x_161 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__6(x_152, x_159, x_160, x_146, x_2, x_147);
lean_dec(x_152);
return x_161;
}
}
else
{
uint8_t x_162; 
lean_dec(x_155);
x_162 = lean_nat_dec_lt(x_154, x_153);
if (x_162 == 0)
{
lean_object* x_163; 
lean_dec(x_154);
lean_dec(x_153);
lean_dec(x_152);
lean_dec(x_2);
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_146);
lean_ctor_set(x_163, 1, x_147);
return x_163;
}
else
{
size_t x_164; size_t x_165; lean_object* x_166; 
x_164 = lean_usize_of_nat(x_153);
lean_dec(x_153);
x_165 = lean_usize_of_nat(x_154);
lean_dec(x_154);
x_166 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__6(x_152, x_164, x_165, x_146, x_2, x_147);
lean_dec(x_152);
return x_166;
}
}
}
}
else
{
uint8_t x_167; 
lean_dec(x_123);
lean_dec(x_2);
x_167 = !lean_is_exclusive(x_125);
if (x_167 == 0)
{
return x_125;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_125, 0);
x_169 = lean_ctor_get(x_125, 1);
lean_inc(x_169);
lean_inc(x_168);
lean_dec(x_125);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
return x_170;
}
}
}
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_11);
lean_dec(x_4);
x_171 = lean_unsigned_to_nat(1u);
x_172 = l_Lean_Syntax_getArg(x_1, x_171);
lean_dec(x_1);
x_173 = l_Lean_Syntax_getArgs(x_172);
lean_dec(x_172);
x_174 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_173);
lean_inc(x_2);
x_175 = l_Lean_Elab_Level_elabLevel(x_174, x_2, x_3);
if (lean_obj_tag(x_175) == 0)
{
uint8_t x_176; 
x_176 = !lean_is_exclusive(x_175);
if (x_176 == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; uint8_t x_187; 
x_177 = lean_ctor_get(x_175, 0);
x_178 = lean_ctor_get(x_175, 1);
x_179 = lean_array_get_size(x_173);
x_180 = lean_nat_sub(x_179, x_171);
lean_dec(x_179);
x_181 = lean_unsigned_to_nat(0u);
x_182 = l_Array_toSubarray___rarg(x_173, x_181, x_180);
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_182, 2);
lean_inc(x_184);
x_185 = lean_ctor_get(x_182, 1);
lean_inc(x_185);
lean_dec(x_182);
x_186 = lean_array_get_size(x_183);
x_187 = lean_nat_dec_le(x_184, x_186);
if (x_187 == 0)
{
uint8_t x_188; 
lean_dec(x_184);
x_188 = lean_nat_dec_lt(x_185, x_186);
if (x_188 == 0)
{
lean_dec(x_186);
lean_dec(x_185);
lean_dec(x_183);
lean_dec(x_2);
return x_175;
}
else
{
size_t x_189; size_t x_190; lean_object* x_191; 
lean_free_object(x_175);
x_189 = lean_usize_of_nat(x_186);
lean_dec(x_186);
x_190 = lean_usize_of_nat(x_185);
lean_dec(x_185);
x_191 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__7(x_183, x_189, x_190, x_177, x_2, x_178);
lean_dec(x_183);
return x_191;
}
}
else
{
uint8_t x_192; 
lean_dec(x_186);
x_192 = lean_nat_dec_lt(x_185, x_184);
if (x_192 == 0)
{
lean_dec(x_185);
lean_dec(x_184);
lean_dec(x_183);
lean_dec(x_2);
return x_175;
}
else
{
size_t x_193; size_t x_194; lean_object* x_195; 
lean_free_object(x_175);
x_193 = lean_usize_of_nat(x_184);
lean_dec(x_184);
x_194 = lean_usize_of_nat(x_185);
lean_dec(x_185);
x_195 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__7(x_183, x_193, x_194, x_177, x_2, x_178);
lean_dec(x_183);
return x_195;
}
}
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; uint8_t x_206; 
x_196 = lean_ctor_get(x_175, 0);
x_197 = lean_ctor_get(x_175, 1);
lean_inc(x_197);
lean_inc(x_196);
lean_dec(x_175);
x_198 = lean_array_get_size(x_173);
x_199 = lean_nat_sub(x_198, x_171);
lean_dec(x_198);
x_200 = lean_unsigned_to_nat(0u);
x_201 = l_Array_toSubarray___rarg(x_173, x_200, x_199);
x_202 = lean_ctor_get(x_201, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_201, 2);
lean_inc(x_203);
x_204 = lean_ctor_get(x_201, 1);
lean_inc(x_204);
lean_dec(x_201);
x_205 = lean_array_get_size(x_202);
x_206 = lean_nat_dec_le(x_203, x_205);
if (x_206 == 0)
{
uint8_t x_207; 
lean_dec(x_203);
x_207 = lean_nat_dec_lt(x_204, x_205);
if (x_207 == 0)
{
lean_object* x_208; 
lean_dec(x_205);
lean_dec(x_204);
lean_dec(x_202);
lean_dec(x_2);
x_208 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_208, 0, x_196);
lean_ctor_set(x_208, 1, x_197);
return x_208;
}
else
{
size_t x_209; size_t x_210; lean_object* x_211; 
x_209 = lean_usize_of_nat(x_205);
lean_dec(x_205);
x_210 = lean_usize_of_nat(x_204);
lean_dec(x_204);
x_211 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__7(x_202, x_209, x_210, x_196, x_2, x_197);
lean_dec(x_202);
return x_211;
}
}
else
{
uint8_t x_212; 
lean_dec(x_205);
x_212 = lean_nat_dec_lt(x_204, x_203);
if (x_212 == 0)
{
lean_object* x_213; 
lean_dec(x_204);
lean_dec(x_203);
lean_dec(x_202);
lean_dec(x_2);
x_213 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_213, 0, x_196);
lean_ctor_set(x_213, 1, x_197);
return x_213;
}
else
{
size_t x_214; size_t x_215; lean_object* x_216; 
x_214 = lean_usize_of_nat(x_203);
lean_dec(x_203);
x_215 = lean_usize_of_nat(x_204);
lean_dec(x_204);
x_216 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__7(x_202, x_214, x_215, x_196, x_2, x_197);
lean_dec(x_202);
return x_216;
}
}
}
}
else
{
uint8_t x_217; 
lean_dec(x_173);
lean_dec(x_2);
x_217 = !lean_is_exclusive(x_175);
if (x_217 == 0)
{
return x_175;
}
else
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_218 = lean_ctor_get(x_175, 0);
x_219 = lean_ctor_get(x_175, 1);
lean_inc(x_219);
lean_inc(x_218);
lean_dec(x_175);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_218);
lean_ctor_set(x_220, 1, x_219);
return x_220;
}
}
}
}
else
{
lean_object* x_221; lean_object* x_222; 
lean_dec(x_11);
lean_dec(x_4);
x_221 = lean_unsigned_to_nat(1u);
x_222 = l_Lean_Syntax_getArg(x_1, x_221);
lean_dec(x_1);
x_1 = x_222;
goto _start;
}
}
else
{
lean_object* x_224; lean_object* x_225; uint8_t x_226; lean_object* x_227; lean_object* x_228; 
x_224 = lean_ctor_get(x_2, 0);
x_225 = lean_ctor_get(x_2, 1);
x_226 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
lean_inc(x_225);
lean_inc(x_224);
lean_dec(x_2);
x_227 = l_Lean_replaceRef(x_1, x_225);
lean_dec(x_225);
x_228 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_228, 0, x_224);
lean_ctor_set(x_228, 1, x_227);
lean_ctor_set_uint8(x_228, sizeof(void*)*2, x_226);
if (x_14 == 0)
{
lean_object* x_229; lean_object* x_230; uint8_t x_231; 
x_229 = lean_mk_string("max");
lean_inc(x_11);
x_230 = lean_name_mk_string(x_11, x_229);
x_231 = lean_name_eq(x_4, x_230);
lean_dec(x_230);
if (x_231 == 0)
{
lean_object* x_232; lean_object* x_233; uint8_t x_234; 
x_232 = lean_mk_string("imax");
lean_inc(x_11);
x_233 = lean_name_mk_string(x_11, x_232);
x_234 = lean_name_eq(x_4, x_233);
lean_dec(x_233);
if (x_234 == 0)
{
lean_object* x_235; lean_object* x_236; uint8_t x_237; 
x_235 = lean_mk_string("hole");
lean_inc(x_11);
x_236 = lean_name_mk_string(x_11, x_235);
x_237 = lean_name_eq(x_4, x_236);
lean_dec(x_236);
if (x_237 == 0)
{
lean_object* x_238; uint8_t x_239; 
x_238 = l_Lean_numLitKind;
x_239 = lean_name_eq(x_4, x_238);
if (x_239 == 0)
{
lean_object* x_240; uint8_t x_241; 
x_240 = l_Lean_identKind;
x_241 = lean_name_eq(x_4, x_240);
if (x_241 == 0)
{
lean_object* x_242; lean_object* x_243; uint8_t x_244; 
x_242 = lean_mk_string("addLit");
x_243 = lean_name_mk_string(x_11, x_242);
x_244 = lean_name_eq(x_4, x_243);
lean_dec(x_243);
lean_dec(x_4);
if (x_244 == 0)
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; 
lean_dec(x_1);
x_245 = lean_mk_string("unexpected universe level syntax kind");
x_246 = l_Lean_stringToMessageData(x_245);
lean_dec(x_245);
x_247 = l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__1(x_246, x_228, x_3);
lean_dec(x_228);
return x_247;
}
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; 
x_248 = lean_unsigned_to_nat(0u);
x_249 = l_Lean_Syntax_getArg(x_1, x_248);
lean_inc(x_228);
x_250 = l_Lean_Elab_Level_elabLevel(x_249, x_228, x_3);
if (lean_obj_tag(x_250) == 0)
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_251 = lean_ctor_get(x_250, 0);
lean_inc(x_251);
x_252 = lean_ctor_get(x_250, 1);
lean_inc(x_252);
lean_dec(x_250);
x_253 = lean_unsigned_to_nat(2u);
x_254 = l_Lean_Syntax_getArg(x_1, x_253);
lean_dec(x_1);
x_255 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_238, x_254);
lean_dec(x_254);
if (lean_obj_tag(x_255) == 0)
{
lean_object* x_256; 
lean_dec(x_251);
x_256 = l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Level_elabLevel___spec__2(x_228, x_252);
lean_dec(x_228);
return x_256;
}
else
{
lean_object* x_257; lean_object* x_258; 
x_257 = lean_ctor_get(x_255, 0);
lean_inc(x_257);
lean_dec(x_255);
x_258 = l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___at_Lean_Elab_Level_elabLevel___spec__3(x_257, x_228, x_252);
lean_dec(x_228);
if (lean_obj_tag(x_258) == 0)
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_259 = lean_ctor_get(x_258, 1);
lean_inc(x_259);
if (lean_is_exclusive(x_258)) {
 lean_ctor_release(x_258, 0);
 lean_ctor_release(x_258, 1);
 x_260 = x_258;
} else {
 lean_dec_ref(x_258);
 x_260 = lean_box(0);
}
x_261 = l_Lean_Level_addOffsetAux(x_257, x_251);
if (lean_is_scalar(x_260)) {
 x_262 = lean_alloc_ctor(0, 2, 0);
} else {
 x_262 = x_260;
}
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_259);
return x_262;
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
lean_dec(x_257);
lean_dec(x_251);
x_263 = lean_ctor_get(x_258, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_258, 1);
lean_inc(x_264);
if (lean_is_exclusive(x_258)) {
 lean_ctor_release(x_258, 0);
 lean_ctor_release(x_258, 1);
 x_265 = x_258;
} else {
 lean_dec_ref(x_258);
 x_265 = lean_box(0);
}
if (lean_is_scalar(x_265)) {
 x_266 = lean_alloc_ctor(1, 2, 0);
} else {
 x_266 = x_265;
}
lean_ctor_set(x_266, 0, x_263);
lean_ctor_set(x_266, 1, x_264);
return x_266;
}
}
}
else
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; 
lean_dec(x_228);
lean_dec(x_1);
x_267 = lean_ctor_get(x_250, 0);
lean_inc(x_267);
x_268 = lean_ctor_get(x_250, 1);
lean_inc(x_268);
if (lean_is_exclusive(x_250)) {
 lean_ctor_release(x_250, 0);
 lean_ctor_release(x_250, 1);
 x_269 = x_250;
} else {
 lean_dec_ref(x_250);
 x_269 = lean_box(0);
}
if (lean_is_scalar(x_269)) {
 x_270 = lean_alloc_ctor(1, 2, 0);
} else {
 x_270 = x_269;
}
lean_ctor_set(x_270, 0, x_267);
lean_ctor_set(x_270, 1, x_268);
return x_270;
}
}
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; uint8_t x_275; 
lean_dec(x_11);
lean_dec(x_4);
x_271 = l_Lean_Syntax_getId(x_1);
lean_dec(x_1);
x_272 = lean_ctor_get(x_3, 0);
lean_inc(x_272);
x_273 = lean_ctor_get(x_3, 1);
lean_inc(x_273);
x_274 = lean_ctor_get(x_3, 2);
lean_inc(x_274);
x_275 = l_List_elem___at_Lean_NameHashSet_insert___spec__2(x_271, x_274);
if (x_275 == 0)
{
if (x_226 == 0)
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; 
lean_dec(x_274);
lean_dec(x_273);
lean_dec(x_272);
x_276 = lean_mk_string("unknown universe level '");
x_277 = l_Lean_stringToMessageData(x_276);
lean_dec(x_276);
x_278 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_278, 0, x_271);
x_279 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_279, 0, x_277);
lean_ctor_set(x_279, 1, x_278);
x_280 = lean_mk_string("'");
x_281 = l_Lean_stringToMessageData(x_280);
lean_dec(x_280);
x_282 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_282, 0, x_279);
lean_ctor_set(x_282, 1, x_281);
x_283 = l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__5(x_282, x_228, x_3);
lean_dec(x_228);
x_284 = lean_ctor_get(x_283, 0);
lean_inc(x_284);
x_285 = lean_ctor_get(x_283, 1);
lean_inc(x_285);
if (lean_is_exclusive(x_283)) {
 lean_ctor_release(x_283, 0);
 lean_ctor_release(x_283, 1);
 x_286 = x_283;
} else {
 lean_dec_ref(x_283);
 x_286 = lean_box(0);
}
if (lean_is_scalar(x_286)) {
 x_287 = lean_alloc_ctor(1, 2, 0);
} else {
 x_287 = x_286;
}
lean_ctor_set(x_287, 0, x_284);
lean_ctor_set(x_287, 1, x_285);
return x_287;
}
else
{
uint8_t x_288; 
lean_inc(x_271);
x_288 = l_Lean_Elab_isValidAutoBoundLevelName(x_271);
if (x_288 == 0)
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; 
lean_dec(x_274);
lean_dec(x_273);
lean_dec(x_272);
x_289 = lean_mk_string("unknown universe level '");
x_290 = l_Lean_stringToMessageData(x_289);
lean_dec(x_289);
x_291 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_291, 0, x_271);
x_292 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_292, 0, x_290);
lean_ctor_set(x_292, 1, x_291);
x_293 = lean_mk_string("'");
x_294 = l_Lean_stringToMessageData(x_293);
lean_dec(x_293);
x_295 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_295, 0, x_292);
lean_ctor_set(x_295, 1, x_294);
x_296 = l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__5(x_295, x_228, x_3);
lean_dec(x_228);
x_297 = lean_ctor_get(x_296, 0);
lean_inc(x_297);
x_298 = lean_ctor_get(x_296, 1);
lean_inc(x_298);
if (lean_is_exclusive(x_296)) {
 lean_ctor_release(x_296, 0);
 lean_ctor_release(x_296, 1);
 x_299 = x_296;
} else {
 lean_dec_ref(x_296);
 x_299 = lean_box(0);
}
if (lean_is_scalar(x_299)) {
 x_300 = lean_alloc_ctor(1, 2, 0);
} else {
 x_300 = x_299;
}
lean_ctor_set(x_300, 0, x_297);
lean_ctor_set(x_300, 1, x_298);
return x_300;
}
else
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; 
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 x_301 = x_3;
} else {
 lean_dec_ref(x_3);
 x_301 = lean_box(0);
}
lean_inc(x_271);
x_302 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_302, 0, x_271);
lean_ctor_set(x_302, 1, x_274);
if (lean_is_scalar(x_301)) {
 x_303 = lean_alloc_ctor(0, 3, 0);
} else {
 x_303 = x_301;
}
lean_ctor_set(x_303, 0, x_272);
lean_ctor_set(x_303, 1, x_273);
lean_ctor_set(x_303, 2, x_302);
x_304 = lean_box(0);
x_305 = l_Lean_Elab_Level_elabLevel___lambda__1(x_271, x_304, x_228, x_303);
lean_dec(x_228);
return x_305;
}
}
}
else
{
lean_object* x_306; lean_object* x_307; 
lean_dec(x_274);
lean_dec(x_273);
lean_dec(x_272);
x_306 = lean_box(0);
x_307 = l_Lean_Elab_Level_elabLevel___lambda__1(x_271, x_306, x_228, x_3);
lean_dec(x_228);
return x_307;
}
}
}
else
{
lean_object* x_308; 
lean_dec(x_11);
lean_dec(x_4);
x_308 = l___private_Init_Meta_0__Lean_Syntax_isNatLitAux(x_238, x_1);
lean_dec(x_1);
if (lean_obj_tag(x_308) == 0)
{
lean_object* x_309; 
x_309 = l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Level_elabLevel___spec__2(x_228, x_3);
lean_dec(x_228);
return x_309;
}
else
{
lean_object* x_310; lean_object* x_311; 
x_310 = lean_ctor_get(x_308, 0);
lean_inc(x_310);
lean_dec(x_308);
x_311 = l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___at_Lean_Elab_Level_elabLevel___spec__3(x_310, x_228, x_3);
lean_dec(x_228);
if (lean_obj_tag(x_311) == 0)
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; 
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
x_314 = l_Lean_Level_ofNat(x_310);
lean_dec(x_310);
if (lean_is_scalar(x_313)) {
 x_315 = lean_alloc_ctor(0, 2, 0);
} else {
 x_315 = x_313;
}
lean_ctor_set(x_315, 0, x_314);
lean_ctor_set(x_315, 1, x_312);
return x_315;
}
else
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; 
lean_dec(x_310);
x_316 = lean_ctor_get(x_311, 0);
lean_inc(x_316);
x_317 = lean_ctor_get(x_311, 1);
lean_inc(x_317);
if (lean_is_exclusive(x_311)) {
 lean_ctor_release(x_311, 0);
 lean_ctor_release(x_311, 1);
 x_318 = x_311;
} else {
 lean_dec_ref(x_311);
 x_318 = lean_box(0);
}
if (lean_is_scalar(x_318)) {
 x_319 = lean_alloc_ctor(1, 2, 0);
} else {
 x_319 = x_318;
}
lean_ctor_set(x_319, 0, x_316);
lean_ctor_set(x_319, 1, x_317);
return x_319;
}
}
}
}
else
{
lean_object* x_320; 
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_1);
x_320 = l_Lean_Elab_Level_mkFreshLevelMVar(x_228, x_3);
lean_dec(x_228);
return x_320;
}
}
else
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; 
lean_dec(x_11);
lean_dec(x_4);
x_321 = lean_unsigned_to_nat(1u);
x_322 = l_Lean_Syntax_getArg(x_1, x_321);
lean_dec(x_1);
x_323 = l_Lean_Syntax_getArgs(x_322);
lean_dec(x_322);
x_324 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_323);
lean_inc(x_228);
x_325 = l_Lean_Elab_Level_elabLevel(x_324, x_228, x_3);
if (lean_obj_tag(x_325) == 0)
{
lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; uint8_t x_337; 
x_326 = lean_ctor_get(x_325, 0);
lean_inc(x_326);
x_327 = lean_ctor_get(x_325, 1);
lean_inc(x_327);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 x_328 = x_325;
} else {
 lean_dec_ref(x_325);
 x_328 = lean_box(0);
}
x_329 = lean_array_get_size(x_323);
x_330 = lean_nat_sub(x_329, x_321);
lean_dec(x_329);
x_331 = lean_unsigned_to_nat(0u);
x_332 = l_Array_toSubarray___rarg(x_323, x_331, x_330);
x_333 = lean_ctor_get(x_332, 0);
lean_inc(x_333);
x_334 = lean_ctor_get(x_332, 2);
lean_inc(x_334);
x_335 = lean_ctor_get(x_332, 1);
lean_inc(x_335);
lean_dec(x_332);
x_336 = lean_array_get_size(x_333);
x_337 = lean_nat_dec_le(x_334, x_336);
if (x_337 == 0)
{
uint8_t x_338; 
lean_dec(x_334);
x_338 = lean_nat_dec_lt(x_335, x_336);
if (x_338 == 0)
{
lean_object* x_339; 
lean_dec(x_336);
lean_dec(x_335);
lean_dec(x_333);
lean_dec(x_228);
if (lean_is_scalar(x_328)) {
 x_339 = lean_alloc_ctor(0, 2, 0);
} else {
 x_339 = x_328;
}
lean_ctor_set(x_339, 0, x_326);
lean_ctor_set(x_339, 1, x_327);
return x_339;
}
else
{
size_t x_340; size_t x_341; lean_object* x_342; 
lean_dec(x_328);
x_340 = lean_usize_of_nat(x_336);
lean_dec(x_336);
x_341 = lean_usize_of_nat(x_335);
lean_dec(x_335);
x_342 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__6(x_333, x_340, x_341, x_326, x_228, x_327);
lean_dec(x_333);
return x_342;
}
}
else
{
uint8_t x_343; 
lean_dec(x_336);
x_343 = lean_nat_dec_lt(x_335, x_334);
if (x_343 == 0)
{
lean_object* x_344; 
lean_dec(x_335);
lean_dec(x_334);
lean_dec(x_333);
lean_dec(x_228);
if (lean_is_scalar(x_328)) {
 x_344 = lean_alloc_ctor(0, 2, 0);
} else {
 x_344 = x_328;
}
lean_ctor_set(x_344, 0, x_326);
lean_ctor_set(x_344, 1, x_327);
return x_344;
}
else
{
size_t x_345; size_t x_346; lean_object* x_347; 
lean_dec(x_328);
x_345 = lean_usize_of_nat(x_334);
lean_dec(x_334);
x_346 = lean_usize_of_nat(x_335);
lean_dec(x_335);
x_347 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__6(x_333, x_345, x_346, x_326, x_228, x_327);
lean_dec(x_333);
return x_347;
}
}
}
else
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; 
lean_dec(x_323);
lean_dec(x_228);
x_348 = lean_ctor_get(x_325, 0);
lean_inc(x_348);
x_349 = lean_ctor_get(x_325, 1);
lean_inc(x_349);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 lean_ctor_release(x_325, 1);
 x_350 = x_325;
} else {
 lean_dec_ref(x_325);
 x_350 = lean_box(0);
}
if (lean_is_scalar(x_350)) {
 x_351 = lean_alloc_ctor(1, 2, 0);
} else {
 x_351 = x_350;
}
lean_ctor_set(x_351, 0, x_348);
lean_ctor_set(x_351, 1, x_349);
return x_351;
}
}
}
else
{
lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; 
lean_dec(x_11);
lean_dec(x_4);
x_352 = lean_unsigned_to_nat(1u);
x_353 = l_Lean_Syntax_getArg(x_1, x_352);
lean_dec(x_1);
x_354 = l_Lean_Syntax_getArgs(x_353);
lean_dec(x_353);
x_355 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_354);
lean_inc(x_228);
x_356 = l_Lean_Elab_Level_elabLevel(x_355, x_228, x_3);
if (lean_obj_tag(x_356) == 0)
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; uint8_t x_368; 
x_357 = lean_ctor_get(x_356, 0);
lean_inc(x_357);
x_358 = lean_ctor_get(x_356, 1);
lean_inc(x_358);
if (lean_is_exclusive(x_356)) {
 lean_ctor_release(x_356, 0);
 lean_ctor_release(x_356, 1);
 x_359 = x_356;
} else {
 lean_dec_ref(x_356);
 x_359 = lean_box(0);
}
x_360 = lean_array_get_size(x_354);
x_361 = lean_nat_sub(x_360, x_352);
lean_dec(x_360);
x_362 = lean_unsigned_to_nat(0u);
x_363 = l_Array_toSubarray___rarg(x_354, x_362, x_361);
x_364 = lean_ctor_get(x_363, 0);
lean_inc(x_364);
x_365 = lean_ctor_get(x_363, 2);
lean_inc(x_365);
x_366 = lean_ctor_get(x_363, 1);
lean_inc(x_366);
lean_dec(x_363);
x_367 = lean_array_get_size(x_364);
x_368 = lean_nat_dec_le(x_365, x_367);
if (x_368 == 0)
{
uint8_t x_369; 
lean_dec(x_365);
x_369 = lean_nat_dec_lt(x_366, x_367);
if (x_369 == 0)
{
lean_object* x_370; 
lean_dec(x_367);
lean_dec(x_366);
lean_dec(x_364);
lean_dec(x_228);
if (lean_is_scalar(x_359)) {
 x_370 = lean_alloc_ctor(0, 2, 0);
} else {
 x_370 = x_359;
}
lean_ctor_set(x_370, 0, x_357);
lean_ctor_set(x_370, 1, x_358);
return x_370;
}
else
{
size_t x_371; size_t x_372; lean_object* x_373; 
lean_dec(x_359);
x_371 = lean_usize_of_nat(x_367);
lean_dec(x_367);
x_372 = lean_usize_of_nat(x_366);
lean_dec(x_366);
x_373 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__7(x_364, x_371, x_372, x_357, x_228, x_358);
lean_dec(x_364);
return x_373;
}
}
else
{
uint8_t x_374; 
lean_dec(x_367);
x_374 = lean_nat_dec_lt(x_366, x_365);
if (x_374 == 0)
{
lean_object* x_375; 
lean_dec(x_366);
lean_dec(x_365);
lean_dec(x_364);
lean_dec(x_228);
if (lean_is_scalar(x_359)) {
 x_375 = lean_alloc_ctor(0, 2, 0);
} else {
 x_375 = x_359;
}
lean_ctor_set(x_375, 0, x_357);
lean_ctor_set(x_375, 1, x_358);
return x_375;
}
else
{
size_t x_376; size_t x_377; lean_object* x_378; 
lean_dec(x_359);
x_376 = lean_usize_of_nat(x_365);
lean_dec(x_365);
x_377 = lean_usize_of_nat(x_366);
lean_dec(x_366);
x_378 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__7(x_364, x_376, x_377, x_357, x_228, x_358);
lean_dec(x_364);
return x_378;
}
}
}
else
{
lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; 
lean_dec(x_354);
lean_dec(x_228);
x_379 = lean_ctor_get(x_356, 0);
lean_inc(x_379);
x_380 = lean_ctor_get(x_356, 1);
lean_inc(x_380);
if (lean_is_exclusive(x_356)) {
 lean_ctor_release(x_356, 0);
 lean_ctor_release(x_356, 1);
 x_381 = x_356;
} else {
 lean_dec_ref(x_356);
 x_381 = lean_box(0);
}
if (lean_is_scalar(x_381)) {
 x_382 = lean_alloc_ctor(1, 2, 0);
} else {
 x_382 = x_381;
}
lean_ctor_set(x_382, 0, x_379);
lean_ctor_set(x_382, 1, x_380);
return x_382;
}
}
}
else
{
lean_object* x_383; lean_object* x_384; 
lean_dec(x_11);
lean_dec(x_4);
x_383 = lean_unsigned_to_nat(1u);
x_384 = l_Lean_Syntax_getArg(x_1, x_383);
lean_dec(x_1);
x_1 = x_384;
x_2 = x_228;
goto _start;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Level_elabLevel___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_throwIllFormedSyntax___at_Lean_Elab_Level_elabLevel___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__4(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___at_Lean_Elab_Level_elabLevel___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Elab_Level_0__Lean_Elab_Level_checkUniverseOffset___at_Lean_Elab_Level_elabLevel___spec__3(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_throwError___at_Lean_Elab_Level_elabLevel___spec__5(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__6(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_foldrMUnsafe_fold___at_Lean_Elab_Level_elabLevel___spec__7(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Elab_Level_elabLevel___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Level_elabLevel___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_LevelDefEq(lean_object*);
lean_object* initialize_Lean_Elab_Exception(lean_object*);
lean_object* initialize_Lean_Elab_Log(lean_object*);
lean_object* initialize_Lean_Elab_AutoBound(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Level(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LevelDefEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Exception(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Log(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_AutoBound(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Level_instMonadOptionsLevelElabM = _init_l_Lean_Elab_Level_instMonadOptionsLevelElabM();
lean_mark_persistent(l_Lean_Elab_Level_instMonadOptionsLevelElabM);
l_Lean_Elab_Level_instMonadRefLevelElabM = _init_l_Lean_Elab_Level_instMonadRefLevelElabM();
lean_mark_persistent(l_Lean_Elab_Level_instMonadRefLevelElabM);
l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM = _init_l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM();
lean_mark_persistent(l_Lean_Elab_Level_instMonadNameGeneratorLevelElabM);
res = l_Lean_Elab_Level_initFn____x40_Lean_Elab_Level___hyg_212_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Level_maxUniverseOffset = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Level_maxUniverseOffset);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
