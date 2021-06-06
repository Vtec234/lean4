// Lean compiler output
// Module: Lean.Meta.Tactic.Simp.SimpLemmas
// Imports: Init Lean.ScopedEnvExtension Lean.Util.Recognizers Lean.Meta.LevelDefEq Lean.Meta.DiscrTree Lean.Meta.AppBuilder Lean.Meta.Tactic.AuxLemma
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
lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at_Lean_Meta_addSimpLemmaEntry___spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_modifyState___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkPropExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binInsertM___at_Lean_Meta_addSimpLemmaEntry___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore_match__2(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_SimpLemma_name_x3f___default;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addSimpLemmaEntry(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_mkSimpLemmas___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_add_getName_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_addSimpLemmaEntry___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemma_getValue___boxed__const__1;
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertVal___at_Lean_Meta_addSimpLemmaEntry___spec__10(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedSimpLemmas;
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmasFromConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore_match__3___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__4(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore_match__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_mkSimpLemmas___spec__1(lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_addSimpLemma___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
uint8_t l_Array_contains___at_Lean_Meta_addSimpLemmaEntry___spec__11(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_isDeclToUnfold___boxed(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Monad_seqRight___default___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemma_getName(lean_object*);
lean_object* l_List_append___rarg(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_addSimpLemmaEntry___spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_indexOfAux___at_Lean_Meta_SimpLemmas_eraseCore___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instInhabitedDiscrTree(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_checkTypeIsProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_PersistentHashMap_getCollisionNodeSize___rarg(lean_object*);
uint8_t l_Lean_Expr_isEq(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocessProof___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSimpLemmas(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at_Lean_Meta_addSimpLemmaEntry___spec__12(lean_object*, lean_object*, size_t, size_t);
lean_object* l_Lean_throwError___at_Lean_registerTagAttribute___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_shouldPreprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__2(lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_Lean_ScopedEnvExtension_addScopedEntry___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_addSimpLemmaEntry___spec__3___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_addSimpLemma___spec__2(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_empty___at_Lean_Meta_SimpLemmas_lemmaNames___default___spec__1;
lean_object* l_List_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmasFromConst___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_openAbstractMVarsResult___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
size_t l_UInt64_toUSize(uint64_t);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_containsAtAux___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_post___default;
lean_object* l_Lean_Meta_SimpLemmas_addDeclToUnfold(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_add_getName_x3f_match__1(lean_object*);
uint8_t l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(lean_object*, lean_object*);
lean_object* l_Lean_getAttrParamOptPrio(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocessProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpLemmas(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instToFormatSimpLemma(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_insertCore___at_Lean_Meta_addSimpLemmaEntry___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_eraseCore___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_erase___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_contains___at_Lean_Meta_addSimpLemmaEntry___spec__11___boxed(lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_instInhabitedDescr___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addLocalEntry___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_isUnaryNode___rarg(lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_toUnfold___default;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_addSimpLemmaEntry___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_476__match__1(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__2___boxed(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpExtension;
lean_object* l_Lean_Meta_SimpLemmas_add_getName_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_addSimpLemmaEntry___spec__3(lean_object*, size_t, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instToMessageDataSimpLemma(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_PersistentHashMap_contains___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_erase___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_containsAux___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__2___boxed(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Name_hash(lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addSimpLemma___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_erase___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_eraseCore___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_PersistentHashMap_containsAux___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__2(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_erase___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at_Lean_Meta_addSimpLemmaEntry___spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_ConstantInfo_hasValue(lean_object*);
size_t l_USize_shiftLeft(size_t, size_t);
lean_object* l_Lean_Meta_mkAuxLemma(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addSimpLemma(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentEnvExtension___lambda__3___boxed(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_476____lambda__1(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore_match__3(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_shouldPreprocess___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_List_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmasFromConst___spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_mul(size_t, size_t);
lean_object* l_Lean_ScopedEnvExtension_add___at_Lean_Meta_addSimpLemma___spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_erased___default;
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_isLemma___boxed(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Meta_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry___spec__5(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpLemmas___rarg(lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm_match__1(lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_erase(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkPath(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addSimpLemmaEntry_updateLemmaNames_match__1(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_476_(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305_(lean_object*);
lean_object* l_Lean_EnvExtensionInterfaceUnsafe_instInhabitedExt___lambda__1(lean_object*);
lean_object* l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_addConst___spec__1(lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__3(lean_object*);
lean_object* l_Lean_Meta_instBEqSimpLemma___boxed(lean_object*, lean_object*);
lean_object* l_List_redLength___rarg(lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_lemmaNames___default;
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_DiscrTree_instInhabitedKey;
lean_object* l_Lean_Meta_SimpLemma_getName_match__1(lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_pre___default;
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_addSimpLemmaEntry___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedSimpLemma;
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_erase___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__2___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__1(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_USize_decLe(size_t, size_t);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_shouldPreprocess___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_eraseCore___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemma_getName_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_addSimpLemmaEntry___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____lambda__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_add(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_binInsertM___at_Lean_Meta_addSimpLemmaEntry___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_SimpLemmas_isDeclToUnfold(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpLemmas___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Array_eraseIdx_x27___rarg(lean_object*, lean_object*);
lean_object* l_Array_indexOfAux___at_Lean_Meta_SimpLemmas_eraseCore___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_eraseCore___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Std_PersistentHashMap_contains___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_addSimpLemmaEntry___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toArrayAux___rarg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Meta_simpExtension___lambda__1(lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSimpLemmas___boxed__const__1;
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewMCtxDepth___at___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__1(lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux___at_Lean_Meta_SimpLemmas_eraseCore___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_add___at_Lean_Meta_addSimpLemma___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___rarg(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_eraseCore(lean_object*);
lean_object* l_Std_PersistentHashMap_eraseAux___at_Lean_Meta_SimpLemmas_eraseCore___spec__2(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_addSimpLemmaEntry_updateLemmaNames_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addEntry___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_addSimpLemmaEntry___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Expr_instantiateLevelParamsCore_visit___at_Lean_Expr_instantiateLevelParamsArray___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmasFromConst(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_add_getName_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemma_getValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpExtension___lambda__1___boxed(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSimpLemmas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_erase___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_addConst(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___at_Lean_mkConstWithLevelParams___spec__1(lean_object*);
lean_object* l_Array_back___at_Lean_Meta_addSimpLemmaEntry___spec__14___boxed(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocessProof___spec__1(size_t, size_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_addConst___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Meta_addSimpLemmaEntry___spec__14(lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t l_Lean_Meta_instBEqSimpLemma(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_476__match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_addConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_insertAt___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemma_getName___boxed(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SimpLemmas_erase___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addSimpLemmaEntry_updateLemmaNames(lean_object*, lean_object*);
uint64_t l_Lean_Meta_DiscrTree_Key_hash(lean_object*);
lean_object* lean_expr_update_const(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedSimpEntry;
lean_object* l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_object*);
lean_object* l_Lean_Meta_getSimpLemmas___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__3(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_empty(lean_object*);
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_addSimpLemmaEntry___spec__7(size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_insertCore___at_Lean_Meta_addSimpLemmaEntry___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_mkCollisionNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__2(lean_object*);
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_PersistentHashMap_containsAtAux___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_fmt___at_Lean_Meta_instToMessageDataSimpLemma___spec__1(lean_object*);
uint8_t l_Lean_Meta_SimpLemmas_isLemma(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_SimpLemma_name_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpLemma() {
_start:
{
lean_object* x_1; lean_object* x_2; uint64_t x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
x_3 = lean_uint64_of_nat(x_1);
x_4 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set_uint64(x_4, sizeof(void*)*1, x_3);
x_5 = lean_box(0);
x_6 = 0;
lean_inc(x_2);
x_7 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_4);
lean_ctor_set(x_7, 3, x_1);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*5, x_6);
lean_ctor_set_uint8(x_7, sizeof(void*)*5 + 1, x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_SimpLemma_getName_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_SimpLemma_getName_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SimpLemma_getName_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SimpLemma_getName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = lean_mk_string("<unknown>");
x_5 = lean_name_mk_string(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
return x_6;
}
}
}
lean_object* l_Lean_Meta_SimpLemma_getName___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_SimpLemma_getName(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_instToFormatSimpLemma(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*5 + 1);
x_3 = l_Lean_Meta_SimpLemma_getName(x_1);
x_4 = l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(x_3);
x_5 = lean_mk_string(":");
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_7);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_mk_string("");
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
lean_inc(x_11);
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_12);
if (x_2 == 0)
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_11);
x_15 = lean_mk_string(":perm");
x_16 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
lean_object* l_Std_fmt___at_Lean_Meta_instToMessageDataSimpLemma___spec__1(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*5 + 1);
x_3 = l_Lean_Meta_SimpLemma_getName(x_1);
x_4 = l_Std_fmt___at_Lean_Level_PP_Result_format___spec__1(x_3);
x_5 = lean_mk_string(":");
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
lean_dec(x_1);
x_8 = l_Std_fmt___at_Lean_Position_instToFormatPosition___spec__1(x_7);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_mk_string("");
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
lean_inc(x_11);
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_12);
if (x_2 == 0)
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_11);
x_15 = lean_mk_string(":perm");
x_16 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_17, 0, x_13);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
lean_object* l_Lean_Meta_instToMessageDataSimpLemma(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Std_fmt___at_Lean_Meta_instToMessageDataSimpLemma___spec__1(x_1);
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
uint8_t l_Lean_Meta_instBEqSimpLemma(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 2);
x_4 = lean_ctor_get(x_2, 2);
x_5 = lean_expr_eqv(x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Meta_instBEqSimpLemma___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_instBEqSimpLemma(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_SimpLemmas_pre___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_DiscrTree_empty(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_SimpLemmas_post___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_DiscrTree_empty(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Std_PersistentHashMap_empty___at_Lean_Meta_SimpLemmas_lemmaNames___default___spec__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_SimpLemmas_lemmaNames___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Std_PersistentHashMap_empty___at_Lean_Meta_SimpLemmas_lemmaNames___default___spec__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_SimpLemmas_toUnfold___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Std_PersistentHashMap_empty___at_Lean_Meta_SimpLemmas_lemmaNames___default___spec__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_SimpLemmas_erased___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Std_PersistentHashMap_empty___at_Lean_Meta_SimpLemmas_lemmaNames___default___spec__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpLemmas() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = l_Std_PersistentHashMap_empty___at_Lean_Meta_SimpLemmas_lemmaNames___default___spec__1;
lean_inc(x_4);
x_6 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_5);
lean_ctor_set(x_6, 3, x_5);
lean_ctor_set(x_6, 4, x_5);
return x_6;
}
}
lean_object* l_Lean_Meta_addSimpLemmaEntry_updateLemmaNames_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_addSimpLemmaEntry_updateLemmaNames_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_addSimpLemmaEntry_updateLemmaNames_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__3(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = l_Lean_Name_hash(x_9);
x_12 = (size_t)x_11;
x_13 = 1;
x_14 = x_1 - x_13;
x_15 = 5;
x_16 = x_15 * x_14;
x_17 = x_12 >> x_16 % (sizeof(size_t) * 8);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_20 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__2(x_6, x_17, x_1, x_9, x_10);
x_4 = lean_box(0);
x_5 = x_19;
x_6 = x_20;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = lean_name_eq(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = x_8 << x_9 % (sizeof(size_t) * 8);
x_11 = x_10 - x_8;
x_12 = x_2 & x_11;
x_13 = lean_usize_to_nat(x_12);
x_14 = lean_array_get_size(x_7);
x_15 = lean_nat_dec_lt(x_13, x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_array_fget(x_7, x_13);
x_17 = lean_box(2);
x_18 = lean_array_fset(x_7, x_13, x_17);
switch (lean_obj_tag(x_16)) {
case 0:
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
x_22 = lean_name_eq(x_4, x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_free_object(x_16);
x_23 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_20, x_21, x_4, x_5);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_array_fset(x_18, x_13, x_24);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_26; 
lean_dec(x_21);
lean_dec(x_20);
lean_ctor_set(x_16, 1, x_5);
lean_ctor_set(x_16, 0, x_4);
x_26 = lean_array_fset(x_18, x_13, x_16);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_26);
return x_1;
}
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_16, 0);
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_16);
x_29 = lean_name_eq(x_4, x_27);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_27, x_28, x_4, x_5);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_array_fset(x_18, x_13, x_31);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_32);
return x_1;
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_28);
lean_dec(x_27);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_4);
lean_ctor_set(x_33, 1, x_5);
x_34 = lean_array_fset(x_18, x_13, x_33);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_34);
return x_1;
}
}
}
case 1:
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_16);
if (x_35 == 0)
{
lean_object* x_36; size_t x_37; size_t x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_16, 0);
x_37 = x_2 >> x_9 % (sizeof(size_t) * 8);
x_38 = x_3 + x_8;
x_39 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__2(x_36, x_37, x_38, x_4, x_5);
lean_ctor_set(x_16, 0, x_39);
x_40 = lean_array_fset(x_18, x_13, x_16);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_40);
return x_1;
}
else
{
lean_object* x_41; size_t x_42; size_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_16, 0);
lean_inc(x_41);
lean_dec(x_16);
x_42 = x_2 >> x_9 % (sizeof(size_t) * 8);
x_43 = x_3 + x_8;
x_44 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__2(x_41, x_42, x_43, x_4, x_5);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = lean_array_fset(x_18, x_13, x_45);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_46);
return x_1;
}
}
default: 
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_4);
lean_ctor_set(x_47, 1, x_5);
x_48 = lean_array_fset(x_18, x_13, x_47);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_48);
return x_1;
}
}
}
}
else
{
lean_object* x_49; size_t x_50; size_t x_51; size_t x_52; size_t x_53; size_t x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_49 = lean_ctor_get(x_1, 0);
lean_inc(x_49);
lean_dec(x_1);
x_50 = 1;
x_51 = 5;
x_52 = x_50 << x_51 % (sizeof(size_t) * 8);
x_53 = x_52 - x_50;
x_54 = x_2 & x_53;
x_55 = lean_usize_to_nat(x_54);
x_56 = lean_array_get_size(x_49);
x_57 = lean_nat_dec_lt(x_55, x_56);
lean_dec(x_56);
if (x_57 == 0)
{
lean_object* x_58; 
lean_dec(x_55);
lean_dec(x_5);
lean_dec(x_4);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_49);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_array_fget(x_49, x_55);
x_60 = lean_box(2);
x_61 = lean_array_fset(x_49, x_55, x_60);
switch (lean_obj_tag(x_59)) {
case 0:
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_62 = lean_ctor_get(x_59, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_59, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_64 = x_59;
} else {
 lean_dec_ref(x_59);
 x_64 = lean_box(0);
}
x_65 = lean_name_eq(x_4, x_62);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_64);
x_66 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_62, x_63, x_4, x_5);
x_67 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_67, 0, x_66);
x_68 = lean_array_fset(x_61, x_55, x_67);
lean_dec(x_55);
x_69 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_69, 0, x_68);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_63);
lean_dec(x_62);
if (lean_is_scalar(x_64)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_64;
}
lean_ctor_set(x_70, 0, x_4);
lean_ctor_set(x_70, 1, x_5);
x_71 = lean_array_fset(x_61, x_55, x_70);
lean_dec(x_55);
x_72 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_72, 0, x_71);
return x_72;
}
}
case 1:
{
lean_object* x_73; lean_object* x_74; size_t x_75; size_t x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_73 = lean_ctor_get(x_59, 0);
lean_inc(x_73);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 x_74 = x_59;
} else {
 lean_dec_ref(x_59);
 x_74 = lean_box(0);
}
x_75 = x_2 >> x_51 % (sizeof(size_t) * 8);
x_76 = x_3 + x_50;
x_77 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__2(x_73, x_75, x_76, x_4, x_5);
if (lean_is_scalar(x_74)) {
 x_78 = lean_alloc_ctor(1, 1, 0);
} else {
 x_78 = x_74;
}
lean_ctor_set(x_78, 0, x_77);
x_79 = lean_array_fset(x_61, x_55, x_78);
lean_dec(x_55);
x_80 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_80, 0, x_79);
return x_80;
}
default: 
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_4);
lean_ctor_set(x_81, 1, x_5);
x_82 = lean_array_fset(x_61, x_55, x_81);
lean_dec(x_55);
x_83 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_83, 0, x_82);
return x_83;
}
}
}
}
}
else
{
uint8_t x_84; 
x_84 = !lean_is_exclusive(x_1);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; size_t x_87; uint8_t x_88; 
x_85 = lean_unsigned_to_nat(0u);
x_86 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__4(x_1, x_85, x_4, x_5);
x_87 = 7;
x_88 = x_87 <= x_3;
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_89 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_86);
x_90 = lean_unsigned_to_nat(4u);
x_91 = lean_nat_dec_lt(x_89, x_90);
lean_dec(x_89);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_92 = lean_ctor_get(x_86, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_86, 1);
lean_inc(x_93);
lean_dec(x_86);
x_94 = l_Std_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
x_95 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__3(x_3, x_92, x_93, lean_box(0), x_85, x_94);
lean_dec(x_93);
lean_dec(x_92);
return x_95;
}
else
{
return x_86;
}
}
else
{
return x_86;
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; size_t x_101; uint8_t x_102; 
x_96 = lean_ctor_get(x_1, 0);
x_97 = lean_ctor_get(x_1, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_1);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_unsigned_to_nat(0u);
x_100 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__4(x_98, x_99, x_4, x_5);
x_101 = 7;
x_102 = x_101 <= x_3;
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; uint8_t x_105; 
x_103 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_100);
x_104 = lean_unsigned_to_nat(4u);
x_105 = lean_nat_dec_lt(x_103, x_104);
lean_dec(x_103);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_106 = lean_ctor_get(x_100, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_100, 1);
lean_inc(x_107);
lean_dec(x_100);
x_108 = l_Std_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
x_109 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__3(x_3, x_106, x_107, lean_box(0), x_99, x_108);
lean_dec(x_107);
lean_dec(x_106);
return x_109;
}
else
{
return x_100;
}
}
else
{
return x_100;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Name_hash(x_2);
x_8 = (size_t)x_7;
x_9 = 1;
x_10 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__2(x_5, x_8, x_9, x_2, x_3);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_6, x_11);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_12);
lean_ctor_set(x_1, 0, x_10);
return x_1;
}
else
{
lean_object* x_13; lean_object* x_14; uint64_t x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_1);
x_15 = l_Lean_Name_hash(x_2);
x_16 = (size_t)x_15;
x_17 = 1;
x_18 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__2(x_13, x_16, x_17, x_2, x_3);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_14, x_19);
lean_dec(x_14);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
lean_object* l_Lean_Meta_addSimpLemmaEntry_updateLemmaNames(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_1, 4);
lean_inc(x_3);
lean_dec(x_1);
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__1(x_2, x_4, x_5);
return x_6;
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__3(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__2(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_addSimpLemmaEntry___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_4);
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_array_fget(x_2, x_4);
lean_dec(x_4);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_addSimpLemmaEntry___spec__3(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 1;
x_6 = 5;
x_7 = x_5 << x_6 % (sizeof(size_t) * 8);
x_8 = x_7 - x_5;
x_9 = x_2 & x_8;
x_10 = lean_usize_to_nat(x_9);
x_11 = lean_box(2);
x_12 = lean_array_get(x_11, x_4, x_10);
lean_dec(x_10);
lean_dec(x_4);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_3, x_13);
lean_dec(x_13);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_14);
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_14);
return x_17;
}
}
case 1:
{
lean_object* x_18; size_t x_19; 
x_18 = lean_ctor_get(x_12, 0);
lean_inc(x_18);
lean_dec(x_12);
x_19 = x_2 >> x_6 % (sizeof(size_t) * 8);
x_1 = x_18;
x_2 = x_19;
goto _start;
}
default: 
{
lean_object* x_21; 
x_21 = lean_box(0);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_addSimpLemmaEntry___spec__4(x_22, x_23, lean_box(0), x_24, x_3);
lean_dec(x_23);
lean_dec(x_22);
return x_25;
}
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_addSimpLemmaEntry___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint64_t x_4; size_t x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_5 = (size_t)x_4;
x_6 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_addSimpLemmaEntry___spec__3(x_3, x_5, x_2);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_addSimpLemmaEntry___spec__7(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_dec(x_5);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; uint64_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_9 = lean_array_fget(x_2, x_5);
x_10 = lean_array_fget(x_3, x_5);
x_11 = l_Lean_Meta_DiscrTree_Key_hash(x_9);
x_12 = (size_t)x_11;
x_13 = 1;
x_14 = x_1 - x_13;
x_15 = 5;
x_16 = x_15 * x_14;
x_17 = x_12 >> x_16 % (sizeof(size_t) * 8);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_20 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__6(x_6, x_17, x_1, x_9, x_10);
x_4 = lean_box(0);
x_5 = x_19;
x_6 = x_20;
goto _start;
}
}
}
lean_object* l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_addSimpLemmaEntry___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_5);
x_8 = lean_nat_dec_lt(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 1);
lean_dec(x_10);
x_11 = lean_ctor_get(x_1, 0);
lean_dec(x_11);
x_12 = lean_array_push(x_5, x_3);
x_13 = lean_array_push(x_6, x_4);
lean_ctor_set(x_1, 1, x_13);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_14 = lean_array_push(x_5, x_3);
x_15 = lean_array_push(x_6, x_4);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_fget(x_5, x_2);
x_18 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_3, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
lean_dec(x_2);
x_2 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_1, 1);
lean_dec(x_23);
x_24 = lean_ctor_get(x_1, 0);
lean_dec(x_24);
x_25 = lean_array_fset(x_5, x_2, x_3);
x_26 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_26);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_27 = lean_array_fset(x_5, x_2, x_3);
x_28 = lean_array_fset(x_6, x_2, x_4);
lean_dec(x_2);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__6(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; size_t x_8; size_t x_9; size_t x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = 1;
x_9 = 5;
x_10 = x_8 << x_9 % (sizeof(size_t) * 8);
x_11 = x_10 - x_8;
x_12 = x_2 & x_11;
x_13 = lean_usize_to_nat(x_12);
x_14 = lean_array_get_size(x_7);
x_15 = lean_nat_dec_lt(x_13, x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_dec(x_13);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_array_fget(x_7, x_13);
x_17 = lean_box(2);
x_18 = lean_array_fset(x_7, x_13, x_17);
switch (lean_obj_tag(x_16)) {
case 0:
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_16, 0);
x_21 = lean_ctor_get(x_16, 1);
x_22 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_4, x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_free_object(x_16);
x_23 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_20, x_21, x_4, x_5);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_array_fset(x_18, x_13, x_24);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_25);
return x_1;
}
else
{
lean_object* x_26; 
lean_dec(x_21);
lean_dec(x_20);
lean_ctor_set(x_16, 1, x_5);
lean_ctor_set(x_16, 0, x_4);
x_26 = lean_array_fset(x_18, x_13, x_16);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_26);
return x_1;
}
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_16, 0);
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_16);
x_29 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_4, x_27);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_27, x_28, x_4, x_5);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_array_fset(x_18, x_13, x_31);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_32);
return x_1;
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_28);
lean_dec(x_27);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_4);
lean_ctor_set(x_33, 1, x_5);
x_34 = lean_array_fset(x_18, x_13, x_33);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_34);
return x_1;
}
}
}
case 1:
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_16);
if (x_35 == 0)
{
lean_object* x_36; size_t x_37; size_t x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_16, 0);
x_37 = x_2 >> x_9 % (sizeof(size_t) * 8);
x_38 = x_3 + x_8;
x_39 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__6(x_36, x_37, x_38, x_4, x_5);
lean_ctor_set(x_16, 0, x_39);
x_40 = lean_array_fset(x_18, x_13, x_16);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_40);
return x_1;
}
else
{
lean_object* x_41; size_t x_42; size_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_16, 0);
lean_inc(x_41);
lean_dec(x_16);
x_42 = x_2 >> x_9 % (sizeof(size_t) * 8);
x_43 = x_3 + x_8;
x_44 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__6(x_41, x_42, x_43, x_4, x_5);
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = lean_array_fset(x_18, x_13, x_45);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_46);
return x_1;
}
}
default: 
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_4);
lean_ctor_set(x_47, 1, x_5);
x_48 = lean_array_fset(x_18, x_13, x_47);
lean_dec(x_13);
lean_ctor_set(x_1, 0, x_48);
return x_1;
}
}
}
}
else
{
lean_object* x_49; size_t x_50; size_t x_51; size_t x_52; size_t x_53; size_t x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_49 = lean_ctor_get(x_1, 0);
lean_inc(x_49);
lean_dec(x_1);
x_50 = 1;
x_51 = 5;
x_52 = x_50 << x_51 % (sizeof(size_t) * 8);
x_53 = x_52 - x_50;
x_54 = x_2 & x_53;
x_55 = lean_usize_to_nat(x_54);
x_56 = lean_array_get_size(x_49);
x_57 = lean_nat_dec_lt(x_55, x_56);
lean_dec(x_56);
if (x_57 == 0)
{
lean_object* x_58; 
lean_dec(x_55);
lean_dec(x_5);
lean_dec(x_4);
x_58 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_58, 0, x_49);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_array_fget(x_49, x_55);
x_60 = lean_box(2);
x_61 = lean_array_fset(x_49, x_55, x_60);
switch (lean_obj_tag(x_59)) {
case 0:
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_62 = lean_ctor_get(x_59, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_59, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_64 = x_59;
} else {
 lean_dec_ref(x_59);
 x_64 = lean_box(0);
}
x_65 = l___private_Lean_Meta_DiscrTreeTypes_0__Lean_Meta_DiscrTree_beqKey____x40_Lean_Meta_DiscrTreeTypes___hyg_73_(x_4, x_62);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_64);
x_66 = l_Std_PersistentHashMap_mkCollisionNode___rarg(x_62, x_63, x_4, x_5);
x_67 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_67, 0, x_66);
x_68 = lean_array_fset(x_61, x_55, x_67);
lean_dec(x_55);
x_69 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_69, 0, x_68);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_63);
lean_dec(x_62);
if (lean_is_scalar(x_64)) {
 x_70 = lean_alloc_ctor(0, 2, 0);
} else {
 x_70 = x_64;
}
lean_ctor_set(x_70, 0, x_4);
lean_ctor_set(x_70, 1, x_5);
x_71 = lean_array_fset(x_61, x_55, x_70);
lean_dec(x_55);
x_72 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_72, 0, x_71);
return x_72;
}
}
case 1:
{
lean_object* x_73; lean_object* x_74; size_t x_75; size_t x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_73 = lean_ctor_get(x_59, 0);
lean_inc(x_73);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 x_74 = x_59;
} else {
 lean_dec_ref(x_59);
 x_74 = lean_box(0);
}
x_75 = x_2 >> x_51 % (sizeof(size_t) * 8);
x_76 = x_3 + x_50;
x_77 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__6(x_73, x_75, x_76, x_4, x_5);
if (lean_is_scalar(x_74)) {
 x_78 = lean_alloc_ctor(1, 1, 0);
} else {
 x_78 = x_74;
}
lean_ctor_set(x_78, 0, x_77);
x_79 = lean_array_fset(x_61, x_55, x_78);
lean_dec(x_55);
x_80 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_80, 0, x_79);
return x_80;
}
default: 
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_4);
lean_ctor_set(x_81, 1, x_5);
x_82 = lean_array_fset(x_61, x_55, x_81);
lean_dec(x_55);
x_83 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_83, 0, x_82);
return x_83;
}
}
}
}
}
else
{
uint8_t x_84; 
x_84 = !lean_is_exclusive(x_1);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; size_t x_87; uint8_t x_88; 
x_85 = lean_unsigned_to_nat(0u);
x_86 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_addSimpLemmaEntry___spec__8(x_1, x_85, x_4, x_5);
x_87 = 7;
x_88 = x_87 <= x_3;
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_89 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_86);
x_90 = lean_unsigned_to_nat(4u);
x_91 = lean_nat_dec_lt(x_89, x_90);
lean_dec(x_89);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_92 = lean_ctor_get(x_86, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_86, 1);
lean_inc(x_93);
lean_dec(x_86);
x_94 = l_Std_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
x_95 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_addSimpLemmaEntry___spec__7(x_3, x_92, x_93, lean_box(0), x_85, x_94);
lean_dec(x_93);
lean_dec(x_92);
return x_95;
}
else
{
return x_86;
}
}
else
{
return x_86;
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; size_t x_101; uint8_t x_102; 
x_96 = lean_ctor_get(x_1, 0);
x_97 = lean_ctor_get(x_1, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_1);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_unsigned_to_nat(0u);
x_100 = l_Std_PersistentHashMap_insertAtCollisionNodeAux___at_Lean_Meta_addSimpLemmaEntry___spec__8(x_98, x_99, x_4, x_5);
x_101 = 7;
x_102 = x_101 <= x_3;
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; uint8_t x_105; 
x_103 = l_Std_PersistentHashMap_getCollisionNodeSize___rarg(x_100);
x_104 = lean_unsigned_to_nat(4u);
x_105 = lean_nat_dec_lt(x_103, x_104);
lean_dec(x_103);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_106 = lean_ctor_get(x_100, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_100, 1);
lean_inc(x_107);
lean_dec(x_100);
x_108 = l_Std_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
x_109 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_addSimpLemmaEntry___spec__7(x_3, x_106, x_107, lean_box(0), x_99, x_108);
lean_dec(x_107);
lean_dec(x_106);
return x_109;
}
else
{
return x_100;
}
}
else
{
return x_100;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_8 = (size_t)x_7;
x_9 = 1;
x_10 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__6(x_5, x_8, x_9, x_2, x_3);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_6, x_11);
lean_dec(x_6);
lean_ctor_set(x_1, 1, x_12);
lean_ctor_set(x_1, 0, x_10);
return x_1;
}
else
{
lean_object* x_13; lean_object* x_14; uint64_t x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_1);
x_15 = l_Lean_Meta_DiscrTree_Key_hash(x_2);
x_16 = (size_t)x_15;
x_17 = 1;
x_18 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__6(x_13, x_16, x_17, x_2, x_3);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_14, x_19);
lean_dec(x_14);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
uint8_t l_Array_anyMUnsafe_any___at_Lean_Meta_addSimpLemmaEntry___spec__12(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 == x_4;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_array_uget(x_2, x_3);
x_7 = lean_ctor_get(x_1, 2);
x_8 = lean_ctor_get(x_6, 2);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_expr_eqv(x_7, x_8);
lean_dec(x_8);
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
uint8_t l_Array_contains___at_Lean_Meta_addSimpLemmaEntry___spec__11(lean_object* x_1, lean_object* x_2) {
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
x_11 = l_Array_anyMUnsafe_any___at_Lean_Meta_addSimpLemmaEntry___spec__12(x_2, x_1, x_9, x_10);
return x_11;
}
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertVal___at_Lean_Meta_addSimpLemmaEntry___spec__10(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Array_contains___at_Lean_Meta_addSimpLemmaEntry___spec__11(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; 
x_4 = lean_array_push(x_1, x_2);
return x_4;
}
else
{
lean_dec(x_2);
return x_1;
}
}
}
lean_object* l_Array_back___at_Lean_Meta_addSimpLemmaEntry___spec__14(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_3 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
x_5 = lean_array_get_size(x_1);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_5, x_6);
lean_dec(x_5);
x_8 = lean_array_get(x_4, x_1, x_7);
lean_dec(x_7);
return x_8;
}
}
lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at_Lean_Meta_addSimpLemmaEntry___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_9 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_10 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_nat_add(x_7, x_8);
x_13 = lean_unsigned_to_nat(2u);
x_14 = lean_nat_div(x_12, x_13);
lean_dec(x_12);
x_15 = lean_array_get(x_11, x_5, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_6, 0);
x_18 = l_Lean_Meta_DiscrTree_Key_lt(x_16, x_17);
if (x_18 == 0)
{
uint8_t x_19; 
lean_dec(x_8);
x_19 = l_Lean_Meta_DiscrTree_Key_lt(x_17, x_16);
lean_dec(x_16);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
lean_dec(x_7);
x_20 = lean_array_get_size(x_5);
x_21 = lean_nat_dec_lt(x_14, x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_22 = lean_array_fget(x_5, x_14);
x_23 = lean_box(0);
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_mk_empty_array_with_capacity(x_24);
lean_inc(x_26);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_array_fset(x_5, x_14, x_28);
x_30 = !lean_is_exclusive(x_22);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_ctor_get(x_22, 1);
x_32 = lean_ctor_get(x_22, 0);
lean_dec(x_32);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_3, x_33);
x_35 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__9(x_1, x_2, x_34, x_31);
lean_dec(x_34);
lean_ctor_set(x_22, 1, x_35);
lean_ctor_set(x_22, 0, x_4);
x_36 = lean_array_fset(x_29, x_14, x_22);
lean_dec(x_14);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_37 = lean_ctor_get(x_22, 1);
lean_inc(x_37);
lean_dec(x_22);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_3, x_38);
x_40 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__9(x_1, x_2, x_39, x_37);
lean_dec(x_39);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_4);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_array_fset(x_29, x_14, x_41);
lean_dec(x_14);
return x_42;
}
}
}
else
{
x_8 = x_14;
goto _start;
}
}
else
{
uint8_t x_44; 
lean_dec(x_16);
x_44 = lean_nat_dec_eq(x_14, x_7);
if (x_44 == 0)
{
lean_dec(x_7);
x_7 = x_14;
goto _start;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_14);
lean_dec(x_8);
x_46 = lean_unsigned_to_nat(1u);
x_47 = lean_nat_add(x_3, x_46);
x_48 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg(x_1, x_2, x_47);
lean_dec(x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_4);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_nat_add(x_7, x_46);
lean_dec(x_7);
x_51 = l_Array_insertAt___rarg(x_5, x_50, x_49);
lean_dec(x_50);
return x_51;
}
}
}
}
lean_object* l_Array_binInsertM___at_Lean_Meta_addSimpLemmaEntry___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = l_Lean_Meta_DiscrTree_instInhabitedTrie(lean_box(0));
x_8 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
x_10 = l_Array_isEmpty___rarg(x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_get(x_9, x_5, x_11);
x_13 = lean_ctor_get(x_6, 0);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Meta_DiscrTree_Key_lt(x_13, x_14);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = l_Lean_Meta_DiscrTree_Key_lt(x_14, x_13);
lean_dec(x_14);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_array_get_size(x_5);
x_18 = lean_nat_dec_lt(x_11, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_19 = lean_array_fget(x_5, x_11);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_11);
x_22 = lean_mk_empty_array_with_capacity(x_11);
lean_inc(x_22);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_array_fset(x_5, x_11, x_24);
x_26 = !lean_is_exclusive(x_19);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_19, 1);
x_28 = lean_ctor_get(x_19, 0);
lean_dec(x_28);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_3, x_29);
x_31 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__9(x_1, x_2, x_30, x_27);
lean_dec(x_30);
lean_ctor_set(x_19, 1, x_31);
lean_ctor_set(x_19, 0, x_4);
x_32 = lean_array_fset(x_25, x_11, x_19);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_19, 1);
lean_inc(x_33);
lean_dec(x_19);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_3, x_34);
x_36 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__9(x_1, x_2, x_35, x_33);
lean_dec(x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_4);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_array_fset(x_25, x_11, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_39 = l_Array_back___at_Lean_Meta_addSimpLemmaEntry___spec__14(x_5);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
lean_dec(x_39);
x_41 = l_Lean_Meta_DiscrTree_Key_lt(x_40, x_13);
if (x_41 == 0)
{
uint8_t x_42; 
x_42 = l_Lean_Meta_DiscrTree_Key_lt(x_13, x_40);
lean_dec(x_40);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_43 = lean_array_get_size(x_5);
x_44 = lean_unsigned_to_nat(1u);
x_45 = lean_nat_sub(x_43, x_44);
x_46 = lean_nat_dec_lt(x_45, x_43);
lean_dec(x_43);
if (x_46 == 0)
{
lean_dec(x_45);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_47 = lean_array_fget(x_5, x_45);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_11);
x_50 = lean_mk_empty_array_with_capacity(x_11);
lean_inc(x_50);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_49);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_array_fset(x_5, x_45, x_52);
x_54 = !lean_is_exclusive(x_47);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_55 = lean_ctor_get(x_47, 1);
x_56 = lean_ctor_get(x_47, 0);
lean_dec(x_56);
x_57 = lean_nat_add(x_3, x_44);
x_58 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__9(x_1, x_2, x_57, x_55);
lean_dec(x_57);
lean_ctor_set(x_47, 1, x_58);
lean_ctor_set(x_47, 0, x_4);
x_59 = lean_array_fset(x_53, x_45, x_47);
lean_dec(x_45);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_60 = lean_ctor_get(x_47, 1);
lean_inc(x_60);
lean_dec(x_47);
x_61 = lean_nat_add(x_3, x_44);
x_62 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__9(x_1, x_2, x_61, x_60);
lean_dec(x_61);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_4);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_array_fset(x_53, x_45, x_63);
lean_dec(x_45);
return x_64;
}
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_array_get_size(x_5);
x_66 = lean_unsigned_to_nat(1u);
x_67 = lean_nat_sub(x_65, x_66);
lean_dec(x_65);
x_68 = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at_Lean_Meta_addSimpLemmaEntry___spec__15(x_1, x_2, x_3, x_4, x_5, x_6, x_11, x_67);
return x_68;
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_40);
x_69 = lean_unsigned_to_nat(1u);
x_70 = lean_nat_add(x_3, x_69);
x_71 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg(x_1, x_2, x_70);
lean_dec(x_70);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_4);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_array_push(x_5, x_72);
return x_73;
}
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_14);
x_74 = lean_unsigned_to_nat(1u);
x_75 = lean_nat_add(x_3, x_74);
x_76 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg(x_1, x_2, x_75);
lean_dec(x_75);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_4);
lean_ctor_set(x_77, 1, x_76);
x_78 = l_Array_insertAt___rarg(x_5, x_11, x_77);
return x_78;
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_9);
x_79 = lean_unsigned_to_nat(1u);
x_80 = lean_nat_add(x_3, x_79);
x_81 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg(x_1, x_2, x_80);
lean_dec(x_80);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_4);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_array_push(x_5, x_82);
return x_83;
}
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_array_get_size(x_1);
x_9 = lean_nat_dec_lt(x_3, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertVal___at_Lean_Meta_addSimpLemmaEntry___spec__10(x_6, x_2);
lean_ctor_set(x_4, 0, x_10);
return x_4;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_array_fget(x_1, x_3);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_mk_empty_array_with_capacity(x_12);
lean_inc(x_13);
lean_ctor_set(x_4, 1, x_13);
lean_ctor_set(x_4, 0, x_13);
lean_inc(x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_4);
x_15 = l_Array_binInsertM___at_Lean_Meta_addSimpLemmaEntry___spec__13(x_1, x_2, x_3, x_11, x_7, x_14);
lean_dec(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_6);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_4, 0);
x_18 = lean_ctor_get(x_4, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_4);
x_19 = lean_array_get_size(x_1);
x_20 = lean_nat_dec_lt(x_3, x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertVal___at_Lean_Meta_addSimpLemmaEntry___spec__10(x_17, x_2);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_23 = lean_array_fget(x_1, x_3);
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_mk_empty_array_with_capacity(x_24);
lean_inc(x_25);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_25);
lean_inc(x_23);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_23);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Array_binInsertM___at_Lean_Meta_addSimpLemmaEntry___spec__13(x_1, x_2, x_3, x_23, x_18, x_27);
lean_dec(x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_17);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_Lean_Meta_DiscrTree_insertCore___at_Lean_Meta_addSimpLemmaEntry___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Array_isEmpty___rarg(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = l_Lean_Meta_DiscrTree_instInhabitedKey;
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_get(x_5, x_2, x_6);
lean_inc(x_1);
x_8 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_addSimpLemmaEntry___spec__2(x_1, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_createNodes___rarg(x_2, x_3, x_9);
x_11 = l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry___spec__5(x_1, x_7, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_unsigned_to_nat(1u);
x_14 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__9(x_2, x_3, x_13, x_12);
x_15 = l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry___spec__5(x_1, x_7, x_14);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_3);
lean_dec(x_1);
x_16 = l_Lean_Meta_DiscrTree_instInhabitedDiscrTree(lean_box(0));
x_17 = lean_mk_string("Lean.Meta.DiscrTree");
x_18 = lean_mk_string("Lean.Meta.DiscrTree.insertCore");
x_19 = lean_unsigned_to_nat(310u);
x_20 = lean_unsigned_to_nat(23u);
x_21 = lean_mk_string("invalid key sequence");
x_22 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_17, x_18, x_19, x_20, x_21);
lean_dec(x_21);
lean_dec(x_18);
lean_dec(x_17);
x_23 = lean_panic_fn(x_16, x_22);
return x_23;
}
}
}
lean_object* l_Lean_Meta_addSimpLemmaEntry(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_ctor_get_uint8(x_2, sizeof(void*)*5);
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 2);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_inc(x_2);
x_8 = l_Lean_Meta_DiscrTree_insertCore___at_Lean_Meta_addSimpLemmaEntry___spec__1(x_5, x_7, x_2);
lean_dec(x_7);
x_9 = l_Lean_Meta_addSimpLemmaEntry_updateLemmaNames(x_2, x_6);
lean_ctor_set(x_1, 2, x_9);
lean_ctor_set(x_1, 0, x_8);
return x_1;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_ctor_get(x_1, 2);
x_13 = lean_ctor_get(x_1, 3);
x_14 = lean_ctor_get(x_1, 4);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
lean_inc(x_2);
x_16 = l_Lean_Meta_DiscrTree_insertCore___at_Lean_Meta_addSimpLemmaEntry___spec__1(x_10, x_15, x_2);
lean_dec(x_15);
x_17 = l_Lean_Meta_addSimpLemmaEntry_updateLemmaNames(x_2, x_12);
x_18 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_11);
lean_ctor_set(x_18, 2, x_17);
lean_ctor_set(x_18, 3, x_13);
lean_ctor_set(x_18, 4, x_14);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_1);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_1, 1);
x_21 = lean_ctor_get(x_1, 2);
x_22 = lean_ctor_get(x_2, 0);
lean_inc(x_22);
lean_inc(x_2);
x_23 = l_Lean_Meta_DiscrTree_insertCore___at_Lean_Meta_addSimpLemmaEntry___spec__1(x_20, x_22, x_2);
lean_dec(x_22);
x_24 = l_Lean_Meta_addSimpLemmaEntry_updateLemmaNames(x_2, x_21);
lean_ctor_set(x_1, 2, x_24);
lean_ctor_set(x_1, 1, x_23);
return x_1;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_25 = lean_ctor_get(x_1, 0);
x_26 = lean_ctor_get(x_1, 1);
x_27 = lean_ctor_get(x_1, 2);
x_28 = lean_ctor_get(x_1, 3);
x_29 = lean_ctor_get(x_1, 4);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_1);
x_30 = lean_ctor_get(x_2, 0);
lean_inc(x_30);
lean_inc(x_2);
x_31 = l_Lean_Meta_DiscrTree_insertCore___at_Lean_Meta_addSimpLemmaEntry___spec__1(x_26, x_30, x_2);
lean_dec(x_30);
x_32 = l_Lean_Meta_addSimpLemmaEntry_updateLemmaNames(x_2, x_27);
x_33 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_33, 0, x_25);
lean_ctor_set(x_33, 1, x_31);
lean_ctor_set(x_33, 2, x_32);
lean_ctor_set(x_33, 3, x_28);
lean_ctor_set(x_33, 4, x_29);
return x_33;
}
}
}
}
lean_object* l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_addSimpLemmaEntry___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_PersistentHashMap_findAtAux___at_Lean_Meta_addSimpLemmaEntry___spec__4(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_findAux___at_Lean_Meta_addSimpLemmaEntry___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_findAux___at_Lean_Meta_addSimpLemmaEntry___spec__3(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_addSimpLemmaEntry___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_find_x3f___at_Lean_Meta_addSimpLemmaEntry___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_addSimpLemmaEntry___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; lean_object* x_8; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = l_Std_PersistentHashMap_insertAux_traverse___at_Lean_Meta_addSimpLemmaEntry___spec__7(x_7, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Std_PersistentHashMap_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__6(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Meta_addSimpLemmaEntry___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; uint8_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_7 = l_Array_anyMUnsafe_any___at_Lean_Meta_addSimpLemmaEntry___spec__12(x_1, x_2, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l_Array_contains___at_Lean_Meta_addSimpLemmaEntry___spec__11___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_contains___at_Lean_Meta_addSimpLemmaEntry___spec__11(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_back___at_Lean_Meta_addSimpLemmaEntry___spec__14___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_back___at_Lean_Meta_addSimpLemmaEntry___spec__14(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at_Lean_Meta_addSimpLemmaEntry___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at_Lean_Meta_addSimpLemmaEntry___spec__15(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_binInsertM___at_Lean_Meta_addSimpLemmaEntry___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_binInsertM___at_Lean_Meta_addSimpLemmaEntry___spec__13(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Meta_DiscrTree_0__Lean_Meta_DiscrTree_insertAux___at_Lean_Meta_addSimpLemmaEntry___spec__9(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Meta_DiscrTree_insertCore___at_Lean_Meta_addSimpLemmaEntry___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_DiscrTree_insertCore___at_Lean_Meta_addSimpLemmaEntry___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_SimpLemmas_addDeclToUnfold(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 3);
x_5 = lean_box(0);
x_6 = l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__1(x_4, x_2, x_5);
lean_ctor_set(x_1, 3, x_6);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
x_9 = lean_ctor_get(x_1, 2);
x_10 = lean_ctor_get(x_1, 3);
x_11 = lean_ctor_get(x_1, 4);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__1(x_10, x_2, x_12);
x_14 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_8);
lean_ctor_set(x_14, 2, x_9);
lean_ctor_set(x_14, 3, x_13);
lean_ctor_set(x_14, 4, x_11);
return x_14;
}
}
}
uint8_t l_Std_PersistentHashMap_containsAtAux___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_1);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_4);
x_8 = 0;
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_fget(x_1, x_4);
x_10 = lean_name_eq(x_5, x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_4, x_11);
lean_dec(x_4);
x_3 = lean_box(0);
x_4 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_4);
x_14 = 1;
return x_14;
}
}
}
}
uint8_t l_Std_PersistentHashMap_containsAux___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 1;
x_6 = 5;
x_7 = x_5 << x_6 % (sizeof(size_t) * 8);
x_8 = x_7 - x_5;
x_9 = x_2 & x_8;
x_10 = lean_usize_to_nat(x_9);
x_11 = lean_box(2);
x_12 = lean_array_get(x_11, x_4, x_10);
lean_dec(x_10);
lean_dec(x_4);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_name_eq(x_3, x_13);
lean_dec(x_13);
return x_14;
}
case 1:
{
lean_object* x_15; size_t x_16; 
x_15 = lean_ctor_get(x_12, 0);
lean_inc(x_15);
lean_dec(x_12);
x_16 = x_2 >> x_6 % (sizeof(size_t) * 8);
x_1 = x_15;
x_2 = x_16;
goto _start;
}
default: 
{
uint8_t x_18; 
x_18 = 0;
return x_18;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Std_PersistentHashMap_containsAtAux___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__3(x_19, x_20, lean_box(0), x_21, x_3);
lean_dec(x_20);
lean_dec(x_19);
return x_22;
}
}
}
uint8_t l_Std_PersistentHashMap_contains___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint64_t x_4; size_t x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_Name_hash(x_2);
x_5 = (size_t)x_4;
x_6 = l_Std_PersistentHashMap_containsAux___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__2(x_3, x_5, x_2);
return x_6;
}
}
uint8_t l_Lean_Meta_SimpLemmas_isDeclToUnfold(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Std_PersistentHashMap_contains___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_containsAtAux___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Std_PersistentHashMap_containsAtAux___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Std_PersistentHashMap_containsAux___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_containsAux___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Std_PersistentHashMap_contains___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_PersistentHashMap_contains___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__1(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_SimpLemmas_isDeclToUnfold___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_SimpLemmas_isDeclToUnfold(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_Meta_SimpLemmas_isLemma(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 2);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Std_PersistentHashMap_contains___at_Lean_Meta_SimpLemmas_isDeclToUnfold___spec__1(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Meta_SimpLemmas_isLemma___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_SimpLemmas_isLemma(x_1, x_2);
lean_dec(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_indexOfAux___at_Lean_Meta_SimpLemmas_eraseCore___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_1, x_3);
x_8 = lean_name_eq(x_7, x_2);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_3);
return x_12;
}
}
}
}
lean_object* l_Std_PersistentHashMap_eraseAux___at_Lean_Meta_SimpLemmas_eraseCore___spec__2(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; size_t x_5; size_t x_6; size_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = 1;
x_6 = 5;
x_7 = x_5 << x_6 % (sizeof(size_t) * 8);
x_8 = x_7 - x_5;
x_9 = x_2 & x_8;
x_10 = lean_usize_to_nat(x_9);
x_11 = lean_box(2);
x_12 = lean_array_get(x_11, x_4, x_10);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_name_eq(x_3, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
uint8_t x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_10);
lean_dec(x_4);
x_15 = 0;
x_16 = lean_box(x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_1);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_1, 0);
lean_dec(x_19);
x_20 = lean_array_set(x_4, x_10, x_11);
lean_dec(x_10);
lean_ctor_set(x_1, 0, x_20);
x_21 = 1;
x_22 = lean_box(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_1);
x_24 = lean_array_set(x_4, x_10, x_11);
lean_dec(x_10);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = 1;
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
case 1:
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_12);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; size_t x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_30 = lean_ctor_get(x_12, 0);
x_31 = lean_array_set(x_4, x_10, x_11);
x_32 = x_2 >> x_6 % (sizeof(size_t) * 8);
x_33 = l_Std_PersistentHashMap_eraseAux___at_Lean_Meta_SimpLemmas_eraseCore___spec__2(x_30, x_32, x_3);
x_34 = lean_ctor_get(x_33, 1);
lean_inc(x_34);
x_35 = lean_unbox(x_34);
lean_dec(x_34);
if (x_35 == 0)
{
uint8_t x_36; 
lean_dec(x_31);
lean_free_object(x_12);
lean_dec(x_10);
x_36 = !lean_is_exclusive(x_33);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_33, 1);
lean_dec(x_37);
x_38 = lean_ctor_get(x_33, 0);
lean_dec(x_38);
x_39 = 0;
x_40 = lean_box(x_39);
lean_ctor_set(x_33, 1, x_40);
lean_ctor_set(x_33, 0, x_1);
return x_33;
}
else
{
uint8_t x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_33);
x_41 = 0;
x_42 = lean_box(x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_1);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
else
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_1);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
x_45 = lean_ctor_get(x_1, 0);
lean_dec(x_45);
x_46 = !lean_is_exclusive(x_33);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_33, 0);
x_48 = lean_ctor_get(x_33, 1);
lean_dec(x_48);
x_49 = l_Std_PersistentHashMap_isUnaryNode___rarg(x_47);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; uint8_t x_51; lean_object* x_52; 
lean_ctor_set(x_12, 0, x_47);
x_50 = lean_array_set(x_31, x_10, x_12);
lean_dec(x_10);
lean_ctor_set(x_1, 0, x_50);
x_51 = 1;
x_52 = lean_box(x_51);
lean_ctor_set(x_33, 1, x_52);
lean_ctor_set(x_33, 0, x_1);
return x_33;
}
else
{
lean_object* x_53; uint8_t x_54; 
lean_free_object(x_33);
lean_dec(x_47);
lean_free_object(x_12);
x_53 = lean_ctor_get(x_49, 0);
lean_inc(x_53);
lean_dec(x_49);
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; lean_object* x_60; 
x_55 = lean_ctor_get(x_53, 0);
x_56 = lean_ctor_get(x_53, 1);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_array_set(x_31, x_10, x_57);
lean_dec(x_10);
lean_ctor_set(x_1, 0, x_58);
x_59 = 1;
x_60 = lean_box(x_59);
lean_ctor_set(x_53, 1, x_60);
lean_ctor_set(x_53, 0, x_1);
return x_53;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; lean_object* x_66; lean_object* x_67; 
x_61 = lean_ctor_get(x_53, 0);
x_62 = lean_ctor_get(x_53, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_53);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_array_set(x_31, x_10, x_63);
lean_dec(x_10);
lean_ctor_set(x_1, 0, x_64);
x_65 = 1;
x_66 = lean_box(x_65);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_1);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_33, 0);
lean_inc(x_68);
lean_dec(x_33);
x_69 = l_Std_PersistentHashMap_isUnaryNode___rarg(x_68);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; 
lean_ctor_set(x_12, 0, x_68);
x_70 = lean_array_set(x_31, x_10, x_12);
lean_dec(x_10);
lean_ctor_set(x_1, 0, x_70);
x_71 = 1;
x_72 = lean_box(x_71);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_1);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_68);
lean_free_object(x_12);
x_74 = lean_ctor_get(x_69, 0);
lean_inc(x_74);
lean_dec(x_69);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_77 = x_74;
} else {
 lean_dec_ref(x_74);
 x_77 = lean_box(0);
}
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_76);
x_79 = lean_array_set(x_31, x_10, x_78);
lean_dec(x_10);
lean_ctor_set(x_1, 0, x_79);
x_80 = 1;
x_81 = lean_box(x_80);
if (lean_is_scalar(x_77)) {
 x_82 = lean_alloc_ctor(0, 2, 0);
} else {
 x_82 = x_77;
}
lean_ctor_set(x_82, 0, x_1);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_1);
x_83 = lean_ctor_get(x_33, 0);
lean_inc(x_83);
if (lean_is_exclusive(x_33)) {
 lean_ctor_release(x_33, 0);
 lean_ctor_release(x_33, 1);
 x_84 = x_33;
} else {
 lean_dec_ref(x_33);
 x_84 = lean_box(0);
}
x_85 = l_Std_PersistentHashMap_isUnaryNode___rarg(x_83);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; lean_object* x_89; lean_object* x_90; 
lean_ctor_set(x_12, 0, x_83);
x_86 = lean_array_set(x_31, x_10, x_12);
lean_dec(x_10);
x_87 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_87, 0, x_86);
x_88 = 1;
x_89 = lean_box(x_88);
if (lean_is_scalar(x_84)) {
 x_90 = lean_alloc_ctor(0, 2, 0);
} else {
 x_90 = x_84;
}
lean_ctor_set(x_90, 0, x_87);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; lean_object* x_99; lean_object* x_100; 
lean_dec(x_84);
lean_dec(x_83);
lean_free_object(x_12);
x_91 = lean_ctor_get(x_85, 0);
lean_inc(x_91);
lean_dec(x_85);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_94 = x_91;
} else {
 lean_dec_ref(x_91);
 x_94 = lean_box(0);
}
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_92);
lean_ctor_set(x_95, 1, x_93);
x_96 = lean_array_set(x_31, x_10, x_95);
lean_dec(x_10);
x_97 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_97, 0, x_96);
x_98 = 1;
x_99 = lean_box(x_98);
if (lean_is_scalar(x_94)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_94;
}
lean_ctor_set(x_100, 0, x_97);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
}
else
{
lean_object* x_101; lean_object* x_102; size_t x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; 
x_101 = lean_ctor_get(x_12, 0);
lean_inc(x_101);
lean_dec(x_12);
x_102 = lean_array_set(x_4, x_10, x_11);
x_103 = x_2 >> x_6 % (sizeof(size_t) * 8);
x_104 = l_Std_PersistentHashMap_eraseAux___at_Lean_Meta_SimpLemmas_eraseCore___spec__2(x_101, x_103, x_3);
x_105 = lean_ctor_get(x_104, 1);
lean_inc(x_105);
x_106 = lean_unbox(x_105);
lean_dec(x_105);
if (x_106 == 0)
{
lean_object* x_107; uint8_t x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_102);
lean_dec(x_10);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_107 = x_104;
} else {
 lean_dec_ref(x_104);
 x_107 = lean_box(0);
}
x_108 = 0;
x_109 = lean_box(x_108);
if (lean_is_scalar(x_107)) {
 x_110 = lean_alloc_ctor(0, 2, 0);
} else {
 x_110 = x_107;
}
lean_ctor_set(x_110, 0, x_1);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_111 = x_1;
} else {
 lean_dec_ref(x_1);
 x_111 = lean_box(0);
}
x_112 = lean_ctor_get(x_104, 0);
lean_inc(x_112);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_113 = x_104;
} else {
 lean_dec_ref(x_104);
 x_113 = lean_box(0);
}
x_114 = l_Std_PersistentHashMap_isUnaryNode___rarg(x_112);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; uint8_t x_118; lean_object* x_119; lean_object* x_120; 
x_115 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_115, 0, x_112);
x_116 = lean_array_set(x_102, x_10, x_115);
lean_dec(x_10);
if (lean_is_scalar(x_111)) {
 x_117 = lean_alloc_ctor(0, 1, 0);
} else {
 x_117 = x_111;
}
lean_ctor_set(x_117, 0, x_116);
x_118 = 1;
x_119 = lean_box(x_118);
if (lean_is_scalar(x_113)) {
 x_120 = lean_alloc_ctor(0, 2, 0);
} else {
 x_120 = x_113;
}
lean_ctor_set(x_120, 0, x_117);
lean_ctor_set(x_120, 1, x_119);
return x_120;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; lean_object* x_129; lean_object* x_130; 
lean_dec(x_113);
lean_dec(x_112);
x_121 = lean_ctor_get(x_114, 0);
lean_inc(x_121);
lean_dec(x_114);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_121, 1);
lean_inc(x_123);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 lean_ctor_release(x_121, 1);
 x_124 = x_121;
} else {
 lean_dec_ref(x_121);
 x_124 = lean_box(0);
}
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_122);
lean_ctor_set(x_125, 1, x_123);
x_126 = lean_array_set(x_102, x_10, x_125);
lean_dec(x_10);
if (lean_is_scalar(x_111)) {
 x_127 = lean_alloc_ctor(0, 1, 0);
} else {
 x_127 = x_111;
}
lean_ctor_set(x_127, 0, x_126);
x_128 = 1;
x_129 = lean_box(x_128);
if (lean_is_scalar(x_124)) {
 x_130 = lean_alloc_ctor(0, 2, 0);
} else {
 x_130 = x_124;
}
lean_ctor_set(x_130, 0, x_127);
lean_ctor_set(x_130, 1, x_129);
return x_130;
}
}
}
}
default: 
{
uint8_t x_131; lean_object* x_132; lean_object* x_133; 
lean_dec(x_10);
lean_dec(x_4);
x_131 = 0;
x_132 = lean_box(x_131);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_1);
lean_ctor_set(x_133, 1, x_132);
return x_133;
}
}
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_134 = lean_ctor_get(x_1, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_1, 1);
lean_inc(x_135);
x_136 = lean_unsigned_to_nat(0u);
x_137 = l_Array_indexOfAux___at_Lean_Meta_SimpLemmas_eraseCore___spec__3(x_134, x_3, x_136);
if (lean_obj_tag(x_137) == 0)
{
uint8_t x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_135);
lean_dec(x_134);
x_138 = 0;
x_139 = lean_box(x_138);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_1);
lean_ctor_set(x_140, 1, x_139);
return x_140;
}
else
{
uint8_t x_141; 
x_141 = !lean_is_exclusive(x_1);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; uint8_t x_147; lean_object* x_148; lean_object* x_149; 
x_142 = lean_ctor_get(x_1, 1);
lean_dec(x_142);
x_143 = lean_ctor_get(x_1, 0);
lean_dec(x_143);
x_144 = lean_ctor_get(x_137, 0);
lean_inc(x_144);
lean_dec(x_137);
x_145 = l_Array_eraseIdx_x27___rarg(x_134, x_144);
x_146 = l_Array_eraseIdx_x27___rarg(x_135, x_144);
lean_dec(x_144);
lean_ctor_set(x_1, 1, x_146);
lean_ctor_set(x_1, 0, x_145);
x_147 = 1;
x_148 = lean_box(x_147);
x_149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_149, 0, x_1);
lean_ctor_set(x_149, 1, x_148);
return x_149;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_1);
x_150 = lean_ctor_get(x_137, 0);
lean_inc(x_150);
lean_dec(x_137);
x_151 = l_Array_eraseIdx_x27___rarg(x_134, x_150);
x_152 = l_Array_eraseIdx_x27___rarg(x_135, x_150);
lean_dec(x_150);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set(x_153, 1, x_152);
x_154 = 1;
x_155 = lean_box(x_154);
x_156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_156, 0, x_153);
lean_ctor_set(x_156, 1, x_155);
return x_156;
}
}
}
}
}
lean_object* l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_Lean_Name_hash(x_2);
x_7 = (size_t)x_6;
x_8 = l_Std_PersistentHashMap_eraseAux___at_Lean_Meta_SimpLemmas_eraseCore___spec__2(x_4, x_7, x_2);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
x_10 = lean_unbox(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
lean_ctor_set(x_1, 0, x_11);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_5, x_13);
lean_dec(x_5);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
}
else
{
lean_object* x_15; lean_object* x_16; uint64_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_1);
x_17 = l_Lean_Name_hash(x_2);
x_18 = (size_t)x_17;
x_19 = l_Std_PersistentHashMap_eraseAux___at_Lean_Meta_SimpLemmas_eraseCore___spec__2(x_15, x_18, x_2);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_16);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_19, 0);
lean_inc(x_24);
lean_dec(x_19);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_sub(x_16, x_25);
lean_dec(x_16);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l_Lean_Meta_SimpLemmas_eraseCore___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_ctor_get(x_3, 3);
x_10 = lean_ctor_get(x_3, 4);
x_11 = l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1(x_8, x_4);
x_12 = l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1(x_9, x_4);
x_13 = lean_box(0);
x_14 = l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__1(x_10, x_4, x_13);
lean_ctor_set(x_3, 4, x_14);
lean_ctor_set(x_3, 3, x_12);
lean_ctor_set(x_3, 2, x_11);
x_15 = lean_apply_2(x_6, lean_box(0), x_3);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_16 = lean_ctor_get(x_3, 0);
x_17 = lean_ctor_get(x_3, 1);
x_18 = lean_ctor_get(x_3, 2);
x_19 = lean_ctor_get(x_3, 3);
x_20 = lean_ctor_get(x_3, 4);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_3);
x_21 = l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1(x_18, x_4);
x_22 = l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1(x_19, x_4);
x_23 = lean_box(0);
x_24 = l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__1(x_20, x_4, x_23);
x_25 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_25, 0, x_16);
lean_ctor_set(x_25, 1, x_17);
lean_ctor_set(x_25, 2, x_21);
lean_ctor_set(x_25, 3, x_22);
lean_ctor_set(x_25, 4, x_24);
x_26 = lean_apply_2(x_6, lean_box(0), x_25);
return x_26;
}
}
}
lean_object* l_Lean_Meta_SimpLemmas_eraseCore(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SimpLemmas_eraseCore___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Array_indexOfAux___at_Lean_Meta_SimpLemmas_eraseCore___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_indexOfAux___at_Lean_Meta_SimpLemmas_eraseCore___spec__3(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Std_PersistentHashMap_eraseAux___at_Lean_Meta_SimpLemmas_eraseCore___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Std_PersistentHashMap_eraseAux___at_Lean_Meta_SimpLemmas_eraseCore___spec__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_SimpLemmas_eraseCore___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_SimpLemmas_eraseCore___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_Meta_SimpLemmas_erase___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_SimpLemmas_eraseCore___rarg(x_1, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_Meta_SimpLemmas_erase___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_Meta_SimpLemmas_erase___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_4);
lean_inc(x_3);
x_6 = l_Lean_Meta_SimpLemmas_isLemma(x_3, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = l_Lean_Meta_SimpLemmas_isDeclToUnfold(x_3, x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_mk_string("'");
x_10 = l_Lean_stringToMessageData(x_9);
lean_dec(x_9);
x_11 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_11, 0, x_4);
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_mk_string("' does not have [simp] attribute");
x_14 = l_Lean_stringToMessageData(x_13);
lean_dec(x_13);
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_throwError___rarg(x_1, x_2, x_15);
x_17 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_16, x_5);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_4);
lean_dec(x_2);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_box(0);
x_22 = lean_apply_2(x_20, lean_box(0), x_21);
x_23 = lean_apply_4(x_18, lean_box(0), lean_box(0), x_22, x_5);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_24 = lean_ctor_get(x_1, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
lean_dec(x_1);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_box(0);
x_28 = lean_apply_2(x_26, lean_box(0), x_27);
x_29 = lean_apply_4(x_24, lean_box(0), lean_box(0), x_28, x_5);
return x_29;
}
}
}
lean_object* l_Lean_Meta_SimpLemmas_erase(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SimpLemmas_erase___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SimpLemmas_erase___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_SimpLemmas_erase___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
return x_6;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedSimpEntry() {
_start:
{
lean_object* x_1; lean_object* x_2; uint64_t x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
x_3 = lean_uint64_of_nat(x_1);
x_4 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set_uint64(x_4, sizeof(void*)*1, x_3);
x_5 = lean_box(0);
x_6 = 0;
lean_inc(x_2);
x_7 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_2);
lean_ctor_set(x_7, 2, x_4);
lean_ctor_set(x_7, 3, x_1);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*5, x_6);
lean_ctor_set_uint8(x_7, sizeof(void*)*5 + 1, x_6);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_476__match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_476__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_476__match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_476____lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
x_4 = l_Lean_Meta_addSimpLemmaEntry(x_1, x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Lean_Meta_SimpLemmas_addDeclToUnfold(x_1, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_476_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_2 = lean_box(0);
x_3 = lean_mk_string("simpExt");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = l_Lean_Meta_DiscrTree_empty(lean_box(0));
x_6 = l_Std_PersistentHashMap_empty___at_Lean_Meta_SimpLemmas_lemmaNames___default___spec__1;
lean_inc(x_5);
x_7 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_6);
lean_ctor_set(x_7, 3, x_6);
lean_ctor_set(x_7, 4, x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_476____lambda__1), 2, 0);
x_9 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_10 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_10, 0, x_4);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_7);
lean_ctor_set(x_10, 3, x_9);
x_11 = l_Lean_registerSimpleScopedEnvExtension___rarg(x_10, x_1);
return x_11;
}
}
lean_object* l_Lean_Meta_simpExtension___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint64_t x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_mk_empty_array_with_capacity(x_2);
x_4 = lean_uint64_of_nat(x_2);
x_5 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set_uint64(x_5, sizeof(void*)*1, x_4);
x_6 = lean_box(0);
x_7 = 0;
lean_inc(x_3);
x_8 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_3);
lean_ctor_set(x_8, 2, x_5);
lean_ctor_set(x_8, 3, x_2);
lean_ctor_set(x_8, 4, x_6);
lean_ctor_set_uint8(x_8, sizeof(void*)*5, x_7);
lean_ctor_set_uint8(x_8, sizeof(void*)*5 + 1, x_7);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
lean_object* l_Lean_Meta_simpExtension___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_simpExtension___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
switch (lean_obj_tag(x_2)) {
case 2:
{
lean_object* x_12; uint64_t x_13; lean_object* x_14; uint64_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_11);
lean_dec(x_5);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
x_15 = lean_ctor_get_uint64(x_2, sizeof(void*)*1);
x_16 = lean_box_uint64(x_13);
x_17 = lean_box_uint64(x_15);
x_18 = lean_apply_6(x_6, x_1, x_12, x_16, x_2, x_14, x_17);
return x_18;
}
case 10:
{
lean_object* x_19; lean_object* x_20; uint64_t x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_11);
lean_dec(x_6);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_2, 1);
lean_inc(x_20);
x_21 = lean_ctor_get_uint64(x_2, sizeof(void*)*2);
lean_dec(x_2);
x_22 = lean_box_uint64(x_21);
x_23 = lean_apply_4(x_5, x_1, x_19, x_20, x_22);
return x_23;
}
default: 
{
lean_object* x_24; 
lean_dec(x_6);
lean_dec(x_5);
x_24 = lean_apply_2(x_11, x_1, x_2);
return x_24;
}
}
}
case 5:
{
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
switch (lean_obj_tag(x_2)) {
case 5:
{
lean_object* x_25; lean_object* x_26; uint64_t x_27; lean_object* x_28; lean_object* x_29; uint64_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_11);
lean_dec(x_5);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
x_27 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_28 = lean_ctor_get(x_2, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_2, 1);
lean_inc(x_29);
x_30 = lean_ctor_get_uint64(x_2, sizeof(void*)*2);
lean_dec(x_2);
x_31 = lean_box_uint64(x_27);
x_32 = lean_box_uint64(x_30);
x_33 = lean_apply_6(x_3, x_25, x_26, x_31, x_28, x_29, x_32);
return x_33;
}
case 10:
{
lean_object* x_34; lean_object* x_35; uint64_t x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_11);
lean_dec(x_3);
x_34 = lean_ctor_get(x_2, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_2, 1);
lean_inc(x_35);
x_36 = lean_ctor_get_uint64(x_2, sizeof(void*)*2);
lean_dec(x_2);
x_37 = lean_box_uint64(x_36);
x_38 = lean_apply_4(x_5, x_1, x_34, x_35, x_37);
return x_38;
}
default: 
{
lean_object* x_39; 
lean_dec(x_5);
lean_dec(x_3);
x_39 = lean_apply_2(x_11, x_1, x_2);
return x_39;
}
}
}
case 6:
{
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
switch (lean_obj_tag(x_2)) {
case 6:
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint64_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint64_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_11);
lean_dec(x_5);
x_40 = lean_ctor_get(x_1, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_1, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_1, 2);
lean_inc(x_42);
x_43 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_44 = lean_ctor_get(x_2, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_2, 1);
lean_inc(x_45);
x_46 = lean_ctor_get(x_2, 2);
lean_inc(x_46);
x_47 = lean_ctor_get_uint64(x_2, sizeof(void*)*3);
lean_dec(x_2);
x_48 = lean_box_uint64(x_43);
x_49 = lean_box_uint64(x_47);
x_50 = lean_apply_8(x_8, x_40, x_41, x_42, x_48, x_44, x_45, x_46, x_49);
return x_50;
}
case 10:
{
lean_object* x_51; lean_object* x_52; uint64_t x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_11);
lean_dec(x_8);
x_51 = lean_ctor_get(x_2, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_2, 1);
lean_inc(x_52);
x_53 = lean_ctor_get_uint64(x_2, sizeof(void*)*2);
lean_dec(x_2);
x_54 = lean_box_uint64(x_53);
x_55 = lean_apply_4(x_5, x_1, x_51, x_52, x_54);
return x_55;
}
default: 
{
lean_object* x_56; 
lean_dec(x_8);
lean_dec(x_5);
x_56 = lean_apply_2(x_11, x_1, x_2);
return x_56;
}
}
}
case 7:
{
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
switch (lean_obj_tag(x_2)) {
case 7:
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; uint64_t x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint64_t x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_11);
lean_dec(x_5);
x_57 = lean_ctor_get(x_1, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_1, 1);
lean_inc(x_58);
x_59 = lean_ctor_get(x_1, 2);
lean_inc(x_59);
x_60 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_61 = lean_ctor_get(x_2, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_2, 1);
lean_inc(x_62);
x_63 = lean_ctor_get(x_2, 2);
lean_inc(x_63);
x_64 = lean_ctor_get_uint64(x_2, sizeof(void*)*3);
lean_dec(x_2);
x_65 = lean_box_uint64(x_60);
x_66 = lean_box_uint64(x_64);
x_67 = lean_apply_8(x_7, x_57, x_58, x_59, x_65, x_61, x_62, x_63, x_66);
return x_67;
}
case 10:
{
lean_object* x_68; lean_object* x_69; uint64_t x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_11);
lean_dec(x_7);
x_68 = lean_ctor_get(x_2, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_2, 1);
lean_inc(x_69);
x_70 = lean_ctor_get_uint64(x_2, sizeof(void*)*2);
lean_dec(x_2);
x_71 = lean_box_uint64(x_70);
x_72 = lean_apply_4(x_5, x_1, x_68, x_69, x_71);
return x_72;
}
default: 
{
lean_object* x_73; 
lean_dec(x_7);
lean_dec(x_5);
x_73 = lean_apply_2(x_11, x_1, x_2);
return x_73;
}
}
}
case 8:
{
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
switch (lean_obj_tag(x_2)) {
case 8:
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint64_t x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; uint64_t x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_11);
lean_dec(x_5);
x_74 = lean_ctor_get(x_1, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_1, 1);
lean_inc(x_75);
x_76 = lean_ctor_get(x_1, 2);
lean_inc(x_76);
x_77 = lean_ctor_get(x_1, 3);
lean_inc(x_77);
x_78 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
lean_dec(x_1);
x_79 = lean_ctor_get(x_2, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_2, 1);
lean_inc(x_80);
x_81 = lean_ctor_get(x_2, 2);
lean_inc(x_81);
x_82 = lean_ctor_get(x_2, 3);
lean_inc(x_82);
x_83 = lean_ctor_get_uint64(x_2, sizeof(void*)*4);
lean_dec(x_2);
x_84 = lean_box_uint64(x_78);
x_85 = lean_box_uint64(x_83);
x_86 = lean_apply_10(x_9, x_74, x_75, x_76, x_77, x_84, x_79, x_80, x_81, x_82, x_85);
return x_86;
}
case 10:
{
lean_object* x_87; lean_object* x_88; uint64_t x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_11);
lean_dec(x_9);
x_87 = lean_ctor_get(x_2, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_2, 1);
lean_inc(x_88);
x_89 = lean_ctor_get_uint64(x_2, sizeof(void*)*2);
lean_dec(x_2);
x_90 = lean_box_uint64(x_89);
x_91 = lean_apply_4(x_5, x_1, x_87, x_88, x_90);
return x_91;
}
default: 
{
lean_object* x_92; 
lean_dec(x_9);
lean_dec(x_5);
x_92 = lean_apply_2(x_11, x_1, x_2);
return x_92;
}
}
}
case 10:
{
lean_object* x_93; lean_object* x_94; uint64_t x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_93 = lean_ctor_get(x_1, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_1, 1);
lean_inc(x_94);
x_95 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_96 = lean_box_uint64(x_95);
x_97 = lean_apply_4(x_4, x_93, x_94, x_96, x_2);
return x_97;
}
case 11:
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
switch (lean_obj_tag(x_2)) {
case 10:
{
lean_object* x_98; lean_object* x_99; uint64_t x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_11);
lean_dec(x_10);
x_98 = lean_ctor_get(x_2, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_2, 1);
lean_inc(x_99);
x_100 = lean_ctor_get_uint64(x_2, sizeof(void*)*2);
lean_dec(x_2);
x_101 = lean_box_uint64(x_100);
x_102 = lean_apply_4(x_5, x_1, x_98, x_99, x_101);
return x_102;
}
case 11:
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; uint64_t x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; uint64_t x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
lean_dec(x_11);
lean_dec(x_5);
x_103 = lean_ctor_get(x_1, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_1, 1);
lean_inc(x_104);
x_105 = lean_ctor_get(x_1, 2);
lean_inc(x_105);
x_106 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_107 = lean_ctor_get(x_2, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_2, 1);
lean_inc(x_108);
x_109 = lean_ctor_get(x_2, 2);
lean_inc(x_109);
x_110 = lean_ctor_get_uint64(x_2, sizeof(void*)*3);
lean_dec(x_2);
x_111 = lean_box_uint64(x_106);
x_112 = lean_box_uint64(x_110);
x_113 = lean_apply_8(x_10, x_103, x_104, x_105, x_111, x_107, x_108, x_109, x_112);
return x_113;
}
default: 
{
lean_object* x_114; 
lean_dec(x_10);
lean_dec(x_5);
x_114 = lean_apply_2(x_11, x_1, x_2);
return x_114;
}
}
}
default: 
{
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 10)
{
lean_object* x_115; lean_object* x_116; uint64_t x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_11);
x_115 = lean_ctor_get(x_2, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_2, 1);
lean_inc(x_116);
x_117 = lean_ctor_get_uint64(x_2, sizeof(void*)*2);
lean_dec(x_2);
x_118 = lean_box_uint64(x_117);
x_119 = lean_apply_4(x_5, x_1, x_115, x_116, x_118);
return x_119;
}
else
{
lean_object* x_120; 
lean_dec(x_5);
x_120 = lean_apply_2(x_11, x_1, x_2);
return x_120;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm_match__1___rarg), 11, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_Lean_Meta_withLetDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__2___rarg), 9, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_expr_instantiate1(x_1, x_3);
x_10 = lean_expr_instantiate1(x_2, x_3);
x_11 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm(x_9, x_10, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
switch (lean_obj_tag(x_2)) {
case 2:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_isExprDefEq(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
case 10:
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_dec(x_2);
x_2 = x_9;
goto _start;
}
default: 
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_expr_eqv(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_7);
return x_13;
}
}
}
case 5:
{
switch (lean_obj_tag(x_2)) {
case 5:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 1);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_2, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 1);
lean_inc(x_17);
lean_dec(x_2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_18 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm(x_14, x_16, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_unbox(x_19);
if (x_20 == 0)
{
uint8_t x_21; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_21 = !lean_is_exclusive(x_18);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_18, 0);
lean_dec(x_22);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
lean_object* x_25; 
lean_dec(x_19);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_dec(x_18);
x_1 = x_15;
x_2 = x_17;
x_7 = x_25;
goto _start;
}
}
else
{
uint8_t x_27; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_27 = !lean_is_exclusive(x_18);
if (x_27 == 0)
{
return x_18;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_18, 0);
x_29 = lean_ctor_get(x_18, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_18);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
case 10:
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_2, 1);
lean_inc(x_31);
lean_dec(x_2);
x_2 = x_31;
goto _start;
}
default: 
{
uint8_t x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_33 = lean_expr_eqv(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_34 = lean_box(x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_7);
return x_35;
}
}
}
case 6:
{
switch (lean_obj_tag(x_2)) {
case 6:
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_1, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_1, 1);
lean_inc(x_37);
x_38 = lean_ctor_get(x_1, 2);
lean_inc(x_38);
lean_dec(x_1);
x_39 = lean_ctor_get(x_2, 1);
lean_inc(x_39);
x_40 = lean_ctor_get(x_2, 2);
lean_inc(x_40);
lean_dec(x_2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_37);
x_41 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm(x_37, x_39, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_unbox(x_42);
if (x_43 == 0)
{
uint8_t x_44; 
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_44 = !lean_is_exclusive(x_41);
if (x_44 == 0)
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_41, 0);
lean_dec(x_45);
return x_41;
}
else
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_41, 1);
lean_inc(x_46);
lean_dec(x_41);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_42);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; 
lean_dec(x_42);
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
lean_dec(x_41);
x_49 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___lambda__1___boxed), 8, 2);
lean_closure_set(x_49, 0, x_38);
lean_closure_set(x_49, 1, x_40);
x_50 = 0;
x_51 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(x_36, x_50, x_37, x_49, x_3, x_4, x_5, x_6, x_48);
return x_51;
}
}
else
{
uint8_t x_52; 
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_36);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_52 = !lean_is_exclusive(x_41);
if (x_52 == 0)
{
return x_41;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_41, 0);
x_54 = lean_ctor_get(x_41, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_41);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
case 10:
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_2, 1);
lean_inc(x_56);
lean_dec(x_2);
x_2 = x_56;
goto _start;
}
default: 
{
uint8_t x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_58 = lean_expr_eqv(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_59 = lean_box(x_58);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_7);
return x_60;
}
}
}
case 7:
{
switch (lean_obj_tag(x_2)) {
case 7:
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_61 = lean_ctor_get(x_1, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_1, 1);
lean_inc(x_62);
x_63 = lean_ctor_get(x_1, 2);
lean_inc(x_63);
lean_dec(x_1);
x_64 = lean_ctor_get(x_2, 1);
lean_inc(x_64);
x_65 = lean_ctor_get(x_2, 2);
lean_inc(x_65);
lean_dec(x_2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_62);
x_66 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm(x_62, x_64, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; uint8_t x_68; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_unbox(x_67);
if (x_68 == 0)
{
uint8_t x_69; 
lean_dec(x_65);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_69 = !lean_is_exclusive(x_66);
if (x_69 == 0)
{
lean_object* x_70; 
x_70 = lean_ctor_get(x_66, 0);
lean_dec(x_70);
return x_66;
}
else
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_ctor_get(x_66, 1);
lean_inc(x_71);
lean_dec(x_66);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_67);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
else
{
lean_object* x_73; lean_object* x_74; uint8_t x_75; lean_object* x_76; 
lean_dec(x_67);
x_73 = lean_ctor_get(x_66, 1);
lean_inc(x_73);
lean_dec(x_66);
x_74 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___lambda__1___boxed), 8, 2);
lean_closure_set(x_74, 0, x_63);
lean_closure_set(x_74, 1, x_65);
x_75 = 0;
x_76 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(x_61, x_75, x_62, x_74, x_3, x_4, x_5, x_6, x_73);
return x_76;
}
}
else
{
uint8_t x_77; 
lean_dec(x_65);
lean_dec(x_63);
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_77 = !lean_is_exclusive(x_66);
if (x_77 == 0)
{
return x_66;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_66, 0);
x_79 = lean_ctor_get(x_66, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_66);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
case 10:
{
lean_object* x_81; 
x_81 = lean_ctor_get(x_2, 1);
lean_inc(x_81);
lean_dec(x_2);
x_2 = x_81;
goto _start;
}
default: 
{
uint8_t x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_83 = lean_expr_eqv(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_84 = lean_box(x_83);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_7);
return x_85;
}
}
}
case 8:
{
switch (lean_obj_tag(x_2)) {
case 8:
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_86 = lean_ctor_get(x_1, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_1, 1);
lean_inc(x_87);
x_88 = lean_ctor_get(x_1, 2);
lean_inc(x_88);
x_89 = lean_ctor_get(x_1, 3);
lean_inc(x_89);
lean_dec(x_1);
x_90 = lean_ctor_get(x_2, 1);
lean_inc(x_90);
x_91 = lean_ctor_get(x_2, 2);
lean_inc(x_91);
x_92 = lean_ctor_get(x_2, 3);
lean_inc(x_92);
lean_dec(x_2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_87);
x_93 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm(x_87, x_90, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_94; uint8_t x_95; 
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_unbox(x_94);
if (x_95 == 0)
{
uint8_t x_96; 
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_96 = !lean_is_exclusive(x_93);
if (x_96 == 0)
{
lean_object* x_97; 
x_97 = lean_ctor_get(x_93, 0);
lean_dec(x_97);
return x_93;
}
else
{
lean_object* x_98; lean_object* x_99; 
x_98 = lean_ctor_get(x_93, 1);
lean_inc(x_98);
lean_dec(x_93);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_94);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
else
{
lean_object* x_100; lean_object* x_101; 
lean_dec(x_94);
x_100 = lean_ctor_get(x_93, 1);
lean_inc(x_100);
lean_dec(x_93);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_88);
x_101 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm(x_88, x_91, x_3, x_4, x_5, x_6, x_100);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; uint8_t x_103; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_unbox(x_102);
if (x_103 == 0)
{
uint8_t x_104; 
lean_dec(x_92);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_104 = !lean_is_exclusive(x_101);
if (x_104 == 0)
{
lean_object* x_105; 
x_105 = lean_ctor_get(x_101, 0);
lean_dec(x_105);
return x_101;
}
else
{
lean_object* x_106; lean_object* x_107; 
x_106 = lean_ctor_get(x_101, 1);
lean_inc(x_106);
lean_dec(x_101);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_102);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_102);
x_108 = lean_ctor_get(x_101, 1);
lean_inc(x_108);
lean_dec(x_101);
x_109 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___lambda__1___boxed), 8, 2);
lean_closure_set(x_109, 0, x_89);
lean_closure_set(x_109, 1, x_92);
x_110 = l_Lean_Meta_withLetDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__2___rarg(x_86, x_87, x_88, x_109, x_3, x_4, x_5, x_6, x_108);
return x_110;
}
}
else
{
uint8_t x_111; 
lean_dec(x_92);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_111 = !lean_is_exclusive(x_101);
if (x_111 == 0)
{
return x_101;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_101, 0);
x_113 = lean_ctor_get(x_101, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_101);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
return x_114;
}
}
}
}
else
{
uint8_t x_115; 
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_89);
lean_dec(x_88);
lean_dec(x_87);
lean_dec(x_86);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_115 = !lean_is_exclusive(x_93);
if (x_115 == 0)
{
return x_93;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_93, 0);
x_117 = lean_ctor_get(x_93, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_93);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
}
case 10:
{
lean_object* x_119; 
x_119 = lean_ctor_get(x_2, 1);
lean_inc(x_119);
lean_dec(x_2);
x_2 = x_119;
goto _start;
}
default: 
{
uint8_t x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_121 = lean_expr_eqv(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_122 = lean_box(x_121);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_7);
return x_123;
}
}
}
case 10:
{
lean_object* x_124; 
x_124 = lean_ctor_get(x_1, 1);
lean_inc(x_124);
lean_dec(x_1);
x_1 = x_124;
goto _start;
}
case 11:
{
switch (lean_obj_tag(x_2)) {
case 10:
{
lean_object* x_126; 
x_126 = lean_ctor_get(x_2, 1);
lean_inc(x_126);
lean_dec(x_2);
x_2 = x_126;
goto _start;
}
case 11:
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; uint8_t x_132; 
x_128 = lean_ctor_get(x_1, 1);
lean_inc(x_128);
x_129 = lean_ctor_get(x_1, 2);
lean_inc(x_129);
lean_dec(x_1);
x_130 = lean_ctor_get(x_2, 1);
lean_inc(x_130);
x_131 = lean_ctor_get(x_2, 2);
lean_inc(x_131);
lean_dec(x_2);
x_132 = lean_nat_dec_eq(x_128, x_130);
lean_dec(x_130);
lean_dec(x_128);
if (x_132 == 0)
{
lean_object* x_133; lean_object* x_134; 
lean_dec(x_131);
lean_dec(x_129);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_133 = lean_box(x_132);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_7);
return x_134;
}
else
{
x_1 = x_129;
x_2 = x_131;
goto _start;
}
}
default: 
{
uint8_t x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_136 = lean_expr_eqv(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_137 = lean_box(x_136);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_7);
return x_138;
}
}
}
default: 
{
if (lean_obj_tag(x_2) == 10)
{
lean_object* x_139; 
x_139 = lean_ctor_get(x_2, 1);
lean_inc(x_139);
lean_dec(x_2);
x_2 = x_139;
goto _start;
}
else
{
uint8_t x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_141 = lean_expr_eqv(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_142 = lean_box(x_141);
x_143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set(x_143, 1, x_7);
return x_143;
}
}
}
}
}
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_Meta_withLocalDecl___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___spec__1___rarg(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_shouldPreprocess___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = l_Lean_Expr_isEq(x_2);
if (x_8 == 0)
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_9 = 1;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
else
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; 
x_12 = 0;
x_13 = lean_box(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_7);
return x_14;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_shouldPreprocess(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_shouldPreprocess___lambda__1___boxed), 7, 0);
x_8 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_shouldPreprocess___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_shouldPreprocess___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_2(x_2, x_6, x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_apply_3(x_2, x_7, x_8, x_9);
return x_10;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess_match__4___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_mapM___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_2);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; uint8_t x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_ctor_get(x_11, 1);
x_16 = 0;
x_17 = 1;
lean_inc(x_3);
lean_inc(x_1);
x_18 = l_Lean_Meta_mkLambdaFVars(x_1, x_14, x_16, x_17, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_3);
lean_inc(x_1);
x_21 = l_Lean_Meta_mkForallFVars(x_1, x_15, x_16, x_17, x_3, x_4, x_5, x_6, x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_ctor_set(x_11, 1, x_22);
lean_ctor_set(x_11, 0, x_19);
x_24 = l_List_mapM___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess___spec__1(x_1, x_13, x_3, x_4, x_5, x_6, x_23);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_ctor_set(x_2, 1, x_26);
lean_ctor_set(x_24, 0, x_2);
return x_24;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_24, 0);
x_28 = lean_ctor_get(x_24, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_24);
lean_ctor_set(x_2, 1, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_2);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
uint8_t x_30; 
lean_dec(x_11);
lean_free_object(x_2);
x_30 = !lean_is_exclusive(x_24);
if (x_30 == 0)
{
return x_24;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_24, 0);
x_32 = lean_ctor_get(x_24, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_24);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
uint8_t x_34; 
lean_dec(x_19);
lean_free_object(x_11);
lean_free_object(x_2);
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_21);
if (x_34 == 0)
{
return x_21;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_21, 0);
x_36 = lean_ctor_get(x_21, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_21);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_free_object(x_11);
lean_dec(x_15);
lean_free_object(x_2);
lean_dec(x_13);
lean_dec(x_3);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_18);
if (x_38 == 0)
{
return x_18;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_18, 0);
x_40 = lean_ctor_get(x_18, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_18);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; uint8_t x_46; lean_object* x_47; 
x_42 = lean_ctor_get(x_2, 1);
x_43 = lean_ctor_get(x_11, 0);
x_44 = lean_ctor_get(x_11, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_11);
x_45 = 0;
x_46 = 1;
lean_inc(x_3);
lean_inc(x_1);
x_47 = l_Lean_Meta_mkLambdaFVars(x_1, x_43, x_45, x_46, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
lean_inc(x_3);
lean_inc(x_1);
x_50 = l_Lean_Meta_mkForallFVars(x_1, x_44, x_45, x_46, x_3, x_4, x_5, x_6, x_49);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_48);
lean_ctor_set(x_53, 1, x_51);
x_54 = l_List_mapM___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess___spec__1(x_1, x_42, x_3, x_4, x_5, x_6, x_52);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_57 = x_54;
} else {
 lean_dec_ref(x_54);
 x_57 = lean_box(0);
}
lean_ctor_set(x_2, 1, x_55);
lean_ctor_set(x_2, 0, x_53);
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_2);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_53);
lean_free_object(x_2);
x_59 = lean_ctor_get(x_54, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_54, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_61 = x_54;
} else {
 lean_dec_ref(x_54);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(1, 2, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_60);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
lean_dec(x_48);
lean_free_object(x_2);
lean_dec(x_42);
lean_dec(x_3);
lean_dec(x_1);
x_63 = lean_ctor_get(x_50, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_50, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_65 = x_50;
} else {
 lean_dec_ref(x_50);
 x_65 = lean_box(0);
}
if (lean_is_scalar(x_65)) {
 x_66 = lean_alloc_ctor(1, 2, 0);
} else {
 x_66 = x_65;
}
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_64);
return x_66;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_44);
lean_free_object(x_2);
lean_dec(x_42);
lean_dec(x_3);
lean_dec(x_1);
x_67 = lean_ctor_get(x_47, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_47, 1);
lean_inc(x_68);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_69 = x_47;
} else {
 lean_dec_ref(x_47);
 x_69 = lean_box(0);
}
if (lean_is_scalar(x_69)) {
 x_70 = lean_alloc_ctor(1, 2, 0);
} else {
 x_70 = x_69;
}
lean_ctor_set(x_70, 0, x_67);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; uint8_t x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_2, 0);
x_72 = lean_ctor_get(x_2, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_2);
x_73 = lean_ctor_get(x_71, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_71, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_75 = x_71;
} else {
 lean_dec_ref(x_71);
 x_75 = lean_box(0);
}
x_76 = 0;
x_77 = 1;
lean_inc(x_3);
lean_inc(x_1);
x_78 = l_Lean_Meta_mkLambdaFVars(x_1, x_73, x_76, x_77, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
lean_inc(x_3);
lean_inc(x_1);
x_81 = l_Lean_Meta_mkForallFVars(x_1, x_74, x_76, x_77, x_3, x_4, x_5, x_6, x_80);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
if (lean_is_scalar(x_75)) {
 x_84 = lean_alloc_ctor(0, 2, 0);
} else {
 x_84 = x_75;
}
lean_ctor_set(x_84, 0, x_79);
lean_ctor_set(x_84, 1, x_82);
x_85 = l_List_mapM___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess___spec__1(x_1, x_72, x_3, x_4, x_5, x_6, x_83);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_88 = x_85;
} else {
 lean_dec_ref(x_85);
 x_88 = lean_box(0);
}
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_84);
lean_ctor_set(x_89, 1, x_86);
if (lean_is_scalar(x_88)) {
 x_90 = lean_alloc_ctor(0, 2, 0);
} else {
 x_90 = x_88;
}
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_87);
return x_90;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_84);
x_91 = lean_ctor_get(x_85, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_85, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_93 = x_85;
} else {
 lean_dec_ref(x_85);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(1, 2, 0);
} else {
 x_94 = x_93;
}
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_79);
lean_dec(x_75);
lean_dec(x_72);
lean_dec(x_3);
lean_dec(x_1);
x_95 = lean_ctor_get(x_81, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_81, 1);
lean_inc(x_96);
if (lean_is_exclusive(x_81)) {
 lean_ctor_release(x_81, 0);
 lean_ctor_release(x_81, 1);
 x_97 = x_81;
} else {
 lean_dec_ref(x_81);
 x_97 = lean_box(0);
}
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(1, 2, 0);
} else {
 x_98 = x_97;
}
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_96);
return x_98;
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_72);
lean_dec(x_3);
lean_dec(x_1);
x_99 = lean_ctor_get(x_78, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_78, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_78)) {
 lean_ctor_release(x_78, 0);
 lean_ctor_release(x_78, 1);
 x_101 = x_78;
} else {
 lean_dec_ref(x_78);
 x_101 = lean_box(0);
}
if (lean_is_scalar(x_101)) {
 x_102 = lean_alloc_ctor(1, 2, 0);
} else {
 x_102 = x_101;
}
lean_ctor_set(x_102, 0, x_99);
lean_ctor_set(x_102, 1, x_100);
return x_102;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_mkAppN(x_1, x_2);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_10 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess(x_9, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_List_mapM___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess___spec__1(x_2, x_11, x_4, x_5, x_6, x_7, x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_8 = l_Lean_Meta_whnf(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = l_Lean_Expr_isForall(x_10);
if (x_12 == 0)
{
uint8_t x_13; 
x_13 = l_Lean_Expr_isEq(x_10);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_free_object(x_8);
x_14 = lean_box(0);
x_15 = lean_mk_string("Iff");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_unsigned_to_nat(2u);
x_18 = l_Lean_Expr_isAppOfArity(x_10, x_16, x_17);
lean_dec(x_16);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_mk_string("Ne");
x_20 = lean_name_mk_string(x_14, x_19);
x_21 = lean_unsigned_to_nat(3u);
x_22 = l_Lean_Expr_isAppOfArity(x_10, x_20, x_21);
lean_dec(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = lean_mk_string("Not");
x_24 = lean_name_mk_string(x_14, x_23);
x_25 = lean_unsigned_to_nat(1u);
x_26 = l_Lean_Expr_isAppOfArity(x_10, x_24, x_25);
lean_dec(x_24);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_mk_string("And");
x_28 = lean_name_mk_string(x_14, x_27);
x_29 = l_Lean_Expr_isAppOfArity(x_10, x_28, x_17);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_28);
x_30 = lean_mk_string("True");
x_31 = lean_name_mk_string(x_14, x_30);
x_32 = lean_box(0);
x_33 = l_Lean_mkConst(x_31, x_32);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_34 = l_Lean_Meta_mkEq(x_10, x_33, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_Lean_Meta_mkEqTrue(x_1, x_3, x_4, x_5, x_6, x_36);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_35);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_32);
lean_ctor_set(x_37, 0, x_41);
return x_37;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_42 = lean_ctor_get(x_37, 0);
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_37);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_35);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_32);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_43);
return x_46;
}
}
else
{
uint8_t x_47; 
lean_dec(x_35);
x_47 = !lean_is_exclusive(x_37);
if (x_47 == 0)
{
return x_37;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_37, 0);
x_49 = lean_ctor_get(x_37, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_37);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_34);
if (x_51 == 0)
{
return x_34;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_34, 0);
x_53 = lean_ctor_get(x_34, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_34);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_55 = l_Lean_Expr_appFn_x21(x_10);
x_56 = l_Lean_Expr_appArg_x21(x_55);
lean_dec(x_55);
x_57 = l_Lean_Expr_appArg_x21(x_10);
lean_dec(x_10);
x_58 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
lean_inc(x_28);
x_59 = l_Lean_mkProj(x_28, x_58, x_1);
x_60 = l_Lean_mkProj(x_28, x_25, x_1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_61 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess(x_59, x_56, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess(x_60, x_57, x_3, x_4, x_5, x_6, x_63);
if (lean_obj_tag(x_64) == 0)
{
uint8_t x_65; 
x_65 = !lean_is_exclusive(x_64);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_64, 0);
x_67 = l_List_append___rarg(x_62, x_66);
lean_ctor_set(x_64, 0, x_67);
return x_64;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_68 = lean_ctor_get(x_64, 0);
x_69 = lean_ctor_get(x_64, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_64);
x_70 = l_List_append___rarg(x_62, x_68);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
return x_71;
}
}
else
{
uint8_t x_72; 
lean_dec(x_62);
x_72 = !lean_is_exclusive(x_64);
if (x_72 == 0)
{
return x_64;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_64, 0);
x_74 = lean_ctor_get(x_64, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_64);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
else
{
uint8_t x_76; 
lean_dec(x_60);
lean_dec(x_57);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_76 = !lean_is_exclusive(x_61);
if (x_76 == 0)
{
return x_61;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_61, 0);
x_78 = lean_ctor_get(x_61, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_61);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_80 = l_Lean_Expr_appArg_x21(x_10);
lean_dec(x_10);
x_81 = lean_mk_string("False");
x_82 = lean_name_mk_string(x_14, x_81);
x_83 = lean_box(0);
x_84 = l_Lean_mkConst(x_82, x_83);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_85 = l_Lean_Meta_mkEq(x_80, x_84, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = l_Lean_Meta_mkEqFalse(x_1, x_3, x_4, x_5, x_6, x_87);
if (lean_obj_tag(x_88) == 0)
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_88);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_88, 0);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_86);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_83);
lean_ctor_set(x_88, 0, x_92);
return x_88;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_93 = lean_ctor_get(x_88, 0);
x_94 = lean_ctor_get(x_88, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_88);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_86);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_83);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_94);
return x_97;
}
}
else
{
uint8_t x_98; 
lean_dec(x_86);
x_98 = !lean_is_exclusive(x_88);
if (x_98 == 0)
{
return x_88;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_88, 0);
x_100 = lean_ctor_get(x_88, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_88);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
else
{
uint8_t x_102; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_102 = !lean_is_exclusive(x_85);
if (x_102 == 0)
{
return x_85;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_85, 0);
x_104 = lean_ctor_get(x_85, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_85);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_106 = l_Lean_Expr_appFn_x21(x_10);
x_107 = l_Lean_Expr_appArg_x21(x_106);
lean_dec(x_106);
x_108 = l_Lean_Expr_appArg_x21(x_10);
lean_dec(x_10);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_109 = l_Lean_Meta_mkEq(x_107, x_108, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_109, 1);
lean_inc(x_111);
lean_dec(x_109);
x_112 = lean_mk_string("False");
x_113 = lean_name_mk_string(x_14, x_112);
x_114 = lean_box(0);
x_115 = l_Lean_mkConst(x_113, x_114);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_116 = l_Lean_Meta_mkEq(x_110, x_115, x_3, x_4, x_5, x_6, x_111);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
x_119 = l_Lean_Meta_mkEqFalse(x_1, x_3, x_4, x_5, x_6, x_118);
if (lean_obj_tag(x_119) == 0)
{
uint8_t x_120; 
x_120 = !lean_is_exclusive(x_119);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_121 = lean_ctor_get(x_119, 0);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_117);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_114);
lean_ctor_set(x_119, 0, x_123);
return x_119;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_124 = lean_ctor_get(x_119, 0);
x_125 = lean_ctor_get(x_119, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_119);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_117);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_114);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_125);
return x_128;
}
}
else
{
uint8_t x_129; 
lean_dec(x_117);
x_129 = !lean_is_exclusive(x_119);
if (x_129 == 0)
{
return x_119;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_119, 0);
x_131 = lean_ctor_get(x_119, 1);
lean_inc(x_131);
lean_inc(x_130);
lean_dec(x_119);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_131);
return x_132;
}
}
}
else
{
uint8_t x_133; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_133 = !lean_is_exclusive(x_116);
if (x_133 == 0)
{
return x_116;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_134 = lean_ctor_get(x_116, 0);
x_135 = lean_ctor_get(x_116, 1);
lean_inc(x_135);
lean_inc(x_134);
lean_dec(x_116);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_134);
lean_ctor_set(x_136, 1, x_135);
return x_136;
}
}
}
else
{
uint8_t x_137; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_137 = !lean_is_exclusive(x_109);
if (x_137 == 0)
{
return x_109;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_138 = lean_ctor_get(x_109, 0);
x_139 = lean_ctor_get(x_109, 1);
lean_inc(x_139);
lean_inc(x_138);
lean_dec(x_109);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
return x_140;
}
}
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_141 = l_Lean_Expr_appFn_x21(x_10);
x_142 = l_Lean_Expr_appArg_x21(x_141);
lean_dec(x_141);
x_143 = l_Lean_Expr_appArg_x21(x_10);
lean_dec(x_10);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_144 = l_Lean_Meta_mkEq(x_142, x_143, x_3, x_4, x_5, x_6, x_11);
if (lean_obj_tag(x_144) == 0)
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_144, 1);
lean_inc(x_146);
lean_dec(x_144);
x_147 = l_Lean_Meta_mkPropExt(x_1, x_3, x_4, x_5, x_6, x_146);
if (lean_obj_tag(x_147) == 0)
{
uint8_t x_148; 
x_148 = !lean_is_exclusive(x_147);
if (x_148 == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_149 = lean_ctor_get(x_147, 0);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_145);
x_151 = lean_box(0);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_151);
lean_ctor_set(x_147, 0, x_152);
return x_147;
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_153 = lean_ctor_get(x_147, 0);
x_154 = lean_ctor_get(x_147, 1);
lean_inc(x_154);
lean_inc(x_153);
lean_dec(x_147);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_153);
lean_ctor_set(x_155, 1, x_145);
x_156 = lean_box(0);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_155);
lean_ctor_set(x_157, 1, x_156);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_154);
return x_158;
}
}
else
{
uint8_t x_159; 
lean_dec(x_145);
x_159 = !lean_is_exclusive(x_147);
if (x_159 == 0)
{
return x_147;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_147, 0);
x_161 = lean_ctor_get(x_147, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_147);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
return x_162;
}
}
}
else
{
uint8_t x_163; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_163 = !lean_is_exclusive(x_144);
if (x_163 == 0)
{
return x_144;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_144, 0);
x_165 = lean_ctor_get(x_144, 1);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_144);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
return x_166;
}
}
}
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_1);
lean_ctor_set(x_167, 1, x_10);
x_168 = lean_box(0);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
lean_ctor_set(x_8, 0, x_169);
return x_8;
}
}
else
{
lean_object* x_170; lean_object* x_171; 
lean_free_object(x_8);
x_170 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess___lambda__1), 8, 1);
lean_closure_set(x_170, 0, x_1);
x_171 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_10, x_170, x_3, x_4, x_5, x_6, x_11);
return x_171;
}
}
else
{
lean_object* x_172; lean_object* x_173; uint8_t x_174; 
x_172 = lean_ctor_get(x_8, 0);
x_173 = lean_ctor_get(x_8, 1);
lean_inc(x_173);
lean_inc(x_172);
lean_dec(x_8);
x_174 = l_Lean_Expr_isForall(x_172);
if (x_174 == 0)
{
uint8_t x_175; 
x_175 = l_Lean_Expr_isEq(x_172);
if (x_175 == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; uint8_t x_180; 
x_176 = lean_box(0);
x_177 = lean_mk_string("Iff");
x_178 = lean_name_mk_string(x_176, x_177);
x_179 = lean_unsigned_to_nat(2u);
x_180 = l_Lean_Expr_isAppOfArity(x_172, x_178, x_179);
lean_dec(x_178);
if (x_180 == 0)
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; uint8_t x_184; 
x_181 = lean_mk_string("Ne");
x_182 = lean_name_mk_string(x_176, x_181);
x_183 = lean_unsigned_to_nat(3u);
x_184 = l_Lean_Expr_isAppOfArity(x_172, x_182, x_183);
lean_dec(x_182);
if (x_184 == 0)
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; uint8_t x_188; 
x_185 = lean_mk_string("Not");
x_186 = lean_name_mk_string(x_176, x_185);
x_187 = lean_unsigned_to_nat(1u);
x_188 = l_Lean_Expr_isAppOfArity(x_172, x_186, x_187);
lean_dec(x_186);
if (x_188 == 0)
{
lean_object* x_189; lean_object* x_190; uint8_t x_191; 
x_189 = lean_mk_string("And");
x_190 = lean_name_mk_string(x_176, x_189);
x_191 = l_Lean_Expr_isAppOfArity(x_172, x_190, x_179);
if (x_191 == 0)
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
lean_dec(x_190);
x_192 = lean_mk_string("True");
x_193 = lean_name_mk_string(x_176, x_192);
x_194 = lean_box(0);
x_195 = l_Lean_mkConst(x_193, x_194);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_196 = l_Lean_Meta_mkEq(x_172, x_195, x_3, x_4, x_5, x_6, x_173);
if (lean_obj_tag(x_196) == 0)
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_197 = lean_ctor_get(x_196, 0);
lean_inc(x_197);
x_198 = lean_ctor_get(x_196, 1);
lean_inc(x_198);
lean_dec(x_196);
x_199 = l_Lean_Meta_mkEqTrue(x_1, x_3, x_4, x_5, x_6, x_198);
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_200 = lean_ctor_get(x_199, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_199, 1);
lean_inc(x_201);
if (lean_is_exclusive(x_199)) {
 lean_ctor_release(x_199, 0);
 lean_ctor_release(x_199, 1);
 x_202 = x_199;
} else {
 lean_dec_ref(x_199);
 x_202 = lean_box(0);
}
x_203 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_203, 0, x_200);
lean_ctor_set(x_203, 1, x_197);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_203);
lean_ctor_set(x_204, 1, x_194);
if (lean_is_scalar(x_202)) {
 x_205 = lean_alloc_ctor(0, 2, 0);
} else {
 x_205 = x_202;
}
lean_ctor_set(x_205, 0, x_204);
lean_ctor_set(x_205, 1, x_201);
return x_205;
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
lean_dec(x_197);
x_206 = lean_ctor_get(x_199, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_199, 1);
lean_inc(x_207);
if (lean_is_exclusive(x_199)) {
 lean_ctor_release(x_199, 0);
 lean_ctor_release(x_199, 1);
 x_208 = x_199;
} else {
 lean_dec_ref(x_199);
 x_208 = lean_box(0);
}
if (lean_is_scalar(x_208)) {
 x_209 = lean_alloc_ctor(1, 2, 0);
} else {
 x_209 = x_208;
}
lean_ctor_set(x_209, 0, x_206);
lean_ctor_set(x_209, 1, x_207);
return x_209;
}
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_210 = lean_ctor_get(x_196, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_196, 1);
lean_inc(x_211);
if (lean_is_exclusive(x_196)) {
 lean_ctor_release(x_196, 0);
 lean_ctor_release(x_196, 1);
 x_212 = x_196;
} else {
 lean_dec_ref(x_196);
 x_212 = lean_box(0);
}
if (lean_is_scalar(x_212)) {
 x_213 = lean_alloc_ctor(1, 2, 0);
} else {
 x_213 = x_212;
}
lean_ctor_set(x_213, 0, x_210);
lean_ctor_set(x_213, 1, x_211);
return x_213;
}
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_214 = l_Lean_Expr_appFn_x21(x_172);
x_215 = l_Lean_Expr_appArg_x21(x_214);
lean_dec(x_214);
x_216 = l_Lean_Expr_appArg_x21(x_172);
lean_dec(x_172);
x_217 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
lean_inc(x_190);
x_218 = l_Lean_mkProj(x_190, x_217, x_1);
x_219 = l_Lean_mkProj(x_190, x_187, x_1);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_220 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess(x_218, x_215, x_3, x_4, x_5, x_6, x_173);
if (lean_obj_tag(x_220) == 0)
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; 
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_220, 1);
lean_inc(x_222);
lean_dec(x_220);
x_223 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess(x_219, x_216, x_3, x_4, x_5, x_6, x_222);
if (lean_obj_tag(x_223) == 0)
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_224 = lean_ctor_get(x_223, 0);
lean_inc(x_224);
x_225 = lean_ctor_get(x_223, 1);
lean_inc(x_225);
if (lean_is_exclusive(x_223)) {
 lean_ctor_release(x_223, 0);
 lean_ctor_release(x_223, 1);
 x_226 = x_223;
} else {
 lean_dec_ref(x_223);
 x_226 = lean_box(0);
}
x_227 = l_List_append___rarg(x_221, x_224);
if (lean_is_scalar(x_226)) {
 x_228 = lean_alloc_ctor(0, 2, 0);
} else {
 x_228 = x_226;
}
lean_ctor_set(x_228, 0, x_227);
lean_ctor_set(x_228, 1, x_225);
return x_228;
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; 
lean_dec(x_221);
x_229 = lean_ctor_get(x_223, 0);
lean_inc(x_229);
x_230 = lean_ctor_get(x_223, 1);
lean_inc(x_230);
if (lean_is_exclusive(x_223)) {
 lean_ctor_release(x_223, 0);
 lean_ctor_release(x_223, 1);
 x_231 = x_223;
} else {
 lean_dec_ref(x_223);
 x_231 = lean_box(0);
}
if (lean_is_scalar(x_231)) {
 x_232 = lean_alloc_ctor(1, 2, 0);
} else {
 x_232 = x_231;
}
lean_ctor_set(x_232, 0, x_229);
lean_ctor_set(x_232, 1, x_230);
return x_232;
}
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
lean_dec(x_219);
lean_dec(x_216);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_233 = lean_ctor_get(x_220, 0);
lean_inc(x_233);
x_234 = lean_ctor_get(x_220, 1);
lean_inc(x_234);
if (lean_is_exclusive(x_220)) {
 lean_ctor_release(x_220, 0);
 lean_ctor_release(x_220, 1);
 x_235 = x_220;
} else {
 lean_dec_ref(x_220);
 x_235 = lean_box(0);
}
if (lean_is_scalar(x_235)) {
 x_236 = lean_alloc_ctor(1, 2, 0);
} else {
 x_236 = x_235;
}
lean_ctor_set(x_236, 0, x_233);
lean_ctor_set(x_236, 1, x_234);
return x_236;
}
}
}
else
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_237 = l_Lean_Expr_appArg_x21(x_172);
lean_dec(x_172);
x_238 = lean_mk_string("False");
x_239 = lean_name_mk_string(x_176, x_238);
x_240 = lean_box(0);
x_241 = l_Lean_mkConst(x_239, x_240);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_242 = l_Lean_Meta_mkEq(x_237, x_241, x_3, x_4, x_5, x_6, x_173);
if (lean_obj_tag(x_242) == 0)
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_243 = lean_ctor_get(x_242, 0);
lean_inc(x_243);
x_244 = lean_ctor_get(x_242, 1);
lean_inc(x_244);
lean_dec(x_242);
x_245 = l_Lean_Meta_mkEqFalse(x_1, x_3, x_4, x_5, x_6, x_244);
if (lean_obj_tag(x_245) == 0)
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; 
x_246 = lean_ctor_get(x_245, 0);
lean_inc(x_246);
x_247 = lean_ctor_get(x_245, 1);
lean_inc(x_247);
if (lean_is_exclusive(x_245)) {
 lean_ctor_release(x_245, 0);
 lean_ctor_release(x_245, 1);
 x_248 = x_245;
} else {
 lean_dec_ref(x_245);
 x_248 = lean_box(0);
}
x_249 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_249, 0, x_246);
lean_ctor_set(x_249, 1, x_243);
x_250 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_250, 0, x_249);
lean_ctor_set(x_250, 1, x_240);
if (lean_is_scalar(x_248)) {
 x_251 = lean_alloc_ctor(0, 2, 0);
} else {
 x_251 = x_248;
}
lean_ctor_set(x_251, 0, x_250);
lean_ctor_set(x_251, 1, x_247);
return x_251;
}
else
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_243);
x_252 = lean_ctor_get(x_245, 0);
lean_inc(x_252);
x_253 = lean_ctor_get(x_245, 1);
lean_inc(x_253);
if (lean_is_exclusive(x_245)) {
 lean_ctor_release(x_245, 0);
 lean_ctor_release(x_245, 1);
 x_254 = x_245;
} else {
 lean_dec_ref(x_245);
 x_254 = lean_box(0);
}
if (lean_is_scalar(x_254)) {
 x_255 = lean_alloc_ctor(1, 2, 0);
} else {
 x_255 = x_254;
}
lean_ctor_set(x_255, 0, x_252);
lean_ctor_set(x_255, 1, x_253);
return x_255;
}
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_256 = lean_ctor_get(x_242, 0);
lean_inc(x_256);
x_257 = lean_ctor_get(x_242, 1);
lean_inc(x_257);
if (lean_is_exclusive(x_242)) {
 lean_ctor_release(x_242, 0);
 lean_ctor_release(x_242, 1);
 x_258 = x_242;
} else {
 lean_dec_ref(x_242);
 x_258 = lean_box(0);
}
if (lean_is_scalar(x_258)) {
 x_259 = lean_alloc_ctor(1, 2, 0);
} else {
 x_259 = x_258;
}
lean_ctor_set(x_259, 0, x_256);
lean_ctor_set(x_259, 1, x_257);
return x_259;
}
}
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
x_260 = l_Lean_Expr_appFn_x21(x_172);
x_261 = l_Lean_Expr_appArg_x21(x_260);
lean_dec(x_260);
x_262 = l_Lean_Expr_appArg_x21(x_172);
lean_dec(x_172);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_263 = l_Lean_Meta_mkEq(x_261, x_262, x_3, x_4, x_5, x_6, x_173);
if (lean_obj_tag(x_263) == 0)
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; 
x_264 = lean_ctor_get(x_263, 0);
lean_inc(x_264);
x_265 = lean_ctor_get(x_263, 1);
lean_inc(x_265);
lean_dec(x_263);
x_266 = lean_mk_string("False");
x_267 = lean_name_mk_string(x_176, x_266);
x_268 = lean_box(0);
x_269 = l_Lean_mkConst(x_267, x_268);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_270 = l_Lean_Meta_mkEq(x_264, x_269, x_3, x_4, x_5, x_6, x_265);
if (lean_obj_tag(x_270) == 0)
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; 
x_271 = lean_ctor_get(x_270, 0);
lean_inc(x_271);
x_272 = lean_ctor_get(x_270, 1);
lean_inc(x_272);
lean_dec(x_270);
x_273 = l_Lean_Meta_mkEqFalse(x_1, x_3, x_4, x_5, x_6, x_272);
if (lean_obj_tag(x_273) == 0)
{
lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; 
x_274 = lean_ctor_get(x_273, 0);
lean_inc(x_274);
x_275 = lean_ctor_get(x_273, 1);
lean_inc(x_275);
if (lean_is_exclusive(x_273)) {
 lean_ctor_release(x_273, 0);
 lean_ctor_release(x_273, 1);
 x_276 = x_273;
} else {
 lean_dec_ref(x_273);
 x_276 = lean_box(0);
}
x_277 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_277, 0, x_274);
lean_ctor_set(x_277, 1, x_271);
x_278 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_278, 0, x_277);
lean_ctor_set(x_278, 1, x_268);
if (lean_is_scalar(x_276)) {
 x_279 = lean_alloc_ctor(0, 2, 0);
} else {
 x_279 = x_276;
}
lean_ctor_set(x_279, 0, x_278);
lean_ctor_set(x_279, 1, x_275);
return x_279;
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
lean_dec(x_271);
x_280 = lean_ctor_get(x_273, 0);
lean_inc(x_280);
x_281 = lean_ctor_get(x_273, 1);
lean_inc(x_281);
if (lean_is_exclusive(x_273)) {
 lean_ctor_release(x_273, 0);
 lean_ctor_release(x_273, 1);
 x_282 = x_273;
} else {
 lean_dec_ref(x_273);
 x_282 = lean_box(0);
}
if (lean_is_scalar(x_282)) {
 x_283 = lean_alloc_ctor(1, 2, 0);
} else {
 x_283 = x_282;
}
lean_ctor_set(x_283, 0, x_280);
lean_ctor_set(x_283, 1, x_281);
return x_283;
}
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_284 = lean_ctor_get(x_270, 0);
lean_inc(x_284);
x_285 = lean_ctor_get(x_270, 1);
lean_inc(x_285);
if (lean_is_exclusive(x_270)) {
 lean_ctor_release(x_270, 0);
 lean_ctor_release(x_270, 1);
 x_286 = x_270;
} else {
 lean_dec_ref(x_270);
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
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_288 = lean_ctor_get(x_263, 0);
lean_inc(x_288);
x_289 = lean_ctor_get(x_263, 1);
lean_inc(x_289);
if (lean_is_exclusive(x_263)) {
 lean_ctor_release(x_263, 0);
 lean_ctor_release(x_263, 1);
 x_290 = x_263;
} else {
 lean_dec_ref(x_263);
 x_290 = lean_box(0);
}
if (lean_is_scalar(x_290)) {
 x_291 = lean_alloc_ctor(1, 2, 0);
} else {
 x_291 = x_290;
}
lean_ctor_set(x_291, 0, x_288);
lean_ctor_set(x_291, 1, x_289);
return x_291;
}
}
}
else
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; 
x_292 = l_Lean_Expr_appFn_x21(x_172);
x_293 = l_Lean_Expr_appArg_x21(x_292);
lean_dec(x_292);
x_294 = l_Lean_Expr_appArg_x21(x_172);
lean_dec(x_172);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_295 = l_Lean_Meta_mkEq(x_293, x_294, x_3, x_4, x_5, x_6, x_173);
if (lean_obj_tag(x_295) == 0)
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; 
x_296 = lean_ctor_get(x_295, 0);
lean_inc(x_296);
x_297 = lean_ctor_get(x_295, 1);
lean_inc(x_297);
lean_dec(x_295);
x_298 = l_Lean_Meta_mkPropExt(x_1, x_3, x_4, x_5, x_6, x_297);
if (lean_obj_tag(x_298) == 0)
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; 
x_299 = lean_ctor_get(x_298, 0);
lean_inc(x_299);
x_300 = lean_ctor_get(x_298, 1);
lean_inc(x_300);
if (lean_is_exclusive(x_298)) {
 lean_ctor_release(x_298, 0);
 lean_ctor_release(x_298, 1);
 x_301 = x_298;
} else {
 lean_dec_ref(x_298);
 x_301 = lean_box(0);
}
x_302 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_302, 0, x_299);
lean_ctor_set(x_302, 1, x_296);
x_303 = lean_box(0);
x_304 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_304, 0, x_302);
lean_ctor_set(x_304, 1, x_303);
if (lean_is_scalar(x_301)) {
 x_305 = lean_alloc_ctor(0, 2, 0);
} else {
 x_305 = x_301;
}
lean_ctor_set(x_305, 0, x_304);
lean_ctor_set(x_305, 1, x_300);
return x_305;
}
else
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
lean_dec(x_296);
x_306 = lean_ctor_get(x_298, 0);
lean_inc(x_306);
x_307 = lean_ctor_get(x_298, 1);
lean_inc(x_307);
if (lean_is_exclusive(x_298)) {
 lean_ctor_release(x_298, 0);
 lean_ctor_release(x_298, 1);
 x_308 = x_298;
} else {
 lean_dec_ref(x_298);
 x_308 = lean_box(0);
}
if (lean_is_scalar(x_308)) {
 x_309 = lean_alloc_ctor(1, 2, 0);
} else {
 x_309 = x_308;
}
lean_ctor_set(x_309, 0, x_306);
lean_ctor_set(x_309, 1, x_307);
return x_309;
}
}
else
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_310 = lean_ctor_get(x_295, 0);
lean_inc(x_310);
x_311 = lean_ctor_get(x_295, 1);
lean_inc(x_311);
if (lean_is_exclusive(x_295)) {
 lean_ctor_release(x_295, 0);
 lean_ctor_release(x_295, 1);
 x_312 = x_295;
} else {
 lean_dec_ref(x_295);
 x_312 = lean_box(0);
}
if (lean_is_scalar(x_312)) {
 x_313 = lean_alloc_ctor(1, 2, 0);
} else {
 x_313 = x_312;
}
lean_ctor_set(x_313, 0, x_310);
lean_ctor_set(x_313, 1, x_311);
return x_313;
}
}
}
else
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_314 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_314, 0, x_1);
lean_ctor_set(x_314, 1, x_172);
x_315 = lean_box(0);
x_316 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_316, 0, x_314);
lean_ctor_set(x_316, 1, x_315);
x_317 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_317, 0, x_316);
lean_ctor_set(x_317, 1, x_173);
return x_317;
}
}
else
{
lean_object* x_318; lean_object* x_319; 
x_318 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess___lambda__1), 8, 1);
lean_closure_set(x_318, 0, x_1);
x_319 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_172, x_318, x_3, x_4, x_5, x_6, x_173);
return x_319;
}
}
}
else
{
uint8_t x_320; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_320 = !lean_is_exclusive(x_8);
if (x_320 == 0)
{
return x_8;
}
else
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; 
x_321 = lean_ctor_get(x_8, 0);
x_322 = lean_ctor_get(x_8, 1);
lean_inc(x_322);
lean_inc(x_321);
lean_dec(x_8);
x_323 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_323, 0, x_321);
lean_ctor_set(x_323, 1, x_322);
return x_323;
}
}
}
}
lean_object* l_List_mapM___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_List_mapM___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_checkTypeIsProp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_Lean_Meta_isProp(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_mk_string("invalid 'simp', proposition expected");
x_12 = l_Lean_stringToMessageData(x_11);
lean_dec(x_11);
x_13 = l_Lean_indentExpr(x_1);
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_mk_string("");
x_16 = l_Lean_stringToMessageData(x_15);
lean_dec(x_15);
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_17, x_2, x_3, x_4, x_5, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_19 = !lean_is_exclusive(x_7);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_7, 0);
lean_dec(x_20);
x_21 = lean_box(0);
lean_ctor_set(x_7, 0, x_21);
return x_7;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_7, 1);
lean_inc(x_22);
lean_dec(x_7);
x_23 = lean_box(0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
}
else
{
uint8_t x_25; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_7);
if (x_25 == 0)
{
return x_7;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_7, 0);
x_27 = lean_ctor_get(x_7, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_7);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_apply_3(x_2, x_8, x_9, x_10);
return x_11;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore_match__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 3);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
uint8_t x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_11 = 2;
lean_ctor_set_uint8(x_9, 5, x_11);
x_12 = 1;
x_13 = 0;
x_14 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(x_1, x_12, x_2, x_13, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_14);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_14);
if (x_19 == 0)
{
return x_14;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_14, 0);
x_21 = lean_ctor_get(x_14, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_14);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
else
{
uint8_t x_23; uint8_t x_24; uint8_t x_25; uint8_t x_26; uint8_t x_27; uint8_t x_28; uint8_t x_29; uint8_t x_30; uint8_t x_31; uint8_t x_32; lean_object* x_33; uint8_t x_34; uint8_t x_35; lean_object* x_36; 
x_23 = lean_ctor_get_uint8(x_9, 0);
x_24 = lean_ctor_get_uint8(x_9, 1);
x_25 = lean_ctor_get_uint8(x_9, 2);
x_26 = lean_ctor_get_uint8(x_9, 3);
x_27 = lean_ctor_get_uint8(x_9, 4);
x_28 = lean_ctor_get_uint8(x_9, 6);
x_29 = lean_ctor_get_uint8(x_9, 7);
x_30 = lean_ctor_get_uint8(x_9, 8);
x_31 = lean_ctor_get_uint8(x_9, 9);
lean_dec(x_9);
x_32 = 2;
x_33 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_33, 0, x_23);
lean_ctor_set_uint8(x_33, 1, x_24);
lean_ctor_set_uint8(x_33, 2, x_25);
lean_ctor_set_uint8(x_33, 3, x_26);
lean_ctor_set_uint8(x_33, 4, x_27);
lean_ctor_set_uint8(x_33, 5, x_32);
lean_ctor_set_uint8(x_33, 6, x_28);
lean_ctor_set_uint8(x_33, 7, x_29);
lean_ctor_set_uint8(x_33, 8, x_30);
lean_ctor_set_uint8(x_33, 9, x_31);
lean_ctor_set(x_3, 0, x_33);
x_34 = 1;
x_35 = 0;
x_36 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(x_1, x_34, x_2, x_35, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_39 = x_36;
} else {
 lean_dec_ref(x_36);
 x_39 = lean_box(0);
}
if (lean_is_scalar(x_39)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_39;
}
lean_ctor_set(x_40, 0, x_37);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_36, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_36, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_36)) {
 lean_ctor_release(x_36, 0);
 lean_ctor_release(x_36, 1);
 x_43 = x_36;
} else {
 lean_dec_ref(x_36);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(1, 2, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; uint8_t x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; uint8_t x_54; uint8_t x_55; uint8_t x_56; uint8_t x_57; lean_object* x_58; uint8_t x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; uint8_t x_63; lean_object* x_64; 
x_45 = lean_ctor_get(x_3, 0);
x_46 = lean_ctor_get(x_3, 1);
x_47 = lean_ctor_get(x_3, 2);
x_48 = lean_ctor_get(x_3, 3);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_3);
x_49 = lean_ctor_get_uint8(x_45, 0);
x_50 = lean_ctor_get_uint8(x_45, 1);
x_51 = lean_ctor_get_uint8(x_45, 2);
x_52 = lean_ctor_get_uint8(x_45, 3);
x_53 = lean_ctor_get_uint8(x_45, 4);
x_54 = lean_ctor_get_uint8(x_45, 6);
x_55 = lean_ctor_get_uint8(x_45, 7);
x_56 = lean_ctor_get_uint8(x_45, 8);
x_57 = lean_ctor_get_uint8(x_45, 9);
if (lean_is_exclusive(x_45)) {
 x_58 = x_45;
} else {
 lean_dec_ref(x_45);
 x_58 = lean_box(0);
}
x_59 = 2;
if (lean_is_scalar(x_58)) {
 x_60 = lean_alloc_ctor(0, 0, 10);
} else {
 x_60 = x_58;
}
lean_ctor_set_uint8(x_60, 0, x_49);
lean_ctor_set_uint8(x_60, 1, x_50);
lean_ctor_set_uint8(x_60, 2, x_51);
lean_ctor_set_uint8(x_60, 3, x_52);
lean_ctor_set_uint8(x_60, 4, x_53);
lean_ctor_set_uint8(x_60, 5, x_59);
lean_ctor_set_uint8(x_60, 6, x_54);
lean_ctor_set_uint8(x_60, 7, x_55);
lean_ctor_set_uint8(x_60, 8, x_56);
lean_ctor_set_uint8(x_60, 9, x_57);
x_61 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_46);
lean_ctor_set(x_61, 2, x_47);
lean_ctor_set(x_61, 3, x_48);
x_62 = 1;
x_63 = 0;
x_64 = l___private_Lean_Meta_Basic_0__Lean_Meta_forallMetaTelescopeReducingAux(x_1, x_62, x_2, x_63, x_61, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_67 = x_64;
} else {
 lean_dec_ref(x_64);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_69 = lean_ctor_get(x_64, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_64, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_64)) {
 lean_ctor_release(x_64, 0);
 lean_ctor_release(x_64, 1);
 x_71 = x_64;
} else {
 lean_dec_ref(x_64);
 x_71 = lean_box(0);
}
if (lean_is_scalar(x_71)) {
 x_72 = lean_alloc_ctor(1, 2, 0);
} else {
 x_72 = x_71;
}
lean_ctor_set(x_72, 0, x_69);
lean_ctor_set(x_72, 1, x_70);
return x_72;
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_6, 0);
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
x_14 = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_1);
lean_ctor_set(x_14, 2, x_2);
lean_ctor_set(x_14, 3, x_3);
lean_ctor_set(x_14, 4, x_5);
lean_ctor_set_uint8(x_14, sizeof(void*)*5, x_4);
x_15 = lean_unbox(x_13);
lean_ctor_set_uint8(x_14, sizeof(void*)*5 + 1, x_15);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_11);
return x_16;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_dec(x_6);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 1);
x_15 = lean_ctor_get(x_12, 0);
lean_dec(x_15);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_16 = l_Lean_Meta_whnfR(x_14, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_box(0);
x_20 = lean_mk_string("Eq");
x_21 = lean_name_mk_string(x_19, x_20);
x_22 = lean_unsigned_to_nat(3u);
x_23 = l_Lean_Expr_isAppOfArity(x_17, x_21, x_22);
lean_dec(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_free_object(x_12);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = lean_mk_string("unexpected kind of 'simp' theorem");
x_25 = l_Lean_stringToMessageData(x_24);
lean_dec(x_24);
x_26 = l_Lean_indentExpr(x_17);
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_mk_string("");
x_29 = l_Lean_stringToMessageData(x_28);
lean_dec(x_28);
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_throwError___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___spec__1(x_30, x_7, x_8, x_9, x_10, x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
return x_31;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_31);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = l_Lean_Expr_appFn_x21(x_17);
x_37 = l_Lean_Expr_appArg_x21(x_36);
lean_dec(x_36);
x_38 = l_Lean_Expr_appArg_x21(x_17);
lean_dec(x_17);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_37);
x_39 = l_Lean_Meta_DiscrTree_mkPath(x_37, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_42 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm(x_37, x_38, x_7, x_8, x_9, x_10, x_41);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
lean_ctor_set(x_12, 1, x_43);
lean_ctor_set(x_12, 0, x_40);
x_45 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__3(x_1, x_2, x_3, x_4, x_5, x_12, x_7, x_8, x_9, x_10, x_44);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_12);
return x_45;
}
else
{
uint8_t x_46; 
lean_dec(x_40);
lean_free_object(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_46 = !lean_is_exclusive(x_42);
if (x_46 == 0)
{
return x_42;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_42, 0);
x_48 = lean_ctor_get(x_42, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_42);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_38);
lean_dec(x_37);
lean_free_object(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_39);
if (x_50 == 0)
{
return x_39;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_39, 0);
x_52 = lean_ctor_get(x_39, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_39);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
else
{
uint8_t x_54; 
lean_free_object(x_12);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_16);
if (x_54 == 0)
{
return x_16;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_16, 0);
x_56 = lean_ctor_get(x_16, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_16);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_ctor_get(x_12, 1);
lean_inc(x_58);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_59 = l_Lean_Meta_whnfR(x_58, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = lean_box(0);
x_63 = lean_mk_string("Eq");
x_64 = lean_name_mk_string(x_62, x_63);
x_65 = lean_unsigned_to_nat(3u);
x_66 = l_Lean_Expr_isAppOfArity(x_60, x_64, x_65);
lean_dec(x_64);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_67 = lean_mk_string("unexpected kind of 'simp' theorem");
x_68 = l_Lean_stringToMessageData(x_67);
lean_dec(x_67);
x_69 = l_Lean_indentExpr(x_60);
x_70 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_mk_string("");
x_72 = l_Lean_stringToMessageData(x_71);
lean_dec(x_71);
x_73 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_73, 0, x_70);
lean_ctor_set(x_73, 1, x_72);
x_74 = l_Lean_throwError___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___spec__1(x_73, x_7, x_8, x_9, x_10, x_61);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_74)) {
 lean_ctor_release(x_74, 0);
 lean_ctor_release(x_74, 1);
 x_77 = x_74;
} else {
 lean_dec_ref(x_74);
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
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_79 = l_Lean_Expr_appFn_x21(x_60);
x_80 = l_Lean_Expr_appArg_x21(x_79);
lean_dec(x_79);
x_81 = l_Lean_Expr_appArg_x21(x_60);
lean_dec(x_60);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_80);
x_82 = l_Lean_Meta_DiscrTree_mkPath(x_80, x_7, x_8, x_9, x_10, x_61);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_85 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_isPerm(x_80, x_81, x_7, x_8, x_9, x_10, x_84);
if (lean_obj_tag(x_85) == 0)
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_83);
lean_ctor_set(x_88, 1, x_86);
x_89 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__3(x_1, x_2, x_3, x_4, x_5, x_88, x_7, x_8, x_9, x_10, x_87);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_88);
return x_89;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_83);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_90 = lean_ctor_get(x_85, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_85, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 lean_ctor_release(x_85, 1);
 x_92 = x_85;
} else {
 lean_dec_ref(x_85);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(1, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_90);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_81);
