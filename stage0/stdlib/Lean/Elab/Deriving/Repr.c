// Lean compiler output
// Module: Lean.Elab.Deriving.Repr
// Imports: Init Lean.Meta.Transform Lean.Meta.Inductive Lean.Elab.Deriving.Basic Lean.Elab.Deriving.Util
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
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds___closed__1;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkReprInstanceHandler(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
extern lean_object* l_termMax__prec___closed__2;
extern lean_object* l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__5;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__7;
extern lean_object* l_Lean_Elab_Deriving_mkContext___closed__2;
lean_object* l_Lean_Elab_Command_liftTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__5;
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
extern lean_object* l_term___x3e_x3d_____closed__2;
extern lean_object* l_Lean_Parser_Term_explicit___elambda__1___closed__1;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__3;
extern lean_object* l_Lean_myMacro____x40_Init_Notation___hyg_14747____closed__4;
extern lean_object* l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__3;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__20;
lean_object* l_List_head_x21___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__1(lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Repr_mkReprInstanceHandler___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__5;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__33;
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__23;
extern lean_object* l_Array_empty___closed__1;
lean_object* lean_environment_find(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Syntax_addPrec___closed__13;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__29;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__3;
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__21;
extern lean_object* l_Lean_Parser_Command_mutual___elambda__1___closed__2;
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
extern lean_object* l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__7;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__5;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
extern lean_object* l_myMacro____x40_Init_NotationExtra___hyg_4440____closed__7;
extern lean_object* l_termDepIfThenElse___closed__24;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__25;
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_initFn____x40_Lean_Elab_Deriving_Repr___hyg_2712____closed__1;
extern lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5___closed__1;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__6;
lean_object* l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_proj___elambda__1___closed__1;
extern lean_object* l_Lean_Parser_Command_mutual___elambda__1___closed__1;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__4;
lean_object* lean_string_utf8_byte_size(lean_object*);
extern lean_object* l_termMax__prec___closed__3;
lean_object* l_Lean_Elab_Deriving_Repr_mkBody___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_groupKind___closed__1;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__5;
lean_object* l_Lean_Elab_Deriving_Repr_mkMutualBlock(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__30;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForInduct(lean_object*);
lean_object* l_Lean_isInductive___at_Lean_Elab_Deriving_Repr_mkReprInstanceHandler___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__4;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
lean_object* l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__8;
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__7;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__3;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__18;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkDiscrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__20;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForInduct___boxed(lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__15;
lean_object* l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__4;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
lean_object* l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__28;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__14;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForInduct___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__22;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__17;
lean_object* l_Lean_Elab_Deriving_mkInstanceCmds(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkBody___boxed(lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14133____closed__9;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__6;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__9;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__8;
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Deriving_mkLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkMutualBlock___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Syntax_addPrec___closed__14;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_myMacro____x40_Init_Data_Array_Subarray___hyg_903____closed__4;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct_match__1___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_notFollowedByRedefinedTermToken___elambda__1___closed__43;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__27;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
extern lean_object* l_Lean_strLitKind___closed__2;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__4;
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__33;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___boxed(lean_object*);
extern lean_object* l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Literal_type___closed__1;
lean_object* l_Lean_Elab_Deriving_Repr_mkBody(lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__13;
lean_object* l_Lean_getStructureFields(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__19;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__13;
lean_object* lean_array_to_list(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Repr_mkReprInstanceHandler___spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind___closed__2;
lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__5;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__9;
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__1;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__2;
extern lean_object* l_Lean_Literal_type___closed__2;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__34;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__23;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__4;
extern lean_object* l_Lean_KernelException_toMessageData___closed__15;
extern lean_object* l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17244____closed__5;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__2;
lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__6;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14569____closed__12;
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__21;
lean_object* l_Lean_Elab_Deriving_mkHeader___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_mkContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_71____closed__2;
extern lean_object* l_Lean_KernelException_toMessageData___closed__3;
size_t lean_usize_of_nat(lean_object*);
extern lean_object* l_term___x2b_x2b_____closed__2;
lean_object* l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts_match__1___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_inductionAlt___closed__5;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___boxed(lean_object**);
extern lean_object* l_Lean_nullKind___closed__2;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__3;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_928____closed__7;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__14;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__2;
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__25;
lean_object* l_Lean_Elab_Deriving_Repr_mkAuxFunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
lean_object* l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(size_t, size_t, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__26;
extern lean_object* l_Lean_Parser_Command_end___elambda__1___closed__1;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__12;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l___private_Lean_Data_Position_0__Lean_reprPosition____x40_Lean_Data_Position___hyg_136____closed__1;
extern lean_object* l_Lean_Parser_Command_private___elambda__1___closed__1;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1318____closed__4;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts_match__1(lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14569____closed__11;
extern lean_object* l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__4;
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__3;
lean_object* l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__6;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_object* l_Lean_Elab_Deriving_Repr_mkReprHeader(lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__19;
extern lean_object* l_List_head_x21___rarg___closed__3;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkMutualBlock___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Syntax_expandInterpolatedStr___lambda__1___closed__1;
lean_object* l_List_map___at___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds___spec__1(lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkReprHeader___boxed(lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__2;
extern lean_object* l_Lean_instInhabitedName;
lean_object* l___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__2;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
extern lean_object* l_Lean_getConstInfoCtor___rarg___lambda__1___closed__2;
lean_object* l_Lean_Meta_inferType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_registerBuiltinDerivingHandler(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_12862____closed__8;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkMutualBlock___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_termIfThenElse___closed__2;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___boxed(lean_object**);
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__1;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__6;
lean_object* l_Lean_Elab_Deriving_Repr_mkAuxFunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__24;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___boxed(lean_object**);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__1;
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_head_x21___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__1___boxed(lean_object*);
extern lean_object* l_prec_x28___x29___closed__7;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__11;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__31;
extern lean_object* l_prec_x28___x29___closed__3;
lean_object* l_Lean_Elab_Deriving_Repr_mkAuxFunction___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_syntax_ident(lean_object*);
extern lean_object* l_Lean_Parser_Command_private___elambda__1___closed__2;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__3;
extern lean_object* l_Lean_instInhabitedInductiveVal;
lean_object* l_Lean_Elab_Deriving_Repr_mkAuxFunction___lambda__1___closed__1;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__10;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__32;
extern lean_object* l_Lean_Parser_Command_partial___elambda__1___closed__1;
extern lean_object* l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
lean_object* l_Lean_isInductive___at_Lean_Elab_Deriving_Repr_mkReprInstanceHandler___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct_match__1(lean_object*);
extern lean_object* l_Lean_Parser_Command_partial___elambda__1___closed__2;
lean_object* l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__1;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__4;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__5;
lean_object* l_Lean_Elab_Deriving_Repr_mkAuxFunction___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__3;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__2;
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__16;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__1;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__7;
lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__7;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__1;
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__8;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__2;
extern lean_object* l_Lean_Parser_Tactic_tactic_xb7_x2e_____closed__5;
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Deriving_Repr_initFn____x40_Lean_Elab_Deriving_Repr___hyg_2712_(lean_object*);
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Repr");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Syntax_addPrec___closed__13;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Syntax_addPrec___closed__13;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Literal_type___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Literal_type___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__5;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Literal_type___closed__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_9 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__2;
x_16 = lean_unsigned_to_nat(1u);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_17 = l_Lean_Elab_Deriving_mkHeader___rarg(x_15, x_16, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_6, x_7, x_19);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_22);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_25);
lean_dec(x_7);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_28 = lean_ctor_get(x_26, 0);
x_29 = l_prec_x28___x29___closed__3;
lean_inc(x_21);
x_30 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_30, 0, x_21);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_Parser_Syntax_addPrec___closed__14;
lean_inc(x_24);
lean_inc(x_28);
x_32 = l_Lean_addMacroScope(x_28, x_31, x_24);
x_33 = lean_box(0);
x_34 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__4;
lean_inc(x_21);
x_35 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_35, 0, x_21);
lean_ctor_set(x_35, 1, x_34);
lean_ctor_set(x_35, 2, x_32);
lean_ctor_set(x_35, 3, x_33);
x_36 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_37 = lean_array_push(x_36, x_35);
x_38 = l_Lean_nullKind___closed__2;
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
x_40 = l_myMacro____x40_Init_Notation___hyg_14133____closed__9;
lean_inc(x_21);
x_41 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_41, 0, x_21);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_Lean_Literal_type___closed__2;
x_43 = l_Lean_addMacroScope(x_28, x_42, x_24);
x_44 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__6;
x_45 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__8;
lean_inc(x_21);
x_46 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_46, 0, x_21);
lean_ctor_set(x_46, 1, x_44);
lean_ctor_set(x_46, 2, x_43);
lean_ctor_set(x_46, 3, x_45);
x_47 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_48 = lean_array_push(x_47, x_41);
x_49 = lean_array_push(x_48, x_46);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_38);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_prec_x28___x29___closed__7;
x_52 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_52, 0, x_21);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_myMacro____x40_Init_Notation___hyg_14569____closed__12;
x_54 = lean_array_push(x_53, x_30);
x_55 = lean_array_push(x_54, x_39);
x_56 = lean_array_push(x_55, x_50);
x_57 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_58 = lean_array_push(x_56, x_57);
x_59 = lean_array_push(x_58, x_52);
x_60 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
x_62 = !lean_is_exclusive(x_18);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_ctor_get(x_18, 0);
x_64 = lean_array_push(x_63, x_61);
lean_ctor_set(x_18, 0, x_64);
lean_ctor_set(x_26, 0, x_18);
return x_26;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_65 = lean_ctor_get(x_18, 0);
x_66 = lean_ctor_get(x_18, 1);
x_67 = lean_ctor_get(x_18, 2);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_18);
x_68 = lean_array_push(x_65, x_61);
x_69 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_66);
lean_ctor_set(x_69, 2, x_67);
lean_ctor_set(x_26, 0, x_69);
return x_26;
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_70 = lean_ctor_get(x_26, 0);
x_71 = lean_ctor_get(x_26, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_26);
x_72 = l_prec_x28___x29___closed__3;
lean_inc(x_21);
x_73 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_73, 0, x_21);
lean_ctor_set(x_73, 1, x_72);
x_74 = l_Lean_Parser_Syntax_addPrec___closed__14;
lean_inc(x_24);
lean_inc(x_70);
x_75 = l_Lean_addMacroScope(x_70, x_74, x_24);
x_76 = lean_box(0);
x_77 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__4;
lean_inc(x_21);
x_78 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_78, 0, x_21);
lean_ctor_set(x_78, 1, x_77);
lean_ctor_set(x_78, 2, x_75);
lean_ctor_set(x_78, 3, x_76);
x_79 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_80 = lean_array_push(x_79, x_78);
x_81 = l_Lean_nullKind___closed__2;
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_80);
x_83 = l_myMacro____x40_Init_Notation___hyg_14133____closed__9;
lean_inc(x_21);
x_84 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_84, 0, x_21);
lean_ctor_set(x_84, 1, x_83);
x_85 = l_Lean_Literal_type___closed__2;
x_86 = l_Lean_addMacroScope(x_70, x_85, x_24);
x_87 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__6;
x_88 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__8;
lean_inc(x_21);
x_89 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_89, 0, x_21);
lean_ctor_set(x_89, 1, x_87);
lean_ctor_set(x_89, 2, x_86);
lean_ctor_set(x_89, 3, x_88);
x_90 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_91 = lean_array_push(x_90, x_84);
x_92 = lean_array_push(x_91, x_89);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_81);
lean_ctor_set(x_93, 1, x_92);
x_94 = l_prec_x28___x29___closed__7;
x_95 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_95, 0, x_21);
lean_ctor_set(x_95, 1, x_94);
x_96 = l_myMacro____x40_Init_Notation___hyg_14569____closed__12;
x_97 = lean_array_push(x_96, x_73);
x_98 = lean_array_push(x_97, x_82);
x_99 = lean_array_push(x_98, x_93);
x_100 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_101 = lean_array_push(x_99, x_100);
x_102 = lean_array_push(x_101, x_95);
x_103 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_103);
lean_ctor_set(x_104, 1, x_102);
x_105 = lean_ctor_get(x_18, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_18, 1);
lean_inc(x_106);
x_107 = lean_ctor_get(x_18, 2);
lean_inc(x_107);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 lean_ctor_release(x_18, 2);
 x_108 = x_18;
} else {
 lean_dec_ref(x_18);
 x_108 = lean_box(0);
}
x_109 = lean_array_push(x_105, x_104);
if (lean_is_scalar(x_108)) {
 x_110 = lean_alloc_ctor(0, 3, 0);
} else {
 x_110 = x_108;
}
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_106);
lean_ctor_set(x_110, 2, x_107);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_71);
return x_111;
}
}
else
{
uint8_t x_112; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_112 = !lean_is_exclusive(x_17);
if (x_112 == 0)
{
return x_17;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_17, 0);
x_114 = lean_ctor_get(x_17, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_17);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkReprHeader(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg), 8, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkReprHeader___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Deriving_Repr_mkReprHeader(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Repr_mkBodyForStruct_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_List_head_x21___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_instInhabitedName;
x_3 = l_List_head_x21___rarg___closed__3;
x_4 = lean_panic_fn(x_2, x_3);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
return x_5;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Lean_getConstInfo___at_Lean_Elab_Term_mkConst___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 6)
{
uint8_t x_11; 
lean_dec(x_2);
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_9);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 0);
lean_dec(x_12);
x_13 = lean_ctor_get(x_10, 0);
lean_inc(x_13);
lean_dec(x_10);
lean_ctor_set(x_9, 0, x_13);
return x_9;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_ctor_get(x_10, 0);
lean_inc(x_15);
lean_dec(x_10);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_10);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_box(0);
x_19 = l_Lean_mkConst(x_1, x_18);
x_20 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = l_Lean_KernelException_toMessageData___closed__3;
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = l_Lean_getConstInfoCtor___rarg___lambda__1___closed__2;
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_throwError___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__3(x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_17);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_2);
lean_dec(x_1);
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
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\" := \"");
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("repr");
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__2;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__2;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\"_\"");
return x_1;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; lean_object* x_18; lean_object* x_220; 
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_6);
x_220 = l_Lean_Meta_isType(x_6, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_220) == 0)
{
lean_object* x_221; uint8_t x_222; 
x_221 = lean_ctor_get(x_220, 0);
lean_inc(x_221);
x_222 = lean_unbox(x_221);
if (x_222 == 0)
{
lean_object* x_223; lean_object* x_224; 
lean_dec(x_221);
x_223 = lean_ctor_get(x_220, 1);
lean_inc(x_223);
lean_dec(x_220);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
x_224 = l_Lean_Meta_isProof(x_6, x_12, x_13, x_14, x_15, x_223);
if (lean_obj_tag(x_224) == 0)
{
lean_object* x_225; lean_object* x_226; uint8_t x_227; 
x_225 = lean_ctor_get(x_224, 0);
lean_inc(x_225);
x_226 = lean_ctor_get(x_224, 1);
lean_inc(x_226);
lean_dec(x_224);
x_227 = lean_unbox(x_225);
lean_dec(x_225);
x_17 = x_227;
x_18 = x_226;
goto block_219;
}
else
{
uint8_t x_228; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_228 = !lean_is_exclusive(x_224);
if (x_228 == 0)
{
return x_224;
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_229 = lean_ctor_get(x_224, 0);
x_230 = lean_ctor_get(x_224, 1);
lean_inc(x_230);
lean_inc(x_229);
lean_dec(x_224);
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_229);
lean_ctor_set(x_231, 1, x_230);
return x_231;
}
}
}
else
{
lean_object* x_232; uint8_t x_233; 
lean_dec(x_6);
x_232 = lean_ctor_get(x_220, 1);
lean_inc(x_232);
lean_dec(x_220);
x_233 = lean_unbox(x_221);
lean_dec(x_221);
x_17 = x_233;
x_18 = x_232;
goto block_219;
}
}
else
{
uint8_t x_234; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_234 = !lean_is_exclusive(x_220);
if (x_234 == 0)
{
return x_220;
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_235 = lean_ctor_get(x_220, 0);
x_236 = lean_ctor_get(x_220, 1);
lean_inc(x_236);
lean_inc(x_235);
lean_dec(x_220);
x_237 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_237, 0, x_235);
lean_ctor_set(x_237, 1, x_236);
return x_237;
}
}
block_219:
{
if (x_17 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_19 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_21);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_24);
lean_dec(x_15);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = l_Lean_Syntax_expandInterpolatedStr___lambda__1___closed__1;
lean_inc(x_20);
x_29 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_29, 0, x_20);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_31 = lean_array_push(x_30, x_8);
lean_inc(x_29);
x_32 = lean_array_push(x_31, x_29);
x_33 = lean_array_push(x_32, x_1);
x_34 = l_term___x2b_x2b_____closed__2;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__1;
lean_inc(x_20);
x_37 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_37, 0, x_20);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_39 = lean_array_push(x_38, x_37);
x_40 = l_Lean_strLitKind___closed__2;
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
x_42 = lean_array_push(x_30, x_35);
lean_inc(x_29);
x_43 = lean_array_push(x_42, x_29);
x_44 = lean_array_push(x_43, x_41);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_34);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__5;
x_47 = l_Lean_addMacroScope(x_27, x_46, x_23);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_2);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_3);
x_50 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__4;
lean_inc(x_20);
x_51 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_51, 0, x_20);
lean_ctor_set(x_51, 1, x_50);
lean_ctor_set(x_51, 2, x_47);
lean_ctor_set(x_51, 3, x_49);
x_52 = l_prec_x28___x29___closed__3;
lean_inc(x_20);
x_53 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_53, 0, x_20);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Lean_Parser_Tactic_tactic_xb7_x2e_____closed__5;
lean_inc(x_20);
x_55 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_55, 0, x_20);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_mk_syntax_ident(x_4);
x_57 = lean_array_push(x_30, x_5);
x_58 = lean_array_push(x_57, x_55);
x_59 = lean_array_push(x_58, x_56);
x_60 = l_Lean_Parser_Term_proj___elambda__1___closed__1;
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
x_62 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_63 = lean_array_push(x_62, x_61);
x_64 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_65 = lean_array_push(x_63, x_64);
x_66 = l_Lean_nullKind___closed__2;
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
x_68 = l_prec_x28___x29___closed__7;
x_69 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_69, 0, x_20);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_array_push(x_30, x_53);
x_71 = lean_array_push(x_70, x_67);
x_72 = lean_array_push(x_71, x_69);
x_73 = l_myMacro____x40_Init_Notation___hyg_12862____closed__8;
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_72);
x_75 = lean_array_push(x_38, x_74);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_66);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_array_push(x_62, x_51);
x_78 = lean_array_push(x_77, x_76);
x_79 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_78);
x_81 = lean_array_push(x_30, x_45);
x_82 = lean_array_push(x_81, x_29);
x_83 = lean_array_push(x_82, x_80);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_34);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_box(x_7);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_84);
x_87 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_25, 0, x_87);
return x_25;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_88 = lean_ctor_get(x_25, 0);
x_89 = lean_ctor_get(x_25, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_25);
x_90 = l_Lean_Syntax_expandInterpolatedStr___lambda__1___closed__1;
lean_inc(x_20);
x_91 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_91, 0, x_20);
lean_ctor_set(x_91, 1, x_90);
x_92 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_93 = lean_array_push(x_92, x_8);
lean_inc(x_91);
x_94 = lean_array_push(x_93, x_91);
x_95 = lean_array_push(x_94, x_1);
x_96 = l_term___x2b_x2b_____closed__2;
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_95);
x_98 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__1;
lean_inc(x_20);
x_99 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_99, 0, x_20);
lean_ctor_set(x_99, 1, x_98);
x_100 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_101 = lean_array_push(x_100, x_99);
x_102 = l_Lean_strLitKind___closed__2;
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_101);
x_104 = lean_array_push(x_92, x_97);
lean_inc(x_91);
x_105 = lean_array_push(x_104, x_91);
x_106 = lean_array_push(x_105, x_103);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_96);
lean_ctor_set(x_107, 1, x_106);
x_108 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__5;
x_109 = l_Lean_addMacroScope(x_88, x_108, x_23);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_2);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_3);
x_112 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__4;
lean_inc(x_20);
x_113 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_113, 0, x_20);
lean_ctor_set(x_113, 1, x_112);
lean_ctor_set(x_113, 2, x_109);
lean_ctor_set(x_113, 3, x_111);
x_114 = l_prec_x28___x29___closed__3;
lean_inc(x_20);
x_115 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_115, 0, x_20);
lean_ctor_set(x_115, 1, x_114);
x_116 = l_Lean_Parser_Tactic_tactic_xb7_x2e_____closed__5;
lean_inc(x_20);
x_117 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_117, 0, x_20);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_mk_syntax_ident(x_4);
x_119 = lean_array_push(x_92, x_5);
x_120 = lean_array_push(x_119, x_117);
x_121 = lean_array_push(x_120, x_118);
x_122 = l_Lean_Parser_Term_proj___elambda__1___closed__1;
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_121);
x_124 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_125 = lean_array_push(x_124, x_123);
x_126 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_127 = lean_array_push(x_125, x_126);
x_128 = l_Lean_nullKind___closed__2;
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_127);
x_130 = l_prec_x28___x29___closed__7;
x_131 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_131, 0, x_20);
lean_ctor_set(x_131, 1, x_130);
x_132 = lean_array_push(x_92, x_115);
x_133 = lean_array_push(x_132, x_129);
x_134 = lean_array_push(x_133, x_131);
x_135 = l_myMacro____x40_Init_Notation___hyg_12862____closed__8;
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_134);
x_137 = lean_array_push(x_100, x_136);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_128);
lean_ctor_set(x_138, 1, x_137);
x_139 = lean_array_push(x_124, x_113);
x_140 = lean_array_push(x_139, x_138);
x_141 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_140);
x_143 = lean_array_push(x_92, x_107);
x_144 = lean_array_push(x_143, x_91);
x_145 = lean_array_push(x_144, x_142);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_96);
lean_ctor_set(x_146, 1, x_145);
x_147 = lean_box(x_7);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_146);
x_149 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_149, 0, x_148);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_89);
return x_150;
}
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; uint8_t x_157; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_151 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_14, x_15, x_18);
x_152 = lean_ctor_get(x_151, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_151, 1);
lean_inc(x_153);
lean_dec(x_151);
x_154 = l_Lean_Elab_Term_getCurrMacroScope(x_10, x_11, x_12, x_13, x_14, x_15, x_153);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
x_155 = lean_ctor_get(x_154, 1);
lean_inc(x_155);
lean_dec(x_154);
x_156 = l_Lean_Elab_Term_getMainModule___rarg(x_15, x_155);
lean_dec(x_15);
x_157 = !lean_is_exclusive(x_156);
if (x_157 == 0)
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
x_158 = lean_ctor_get(x_156, 0);
lean_dec(x_158);
x_159 = l_Lean_Syntax_expandInterpolatedStr___lambda__1___closed__1;
lean_inc(x_152);
x_160 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_160, 0, x_152);
lean_ctor_set(x_160, 1, x_159);
x_161 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_162 = lean_array_push(x_161, x_8);
lean_inc(x_160);
x_163 = lean_array_push(x_162, x_160);
x_164 = lean_array_push(x_163, x_1);
x_165 = l_term___x2b_x2b_____closed__2;
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_165);
lean_ctor_set(x_166, 1, x_164);
x_167 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__1;
lean_inc(x_152);
x_168 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_168, 0, x_152);
lean_ctor_set(x_168, 1, x_167);
x_169 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_170 = lean_array_push(x_169, x_168);
x_171 = l_Lean_strLitKind___closed__2;
x_172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_172, 0, x_171);
lean_ctor_set(x_172, 1, x_170);
x_173 = lean_array_push(x_161, x_166);
lean_inc(x_160);
x_174 = lean_array_push(x_173, x_160);
x_175 = lean_array_push(x_174, x_172);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_165);
lean_ctor_set(x_176, 1, x_175);
x_177 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__6;
x_178 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_178, 0, x_152);
lean_ctor_set(x_178, 1, x_177);
x_179 = lean_array_push(x_169, x_178);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_171);
lean_ctor_set(x_180, 1, x_179);
x_181 = lean_array_push(x_161, x_176);
x_182 = lean_array_push(x_181, x_160);
x_183 = lean_array_push(x_182, x_180);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_165);
lean_ctor_set(x_184, 1, x_183);
x_185 = lean_box(x_7);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_184);
x_187 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_187, 0, x_186);
lean_ctor_set(x_156, 0, x_187);
return x_156;
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_188 = lean_ctor_get(x_156, 1);
lean_inc(x_188);
lean_dec(x_156);
x_189 = l_Lean_Syntax_expandInterpolatedStr___lambda__1___closed__1;
lean_inc(x_152);
x_190 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_190, 0, x_152);
lean_ctor_set(x_190, 1, x_189);
x_191 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_192 = lean_array_push(x_191, x_8);
lean_inc(x_190);
x_193 = lean_array_push(x_192, x_190);
x_194 = lean_array_push(x_193, x_1);
x_195 = l_term___x2b_x2b_____closed__2;
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_194);
x_197 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__1;
lean_inc(x_152);
x_198 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_198, 0, x_152);
lean_ctor_set(x_198, 1, x_197);
x_199 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_200 = lean_array_push(x_199, x_198);
x_201 = l_Lean_strLitKind___closed__2;
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_200);
x_203 = lean_array_push(x_191, x_196);
lean_inc(x_190);
x_204 = lean_array_push(x_203, x_190);
x_205 = lean_array_push(x_204, x_202);
x_206 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_206, 0, x_195);
lean_ctor_set(x_206, 1, x_205);
x_207 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__6;
x_208 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_208, 0, x_152);
lean_ctor_set(x_208, 1, x_207);
x_209 = lean_array_push(x_199, x_208);
x_210 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_210, 0, x_201);
lean_ctor_set(x_210, 1, x_209);
x_211 = lean_array_push(x_191, x_206);
x_212 = lean_array_push(x_211, x_190);
x_213 = lean_array_push(x_212, x_210);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_195);
lean_ctor_set(x_214, 1, x_213);
x_215 = lean_box(x_7);
x_216 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_216, 0, x_215);
lean_ctor_set(x_216, 1, x_214);
x_217 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_217, 0, x_216);
x_218 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_218, 0, x_217);
lean_ctor_set(x_218, 1, x_188);
return x_218;
}
}
}
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Format.line");
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19) {
_start:
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_9, 1);
x_21 = lean_nat_dec_le(x_20, x_11);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_nat_dec_eq(x_10, x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_sub(x_10, x_24);
lean_dec(x_10);
x_26 = lean_ctor_get(x_12, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_12, 1);
lean_inc(x_27);
lean_dec(x_12);
x_28 = l_Lean_instInhabitedName;
x_29 = lean_array_get(x_28, x_1, x_11);
x_30 = 1;
lean_inc(x_29);
x_31 = l_Lean_Name_toString(x_29, x_30);
x_32 = lean_box(2);
x_33 = l_Lean_Syntax_mkStrLit(x_31, x_32);
lean_dec(x_31);
x_34 = lean_nat_add(x_2, x_11);
x_35 = l_Lean_instInhabitedExpr;
x_36 = lean_array_get(x_35, x_4, x_34);
lean_dec(x_34);
x_37 = lean_unbox(x_26);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; 
x_38 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_17, x_18, x_19);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Lean_Elab_Term_getCurrMacroScope(x_13, x_14, x_15, x_16, x_17, x_18, x_40);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = l_Lean_Elab_Term_getMainModule___rarg(x_18, x_43);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Lean_Syntax_expandInterpolatedStr___lambda__1___closed__1;
lean_inc(x_39);
x_48 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_48, 0, x_39);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_myMacro____x40_Init_Notation___hyg_1318____closed__4;
lean_inc(x_39);
x_50 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_50, 0, x_39);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_52 = lean_array_push(x_51, x_50);
x_53 = l_Lean_strLitKind___closed__2;
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
x_55 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_56 = lean_array_push(x_55, x_27);
lean_inc(x_48);
x_57 = lean_array_push(x_56, x_48);
x_58 = lean_array_push(x_57, x_54);
x_59 = l_term___x2b_x2b_____closed__2;
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = l___private_Lean_Data_Position_0__Lean_reprPosition____x40_Lean_Data_Position___hyg_136____closed__1;
lean_inc(x_5);
x_62 = lean_name_mk_string(x_5, x_61);
x_63 = l_Lean_addMacroScope(x_45, x_62, x_42);
lean_inc(x_6);
x_64 = lean_name_mk_string(x_6, x_61);
lean_inc(x_7);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_7);
lean_inc(x_8);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_8);
x_67 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__3;
x_68 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_68, 0, x_39);
lean_ctor_set(x_68, 1, x_67);
lean_ctor_set(x_68, 2, x_63);
lean_ctor_set(x_68, 3, x_66);
x_69 = lean_array_push(x_55, x_60);
x_70 = lean_array_push(x_69, x_48);
x_71 = lean_array_push(x_70, x_68);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_59);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_box(0);
x_74 = lean_unbox(x_26);
lean_dec(x_26);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_3);
lean_inc(x_8);
lean_inc(x_7);
x_75 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1(x_33, x_7, x_8, x_29, x_3, x_36, x_74, x_72, x_73, x_13, x_14, x_15, x_16, x_17, x_18, x_46);
if (lean_obj_tag(x_75) == 0)
{
lean_object* x_76; 
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
if (lean_obj_tag(x_76) == 0)
{
uint8_t x_77; 
lean_dec(x_25);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_77 = !lean_is_exclusive(x_75);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_ctor_get(x_75, 0);
lean_dec(x_78);
x_79 = lean_ctor_get(x_76, 0);
lean_inc(x_79);
lean_dec(x_76);
lean_ctor_set(x_75, 0, x_79);
return x_75;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_75, 1);
lean_inc(x_80);
lean_dec(x_75);
x_81 = lean_ctor_get(x_76, 0);
lean_inc(x_81);
lean_dec(x_76);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_83 = lean_ctor_get(x_75, 1);
lean_inc(x_83);
lean_dec(x_75);
x_84 = lean_ctor_get(x_76, 0);
lean_inc(x_84);
lean_dec(x_76);
x_85 = lean_ctor_get(x_9, 2);
x_86 = lean_nat_add(x_11, x_85);
lean_dec(x_11);
x_10 = x_25;
x_11 = x_86;
x_12 = x_84;
x_19 = x_83;
goto _start;
}
}
else
{
uint8_t x_88; 
lean_dec(x_25);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_88 = !lean_is_exclusive(x_75);
if (x_88 == 0)
{
return x_75;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_75, 0);
x_90 = lean_ctor_get(x_75, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_75);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
else
{
uint8_t x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_26);
x_92 = 0;
x_93 = lean_box(0);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_3);
lean_inc(x_8);
lean_inc(x_7);
x_94 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1(x_33, x_7, x_8, x_29, x_3, x_36, x_92, x_27, x_93, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; 
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
if (lean_obj_tag(x_95) == 0)
{
uint8_t x_96; 
lean_dec(x_25);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_96 = !lean_is_exclusive(x_94);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; 
x_97 = lean_ctor_get(x_94, 0);
lean_dec(x_97);
x_98 = lean_ctor_get(x_95, 0);
lean_inc(x_98);
lean_dec(x_95);
lean_ctor_set(x_94, 0, x_98);
return x_94;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_94, 1);
lean_inc(x_99);
lean_dec(x_94);
x_100 = lean_ctor_get(x_95, 0);
lean_inc(x_100);
lean_dec(x_95);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
return x_101;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_102 = lean_ctor_get(x_94, 1);
lean_inc(x_102);
lean_dec(x_94);
x_103 = lean_ctor_get(x_95, 0);
lean_inc(x_103);
lean_dec(x_95);
x_104 = lean_ctor_get(x_9, 2);
x_105 = lean_nat_add(x_11, x_104);
lean_dec(x_11);
x_10 = x_25;
x_11 = x_105;
x_12 = x_103;
x_19 = x_102;
goto _start;
}
}
else
{
uint8_t x_107; 
lean_dec(x_25);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_107 = !lean_is_exclusive(x_94);
if (x_107 == 0)
{
return x_94;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_94, 0);
x_109 = lean_ctor_get(x_94, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_94);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
}
}
else
{
lean_object* x_111; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_12);
lean_ctor_set(x_111, 1, x_19);
return x_111;
}
}
else
{
lean_object* x_112; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_12);
lean_ctor_set(x_112, 1, x_19);
return x_112;
}
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Format.bracket");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("bracket");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\"{ \"");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\" }\"");
return x_1;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, uint8_t x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17) {
_start:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_array_get_size(x_1);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_unsigned_to_nat(1u);
lean_inc(x_18);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_18);
lean_ctor_set(x_21, 2, x_20);
x_22 = lean_box(x_8);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_9);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc_n(x_7, 2);
lean_inc(x_6);
lean_inc(x_5);
x_24 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_7, x_21, x_18, x_19, x_23, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_21);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_15, x_16, x_26);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_Elab_Term_getCurrMacroScope(x_11, x_12, x_13, x_14, x_15, x_16, x_30);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Elab_Term_getMainModule___rarg(x_16, x_33);
lean_dec(x_16);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_36 = lean_ctor_get(x_34, 0);
x_37 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__4;
x_38 = lean_name_mk_string(x_5, x_37);
x_39 = l_Lean_addMacroScope(x_36, x_38, x_32);
x_40 = lean_name_mk_string(x_6, x_37);
lean_inc(x_7);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_7);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_7);
x_43 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__3;
lean_inc(x_29);
x_44 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_44, 0, x_29);
lean_ctor_set(x_44, 1, x_43);
lean_ctor_set(x_44, 2, x_39);
lean_ctor_set(x_44, 3, x_42);
x_45 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__5;
lean_inc(x_29);
x_46 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_46, 0, x_29);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_48 = lean_array_push(x_47, x_46);
x_49 = l_Lean_strLitKind___closed__2;
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__6;
x_52 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_52, 0, x_29);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_array_push(x_47, x_52);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_49);
lean_ctor_set(x_54, 1, x_53);
x_55 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_56 = lean_array_push(x_55, x_50);
x_57 = lean_array_push(x_56, x_27);
x_58 = lean_array_push(x_57, x_54);
x_59 = l_Lean_nullKind___closed__2;
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_62 = lean_array_push(x_61, x_44);
x_63 = lean_array_push(x_62, x_60);
x_64 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
lean_ctor_set(x_34, 0, x_65);
return x_34;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_66 = lean_ctor_get(x_34, 0);
x_67 = lean_ctor_get(x_34, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_34);
x_68 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__4;
x_69 = lean_name_mk_string(x_5, x_68);
x_70 = l_Lean_addMacroScope(x_66, x_69, x_32);
x_71 = lean_name_mk_string(x_6, x_68);
lean_inc(x_7);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_7);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_7);
x_74 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__3;
lean_inc(x_29);
x_75 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_75, 0, x_29);
lean_ctor_set(x_75, 1, x_74);
lean_ctor_set(x_75, 2, x_70);
lean_ctor_set(x_75, 3, x_73);
x_76 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__5;
lean_inc(x_29);
x_77 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_77, 0, x_29);
lean_ctor_set(x_77, 1, x_76);
x_78 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_79 = lean_array_push(x_78, x_77);
x_80 = l_Lean_strLitKind___closed__2;
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
x_82 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__6;
x_83 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_83, 0, x_29);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_array_push(x_78, x_83);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_80);
lean_ctor_set(x_85, 1, x_84);
x_86 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_87 = lean_array_push(x_86, x_81);
x_88 = lean_array_push(x_87, x_27);
x_89 = lean_array_push(x_88, x_85);
x_90 = l_Lean_nullKind___closed__2;
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_89);
x_92 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_93 = lean_array_push(x_92, x_75);
x_94 = lean_array_push(x_93, x_91);
x_95 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_94);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_67);
return x_97;
}
}
else
{
uint8_t x_98; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_98 = !lean_is_exclusive(x_24);
if (x_98 == 0)
{
return x_24;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_24, 0);
x_100 = lean_ctor_get(x_24, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_24);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Format.nil");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__4;
x_2 = l_Lean_myMacro____x40_Init_Notation___hyg_14747____closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__5;
x_2 = l_Lean_myMacro____x40_Init_Notation___hyg_14747____closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("'deriving Repr' failed, unexpected number of fields in structure");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__8;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_13 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_10, x_11, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Elab_Term_getCurrMacroScope(x_6, x_7, x_8, x_9, x_10, x_11, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Elab_Term_getMainModule___rarg(x_11, x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__4;
x_23 = l_Lean_addMacroScope(x_20, x_22, x_17);
x_24 = lean_box(0);
x_25 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__3;
x_26 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__7;
x_27 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_27, 0, x_14);
lean_ctor_set(x_27, 1, x_25);
lean_ctor_set(x_27, 2, x_23);
lean_ctor_set(x_27, 3, x_26);
x_28 = lean_array_get_size(x_4);
x_29 = lean_array_get_size(x_1);
x_30 = lean_nat_add(x_2, x_29);
lean_dec(x_29);
x_31 = lean_nat_dec_eq(x_28, x_30);
lean_dec(x_30);
lean_dec(x_28);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; uint8_t x_34; 
lean_dec(x_27);
lean_dec(x_3);
x_32 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__9;
x_33 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_32, x_6, x_7, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
return x_33;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_33);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; 
x_38 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__4;
x_39 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__5;
x_40 = 1;
x_41 = lean_box(0);
x_42 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1(x_1, x_2, x_3, x_4, x_38, x_39, x_24, x_40, x_27, x_41, x_6, x_7, x_8, x_9, x_10, x_11, x_21);
lean_dec(x_6);
return x_42;
}
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_2, 4);
lean_inc(x_10);
x_11 = l_List_head_x21___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__1(x_10);
lean_dec(x_10);
lean_inc(x_3);
x_12 = l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__2(x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_st_ref_get(x_8, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Lean_getStructureFields(x_18, x_20);
x_22 = lean_ctor_get(x_2, 1);
lean_inc(x_22);
lean_dec(x_2);
x_23 = lean_ctor_get(x_1, 2);
x_24 = l_Lean_instInhabitedName;
x_25 = lean_unsigned_to_nat(0u);
x_26 = lean_array_get(x_24, x_23, x_25);
x_27 = lean_mk_syntax_ident(x_26);
x_28 = lean_ctor_get(x_13, 0);
lean_inc(x_28);
lean_dec(x_13);
x_29 = lean_ctor_get(x_28, 2);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___boxed), 12, 3);
lean_closure_set(x_30, 0, x_21);
lean_closure_set(x_30, 1, x_22);
lean_closure_set(x_30, 2, x_27);
x_31 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(x_29, x_30, x_3, x_4, x_5, x_6, x_7, x_8, x_17);
return x_31;
}
else
{
uint8_t x_32; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_12);
if (x_32 == 0)
{
return x_12;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_12, 0);
x_34 = lean_ctor_get(x_12, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_12);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l_List_head_x21___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_head_x21___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
uint8_t x_17; lean_object* x_18; 
x_17 = lean_unbox(x_7);
lean_dec(x_7);
x_18 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_17, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
return x_18;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
_start:
{
lean_object* x_20; 
x_20 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_20;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
_start:
{
uint8_t x_18; lean_object* x_19; 
x_18 = lean_unbox(x_8);
lean_dec(x_8);
x_19 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_18, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_19;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForStruct___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_nat_dec_le(x_12, x_3);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_nat_dec_eq(x_2, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_2, x_16);
lean_dec(x_2);
x_18 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_9, x_10, x_11);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_myMacro____x40_Init_Notation___hyg_13362____closed__14;
x_26 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_26, 0, x_19);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_28 = lean_array_push(x_27, x_26);
x_29 = l_myMacro____x40_Init_Notation___hyg_13362____closed__13;
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = lean_array_push(x_4, x_30);
x_32 = lean_ctor_get(x_1, 2);
x_33 = lean_nat_add(x_3, x_32);
lean_dec(x_3);
x_2 = x_17;
x_3 = x_33;
x_4 = x_31;
x_11 = x_24;
goto _start;
}
else
{
lean_object* x_35; 
lean_dec(x_3);
lean_dec(x_2);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_4);
lean_ctor_set(x_35, 1, x_11);
return x_35;
}
}
else
{
lean_object* x_36; 
lean_dec(x_3);
lean_dec(x_2);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_4);
lean_ctor_set(x_36, 1, x_11);
return x_36;
}
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("reprArg");
return x_1;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23) {
_start:
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_13, 1);
x_25 = lean_nat_dec_le(x_24, x_15);
if (x_25 == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_unsigned_to_nat(0u);
x_27 = lean_nat_dec_eq(x_14, x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_sub(x_14, x_28);
lean_dec(x_14);
x_37 = lean_ctor_get(x_16, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_16, 1);
lean_inc(x_38);
lean_dec(x_16);
x_39 = lean_nat_add(x_12, x_15);
x_40 = l_Lean_instInhabitedExpr;
x_41 = lean_array_get(x_40, x_3, x_39);
lean_dec(x_39);
x_42 = l_Array_myMacro____x40_Init_Data_Array_Subarray___hyg_903____closed__4;
x_43 = l___private_Lean_CoreM_0__Lean_Core_mkFreshNameImp(x_42, x_21, x_22, x_23);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_43, 1);
lean_inc(x_45);
lean_dec(x_43);
x_46 = lean_mk_syntax_ident(x_44);
lean_inc(x_46);
x_47 = lean_array_push(x_37, x_46);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
x_48 = l_Lean_Meta_inferType(x_41, x_19, x_20, x_21, x_22, x_45);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_ctor_get(x_1, 0);
x_52 = lean_ctor_get(x_51, 0);
x_53 = l_Lean_Expr_isAppOf(x_49, x_52);
lean_dec(x_49);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_54 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_21, x_22, x_50);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = l_Lean_Elab_Term_getCurrMacroScope(x_17, x_18, x_19, x_20, x_21, x_22, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = l_Lean_Elab_Term_getMainModule___rarg(x_22, x_59);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
x_63 = l_Lean_Syntax_expandInterpolatedStr___lambda__1___closed__1;
lean_inc(x_55);
x_64 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_64, 0, x_55);
lean_ctor_set(x_64, 1, x_63);
x_65 = l___private_Lean_Data_Position_0__Lean_reprPosition____x40_Lean_Data_Position___hyg_136____closed__1;
lean_inc(x_5);
x_66 = lean_name_mk_string(x_5, x_65);
lean_inc(x_58);
lean_inc(x_61);
x_67 = l_Lean_addMacroScope(x_61, x_66, x_58);
lean_inc(x_6);
x_68 = lean_name_mk_string(x_6, x_65);
lean_inc(x_7);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_7);
lean_inc(x_8);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_8);
x_71 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__3;
lean_inc(x_55);
x_72 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_72, 0, x_55);
lean_ctor_set(x_72, 1, x_71);
lean_ctor_set(x_72, 2, x_67);
lean_ctor_set(x_72, 3, x_70);
x_73 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_74 = lean_array_push(x_73, x_38);
lean_inc(x_64);
x_75 = lean_array_push(x_74, x_64);
x_76 = lean_array_push(x_75, x_72);
x_77 = l_term___x2b_x2b_____closed__2;
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_76);
x_79 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__4;
x_80 = l_Lean_addMacroScope(x_61, x_79, x_58);
lean_inc(x_7);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_7);
lean_inc(x_8);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_8);
x_83 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__3;
x_84 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_84, 0, x_55);
lean_ctor_set(x_84, 1, x_83);
lean_ctor_set(x_84, 2, x_80);
lean_ctor_set(x_84, 3, x_82);
lean_inc(x_10);
x_85 = lean_array_push(x_10, x_46);
lean_inc(x_9);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_9);
lean_ctor_set(x_86, 1, x_85);
lean_inc(x_11);
x_87 = lean_array_push(x_11, x_84);
x_88 = lean_array_push(x_87, x_86);
lean_inc(x_4);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_4);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_array_push(x_73, x_78);
x_91 = lean_array_push(x_90, x_64);
x_92 = lean_array_push(x_91, x_89);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_77);
lean_ctor_set(x_93, 1, x_92);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_47);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_95, 0, x_94);
x_30 = x_95;
x_31 = x_62;
goto block_36;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_96 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_21, x_22, x_50);
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_ctor_get(x_96, 1);
lean_inc(x_98);
lean_dec(x_96);
x_99 = l_Lean_Elab_Term_getCurrMacroScope(x_17, x_18, x_19, x_20, x_21, x_22, x_98);
x_100 = lean_ctor_get(x_99, 0);
lean_inc(x_100);
x_101 = lean_ctor_get(x_99, 1);
lean_inc(x_101);
lean_dec(x_99);
x_102 = l_Lean_Elab_Term_getMainModule___rarg(x_22, x_101);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = l_Lean_Syntax_expandInterpolatedStr___lambda__1___closed__1;
lean_inc(x_97);
x_106 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_106, 0, x_97);
lean_ctor_set(x_106, 1, x_105);
x_107 = l___private_Lean_Data_Position_0__Lean_reprPosition____x40_Lean_Data_Position___hyg_136____closed__1;
lean_inc(x_5);
x_108 = lean_name_mk_string(x_5, x_107);
x_109 = l_Lean_addMacroScope(x_103, x_108, x_100);
lean_inc(x_6);
x_110 = lean_name_mk_string(x_6, x_107);
lean_inc(x_7);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_7);
lean_inc(x_8);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_8);
x_113 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__3;
lean_inc(x_97);
x_114 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_114, 0, x_97);
lean_ctor_set(x_114, 1, x_113);
lean_ctor_set(x_114, 2, x_109);
lean_ctor_set(x_114, 3, x_112);
x_115 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_116 = lean_array_push(x_115, x_38);
lean_inc(x_106);
x_117 = lean_array_push(x_116, x_106);
x_118 = lean_array_push(x_117, x_114);
x_119 = l_term___x2b_x2b_____closed__2;
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_118);
lean_inc(x_2);
x_121 = lean_mk_syntax_ident(x_2);
x_122 = l_termMax__prec___closed__3;
x_123 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_123, 0, x_97);
lean_ctor_set(x_123, 1, x_122);
lean_inc(x_10);
x_124 = lean_array_push(x_10, x_123);
x_125 = l_termMax__prec___closed__2;
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_125);
lean_ctor_set(x_126, 1, x_124);
lean_inc(x_11);
x_127 = lean_array_push(x_11, x_46);
x_128 = lean_array_push(x_127, x_126);
lean_inc(x_9);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_9);
lean_ctor_set(x_129, 1, x_128);
lean_inc(x_11);
x_130 = lean_array_push(x_11, x_121);
x_131 = lean_array_push(x_130, x_129);
lean_inc(x_4);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_4);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_array_push(x_115, x_120);
x_134 = lean_array_push(x_133, x_106);
x_135 = lean_array_push(x_134, x_132);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_119);
lean_ctor_set(x_136, 1, x_135);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_47);
lean_ctor_set(x_137, 1, x_136);
x_138 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_138, 0, x_137);
x_30 = x_138;
x_31 = x_104;
goto block_36;
}
}
else
{
uint8_t x_139; 
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_38);
lean_dec(x_29);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_139 = !lean_is_exclusive(x_48);
if (x_139 == 0)
{
return x_48;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_140 = lean_ctor_get(x_48, 0);
x_141 = lean_ctor_get(x_48, 1);
lean_inc(x_141);
lean_inc(x_140);
lean_dec(x_48);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_140);
lean_ctor_set(x_142, 1, x_141);
return x_142;
}
}
block_36:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_30, 0);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_13, 2);
x_34 = lean_nat_add(x_15, x_33);
lean_dec(x_15);
x_14 = x_29;
x_15 = x_34;
x_16 = x_32;
x_23 = x_31;
goto _start;
}
}
else
{
lean_object* x_143; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_143, 0, x_16);
lean_ctor_set(x_143, 1, x_23);
return x_143;
}
}
else
{
lean_object* x_144; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_16);
lean_ctor_set(x_144, 1, x_23);
return x_144;
}
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Format.text");
return x_1;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("text");
return x_1;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__4;
x_2 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__5;
x_2 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Repr.addAppParen");
return x_1;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__9;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__9;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__10;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("addAppParen");
return x_1;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__2;
x_2 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__12;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__13;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__14;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Format.group");
return x_1;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__16;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__16;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__17;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__4;
x_2 = l_Lean_groupKind___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__5;
x_2 = l_Lean_groupKind___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__20;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__21;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__23() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Format.nest");
return x_1;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__23;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__23;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__24;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__26() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("nest");
return x_1;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__4;
x_2 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__26;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__5;
x_2 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__26;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__28;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__29;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__31() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(">=");
return x_1;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__32() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("then");
return x_1;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__33() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("1");
return x_1;
}
}
static lean_object* _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__34() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("2");
return x_1;
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 2);
lean_inc(x_17);
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_unsigned_to_nat(1u);
lean_inc(x_17);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_17);
lean_ctor_set(x_20, 2, x_19);
lean_inc(x_2);
x_21 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__1(x_20, x_17, x_18, x_2, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_ctor_get(x_3, 0);
lean_inc(x_24);
lean_dec(x_3);
x_25 = 1;
x_26 = l_Lean_Name_toString(x_24, x_25);
x_27 = lean_box(2);
x_28 = l_Lean_Syntax_mkStrLit(x_26, x_27);
lean_dec(x_26);
x_29 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_13, x_14, x_23);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Elab_Term_getCurrMacroScope(x_9, x_10, x_11, x_12, x_13, x_14, x_31);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Lean_Elab_Term_getMainModule___rarg(x_14, x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__5;
x_39 = l_Lean_addMacroScope(x_36, x_38, x_33);
x_40 = lean_box(0);
x_41 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__3;
x_42 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__8;
x_43 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_43, 0, x_30);
lean_ctor_set(x_43, 1, x_41);
lean_ctor_set(x_43, 2, x_39);
lean_ctor_set(x_43, 3, x_42);
x_44 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_45 = lean_array_push(x_44, x_28);
x_46 = l_Lean_nullKind___closed__2;
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_49 = lean_array_push(x_48, x_43);
x_50 = lean_array_push(x_49, x_47);
x_51 = l_myMacro____x40_Init_Notation___hyg_1997____closed__4;
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
lean_inc(x_16);
x_53 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_53, 0, x_18);
lean_ctor_set(x_53, 1, x_16);
lean_ctor_set(x_53, 2, x_19);
lean_inc(x_2);
lean_inc(x_16);
x_54 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__1(x_53, x_16, x_18, x_2, x_9, x_10, x_11, x_12, x_13, x_14, x_37);
lean_dec(x_53);
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_ctor_get(x_4, 4);
lean_inc(x_57);
lean_dec(x_4);
lean_inc(x_57);
x_58 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_58, 0, x_18);
lean_ctor_set(x_58, 1, x_57);
lean_ctor_set(x_58, 2, x_19);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_55);
lean_ctor_set(x_59, 1, x_52);
x_60 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__4;
x_61 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__5;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_62 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2(x_1, x_5, x_7, x_51, x_60, x_61, x_40, x_40, x_46, x_44, x_48, x_16, x_58, x_57, x_18, x_59, x_9, x_10, x_11, x_12, x_13, x_14, x_56);
lean_dec(x_58);
lean_dec(x_16);
lean_dec(x_1);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
lean_dec(x_62);
x_65 = lean_ctor_get(x_63, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_63, 1);
lean_inc(x_66);
lean_dec(x_63);
x_67 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_13, x_14, x_64);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = l_Lean_Elab_Term_getCurrMacroScope(x_9, x_10, x_11, x_12, x_13, x_14, x_69);
x_71 = lean_ctor_get(x_70, 1);
lean_inc(x_71);
lean_dec(x_70);
x_72 = l_Lean_Elab_Term_getMainModule___rarg(x_14, x_71);
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_dec(x_72);
x_74 = l_Lean_Parser_Tactic_inductionAlt___closed__5;
x_75 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_75, 0, x_68);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_mk_syntax_ident(x_6);
x_77 = lean_array_push(x_48, x_75);
x_78 = lean_array_push(x_77, x_76);
x_79 = l_Lean_Parser_Term_explicit___elambda__1___closed__1;
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_78);
lean_inc(x_2);
x_81 = l_Array_append___rarg(x_2, x_65);
lean_dec(x_65);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_46);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_array_push(x_48, x_80);
x_84 = lean_array_push(x_83, x_82);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_51);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_array_push(x_22, x_85);
x_87 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_13, x_14, x_73);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = l_Lean_Elab_Term_getCurrMacroScope(x_9, x_10, x_11, x_12, x_13, x_14, x_89);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_93 = l_Lean_Elab_Term_getMainModule___rarg(x_14, x_92);
lean_dec(x_14);
x_94 = !lean_is_exclusive(x_93);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; size_t x_99; size_t x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_95 = lean_ctor_get(x_93, 0);
x_96 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_88);
x_97 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_97, 0, x_88);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_array_get_size(x_86);
x_99 = lean_usize_of_nat(x_98);
lean_dec(x_98);
x_100 = 0;
x_101 = x_86;
x_102 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_99, x_100, x_101);
x_103 = x_102;
x_104 = l_myMacro____x40_Init_NotationExtra___hyg_4440____closed__7;
x_105 = l_Lean_mkSepArray(x_103, x_104);
lean_dec(x_103);
lean_inc(x_2);
x_106 = l_Array_append___rarg(x_2, x_105);
lean_dec(x_105);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_46);
lean_ctor_set(x_107, 1, x_106);
x_108 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
lean_inc(x_88);
x_109 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_109, 0, x_88);
lean_ctor_set(x_109, 1, x_108);
x_110 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__13;
lean_inc(x_91);
lean_inc(x_95);
x_111 = l_Lean_addMacroScope(x_95, x_110, x_91);
x_112 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__11;
x_113 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__15;
lean_inc(x_88);
x_114 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_114, 0, x_88);
lean_ctor_set(x_114, 1, x_112);
lean_ctor_set(x_114, 2, x_111);
lean_ctor_set(x_114, 3, x_113);
x_115 = l_prec_x28___x29___closed__3;
lean_inc(x_88);
x_116 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_116, 0, x_88);
lean_ctor_set(x_116, 1, x_115);
x_117 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__19;
lean_inc(x_91);
lean_inc(x_95);
x_118 = l_Lean_addMacroScope(x_95, x_117, x_91);
x_119 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__18;
x_120 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__22;
lean_inc(x_88);
x_121 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_121, 0, x_88);
lean_ctor_set(x_121, 1, x_119);
lean_ctor_set(x_121, 2, x_118);
lean_ctor_set(x_121, 3, x_120);
x_122 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__27;
lean_inc(x_91);
lean_inc(x_95);
x_123 = l_Lean_addMacroScope(x_95, x_122, x_91);
x_124 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__25;
x_125 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__30;
lean_inc(x_88);
x_126 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_126, 0, x_88);
lean_ctor_set(x_126, 1, x_124);
lean_ctor_set(x_126, 2, x_123);
lean_ctor_set(x_126, 3, x_125);
x_127 = l_Lean_Parser_Term_notFollowedByRedefinedTermToken___elambda__1___closed__43;
lean_inc(x_88);
x_128 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_128, 0, x_88);
lean_ctor_set(x_128, 1, x_127);
x_129 = l_Lean_Parser_Syntax_addPrec___closed__14;
x_130 = l_Lean_addMacroScope(x_95, x_129, x_91);
x_131 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__4;
lean_inc(x_88);
x_132 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_132, 0, x_88);
lean_ctor_set(x_132, 1, x_131);
lean_ctor_set(x_132, 2, x_130);
lean_ctor_set(x_132, 3, x_40);
x_133 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__31;
lean_inc(x_88);
x_134 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_134, 0, x_88);
lean_ctor_set(x_134, 1, x_133);
x_135 = l_termMax__prec___closed__3;
lean_inc(x_88);
x_136 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_136, 0, x_88);
lean_ctor_set(x_136, 1, x_135);
x_137 = lean_array_push(x_44, x_136);
x_138 = l_termMax__prec___closed__2;
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_137);
x_140 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
lean_inc(x_132);
x_141 = lean_array_push(x_140, x_132);
x_142 = lean_array_push(x_141, x_134);
x_143 = lean_array_push(x_142, x_139);
x_144 = l_term___x3e_x3d_____closed__2;
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_143);
x_146 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__32;
lean_inc(x_88);
x_147 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_147, 0, x_88);
lean_ctor_set(x_147, 1, x_146);
x_148 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__33;
lean_inc(x_88);
x_149 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_149, 0, x_88);
lean_ctor_set(x_149, 1, x_148);
x_150 = lean_array_push(x_44, x_149);
x_151 = l_Lean_numLitKind___closed__2;
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_150);
x_153 = l_termDepIfThenElse___closed__24;
lean_inc(x_88);
x_154 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_154, 0, x_88);
lean_ctor_set(x_154, 1, x_153);
x_155 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__34;
lean_inc(x_88);
x_156 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_156, 0, x_88);
lean_ctor_set(x_156, 1, x_155);
x_157 = lean_array_push(x_44, x_156);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_151);
lean_ctor_set(x_158, 1, x_157);
x_159 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_160 = lean_array_push(x_159, x_128);
x_161 = lean_array_push(x_160, x_145);
x_162 = lean_array_push(x_161, x_147);
x_163 = lean_array_push(x_162, x_152);
x_164 = lean_array_push(x_163, x_154);
x_165 = lean_array_push(x_164, x_158);
x_166 = l_termIfThenElse___closed__2;
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_165);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_46);
lean_ctor_set(x_168, 1, x_2);
x_169 = lean_array_push(x_48, x_167);
lean_inc(x_168);
x_170 = lean_array_push(x_169, x_168);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_46);
lean_ctor_set(x_171, 1, x_170);
x_172 = l_prec_x28___x29___closed__7;
x_173 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_173, 0, x_88);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_array_push(x_140, x_116);
lean_inc(x_174);
x_175 = lean_array_push(x_174, x_171);
lean_inc(x_173);
x_176 = lean_array_push(x_175, x_173);
x_177 = l_myMacro____x40_Init_Notation___hyg_12862____closed__8;
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set(x_178, 1, x_176);
x_179 = lean_array_push(x_48, x_66);
lean_inc(x_168);
x_180 = lean_array_push(x_179, x_168);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_46);
lean_ctor_set(x_181, 1, x_180);
lean_inc(x_174);
x_182 = lean_array_push(x_174, x_181);
lean_inc(x_173);
x_183 = lean_array_push(x_182, x_173);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_177);
lean_ctor_set(x_184, 1, x_183);
x_185 = lean_array_push(x_48, x_178);
x_186 = lean_array_push(x_185, x_184);
x_187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_187, 0, x_46);
lean_ctor_set(x_187, 1, x_186);
x_188 = lean_array_push(x_48, x_126);
x_189 = lean_array_push(x_188, x_187);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_51);
lean_ctor_set(x_190, 1, x_189);
x_191 = lean_array_push(x_48, x_190);
lean_inc(x_168);
x_192 = lean_array_push(x_191, x_168);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_46);
lean_ctor_set(x_193, 1, x_192);
lean_inc(x_174);
x_194 = lean_array_push(x_174, x_193);
lean_inc(x_173);
x_195 = lean_array_push(x_194, x_173);
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_177);
lean_ctor_set(x_196, 1, x_195);
x_197 = lean_array_push(x_44, x_196);
x_198 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_198, 0, x_46);
lean_ctor_set(x_198, 1, x_197);
x_199 = lean_array_push(x_48, x_121);
x_200 = lean_array_push(x_199, x_198);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_51);
lean_ctor_set(x_201, 1, x_200);
x_202 = lean_array_push(x_48, x_201);
x_203 = lean_array_push(x_202, x_168);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_46);
lean_ctor_set(x_204, 1, x_203);
x_205 = lean_array_push(x_174, x_204);
x_206 = lean_array_push(x_205, x_173);
x_207 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_207, 0, x_177);
lean_ctor_set(x_207, 1, x_206);
x_208 = lean_array_push(x_48, x_207);
x_209 = lean_array_push(x_208, x_132);
x_210 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_210, 0, x_46);
lean_ctor_set(x_210, 1, x_209);
x_211 = lean_array_push(x_48, x_114);
x_212 = lean_array_push(x_211, x_210);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_51);
lean_ctor_set(x_213, 1, x_212);
x_214 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_215 = lean_array_push(x_214, x_97);
x_216 = lean_array_push(x_215, x_107);
x_217 = lean_array_push(x_216, x_109);
x_218 = lean_array_push(x_217, x_213);
x_219 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_219);
lean_ctor_set(x_220, 1, x_218);
lean_ctor_set(x_93, 0, x_220);
return x_93;
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; size_t x_226; size_t x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; 
x_221 = lean_ctor_get(x_93, 0);
x_222 = lean_ctor_get(x_93, 1);
lean_inc(x_222);
lean_inc(x_221);
lean_dec(x_93);
x_223 = l_myMacro____x40_Init_Notation___hyg_13362____closed__11;
lean_inc(x_88);
x_224 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_224, 0, x_88);
lean_ctor_set(x_224, 1, x_223);
x_225 = lean_array_get_size(x_86);
x_226 = lean_usize_of_nat(x_225);
lean_dec(x_225);
x_227 = 0;
x_228 = x_86;
x_229 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_226, x_227, x_228);
x_230 = x_229;
x_231 = l_myMacro____x40_Init_NotationExtra___hyg_4440____closed__7;
x_232 = l_Lean_mkSepArray(x_230, x_231);
lean_dec(x_230);
lean_inc(x_2);
x_233 = l_Array_append___rarg(x_2, x_232);
lean_dec(x_232);
x_234 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_234, 0, x_46);
lean_ctor_set(x_234, 1, x_233);
x_235 = l_myMacro____x40_Init_Notation___hyg_12862____closed__13;
lean_inc(x_88);
x_236 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_236, 0, x_88);
lean_ctor_set(x_236, 1, x_235);
x_237 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__13;
lean_inc(x_91);
lean_inc(x_221);
x_238 = l_Lean_addMacroScope(x_221, x_237, x_91);
x_239 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__11;
x_240 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__15;
lean_inc(x_88);
x_241 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_241, 0, x_88);
lean_ctor_set(x_241, 1, x_239);
lean_ctor_set(x_241, 2, x_238);
lean_ctor_set(x_241, 3, x_240);
x_242 = l_prec_x28___x29___closed__3;
lean_inc(x_88);
x_243 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_243, 0, x_88);
lean_ctor_set(x_243, 1, x_242);
x_244 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__19;
lean_inc(x_91);
lean_inc(x_221);
x_245 = l_Lean_addMacroScope(x_221, x_244, x_91);
x_246 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__18;
x_247 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__22;
lean_inc(x_88);
x_248 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_248, 0, x_88);
lean_ctor_set(x_248, 1, x_246);
lean_ctor_set(x_248, 2, x_245);
lean_ctor_set(x_248, 3, x_247);
x_249 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__27;
lean_inc(x_91);
lean_inc(x_221);
x_250 = l_Lean_addMacroScope(x_221, x_249, x_91);
x_251 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__25;
x_252 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__30;
lean_inc(x_88);
x_253 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_253, 0, x_88);
lean_ctor_set(x_253, 1, x_251);
lean_ctor_set(x_253, 2, x_250);
lean_ctor_set(x_253, 3, x_252);
x_254 = l_Lean_Parser_Term_notFollowedByRedefinedTermToken___elambda__1___closed__43;
lean_inc(x_88);
x_255 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_255, 0, x_88);
lean_ctor_set(x_255, 1, x_254);
x_256 = l_Lean_Parser_Syntax_addPrec___closed__14;
x_257 = l_Lean_addMacroScope(x_221, x_256, x_91);
x_258 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__4;
lean_inc(x_88);
x_259 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_259, 0, x_88);
lean_ctor_set(x_259, 1, x_258);
lean_ctor_set(x_259, 2, x_257);
lean_ctor_set(x_259, 3, x_40);
x_260 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__31;
lean_inc(x_88);
x_261 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_261, 0, x_88);
lean_ctor_set(x_261, 1, x_260);
x_262 = l_termMax__prec___closed__3;
lean_inc(x_88);
x_263 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_263, 0, x_88);
lean_ctor_set(x_263, 1, x_262);
x_264 = lean_array_push(x_44, x_263);
x_265 = l_termMax__prec___closed__2;
x_266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_266, 0, x_265);
lean_ctor_set(x_266, 1, x_264);
x_267 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
lean_inc(x_259);
x_268 = lean_array_push(x_267, x_259);
x_269 = lean_array_push(x_268, x_261);
x_270 = lean_array_push(x_269, x_266);
x_271 = l_term___x3e_x3d_____closed__2;
x_272 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_272, 0, x_271);
lean_ctor_set(x_272, 1, x_270);
x_273 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__32;
lean_inc(x_88);
x_274 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_274, 0, x_88);
lean_ctor_set(x_274, 1, x_273);
x_275 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__33;
lean_inc(x_88);
x_276 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_276, 0, x_88);
lean_ctor_set(x_276, 1, x_275);
x_277 = lean_array_push(x_44, x_276);
x_278 = l_Lean_numLitKind___closed__2;
x_279 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_279, 0, x_278);
lean_ctor_set(x_279, 1, x_277);
x_280 = l_termDepIfThenElse___closed__24;
lean_inc(x_88);
x_281 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_281, 0, x_88);
lean_ctor_set(x_281, 1, x_280);
x_282 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__34;
lean_inc(x_88);
x_283 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_283, 0, x_88);
lean_ctor_set(x_283, 1, x_282);
x_284 = lean_array_push(x_44, x_283);
x_285 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_285, 0, x_278);
lean_ctor_set(x_285, 1, x_284);
x_286 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_287 = lean_array_push(x_286, x_255);
x_288 = lean_array_push(x_287, x_272);
x_289 = lean_array_push(x_288, x_274);
x_290 = lean_array_push(x_289, x_279);
x_291 = lean_array_push(x_290, x_281);
x_292 = lean_array_push(x_291, x_285);
x_293 = l_termIfThenElse___closed__2;
x_294 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_294, 0, x_293);
lean_ctor_set(x_294, 1, x_292);
x_295 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_295, 0, x_46);
lean_ctor_set(x_295, 1, x_2);
x_296 = lean_array_push(x_48, x_294);
lean_inc(x_295);
x_297 = lean_array_push(x_296, x_295);
x_298 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_298, 0, x_46);
lean_ctor_set(x_298, 1, x_297);
x_299 = l_prec_x28___x29___closed__7;
x_300 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_300, 0, x_88);
lean_ctor_set(x_300, 1, x_299);
x_301 = lean_array_push(x_267, x_243);
lean_inc(x_301);
x_302 = lean_array_push(x_301, x_298);
lean_inc(x_300);
x_303 = lean_array_push(x_302, x_300);
x_304 = l_myMacro____x40_Init_Notation___hyg_12862____closed__8;
x_305 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_305, 0, x_304);
lean_ctor_set(x_305, 1, x_303);
x_306 = lean_array_push(x_48, x_66);
lean_inc(x_295);
x_307 = lean_array_push(x_306, x_295);
x_308 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_308, 0, x_46);
lean_ctor_set(x_308, 1, x_307);
lean_inc(x_301);
x_309 = lean_array_push(x_301, x_308);
lean_inc(x_300);
x_310 = lean_array_push(x_309, x_300);
x_311 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_311, 0, x_304);
lean_ctor_set(x_311, 1, x_310);
x_312 = lean_array_push(x_48, x_305);
x_313 = lean_array_push(x_312, x_311);
x_314 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_314, 0, x_46);
lean_ctor_set(x_314, 1, x_313);
x_315 = lean_array_push(x_48, x_253);
x_316 = lean_array_push(x_315, x_314);
x_317 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_317, 0, x_51);
lean_ctor_set(x_317, 1, x_316);
x_318 = lean_array_push(x_48, x_317);
lean_inc(x_295);
x_319 = lean_array_push(x_318, x_295);
x_320 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_320, 0, x_46);
lean_ctor_set(x_320, 1, x_319);
lean_inc(x_301);
x_321 = lean_array_push(x_301, x_320);
lean_inc(x_300);
x_322 = lean_array_push(x_321, x_300);
x_323 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_323, 0, x_304);
lean_ctor_set(x_323, 1, x_322);
x_324 = lean_array_push(x_44, x_323);
x_325 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_325, 0, x_46);
lean_ctor_set(x_325, 1, x_324);
x_326 = lean_array_push(x_48, x_248);
x_327 = lean_array_push(x_326, x_325);
x_328 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_328, 0, x_51);
lean_ctor_set(x_328, 1, x_327);
x_329 = lean_array_push(x_48, x_328);
x_330 = lean_array_push(x_329, x_295);
x_331 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_331, 0, x_46);
lean_ctor_set(x_331, 1, x_330);
x_332 = lean_array_push(x_301, x_331);
x_333 = lean_array_push(x_332, x_300);
x_334 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_334, 0, x_304);
lean_ctor_set(x_334, 1, x_333);
x_335 = lean_array_push(x_48, x_334);
x_336 = lean_array_push(x_335, x_259);
x_337 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_337, 0, x_46);
lean_ctor_set(x_337, 1, x_336);
x_338 = lean_array_push(x_48, x_241);
x_339 = lean_array_push(x_338, x_337);
x_340 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_340, 0, x_51);
lean_ctor_set(x_340, 1, x_339);
x_341 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_342 = lean_array_push(x_341, x_224);
x_343 = lean_array_push(x_342, x_234);
x_344 = lean_array_push(x_343, x_236);
x_345 = lean_array_push(x_344, x_340);
x_346 = l_myMacro____x40_Init_Notation___hyg_13362____closed__10;
x_347 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_347, 0, x_346);
lean_ctor_set(x_347, 1, x_345);
x_348 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_348, 0, x_347);
lean_ctor_set(x_348, 1, x_222);
return x_348;
}
}
else
{
uint8_t x_349; 
lean_dec(x_22);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_2);
x_349 = !lean_is_exclusive(x_62);
if (x_349 == 0)
{
return x_62;
}
else
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; 
x_350 = lean_ctor_get(x_62, 0);
x_351 = lean_ctor_get(x_62, 1);
lean_inc(x_351);
lean_inc(x_350);
lean_dec(x_62);
x_352 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_352, 0, x_350);
lean_ctor_set(x_352, 1, x_351);
return x_352;
}
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_13; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_4, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_4, 1);
lean_inc(x_15);
lean_dec(x_4);
lean_inc(x_6);
lean_inc(x_14);
x_16 = l_Lean_getConstInfoCtor___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__2(x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 2);
lean_inc(x_20);
lean_inc(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_21 = lean_alloc_closure((void*)(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___boxed), 15, 6);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_3);
lean_closure_set(x_21, 2, x_19);
lean_closure_set(x_21, 3, x_17);
lean_closure_set(x_21, 4, x_2);
lean_closure_set(x_21, 5, x_14);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_22 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Deriving_mkInductArgNames___spec__2___rarg(x_20, x_21, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_array_push(x_5, x_23);
x_4 = x_15;
x_5 = x_25;
x_12 = x_24;
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_22);
if (x_27 == 0)
{
return x_22;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_22, 0);
x_29 = lean_ctor_get(x_22, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_22);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_16);
if (x_31 == 0)
{
return x_16;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_16, 0);
x_33 = lean_ctor_get(x_16, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_16);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_1, 4);
lean_inc(x_10);
x_11 = l_Array_empty___closed__1;
x_12 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3(x_1, x_2, x_11, x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
_start:
{
lean_object* x_24; 
x_24 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_3);
lean_dec(x_1);
return x_24;
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_16;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForInduct___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
x_11 = l_Lean_Elab_Deriving_mkDiscrs(x_1, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_14 = l_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_8, x_9, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5, x_6, x_7, x_8, x_9, x_19);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_Elab_Term_getMainModule___rarg(x_9, x_21);
lean_dec(x_9);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
x_25 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_18);
x_26 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_26, 0, x_18);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_array_get_size(x_12);
x_28 = lean_usize_of_nat(x_27);
lean_dec(x_27);
x_29 = 0;
x_30 = x_12;
x_31 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_28, x_29, x_30);
x_32 = x_31;
x_33 = l_myMacro____x40_Init_NotationExtra___hyg_4440____closed__7;
x_34 = l_Lean_mkSepArray(x_32, x_33);
lean_dec(x_32);
x_35 = l_Array_empty___closed__1;
x_36 = l_Array_append___rarg(x_35, x_34);
lean_dec(x_34);
x_37 = l_Lean_nullKind___closed__2;
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
x_39 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
x_40 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_40, 0, x_18);
lean_ctor_set(x_40, 1, x_39);
x_41 = l_Array_append___rarg(x_35, x_15);
lean_dec(x_15);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_37);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_44 = lean_array_push(x_43, x_42);
x_45 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
x_47 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_48 = lean_array_push(x_47, x_26);
x_49 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_50 = lean_array_push(x_48, x_49);
x_51 = lean_array_push(x_50, x_38);
x_52 = lean_array_push(x_51, x_49);
x_53 = lean_array_push(x_52, x_40);
x_54 = lean_array_push(x_53, x_46);
x_55 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
lean_ctor_set(x_22, 0, x_56);
return x_22;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; size_t x_61; size_t x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_57 = lean_ctor_get(x_22, 1);
lean_inc(x_57);
lean_dec(x_22);
x_58 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_inc(x_18);
x_59 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_59, 0, x_18);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_array_get_size(x_12);
x_61 = lean_usize_of_nat(x_60);
lean_dec(x_60);
x_62 = 0;
x_63 = x_12;
x_64 = l_Array_mapMUnsafe_map___at_myMacro____x40_Init_NotationExtra___hyg_4440____spec__3(x_61, x_62, x_63);
x_65 = x_64;
x_66 = l_myMacro____x40_Init_NotationExtra___hyg_4440____closed__7;
x_67 = l_Lean_mkSepArray(x_65, x_66);
lean_dec(x_65);
x_68 = l_Array_empty___closed__1;
x_69 = l_Array_append___rarg(x_68, x_67);
lean_dec(x_67);
x_70 = l_Lean_nullKind___closed__2;
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
x_72 = l_myMacro____x40_Init_Notation___hyg_13362____closed__6;
x_73 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_73, 0, x_18);
lean_ctor_set(x_73, 1, x_72);
x_74 = l_Array_append___rarg(x_68, x_15);
lean_dec(x_15);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_70);
lean_ctor_set(x_75, 1, x_74);
x_76 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_77 = lean_array_push(x_76, x_75);
x_78 = l_myMacro____x40_Init_Notation___hyg_13362____closed__8;
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
x_80 = l_myMacro____x40_Init_Notation___hyg_1198____closed__8;
x_81 = lean_array_push(x_80, x_59);
x_82 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_83 = lean_array_push(x_81, x_82);
x_84 = lean_array_push(x_83, x_71);
x_85 = lean_array_push(x_84, x_82);
x_86 = lean_array_push(x_85, x_73);
x_87 = lean_array_push(x_86, x_79);
x_88 = l_myMacro____x40_Init_Notation___hyg_13362____closed__2;
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_87);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_57);
return x_90;
}
}
else
{
uint8_t x_91; 
lean_dec(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_91 = !lean_is_exclusive(x_14);
if (x_91 == 0)
{
return x_14;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_14, 0);
x_93 = lean_ctor_get(x_14, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_14);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
else
{
uint8_t x_95; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_95 = !lean_is_exclusive(x_11);
if (x_95 == 0)
{
return x_11;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_11, 0);
x_97 = lean_ctor_get(x_11, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_11);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForInduct(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Repr_mkBodyForInduct___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkBodyForInduct___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Deriving_Repr_mkBodyForInduct(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkBody___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_isStructure(x_14, x_16);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = l_Lean_Elab_Deriving_Repr_mkBodyForInduct___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
return x_18;
}
else
{
lean_object* x_19; 
lean_dec(x_3);
x_19 = l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg(x_1, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
lean_dec(x_1);
return x_19;
}
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkBody(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Repr_mkBody___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkBody___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Deriving_Repr_mkBody(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_mkAuxFunction___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__19;
x_2 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkAuxFunction___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_ctor_get_uint8(x_2, sizeof(void*)*2);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_14 = lean_ctor_get(x_1, 0);
x_15 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_10, x_11, x_12);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Elab_Term_getCurrMacroScope(x_6, x_7, x_8, x_9, x_10, x_11, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_Term_getMainModule___rarg(x_11, x_20);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = l_Lean_Parser_Command_private___elambda__1___closed__1;
lean_inc(x_16);
x_25 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_25, 0, x_16);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_27 = lean_array_push(x_26, x_25);
x_28 = l_Lean_Parser_Command_private___elambda__1___closed__2;
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = lean_array_push(x_26, x_29);
x_31 = l_Lean_nullKind___closed__2;
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = l_Lean_Elab_Deriving_Repr_mkAuxFunction___lambda__1___closed__1;
x_34 = lean_array_push(x_33, x_32);
x_35 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_36 = lean_array_push(x_34, x_35);
x_37 = lean_array_push(x_36, x_35);
x_38 = lean_array_push(x_37, x_35);
x_39 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__7;
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
x_41 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__20;
lean_inc(x_16);
x_42 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_42, 0, x_16);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_mk_syntax_ident(x_3);
x_44 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_45 = lean_array_push(x_44, x_43);
x_46 = lean_array_push(x_45, x_35);
x_47 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__23;
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = l_Array_empty___closed__1;
x_50 = l_Array_append___rarg(x_49, x_14);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_31);
lean_ctor_set(x_51, 1, x_50);
x_52 = l_myMacro____x40_Init_Notation___hyg_14133____closed__9;
lean_inc(x_16);
x_53 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_53, 0, x_16);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__4;
x_55 = l_Lean_addMacroScope(x_23, x_54, x_19);
x_56 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__3;
x_57 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__7;
lean_inc(x_16);
x_58 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_58, 0, x_16);
lean_ctor_set(x_58, 1, x_56);
lean_ctor_set(x_58, 2, x_55);
lean_ctor_set(x_58, 3, x_57);
x_59 = lean_array_push(x_44, x_53);
x_60 = lean_array_push(x_59, x_58);
x_61 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17244____closed__5;
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_60);
x_63 = lean_array_push(x_26, x_62);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_31);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_array_push(x_44, x_51);
x_66 = lean_array_push(x_65, x_64);
x_67 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__25;
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_66);
x_69 = l_myMacro____x40_Init_Notation___hyg_14569____closed__11;
x_70 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_70, 0, x_16);
lean_ctor_set(x_70, 1, x_69);
x_71 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_72 = lean_array_push(x_71, x_70);
x_73 = lean_array_push(x_72, x_4);
x_74 = lean_array_push(x_73, x_35);
x_75 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__33;
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
x_77 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_78 = lean_array_push(x_77, x_42);
x_79 = lean_array_push(x_78, x_48);
x_80 = lean_array_push(x_79, x_68);
x_81 = lean_array_push(x_80, x_76);
x_82 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__21;
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
x_84 = lean_array_push(x_44, x_40);
x_85 = lean_array_push(x_84, x_83);
x_86 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__5;
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_85);
lean_ctor_set(x_21, 0, x_87);
return x_21;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_88 = lean_ctor_get(x_21, 0);
x_89 = lean_ctor_get(x_21, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_21);
x_90 = l_Lean_Parser_Command_private___elambda__1___closed__1;
lean_inc(x_16);
x_91 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_91, 0, x_16);
lean_ctor_set(x_91, 1, x_90);
x_92 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_93 = lean_array_push(x_92, x_91);
x_94 = l_Lean_Parser_Command_private___elambda__1___closed__2;
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_93);
x_96 = lean_array_push(x_92, x_95);
x_97 = l_Lean_nullKind___closed__2;
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_96);
x_99 = l_Lean_Elab_Deriving_Repr_mkAuxFunction___lambda__1___closed__1;
x_100 = lean_array_push(x_99, x_98);
x_101 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_102 = lean_array_push(x_100, x_101);
x_103 = lean_array_push(x_102, x_101);
x_104 = lean_array_push(x_103, x_101);
x_105 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__7;
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_104);
x_107 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__20;
lean_inc(x_16);
x_108 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_108, 0, x_16);
lean_ctor_set(x_108, 1, x_107);
x_109 = lean_mk_syntax_ident(x_3);
x_110 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_111 = lean_array_push(x_110, x_109);
x_112 = lean_array_push(x_111, x_101);
x_113 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__23;
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_112);
x_115 = l_Array_empty___closed__1;
x_116 = l_Array_append___rarg(x_115, x_14);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_97);
lean_ctor_set(x_117, 1, x_116);
x_118 = l_myMacro____x40_Init_Notation___hyg_14133____closed__9;
lean_inc(x_16);
x_119 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_119, 0, x_16);
lean_ctor_set(x_119, 1, x_118);
x_120 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__4;
x_121 = l_Lean_addMacroScope(x_88, x_120, x_19);
x_122 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__3;
x_123 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__7;
lean_inc(x_16);
x_124 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_124, 0, x_16);
lean_ctor_set(x_124, 1, x_122);
lean_ctor_set(x_124, 2, x_121);
lean_ctor_set(x_124, 3, x_123);
x_125 = lean_array_push(x_110, x_119);
x_126 = lean_array_push(x_125, x_124);
x_127 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17244____closed__5;
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_126);
x_129 = lean_array_push(x_92, x_128);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_97);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_array_push(x_110, x_117);
x_132 = lean_array_push(x_131, x_130);
x_133 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__25;
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_132);
x_135 = l_myMacro____x40_Init_Notation___hyg_14569____closed__11;
x_136 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_136, 0, x_16);
lean_ctor_set(x_136, 1, x_135);
x_137 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_138 = lean_array_push(x_137, x_136);
x_139 = lean_array_push(x_138, x_4);
x_140 = lean_array_push(x_139, x_101);
x_141 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__33;
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_140);
x_143 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_144 = lean_array_push(x_143, x_108);
x_145 = lean_array_push(x_144, x_114);
x_146 = lean_array_push(x_145, x_134);
x_147 = lean_array_push(x_146, x_142);
x_148 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__21;
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_147);
x_150 = lean_array_push(x_110, x_106);
x_151 = lean_array_push(x_150, x_149);
x_152 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__5;
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_151);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_89);
return x_154;
}
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; 
x_155 = lean_ctor_get(x_1, 0);
x_156 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_10, x_11, x_12);
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_156, 1);
lean_inc(x_158);
lean_dec(x_156);
x_159 = l_Lean_Elab_Term_getCurrMacroScope(x_6, x_7, x_8, x_9, x_10, x_11, x_158);
x_160 = lean_ctor_get(x_159, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_159, 1);
lean_inc(x_161);
lean_dec(x_159);
x_162 = l_Lean_Elab_Term_getMainModule___rarg(x_11, x_161);
x_163 = !lean_is_exclusive(x_162);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_164 = lean_ctor_get(x_162, 0);
x_165 = l_Lean_Parser_Command_private___elambda__1___closed__1;
lean_inc(x_157);
x_166 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_166, 0, x_157);
lean_ctor_set(x_166, 1, x_165);
x_167 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_168 = lean_array_push(x_167, x_166);
x_169 = l_Lean_Parser_Command_private___elambda__1___closed__2;
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_169);
lean_ctor_set(x_170, 1, x_168);
x_171 = lean_array_push(x_167, x_170);
x_172 = l_Lean_nullKind___closed__2;
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_172);
lean_ctor_set(x_173, 1, x_171);
x_174 = l_Lean_Parser_Command_partial___elambda__1___closed__1;
lean_inc(x_157);
x_175 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_175, 0, x_157);
lean_ctor_set(x_175, 1, x_174);
x_176 = lean_array_push(x_167, x_175);
x_177 = l_Lean_Parser_Command_partial___elambda__1___closed__2;
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_177);
lean_ctor_set(x_178, 1, x_176);
x_179 = lean_array_push(x_167, x_178);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_172);
lean_ctor_set(x_180, 1, x_179);
x_181 = l_Lean_Elab_Deriving_Repr_mkAuxFunction___lambda__1___closed__1;
x_182 = lean_array_push(x_181, x_173);
x_183 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_184 = lean_array_push(x_182, x_183);
x_185 = lean_array_push(x_184, x_183);
x_186 = lean_array_push(x_185, x_180);
x_187 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__7;
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_186);
x_189 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__20;
lean_inc(x_157);
x_190 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_190, 0, x_157);
lean_ctor_set(x_190, 1, x_189);
x_191 = lean_mk_syntax_ident(x_3);
x_192 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_193 = lean_array_push(x_192, x_191);
x_194 = lean_array_push(x_193, x_183);
x_195 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__23;
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_194);
x_197 = l_Array_empty___closed__1;
x_198 = l_Array_append___rarg(x_197, x_155);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_172);
lean_ctor_set(x_199, 1, x_198);
x_200 = l_myMacro____x40_Init_Notation___hyg_14133____closed__9;
lean_inc(x_157);
x_201 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_201, 0, x_157);
lean_ctor_set(x_201, 1, x_200);
x_202 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__4;
x_203 = l_Lean_addMacroScope(x_164, x_202, x_160);
x_204 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__3;
x_205 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__7;
lean_inc(x_157);
x_206 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_206, 0, x_157);
lean_ctor_set(x_206, 1, x_204);
lean_ctor_set(x_206, 2, x_203);
lean_ctor_set(x_206, 3, x_205);
x_207 = lean_array_push(x_192, x_201);
x_208 = lean_array_push(x_207, x_206);
x_209 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17244____closed__5;
x_210 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_210, 0, x_209);
lean_ctor_set(x_210, 1, x_208);
x_211 = lean_array_push(x_167, x_210);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_172);
lean_ctor_set(x_212, 1, x_211);
x_213 = lean_array_push(x_192, x_199);
x_214 = lean_array_push(x_213, x_212);
x_215 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__25;
x_216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_216, 0, x_215);
lean_ctor_set(x_216, 1, x_214);
x_217 = l_myMacro____x40_Init_Notation___hyg_14569____closed__11;
x_218 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_218, 0, x_157);
lean_ctor_set(x_218, 1, x_217);
x_219 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_220 = lean_array_push(x_219, x_218);
x_221 = lean_array_push(x_220, x_4);
x_222 = lean_array_push(x_221, x_183);
x_223 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__33;
x_224 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_224, 0, x_223);
lean_ctor_set(x_224, 1, x_222);
x_225 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_226 = lean_array_push(x_225, x_190);
x_227 = lean_array_push(x_226, x_196);
x_228 = lean_array_push(x_227, x_216);
x_229 = lean_array_push(x_228, x_224);
x_230 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__21;
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_230);
lean_ctor_set(x_231, 1, x_229);
x_232 = lean_array_push(x_192, x_188);
x_233 = lean_array_push(x_232, x_231);
x_234 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__5;
x_235 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_235, 0, x_234);
lean_ctor_set(x_235, 1, x_233);
lean_ctor_set(x_162, 0, x_235);
return x_162;
}
else
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
x_236 = lean_ctor_get(x_162, 0);
x_237 = lean_ctor_get(x_162, 1);
lean_inc(x_237);
lean_inc(x_236);
lean_dec(x_162);
x_238 = l_Lean_Parser_Command_private___elambda__1___closed__1;
lean_inc(x_157);
x_239 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_239, 0, x_157);
lean_ctor_set(x_239, 1, x_238);
x_240 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_241 = lean_array_push(x_240, x_239);
x_242 = l_Lean_Parser_Command_private___elambda__1___closed__2;
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_242);
lean_ctor_set(x_243, 1, x_241);
x_244 = lean_array_push(x_240, x_243);
x_245 = l_Lean_nullKind___closed__2;
x_246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_246, 0, x_245);
lean_ctor_set(x_246, 1, x_244);
x_247 = l_Lean_Parser_Command_partial___elambda__1___closed__1;
lean_inc(x_157);
x_248 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_248, 0, x_157);
lean_ctor_set(x_248, 1, x_247);
x_249 = lean_array_push(x_240, x_248);
x_250 = l_Lean_Parser_Command_partial___elambda__1___closed__2;
x_251 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_251, 0, x_250);
lean_ctor_set(x_251, 1, x_249);
x_252 = lean_array_push(x_240, x_251);
x_253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_253, 0, x_245);
lean_ctor_set(x_253, 1, x_252);
x_254 = l_Lean_Elab_Deriving_Repr_mkAuxFunction___lambda__1___closed__1;
x_255 = lean_array_push(x_254, x_246);
x_256 = l_myMacro____x40_Init_Notation___hyg_1318____closed__9;
x_257 = lean_array_push(x_255, x_256);
x_258 = lean_array_push(x_257, x_256);
x_259 = lean_array_push(x_258, x_253);
x_260 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__7;
x_261 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_261, 0, x_260);
lean_ctor_set(x_261, 1, x_259);
x_262 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__20;
lean_inc(x_157);
x_263 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_263, 0, x_157);
lean_ctor_set(x_263, 1, x_262);
x_264 = lean_mk_syntax_ident(x_3);
x_265 = l_myMacro____x40_Init_Notation___hyg_1318____closed__8;
x_266 = lean_array_push(x_265, x_264);
x_267 = lean_array_push(x_266, x_256);
x_268 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__23;
x_269 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_269, 0, x_268);
lean_ctor_set(x_269, 1, x_267);
x_270 = l_Array_empty___closed__1;
x_271 = l_Array_append___rarg(x_270, x_155);
x_272 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_272, 0, x_245);
lean_ctor_set(x_272, 1, x_271);
x_273 = l_myMacro____x40_Init_Notation___hyg_14133____closed__9;
lean_inc(x_157);
x_274 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_274, 0, x_157);
lean_ctor_set(x_274, 1, x_273);
x_275 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__4;
x_276 = l_Lean_addMacroScope(x_236, x_275, x_160);
x_277 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__3;
x_278 = l_Std_myMacro____x40_Init_Data_Format_Macro___hyg_18____closed__7;
lean_inc(x_157);
x_279 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_279, 0, x_157);
lean_ctor_set(x_279, 1, x_277);
lean_ctor_set(x_279, 2, x_276);
lean_ctor_set(x_279, 3, x_278);
x_280 = lean_array_push(x_265, x_274);
x_281 = lean_array_push(x_280, x_279);
x_282 = l_Lean_Parser_Tactic_myMacro____x40_Init_Notation___hyg_17244____closed__5;
x_283 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_283, 0, x_282);
lean_ctor_set(x_283, 1, x_281);
x_284 = lean_array_push(x_240, x_283);
x_285 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_285, 0, x_245);
lean_ctor_set(x_285, 1, x_284);
x_286 = lean_array_push(x_265, x_272);
x_287 = lean_array_push(x_286, x_285);
x_288 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__25;
x_289 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_289, 0, x_288);
lean_ctor_set(x_289, 1, x_287);
x_290 = l_myMacro____x40_Init_Notation___hyg_14569____closed__11;
x_291 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_291, 0, x_157);
lean_ctor_set(x_291, 1, x_290);
x_292 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_293 = lean_array_push(x_292, x_291);
x_294 = lean_array_push(x_293, x_4);
x_295 = lean_array_push(x_294, x_256);
x_296 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__33;
x_297 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_297, 0, x_296);
lean_ctor_set(x_297, 1, x_295);
x_298 = l_myMacro____x40_Init_Notation___hyg_928____closed__7;
x_299 = lean_array_push(x_298, x_263);
x_300 = lean_array_push(x_299, x_269);
x_301 = lean_array_push(x_300, x_289);
x_302 = lean_array_push(x_301, x_297);
x_303 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__21;
x_304 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_304, 0, x_303);
lean_ctor_set(x_304, 1, x_302);
x_305 = lean_array_push(x_265, x_261);
x_306 = lean_array_push(x_305, x_304);
x_307 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1094____closed__5;
x_308 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_308, 0, x_307);
lean_ctor_set(x_308, 1, x_306);
x_309 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_309, 0, x_308);
lean_ctor_set(x_309, 1, x_237);
return x_309;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkAuxFunction(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_1, 1);
x_11 = l_Lean_instInhabitedName;
x_12 = lean_array_get(x_11, x_10, x_2);
x_13 = lean_ctor_get(x_1, 0);
x_14 = l_Lean_instInhabitedInductiveVal;
x_15 = lean_array_get(x_14, x_13, x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_15);
x_16 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg(x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_12);
lean_inc(x_17);
x_19 = l_Lean_Elab_Deriving_Repr_mkBody___rarg(x_17, x_15, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
x_20 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_box(0);
x_24 = l_Lean_Elab_Deriving_Repr_mkAuxFunction___lambda__1(x_17, x_1, x_12, x_21, x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_17);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_19, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_dec(x_19);
x_27 = lean_ctor_get(x_17, 1);
lean_inc(x_27);
x_28 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__2;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_29 = l_Lean_Elab_Deriving_mkLocalInstanceLetDecls(x_1, x_28, x_27, x_3, x_4, x_5, x_6, x_7, x_8, x_26);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Elab_Deriving_mkLet(x_30, x_25, x_3, x_4, x_5, x_6, x_7, x_8, x_31);
lean_dec(x_30);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_box(0);
x_36 = l_Lean_Elab_Deriving_Repr_mkAuxFunction___lambda__1(x_17, x_1, x_12, x_33, x_35, x_3, x_4, x_5, x_6, x_7, x_8, x_34);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_17);
return x_36;
}
else
{
uint8_t x_37; 
lean_dec(x_25);
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_37 = !lean_is_exclusive(x_29);
if (x_37 == 0)
{
return x_29;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_29, 0);
x_39 = lean_ctor_get(x_29, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_29);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_17);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_41 = !lean_is_exclusive(x_19);
if (x_41 == 0)
{
return x_19;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_19, 0);
x_43 = lean_ctor_get(x_19, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_19);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_45 = !lean_is_exclusive(x_16);
if (x_45 == 0)
{
return x_16;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_16, 0);
x_47 = lean_ctor_get(x_16, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_16);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkAuxFunction___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Lean_Elab_Deriving_Repr_mkAuxFunction___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkAuxFunction___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Deriving_Repr_mkAuxFunction(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkMutualBlock___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_ctor_get(x_2, 1);
x_14 = lean_nat_dec_le(x_13, x_4);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_eq(x_3, x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_3, x_17);
lean_dec(x_3);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_19 = l_Lean_Elab_Deriving_Repr_mkAuxFunction(x_1, x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_array_push(x_5, x_20);
x_23 = lean_ctor_get(x_2, 2);
x_24 = lean_nat_add(x_4, x_23);
lean_dec(x_4);
x_3 = x_18;
x_4 = x_24;
x_5 = x_22;
x_12 = x_21;
goto _start;
}
else
{
uint8_t x_26; 
lean_dec(x_18);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_26 = !lean_is_exclusive(x_19);
if (x_26 == 0)
{
return x_19;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_19, 0);
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_19);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_5);
lean_ctor_set(x_30, 1, x_12);
return x_30;
}
}
else
{
lean_object* x_31; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_5);
lean_ctor_set(x_31, 1, x_12);
return x_31;
}
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkMutualBlock(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_array_get_size(x_9);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_unsigned_to_nat(1u);
lean_inc(x_10);
x_13 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_10);
lean_ctor_set(x_13, 2, x_12);
x_14 = l_Array_empty___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_15 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkMutualBlock___spec__1(x_1, x_13, x_10, x_11, x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Deriving_mkInductiveApp___spec__2___rarg(x_6, x_7, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_20);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_22);
lean_dec(x_7);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
x_26 = l_Lean_Parser_Command_mutual___elambda__1___closed__1;
lean_inc(x_19);
x_27 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_27, 0, x_19);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Array_append___rarg(x_14, x_16);
lean_dec(x_16);
x_29 = l_Lean_nullKind___closed__2;
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = l_Lean_Parser_Command_end___elambda__1___closed__1;
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_19);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_34 = lean_array_push(x_33, x_27);
x_35 = lean_array_push(x_34, x_30);
x_36 = lean_array_push(x_35, x_32);
x_37 = l_Lean_Parser_Command_mutual___elambda__1___closed__2;
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_36);
lean_ctor_set(x_23, 0, x_38);
return x_23;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_39 = lean_ctor_get(x_23, 1);
lean_inc(x_39);
lean_dec(x_23);
x_40 = l_Lean_Parser_Command_mutual___elambda__1___closed__1;
lean_inc(x_19);
x_41 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_41, 0, x_19);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_Array_append___rarg(x_14, x_16);
lean_dec(x_16);
x_43 = l_Lean_nullKind___closed__2;
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = l_Lean_Parser_Command_end___elambda__1___closed__1;
x_46 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_46, 0, x_19);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_unexpand____x40_Init_Notation___hyg_1981____closed__1;
x_48 = lean_array_push(x_47, x_41);
x_49 = lean_array_push(x_48, x_44);
x_50 = lean_array_push(x_49, x_46);
x_51 = l_Lean_Parser_Command_mutual___elambda__1___closed__2;
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_39);
return x_53;
}
}
else
{
uint8_t x_54; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_54 = !lean_is_exclusive(x_15);
if (x_54 == 0)
{
return x_15;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_15, 0);
x_56 = lean_ctor_get(x_15, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_15);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkMutualBlock___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkMutualBlock___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkMutualBlock___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Deriving_Repr_mkMutualBlock(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_List_map___at___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds___spec__1(lean_object* x_1) {
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
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_4);
x_7 = l_List_map___at___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds___spec__1(x_5);
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
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_8);
x_11 = l_List_map___at___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds___spec__1(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Deriving_mkContext___closed__2;
x_2 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = l_Lean_instInhabitedName;
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_array_get(x_9, x_1, x_10);
x_12 = l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__2;
lean_inc(x_2);
x_13 = l_Lean_Elab_Deriving_mkContext(x_12, x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_16 = l_Lean_Elab_Deriving_Repr_mkMutualBlock(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__2;
x_20 = 1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_21 = l_Lean_Elab_Deriving_mkInstanceCmds(x_14, x_19, x_1, x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_18);
lean_dec(x_14);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
if (lean_is_exclusive(x_21)) {
 lean_ctor_release(x_21, 0);
 lean_ctor_release(x_21, 1);
 x_24 = x_21;
} else {
 lean_dec_ref(x_21);
 x_24 = lean_box(0);
}
x_25 = l_myMacro____x40_Init_Notation___hyg_71____closed__2;
x_26 = lean_array_push(x_25, x_17);
x_27 = l_Array_append___rarg(x_26, x_22);
lean_dec(x_22);
x_45 = lean_st_ref_get(x_7, x_23);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_46, 3);
lean_inc(x_47);
lean_dec(x_46);
x_48 = lean_ctor_get_uint8(x_47, sizeof(void*)*1);
lean_dec(x_47);
if (x_48 == 0)
{
lean_object* x_49; uint8_t x_50; 
x_49 = lean_ctor_get(x_45, 1);
lean_inc(x_49);
lean_dec(x_45);
x_50 = 0;
x_28 = x_50;
x_29 = x_49;
goto block_44;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_51 = lean_ctor_get(x_45, 1);
lean_inc(x_51);
lean_dec(x_45);
x_52 = l___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds___closed__1;
x_53 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__2(x_52, x_2, x_3, x_4, x_5, x_6, x_7, x_51);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_unbox(x_54);
lean_dec(x_54);
x_28 = x_56;
x_29 = x_55;
goto block_44;
}
block_44:
{
if (x_28 == 0)
{
lean_object* x_30; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_24)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_24;
}
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
lean_dec(x_24);
lean_inc(x_27);
x_31 = lean_array_to_list(lean_box(0), x_27);
x_32 = l_List_map___at___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds___spec__1(x_31);
x_33 = l_Lean_MessageData_ofList(x_32);
lean_dec(x_32);
x_34 = l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5___closed__1;
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = l_Lean_KernelException_toMessageData___closed__15;
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
x_38 = l___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds___closed__1;
x_39 = l_Lean_addTrace___at___private_Lean_Elab_Term_0__Lean_Elab_Term_postponeElabTerm___spec__1(x_38, x_37, x_2, x_3, x_4, x_5, x_6, x_7, x_29);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_39, 0);
lean_dec(x_41);
lean_ctor_set(x_39, 0, x_27);
return x_39;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
lean_dec(x_39);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_27);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_57 = !lean_is_exclusive(x_21);
if (x_57 == 0)
{
return x_21;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_21, 0);
x_59 = lean_ctor_get(x_21, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_21);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_61 = !lean_is_exclusive(x_16);
if (x_61 == 0)
{
return x_16;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_16, 0);
x_63 = lean_ctor_get(x_16, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_16);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_65 = !lean_is_exclusive(x_13);
if (x_65 == 0)
{
return x_13;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_13, 0);
x_67 = lean_ctor_get(x_13, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_13);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
}
lean_object* l___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_isInductive___at_Lean_Elab_Deriving_Repr_mkReprInstanceHandler___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_environment_find(x_8, x_1);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; lean_object* x_11; 
x_10 = 0;
x_11 = lean_box(x_10);
lean_ctor_set(x_5, 0, x_11);
return x_5;
}
else
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
lean_dec(x_9);
if (lean_obj_tag(x_12) == 5)
{
uint8_t x_13; lean_object* x_14; 
lean_dec(x_12);
x_13 = 1;
x_14 = lean_box(x_13);
lean_ctor_set(x_5, 0, x_14);
return x_5;
}
else
{
uint8_t x_15; lean_object* x_16; 
lean_dec(x_12);
x_15 = 0;
x_16 = lean_box(x_15);
lean_ctor_set(x_5, 0, x_16);
return x_5;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_5, 0);
x_18 = lean_ctor_get(x_5, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_5);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_environment_find(x_19, x_1);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; lean_object* x_22; lean_object* x_23; 
x_21 = 0;
x_22 = lean_box(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_18);
return x_23;
}
else
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_20, 0);
lean_inc(x_24);
lean_dec(x_20);
if (lean_obj_tag(x_24) == 5)
{
uint8_t x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_24);
x_25 = 1;
x_26 = lean_box(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_18);
return x_27;
}
else
{
uint8_t x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_24);
x_28 = 0;
x_29 = lean_box(x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_18);
return x_30;
}
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Repr_mkReprInstanceHandler___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 == x_3;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_array_uget(x_1, x_2);
x_9 = l_Lean_isInductive___at_Lean_Elab_Deriving_Repr_mkReprInstanceHandler___spec__1(x_8, x_4, x_5, x_6);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_9);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 0);
lean_dec(x_13);
x_14 = 1;
x_15 = lean_box(x_14);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_dec(x_9);
x_17 = 1;
x_18 = lean_box(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
}
else
{
lean_object* x_20; size_t x_21; size_t x_22; 
x_20 = lean_ctor_get(x_9, 1);
lean_inc(x_20);
lean_dec(x_9);
x_21 = 1;
x_22 = x_2 + x_21;
x_2 = x_22;
x_6 = x_20;
goto _start;
}
}
else
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; 
x_24 = 0;
x_25 = lean_box(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_6);
return x_26;
}
}
}
lean_object* l_Lean_Elab_Deriving_Repr_mkReprInstanceHandler(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_74; uint8_t x_75; 
x_5 = lean_array_get_size(x_1);
x_74 = lean_unsigned_to_nat(0u);
x_75 = lean_nat_dec_lt(x_74, x_5);
if (x_75 == 0)
{
uint8_t x_76; 
x_76 = 1;
x_6 = x_76;
x_7 = x_4;
goto block_73;
}
else
{
uint8_t x_77; 
x_77 = lean_nat_dec_le(x_5, x_5);
if (x_77 == 0)
{
uint8_t x_78; 
x_78 = 1;
x_6 = x_78;
x_7 = x_4;
goto block_73;
}
else
{
size_t x_79; size_t x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_79 = 0;
x_80 = lean_usize_of_nat(x_5);
x_81 = l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Repr_mkReprInstanceHandler___spec__2(x_1, x_79, x_80, x_2, x_3, x_4);
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_unbox(x_82);
lean_dec(x_82);
if (x_83 == 0)
{
lean_object* x_84; uint8_t x_85; 
x_84 = lean_ctor_get(x_81, 1);
lean_inc(x_84);
lean_dec(x_81);
x_85 = 1;
x_6 = x_85;
x_7 = x_84;
goto block_73;
}
else
{
lean_object* x_86; uint8_t x_87; 
x_86 = lean_ctor_get(x_81, 1);
lean_inc(x_86);
lean_dec(x_81);
x_87 = 0;
x_6 = x_87;
x_7 = x_86;
goto block_73;
}
}
}
block_73:
{
if (x_6 == 0)
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_8 = 0;
x_9 = lean_box(x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
return x_10;
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_5);
lean_dec(x_5);
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = 0;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_7);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_box(0);
x_17 = lean_alloc_closure((void*)(l___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds___boxed), 8, 1);
lean_closure_set(x_17, 0, x_1);
lean_inc(x_2);
x_18 = l_Lean_Elab_Command_liftTermElabM___rarg(x_16, x_17, x_2, x_3, x_7);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
x_22 = lean_array_get_size(x_20);
x_23 = lean_nat_dec_lt(x_11, x_22);
if (x_23 == 0)
{
uint8_t x_24; lean_object* x_25; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_3);
lean_dec(x_2);
x_24 = 1;
x_25 = lean_box(x_24);
lean_ctor_set(x_18, 0, x_25);
return x_18;
}
else
{
uint8_t x_26; 
x_26 = lean_nat_dec_le(x_22, x_22);
if (x_26 == 0)
{
uint8_t x_27; lean_object* x_28; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_3);
lean_dec(x_2);
x_27 = 1;
x_28 = lean_box(x_27);
lean_ctor_set(x_18, 0, x_28);
return x_18;
}
else
{
size_t x_29; size_t x_30; lean_object* x_31; lean_object* x_32; 
lean_free_object(x_18);
x_29 = 0;
x_30 = lean_usize_of_nat(x_22);
lean_dec(x_22);
x_31 = lean_box(0);
x_32 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(x_20, x_29, x_30, x_31, x_2, x_3, x_21);
lean_dec(x_2);
lean_dec(x_20);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_32, 0);
lean_dec(x_34);
x_35 = 1;
x_36 = lean_box(x_35);
lean_ctor_set(x_32, 0, x_36);
return x_32;
}
else
{
lean_object* x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_32, 1);
lean_inc(x_37);
lean_dec(x_32);
x_38 = 1;
x_39 = lean_box(x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_37);
return x_40;
}
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_32);
if (x_41 == 0)
{
return x_32;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_32, 0);
x_43 = lean_ctor_get(x_32, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_32);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_45 = lean_ctor_get(x_18, 0);
x_46 = lean_ctor_get(x_18, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_18);
x_47 = lean_array_get_size(x_45);
x_48 = lean_nat_dec_lt(x_11, x_47);
if (x_48 == 0)
{
uint8_t x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_47);
lean_dec(x_45);
lean_dec(x_3);
lean_dec(x_2);
x_49 = 1;
x_50 = lean_box(x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_46);
return x_51;
}
else
{
uint8_t x_52; 
x_52 = lean_nat_dec_le(x_47, x_47);
if (x_52 == 0)
{
uint8_t x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_47);
lean_dec(x_45);
lean_dec(x_3);
lean_dec(x_2);
x_53 = 1;
x_54 = lean_box(x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_46);
return x_55;
}
else
{
size_t x_56; size_t x_57; lean_object* x_58; lean_object* x_59; 
x_56 = 0;
x_57 = lean_usize_of_nat(x_47);
lean_dec(x_47);
x_58 = lean_box(0);
x_59 = l_Array_foldlMUnsafe_fold___at_Lean_Elab_Command_elabCommand___spec__13(x_45, x_56, x_57, x_58, x_2, x_3, x_46);
lean_dec(x_2);
lean_dec(x_45);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; lean_object* x_64; 
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
x_62 = 1;
x_63 = lean_box(x_62);
if (lean_is_scalar(x_61)) {
 x_64 = lean_alloc_ctor(0, 2, 0);
} else {
 x_64 = x_61;
}
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_60);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_59, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_59, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_67 = x_59;
} else {
 lean_dec_ref(x_59);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(1, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_3);
lean_dec(x_2);
x_69 = !lean_is_exclusive(x_18);
if (x_69 == 0)
{
return x_18;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_18, 0);
x_71 = lean_ctor_get(x_18, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_18);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
}
}
}
}
lean_object* l_Lean_isInductive___at_Lean_Elab_Deriving_Repr_mkReprInstanceHandler___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_isInductive___at_Lean_Elab_Deriving_Repr_mkReprInstanceHandler___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Repr_mkReprInstanceHandler___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_anyMUnsafe_any___at_Lean_Elab_Deriving_Repr_mkReprInstanceHandler___spec__2(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_9;
}
}
static lean_object* _init_l_Lean_Elab_Deriving_Repr_initFn____x40_Lean_Elab_Deriving_Repr___hyg_2712____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Deriving_Repr_mkReprInstanceHandler), 4, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_Deriving_Repr_initFn____x40_Lean_Elab_Deriving_Repr___hyg_2712_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__2;
x_3 = l_Lean_Elab_Deriving_Repr_initFn____x40_Lean_Elab_Deriving_Repr___hyg_2712____closed__1;
x_4 = l_Lean_Elab_registerBuiltinDerivingHandler(x_2, x_3, x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds___closed__1;
x_7 = l_Lean_registerTraceClass(x_6, x_5);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_4);
if (x_8 == 0)
{
return x_4;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_4);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Transform(lean_object*);
lean_object* initialize_Lean_Meta_Inductive(lean_object*);
lean_object* initialize_Lean_Elab_Deriving_Basic(lean_object*);
lean_object* initialize_Lean_Elab_Deriving_Util(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Deriving_Repr(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Inductive(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Util(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__1 = _init_l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__1);
l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__2 = _init_l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__2);
l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__3 = _init_l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__3();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__3);
l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__4 = _init_l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__4();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__4);
l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__5 = _init_l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__5();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__5);
l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__6 = _init_l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__6();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__6);
l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__7 = _init_l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__7();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__7);
l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__8 = _init_l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__8();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkReprHeader___rarg___closed__8);
l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__1 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__1();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__1);
l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__2 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__2();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__2);
l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__3 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__3();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__3);
l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__4 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__4();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__4);
l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__5 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__5();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__5);
l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__6 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__6();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___lambda__1___closed__6);
l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__1 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__1();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__1);
l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__2 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__2();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__2);
l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__3 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__3();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForStruct___spec__4___closed__3);
l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__1 = _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__1);
l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__2 = _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__2);
l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__3 = _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__3);
l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__4 = _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__4();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__4);
l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__5 = _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__5();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__5);
l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__6 = _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__6();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__1___closed__6);
l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__1 = _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__1);
l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__2 = _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__2();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__2);
l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__3 = _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__3();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__3);
l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__4 = _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__4();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__4);
l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__5 = _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__5();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__5);
l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__6 = _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__6();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__6);
l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__7 = _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__7();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__7);
l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__8 = _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__8();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__8);
l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__9 = _init_l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__9();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkBodyForStruct___rarg___lambda__2___closed__9);
l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__1 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__1();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__1);
l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__2 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__2();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__2);
l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__3 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__3();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__3);
l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__4 = _init_l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__4();
lean_mark_persistent(l_Std_Range_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__2___closed__4);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__1 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__1();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__1);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__2 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__2();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__2);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__3 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__3();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__3);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__4 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__4();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__4);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__5 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__5();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__5);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__6 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__6();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__6);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__7 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__7();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__7);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__8 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__8();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__8);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__9 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__9();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__9);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__10 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__10();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__10);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__11 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__11();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__11);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__12 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__12();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__12);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__13 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__13();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__13);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__14 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__14();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__14);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__15 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__15();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__15);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__16 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__16();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__16);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__17 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__17();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__17);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__18 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__18();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__18);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__19 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__19();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__19);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__20 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__20();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__20);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__21 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__21();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__21);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__22 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__22();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__22);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__23 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__23();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__23);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__24 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__24();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__24);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__25 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__25();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__25);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__26 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__26();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__26);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__27 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__27();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__27);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__28 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__28();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__28);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__29 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__29();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__29);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__30 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__30();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__30);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__31 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__31();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__31);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__32 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__32();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__32);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__33 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__33();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__33);
l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__34 = _init_l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__34();
lean_mark_persistent(l_List_forIn_loop___at_Lean_Elab_Deriving_Repr_mkBodyForInduct_mkAlts___spec__3___lambda__1___closed__34);
l_Lean_Elab_Deriving_Repr_mkAuxFunction___lambda__1___closed__1 = _init_l_Lean_Elab_Deriving_Repr_mkAuxFunction___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_mkAuxFunction___lambda__1___closed__1);
l___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds___closed__1 = _init_l___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Deriving_Repr_0__Lean_Elab_Deriving_Repr_mkReprInstanceCmds___closed__1);
l_Lean_Elab_Deriving_Repr_initFn____x40_Lean_Elab_Deriving_Repr___hyg_2712____closed__1 = _init_l_Lean_Elab_Deriving_Repr_initFn____x40_Lean_Elab_Deriving_Repr___hyg_2712____closed__1();
lean_mark_persistent(l_Lean_Elab_Deriving_Repr_initFn____x40_Lean_Elab_Deriving_Repr___hyg_2712____closed__1);
res = l_Lean_Elab_Deriving_Repr_initFn____x40_Lean_Elab_Deriving_Repr___hyg_2712_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
