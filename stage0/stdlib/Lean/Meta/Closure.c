// Lean compiler output
// Module: Lean.Meta.Closure
// Imports: Init Std.ShareCommon Lean.MetavarContext Lean.Environment Lean.Util.FoldConsts Lean.Meta.Basic Lean.Meta.Check
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
lean_object* l_Lean_Meta_Closure_mkBinding(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_visitLevel_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_forall(lean_object*, uint8_t, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_process___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkBinding___spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Meta_Closure_visitLevel___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_pushFVarArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_expr_update_mdata(lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_back___at_Lean_Meta_Closure_pickNextToProcess_x3f___spec__1___boxed(lean_object*);
lean_object* l_Lean_Meta_Closure_process_match__2___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Level_hasMVar(lean_object*);
lean_object* l_Lean_Meta_Closure_State_newLocalDecls___default;
lean_object* l_Lean_Meta_Closure_visitExpr_match__1(lean_object*);
lean_object* l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
uint8_t l_Std_AssocList_contains___at_Lean_Meta_Closure_visitLevel___spec__4(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_get_x21(lean_object*, lean_object*);
lean_object* l_Lean_throwKernelException___at_Lean_Meta_mkAuxDefinition___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Level_hash(lean_object*);
lean_object* l___private_Lean_MonadEnv_0__Lean_checkUnsupported___at_Lean_Meta_mkAuxDefinition___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_collectExprAux_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_visitLevel_match__1(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_Closure_State_exprFVarArgs___default;
lean_object* l_Lean_Meta_Closure_State_nextLevelIdx___default;
lean_object* l_Lean_Meta_Closure_State_nextExprIdx___default;
uint8_t l_Lean_Level_hasParam(lean_object*);
lean_object* l_Lean_Meta_Closure_State_levelArgs___default;
lean_object* l_Std_AssocList_contains___at_Lean_Meta_Closure_visitLevel___spec__4___boxed(lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_Meta_mkAuxDefinitionFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxDefinition(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__2(lean_object*, lean_object*);
uint32_t l_UInt32_add(uint32_t, uint32_t);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
size_t l_UInt64_toUSize(uint64_t);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_lower_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_visitExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_pushFVarArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_visitLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_collectLevelAux_match__1(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_addDecl___at_Lean_Meta_mkAuxDefinition___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkNewLevelParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkNewLevelParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkLambda(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLevelParam(lean_object*);
lean_object* l_Lean_Meta_getZetaFVarIds___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_collectExprAux_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KernelException_toMessageData(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_mkBinding___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Meta_Closure_State_newLocalDeclsForMVars___default;
lean_object* l_Lean_compileDecl___at_Lean_Meta_mkAuxDefinition___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_level_update_max(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_process(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Declaration_foldExprM___at_Lean_Meta_mkAuxDefinition___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashMapImp___rarg(lean_object*);
lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f_match__1(lean_object*);
lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_State_visitedLevel___default;
lean_object* l_Array_back___at_Lean_Meta_Closure_pickNextToProcess_x3f___spec__1(lean_object*);
lean_object* l_Lean_Meta_Closure_collectExprAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl___at_Lean_Meta_mkAuxDefinition___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_process___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___at_Lean_Meta_Closure_collectExprAux___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_process___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_preprocess___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_collectExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkNextUserName(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
size_t lean_usize_modn(size_t, lean_object*);
lean_object* l_Lean_getMaxHeight(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert___at_Lean_Meta_Closure_visitLevel___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_MonadEnv_0__Lean_checkUnsupported___at_Lean_Meta_mkAuxDefinition___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___rarg(lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
extern lean_object* l_Lean_instInhabitedLocalDecl;
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkValueTypeClosure(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_State_exprMVarArgs___default;
lean_object* l_Lean_Meta_Closure_mkBinding___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_visitExpr_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_preprocess___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_resetZetaFVarIds___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_let(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_preprocess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
uint8_t l_Lean_Expr_Data_binderInfo(uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_replaceFVarIdAtLocalDecl(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_pushLocalDecl(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_proj(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkNextUserName___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkLambda___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_State_levelParams___default;
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*);
lean_object* l_Lean_Meta_Closure_pushLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_FindImpl_initCache;
lean_object* l_Lean_Meta_Closure_collectLevelAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Lean_Meta_Closure_visitLevel___spec__7(lean_object*, lean_object*);
lean_object* lean_level_update_imax(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* l_Lean_Meta_Closure_process_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_State_toProcess___default;
lean_object* l_Lean_Meta_getLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_State_visitedExpr___default;
lean_object* lean_expr_update_sort(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_collectLevelAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_Meta_Closure_collectLevelAux_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkValueTypeClosure_match__1(lean_object*);
lean_object* l_List_mapM___at_Lean_Meta_Closure_collectExprAux___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_expand___at_Lean_Meta_Closure_visitLevel___spec__5(lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkForall___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_collectExprAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkForall(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___at_Lean_Meta_Closure_collectExprAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkLambda___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_collectExprAux_match__2(lean_object*);
lean_object* l_List_mapM___at_Lean_Meta_Closure_collectExprAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___at___private_Lean_MonadEnv_0__Lean_checkUnsupported___spec__2___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkNextUserName___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkBinding___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkForall___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkValueTypeClosure_match__1___rarg(lean_object*, lean_object*);
lean_object* lean_expr_update_lambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxDefinition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
lean_object* lean_level_update_succ(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLet(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Std_mkHashMap___at_Lean_Meta_Closure_State_visitedLevel___default___spec__1(lean_object*);
lean_object* l_Lean_Meta_Closure_process_match__2(lean_object*);
lean_object* l_Lean_Meta_getMVarDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_throwKernelException___at_Lean_Meta_mkAuxDefinition___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_pickNextToProcessAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___boxed(lean_object*);
lean_object* l_Lean_Meta_mkAuxDefinition___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxDefinition___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_instInhabitedToProcessElement;
lean_object* l_Lean_Expr_FindImpl_findM_x3f_visit(lean_object*, size_t, lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___at_Lean_Meta_Closure_collectExprAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkForall___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_compile_decl(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_collectExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_collectLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_collectExprAux_match__1(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* lean_expr_update_app(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_collectExprAux_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_State_newLetDecls___default;
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Meta_Closure_process_match__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_mkBinding___spec__1(size_t, size_t, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_addDecl___at_Lean_Meta_mkAuxDefinition___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Declaration_foldExprM___at_Lean_Meta_mkAuxDefinition___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkNextUserName___boxed(lean_object*);
lean_object* l_Lean_Meta_Closure_collectLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_update_const(lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___at_Lean_Meta_Closure_collectExprAux___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_pushToProcess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkLambda___boxed(lean_object*, lean_object*);
lean_object* l_Std_AssocList_replace___at_Lean_Meta_Closure_visitLevel___spec__8(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_check(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedLevel;
lean_object* l_Lean_Meta_Closure_pushToProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_add_decl(lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Closure_instInhabitedToProcessElement() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
lean_object* l_Std_mkHashMap___at_Lean_Meta_Closure_State_visitedLevel___default___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Closure_State_visitedLevel___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Closure_State_visitedExpr___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Closure_State_levelParams___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Closure_State_nextLevelIdx___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(1u);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Closure_State_levelArgs___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Closure_State_newLocalDecls___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Closure_State_newLocalDeclsForMVars___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Closure_State_newLetDecls___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Closure_State_nextExprIdx___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(1u);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_Closure_State_exprMVarArgs___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Closure_State_exprFVarArgs___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_Closure_State_toProcess___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Closure_visitLevel_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_Closure_visitLevel_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Closure_visitLevel_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__2(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_level_eq(x_4, x_1);
if (x_7 == 0)
{
x_2 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_5);
return x_9;
}
}
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint64_t x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = l_Lean_Level_hash(x_2);
x_6 = (size_t)x_5;
x_7 = lean_usize_modn(x_6, x_4);
lean_dec(x_4);
x_8 = lean_array_uget(x_3, x_7);
x_9 = l_Std_AssocList_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__2(x_2, x_8);
lean_dec(x_8);
return x_9;
}
}
uint8_t l_Std_AssocList_contains___at_Lean_Meta_Closure_visitLevel___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_level_eq(x_4, x_1);
if (x_6 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
}
}
lean_object* l_Std_AssocList_foldlM___at_Lean_Meta_Closure_visitLevel___spec__7(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 2);
x_6 = lean_array_get_size(x_1);
x_7 = l_Lean_Level_hash(x_4);
x_8 = (size_t)x_7;
x_9 = lean_usize_modn(x_8, x_6);
lean_dec(x_6);
x_10 = lean_array_uget(x_1, x_9);
lean_ctor_set(x_2, 2, x_10);
x_11 = lean_array_uset(x_1, x_9, x_2);
x_1 = x_11;
x_2 = x_5;
goto _start;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_2);
x_16 = lean_array_get_size(x_1);
x_17 = l_Lean_Level_hash(x_13);
x_18 = (size_t)x_17;
x_19 = lean_usize_modn(x_18, x_16);
lean_dec(x_16);
x_20 = lean_array_uget(x_1, x_19);
x_21 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_21, 0, x_13);
lean_ctor_set(x_21, 1, x_14);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_array_uset(x_1, x_19, x_21);
x_1 = x_22;
x_2 = x_15;
goto _start;
}
}
}
}
lean_object* l_Std_HashMapImp_moveEntries___at_Lean_Meta_Closure_visitLevel___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_1, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_box(0);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = l_Std_AssocList_foldlM___at_Lean_Meta_Closure_visitLevel___spec__7(x_3, x_6);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
lean_object* l_Std_HashMapImp_expand___at_Lean_Meta_Closure_visitLevel___spec__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_mul(x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_mk_array(x_5, x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Std_HashMapImp_moveEntries___at_Lean_Meta_Closure_visitLevel___spec__6(x_8, x_2, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Std_AssocList_replace___at_Lean_Meta_Closure_visitLevel___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_ctor_get(x_3, 2);
x_9 = lean_level_eq(x_6, x_1);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = l_Std_AssocList_replace___at_Lean_Meta_Closure_visitLevel___spec__8(x_1, x_2, x_8);
lean_ctor_set(x_3, 2, x_10);
return x_3;
}
else
{
lean_dec(x_7);
lean_dec(x_6);
lean_ctor_set(x_3, 1, x_2);
lean_ctor_set(x_3, 0, x_1);
return x_3;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 2);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_14 = lean_level_eq(x_11, x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = l_Std_AssocList_replace___at_Lean_Meta_Closure_visitLevel___spec__8(x_1, x_2, x_13);
x_16 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_12);
lean_dec(x_11);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_1);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 2, x_13);
return x_17;
}
}
}
}
}
lean_object* l_Std_HashMapImp_insert___at_Lean_Meta_Closure_visitLevel___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint64_t x_8; size_t x_9; size_t x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = l_Lean_Level_hash(x_2);
x_9 = (size_t)x_8;
x_10 = lean_usize_modn(x_9, x_7);
x_11 = lean_array_uget(x_6, x_10);
x_12 = l_Std_AssocList_contains___at_Lean_Meta_Closure_visitLevel___spec__4(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_15 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_15, 0, x_2);
lean_ctor_set(x_15, 1, x_3);
lean_ctor_set(x_15, 2, x_11);
x_16 = lean_array_uset(x_6, x_10, x_15);
x_17 = lean_nat_dec_le(x_14, x_7);
lean_dec(x_7);
if (x_17 == 0)
{
lean_object* x_18; 
lean_free_object(x_1);
x_18 = l_Std_HashMapImp_expand___at_Lean_Meta_Closure_visitLevel___spec__5(x_14, x_16);
return x_18;
}
else
{
lean_ctor_set(x_1, 1, x_16);
lean_ctor_set(x_1, 0, x_14);
return x_1;
}
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_7);
x_19 = l_Std_AssocList_replace___at_Lean_Meta_Closure_visitLevel___spec__8(x_2, x_3, x_11);
x_20 = lean_array_uset(x_6, x_10, x_19);
lean_ctor_set(x_1, 1, x_20);
return x_1;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint64_t x_24; size_t x_25; size_t x_26; lean_object* x_27; uint8_t x_28; 
x_21 = lean_ctor_get(x_1, 0);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_1);
x_23 = lean_array_get_size(x_22);
x_24 = l_Lean_Level_hash(x_2);
x_25 = (size_t)x_24;
x_26 = lean_usize_modn(x_25, x_23);
x_27 = lean_array_uget(x_22, x_26);
x_28 = l_Std_AssocList_contains___at_Lean_Meta_Closure_visitLevel___spec__4(x_2, x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_21, x_29);
lean_dec(x_21);
x_31 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_31, 0, x_2);
lean_ctor_set(x_31, 1, x_3);
lean_ctor_set(x_31, 2, x_27);
x_32 = lean_array_uset(x_22, x_26, x_31);
x_33 = lean_nat_dec_le(x_30, x_23);
lean_dec(x_23);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = l_Std_HashMapImp_expand___at_Lean_Meta_Closure_visitLevel___spec__5(x_30, x_32);
return x_34;
}
else
{
lean_object* x_35; 
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_30);
lean_ctor_set(x_35, 1, x_32);
return x_35;
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_23);
x_36 = l_Std_AssocList_replace___at_Lean_Meta_Closure_visitLevel___spec__8(x_2, x_3, x_27);
x_37 = lean_array_uset(x_22, x_26, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_21);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l_Lean_Meta_Closure_visitLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_55; 
x_55 = l_Lean_Level_hasMVar(x_2);
if (x_55 == 0)
{
uint8_t x_56; 
x_56 = l_Lean_Level_hasParam(x_2);
if (x_56 == 0)
{
lean_object* x_57; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_2);
lean_ctor_set(x_57, 1, x_9);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_58 = lean_st_ref_get(x_8, x_9);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_60 = lean_st_ref_get(x_4, x_59);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_10 = x_61;
x_11 = x_62;
goto block_54;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_63 = lean_st_ref_get(x_8, x_9);
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
lean_dec(x_63);
x_65 = lean_st_ref_get(x_4, x_64);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_10 = x_66;
x_11 = x_67;
goto block_54;
}
block_54:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__1(x_12, x_2);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
lean_inc(x_8);
lean_inc(x_4);
lean_inc(x_2);
x_14 = lean_apply_8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_st_ref_get(x_8, x_16);
lean_dec(x_8);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_st_ref_take(x_4, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = lean_ctor_get(x_20, 0);
lean_inc(x_15);
x_24 = l_Std_HashMapImp_insert___at_Lean_Meta_Closure_visitLevel___spec__3(x_23, x_2, x_15);
lean_ctor_set(x_20, 0, x_24);
x_25 = lean_st_ref_set(x_4, x_20, x_21);
lean_dec(x_4);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_15);
return x_25;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_15);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_30 = lean_ctor_get(x_20, 0);
x_31 = lean_ctor_get(x_20, 1);
x_32 = lean_ctor_get(x_20, 2);
x_33 = lean_ctor_get(x_20, 3);
x_34 = lean_ctor_get(x_20, 4);
x_35 = lean_ctor_get(x_20, 5);
x_36 = lean_ctor_get(x_20, 6);
x_37 = lean_ctor_get(x_20, 7);
x_38 = lean_ctor_get(x_20, 8);
x_39 = lean_ctor_get(x_20, 9);
x_40 = lean_ctor_get(x_20, 10);
x_41 = lean_ctor_get(x_20, 11);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_20);
lean_inc(x_15);
x_42 = l_Std_HashMapImp_insert___at_Lean_Meta_Closure_visitLevel___spec__3(x_30, x_2, x_15);
x_43 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_31);
lean_ctor_set(x_43, 2, x_32);
lean_ctor_set(x_43, 3, x_33);
lean_ctor_set(x_43, 4, x_34);
lean_ctor_set(x_43, 5, x_35);
lean_ctor_set(x_43, 6, x_36);
lean_ctor_set(x_43, 7, x_37);
lean_ctor_set(x_43, 8, x_38);
lean_ctor_set(x_43, 9, x_39);
lean_ctor_set(x_43, 10, x_40);
lean_ctor_set(x_43, 11, x_41);
x_44 = lean_st_ref_set(x_4, x_43, x_21);
lean_dec(x_4);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_46 = x_44;
} else {
 lean_dec_ref(x_44);
 x_46 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_46;
}
lean_ctor_set(x_47, 0, x_15);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
x_48 = !lean_is_exclusive(x_14);
if (x_48 == 0)
{
return x_14;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_14, 0);
x_50 = lean_ctor_get(x_14, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_14);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_52 = lean_ctor_get(x_13, 0);
lean_inc(x_52);
lean_dec(x_13);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_11);
return x_53;
}
}
}
}
lean_object* l_Std_AssocList_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Std_AssocList_contains___at_Lean_Meta_Closure_visitLevel___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Std_AssocList_contains___at_Lean_Meta_Closure_visitLevel___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_Meta_Closure_visitExpr_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Meta_Closure_visitExpr_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Closure_visitExpr_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Closure_visitExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_55; 
x_55 = l_Lean_Expr_hasLevelParam(x_2);
if (x_55 == 0)
{
uint8_t x_56; 
x_56 = l_Lean_Expr_hasFVar(x_2);
if (x_56 == 0)
{
uint8_t x_57; 
x_57 = l_Lean_Expr_hasMVar(x_2);
if (x_57 == 0)
{
lean_object* x_58; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_2);
lean_ctor_set(x_58, 1, x_9);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_59 = lean_st_ref_get(x_8, x_9);
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
lean_dec(x_59);
x_61 = lean_st_ref_get(x_4, x_60);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_10 = x_62;
x_11 = x_63;
goto block_54;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_64 = lean_st_ref_get(x_8, x_9);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = lean_st_ref_get(x_4, x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_10 = x_67;
x_11 = x_68;
goto block_54;
}
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_69 = lean_st_ref_get(x_8, x_9);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = lean_st_ref_get(x_4, x_70);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_10 = x_72;
x_11 = x_73;
goto block_54;
}
block_54:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_12, x_2);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
lean_inc(x_8);
lean_inc(x_4);
lean_inc(x_2);
x_14 = lean_apply_8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_st_ref_get(x_8, x_16);
lean_dec(x_8);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_st_ref_take(x_4, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_15);
x_24 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_23, x_2, x_15);
lean_ctor_set(x_20, 1, x_24);
x_25 = lean_st_ref_set(x_4, x_20, x_21);
lean_dec(x_4);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
lean_ctor_set(x_25, 0, x_15);
return x_25;
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_15);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_30 = lean_ctor_get(x_20, 0);
x_31 = lean_ctor_get(x_20, 1);
x_32 = lean_ctor_get(x_20, 2);
x_33 = lean_ctor_get(x_20, 3);
x_34 = lean_ctor_get(x_20, 4);
x_35 = lean_ctor_get(x_20, 5);
x_36 = lean_ctor_get(x_20, 6);
x_37 = lean_ctor_get(x_20, 7);
x_38 = lean_ctor_get(x_20, 8);
x_39 = lean_ctor_get(x_20, 9);
x_40 = lean_ctor_get(x_20, 10);
x_41 = lean_ctor_get(x_20, 11);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_20);
lean_inc(x_15);
x_42 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_31, x_2, x_15);
x_43 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_43, 0, x_30);
lean_ctor_set(x_43, 1, x_42);
lean_ctor_set(x_43, 2, x_32);
lean_ctor_set(x_43, 3, x_33);
lean_ctor_set(x_43, 4, x_34);
lean_ctor_set(x_43, 5, x_35);
lean_ctor_set(x_43, 6, x_36);
lean_ctor_set(x_43, 7, x_37);
lean_ctor_set(x_43, 8, x_38);
lean_ctor_set(x_43, 9, x_39);
lean_ctor_set(x_43, 10, x_40);
lean_ctor_set(x_43, 11, x_41);
x_44 = lean_st_ref_set(x_4, x_43, x_21);
lean_dec(x_4);
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_44)) {
 lean_ctor_release(x_44, 0);
 lean_ctor_release(x_44, 1);
 x_46 = x_44;
} else {
 lean_dec_ref(x_44);
 x_46 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_46;
}
lean_ctor_set(x_47, 0, x_15);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
else
{
uint8_t x_48; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
x_48 = !lean_is_exclusive(x_14);
if (x_48 == 0)
{
return x_14;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_14, 0);
x_50 = lean_ctor_get(x_14, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_14);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_52 = lean_ctor_get(x_13, 0);
lean_inc(x_52);
lean_dec(x_13);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_11);
return x_53;
}
}
}
}
lean_object* l_Lean_Meta_Closure_mkNewLevelParam(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_3, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_box(0);
x_15 = lean_mk_string("u");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_ctor_get(x_12, 3);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_name_append_index_after(x_16, x_17);
x_19 = lean_st_ref_get(x_7, x_13);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_st_ref_take(x_3, x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = !lean_is_exclusive(x_22);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_25 = lean_ctor_get(x_22, 2);
x_26 = lean_ctor_get(x_22, 3);
x_27 = lean_ctor_get(x_22, 4);
lean_inc(x_18);
x_28 = lean_array_push(x_25, x_18);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_26, x_29);
lean_dec(x_26);
x_31 = lean_array_push(x_27, x_1);
lean_ctor_set(x_22, 4, x_31);
lean_ctor_set(x_22, 3, x_30);
lean_ctor_set(x_22, 2, x_28);
x_32 = lean_st_ref_set(x_3, x_22, x_23);
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
x_35 = l_Lean_mkLevelParam(x_18);
lean_ctor_set(x_32, 0, x_35);
return x_32;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
lean_dec(x_32);
x_37 = l_Lean_mkLevelParam(x_18);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_39 = lean_ctor_get(x_22, 0);
x_40 = lean_ctor_get(x_22, 1);
x_41 = lean_ctor_get(x_22, 2);
x_42 = lean_ctor_get(x_22, 3);
x_43 = lean_ctor_get(x_22, 4);
x_44 = lean_ctor_get(x_22, 5);
x_45 = lean_ctor_get(x_22, 6);
x_46 = lean_ctor_get(x_22, 7);
x_47 = lean_ctor_get(x_22, 8);
x_48 = lean_ctor_get(x_22, 9);
x_49 = lean_ctor_get(x_22, 10);
x_50 = lean_ctor_get(x_22, 11);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_22);
lean_inc(x_18);
x_51 = lean_array_push(x_41, x_18);
x_52 = lean_unsigned_to_nat(1u);
x_53 = lean_nat_add(x_42, x_52);
lean_dec(x_42);
x_54 = lean_array_push(x_43, x_1);
x_55 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_55, 0, x_39);
lean_ctor_set(x_55, 1, x_40);
lean_ctor_set(x_55, 2, x_51);
lean_ctor_set(x_55, 3, x_53);
lean_ctor_set(x_55, 4, x_54);
lean_ctor_set(x_55, 5, x_44);
lean_ctor_set(x_55, 6, x_45);
lean_ctor_set(x_55, 7, x_46);
lean_ctor_set(x_55, 8, x_47);
lean_ctor_set(x_55, 9, x_48);
lean_ctor_set(x_55, 10, x_49);
lean_ctor_set(x_55, 11, x_50);
x_56 = lean_st_ref_set(x_3, x_55, x_23);
x_57 = lean_ctor_get(x_56, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_58 = x_56;
} else {
 lean_dec_ref(x_56);
 x_58 = lean_box(0);
}
x_59 = l_Lean_mkLevelParam(x_18);
if (lean_is_scalar(x_58)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_58;
}
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
return x_60;
}
}
}
lean_object* l_Lean_Meta_Closure_mkNewLevelParam___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_Closure_mkNewLevelParam(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_Closure_collectLevelAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint64_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get_uint64(x_1, 0);
x_9 = lean_box_uint64(x_8);
x_10 = lean_apply_2(x_7, x_1, x_9);
return x_10;
}
case 1:
{
lean_object* x_11; uint64_t x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
x_13 = lean_box_uint64(x_12);
x_14 = lean_apply_3(x_2, x_1, x_11, x_13);
return x_14;
}
case 2:
{
lean_object* x_15; lean_object* x_16; uint64_t x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
x_17 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_18 = lean_box_uint64(x_17);
x_19 = lean_apply_4(x_3, x_1, x_15, x_16, x_18);
return x_19;
}
case 3:
{
lean_object* x_20; lean_object* x_21; uint64_t x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
x_22 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_23 = lean_box_uint64(x_22);
x_24 = lean_apply_4(x_4, x_1, x_20, x_21, x_23);
return x_24;
}
case 4:
{
lean_object* x_25; uint64_t x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
x_27 = lean_box_uint64(x_26);
x_28 = lean_apply_3(x_6, x_1, x_25, x_27);
return x_28;
}
default: 
{
lean_object* x_29; uint64_t x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_29 = lean_ctor_get(x_1, 0);
lean_inc(x_29);
x_30 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
x_31 = lean_box_uint64(x_30);
x_32 = lean_apply_3(x_5, x_1, x_29, x_31);
return x_32;
}
}
}
}
lean_object* l_Lean_Meta_Closure_collectLevelAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Closure_collectLevelAux_match__1___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Closure_collectLevelAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_48; 
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_1);
lean_ctor_set(x_48, 1, x_8);
return x_48;
}
case 1:
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_91; 
x_49 = lean_ctor_get(x_1, 0);
lean_inc(x_49);
x_91 = l_Lean_Level_hasMVar(x_49);
if (x_91 == 0)
{
uint8_t x_92; 
x_92 = l_Lean_Level_hasParam(x_49);
if (x_92 == 0)
{
lean_object* x_93; 
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_49);
lean_ctor_set(x_93, 1, x_8);
x_9 = x_93;
goto block_47;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_94 = lean_st_ref_get(x_7, x_8);
x_95 = lean_ctor_get(x_94, 1);
lean_inc(x_95);
lean_dec(x_94);
x_96 = lean_st_ref_get(x_3, x_95);
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
lean_dec(x_96);
x_50 = x_97;
x_51 = x_98;
goto block_90;
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_99 = lean_st_ref_get(x_7, x_8);
x_100 = lean_ctor_get(x_99, 1);
lean_inc(x_100);
lean_dec(x_99);
x_101 = lean_st_ref_get(x_3, x_100);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_50 = x_102;
x_51 = x_103;
goto block_90;
}
block_90:
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_50, 0);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__1(x_52, x_49);
lean_dec(x_52);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
lean_inc(x_49);
x_54 = l_Lean_Meta_Closure_collectLevelAux(x_49, x_2, x_3, x_4, x_5, x_6, x_7, x_51);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_st_ref_get(x_7, x_56);
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_59 = lean_st_ref_take(x_3, x_58);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = !lean_is_exclusive(x_60);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_63 = lean_ctor_get(x_60, 0);
lean_inc(x_55);
x_64 = l_Std_HashMapImp_insert___at_Lean_Meta_Closure_visitLevel___spec__3(x_63, x_49, x_55);
lean_ctor_set(x_60, 0, x_64);
x_65 = lean_st_ref_set(x_3, x_60, x_61);
x_66 = !lean_is_exclusive(x_65);
if (x_66 == 0)
{
lean_object* x_67; 
x_67 = lean_ctor_get(x_65, 0);
lean_dec(x_67);
lean_ctor_set(x_65, 0, x_55);
x_9 = x_65;
goto block_47;
}
else
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
lean_dec(x_65);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_55);
lean_ctor_set(x_69, 1, x_68);
x_9 = x_69;
goto block_47;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_70 = lean_ctor_get(x_60, 0);
x_71 = lean_ctor_get(x_60, 1);
x_72 = lean_ctor_get(x_60, 2);
x_73 = lean_ctor_get(x_60, 3);
x_74 = lean_ctor_get(x_60, 4);
x_75 = lean_ctor_get(x_60, 5);
x_76 = lean_ctor_get(x_60, 6);
x_77 = lean_ctor_get(x_60, 7);
x_78 = lean_ctor_get(x_60, 8);
x_79 = lean_ctor_get(x_60, 9);
x_80 = lean_ctor_get(x_60, 10);
x_81 = lean_ctor_get(x_60, 11);
lean_inc(x_81);
lean_inc(x_80);
lean_inc(x_79);
lean_inc(x_78);
lean_inc(x_77);
lean_inc(x_76);
lean_inc(x_75);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_60);
lean_inc(x_55);
x_82 = l_Std_HashMapImp_insert___at_Lean_Meta_Closure_visitLevel___spec__3(x_70, x_49, x_55);
x_83 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_71);
lean_ctor_set(x_83, 2, x_72);
lean_ctor_set(x_83, 3, x_73);
lean_ctor_set(x_83, 4, x_74);
lean_ctor_set(x_83, 5, x_75);
lean_ctor_set(x_83, 6, x_76);
lean_ctor_set(x_83, 7, x_77);
lean_ctor_set(x_83, 8, x_78);
lean_ctor_set(x_83, 9, x_79);
lean_ctor_set(x_83, 10, x_80);
lean_ctor_set(x_83, 11, x_81);
x_84 = lean_st_ref_set(x_3, x_83, x_61);
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_84)) {
 lean_ctor_release(x_84, 0);
 lean_ctor_release(x_84, 1);
 x_86 = x_84;
} else {
 lean_dec_ref(x_84);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_55);
lean_ctor_set(x_87, 1, x_85);
x_9 = x_87;
goto block_47;
}
}
else
{
lean_object* x_88; lean_object* x_89; 
lean_dec(x_49);
x_88 = lean_ctor_get(x_53, 0);
lean_inc(x_88);
lean_dec(x_53);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_51);
x_9 = x_89;
goto block_47;
}
}
}
case 2:
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_206; lean_object* x_207; uint8_t x_247; 
x_104 = lean_ctor_get(x_1, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_1, 1);
lean_inc(x_105);
x_247 = l_Lean_Level_hasMVar(x_104);
if (x_247 == 0)
{
uint8_t x_248; 
x_248 = l_Lean_Level_hasParam(x_104);
if (x_248 == 0)
{
lean_object* x_249; 
x_249 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_249, 0, x_104);
lean_ctor_set(x_249, 1, x_8);
x_106 = x_249;
goto block_205;
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; 
x_250 = lean_st_ref_get(x_7, x_8);
x_251 = lean_ctor_get(x_250, 1);
lean_inc(x_251);
lean_dec(x_250);
x_252 = lean_st_ref_get(x_3, x_251);
x_253 = lean_ctor_get(x_252, 0);
lean_inc(x_253);
x_254 = lean_ctor_get(x_252, 1);
lean_inc(x_254);
lean_dec(x_252);
x_206 = x_253;
x_207 = x_254;
goto block_246;
}
}
else
{
lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; 
x_255 = lean_st_ref_get(x_7, x_8);
x_256 = lean_ctor_get(x_255, 1);
lean_inc(x_256);
lean_dec(x_255);
x_257 = lean_st_ref_get(x_3, x_256);
x_258 = lean_ctor_get(x_257, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_257, 1);
lean_inc(x_259);
lean_dec(x_257);
x_206 = x_258;
x_207 = x_259;
goto block_246;
}
block_205:
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_151; lean_object* x_152; uint8_t x_192; 
x_107 = lean_ctor_get(x_106, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_106, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_106)) {
 lean_ctor_release(x_106, 0);
 lean_ctor_release(x_106, 1);
 x_109 = x_106;
} else {
 lean_dec_ref(x_106);
 x_109 = lean_box(0);
}
x_192 = l_Lean_Level_hasMVar(x_105);
if (x_192 == 0)
{
uint8_t x_193; 
x_193 = l_Lean_Level_hasParam(x_105);
if (x_193 == 0)
{
lean_object* x_194; 
lean_dec(x_109);
x_194 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_194, 0, x_105);
lean_ctor_set(x_194, 1, x_108);
x_110 = x_194;
goto block_150;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_195 = lean_st_ref_get(x_7, x_108);
x_196 = lean_ctor_get(x_195, 1);
lean_inc(x_196);
lean_dec(x_195);
x_197 = lean_st_ref_get(x_3, x_196);
x_198 = lean_ctor_get(x_197, 0);
lean_inc(x_198);
x_199 = lean_ctor_get(x_197, 1);
lean_inc(x_199);
lean_dec(x_197);
x_151 = x_198;
x_152 = x_199;
goto block_191;
}
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_200 = lean_st_ref_get(x_7, x_108);
x_201 = lean_ctor_get(x_200, 1);
lean_inc(x_201);
lean_dec(x_200);
x_202 = lean_st_ref_get(x_3, x_201);
x_203 = lean_ctor_get(x_202, 0);
lean_inc(x_203);
x_204 = lean_ctor_get(x_202, 1);
lean_inc(x_204);
lean_dec(x_202);
x_151 = x_203;
x_152 = x_204;
goto block_191;
}
block_150:
{
if (lean_obj_tag(x_1) == 2)
{
uint8_t x_111; 
x_111 = !lean_is_exclusive(x_110);
if (x_111 == 0)
{
uint8_t x_112; 
x_112 = !lean_is_exclusive(x_1);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; 
x_113 = lean_ctor_get(x_110, 0);
x_114 = lean_level_update_max(x_1, x_107, x_113);
lean_ctor_set(x_110, 0, x_114);
return x_110;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; uint64_t x_118; lean_object* x_119; lean_object* x_120; 
x_115 = lean_ctor_get(x_110, 0);
x_116 = lean_ctor_get(x_1, 0);
x_117 = lean_ctor_get(x_1, 1);
x_118 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_1);
x_119 = lean_alloc_ctor(2, 2, 8);
lean_ctor_set(x_119, 0, x_116);
lean_ctor_set(x_119, 1, x_117);
lean_ctor_set_uint64(x_119, sizeof(void*)*2, x_118);
x_120 = lean_level_update_max(x_119, x_107, x_115);
lean_ctor_set(x_110, 0, x_120);
return x_110;
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; uint64_t x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_121 = lean_ctor_get(x_110, 0);
x_122 = lean_ctor_get(x_110, 1);
lean_inc(x_122);
lean_inc(x_121);
lean_dec(x_110);
x_123 = lean_ctor_get(x_1, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_1, 1);
lean_inc(x_124);
x_125 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_126 = x_1;
} else {
 lean_dec_ref(x_1);
 x_126 = lean_box(0);
}
if (lean_is_scalar(x_126)) {
 x_127 = lean_alloc_ctor(2, 2, 8);
} else {
 x_127 = x_126;
}
lean_ctor_set(x_127, 0, x_123);
lean_ctor_set(x_127, 1, x_124);
lean_ctor_set_uint64(x_127, sizeof(void*)*2, x_125);
x_128 = lean_level_update_max(x_127, x_107, x_121);
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_122);
return x_129;
}
}
else
{
uint8_t x_130; 
lean_dec(x_107);
lean_dec(x_1);
x_130 = !lean_is_exclusive(x_110);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_131 = lean_ctor_get(x_110, 0);
lean_dec(x_131);
x_132 = lean_mk_string("Lean.Level");
x_133 = lean_mk_string("Lean.Level.updateMax!");
x_134 = lean_unsigned_to_nat(496u);
x_135 = lean_unsigned_to_nat(21u);
x_136 = lean_mk_string("max level expected");
x_137 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_132, x_133, x_134, x_135, x_136);
lean_dec(x_136);
lean_dec(x_133);
lean_dec(x_132);
x_138 = l_Lean_instInhabitedLevel;
x_139 = lean_panic_fn(x_138, x_137);
lean_ctor_set(x_110, 0, x_139);
return x_110;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_140 = lean_ctor_get(x_110, 1);
lean_inc(x_140);
lean_dec(x_110);
x_141 = lean_mk_string("Lean.Level");
x_142 = lean_mk_string("Lean.Level.updateMax!");
x_143 = lean_unsigned_to_nat(496u);
x_144 = lean_unsigned_to_nat(21u);
x_145 = lean_mk_string("max level expected");
x_146 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_141, x_142, x_143, x_144, x_145);
lean_dec(x_145);
lean_dec(x_142);
lean_dec(x_141);
x_147 = l_Lean_instInhabitedLevel;
x_148 = lean_panic_fn(x_147, x_146);
x_149 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_140);
return x_149;
}
}
}
block_191:
{
lean_object* x_153; lean_object* x_154; 
x_153 = lean_ctor_get(x_151, 0);
lean_inc(x_153);
lean_dec(x_151);
x_154 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__1(x_153, x_105);
lean_dec(x_153);
if (lean_obj_tag(x_154) == 0)
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; 
lean_dec(x_109);
lean_inc(x_105);
x_155 = l_Lean_Meta_Closure_collectLevelAux(x_105, x_2, x_3, x_4, x_5, x_6, x_7, x_152);
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
lean_dec(x_155);
x_158 = lean_st_ref_get(x_7, x_157);
x_159 = lean_ctor_get(x_158, 1);
lean_inc(x_159);
lean_dec(x_158);
x_160 = lean_st_ref_take(x_3, x_159);
x_161 = lean_ctor_get(x_160, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_160, 1);
lean_inc(x_162);
lean_dec(x_160);
x_163 = !lean_is_exclusive(x_161);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; uint8_t x_167; 
x_164 = lean_ctor_get(x_161, 0);
lean_inc(x_156);
x_165 = l_Std_HashMapImp_insert___at_Lean_Meta_Closure_visitLevel___spec__3(x_164, x_105, x_156);
lean_ctor_set(x_161, 0, x_165);
x_166 = lean_st_ref_set(x_3, x_161, x_162);
x_167 = !lean_is_exclusive(x_166);
if (x_167 == 0)
{
lean_object* x_168; 
x_168 = lean_ctor_get(x_166, 0);
lean_dec(x_168);
lean_ctor_set(x_166, 0, x_156);
x_110 = x_166;
goto block_150;
}
else
{
lean_object* x_169; lean_object* x_170; 
x_169 = lean_ctor_get(x_166, 1);
lean_inc(x_169);
lean_dec(x_166);
x_170 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_170, 0, x_156);
lean_ctor_set(x_170, 1, x_169);
x_110 = x_170;
goto block_150;
}
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_171 = lean_ctor_get(x_161, 0);
x_172 = lean_ctor_get(x_161, 1);
x_173 = lean_ctor_get(x_161, 2);
x_174 = lean_ctor_get(x_161, 3);
x_175 = lean_ctor_get(x_161, 4);
x_176 = lean_ctor_get(x_161, 5);
x_177 = lean_ctor_get(x_161, 6);
x_178 = lean_ctor_get(x_161, 7);
x_179 = lean_ctor_get(x_161, 8);
x_180 = lean_ctor_get(x_161, 9);
x_181 = lean_ctor_get(x_161, 10);
x_182 = lean_ctor_get(x_161, 11);
lean_inc(x_182);
lean_inc(x_181);
lean_inc(x_180);
lean_inc(x_179);
lean_inc(x_178);
lean_inc(x_177);
lean_inc(x_176);
lean_inc(x_175);
lean_inc(x_174);
lean_inc(x_173);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_161);
lean_inc(x_156);
x_183 = l_Std_HashMapImp_insert___at_Lean_Meta_Closure_visitLevel___spec__3(x_171, x_105, x_156);
x_184 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_184, 0, x_183);
lean_ctor_set(x_184, 1, x_172);
lean_ctor_set(x_184, 2, x_173);
lean_ctor_set(x_184, 3, x_174);
lean_ctor_set(x_184, 4, x_175);
lean_ctor_set(x_184, 5, x_176);
lean_ctor_set(x_184, 6, x_177);
lean_ctor_set(x_184, 7, x_178);
lean_ctor_set(x_184, 8, x_179);
lean_ctor_set(x_184, 9, x_180);
lean_ctor_set(x_184, 10, x_181);
lean_ctor_set(x_184, 11, x_182);
x_185 = lean_st_ref_set(x_3, x_184, x_162);
x_186 = lean_ctor_get(x_185, 1);
lean_inc(x_186);
if (lean_is_exclusive(x_185)) {
 lean_ctor_release(x_185, 0);
 lean_ctor_release(x_185, 1);
 x_187 = x_185;
} else {
 lean_dec_ref(x_185);
 x_187 = lean_box(0);
}
if (lean_is_scalar(x_187)) {
 x_188 = lean_alloc_ctor(0, 2, 0);
} else {
 x_188 = x_187;
}
lean_ctor_set(x_188, 0, x_156);
lean_ctor_set(x_188, 1, x_186);
x_110 = x_188;
goto block_150;
}
}
else
{
lean_object* x_189; lean_object* x_190; 
lean_dec(x_105);
x_189 = lean_ctor_get(x_154, 0);
lean_inc(x_189);
lean_dec(x_154);
if (lean_is_scalar(x_109)) {
 x_190 = lean_alloc_ctor(0, 2, 0);
} else {
 x_190 = x_109;
}
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_152);
x_110 = x_190;
goto block_150;
}
}
}
block_246:
{
lean_object* x_208; lean_object* x_209; 
x_208 = lean_ctor_get(x_206, 0);
lean_inc(x_208);
lean_dec(x_206);
x_209 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__1(x_208, x_104);
lean_dec(x_208);
if (lean_obj_tag(x_209) == 0)
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; 
lean_inc(x_104);
x_210 = l_Lean_Meta_Closure_collectLevelAux(x_104, x_2, x_3, x_4, x_5, x_6, x_7, x_207);
x_211 = lean_ctor_get(x_210, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_210, 1);
lean_inc(x_212);
lean_dec(x_210);
x_213 = lean_st_ref_get(x_7, x_212);
x_214 = lean_ctor_get(x_213, 1);
lean_inc(x_214);
lean_dec(x_213);
x_215 = lean_st_ref_take(x_3, x_214);
x_216 = lean_ctor_get(x_215, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_215, 1);
lean_inc(x_217);
lean_dec(x_215);
x_218 = !lean_is_exclusive(x_216);
if (x_218 == 0)
{
lean_object* x_219; lean_object* x_220; lean_object* x_221; uint8_t x_222; 
x_219 = lean_ctor_get(x_216, 0);
lean_inc(x_211);
x_220 = l_Std_HashMapImp_insert___at_Lean_Meta_Closure_visitLevel___spec__3(x_219, x_104, x_211);
lean_ctor_set(x_216, 0, x_220);
x_221 = lean_st_ref_set(x_3, x_216, x_217);
x_222 = !lean_is_exclusive(x_221);
if (x_222 == 0)
{
lean_object* x_223; 
x_223 = lean_ctor_get(x_221, 0);
lean_dec(x_223);
lean_ctor_set(x_221, 0, x_211);
x_106 = x_221;
goto block_205;
}
else
{
lean_object* x_224; lean_object* x_225; 
x_224 = lean_ctor_get(x_221, 1);
lean_inc(x_224);
lean_dec(x_221);
x_225 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_225, 0, x_211);
lean_ctor_set(x_225, 1, x_224);
x_106 = x_225;
goto block_205;
}
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_226 = lean_ctor_get(x_216, 0);
x_227 = lean_ctor_get(x_216, 1);
x_228 = lean_ctor_get(x_216, 2);
x_229 = lean_ctor_get(x_216, 3);
x_230 = lean_ctor_get(x_216, 4);
x_231 = lean_ctor_get(x_216, 5);
x_232 = lean_ctor_get(x_216, 6);
x_233 = lean_ctor_get(x_216, 7);
x_234 = lean_ctor_get(x_216, 8);
x_235 = lean_ctor_get(x_216, 9);
x_236 = lean_ctor_get(x_216, 10);
x_237 = lean_ctor_get(x_216, 11);
lean_inc(x_237);
lean_inc(x_236);
lean_inc(x_235);
lean_inc(x_234);
lean_inc(x_233);
lean_inc(x_232);
lean_inc(x_231);
lean_inc(x_230);
lean_inc(x_229);
lean_inc(x_228);
lean_inc(x_227);
lean_inc(x_226);
lean_dec(x_216);
lean_inc(x_211);
x_238 = l_Std_HashMapImp_insert___at_Lean_Meta_Closure_visitLevel___spec__3(x_226, x_104, x_211);
x_239 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_239, 0, x_238);
lean_ctor_set(x_239, 1, x_227);
lean_ctor_set(x_239, 2, x_228);
lean_ctor_set(x_239, 3, x_229);
lean_ctor_set(x_239, 4, x_230);
lean_ctor_set(x_239, 5, x_231);
lean_ctor_set(x_239, 6, x_232);
lean_ctor_set(x_239, 7, x_233);
lean_ctor_set(x_239, 8, x_234);
lean_ctor_set(x_239, 9, x_235);
lean_ctor_set(x_239, 10, x_236);
lean_ctor_set(x_239, 11, x_237);
x_240 = lean_st_ref_set(x_3, x_239, x_217);
x_241 = lean_ctor_get(x_240, 1);
lean_inc(x_241);
if (lean_is_exclusive(x_240)) {
 lean_ctor_release(x_240, 0);
 lean_ctor_release(x_240, 1);
 x_242 = x_240;
} else {
 lean_dec_ref(x_240);
 x_242 = lean_box(0);
}
if (lean_is_scalar(x_242)) {
 x_243 = lean_alloc_ctor(0, 2, 0);
} else {
 x_243 = x_242;
}
lean_ctor_set(x_243, 0, x_211);
lean_ctor_set(x_243, 1, x_241);
x_106 = x_243;
goto block_205;
}
}
else
{
lean_object* x_244; lean_object* x_245; 
lean_dec(x_104);
x_244 = lean_ctor_get(x_209, 0);
lean_inc(x_244);
lean_dec(x_209);
x_245 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_245, 0, x_244);
lean_ctor_set(x_245, 1, x_207);
x_106 = x_245;
goto block_205;
}
}
}
case 3:
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_362; lean_object* x_363; uint8_t x_403; 
x_260 = lean_ctor_get(x_1, 0);
lean_inc(x_260);
x_261 = lean_ctor_get(x_1, 1);
lean_inc(x_261);
x_403 = l_Lean_Level_hasMVar(x_260);
if (x_403 == 0)
{
uint8_t x_404; 
x_404 = l_Lean_Level_hasParam(x_260);
if (x_404 == 0)
{
lean_object* x_405; 
x_405 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_405, 0, x_260);
lean_ctor_set(x_405, 1, x_8);
x_262 = x_405;
goto block_361;
}
else
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; 
x_406 = lean_st_ref_get(x_7, x_8);
x_407 = lean_ctor_get(x_406, 1);
lean_inc(x_407);
lean_dec(x_406);
x_408 = lean_st_ref_get(x_3, x_407);
x_409 = lean_ctor_get(x_408, 0);
lean_inc(x_409);
x_410 = lean_ctor_get(x_408, 1);
lean_inc(x_410);
lean_dec(x_408);
x_362 = x_409;
x_363 = x_410;
goto block_402;
}
}
else
{
lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; 
x_411 = lean_st_ref_get(x_7, x_8);
x_412 = lean_ctor_get(x_411, 1);
lean_inc(x_412);
lean_dec(x_411);
x_413 = lean_st_ref_get(x_3, x_412);
x_414 = lean_ctor_get(x_413, 0);
lean_inc(x_414);
x_415 = lean_ctor_get(x_413, 1);
lean_inc(x_415);
lean_dec(x_413);
x_362 = x_414;
x_363 = x_415;
goto block_402;
}
block_361:
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_307; lean_object* x_308; uint8_t x_348; 
x_263 = lean_ctor_get(x_262, 0);
lean_inc(x_263);
x_264 = lean_ctor_get(x_262, 1);
lean_inc(x_264);
if (lean_is_exclusive(x_262)) {
 lean_ctor_release(x_262, 0);
 lean_ctor_release(x_262, 1);
 x_265 = x_262;
} else {
 lean_dec_ref(x_262);
 x_265 = lean_box(0);
}
x_348 = l_Lean_Level_hasMVar(x_261);
if (x_348 == 0)
{
uint8_t x_349; 
x_349 = l_Lean_Level_hasParam(x_261);
if (x_349 == 0)
{
lean_object* x_350; 
lean_dec(x_265);
x_350 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_350, 0, x_261);
lean_ctor_set(x_350, 1, x_264);
x_266 = x_350;
goto block_306;
}
else
{
lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; 
x_351 = lean_st_ref_get(x_7, x_264);
x_352 = lean_ctor_get(x_351, 1);
lean_inc(x_352);
lean_dec(x_351);
x_353 = lean_st_ref_get(x_3, x_352);
x_354 = lean_ctor_get(x_353, 0);
lean_inc(x_354);
x_355 = lean_ctor_get(x_353, 1);
lean_inc(x_355);
lean_dec(x_353);
x_307 = x_354;
x_308 = x_355;
goto block_347;
}
}
else
{
lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; 
x_356 = lean_st_ref_get(x_7, x_264);
x_357 = lean_ctor_get(x_356, 1);
lean_inc(x_357);
lean_dec(x_356);
x_358 = lean_st_ref_get(x_3, x_357);
x_359 = lean_ctor_get(x_358, 0);
lean_inc(x_359);
x_360 = lean_ctor_get(x_358, 1);
lean_inc(x_360);
lean_dec(x_358);
x_307 = x_359;
x_308 = x_360;
goto block_347;
}
block_306:
{
if (lean_obj_tag(x_1) == 3)
{
uint8_t x_267; 
x_267 = !lean_is_exclusive(x_266);
if (x_267 == 0)
{
uint8_t x_268; 
x_268 = !lean_is_exclusive(x_1);
if (x_268 == 0)
{
lean_object* x_269; lean_object* x_270; 
x_269 = lean_ctor_get(x_266, 0);
x_270 = lean_level_update_imax(x_1, x_263, x_269);
lean_ctor_set(x_266, 0, x_270);
return x_266;
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; uint64_t x_274; lean_object* x_275; lean_object* x_276; 
x_271 = lean_ctor_get(x_266, 0);
x_272 = lean_ctor_get(x_1, 0);
x_273 = lean_ctor_get(x_1, 1);
x_274 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_273);
lean_inc(x_272);
lean_dec(x_1);
x_275 = lean_alloc_ctor(3, 2, 8);
lean_ctor_set(x_275, 0, x_272);
lean_ctor_set(x_275, 1, x_273);
lean_ctor_set_uint64(x_275, sizeof(void*)*2, x_274);
x_276 = lean_level_update_imax(x_275, x_263, x_271);
lean_ctor_set(x_266, 0, x_276);
return x_266;
}
}
else
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; uint64_t x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; 
x_277 = lean_ctor_get(x_266, 0);
x_278 = lean_ctor_get(x_266, 1);
lean_inc(x_278);
lean_inc(x_277);
lean_dec(x_266);
x_279 = lean_ctor_get(x_1, 0);
lean_inc(x_279);
x_280 = lean_ctor_get(x_1, 1);
lean_inc(x_280);
x_281 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_282 = x_1;
} else {
 lean_dec_ref(x_1);
 x_282 = lean_box(0);
}
if (lean_is_scalar(x_282)) {
 x_283 = lean_alloc_ctor(3, 2, 8);
} else {
 x_283 = x_282;
}
lean_ctor_set(x_283, 0, x_279);
lean_ctor_set(x_283, 1, x_280);
lean_ctor_set_uint64(x_283, sizeof(void*)*2, x_281);
x_284 = lean_level_update_imax(x_283, x_263, x_277);
x_285 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_285, 0, x_284);
lean_ctor_set(x_285, 1, x_278);
return x_285;
}
}
else
{
uint8_t x_286; 
lean_dec(x_263);
lean_dec(x_1);
x_286 = !lean_is_exclusive(x_266);
if (x_286 == 0)
{
lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; 
x_287 = lean_ctor_get(x_266, 0);
lean_dec(x_287);
x_288 = lean_mk_string("Lean.Level");
x_289 = lean_mk_string("Lean.Level.updateIMax!");
x_290 = lean_unsigned_to_nat(505u);
x_291 = lean_unsigned_to_nat(22u);
x_292 = lean_mk_string("imax level expected");
x_293 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_288, x_289, x_290, x_291, x_292);
lean_dec(x_292);
lean_dec(x_289);
lean_dec(x_288);
x_294 = l_Lean_instInhabitedLevel;
x_295 = lean_panic_fn(x_294, x_293);
lean_ctor_set(x_266, 0, x_295);
return x_266;
}
else
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; 
x_296 = lean_ctor_get(x_266, 1);
lean_inc(x_296);
lean_dec(x_266);
x_297 = lean_mk_string("Lean.Level");
x_298 = lean_mk_string("Lean.Level.updateIMax!");
x_299 = lean_unsigned_to_nat(505u);
x_300 = lean_unsigned_to_nat(22u);
x_301 = lean_mk_string("imax level expected");
x_302 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_297, x_298, x_299, x_300, x_301);
lean_dec(x_301);
lean_dec(x_298);
lean_dec(x_297);
x_303 = l_Lean_instInhabitedLevel;
x_304 = lean_panic_fn(x_303, x_302);
x_305 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_305, 0, x_304);
lean_ctor_set(x_305, 1, x_296);
return x_305;
}
}
}
block_347:
{
lean_object* x_309; lean_object* x_310; 
x_309 = lean_ctor_get(x_307, 0);
lean_inc(x_309);
lean_dec(x_307);
x_310 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__1(x_309, x_261);
lean_dec(x_309);
if (lean_obj_tag(x_310) == 0)
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; uint8_t x_319; 
lean_dec(x_265);
lean_inc(x_261);
x_311 = l_Lean_Meta_Closure_collectLevelAux(x_261, x_2, x_3, x_4, x_5, x_6, x_7, x_308);
x_312 = lean_ctor_get(x_311, 0);
lean_inc(x_312);
x_313 = lean_ctor_get(x_311, 1);
lean_inc(x_313);
lean_dec(x_311);
x_314 = lean_st_ref_get(x_7, x_313);
x_315 = lean_ctor_get(x_314, 1);
lean_inc(x_315);
lean_dec(x_314);
x_316 = lean_st_ref_take(x_3, x_315);
x_317 = lean_ctor_get(x_316, 0);
lean_inc(x_317);
x_318 = lean_ctor_get(x_316, 1);
lean_inc(x_318);
lean_dec(x_316);
x_319 = !lean_is_exclusive(x_317);
if (x_319 == 0)
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; uint8_t x_323; 
x_320 = lean_ctor_get(x_317, 0);
lean_inc(x_312);
x_321 = l_Std_HashMapImp_insert___at_Lean_Meta_Closure_visitLevel___spec__3(x_320, x_261, x_312);
lean_ctor_set(x_317, 0, x_321);
x_322 = lean_st_ref_set(x_3, x_317, x_318);
x_323 = !lean_is_exclusive(x_322);
if (x_323 == 0)
{
lean_object* x_324; 
x_324 = lean_ctor_get(x_322, 0);
lean_dec(x_324);
lean_ctor_set(x_322, 0, x_312);
x_266 = x_322;
goto block_306;
}
else
{
lean_object* x_325; lean_object* x_326; 
x_325 = lean_ctor_get(x_322, 1);
lean_inc(x_325);
lean_dec(x_322);
x_326 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_326, 0, x_312);
lean_ctor_set(x_326, 1, x_325);
x_266 = x_326;
goto block_306;
}
}
else
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; 
x_327 = lean_ctor_get(x_317, 0);
x_328 = lean_ctor_get(x_317, 1);
x_329 = lean_ctor_get(x_317, 2);
x_330 = lean_ctor_get(x_317, 3);
x_331 = lean_ctor_get(x_317, 4);
x_332 = lean_ctor_get(x_317, 5);
x_333 = lean_ctor_get(x_317, 6);
x_334 = lean_ctor_get(x_317, 7);
x_335 = lean_ctor_get(x_317, 8);
x_336 = lean_ctor_get(x_317, 9);
x_337 = lean_ctor_get(x_317, 10);
x_338 = lean_ctor_get(x_317, 11);
lean_inc(x_338);
lean_inc(x_337);
lean_inc(x_336);
lean_inc(x_335);
lean_inc(x_334);
lean_inc(x_333);
lean_inc(x_332);
lean_inc(x_331);
lean_inc(x_330);
lean_inc(x_329);
lean_inc(x_328);
lean_inc(x_327);
lean_dec(x_317);
lean_inc(x_312);
x_339 = l_Std_HashMapImp_insert___at_Lean_Meta_Closure_visitLevel___spec__3(x_327, x_261, x_312);
x_340 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_340, 0, x_339);
lean_ctor_set(x_340, 1, x_328);
lean_ctor_set(x_340, 2, x_329);
lean_ctor_set(x_340, 3, x_330);
lean_ctor_set(x_340, 4, x_331);
lean_ctor_set(x_340, 5, x_332);
lean_ctor_set(x_340, 6, x_333);
lean_ctor_set(x_340, 7, x_334);
lean_ctor_set(x_340, 8, x_335);
lean_ctor_set(x_340, 9, x_336);
lean_ctor_set(x_340, 10, x_337);
lean_ctor_set(x_340, 11, x_338);
x_341 = lean_st_ref_set(x_3, x_340, x_318);
x_342 = lean_ctor_get(x_341, 1);
lean_inc(x_342);
if (lean_is_exclusive(x_341)) {
 lean_ctor_release(x_341, 0);
 lean_ctor_release(x_341, 1);
 x_343 = x_341;
} else {
 lean_dec_ref(x_341);
 x_343 = lean_box(0);
}
if (lean_is_scalar(x_343)) {
 x_344 = lean_alloc_ctor(0, 2, 0);
} else {
 x_344 = x_343;
}
lean_ctor_set(x_344, 0, x_312);
lean_ctor_set(x_344, 1, x_342);
x_266 = x_344;
goto block_306;
}
}
else
{
lean_object* x_345; lean_object* x_346; 
lean_dec(x_261);
x_345 = lean_ctor_get(x_310, 0);
lean_inc(x_345);
lean_dec(x_310);
if (lean_is_scalar(x_265)) {
 x_346 = lean_alloc_ctor(0, 2, 0);
} else {
 x_346 = x_265;
}
lean_ctor_set(x_346, 0, x_345);
lean_ctor_set(x_346, 1, x_308);
x_266 = x_346;
goto block_306;
}
}
}
block_402:
{
lean_object* x_364; lean_object* x_365; 
x_364 = lean_ctor_get(x_362, 0);
lean_inc(x_364);
lean_dec(x_362);
x_365 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__1(x_364, x_260);
lean_dec(x_364);
if (lean_obj_tag(x_365) == 0)
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; uint8_t x_374; 
lean_inc(x_260);
x_366 = l_Lean_Meta_Closure_collectLevelAux(x_260, x_2, x_3, x_4, x_5, x_6, x_7, x_363);
x_367 = lean_ctor_get(x_366, 0);
lean_inc(x_367);
x_368 = lean_ctor_get(x_366, 1);
lean_inc(x_368);
lean_dec(x_366);
x_369 = lean_st_ref_get(x_7, x_368);
x_370 = lean_ctor_get(x_369, 1);
lean_inc(x_370);
lean_dec(x_369);
x_371 = lean_st_ref_take(x_3, x_370);
x_372 = lean_ctor_get(x_371, 0);
lean_inc(x_372);
x_373 = lean_ctor_get(x_371, 1);
lean_inc(x_373);
lean_dec(x_371);
x_374 = !lean_is_exclusive(x_372);
if (x_374 == 0)
{
lean_object* x_375; lean_object* x_376; lean_object* x_377; uint8_t x_378; 
x_375 = lean_ctor_get(x_372, 0);
lean_inc(x_367);
x_376 = l_Std_HashMapImp_insert___at_Lean_Meta_Closure_visitLevel___spec__3(x_375, x_260, x_367);
lean_ctor_set(x_372, 0, x_376);
x_377 = lean_st_ref_set(x_3, x_372, x_373);
x_378 = !lean_is_exclusive(x_377);
if (x_378 == 0)
{
lean_object* x_379; 
x_379 = lean_ctor_get(x_377, 0);
lean_dec(x_379);
lean_ctor_set(x_377, 0, x_367);
x_262 = x_377;
goto block_361;
}
else
{
lean_object* x_380; lean_object* x_381; 
x_380 = lean_ctor_get(x_377, 1);
lean_inc(x_380);
lean_dec(x_377);
x_381 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_381, 0, x_367);
lean_ctor_set(x_381, 1, x_380);
x_262 = x_381;
goto block_361;
}
}
else
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; 
x_382 = lean_ctor_get(x_372, 0);
x_383 = lean_ctor_get(x_372, 1);
x_384 = lean_ctor_get(x_372, 2);
x_385 = lean_ctor_get(x_372, 3);
x_386 = lean_ctor_get(x_372, 4);
x_387 = lean_ctor_get(x_372, 5);
x_388 = lean_ctor_get(x_372, 6);
x_389 = lean_ctor_get(x_372, 7);
x_390 = lean_ctor_get(x_372, 8);
x_391 = lean_ctor_get(x_372, 9);
x_392 = lean_ctor_get(x_372, 10);
x_393 = lean_ctor_get(x_372, 11);
lean_inc(x_393);
lean_inc(x_392);
lean_inc(x_391);
lean_inc(x_390);
lean_inc(x_389);
lean_inc(x_388);
lean_inc(x_387);
lean_inc(x_386);
lean_inc(x_385);
lean_inc(x_384);
lean_inc(x_383);
lean_inc(x_382);
lean_dec(x_372);
lean_inc(x_367);
x_394 = l_Std_HashMapImp_insert___at_Lean_Meta_Closure_visitLevel___spec__3(x_382, x_260, x_367);
x_395 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_395, 0, x_394);
lean_ctor_set(x_395, 1, x_383);
lean_ctor_set(x_395, 2, x_384);
lean_ctor_set(x_395, 3, x_385);
lean_ctor_set(x_395, 4, x_386);
lean_ctor_set(x_395, 5, x_387);
lean_ctor_set(x_395, 6, x_388);
lean_ctor_set(x_395, 7, x_389);
lean_ctor_set(x_395, 8, x_390);
lean_ctor_set(x_395, 9, x_391);
lean_ctor_set(x_395, 10, x_392);
lean_ctor_set(x_395, 11, x_393);
x_396 = lean_st_ref_set(x_3, x_395, x_373);
x_397 = lean_ctor_get(x_396, 1);
lean_inc(x_397);
if (lean_is_exclusive(x_396)) {
 lean_ctor_release(x_396, 0);
 lean_ctor_release(x_396, 1);
 x_398 = x_396;
} else {
 lean_dec_ref(x_396);
 x_398 = lean_box(0);
}
if (lean_is_scalar(x_398)) {
 x_399 = lean_alloc_ctor(0, 2, 0);
} else {
 x_399 = x_398;
}
lean_ctor_set(x_399, 0, x_367);
lean_ctor_set(x_399, 1, x_397);
x_262 = x_399;
goto block_361;
}
}
else
{
lean_object* x_400; lean_object* x_401; 
lean_dec(x_260);
x_400 = lean_ctor_get(x_365, 0);
lean_inc(x_400);
lean_dec(x_365);
x_401 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_401, 0, x_400);
lean_ctor_set(x_401, 1, x_363);
x_262 = x_401;
goto block_361;
}
}
}
default: 
{
lean_object* x_416; 
x_416 = l_Lean_Meta_Closure_mkNewLevelParam(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_416;
}
}
block_47:
{
if (lean_obj_tag(x_1) == 1)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_level_update_succ(x_1, x_12);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; uint64_t x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_inc(x_15);
lean_dec(x_1);
x_17 = lean_alloc_ctor(1, 1, 8);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set_uint64(x_17, sizeof(void*)*1, x_16);
x_18 = lean_level_update_succ(x_17, x_14);
lean_ctor_set(x_9, 0, x_18);
return x_9;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint64_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_19 = lean_ctor_get(x_9, 0);
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_9);
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
x_22 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_23 = x_1;
} else {
 lean_dec_ref(x_1);
 x_23 = lean_box(0);
}
if (lean_is_scalar(x_23)) {
 x_24 = lean_alloc_ctor(1, 1, 8);
} else {
 x_24 = x_23;
}
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set_uint64(x_24, sizeof(void*)*1, x_22);
x_25 = lean_level_update_succ(x_24, x_19);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_20);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_9);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_28 = lean_ctor_get(x_9, 0);
lean_dec(x_28);
x_29 = lean_mk_string("Lean.Level");
x_30 = lean_mk_string("Lean.Level.updateSucc!");
x_31 = lean_unsigned_to_nat(487u);
x_32 = lean_unsigned_to_nat(18u);
x_33 = lean_mk_string("succ level expected");
x_34 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_29, x_30, x_31, x_32, x_33);
lean_dec(x_33);
lean_dec(x_30);
lean_dec(x_29);
x_35 = l_Lean_instInhabitedLevel;
x_36 = lean_panic_fn(x_35, x_34);
lean_ctor_set(x_9, 0, x_36);
return x_9;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_37 = lean_ctor_get(x_9, 1);
lean_inc(x_37);
lean_dec(x_9);
x_38 = lean_mk_string("Lean.Level");
x_39 = lean_mk_string("Lean.Level.updateSucc!");
x_40 = lean_unsigned_to_nat(487u);
x_41 = lean_unsigned_to_nat(18u);
x_42 = lean_mk_string("succ level expected");
x_43 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_38, x_39, x_40, x_41, x_42);
lean_dec(x_42);
lean_dec(x_39);
lean_dec(x_38);
x_44 = l_Lean_instInhabitedLevel;
x_45 = lean_panic_fn(x_44, x_43);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_37);
return x_46;
}
}
}
}
}
lean_object* l_Lean_Meta_Closure_collectLevelAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_Closure_collectLevelAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_Closure_collectLevel(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; uint8_t x_50; 
x_50 = l_Lean_Level_hasMVar(x_1);
if (x_50 == 0)
{
uint8_t x_51; 
x_51 = l_Lean_Level_hasParam(x_1);
if (x_51 == 0)
{
lean_object* x_52; 
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_1);
lean_ctor_set(x_52, 1, x_8);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_53 = lean_st_ref_get(x_7, x_8);
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_st_ref_get(x_3, x_54);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
x_9 = x_56;
x_10 = x_57;
goto block_49;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_58 = lean_st_ref_get(x_7, x_8);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_60 = lean_st_ref_get(x_3, x_59);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_9 = x_61;
x_10 = x_62;
goto block_49;
}
block_49:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Std_HashMapImp_find_x3f___at_Lean_Meta_Closure_visitLevel___spec__1(x_11, x_1);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_inc(x_1);
x_13 = l_Lean_Meta_Closure_collectLevelAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_10);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_st_ref_get(x_7, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_st_ref_take(x_3, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_19, 0);
lean_inc(x_14);
x_23 = l_Std_HashMapImp_insert___at_Lean_Meta_Closure_visitLevel___spec__3(x_22, x_1, x_14);
lean_ctor_set(x_19, 0, x_23);
x_24 = lean_st_ref_set(x_3, x_19, x_20);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set(x_24, 0, x_14);
return x_24;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_14);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_29 = lean_ctor_get(x_19, 0);
x_30 = lean_ctor_get(x_19, 1);
x_31 = lean_ctor_get(x_19, 2);
x_32 = lean_ctor_get(x_19, 3);
x_33 = lean_ctor_get(x_19, 4);
x_34 = lean_ctor_get(x_19, 5);
x_35 = lean_ctor_get(x_19, 6);
x_36 = lean_ctor_get(x_19, 7);
x_37 = lean_ctor_get(x_19, 8);
x_38 = lean_ctor_get(x_19, 9);
x_39 = lean_ctor_get(x_19, 10);
x_40 = lean_ctor_get(x_19, 11);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_19);
lean_inc(x_14);
x_41 = l_Std_HashMapImp_insert___at_Lean_Meta_Closure_visitLevel___spec__3(x_29, x_1, x_14);
x_42 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_30);
lean_ctor_set(x_42, 2, x_31);
lean_ctor_set(x_42, 3, x_32);
lean_ctor_set(x_42, 4, x_33);
lean_ctor_set(x_42, 5, x_34);
lean_ctor_set(x_42, 6, x_35);
lean_ctor_set(x_42, 7, x_36);
lean_ctor_set(x_42, 8, x_37);
lean_ctor_set(x_42, 9, x_38);
lean_ctor_set(x_42, 10, x_39);
lean_ctor_set(x_42, 11, x_40);
x_43 = lean_st_ref_set(x_3, x_42, x_20);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_43)) {
 lean_ctor_release(x_43, 0);
 lean_ctor_release(x_43, 1);
 x_45 = x_43;
} else {
 lean_dec_ref(x_43);
 x_45 = lean_box(0);
}
if (lean_is_scalar(x_45)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_45;
}
lean_ctor_set(x_46, 0, x_14);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_1);
x_47 = lean_ctor_get(x_12, 0);
lean_inc(x_47);
lean_dec(x_12);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_10);
return x_48;
}
}
}
}
lean_object* l_Lean_Meta_Closure_collectLevel___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_Closure_collectLevel(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_Closure_preprocess___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Lean_Meta_Closure_preprocess(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = l_Lean_Meta_instantiateMVars(x_1, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = lean_unbox(x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
lean_inc(x_11);
x_13 = l_Lean_Meta_check(x_11, x_4, x_5, x_6, x_7, x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
lean_ctor_set(x_13, 0, x_11);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_11);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_11);
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 0);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_13);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_22 = !lean_is_exclusive(x_9);
if (x_22 == 0)
{
return x_9;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_9, 0);
x_24 = lean_ctor_get(x_9, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_9);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_26 = !lean_is_exclusive(x_9);
if (x_26 == 0)
{
return x_9;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_9, 0);
x_28 = lean_ctor_get(x_9, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_9);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_Lean_Meta_Closure_preprocess___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_Closure_preprocess___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Meta_Closure_preprocess___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_Closure_preprocess(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_Closure_mkNextUserName___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_st_ref_get(x_1, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_box(0);
x_13 = lean_mk_string("_x");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_ctor_get(x_10, 8);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_name_append_index_after(x_14, x_15);
x_17 = lean_st_ref_get(x_5, x_11);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_st_ref_take(x_1, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_23 = lean_ctor_get(x_20, 8);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_add(x_23, x_24);
lean_dec(x_23);
lean_ctor_set(x_20, 8, x_25);
x_26 = lean_st_ref_set(x_1, x_20, x_21);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set(x_26, 0, x_16);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_16);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_31 = lean_ctor_get(x_20, 0);
x_32 = lean_ctor_get(x_20, 1);
x_33 = lean_ctor_get(x_20, 2);
x_34 = lean_ctor_get(x_20, 3);
x_35 = lean_ctor_get(x_20, 4);
x_36 = lean_ctor_get(x_20, 5);
x_37 = lean_ctor_get(x_20, 6);
x_38 = lean_ctor_get(x_20, 7);
x_39 = lean_ctor_get(x_20, 8);
x_40 = lean_ctor_get(x_20, 9);
x_41 = lean_ctor_get(x_20, 10);
x_42 = lean_ctor_get(x_20, 11);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_20);
x_43 = lean_unsigned_to_nat(1u);
x_44 = lean_nat_add(x_39, x_43);
lean_dec(x_39);
x_45 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_45, 0, x_31);
lean_ctor_set(x_45, 1, x_32);
lean_ctor_set(x_45, 2, x_33);
lean_ctor_set(x_45, 3, x_34);
lean_ctor_set(x_45, 4, x_35);
lean_ctor_set(x_45, 5, x_36);
lean_ctor_set(x_45, 6, x_37);
lean_ctor_set(x_45, 7, x_38);
lean_ctor_set(x_45, 8, x_44);
lean_ctor_set(x_45, 9, x_40);
lean_ctor_set(x_45, 10, x_41);
lean_ctor_set(x_45, 11, x_42);
x_46 = lean_st_ref_set(x_1, x_45, x_21);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_48 = x_46;
} else {
 lean_dec_ref(x_46);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_16);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
}
lean_object* l_Lean_Meta_Closure_mkNextUserName(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Closure_mkNextUserName___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Closure_mkNextUserName___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_Closure_mkNextUserName___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_Closure_mkNextUserName___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_Closure_mkNextUserName(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Closure_pushToProcess(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_take(x_3, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_12, 11);
x_16 = lean_array_push(x_15, x_1);
lean_ctor_set(x_12, 11, x_16);
x_17 = lean_st_ref_set(x_3, x_12, x_13);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_24 = lean_ctor_get(x_12, 0);
x_25 = lean_ctor_get(x_12, 1);
x_26 = lean_ctor_get(x_12, 2);
x_27 = lean_ctor_get(x_12, 3);
x_28 = lean_ctor_get(x_12, 4);
x_29 = lean_ctor_get(x_12, 5);
x_30 = lean_ctor_get(x_12, 6);
x_31 = lean_ctor_get(x_12, 7);
x_32 = lean_ctor_get(x_12, 8);
x_33 = lean_ctor_get(x_12, 9);
x_34 = lean_ctor_get(x_12, 10);
x_35 = lean_ctor_get(x_12, 11);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_12);
x_36 = lean_array_push(x_35, x_1);
x_37 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_37, 0, x_24);
lean_ctor_set(x_37, 1, x_25);
lean_ctor_set(x_37, 2, x_26);
lean_ctor_set(x_37, 3, x_27);
lean_ctor_set(x_37, 4, x_28);
lean_ctor_set(x_37, 5, x_29);
lean_ctor_set(x_37, 6, x_30);
lean_ctor_set(x_37, 7, x_31);
lean_ctor_set(x_37, 8, x_32);
lean_ctor_set(x_37, 9, x_33);
lean_ctor_set(x_37, 10, x_34);
lean_ctor_set(x_37, 11, x_36);
x_38 = lean_st_ref_set(x_3, x_37, x_13);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_40 = x_38;
} else {
 lean_dec_ref(x_38);
 x_40 = lean_box(0);
}
x_41 = lean_box(0);
if (lean_is_scalar(x_40)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_40;
}
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_39);
return x_42;
}
}
}
lean_object* l_Lean_Meta_Closure_pushToProcess___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_Closure_pushToProcess(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_Closure_collectExprAux_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (x_1 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_box(x_1);
x_6 = lean_apply_2(x_4, x_5, x_2);
return x_6;
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_7 = lean_box(x_1);
x_8 = lean_apply_2(x_4, x_7, x_2);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
}
}
}
lean_object* l_Lean_Meta_Closure_collectExprAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Closure_collectExprAux_match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Closure_collectExprAux_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Meta_Closure_collectExprAux_match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_Meta_Closure_collectExprAux_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_13; uint64_t x_14; lean_object* x_15; lean_object* x_16; 
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
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_15 = lean_box_uint64(x_14);
x_16 = lean_apply_2(x_11, x_13, x_15);
return x_16;
}
case 2:
{
lean_object* x_17; uint64_t x_18; lean_object* x_19; lean_object* x_20; 
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
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
x_18 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_19 = lean_box_uint64(x_18);
x_20 = lean_apply_2(x_10, x_17, x_19);
return x_20;
}
case 3:
{
lean_object* x_21; uint64_t x_22; lean_object* x_23; lean_object* x_24; 
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
x_21 = lean_ctor_get(x_1, 0);
lean_inc(x_21);
x_22 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_23 = lean_box_uint64(x_22);
x_24 = lean_apply_2(x_8, x_21, x_23);
return x_24;
}
case 4:
{
lean_object* x_25; lean_object* x_26; uint64_t x_27; lean_object* x_28; lean_object* x_29; 
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
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
x_27 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_28 = lean_box_uint64(x_27);
x_29 = lean_apply_3(x_9, x_25, x_26, x_28);
return x_29;
}
case 5:
{
lean_object* x_30; lean_object* x_31; uint64_t x_32; lean_object* x_33; lean_object* x_34; 
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
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
x_32 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_33 = lean_box_uint64(x_32);
x_34 = lean_apply_3(x_6, x_30, x_31, x_33);
return x_34;
}
case 6:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; uint64_t x_38; lean_object* x_39; lean_object* x_40; 
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
x_35 = lean_ctor_get(x_1, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 1);
lean_inc(x_36);
x_37 = lean_ctor_get(x_1, 2);
lean_inc(x_37);
x_38 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_39 = lean_box_uint64(x_38);
x_40 = lean_apply_4(x_4, x_35, x_36, x_37, x_39);
return x_40;
}
case 7:
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint64_t x_44; lean_object* x_45; lean_object* x_46; 
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
x_41 = lean_ctor_get(x_1, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_1, 1);
lean_inc(x_42);
x_43 = lean_ctor_get(x_1, 2);
lean_inc(x_43);
x_44 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_45 = lean_box_uint64(x_44);
x_46 = lean_apply_4(x_3, x_41, x_42, x_43, x_45);
return x_46;
}
case 8:
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint64_t x_51; lean_object* x_52; lean_object* x_53; 
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
x_47 = lean_ctor_get(x_1, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_1, 1);
lean_inc(x_48);
x_49 = lean_ctor_get(x_1, 2);
lean_inc(x_49);
x_50 = lean_ctor_get(x_1, 3);
lean_inc(x_50);
x_51 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
lean_dec(x_1);
x_52 = lean_box_uint64(x_51);
x_53 = lean_apply_5(x_5, x_47, x_48, x_49, x_50, x_52);
return x_53;
}
case 10:
{
lean_object* x_54; lean_object* x_55; uint64_t x_56; lean_object* x_57; lean_object* x_58; 
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
x_54 = lean_ctor_get(x_1, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_1, 1);
lean_inc(x_55);
x_56 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_57 = lean_box_uint64(x_56);
x_58 = lean_apply_3(x_7, x_54, x_55, x_57);
return x_58;
}
case 11:
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; uint64_t x_62; lean_object* x_63; lean_object* x_64; 
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
x_59 = lean_ctor_get(x_1, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_1, 1);
lean_inc(x_60);
x_61 = lean_ctor_get(x_1, 2);
lean_inc(x_61);
x_62 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_63 = lean_box_uint64(x_62);
x_64 = lean_apply_4(x_2, x_59, x_60, x_61, x_63);
return x_64;
}
default: 
{
lean_object* x_65; 
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
x_65 = lean_apply_1(x_12, x_1);
return x_65;
}
}
}
}
lean_object* l_Lean_Meta_Closure_collectExprAux_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Closure_collectExprAux_match__2___rarg), 12, 0);
return x_2;
}
}
lean_object* l_Lean_mkFreshId___at_Lean_Meta_Closure_collectExprAux___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_st_ref_get(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_inc(x_8);
x_10 = lean_name_mk_numeral(x_8, x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_9, x_11);
lean_dec(x_9);
lean_ctor_set(x_5, 1, x_12);
x_13 = lean_st_ref_take(x_1, x_6);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_14, 2);
lean_dec(x_17);
lean_ctor_set(x_14, 2, x_5);
x_18 = lean_st_ref_set(x_1, x_14, x_15);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_10);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_10);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
x_25 = lean_ctor_get(x_14, 3);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_24);
lean_ctor_set(x_26, 2, x_5);
lean_ctor_set(x_26, 3, x_25);
x_27 = lean_st_ref_set(x_1, x_26, x_15);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_29 = x_27;
} else {
 lean_dec_ref(x_27);
 x_29 = lean_box(0);
}
if (lean_is_scalar(x_29)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_29;
}
lean_ctor_set(x_30, 0, x_10);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_31 = lean_ctor_get(x_5, 0);
x_32 = lean_ctor_get(x_5, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_5);
lean_inc(x_32);
lean_inc(x_31);
x_33 = lean_name_mk_numeral(x_31, x_32);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_32, x_34);
lean_dec(x_32);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_st_ref_take(x_1, x_6);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_38, 3);
lean_inc(x_42);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 lean_ctor_release(x_38, 2);
 lean_ctor_release(x_38, 3);
 x_43 = x_38;
} else {
 lean_dec_ref(x_38);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(0, 4, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_40);
lean_ctor_set(x_44, 1, x_41);
lean_ctor_set(x_44, 2, x_36);
lean_ctor_set(x_44, 3, x_42);
x_45 = lean_st_ref_set(x_1, x_44, x_39);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_33);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
lean_object* l_Lean_mkFreshId___at_Lean_Meta_Closure_collectExprAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_mkFreshId___at_Lean_Meta_Closure_collectExprAux___spec__1___rarg___boxed), 2, 0);
return x_6;
}
}
lean_object* l_List_mapM___at_Lean_Meta_Closure_collectExprAux___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
x_14 = l_Lean_Meta_Closure_collectLevel(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_List_mapM___at_Lean_Meta_Closure_collectExprAux___spec__2(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_16);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_ctor_set(x_1, 1, x_19);
lean_ctor_set(x_1, 0, x_15);
lean_ctor_set(x_17, 0, x_1);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_17, 0);
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_17);
lean_ctor_set(x_1, 1, x_20);
lean_ctor_set(x_1, 0, x_15);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_1);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_23 = lean_ctor_get(x_1, 0);
x_24 = lean_ctor_get(x_1, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_1);
x_25 = l_Lean_Meta_Closure_collectLevel(x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_List_mapM___at_Lean_Meta_Closure_collectExprAux___spec__2(x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_31 = x_28;
} else {
 lean_dec_ref(x_28);
 x_31 = lean_box(0);
}
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_26);
lean_ctor_set(x_32, 1, x_29);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
}
}
lean_object* l_Lean_Meta_Closure_collectExprAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_54; 
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_101; lean_object* x_102; 
x_101 = lean_ctor_get(x_1, 0);
lean_inc(x_101);
lean_dec(x_1);
lean_inc(x_4);
lean_inc(x_101);
x_102 = l_Lean_Meta_getLocalDecl(x_101, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_102) == 0)
{
uint8_t x_103; 
x_103 = lean_unbox(x_2);
if (x_103 == 0)
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; uint8_t x_110; 
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = l_Lean_mkFreshId___at_Lean_Meta_Closure_collectExprAux___spec__1___rarg(x_7, x_104);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
lean_inc(x_106);
x_108 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_108, 0, x_101);
lean_ctor_set(x_108, 1, x_106);
x_109 = l_Lean_Meta_Closure_pushToProcess(x_108, x_2, x_3, x_4, x_5, x_6, x_7, x_107);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_110 = !lean_is_exclusive(x_109);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; 
x_111 = lean_ctor_get(x_109, 0);
lean_dec(x_111);
x_112 = l_Lean_mkFVar(x_106);
lean_ctor_set(x_109, 0, x_112);
return x_109;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_109, 1);
lean_inc(x_113);
lean_dec(x_109);
x_114 = l_Lean_mkFVar(x_106);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_113);
return x_115;
}
}
else
{
uint8_t x_116; 
x_116 = !lean_is_exclusive(x_102);
if (x_116 == 0)
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_102, 0);
x_118 = lean_ctor_get(x_102, 1);
x_119 = l_Lean_LocalDecl_value_x3f(x_117);
lean_dec(x_117);
if (lean_obj_tag(x_119) == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; uint8_t x_125; 
lean_free_object(x_102);
x_120 = l_Lean_mkFreshId___at_Lean_Meta_Closure_collectExprAux___spec__1___rarg(x_7, x_118);
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
lean_inc(x_121);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_101);
lean_ctor_set(x_123, 1, x_121);
x_124 = l_Lean_Meta_Closure_pushToProcess(x_123, x_2, x_3, x_4, x_5, x_6, x_7, x_122);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_125 = !lean_is_exclusive(x_124);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; 
x_126 = lean_ctor_get(x_124, 0);
lean_dec(x_126);
x_127 = l_Lean_mkFVar(x_121);
lean_ctor_set(x_124, 0, x_127);
return x_124;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_124, 1);
lean_inc(x_128);
lean_dec(x_124);
x_129 = l_Lean_mkFVar(x_121);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_128);
return x_130;
}
}
else
{
lean_object* x_131; lean_object* x_132; 
lean_dec(x_101);
x_131 = lean_ctor_get(x_119, 0);
lean_inc(x_131);
lean_dec(x_119);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_132 = l_Lean_Meta_Closure_preprocess(x_131, x_2, x_3, x_4, x_5, x_6, x_7, x_118);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; uint8_t x_181; 
x_133 = lean_ctor_get(x_132, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_132, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_132)) {
 lean_ctor_release(x_132, 0);
 lean_ctor_release(x_132, 1);
 x_135 = x_132;
} else {
 lean_dec_ref(x_132);
 x_135 = lean_box(0);
}
x_181 = l_Lean_Expr_hasLevelParam(x_133);
if (x_181 == 0)
{
uint8_t x_182; 
x_182 = l_Lean_Expr_hasFVar(x_133);
if (x_182 == 0)
{
uint8_t x_183; 
x_183 = l_Lean_Expr_hasMVar(x_133);
if (x_183 == 0)
{
lean_dec(x_135);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_ctor_set(x_102, 1, x_134);
lean_ctor_set(x_102, 0, x_133);
return x_102;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
lean_free_object(x_102);
x_184 = lean_st_ref_get(x_7, x_134);
x_185 = lean_ctor_get(x_184, 1);
lean_inc(x_185);
lean_dec(x_184);
x_186 = lean_st_ref_get(x_3, x_185);
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_186, 1);
lean_inc(x_188);
lean_dec(x_186);
x_136 = x_187;
x_137 = x_188;
goto block_180;
}
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
lean_free_object(x_102);
x_189 = lean_st_ref_get(x_7, x_134);
x_190 = lean_ctor_get(x_189, 1);
lean_inc(x_190);
lean_dec(x_189);
x_191 = lean_st_ref_get(x_3, x_190);
x_192 = lean_ctor_get(x_191, 0);
lean_inc(x_192);
x_193 = lean_ctor_get(x_191, 1);
lean_inc(x_193);
lean_dec(x_191);
x_136 = x_192;
x_137 = x_193;
goto block_180;
}
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
lean_free_object(x_102);
x_194 = lean_st_ref_get(x_7, x_134);
x_195 = lean_ctor_get(x_194, 1);
lean_inc(x_195);
lean_dec(x_194);
x_196 = lean_st_ref_get(x_3, x_195);
x_197 = lean_ctor_get(x_196, 0);
lean_inc(x_197);
x_198 = lean_ctor_get(x_196, 1);
lean_inc(x_198);
lean_dec(x_196);
x_136 = x_197;
x_137 = x_198;
goto block_180;
}
block_180:
{
lean_object* x_138; lean_object* x_139; 
x_138 = lean_ctor_get(x_136, 1);
lean_inc(x_138);
lean_dec(x_136);
x_139 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_138, x_133);
lean_dec(x_138);
if (lean_obj_tag(x_139) == 0)
{
lean_object* x_140; 
lean_dec(x_135);
lean_inc(x_7);
lean_inc(x_133);
x_140 = l_Lean_Meta_Closure_collectExprAux(x_133, x_2, x_3, x_4, x_5, x_6, x_7, x_137);
if (lean_obj_tag(x_140) == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; uint8_t x_148; 
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 1);
lean_inc(x_142);
lean_dec(x_140);
x_143 = lean_st_ref_get(x_7, x_142);
lean_dec(x_7);
x_144 = lean_ctor_get(x_143, 1);
lean_inc(x_144);
lean_dec(x_143);
x_145 = lean_st_ref_take(x_3, x_144);
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
lean_dec(x_145);
x_148 = !lean_is_exclusive(x_146);
if (x_148 == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; 
x_149 = lean_ctor_get(x_146, 1);
lean_inc(x_141);
x_150 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_149, x_133, x_141);
lean_ctor_set(x_146, 1, x_150);
x_151 = lean_st_ref_set(x_3, x_146, x_147);
x_152 = !lean_is_exclusive(x_151);
if (x_152 == 0)
{
lean_object* x_153; 
x_153 = lean_ctor_get(x_151, 0);
lean_dec(x_153);
lean_ctor_set(x_151, 0, x_141);
return x_151;
}
else
{
lean_object* x_154; lean_object* x_155; 
x_154 = lean_ctor_get(x_151, 1);
lean_inc(x_154);
lean_dec(x_151);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_141);
lean_ctor_set(x_155, 1, x_154);
return x_155;
}
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_156 = lean_ctor_get(x_146, 0);
x_157 = lean_ctor_get(x_146, 1);
x_158 = lean_ctor_get(x_146, 2);
x_159 = lean_ctor_get(x_146, 3);
x_160 = lean_ctor_get(x_146, 4);
x_161 = lean_ctor_get(x_146, 5);
x_162 = lean_ctor_get(x_146, 6);
x_163 = lean_ctor_get(x_146, 7);
x_164 = lean_ctor_get(x_146, 8);
x_165 = lean_ctor_get(x_146, 9);
x_166 = lean_ctor_get(x_146, 10);
x_167 = lean_ctor_get(x_146, 11);
lean_inc(x_167);
lean_inc(x_166);
lean_inc(x_165);
lean_inc(x_164);
lean_inc(x_163);
lean_inc(x_162);
lean_inc(x_161);
lean_inc(x_160);
lean_inc(x_159);
lean_inc(x_158);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_146);
lean_inc(x_141);
x_168 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_157, x_133, x_141);
x_169 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_169, 0, x_156);
lean_ctor_set(x_169, 1, x_168);
lean_ctor_set(x_169, 2, x_158);
lean_ctor_set(x_169, 3, x_159);
lean_ctor_set(x_169, 4, x_160);
lean_ctor_set(x_169, 5, x_161);
lean_ctor_set(x_169, 6, x_162);
lean_ctor_set(x_169, 7, x_163);
lean_ctor_set(x_169, 8, x_164);
lean_ctor_set(x_169, 9, x_165);
lean_ctor_set(x_169, 10, x_166);
lean_ctor_set(x_169, 11, x_167);
x_170 = lean_st_ref_set(x_3, x_169, x_147);
x_171 = lean_ctor_get(x_170, 1);
lean_inc(x_171);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_172 = x_170;
} else {
 lean_dec_ref(x_170);
 x_172 = lean_box(0);
}
if (lean_is_scalar(x_172)) {
 x_173 = lean_alloc_ctor(0, 2, 0);
} else {
 x_173 = x_172;
}
lean_ctor_set(x_173, 0, x_141);
lean_ctor_set(x_173, 1, x_171);
return x_173;
}
}
else
{
uint8_t x_174; 
lean_dec(x_133);
lean_dec(x_7);
x_174 = !lean_is_exclusive(x_140);
if (x_174 == 0)
{
return x_140;
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_175 = lean_ctor_get(x_140, 0);
x_176 = lean_ctor_get(x_140, 1);
lean_inc(x_176);
lean_inc(x_175);
lean_dec(x_140);
x_177 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_177, 0, x_175);
lean_ctor_set(x_177, 1, x_176);
return x_177;
}
}
}
else
{
lean_object* x_178; lean_object* x_179; 
lean_dec(x_133);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_178 = lean_ctor_get(x_139, 0);
lean_inc(x_178);
lean_dec(x_139);
if (lean_is_scalar(x_135)) {
 x_179 = lean_alloc_ctor(0, 2, 0);
} else {
 x_179 = x_135;
}
lean_ctor_set(x_179, 0, x_178);
lean_ctor_set(x_179, 1, x_137);
return x_179;
}
}
}
else
{
uint8_t x_199; 
lean_free_object(x_102);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_199 = !lean_is_exclusive(x_132);
if (x_199 == 0)
{
return x_132;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_200 = lean_ctor_get(x_132, 0);
x_201 = lean_ctor_get(x_132, 1);
lean_inc(x_201);
lean_inc(x_200);
lean_dec(x_132);
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_200);
lean_ctor_set(x_202, 1, x_201);
return x_202;
}
}
}
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_203 = lean_ctor_get(x_102, 0);
x_204 = lean_ctor_get(x_102, 1);
lean_inc(x_204);
lean_inc(x_203);
lean_dec(x_102);
x_205 = l_Lean_LocalDecl_value_x3f(x_203);
lean_dec(x_203);
if (lean_obj_tag(x_205) == 0)
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_206 = l_Lean_mkFreshId___at_Lean_Meta_Closure_collectExprAux___spec__1___rarg(x_7, x_204);
x_207 = lean_ctor_get(x_206, 0);
lean_inc(x_207);
x_208 = lean_ctor_get(x_206, 1);
lean_inc(x_208);
lean_dec(x_206);
lean_inc(x_207);
x_209 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_209, 0, x_101);
lean_ctor_set(x_209, 1, x_207);
x_210 = l_Lean_Meta_Closure_pushToProcess(x_209, x_2, x_3, x_4, x_5, x_6, x_7, x_208);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_211 = lean_ctor_get(x_210, 1);
lean_inc(x_211);
if (lean_is_exclusive(x_210)) {
 lean_ctor_release(x_210, 0);
 lean_ctor_release(x_210, 1);
 x_212 = x_210;
} else {
 lean_dec_ref(x_210);
 x_212 = lean_box(0);
}
x_213 = l_Lean_mkFVar(x_207);
if (lean_is_scalar(x_212)) {
 x_214 = lean_alloc_ctor(0, 2, 0);
} else {
 x_214 = x_212;
}
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_211);
return x_214;
}
else
{
lean_object* x_215; lean_object* x_216; 
lean_dec(x_101);
x_215 = lean_ctor_get(x_205, 0);
lean_inc(x_215);
lean_dec(x_205);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_216 = l_Lean_Meta_Closure_preprocess(x_215, x_2, x_3, x_4, x_5, x_6, x_7, x_204);
if (lean_obj_tag(x_216) == 0)
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; uint8_t x_258; 
x_217 = lean_ctor_get(x_216, 0);
lean_inc(x_217);
x_218 = lean_ctor_get(x_216, 1);
lean_inc(x_218);
if (lean_is_exclusive(x_216)) {
 lean_ctor_release(x_216, 0);
 lean_ctor_release(x_216, 1);
 x_219 = x_216;
} else {
 lean_dec_ref(x_216);
 x_219 = lean_box(0);
}
x_258 = l_Lean_Expr_hasLevelParam(x_217);
if (x_258 == 0)
{
uint8_t x_259; 
x_259 = l_Lean_Expr_hasFVar(x_217);
if (x_259 == 0)
{
uint8_t x_260; 
x_260 = l_Lean_Expr_hasMVar(x_217);
if (x_260 == 0)
{
lean_object* x_261; 
lean_dec(x_219);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_261 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_261, 0, x_217);
lean_ctor_set(x_261, 1, x_218);
return x_261;
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_262 = lean_st_ref_get(x_7, x_218);
x_263 = lean_ctor_get(x_262, 1);
lean_inc(x_263);
lean_dec(x_262);
x_264 = lean_st_ref_get(x_3, x_263);
x_265 = lean_ctor_get(x_264, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_264, 1);
lean_inc(x_266);
lean_dec(x_264);
x_220 = x_265;
x_221 = x_266;
goto block_257;
}
}
else
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; 
x_267 = lean_st_ref_get(x_7, x_218);
x_268 = lean_ctor_get(x_267, 1);
lean_inc(x_268);
lean_dec(x_267);
x_269 = lean_st_ref_get(x_3, x_268);
x_270 = lean_ctor_get(x_269, 0);
lean_inc(x_270);
x_271 = lean_ctor_get(x_269, 1);
lean_inc(x_271);
lean_dec(x_269);
x_220 = x_270;
x_221 = x_271;
goto block_257;
}
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; 
x_272 = lean_st_ref_get(x_7, x_218);
x_273 = lean_ctor_get(x_272, 1);
lean_inc(x_273);
lean_dec(x_272);
x_274 = lean_st_ref_get(x_3, x_273);
x_275 = lean_ctor_get(x_274, 0);
lean_inc(x_275);
x_276 = lean_ctor_get(x_274, 1);
lean_inc(x_276);
lean_dec(x_274);
x_220 = x_275;
x_221 = x_276;
goto block_257;
}
block_257:
{
lean_object* x_222; lean_object* x_223; 
x_222 = lean_ctor_get(x_220, 1);
lean_inc(x_222);
lean_dec(x_220);
x_223 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_222, x_217);
lean_dec(x_222);
if (lean_obj_tag(x_223) == 0)
{
lean_object* x_224; 
lean_dec(x_219);
lean_inc(x_7);
lean_inc(x_217);
x_224 = l_Lean_Meta_Closure_collectExprAux(x_217, x_2, x_3, x_4, x_5, x_6, x_7, x_221);
if (lean_obj_tag(x_224) == 0)
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; 
x_225 = lean_ctor_get(x_224, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_224, 1);
lean_inc(x_226);
lean_dec(x_224);
x_227 = lean_st_ref_get(x_7, x_226);
lean_dec(x_7);
x_228 = lean_ctor_get(x_227, 1);
lean_inc(x_228);
lean_dec(x_227);
x_229 = lean_st_ref_take(x_3, x_228);
x_230 = lean_ctor_get(x_229, 0);
lean_inc(x_230);
x_231 = lean_ctor_get(x_229, 1);
lean_inc(x_231);
lean_dec(x_229);
x_232 = lean_ctor_get(x_230, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_230, 1);
lean_inc(x_233);
x_234 = lean_ctor_get(x_230, 2);
lean_inc(x_234);
x_235 = lean_ctor_get(x_230, 3);
lean_inc(x_235);
x_236 = lean_ctor_get(x_230, 4);
lean_inc(x_236);
x_237 = lean_ctor_get(x_230, 5);
lean_inc(x_237);
x_238 = lean_ctor_get(x_230, 6);
lean_inc(x_238);
x_239 = lean_ctor_get(x_230, 7);
lean_inc(x_239);
x_240 = lean_ctor_get(x_230, 8);
lean_inc(x_240);
x_241 = lean_ctor_get(x_230, 9);
lean_inc(x_241);
x_242 = lean_ctor_get(x_230, 10);
lean_inc(x_242);
x_243 = lean_ctor_get(x_230, 11);
lean_inc(x_243);
if (lean_is_exclusive(x_230)) {
 lean_ctor_release(x_230, 0);
 lean_ctor_release(x_230, 1);
 lean_ctor_release(x_230, 2);
 lean_ctor_release(x_230, 3);
 lean_ctor_release(x_230, 4);
 lean_ctor_release(x_230, 5);
 lean_ctor_release(x_230, 6);
 lean_ctor_release(x_230, 7);
 lean_ctor_release(x_230, 8);
 lean_ctor_release(x_230, 9);
 lean_ctor_release(x_230, 10);
 lean_ctor_release(x_230, 11);
 x_244 = x_230;
} else {
 lean_dec_ref(x_230);
 x_244 = lean_box(0);
}
lean_inc(x_225);
x_245 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_233, x_217, x_225);
if (lean_is_scalar(x_244)) {
 x_246 = lean_alloc_ctor(0, 12, 0);
} else {
 x_246 = x_244;
}
lean_ctor_set(x_246, 0, x_232);
lean_ctor_set(x_246, 1, x_245);
lean_ctor_set(x_246, 2, x_234);
lean_ctor_set(x_246, 3, x_235);
lean_ctor_set(x_246, 4, x_236);
lean_ctor_set(x_246, 5, x_237);
lean_ctor_set(x_246, 6, x_238);
lean_ctor_set(x_246, 7, x_239);
lean_ctor_set(x_246, 8, x_240);
lean_ctor_set(x_246, 9, x_241);
lean_ctor_set(x_246, 10, x_242);
lean_ctor_set(x_246, 11, x_243);
x_247 = lean_st_ref_set(x_3, x_246, x_231);
x_248 = lean_ctor_get(x_247, 1);
lean_inc(x_248);
if (lean_is_exclusive(x_247)) {
 lean_ctor_release(x_247, 0);
 lean_ctor_release(x_247, 1);
 x_249 = x_247;
} else {
 lean_dec_ref(x_247);
 x_249 = lean_box(0);
}
if (lean_is_scalar(x_249)) {
 x_250 = lean_alloc_ctor(0, 2, 0);
} else {
 x_250 = x_249;
}
lean_ctor_set(x_250, 0, x_225);
lean_ctor_set(x_250, 1, x_248);
return x_250;
}
else
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; 
lean_dec(x_217);
lean_dec(x_7);
x_251 = lean_ctor_get(x_224, 0);
lean_inc(x_251);
x_252 = lean_ctor_get(x_224, 1);
lean_inc(x_252);
if (lean_is_exclusive(x_224)) {
 lean_ctor_release(x_224, 0);
 lean_ctor_release(x_224, 1);
 x_253 = x_224;
} else {
 lean_dec_ref(x_224);
 x_253 = lean_box(0);
}
if (lean_is_scalar(x_253)) {
 x_254 = lean_alloc_ctor(1, 2, 0);
} else {
 x_254 = x_253;
}
lean_ctor_set(x_254, 0, x_251);
lean_ctor_set(x_254, 1, x_252);
return x_254;
}
}
else
{
lean_object* x_255; lean_object* x_256; 
lean_dec(x_217);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_255 = lean_ctor_get(x_223, 0);
lean_inc(x_255);
lean_dec(x_223);
if (lean_is_scalar(x_219)) {
 x_256 = lean_alloc_ctor(0, 2, 0);
} else {
 x_256 = x_219;
}
lean_ctor_set(x_256, 0, x_255);
lean_ctor_set(x_256, 1, x_221);
return x_256;
}
}
}
else
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_277 = lean_ctor_get(x_216, 0);
lean_inc(x_277);
x_278 = lean_ctor_get(x_216, 1);
lean_inc(x_278);
if (lean_is_exclusive(x_216)) {
 lean_ctor_release(x_216, 0);
 lean_ctor_release(x_216, 1);
 x_279 = x_216;
} else {
 lean_dec_ref(x_216);
 x_279 = lean_box(0);
}
if (lean_is_scalar(x_279)) {
 x_280 = lean_alloc_ctor(1, 2, 0);
} else {
 x_280 = x_279;
}
lean_ctor_set(x_280, 0, x_277);
lean_ctor_set(x_280, 1, x_278);
return x_280;
}
}
}
}
}
else
{
uint8_t x_281; 
lean_dec(x_101);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_281 = !lean_is_exclusive(x_102);
if (x_281 == 0)
{
return x_102;
}
else
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; 
x_282 = lean_ctor_get(x_102, 0);
x_283 = lean_ctor_get(x_102, 1);
lean_inc(x_283);
lean_inc(x_282);
lean_dec(x_102);
x_284 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_284, 0, x_282);
lean_ctor_set(x_284, 1, x_283);
return x_284;
}
}
}
case 2:
{
lean_object* x_285; lean_object* x_286; 
x_285 = lean_ctor_get(x_1, 0);
lean_inc(x_285);
x_286 = l_Lean_Meta_getMVarDecl(x_285, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_286) == 0)
{
uint8_t x_287; 
x_287 = !lean_is_exclusive(x_286);
if (x_287 == 0)
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_347; lean_object* x_348; 
x_288 = lean_ctor_get(x_286, 0);
x_289 = lean_ctor_get(x_286, 1);
x_347 = lean_ctor_get(x_288, 2);
lean_inc(x_347);
lean_dec(x_288);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_348 = l_Lean_Meta_Closure_preprocess(x_347, x_2, x_3, x_4, x_5, x_6, x_7, x_289);
if (lean_obj_tag(x_348) == 0)
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; uint8_t x_397; 
x_349 = lean_ctor_get(x_348, 0);
lean_inc(x_349);
x_350 = lean_ctor_get(x_348, 1);
lean_inc(x_350);
if (lean_is_exclusive(x_348)) {
 lean_ctor_release(x_348, 0);
 lean_ctor_release(x_348, 1);
 x_351 = x_348;
} else {
 lean_dec_ref(x_348);
 x_351 = lean_box(0);
}
x_397 = l_Lean_Expr_hasLevelParam(x_349);
if (x_397 == 0)
{
uint8_t x_398; 
x_398 = l_Lean_Expr_hasFVar(x_349);
if (x_398 == 0)
{
uint8_t x_399; 
x_399 = l_Lean_Expr_hasMVar(x_349);
if (x_399 == 0)
{
lean_dec(x_351);
lean_ctor_set(x_286, 1, x_350);
lean_ctor_set(x_286, 0, x_349);
x_290 = x_286;
goto block_346;
}
else
{
lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; 
lean_free_object(x_286);
x_400 = lean_st_ref_get(x_7, x_350);
x_401 = lean_ctor_get(x_400, 1);
lean_inc(x_401);
lean_dec(x_400);
x_402 = lean_st_ref_get(x_3, x_401);
x_403 = lean_ctor_get(x_402, 0);
lean_inc(x_403);
x_404 = lean_ctor_get(x_402, 1);
lean_inc(x_404);
lean_dec(x_402);
x_352 = x_403;
x_353 = x_404;
goto block_396;
}
}
else
{
lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; 
lean_free_object(x_286);
x_405 = lean_st_ref_get(x_7, x_350);
x_406 = lean_ctor_get(x_405, 1);
lean_inc(x_406);
lean_dec(x_405);
x_407 = lean_st_ref_get(x_3, x_406);
x_408 = lean_ctor_get(x_407, 0);
lean_inc(x_408);
x_409 = lean_ctor_get(x_407, 1);
lean_inc(x_409);
lean_dec(x_407);
x_352 = x_408;
x_353 = x_409;
goto block_396;
}
}
else
{
lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; 
lean_free_object(x_286);
x_410 = lean_st_ref_get(x_7, x_350);
x_411 = lean_ctor_get(x_410, 1);
lean_inc(x_411);
lean_dec(x_410);
x_412 = lean_st_ref_get(x_3, x_411);
x_413 = lean_ctor_get(x_412, 0);
lean_inc(x_413);
x_414 = lean_ctor_get(x_412, 1);
lean_inc(x_414);
lean_dec(x_412);
x_352 = x_413;
x_353 = x_414;
goto block_396;
}
block_396:
{
lean_object* x_354; lean_object* x_355; 
x_354 = lean_ctor_get(x_352, 1);
lean_inc(x_354);
lean_dec(x_352);
x_355 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_354, x_349);
lean_dec(x_354);
if (lean_obj_tag(x_355) == 0)
{
lean_object* x_356; 
lean_dec(x_351);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_349);
x_356 = l_Lean_Meta_Closure_collectExprAux(x_349, x_2, x_3, x_4, x_5, x_6, x_7, x_353);
if (lean_obj_tag(x_356) == 0)
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; uint8_t x_364; 
x_357 = lean_ctor_get(x_356, 0);
lean_inc(x_357);
x_358 = lean_ctor_get(x_356, 1);
lean_inc(x_358);
lean_dec(x_356);
x_359 = lean_st_ref_get(x_7, x_358);
x_360 = lean_ctor_get(x_359, 1);
lean_inc(x_360);
lean_dec(x_359);
x_361 = lean_st_ref_take(x_3, x_360);
x_362 = lean_ctor_get(x_361, 0);
lean_inc(x_362);
x_363 = lean_ctor_get(x_361, 1);
lean_inc(x_363);
lean_dec(x_361);
x_364 = !lean_is_exclusive(x_362);
if (x_364 == 0)
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; uint8_t x_368; 
x_365 = lean_ctor_get(x_362, 1);
lean_inc(x_357);
x_366 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_365, x_349, x_357);
lean_ctor_set(x_362, 1, x_366);
x_367 = lean_st_ref_set(x_3, x_362, x_363);
x_368 = !lean_is_exclusive(x_367);
if (x_368 == 0)
{
lean_object* x_369; 
x_369 = lean_ctor_get(x_367, 0);
lean_dec(x_369);
lean_ctor_set(x_367, 0, x_357);
x_290 = x_367;
goto block_346;
}
else
{
lean_object* x_370; lean_object* x_371; 
x_370 = lean_ctor_get(x_367, 1);
lean_inc(x_370);
lean_dec(x_367);
x_371 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_371, 0, x_357);
lean_ctor_set(x_371, 1, x_370);
x_290 = x_371;
goto block_346;
}
}
else
{
lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; 
x_372 = lean_ctor_get(x_362, 0);
x_373 = lean_ctor_get(x_362, 1);
x_374 = lean_ctor_get(x_362, 2);
x_375 = lean_ctor_get(x_362, 3);
x_376 = lean_ctor_get(x_362, 4);
x_377 = lean_ctor_get(x_362, 5);
x_378 = lean_ctor_get(x_362, 6);
x_379 = lean_ctor_get(x_362, 7);
x_380 = lean_ctor_get(x_362, 8);
x_381 = lean_ctor_get(x_362, 9);
x_382 = lean_ctor_get(x_362, 10);
x_383 = lean_ctor_get(x_362, 11);
lean_inc(x_383);
lean_inc(x_382);
lean_inc(x_381);
lean_inc(x_380);
lean_inc(x_379);
lean_inc(x_378);
lean_inc(x_377);
lean_inc(x_376);
lean_inc(x_375);
lean_inc(x_374);
lean_inc(x_373);
lean_inc(x_372);
lean_dec(x_362);
lean_inc(x_357);
x_384 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_373, x_349, x_357);
x_385 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_385, 0, x_372);
lean_ctor_set(x_385, 1, x_384);
lean_ctor_set(x_385, 2, x_374);
lean_ctor_set(x_385, 3, x_375);
lean_ctor_set(x_385, 4, x_376);
lean_ctor_set(x_385, 5, x_377);
lean_ctor_set(x_385, 6, x_378);
lean_ctor_set(x_385, 7, x_379);
lean_ctor_set(x_385, 8, x_380);
lean_ctor_set(x_385, 9, x_381);
lean_ctor_set(x_385, 10, x_382);
lean_ctor_set(x_385, 11, x_383);
x_386 = lean_st_ref_set(x_3, x_385, x_363);
x_387 = lean_ctor_get(x_386, 1);
lean_inc(x_387);
if (lean_is_exclusive(x_386)) {
 lean_ctor_release(x_386, 0);
 lean_ctor_release(x_386, 1);
 x_388 = x_386;
} else {
 lean_dec_ref(x_386);
 x_388 = lean_box(0);
}
if (lean_is_scalar(x_388)) {
 x_389 = lean_alloc_ctor(0, 2, 0);
} else {
 x_389 = x_388;
}
lean_ctor_set(x_389, 0, x_357);
lean_ctor_set(x_389, 1, x_387);
x_290 = x_389;
goto block_346;
}
}
else
{
uint8_t x_390; 
lean_dec(x_349);
x_390 = !lean_is_exclusive(x_356);
if (x_390 == 0)
{
x_290 = x_356;
goto block_346;
}
else
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; 
x_391 = lean_ctor_get(x_356, 0);
x_392 = lean_ctor_get(x_356, 1);
lean_inc(x_392);
lean_inc(x_391);
lean_dec(x_356);
x_393 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_393, 0, x_391);
lean_ctor_set(x_393, 1, x_392);
x_290 = x_393;
goto block_346;
}
}
}
else
{
lean_object* x_394; lean_object* x_395; 
lean_dec(x_349);
x_394 = lean_ctor_get(x_355, 0);
lean_inc(x_394);
lean_dec(x_355);
if (lean_is_scalar(x_351)) {
 x_395 = lean_alloc_ctor(0, 2, 0);
} else {
 x_395 = x_351;
}
lean_ctor_set(x_395, 0, x_394);
lean_ctor_set(x_395, 1, x_353);
x_290 = x_395;
goto block_346;
}
}
}
else
{
uint8_t x_415; 
lean_free_object(x_286);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_415 = !lean_is_exclusive(x_348);
if (x_415 == 0)
{
return x_348;
}
else
{
lean_object* x_416; lean_object* x_417; lean_object* x_418; 
x_416 = lean_ctor_get(x_348, 0);
x_417 = lean_ctor_get(x_348, 1);
lean_inc(x_417);
lean_inc(x_416);
lean_dec(x_348);
x_418 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_418, 0, x_416);
lean_ctor_set(x_418, 1, x_417);
return x_418;
}
}
block_346:
{
if (lean_obj_tag(x_290) == 0)
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; uint8_t x_304; 
x_291 = lean_ctor_get(x_290, 0);
lean_inc(x_291);
x_292 = lean_ctor_get(x_290, 1);
lean_inc(x_292);
lean_dec(x_290);
x_293 = l_Lean_mkFreshId___at_Lean_Meta_Closure_collectExprAux___spec__1___rarg(x_7, x_292);
x_294 = lean_ctor_get(x_293, 0);
lean_inc(x_294);
x_295 = lean_ctor_get(x_293, 1);
lean_inc(x_295);
lean_dec(x_293);
x_296 = l_Lean_Meta_Closure_mkNextUserName___rarg(x_3, x_4, x_5, x_6, x_7, x_295);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_297 = lean_ctor_get(x_296, 0);
lean_inc(x_297);
x_298 = lean_ctor_get(x_296, 1);
lean_inc(x_298);
lean_dec(x_296);
x_299 = lean_st_ref_get(x_7, x_298);
lean_dec(x_7);
x_300 = lean_ctor_get(x_299, 1);
lean_inc(x_300);
lean_dec(x_299);
x_301 = lean_st_ref_take(x_3, x_300);
x_302 = lean_ctor_get(x_301, 0);
lean_inc(x_302);
x_303 = lean_ctor_get(x_301, 1);
lean_inc(x_303);
lean_dec(x_301);
x_304 = !lean_is_exclusive(x_302);
if (x_304 == 0)
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; uint8_t x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; uint8_t x_313; 
x_305 = lean_ctor_get(x_302, 6);
x_306 = lean_ctor_get(x_302, 9);
x_307 = lean_unsigned_to_nat(0u);
x_308 = 0;
lean_inc(x_294);
x_309 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_309, 0, x_307);
lean_ctor_set(x_309, 1, x_294);
lean_ctor_set(x_309, 2, x_297);
lean_ctor_set(x_309, 3, x_291);
lean_ctor_set_uint8(x_309, sizeof(void*)*4, x_308);
x_310 = lean_array_push(x_305, x_309);
x_311 = lean_array_push(x_306, x_1);
lean_ctor_set(x_302, 9, x_311);
lean_ctor_set(x_302, 6, x_310);
x_312 = lean_st_ref_set(x_3, x_302, x_303);
x_313 = !lean_is_exclusive(x_312);
if (x_313 == 0)
{
lean_object* x_314; lean_object* x_315; 
x_314 = lean_ctor_get(x_312, 0);
lean_dec(x_314);
x_315 = l_Lean_mkFVar(x_294);
lean_ctor_set(x_312, 0, x_315);
return x_312;
}
else
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; 
x_316 = lean_ctor_get(x_312, 1);
lean_inc(x_316);
lean_dec(x_312);
x_317 = l_Lean_mkFVar(x_294);
x_318 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_318, 0, x_317);
lean_ctor_set(x_318, 1, x_316);
return x_318;
}
}
else
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; uint8_t x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; 
x_319 = lean_ctor_get(x_302, 0);
x_320 = lean_ctor_get(x_302, 1);
x_321 = lean_ctor_get(x_302, 2);
x_322 = lean_ctor_get(x_302, 3);
x_323 = lean_ctor_get(x_302, 4);
x_324 = lean_ctor_get(x_302, 5);
x_325 = lean_ctor_get(x_302, 6);
x_326 = lean_ctor_get(x_302, 7);
x_327 = lean_ctor_get(x_302, 8);
x_328 = lean_ctor_get(x_302, 9);
x_329 = lean_ctor_get(x_302, 10);
x_330 = lean_ctor_get(x_302, 11);
lean_inc(x_330);
lean_inc(x_329);
lean_inc(x_328);
lean_inc(x_327);
lean_inc(x_326);
lean_inc(x_325);
lean_inc(x_324);
lean_inc(x_323);
lean_inc(x_322);
lean_inc(x_321);
lean_inc(x_320);
lean_inc(x_319);
lean_dec(x_302);
x_331 = lean_unsigned_to_nat(0u);
x_332 = 0;
lean_inc(x_294);
x_333 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_333, 0, x_331);
lean_ctor_set(x_333, 1, x_294);
lean_ctor_set(x_333, 2, x_297);
lean_ctor_set(x_333, 3, x_291);
lean_ctor_set_uint8(x_333, sizeof(void*)*4, x_332);
x_334 = lean_array_push(x_325, x_333);
x_335 = lean_array_push(x_328, x_1);
x_336 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_336, 0, x_319);
lean_ctor_set(x_336, 1, x_320);
lean_ctor_set(x_336, 2, x_321);
lean_ctor_set(x_336, 3, x_322);
lean_ctor_set(x_336, 4, x_323);
lean_ctor_set(x_336, 5, x_324);
lean_ctor_set(x_336, 6, x_334);
lean_ctor_set(x_336, 7, x_326);
lean_ctor_set(x_336, 8, x_327);
lean_ctor_set(x_336, 9, x_335);
lean_ctor_set(x_336, 10, x_329);
lean_ctor_set(x_336, 11, x_330);
x_337 = lean_st_ref_set(x_3, x_336, x_303);
x_338 = lean_ctor_get(x_337, 1);
lean_inc(x_338);
if (lean_is_exclusive(x_337)) {
 lean_ctor_release(x_337, 0);
 lean_ctor_release(x_337, 1);
 x_339 = x_337;
} else {
 lean_dec_ref(x_337);
 x_339 = lean_box(0);
}
x_340 = l_Lean_mkFVar(x_294);
if (lean_is_scalar(x_339)) {
 x_341 = lean_alloc_ctor(0, 2, 0);
} else {
 x_341 = x_339;
}
lean_ctor_set(x_341, 0, x_340);
lean_ctor_set(x_341, 1, x_338);
return x_341;
}
}
else
{
uint8_t x_342; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_342 = !lean_is_exclusive(x_290);
if (x_342 == 0)
{
return x_290;
}
else
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; 
x_343 = lean_ctor_get(x_290, 0);
x_344 = lean_ctor_get(x_290, 1);
lean_inc(x_344);
lean_inc(x_343);
lean_dec(x_290);
x_345 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_345, 0, x_343);
lean_ctor_set(x_345, 1, x_344);
return x_345;
}
}
}
}
else
{
lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_464; lean_object* x_465; 
x_419 = lean_ctor_get(x_286, 0);
x_420 = lean_ctor_get(x_286, 1);
lean_inc(x_420);
lean_inc(x_419);
lean_dec(x_286);
x_464 = lean_ctor_get(x_419, 2);
lean_inc(x_464);
lean_dec(x_419);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_465 = l_Lean_Meta_Closure_preprocess(x_464, x_2, x_3, x_4, x_5, x_6, x_7, x_420);
if (lean_obj_tag(x_465) == 0)
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; uint8_t x_507; 
x_466 = lean_ctor_get(x_465, 0);
lean_inc(x_466);
x_467 = lean_ctor_get(x_465, 1);
lean_inc(x_467);
if (lean_is_exclusive(x_465)) {
 lean_ctor_release(x_465, 0);
 lean_ctor_release(x_465, 1);
 x_468 = x_465;
} else {
 lean_dec_ref(x_465);
 x_468 = lean_box(0);
}
x_507 = l_Lean_Expr_hasLevelParam(x_466);
if (x_507 == 0)
{
uint8_t x_508; 
x_508 = l_Lean_Expr_hasFVar(x_466);
if (x_508 == 0)
{
uint8_t x_509; 
x_509 = l_Lean_Expr_hasMVar(x_466);
if (x_509 == 0)
{
lean_object* x_510; 
lean_dec(x_468);
x_510 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_510, 0, x_466);
lean_ctor_set(x_510, 1, x_467);
x_421 = x_510;
goto block_463;
}
else
{
lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; 
x_511 = lean_st_ref_get(x_7, x_467);
x_512 = lean_ctor_get(x_511, 1);
lean_inc(x_512);
lean_dec(x_511);
x_513 = lean_st_ref_get(x_3, x_512);
x_514 = lean_ctor_get(x_513, 0);
lean_inc(x_514);
x_515 = lean_ctor_get(x_513, 1);
lean_inc(x_515);
lean_dec(x_513);
x_469 = x_514;
x_470 = x_515;
goto block_506;
}
}
else
{
lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; 
x_516 = lean_st_ref_get(x_7, x_467);
x_517 = lean_ctor_get(x_516, 1);
lean_inc(x_517);
lean_dec(x_516);
x_518 = lean_st_ref_get(x_3, x_517);
x_519 = lean_ctor_get(x_518, 0);
lean_inc(x_519);
x_520 = lean_ctor_get(x_518, 1);
lean_inc(x_520);
lean_dec(x_518);
x_469 = x_519;
x_470 = x_520;
goto block_506;
}
}
else
{
lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; 
x_521 = lean_st_ref_get(x_7, x_467);
x_522 = lean_ctor_get(x_521, 1);
lean_inc(x_522);
lean_dec(x_521);
x_523 = lean_st_ref_get(x_3, x_522);
x_524 = lean_ctor_get(x_523, 0);
lean_inc(x_524);
x_525 = lean_ctor_get(x_523, 1);
lean_inc(x_525);
lean_dec(x_523);
x_469 = x_524;
x_470 = x_525;
goto block_506;
}
block_506:
{
lean_object* x_471; lean_object* x_472; 
x_471 = lean_ctor_get(x_469, 1);
lean_inc(x_471);
lean_dec(x_469);
x_472 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_471, x_466);
lean_dec(x_471);
if (lean_obj_tag(x_472) == 0)
{
lean_object* x_473; 
lean_dec(x_468);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_466);
x_473 = l_Lean_Meta_Closure_collectExprAux(x_466, x_2, x_3, x_4, x_5, x_6, x_7, x_470);
if (lean_obj_tag(x_473) == 0)
{
lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; 
x_474 = lean_ctor_get(x_473, 0);
lean_inc(x_474);
x_475 = lean_ctor_get(x_473, 1);
lean_inc(x_475);
lean_dec(x_473);
x_476 = lean_st_ref_get(x_7, x_475);
x_477 = lean_ctor_get(x_476, 1);
lean_inc(x_477);
lean_dec(x_476);
x_478 = lean_st_ref_take(x_3, x_477);
x_479 = lean_ctor_get(x_478, 0);
lean_inc(x_479);
x_480 = lean_ctor_get(x_478, 1);
lean_inc(x_480);
lean_dec(x_478);
x_481 = lean_ctor_get(x_479, 0);
lean_inc(x_481);
x_482 = lean_ctor_get(x_479, 1);
lean_inc(x_482);
x_483 = lean_ctor_get(x_479, 2);
lean_inc(x_483);
x_484 = lean_ctor_get(x_479, 3);
lean_inc(x_484);
x_485 = lean_ctor_get(x_479, 4);
lean_inc(x_485);
x_486 = lean_ctor_get(x_479, 5);
lean_inc(x_486);
x_487 = lean_ctor_get(x_479, 6);
lean_inc(x_487);
x_488 = lean_ctor_get(x_479, 7);
lean_inc(x_488);
x_489 = lean_ctor_get(x_479, 8);
lean_inc(x_489);
x_490 = lean_ctor_get(x_479, 9);
lean_inc(x_490);
x_491 = lean_ctor_get(x_479, 10);
lean_inc(x_491);
x_492 = lean_ctor_get(x_479, 11);
lean_inc(x_492);
if (lean_is_exclusive(x_479)) {
 lean_ctor_release(x_479, 0);
 lean_ctor_release(x_479, 1);
 lean_ctor_release(x_479, 2);
 lean_ctor_release(x_479, 3);
 lean_ctor_release(x_479, 4);
 lean_ctor_release(x_479, 5);
 lean_ctor_release(x_479, 6);
 lean_ctor_release(x_479, 7);
 lean_ctor_release(x_479, 8);
 lean_ctor_release(x_479, 9);
 lean_ctor_release(x_479, 10);
 lean_ctor_release(x_479, 11);
 x_493 = x_479;
} else {
 lean_dec_ref(x_479);
 x_493 = lean_box(0);
}
lean_inc(x_474);
x_494 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_482, x_466, x_474);
if (lean_is_scalar(x_493)) {
 x_495 = lean_alloc_ctor(0, 12, 0);
} else {
 x_495 = x_493;
}
lean_ctor_set(x_495, 0, x_481);
lean_ctor_set(x_495, 1, x_494);
lean_ctor_set(x_495, 2, x_483);
lean_ctor_set(x_495, 3, x_484);
lean_ctor_set(x_495, 4, x_485);
lean_ctor_set(x_495, 5, x_486);
lean_ctor_set(x_495, 6, x_487);
lean_ctor_set(x_495, 7, x_488);
lean_ctor_set(x_495, 8, x_489);
lean_ctor_set(x_495, 9, x_490);
lean_ctor_set(x_495, 10, x_491);
lean_ctor_set(x_495, 11, x_492);
x_496 = lean_st_ref_set(x_3, x_495, x_480);
x_497 = lean_ctor_get(x_496, 1);
lean_inc(x_497);
if (lean_is_exclusive(x_496)) {
 lean_ctor_release(x_496, 0);
 lean_ctor_release(x_496, 1);
 x_498 = x_496;
} else {
 lean_dec_ref(x_496);
 x_498 = lean_box(0);
}
if (lean_is_scalar(x_498)) {
 x_499 = lean_alloc_ctor(0, 2, 0);
} else {
 x_499 = x_498;
}
lean_ctor_set(x_499, 0, x_474);
lean_ctor_set(x_499, 1, x_497);
x_421 = x_499;
goto block_463;
}
else
{
lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; 
lean_dec(x_466);
x_500 = lean_ctor_get(x_473, 0);
lean_inc(x_500);
x_501 = lean_ctor_get(x_473, 1);
lean_inc(x_501);
if (lean_is_exclusive(x_473)) {
 lean_ctor_release(x_473, 0);
 lean_ctor_release(x_473, 1);
 x_502 = x_473;
} else {
 lean_dec_ref(x_473);
 x_502 = lean_box(0);
}
if (lean_is_scalar(x_502)) {
 x_503 = lean_alloc_ctor(1, 2, 0);
} else {
 x_503 = x_502;
}
lean_ctor_set(x_503, 0, x_500);
lean_ctor_set(x_503, 1, x_501);
x_421 = x_503;
goto block_463;
}
}
else
{
lean_object* x_504; lean_object* x_505; 
lean_dec(x_466);
x_504 = lean_ctor_get(x_472, 0);
lean_inc(x_504);
lean_dec(x_472);
if (lean_is_scalar(x_468)) {
 x_505 = lean_alloc_ctor(0, 2, 0);
} else {
 x_505 = x_468;
}
lean_ctor_set(x_505, 0, x_504);
lean_ctor_set(x_505, 1, x_470);
x_421 = x_505;
goto block_463;
}
}
}
else
{
lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_526 = lean_ctor_get(x_465, 0);
lean_inc(x_526);
x_527 = lean_ctor_get(x_465, 1);
lean_inc(x_527);
if (lean_is_exclusive(x_465)) {
 lean_ctor_release(x_465, 0);
 lean_ctor_release(x_465, 1);
 x_528 = x_465;
} else {
 lean_dec_ref(x_465);
 x_528 = lean_box(0);
}
if (lean_is_scalar(x_528)) {
 x_529 = lean_alloc_ctor(1, 2, 0);
} else {
 x_529 = x_528;
}
lean_ctor_set(x_529, 0, x_526);
lean_ctor_set(x_529, 1, x_527);
return x_529;
}
block_463:
{
if (lean_obj_tag(x_421) == 0)
{
lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; uint8_t x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; 
x_422 = lean_ctor_get(x_421, 0);
lean_inc(x_422);
x_423 = lean_ctor_get(x_421, 1);
lean_inc(x_423);
lean_dec(x_421);
x_424 = l_Lean_mkFreshId___at_Lean_Meta_Closure_collectExprAux___spec__1___rarg(x_7, x_423);
x_425 = lean_ctor_get(x_424, 0);
lean_inc(x_425);
x_426 = lean_ctor_get(x_424, 1);
lean_inc(x_426);
lean_dec(x_424);
x_427 = l_Lean_Meta_Closure_mkNextUserName___rarg(x_3, x_4, x_5, x_6, x_7, x_426);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_428 = lean_ctor_get(x_427, 0);
lean_inc(x_428);
x_429 = lean_ctor_get(x_427, 1);
lean_inc(x_429);
lean_dec(x_427);
x_430 = lean_st_ref_get(x_7, x_429);
lean_dec(x_7);
x_431 = lean_ctor_get(x_430, 1);
lean_inc(x_431);
lean_dec(x_430);
x_432 = lean_st_ref_take(x_3, x_431);
x_433 = lean_ctor_get(x_432, 0);
lean_inc(x_433);
x_434 = lean_ctor_get(x_432, 1);
lean_inc(x_434);
lean_dec(x_432);
x_435 = lean_ctor_get(x_433, 0);
lean_inc(x_435);
x_436 = lean_ctor_get(x_433, 1);
lean_inc(x_436);
x_437 = lean_ctor_get(x_433, 2);
lean_inc(x_437);
x_438 = lean_ctor_get(x_433, 3);
lean_inc(x_438);
x_439 = lean_ctor_get(x_433, 4);
lean_inc(x_439);
x_440 = lean_ctor_get(x_433, 5);
lean_inc(x_440);
x_441 = lean_ctor_get(x_433, 6);
lean_inc(x_441);
x_442 = lean_ctor_get(x_433, 7);
lean_inc(x_442);
x_443 = lean_ctor_get(x_433, 8);
lean_inc(x_443);
x_444 = lean_ctor_get(x_433, 9);
lean_inc(x_444);
x_445 = lean_ctor_get(x_433, 10);
lean_inc(x_445);
x_446 = lean_ctor_get(x_433, 11);
lean_inc(x_446);
if (lean_is_exclusive(x_433)) {
 lean_ctor_release(x_433, 0);
 lean_ctor_release(x_433, 1);
 lean_ctor_release(x_433, 2);
 lean_ctor_release(x_433, 3);
 lean_ctor_release(x_433, 4);
 lean_ctor_release(x_433, 5);
 lean_ctor_release(x_433, 6);
 lean_ctor_release(x_433, 7);
 lean_ctor_release(x_433, 8);
 lean_ctor_release(x_433, 9);
 lean_ctor_release(x_433, 10);
 lean_ctor_release(x_433, 11);
 x_447 = x_433;
} else {
 lean_dec_ref(x_433);
 x_447 = lean_box(0);
}
x_448 = lean_unsigned_to_nat(0u);
x_449 = 0;
lean_inc(x_425);
x_450 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_450, 0, x_448);
lean_ctor_set(x_450, 1, x_425);
lean_ctor_set(x_450, 2, x_428);
lean_ctor_set(x_450, 3, x_422);
lean_ctor_set_uint8(x_450, sizeof(void*)*4, x_449);
x_451 = lean_array_push(x_441, x_450);
x_452 = lean_array_push(x_444, x_1);
if (lean_is_scalar(x_447)) {
 x_453 = lean_alloc_ctor(0, 12, 0);
} else {
 x_453 = x_447;
}
lean_ctor_set(x_453, 0, x_435);
lean_ctor_set(x_453, 1, x_436);
lean_ctor_set(x_453, 2, x_437);
lean_ctor_set(x_453, 3, x_438);
lean_ctor_set(x_453, 4, x_439);
lean_ctor_set(x_453, 5, x_440);
lean_ctor_set(x_453, 6, x_451);
lean_ctor_set(x_453, 7, x_442);
lean_ctor_set(x_453, 8, x_443);
lean_ctor_set(x_453, 9, x_452);
lean_ctor_set(x_453, 10, x_445);
lean_ctor_set(x_453, 11, x_446);
x_454 = lean_st_ref_set(x_3, x_453, x_434);
x_455 = lean_ctor_get(x_454, 1);
lean_inc(x_455);
if (lean_is_exclusive(x_454)) {
 lean_ctor_release(x_454, 0);
 lean_ctor_release(x_454, 1);
 x_456 = x_454;
} else {
 lean_dec_ref(x_454);
 x_456 = lean_box(0);
}
x_457 = l_Lean_mkFVar(x_425);
if (lean_is_scalar(x_456)) {
 x_458 = lean_alloc_ctor(0, 2, 0);
} else {
 x_458 = x_456;
}
lean_ctor_set(x_458, 0, x_457);
lean_ctor_set(x_458, 1, x_455);
return x_458;
}
else
{
lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_459 = lean_ctor_get(x_421, 0);
lean_inc(x_459);
x_460 = lean_ctor_get(x_421, 1);
lean_inc(x_460);
if (lean_is_exclusive(x_421)) {
 lean_ctor_release(x_421, 0);
 lean_ctor_release(x_421, 1);
 x_461 = x_421;
} else {
 lean_dec_ref(x_421);
 x_461 = lean_box(0);
}
if (lean_is_scalar(x_461)) {
 x_462 = lean_alloc_ctor(1, 2, 0);
} else {
 x_462 = x_461;
}
lean_ctor_set(x_462, 0, x_459);
lean_ctor_set(x_462, 1, x_460);
return x_462;
}
}
}
}
else
{
uint8_t x_530; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_530 = !lean_is_exclusive(x_286);
if (x_530 == 0)
{
return x_286;
}
else
{
lean_object* x_531; lean_object* x_532; lean_object* x_533; 
x_531 = lean_ctor_get(x_286, 0);
x_532 = lean_ctor_get(x_286, 1);
lean_inc(x_532);
lean_inc(x_531);
lean_dec(x_286);
x_533 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_533, 0, x_531);
lean_ctor_set(x_533, 1, x_532);
return x_533;
}
}
}
case 3:
{
uint8_t x_534; 
x_534 = !lean_is_exclusive(x_1);
if (x_534 == 0)
{
lean_object* x_535; lean_object* x_536; uint8_t x_537; 
x_535 = lean_ctor_get(x_1, 0);
lean_inc(x_535);
x_536 = l_Lean_Meta_Closure_collectLevel(x_535, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_537 = !lean_is_exclusive(x_536);
if (x_537 == 0)
{
lean_object* x_538; lean_object* x_539; 
x_538 = lean_ctor_get(x_536, 0);
x_539 = lean_expr_update_sort(x_1, x_538);
lean_ctor_set(x_536, 0, x_539);
return x_536;
}
else
{
lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; 
x_540 = lean_ctor_get(x_536, 0);
x_541 = lean_ctor_get(x_536, 1);
lean_inc(x_541);
lean_inc(x_540);
lean_dec(x_536);
x_542 = lean_expr_update_sort(x_1, x_540);
x_543 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_543, 0, x_542);
lean_ctor_set(x_543, 1, x_541);
return x_543;
}
}
else
{
lean_object* x_544; uint64_t x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; 
x_544 = lean_ctor_get(x_1, 0);
x_545 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_inc(x_544);
lean_dec(x_1);
lean_inc(x_544);
x_546 = l_Lean_Meta_Closure_collectLevel(x_544, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_547 = lean_ctor_get(x_546, 0);
lean_inc(x_547);
x_548 = lean_ctor_get(x_546, 1);
lean_inc(x_548);
if (lean_is_exclusive(x_546)) {
 lean_ctor_release(x_546, 0);
 lean_ctor_release(x_546, 1);
 x_549 = x_546;
} else {
 lean_dec_ref(x_546);
 x_549 = lean_box(0);
}
x_550 = lean_alloc_ctor(3, 1, 8);
lean_ctor_set(x_550, 0, x_544);
lean_ctor_set_uint64(x_550, sizeof(void*)*1, x_545);
x_551 = lean_expr_update_sort(x_550, x_547);
if (lean_is_scalar(x_549)) {
 x_552 = lean_alloc_ctor(0, 2, 0);
} else {
 x_552 = x_549;
}
lean_ctor_set(x_552, 0, x_551);
lean_ctor_set(x_552, 1, x_548);
return x_552;
}
}
case 4:
{
uint8_t x_553; 
x_553 = !lean_is_exclusive(x_1);
if (x_553 == 0)
{
lean_object* x_554; lean_object* x_555; uint8_t x_556; 
x_554 = lean_ctor_get(x_1, 1);
lean_inc(x_554);
x_555 = l_List_mapM___at_Lean_Meta_Closure_collectExprAux___spec__2(x_554, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_556 = !lean_is_exclusive(x_555);
if (x_556 == 0)
{
lean_object* x_557; lean_object* x_558; 
x_557 = lean_ctor_get(x_555, 0);
x_558 = lean_expr_update_const(x_1, x_557);
lean_ctor_set(x_555, 0, x_558);
return x_555;
}
else
{
lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; 
x_559 = lean_ctor_get(x_555, 0);
x_560 = lean_ctor_get(x_555, 1);
lean_inc(x_560);
lean_inc(x_559);
lean_dec(x_555);
x_561 = lean_expr_update_const(x_1, x_559);
x_562 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_562, 0, x_561);
lean_ctor_set(x_562, 1, x_560);
return x_562;
}
}
else
{
lean_object* x_563; lean_object* x_564; uint64_t x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; 
x_563 = lean_ctor_get(x_1, 0);
x_564 = lean_ctor_get(x_1, 1);
x_565 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_564);
lean_inc(x_563);
lean_dec(x_1);
lean_inc(x_564);
x_566 = l_List_mapM___at_Lean_Meta_Closure_collectExprAux___spec__2(x_564, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_567 = lean_ctor_get(x_566, 0);
lean_inc(x_567);
x_568 = lean_ctor_get(x_566, 1);
lean_inc(x_568);
if (lean_is_exclusive(x_566)) {
 lean_ctor_release(x_566, 0);
 lean_ctor_release(x_566, 1);
 x_569 = x_566;
} else {
 lean_dec_ref(x_566);
 x_569 = lean_box(0);
}
x_570 = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(x_570, 0, x_563);
lean_ctor_set(x_570, 1, x_564);
lean_ctor_set_uint64(x_570, sizeof(void*)*2, x_565);
x_571 = lean_expr_update_const(x_570, x_567);
if (lean_is_scalar(x_569)) {
 x_572 = lean_alloc_ctor(0, 2, 0);
} else {
 x_572 = x_569;
}
lean_ctor_set(x_572, 0, x_571);
lean_ctor_set(x_572, 1, x_568);
return x_572;
}
}
case 5:
{
lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_693; lean_object* x_694; uint8_t x_738; 
x_573 = lean_ctor_get(x_1, 0);
lean_inc(x_573);
x_574 = lean_ctor_get(x_1, 1);
lean_inc(x_574);
x_738 = l_Lean_Expr_hasLevelParam(x_573);
if (x_738 == 0)
{
uint8_t x_739; 
x_739 = l_Lean_Expr_hasFVar(x_573);
if (x_739 == 0)
{
uint8_t x_740; 
x_740 = l_Lean_Expr_hasMVar(x_573);
if (x_740 == 0)
{
lean_object* x_741; 
x_741 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_741, 0, x_573);
lean_ctor_set(x_741, 1, x_8);
x_575 = x_741;
goto block_692;
}
else
{
lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; 
x_742 = lean_st_ref_get(x_7, x_8);
x_743 = lean_ctor_get(x_742, 1);
lean_inc(x_743);
lean_dec(x_742);
x_744 = lean_st_ref_get(x_3, x_743);
x_745 = lean_ctor_get(x_744, 0);
lean_inc(x_745);
x_746 = lean_ctor_get(x_744, 1);
lean_inc(x_746);
lean_dec(x_744);
x_693 = x_745;
x_694 = x_746;
goto block_737;
}
}
else
{
lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; lean_object* x_751; 
x_747 = lean_st_ref_get(x_7, x_8);
x_748 = lean_ctor_get(x_747, 1);
lean_inc(x_748);
lean_dec(x_747);
x_749 = lean_st_ref_get(x_3, x_748);
x_750 = lean_ctor_get(x_749, 0);
lean_inc(x_750);
x_751 = lean_ctor_get(x_749, 1);
lean_inc(x_751);
lean_dec(x_749);
x_693 = x_750;
x_694 = x_751;
goto block_737;
}
}
else
{
lean_object* x_752; lean_object* x_753; lean_object* x_754; lean_object* x_755; lean_object* x_756; 
x_752 = lean_st_ref_get(x_7, x_8);
x_753 = lean_ctor_get(x_752, 1);
lean_inc(x_753);
lean_dec(x_752);
x_754 = lean_st_ref_get(x_3, x_753);
x_755 = lean_ctor_get(x_754, 0);
lean_inc(x_755);
x_756 = lean_ctor_get(x_754, 1);
lean_inc(x_756);
lean_dec(x_754);
x_693 = x_755;
x_694 = x_756;
goto block_737;
}
block_692:
{
if (lean_obj_tag(x_575) == 0)
{
lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_624; lean_object* x_625; uint8_t x_669; 
x_576 = lean_ctor_get(x_575, 0);
lean_inc(x_576);
x_577 = lean_ctor_get(x_575, 1);
lean_inc(x_577);
if (lean_is_exclusive(x_575)) {
 lean_ctor_release(x_575, 0);
 lean_ctor_release(x_575, 1);
 x_578 = x_575;
} else {
 lean_dec_ref(x_575);
 x_578 = lean_box(0);
}
x_669 = l_Lean_Expr_hasLevelParam(x_574);
if (x_669 == 0)
{
uint8_t x_670; 
x_670 = l_Lean_Expr_hasFVar(x_574);
if (x_670 == 0)
{
uint8_t x_671; 
x_671 = l_Lean_Expr_hasMVar(x_574);
if (x_671 == 0)
{
lean_object* x_672; 
lean_dec(x_578);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_672 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_672, 0, x_574);
lean_ctor_set(x_672, 1, x_577);
x_579 = x_672;
goto block_623;
}
else
{
lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; 
x_673 = lean_st_ref_get(x_7, x_577);
x_674 = lean_ctor_get(x_673, 1);
lean_inc(x_674);
lean_dec(x_673);
x_675 = lean_st_ref_get(x_3, x_674);
x_676 = lean_ctor_get(x_675, 0);
lean_inc(x_676);
x_677 = lean_ctor_get(x_675, 1);
lean_inc(x_677);
lean_dec(x_675);
x_624 = x_676;
x_625 = x_677;
goto block_668;
}
}
else
{
lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; 
x_678 = lean_st_ref_get(x_7, x_577);
x_679 = lean_ctor_get(x_678, 1);
lean_inc(x_679);
lean_dec(x_678);
x_680 = lean_st_ref_get(x_3, x_679);
x_681 = lean_ctor_get(x_680, 0);
lean_inc(x_681);
x_682 = lean_ctor_get(x_680, 1);
lean_inc(x_682);
lean_dec(x_680);
x_624 = x_681;
x_625 = x_682;
goto block_668;
}
}
else
{
lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; 
x_683 = lean_st_ref_get(x_7, x_577);
x_684 = lean_ctor_get(x_683, 1);
lean_inc(x_684);
lean_dec(x_683);
x_685 = lean_st_ref_get(x_3, x_684);
x_686 = lean_ctor_get(x_685, 0);
lean_inc(x_686);
x_687 = lean_ctor_get(x_685, 1);
lean_inc(x_687);
lean_dec(x_685);
x_624 = x_686;
x_625 = x_687;
goto block_668;
}
block_623:
{
if (lean_obj_tag(x_579) == 0)
{
if (lean_obj_tag(x_1) == 5)
{
uint8_t x_580; 
x_580 = !lean_is_exclusive(x_579);
if (x_580 == 0)
{
uint8_t x_581; 
x_581 = !lean_is_exclusive(x_1);
if (x_581 == 0)
{
lean_object* x_582; lean_object* x_583; 
x_582 = lean_ctor_get(x_579, 0);
x_583 = lean_expr_update_app(x_1, x_576, x_582);
lean_ctor_set(x_579, 0, x_583);
return x_579;
}
else
{
lean_object* x_584; lean_object* x_585; lean_object* x_586; uint64_t x_587; lean_object* x_588; lean_object* x_589; 
x_584 = lean_ctor_get(x_579, 0);
x_585 = lean_ctor_get(x_1, 0);
x_586 = lean_ctor_get(x_1, 1);
x_587 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_586);
lean_inc(x_585);
lean_dec(x_1);
x_588 = lean_alloc_ctor(5, 2, 8);
lean_ctor_set(x_588, 0, x_585);
lean_ctor_set(x_588, 1, x_586);
lean_ctor_set_uint64(x_588, sizeof(void*)*2, x_587);
x_589 = lean_expr_update_app(x_588, x_576, x_584);
lean_ctor_set(x_579, 0, x_589);
return x_579;
}
}
else
{
lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; uint64_t x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; 
x_590 = lean_ctor_get(x_579, 0);
x_591 = lean_ctor_get(x_579, 1);
lean_inc(x_591);
lean_inc(x_590);
lean_dec(x_579);
x_592 = lean_ctor_get(x_1, 0);
lean_inc(x_592);
x_593 = lean_ctor_get(x_1, 1);
lean_inc(x_593);
x_594 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_595 = x_1;
} else {
 lean_dec_ref(x_1);
 x_595 = lean_box(0);
}
if (lean_is_scalar(x_595)) {
 x_596 = lean_alloc_ctor(5, 2, 8);
} else {
 x_596 = x_595;
}
lean_ctor_set(x_596, 0, x_592);
lean_ctor_set(x_596, 1, x_593);
lean_ctor_set_uint64(x_596, sizeof(void*)*2, x_594);
x_597 = lean_expr_update_app(x_596, x_576, x_590);
x_598 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_598, 0, x_597);
lean_ctor_set(x_598, 1, x_591);
return x_598;
}
}
else
{
uint8_t x_599; 
lean_dec(x_576);
lean_dec(x_1);
x_599 = !lean_is_exclusive(x_579);
if (x_599 == 0)
{
lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; 
x_600 = lean_ctor_get(x_579, 0);
lean_dec(x_600);
x_601 = lean_mk_string("Lean.Expr");
x_602 = lean_mk_string("Lean.Expr.updateApp!");
x_603 = lean_unsigned_to_nat(855u);
x_604 = lean_unsigned_to_nat(20u);
x_605 = lean_mk_string("application expected");
x_606 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_601, x_602, x_603, x_604, x_605);
lean_dec(x_605);
lean_dec(x_602);
lean_dec(x_601);
x_607 = l_Lean_instInhabitedExpr;
x_608 = lean_panic_fn(x_607, x_606);
lean_ctor_set(x_579, 0, x_608);
return x_579;
}
else
{
lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; 
x_609 = lean_ctor_get(x_579, 1);
lean_inc(x_609);
lean_dec(x_579);
x_610 = lean_mk_string("Lean.Expr");
x_611 = lean_mk_string("Lean.Expr.updateApp!");
x_612 = lean_unsigned_to_nat(855u);
x_613 = lean_unsigned_to_nat(20u);
x_614 = lean_mk_string("application expected");
x_615 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_610, x_611, x_612, x_613, x_614);
lean_dec(x_614);
lean_dec(x_611);
lean_dec(x_610);
x_616 = l_Lean_instInhabitedExpr;
x_617 = lean_panic_fn(x_616, x_615);
x_618 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_618, 0, x_617);
lean_ctor_set(x_618, 1, x_609);
return x_618;
}
}
}
else
{
uint8_t x_619; 
lean_dec(x_576);
lean_dec(x_1);
x_619 = !lean_is_exclusive(x_579);
if (x_619 == 0)
{
return x_579;
}
else
{
lean_object* x_620; lean_object* x_621; lean_object* x_622; 
x_620 = lean_ctor_get(x_579, 0);
x_621 = lean_ctor_get(x_579, 1);
lean_inc(x_621);
lean_inc(x_620);
lean_dec(x_579);
x_622 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_622, 0, x_620);
lean_ctor_set(x_622, 1, x_621);
return x_622;
}
}
}
block_668:
{
lean_object* x_626; lean_object* x_627; 
x_626 = lean_ctor_get(x_624, 1);
lean_inc(x_626);
lean_dec(x_624);
x_627 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_626, x_574);
lean_dec(x_626);
if (lean_obj_tag(x_627) == 0)
{
lean_object* x_628; 
lean_dec(x_578);
lean_inc(x_7);
lean_inc(x_574);
x_628 = l_Lean_Meta_Closure_collectExprAux(x_574, x_2, x_3, x_4, x_5, x_6, x_7, x_625);
if (lean_obj_tag(x_628) == 0)
{
lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; uint8_t x_636; 
x_629 = lean_ctor_get(x_628, 0);
lean_inc(x_629);
x_630 = lean_ctor_get(x_628, 1);
lean_inc(x_630);
lean_dec(x_628);
x_631 = lean_st_ref_get(x_7, x_630);
lean_dec(x_7);
x_632 = lean_ctor_get(x_631, 1);
lean_inc(x_632);
lean_dec(x_631);
x_633 = lean_st_ref_take(x_3, x_632);
x_634 = lean_ctor_get(x_633, 0);
lean_inc(x_634);
x_635 = lean_ctor_get(x_633, 1);
lean_inc(x_635);
lean_dec(x_633);
x_636 = !lean_is_exclusive(x_634);
if (x_636 == 0)
{
lean_object* x_637; lean_object* x_638; lean_object* x_639; uint8_t x_640; 
x_637 = lean_ctor_get(x_634, 1);
lean_inc(x_629);
x_638 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_637, x_574, x_629);
lean_ctor_set(x_634, 1, x_638);
x_639 = lean_st_ref_set(x_3, x_634, x_635);
x_640 = !lean_is_exclusive(x_639);
if (x_640 == 0)
{
lean_object* x_641; 
x_641 = lean_ctor_get(x_639, 0);
lean_dec(x_641);
lean_ctor_set(x_639, 0, x_629);
x_579 = x_639;
goto block_623;
}
else
{
lean_object* x_642; lean_object* x_643; 
x_642 = lean_ctor_get(x_639, 1);
lean_inc(x_642);
lean_dec(x_639);
x_643 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_643, 0, x_629);
lean_ctor_set(x_643, 1, x_642);
x_579 = x_643;
goto block_623;
}
}
else
{
lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; 
x_644 = lean_ctor_get(x_634, 0);
x_645 = lean_ctor_get(x_634, 1);
x_646 = lean_ctor_get(x_634, 2);
x_647 = lean_ctor_get(x_634, 3);
x_648 = lean_ctor_get(x_634, 4);
x_649 = lean_ctor_get(x_634, 5);
x_650 = lean_ctor_get(x_634, 6);
x_651 = lean_ctor_get(x_634, 7);
x_652 = lean_ctor_get(x_634, 8);
x_653 = lean_ctor_get(x_634, 9);
x_654 = lean_ctor_get(x_634, 10);
x_655 = lean_ctor_get(x_634, 11);
lean_inc(x_655);
lean_inc(x_654);
lean_inc(x_653);
lean_inc(x_652);
lean_inc(x_651);
lean_inc(x_650);
lean_inc(x_649);
lean_inc(x_648);
lean_inc(x_647);
lean_inc(x_646);
lean_inc(x_645);
lean_inc(x_644);
lean_dec(x_634);
lean_inc(x_629);
x_656 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_645, x_574, x_629);
x_657 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_657, 0, x_644);
lean_ctor_set(x_657, 1, x_656);
lean_ctor_set(x_657, 2, x_646);
lean_ctor_set(x_657, 3, x_647);
lean_ctor_set(x_657, 4, x_648);
lean_ctor_set(x_657, 5, x_649);
lean_ctor_set(x_657, 6, x_650);
lean_ctor_set(x_657, 7, x_651);
lean_ctor_set(x_657, 8, x_652);
lean_ctor_set(x_657, 9, x_653);
lean_ctor_set(x_657, 10, x_654);
lean_ctor_set(x_657, 11, x_655);
x_658 = lean_st_ref_set(x_3, x_657, x_635);
x_659 = lean_ctor_get(x_658, 1);
lean_inc(x_659);
if (lean_is_exclusive(x_658)) {
 lean_ctor_release(x_658, 0);
 lean_ctor_release(x_658, 1);
 x_660 = x_658;
} else {
 lean_dec_ref(x_658);
 x_660 = lean_box(0);
}
if (lean_is_scalar(x_660)) {
 x_661 = lean_alloc_ctor(0, 2, 0);
} else {
 x_661 = x_660;
}
lean_ctor_set(x_661, 0, x_629);
lean_ctor_set(x_661, 1, x_659);
x_579 = x_661;
goto block_623;
}
}
else
{
uint8_t x_662; 
lean_dec(x_574);
lean_dec(x_7);
x_662 = !lean_is_exclusive(x_628);
if (x_662 == 0)
{
x_579 = x_628;
goto block_623;
}
else
{
lean_object* x_663; lean_object* x_664; lean_object* x_665; 
x_663 = lean_ctor_get(x_628, 0);
x_664 = lean_ctor_get(x_628, 1);
lean_inc(x_664);
lean_inc(x_663);
lean_dec(x_628);
x_665 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_665, 0, x_663);
lean_ctor_set(x_665, 1, x_664);
x_579 = x_665;
goto block_623;
}
}
}
else
{
lean_object* x_666; lean_object* x_667; 
lean_dec(x_574);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_666 = lean_ctor_get(x_627, 0);
lean_inc(x_666);
lean_dec(x_627);
if (lean_is_scalar(x_578)) {
 x_667 = lean_alloc_ctor(0, 2, 0);
} else {
 x_667 = x_578;
}
lean_ctor_set(x_667, 0, x_666);
lean_ctor_set(x_667, 1, x_625);
x_579 = x_667;
goto block_623;
}
}
}
else
{
uint8_t x_688; 
lean_dec(x_574);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_688 = !lean_is_exclusive(x_575);
if (x_688 == 0)
{
return x_575;
}
else
{
lean_object* x_689; lean_object* x_690; lean_object* x_691; 
x_689 = lean_ctor_get(x_575, 0);
x_690 = lean_ctor_get(x_575, 1);
lean_inc(x_690);
lean_inc(x_689);
lean_dec(x_575);
x_691 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_691, 0, x_689);
lean_ctor_set(x_691, 1, x_690);
return x_691;
}
}
}
block_737:
{
lean_object* x_695; lean_object* x_696; 
x_695 = lean_ctor_get(x_693, 1);
lean_inc(x_695);
lean_dec(x_693);
x_696 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_695, x_573);
lean_dec(x_695);
if (lean_obj_tag(x_696) == 0)
{
lean_object* x_697; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_573);
x_697 = l_Lean_Meta_Closure_collectExprAux(x_573, x_2, x_3, x_4, x_5, x_6, x_7, x_694);
if (lean_obj_tag(x_697) == 0)
{
lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; uint8_t x_705; 
x_698 = lean_ctor_get(x_697, 0);
lean_inc(x_698);
x_699 = lean_ctor_get(x_697, 1);
lean_inc(x_699);
lean_dec(x_697);
x_700 = lean_st_ref_get(x_7, x_699);
x_701 = lean_ctor_get(x_700, 1);
lean_inc(x_701);
lean_dec(x_700);
x_702 = lean_st_ref_take(x_3, x_701);
x_703 = lean_ctor_get(x_702, 0);
lean_inc(x_703);
x_704 = lean_ctor_get(x_702, 1);
lean_inc(x_704);
lean_dec(x_702);
x_705 = !lean_is_exclusive(x_703);
if (x_705 == 0)
{
lean_object* x_706; lean_object* x_707; lean_object* x_708; uint8_t x_709; 
x_706 = lean_ctor_get(x_703, 1);
lean_inc(x_698);
x_707 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_706, x_573, x_698);
lean_ctor_set(x_703, 1, x_707);
x_708 = lean_st_ref_set(x_3, x_703, x_704);
x_709 = !lean_is_exclusive(x_708);
if (x_709 == 0)
{
lean_object* x_710; 
x_710 = lean_ctor_get(x_708, 0);
lean_dec(x_710);
lean_ctor_set(x_708, 0, x_698);
x_575 = x_708;
goto block_692;
}
else
{
lean_object* x_711; lean_object* x_712; 
x_711 = lean_ctor_get(x_708, 1);
lean_inc(x_711);
lean_dec(x_708);
x_712 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_712, 0, x_698);
lean_ctor_set(x_712, 1, x_711);
x_575 = x_712;
goto block_692;
}
}
else
{
lean_object* x_713; lean_object* x_714; lean_object* x_715; lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; 
x_713 = lean_ctor_get(x_703, 0);
x_714 = lean_ctor_get(x_703, 1);
x_715 = lean_ctor_get(x_703, 2);
x_716 = lean_ctor_get(x_703, 3);
x_717 = lean_ctor_get(x_703, 4);
x_718 = lean_ctor_get(x_703, 5);
x_719 = lean_ctor_get(x_703, 6);
x_720 = lean_ctor_get(x_703, 7);
x_721 = lean_ctor_get(x_703, 8);
x_722 = lean_ctor_get(x_703, 9);
x_723 = lean_ctor_get(x_703, 10);
x_724 = lean_ctor_get(x_703, 11);
lean_inc(x_724);
lean_inc(x_723);
lean_inc(x_722);
lean_inc(x_721);
lean_inc(x_720);
lean_inc(x_719);
lean_inc(x_718);
lean_inc(x_717);
lean_inc(x_716);
lean_inc(x_715);
lean_inc(x_714);
lean_inc(x_713);
lean_dec(x_703);
lean_inc(x_698);
x_725 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_714, x_573, x_698);
x_726 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_726, 0, x_713);
lean_ctor_set(x_726, 1, x_725);
lean_ctor_set(x_726, 2, x_715);
lean_ctor_set(x_726, 3, x_716);
lean_ctor_set(x_726, 4, x_717);
lean_ctor_set(x_726, 5, x_718);
lean_ctor_set(x_726, 6, x_719);
lean_ctor_set(x_726, 7, x_720);
lean_ctor_set(x_726, 8, x_721);
lean_ctor_set(x_726, 9, x_722);
lean_ctor_set(x_726, 10, x_723);
lean_ctor_set(x_726, 11, x_724);
x_727 = lean_st_ref_set(x_3, x_726, x_704);
x_728 = lean_ctor_get(x_727, 1);
lean_inc(x_728);
if (lean_is_exclusive(x_727)) {
 lean_ctor_release(x_727, 0);
 lean_ctor_release(x_727, 1);
 x_729 = x_727;
} else {
 lean_dec_ref(x_727);
 x_729 = lean_box(0);
}
if (lean_is_scalar(x_729)) {
 x_730 = lean_alloc_ctor(0, 2, 0);
} else {
 x_730 = x_729;
}
lean_ctor_set(x_730, 0, x_698);
lean_ctor_set(x_730, 1, x_728);
x_575 = x_730;
goto block_692;
}
}
else
{
uint8_t x_731; 
lean_dec(x_573);
x_731 = !lean_is_exclusive(x_697);
if (x_731 == 0)
{
x_575 = x_697;
goto block_692;
}
else
{
lean_object* x_732; lean_object* x_733; lean_object* x_734; 
x_732 = lean_ctor_get(x_697, 0);
x_733 = lean_ctor_get(x_697, 1);
lean_inc(x_733);
lean_inc(x_732);
lean_dec(x_697);
x_734 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_734, 0, x_732);
lean_ctor_set(x_734, 1, x_733);
x_575 = x_734;
goto block_692;
}
}
}
else
{
lean_object* x_735; lean_object* x_736; 
lean_dec(x_573);
x_735 = lean_ctor_get(x_696, 0);
lean_inc(x_735);
lean_dec(x_696);
x_736 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_736, 0, x_735);
lean_ctor_set(x_736, 1, x_694);
x_575 = x_736;
goto block_692;
}
}
}
case 6:
{
lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_883; lean_object* x_884; uint8_t x_928; 
x_757 = lean_ctor_get(x_1, 1);
lean_inc(x_757);
x_758 = lean_ctor_get(x_1, 2);
lean_inc(x_758);
x_928 = l_Lean_Expr_hasLevelParam(x_757);
if (x_928 == 0)
{
uint8_t x_929; 
x_929 = l_Lean_Expr_hasFVar(x_757);
if (x_929 == 0)
{
uint8_t x_930; 
x_930 = l_Lean_Expr_hasMVar(x_757);
if (x_930 == 0)
{
lean_object* x_931; 
x_931 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_931, 0, x_757);
lean_ctor_set(x_931, 1, x_8);
x_759 = x_931;
goto block_882;
}
else
{
lean_object* x_932; lean_object* x_933; lean_object* x_934; lean_object* x_935; lean_object* x_936; 
x_932 = lean_st_ref_get(x_7, x_8);
x_933 = lean_ctor_get(x_932, 1);
lean_inc(x_933);
lean_dec(x_932);
x_934 = lean_st_ref_get(x_3, x_933);
x_935 = lean_ctor_get(x_934, 0);
lean_inc(x_935);
x_936 = lean_ctor_get(x_934, 1);
lean_inc(x_936);
lean_dec(x_934);
x_883 = x_935;
x_884 = x_936;
goto block_927;
}
}
else
{
lean_object* x_937; lean_object* x_938; lean_object* x_939; lean_object* x_940; lean_object* x_941; 
x_937 = lean_st_ref_get(x_7, x_8);
x_938 = lean_ctor_get(x_937, 1);
lean_inc(x_938);
lean_dec(x_937);
x_939 = lean_st_ref_get(x_3, x_938);
x_940 = lean_ctor_get(x_939, 0);
lean_inc(x_940);
x_941 = lean_ctor_get(x_939, 1);
lean_inc(x_941);
lean_dec(x_939);
x_883 = x_940;
x_884 = x_941;
goto block_927;
}
}
else
{
lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; lean_object* x_946; 
x_942 = lean_st_ref_get(x_7, x_8);
x_943 = lean_ctor_get(x_942, 1);
lean_inc(x_943);
lean_dec(x_942);
x_944 = lean_st_ref_get(x_3, x_943);
x_945 = lean_ctor_get(x_944, 0);
lean_inc(x_945);
x_946 = lean_ctor_get(x_944, 1);
lean_inc(x_946);
lean_dec(x_944);
x_883 = x_945;
x_884 = x_946;
goto block_927;
}
block_882:
{
if (lean_obj_tag(x_759) == 0)
{
lean_object* x_760; lean_object* x_761; lean_object* x_762; lean_object* x_763; lean_object* x_814; lean_object* x_815; uint8_t x_859; 
x_760 = lean_ctor_get(x_759, 0);
lean_inc(x_760);
x_761 = lean_ctor_get(x_759, 1);
lean_inc(x_761);
if (lean_is_exclusive(x_759)) {
 lean_ctor_release(x_759, 0);
 lean_ctor_release(x_759, 1);
 x_762 = x_759;
} else {
 lean_dec_ref(x_759);
 x_762 = lean_box(0);
}
x_859 = l_Lean_Expr_hasLevelParam(x_758);
if (x_859 == 0)
{
uint8_t x_860; 
x_860 = l_Lean_Expr_hasFVar(x_758);
if (x_860 == 0)
{
uint8_t x_861; 
x_861 = l_Lean_Expr_hasMVar(x_758);
if (x_861 == 0)
{
lean_object* x_862; 
lean_dec(x_762);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_862 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_862, 0, x_758);
lean_ctor_set(x_862, 1, x_761);
x_763 = x_862;
goto block_813;
}
else
{
lean_object* x_863; lean_object* x_864; lean_object* x_865; lean_object* x_866; lean_object* x_867; 
x_863 = lean_st_ref_get(x_7, x_761);
x_864 = lean_ctor_get(x_863, 1);
lean_inc(x_864);
lean_dec(x_863);
x_865 = lean_st_ref_get(x_3, x_864);
x_866 = lean_ctor_get(x_865, 0);
lean_inc(x_866);
x_867 = lean_ctor_get(x_865, 1);
lean_inc(x_867);
lean_dec(x_865);
x_814 = x_866;
x_815 = x_867;
goto block_858;
}
}
else
{
lean_object* x_868; lean_object* x_869; lean_object* x_870; lean_object* x_871; lean_object* x_872; 
x_868 = lean_st_ref_get(x_7, x_761);
x_869 = lean_ctor_get(x_868, 1);
lean_inc(x_869);
lean_dec(x_868);
x_870 = lean_st_ref_get(x_3, x_869);
x_871 = lean_ctor_get(x_870, 0);
lean_inc(x_871);
x_872 = lean_ctor_get(x_870, 1);
lean_inc(x_872);
lean_dec(x_870);
x_814 = x_871;
x_815 = x_872;
goto block_858;
}
}
else
{
lean_object* x_873; lean_object* x_874; lean_object* x_875; lean_object* x_876; lean_object* x_877; 
x_873 = lean_st_ref_get(x_7, x_761);
x_874 = lean_ctor_get(x_873, 1);
lean_inc(x_874);
lean_dec(x_873);
x_875 = lean_st_ref_get(x_3, x_874);
x_876 = lean_ctor_get(x_875, 0);
lean_inc(x_876);
x_877 = lean_ctor_get(x_875, 1);
lean_inc(x_877);
lean_dec(x_875);
x_814 = x_876;
x_815 = x_877;
goto block_858;
}
block_813:
{
if (lean_obj_tag(x_763) == 0)
{
if (lean_obj_tag(x_1) == 6)
{
uint8_t x_764; 
x_764 = !lean_is_exclusive(x_763);
if (x_764 == 0)
{
uint8_t x_765; 
x_765 = !lean_is_exclusive(x_1);
if (x_765 == 0)
{
lean_object* x_766; uint64_t x_767; uint8_t x_768; lean_object* x_769; 
x_766 = lean_ctor_get(x_763, 0);
x_767 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_768 = (uint8_t)((x_767 << 24) >> 61);
x_769 = lean_expr_update_lambda(x_1, x_768, x_760, x_766);
lean_ctor_set(x_763, 0, x_769);
return x_763;
}
else
{
lean_object* x_770; lean_object* x_771; lean_object* x_772; lean_object* x_773; uint64_t x_774; lean_object* x_775; uint8_t x_776; lean_object* x_777; 
x_770 = lean_ctor_get(x_763, 0);
x_771 = lean_ctor_get(x_1, 0);
x_772 = lean_ctor_get(x_1, 1);
x_773 = lean_ctor_get(x_1, 2);
x_774 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_inc(x_773);
lean_inc(x_772);
lean_inc(x_771);
lean_dec(x_1);
x_775 = lean_alloc_ctor(6, 3, 8);
lean_ctor_set(x_775, 0, x_771);
lean_ctor_set(x_775, 1, x_772);
lean_ctor_set(x_775, 2, x_773);
lean_ctor_set_uint64(x_775, sizeof(void*)*3, x_774);
x_776 = (uint8_t)((x_774 << 24) >> 61);
x_777 = lean_expr_update_lambda(x_775, x_776, x_760, x_770);
lean_ctor_set(x_763, 0, x_777);
return x_763;
}
}
else
{
lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; uint64_t x_783; lean_object* x_784; lean_object* x_785; uint8_t x_786; lean_object* x_787; lean_object* x_788; 
x_778 = lean_ctor_get(x_763, 0);
x_779 = lean_ctor_get(x_763, 1);
lean_inc(x_779);
lean_inc(x_778);
lean_dec(x_763);
x_780 = lean_ctor_get(x_1, 0);
lean_inc(x_780);
x_781 = lean_ctor_get(x_1, 1);
lean_inc(x_781);
x_782 = lean_ctor_get(x_1, 2);
lean_inc(x_782);
x_783 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 x_784 = x_1;
} else {
 lean_dec_ref(x_1);
 x_784 = lean_box(0);
}
if (lean_is_scalar(x_784)) {
 x_785 = lean_alloc_ctor(6, 3, 8);
} else {
 x_785 = x_784;
}
lean_ctor_set(x_785, 0, x_780);
lean_ctor_set(x_785, 1, x_781);
lean_ctor_set(x_785, 2, x_782);
lean_ctor_set_uint64(x_785, sizeof(void*)*3, x_783);
x_786 = (uint8_t)((x_783 << 24) >> 61);
x_787 = lean_expr_update_lambda(x_785, x_786, x_760, x_778);
x_788 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_788, 0, x_787);
lean_ctor_set(x_788, 1, x_779);
return x_788;
}
}
else
{
uint8_t x_789; 
lean_dec(x_760);
lean_dec(x_1);
x_789 = !lean_is_exclusive(x_763);
if (x_789 == 0)
{
lean_object* x_790; lean_object* x_791; lean_object* x_792; lean_object* x_793; lean_object* x_794; lean_object* x_795; lean_object* x_796; lean_object* x_797; lean_object* x_798; 
x_790 = lean_ctor_get(x_763, 0);
lean_dec(x_790);
x_791 = lean_mk_string("Lean.Expr");
x_792 = lean_mk_string("Lean.Expr.updateLambdaE!");
x_793 = lean_unsigned_to_nat(923u);
x_794 = lean_unsigned_to_nat(19u);
x_795 = lean_mk_string("lambda expected");
x_796 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_791, x_792, x_793, x_794, x_795);
lean_dec(x_795);
lean_dec(x_792);
lean_dec(x_791);
x_797 = l_Lean_instInhabitedExpr;
x_798 = lean_panic_fn(x_797, x_796);
lean_ctor_set(x_763, 0, x_798);
return x_763;
}
else
{
lean_object* x_799; lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; lean_object* x_804; lean_object* x_805; lean_object* x_806; lean_object* x_807; lean_object* x_808; 
x_799 = lean_ctor_get(x_763, 1);
lean_inc(x_799);
lean_dec(x_763);
x_800 = lean_mk_string("Lean.Expr");
x_801 = lean_mk_string("Lean.Expr.updateLambdaE!");
x_802 = lean_unsigned_to_nat(923u);
x_803 = lean_unsigned_to_nat(19u);
x_804 = lean_mk_string("lambda expected");
x_805 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_800, x_801, x_802, x_803, x_804);
lean_dec(x_804);
lean_dec(x_801);
lean_dec(x_800);
x_806 = l_Lean_instInhabitedExpr;
x_807 = lean_panic_fn(x_806, x_805);
x_808 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_808, 0, x_807);
lean_ctor_set(x_808, 1, x_799);
return x_808;
}
}
}
else
{
uint8_t x_809; 
lean_dec(x_760);
lean_dec(x_1);
x_809 = !lean_is_exclusive(x_763);
if (x_809 == 0)
{
return x_763;
}
else
{
lean_object* x_810; lean_object* x_811; lean_object* x_812; 
x_810 = lean_ctor_get(x_763, 0);
x_811 = lean_ctor_get(x_763, 1);
lean_inc(x_811);
lean_inc(x_810);
lean_dec(x_763);
x_812 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_812, 0, x_810);
lean_ctor_set(x_812, 1, x_811);
return x_812;
}
}
}
block_858:
{
lean_object* x_816; lean_object* x_817; 
x_816 = lean_ctor_get(x_814, 1);
lean_inc(x_816);
lean_dec(x_814);
x_817 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_816, x_758);
lean_dec(x_816);
if (lean_obj_tag(x_817) == 0)
{
lean_object* x_818; 
lean_dec(x_762);
lean_inc(x_7);
lean_inc(x_758);
x_818 = l_Lean_Meta_Closure_collectExprAux(x_758, x_2, x_3, x_4, x_5, x_6, x_7, x_815);
if (lean_obj_tag(x_818) == 0)
{
lean_object* x_819; lean_object* x_820; lean_object* x_821; lean_object* x_822; lean_object* x_823; lean_object* x_824; lean_object* x_825; uint8_t x_826; 
x_819 = lean_ctor_get(x_818, 0);
lean_inc(x_819);
x_820 = lean_ctor_get(x_818, 1);
lean_inc(x_820);
lean_dec(x_818);
x_821 = lean_st_ref_get(x_7, x_820);
lean_dec(x_7);
x_822 = lean_ctor_get(x_821, 1);
lean_inc(x_822);
lean_dec(x_821);
x_823 = lean_st_ref_take(x_3, x_822);
x_824 = lean_ctor_get(x_823, 0);
lean_inc(x_824);
x_825 = lean_ctor_get(x_823, 1);
lean_inc(x_825);
lean_dec(x_823);
x_826 = !lean_is_exclusive(x_824);
if (x_826 == 0)
{
lean_object* x_827; lean_object* x_828; lean_object* x_829; uint8_t x_830; 
x_827 = lean_ctor_get(x_824, 1);
lean_inc(x_819);
x_828 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_827, x_758, x_819);
lean_ctor_set(x_824, 1, x_828);
x_829 = lean_st_ref_set(x_3, x_824, x_825);
x_830 = !lean_is_exclusive(x_829);
if (x_830 == 0)
{
lean_object* x_831; 
x_831 = lean_ctor_get(x_829, 0);
lean_dec(x_831);
lean_ctor_set(x_829, 0, x_819);
x_763 = x_829;
goto block_813;
}
else
{
lean_object* x_832; lean_object* x_833; 
x_832 = lean_ctor_get(x_829, 1);
lean_inc(x_832);
lean_dec(x_829);
x_833 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_833, 0, x_819);
lean_ctor_set(x_833, 1, x_832);
x_763 = x_833;
goto block_813;
}
}
else
{
lean_object* x_834; lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; lean_object* x_841; lean_object* x_842; lean_object* x_843; lean_object* x_844; lean_object* x_845; lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; lean_object* x_850; lean_object* x_851; 
x_834 = lean_ctor_get(x_824, 0);
x_835 = lean_ctor_get(x_824, 1);
x_836 = lean_ctor_get(x_824, 2);
x_837 = lean_ctor_get(x_824, 3);
x_838 = lean_ctor_get(x_824, 4);
x_839 = lean_ctor_get(x_824, 5);
x_840 = lean_ctor_get(x_824, 6);
x_841 = lean_ctor_get(x_824, 7);
x_842 = lean_ctor_get(x_824, 8);
x_843 = lean_ctor_get(x_824, 9);
x_844 = lean_ctor_get(x_824, 10);
x_845 = lean_ctor_get(x_824, 11);
lean_inc(x_845);
lean_inc(x_844);
lean_inc(x_843);
lean_inc(x_842);
lean_inc(x_841);
lean_inc(x_840);
lean_inc(x_839);
lean_inc(x_838);
lean_inc(x_837);
lean_inc(x_836);
lean_inc(x_835);
lean_inc(x_834);
lean_dec(x_824);
lean_inc(x_819);
x_846 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_835, x_758, x_819);
x_847 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_847, 0, x_834);
lean_ctor_set(x_847, 1, x_846);
lean_ctor_set(x_847, 2, x_836);
lean_ctor_set(x_847, 3, x_837);
lean_ctor_set(x_847, 4, x_838);
lean_ctor_set(x_847, 5, x_839);
lean_ctor_set(x_847, 6, x_840);
lean_ctor_set(x_847, 7, x_841);
lean_ctor_set(x_847, 8, x_842);
lean_ctor_set(x_847, 9, x_843);
lean_ctor_set(x_847, 10, x_844);
lean_ctor_set(x_847, 11, x_845);
x_848 = lean_st_ref_set(x_3, x_847, x_825);
x_849 = lean_ctor_get(x_848, 1);
lean_inc(x_849);
if (lean_is_exclusive(x_848)) {
 lean_ctor_release(x_848, 0);
 lean_ctor_release(x_848, 1);
 x_850 = x_848;
} else {
 lean_dec_ref(x_848);
 x_850 = lean_box(0);
}
if (lean_is_scalar(x_850)) {
 x_851 = lean_alloc_ctor(0, 2, 0);
} else {
 x_851 = x_850;
}
lean_ctor_set(x_851, 0, x_819);
lean_ctor_set(x_851, 1, x_849);
x_763 = x_851;
goto block_813;
}
}
else
{
uint8_t x_852; 
lean_dec(x_758);
lean_dec(x_7);
x_852 = !lean_is_exclusive(x_818);
if (x_852 == 0)
{
x_763 = x_818;
goto block_813;
}
else
{
lean_object* x_853; lean_object* x_854; lean_object* x_855; 
x_853 = lean_ctor_get(x_818, 0);
x_854 = lean_ctor_get(x_818, 1);
lean_inc(x_854);
lean_inc(x_853);
lean_dec(x_818);
x_855 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_855, 0, x_853);
lean_ctor_set(x_855, 1, x_854);
x_763 = x_855;
goto block_813;
}
}
}
else
{
lean_object* x_856; lean_object* x_857; 
lean_dec(x_758);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_856 = lean_ctor_get(x_817, 0);
lean_inc(x_856);
lean_dec(x_817);
if (lean_is_scalar(x_762)) {
 x_857 = lean_alloc_ctor(0, 2, 0);
} else {
 x_857 = x_762;
}
lean_ctor_set(x_857, 0, x_856);
lean_ctor_set(x_857, 1, x_815);
x_763 = x_857;
goto block_813;
}
}
}
else
{
uint8_t x_878; 
lean_dec(x_758);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_878 = !lean_is_exclusive(x_759);
if (x_878 == 0)
{
return x_759;
}
else
{
lean_object* x_879; lean_object* x_880; lean_object* x_881; 
x_879 = lean_ctor_get(x_759, 0);
x_880 = lean_ctor_get(x_759, 1);
lean_inc(x_880);
lean_inc(x_879);
lean_dec(x_759);
x_881 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_881, 0, x_879);
lean_ctor_set(x_881, 1, x_880);
return x_881;
}
}
}
block_927:
{
lean_object* x_885; lean_object* x_886; 
x_885 = lean_ctor_get(x_883, 1);
lean_inc(x_885);
lean_dec(x_883);
x_886 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_885, x_757);
lean_dec(x_885);
if (lean_obj_tag(x_886) == 0)
{
lean_object* x_887; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_757);
x_887 = l_Lean_Meta_Closure_collectExprAux(x_757, x_2, x_3, x_4, x_5, x_6, x_7, x_884);
if (lean_obj_tag(x_887) == 0)
{
lean_object* x_888; lean_object* x_889; lean_object* x_890; lean_object* x_891; lean_object* x_892; lean_object* x_893; lean_object* x_894; uint8_t x_895; 
x_888 = lean_ctor_get(x_887, 0);
lean_inc(x_888);
x_889 = lean_ctor_get(x_887, 1);
lean_inc(x_889);
lean_dec(x_887);
x_890 = lean_st_ref_get(x_7, x_889);
x_891 = lean_ctor_get(x_890, 1);
lean_inc(x_891);
lean_dec(x_890);
x_892 = lean_st_ref_take(x_3, x_891);
x_893 = lean_ctor_get(x_892, 0);
lean_inc(x_893);
x_894 = lean_ctor_get(x_892, 1);
lean_inc(x_894);
lean_dec(x_892);
x_895 = !lean_is_exclusive(x_893);
if (x_895 == 0)
{
lean_object* x_896; lean_object* x_897; lean_object* x_898; uint8_t x_899; 
x_896 = lean_ctor_get(x_893, 1);
lean_inc(x_888);
x_897 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_896, x_757, x_888);
lean_ctor_set(x_893, 1, x_897);
x_898 = lean_st_ref_set(x_3, x_893, x_894);
x_899 = !lean_is_exclusive(x_898);
if (x_899 == 0)
{
lean_object* x_900; 
x_900 = lean_ctor_get(x_898, 0);
lean_dec(x_900);
lean_ctor_set(x_898, 0, x_888);
x_759 = x_898;
goto block_882;
}
else
{
lean_object* x_901; lean_object* x_902; 
x_901 = lean_ctor_get(x_898, 1);
lean_inc(x_901);
lean_dec(x_898);
x_902 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_902, 0, x_888);
lean_ctor_set(x_902, 1, x_901);
x_759 = x_902;
goto block_882;
}
}
else
{
lean_object* x_903; lean_object* x_904; lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; lean_object* x_915; lean_object* x_916; lean_object* x_917; lean_object* x_918; lean_object* x_919; lean_object* x_920; 
x_903 = lean_ctor_get(x_893, 0);
x_904 = lean_ctor_get(x_893, 1);
x_905 = lean_ctor_get(x_893, 2);
x_906 = lean_ctor_get(x_893, 3);
x_907 = lean_ctor_get(x_893, 4);
x_908 = lean_ctor_get(x_893, 5);
x_909 = lean_ctor_get(x_893, 6);
x_910 = lean_ctor_get(x_893, 7);
x_911 = lean_ctor_get(x_893, 8);
x_912 = lean_ctor_get(x_893, 9);
x_913 = lean_ctor_get(x_893, 10);
x_914 = lean_ctor_get(x_893, 11);
lean_inc(x_914);
lean_inc(x_913);
lean_inc(x_912);
lean_inc(x_911);
lean_inc(x_910);
lean_inc(x_909);
lean_inc(x_908);
lean_inc(x_907);
lean_inc(x_906);
lean_inc(x_905);
lean_inc(x_904);
lean_inc(x_903);
lean_dec(x_893);
lean_inc(x_888);
x_915 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_904, x_757, x_888);
x_916 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_916, 0, x_903);
lean_ctor_set(x_916, 1, x_915);
lean_ctor_set(x_916, 2, x_905);
lean_ctor_set(x_916, 3, x_906);
lean_ctor_set(x_916, 4, x_907);
lean_ctor_set(x_916, 5, x_908);
lean_ctor_set(x_916, 6, x_909);
lean_ctor_set(x_916, 7, x_910);
lean_ctor_set(x_916, 8, x_911);
lean_ctor_set(x_916, 9, x_912);
lean_ctor_set(x_916, 10, x_913);
lean_ctor_set(x_916, 11, x_914);
x_917 = lean_st_ref_set(x_3, x_916, x_894);
x_918 = lean_ctor_get(x_917, 1);
lean_inc(x_918);
if (lean_is_exclusive(x_917)) {
 lean_ctor_release(x_917, 0);
 lean_ctor_release(x_917, 1);
 x_919 = x_917;
} else {
 lean_dec_ref(x_917);
 x_919 = lean_box(0);
}
if (lean_is_scalar(x_919)) {
 x_920 = lean_alloc_ctor(0, 2, 0);
} else {
 x_920 = x_919;
}
lean_ctor_set(x_920, 0, x_888);
lean_ctor_set(x_920, 1, x_918);
x_759 = x_920;
goto block_882;
}
}
else
{
uint8_t x_921; 
lean_dec(x_757);
x_921 = !lean_is_exclusive(x_887);
if (x_921 == 0)
{
x_759 = x_887;
goto block_882;
}
else
{
lean_object* x_922; lean_object* x_923; lean_object* x_924; 
x_922 = lean_ctor_get(x_887, 0);
x_923 = lean_ctor_get(x_887, 1);
lean_inc(x_923);
lean_inc(x_922);
lean_dec(x_887);
x_924 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_924, 0, x_922);
lean_ctor_set(x_924, 1, x_923);
x_759 = x_924;
goto block_882;
}
}
}
else
{
lean_object* x_925; lean_object* x_926; 
lean_dec(x_757);
x_925 = lean_ctor_get(x_886, 0);
lean_inc(x_925);
lean_dec(x_886);
x_926 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_926, 0, x_925);
lean_ctor_set(x_926, 1, x_884);
x_759 = x_926;
goto block_882;
}
}
}
case 7:
{
lean_object* x_947; lean_object* x_948; lean_object* x_949; lean_object* x_1073; lean_object* x_1074; uint8_t x_1118; 
x_947 = lean_ctor_get(x_1, 1);
lean_inc(x_947);
x_948 = lean_ctor_get(x_1, 2);
lean_inc(x_948);
x_1118 = l_Lean_Expr_hasLevelParam(x_947);
if (x_1118 == 0)
{
uint8_t x_1119; 
x_1119 = l_Lean_Expr_hasFVar(x_947);
if (x_1119 == 0)
{
uint8_t x_1120; 
x_1120 = l_Lean_Expr_hasMVar(x_947);
if (x_1120 == 0)
{
lean_object* x_1121; 
x_1121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1121, 0, x_947);
lean_ctor_set(x_1121, 1, x_8);
x_949 = x_1121;
goto block_1072;
}
else
{
lean_object* x_1122; lean_object* x_1123; lean_object* x_1124; lean_object* x_1125; lean_object* x_1126; 
x_1122 = lean_st_ref_get(x_7, x_8);
x_1123 = lean_ctor_get(x_1122, 1);
lean_inc(x_1123);
lean_dec(x_1122);
x_1124 = lean_st_ref_get(x_3, x_1123);
x_1125 = lean_ctor_get(x_1124, 0);
lean_inc(x_1125);
x_1126 = lean_ctor_get(x_1124, 1);
lean_inc(x_1126);
lean_dec(x_1124);
x_1073 = x_1125;
x_1074 = x_1126;
goto block_1117;
}
}
else
{
lean_object* x_1127; lean_object* x_1128; lean_object* x_1129; lean_object* x_1130; lean_object* x_1131; 
x_1127 = lean_st_ref_get(x_7, x_8);
x_1128 = lean_ctor_get(x_1127, 1);
lean_inc(x_1128);
lean_dec(x_1127);
x_1129 = lean_st_ref_get(x_3, x_1128);
x_1130 = lean_ctor_get(x_1129, 0);
lean_inc(x_1130);
x_1131 = lean_ctor_get(x_1129, 1);
lean_inc(x_1131);
lean_dec(x_1129);
x_1073 = x_1130;
x_1074 = x_1131;
goto block_1117;
}
}
else
{
lean_object* x_1132; lean_object* x_1133; lean_object* x_1134; lean_object* x_1135; lean_object* x_1136; 
x_1132 = lean_st_ref_get(x_7, x_8);
x_1133 = lean_ctor_get(x_1132, 1);
lean_inc(x_1133);
lean_dec(x_1132);
x_1134 = lean_st_ref_get(x_3, x_1133);
x_1135 = lean_ctor_get(x_1134, 0);
lean_inc(x_1135);
x_1136 = lean_ctor_get(x_1134, 1);
lean_inc(x_1136);
lean_dec(x_1134);
x_1073 = x_1135;
x_1074 = x_1136;
goto block_1117;
}
block_1072:
{
if (lean_obj_tag(x_949) == 0)
{
lean_object* x_950; lean_object* x_951; lean_object* x_952; lean_object* x_953; lean_object* x_1004; lean_object* x_1005; uint8_t x_1049; 
x_950 = lean_ctor_get(x_949, 0);
lean_inc(x_950);
x_951 = lean_ctor_get(x_949, 1);
lean_inc(x_951);
if (lean_is_exclusive(x_949)) {
 lean_ctor_release(x_949, 0);
 lean_ctor_release(x_949, 1);
 x_952 = x_949;
} else {
 lean_dec_ref(x_949);
 x_952 = lean_box(0);
}
x_1049 = l_Lean_Expr_hasLevelParam(x_948);
if (x_1049 == 0)
{
uint8_t x_1050; 
x_1050 = l_Lean_Expr_hasFVar(x_948);
if (x_1050 == 0)
{
uint8_t x_1051; 
x_1051 = l_Lean_Expr_hasMVar(x_948);
if (x_1051 == 0)
{
lean_object* x_1052; 
lean_dec(x_952);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_1052 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1052, 0, x_948);
lean_ctor_set(x_1052, 1, x_951);
x_953 = x_1052;
goto block_1003;
}
else
{
lean_object* x_1053; lean_object* x_1054; lean_object* x_1055; lean_object* x_1056; lean_object* x_1057; 
x_1053 = lean_st_ref_get(x_7, x_951);
x_1054 = lean_ctor_get(x_1053, 1);
lean_inc(x_1054);
lean_dec(x_1053);
x_1055 = lean_st_ref_get(x_3, x_1054);
x_1056 = lean_ctor_get(x_1055, 0);
lean_inc(x_1056);
x_1057 = lean_ctor_get(x_1055, 1);
lean_inc(x_1057);
lean_dec(x_1055);
x_1004 = x_1056;
x_1005 = x_1057;
goto block_1048;
}
}
else
{
lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; lean_object* x_1062; 
x_1058 = lean_st_ref_get(x_7, x_951);
x_1059 = lean_ctor_get(x_1058, 1);
lean_inc(x_1059);
lean_dec(x_1058);
x_1060 = lean_st_ref_get(x_3, x_1059);
x_1061 = lean_ctor_get(x_1060, 0);
lean_inc(x_1061);
x_1062 = lean_ctor_get(x_1060, 1);
lean_inc(x_1062);
lean_dec(x_1060);
x_1004 = x_1061;
x_1005 = x_1062;
goto block_1048;
}
}
else
{
lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; 
x_1063 = lean_st_ref_get(x_7, x_951);
x_1064 = lean_ctor_get(x_1063, 1);
lean_inc(x_1064);
lean_dec(x_1063);
x_1065 = lean_st_ref_get(x_3, x_1064);
x_1066 = lean_ctor_get(x_1065, 0);
lean_inc(x_1066);
x_1067 = lean_ctor_get(x_1065, 1);
lean_inc(x_1067);
lean_dec(x_1065);
x_1004 = x_1066;
x_1005 = x_1067;
goto block_1048;
}
block_1003:
{
if (lean_obj_tag(x_953) == 0)
{
if (lean_obj_tag(x_1) == 7)
{
uint8_t x_954; 
x_954 = !lean_is_exclusive(x_953);
if (x_954 == 0)
{
uint8_t x_955; 
x_955 = !lean_is_exclusive(x_1);
if (x_955 == 0)
{
lean_object* x_956; uint64_t x_957; uint8_t x_958; lean_object* x_959; 
x_956 = lean_ctor_get(x_953, 0);
x_957 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
x_958 = (uint8_t)((x_957 << 24) >> 61);
x_959 = lean_expr_update_forall(x_1, x_958, x_950, x_956);
lean_ctor_set(x_953, 0, x_959);
return x_953;
}
else
{
lean_object* x_960; lean_object* x_961; lean_object* x_962; lean_object* x_963; uint64_t x_964; lean_object* x_965; uint8_t x_966; lean_object* x_967; 
x_960 = lean_ctor_get(x_953, 0);
x_961 = lean_ctor_get(x_1, 0);
x_962 = lean_ctor_get(x_1, 1);
x_963 = lean_ctor_get(x_1, 2);
x_964 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_inc(x_963);
lean_inc(x_962);
lean_inc(x_961);
lean_dec(x_1);
x_965 = lean_alloc_ctor(7, 3, 8);
lean_ctor_set(x_965, 0, x_961);
lean_ctor_set(x_965, 1, x_962);
lean_ctor_set(x_965, 2, x_963);
lean_ctor_set_uint64(x_965, sizeof(void*)*3, x_964);
x_966 = (uint8_t)((x_964 << 24) >> 61);
x_967 = lean_expr_update_forall(x_965, x_966, x_950, x_960);
lean_ctor_set(x_953, 0, x_967);
return x_953;
}
}
else
{
lean_object* x_968; lean_object* x_969; lean_object* x_970; lean_object* x_971; lean_object* x_972; uint64_t x_973; lean_object* x_974; lean_object* x_975; uint8_t x_976; lean_object* x_977; lean_object* x_978; 
x_968 = lean_ctor_get(x_953, 0);
x_969 = lean_ctor_get(x_953, 1);
lean_inc(x_969);
lean_inc(x_968);
lean_dec(x_953);
x_970 = lean_ctor_get(x_1, 0);
lean_inc(x_970);
x_971 = lean_ctor_get(x_1, 1);
lean_inc(x_971);
x_972 = lean_ctor_get(x_1, 2);
lean_inc(x_972);
x_973 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 x_974 = x_1;
} else {
 lean_dec_ref(x_1);
 x_974 = lean_box(0);
}
if (lean_is_scalar(x_974)) {
 x_975 = lean_alloc_ctor(7, 3, 8);
} else {
 x_975 = x_974;
}
lean_ctor_set(x_975, 0, x_970);
lean_ctor_set(x_975, 1, x_971);
lean_ctor_set(x_975, 2, x_972);
lean_ctor_set_uint64(x_975, sizeof(void*)*3, x_973);
x_976 = (uint8_t)((x_973 << 24) >> 61);
x_977 = lean_expr_update_forall(x_975, x_976, x_950, x_968);
x_978 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_978, 0, x_977);
lean_ctor_set(x_978, 1, x_969);
return x_978;
}
}
else
{
uint8_t x_979; 
lean_dec(x_950);
lean_dec(x_1);
x_979 = !lean_is_exclusive(x_953);
if (x_979 == 0)
{
lean_object* x_980; lean_object* x_981; lean_object* x_982; lean_object* x_983; lean_object* x_984; lean_object* x_985; lean_object* x_986; lean_object* x_987; lean_object* x_988; 
x_980 = lean_ctor_get(x_953, 0);
lean_dec(x_980);
x_981 = lean_mk_string("Lean.Expr");
x_982 = lean_mk_string("Lean.Expr.updateForallE!");
x_983 = lean_unsigned_to_nat(909u);
x_984 = lean_unsigned_to_nat(23u);
x_985 = lean_mk_string("forall expected");
x_986 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_981, x_982, x_983, x_984, x_985);
lean_dec(x_985);
lean_dec(x_982);
lean_dec(x_981);
x_987 = l_Lean_instInhabitedExpr;
x_988 = lean_panic_fn(x_987, x_986);
lean_ctor_set(x_953, 0, x_988);
return x_953;
}
else
{
lean_object* x_989; lean_object* x_990; lean_object* x_991; lean_object* x_992; lean_object* x_993; lean_object* x_994; lean_object* x_995; lean_object* x_996; lean_object* x_997; lean_object* x_998; 
x_989 = lean_ctor_get(x_953, 1);
lean_inc(x_989);
lean_dec(x_953);
x_990 = lean_mk_string("Lean.Expr");
x_991 = lean_mk_string("Lean.Expr.updateForallE!");
x_992 = lean_unsigned_to_nat(909u);
x_993 = lean_unsigned_to_nat(23u);
x_994 = lean_mk_string("forall expected");
x_995 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_990, x_991, x_992, x_993, x_994);
lean_dec(x_994);
lean_dec(x_991);
lean_dec(x_990);
x_996 = l_Lean_instInhabitedExpr;
x_997 = lean_panic_fn(x_996, x_995);
x_998 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_998, 0, x_997);
lean_ctor_set(x_998, 1, x_989);
return x_998;
}
}
}
else
{
uint8_t x_999; 
lean_dec(x_950);
lean_dec(x_1);
x_999 = !lean_is_exclusive(x_953);
if (x_999 == 0)
{
return x_953;
}
else
{
lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; 
x_1000 = lean_ctor_get(x_953, 0);
x_1001 = lean_ctor_get(x_953, 1);
lean_inc(x_1001);
lean_inc(x_1000);
lean_dec(x_953);
x_1002 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1002, 0, x_1000);
lean_ctor_set(x_1002, 1, x_1001);
return x_1002;
}
}
}
block_1048:
{
lean_object* x_1006; lean_object* x_1007; 
x_1006 = lean_ctor_get(x_1004, 1);
lean_inc(x_1006);
lean_dec(x_1004);
x_1007 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_1006, x_948);
lean_dec(x_1006);
if (lean_obj_tag(x_1007) == 0)
{
lean_object* x_1008; 
lean_dec(x_952);
lean_inc(x_7);
lean_inc(x_948);
x_1008 = l_Lean_Meta_Closure_collectExprAux(x_948, x_2, x_3, x_4, x_5, x_6, x_7, x_1005);
if (lean_obj_tag(x_1008) == 0)
{
lean_object* x_1009; lean_object* x_1010; lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; lean_object* x_1014; lean_object* x_1015; uint8_t x_1016; 
x_1009 = lean_ctor_get(x_1008, 0);
lean_inc(x_1009);
x_1010 = lean_ctor_get(x_1008, 1);
lean_inc(x_1010);
lean_dec(x_1008);
x_1011 = lean_st_ref_get(x_7, x_1010);
lean_dec(x_7);
x_1012 = lean_ctor_get(x_1011, 1);
lean_inc(x_1012);
lean_dec(x_1011);
x_1013 = lean_st_ref_take(x_3, x_1012);
x_1014 = lean_ctor_get(x_1013, 0);
lean_inc(x_1014);
x_1015 = lean_ctor_get(x_1013, 1);
lean_inc(x_1015);
lean_dec(x_1013);
x_1016 = !lean_is_exclusive(x_1014);
if (x_1016 == 0)
{
lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; uint8_t x_1020; 
x_1017 = lean_ctor_get(x_1014, 1);
lean_inc(x_1009);
x_1018 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_1017, x_948, x_1009);
lean_ctor_set(x_1014, 1, x_1018);
x_1019 = lean_st_ref_set(x_3, x_1014, x_1015);
x_1020 = !lean_is_exclusive(x_1019);
if (x_1020 == 0)
{
lean_object* x_1021; 
x_1021 = lean_ctor_get(x_1019, 0);
lean_dec(x_1021);
lean_ctor_set(x_1019, 0, x_1009);
x_953 = x_1019;
goto block_1003;
}
else
{
lean_object* x_1022; lean_object* x_1023; 
x_1022 = lean_ctor_get(x_1019, 1);
lean_inc(x_1022);
lean_dec(x_1019);
x_1023 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1023, 0, x_1009);
lean_ctor_set(x_1023, 1, x_1022);
x_953 = x_1023;
goto block_1003;
}
}
else
{
lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; lean_object* x_1031; lean_object* x_1032; lean_object* x_1033; lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; lean_object* x_1037; lean_object* x_1038; lean_object* x_1039; lean_object* x_1040; lean_object* x_1041; 
x_1024 = lean_ctor_get(x_1014, 0);
x_1025 = lean_ctor_get(x_1014, 1);
x_1026 = lean_ctor_get(x_1014, 2);
x_1027 = lean_ctor_get(x_1014, 3);
x_1028 = lean_ctor_get(x_1014, 4);
x_1029 = lean_ctor_get(x_1014, 5);
x_1030 = lean_ctor_get(x_1014, 6);
x_1031 = lean_ctor_get(x_1014, 7);
x_1032 = lean_ctor_get(x_1014, 8);
x_1033 = lean_ctor_get(x_1014, 9);
x_1034 = lean_ctor_get(x_1014, 10);
x_1035 = lean_ctor_get(x_1014, 11);
lean_inc(x_1035);
lean_inc(x_1034);
lean_inc(x_1033);
lean_inc(x_1032);
lean_inc(x_1031);
lean_inc(x_1030);
lean_inc(x_1029);
lean_inc(x_1028);
lean_inc(x_1027);
lean_inc(x_1026);
lean_inc(x_1025);
lean_inc(x_1024);
lean_dec(x_1014);
lean_inc(x_1009);
x_1036 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_1025, x_948, x_1009);
x_1037 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_1037, 0, x_1024);
lean_ctor_set(x_1037, 1, x_1036);
lean_ctor_set(x_1037, 2, x_1026);
lean_ctor_set(x_1037, 3, x_1027);
lean_ctor_set(x_1037, 4, x_1028);
lean_ctor_set(x_1037, 5, x_1029);
lean_ctor_set(x_1037, 6, x_1030);
lean_ctor_set(x_1037, 7, x_1031);
lean_ctor_set(x_1037, 8, x_1032);
lean_ctor_set(x_1037, 9, x_1033);
lean_ctor_set(x_1037, 10, x_1034);
lean_ctor_set(x_1037, 11, x_1035);
x_1038 = lean_st_ref_set(x_3, x_1037, x_1015);
x_1039 = lean_ctor_get(x_1038, 1);
lean_inc(x_1039);
if (lean_is_exclusive(x_1038)) {
 lean_ctor_release(x_1038, 0);
 lean_ctor_release(x_1038, 1);
 x_1040 = x_1038;
} else {
 lean_dec_ref(x_1038);
 x_1040 = lean_box(0);
}
if (lean_is_scalar(x_1040)) {
 x_1041 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1041 = x_1040;
}
lean_ctor_set(x_1041, 0, x_1009);
lean_ctor_set(x_1041, 1, x_1039);
x_953 = x_1041;
goto block_1003;
}
}
else
{
uint8_t x_1042; 
lean_dec(x_948);
lean_dec(x_7);
x_1042 = !lean_is_exclusive(x_1008);
if (x_1042 == 0)
{
x_953 = x_1008;
goto block_1003;
}
else
{
lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; 
x_1043 = lean_ctor_get(x_1008, 0);
x_1044 = lean_ctor_get(x_1008, 1);
lean_inc(x_1044);
lean_inc(x_1043);
lean_dec(x_1008);
x_1045 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1045, 0, x_1043);
lean_ctor_set(x_1045, 1, x_1044);
x_953 = x_1045;
goto block_1003;
}
}
}
else
{
lean_object* x_1046; lean_object* x_1047; 
lean_dec(x_948);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_1046 = lean_ctor_get(x_1007, 0);
lean_inc(x_1046);
lean_dec(x_1007);
if (lean_is_scalar(x_952)) {
 x_1047 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1047 = x_952;
}
lean_ctor_set(x_1047, 0, x_1046);
lean_ctor_set(x_1047, 1, x_1005);
x_953 = x_1047;
goto block_1003;
}
}
}
else
{
uint8_t x_1068; 
lean_dec(x_948);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_1068 = !lean_is_exclusive(x_949);
if (x_1068 == 0)
{
return x_949;
}
else
{
lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; 
x_1069 = lean_ctor_get(x_949, 0);
x_1070 = lean_ctor_get(x_949, 1);
lean_inc(x_1070);
lean_inc(x_1069);
lean_dec(x_949);
x_1071 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1071, 0, x_1069);
lean_ctor_set(x_1071, 1, x_1070);
return x_1071;
}
}
}
block_1117:
{
lean_object* x_1075; lean_object* x_1076; 
x_1075 = lean_ctor_get(x_1073, 1);
lean_inc(x_1075);
lean_dec(x_1073);
x_1076 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_1075, x_947);
lean_dec(x_1075);
if (lean_obj_tag(x_1076) == 0)
{
lean_object* x_1077; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_947);
x_1077 = l_Lean_Meta_Closure_collectExprAux(x_947, x_2, x_3, x_4, x_5, x_6, x_7, x_1074);
if (lean_obj_tag(x_1077) == 0)
{
lean_object* x_1078; lean_object* x_1079; lean_object* x_1080; lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; lean_object* x_1084; uint8_t x_1085; 
x_1078 = lean_ctor_get(x_1077, 0);
lean_inc(x_1078);
x_1079 = lean_ctor_get(x_1077, 1);
lean_inc(x_1079);
lean_dec(x_1077);
x_1080 = lean_st_ref_get(x_7, x_1079);
x_1081 = lean_ctor_get(x_1080, 1);
lean_inc(x_1081);
lean_dec(x_1080);
x_1082 = lean_st_ref_take(x_3, x_1081);
x_1083 = lean_ctor_get(x_1082, 0);
lean_inc(x_1083);
x_1084 = lean_ctor_get(x_1082, 1);
lean_inc(x_1084);
lean_dec(x_1082);
x_1085 = !lean_is_exclusive(x_1083);
if (x_1085 == 0)
{
lean_object* x_1086; lean_object* x_1087; lean_object* x_1088; uint8_t x_1089; 
x_1086 = lean_ctor_get(x_1083, 1);
lean_inc(x_1078);
x_1087 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_1086, x_947, x_1078);
lean_ctor_set(x_1083, 1, x_1087);
x_1088 = lean_st_ref_set(x_3, x_1083, x_1084);
x_1089 = !lean_is_exclusive(x_1088);
if (x_1089 == 0)
{
lean_object* x_1090; 
x_1090 = lean_ctor_get(x_1088, 0);
lean_dec(x_1090);
lean_ctor_set(x_1088, 0, x_1078);
x_949 = x_1088;
goto block_1072;
}
else
{
lean_object* x_1091; lean_object* x_1092; 
x_1091 = lean_ctor_get(x_1088, 1);
lean_inc(x_1091);
lean_dec(x_1088);
x_1092 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1092, 0, x_1078);
lean_ctor_set(x_1092, 1, x_1091);
x_949 = x_1092;
goto block_1072;
}
}
else
{
lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; lean_object* x_1096; lean_object* x_1097; lean_object* x_1098; lean_object* x_1099; lean_object* x_1100; lean_object* x_1101; lean_object* x_1102; lean_object* x_1103; lean_object* x_1104; lean_object* x_1105; lean_object* x_1106; lean_object* x_1107; lean_object* x_1108; lean_object* x_1109; lean_object* x_1110; 
x_1093 = lean_ctor_get(x_1083, 0);
x_1094 = lean_ctor_get(x_1083, 1);
x_1095 = lean_ctor_get(x_1083, 2);
x_1096 = lean_ctor_get(x_1083, 3);
x_1097 = lean_ctor_get(x_1083, 4);
x_1098 = lean_ctor_get(x_1083, 5);
x_1099 = lean_ctor_get(x_1083, 6);
x_1100 = lean_ctor_get(x_1083, 7);
x_1101 = lean_ctor_get(x_1083, 8);
x_1102 = lean_ctor_get(x_1083, 9);
x_1103 = lean_ctor_get(x_1083, 10);
x_1104 = lean_ctor_get(x_1083, 11);
lean_inc(x_1104);
lean_inc(x_1103);
lean_inc(x_1102);
lean_inc(x_1101);
lean_inc(x_1100);
lean_inc(x_1099);
lean_inc(x_1098);
lean_inc(x_1097);
lean_inc(x_1096);
lean_inc(x_1095);
lean_inc(x_1094);
lean_inc(x_1093);
lean_dec(x_1083);
lean_inc(x_1078);
x_1105 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_1094, x_947, x_1078);
x_1106 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_1106, 0, x_1093);
lean_ctor_set(x_1106, 1, x_1105);
lean_ctor_set(x_1106, 2, x_1095);
lean_ctor_set(x_1106, 3, x_1096);
lean_ctor_set(x_1106, 4, x_1097);
lean_ctor_set(x_1106, 5, x_1098);
lean_ctor_set(x_1106, 6, x_1099);
lean_ctor_set(x_1106, 7, x_1100);
lean_ctor_set(x_1106, 8, x_1101);
lean_ctor_set(x_1106, 9, x_1102);
lean_ctor_set(x_1106, 10, x_1103);
lean_ctor_set(x_1106, 11, x_1104);
x_1107 = lean_st_ref_set(x_3, x_1106, x_1084);
x_1108 = lean_ctor_get(x_1107, 1);
lean_inc(x_1108);
if (lean_is_exclusive(x_1107)) {
 lean_ctor_release(x_1107, 0);
 lean_ctor_release(x_1107, 1);
 x_1109 = x_1107;
} else {
 lean_dec_ref(x_1107);
 x_1109 = lean_box(0);
}
if (lean_is_scalar(x_1109)) {
 x_1110 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1110 = x_1109;
}
lean_ctor_set(x_1110, 0, x_1078);
lean_ctor_set(x_1110, 1, x_1108);
x_949 = x_1110;
goto block_1072;
}
}
else
{
uint8_t x_1111; 
lean_dec(x_947);
x_1111 = !lean_is_exclusive(x_1077);
if (x_1111 == 0)
{
x_949 = x_1077;
goto block_1072;
}
else
{
lean_object* x_1112; lean_object* x_1113; lean_object* x_1114; 
x_1112 = lean_ctor_get(x_1077, 0);
x_1113 = lean_ctor_get(x_1077, 1);
lean_inc(x_1113);
lean_inc(x_1112);
lean_dec(x_1077);
x_1114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1114, 0, x_1112);
lean_ctor_set(x_1114, 1, x_1113);
x_949 = x_1114;
goto block_1072;
}
}
}
else
{
lean_object* x_1115; lean_object* x_1116; 
lean_dec(x_947);
x_1115 = lean_ctor_get(x_1076, 0);
lean_inc(x_1115);
lean_dec(x_1076);
x_1116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1116, 0, x_1115);
lean_ctor_set(x_1116, 1, x_1074);
x_949 = x_1116;
goto block_1072;
}
}
}
case 8:
{
lean_object* x_1137; lean_object* x_1138; lean_object* x_1139; lean_object* x_1140; lean_object* x_1335; lean_object* x_1336; uint8_t x_1380; 
x_1137 = lean_ctor_get(x_1, 1);
lean_inc(x_1137);
x_1138 = lean_ctor_get(x_1, 2);
lean_inc(x_1138);
x_1139 = lean_ctor_get(x_1, 3);
lean_inc(x_1139);
x_1380 = l_Lean_Expr_hasLevelParam(x_1137);
if (x_1380 == 0)
{
uint8_t x_1381; 
x_1381 = l_Lean_Expr_hasFVar(x_1137);
if (x_1381 == 0)
{
uint8_t x_1382; 
x_1382 = l_Lean_Expr_hasMVar(x_1137);
if (x_1382 == 0)
{
lean_object* x_1383; 
x_1383 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1383, 0, x_1137);
lean_ctor_set(x_1383, 1, x_8);
x_1140 = x_1383;
goto block_1334;
}
else
{
lean_object* x_1384; lean_object* x_1385; lean_object* x_1386; lean_object* x_1387; lean_object* x_1388; 
x_1384 = lean_st_ref_get(x_7, x_8);
x_1385 = lean_ctor_get(x_1384, 1);
lean_inc(x_1385);
lean_dec(x_1384);
x_1386 = lean_st_ref_get(x_3, x_1385);
x_1387 = lean_ctor_get(x_1386, 0);
lean_inc(x_1387);
x_1388 = lean_ctor_get(x_1386, 1);
lean_inc(x_1388);
lean_dec(x_1386);
x_1335 = x_1387;
x_1336 = x_1388;
goto block_1379;
}
}
else
{
lean_object* x_1389; lean_object* x_1390; lean_object* x_1391; lean_object* x_1392; lean_object* x_1393; 
x_1389 = lean_st_ref_get(x_7, x_8);
x_1390 = lean_ctor_get(x_1389, 1);
lean_inc(x_1390);
lean_dec(x_1389);
x_1391 = lean_st_ref_get(x_3, x_1390);
x_1392 = lean_ctor_get(x_1391, 0);
lean_inc(x_1392);
x_1393 = lean_ctor_get(x_1391, 1);
lean_inc(x_1393);
lean_dec(x_1391);
x_1335 = x_1392;
x_1336 = x_1393;
goto block_1379;
}
}
else
{
lean_object* x_1394; lean_object* x_1395; lean_object* x_1396; lean_object* x_1397; lean_object* x_1398; 
x_1394 = lean_st_ref_get(x_7, x_8);
x_1395 = lean_ctor_get(x_1394, 1);
lean_inc(x_1395);
lean_dec(x_1394);
x_1396 = lean_st_ref_get(x_3, x_1395);
x_1397 = lean_ctor_get(x_1396, 0);
lean_inc(x_1397);
x_1398 = lean_ctor_get(x_1396, 1);
lean_inc(x_1398);
lean_dec(x_1396);
x_1335 = x_1397;
x_1336 = x_1398;
goto block_1379;
}
block_1334:
{
if (lean_obj_tag(x_1140) == 0)
{
lean_object* x_1141; lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; lean_object* x_1266; lean_object* x_1267; uint8_t x_1311; 
x_1141 = lean_ctor_get(x_1140, 0);
lean_inc(x_1141);
x_1142 = lean_ctor_get(x_1140, 1);
lean_inc(x_1142);
if (lean_is_exclusive(x_1140)) {
 lean_ctor_release(x_1140, 0);
 lean_ctor_release(x_1140, 1);
 x_1143 = x_1140;
} else {
 lean_dec_ref(x_1140);
 x_1143 = lean_box(0);
}
x_1311 = l_Lean_Expr_hasLevelParam(x_1138);
if (x_1311 == 0)
{
uint8_t x_1312; 
x_1312 = l_Lean_Expr_hasFVar(x_1138);
if (x_1312 == 0)
{
uint8_t x_1313; 
x_1313 = l_Lean_Expr_hasMVar(x_1138);
if (x_1313 == 0)
{
lean_object* x_1314; 
x_1314 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1314, 0, x_1138);
lean_ctor_set(x_1314, 1, x_1142);
x_1144 = x_1314;
goto block_1265;
}
else
{
lean_object* x_1315; lean_object* x_1316; lean_object* x_1317; lean_object* x_1318; lean_object* x_1319; 
x_1315 = lean_st_ref_get(x_7, x_1142);
x_1316 = lean_ctor_get(x_1315, 1);
lean_inc(x_1316);
lean_dec(x_1315);
x_1317 = lean_st_ref_get(x_3, x_1316);
x_1318 = lean_ctor_get(x_1317, 0);
lean_inc(x_1318);
x_1319 = lean_ctor_get(x_1317, 1);
lean_inc(x_1319);
lean_dec(x_1317);
x_1266 = x_1318;
x_1267 = x_1319;
goto block_1310;
}
}
else
{
lean_object* x_1320; lean_object* x_1321; lean_object* x_1322; lean_object* x_1323; lean_object* x_1324; 
x_1320 = lean_st_ref_get(x_7, x_1142);
x_1321 = lean_ctor_get(x_1320, 1);
lean_inc(x_1321);
lean_dec(x_1320);
x_1322 = lean_st_ref_get(x_3, x_1321);
x_1323 = lean_ctor_get(x_1322, 0);
lean_inc(x_1323);
x_1324 = lean_ctor_get(x_1322, 1);
lean_inc(x_1324);
lean_dec(x_1322);
x_1266 = x_1323;
x_1267 = x_1324;
goto block_1310;
}
}
else
{
lean_object* x_1325; lean_object* x_1326; lean_object* x_1327; lean_object* x_1328; lean_object* x_1329; 
x_1325 = lean_st_ref_get(x_7, x_1142);
x_1326 = lean_ctor_get(x_1325, 1);
lean_inc(x_1326);
lean_dec(x_1325);
x_1327 = lean_st_ref_get(x_3, x_1326);
x_1328 = lean_ctor_get(x_1327, 0);
lean_inc(x_1328);
x_1329 = lean_ctor_get(x_1327, 1);
lean_inc(x_1329);
lean_dec(x_1327);
x_1266 = x_1328;
x_1267 = x_1329;
goto block_1310;
}
block_1265:
{
if (lean_obj_tag(x_1144) == 0)
{
lean_object* x_1145; lean_object* x_1146; lean_object* x_1147; lean_object* x_1148; lean_object* x_1197; lean_object* x_1198; uint8_t x_1242; 
x_1145 = lean_ctor_get(x_1144, 0);
lean_inc(x_1145);
x_1146 = lean_ctor_get(x_1144, 1);
lean_inc(x_1146);
if (lean_is_exclusive(x_1144)) {
 lean_ctor_release(x_1144, 0);
 lean_ctor_release(x_1144, 1);
 x_1147 = x_1144;
} else {
 lean_dec_ref(x_1144);
 x_1147 = lean_box(0);
}
x_1242 = l_Lean_Expr_hasLevelParam(x_1139);
if (x_1242 == 0)
{
uint8_t x_1243; 
x_1243 = l_Lean_Expr_hasFVar(x_1139);
if (x_1243 == 0)
{
uint8_t x_1244; 
x_1244 = l_Lean_Expr_hasMVar(x_1139);
if (x_1244 == 0)
{
lean_object* x_1245; 
lean_dec(x_1147);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_scalar(x_1143)) {
 x_1245 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1245 = x_1143;
}
lean_ctor_set(x_1245, 0, x_1139);
lean_ctor_set(x_1245, 1, x_1146);
x_1148 = x_1245;
goto block_1196;
}
else
{
lean_object* x_1246; lean_object* x_1247; lean_object* x_1248; lean_object* x_1249; lean_object* x_1250; 
lean_dec(x_1143);
x_1246 = lean_st_ref_get(x_7, x_1146);
x_1247 = lean_ctor_get(x_1246, 1);
lean_inc(x_1247);
lean_dec(x_1246);
x_1248 = lean_st_ref_get(x_3, x_1247);
x_1249 = lean_ctor_get(x_1248, 0);
lean_inc(x_1249);
x_1250 = lean_ctor_get(x_1248, 1);
lean_inc(x_1250);
lean_dec(x_1248);
x_1197 = x_1249;
x_1198 = x_1250;
goto block_1241;
}
}
else
{
lean_object* x_1251; lean_object* x_1252; lean_object* x_1253; lean_object* x_1254; lean_object* x_1255; 
lean_dec(x_1143);
x_1251 = lean_st_ref_get(x_7, x_1146);
x_1252 = lean_ctor_get(x_1251, 1);
lean_inc(x_1252);
lean_dec(x_1251);
x_1253 = lean_st_ref_get(x_3, x_1252);
x_1254 = lean_ctor_get(x_1253, 0);
lean_inc(x_1254);
x_1255 = lean_ctor_get(x_1253, 1);
lean_inc(x_1255);
lean_dec(x_1253);
x_1197 = x_1254;
x_1198 = x_1255;
goto block_1241;
}
}
else
{
lean_object* x_1256; lean_object* x_1257; lean_object* x_1258; lean_object* x_1259; lean_object* x_1260; 
lean_dec(x_1143);
x_1256 = lean_st_ref_get(x_7, x_1146);
x_1257 = lean_ctor_get(x_1256, 1);
lean_inc(x_1257);
lean_dec(x_1256);
x_1258 = lean_st_ref_get(x_3, x_1257);
x_1259 = lean_ctor_get(x_1258, 0);
lean_inc(x_1259);
x_1260 = lean_ctor_get(x_1258, 1);
lean_inc(x_1260);
lean_dec(x_1258);
x_1197 = x_1259;
x_1198 = x_1260;
goto block_1241;
}
block_1196:
{
if (lean_obj_tag(x_1148) == 0)
{
if (lean_obj_tag(x_1) == 8)
{
uint8_t x_1149; 
x_1149 = !lean_is_exclusive(x_1148);
if (x_1149 == 0)
{
uint8_t x_1150; 
x_1150 = !lean_is_exclusive(x_1);
if (x_1150 == 0)
{
lean_object* x_1151; lean_object* x_1152; 
x_1151 = lean_ctor_get(x_1148, 0);
x_1152 = lean_expr_update_let(x_1, x_1141, x_1145, x_1151);
lean_ctor_set(x_1148, 0, x_1152);
return x_1148;
}
else
{
lean_object* x_1153; lean_object* x_1154; lean_object* x_1155; lean_object* x_1156; lean_object* x_1157; uint64_t x_1158; lean_object* x_1159; lean_object* x_1160; 
x_1153 = lean_ctor_get(x_1148, 0);
x_1154 = lean_ctor_get(x_1, 0);
x_1155 = lean_ctor_get(x_1, 1);
x_1156 = lean_ctor_get(x_1, 2);
x_1157 = lean_ctor_get(x_1, 3);
x_1158 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
lean_inc(x_1157);
lean_inc(x_1156);
lean_inc(x_1155);
lean_inc(x_1154);
lean_dec(x_1);
x_1159 = lean_alloc_ctor(8, 4, 8);
lean_ctor_set(x_1159, 0, x_1154);
lean_ctor_set(x_1159, 1, x_1155);
lean_ctor_set(x_1159, 2, x_1156);
lean_ctor_set(x_1159, 3, x_1157);
lean_ctor_set_uint64(x_1159, sizeof(void*)*4, x_1158);
x_1160 = lean_expr_update_let(x_1159, x_1141, x_1145, x_1153);
lean_ctor_set(x_1148, 0, x_1160);
return x_1148;
}
}
else
{
lean_object* x_1161; lean_object* x_1162; lean_object* x_1163; lean_object* x_1164; lean_object* x_1165; lean_object* x_1166; uint64_t x_1167; lean_object* x_1168; lean_object* x_1169; lean_object* x_1170; lean_object* x_1171; 
x_1161 = lean_ctor_get(x_1148, 0);
x_1162 = lean_ctor_get(x_1148, 1);
lean_inc(x_1162);
lean_inc(x_1161);
lean_dec(x_1148);
x_1163 = lean_ctor_get(x_1, 0);
lean_inc(x_1163);
x_1164 = lean_ctor_get(x_1, 1);
lean_inc(x_1164);
x_1165 = lean_ctor_get(x_1, 2);
lean_inc(x_1165);
x_1166 = lean_ctor_get(x_1, 3);
lean_inc(x_1166);
x_1167 = lean_ctor_get_uint64(x_1, sizeof(void*)*4);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 lean_ctor_release(x_1, 3);
 x_1168 = x_1;
} else {
 lean_dec_ref(x_1);
 x_1168 = lean_box(0);
}
if (lean_is_scalar(x_1168)) {
 x_1169 = lean_alloc_ctor(8, 4, 8);
} else {
 x_1169 = x_1168;
}
lean_ctor_set(x_1169, 0, x_1163);
lean_ctor_set(x_1169, 1, x_1164);
lean_ctor_set(x_1169, 2, x_1165);
lean_ctor_set(x_1169, 3, x_1166);
lean_ctor_set_uint64(x_1169, sizeof(void*)*4, x_1167);
x_1170 = lean_expr_update_let(x_1169, x_1141, x_1145, x_1161);
x_1171 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1171, 0, x_1170);
lean_ctor_set(x_1171, 1, x_1162);
return x_1171;
}
}
else
{
uint8_t x_1172; 
lean_dec(x_1145);
lean_dec(x_1141);
lean_dec(x_1);
x_1172 = !lean_is_exclusive(x_1148);
if (x_1172 == 0)
{
lean_object* x_1173; lean_object* x_1174; lean_object* x_1175; lean_object* x_1176; lean_object* x_1177; lean_object* x_1178; lean_object* x_1179; lean_object* x_1180; lean_object* x_1181; 
x_1173 = lean_ctor_get(x_1148, 0);
lean_dec(x_1173);
x_1174 = lean_mk_string("Lean.Expr");
x_1175 = lean_mk_string("Lean.Expr.updateLet!");
x_1176 = lean_unsigned_to_nat(932u);
x_1177 = lean_unsigned_to_nat(22u);
x_1178 = lean_mk_string("let expression expected");
x_1179 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1174, x_1175, x_1176, x_1177, x_1178);
lean_dec(x_1178);
lean_dec(x_1175);
lean_dec(x_1174);
x_1180 = l_Lean_instInhabitedExpr;
x_1181 = lean_panic_fn(x_1180, x_1179);
lean_ctor_set(x_1148, 0, x_1181);
return x_1148;
}
else
{
lean_object* x_1182; lean_object* x_1183; lean_object* x_1184; lean_object* x_1185; lean_object* x_1186; lean_object* x_1187; lean_object* x_1188; lean_object* x_1189; lean_object* x_1190; lean_object* x_1191; 
x_1182 = lean_ctor_get(x_1148, 1);
lean_inc(x_1182);
lean_dec(x_1148);
x_1183 = lean_mk_string("Lean.Expr");
x_1184 = lean_mk_string("Lean.Expr.updateLet!");
x_1185 = lean_unsigned_to_nat(932u);
x_1186 = lean_unsigned_to_nat(22u);
x_1187 = lean_mk_string("let expression expected");
x_1188 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1183, x_1184, x_1185, x_1186, x_1187);
lean_dec(x_1187);
lean_dec(x_1184);
lean_dec(x_1183);
x_1189 = l_Lean_instInhabitedExpr;
x_1190 = lean_panic_fn(x_1189, x_1188);
x_1191 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1191, 0, x_1190);
lean_ctor_set(x_1191, 1, x_1182);
return x_1191;
}
}
}
else
{
uint8_t x_1192; 
lean_dec(x_1145);
lean_dec(x_1141);
lean_dec(x_1);
x_1192 = !lean_is_exclusive(x_1148);
if (x_1192 == 0)
{
return x_1148;
}
else
{
lean_object* x_1193; lean_object* x_1194; lean_object* x_1195; 
x_1193 = lean_ctor_get(x_1148, 0);
x_1194 = lean_ctor_get(x_1148, 1);
lean_inc(x_1194);
lean_inc(x_1193);
lean_dec(x_1148);
x_1195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1195, 0, x_1193);
lean_ctor_set(x_1195, 1, x_1194);
return x_1195;
}
}
}
block_1241:
{
lean_object* x_1199; lean_object* x_1200; 
x_1199 = lean_ctor_get(x_1197, 1);
lean_inc(x_1199);
lean_dec(x_1197);
x_1200 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_1199, x_1139);
lean_dec(x_1199);
if (lean_obj_tag(x_1200) == 0)
{
lean_object* x_1201; 
lean_dec(x_1147);
lean_inc(x_7);
lean_inc(x_1139);
x_1201 = l_Lean_Meta_Closure_collectExprAux(x_1139, x_2, x_3, x_4, x_5, x_6, x_7, x_1198);
if (lean_obj_tag(x_1201) == 0)
{
lean_object* x_1202; lean_object* x_1203; lean_object* x_1204; lean_object* x_1205; lean_object* x_1206; lean_object* x_1207; lean_object* x_1208; uint8_t x_1209; 
x_1202 = lean_ctor_get(x_1201, 0);
lean_inc(x_1202);
x_1203 = lean_ctor_get(x_1201, 1);
lean_inc(x_1203);
lean_dec(x_1201);
x_1204 = lean_st_ref_get(x_7, x_1203);
lean_dec(x_7);
x_1205 = lean_ctor_get(x_1204, 1);
lean_inc(x_1205);
lean_dec(x_1204);
x_1206 = lean_st_ref_take(x_3, x_1205);
x_1207 = lean_ctor_get(x_1206, 0);
lean_inc(x_1207);
x_1208 = lean_ctor_get(x_1206, 1);
lean_inc(x_1208);
lean_dec(x_1206);
x_1209 = !lean_is_exclusive(x_1207);
if (x_1209 == 0)
{
lean_object* x_1210; lean_object* x_1211; lean_object* x_1212; uint8_t x_1213; 
x_1210 = lean_ctor_get(x_1207, 1);
lean_inc(x_1202);
x_1211 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_1210, x_1139, x_1202);
lean_ctor_set(x_1207, 1, x_1211);
x_1212 = lean_st_ref_set(x_3, x_1207, x_1208);
x_1213 = !lean_is_exclusive(x_1212);
if (x_1213 == 0)
{
lean_object* x_1214; 
x_1214 = lean_ctor_get(x_1212, 0);
lean_dec(x_1214);
lean_ctor_set(x_1212, 0, x_1202);
x_1148 = x_1212;
goto block_1196;
}
else
{
lean_object* x_1215; lean_object* x_1216; 
x_1215 = lean_ctor_get(x_1212, 1);
lean_inc(x_1215);
lean_dec(x_1212);
x_1216 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1216, 0, x_1202);
lean_ctor_set(x_1216, 1, x_1215);
x_1148 = x_1216;
goto block_1196;
}
}
else
{
lean_object* x_1217; lean_object* x_1218; lean_object* x_1219; lean_object* x_1220; lean_object* x_1221; lean_object* x_1222; lean_object* x_1223; lean_object* x_1224; lean_object* x_1225; lean_object* x_1226; lean_object* x_1227; lean_object* x_1228; lean_object* x_1229; lean_object* x_1230; lean_object* x_1231; lean_object* x_1232; lean_object* x_1233; lean_object* x_1234; 
x_1217 = lean_ctor_get(x_1207, 0);
x_1218 = lean_ctor_get(x_1207, 1);
x_1219 = lean_ctor_get(x_1207, 2);
x_1220 = lean_ctor_get(x_1207, 3);
x_1221 = lean_ctor_get(x_1207, 4);
x_1222 = lean_ctor_get(x_1207, 5);
x_1223 = lean_ctor_get(x_1207, 6);
x_1224 = lean_ctor_get(x_1207, 7);
x_1225 = lean_ctor_get(x_1207, 8);
x_1226 = lean_ctor_get(x_1207, 9);
x_1227 = lean_ctor_get(x_1207, 10);
x_1228 = lean_ctor_get(x_1207, 11);
lean_inc(x_1228);
lean_inc(x_1227);
lean_inc(x_1226);
lean_inc(x_1225);
lean_inc(x_1224);
lean_inc(x_1223);
lean_inc(x_1222);
lean_inc(x_1221);
lean_inc(x_1220);
lean_inc(x_1219);
lean_inc(x_1218);
lean_inc(x_1217);
lean_dec(x_1207);
lean_inc(x_1202);
x_1229 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_1218, x_1139, x_1202);
x_1230 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_1230, 0, x_1217);
lean_ctor_set(x_1230, 1, x_1229);
lean_ctor_set(x_1230, 2, x_1219);
lean_ctor_set(x_1230, 3, x_1220);
lean_ctor_set(x_1230, 4, x_1221);
lean_ctor_set(x_1230, 5, x_1222);
lean_ctor_set(x_1230, 6, x_1223);
lean_ctor_set(x_1230, 7, x_1224);
lean_ctor_set(x_1230, 8, x_1225);
lean_ctor_set(x_1230, 9, x_1226);
lean_ctor_set(x_1230, 10, x_1227);
lean_ctor_set(x_1230, 11, x_1228);
x_1231 = lean_st_ref_set(x_3, x_1230, x_1208);
x_1232 = lean_ctor_get(x_1231, 1);
lean_inc(x_1232);
if (lean_is_exclusive(x_1231)) {
 lean_ctor_release(x_1231, 0);
 lean_ctor_release(x_1231, 1);
 x_1233 = x_1231;
} else {
 lean_dec_ref(x_1231);
 x_1233 = lean_box(0);
}
if (lean_is_scalar(x_1233)) {
 x_1234 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1234 = x_1233;
}
lean_ctor_set(x_1234, 0, x_1202);
lean_ctor_set(x_1234, 1, x_1232);
x_1148 = x_1234;
goto block_1196;
}
}
else
{
uint8_t x_1235; 
lean_dec(x_1139);
lean_dec(x_7);
x_1235 = !lean_is_exclusive(x_1201);
if (x_1235 == 0)
{
x_1148 = x_1201;
goto block_1196;
}
else
{
lean_object* x_1236; lean_object* x_1237; lean_object* x_1238; 
x_1236 = lean_ctor_get(x_1201, 0);
x_1237 = lean_ctor_get(x_1201, 1);
lean_inc(x_1237);
lean_inc(x_1236);
lean_dec(x_1201);
x_1238 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1238, 0, x_1236);
lean_ctor_set(x_1238, 1, x_1237);
x_1148 = x_1238;
goto block_1196;
}
}
}
else
{
lean_object* x_1239; lean_object* x_1240; 
lean_dec(x_1139);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_1239 = lean_ctor_get(x_1200, 0);
lean_inc(x_1239);
lean_dec(x_1200);
if (lean_is_scalar(x_1147)) {
 x_1240 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1240 = x_1147;
}
lean_ctor_set(x_1240, 0, x_1239);
lean_ctor_set(x_1240, 1, x_1198);
x_1148 = x_1240;
goto block_1196;
}
}
}
else
{
uint8_t x_1261; 
lean_dec(x_1143);
lean_dec(x_1141);
lean_dec(x_1139);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_1261 = !lean_is_exclusive(x_1144);
if (x_1261 == 0)
{
return x_1144;
}
else
{
lean_object* x_1262; lean_object* x_1263; lean_object* x_1264; 
x_1262 = lean_ctor_get(x_1144, 0);
x_1263 = lean_ctor_get(x_1144, 1);
lean_inc(x_1263);
lean_inc(x_1262);
lean_dec(x_1144);
x_1264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1264, 0, x_1262);
lean_ctor_set(x_1264, 1, x_1263);
return x_1264;
}
}
}
block_1310:
{
lean_object* x_1268; lean_object* x_1269; 
x_1268 = lean_ctor_get(x_1266, 1);
lean_inc(x_1268);
lean_dec(x_1266);
x_1269 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_1268, x_1138);
lean_dec(x_1268);
if (lean_obj_tag(x_1269) == 0)
{
lean_object* x_1270; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1138);
x_1270 = l_Lean_Meta_Closure_collectExprAux(x_1138, x_2, x_3, x_4, x_5, x_6, x_7, x_1267);
if (lean_obj_tag(x_1270) == 0)
{
lean_object* x_1271; lean_object* x_1272; lean_object* x_1273; lean_object* x_1274; lean_object* x_1275; lean_object* x_1276; lean_object* x_1277; uint8_t x_1278; 
x_1271 = lean_ctor_get(x_1270, 0);
lean_inc(x_1271);
x_1272 = lean_ctor_get(x_1270, 1);
lean_inc(x_1272);
lean_dec(x_1270);
x_1273 = lean_st_ref_get(x_7, x_1272);
x_1274 = lean_ctor_get(x_1273, 1);
lean_inc(x_1274);
lean_dec(x_1273);
x_1275 = lean_st_ref_take(x_3, x_1274);
x_1276 = lean_ctor_get(x_1275, 0);
lean_inc(x_1276);
x_1277 = lean_ctor_get(x_1275, 1);
lean_inc(x_1277);
lean_dec(x_1275);
x_1278 = !lean_is_exclusive(x_1276);
if (x_1278 == 0)
{
lean_object* x_1279; lean_object* x_1280; lean_object* x_1281; uint8_t x_1282; 
x_1279 = lean_ctor_get(x_1276, 1);
lean_inc(x_1271);
x_1280 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_1279, x_1138, x_1271);
lean_ctor_set(x_1276, 1, x_1280);
x_1281 = lean_st_ref_set(x_3, x_1276, x_1277);
x_1282 = !lean_is_exclusive(x_1281);
if (x_1282 == 0)
{
lean_object* x_1283; 
x_1283 = lean_ctor_get(x_1281, 0);
lean_dec(x_1283);
lean_ctor_set(x_1281, 0, x_1271);
x_1144 = x_1281;
goto block_1265;
}
else
{
lean_object* x_1284; lean_object* x_1285; 
x_1284 = lean_ctor_get(x_1281, 1);
lean_inc(x_1284);
lean_dec(x_1281);
x_1285 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1285, 0, x_1271);
lean_ctor_set(x_1285, 1, x_1284);
x_1144 = x_1285;
goto block_1265;
}
}
else
{
lean_object* x_1286; lean_object* x_1287; lean_object* x_1288; lean_object* x_1289; lean_object* x_1290; lean_object* x_1291; lean_object* x_1292; lean_object* x_1293; lean_object* x_1294; lean_object* x_1295; lean_object* x_1296; lean_object* x_1297; lean_object* x_1298; lean_object* x_1299; lean_object* x_1300; lean_object* x_1301; lean_object* x_1302; lean_object* x_1303; 
x_1286 = lean_ctor_get(x_1276, 0);
x_1287 = lean_ctor_get(x_1276, 1);
x_1288 = lean_ctor_get(x_1276, 2);
x_1289 = lean_ctor_get(x_1276, 3);
x_1290 = lean_ctor_get(x_1276, 4);
x_1291 = lean_ctor_get(x_1276, 5);
x_1292 = lean_ctor_get(x_1276, 6);
x_1293 = lean_ctor_get(x_1276, 7);
x_1294 = lean_ctor_get(x_1276, 8);
x_1295 = lean_ctor_get(x_1276, 9);
x_1296 = lean_ctor_get(x_1276, 10);
x_1297 = lean_ctor_get(x_1276, 11);
lean_inc(x_1297);
lean_inc(x_1296);
lean_inc(x_1295);
lean_inc(x_1294);
lean_inc(x_1293);
lean_inc(x_1292);
lean_inc(x_1291);
lean_inc(x_1290);
lean_inc(x_1289);
lean_inc(x_1288);
lean_inc(x_1287);
lean_inc(x_1286);
lean_dec(x_1276);
lean_inc(x_1271);
x_1298 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_1287, x_1138, x_1271);
x_1299 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_1299, 0, x_1286);
lean_ctor_set(x_1299, 1, x_1298);
lean_ctor_set(x_1299, 2, x_1288);
lean_ctor_set(x_1299, 3, x_1289);
lean_ctor_set(x_1299, 4, x_1290);
lean_ctor_set(x_1299, 5, x_1291);
lean_ctor_set(x_1299, 6, x_1292);
lean_ctor_set(x_1299, 7, x_1293);
lean_ctor_set(x_1299, 8, x_1294);
lean_ctor_set(x_1299, 9, x_1295);
lean_ctor_set(x_1299, 10, x_1296);
lean_ctor_set(x_1299, 11, x_1297);
x_1300 = lean_st_ref_set(x_3, x_1299, x_1277);
x_1301 = lean_ctor_get(x_1300, 1);
lean_inc(x_1301);
if (lean_is_exclusive(x_1300)) {
 lean_ctor_release(x_1300, 0);
 lean_ctor_release(x_1300, 1);
 x_1302 = x_1300;
} else {
 lean_dec_ref(x_1300);
 x_1302 = lean_box(0);
}
if (lean_is_scalar(x_1302)) {
 x_1303 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1303 = x_1302;
}
lean_ctor_set(x_1303, 0, x_1271);
lean_ctor_set(x_1303, 1, x_1301);
x_1144 = x_1303;
goto block_1265;
}
}
else
{
uint8_t x_1304; 
lean_dec(x_1138);
x_1304 = !lean_is_exclusive(x_1270);
if (x_1304 == 0)
{
x_1144 = x_1270;
goto block_1265;
}
else
{
lean_object* x_1305; lean_object* x_1306; lean_object* x_1307; 
x_1305 = lean_ctor_get(x_1270, 0);
x_1306 = lean_ctor_get(x_1270, 1);
lean_inc(x_1306);
lean_inc(x_1305);
lean_dec(x_1270);
x_1307 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1307, 0, x_1305);
lean_ctor_set(x_1307, 1, x_1306);
x_1144 = x_1307;
goto block_1265;
}
}
}
else
{
lean_object* x_1308; lean_object* x_1309; 
lean_dec(x_1138);
x_1308 = lean_ctor_get(x_1269, 0);
lean_inc(x_1308);
lean_dec(x_1269);
x_1309 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1309, 0, x_1308);
lean_ctor_set(x_1309, 1, x_1267);
x_1144 = x_1309;
goto block_1265;
}
}
}
else
{
uint8_t x_1330; 
lean_dec(x_1139);
lean_dec(x_1138);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_1330 = !lean_is_exclusive(x_1140);
if (x_1330 == 0)
{
return x_1140;
}
else
{
lean_object* x_1331; lean_object* x_1332; lean_object* x_1333; 
x_1331 = lean_ctor_get(x_1140, 0);
x_1332 = lean_ctor_get(x_1140, 1);
lean_inc(x_1332);
lean_inc(x_1331);
lean_dec(x_1140);
x_1333 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1333, 0, x_1331);
lean_ctor_set(x_1333, 1, x_1332);
return x_1333;
}
}
}
block_1379:
{
lean_object* x_1337; lean_object* x_1338; 
x_1337 = lean_ctor_get(x_1335, 1);
lean_inc(x_1337);
lean_dec(x_1335);
x_1338 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_1337, x_1137);
lean_dec(x_1337);
if (lean_obj_tag(x_1338) == 0)
{
lean_object* x_1339; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1137);
x_1339 = l_Lean_Meta_Closure_collectExprAux(x_1137, x_2, x_3, x_4, x_5, x_6, x_7, x_1336);
if (lean_obj_tag(x_1339) == 0)
{
lean_object* x_1340; lean_object* x_1341; lean_object* x_1342; lean_object* x_1343; lean_object* x_1344; lean_object* x_1345; lean_object* x_1346; uint8_t x_1347; 
x_1340 = lean_ctor_get(x_1339, 0);
lean_inc(x_1340);
x_1341 = lean_ctor_get(x_1339, 1);
lean_inc(x_1341);
lean_dec(x_1339);
x_1342 = lean_st_ref_get(x_7, x_1341);
x_1343 = lean_ctor_get(x_1342, 1);
lean_inc(x_1343);
lean_dec(x_1342);
x_1344 = lean_st_ref_take(x_3, x_1343);
x_1345 = lean_ctor_get(x_1344, 0);
lean_inc(x_1345);
x_1346 = lean_ctor_get(x_1344, 1);
lean_inc(x_1346);
lean_dec(x_1344);
x_1347 = !lean_is_exclusive(x_1345);
if (x_1347 == 0)
{
lean_object* x_1348; lean_object* x_1349; lean_object* x_1350; uint8_t x_1351; 
x_1348 = lean_ctor_get(x_1345, 1);
lean_inc(x_1340);
x_1349 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_1348, x_1137, x_1340);
lean_ctor_set(x_1345, 1, x_1349);
x_1350 = lean_st_ref_set(x_3, x_1345, x_1346);
x_1351 = !lean_is_exclusive(x_1350);
if (x_1351 == 0)
{
lean_object* x_1352; 
x_1352 = lean_ctor_get(x_1350, 0);
lean_dec(x_1352);
lean_ctor_set(x_1350, 0, x_1340);
x_1140 = x_1350;
goto block_1334;
}
else
{
lean_object* x_1353; lean_object* x_1354; 
x_1353 = lean_ctor_get(x_1350, 1);
lean_inc(x_1353);
lean_dec(x_1350);
x_1354 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1354, 0, x_1340);
lean_ctor_set(x_1354, 1, x_1353);
x_1140 = x_1354;
goto block_1334;
}
}
else
{
lean_object* x_1355; lean_object* x_1356; lean_object* x_1357; lean_object* x_1358; lean_object* x_1359; lean_object* x_1360; lean_object* x_1361; lean_object* x_1362; lean_object* x_1363; lean_object* x_1364; lean_object* x_1365; lean_object* x_1366; lean_object* x_1367; lean_object* x_1368; lean_object* x_1369; lean_object* x_1370; lean_object* x_1371; lean_object* x_1372; 
x_1355 = lean_ctor_get(x_1345, 0);
x_1356 = lean_ctor_get(x_1345, 1);
x_1357 = lean_ctor_get(x_1345, 2);
x_1358 = lean_ctor_get(x_1345, 3);
x_1359 = lean_ctor_get(x_1345, 4);
x_1360 = lean_ctor_get(x_1345, 5);
x_1361 = lean_ctor_get(x_1345, 6);
x_1362 = lean_ctor_get(x_1345, 7);
x_1363 = lean_ctor_get(x_1345, 8);
x_1364 = lean_ctor_get(x_1345, 9);
x_1365 = lean_ctor_get(x_1345, 10);
x_1366 = lean_ctor_get(x_1345, 11);
lean_inc(x_1366);
lean_inc(x_1365);
lean_inc(x_1364);
lean_inc(x_1363);
lean_inc(x_1362);
lean_inc(x_1361);
lean_inc(x_1360);
lean_inc(x_1359);
lean_inc(x_1358);
lean_inc(x_1357);
lean_inc(x_1356);
lean_inc(x_1355);
lean_dec(x_1345);
lean_inc(x_1340);
x_1367 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_1356, x_1137, x_1340);
x_1368 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_1368, 0, x_1355);
lean_ctor_set(x_1368, 1, x_1367);
lean_ctor_set(x_1368, 2, x_1357);
lean_ctor_set(x_1368, 3, x_1358);
lean_ctor_set(x_1368, 4, x_1359);
lean_ctor_set(x_1368, 5, x_1360);
lean_ctor_set(x_1368, 6, x_1361);
lean_ctor_set(x_1368, 7, x_1362);
lean_ctor_set(x_1368, 8, x_1363);
lean_ctor_set(x_1368, 9, x_1364);
lean_ctor_set(x_1368, 10, x_1365);
lean_ctor_set(x_1368, 11, x_1366);
x_1369 = lean_st_ref_set(x_3, x_1368, x_1346);
x_1370 = lean_ctor_get(x_1369, 1);
lean_inc(x_1370);
if (lean_is_exclusive(x_1369)) {
 lean_ctor_release(x_1369, 0);
 lean_ctor_release(x_1369, 1);
 x_1371 = x_1369;
} else {
 lean_dec_ref(x_1369);
 x_1371 = lean_box(0);
}
if (lean_is_scalar(x_1371)) {
 x_1372 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1372 = x_1371;
}
lean_ctor_set(x_1372, 0, x_1340);
lean_ctor_set(x_1372, 1, x_1370);
x_1140 = x_1372;
goto block_1334;
}
}
else
{
uint8_t x_1373; 
lean_dec(x_1137);
x_1373 = !lean_is_exclusive(x_1339);
if (x_1373 == 0)
{
x_1140 = x_1339;
goto block_1334;
}
else
{
lean_object* x_1374; lean_object* x_1375; lean_object* x_1376; 
x_1374 = lean_ctor_get(x_1339, 0);
x_1375 = lean_ctor_get(x_1339, 1);
lean_inc(x_1375);
lean_inc(x_1374);
lean_dec(x_1339);
x_1376 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1376, 0, x_1374);
lean_ctor_set(x_1376, 1, x_1375);
x_1140 = x_1376;
goto block_1334;
}
}
}
else
{
lean_object* x_1377; lean_object* x_1378; 
lean_dec(x_1137);
x_1377 = lean_ctor_get(x_1338, 0);
lean_inc(x_1377);
lean_dec(x_1338);
x_1378 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1378, 0, x_1377);
lean_ctor_set(x_1378, 1, x_1336);
x_1140 = x_1378;
goto block_1334;
}
}
}
case 10:
{
lean_object* x_1399; lean_object* x_1400; lean_object* x_1401; uint8_t x_1445; 
x_1399 = lean_ctor_get(x_1, 1);
lean_inc(x_1399);
x_1445 = l_Lean_Expr_hasLevelParam(x_1399);
if (x_1445 == 0)
{
uint8_t x_1446; 
x_1446 = l_Lean_Expr_hasFVar(x_1399);
if (x_1446 == 0)
{
uint8_t x_1447; 
x_1447 = l_Lean_Expr_hasMVar(x_1399);
if (x_1447 == 0)
{
lean_object* x_1448; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_1448 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1448, 0, x_1399);
lean_ctor_set(x_1448, 1, x_8);
x_9 = x_1448;
goto block_53;
}
else
{
lean_object* x_1449; lean_object* x_1450; lean_object* x_1451; lean_object* x_1452; lean_object* x_1453; 
x_1449 = lean_st_ref_get(x_7, x_8);
x_1450 = lean_ctor_get(x_1449, 1);
lean_inc(x_1450);
lean_dec(x_1449);
x_1451 = lean_st_ref_get(x_3, x_1450);
x_1452 = lean_ctor_get(x_1451, 0);
lean_inc(x_1452);
x_1453 = lean_ctor_get(x_1451, 1);
lean_inc(x_1453);
lean_dec(x_1451);
x_1400 = x_1452;
x_1401 = x_1453;
goto block_1444;
}
}
else
{
lean_object* x_1454; lean_object* x_1455; lean_object* x_1456; lean_object* x_1457; lean_object* x_1458; 
x_1454 = lean_st_ref_get(x_7, x_8);
x_1455 = lean_ctor_get(x_1454, 1);
lean_inc(x_1455);
lean_dec(x_1454);
x_1456 = lean_st_ref_get(x_3, x_1455);
x_1457 = lean_ctor_get(x_1456, 0);
lean_inc(x_1457);
x_1458 = lean_ctor_get(x_1456, 1);
lean_inc(x_1458);
lean_dec(x_1456);
x_1400 = x_1457;
x_1401 = x_1458;
goto block_1444;
}
}
else
{
lean_object* x_1459; lean_object* x_1460; lean_object* x_1461; lean_object* x_1462; lean_object* x_1463; 
x_1459 = lean_st_ref_get(x_7, x_8);
x_1460 = lean_ctor_get(x_1459, 1);
lean_inc(x_1460);
lean_dec(x_1459);
x_1461 = lean_st_ref_get(x_3, x_1460);
x_1462 = lean_ctor_get(x_1461, 0);
lean_inc(x_1462);
x_1463 = lean_ctor_get(x_1461, 1);
lean_inc(x_1463);
lean_dec(x_1461);
x_1400 = x_1462;
x_1401 = x_1463;
goto block_1444;
}
block_1444:
{
lean_object* x_1402; lean_object* x_1403; 
x_1402 = lean_ctor_get(x_1400, 1);
lean_inc(x_1402);
lean_dec(x_1400);
x_1403 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_1402, x_1399);
lean_dec(x_1402);
if (lean_obj_tag(x_1403) == 0)
{
lean_object* x_1404; 
lean_inc(x_7);
lean_inc(x_1399);
x_1404 = l_Lean_Meta_Closure_collectExprAux(x_1399, x_2, x_3, x_4, x_5, x_6, x_7, x_1401);
if (lean_obj_tag(x_1404) == 0)
{
lean_object* x_1405; lean_object* x_1406; lean_object* x_1407; lean_object* x_1408; lean_object* x_1409; lean_object* x_1410; lean_object* x_1411; uint8_t x_1412; 
x_1405 = lean_ctor_get(x_1404, 0);
lean_inc(x_1405);
x_1406 = lean_ctor_get(x_1404, 1);
lean_inc(x_1406);
lean_dec(x_1404);
x_1407 = lean_st_ref_get(x_7, x_1406);
lean_dec(x_7);
x_1408 = lean_ctor_get(x_1407, 1);
lean_inc(x_1408);
lean_dec(x_1407);
x_1409 = lean_st_ref_take(x_3, x_1408);
x_1410 = lean_ctor_get(x_1409, 0);
lean_inc(x_1410);
x_1411 = lean_ctor_get(x_1409, 1);
lean_inc(x_1411);
lean_dec(x_1409);
x_1412 = !lean_is_exclusive(x_1410);
if (x_1412 == 0)
{
lean_object* x_1413; lean_object* x_1414; lean_object* x_1415; uint8_t x_1416; 
x_1413 = lean_ctor_get(x_1410, 1);
lean_inc(x_1405);
x_1414 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_1413, x_1399, x_1405);
lean_ctor_set(x_1410, 1, x_1414);
x_1415 = lean_st_ref_set(x_3, x_1410, x_1411);
x_1416 = !lean_is_exclusive(x_1415);
if (x_1416 == 0)
{
lean_object* x_1417; 
x_1417 = lean_ctor_get(x_1415, 0);
lean_dec(x_1417);
lean_ctor_set(x_1415, 0, x_1405);
x_9 = x_1415;
goto block_53;
}
else
{
lean_object* x_1418; lean_object* x_1419; 
x_1418 = lean_ctor_get(x_1415, 1);
lean_inc(x_1418);
lean_dec(x_1415);
x_1419 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1419, 0, x_1405);
lean_ctor_set(x_1419, 1, x_1418);
x_9 = x_1419;
goto block_53;
}
}
else
{
lean_object* x_1420; lean_object* x_1421; lean_object* x_1422; lean_object* x_1423; lean_object* x_1424; lean_object* x_1425; lean_object* x_1426; lean_object* x_1427; lean_object* x_1428; lean_object* x_1429; lean_object* x_1430; lean_object* x_1431; lean_object* x_1432; lean_object* x_1433; lean_object* x_1434; lean_object* x_1435; lean_object* x_1436; lean_object* x_1437; 
x_1420 = lean_ctor_get(x_1410, 0);
x_1421 = lean_ctor_get(x_1410, 1);
x_1422 = lean_ctor_get(x_1410, 2);
x_1423 = lean_ctor_get(x_1410, 3);
x_1424 = lean_ctor_get(x_1410, 4);
x_1425 = lean_ctor_get(x_1410, 5);
x_1426 = lean_ctor_get(x_1410, 6);
x_1427 = lean_ctor_get(x_1410, 7);
x_1428 = lean_ctor_get(x_1410, 8);
x_1429 = lean_ctor_get(x_1410, 9);
x_1430 = lean_ctor_get(x_1410, 10);
x_1431 = lean_ctor_get(x_1410, 11);
lean_inc(x_1431);
lean_inc(x_1430);
lean_inc(x_1429);
lean_inc(x_1428);
lean_inc(x_1427);
lean_inc(x_1426);
lean_inc(x_1425);
lean_inc(x_1424);
lean_inc(x_1423);
lean_inc(x_1422);
lean_inc(x_1421);
lean_inc(x_1420);
lean_dec(x_1410);
lean_inc(x_1405);
x_1432 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_1421, x_1399, x_1405);
x_1433 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_1433, 0, x_1420);
lean_ctor_set(x_1433, 1, x_1432);
lean_ctor_set(x_1433, 2, x_1422);
lean_ctor_set(x_1433, 3, x_1423);
lean_ctor_set(x_1433, 4, x_1424);
lean_ctor_set(x_1433, 5, x_1425);
lean_ctor_set(x_1433, 6, x_1426);
lean_ctor_set(x_1433, 7, x_1427);
lean_ctor_set(x_1433, 8, x_1428);
lean_ctor_set(x_1433, 9, x_1429);
lean_ctor_set(x_1433, 10, x_1430);
lean_ctor_set(x_1433, 11, x_1431);
x_1434 = lean_st_ref_set(x_3, x_1433, x_1411);
x_1435 = lean_ctor_get(x_1434, 1);
lean_inc(x_1435);
if (lean_is_exclusive(x_1434)) {
 lean_ctor_release(x_1434, 0);
 lean_ctor_release(x_1434, 1);
 x_1436 = x_1434;
} else {
 lean_dec_ref(x_1434);
 x_1436 = lean_box(0);
}
if (lean_is_scalar(x_1436)) {
 x_1437 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1437 = x_1436;
}
lean_ctor_set(x_1437, 0, x_1405);
lean_ctor_set(x_1437, 1, x_1435);
x_9 = x_1437;
goto block_53;
}
}
else
{
uint8_t x_1438; 
lean_dec(x_1399);
lean_dec(x_7);
x_1438 = !lean_is_exclusive(x_1404);
if (x_1438 == 0)
{
x_9 = x_1404;
goto block_53;
}
else
{
lean_object* x_1439; lean_object* x_1440; lean_object* x_1441; 
x_1439 = lean_ctor_get(x_1404, 0);
x_1440 = lean_ctor_get(x_1404, 1);
lean_inc(x_1440);
lean_inc(x_1439);
lean_dec(x_1404);
x_1441 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1441, 0, x_1439);
lean_ctor_set(x_1441, 1, x_1440);
x_9 = x_1441;
goto block_53;
}
}
}
else
{
lean_object* x_1442; lean_object* x_1443; 
lean_dec(x_1399);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_1442 = lean_ctor_get(x_1403, 0);
lean_inc(x_1442);
lean_dec(x_1403);
x_1443 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1443, 0, x_1442);
lean_ctor_set(x_1443, 1, x_1401);
x_9 = x_1443;
goto block_53;
}
}
}
case 11:
{
lean_object* x_1464; lean_object* x_1465; lean_object* x_1466; uint8_t x_1510; 
x_1464 = lean_ctor_get(x_1, 2);
lean_inc(x_1464);
x_1510 = l_Lean_Expr_hasLevelParam(x_1464);
if (x_1510 == 0)
{
uint8_t x_1511; 
x_1511 = l_Lean_Expr_hasFVar(x_1464);
if (x_1511 == 0)
{
uint8_t x_1512; 
x_1512 = l_Lean_Expr_hasMVar(x_1464);
if (x_1512 == 0)
{
lean_object* x_1513; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_1513 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1513, 0, x_1464);
lean_ctor_set(x_1513, 1, x_8);
x_54 = x_1513;
goto block_100;
}
else
{
lean_object* x_1514; lean_object* x_1515; lean_object* x_1516; lean_object* x_1517; lean_object* x_1518; 
x_1514 = lean_st_ref_get(x_7, x_8);
x_1515 = lean_ctor_get(x_1514, 1);
lean_inc(x_1515);
lean_dec(x_1514);
x_1516 = lean_st_ref_get(x_3, x_1515);
x_1517 = lean_ctor_get(x_1516, 0);
lean_inc(x_1517);
x_1518 = lean_ctor_get(x_1516, 1);
lean_inc(x_1518);
lean_dec(x_1516);
x_1465 = x_1517;
x_1466 = x_1518;
goto block_1509;
}
}
else
{
lean_object* x_1519; lean_object* x_1520; lean_object* x_1521; lean_object* x_1522; lean_object* x_1523; 
x_1519 = lean_st_ref_get(x_7, x_8);
x_1520 = lean_ctor_get(x_1519, 1);
lean_inc(x_1520);
lean_dec(x_1519);
x_1521 = lean_st_ref_get(x_3, x_1520);
x_1522 = lean_ctor_get(x_1521, 0);
lean_inc(x_1522);
x_1523 = lean_ctor_get(x_1521, 1);
lean_inc(x_1523);
lean_dec(x_1521);
x_1465 = x_1522;
x_1466 = x_1523;
goto block_1509;
}
}
else
{
lean_object* x_1524; lean_object* x_1525; lean_object* x_1526; lean_object* x_1527; lean_object* x_1528; 
x_1524 = lean_st_ref_get(x_7, x_8);
x_1525 = lean_ctor_get(x_1524, 1);
lean_inc(x_1525);
lean_dec(x_1524);
x_1526 = lean_st_ref_get(x_3, x_1525);
x_1527 = lean_ctor_get(x_1526, 0);
lean_inc(x_1527);
x_1528 = lean_ctor_get(x_1526, 1);
lean_inc(x_1528);
lean_dec(x_1526);
x_1465 = x_1527;
x_1466 = x_1528;
goto block_1509;
}
block_1509:
{
lean_object* x_1467; lean_object* x_1468; 
x_1467 = lean_ctor_get(x_1465, 1);
lean_inc(x_1467);
lean_dec(x_1465);
x_1468 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_1467, x_1464);
lean_dec(x_1467);
if (lean_obj_tag(x_1468) == 0)
{
lean_object* x_1469; 
lean_inc(x_7);
lean_inc(x_1464);
x_1469 = l_Lean_Meta_Closure_collectExprAux(x_1464, x_2, x_3, x_4, x_5, x_6, x_7, x_1466);
if (lean_obj_tag(x_1469) == 0)
{
lean_object* x_1470; lean_object* x_1471; lean_object* x_1472; lean_object* x_1473; lean_object* x_1474; lean_object* x_1475; lean_object* x_1476; uint8_t x_1477; 
x_1470 = lean_ctor_get(x_1469, 0);
lean_inc(x_1470);
x_1471 = lean_ctor_get(x_1469, 1);
lean_inc(x_1471);
lean_dec(x_1469);
x_1472 = lean_st_ref_get(x_7, x_1471);
lean_dec(x_7);
x_1473 = lean_ctor_get(x_1472, 1);
lean_inc(x_1473);
lean_dec(x_1472);
x_1474 = lean_st_ref_take(x_3, x_1473);
x_1475 = lean_ctor_get(x_1474, 0);
lean_inc(x_1475);
x_1476 = lean_ctor_get(x_1474, 1);
lean_inc(x_1476);
lean_dec(x_1474);
x_1477 = !lean_is_exclusive(x_1475);
if (x_1477 == 0)
{
lean_object* x_1478; lean_object* x_1479; lean_object* x_1480; uint8_t x_1481; 
x_1478 = lean_ctor_get(x_1475, 1);
lean_inc(x_1470);
x_1479 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_1478, x_1464, x_1470);
lean_ctor_set(x_1475, 1, x_1479);
x_1480 = lean_st_ref_set(x_3, x_1475, x_1476);
x_1481 = !lean_is_exclusive(x_1480);
if (x_1481 == 0)
{
lean_object* x_1482; 
x_1482 = lean_ctor_get(x_1480, 0);
lean_dec(x_1482);
lean_ctor_set(x_1480, 0, x_1470);
x_54 = x_1480;
goto block_100;
}
else
{
lean_object* x_1483; lean_object* x_1484; 
x_1483 = lean_ctor_get(x_1480, 1);
lean_inc(x_1483);
lean_dec(x_1480);
x_1484 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1484, 0, x_1470);
lean_ctor_set(x_1484, 1, x_1483);
x_54 = x_1484;
goto block_100;
}
}
else
{
lean_object* x_1485; lean_object* x_1486; lean_object* x_1487; lean_object* x_1488; lean_object* x_1489; lean_object* x_1490; lean_object* x_1491; lean_object* x_1492; lean_object* x_1493; lean_object* x_1494; lean_object* x_1495; lean_object* x_1496; lean_object* x_1497; lean_object* x_1498; lean_object* x_1499; lean_object* x_1500; lean_object* x_1501; lean_object* x_1502; 
x_1485 = lean_ctor_get(x_1475, 0);
x_1486 = lean_ctor_get(x_1475, 1);
x_1487 = lean_ctor_get(x_1475, 2);
x_1488 = lean_ctor_get(x_1475, 3);
x_1489 = lean_ctor_get(x_1475, 4);
x_1490 = lean_ctor_get(x_1475, 5);
x_1491 = lean_ctor_get(x_1475, 6);
x_1492 = lean_ctor_get(x_1475, 7);
x_1493 = lean_ctor_get(x_1475, 8);
x_1494 = lean_ctor_get(x_1475, 9);
x_1495 = lean_ctor_get(x_1475, 10);
x_1496 = lean_ctor_get(x_1475, 11);
lean_inc(x_1496);
lean_inc(x_1495);
lean_inc(x_1494);
lean_inc(x_1493);
lean_inc(x_1492);
lean_inc(x_1491);
lean_inc(x_1490);
lean_inc(x_1489);
lean_inc(x_1488);
lean_inc(x_1487);
lean_inc(x_1486);
lean_inc(x_1485);
lean_dec(x_1475);
lean_inc(x_1470);
x_1497 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_1486, x_1464, x_1470);
x_1498 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_1498, 0, x_1485);
lean_ctor_set(x_1498, 1, x_1497);
lean_ctor_set(x_1498, 2, x_1487);
lean_ctor_set(x_1498, 3, x_1488);
lean_ctor_set(x_1498, 4, x_1489);
lean_ctor_set(x_1498, 5, x_1490);
lean_ctor_set(x_1498, 6, x_1491);
lean_ctor_set(x_1498, 7, x_1492);
lean_ctor_set(x_1498, 8, x_1493);
lean_ctor_set(x_1498, 9, x_1494);
lean_ctor_set(x_1498, 10, x_1495);
lean_ctor_set(x_1498, 11, x_1496);
x_1499 = lean_st_ref_set(x_3, x_1498, x_1476);
x_1500 = lean_ctor_get(x_1499, 1);
lean_inc(x_1500);
if (lean_is_exclusive(x_1499)) {
 lean_ctor_release(x_1499, 0);
 lean_ctor_release(x_1499, 1);
 x_1501 = x_1499;
} else {
 lean_dec_ref(x_1499);
 x_1501 = lean_box(0);
}
if (lean_is_scalar(x_1501)) {
 x_1502 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1502 = x_1501;
}
lean_ctor_set(x_1502, 0, x_1470);
lean_ctor_set(x_1502, 1, x_1500);
x_54 = x_1502;
goto block_100;
}
}
else
{
uint8_t x_1503; 
lean_dec(x_1464);
lean_dec(x_7);
x_1503 = !lean_is_exclusive(x_1469);
if (x_1503 == 0)
{
x_54 = x_1469;
goto block_100;
}
else
{
lean_object* x_1504; lean_object* x_1505; lean_object* x_1506; 
x_1504 = lean_ctor_get(x_1469, 0);
x_1505 = lean_ctor_get(x_1469, 1);
lean_inc(x_1505);
lean_inc(x_1504);
lean_dec(x_1469);
x_1506 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1506, 0, x_1504);
lean_ctor_set(x_1506, 1, x_1505);
x_54 = x_1506;
goto block_100;
}
}
}
else
{
lean_object* x_1507; lean_object* x_1508; 
lean_dec(x_1464);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_1507 = lean_ctor_get(x_1468, 0);
lean_inc(x_1507);
lean_dec(x_1468);
x_1508 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1508, 0, x_1507);
lean_ctor_set(x_1508, 1, x_1466);
x_54 = x_1508;
goto block_100;
}
}
}
default: 
{
lean_object* x_1529; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_1529 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1529, 0, x_1);
lean_ctor_set(x_1529, 1, x_8);
return x_1529;
}
}
block_53:
{
if (lean_obj_tag(x_9) == 0)
{
if (lean_obj_tag(x_1) == 10)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 0);
x_13 = lean_expr_update_mdata(x_1, x_12);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint64_t x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_1, 1);
x_17 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_1);
x_18 = lean_alloc_ctor(10, 2, 8);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_16);
lean_ctor_set_uint64(x_18, sizeof(void*)*2, x_17);
x_19 = lean_expr_update_mdata(x_18, x_14);
lean_ctor_set(x_9, 0, x_19);
return x_9;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint64_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_9, 0);
x_21 = lean_ctor_get(x_9, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_9);
x_22 = lean_ctor_get(x_1, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
x_24 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_25 = x_1;
} else {
 lean_dec_ref(x_1);
 x_25 = lean_box(0);
}
if (lean_is_scalar(x_25)) {
 x_26 = lean_alloc_ctor(10, 2, 8);
} else {
 x_26 = x_25;
}
lean_ctor_set(x_26, 0, x_22);
lean_ctor_set(x_26, 1, x_23);
lean_ctor_set_uint64(x_26, sizeof(void*)*2, x_24);
x_27 = lean_expr_update_mdata(x_26, x_20);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_21);
return x_28;
}
}
else
{
uint8_t x_29; 
lean_dec(x_1);
x_29 = !lean_is_exclusive(x_9);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_30 = lean_ctor_get(x_9, 0);
lean_dec(x_30);
x_31 = lean_mk_string("Lean.Expr");
x_32 = lean_mk_string("Lean.Expr.updateMData!");
x_33 = lean_unsigned_to_nat(890u);
x_34 = lean_unsigned_to_nat(19u);
x_35 = lean_mk_string("mdata expected");
x_36 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_31, x_32, x_33, x_34, x_35);
lean_dec(x_35);
lean_dec(x_32);
lean_dec(x_31);
x_37 = l_Lean_instInhabitedExpr;
x_38 = lean_panic_fn(x_37, x_36);
lean_ctor_set(x_9, 0, x_38);
return x_9;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_39 = lean_ctor_get(x_9, 1);
lean_inc(x_39);
lean_dec(x_9);
x_40 = lean_mk_string("Lean.Expr");
x_41 = lean_mk_string("Lean.Expr.updateMData!");
x_42 = lean_unsigned_to_nat(890u);
x_43 = lean_unsigned_to_nat(19u);
x_44 = lean_mk_string("mdata expected");
x_45 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_40, x_41, x_42, x_43, x_44);
lean_dec(x_44);
lean_dec(x_41);
lean_dec(x_40);
x_46 = l_Lean_instInhabitedExpr;
x_47 = lean_panic_fn(x_46, x_45);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_39);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_9);
if (x_49 == 0)
{
return x_9;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_9, 0);
x_51 = lean_ctor_get(x_9, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_9);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
block_100:
{
if (lean_obj_tag(x_54) == 0)
{
if (lean_obj_tag(x_1) == 11)
{
uint8_t x_55; 
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
uint8_t x_56; 
x_56 = !lean_is_exclusive(x_1);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_ctor_get(x_54, 0);
x_58 = lean_expr_update_proj(x_1, x_57);
lean_ctor_set(x_54, 0, x_58);
return x_54;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint64_t x_63; lean_object* x_64; lean_object* x_65; 
x_59 = lean_ctor_get(x_54, 0);
x_60 = lean_ctor_get(x_1, 0);
x_61 = lean_ctor_get(x_1, 1);
x_62 = lean_ctor_get(x_1, 2);
x_63 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_1);
x_64 = lean_alloc_ctor(11, 3, 8);
lean_ctor_set(x_64, 0, x_60);
lean_ctor_set(x_64, 1, x_61);
lean_ctor_set(x_64, 2, x_62);
lean_ctor_set_uint64(x_64, sizeof(void*)*3, x_63);
x_65 = lean_expr_update_proj(x_64, x_59);
lean_ctor_set(x_54, 0, x_65);
return x_54;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint64_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_66 = lean_ctor_get(x_54, 0);
x_67 = lean_ctor_get(x_54, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_54);
x_68 = lean_ctor_get(x_1, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_1, 1);
lean_inc(x_69);
x_70 = lean_ctor_get(x_1, 2);
lean_inc(x_70);
x_71 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 lean_ctor_release(x_1, 2);
 x_72 = x_1;
} else {
 lean_dec_ref(x_1);
 x_72 = lean_box(0);
}
if (lean_is_scalar(x_72)) {
 x_73 = lean_alloc_ctor(11, 3, 8);
} else {
 x_73 = x_72;
}
lean_ctor_set(x_73, 0, x_68);
lean_ctor_set(x_73, 1, x_69);
lean_ctor_set(x_73, 2, x_70);
lean_ctor_set_uint64(x_73, sizeof(void*)*3, x_71);
x_74 = lean_expr_update_proj(x_73, x_66);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_67);
return x_75;
}
}
else
{
uint8_t x_76; 
lean_dec(x_1);
x_76 = !lean_is_exclusive(x_54);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_77 = lean_ctor_get(x_54, 0);
lean_dec(x_77);
x_78 = lean_mk_string("Lean.Expr");
x_79 = lean_mk_string("Lean.Expr.updateProj!");
x_80 = lean_unsigned_to_nat(895u);
x_81 = lean_unsigned_to_nat(20u);
x_82 = lean_mk_string("proj expected");
x_83 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_78, x_79, x_80, x_81, x_82);
lean_dec(x_82);
lean_dec(x_79);
lean_dec(x_78);
x_84 = l_Lean_instInhabitedExpr;
x_85 = lean_panic_fn(x_84, x_83);
lean_ctor_set(x_54, 0, x_85);
return x_54;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_86 = lean_ctor_get(x_54, 1);
lean_inc(x_86);
lean_dec(x_54);
x_87 = lean_mk_string("Lean.Expr");
x_88 = lean_mk_string("Lean.Expr.updateProj!");
x_89 = lean_unsigned_to_nat(895u);
x_90 = lean_unsigned_to_nat(20u);
x_91 = lean_mk_string("proj expected");
x_92 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_87, x_88, x_89, x_90, x_91);
lean_dec(x_91);
lean_dec(x_88);
lean_dec(x_87);
x_93 = l_Lean_instInhabitedExpr;
x_94 = lean_panic_fn(x_93, x_92);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_86);
return x_95;
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_1);
x_96 = !lean_is_exclusive(x_54);
if (x_96 == 0)
{
return x_54;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_54, 0);
x_98 = lean_ctor_get(x_54, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_54);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
}
}
lean_object* l_Lean_mkFreshId___at_Lean_Meta_Closure_collectExprAux___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_mkFreshId___at_Lean_Meta_Closure_collectExprAux___spec__1___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_mkFreshId___at_Lean_Meta_Closure_collectExprAux___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_mkFreshId___at_Lean_Meta_Closure_collectExprAux___spec__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_List_mapM___at_Lean_Meta_Closure_collectExprAux___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_mapM___at_Lean_Meta_Closure_collectExprAux___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_Closure_collectExprAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_Closure_collectExprAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_Closure_collectExpr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_9 = l_Lean_Meta_Closure_preprocess(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_58; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
if (lean_is_exclusive(x_9)) {
 lean_ctor_release(x_9, 0);
 lean_ctor_release(x_9, 1);
 x_12 = x_9;
} else {
 lean_dec_ref(x_9);
 x_12 = lean_box(0);
}
x_58 = l_Lean_Expr_hasLevelParam(x_10);
if (x_58 == 0)
{
uint8_t x_59; 
x_59 = l_Lean_Expr_hasFVar(x_10);
if (x_59 == 0)
{
uint8_t x_60; 
x_60 = l_Lean_Expr_hasMVar(x_10);
if (x_60 == 0)
{
lean_object* x_61; 
lean_dec(x_12);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_10);
lean_ctor_set(x_61, 1, x_11);
return x_61;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_62 = lean_st_ref_get(x_7, x_11);
x_63 = lean_ctor_get(x_62, 1);
lean_inc(x_63);
lean_dec(x_62);
x_64 = lean_st_ref_get(x_3, x_63);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_13 = x_65;
x_14 = x_66;
goto block_57;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_67 = lean_st_ref_get(x_7, x_11);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
lean_dec(x_67);
x_69 = lean_st_ref_get(x_3, x_68);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_13 = x_70;
x_14 = x_71;
goto block_57;
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_72 = lean_st_ref_get(x_7, x_11);
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_dec(x_72);
x_74 = lean_st_ref_get(x_3, x_73);
x_75 = lean_ctor_get(x_74, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_74, 1);
lean_inc(x_76);
lean_dec(x_74);
x_13 = x_75;
x_14 = x_76;
goto block_57;
}
block_57:
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Std_HashMapImp_find_x3f___at_Lean_MetavarContext_instantiateExprMVars___spec__1(x_15, x_10);
lean_dec(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
lean_dec(x_12);
lean_inc(x_7);
lean_inc(x_10);
x_17 = l_Lean_Meta_Closure_collectExprAux(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_st_ref_get(x_7, x_19);
lean_dec(x_7);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_st_ref_take(x_3, x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = !lean_is_exclusive(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_18);
x_27 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_26, x_10, x_18);
lean_ctor_set(x_23, 1, x_27);
x_28 = lean_st_ref_set(x_3, x_23, x_24);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_28, 0);
lean_dec(x_30);
lean_ctor_set(x_28, 0, x_18);
return x_28;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_18);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_33 = lean_ctor_get(x_23, 0);
x_34 = lean_ctor_get(x_23, 1);
x_35 = lean_ctor_get(x_23, 2);
x_36 = lean_ctor_get(x_23, 3);
x_37 = lean_ctor_get(x_23, 4);
x_38 = lean_ctor_get(x_23, 5);
x_39 = lean_ctor_get(x_23, 6);
x_40 = lean_ctor_get(x_23, 7);
x_41 = lean_ctor_get(x_23, 8);
x_42 = lean_ctor_get(x_23, 9);
x_43 = lean_ctor_get(x_23, 10);
x_44 = lean_ctor_get(x_23, 11);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_23);
lean_inc(x_18);
x_45 = l_Std_HashMapImp_insert___at_Lean_MetavarContext_instantiateExprMVars___spec__3(x_34, x_10, x_18);
x_46 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_46, 0, x_33);
lean_ctor_set(x_46, 1, x_45);
lean_ctor_set(x_46, 2, x_35);
lean_ctor_set(x_46, 3, x_36);
lean_ctor_set(x_46, 4, x_37);
lean_ctor_set(x_46, 5, x_38);
lean_ctor_set(x_46, 6, x_39);
lean_ctor_set(x_46, 7, x_40);
lean_ctor_set(x_46, 8, x_41);
lean_ctor_set(x_46, 9, x_42);
lean_ctor_set(x_46, 10, x_43);
lean_ctor_set(x_46, 11, x_44);
x_47 = lean_st_ref_set(x_3, x_46, x_24);
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_49 = x_47;
} else {
 lean_dec_ref(x_47);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_18);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
else
{
uint8_t x_51; 
lean_dec(x_10);
lean_dec(x_7);
x_51 = !lean_is_exclusive(x_17);
if (x_51 == 0)
{
return x_17;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_17, 0);
x_53 = lean_ctor_get(x_17, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_17);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_55 = lean_ctor_get(x_16, 0);
lean_inc(x_55);
lean_dec(x_16);
if (lean_is_scalar(x_12)) {
 x_56 = lean_alloc_ctor(0, 2, 0);
} else {
 x_56 = x_12;
}
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_14);
return x_56;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_77 = !lean_is_exclusive(x_9);
if (x_77 == 0)
{
return x_9;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_9, 0);
x_79 = lean_ctor_get(x_9, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_9);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
}
lean_object* l_Lean_Meta_Closure_collectExpr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_Closure_collectExpr(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_Closure_pickNextToProcessAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_3);
x_6 = lean_nat_dec_lt(x_2, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_8 = lean_array_fget(x_3, x_2);
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_inc(x_1);
x_10 = l_Lean_LocalContext_get_x21(x_1, x_9);
x_11 = l_Lean_LocalDecl_index(x_10);
lean_dec(x_10);
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_inc(x_1);
x_13 = l_Lean_LocalContext_get_x21(x_1, x_12);
x_14 = l_Lean_LocalDecl_index(x_13);
lean_dec(x_13);
x_15 = lean_nat_dec_lt(x_11, x_14);
lean_dec(x_14);
lean_dec(x_11);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_8);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_2, x_16);
lean_dec(x_2);
x_2 = x_17;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_2, x_19);
x_21 = lean_array_fset(x_3, x_2, x_4);
lean_dec(x_2);
x_2 = x_20;
x_3 = x_21;
x_4 = x_8;
goto _start;
}
}
}
}
lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Closure_pickNextToProcess_x3f_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_back___at_Lean_Meta_Closure_pickNextToProcess_x3f___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_2, x_3);
lean_dec(x_2);
x_5 = l_Lean_Meta_Closure_instInhabitedToProcessElement;
x_6 = lean_array_get(x_5, x_1, x_4);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_ctor_get(x_2, 1);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_st_ref_get(x_5, x_6);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_st_ref_get(x_1, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = lean_ctor_get(x_12, 11);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Array_isEmpty___rarg(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
lean_free_object(x_10);
x_16 = lean_st_ref_get(x_5, x_13);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_st_ref_take(x_1, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = !lean_is_exclusive(x_19);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_22 = lean_ctor_get(x_19, 11);
x_23 = l_Array_back___at_Lean_Meta_Closure_pickNextToProcess_x3f___spec__1(x_22);
x_24 = lean_array_pop(x_22);
x_25 = lean_unsigned_to_nat(0u);
x_26 = l_Lean_Meta_Closure_pickNextToProcessAux(x_7, x_25, x_24, x_23);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_19, 11, x_28);
x_30 = lean_st_ref_set(x_1, x_19, x_20);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_30, 0);
lean_dec(x_32);
lean_ctor_set(x_30, 0, x_29);
return x_30;
}
else
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_35 = lean_ctor_get(x_19, 0);
x_36 = lean_ctor_get(x_19, 1);
x_37 = lean_ctor_get(x_19, 2);
x_38 = lean_ctor_get(x_19, 3);
x_39 = lean_ctor_get(x_19, 4);
x_40 = lean_ctor_get(x_19, 5);
x_41 = lean_ctor_get(x_19, 6);
x_42 = lean_ctor_get(x_19, 7);
x_43 = lean_ctor_get(x_19, 8);
x_44 = lean_ctor_get(x_19, 9);
x_45 = lean_ctor_get(x_19, 10);
x_46 = lean_ctor_get(x_19, 11);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_19);
x_47 = l_Array_back___at_Lean_Meta_Closure_pickNextToProcess_x3f___spec__1(x_46);
x_48 = lean_array_pop(x_46);
x_49 = lean_unsigned_to_nat(0u);
x_50 = l_Lean_Meta_Closure_pickNextToProcessAux(x_7, x_49, x_48, x_47);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_53, 0, x_51);
x_54 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_54, 0, x_35);
lean_ctor_set(x_54, 1, x_36);
lean_ctor_set(x_54, 2, x_37);
lean_ctor_set(x_54, 3, x_38);
lean_ctor_set(x_54, 4, x_39);
lean_ctor_set(x_54, 5, x_40);
lean_ctor_set(x_54, 6, x_41);
lean_ctor_set(x_54, 7, x_42);
lean_ctor_set(x_54, 8, x_43);
lean_ctor_set(x_54, 9, x_44);
lean_ctor_set(x_54, 10, x_45);
lean_ctor_set(x_54, 11, x_52);
x_55 = lean_st_ref_set(x_1, x_54, x_20);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
if (lean_is_exclusive(x_55)) {
 lean_ctor_release(x_55, 0);
 lean_ctor_release(x_55, 1);
 x_57 = x_55;
} else {
 lean_dec_ref(x_55);
 x_57 = lean_box(0);
}
if (lean_is_scalar(x_57)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_57;
}
lean_ctor_set(x_58, 0, x_53);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
else
{
lean_object* x_59; 
lean_dec(x_7);
x_59 = lean_box(0);
lean_ctor_set(x_10, 0, x_59);
return x_10;
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_ctor_get(x_10, 0);
x_61 = lean_ctor_get(x_10, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_10);
x_62 = lean_ctor_get(x_60, 11);
lean_inc(x_62);
lean_dec(x_60);
x_63 = l_Array_isEmpty___rarg(x_62);
lean_dec(x_62);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_64 = lean_st_ref_get(x_5, x_61);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = lean_st_ref_take(x_1, x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_ctor_get(x_67, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_67, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_67, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_67, 3);
lean_inc(x_72);
x_73 = lean_ctor_get(x_67, 4);
lean_inc(x_73);
x_74 = lean_ctor_get(x_67, 5);
lean_inc(x_74);
x_75 = lean_ctor_get(x_67, 6);
lean_inc(x_75);
x_76 = lean_ctor_get(x_67, 7);
lean_inc(x_76);
x_77 = lean_ctor_get(x_67, 8);
lean_inc(x_77);
x_78 = lean_ctor_get(x_67, 9);
lean_inc(x_78);
x_79 = lean_ctor_get(x_67, 10);
lean_inc(x_79);
x_80 = lean_ctor_get(x_67, 11);
lean_inc(x_80);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 lean_ctor_release(x_67, 2);
 lean_ctor_release(x_67, 3);
 lean_ctor_release(x_67, 4);
 lean_ctor_release(x_67, 5);
 lean_ctor_release(x_67, 6);
 lean_ctor_release(x_67, 7);
 lean_ctor_release(x_67, 8);
 lean_ctor_release(x_67, 9);
 lean_ctor_release(x_67, 10);
 lean_ctor_release(x_67, 11);
 x_81 = x_67;
} else {
 lean_dec_ref(x_67);
 x_81 = lean_box(0);
}
x_82 = l_Array_back___at_Lean_Meta_Closure_pickNextToProcess_x3f___spec__1(x_80);
x_83 = lean_array_pop(x_80);
x_84 = lean_unsigned_to_nat(0u);
x_85 = l_Lean_Meta_Closure_pickNextToProcessAux(x_7, x_84, x_83, x_82);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec(x_85);
x_88 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_88, 0, x_86);
if (lean_is_scalar(x_81)) {
 x_89 = lean_alloc_ctor(0, 12, 0);
} else {
 x_89 = x_81;
}
lean_ctor_set(x_89, 0, x_69);
lean_ctor_set(x_89, 1, x_70);
lean_ctor_set(x_89, 2, x_71);
lean_ctor_set(x_89, 3, x_72);
lean_ctor_set(x_89, 4, x_73);
lean_ctor_set(x_89, 5, x_74);
lean_ctor_set(x_89, 6, x_75);
lean_ctor_set(x_89, 7, x_76);
lean_ctor_set(x_89, 8, x_77);
lean_ctor_set(x_89, 9, x_78);
lean_ctor_set(x_89, 10, x_79);
lean_ctor_set(x_89, 11, x_87);
x_90 = lean_st_ref_set(x_1, x_89, x_68);
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_92 = x_90;
} else {
 lean_dec_ref(x_90);
 x_92 = lean_box(0);
}
if (lean_is_scalar(x_92)) {
 x_93 = lean_alloc_ctor(0, 2, 0);
} else {
 x_93 = x_92;
}
lean_ctor_set(x_93, 0, x_88);
lean_ctor_set(x_93, 1, x_91);
return x_93;
}
else
{
lean_object* x_94; lean_object* x_95; 
lean_dec(x_7);
x_94 = lean_box(0);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_61);
return x_95;
}
}
}
}
lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Closure_pickNextToProcess_x3f___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Array_back___at_Lean_Meta_Closure_pickNextToProcess_x3f___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_back___at_Lean_Meta_Closure_pickNextToProcess_x3f___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_Closure_pickNextToProcess_x3f___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_Closure_pickNextToProcess_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Meta_Closure_pickNextToProcess_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_Closure_pushFVarArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_take(x_3, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_12, 10);
x_16 = lean_array_push(x_15, x_1);
lean_ctor_set(x_12, 10, x_16);
x_17 = lean_st_ref_set(x_3, x_12, x_13);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_24 = lean_ctor_get(x_12, 0);
x_25 = lean_ctor_get(x_12, 1);
x_26 = lean_ctor_get(x_12, 2);
x_27 = lean_ctor_get(x_12, 3);
x_28 = lean_ctor_get(x_12, 4);
x_29 = lean_ctor_get(x_12, 5);
x_30 = lean_ctor_get(x_12, 6);
x_31 = lean_ctor_get(x_12, 7);
x_32 = lean_ctor_get(x_12, 8);
x_33 = lean_ctor_get(x_12, 9);
x_34 = lean_ctor_get(x_12, 10);
x_35 = lean_ctor_get(x_12, 11);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_12);
x_36 = lean_array_push(x_34, x_1);
x_37 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_37, 0, x_24);
lean_ctor_set(x_37, 1, x_25);
lean_ctor_set(x_37, 2, x_26);
lean_ctor_set(x_37, 3, x_27);
lean_ctor_set(x_37, 4, x_28);
lean_ctor_set(x_37, 5, x_29);
lean_ctor_set(x_37, 6, x_30);
lean_ctor_set(x_37, 7, x_31);
lean_ctor_set(x_37, 8, x_32);
lean_ctor_set(x_37, 9, x_33);
lean_ctor_set(x_37, 10, x_36);
lean_ctor_set(x_37, 11, x_35);
x_38 = lean_st_ref_set(x_3, x_37, x_13);
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_40 = x_38;
} else {
 lean_dec_ref(x_38);
 x_40 = lean_box(0);
}
x_41 = lean_box(0);
if (lean_is_scalar(x_40)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_40;
}
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_39);
return x_42;
}
}
}
lean_object* l_Lean_Meta_Closure_pushFVarArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_Closure_pushFVarArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Meta_Closure_pushLocalDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
x_12 = l_Lean_Meta_Closure_collectExpr(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_get(x_10, x_14);
lean_dec(x_10);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_ref_take(x_6, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_21 = lean_ctor_get(x_18, 5);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_1);
lean_ctor_set(x_23, 2, x_2);
lean_ctor_set(x_23, 3, x_13);
lean_ctor_set_uint8(x_23, sizeof(void*)*4, x_4);
x_24 = lean_array_push(x_21, x_23);
lean_ctor_set(x_18, 5, x_24);
x_25 = lean_st_ref_set(x_6, x_18, x_19);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_25, 0);
lean_dec(x_27);
x_28 = lean_box(0);
lean_ctor_set(x_25, 0, x_28);
return x_25;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_25, 1);
lean_inc(x_29);
lean_dec(x_25);
x_30 = lean_box(0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_32 = lean_ctor_get(x_18, 0);
x_33 = lean_ctor_get(x_18, 1);
x_34 = lean_ctor_get(x_18, 2);
x_35 = lean_ctor_get(x_18, 3);
x_36 = lean_ctor_get(x_18, 4);
x_37 = lean_ctor_get(x_18, 5);
x_38 = lean_ctor_get(x_18, 6);
x_39 = lean_ctor_get(x_18, 7);
x_40 = lean_ctor_get(x_18, 8);
x_41 = lean_ctor_get(x_18, 9);
x_42 = lean_ctor_get(x_18, 10);
x_43 = lean_ctor_get(x_18, 11);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_inc(x_36);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_18);
x_44 = lean_unsigned_to_nat(0u);
x_45 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_1);
lean_ctor_set(x_45, 2, x_2);
lean_ctor_set(x_45, 3, x_13);
lean_ctor_set_uint8(x_45, sizeof(void*)*4, x_4);
x_46 = lean_array_push(x_37, x_45);
x_47 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_47, 0, x_32);
lean_ctor_set(x_47, 1, x_33);
lean_ctor_set(x_47, 2, x_34);
lean_ctor_set(x_47, 3, x_35);
lean_ctor_set(x_47, 4, x_36);
lean_ctor_set(x_47, 5, x_46);
lean_ctor_set(x_47, 6, x_38);
lean_ctor_set(x_47, 7, x_39);
lean_ctor_set(x_47, 8, x_40);
lean_ctor_set(x_47, 9, x_41);
lean_ctor_set(x_47, 10, x_42);
lean_ctor_set(x_47, 11, x_43);
x_48 = lean_st_ref_set(x_6, x_47, x_19);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_50 = x_48;
} else {
 lean_dec_ref(x_48);
 x_50 = lean_box(0);
}
x_51 = lean_box(0);
if (lean_is_scalar(x_50)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_50;
}
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_49);
return x_52;
}
}
else
{
uint8_t x_53; 
lean_dec(x_10);
lean_dec(x_2);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_12);
if (x_53 == 0)
{
return x_12;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_12, 0);
x_55 = lean_ctor_get(x_12, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_12);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
lean_object* l_Lean_Meta_Closure_pushLocalDecl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_4);
lean_dec(x_4);
x_13 = l_Lean_Meta_Closure_pushLocalDecl(x_1, x_2, x_3, x_12, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
}
lean_object* l_Lean_Meta_Closure_process_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
lean_dec(x_1);
x_9 = lean_box(x_8);
x_10 = lean_apply_5(x_2, x_4, x_5, x_6, x_7, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_2);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 3);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 4);
lean_inc(x_15);
x_16 = lean_ctor_get_uint8(x_1, sizeof(void*)*5);
lean_dec(x_1);
x_17 = lean_box(x_16);
x_18 = lean_apply_6(x_3, x_11, x_12, x_13, x_14, x_15, x_17);
return x_18;
}
}
}
lean_object* l_Lean_Meta_Closure_process_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Closure_process_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Closure_process_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Meta_Closure_process_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Closure_process_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_process___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_4 < x_3;
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_1);
x_7 = x_5;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_8 = lean_array_uget(x_5, x_4);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_uset(x_5, x_4, x_9);
x_11 = x_8;
lean_inc(x_1);
x_12 = l_Lean_replaceFVarIdAtLocalDecl(x_1, x_2, x_11);
x_13 = 1;
x_14 = x_4 + x_13;
x_15 = x_12;
x_16 = lean_array_uset(x_10, x_4, x_15);
x_4 = x_14;
x_5 = x_16;
goto _start;
}
}
}
lean_object* l_Lean_Meta_Closure_process(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
lean_inc(x_3);
x_8 = l_Lean_Meta_Closure_pickNextToProcess_x3f___rarg(x_2, x_3, x_4, x_5, x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_8, 0);
lean_dec(x_11);
x_12 = lean_box(0);
lean_ctor_set(x_8, 0, x_12);
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec(x_9);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_dec(x_8);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_dec(x_16);
lean_inc(x_3);
lean_inc(x_18);
x_20 = l_Lean_Meta_getLocalDecl(x_18, x_3, x_4, x_5, x_6, x_17);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_ctor_get(x_21, 2);
lean_inc(x_23);
x_24 = lean_ctor_get(x_21, 3);
lean_inc(x_24);
x_25 = lean_ctor_get_uint8(x_21, sizeof(void*)*4);
lean_dec(x_21);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_26 = l_Lean_Meta_Closure_pushLocalDecl(x_19, x_23, x_24, x_25, x_1, x_2, x_3, x_4, x_5, x_6, x_22);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = l_Lean_mkFVar(x_18);
x_29 = l_Lean_Meta_Closure_pushFVarArg(x_28, x_1, x_2, x_3, x_4, x_5, x_6, x_27);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_7 = x_30;
goto _start;
}
else
{
uint8_t x_32; 
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_32 = !lean_is_exclusive(x_26);
if (x_32 == 0)
{
return x_26;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_26, 0);
x_34 = lean_ctor_get(x_26, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_26);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_ctor_get(x_20, 1);
lean_inc(x_36);
lean_dec(x_20);
x_37 = !lean_is_exclusive(x_21);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_38 = lean_ctor_get(x_21, 2);
x_39 = lean_ctor_get(x_21, 3);
x_40 = lean_ctor_get(x_21, 4);
x_41 = lean_ctor_get(x_21, 1);
lean_dec(x_41);
x_42 = lean_ctor_get(x_21, 0);
lean_dec(x_42);
x_43 = l_Lean_Meta_getZetaFVarIds___rarg(x_4, x_5, x_6, x_36);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = l_Lean_NameSet_contains(x_44, x_18);
lean_dec(x_44);
if (x_46 == 0)
{
uint8_t x_47; lean_object* x_48; 
lean_free_object(x_21);
lean_dec(x_40);
x_47 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_48 = l_Lean_Meta_Closure_pushLocalDecl(x_19, x_38, x_39, x_47, x_1, x_2, x_3, x_4, x_5, x_6, x_45);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
lean_dec(x_48);
x_50 = l_Lean_mkFVar(x_18);
x_51 = l_Lean_Meta_Closure_pushFVarArg(x_50, x_1, x_2, x_3, x_4, x_5, x_6, x_49);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_7 = x_52;
goto _start;
}
else
{
uint8_t x_54; 
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_54 = !lean_is_exclusive(x_48);
if (x_54 == 0)
{
return x_48;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_48, 0);
x_56 = lean_ctor_get(x_48, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_48);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; 
lean_dec(x_18);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_58 = l_Lean_Meta_Closure_collectExpr(x_39, x_1, x_2, x_3, x_4, x_5, x_6, x_45);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_61 = l_Lean_Meta_Closure_collectExpr(x_40, x_1, x_2, x_3, x_4, x_5, x_6, x_60);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_st_ref_get(x_6, x_63);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = lean_st_ref_take(x_2, x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_69 = !lean_is_exclusive(x_67);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_70 = lean_ctor_get(x_67, 7);
x_71 = lean_unsigned_to_nat(0u);
x_72 = 0;
lean_inc(x_62);
lean_inc(x_19);
lean_ctor_set(x_21, 4, x_62);
lean_ctor_set(x_21, 3, x_59);
lean_ctor_set(x_21, 1, x_19);
lean_ctor_set(x_21, 0, x_71);
lean_ctor_set_uint8(x_21, sizeof(void*)*5, x_72);
x_73 = lean_array_push(x_70, x_21);
lean_ctor_set(x_67, 7, x_73);
x_74 = lean_st_ref_set(x_2, x_67, x_68);
x_75 = lean_ctor_get(x_74, 1);
lean_inc(x_75);
lean_dec(x_74);
x_76 = lean_st_ref_get(x_6, x_75);
x_77 = lean_ctor_get(x_76, 1);
lean_inc(x_77);
lean_dec(x_76);
x_78 = lean_st_ref_take(x_2, x_77);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = !lean_is_exclusive(x_79);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; size_t x_84; size_t x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_82 = lean_ctor_get(x_79, 5);
x_83 = lean_array_get_size(x_82);
x_84 = lean_usize_of_nat(x_83);
lean_dec(x_83);
x_85 = 0;
x_86 = x_82;
x_87 = l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_process___spec__1(x_19, x_62, x_84, x_85, x_86);
lean_dec(x_62);
x_88 = x_87;
lean_ctor_set(x_79, 5, x_88);
x_89 = lean_st_ref_set(x_2, x_79, x_80);
x_90 = lean_ctor_get(x_89, 1);
lean_inc(x_90);
lean_dec(x_89);
x_7 = x_90;
goto _start;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; size_t x_105; size_t x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_92 = lean_ctor_get(x_79, 0);
x_93 = lean_ctor_get(x_79, 1);
x_94 = lean_ctor_get(x_79, 2);
x_95 = lean_ctor_get(x_79, 3);
x_96 = lean_ctor_get(x_79, 4);
x_97 = lean_ctor_get(x_79, 5);
x_98 = lean_ctor_get(x_79, 6);
x_99 = lean_ctor_get(x_79, 7);
x_100 = lean_ctor_get(x_79, 8);
x_101 = lean_ctor_get(x_79, 9);
x_102 = lean_ctor_get(x_79, 10);
x_103 = lean_ctor_get(x_79, 11);
lean_inc(x_103);
lean_inc(x_102);
lean_inc(x_101);
lean_inc(x_100);
lean_inc(x_99);
lean_inc(x_98);
lean_inc(x_97);
lean_inc(x_96);
lean_inc(x_95);
lean_inc(x_94);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_79);
x_104 = lean_array_get_size(x_97);
x_105 = lean_usize_of_nat(x_104);
lean_dec(x_104);
x_106 = 0;
x_107 = x_97;
x_108 = l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_process___spec__1(x_19, x_62, x_105, x_106, x_107);
lean_dec(x_62);
x_109 = x_108;
x_110 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_110, 0, x_92);
lean_ctor_set(x_110, 1, x_93);
lean_ctor_set(x_110, 2, x_94);
lean_ctor_set(x_110, 3, x_95);
lean_ctor_set(x_110, 4, x_96);
lean_ctor_set(x_110, 5, x_109);
lean_ctor_set(x_110, 6, x_98);
lean_ctor_set(x_110, 7, x_99);
lean_ctor_set(x_110, 8, x_100);
lean_ctor_set(x_110, 9, x_101);
lean_ctor_set(x_110, 10, x_102);
lean_ctor_set(x_110, 11, x_103);
x_111 = lean_st_ref_set(x_2, x_110, x_80);
x_112 = lean_ctor_get(x_111, 1);
lean_inc(x_112);
lean_dec(x_111);
x_7 = x_112;
goto _start;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; size_t x_151; size_t x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_114 = lean_ctor_get(x_67, 0);
x_115 = lean_ctor_get(x_67, 1);
x_116 = lean_ctor_get(x_67, 2);
x_117 = lean_ctor_get(x_67, 3);
x_118 = lean_ctor_get(x_67, 4);
x_119 = lean_ctor_get(x_67, 5);
x_120 = lean_ctor_get(x_67, 6);
x_121 = lean_ctor_get(x_67, 7);
x_122 = lean_ctor_get(x_67, 8);
x_123 = lean_ctor_get(x_67, 9);
x_124 = lean_ctor_get(x_67, 10);
x_125 = lean_ctor_get(x_67, 11);
lean_inc(x_125);
lean_inc(x_124);
lean_inc(x_123);
lean_inc(x_122);
lean_inc(x_121);
lean_inc(x_120);
lean_inc(x_119);
lean_inc(x_118);
lean_inc(x_117);
lean_inc(x_116);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_67);
x_126 = lean_unsigned_to_nat(0u);
x_127 = 0;
lean_inc(x_62);
lean_inc(x_19);
lean_ctor_set(x_21, 4, x_62);
lean_ctor_set(x_21, 3, x_59);
lean_ctor_set(x_21, 1, x_19);
lean_ctor_set(x_21, 0, x_126);
lean_ctor_set_uint8(x_21, sizeof(void*)*5, x_127);
x_128 = lean_array_push(x_121, x_21);
x_129 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_129, 0, x_114);
lean_ctor_set(x_129, 1, x_115);
lean_ctor_set(x_129, 2, x_116);
lean_ctor_set(x_129, 3, x_117);
lean_ctor_set(x_129, 4, x_118);
lean_ctor_set(x_129, 5, x_119);
lean_ctor_set(x_129, 6, x_120);
lean_ctor_set(x_129, 7, x_128);
lean_ctor_set(x_129, 8, x_122);
lean_ctor_set(x_129, 9, x_123);
lean_ctor_set(x_129, 10, x_124);
lean_ctor_set(x_129, 11, x_125);
x_130 = lean_st_ref_set(x_2, x_129, x_68);
x_131 = lean_ctor_get(x_130, 1);
lean_inc(x_131);
lean_dec(x_130);
x_132 = lean_st_ref_get(x_6, x_131);
x_133 = lean_ctor_get(x_132, 1);
lean_inc(x_133);
lean_dec(x_132);
x_134 = lean_st_ref_take(x_2, x_133);
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_134, 1);
lean_inc(x_136);
lean_dec(x_134);
x_137 = lean_ctor_get(x_135, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_135, 1);
lean_inc(x_138);
x_139 = lean_ctor_get(x_135, 2);
lean_inc(x_139);
x_140 = lean_ctor_get(x_135, 3);
lean_inc(x_140);
x_141 = lean_ctor_get(x_135, 4);
lean_inc(x_141);
x_142 = lean_ctor_get(x_135, 5);
lean_inc(x_142);
x_143 = lean_ctor_get(x_135, 6);
lean_inc(x_143);
x_144 = lean_ctor_get(x_135, 7);
lean_inc(x_144);
x_145 = lean_ctor_get(x_135, 8);
lean_inc(x_145);
x_146 = lean_ctor_get(x_135, 9);
lean_inc(x_146);
x_147 = lean_ctor_get(x_135, 10);
lean_inc(x_147);
x_148 = lean_ctor_get(x_135, 11);
lean_inc(x_148);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 lean_ctor_release(x_135, 1);
 lean_ctor_release(x_135, 2);
 lean_ctor_release(x_135, 3);
 lean_ctor_release(x_135, 4);
 lean_ctor_release(x_135, 5);
 lean_ctor_release(x_135, 6);
 lean_ctor_release(x_135, 7);
 lean_ctor_release(x_135, 8);
 lean_ctor_release(x_135, 9);
 lean_ctor_release(x_135, 10);
 lean_ctor_release(x_135, 11);
 x_149 = x_135;
} else {
 lean_dec_ref(x_135);
 x_149 = lean_box(0);
}
x_150 = lean_array_get_size(x_142);
x_151 = lean_usize_of_nat(x_150);
lean_dec(x_150);
x_152 = 0;
x_153 = x_142;
x_154 = l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_process___spec__1(x_19, x_62, x_151, x_152, x_153);
lean_dec(x_62);
x_155 = x_154;
if (lean_is_scalar(x_149)) {
 x_156 = lean_alloc_ctor(0, 12, 0);
} else {
 x_156 = x_149;
}
lean_ctor_set(x_156, 0, x_137);
lean_ctor_set(x_156, 1, x_138);
lean_ctor_set(x_156, 2, x_139);
lean_ctor_set(x_156, 3, x_140);
lean_ctor_set(x_156, 4, x_141);
lean_ctor_set(x_156, 5, x_155);
lean_ctor_set(x_156, 6, x_143);
lean_ctor_set(x_156, 7, x_144);
lean_ctor_set(x_156, 8, x_145);
lean_ctor_set(x_156, 9, x_146);
lean_ctor_set(x_156, 10, x_147);
lean_ctor_set(x_156, 11, x_148);
x_157 = lean_st_ref_set(x_2, x_156, x_136);
x_158 = lean_ctor_get(x_157, 1);
lean_inc(x_158);
lean_dec(x_157);
x_7 = x_158;
goto _start;
}
}
else
{
uint8_t x_160; 
lean_dec(x_59);
lean_free_object(x_21);
lean_dec(x_38);
lean_dec(x_19);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_160 = !lean_is_exclusive(x_61);
if (x_160 == 0)
{
return x_61;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_161 = lean_ctor_get(x_61, 0);
x_162 = lean_ctor_get(x_61, 1);
lean_inc(x_162);
lean_inc(x_161);
lean_dec(x_61);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_161);
lean_ctor_set(x_163, 1, x_162);
return x_163;
}
}
}
else
{
uint8_t x_164; 
lean_free_object(x_21);
lean_dec(x_40);
lean_dec(x_38);
lean_dec(x_19);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_164 = !lean_is_exclusive(x_58);
if (x_164 == 0)
{
return x_58;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_165 = lean_ctor_get(x_58, 0);
x_166 = lean_ctor_get(x_58, 1);
lean_inc(x_166);
lean_inc(x_165);
lean_dec(x_58);
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
}
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; uint8_t x_174; 
x_168 = lean_ctor_get(x_21, 2);
x_169 = lean_ctor_get(x_21, 3);
x_170 = lean_ctor_get(x_21, 4);
lean_inc(x_170);
lean_inc(x_169);
lean_inc(x_168);
lean_dec(x_21);
x_171 = l_Lean_Meta_getZetaFVarIds___rarg(x_4, x_5, x_6, x_36);
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_171, 1);
lean_inc(x_173);
lean_dec(x_171);
x_174 = l_Lean_NameSet_contains(x_172, x_18);
lean_dec(x_172);
if (x_174 == 0)
{
uint8_t x_175; lean_object* x_176; 
lean_dec(x_170);
x_175 = 0;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_176 = l_Lean_Meta_Closure_pushLocalDecl(x_19, x_168, x_169, x_175, x_1, x_2, x_3, x_4, x_5, x_6, x_173);
if (lean_obj_tag(x_176) == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_177 = lean_ctor_get(x_176, 1);
lean_inc(x_177);
lean_dec(x_176);
x_178 = l_Lean_mkFVar(x_18);
x_179 = l_Lean_Meta_Closure_pushFVarArg(x_178, x_1, x_2, x_3, x_4, x_5, x_6, x_177);
x_180 = lean_ctor_get(x_179, 1);
lean_inc(x_180);
lean_dec(x_179);
x_7 = x_180;
goto _start;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; 
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_182 = lean_ctor_get(x_176, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_176, 1);
lean_inc(x_183);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_184 = x_176;
} else {
 lean_dec_ref(x_176);
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
lean_object* x_186; 
lean_dec(x_18);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_186 = l_Lean_Meta_Closure_collectExpr(x_169, x_1, x_2, x_3, x_4, x_5, x_6, x_173);
if (lean_obj_tag(x_186) == 0)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_187 = lean_ctor_get(x_186, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_186, 1);
lean_inc(x_188);
lean_dec(x_186);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_189 = l_Lean_Meta_Closure_collectExpr(x_170, x_1, x_2, x_3, x_4, x_5, x_6, x_188);
if (lean_obj_tag(x_189) == 0)
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; uint8_t x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; size_t x_236; size_t x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_190 = lean_ctor_get(x_189, 0);
lean_inc(x_190);
x_191 = lean_ctor_get(x_189, 1);
lean_inc(x_191);
lean_dec(x_189);
x_192 = lean_st_ref_get(x_6, x_191);
x_193 = lean_ctor_get(x_192, 1);
lean_inc(x_193);
lean_dec(x_192);
x_194 = lean_st_ref_take(x_2, x_193);
x_195 = lean_ctor_get(x_194, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_194, 1);
lean_inc(x_196);
lean_dec(x_194);
x_197 = lean_ctor_get(x_195, 0);
lean_inc(x_197);
x_198 = lean_ctor_get(x_195, 1);
lean_inc(x_198);
x_199 = lean_ctor_get(x_195, 2);
lean_inc(x_199);
x_200 = lean_ctor_get(x_195, 3);
lean_inc(x_200);
x_201 = lean_ctor_get(x_195, 4);
lean_inc(x_201);
x_202 = lean_ctor_get(x_195, 5);
lean_inc(x_202);
x_203 = lean_ctor_get(x_195, 6);
lean_inc(x_203);
x_204 = lean_ctor_get(x_195, 7);
lean_inc(x_204);
x_205 = lean_ctor_get(x_195, 8);
lean_inc(x_205);
x_206 = lean_ctor_get(x_195, 9);
lean_inc(x_206);
x_207 = lean_ctor_get(x_195, 10);
lean_inc(x_207);
x_208 = lean_ctor_get(x_195, 11);
lean_inc(x_208);
if (lean_is_exclusive(x_195)) {
 lean_ctor_release(x_195, 0);
 lean_ctor_release(x_195, 1);
 lean_ctor_release(x_195, 2);
 lean_ctor_release(x_195, 3);
 lean_ctor_release(x_195, 4);
 lean_ctor_release(x_195, 5);
 lean_ctor_release(x_195, 6);
 lean_ctor_release(x_195, 7);
 lean_ctor_release(x_195, 8);
 lean_ctor_release(x_195, 9);
 lean_ctor_release(x_195, 10);
 lean_ctor_release(x_195, 11);
 x_209 = x_195;
} else {
 lean_dec_ref(x_195);
 x_209 = lean_box(0);
}
x_210 = lean_unsigned_to_nat(0u);
x_211 = 0;
lean_inc(x_190);
lean_inc(x_19);
x_212 = lean_alloc_ctor(1, 5, 1);
lean_ctor_set(x_212, 0, x_210);
lean_ctor_set(x_212, 1, x_19);
lean_ctor_set(x_212, 2, x_168);
lean_ctor_set(x_212, 3, x_187);
lean_ctor_set(x_212, 4, x_190);
lean_ctor_set_uint8(x_212, sizeof(void*)*5, x_211);
x_213 = lean_array_push(x_204, x_212);
if (lean_is_scalar(x_209)) {
 x_214 = lean_alloc_ctor(0, 12, 0);
} else {
 x_214 = x_209;
}
lean_ctor_set(x_214, 0, x_197);
lean_ctor_set(x_214, 1, x_198);
lean_ctor_set(x_214, 2, x_199);
lean_ctor_set(x_214, 3, x_200);
lean_ctor_set(x_214, 4, x_201);
lean_ctor_set(x_214, 5, x_202);
lean_ctor_set(x_214, 6, x_203);
lean_ctor_set(x_214, 7, x_213);
lean_ctor_set(x_214, 8, x_205);
lean_ctor_set(x_214, 9, x_206);
lean_ctor_set(x_214, 10, x_207);
lean_ctor_set(x_214, 11, x_208);
x_215 = lean_st_ref_set(x_2, x_214, x_196);
x_216 = lean_ctor_get(x_215, 1);
lean_inc(x_216);
lean_dec(x_215);
x_217 = lean_st_ref_get(x_6, x_216);
x_218 = lean_ctor_get(x_217, 1);
lean_inc(x_218);
lean_dec(x_217);
x_219 = lean_st_ref_take(x_2, x_218);
x_220 = lean_ctor_get(x_219, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_219, 1);
lean_inc(x_221);
lean_dec(x_219);
x_222 = lean_ctor_get(x_220, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_220, 1);
lean_inc(x_223);
x_224 = lean_ctor_get(x_220, 2);
lean_inc(x_224);
x_225 = lean_ctor_get(x_220, 3);
lean_inc(x_225);
x_226 = lean_ctor_get(x_220, 4);
lean_inc(x_226);
x_227 = lean_ctor_get(x_220, 5);
lean_inc(x_227);
x_228 = lean_ctor_get(x_220, 6);
lean_inc(x_228);
x_229 = lean_ctor_get(x_220, 7);
lean_inc(x_229);
x_230 = lean_ctor_get(x_220, 8);
lean_inc(x_230);
x_231 = lean_ctor_get(x_220, 9);
lean_inc(x_231);
x_232 = lean_ctor_get(x_220, 10);
lean_inc(x_232);
x_233 = lean_ctor_get(x_220, 11);
lean_inc(x_233);
if (lean_is_exclusive(x_220)) {
 lean_ctor_release(x_220, 0);
 lean_ctor_release(x_220, 1);
 lean_ctor_release(x_220, 2);
 lean_ctor_release(x_220, 3);
 lean_ctor_release(x_220, 4);
 lean_ctor_release(x_220, 5);
 lean_ctor_release(x_220, 6);
 lean_ctor_release(x_220, 7);
 lean_ctor_release(x_220, 8);
 lean_ctor_release(x_220, 9);
 lean_ctor_release(x_220, 10);
 lean_ctor_release(x_220, 11);
 x_234 = x_220;
} else {
 lean_dec_ref(x_220);
 x_234 = lean_box(0);
}
x_235 = lean_array_get_size(x_227);
x_236 = lean_usize_of_nat(x_235);
lean_dec(x_235);
x_237 = 0;
x_238 = x_227;
x_239 = l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_process___spec__1(x_19, x_190, x_236, x_237, x_238);
lean_dec(x_190);
x_240 = x_239;
if (lean_is_scalar(x_234)) {
 x_241 = lean_alloc_ctor(0, 12, 0);
} else {
 x_241 = x_234;
}
lean_ctor_set(x_241, 0, x_222);
lean_ctor_set(x_241, 1, x_223);
lean_ctor_set(x_241, 2, x_224);
lean_ctor_set(x_241, 3, x_225);
lean_ctor_set(x_241, 4, x_226);
lean_ctor_set(x_241, 5, x_240);
lean_ctor_set(x_241, 6, x_228);
lean_ctor_set(x_241, 7, x_229);
lean_ctor_set(x_241, 8, x_230);
lean_ctor_set(x_241, 9, x_231);
lean_ctor_set(x_241, 10, x_232);
lean_ctor_set(x_241, 11, x_233);
x_242 = lean_st_ref_set(x_2, x_241, x_221);
x_243 = lean_ctor_get(x_242, 1);
lean_inc(x_243);
lean_dec(x_242);
x_7 = x_243;
goto _start;
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; 
lean_dec(x_187);
lean_dec(x_168);
lean_dec(x_19);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_245 = lean_ctor_get(x_189, 0);
lean_inc(x_245);
x_246 = lean_ctor_get(x_189, 1);
lean_inc(x_246);
if (lean_is_exclusive(x_189)) {
 lean_ctor_release(x_189, 0);
 lean_ctor_release(x_189, 1);
 x_247 = x_189;
} else {
 lean_dec_ref(x_189);
 x_247 = lean_box(0);
}
if (lean_is_scalar(x_247)) {
 x_248 = lean_alloc_ctor(1, 2, 0);
} else {
 x_248 = x_247;
}
lean_ctor_set(x_248, 0, x_245);
lean_ctor_set(x_248, 1, x_246);
return x_248;
}
}
else
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
lean_dec(x_170);
lean_dec(x_168);
lean_dec(x_19);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_249 = lean_ctor_get(x_186, 0);
lean_inc(x_249);
x_250 = lean_ctor_get(x_186, 1);
lean_inc(x_250);
if (lean_is_exclusive(x_186)) {
 lean_ctor_release(x_186, 0);
 lean_ctor_release(x_186, 1);
 x_251 = x_186;
} else {
 lean_dec_ref(x_186);
 x_251 = lean_box(0);
}
if (lean_is_scalar(x_251)) {
 x_252 = lean_alloc_ctor(1, 2, 0);
} else {
 x_252 = x_251;
}
lean_ctor_set(x_252, 0, x_249);
lean_ctor_set(x_252, 1, x_250);
return x_252;
}
}
}
}
}
else
{
uint8_t x_253; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_253 = !lean_is_exclusive(x_20);
if (x_253 == 0)
{
return x_20;
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; 
x_254 = lean_ctor_get(x_20, 0);
x_255 = lean_ctor_get(x_20, 1);
lean_inc(x_255);
lean_inc(x_254);
lean_dec(x_20);
x_256 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_256, 0, x_254);
lean_ctor_set(x_256, 1, x_255);
return x_256;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_process___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_process___spec__1(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Meta_Closure_process___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_Closure_process(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_mkBinding___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = l_Lean_LocalDecl_toExpr(x_9);
lean_dec(x_9);
x_11 = 1;
x_12 = x_2 + x_11;
x_13 = x_10;
x_14 = lean_array_uset(x_8, x_2, x_13);
x_2 = x_12;
x_3 = x_14;
goto _start;
}
}
}
lean_object* l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkBinding___spec__2(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_4, x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_4, x_8);
lean_dec(x_4);
x_10 = l_Lean_instInhabitedLocalDecl;
x_11 = lean_array_get(x_10, x_2, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_11, 2);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 3);
lean_inc(x_13);
x_14 = lean_ctor_get_uint8(x_11, sizeof(void*)*4);
lean_dec(x_11);
x_15 = lean_expr_abstract_range(x_13, x_9, x_3);
lean_dec(x_13);
if (x_1 == 0)
{
lean_object* x_16; 
x_16 = l_Lean_mkForall(x_12, x_14, x_15, x_5);
x_4 = x_9;
x_5 = x_16;
goto _start;
}
else
{
lean_object* x_18; 
x_18 = l_Lean_mkLambda(x_12, x_14, x_15, x_5);
x_4 = x_9;
x_5 = x_18;
goto _start;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; uint8_t x_24; 
x_20 = lean_ctor_get(x_11, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_11, 3);
lean_inc(x_21);
x_22 = lean_ctor_get(x_11, 4);
lean_inc(x_22);
x_23 = lean_ctor_get_uint8(x_11, sizeof(void*)*5);
lean_dec(x_11);
x_24 = lean_expr_has_loose_bvar(x_5, x_6);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
x_25 = lean_expr_lower_loose_bvars(x_5, x_8, x_8);
lean_dec(x_5);
x_4 = x_9;
x_5 = x_25;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_expr_abstract_range(x_21, x_9, x_3);
lean_dec(x_21);
x_28 = lean_expr_abstract_range(x_22, x_9, x_3);
lean_dec(x_22);
x_29 = l_Lean_mkLet(x_20, x_27, x_28, x_5, x_23);
x_4 = x_9;
x_5 = x_29;
goto _start;
}
}
}
else
{
lean_dec(x_4);
return x_5;
}
}
}
lean_object* l_Lean_Meta_Closure_mkBinding(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; size_t x_5; size_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_usize_of_nat(x_4);
x_6 = 0;
lean_inc(x_2);
x_7 = x_2;
x_8 = l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_mkBinding___spec__1(x_5, x_6, x_7);
x_9 = x_8;
x_10 = lean_expr_abstract(x_3, x_9);
x_11 = l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkBinding___spec__2(x_1, x_2, x_9, x_4, x_10);
lean_dec(x_9);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_mkBinding___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_mkBinding___spec__1(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkBinding___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkBinding___spec__2(x_6, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_Closure_mkBinding___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Meta_Closure_mkBinding(x_4, x_2, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkLambda___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_3, x_7);
lean_dec(x_3);
x_9 = l_Lean_instInhabitedLocalDecl;
x_10 = lean_array_get(x_9, x_1, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 3);
lean_inc(x_12);
x_13 = lean_ctor_get_uint8(x_10, sizeof(void*)*4);
lean_dec(x_10);
x_14 = lean_expr_abstract_range(x_12, x_8, x_2);
lean_dec(x_12);
x_15 = l_Lean_mkLambda(x_11, x_13, x_14, x_4);
x_3 = x_8;
x_4 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_10, 2);
lean_inc(x_17);
x_18 = lean_ctor_get(x_10, 3);
lean_inc(x_18);
x_19 = lean_ctor_get(x_10, 4);
lean_inc(x_19);
x_20 = lean_ctor_get_uint8(x_10, sizeof(void*)*5);
lean_dec(x_10);
x_21 = lean_expr_has_loose_bvar(x_4, x_5);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
x_22 = lean_expr_lower_loose_bvars(x_4, x_7, x_7);
lean_dec(x_4);
x_3 = x_8;
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_expr_abstract_range(x_18, x_8, x_2);
lean_dec(x_18);
x_25 = lean_expr_abstract_range(x_19, x_8, x_2);
lean_dec(x_19);
x_26 = l_Lean_mkLet(x_17, x_24, x_25, x_4, x_20);
x_3 = x_8;
x_4 = x_26;
goto _start;
}
}
}
else
{
lean_dec(x_3);
return x_4;
}
}
}
lean_object* l_Lean_Meta_Closure_mkLambda(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; size_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_usize_of_nat(x_3);
x_5 = 0;
lean_inc(x_1);
x_6 = x_1;
x_7 = l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_mkBinding___spec__1(x_4, x_5, x_6);
x_8 = x_7;
x_9 = lean_expr_abstract(x_2, x_8);
x_10 = l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkLambda___spec__1(x_1, x_8, x_3, x_9);
lean_dec(x_8);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkLambda___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkLambda___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Meta_Closure_mkLambda___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_Closure_mkLambda(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkForall___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_3, x_7);
lean_dec(x_3);
x_9 = l_Lean_instInhabitedLocalDecl;
x_10 = lean_array_get(x_9, x_1, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 3);
lean_inc(x_12);
x_13 = lean_ctor_get_uint8(x_10, sizeof(void*)*4);
lean_dec(x_10);
x_14 = lean_expr_abstract_range(x_12, x_8, x_2);
lean_dec(x_12);
x_15 = l_Lean_mkForall(x_11, x_13, x_14, x_4);
x_3 = x_8;
x_4 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_10, 2);
lean_inc(x_17);
x_18 = lean_ctor_get(x_10, 3);
lean_inc(x_18);
x_19 = lean_ctor_get(x_10, 4);
lean_inc(x_19);
x_20 = lean_ctor_get_uint8(x_10, sizeof(void*)*5);
lean_dec(x_10);
x_21 = lean_expr_has_loose_bvar(x_4, x_5);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
x_22 = lean_expr_lower_loose_bvars(x_4, x_7, x_7);
lean_dec(x_4);
x_3 = x_8;
x_4 = x_22;
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_expr_abstract_range(x_18, x_8, x_2);
lean_dec(x_18);
x_25 = lean_expr_abstract_range(x_19, x_8, x_2);
lean_dec(x_19);
x_26 = l_Lean_mkLet(x_17, x_24, x_25, x_4, x_20);
x_3 = x_8;
x_4 = x_26;
goto _start;
}
}
}
else
{
lean_dec(x_3);
return x_4;
}
}
}
lean_object* l_Lean_Meta_Closure_mkForall(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; size_t x_4; size_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_usize_of_nat(x_3);
x_5 = 0;
lean_inc(x_1);
x_6 = x_1;
x_7 = l_Array_mapMUnsafe_map___at_Lean_Meta_Closure_mkBinding___spec__1(x_4, x_5, x_6);
x_8 = x_7;
x_9 = lean_expr_abstract(x_2, x_8);
x_10 = l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkForall___spec__1(x_1, x_8, x_3, x_9);
lean_dec(x_8);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkForall___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Nat_foldRev_loop___at_Lean_Meta_Closure_mkForall___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Meta_Closure_mkForall___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Meta_Closure_mkForall(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = l_Lean_Meta_resetZetaFVarIds___rarg(x_6, x_7, x_8, x_9);
x_11 = lean_ctor_get(x_5, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_5);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_5, 0);
lean_dec(x_14);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
uint8_t x_16; lean_object* x_17; 
x_16 = 1;
lean_ctor_set_uint8(x_11, 7, x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_17 = l_Lean_Meta_Closure_collectExpr(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_20 = l_Lean_Meta_Closure_collectExpr(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Meta_Closure_process(x_3, x_4, x_5, x_6, x_7, x_8, x_22);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_18);
lean_ctor_set(x_26, 1, x_21);
lean_ctor_set(x_23, 0, x_26);
return x_23;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_23, 1);
lean_inc(x_27);
lean_dec(x_23);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_18);
lean_ctor_set(x_28, 1, x_21);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
else
{
uint8_t x_30; 
lean_dec(x_21);
lean_dec(x_18);
x_30 = !lean_is_exclusive(x_23);
if (x_30 == 0)
{
return x_23;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_23, 0);
x_32 = lean_ctor_get(x_23, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_23);
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
lean_dec(x_18);
lean_dec(x_5);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_34 = !lean_is_exclusive(x_20);
if (x_34 == 0)
{
return x_20;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_20, 0);
x_36 = lean_ctor_get(x_20, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_20);
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
lean_dec(x_5);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_17);
if (x_38 == 0)
{
return x_17;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_17, 0);
x_40 = lean_ctor_get(x_17, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_17);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; uint8_t x_43; uint8_t x_44; uint8_t x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; uint8_t x_49; uint8_t x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; 
x_42 = lean_ctor_get_uint8(x_11, 0);
x_43 = lean_ctor_get_uint8(x_11, 1);
x_44 = lean_ctor_get_uint8(x_11, 2);
x_45 = lean_ctor_get_uint8(x_11, 3);
x_46 = lean_ctor_get_uint8(x_11, 4);
x_47 = lean_ctor_get_uint8(x_11, 5);
x_48 = lean_ctor_get_uint8(x_11, 6);
x_49 = lean_ctor_get_uint8(x_11, 8);
x_50 = lean_ctor_get_uint8(x_11, 9);
lean_dec(x_11);
x_51 = 1;
x_52 = lean_alloc_ctor(0, 0, 10);
lean_ctor_set_uint8(x_52, 0, x_42);
lean_ctor_set_uint8(x_52, 1, x_43);
lean_ctor_set_uint8(x_52, 2, x_44);
lean_ctor_set_uint8(x_52, 3, x_45);
lean_ctor_set_uint8(x_52, 4, x_46);
lean_ctor_set_uint8(x_52, 5, x_47);
lean_ctor_set_uint8(x_52, 6, x_48);
lean_ctor_set_uint8(x_52, 7, x_51);
lean_ctor_set_uint8(x_52, 8, x_49);
lean_ctor_set_uint8(x_52, 9, x_50);
lean_ctor_set(x_5, 0, x_52);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_53 = l_Lean_Meta_Closure_collectExpr(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_56 = l_Lean_Meta_Closure_collectExpr(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_55);
if (lean_obj_tag(x_56) == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
x_58 = lean_ctor_get(x_56, 1);
lean_inc(x_58);
lean_dec(x_56);
x_59 = l_Lean_Meta_Closure_process(x_3, x_4, x_5, x_6, x_7, x_8, x_58);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_60 = lean_ctor_get(x_59, 1);
lean_inc(x_60);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_61 = x_59;
} else {
 lean_dec_ref(x_59);
 x_61 = lean_box(0);
}
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_54);
lean_ctor_set(x_62, 1, x_57);
if (lean_is_scalar(x_61)) {
 x_63 = lean_alloc_ctor(0, 2, 0);
} else {
 x_63 = x_61;
}
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_60);
return x_63;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_57);
lean_dec(x_54);
x_64 = lean_ctor_get(x_59, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_59, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_66 = x_59;
} else {
 lean_dec_ref(x_59);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(1, 2, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_54);
lean_dec(x_5);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_68 = lean_ctor_get(x_56, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_56, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_56)) {
 lean_ctor_release(x_56, 0);
 lean_ctor_release(x_56, 1);
 x_70 = x_56;
} else {
 lean_dec_ref(x_56);
 x_70 = lean_box(0);
}
if (lean_is_scalar(x_70)) {
 x_71 = lean_alloc_ctor(1, 2, 0);
} else {
 x_71 = x_70;
}
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_69);
return x_71;
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_5);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_72 = lean_ctor_get(x_53, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_53, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_74 = x_53;
} else {
 lean_dec_ref(x_53);
 x_74 = lean_box(0);
}
if (lean_is_scalar(x_74)) {
 x_75 = lean_alloc_ctor(1, 2, 0);
} else {
 x_75 = x_74;
}
lean_ctor_set(x_75, 0, x_72);
lean_ctor_set(x_75, 1, x_73);
return x_75;
}
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; uint8_t x_80; uint8_t x_81; uint8_t x_82; uint8_t x_83; uint8_t x_84; uint8_t x_85; uint8_t x_86; uint8_t x_87; lean_object* x_88; uint8_t x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_76 = lean_ctor_get(x_5, 1);
x_77 = lean_ctor_get(x_5, 2);
x_78 = lean_ctor_get(x_5, 3);
lean_inc(x_78);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_5);
x_79 = lean_ctor_get_uint8(x_11, 0);
x_80 = lean_ctor_get_uint8(x_11, 1);
x_81 = lean_ctor_get_uint8(x_11, 2);
x_82 = lean_ctor_get_uint8(x_11, 3);
x_83 = lean_ctor_get_uint8(x_11, 4);
x_84 = lean_ctor_get_uint8(x_11, 5);
x_85 = lean_ctor_get_uint8(x_11, 6);
x_86 = lean_ctor_get_uint8(x_11, 8);
x_87 = lean_ctor_get_uint8(x_11, 9);
if (lean_is_exclusive(x_11)) {
 x_88 = x_11;
} else {
 lean_dec_ref(x_11);
 x_88 = lean_box(0);
}
x_89 = 1;
if (lean_is_scalar(x_88)) {
 x_90 = lean_alloc_ctor(0, 0, 10);
} else {
 x_90 = x_88;
}
lean_ctor_set_uint8(x_90, 0, x_79);
lean_ctor_set_uint8(x_90, 1, x_80);
lean_ctor_set_uint8(x_90, 2, x_81);
lean_ctor_set_uint8(x_90, 3, x_82);
lean_ctor_set_uint8(x_90, 4, x_83);
lean_ctor_set_uint8(x_90, 5, x_84);
lean_ctor_set_uint8(x_90, 6, x_85);
lean_ctor_set_uint8(x_90, 7, x_89);
lean_ctor_set_uint8(x_90, 8, x_86);
lean_ctor_set_uint8(x_90, 9, x_87);
x_91 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_76);
lean_ctor_set(x_91, 2, x_77);
lean_ctor_set(x_91, 3, x_78);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_91);
x_92 = l_Lean_Meta_Closure_collectExpr(x_1, x_3, x_4, x_91, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_91);
x_95 = l_Lean_Meta_Closure_collectExpr(x_2, x_3, x_4, x_91, x_6, x_7, x_8, x_94);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = l_Lean_Meta_Closure_process(x_3, x_4, x_91, x_6, x_7, x_8, x_97);
if (lean_obj_tag(x_98) == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_99 = lean_ctor_get(x_98, 1);
lean_inc(x_99);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_100 = x_98;
} else {
 lean_dec_ref(x_98);
 x_100 = lean_box(0);
}
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_93);
lean_ctor_set(x_101, 1, x_96);
if (lean_is_scalar(x_100)) {
 x_102 = lean_alloc_ctor(0, 2, 0);
} else {
 x_102 = x_100;
}
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_99);
return x_102;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
lean_dec(x_96);
lean_dec(x_93);
x_103 = lean_ctor_get(x_98, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_98, 1);
lean_inc(x_104);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_105 = x_98;
} else {
 lean_dec_ref(x_98);
 x_105 = lean_box(0);
}
if (lean_is_scalar(x_105)) {
 x_106 = lean_alloc_ctor(1, 2, 0);
} else {
 x_106 = x_105;
}
lean_ctor_set(x_106, 0, x_103);
lean_ctor_set(x_106, 1, x_104);
return x_106;
}
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_93);
lean_dec(x_91);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_107 = lean_ctor_get(x_95, 0);
lean_inc(x_107);
x_108 = lean_ctor_get(x_95, 1);
lean_inc(x_108);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_109 = x_95;
} else {
 lean_dec_ref(x_95);
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
lean_dec(x_91);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_111 = lean_ctor_get(x_92, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_92, 1);
lean_inc(x_112);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 x_113 = x_92;
} else {
 lean_dec_ref(x_92);
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
lean_object* l_Lean_Meta_Closure_mkValueTypeClosureAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_Closure_mkValueTypeClosureAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Meta_Closure_mkValueTypeClosure_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_3(x_2, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_Lean_Meta_Closure_mkValueTypeClosure_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_Closure_mkValueTypeClosure_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_Closure_mkValueTypeClosure(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_9 = lean_unsigned_to_nat(8u);
x_10 = l_Std_mkHashMapImp___rarg(x_9);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_mk_empty_array_with_capacity(x_11);
x_13 = lean_unsigned_to_nat(1u);
lean_inc_n(x_12, 7);
lean_inc(x_10);
x_14 = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_10);
lean_ctor_set(x_14, 2, x_12);
lean_ctor_set(x_14, 3, x_13);
lean_ctor_set(x_14, 4, x_12);
lean_ctor_set(x_14, 5, x_12);
lean_ctor_set(x_14, 6, x_12);
lean_ctor_set(x_14, 7, x_12);
lean_ctor_set(x_14, 8, x_13);
lean_ctor_set(x_14, 9, x_12);
lean_ctor_set(x_14, 10, x_12);
lean_ctor_set(x_14, 11, x_12);
x_15 = lean_st_ref_get(x_7, x_8);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_mk_ref(x_14, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_box(x_3);
lean_inc(x_7);
x_21 = l_Lean_Meta_Closure_mkValueTypeClosureAux(x_1, x_2, x_20, x_18, x_4, x_5, x_6, x_7, x_19);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_st_ref_get(x_7, x_23);
lean_dec(x_7);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_st_ref_get(x_18, x_25);
lean_dec(x_18);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_28 = lean_ctor_get(x_26, 0);
x_29 = lean_ctor_get(x_22, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_22, 1);
lean_inc(x_30);
lean_dec(x_22);
x_31 = lean_ctor_get(x_28, 5);
lean_inc(x_31);
x_32 = l_Array_reverse___rarg(x_31);
x_33 = lean_ctor_get(x_28, 6);
lean_inc(x_33);
x_34 = l_Array_append___rarg(x_32, x_33);
lean_dec(x_33);
x_35 = lean_ctor_get(x_28, 7);
lean_inc(x_35);
x_36 = l_Array_reverse___rarg(x_35);
lean_inc(x_36);
x_37 = l_Lean_Meta_Closure_mkForall(x_36, x_29);
lean_dec(x_29);
lean_inc(x_34);
x_38 = l_Lean_Meta_Closure_mkForall(x_34, x_37);
lean_dec(x_37);
x_39 = l_Lean_Meta_Closure_mkLambda(x_36, x_30);
lean_dec(x_30);
x_40 = l_Lean_Meta_Closure_mkLambda(x_34, x_39);
lean_dec(x_39);
x_41 = lean_ctor_get(x_28, 2);
lean_inc(x_41);
x_42 = lean_ctor_get(x_28, 4);
lean_inc(x_42);
x_43 = lean_ctor_get(x_28, 10);
lean_inc(x_43);
x_44 = l_Array_reverse___rarg(x_43);
x_45 = lean_ctor_get(x_28, 9);
lean_inc(x_45);
lean_dec(x_28);
x_46 = l_Array_append___rarg(x_44, x_45);
lean_dec(x_45);
x_47 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_47, 0, x_41);
lean_ctor_set(x_47, 1, x_38);
lean_ctor_set(x_47, 2, x_40);
lean_ctor_set(x_47, 3, x_42);
lean_ctor_set(x_47, 4, x_46);
lean_ctor_set(x_26, 0, x_47);
return x_26;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_48 = lean_ctor_get(x_26, 0);
x_49 = lean_ctor_get(x_26, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_26);
x_50 = lean_ctor_get(x_22, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_22, 1);
lean_inc(x_51);
lean_dec(x_22);
x_52 = lean_ctor_get(x_48, 5);
lean_inc(x_52);
x_53 = l_Array_reverse___rarg(x_52);
x_54 = lean_ctor_get(x_48, 6);
lean_inc(x_54);
x_55 = l_Array_append___rarg(x_53, x_54);
lean_dec(x_54);
x_56 = lean_ctor_get(x_48, 7);
lean_inc(x_56);
x_57 = l_Array_reverse___rarg(x_56);
lean_inc(x_57);
x_58 = l_Lean_Meta_Closure_mkForall(x_57, x_50);
lean_dec(x_50);
lean_inc(x_55);
x_59 = l_Lean_Meta_Closure_mkForall(x_55, x_58);
lean_dec(x_58);
x_60 = l_Lean_Meta_Closure_mkLambda(x_57, x_51);
lean_dec(x_51);
x_61 = l_Lean_Meta_Closure_mkLambda(x_55, x_60);
lean_dec(x_60);
x_62 = lean_ctor_get(x_48, 2);
lean_inc(x_62);
x_63 = lean_ctor_get(x_48, 4);
lean_inc(x_63);
x_64 = lean_ctor_get(x_48, 10);
lean_inc(x_64);
x_65 = l_Array_reverse___rarg(x_64);
x_66 = lean_ctor_get(x_48, 9);
lean_inc(x_66);
lean_dec(x_48);
x_67 = l_Array_append___rarg(x_65, x_66);
lean_dec(x_66);
x_68 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_68, 0, x_62);
lean_ctor_set(x_68, 1, x_59);
lean_ctor_set(x_68, 2, x_61);
lean_ctor_set(x_68, 3, x_63);
lean_ctor_set(x_68, 4, x_67);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_49);
return x_69;
}
}
else
{
uint8_t x_70; 
lean_dec(x_18);
lean_dec(x_7);
x_70 = !lean_is_exclusive(x_21);
if (x_70 == 0)
{
return x_21;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_21, 0);
x_72 = lean_ctor_get(x_21, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_21);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
lean_object* l_Lean_Meta_Closure_mkValueTypeClosure___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lean_Meta_Closure_mkValueTypeClosure(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_throwKernelException___at_Lean_Meta_mkAuxDefinition___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = l_Lean_KernelException_toMessageData(x_1, x_7);
x_9 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_8, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
return x_9;
}
}
lean_object* l_Lean_addDecl___at_Lean_Meta_mkAuxDefinition___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_add_decl(x_10, x_1);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_throwKernelException___at_Lean_Meta_mkAuxDefinition___spec__2(x_12, x_2, x_3, x_4, x_5, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_11, 0);
lean_inc(x_14);
lean_dec(x_11);
x_15 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__2(x_14, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_4);
return x_15;
}
}
}
lean_object* l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_38; lean_object* x_39; lean_object* x_40; size_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_2);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_dec(x_3);
x_38 = lean_ctor_get(x_10, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_38, 2);
lean_inc(x_39);
lean_dec(x_38);
lean_inc(x_1);
x_40 = lean_alloc_closure((void*)(l_List_foldlM___at___private_Lean_MonadEnv_0__Lean_checkUnsupported___spec__2___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_40, 0, x_1);
x_41 = 8192;
x_42 = l_Lean_Expr_FindImpl_initCache;
x_43 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_40, x_41, x_39, x_42);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
lean_dec(x_43);
if (lean_obj_tag(x_44) == 0)
{
x_12 = x_8;
goto block_37;
}
else
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
lean_dec(x_44);
if (lean_obj_tag(x_45) == 4)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_mk_string("code generator does not support recursor '");
x_48 = l_Lean_stringToMessageData(x_47);
lean_dec(x_47);
x_49 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_49, 0, x_46);
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_mk_string("' yet, consider using 'match ... with' and/or structural recursion");
x_52 = l_Lean_stringToMessageData(x_51);
lean_dec(x_51);
x_53 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_53, x_4, x_5, x_6, x_7, x_8);
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
return x_54;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_54, 0);
x_57 = lean_ctor_get(x_54, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_54);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
else
{
lean_dec(x_45);
x_12 = x_8;
goto block_37;
}
}
block_37:
{
lean_object* x_13; lean_object* x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
lean_inc(x_1);
x_14 = lean_alloc_closure((void*)(l_List_foldlM___at___private_Lean_MonadEnv_0__Lean_checkUnsupported___spec__2___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_14, 0, x_1);
x_15 = 8192;
x_16 = l_Lean_Expr_FindImpl_initCache;
x_17 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_14, x_15, x_13, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
lean_dec(x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_box(0);
x_2 = x_19;
x_3 = x_11;
x_8 = x_12;
goto _start;
}
else
{
lean_object* x_21; 
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
lean_dec(x_18);
if (lean_obj_tag(x_21) == 4)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
lean_dec(x_11);
lean_dec(x_1);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_mk_string("code generator does not support recursor '");
x_24 = l_Lean_stringToMessageData(x_23);
lean_dec(x_23);
x_25 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_25, 0, x_22);
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_mk_string("' yet, consider using 'match ... with' and/or structural recursion");
x_28 = l_Lean_stringToMessageData(x_27);
lean_dec(x_27);
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_29, x_4, x_5, x_6, x_7, x_12);
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
return x_30;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_ctor_get(x_30, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_30);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
else
{
lean_object* x_35; 
lean_dec(x_21);
x_35 = lean_box(0);
x_2 = x_35;
x_3 = x_11;
x_8 = x_12;
goto _start;
}
}
}
}
}
}
lean_object* l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_2);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_dec(x_3);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_1);
x_13 = lean_alloc_closure((void*)(l_List_foldlM___at___private_Lean_MonadEnv_0__Lean_checkUnsupported___spec__2___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_13, 0, x_1);
x_14 = 8192;
x_15 = l_Lean_Expr_FindImpl_initCache;
x_16 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_13, x_14, x_12, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
x_18 = lean_box(0);
x_2 = x_18;
x_3 = x_11;
goto _start;
}
else
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
lean_dec(x_17);
if (lean_obj_tag(x_20) == 4)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_dec(x_11);
lean_dec(x_1);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_mk_string("code generator does not support recursor '");
x_23 = l_Lean_stringToMessageData(x_22);
lean_dec(x_22);
x_24 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_24, 0, x_21);
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_mk_string("' yet, consider using 'match ... with' and/or structural recursion");
x_27 = l_Lean_stringToMessageData(x_26);
lean_dec(x_26);
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_28, x_4, x_5, x_6, x_7, x_8);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
return x_29;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_29);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
else
{
lean_object* x_34; 
lean_dec(x_20);
x_34 = lean_box(0);
x_2 = x_34;
x_3 = x_11;
goto _start;
}
}
}
}
}
lean_object* l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_2);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_21; lean_object* x_22; size_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_2);
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_dec(x_3);
x_21 = lean_ctor_get(x_10, 1);
lean_inc(x_21);
lean_inc(x_1);
x_22 = lean_alloc_closure((void*)(l_List_foldlM___at___private_Lean_MonadEnv_0__Lean_checkUnsupported___spec__2___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_22, 0, x_1);
x_23 = 8192;
x_24 = l_Lean_Expr_FindImpl_initCache;
x_25 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_22, x_23, x_21, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
lean_dec(x_25);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_10, 2);
lean_inc(x_27);
lean_dec(x_10);
x_28 = lean_box(0);
lean_inc(x_1);
x_29 = l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__7(x_1, x_28, x_27, x_4, x_5, x_6, x_7, x_8);
x_12 = x_29;
goto block_20;
}
else
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_26, 0);
lean_inc(x_30);
lean_dec(x_26);
if (lean_obj_tag(x_30) == 4)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_dec(x_10);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_mk_string("code generator does not support recursor '");
x_33 = l_Lean_stringToMessageData(x_32);
lean_dec(x_32);
x_34 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_34, 0, x_31);
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_mk_string("' yet, consider using 'match ... with' and/or structural recursion");
x_37 = l_Lean_stringToMessageData(x_36);
lean_dec(x_36);
x_38 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_38, x_4, x_5, x_6, x_7, x_8);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
x_12 = x_39;
goto block_20;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_39, 0);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_39);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_12 = x_43;
goto block_20;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_30);
x_44 = lean_ctor_get(x_10, 2);
lean_inc(x_44);
lean_dec(x_10);
x_45 = lean_box(0);
lean_inc(x_1);
x_46 = l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__7(x_1, x_45, x_44, x_4, x_5, x_6, x_7, x_8);
x_12 = x_46;
goto block_20;
}
}
block_20:
{
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_2 = x_13;
x_3 = x_11;
x_8 = x_14;
goto _start;
}
else
{
uint8_t x_16; 
lean_dec(x_11);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
}
lean_object* l_Lean_Declaration_foldExprM___at_Lean_Meta_mkAuxDefinition___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_3);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 2);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_alloc_closure((void*)(l_List_foldlM___at___private_Lean_MonadEnv_0__Lean_checkUnsupported___spec__2___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = 8192;
x_14 = l_Lean_Expr_FindImpl_initCache;
x_15 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_12, x_13, x_11, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_8);
return x_18;
}
else
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_16, 0);
lean_inc(x_19);
lean_dec(x_16);
if (lean_obj_tag(x_19) == 4)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_mk_string("code generator does not support recursor '");
x_22 = l_Lean_stringToMessageData(x_21);
lean_dec(x_21);
x_23 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_23, 0, x_20);
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_mk_string("' yet, consider using 'match ... with' and/or structural recursion");
x_26 = l_Lean_stringToMessageData(x_25);
lean_dec(x_25);
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_27, x_4, x_5, x_6, x_7, x_8);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_19);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_8);
return x_30;
}
}
}
case 1:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_55; lean_object* x_56; size_t x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_3);
x_31 = lean_ctor_get(x_2, 0);
lean_inc(x_31);
lean_dec(x_2);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_55 = lean_ctor_get(x_32, 2);
lean_inc(x_55);
lean_dec(x_32);
lean_inc(x_1);
x_56 = lean_alloc_closure((void*)(l_List_foldlM___at___private_Lean_MonadEnv_0__Lean_checkUnsupported___spec__2___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_56, 0, x_1);
x_57 = 8192;
x_58 = l_Lean_Expr_FindImpl_initCache;
x_59 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_56, x_57, x_55, x_58);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
lean_dec(x_59);
if (lean_obj_tag(x_60) == 0)
{
x_34 = x_8;
goto block_54;
}
else
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
lean_dec(x_60);
if (lean_obj_tag(x_61) == 4)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
lean_dec(x_33);
lean_dec(x_1);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
lean_dec(x_61);
x_63 = lean_mk_string("code generator does not support recursor '");
x_64 = l_Lean_stringToMessageData(x_63);
lean_dec(x_63);
x_65 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_65, 0, x_62);
x_66 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_mk_string("' yet, consider using 'match ... with' and/or structural recursion");
x_68 = l_Lean_stringToMessageData(x_67);
lean_dec(x_67);
x_69 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_68);
x_70 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_69, x_4, x_5, x_6, x_7, x_8);
x_71 = !lean_is_exclusive(x_70);
if (x_71 == 0)
{
return x_70;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_70, 0);
x_73 = lean_ctor_get(x_70, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_70);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
else
{
lean_dec(x_61);
x_34 = x_8;
goto block_54;
}
}
block_54:
{
lean_object* x_35; size_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_alloc_closure((void*)(l_List_foldlM___at___private_Lean_MonadEnv_0__Lean_checkUnsupported___spec__2___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_35, 0, x_1);
x_36 = 8192;
x_37 = l_Lean_Expr_FindImpl_initCache;
x_38 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_35, x_36, x_33, x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
lean_dec(x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_34);
return x_41;
}
else
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_39, 0);
lean_inc(x_42);
lean_dec(x_39);
if (lean_obj_tag(x_42) == 4)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_mk_string("code generator does not support recursor '");
x_45 = l_Lean_stringToMessageData(x_44);
lean_dec(x_44);
x_46 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_46, 0, x_43);
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_mk_string("' yet, consider using 'match ... with' and/or structural recursion");
x_49 = l_Lean_stringToMessageData(x_48);
lean_dec(x_48);
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_50, x_4, x_5, x_6, x_7, x_34);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_42);
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_34);
return x_53;
}
}
}
}
case 2:
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_99; lean_object* x_100; size_t x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
lean_dec(x_3);
x_75 = lean_ctor_get(x_2, 0);
lean_inc(x_75);
lean_dec(x_2);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
x_77 = lean_ctor_get(x_75, 1);
lean_inc(x_77);
lean_dec(x_75);
x_99 = lean_ctor_get(x_76, 2);
lean_inc(x_99);
lean_dec(x_76);
lean_inc(x_1);
x_100 = lean_alloc_closure((void*)(l_List_foldlM___at___private_Lean_MonadEnv_0__Lean_checkUnsupported___spec__2___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_100, 0, x_1);
x_101 = 8192;
x_102 = l_Lean_Expr_FindImpl_initCache;
x_103 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_100, x_101, x_99, x_102);
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
lean_dec(x_103);
if (lean_obj_tag(x_104) == 0)
{
x_78 = x_8;
goto block_98;
}
else
{
lean_object* x_105; 
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
lean_dec(x_104);
if (lean_obj_tag(x_105) == 4)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; uint8_t x_115; 
lean_dec(x_77);
lean_dec(x_1);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
lean_dec(x_105);
x_107 = lean_mk_string("code generator does not support recursor '");
x_108 = l_Lean_stringToMessageData(x_107);
lean_dec(x_107);
x_109 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_109, 0, x_106);
x_110 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
x_111 = lean_mk_string("' yet, consider using 'match ... with' and/or structural recursion");
x_112 = l_Lean_stringToMessageData(x_111);
lean_dec(x_111);
x_113 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_113, 0, x_110);
lean_ctor_set(x_113, 1, x_112);
x_114 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_113, x_4, x_5, x_6, x_7, x_8);
x_115 = !lean_is_exclusive(x_114);
if (x_115 == 0)
{
return x_114;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_114, 0);
x_117 = lean_ctor_get(x_114, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_114);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
else
{
lean_dec(x_105);
x_78 = x_8;
goto block_98;
}
}
block_98:
{
lean_object* x_79; size_t x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_79 = lean_alloc_closure((void*)(l_List_foldlM___at___private_Lean_MonadEnv_0__Lean_checkUnsupported___spec__2___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_79, 0, x_1);
x_80 = 8192;
x_81 = l_Lean_Expr_FindImpl_initCache;
x_82 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_79, x_80, x_77, x_81);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
lean_dec(x_82);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_box(0);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_78);
return x_85;
}
else
{
lean_object* x_86; 
x_86 = lean_ctor_get(x_83, 0);
lean_inc(x_86);
lean_dec(x_83);
if (lean_obj_tag(x_86) == 4)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
lean_dec(x_86);
x_88 = lean_mk_string("code generator does not support recursor '");
x_89 = l_Lean_stringToMessageData(x_88);
lean_dec(x_88);
x_90 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_90, 0, x_87);
x_91 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
x_92 = lean_mk_string("' yet, consider using 'match ... with' and/or structural recursion");
x_93 = l_Lean_stringToMessageData(x_92);
lean_dec(x_92);
x_94 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_93);
x_95 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_94, x_4, x_5, x_6, x_7, x_78);
return x_95;
}
else
{
lean_object* x_96; lean_object* x_97; 
lean_dec(x_86);
x_96 = lean_box(0);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_78);
return x_97;
}
}
}
}
case 3:
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_143; lean_object* x_144; size_t x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_dec(x_3);
x_119 = lean_ctor_get(x_2, 0);
lean_inc(x_119);
lean_dec(x_2);
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
x_121 = lean_ctor_get(x_119, 1);
lean_inc(x_121);
lean_dec(x_119);
x_143 = lean_ctor_get(x_120, 2);
lean_inc(x_143);
lean_dec(x_120);
lean_inc(x_1);
x_144 = lean_alloc_closure((void*)(l_List_foldlM___at___private_Lean_MonadEnv_0__Lean_checkUnsupported___spec__2___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_144, 0, x_1);
x_145 = 8192;
x_146 = l_Lean_Expr_FindImpl_initCache;
x_147 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_144, x_145, x_143, x_146);
x_148 = lean_ctor_get(x_147, 0);
lean_inc(x_148);
lean_dec(x_147);
if (lean_obj_tag(x_148) == 0)
{
x_122 = x_8;
goto block_142;
}
else
{
lean_object* x_149; 
x_149 = lean_ctor_get(x_148, 0);
lean_inc(x_149);
lean_dec(x_148);
if (lean_obj_tag(x_149) == 4)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_159; 
lean_dec(x_121);
lean_dec(x_1);
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
lean_dec(x_149);
x_151 = lean_mk_string("code generator does not support recursor '");
x_152 = l_Lean_stringToMessageData(x_151);
lean_dec(x_151);
x_153 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_153, 0, x_150);
x_154 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
x_155 = lean_mk_string("' yet, consider using 'match ... with' and/or structural recursion");
x_156 = l_Lean_stringToMessageData(x_155);
lean_dec(x_155);
x_157 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_157, 0, x_154);
lean_ctor_set(x_157, 1, x_156);
x_158 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_157, x_4, x_5, x_6, x_7, x_8);
x_159 = !lean_is_exclusive(x_158);
if (x_159 == 0)
{
return x_158;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_158, 0);
x_161 = lean_ctor_get(x_158, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_158);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
return x_162;
}
}
else
{
lean_dec(x_149);
x_122 = x_8;
goto block_142;
}
}
block_142:
{
lean_object* x_123; size_t x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_123 = lean_alloc_closure((void*)(l_List_foldlM___at___private_Lean_MonadEnv_0__Lean_checkUnsupported___spec__2___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_123, 0, x_1);
x_124 = 8192;
x_125 = l_Lean_Expr_FindImpl_initCache;
x_126 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_123, x_124, x_121, x_125);
x_127 = lean_ctor_get(x_126, 0);
lean_inc(x_127);
lean_dec(x_126);
if (lean_obj_tag(x_127) == 0)
{
lean_object* x_128; lean_object* x_129; 
x_128 = lean_box(0);
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_122);
return x_129;
}
else
{
lean_object* x_130; 
x_130 = lean_ctor_get(x_127, 0);
lean_inc(x_130);
lean_dec(x_127);
if (lean_obj_tag(x_130) == 4)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
lean_dec(x_130);
x_132 = lean_mk_string("code generator does not support recursor '");
x_133 = l_Lean_stringToMessageData(x_132);
lean_dec(x_132);
x_134 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_134, 0, x_131);
x_135 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_135, 0, x_133);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_mk_string("' yet, consider using 'match ... with' and/or structural recursion");
x_137 = l_Lean_stringToMessageData(x_136);
lean_dec(x_136);
x_138 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_138, 0, x_135);
lean_ctor_set(x_138, 1, x_137);
x_139 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_138, x_4, x_5, x_6, x_7, x_122);
return x_139;
}
else
{
lean_object* x_140; lean_object* x_141; 
lean_dec(x_130);
x_140 = lean_box(0);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_122);
return x_141;
}
}
}
}
case 4:
{
lean_object* x_163; 
lean_dec(x_1);
x_163 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_163, 0, x_3);
lean_ctor_set(x_163, 1, x_8);
return x_163;
}
case 5:
{
lean_object* x_164; lean_object* x_165; 
x_164 = lean_ctor_get(x_2, 0);
lean_inc(x_164);
lean_dec(x_2);
x_165 = l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__6(x_1, x_3, x_164, x_4, x_5, x_6, x_7, x_8);
return x_165;
}
default: 
{
lean_object* x_166; lean_object* x_167; 
x_166 = lean_ctor_get(x_2, 2);
lean_inc(x_166);
lean_dec(x_2);
x_167 = l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__8(x_1, x_3, x_166, x_4, x_5, x_6, x_7, x_8);
return x_167;
}
}
}
}
lean_object* l___private_Lean_MonadEnv_0__Lean_checkUnsupported___at_Lean_Meta_mkAuxDefinition___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_box(0);
x_12 = l_Lean_Declaration_foldExprM___at_Lean_Meta_mkAuxDefinition___spec__5(x_10, x_1, x_11, x_2, x_3, x_4, x_5, x_9);
return x_12;
}
}
lean_object* l_Lean_compileDecl___at_Lean_Meta_mkAuxDefinition___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
x_12 = lean_compile_decl(x_10, x_11, x_1);
lean_dec(x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 11)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l___private_Lean_MonadEnv_0__Lean_checkUnsupported___at_Lean_Meta_mkAuxDefinition___spec__4(x_1, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_17, 0, x_14);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = l_Lean_throwError___at_Lean_Meta_setInlineAttribute___spec__1(x_18, x_2, x_3, x_4, x_5, x_16);
lean_dec(x_4);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_14);
lean_dec(x_4);
x_20 = !lean_is_exclusive(x_15);
if (x_20 == 0)
{
return x_15;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_15, 0);
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; 
lean_dec(x_1);
x_24 = l_Lean_throwKernelException___at_Lean_Meta_mkAuxDefinition___spec__2(x_13, x_2, x_3, x_4, x_5, x_9);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_1);
x_25 = lean_ctor_get(x_12, 0);
lean_inc(x_25);
lean_dec(x_12);
x_26 = l_Lean_setEnv___at_Lean_Meta_setInlineAttribute___spec__2(x_25, x_2, x_3, x_4, x_5, x_9);
lean_dec(x_4);
return x_26;
}
}
}
lean_object* l_Lean_Meta_mkAuxDefinition___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_1, 3);
lean_inc(x_9);
x_10 = lean_array_to_list(lean_box(0), x_9);
x_11 = l_Lean_mkConst(x_2, x_10);
x_12 = lean_ctor_get(x_1, 4);
lean_inc(x_12);
lean_dec(x_1);
x_13 = l_Lean_mkAppN(x_11, x_12);
lean_dec(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_8);
return x_14;
}
}
lean_object* l_Lean_Meta_mkAuxDefinition(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_98; lean_object* x_99; lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; 
x_11 = lean_box(0);
x_12 = lean_mk_string("Meta");
x_13 = lean_name_mk_string(x_11, x_12);
x_14 = lean_mk_string("debug");
x_15 = lean_name_mk_string(x_13, x_14);
x_118 = lean_st_ref_get(x_9, x_10);
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_119, 3);
lean_inc(x_120);
lean_dec(x_119);
x_121 = lean_ctor_get_uint8(x_120, sizeof(void*)*1);
lean_dec(x_120);
if (x_121 == 0)
{
lean_object* x_122; uint8_t x_123; 
x_122 = lean_ctor_get(x_118, 1);
lean_inc(x_122);
lean_dec(x_118);
x_123 = 0;
x_98 = x_123;
x_99 = x_122;
goto block_117;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; 
x_124 = lean_ctor_get(x_118, 1);
lean_inc(x_124);
lean_dec(x_118);
lean_inc(x_15);
x_125 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_15, x_6, x_7, x_8, x_9, x_124);
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
x_128 = lean_unbox(x_126);
lean_dec(x_126);
x_98 = x_128;
x_99 = x_127;
goto block_117;
}
block_97:
{
lean_object* x_17; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_17 = l_Lean_Meta_Closure_mkValueTypeClosure(x_2, x_3, x_4, x_6, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint32_t x_30; uint32_t x_31; uint32_t x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; uint8_t x_36; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_st_ref_get(x_9, x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_18, 0);
lean_inc(x_24);
x_25 = lean_array_to_list(lean_box(0), x_24);
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_inc(x_26);
lean_inc(x_1);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_1);
lean_ctor_set(x_27, 1, x_25);
lean_ctor_set(x_27, 2, x_26);
x_28 = lean_ctor_get(x_18, 2);
lean_inc(x_28);
lean_inc(x_28);
lean_inc(x_23);
x_29 = l_Lean_getMaxHeight(x_23, x_28);
x_30 = lean_unbox_uint32(x_29);
lean_dec(x_29);
x_31 = 1;
x_32 = x_30 + x_31;
x_33 = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(x_33, 0, x_32);
lean_inc(x_26);
lean_inc(x_23);
x_34 = l_Lean_Environment_hasUnsafe(x_23, x_26);
x_35 = lean_st_ref_get(x_9, x_22);
if (x_34 == 0)
{
uint8_t x_89; 
lean_inc(x_28);
x_89 = l_Lean_Environment_hasUnsafe(x_23, x_28);
if (x_89 == 0)
{
uint8_t x_90; 
x_90 = 1;
x_36 = x_90;
goto block_88;
}
else
{
uint8_t x_91; 
x_91 = 0;
x_36 = x_91;
goto block_88;
}
}
else
{
uint8_t x_92; 
lean_dec(x_23);
x_92 = 0;
x_36 = x_92;
goto block_88;
}
block_88:
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_58; lean_object* x_59; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
lean_inc(x_28);
x_37 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_37, 0, x_27);
lean_ctor_set(x_37, 1, x_28);
lean_ctor_set(x_37, 2, x_33);
lean_ctor_set_uint8(x_37, sizeof(void*)*3, x_36);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_37);
x_78 = lean_ctor_get(x_35, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_78, 3);
lean_inc(x_79);
lean_dec(x_78);
x_80 = lean_ctor_get_uint8(x_79, sizeof(void*)*1);
lean_dec(x_79);
if (x_80 == 0)
{
lean_object* x_81; uint8_t x_82; 
x_81 = lean_ctor_get(x_35, 1);
lean_inc(x_81);
lean_dec(x_35);
x_82 = 0;
x_58 = x_82;
x_59 = x_81;
goto block_77;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_83 = lean_ctor_get(x_35, 1);
lean_inc(x_83);
lean_dec(x_35);
lean_inc(x_15);
x_84 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__2(x_15, x_6, x_7, x_8, x_9, x_83);
x_85 = lean_ctor_get(x_84, 0);
lean_inc(x_85);
x_86 = lean_ctor_get(x_84, 1);
lean_inc(x_86);
lean_dec(x_84);
x_87 = lean_unbox(x_85);
lean_dec(x_85);
x_58 = x_87;
x_59 = x_86;
goto block_77;
}
block_57:
{
lean_object* x_40; 
lean_inc(x_8);
x_40 = l_Lean_addDecl___at_Lean_Meta_mkAuxDefinition___spec__1(x_38, x_6, x_7, x_8, x_9, x_39);
if (lean_obj_tag(x_40) == 0)
{
if (x_5 == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_38);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = lean_box(0);
x_43 = l_Lean_Meta_mkAuxDefinition___lambda__1(x_18, x_1, x_42, x_6, x_7, x_8, x_9, x_41);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_40, 1);
lean_inc(x_44);
lean_dec(x_40);
lean_inc(x_8);
x_45 = l_Lean_compileDecl___at_Lean_Meta_mkAuxDefinition___spec__3(x_38, x_6, x_7, x_8, x_9, x_44);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = l_Lean_Meta_mkAuxDefinition___lambda__1(x_18, x_1, x_46, x_6, x_7, x_8, x_9, x_47);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_46);
return x_48;
}
else
{
uint8_t x_49; 
lean_dec(x_18);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_45);
if (x_49 == 0)
{
return x_45;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_45, 0);
x_51 = lean_ctor_get(x_45, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_45);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_38);
lean_dec(x_18);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_40);
if (x_53 == 0)
{
return x_40;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_40, 0);
x_55 = lean_ctor_get(x_40, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_40);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
block_77:
{
if (x_58 == 0)
{
lean_dec(x_28);
lean_dec(x_26);
lean_dec(x_15);
x_39 = x_59;
goto block_57;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_60 = lean_mk_string("");
x_61 = l_Lean_stringToMessageData(x_60);
lean_dec(x_60);
lean_inc(x_1);
x_62 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_62, 0, x_1);
lean_inc(x_61);
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_mk_string(" : ");
x_65 = l_Lean_stringToMessageData(x_64);
lean_dec(x_64);
x_66 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_66, 0, x_63);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_67, 0, x_26);
x_68 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_mk_string(" := ");
x_70 = l_Lean_stringToMessageData(x_69);
lean_dec(x_69);
x_71 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_72, 0, x_28);
x_73 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_61);
x_75 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_15, x_74, x_6, x_7, x_8, x_9, x_59);
x_76 = lean_ctor_get(x_75, 1);
lean_inc(x_76);
lean_dec(x_75);
x_39 = x_76;
goto block_57;
}
}
}
}
else
{
uint8_t x_93; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_93 = !lean_is_exclusive(x_17);
if (x_93 == 0)
{
return x_17;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_17, 0);
x_95 = lean_ctor_get(x_17, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_17);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
block_117:
{
if (x_98 == 0)
{
x_16 = x_99;
goto block_97;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_100 = lean_mk_string("");
x_101 = l_Lean_stringToMessageData(x_100);
lean_dec(x_100);
lean_inc(x_1);
x_102 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_102, 0, x_1);
lean_inc(x_101);
x_103 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
x_104 = lean_mk_string(" : ");
x_105 = l_Lean_stringToMessageData(x_104);
lean_dec(x_104);
x_106 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_106, 0, x_103);
lean_ctor_set(x_106, 1, x_105);
lean_inc(x_2);
x_107 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_107, 0, x_2);
x_108 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
x_109 = lean_mk_string(" := ");
x_110 = l_Lean_stringToMessageData(x_109);
lean_dec(x_109);
x_111 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_111, 0, x_108);
lean_ctor_set(x_111, 1, x_110);
lean_inc(x_3);
x_112 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_112, 0, x_3);
x_113 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_101);
lean_inc(x_15);
x_115 = l_Lean_addTrace___at___private_Lean_Meta_LevelDefEq_0__Lean_Meta_postponeIsLevelDefEq___spec__1(x_15, x_114, x_6, x_7, x_8, x_9, x_99);
x_116 = lean_ctor_get(x_115, 1);
lean_inc(x_116);
lean_dec(x_115);
x_16 = x_116;
goto block_97;
}
}
}
}
lean_object* l_Lean_throwKernelException___at_Lean_Meta_mkAuxDefinition___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwKernelException___at_Lean_Meta_mkAuxDefinition___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_addDecl___at_Lean_Meta_mkAuxDefinition___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_addDecl___at_Lean_Meta_mkAuxDefinition___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
lean_object* l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
lean_object* l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_List_foldlM___at_Lean_Meta_mkAuxDefinition___spec__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
lean_object* l_Lean_Declaration_foldExprM___at_Lean_Meta_mkAuxDefinition___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Declaration_foldExprM___at_Lean_Meta_mkAuxDefinition___spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_9;
}
}
lean_object* l___private_Lean_MonadEnv_0__Lean_checkUnsupported___at_Lean_Meta_mkAuxDefinition___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l___private_Lean_MonadEnv_0__Lean_checkUnsupported___at_Lean_Meta_mkAuxDefinition___spec__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_compileDecl___at_Lean_Meta_mkAuxDefinition___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_compileDecl___at_Lean_Meta_mkAuxDefinition___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_mkAuxDefinition___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_mkAuxDefinition___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_mkAuxDefinition___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_unbox(x_4);
lean_dec(x_4);
x_12 = lean_unbox(x_5);
lean_dec(x_5);
x_13 = l_Lean_Meta_mkAuxDefinition(x_1, x_2, x_3, x_11, x_12, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
lean_object* l_Lean_Meta_mkAuxDefinitionFor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_Lean_Meta_inferType(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_Expr_headBeta(x_9);
x_12 = 0;
x_13 = 1;
x_14 = l_Lean_Meta_mkAuxDefinition(x_1, x_11, x_2, x_12, x_13, x_3, x_4, x_5, x_6, x_10);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_8);
if (x_15 == 0)
{
return x_8;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_8, 0);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_8);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Std_ShareCommon(lean_object*);
lean_object* initialize_Lean_MetavarContext(lean_object*);
lean_object* initialize_Lean_Environment(lean_object*);
lean_object* initialize_Lean_Util_FoldConsts(lean_object*);
lean_object* initialize_Lean_Meta_Basic(lean_object*);
lean_object* initialize_Lean_Meta_Check(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Meta_Closure(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_ShareCommon(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_MetavarContext(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_FoldConsts(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Check(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Closure_instInhabitedToProcessElement = _init_l_Lean_Meta_Closure_instInhabitedToProcessElement();
lean_mark_persistent(l_Lean_Meta_Closure_instInhabitedToProcessElement);
l_Lean_Meta_Closure_State_visitedLevel___default = _init_l_Lean_Meta_Closure_State_visitedLevel___default();
lean_mark_persistent(l_Lean_Meta_Closure_State_visitedLevel___default);
l_Lean_Meta_Closure_State_visitedExpr___default = _init_l_Lean_Meta_Closure_State_visitedExpr___default();
lean_mark_persistent(l_Lean_Meta_Closure_State_visitedExpr___default);
l_Lean_Meta_Closure_State_levelParams___default = _init_l_Lean_Meta_Closure_State_levelParams___default();
lean_mark_persistent(l_Lean_Meta_Closure_State_levelParams___default);
l_Lean_Meta_Closure_State_nextLevelIdx___default = _init_l_Lean_Meta_Closure_State_nextLevelIdx___default();
lean_mark_persistent(l_Lean_Meta_Closure_State_nextLevelIdx___default);
l_Lean_Meta_Closure_State_levelArgs___default = _init_l_Lean_Meta_Closure_State_levelArgs___default();
lean_mark_persistent(l_Lean_Meta_Closure_State_levelArgs___default);
l_Lean_Meta_Closure_State_newLocalDecls___default = _init_l_Lean_Meta_Closure_State_newLocalDecls___default();
lean_mark_persistent(l_Lean_Meta_Closure_State_newLocalDecls___default);
l_Lean_Meta_Closure_State_newLocalDeclsForMVars___default = _init_l_Lean_Meta_Closure_State_newLocalDeclsForMVars___default();
lean_mark_persistent(l_Lean_Meta_Closure_State_newLocalDeclsForMVars___default);
l_Lean_Meta_Closure_State_newLetDecls___default = _init_l_Lean_Meta_Closure_State_newLetDecls___default();
lean_mark_persistent(l_Lean_Meta_Closure_State_newLetDecls___default);
l_Lean_Meta_Closure_State_nextExprIdx___default = _init_l_Lean_Meta_Closure_State_nextExprIdx___default();
lean_mark_persistent(l_Lean_Meta_Closure_State_nextExprIdx___default);
l_Lean_Meta_Closure_State_exprMVarArgs___default = _init_l_Lean_Meta_Closure_State_exprMVarArgs___default();
lean_mark_persistent(l_Lean_Meta_Closure_State_exprMVarArgs___default);
l_Lean_Meta_Closure_State_exprFVarArgs___default = _init_l_Lean_Meta_Closure_State_exprFVarArgs___default();
lean_mark_persistent(l_Lean_Meta_Closure_State_exprFVarArgs___default);
l_Lean_Meta_Closure_State_toProcess___default = _init_l_Lean_Meta_Closure_State_toProcess___default();
lean_mark_persistent(l_Lean_Meta_Closure_State_toProcess___default);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