lean_dec(x_80);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_94 = lean_ctor_get(x_82, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_82, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_96 = x_82;
} else {
 lean_dec_ref(x_82);
 x_96 = lean_box(0);
}
if (lean_is_scalar(x_96)) {
 x_97 = lean_alloc_ctor(1, 2, 0);
} else {
 x_97 = x_96;
}
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_95);
return x_97;
}
}
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_98 = lean_ctor_get(x_59, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_59, 1);
lean_inc(x_99);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_100 = x_59;
} else {
 lean_dec_ref(x_59);
 x_100 = lean_box(0);
}
if (lean_is_scalar(x_100)) {
 x_101 = lean_alloc_ctor(1, 2, 0);
} else {
 x_101 = x_100;
}
lean_ctor_set(x_101, 0, x_98);
lean_ctor_set(x_101, 1, x_99);
return x_101;
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_12 = l_Lean_Meta_inferType(x_1, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_15 = l_Lean_Meta_instantiateMVars(x_13, x_7, x_8, x_9, x_10, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_box(0);
x_19 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__1___boxed), 7, 2);
lean_closure_set(x_19, 0, x_16);
lean_closure_set(x_19, 1, x_18);
x_20 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__2___boxed), 6, 0);
x_21 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_21, 0, x_19);
lean_closure_set(x_21, 1, x_20);
x_22 = lean_box(x_4);
x_23 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__4___boxed), 11, 5);
lean_closure_set(x_23, 0, x_2);
lean_closure_set(x_23, 1, x_3);
lean_closure_set(x_23, 2, x_5);
lean_closure_set(x_23, 3, x_22);
lean_closure_set(x_23, 4, x_6);
x_24 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Meta_instMonadLCtxMetaM___spec__2___rarg), 7, 2);
lean_closure_set(x_24, 0, x_21);
lean_closure_set(x_24, 1, x_23);
x_25 = l_Lean_Meta_withNewMCtxDepth___at___private_Lean_Meta_Instances_0__Lean_Meta_mkInstanceKey___spec__1___rarg(x_24, x_7, x_8, x_9, x_10, x_17);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_15);
if (x_26 == 0)
{
return x_15;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_15, 0);
x_28 = lean_ctor_get(x_15, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_15);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_12);
if (x_30 == 0)
{
return x_12;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_12, 0);
x_32 = lean_ctor_get(x_12, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_12);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_4);
lean_dec(x_4);
x_13 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__3(x_1, x_2, x_3, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_13;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_4);
lean_dec(x_4);
x_13 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___lambda__4(x_1, x_2, x_3, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_4);
lean_dec(x_4);
x_13 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore(x_1, x_2, x_3, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmasFromConst___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_13; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_7);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_6, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_dec(x_6);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
lean_dec(x_14);
lean_inc(x_10);
lean_inc(x_4);
x_18 = l_Lean_Meta_mkAuxLemma(x_4, x_17, x_16, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_5);
lean_inc(x_19);
x_21 = l_Lean_mkConst(x_19, x_5);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_mk_empty_array_with_capacity(x_22);
x_24 = lean_box(0);
x_25 = l_Lean_mkConst(x_19, x_24);
lean_inc(x_1);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_1);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_3);
x_27 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore(x_21, x_23, x_25, x_2, x_3, x_26, x_8, x_9, x_10, x_11, x_20);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_array_push(x_7, x_28);
x_6 = x_15;
x_7 = x_30;
x_12 = x_29;
goto _start;
}
else
{
uint8_t x_32; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_27);
if (x_32 == 0)
{
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_27, 0);
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_27);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_36 = !lean_is_exclusive(x_18);
if (x_36 == 0)
{
return x_18;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_18, 0);
x_38 = lean_ctor_get(x_18, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_18);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmasFromConst(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_1);
x_9 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_ConstantInfo_levelParams(x_10);
lean_dec(x_10);
lean_inc(x_12);
x_13 = l_List_map___at_Lean_mkConstWithLevelParams___spec__1(x_12);
lean_inc(x_13);
lean_inc(x_1);
x_14 = l_Lean_mkConst(x_1, x_13);
x_15 = !lean_is_exclusive(x_4);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_ctor_get(x_4, 0);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
uint8_t x_18; lean_object* x_19; 
x_18 = 2;
lean_ctor_set_uint8(x_16, 5, x_18);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_14);
x_19 = l_Lean_Meta_inferType(x_14, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_20);
x_22 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_checkTypeIsProp(x_20, x_4, x_5, x_6, x_7, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_shouldPreprocess___lambda__1___boxed), 7, 0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_20);
x_25 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_20, x_24, x_4, x_5, x_6, x_7, x_23);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_mk_empty_array_with_capacity(x_29);
x_31 = lean_box(0);
lean_inc(x_1);
x_32 = l_Lean_mkConst(x_1, x_31);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_1);
x_34 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore(x_14, x_30, x_32, x_2, x_3, x_33, x_4, x_5, x_6, x_7, x_28);
if (lean_obj_tag(x_34) == 0)
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_36 = lean_ctor_get(x_34, 0);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_mk_empty_array_with_capacity(x_37);
x_39 = lean_array_push(x_38, x_36);
lean_ctor_set(x_34, 0, x_39);
return x_34;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_34, 0);
x_41 = lean_ctor_get(x_34, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_34);
x_42 = lean_unsigned_to_nat(1u);
x_43 = lean_mk_empty_array_with_capacity(x_42);
x_44 = lean_array_push(x_43, x_40);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_41);
return x_45;
}
}
else
{
uint8_t x_46; 
x_46 = !lean_is_exclusive(x_34);
if (x_46 == 0)
{
return x_34;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_34, 0);
x_48 = lean_ctor_get(x_34, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_34);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_50 = lean_ctor_get(x_25, 1);
lean_inc(x_50);
lean_dec(x_25);
x_51 = lean_unsigned_to_nat(0u);
x_52 = lean_mk_empty_array_with_capacity(x_51);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_53 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess(x_14, x_20, x_4, x_5, x_6, x_7, x_50);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l_List_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmasFromConst___spec__1(x_1, x_2, x_3, x_12, x_13, x_54, x_52, x_4, x_5, x_6, x_7, x_55);
if (lean_obj_tag(x_56) == 0)
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
return x_56;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_56, 0);
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_56);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
else
{
uint8_t x_61; 
x_61 = !lean_is_exclusive(x_56);
if (x_61 == 0)
{
return x_56;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_56, 0);
x_63 = lean_ctor_get(x_56, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_56);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_52);
lean_dec(x_4);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_65 = !lean_is_exclusive(x_53);
if (x_65 == 0)
{
return x_53;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_53, 0);
x_67 = lean_ctor_get(x_53, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_53);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_20);
lean_dec(x_4);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_69 = !lean_is_exclusive(x_25);
if (x_69 == 0)
{
return x_25;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_25, 0);
x_71 = lean_ctor_get(x_25, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_25);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_20);
lean_dec(x_4);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_22);
if (x_73 == 0)
{
return x_22;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_22, 0);
x_75 = lean_ctor_get(x_22, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_22);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_4);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_19);
if (x_77 == 0)
{
return x_19;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_19, 0);
x_79 = lean_ctor_get(x_19, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_19);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
uint8_t x_81; uint8_t x_82; uint8_t x_83; uint8_t x_84; uint8_t x_85; uint8_t x_86; uint8_t x_87; uint8_t x_88; uint8_t x_89; uint8_t x_90; lean_object* x_91; lean_object* x_92; 
x_81 = lean_ctor_get_uint8(x_16, 0);
x_82 = lean_ctor_get_uint8(x_16, 1);
x_83 = lean_ctor_get_uint8(x_16, 2);
x_84 = lean_ctor_get_uint8(x_16, 3);
x_85 = lean_ctor_get_uint8(x_16, 4);
x_86 = lean_ctor_get_uint8(x_16, 6);
x_87 = lean_ctor_get_uint8(x_16, 7);
x_88 = lean_ctor_get_uint8(x_16, 8);
x_89 = lean_ctor_get_uint8(x_16, 9);
lean_dec(x_16);
x_90 = 2;
x_91 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_91, 0, x_81);
lean_ctor_set_uint8(x_91, 1, x_82);
lean_ctor_set_uint8(x_91, 2, x_83);
lean_ctor_set_uint8(x_91, 3, x_84);
lean_ctor_set_uint8(x_91, 4, x_85);
lean_ctor_set_uint8(x_91, 5, x_90);
lean_ctor_set_uint8(x_91, 6, x_86);
lean_ctor_set_uint8(x_91, 7, x_87);
lean_ctor_set_uint8(x_91, 8, x_88);
lean_ctor_set_uint8(x_91, 9, x_89);
lean_ctor_set(x_4, 0, x_91);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_14);
x_92 = l_Lean_Meta_inferType(x_14, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_93);
x_95 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_checkTypeIsProp(x_93, x_4, x_5, x_6, x_7, x_94);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_95, 1);
lean_inc(x_96);
lean_dec(x_95);
x_97 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_shouldPreprocess___lambda__1___boxed), 7, 0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_93);
x_98 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_93, x_97, x_4, x_5, x_6, x_7, x_96);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; uint8_t x_100; 
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_unbox(x_99);
lean_dec(x_99);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_dec(x_93);
lean_dec(x_13);
lean_dec(x_12);
x_101 = lean_ctor_get(x_98, 1);
lean_inc(x_101);
lean_dec(x_98);
x_102 = lean_unsigned_to_nat(0u);
x_103 = lean_mk_empty_array_with_capacity(x_102);
x_104 = lean_box(0);
lean_inc(x_1);
x_105 = l_Lean_mkConst(x_1, x_104);
x_106 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_106, 0, x_1);
x_107 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore(x_14, x_103, x_105, x_2, x_3, x_106, x_4, x_5, x_6, x_7, x_101);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_107, 1);
lean_inc(x_109);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 x_110 = x_107;
} else {
 lean_dec_ref(x_107);
 x_110 = lean_box(0);
}
x_111 = lean_unsigned_to_nat(1u);
x_112 = lean_mk_empty_array_with_capacity(x_111);
x_113 = lean_array_push(x_112, x_108);
if (lean_is_scalar(x_110)) {
 x_114 = lean_alloc_ctor(0, 2, 0);
} else {
 x_114 = x_110;
}
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_109);
return x_114;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_115 = lean_ctor_get(x_107, 0);
lean_inc(x_115);
x_116 = lean_ctor_get(x_107, 1);
lean_inc(x_116);
if (lean_is_exclusive(x_107)) {
 lean_ctor_release(x_107, 0);
 lean_ctor_release(x_107, 1);
 x_117 = x_107;
} else {
 lean_dec_ref(x_107);
 x_117 = lean_box(0);
}
if (lean_is_scalar(x_117)) {
 x_118 = lean_alloc_ctor(1, 2, 0);
} else {
 x_118 = x_117;
}
lean_ctor_set(x_118, 0, x_115);
lean_ctor_set(x_118, 1, x_116);
return x_118;
}
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_119 = lean_ctor_get(x_98, 1);
lean_inc(x_119);
lean_dec(x_98);
x_120 = lean_unsigned_to_nat(0u);
x_121 = lean_mk_empty_array_with_capacity(x_120);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_122 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess(x_14, x_93, x_4, x_5, x_6, x_7, x_119);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec(x_122);
x_125 = l_List_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmasFromConst___spec__1(x_1, x_2, x_3, x_12, x_13, x_123, x_121, x_4, x_5, x_6, x_7, x_124);
if (lean_obj_tag(x_125) == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_128 = x_125;
} else {
 lean_dec_ref(x_125);
 x_128 = lean_box(0);
}
if (lean_is_scalar(x_128)) {
 x_129 = lean_alloc_ctor(0, 2, 0);
} else {
 x_129 = x_128;
}
lean_ctor_set(x_129, 0, x_126);
lean_ctor_set(x_129, 1, x_127);
return x_129;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_130 = lean_ctor_get(x_125, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_125, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_132 = x_125;
} else {
 lean_dec_ref(x_125);
 x_132 = lean_box(0);
}
if (lean_is_scalar(x_132)) {
 x_133 = lean_alloc_ctor(1, 2, 0);
} else {
 x_133 = x_132;
}
lean_ctor_set(x_133, 0, x_130);
lean_ctor_set(x_133, 1, x_131);
return x_133;
}
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_121);
lean_dec(x_4);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_134 = lean_ctor_get(x_122, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_122, 1);
lean_inc(x_135);
if (lean_is_exclusive(x_122)) {
 lean_ctor_release(x_122, 0);
 lean_ctor_release(x_122, 1);
 x_136 = x_122;
} else {
 lean_dec_ref(x_122);
 x_136 = lean_box(0);
}
if (lean_is_scalar(x_136)) {
 x_137 = lean_alloc_ctor(1, 2, 0);
} else {
 x_137 = x_136;
}
lean_ctor_set(x_137, 0, x_134);
lean_ctor_set(x_137, 1, x_135);
return x_137;
}
}
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_93);
lean_dec(x_4);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_138 = lean_ctor_get(x_98, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_98, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_140 = x_98;
} else {
 lean_dec_ref(x_98);
 x_140 = lean_box(0);
}
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_138);
lean_ctor_set(x_141, 1, x_139);
return x_141;
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_93);
lean_dec(x_4);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_142 = lean_ctor_get(x_95, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_95, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_144 = x_95;
} else {
 lean_dec_ref(x_95);
 x_144 = lean_box(0);
}
if (lean_is_scalar(x_144)) {
 x_145 = lean_alloc_ctor(1, 2, 0);
} else {
 x_145 = x_144;
}
lean_ctor_set(x_145, 0, x_142);
lean_ctor_set(x_145, 1, x_143);
return x_145;
}
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_dec(x_4);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_146 = lean_ctor_get(x_92, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_92, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 x_148 = x_92;
} else {
 lean_dec_ref(x_92);
 x_148 = lean_box(0);
}
if (lean_is_scalar(x_148)) {
 x_149 = lean_alloc_ctor(1, 2, 0);
} else {
 x_149 = x_148;
}
lean_ctor_set(x_149, 0, x_146);
lean_ctor_set(x_149, 1, x_147);
return x_149;
}
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; uint8_t x_154; uint8_t x_155; uint8_t x_156; uint8_t x_157; uint8_t x_158; uint8_t x_159; uint8_t x_160; uint8_t x_161; uint8_t x_162; lean_object* x_163; uint8_t x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_150 = lean_ctor_get(x_4, 0);
x_151 = lean_ctor_get(x_4, 1);
x_152 = lean_ctor_get(x_4, 2);
x_153 = lean_ctor_get(x_4, 3);
lean_inc(x_153);
lean_inc(x_152);
lean_inc(x_151);
lean_inc(x_150);
lean_dec(x_4);
x_154 = lean_ctor_get_uint8(x_150, 0);
x_155 = lean_ctor_get_uint8(x_150, 1);
x_156 = lean_ctor_get_uint8(x_150, 2);
x_157 = lean_ctor_get_uint8(x_150, 3);
x_158 = lean_ctor_get_uint8(x_150, 4);
x_159 = lean_ctor_get_uint8(x_150, 6);
x_160 = lean_ctor_get_uint8(x_150, 7);
x_161 = lean_ctor_get_uint8(x_150, 8);
x_162 = lean_ctor_get_uint8(x_150, 9);
if (lean_is_exclusive(x_150)) {
 x_163 = x_150;
} else {
 lean_dec_ref(x_150);
 x_163 = lean_box(0);
}
x_164 = 2;
if (lean_is_scalar(x_163)) {
 x_165 = lean_alloc_ctor(0, 0, 10);
} else {
 x_165 = x_163;
}
lean_ctor_set_uint8(x_165, 0, x_154);
lean_ctor_set_uint8(x_165, 1, x_155);
lean_ctor_set_uint8(x_165, 2, x_156);
lean_ctor_set_uint8(x_165, 3, x_157);
lean_ctor_set_uint8(x_165, 4, x_158);
lean_ctor_set_uint8(x_165, 5, x_164);
lean_ctor_set_uint8(x_165, 6, x_159);
lean_ctor_set_uint8(x_165, 7, x_160);
lean_ctor_set_uint8(x_165, 8, x_161);
lean_ctor_set_uint8(x_165, 9, x_162);
x_166 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_166, 1, x_151);
lean_ctor_set(x_166, 2, x_152);
lean_ctor_set(x_166, 3, x_153);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_166);
lean_inc(x_14);
x_167 = l_Lean_Meta_inferType(x_14, x_166, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_167) == 0)
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_167, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_167, 1);
lean_inc(x_169);
lean_dec(x_167);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_166);
lean_inc(x_168);
x_170 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_checkTypeIsProp(x_168, x_166, x_5, x_6, x_7, x_169);
if (lean_obj_tag(x_170) == 0)
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get(x_170, 1);
lean_inc(x_171);
lean_dec(x_170);
x_172 = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_shouldPreprocess___lambda__1___boxed), 7, 0);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_166);
lean_inc(x_168);
x_173 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Meta_getParamNames___spec__2___rarg(x_168, x_172, x_166, x_5, x_6, x_7, x_171);
if (lean_obj_tag(x_173) == 0)
{
lean_object* x_174; uint8_t x_175; 
x_174 = lean_ctor_get(x_173, 0);
lean_inc(x_174);
x_175 = lean_unbox(x_174);
lean_dec(x_174);
if (x_175 == 0)
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
lean_dec(x_168);
lean_dec(x_13);
lean_dec(x_12);
x_176 = lean_ctor_get(x_173, 1);
lean_inc(x_176);
lean_dec(x_173);
x_177 = lean_unsigned_to_nat(0u);
x_178 = lean_mk_empty_array_with_capacity(x_177);
x_179 = lean_box(0);
lean_inc(x_1);
x_180 = l_Lean_mkConst(x_1, x_179);
x_181 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_181, 0, x_1);
x_182 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore(x_14, x_178, x_180, x_2, x_3, x_181, x_166, x_5, x_6, x_7, x_176);
if (lean_obj_tag(x_182) == 0)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_183 = lean_ctor_get(x_182, 0);
lean_inc(x_183);
x_184 = lean_ctor_get(x_182, 1);
lean_inc(x_184);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 x_185 = x_182;
} else {
 lean_dec_ref(x_182);
 x_185 = lean_box(0);
}
x_186 = lean_unsigned_to_nat(1u);
x_187 = lean_mk_empty_array_with_capacity(x_186);
x_188 = lean_array_push(x_187, x_183);
if (lean_is_scalar(x_185)) {
 x_189 = lean_alloc_ctor(0, 2, 0);
} else {
 x_189 = x_185;
}
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_184);
return x_189;
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_190 = lean_ctor_get(x_182, 0);
lean_inc(x_190);
x_191 = lean_ctor_get(x_182, 1);
lean_inc(x_191);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 x_192 = x_182;
} else {
 lean_dec_ref(x_182);
 x_192 = lean_box(0);
}
if (lean_is_scalar(x_192)) {
 x_193 = lean_alloc_ctor(1, 2, 0);
} else {
 x_193 = x_192;
}
lean_ctor_set(x_193, 0, x_190);
lean_ctor_set(x_193, 1, x_191);
return x_193;
}
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_194 = lean_ctor_get(x_173, 1);
lean_inc(x_194);
lean_dec(x_173);
x_195 = lean_unsigned_to_nat(0u);
x_196 = lean_mk_empty_array_with_capacity(x_195);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_166);
x_197 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess(x_14, x_168, x_166, x_5, x_6, x_7, x_194);
if (lean_obj_tag(x_197) == 0)
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_200 = l_List_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmasFromConst___spec__1(x_1, x_2, x_3, x_12, x_13, x_198, x_196, x_166, x_5, x_6, x_7, x_199);
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_201 = lean_ctor_get(x_200, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_200, 1);
lean_inc(x_202);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 x_203 = x_200;
} else {
 lean_dec_ref(x_200);
 x_203 = lean_box(0);
}
if (lean_is_scalar(x_203)) {
 x_204 = lean_alloc_ctor(0, 2, 0);
} else {
 x_204 = x_203;
}
lean_ctor_set(x_204, 0, x_201);
lean_ctor_set(x_204, 1, x_202);
return x_204;
}
else
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_205 = lean_ctor_get(x_200, 0);
lean_inc(x_205);
x_206 = lean_ctor_get(x_200, 1);
lean_inc(x_206);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 x_207 = x_200;
} else {
 lean_dec_ref(x_200);
 x_207 = lean_box(0);
}
if (lean_is_scalar(x_207)) {
 x_208 = lean_alloc_ctor(1, 2, 0);
} else {
 x_208 = x_207;
}
lean_ctor_set(x_208, 0, x_205);
lean_ctor_set(x_208, 1, x_206);
return x_208;
}
}
else
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
lean_dec(x_196);
lean_dec(x_166);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_209 = lean_ctor_get(x_197, 0);
lean_inc(x_209);
x_210 = lean_ctor_get(x_197, 1);
lean_inc(x_210);
if (lean_is_exclusive(x_197)) {
 lean_ctor_release(x_197, 0);
 lean_ctor_release(x_197, 1);
 x_211 = x_197;
} else {
 lean_dec_ref(x_197);
 x_211 = lean_box(0);
}
if (lean_is_scalar(x_211)) {
 x_212 = lean_alloc_ctor(1, 2, 0);
} else {
 x_212 = x_211;
}
lean_ctor_set(x_212, 0, x_209);
lean_ctor_set(x_212, 1, x_210);
return x_212;
}
}
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
lean_dec(x_168);
lean_dec(x_166);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_213 = lean_ctor_get(x_173, 0);
lean_inc(x_213);
x_214 = lean_ctor_get(x_173, 1);
lean_inc(x_214);
if (lean_is_exclusive(x_173)) {
 lean_ctor_release(x_173, 0);
 lean_ctor_release(x_173, 1);
 x_215 = x_173;
} else {
 lean_dec_ref(x_173);
 x_215 = lean_box(0);
}
if (lean_is_scalar(x_215)) {
 x_216 = lean_alloc_ctor(1, 2, 0);
} else {
 x_216 = x_215;
}
lean_ctor_set(x_216, 0, x_213);
lean_ctor_set(x_216, 1, x_214);
return x_216;
}
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_168);
lean_dec(x_166);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_217 = lean_ctor_get(x_170, 0);
lean_inc(x_217);
x_218 = lean_ctor_get(x_170, 1);
lean_inc(x_218);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_219 = x_170;
} else {
 lean_dec_ref(x_170);
 x_219 = lean_box(0);
}
if (lean_is_scalar(x_219)) {
 x_220 = lean_alloc_ctor(1, 2, 0);
} else {
 x_220 = x_219;
}
lean_ctor_set(x_220, 0, x_217);
lean_ctor_set(x_220, 1, x_218);
return x_220;
}
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; 
lean_dec(x_166);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_221 = lean_ctor_get(x_167, 0);
lean_inc(x_221);
x_222 = lean_ctor_get(x_167, 1);
lean_inc(x_222);
if (lean_is_exclusive(x_167)) {
 lean_ctor_release(x_167, 0);
 lean_ctor_release(x_167, 1);
 x_223 = x_167;
} else {
 lean_dec_ref(x_167);
 x_223 = lean_box(0);
}
if (lean_is_scalar(x_223)) {
 x_224 = lean_alloc_ctor(1, 2, 0);
} else {
 x_224 = x_223;
}
lean_ctor_set(x_224, 0, x_221);
lean_ctor_set(x_224, 1, x_222);
return x_224;
}
}
}
else
{
uint8_t x_225; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_225 = !lean_is_exclusive(x_9);
if (x_225 == 0)
{
return x_9;
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_226 = lean_ctor_get(x_9, 0);
x_227 = lean_ctor_get(x_9, 1);
lean_inc(x_227);
lean_inc(x_226);
lean_dec(x_9);
x_228 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_228, 0, x_226);
lean_ctor_set(x_228, 1, x_227);
return x_228;
}
}
}
}
lean_object* l_List_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmasFromConst___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_2);
lean_dec(x_2);
x_14 = l_List_forIn_loop___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmasFromConst___spec__1(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmasFromConst___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmasFromConst(x_1, x_9, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_ScopedEnvExtension_add___at_Lean_Meta_addSimpLemma___spec__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
switch (x_3) {
case 0:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_dec(x_6);
x_9 = lean_st_ref_take(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_10, 0);
x_14 = l_Lean_ScopedEnvExtension_addEntry___rarg(x_1, x_13, x_2);
lean_ctor_set(x_10, 0, x_14);
x_15 = lean_st_ref_set(x_7, x_10, x_11);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
x_18 = lean_box(0);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_22 = lean_ctor_get(x_10, 0);
x_23 = lean_ctor_get(x_10, 1);
x_24 = lean_ctor_get(x_10, 2);
x_25 = lean_ctor_get(x_10, 3);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_10);
x_26 = l_Lean_ScopedEnvExtension_addEntry___rarg(x_1, x_22, x_2);
x_27 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_23);
lean_ctor_set(x_27, 2, x_24);
lean_ctor_set(x_27, 3, x_25);
x_28 = lean_st_ref_set(x_7, x_27, x_11);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_30 = x_28;
} else {
 lean_dec_ref(x_28);
 x_30 = lean_box(0);
}
x_31 = lean_box(0);
if (lean_is_scalar(x_30)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_30;
}
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_29);
return x_32;
}
}
case 1:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_6);
x_33 = lean_st_ref_take(x_7, x_8);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = !lean_is_exclusive(x_34);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_37 = lean_ctor_get(x_34, 0);
x_38 = l_Lean_ScopedEnvExtension_addLocalEntry___rarg(x_1, x_37, x_2);
lean_ctor_set(x_34, 0, x_38);
x_39 = lean_st_ref_set(x_7, x_34, x_35);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_39, 0);
lean_dec(x_41);
x_42 = lean_box(0);
lean_ctor_set(x_39, 0, x_42);
return x_39;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_39, 1);
lean_inc(x_43);
lean_dec(x_39);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_46 = lean_ctor_get(x_34, 0);
x_47 = lean_ctor_get(x_34, 1);
x_48 = lean_ctor_get(x_34, 2);
x_49 = lean_ctor_get(x_34, 3);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_34);
x_50 = l_Lean_ScopedEnvExtension_addLocalEntry___rarg(x_1, x_46, x_2);
x_51 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_47);
lean_ctor_set(x_51, 2, x_48);
lean_ctor_set(x_51, 3, x_49);
x_52 = lean_st_ref_set(x_7, x_51, x_35);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_54 = x_52;
} else {
 lean_dec_ref(x_52);
 x_54 = lean_box(0);
}
x_55 = lean_box(0);
if (lean_is_scalar(x_54)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_54;
}
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_53);
return x_56;
}
}
default: 
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_57 = lean_ctor_get(x_6, 4);
lean_inc(x_57);
lean_dec(x_6);
x_58 = lean_st_ref_take(x_7, x_8);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = !lean_is_exclusive(x_59);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_62 = lean_ctor_get(x_59, 0);
x_63 = l_Lean_ScopedEnvExtension_addScopedEntry___rarg(x_1, x_62, x_57, x_2);
lean_ctor_set(x_59, 0, x_63);
x_64 = lean_st_ref_set(x_7, x_59, x_60);
x_65 = !lean_is_exclusive(x_64);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_64, 0);
lean_dec(x_66);
x_67 = lean_box(0);
lean_ctor_set(x_64, 0, x_67);
return x_64;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_64, 1);
lean_inc(x_68);
lean_dec(x_64);
x_69 = lean_box(0);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_71 = lean_ctor_get(x_59, 0);
x_72 = lean_ctor_get(x_59, 1);
x_73 = lean_ctor_get(x_59, 2);
x_74 = lean_ctor_get(x_59, 3);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_59);
x_75 = l_Lean_ScopedEnvExtension_addScopedEntry___rarg(x_1, x_71, x_57, x_2);
x_76 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_72);
lean_ctor_set(x_76, 2, x_73);
lean_ctor_set(x_76, 3, x_74);
x_77 = lean_st_ref_set(x_7, x_76, x_60);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_79 = x_77;
} else {
 lean_dec_ref(x_77);
 x_79 = lean_box(0);
}
x_80 = lean_box(0);
if (lean_is_scalar(x_79)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_79;
}
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_78);
return x_81;
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_addSimpLemma___spec__2(uint8_t x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = x_4 < x_3;
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; size_t x_19; lean_object* x_20; 
lean_dec(x_5);
x_13 = lean_array_uget(x_2, x_4);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = l_Lean_Meta_simpExtension;
lean_inc(x_8);
x_16 = l_Lean_ScopedEnvExtension_add___at_Lean_Meta_addSimpLemma___spec__1(x_15, x_14, x_1, x_6, x_7, x_8, x_9, x_10);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = 1;
x_19 = x_4 + x_18;
x_20 = lean_box(0);
x_4 = x_19;
x_5 = x_20;
x_10 = x_17;
goto _start;
}
}
}
lean_object* l_Lean_Meta_addSimpLemma(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmasFromConst(x_1, x_2, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_array_get_size(x_11);
x_14 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_15 = 0;
x_16 = lean_box(0);
x_17 = l_Array_forInUnsafe_loop___at_Lean_Meta_addSimpLemma___spec__2(x_3, x_11, x_14, x_15, x_16, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_11);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_16);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_16);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_22 = !lean_is_exclusive(x_10);
if (x_22 == 0)
{
return x_10;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_10, 0);
x_24 = lean_ctor_get(x_10, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_10);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_ScopedEnvExtension_add___at_Lean_Meta_addSimpLemma___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lean_ScopedEnvExtension_add___at_Lean_Meta_addSimpLemma___spec__1(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_addSimpLemma___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; size_t x_12; size_t x_13; lean_object* x_14; 
x_11 = lean_unbox(x_1);
lean_dec(x_1);
x_12 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_13 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Meta_addSimpLemma___spec__2(x_11, x_2, x_12, x_13, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_14;
}
}
lean_object* l_Lean_Meta_addSimpLemma___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; uint8_t x_11; lean_object* x_12; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l_Lean_Meta_addSimpLemma(x_1, x_10, x_11, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
lean_object* l_Lean_ScopedEnvExtension_getState___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = l_Lean_PersistentEnvExtension_getState___rarg(x_3, x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_mk_string("Lean.ScopedEnvExtension");
x_7 = lean_mk_string("Lean.ScopedEnvExtension.getState");
x_8 = lean_unsigned_to_nat(157u);
x_9 = lean_unsigned_to_nat(16u);
x_10 = lean_mk_string("unreachable code has been reached");
x_11 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_6, x_7, x_8, x_9, x_10);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
x_12 = l_Lean_Meta_instInhabitedSimpLemmas;
x_13 = lean_panic_fn(x_12, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_5, 0);
lean_inc(x_14);
lean_dec(x_5);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
return x_15;
}
}
}
lean_object* l_Lean_Meta_SimpLemmas_eraseCore___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 2);
x_8 = lean_ctor_get(x_1, 3);
x_9 = lean_ctor_get(x_1, 4);
x_10 = l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1(x_7, x_2);
x_11 = l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1(x_8, x_2);
x_12 = lean_box(0);
x_13 = l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__1(x_9, x_2, x_12);
lean_ctor_set(x_1, 4, x_13);
lean_ctor_set(x_1, 3, x_11);
lean_ctor_set(x_1, 2, x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_5);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_1, 1);
x_17 = lean_ctor_get(x_1, 2);
x_18 = lean_ctor_get(x_1, 3);
x_19 = lean_ctor_get(x_1, 4);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_1);
x_20 = l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1(x_17, x_2);
x_21 = l_Std_PersistentHashMap_erase___at_Lean_Meta_SimpLemmas_eraseCore___spec__1(x_18, x_2);
x_22 = lean_box(0);
x_23 = l_Std_PersistentHashMap_insert___at_Lean_Meta_addSimpLemmaEntry_updateLemmaNames___spec__1(x_19, x_2, x_22);
x_24 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_24, 0, x_15);
lean_ctor_set(x_24, 1, x_16);
lean_ctor_set(x_24, 2, x_20);
lean_ctor_set(x_24, 3, x_21);
lean_ctor_set(x_24, 4, x_23);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_5);
return x_25;
}
}
}
lean_object* l_Lean_Meta_SimpLemmas_erase___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_SimpLemmas_eraseCore___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__3(x_1, x_2, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Meta_SimpLemmas_erase___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
lean_inc(x_1);
x_6 = l_Lean_Meta_SimpLemmas_isLemma(x_1, x_2);
if (x_6 == 0)
{
uint8_t x_7; 
lean_inc(x_1);
x_7 = l_Lean_Meta_SimpLemmas_isDeclToUnfold(x_1, x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
lean_dec(x_1);
x_8 = lean_mk_string("'");
x_9 = l_Lean_stringToMessageData(x_8);
lean_dec(x_8);
x_10 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_10, 0, x_2);
x_11 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_mk_string("' does not have [simp] attribute");
x_13 = l_Lean_stringToMessageData(x_12);
lean_dec(x_12);
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_throwError___at_Lean_registerTagAttribute___spec__5(x_14, x_3, x_4, x_5);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
lean_object* x_20; 
x_20 = l_Lean_Meta_SimpLemmas_eraseCore___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__3(x_1, x_2, x_3, x_4, x_5);
return x_20;
}
}
else
{
lean_object* x_21; 
x_21 = l_Lean_Meta_SimpLemmas_eraseCore___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__3(x_1, x_2, x_3, x_4, x_5);
return x_21;
}
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; uint8_t x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_48; 
x_7 = 0;
x_8 = 1;
x_9 = 1;
x_10 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_10, 0, x_7);
lean_ctor_set_uint8(x_10, 1, x_7);
lean_ctor_set_uint8(x_10, 2, x_7);
lean_ctor_set_uint8(x_10, 3, x_7);
lean_ctor_set_uint8(x_10, 4, x_7);
lean_ctor_set_uint8(x_10, 5, x_8);
lean_ctor_set_uint8(x_10, 6, x_9);
lean_ctor_set_uint8(x_10, 7, x_7);
lean_ctor_set_uint8(x_10, 8, x_9);
lean_ctor_set_uint8(x_10, 9, x_9);
x_11 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_unsigned_to_nat(0u);
lean_inc(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_unsigned_to_nat(32u);
x_16 = lean_mk_empty_array_with_capacity(x_15);
lean_inc(x_16);
x_17 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = 5;
x_19 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_16);
lean_ctor_set(x_19, 2, x_13);
lean_ctor_set(x_19, 3, x_13);
lean_ctor_set_usize(x_19, 4, x_18);
lean_inc(x_19);
lean_inc(x_14);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_14);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_mk_empty_array_with_capacity(x_13);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_23, 0, x_10);
lean_ctor_set(x_23, 1, x_20);
lean_ctor_set(x_23, 2, x_21);
lean_ctor_set(x_23, 3, x_22);
lean_inc_n(x_14, 4);
x_24 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_24, 0, x_13);
lean_ctor_set(x_24, 1, x_14);
lean_ctor_set(x_24, 2, x_14);
lean_ctor_set(x_24, 3, x_14);
lean_ctor_set(x_24, 4, x_14);
lean_ctor_set(x_24, 5, x_14);
lean_inc(x_12);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_12);
lean_ctor_set(x_25, 1, x_13);
lean_inc(x_12);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_12);
lean_ctor_set(x_26, 1, x_13);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_12);
lean_ctor_set(x_27, 1, x_13);
lean_inc_n(x_25, 2);
x_28 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_26);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set(x_28, 3, x_25);
lean_ctor_set(x_28, 4, x_25);
x_29 = l_Lean_NameSet_empty;
x_30 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_30, 2, x_29);
lean_ctor_set(x_30, 3, x_19);
x_31 = lean_st_ref_get(x_5, x_6);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_st_mk_ref(x_30, x_32);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
lean_inc(x_1);
x_48 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_1, x_23, x_34, x_4, x_5, x_35);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = l_Lean_ConstantInfo_type(x_49);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_34);
lean_inc(x_23);
x_52 = l_Lean_Meta_isProp(x_51, x_23, x_34, x_4, x_5, x_50);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; uint8_t x_54; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_unbox(x_53);
lean_dec(x_53);
if (x_54 == 0)
{
lean_object* x_55; uint8_t x_56; 
x_55 = lean_ctor_get(x_52, 1);
lean_inc(x_55);
lean_dec(x_52);
x_56 = l_Lean_ConstantInfo_hasValue(x_49);
lean_dec(x_49);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
lean_dec(x_1);
x_57 = lean_mk_string("invalid 'simp', it is not a proposition nor a definition (to unfold)");
x_58 = l_Lean_stringToMessageData(x_57);
lean_dec(x_57);
x_59 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_58, x_23, x_34, x_4, x_5, x_55);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_34);
lean_dec(x_23);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
return x_59;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_59, 0);
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_59);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_64 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_64, 0, x_1);
x_65 = l_Lean_Meta_simpExtension;
x_66 = l_Lean_ScopedEnvExtension_add___at_Lean_Meta_addSimpLemma___spec__1(x_65, x_64, x_3, x_23, x_34, x_4, x_5, x_55);
lean_dec(x_23);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_36 = x_67;
x_37 = x_68;
goto block_47;
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_49);
x_69 = lean_ctor_get(x_52, 1);
lean_inc(x_69);
lean_dec(x_52);
x_70 = lean_unsigned_to_nat(1u);
x_71 = l_Lean_Syntax_getArg(x_2, x_70);
x_72 = l_Lean_Syntax_isNone(x_71);
x_73 = lean_unsigned_to_nat(2u);
x_74 = l_Lean_Syntax_getArg(x_2, x_73);
if (x_72 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; lean_object* x_87; 
x_75 = l_Lean_Syntax_getArg(x_71, x_13);
lean_dec(x_71);
x_76 = l_Lean_Syntax_getKind(x_75);
x_77 = lean_box(0);
x_78 = lean_mk_string("Lean");
x_79 = lean_name_mk_string(x_77, x_78);
x_80 = lean_mk_string("Parser");
x_81 = lean_name_mk_string(x_79, x_80);
x_82 = lean_mk_string("Tactic");
x_83 = lean_name_mk_string(x_81, x_82);
x_84 = lean_mk_string("simpPost");
x_85 = lean_name_mk_string(x_83, x_84);
x_86 = lean_name_eq(x_76, x_85);
lean_dec(x_85);
lean_dec(x_76);
lean_inc(x_4);
x_87 = l_Lean_getAttrParamOptPrio(x_74, x_4, x_5, x_69);
lean_dec(x_74);
if (lean_obj_tag(x_87) == 0)
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
lean_inc(x_5);
lean_inc(x_34);
x_90 = l_Lean_Meta_addSimpLemma(x_1, x_86, x_3, x_88, x_23, x_34, x_4, x_5, x_89);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_36 = x_91;
x_37 = x_92;
goto block_47;
}
else
{
uint8_t x_93; 
lean_dec(x_34);
lean_dec(x_5);
x_93 = !lean_is_exclusive(x_90);
if (x_93 == 0)
{
return x_90;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_90, 0);
x_95 = lean_ctor_get(x_90, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_90);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
else
{
uint8_t x_97; 
lean_dec(x_34);
lean_dec(x_23);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_97 = !lean_is_exclusive(x_87);
if (x_97 == 0)
{
return x_87;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_87, 0);
x_99 = lean_ctor_get(x_87, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_87);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
else
{
lean_object* x_101; 
lean_dec(x_71);
lean_inc(x_4);
x_101 = l_Lean_getAttrParamOptPrio(x_74, x_4, x_5, x_69);
lean_dec(x_74);
if (lean_obj_tag(x_101) == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
lean_inc(x_5);
lean_inc(x_34);
x_104 = l_Lean_Meta_addSimpLemma(x_1, x_9, x_3, x_102, x_23, x_34, x_4, x_5, x_103);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; lean_object* x_106; 
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_104, 1);
lean_inc(x_106);
lean_dec(x_104);
x_36 = x_105;
x_37 = x_106;
goto block_47;
}
else
{
uint8_t x_107; 
lean_dec(x_34);
lean_dec(x_5);
x_107 = !lean_is_exclusive(x_104);
if (x_107 == 0)
{
return x_104;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_104, 0);
x_109 = lean_ctor_get(x_104, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_104);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
}
else
{
uint8_t x_111; 
lean_dec(x_34);
lean_dec(x_23);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_111 = !lean_is_exclusive(x_101);
if (x_111 == 0)
{
return x_101;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_101, 0);
x_113 = lean_ctor_get(x_101, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_101);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
return x_114;
}
}
}
}
}
else
{
uint8_t x_115; 
lean_dec(x_49);
lean_dec(x_34);
lean_dec(x_23);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_115 = !lean_is_exclusive(x_52);
if (x_115 == 0)
{
return x_52;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_52, 0);
x_117 = lean_ctor_get(x_52, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_52);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
}
else
{
uint8_t x_119; 
lean_dec(x_34);
lean_dec(x_23);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_119 = !lean_is_exclusive(x_48);
if (x_119 == 0)
{
return x_48;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_120 = lean_ctor_get(x_48, 0);
x_121 = lean_ctor_get(x_48, 1);
lean_inc(x_121);
lean_inc(x_120);
lean_dec(x_48);
x_122 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
}
block_47:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
lean_dec(x_36);
x_38 = lean_st_ref_get(x_5, x_37);
lean_dec(x_5);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_st_ref_get(x_34, x_39);
lean_dec(x_34);
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
x_43 = lean_box(0);
lean_ctor_set(x_40, 0, x_43);
return x_40;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_40, 1);
lean_inc(x_44);
lean_dec(x_40);
x_45 = lean_box(0);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_Meta_simpExtension;
x_10 = l_Lean_ScopedEnvExtension_getState___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__1(x_9, x_8);
lean_dec(x_8);
x_11 = l_Lean_Meta_SimpLemmas_erase___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__2(x_10, x_1, x_2, x_3, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_st_ref_take(x_3, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_15, 0);
x_19 = lean_alloc_closure((void*)(l_Monad_seqRight___default___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_19, 0, x_12);
x_20 = l_Lean_ScopedEnvExtension_modifyState___rarg(x_9, x_18, x_19);
lean_ctor_set(x_15, 0, x_20);
x_21 = lean_st_ref_set(x_3, x_15, x_16);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
x_24 = lean_box(0);
lean_ctor_set(x_21, 0, x_24);
return x_21;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_dec(x_21);
x_26 = lean_box(0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_28 = lean_ctor_get(x_15, 0);
x_29 = lean_ctor_get(x_15, 1);
x_30 = lean_ctor_get(x_15, 2);
x_31 = lean_ctor_get(x_15, 3);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_15);
x_32 = lean_alloc_closure((void*)(l_Monad_seqRight___default___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_32, 0, x_12);
x_33 = l_Lean_ScopedEnvExtension_modifyState___rarg(x_9, x_28, x_32);
x_34 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_29);
lean_ctor_set(x_34, 2, x_30);
lean_ctor_set(x_34, 3, x_31);
x_35 = lean_st_ref_set(x_3, x_34, x_16);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_37 = x_35;
} else {
 lean_dec_ref(x_35);
 x_37 = lean_box(0);
}
x_38 = lean_box(0);
if (lean_is_scalar(x_37)) {
 x_39 = lean_alloc_ctor(0, 2, 0);
} else {
 x_39 = x_37;
}
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_36);
return x_39;
}
}
else
{
uint8_t x_40; 
x_40 = !lean_is_exclusive(x_11);
if (x_40 == 0)
{
return x_11;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_11, 0);
x_42 = lean_ctor_get(x_11, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_11);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_2 = lean_box(0);
x_3 = lean_mk_string("simp");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("simplification theorem");
x_6 = 0;
x_7 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*2, x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____lambda__1___boxed), 6, 0);
x_9 = lean_alloc_closure((void*)(l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____lambda__2___boxed), 4, 0);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
x_11 = l_Lean_registerBuiltinAttribute(x_10, x_1);
return x_11;
}
}
lean_object* l_Lean_ScopedEnvExtension_getState___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_ScopedEnvExtension_getState___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_SimpLemmas_eraseCore___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_SimpLemmas_eraseCore___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_Meta_SimpLemmas_erase___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__2___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_SimpLemmas_erase___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__2___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Lean_Meta_SimpLemmas_erase___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_SimpLemmas_erase___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_3);
lean_dec(x_3);
x_8 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____lambda__1(x_1, x_2, x_7, x_4, x_5, x_6);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_Meta_getSimpLemmas___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_st_ref_get(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_Meta_simpExtension;
x_8 = l_Lean_ScopedEnvExtension_getState___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__1(x_7, x_6);
lean_dec(x_6);
lean_ctor_set(x_3, 0, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_3);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Meta_simpExtension;
x_13 = l_Lean_ScopedEnvExtension_getState___at_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305____spec__1(x_12, x_11);
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
}
}
lean_object* l_Lean_Meta_getSimpLemmas(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_Meta_getSimpLemmas___rarg___boxed), 2, 0);
return x_4;
}
}
lean_object* l_Lean_Meta_getSimpLemmas___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_getSimpLemmas___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Meta_getSimpLemmas___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_getSimpLemmas(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_addConst___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Lean_Meta_addSimpLemmaEntry(x_4, x_6);
x_8 = 1;
x_9 = x_2 + x_8;
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
lean_object* l_Lean_Meta_SimpLemmas_addConst(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmasFromConst(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_array_get_size(x_12);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_lt(x_14, x_13);
if (x_15 == 0)
{
lean_dec(x_13);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_1);
return x_10;
}
else
{
uint8_t x_16; 
x_16 = lean_nat_dec_le(x_13, x_13);
if (x_16 == 0)
{
lean_dec(x_13);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_1);
return x_10;
}
else
{
size_t x_17; size_t x_18; lean_object* x_19; 
x_17 = 0;
x_18 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_19 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_addConst___spec__1(x_12, x_17, x_18, x_1);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_19);
return x_10;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_10, 0);
x_21 = lean_ctor_get(x_10, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_10);
x_22 = lean_array_get_size(x_20);
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_nat_dec_lt(x_23, x_22);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_22);
lean_dec(x_20);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_21);
return x_25;
}
else
{
uint8_t x_26; 
x_26 = lean_nat_dec_le(x_22, x_22);
if (x_26 == 0)
{
lean_object* x_27; 
lean_dec(x_22);
lean_dec(x_20);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_1);
lean_ctor_set(x_27, 1, x_21);
return x_27;
}
else
{
size_t x_28; size_t x_29; lean_object* x_30; lean_object* x_31; 
x_28 = 0;
x_29 = lean_usize_of_nat(x_22);
lean_dec(x_22);
x_30 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_addConst___spec__1(x_20, x_28, x_29, x_1);
lean_dec(x_20);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_21);
return x_31;
}
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_10);
if (x_32 == 0)
{
return x_10;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_10, 0);
x_34 = lean_ctor_get(x_10, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_10);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_addConst___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_addConst___spec__1(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_SimpLemmas_addConst___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_3);
lean_dec(x_3);
x_11 = l_Lean_Meta_SimpLemmas_addConst(x_1, x_2, x_10, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
static lean_object* _init_l_Lean_Meta_SimpLemma_getValue___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_SimpLemma_getValue(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = l_Lean_Expr_isConst(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; size_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_array_get_size(x_9);
x_11 = lean_usize_of_nat(x_10);
lean_dec(x_10);
lean_inc(x_9);
x_12 = x_9;
x_13 = lean_box_usize(x_11);
x_14 = l_Lean_Meta_SimpLemma_getValue___boxed__const__1;
x_15 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_openAbstractMVarsResult___spec__1___boxed), 8, 3);
lean_closure_set(x_15, 0, x_13);
lean_closure_set(x_15, 1, x_14);
lean_closure_set(x_15, 2, x_12);
x_16 = x_15;
x_17 = lean_apply_5(x_16, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = l_Lean_Expr_instantiateLevelParamsCore_visit___at_Lean_Expr_instantiateLevelParamsArray___spec__1(x_9, x_19, x_7);
lean_dec(x_19);
lean_dec(x_9);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_17, 0);
x_22 = lean_ctor_get(x_17, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_17);
x_23 = l_Lean_Expr_instantiateLevelParamsCore_visit___at_Lean_Expr_instantiateLevelParamsArray___spec__1(x_9, x_21, x_7);
lean_dec(x_21);
lean_dec(x_9);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
return x_24;
}
}
else
{
uint8_t x_25; 
lean_dec(x_9);
lean_dec(x_7);
x_25 = !lean_is_exclusive(x_17);
if (x_25 == 0)
{
return x_17;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_17, 0);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_17);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_29);
lean_dec(x_1);
x_30 = l_Array_isEmpty___rarg(x_29);
if (x_30 == 0)
{
lean_object* x_31; size_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_31 = lean_array_get_size(x_29);
x_32 = lean_usize_of_nat(x_31);
lean_dec(x_31);
lean_inc(x_29);
x_33 = x_29;
x_34 = lean_box_usize(x_32);
x_35 = l_Lean_Meta_SimpLemma_getValue___boxed__const__1;
x_36 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_openAbstractMVarsResult___spec__1___boxed), 8, 3);
lean_closure_set(x_36, 0, x_34);
lean_closure_set(x_36, 1, x_35);
lean_closure_set(x_36, 2, x_33);
x_37 = x_36;
x_38 = lean_apply_5(x_37, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = l_Lean_Expr_instantiateLevelParamsCore_visit___at_Lean_Expr_instantiateLevelParamsArray___spec__1(x_29, x_40, x_7);
lean_dec(x_40);
lean_dec(x_29);
lean_ctor_set(x_38, 0, x_41);
return x_38;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_42 = lean_ctor_get(x_38, 0);
x_43 = lean_ctor_get(x_38, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_38);
x_44 = l_Lean_Expr_instantiateLevelParamsCore_visit___at_Lean_Expr_instantiateLevelParamsArray___spec__1(x_29, x_42, x_7);
lean_dec(x_42);
lean_dec(x_29);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
return x_45;
}
}
else
{
uint8_t x_46; 
lean_dec(x_29);
lean_dec(x_7);
x_46 = !lean_is_exclusive(x_38);
if (x_46 == 0)
{
return x_38;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_38, 0);
x_48 = lean_ctor_get(x_38, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_38);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_29);
x_50 = l_Lean_Expr_constName_x21(x_7);
x_51 = l_Lean_getConstInfo___at_Lean_Meta_mkConstWithFreshMVarLevels___spec__1(x_50, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_51) == 0)
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_53 = lean_ctor_get(x_51, 0);
x_54 = lean_ctor_get(x_51, 1);
x_55 = l_Lean_ConstantInfo_levelParams(x_53);
lean_dec(x_53);
x_56 = l_List_isEmpty___rarg(x_55);
if (x_56 == 0)
{
lean_object* x_57; 
lean_free_object(x_51);
x_57 = l_List_mapM___at___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun___spec__1(x_55, x_2, x_3, x_4, x_5, x_54);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_obj_tag(x_7) == 4)
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
uint8_t x_59; 
x_59 = !lean_is_exclusive(x_7);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_57, 0);
x_61 = lean_expr_update_const(x_7, x_60);
lean_ctor_set(x_57, 0, x_61);
return x_57;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; uint64_t x_65; lean_object* x_66; lean_object* x_67; 
x_62 = lean_ctor_get(x_57, 0);
x_63 = lean_ctor_get(x_7, 0);
x_64 = lean_ctor_get(x_7, 1);
x_65 = lean_ctor_get_uint64(x_7, sizeof(void*)*2);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_7);
x_66 = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_64);
lean_ctor_set_uint64(x_66, sizeof(void*)*2, x_65);
x_67 = lean_expr_update_const(x_66, x_62);
lean_ctor_set(x_57, 0, x_67);
return x_57;
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint64_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_68 = lean_ctor_get(x_57, 0);
x_69 = lean_ctor_get(x_57, 1);
lean_inc(x_69);
lean_inc(x_68);
lean_dec(x_57);
x_70 = lean_ctor_get(x_7, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_7, 1);
lean_inc(x_71);
x_72 = lean_ctor_get_uint64(x_7, sizeof(void*)*2);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_73 = x_7;
} else {
 lean_dec_ref(x_7);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(4, 2, 8);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_70);
lean_ctor_set(x_74, 1, x_71);
lean_ctor_set_uint64(x_74, sizeof(void*)*2, x_72);
x_75 = lean_expr_update_const(x_74, x_68);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_69);
return x_76;
}
}
else
{
uint8_t x_77; 
lean_dec(x_7);
x_77 = !lean_is_exclusive(x_57);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_78 = lean_ctor_get(x_57, 0);
lean_dec(x_78);
x_79 = lean_mk_string("Lean.Expr");
x_80 = lean_mk_string("Lean.Expr.updateConst!");
x_81 = lean_unsigned_to_nat(864u);
x_82 = lean_unsigned_to_nat(20u);
x_83 = lean_mk_string("constant expected");
x_84 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_79, x_80, x_81, x_82, x_83);
lean_dec(x_83);
lean_dec(x_80);
lean_dec(x_79);
x_85 = l_Lean_instInhabitedExpr;
x_86 = lean_panic_fn(x_85, x_84);
lean_ctor_set(x_57, 0, x_86);
return x_57;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_87 = lean_ctor_get(x_57, 1);
lean_inc(x_87);
lean_dec(x_57);
x_88 = lean_mk_string("Lean.Expr");
x_89 = lean_mk_string("Lean.Expr.updateConst!");
x_90 = lean_unsigned_to_nat(864u);
x_91 = lean_unsigned_to_nat(20u);
x_92 = lean_mk_string("constant expected");
x_93 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_88, x_89, x_90, x_91, x_92);
lean_dec(x_92);
lean_dec(x_89);
lean_dec(x_88);
x_94 = l_Lean_instInhabitedExpr;
x_95 = lean_panic_fn(x_94, x_93);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_87);
return x_96;
}
}
}
else
{
lean_dec(x_55);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_ctor_set(x_51, 0, x_7);
return x_51;
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; uint8_t x_100; 
x_97 = lean_ctor_get(x_51, 0);
x_98 = lean_ctor_get(x_51, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_51);
x_99 = l_Lean_ConstantInfo_levelParams(x_97);
lean_dec(x_97);
x_100 = l_List_isEmpty___rarg(x_99);
if (x_100 == 0)
{
lean_object* x_101; 
x_101 = l_List_mapM___at___private_Lean_Meta_AppBuilder_0__Lean_Meta_mkFun___spec__1(x_99, x_2, x_3, x_4, x_5, x_98);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_obj_tag(x_7) == 4)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint64_t x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_104 = x_101;
} else {
 lean_dec_ref(x_101);
 x_104 = lean_box(0);
}
x_105 = lean_ctor_get(x_7, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_7, 1);
lean_inc(x_106);
x_107 = lean_ctor_get_uint64(x_7, sizeof(void*)*2);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_108 = x_7;
} else {
 lean_dec_ref(x_7);
 x_108 = lean_box(0);
}
if (lean_is_scalar(x_108)) {
 x_109 = lean_alloc_ctor(4, 2, 8);
} else {
 x_109 = x_108;
}
lean_ctor_set(x_109, 0, x_105);
lean_ctor_set(x_109, 1, x_106);
lean_ctor_set_uint64(x_109, sizeof(void*)*2, x_107);
x_110 = lean_expr_update_const(x_109, x_102);
if (lean_is_scalar(x_104)) {
 x_111 = lean_alloc_ctor(0, 2, 0);
} else {
 x_111 = x_104;
}
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_103);
return x_111;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_7);
x_112 = lean_ctor_get(x_101, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_101)) {
 lean_ctor_release(x_101, 0);
 lean_ctor_release(x_101, 1);
 x_113 = x_101;
} else {
 lean_dec_ref(x_101);
 x_113 = lean_box(0);
}
x_114 = lean_mk_string("Lean.Expr");
x_115 = lean_mk_string("Lean.Expr.updateConst!");
x_116 = lean_unsigned_to_nat(864u);
x_117 = lean_unsigned_to_nat(20u);
x_118 = lean_mk_string("constant expected");
x_119 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_114, x_115, x_116, x_117, x_118);
lean_dec(x_118);
lean_dec(x_115);
lean_dec(x_114);
x_120 = l_Lean_instInhabitedExpr;
x_121 = lean_panic_fn(x_120, x_119);
if (lean_is_scalar(x_113)) {
 x_122 = lean_alloc_ctor(0, 2, 0);
} else {
 x_122 = x_113;
}
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_112);
return x_122;
}
}
else
{
lean_object* x_123; 
lean_dec(x_99);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_7);
lean_ctor_set(x_123, 1, x_98);
return x_123;
}
}
}
else
{
uint8_t x_124; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_124 = !lean_is_exclusive(x_51);
if (x_124 == 0)
{
return x_51;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_51, 0);
x_126 = lean_ctor_get(x_51, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_51);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocessProof___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = 1;
x_11 = x_2 + x_10;
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
lean_dec(x_9);
x_13 = x_12;
x_14 = lean_array_uset(x_8, x_2, x_13);
x_2 = x_11;
x_3 = x_14;
goto _start;
}
}
}
lean_object* l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocessProof(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_Lean_Meta_inferType(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_8);
x_10 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_checkTypeIsProp(x_8, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocess(x_1, x_8, x_2, x_3, x_4, x_5, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_List_redLength___rarg(x_14);
x_16 = lean_mk_empty_array_with_capacity(x_15);
lean_dec(x_15);
x_17 = l_List_toArrayAux___rarg(x_14, x_16);
x_18 = lean_array_get_size(x_17);
x_19 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_20 = 0;
x_21 = x_17;
x_22 = l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocessProof___spec__1(x_19, x_20, x_21);
x_23 = x_22;
lean_ctor_set(x_12, 0, x_23);
return x_12;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_24 = lean_ctor_get(x_12, 0);
x_25 = lean_ctor_get(x_12, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_12);
x_26 = l_List_redLength___rarg(x_24);
x_27 = lean_mk_empty_array_with_capacity(x_26);
lean_dec(x_26);
x_28 = l_List_toArrayAux___rarg(x_24, x_27);
x_29 = lean_array_get_size(x_28);
x_30 = lean_usize_of_nat(x_29);
lean_dec(x_29);
x_31 = 0;
x_32 = x_28;
x_33 = l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocessProof___spec__1(x_30, x_31, x_32);
x_34 = x_33;
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_25);
return x_35;
}
}
else
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_12);
if (x_36 == 0)
{
return x_12;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_12, 0);
x_38 = lean_ctor_get(x_12, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_12);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_10);
if (x_40 == 0)
{
return x_10;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_10, 0);
x_42 = lean_ctor_get(x_10, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_10);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_7);
if (x_44 == 0)
{
return x_7;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_7, 0);
x_46 = lean_ctor_get(x_7, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_7);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocessProof___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocessProof___spec__1(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_mkSimpLemmas___spec__1(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = x_6 < x_5;
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_14 = x_7;
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_array_uget(x_7, x_6);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_array_uset(x_7, x_6, x_17);
x_19 = x_16;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
lean_inc(x_19);
x_20 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_mkSimpLemmaCore(x_19, x_1, x_19, x_2, x_3, x_4, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = x_6 + x_23;
x_25 = x_21;
x_26 = lean_array_uset(x_18, x_6, x_25);
x_6 = x_24;
x_7 = x_26;
x_12 = x_22;
goto _start;
}
else
{
uint8_t x_28; 
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_20);
if (x_28 == 0)
{
return x_20;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_20, 0);
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_20);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_mkSimpLemmas___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_mkSimpLemmas(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_6, 0);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
uint8_t x_14; lean_object* x_15; 
x_14 = 2;
lean_ctor_set_uint8(x_12, 5, x_14);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_15 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocessProof(x_2, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_array_get_size(x_16);
x_19 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_20 = x_16;
x_21 = lean_box(x_3);
x_22 = lean_box_usize(x_19);
x_23 = l_Lean_Meta_mkSimpLemmas___boxed__const__1;
x_24 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_mkSimpLemmas___spec__1___boxed), 12, 7);
lean_closure_set(x_24, 0, x_1);
lean_closure_set(x_24, 1, x_21);
lean_closure_set(x_24, 2, x_4);
lean_closure_set(x_24, 3, x_5);
lean_closure_set(x_24, 4, x_22);
lean_closure_set(x_24, 5, x_23);
lean_closure_set(x_24, 6, x_20);
x_25 = x_24;
x_26 = lean_apply_5(x_25, x_6, x_7, x_8, x_9, x_17);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
return x_26;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_26, 0);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_26);
if (x_31 == 0)
{
return x_26;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_26, 0);
x_33 = lean_ctor_get(x_26, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_26);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_6);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_15);
if (x_35 == 0)
{
return x_15;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_15, 0);
x_37 = lean_ctor_get(x_15, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_15);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; uint8_t x_40; uint8_t x_41; uint8_t x_42; uint8_t x_43; uint8_t x_44; uint8_t x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; 
x_39 = lean_ctor_get_uint8(x_12, 0);
x_40 = lean_ctor_get_uint8(x_12, 1);
x_41 = lean_ctor_get_uint8(x_12, 2);
x_42 = lean_ctor_get_uint8(x_12, 3);
x_43 = lean_ctor_get_uint8(x_12, 4);
x_44 = lean_ctor_get_uint8(x_12, 6);
x_45 = lean_ctor_get_uint8(x_12, 7);
x_46 = lean_ctor_get_uint8(x_12, 8);
x_47 = lean_ctor_get_uint8(x_12, 9);
lean_dec(x_12);
x_48 = 2;
x_49 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_49, 0, x_39);
lean_ctor_set_uint8(x_49, 1, x_40);
lean_ctor_set_uint8(x_49, 2, x_41);
lean_ctor_set_uint8(x_49, 3, x_42);
lean_ctor_set_uint8(x_49, 4, x_43);
lean_ctor_set_uint8(x_49, 5, x_48);
lean_ctor_set_uint8(x_49, 6, x_44);
lean_ctor_set_uint8(x_49, 7, x_45);
lean_ctor_set_uint8(x_49, 8, x_46);
lean_ctor_set_uint8(x_49, 9, x_47);
lean_ctor_set(x_6, 0, x_49);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_50 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocessProof(x_2, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; size_t x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_array_get_size(x_51);
x_54 = lean_usize_of_nat(x_53);
lean_dec(x_53);
x_55 = x_51;
x_56 = lean_box(x_3);
x_57 = lean_box_usize(x_54);
x_58 = l_Lean_Meta_mkSimpLemmas___boxed__const__1;
x_59 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_mkSimpLemmas___spec__1___boxed), 12, 7);
lean_closure_set(x_59, 0, x_1);
lean_closure_set(x_59, 1, x_56);
lean_closure_set(x_59, 2, x_4);
lean_closure_set(x_59, 3, x_5);
lean_closure_set(x_59, 4, x_57);
lean_closure_set(x_59, 5, x_58);
lean_closure_set(x_59, 6, x_55);
x_60 = x_59;
x_61 = lean_apply_5(x_60, x_6, x_7, x_8, x_9, x_52);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_64 = x_61;
} else {
 lean_dec_ref(x_61);
 x_64 = lean_box(0);
}
if (lean_is_scalar(x_64)) {
 x_65 = lean_alloc_ctor(0, 2, 0);
} else {
 x_65 = x_64;
}
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_63);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_66 = lean_ctor_get(x_61, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_61, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_68 = x_61;
} else {
 lean_dec_ref(x_61);
 x_68 = lean_box(0);
}
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(1, 2, 0);
} else {
 x_69 = x_68;
}
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_67);
return x_69;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_dec(x_6);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_70 = lean_ctor_get(x_50, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_50, 1);
lean_inc(x_71);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_72 = x_50;
} else {
 lean_dec_ref(x_50);
 x_72 = lean_box(0);
}
if (lean_is_scalar(x_72)) {
 x_73 = lean_alloc_ctor(1, 2, 0);
} else {
 x_73 = x_72;
}
lean_ctor_set(x_73, 0, x_70);
lean_ctor_set(x_73, 1, x_71);
return x_73;
}
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; uint8_t x_79; uint8_t x_80; uint8_t x_81; uint8_t x_82; uint8_t x_83; uint8_t x_84; uint8_t x_85; uint8_t x_86; lean_object* x_87; uint8_t x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_74 = lean_ctor_get(x_6, 0);
x_75 = lean_ctor_get(x_6, 1);
x_76 = lean_ctor_get(x_6, 2);
x_77 = lean_ctor_get(x_6, 3);
lean_inc(x_77);
lean_inc(x_76);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_6);
x_78 = lean_ctor_get_uint8(x_74, 0);
x_79 = lean_ctor_get_uint8(x_74, 1);
x_80 = lean_ctor_get_uint8(x_74, 2);
x_81 = lean_ctor_get_uint8(x_74, 3);
x_82 = lean_ctor_get_uint8(x_74, 4);
x_83 = lean_ctor_get_uint8(x_74, 6);
x_84 = lean_ctor_get_uint8(x_74, 7);
x_85 = lean_ctor_get_uint8(x_74, 8);
x_86 = lean_ctor_get_uint8(x_74, 9);
if (lean_is_exclusive(x_74)) {
 x_87 = x_74;
} else {
 lean_dec_ref(x_74);
 x_87 = lean_box(0);
}
x_88 = 2;
if (lean_is_scalar(x_87)) {
 x_89 = lean_alloc_ctor(0, 0, 10);
} else {
 x_89 = x_87;
}
lean_ctor_set_uint8(x_89, 0, x_78);
lean_ctor_set_uint8(x_89, 1, x_79);
lean_ctor_set_uint8(x_89, 2, x_80);
lean_ctor_set_uint8(x_89, 3, x_81);
lean_ctor_set_uint8(x_89, 4, x_82);
lean_ctor_set_uint8(x_89, 5, x_88);
lean_ctor_set_uint8(x_89, 6, x_83);
lean_ctor_set_uint8(x_89, 7, x_84);
lean_ctor_set_uint8(x_89, 8, x_85);
lean_ctor_set_uint8(x_89, 9, x_86);
x_90 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_75);
lean_ctor_set(x_90, 2, x_76);
lean_ctor_set(x_90, 3, x_77);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_90);
x_91 = l___private_Lean_Meta_Tactic_Simp_SimpLemmas_0__Lean_Meta_preprocessProof(x_2, x_90, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_91) == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; size_t x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
lean_dec(x_91);
x_94 = lean_array_get_size(x_92);
x_95 = lean_usize_of_nat(x_94);
lean_dec(x_94);
x_96 = x_92;
x_97 = lean_box(x_3);
x_98 = lean_box_usize(x_95);
x_99 = l_Lean_Meta_mkSimpLemmas___boxed__const__1;
x_100 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at_Lean_Meta_mkSimpLemmas___spec__1___boxed), 12, 7);
lean_closure_set(x_100, 0, x_1);
lean_closure_set(x_100, 1, x_97);
lean_closure_set(x_100, 2, x_4);
lean_closure_set(x_100, 3, x_5);
lean_closure_set(x_100, 4, x_98);
lean_closure_set(x_100, 5, x_99);
lean_closure_set(x_100, 6, x_96);
x_101 = x_100;
x_102 = lean_apply_5(x_101, x_90, x_7, x_8, x_9, x_93);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_105 = x_102;
} else {
 lean_dec_ref(x_102);
 x_105 = lean_box(0);
}
if (lean_is_scalar(x_105)) {
 x_106 = lean_alloc_ctor(0, 2, 0);
} else {
 x_106 = x_105;
}
lean_ctor_set(x_106, 0, x_103);
lean_ctor_set(x_106, 1, x_104);
return x_106;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_107 = lean_ctor_get(x_102, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_102, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_102)) {
 lean_ctor_release(x_102, 0);
 lean_ctor_release(x_102, 1);
 x_109 = x_102;
} else {
 lean_dec_ref(x_102);
 x_109 = lean_box(0);
}
if (lean_is_scalar(x_109)) {
 x_110 = lean_alloc_ctor(1, 2, 0);
} else {
 x_110 = x_109;
}
lean_ctor_set(x_110, 0, x_107);
lean_ctor_set(x_110, 1, x_108);
return x_110;
}
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
lean_dec(x_90);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_111 = lean_ctor_get(x_91, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_91, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_113 = x_91;
} else {
 lean_dec_ref(x_91);
 x_113 = lean_box(0);
}
if (lean_is_scalar(x_113)) {
 x_114 = lean_alloc_ctor(1, 2, 0);
} else {
 x_114 = x_113;
}
lean_ctor_set(x_114, 0, x_111);
lean_ctor_set(x_114, 1, x_112);
return x_114;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_mkSimpLemmas___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; size_t x_14; size_t x_15; lean_object* x_16; 
x_13 = lean_unbox(x_2);
lean_dec(x_2);
x_14 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_15 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_16 = l_Array_mapMUnsafe_map___at_Lean_Meta_mkSimpLemmas___spec__1(x_1, x_13, x_3, x_4, x_14, x_15, x_7, x_8, x_9, x_10, x_11, x_12);
return x_16;
}
}
lean_object* l_Lean_Meta_mkSimpLemmas___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_3);
lean_dec(x_3);
x_12 = l_Lean_Meta_mkSimpLemmas(x_1, x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Meta_SimpLemmas_add_getName_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_SimpLemmas_add_getName_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_SimpLemmas_add_getName_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_SimpLemmas_add_getName_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_Expr_getAppFn(x_2);
x_9 = l_Lean_Expr_isConst(x_8);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = l_Lean_Expr_isFVar(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_8);
lean_dec(x_3);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_7);
return x_12;
}
else
{
lean_object* x_13; 
x_13 = l_Lean_Meta_getFVarLocalDecl(x_8, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_8);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = l_Lean_LocalDecl_userName(x_15);
lean_dec(x_15);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_13, 0);
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_13);
x_20 = l_Lean_LocalDecl_userName(x_18);
lean_dec(x_18);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_13);
if (x_23 == 0)
{
return x_13;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_13, 0);
x_25 = lean_ctor_get(x_13, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_13);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_3);
x_27 = l_Lean_Expr_constName_x21(x_8);
lean_dec(x_8);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_7);
return x_29;
}
}
else
{
lean_object* x_30; 
lean_dec(x_3);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_1);
lean_ctor_set(x_30, 1, x_7);
return x_30;
}
}
}
lean_object* l_Lean_Meta_SimpLemmas_add_getName_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_SimpLemmas_add_getName_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Meta_SimpLemmas_add(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = l_Lean_Expr_isConst(x_3);
if (x_12 == 0)
{
lean_object* x_13; 
lean_inc(x_7);
x_13 = l_Lean_Meta_SimpLemmas_add_getName_x3f(x_6, x_3, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Meta_mkSimpLemmas(x_2, x_3, x_4, x_5, x_14, x_7, x_8, x_9, x_10, x_15);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_array_get_size(x_18);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_nat_dec_lt(x_20, x_19);
if (x_21 == 0)
{
lean_dec(x_19);
lean_dec(x_18);
lean_ctor_set(x_16, 0, x_1);
return x_16;
}
else
{
uint8_t x_22; 
x_22 = lean_nat_dec_le(x_19, x_19);
if (x_22 == 0)
{
lean_dec(x_19);
lean_dec(x_18);
lean_ctor_set(x_16, 0, x_1);
return x_16;
}
else
{
size_t x_23; size_t x_24; lean_object* x_25; 
x_23 = 0;
x_24 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_25 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_addConst___spec__1(x_18, x_23, x_24, x_1);
lean_dec(x_18);
lean_ctor_set(x_16, 0, x_25);
return x_16;
}
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_26 = lean_ctor_get(x_16, 0);
x_27 = lean_ctor_get(x_16, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_16);
x_28 = lean_array_get_size(x_26);
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_nat_dec_lt(x_29, x_28);
if (x_30 == 0)
{
lean_object* x_31; 
lean_dec(x_28);
lean_dec(x_26);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_1);
lean_ctor_set(x_31, 1, x_27);
return x_31;
}
else
{
uint8_t x_32; 
x_32 = lean_nat_dec_le(x_28, x_28);
if (x_32 == 0)
{
lean_object* x_33; 
lean_dec(x_28);
lean_dec(x_26);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_27);
return x_33;
}
else
{
size_t x_34; size_t x_35; lean_object* x_36; lean_object* x_37; 
x_34 = 0;
x_35 = lean_usize_of_nat(x_28);
lean_dec(x_28);
x_36 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_SimpLemmas_addConst___spec__1(x_26, x_34, x_35, x_1);
lean_dec(x_26);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_27);
return x_37;
}
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_16);
if (x_38 == 0)
{
return x_16;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_16, 0);
x_40 = lean_ctor_get(x_16, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_16);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_13);
if (x_42 == 0)
{
return x_13;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_13, 0);
x_44 = lean_ctor_get(x_13, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_13);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_6);
lean_dec(x_2);
x_46 = l_Lean_Expr_constName_x21(x_3);
lean_dec(x_3);
x_47 = l_Lean_Meta_SimpLemmas_addConst(x_1, x_46, x_4, x_5, x_7, x_8, x_9, x_10, x_11);
return x_47;
}
}
}
lean_object* l_Lean_Meta_SimpLemmas_add___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_4);
lean_dec(x_4);
x_13 = l_Lean_Meta_SimpLemmas_add(x_1, x_2, x_3, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_ScopedEnvExtension(lean_object*);
lean_object* initialize_Lean_Util_Recognizers(lean_object*);
lean_object* initialize_Lean_Meta_LevelDefEq(lean_object*);
lean_object* initialize_Lean_Meta_DiscrTree(lean_object*);
lean_object* initialize_Lean_Meta_AppBuilder(lean_object*);
lean_object* initialize_Lean_Meta_Tactic_AuxLemma(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_Tactic_Simp_SimpLemmas(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ScopedEnvExtension(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Recognizers(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LevelDefEq(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DiscrTree(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_AuxLemma(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_SimpLemma_name_x3f___default = _init_l_Lean_Meta_SimpLemma_name_x3f___default();
lean_mark_persistent(l_Lean_Meta_SimpLemma_name_x3f___default);
l_Lean_Meta_instInhabitedSimpLemma = _init_l_Lean_Meta_instInhabitedSimpLemma();
lean_mark_persistent(l_Lean_Meta_instInhabitedSimpLemma);
l_Lean_Meta_SimpLemmas_pre___default = _init_l_Lean_Meta_SimpLemmas_pre___default();
lean_mark_persistent(l_Lean_Meta_SimpLemmas_pre___default);
l_Lean_Meta_SimpLemmas_post___default = _init_l_Lean_Meta_SimpLemmas_post___default();
lean_mark_persistent(l_Lean_Meta_SimpLemmas_post___default);
l_Std_PersistentHashMap_empty___at_Lean_Meta_SimpLemmas_lemmaNames___default___spec__1 = _init_l_Std_PersistentHashMap_empty___at_Lean_Meta_SimpLemmas_lemmaNames___default___spec__1();
lean_mark_persistent(l_Std_PersistentHashMap_empty___at_Lean_Meta_SimpLemmas_lemmaNames___default___spec__1);
l_Lean_Meta_SimpLemmas_lemmaNames___default = _init_l_Lean_Meta_SimpLemmas_lemmaNames___default();
lean_mark_persistent(l_Lean_Meta_SimpLemmas_lemmaNames___default);
l_Lean_Meta_SimpLemmas_toUnfold___default = _init_l_Lean_Meta_SimpLemmas_toUnfold___default();
lean_mark_persistent(l_Lean_Meta_SimpLemmas_toUnfold___default);
l_Lean_Meta_SimpLemmas_erased___default = _init_l_Lean_Meta_SimpLemmas_erased___default();
lean_mark_persistent(l_Lean_Meta_SimpLemmas_erased___default);
l_Lean_Meta_instInhabitedSimpLemmas = _init_l_Lean_Meta_instInhabitedSimpLemmas();
lean_mark_persistent(l_Lean_Meta_instInhabitedSimpLemmas);
l_Lean_Meta_instInhabitedSimpEntry = _init_l_Lean_Meta_instInhabitedSimpEntry();
lean_mark_persistent(l_Lean_Meta_instInhabitedSimpEntry);
res = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_476_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_simpExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_simpExtension);
lean_dec_ref(res);
res = l_Lean_Meta_initFn____x40_Lean_Meta_Tactic_Simp_SimpLemmas___hyg_2305_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_SimpLemma_getValue___boxed__const__1 = _init_l_Lean_Meta_SimpLemma_getValue___boxed__const__1();
lean_mark_persistent(l_Lean_Meta_SimpLemma_getValue___boxed__const__1);
l_Lean_Meta_mkSimpLemmas___boxed__const__1 = _init_l_Lean_Meta_mkSimpLemmas___boxed__const__1();
lean_mark_persistent(l_Lean_Meta_mkSimpLemmas___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
