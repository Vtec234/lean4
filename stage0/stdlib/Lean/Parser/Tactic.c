// Lean compiler output
// Module: Lean.Parser.Tactic
// Imports: Init Lean.Parser.Term
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
lean_object* l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__4;
lean_object* l_Lean_Parser_Tactic_introMatch___closed__7;
lean_object* l_Lean_Parser_Tactic_unknown___elambda__1___closed__1;
lean_object* l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic___closed__2;
lean_object* l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__2;
lean_object* l___regBuiltin_Lean_Parser_Tactic_unknown_formatter(lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__1;
lean_object* l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2;
lean_object* l_Lean_Parser_Tactic_match___closed__7;
lean_object* l___regBuiltin_Lean_Parser_Tactic_match_formatter(lean_object*);
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2;
lean_object* l_Lean_Parser_Tactic_unknown___elambda__1___lambda__1___closed__1;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__1;
lean_object* l_Lean_Parser_Tactic_match;
lean_object* l_Lean_Parser_Tactic_unknown___elambda__1___closed__2;
lean_object* l_Lean_Parser_andthenInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_unknown___closed__4;
lean_object* l_Lean_Parser_Tactic_nestedTactic;
lean_object* l_Lean_Parser_Tactic_introMatch___elambda__1___closed__11;
lean_object* l_Lean_Parser_Tactic_nativeDecide_formatter___closed__1;
lean_object* l_Lean_Parser_Term_matchAlts(lean_object*);
extern lean_object* l_Lean_Parser_leadPrec;
extern lean_object* l_Char_quote___closed__1;
lean_object* l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__1;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__13;
lean_object* l_Lean_Parser_setLhsPrecFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_match___closed__10;
lean_object* l_Lean_Parser_Tactic_decide___elambda__1___closed__3;
lean_object* l_Lean_Parser_Tactic_match___elambda__1___closed__7;
lean_object* l___regBuiltin_Lean_Parser_Tactic_match_formatter___closed__2;
lean_object* l_Lean_Parser_symbol_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_match___elambda__1___closed__21;
lean_object* l_Lean_Parser_Tactic_nativeDecide_formatter___closed__2;
extern lean_object* l_Lean_Parser_errorAtSavedPos___closed__1;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs;
extern lean_object* l_Lean_Parser_Term_simpleBinder_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Tactic_nativeDecide___closed__6;
lean_object* l_Lean_Parser_Tactic_introMatch_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_match_formatter___closed__4;
lean_object* l___regBuiltinParser_Lean_Parser_Tactic_introMatch(lean_object*);
extern lean_object* l_Lean_Parser_Term_structInst_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Tactic_unknown___elambda__1___closed__4;
lean_object* l___regBuiltin_Lean_Parser_Tactic_nativeDecide_formatter(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed;
lean_object* l_Lean_Parser_Tactic_matchAlts_parenthesizer___closed__1;
lean_object* l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__8;
lean_object* l_Lean_Parser_tokenWithAntiquotFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic___closed__1;
extern lean_object* l_Lean_Parser_ident;
lean_object* l_Lean_Parser_Tactic_match_formatter___closed__8;
extern lean_object* l_Lean_Parser_Term_structInst___elambda__1___closed__6;
lean_object* l_Lean_Parser_nonReservedSymbolFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_matchAlts___closed__1;
lean_object* l_Lean_Parser_ParserState_mkNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__2;
lean_object* l___regBuiltinParser_Lean_Parser_Tactic_unknown(lean_object*);
lean_object* l_Lean_Parser_Tactic_matchRhs___closed__1;
lean_object* l_Lean_Parser_Tactic_introMatch___closed__3;
lean_object* l___regBuiltin_Lean_Parser_Tactic_decide_parenthesizer___closed__2;
extern lean_object* l_Lean_Parser_Tactic_case___closed__11;
lean_object* l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__6;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__9;
lean_object* l_Lean_Parser_Tactic_match_formatter___closed__1;
lean_object* l_Lean_Parser_Tactic_decide___elambda__1___closed__5;
lean_object* l_Lean_Parser_orelseFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_match___closed__11;
extern lean_object* l_Lean_Parser_Term_match___elambda__1___closed__11;
lean_object* l___regBuiltin_Lean_Parser_Tactic_unknown_formatter___closed__2;
lean_object* l_Lean_Parser_Tactic_decide___closed__6;
lean_object* l_Lean_Parser_addBuiltinParser(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_unknown___closed__2;
lean_object* lean_array_get_size(lean_object*);
extern lean_object* l___regBuiltin_Lean_Parser_Term_hole_formatter___closed__2;
lean_object* l_Lean_Parser_Tactic_unknown;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_errorAtSavedPos_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_syntheticHole___closed__7;
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_decide_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_matchAlts_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_matchRhs_formatter___closed__1;
lean_object* l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Tactic_nativeDecide;
extern lean_object* l_Lean_Parser_Term_hole___closed__5;
lean_object* l_Lean_Parser_Tactic_introMatch___elambda__1___closed__7;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__4;
lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Level_paren___elambda__1___closed__12;
lean_object* l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__1;
lean_object* l_Lean_Parser_Tactic_match_formatter___closed__2;
extern lean_object* l_Lean_Parser_Term_structInst___elambda__1___closed__3;
lean_object* l_Lean_Parser_Tactic_unknown___elambda__1___closed__5;
lean_object* l_Lean_Parser_Tactic_nativeDecide___closed__5;
lean_object* l_Lean_Parser_Tactic_unknown___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_matchRhs___closed__4;
extern lean_object* l_Lean_Parser_Term_match___elambda__1___closed__3;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__3;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_nestedTactic_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__8;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_matchRhs___closed__2;
lean_object* l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__9;
lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__2;
lean_object* l_Lean_Parser_checkPrecFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__2;
lean_object* l___regBuiltin_Lean_Parser_Tactic_match_parenthesizer(lean_object*);
extern lean_object* l_Lean_Parser_Term_match_parenthesizer___closed__4;
lean_object* l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__11;
lean_object* l_Lean_Parser_Tactic_decide___closed__1;
lean_object* l_Lean_Parser_Tactic_decide_formatter___closed__1;
lean_object* l_Lean_Parser_Tactic_nativeDecide___closed__1;
lean_object* l_Lean_Parser_Term_matchAlts_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_introMatch___elambda__1___closed__13;
lean_object* l_Lean_Parser_registerAliasCore___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_introMatch_formatter___closed__1;
lean_object* l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__3;
extern lean_object* l___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Tactic_decide___elambda__1___closed__7;
lean_object* l___regBuiltin_Lean_Parser_Tactic_decide_parenthesizer(lean_object*);
lean_object* l_Lean_Parser_Tactic_decide___closed__2;
extern lean_object* l_Lean_PrettyPrinter_parenthesizerAttribute;
lean_object* l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__1;
lean_object* l___regBuiltinParser_Lean_Parser_Tactic_nativeDecide(lean_object*);
lean_object* l_Lean_Parser_Tactic_unknown_formatter___closed__3;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__5;
extern lean_object* l_Lean_Parser_mkAntiquot___closed__18;
extern lean_object* l___regBuiltin_Lean_Parser_Term_hole_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_errorAtSavedPos_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_nativeDecide___closed__4;
extern lean_object* l_Lean_Parser_Term_byTactic___elambda__1___closed__8;
extern lean_object* l_Lean_Parser_Term_match_parenthesizer___closed__2;
extern lean_object* l_Lean_Parser_Term_structInst_formatter___closed__2;
lean_object* l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__2;
lean_object* l_Lean_Parser_Tactic_match___elambda__1___closed__6;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_matchAlts_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_unknown___elambda__1___closed__6;
lean_object* l_Lean_Parser_nonReservedSymbolFnAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_introMatch___closed__5;
lean_object* l_Lean_Parser_Tactic_decide___closed__4;
extern lean_object* l_Lean_Parser_Term_optType;
lean_object* l_Lean_Parser_Tactic_introMatch___elambda__1___closed__2;
lean_object* l___regBuiltin_Lean_Parser_Tactic_nestedTactic_parenthesizer(lean_object*);
lean_object* l_Lean_Parser_nodeInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_introMatch___closed__6;
lean_object* l_Lean_Parser_symbolFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__2;
lean_object* l_Lean_Parser_Tactic_unknown___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__3;
lean_object* l_Lean_Parser_Tactic_decide_parenthesizer___closed__3;
lean_object* l___regBuiltin_Lean_Parser_Tactic_decide_parenthesizer___closed__1;
lean_object* l_Lean_Parser_nonReservedSymbolInfo(lean_object*, uint8_t);
lean_object* l_Lean_Parser_Tactic_nativeDecide___closed__2;
extern lean_object* l_Lean_Parser_Term_byTactic_parenthesizer___closed__3;
lean_object* l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__1;
extern lean_object* l_Lean_Parser_Term_match___closed__5;
lean_object* l_Lean_Parser_Tactic_introMatch___elambda__1___closed__5;
lean_object* l_Lean_Parser_Tactic_match___elambda__1___closed__2;
lean_object* l_Lean_Parser_Tactic_match___elambda__1___closed__8;
uint8_t l_Lean_Parser_tryAnti(lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_mkFormatterAttribute___closed__3;
extern lean_object* l_Lean_Parser_Term_byTactic_formatter___closed__3;
lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__7;
lean_object* l_Lean_Parser_Tactic_introMatch___closed__1;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__4;
lean_object* l___regBuiltinParser_Lean_Parser_Tactic_eraseAuxDiscrs(lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Tactic_introMatch_formatter___closed__1;
lean_object* l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__4;
lean_object* l_Lean_Parser_Tactic_decide___elambda__1___closed__2;
lean_object* l_Lean_Parser_Tactic_introMatch___closed__2;
lean_object* l_Lean_Parser_Tactic_match___elambda__1___closed__3;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__1;
lean_object* l_Lean_Parser_errorAtSavedPosFn(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_decide___closed__5;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__6;
lean_object* l___regBuiltin_Lean_Parser_Tactic_match_formatter___closed__1;
extern lean_object* l_Lean_Parser_parserAliasesRef;
lean_object* l_Lean_Parser_orelseInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_match___closed__6;
lean_object* l___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer___closed__1;
lean_object* l___regBuiltin_Lean_Parser_Tactic_nestedTactic_formatter___closed__1;
lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__5;
lean_object* l_Lean_Parser_Tactic_introMatch_formatter___closed__3;
extern lean_object* l_Lean_Parser_Term_match_parenthesizer___closed__6;
lean_object* l_Lean_Parser_Tactic_decide___closed__3;
extern lean_object* l_Lean_Parser_maxPrec;
lean_object* l_Lean_Parser_Tactic_match___elambda__1___closed__5;
lean_object* l___regBuiltin_Lean_Parser_Tactic_nestedTactic_parenthesizer___closed__2;
lean_object* l___regBuiltin_Lean_Parser_Tactic_unknown_formatter___closed__1;
lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__3;
lean_object* l___regBuiltin_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__2;
extern lean_object* l_Lean_PrettyPrinter_formatterAttribute;
lean_object* l_Lean_Parser_Tactic_match___closed__8;
lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__1;
extern lean_object* l_Lean_Parser_Term_simpleBinder_formatter___closed__2;
lean_object* l_Lean_Parser_Tactic_introMatch___closed__8;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__10;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_introMatch___elambda__1___closed__3;
lean_object* l_Lean_Parser_Tactic_match_formatter___closed__3;
lean_object* l_Lean_Parser_Tactic_unknown_formatter___closed__1;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__3;
lean_object* l_Lean_Parser_Tactic_match___closed__9;
lean_object* l_Lean_Parser_Tactic_decide___elambda__1___closed__6;
extern lean_object* l_Lean_Parser_Term_match_formatter___closed__4;
lean_object* l_Lean_Parser_Tactic_nativeDecide_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_introMatch___closed__4;
lean_object* l_Lean_Parser_Tactic_matchRhs___elambda__1(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Tactic_introMatch_formatter(lean_object*);
lean_object* l_Lean_Parser_Tactic_match_formatter___closed__7;
lean_object* l_Lean_Parser_Tactic_matchRhs___elambda__1___closed__1;
lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltin_Lean_Parser_Term_syntheticHole_formatter___closed__2;
lean_object* l_Lean_Parser_Tactic_unknown_parenthesizer___closed__4;
lean_object* l_Lean_Parser_Tactic_match___closed__2;
extern lean_object* l_Lean_Parser_Term_match_formatter___closed__6;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__5;
lean_object* l_Lean_Parser_Tactic_unknown_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_unknown___closed__7;
lean_object* l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer(lean_object*);
lean_object* l_Lean_Parser_Tactic_matchRhs_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_unknown___elambda__1___closed__7;
lean_object* l_Lean_PrettyPrinter_Formatter_withPosition_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic(lean_object*);
lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Tactic_introMatch_formatter___closed__2;
lean_object* l_Lean_Parser_Tactic_nativeDecide___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_unknown_formatter___closed__5;
lean_object* l_Lean_Parser_Tactic_match___elambda__1___closed__9;
lean_object* l___regBuiltin_Lean_Parser_Tactic_match_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Tactic_unknown_formatter___closed__4;
lean_object* l___regBuiltinParser_Lean_Parser_Tactic_match(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_match___closed__4;
lean_object* l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__3;
lean_object* l_Lean_Parser_Tactic_introMatch___elambda__1___closed__8;
lean_object* l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__5;
lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__8;
lean_object* l_Lean_Parser_Tactic_match___closed__1;
lean_object* l___regBuiltin_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__1;
lean_object* l_Lean_Parser_Tactic_matchRhs_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_match___closed__3;
lean_object* l___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer(lean_object*);
lean_object* l_Lean_Parser_Tactic_unknown_parenthesizer___closed__1;
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_unknown_parenthesizer___closed__3;
lean_object* l_Lean_Parser_Tactic_decide_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Tactic_introMatch___elambda__1___closed__1;
extern lean_object* l_Lean_Parser_Term_match_formatter___closed__2;
lean_object* l_Lean_Parser_Tactic_decide___elambda__1(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Tactic_nativeDecide_formatter___closed__1;
lean_object* l_Lean_Parser_Tactic_unknown_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__3;
extern lean_object* l_Lean_Parser_Term_match___elambda__1___closed__4;
extern lean_object* l_Lean_PrettyPrinter_Formatter_formatterAliasesRef;
lean_object* l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__12;
lean_object* l_Lean_Parser_Tactic_decide_parenthesizer___closed__1;
lean_object* l___regBuiltin_Lean_Parser_Tactic_nestedTactic_parenthesizer___closed__1;
lean_object* l_Lean_Parser_Tactic_match___closed__5;
lean_object* l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__1;
lean_object* l_Lean_Parser_Tactic_decide___elambda__1___closed__11;
lean_object* l___regBuiltin_Lean_Parser_Tactic_nativeDecide_formatter___closed__2;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__7;
lean_object* l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__10;
lean_object* l_Lean_Parser_Tactic_introMatch_formatter___closed__2;
lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__6;
lean_object* l_Lean_Parser_Tactic_decide_formatter___closed__2;
lean_object* l___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Tactic_match___elambda__1___closed__4;
lean_object* l_Lean_Parser_Tactic_matchRhs___closed__3;
lean_object* l___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer___closed__1;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__3;
lean_object* l_Lean_Parser_Tactic_decide___elambda__1___closed__4;
lean_object* l_Lean_Parser_Tactic_match_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_decide;
lean_object* l_Lean_Parser_Tactic_introMatch___elambda__1___closed__12;
extern lean_object* l_Lean_Parser_Level_paren___elambda__1___closed__10;
lean_object* l_Lean_Parser_symbolInfo(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_tacticSeq;
lean_object* l_Lean_Parser_Tactic_match___elambda__1___closed__1;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
lean_object* l_Lean_Parser_orelseFnCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_epsilonInfo;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__6;
lean_object* l_Lean_Parser_Tactic_unknown_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Tactic_decide___elambda__1___closed__8;
extern lean_object* l_Lean_Parser_Term_match___elambda__1___closed__19;
extern lean_object* l_Lean_Parser_FirstTokens_toStr___closed__2;
lean_object* l_Lean_Parser_Tactic_unknown_formatter___closed__2;
lean_object* l_Lean_Parser_Tactic_unknown___elambda__1___closed__3;
lean_object* l___regBuiltinParser_Lean_Parser_Tactic_decide(lean_object*);
lean_object* l_Lean_Parser_Tactic_introMatch_formatter___closed__4;
lean_object* l_Lean_Parser_Tactic_decide_formatter___closed__3;
extern lean_object* l___private_Init_Meta_0__Lean_Meta_Simp_reprConfig____x40_Init_Meta___hyg_6907____closed__26;
lean_object* l___regBuiltin_Lean_Parser_Tactic_decide_formatter(lean_object*);
extern lean_object* l_Lean_Parser_Tactic_tactic___x3c_x3b_x3e_____closed__6;
lean_object* l_Lean_Parser_Tactic_nestedTactic_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_decide___elambda__1___closed__1;
extern lean_object* l_Lean_Parser_Term_hole;
lean_object* l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__3;
lean_object* l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_formatter(lean_object*);
extern lean_object* l_Lean_PrettyPrinter_mkParenthesizerAttribute___closed__3;
lean_object* l_String_trim(lean_object*);
extern lean_object* l_Lean_Parser_Term_byTactic___elambda__1___closed__10;
lean_object* l_Lean_Parser_Tactic_nativeDecide___closed__3;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__11;
lean_object* l_Lean_Parser_Tactic_unknown___closed__6;
lean_object* l_Lean_Parser_Tactic_introMatch___elambda__1___closed__10;
lean_object* l_Lean_Parser_Tactic_match_formatter___closed__6;
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_parenthesizerAliasesRef;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5_(lean_object*);
lean_object* l_Lean_Parser_Tactic_match_parenthesizer___closed__4;
lean_object* l_Lean_Parser_Tactic_unknown_parenthesizer___closed__5;
lean_object* l_Lean_Parser_Tactic_decide___elambda__1___closed__9;
lean_object* l_Lean_Parser_Level_paren___elambda__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_matchRhs;
extern lean_object* l_Lean_Parser_Tactic_intro___closed__2;
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__1;
lean_object* l_Lean_Parser_Tactic_nativeDecide_formatter___closed__3;
lean_object* l_Lean_Parser_Tactic_nativeDecide_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_nativeDecide___closed__7;
extern lean_object* l_Lean_initFn____x40_Lean_Parser_Extra___hyg_792____closed__19;
lean_object* l_Lean_Parser_Tactic_unknown___closed__3;
lean_object* l___regBuiltin_Lean_Parser_Tactic_nestedTactic_formatter___closed__2;
lean_object* l___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Tactic_match___elambda__1___closed__10;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__2;
lean_object* l_Lean_Parser_Tactic_decide___elambda__1___closed__10;
lean_object* l___regBuiltin_Lean_Parser_Tactic_match_parenthesizer___closed__1;
lean_object* l___regBuiltin_Lean_Parser_Tactic_decide_formatter___closed__1;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_unknown___closed__5;
extern lean_object* l_Lean_Parser_Tactic_intro___closed__5;
lean_object* l___regBuiltin_Lean_Parser_Tactic_nativeDecide_parenthesizer(lean_object*);
lean_object* l_Lean_Parser_Term_matchAlts_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__7;
lean_object* l_Lean_Parser_Tactic_matchAlts;
lean_object* l_Lean_Parser_symbolFnAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_match_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer(lean_object*);
extern lean_object* l_Lean_Parser_Term_structInst___elambda__1___closed__4;
lean_object* l_Lean_Parser_Tactic_decide_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_decide___closed__7;
lean_object* l___regBuiltin_Lean_Parser_Tactic_decide_formatter___closed__2;
lean_object* l_Lean_Parser_Tactic_unknown___elambda__1___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_introMatch___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_match_formatter___closed__5;
lean_object* l_Lean_Parser_symbol_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__7;
extern lean_object* l_Lean_Parser_Term_fun___elambda__1___closed__10;
lean_object* l_Lean_Parser_Tactic_introMatch;
lean_object* l_Lean_Parser_Tactic_introMatch___elambda__1___closed__6;
lean_object* l_Lean_Parser_Tactic_match___elambda__1___closed__11;
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__12;
extern lean_object* l_Lean_initFn____x40_Lean_Parser_Extra___hyg_929____closed__11;
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Tactic_nestedTactic_formatter(lean_object*);
lean_object* l_Lean_Parser_Tactic_matchAlts_formatter___closed__1;
lean_object* l_Lean_Parser_Tactic_introMatch___elambda__1___closed__4;
extern lean_object* l_Lean_Parser_Term_match___elambda__1___closed__13;
lean_object* l_Lean_Parser_Tactic_match___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__1;
lean_object* l_Lean_Parser_Tactic_introMatch_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_introMatch___elambda__1___closed__9;
lean_object* l_Lean_Parser_andthenFn(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_syntheticHole;
static lean_object* _init_l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_tacticSeq;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Term_byTactic_formatter___closed__3;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Term_byTactic_parenthesizer___closed__3;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Parser_parserAliasesRef;
x_3 = l_Lean_Parser_Tactic_case___closed__11;
x_4 = l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__1;
x_5 = l_Lean_Parser_registerAliasCore___rarg(x_2, x_3, x_4, x_1);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_PrettyPrinter_Formatter_formatterAliasesRef;
x_8 = l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__2;
x_9 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_3, x_8, x_6);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_PrettyPrinter_Parenthesizer_parenthesizerAliasesRef;
x_12 = l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__3;
x_13 = l_Lean_Parser_registerAliasCore___rarg(x_11, x_3, x_12, x_10);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
return x_9;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_9, 0);
x_16 = lean_ctor_get(x_9, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_9);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_5);
if (x_18 == 0)
{
return x_5;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_5, 0);
x_20 = lean_ctor_get(x_5, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_5);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___elambda__1___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown tactic");
return x_1;
}
}
lean_object* l_Lean_Parser_Tactic_unknown___elambda__1___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_ctor_get(x_1, 5);
lean_dec(x_6);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_ctor_get(x_2, 2);
lean_inc(x_9);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_1, 5, x_10);
lean_inc(x_1);
x_11 = l_Lean_Parser_ident___elambda__1(x_1, x_2);
x_12 = lean_ctor_get(x_11, 4);
lean_inc(x_12);
x_13 = lean_box(0);
x_14 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_12, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_dec(x_1);
return x_11;
}
else
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; 
x_15 = l_Lean_Parser_Tactic_unknown___elambda__1___lambda__1___closed__1;
x_16 = 1;
x_17 = l_Lean_Parser_errorAtSavedPosFn(x_15, x_16, x_1, x_11);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_18 = lean_ctor_get(x_5, 0);
x_19 = lean_ctor_get(x_5, 1);
x_20 = lean_ctor_get(x_5, 2);
x_21 = lean_ctor_get(x_5, 3);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_5);
x_22 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_22, 0, x_18);
lean_ctor_set(x_22, 1, x_19);
lean_ctor_set(x_22, 2, x_20);
lean_ctor_set(x_22, 3, x_21);
x_23 = lean_ctor_get(x_2, 2);
lean_inc(x_23);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_1, 5, x_24);
lean_ctor_set(x_1, 1, x_22);
lean_inc(x_1);
x_25 = l_Lean_Parser_ident___elambda__1(x_1, x_2);
x_26 = lean_ctor_get(x_25, 4);
lean_inc(x_26);
x_27 = lean_box(0);
x_28 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_26, x_27);
lean_dec(x_26);
if (x_28 == 0)
{
lean_dec(x_1);
return x_25;
}
else
{
lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_29 = l_Lean_Parser_Tactic_unknown___elambda__1___lambda__1___closed__1;
x_30 = 1;
x_31 = l_Lean_Parser_errorAtSavedPosFn(x_29, x_30, x_1, x_25);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_32 = lean_ctor_get(x_4, 0);
x_33 = lean_ctor_get(x_4, 1);
x_34 = lean_ctor_get(x_4, 2);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_4);
x_35 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_33);
lean_ctor_set(x_35, 2, x_34);
x_36 = lean_ctor_get(x_5, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_5, 1);
lean_inc(x_37);
x_38 = lean_ctor_get(x_5, 2);
lean_inc(x_38);
x_39 = lean_ctor_get(x_5, 3);
lean_inc(x_39);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 lean_ctor_release(x_5, 2);
 lean_ctor_release(x_5, 3);
 x_40 = x_5;
} else {
 lean_dec_ref(x_5);
 x_40 = lean_box(0);
}
if (lean_is_scalar(x_40)) {
 x_41 = lean_alloc_ctor(0, 4, 0);
} else {
 x_41 = x_40;
}
lean_ctor_set(x_41, 0, x_36);
lean_ctor_set(x_41, 1, x_37);
lean_ctor_set(x_41, 2, x_38);
lean_ctor_set(x_41, 3, x_39);
x_42 = lean_ctor_get(x_2, 2);
lean_inc(x_42);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_1, 5, x_43);
lean_ctor_set(x_1, 1, x_41);
lean_ctor_set(x_1, 0, x_35);
lean_inc(x_1);
x_44 = l_Lean_Parser_ident___elambda__1(x_1, x_2);
x_45 = lean_ctor_get(x_44, 4);
lean_inc(x_45);
x_46 = lean_box(0);
x_47 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_45, x_46);
lean_dec(x_45);
if (x_47 == 0)
{
lean_dec(x_1);
return x_44;
}
else
{
lean_object* x_48; uint8_t x_49; lean_object* x_50; 
x_48 = l_Lean_Parser_Tactic_unknown___elambda__1___lambda__1___closed__1;
x_49 = 1;
x_50 = l_Lean_Parser_errorAtSavedPosFn(x_48, x_49, x_1, x_44);
return x_50;
}
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; 
x_51 = lean_ctor_get(x_1, 0);
x_52 = lean_ctor_get(x_1, 1);
x_53 = lean_ctor_get(x_1, 2);
x_54 = lean_ctor_get(x_1, 3);
x_55 = lean_ctor_get(x_1, 4);
x_56 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
x_57 = lean_ctor_get(x_1, 6);
lean_inc(x_57);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_1);
x_58 = lean_ctor_get(x_51, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_51, 1);
lean_inc(x_59);
x_60 = lean_ctor_get(x_51, 2);
lean_inc(x_60);
if (lean_is_exclusive(x_51)) {
 lean_ctor_release(x_51, 0);
 lean_ctor_release(x_51, 1);
 lean_ctor_release(x_51, 2);
 x_61 = x_51;
} else {
 lean_dec_ref(x_51);
 x_61 = lean_box(0);
}
if (lean_is_scalar(x_61)) {
 x_62 = lean_alloc_ctor(0, 3, 0);
} else {
 x_62 = x_61;
}
lean_ctor_set(x_62, 0, x_58);
lean_ctor_set(x_62, 1, x_59);
lean_ctor_set(x_62, 2, x_60);
x_63 = lean_ctor_get(x_52, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_52, 1);
lean_inc(x_64);
x_65 = lean_ctor_get(x_52, 2);
lean_inc(x_65);
x_66 = lean_ctor_get(x_52, 3);
lean_inc(x_66);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 lean_ctor_release(x_52, 2);
 lean_ctor_release(x_52, 3);
 x_67 = x_52;
} else {
 lean_dec_ref(x_52);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(0, 4, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_63);
lean_ctor_set(x_68, 1, x_64);
lean_ctor_set(x_68, 2, x_65);
lean_ctor_set(x_68, 3, x_66);
x_69 = lean_ctor_get(x_2, 2);
lean_inc(x_69);
x_70 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_70, 0, x_69);
x_71 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_71, 0, x_62);
lean_ctor_set(x_71, 1, x_68);
lean_ctor_set(x_71, 2, x_53);
lean_ctor_set(x_71, 3, x_54);
lean_ctor_set(x_71, 4, x_55);
lean_ctor_set(x_71, 5, x_70);
lean_ctor_set(x_71, 6, x_57);
lean_ctor_set_uint8(x_71, sizeof(void*)*7, x_56);
lean_inc(x_71);
x_72 = l_Lean_Parser_ident___elambda__1(x_71, x_2);
x_73 = lean_ctor_get(x_72, 4);
lean_inc(x_73);
x_74 = lean_box(0);
x_75 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_73, x_74);
lean_dec(x_73);
if (x_75 == 0)
{
lean_dec(x_71);
return x_72;
}
else
{
lean_object* x_76; uint8_t x_77; lean_object* x_78; 
x_76 = l_Lean_Parser_Tactic_unknown___elambda__1___lambda__1___closed__1;
x_77 = 1;
x_78 = l_Lean_Parser_errorAtSavedPosFn(x_76, x_77, x_71, x_72);
return x_78;
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___elambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_intro___closed__2;
x_2 = l_Lean_Parser_FirstTokens_toStr___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___elambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___elambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_FirstTokens_toStr___closed__2;
x_2 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__2;
x_3 = 1;
x_4 = l_Lean_Parser_mkAntiquot(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___elambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_unknown___elambda__1___lambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___elambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__1;
x_2 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__4;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___elambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__5;
x_2 = l_Lean_Parser_Level_paren___elambda__1___closed__12;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___elambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Level_paren___elambda__1___closed__10;
x_2 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__6;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_Tactic_unknown___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__3;
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_dec(x_4);
x_6 = lean_unsigned_to_nat(1024u);
x_7 = l_Lean_Parser_checkPrecFn(x_6, x_1, x_2);
x_8 = lean_ctor_get(x_7, 4);
lean_inc(x_8);
x_9 = lean_box(0);
x_10 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_dec(x_1);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; uint8_t x_20; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
x_12 = lean_array_get_size(x_11);
lean_dec(x_11);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_1, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_1, 3);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 4);
lean_inc(x_17);
x_18 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
x_19 = lean_ctor_get(x_1, 6);
lean_inc(x_19);
x_20 = !lean_is_exclusive(x_13);
if (x_20 == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_14);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_ctor_get(x_7, 2);
lean_inc(x_22);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_24, 0, x_13);
lean_ctor_set(x_24, 1, x_14);
lean_ctor_set(x_24, 2, x_15);
lean_ctor_set(x_24, 3, x_16);
lean_ctor_set(x_24, 4, x_17);
lean_ctor_set(x_24, 5, x_23);
lean_ctor_set(x_24, 6, x_19);
lean_ctor_set_uint8(x_24, sizeof(void*)*7, x_18);
lean_inc(x_24);
x_25 = l_Lean_Parser_ident___elambda__1(x_24, x_7);
x_26 = lean_ctor_get(x_25, 4);
lean_inc(x_26);
x_27 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_26, x_9);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
lean_dec(x_24);
x_28 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__1;
x_29 = l_Lean_Parser_ParserState_mkNode(x_25, x_28, x_12);
x_30 = lean_ctor_get(x_29, 4);
lean_inc(x_30);
x_31 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_30, x_9);
lean_dec(x_30);
if (x_31 == 0)
{
lean_dec(x_1);
return x_29;
}
else
{
lean_object* x_32; 
x_32 = l_Lean_Parser_setLhsPrecFn(x_6, x_1, x_29);
lean_dec(x_1);
return x_32;
}
}
else
{
lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_33 = l_Lean_Parser_Tactic_unknown___elambda__1___lambda__1___closed__1;
x_34 = 1;
x_35 = l_Lean_Parser_errorAtSavedPosFn(x_33, x_34, x_24, x_25);
x_36 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__1;
x_37 = l_Lean_Parser_ParserState_mkNode(x_35, x_36, x_12);
x_38 = lean_ctor_get(x_37, 4);
lean_inc(x_38);
x_39 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_38, x_9);
lean_dec(x_38);
if (x_39 == 0)
{
lean_dec(x_1);
return x_37;
}
else
{
lean_object* x_40; 
x_40 = l_Lean_Parser_setLhsPrecFn(x_6, x_1, x_37);
lean_dec(x_1);
return x_40;
}
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_41 = lean_ctor_get(x_14, 0);
x_42 = lean_ctor_get(x_14, 1);
x_43 = lean_ctor_get(x_14, 2);
x_44 = lean_ctor_get(x_14, 3);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_14);
x_45 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_45, 0, x_41);
lean_ctor_set(x_45, 1, x_42);
lean_ctor_set(x_45, 2, x_43);
lean_ctor_set(x_45, 3, x_44);
x_46 = lean_ctor_get(x_7, 2);
lean_inc(x_46);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_48, 0, x_13);
lean_ctor_set(x_48, 1, x_45);
lean_ctor_set(x_48, 2, x_15);
lean_ctor_set(x_48, 3, x_16);
lean_ctor_set(x_48, 4, x_17);
lean_ctor_set(x_48, 5, x_47);
lean_ctor_set(x_48, 6, x_19);
lean_ctor_set_uint8(x_48, sizeof(void*)*7, x_18);
lean_inc(x_48);
x_49 = l_Lean_Parser_ident___elambda__1(x_48, x_7);
x_50 = lean_ctor_get(x_49, 4);
lean_inc(x_50);
x_51 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_50, x_9);
lean_dec(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
lean_dec(x_48);
x_52 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__1;
x_53 = l_Lean_Parser_ParserState_mkNode(x_49, x_52, x_12);
x_54 = lean_ctor_get(x_53, 4);
lean_inc(x_54);
x_55 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_54, x_9);
lean_dec(x_54);
if (x_55 == 0)
{
lean_dec(x_1);
return x_53;
}
else
{
lean_object* x_56; 
x_56 = l_Lean_Parser_setLhsPrecFn(x_6, x_1, x_53);
lean_dec(x_1);
return x_56;
}
}
else
{
lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_57 = l_Lean_Parser_Tactic_unknown___elambda__1___lambda__1___closed__1;
x_58 = 1;
x_59 = l_Lean_Parser_errorAtSavedPosFn(x_57, x_58, x_48, x_49);
x_60 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__1;
x_61 = l_Lean_Parser_ParserState_mkNode(x_59, x_60, x_12);
x_62 = lean_ctor_get(x_61, 4);
lean_inc(x_62);
x_63 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_62, x_9);
lean_dec(x_62);
if (x_63 == 0)
{
lean_dec(x_1);
return x_61;
}
else
{
lean_object* x_64; 
x_64 = l_Lean_Parser_setLhsPrecFn(x_6, x_1, x_61);
lean_dec(x_1);
return x_64;
}
}
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_65 = lean_ctor_get(x_13, 0);
x_66 = lean_ctor_get(x_13, 1);
x_67 = lean_ctor_get(x_13, 2);
lean_inc(x_67);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_13);
x_68 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_68, 0, x_65);
lean_ctor_set(x_68, 1, x_66);
lean_ctor_set(x_68, 2, x_67);
x_69 = lean_ctor_get(x_14, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_14, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_14, 2);
lean_inc(x_71);
x_72 = lean_ctor_get(x_14, 3);
lean_inc(x_72);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 lean_ctor_release(x_14, 1);
 lean_ctor_release(x_14, 2);
 lean_ctor_release(x_14, 3);
 x_73 = x_14;
} else {
 lean_dec_ref(x_14);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(0, 4, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_69);
lean_ctor_set(x_74, 1, x_70);
lean_ctor_set(x_74, 2, x_71);
lean_ctor_set(x_74, 3, x_72);
x_75 = lean_ctor_get(x_7, 2);
lean_inc(x_75);
x_76 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_77, 0, x_68);
lean_ctor_set(x_77, 1, x_74);
lean_ctor_set(x_77, 2, x_15);
lean_ctor_set(x_77, 3, x_16);
lean_ctor_set(x_77, 4, x_17);
lean_ctor_set(x_77, 5, x_76);
lean_ctor_set(x_77, 6, x_19);
lean_ctor_set_uint8(x_77, sizeof(void*)*7, x_18);
lean_inc(x_77);
x_78 = l_Lean_Parser_ident___elambda__1(x_77, x_7);
x_79 = lean_ctor_get(x_78, 4);
lean_inc(x_79);
x_80 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_79, x_9);
lean_dec(x_79);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; uint8_t x_84; 
lean_dec(x_77);
x_81 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__1;
x_82 = l_Lean_Parser_ParserState_mkNode(x_78, x_81, x_12);
x_83 = lean_ctor_get(x_82, 4);
lean_inc(x_83);
x_84 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_83, x_9);
lean_dec(x_83);
if (x_84 == 0)
{
lean_dec(x_1);
return x_82;
}
else
{
lean_object* x_85; 
x_85 = l_Lean_Parser_setLhsPrecFn(x_6, x_1, x_82);
lean_dec(x_1);
return x_85;
}
}
else
{
lean_object* x_86; uint8_t x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; uint8_t x_92; 
x_86 = l_Lean_Parser_Tactic_unknown___elambda__1___lambda__1___closed__1;
x_87 = 1;
x_88 = l_Lean_Parser_errorAtSavedPosFn(x_86, x_87, x_77, x_78);
x_89 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__1;
x_90 = l_Lean_Parser_ParserState_mkNode(x_88, x_89, x_12);
x_91 = lean_ctor_get(x_90, 4);
lean_inc(x_91);
x_92 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_91, x_9);
lean_dec(x_91);
if (x_92 == 0)
{
lean_dec(x_1);
return x_90;
}
else
{
lean_object* x_93; 
x_93 = l_Lean_Parser_setLhsPrecFn(x_6, x_1, x_90);
lean_dec(x_1);
return x_93;
}
}
}
}
}
else
{
lean_object* x_94; uint8_t x_95; lean_object* x_96; 
x_94 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__7;
x_95 = 1;
x_96 = l_Lean_Parser_orelseFnCore(x_4, x_94, x_95, x_1, x_2);
return x_96;
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_ident;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_errorAtSavedPos___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__1;
x_2 = l_Lean_Parser_Tactic_unknown___closed__1;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_unknown___closed__2;
x_2 = l_Lean_Parser_epsilonInfo;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_Tactic_unknown___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__3;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Tactic_unknown___closed__4;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_unknown___elambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_unknown___closed__5;
x_2 = l_Lean_Parser_Tactic_unknown___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_unknown___closed__7;
return x_1;
}
}
lean_object* l___regBuiltinParser_Lean_Parser_Tactic_unknown(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Lean_Parser_Tactic_tactic___x3c_x3b_x3e_____closed__6;
x_3 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__1;
x_4 = 1;
x_5 = l_Lean_Parser_Tactic_unknown;
x_6 = lean_unsigned_to_nat(1000u);
x_7 = l_Lean_Parser_addBuiltinParser(x_2, x_3, x_4, x_5, x_6, x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_FirstTokens_toStr___closed__2;
x_2 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__2;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown_formatter___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_unknown___elambda__1___lambda__1___closed__1;
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_errorAtSavedPos_formatter___boxed), 6, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_initFn____x40_Lean_Parser_Extra___hyg_929____closed__11;
x_2 = l_Lean_Parser_Tactic_unknown_formatter___closed__2;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_unknown_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_withPosition_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown_formatter___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__1;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_unknown_formatter___closed__4;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Tactic_unknown_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Tactic_unknown_formatter___closed__1;
x_7 = l_Lean_Parser_Tactic_unknown_formatter___closed__5;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_unknown_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__1;
x_2 = l_Lean_PrettyPrinter_mkFormatterAttribute___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_unknown_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_unknown_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Tactic_unknown_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__1;
x_4 = l___regBuiltin_Lean_Parser_Tactic_unknown_formatter___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Tactic_unknown_formatter___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_FirstTokens_toStr___closed__2;
x_2 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__2;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_unknown___elambda__1___lambda__1___closed__1;
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_errorAtSavedPos_parenthesizer___boxed), 6, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_initFn____x40_Lean_Parser_Extra___hyg_792____closed__19;
x_2 = l_Lean_Parser_Tactic_unknown_parenthesizer___closed__2;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_unknown_parenthesizer___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_unknown_parenthesizer___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__1;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_unknown_parenthesizer___closed__4;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Tactic_unknown_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Tactic_unknown_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Tactic_unknown_parenthesizer___closed__5;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__1;
x_2 = l_Lean_PrettyPrinter_mkParenthesizerAttribute___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_unknown_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l_Lean_Parser_Tactic_unknown___elambda__1___closed__1;
x_4 = l___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nestedTactic() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_tacticSeqBracketed;
return x_1;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("nestedTactic");
return x_1;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_intro___closed__2;
x_2 = l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Lean_Parser_Tactic_tactic___x3c_x3b_x3e_____closed__6;
x_3 = l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic___closed__2;
x_4 = 1;
x_5 = l_Lean_Parser_Tactic_nestedTactic;
x_6 = lean_unsigned_to_nat(1000u);
x_7 = l_Lean_Parser_addBuiltinParser(x_2, x_3, x_4, x_5, x_6, x_1);
return x_7;
}
}
lean_object* l_Lean_Parser_Tactic_nestedTactic_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_Tactic_tacticSeqBracketed_formatter(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_nestedTactic_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic___closed__2;
x_2 = l_Lean_PrettyPrinter_mkFormatterAttribute___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_nestedTactic_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_nestedTactic_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Tactic_nestedTactic_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Tactic_nestedTactic_formatter___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Tactic_nestedTactic_formatter___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_Tactic_nestedTactic_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_nestedTactic_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic___closed__2;
x_2 = l_Lean_PrettyPrinter_mkParenthesizerAttribute___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_nestedTactic_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_nestedTactic_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Tactic_nestedTactic_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Tactic_nestedTactic_parenthesizer___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Tactic_nestedTactic_parenthesizer___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("eraseAuxDiscrs");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_intro___closed__2;
x_2 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__1;
x_2 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__3;
x_3 = 1;
x_4 = l_Lean_Parser_mkAntiquot(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("eraseAuxDiscrs!");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__5;
x_2 = l_String_trim(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__6;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__7;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2;
x_2 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__8;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__9;
x_2 = l_Lean_Parser_mkAntiquot___closed__18;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_fun___elambda__1___closed__10;
x_2 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__10;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Char_quote___closed__1;
x_2 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__6;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__12;
x_2 = l_Char_quote___closed__1;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__4;
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_dec(x_4);
x_6 = l_Lean_Parser_maxPrec;
x_7 = l_Lean_Parser_checkPrecFn(x_6, x_1, x_2);
x_8 = lean_ctor_get(x_7, 4);
lean_inc(x_8);
x_9 = lean_box(0);
x_10 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_dec(x_1);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
x_12 = lean_array_get_size(x_11);
lean_dec(x_11);
x_13 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__6;
x_14 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__13;
lean_inc(x_1);
x_15 = l_Lean_Parser_symbolFnAux(x_13, x_14, x_1, x_7);
x_16 = lean_ctor_get(x_15, 4);
lean_inc(x_16);
x_17 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_16, x_9);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2;
x_19 = l_Lean_Parser_ParserState_mkNode(x_15, x_18, x_12);
x_20 = lean_ctor_get(x_19, 4);
lean_inc(x_20);
x_21 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_20, x_9);
lean_dec(x_20);
if (x_21 == 0)
{
lean_dec(x_1);
return x_19;
}
else
{
lean_object* x_22; 
x_22 = l_Lean_Parser_setLhsPrecFn(x_6, x_1, x_19);
lean_dec(x_1);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_1, 4);
lean_inc(x_23);
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_nat_dec_eq(x_23, x_24);
lean_dec(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_26 = lean_box(0);
lean_inc(x_1);
x_27 = l_Lean_Parser_Level_paren___elambda__1___lambda__1(x_15, x_1, x_9, x_26);
x_28 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2;
x_29 = l_Lean_Parser_ParserState_mkNode(x_27, x_28, x_12);
x_30 = lean_ctor_get(x_29, 4);
lean_inc(x_30);
x_31 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_30, x_9);
lean_dec(x_30);
if (x_31 == 0)
{
lean_dec(x_1);
return x_29;
}
else
{
lean_object* x_32; 
x_32 = l_Lean_Parser_setLhsPrecFn(x_6, x_1, x_29);
lean_dec(x_1);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_33 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2;
x_34 = l_Lean_Parser_ParserState_mkNode(x_15, x_33, x_12);
x_35 = lean_ctor_get(x_34, 4);
lean_inc(x_35);
x_36 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_35, x_9);
lean_dec(x_35);
if (x_36 == 0)
{
lean_dec(x_1);
return x_34;
}
else
{
lean_object* x_37; 
x_37 = l_Lean_Parser_setLhsPrecFn(x_6, x_1, x_34);
lean_dec(x_1);
return x_37;
}
}
}
}
}
else
{
lean_object* x_38; uint8_t x_39; lean_object* x_40; 
x_38 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__11;
x_39 = 1;
x_40 = l_Lean_Parser_orelseFnCore(x_4, x_38, x_39, x_1, x_2);
return x_40;
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__6;
x_2 = l_Lean_Parser_symbolInfo(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2;
x_2 = l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__1;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__2;
x_2 = l_Lean_Parser_epsilonInfo;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__4;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__4;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__5;
x_2 = l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__7;
return x_1;
}
}
lean_object* l___regBuiltinParser_Lean_Parser_Tactic_eraseAuxDiscrs(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Lean_Parser_Tactic_tactic___x3c_x3b_x3e_____closed__6;
x_3 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2;
x_4 = 1;
x_5 = l_Lean_Parser_Tactic_eraseAuxDiscrs;
x_6 = lean_unsigned_to_nat(1000u);
x_7 = l_Lean_Parser_addBuiltinParser(x_2, x_3, x_4, x_5, x_6, x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__1;
x_2 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__3;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__5;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2;
x_2 = l_Lean_Parser_maxPrec;
x_3 = l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__2;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__1;
x_7 = l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__3;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2;
x_2 = l_Lean_PrettyPrinter_mkFormatterAttribute___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__1;
x_2 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__3;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__5;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2;
x_2 = l_Lean_Parser_maxPrec;
x_3 = l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__2;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__3;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2;
x_2 = l_Lean_PrettyPrinter_mkParenthesizerAttribute___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_matchRhs___elambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_tacticSeq;
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = l_Lean_Parser_Term_syntheticHole___closed__7;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_orelseFn), 4, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* l_Lean_Parser_Tactic_matchRhs___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_3 = l_Lean_Parser_Term_hole___closed__5;
x_4 = l_Lean_Parser_Tactic_matchRhs___elambda__1___closed__1;
x_5 = 1;
x_6 = l_Lean_Parser_orelseFnCore(x_3, x_4, x_5, x_1, x_2);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_matchRhs___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Term_syntheticHole;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Tactic_tacticSeq;
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = l_Lean_Parser_orelseInfo(x_2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_matchRhs___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Term_hole;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Tactic_matchRhs___closed__1;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_matchRhs___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_matchRhs___elambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_matchRhs___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_matchRhs___closed__2;
x_2 = l_Lean_Parser_Tactic_matchRhs___closed__3;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_matchRhs() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_matchRhs___closed__4;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_matchAlts___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_matchRhs;
x_2 = l_Lean_Parser_Term_matchAlts(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_matchAlts() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_matchAlts___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___elambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_intro___closed__2;
x_2 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___elambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_match___elambda__1___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___elambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_1 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
x_2 = l_Lean_Parser_Tactic_match___elambda__1___closed__2;
x_3 = 1;
x_4 = l_Lean_Parser_mkAntiquot(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___elambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_matchAlts;
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = l_Lean_Parser_Term_structInst___elambda__1___closed__6;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___elambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Term_optType;
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = l_Lean_Parser_Tactic_match___elambda__1___closed__4;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___elambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Term_match___elambda__1___closed__4;
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = l_Lean_Parser_Tactic_match___elambda__1___closed__5;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___elambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Term_match___elambda__1___closed__3;
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = l_Lean_Parser_Tactic_match___elambda__1___closed__6;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___elambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_match___elambda__1___closed__13;
x_2 = l_Lean_Parser_Tactic_match___elambda__1___closed__7;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___elambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_match___elambda__1___closed__1;
x_2 = l_Lean_Parser_Tactic_match___elambda__1___closed__8;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___elambda__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_match___elambda__1___closed__9;
x_2 = l_Lean_Parser_Term_byTactic___elambda__1___closed__10;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___elambda__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_byTactic___elambda__1___closed__8;
x_2 = l_Lean_Parser_Tactic_match___elambda__1___closed__10;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_Tactic_match___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_3 = l_Lean_Parser_Tactic_matchAlts;
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = l_Lean_Parser_Term_optType;
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = l_Lean_Parser_Term_match___elambda__1___closed__4;
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
x_9 = l_Lean_Parser_Term_match___elambda__1___closed__3;
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
x_11 = l_Lean_Parser_Tactic_match___elambda__1___closed__3;
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_inc(x_2);
lean_inc(x_1);
x_13 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_12);
x_14 = l_Lean_Parser_leadPrec;
x_15 = l_Lean_Parser_checkPrecFn(x_14, x_1, x_2);
x_16 = lean_ctor_get(x_15, 4);
lean_inc(x_16);
x_17 = lean_box(0);
x_18 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_16, x_17);
lean_dec(x_16);
if (x_18 == 0)
{
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_33; 
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
x_20 = lean_array_get_size(x_19);
lean_dec(x_19);
x_21 = l_Lean_Parser_Term_match___elambda__1___closed__11;
x_22 = l_Lean_Parser_Term_match___elambda__1___closed__19;
lean_inc(x_1);
x_23 = l_Lean_Parser_symbolFnAux(x_21, x_22, x_1, x_15);
x_24 = lean_ctor_get(x_23, 4);
lean_inc(x_24);
x_25 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_24, x_17);
lean_dec(x_24);
if (x_25 == 0)
{
x_33 = x_23;
goto block_59;
}
else
{
lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_60 = lean_ctor_get(x_1, 4);
lean_inc(x_60);
x_61 = lean_unsigned_to_nat(0u);
x_62 = lean_nat_dec_eq(x_60, x_61);
lean_dec(x_60);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; 
x_63 = lean_box(0);
lean_inc(x_1);
x_64 = l_Lean_Parser_Level_paren___elambda__1___lambda__1(x_23, x_1, x_17, x_63);
x_33 = x_64;
goto block_59;
}
else
{
x_33 = x_23;
goto block_59;
}
}
block_32:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_27 = l_Lean_Parser_Tactic_match___elambda__1___closed__1;
x_28 = l_Lean_Parser_ParserState_mkNode(x_26, x_27, x_20);
x_29 = lean_ctor_get(x_28, 4);
lean_inc(x_29);
x_30 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_29, x_17);
lean_dec(x_29);
if (x_30 == 0)
{
lean_dec(x_1);
return x_28;
}
else
{
lean_object* x_31; 
x_31 = l_Lean_Parser_setLhsPrecFn(x_14, x_1, x_28);
lean_dec(x_1);
return x_31;
}
}
block_59:
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_ctor_get(x_33, 4);
lean_inc(x_34);
x_35 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_34, x_17);
lean_dec(x_34);
if (x_35 == 0)
{
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
x_26 = x_33;
goto block_32;
}
else
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_inc(x_1);
x_36 = lean_apply_2(x_10, x_1, x_33);
x_37 = lean_ctor_get(x_36, 4);
lean_inc(x_37);
x_38 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_37, x_17);
lean_dec(x_37);
if (x_38 == 0)
{
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
x_26 = x_36;
goto block_32;
}
else
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; 
lean_inc(x_1);
x_39 = lean_apply_2(x_8, x_1, x_36);
x_40 = lean_ctor_get(x_39, 4);
lean_inc(x_40);
x_41 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_40, x_17);
lean_dec(x_40);
if (x_41 == 0)
{
lean_dec(x_6);
lean_dec(x_4);
x_26 = x_39;
goto block_32;
}
else
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_inc(x_1);
x_42 = lean_apply_2(x_6, x_1, x_39);
x_43 = lean_ctor_get(x_42, 4);
lean_inc(x_43);
x_44 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_43, x_17);
lean_dec(x_43);
if (x_44 == 0)
{
lean_dec(x_4);
x_26 = x_42;
goto block_32;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_45 = l_Lean_Parser_Term_structInst___elambda__1___closed__3;
x_46 = l_Lean_Parser_Term_match___elambda__1___closed__21;
lean_inc(x_1);
x_47 = l_Lean_Parser_symbolFnAux(x_45, x_46, x_1, x_42);
x_48 = lean_ctor_get(x_47, 4);
lean_inc(x_48);
x_49 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_48, x_17);
lean_dec(x_48);
if (x_49 == 0)
{
lean_dec(x_4);
x_26 = x_47;
goto block_32;
}
else
{
lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_50 = lean_ctor_get(x_1, 4);
lean_inc(x_50);
x_51 = lean_unsigned_to_nat(0u);
x_52 = lean_nat_dec_eq(x_50, x_51);
lean_dec(x_50);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_53 = lean_box(0);
lean_inc(x_1);
x_54 = l_Lean_Parser_Level_paren___elambda__1___lambda__1(x_47, x_1, x_17, x_53);
x_55 = lean_ctor_get(x_54, 4);
lean_inc(x_55);
x_56 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_55, x_17);
lean_dec(x_55);
if (x_56 == 0)
{
lean_dec(x_4);
x_26 = x_54;
goto block_32;
}
else
{
lean_object* x_57; 
lean_inc(x_1);
x_57 = lean_apply_2(x_4, x_1, x_54);
x_26 = x_57;
goto block_32;
}
}
else
{
lean_object* x_58; 
lean_inc(x_1);
x_58 = lean_apply_2(x_4, x_1, x_47);
x_26 = x_58;
goto block_32;
}
}
}
}
}
}
}
}
}
else
{
lean_object* x_65; uint8_t x_66; lean_object* x_67; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_4);
x_65 = l_Lean_Parser_Tactic_match___elambda__1___closed__11;
x_66 = 1;
x_67 = l_Lean_Parser_orelseFnCore(x_12, x_65, x_66, x_1, x_2);
return x_67;
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_matchAlts;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Term_structInst___elambda__1___closed__4;
x_4 = l_Lean_Parser_andthenInfo(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Term_optType;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Tactic_match___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Term_match___elambda__1___closed__4;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Tactic_match___closed__2;
x_4 = l_Lean_Parser_andthenInfo(x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Term_match___elambda__1___closed__3;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Tactic_match___closed__3;
x_4 = l_Lean_Parser_andthenInfo(x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_match___closed__5;
x_2 = l_Lean_Parser_Tactic_match___closed__4;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_match___elambda__1___closed__1;
x_2 = l_Lean_Parser_Tactic_match___closed__5;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_match___closed__6;
x_2 = l_Lean_Parser_epsilonInfo;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_Tactic_match___closed__7;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_match___elambda__1___closed__3;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Tactic_match___closed__8;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_match___elambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_match___closed__9;
x_2 = l_Lean_Parser_Tactic_match___closed__10;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_match___closed__11;
return x_1;
}
}
lean_object* l___regBuiltinParser_Lean_Parser_Tactic_match(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Lean_Parser_Tactic_tactic___x3c_x3b_x3e_____closed__6;
x_3 = l_Lean_Parser_Tactic_match___elambda__1___closed__1;
x_4 = 1;
x_5 = l_Lean_Parser_Tactic_match;
x_6 = lean_unsigned_to_nat(1000u);
x_7 = l_Lean_Parser_addBuiltinParser(x_2, x_3, x_4, x_5, x_6, x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_matchRhs_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Parser_Term_syntheticHole_formatter___closed__2;
x_2 = l_Lean_Parser_Term_byTactic_formatter___closed__3;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_Tactic_matchRhs_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l___regBuiltin_Lean_Parser_Term_hole_formatter___closed__2;
x_7 = l_Lean_Parser_Tactic_matchRhs_formatter___closed__1;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_matchAlts_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_matchRhs_formatter), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_Tactic_matchAlts_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Parser_Tactic_matchAlts_formatter___closed__1;
x_7 = l_Lean_Parser_Term_matchAlts_formatter(x_6, x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
x_2 = l_Lean_Parser_Tactic_match___elambda__1___closed__2;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_matchAlts_formatter), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_structInst_formatter___closed__2;
x_2 = l_Lean_Parser_Tactic_match_formatter___closed__2;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_simpleBinder_formatter___closed__2;
x_2 = l_Lean_Parser_Tactic_match_formatter___closed__3;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_formatter___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_match_formatter___closed__6;
x_2 = l_Lean_Parser_Tactic_match_formatter___closed__4;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_formatter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_match_formatter___closed__4;
x_2 = l_Lean_Parser_Tactic_match_formatter___closed__5;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_formatter___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_match_formatter___closed__2;
x_2 = l_Lean_Parser_Tactic_match_formatter___closed__6;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_formatter___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_match___elambda__1___closed__1;
x_2 = l_Lean_Parser_leadPrec;
x_3 = l_Lean_Parser_Tactic_match_formatter___closed__7;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Tactic_match_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Tactic_match_formatter___closed__1;
x_7 = l_Lean_Parser_Tactic_match_formatter___closed__8;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_match_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_match___elambda__1___closed__1;
x_2 = l_Lean_PrettyPrinter_mkFormatterAttribute___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_match_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_match_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Tactic_match_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l_Lean_Parser_Tactic_match___elambda__1___closed__1;
x_4 = l___regBuiltin_Lean_Parser_Tactic_match_formatter___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Tactic_match_formatter___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_Parser_Term_syntheticHole_parenthesizer___closed__2;
x_2 = l_Lean_Parser_Term_byTactic_parenthesizer___closed__3;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_Tactic_matchRhs_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l___regBuiltin_Lean_Parser_Term_hole_parenthesizer___closed__2;
x_7 = l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__1;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_matchAlts_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_matchRhs_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_Tactic_matchAlts_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Parser_Tactic_matchAlts_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Term_matchAlts_parenthesizer(x_6, x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_myMacro____x40_Init_Notation___hyg_13362____closed__1;
x_2 = l_Lean_Parser_Tactic_match___elambda__1___closed__2;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_matchAlts_parenthesizer), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_structInst_parenthesizer___closed__2;
x_2 = l_Lean_Parser_Tactic_match_parenthesizer___closed__2;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_simpleBinder_parenthesizer___closed__2;
x_2 = l_Lean_Parser_Tactic_match_parenthesizer___closed__3;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_match_parenthesizer___closed__6;
x_2 = l_Lean_Parser_Tactic_match_parenthesizer___closed__4;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_match_parenthesizer___closed__4;
x_2 = l_Lean_Parser_Tactic_match_parenthesizer___closed__5;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_match_parenthesizer___closed__2;
x_2 = l_Lean_Parser_Tactic_match_parenthesizer___closed__6;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_match___elambda__1___closed__1;
x_2 = l_Lean_Parser_leadPrec;
x_3 = l_Lean_Parser_Tactic_match_parenthesizer___closed__7;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Tactic_match_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Tactic_match_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Tactic_match_parenthesizer___closed__8;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_match_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_match___elambda__1___closed__1;
x_2 = l_Lean_PrettyPrinter_mkParenthesizerAttribute___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_match_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_match_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Tactic_match_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l_Lean_Parser_Tactic_match___elambda__1___closed__1;
x_4 = l___regBuiltin_Lean_Parser_Tactic_match_parenthesizer___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Tactic_match_parenthesizer___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("introMatch");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_intro___closed__2;
x_2 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__1;
x_2 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__3;
x_3 = 1;
x_4 = l_Lean_Parser_mkAntiquot(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_intro___closed__5;
x_2 = l_String_trim(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__5;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbolFn), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__6;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_matchAlts;
x_2 = lean_ctor_get(x_1, 1);
lean_inc(x_2);
x_3 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__7;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__2;
x_2 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__8;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__9;
x_2 = l_Lean_Parser_Level_paren___elambda__1___closed__12;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Level_paren___elambda__1___closed__10;
x_2 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__10;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Char_quote___closed__1;
x_2 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__5;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__12;
x_2 = l_Char_quote___closed__1;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_Tactic_introMatch___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = l_Lean_Parser_Tactic_matchAlts;
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
x_5 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__4;
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_7 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(1024u);
x_9 = l_Lean_Parser_checkPrecFn(x_8, x_1, x_2);
x_10 = lean_ctor_get(x_9, 4);
lean_inc(x_10);
x_11 = lean_box(0);
x_12 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_10, x_11);
lean_dec(x_10);
if (x_12 == 0)
{
lean_dec(x_4);
lean_dec(x_1);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
x_14 = lean_array_get_size(x_13);
lean_dec(x_13);
x_15 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__5;
x_16 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__13;
lean_inc(x_1);
x_17 = l_Lean_Parser_nonReservedSymbolFnAux(x_15, x_16, x_1, x_9);
x_18 = lean_ctor_get(x_17, 4);
lean_inc(x_18);
x_19 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_18, x_11);
lean_dec(x_18);
if (x_19 == 0)
{
x_20 = x_17;
goto block_34;
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = lean_ctor_get(x_1, 4);
lean_inc(x_35);
x_36 = lean_unsigned_to_nat(0u);
x_37 = lean_nat_dec_eq(x_35, x_36);
lean_dec(x_35);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_box(0);
lean_inc(x_1);
x_39 = l_Lean_Parser_Level_paren___elambda__1___lambda__1(x_17, x_1, x_11, x_38);
x_20 = x_39;
goto block_34;
}
else
{
x_20 = x_17;
goto block_34;
}
}
block_34:
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_20, 4);
lean_inc(x_21);
x_22 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_21, x_11);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_dec(x_4);
x_23 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__2;
x_24 = l_Lean_Parser_ParserState_mkNode(x_20, x_23, x_14);
x_25 = lean_ctor_get(x_24, 4);
lean_inc(x_25);
x_26 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_25, x_11);
lean_dec(x_25);
if (x_26 == 0)
{
lean_dec(x_1);
return x_24;
}
else
{
lean_object* x_27; 
x_27 = l_Lean_Parser_setLhsPrecFn(x_8, x_1, x_24);
lean_dec(x_1);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_inc(x_1);
x_28 = lean_apply_2(x_4, x_1, x_20);
x_29 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__2;
x_30 = l_Lean_Parser_ParserState_mkNode(x_28, x_29, x_14);
x_31 = lean_ctor_get(x_30, 4);
lean_inc(x_31);
x_32 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_31, x_11);
lean_dec(x_31);
if (x_32 == 0)
{
lean_dec(x_1);
return x_30;
}
else
{
lean_object* x_33; 
x_33 = l_Lean_Parser_setLhsPrecFn(x_8, x_1, x_30);
lean_dec(x_1);
return x_33;
}
}
}
}
}
else
{
lean_object* x_40; uint8_t x_41; lean_object* x_42; 
lean_dec(x_4);
x_40 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__11;
x_41 = 1;
x_42 = l_Lean_Parser_orelseFnCore(x_6, x_40, x_41, x_1, x_2);
return x_42;
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__5;
x_2 = 0;
x_3 = l_Lean_Parser_nonReservedSymbolInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_matchAlts;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Tactic_introMatch___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_3, x_2);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__2;
x_2 = l_Lean_Parser_Tactic_introMatch___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_introMatch___closed__3;
x_2 = l_Lean_Parser_epsilonInfo;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_Tactic_introMatch___closed__4;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__4;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Tactic_introMatch___closed__5;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_introMatch___elambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_introMatch___closed__6;
x_2 = l_Lean_Parser_Tactic_introMatch___closed__7;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_introMatch___closed__8;
return x_1;
}
}
lean_object* l___regBuiltinParser_Lean_Parser_Tactic_introMatch(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Lean_Parser_Tactic_tactic___x3c_x3b_x3e_____closed__6;
x_3 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__2;
x_4 = 1;
x_5 = l_Lean_Parser_Tactic_introMatch;
x_6 = lean_unsigned_to_nat(1000u);
x_7 = l_Lean_Parser_addBuiltinParser(x_2, x_3, x_4, x_5, x_6, x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__1;
x_2 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__3;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch_formatter___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_intro___closed__5;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_formatter___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_introMatch_formatter___closed__2;
x_2 = l_Lean_Parser_Tactic_match_formatter___closed__2;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_introMatch_formatter___closed__3;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Tactic_introMatch_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Tactic_introMatch_formatter___closed__1;
x_7 = l_Lean_Parser_Tactic_introMatch_formatter___closed__4;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_introMatch_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__2;
x_2 = l_Lean_PrettyPrinter_mkFormatterAttribute___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_introMatch_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_introMatch_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Tactic_introMatch_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Tactic_introMatch_formatter___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Tactic_introMatch_formatter___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__1;
x_2 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__3;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_intro___closed__5;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2;
x_2 = l_Lean_Parser_Tactic_match_parenthesizer___closed__2;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__3;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Tactic_introMatch_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__4;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__2;
x_2 = l_Lean_PrettyPrinter_mkParenthesizerAttribute___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_introMatch_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l_Lean_Parser_Tactic_introMatch___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_intro___closed__2;
x_2 = l___private_Init_Meta_0__Lean_Meta_Simp_reprConfig____x40_Init_Meta___hyg_6907____closed__26;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_decide___elambda__1___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_1 = l___private_Init_Meta_0__Lean_Meta_Simp_reprConfig____x40_Init_Meta___hyg_6907____closed__26;
x_2 = l_Lean_Parser_Tactic_decide___elambda__1___closed__2;
x_3 = 1;
x_4 = l_Lean_Parser_mkAntiquot(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Init_Meta_0__Lean_Meta_Simp_reprConfig____x40_Init_Meta___hyg_6907____closed__26;
x_2 = l_String_trim(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_decide___elambda__1___closed__4;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbolFn), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_decide___elambda__1___closed__5;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_decide___elambda__1___closed__1;
x_2 = l_Lean_Parser_Tactic_decide___elambda__1___closed__6;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_decide___elambda__1___closed__7;
x_2 = l_Lean_Parser_Level_paren___elambda__1___closed__12;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Level_paren___elambda__1___closed__10;
x_2 = l_Lean_Parser_Tactic_decide___elambda__1___closed__8;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Char_quote___closed__1;
x_2 = l_Lean_Parser_Tactic_decide___elambda__1___closed__4;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_decide___elambda__1___closed__10;
x_2 = l_Char_quote___closed__1;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_Tactic_decide___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Parser_Tactic_decide___elambda__1___closed__3;
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_dec(x_4);
x_6 = lean_unsigned_to_nat(1024u);
x_7 = l_Lean_Parser_checkPrecFn(x_6, x_1, x_2);
x_8 = lean_ctor_get(x_7, 4);
lean_inc(x_8);
x_9 = lean_box(0);
x_10 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_dec(x_1);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
x_12 = lean_array_get_size(x_11);
lean_dec(x_11);
x_13 = l_Lean_Parser_Tactic_decide___elambda__1___closed__4;
x_14 = l_Lean_Parser_Tactic_decide___elambda__1___closed__11;
lean_inc(x_1);
x_15 = l_Lean_Parser_nonReservedSymbolFnAux(x_13, x_14, x_1, x_7);
x_16 = lean_ctor_get(x_15, 4);
lean_inc(x_16);
x_17 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_16, x_9);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = l_Lean_Parser_Tactic_decide___elambda__1___closed__1;
x_19 = l_Lean_Parser_ParserState_mkNode(x_15, x_18, x_12);
x_20 = lean_ctor_get(x_19, 4);
lean_inc(x_20);
x_21 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_20, x_9);
lean_dec(x_20);
if (x_21 == 0)
{
lean_dec(x_1);
return x_19;
}
else
{
lean_object* x_22; 
x_22 = l_Lean_Parser_setLhsPrecFn(x_6, x_1, x_19);
lean_dec(x_1);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_1, 4);
lean_inc(x_23);
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_nat_dec_eq(x_23, x_24);
lean_dec(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_26 = lean_box(0);
lean_inc(x_1);
x_27 = l_Lean_Parser_Level_paren___elambda__1___lambda__1(x_15, x_1, x_9, x_26);
x_28 = l_Lean_Parser_Tactic_decide___elambda__1___closed__1;
x_29 = l_Lean_Parser_ParserState_mkNode(x_27, x_28, x_12);
x_30 = lean_ctor_get(x_29, 4);
lean_inc(x_30);
x_31 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_30, x_9);
lean_dec(x_30);
if (x_31 == 0)
{
lean_dec(x_1);
return x_29;
}
else
{
lean_object* x_32; 
x_32 = l_Lean_Parser_setLhsPrecFn(x_6, x_1, x_29);
lean_dec(x_1);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_33 = l_Lean_Parser_Tactic_decide___elambda__1___closed__1;
x_34 = l_Lean_Parser_ParserState_mkNode(x_15, x_33, x_12);
x_35 = lean_ctor_get(x_34, 4);
lean_inc(x_35);
x_36 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_35, x_9);
lean_dec(x_35);
if (x_36 == 0)
{
lean_dec(x_1);
return x_34;
}
else
{
lean_object* x_37; 
x_37 = l_Lean_Parser_setLhsPrecFn(x_6, x_1, x_34);
lean_dec(x_1);
return x_37;
}
}
}
}
}
else
{
lean_object* x_38; uint8_t x_39; lean_object* x_40; 
x_38 = l_Lean_Parser_Tactic_decide___elambda__1___closed__9;
x_39 = 1;
x_40 = l_Lean_Parser_orelseFnCore(x_4, x_38, x_39, x_1, x_2);
return x_40;
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_decide___elambda__1___closed__4;
x_2 = 0;
x_3 = l_Lean_Parser_nonReservedSymbolInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_decide___elambda__1___closed__1;
x_2 = l_Lean_Parser_Tactic_decide___closed__1;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_decide___closed__2;
x_2 = l_Lean_Parser_epsilonInfo;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_Tactic_decide___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_decide___elambda__1___closed__3;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Tactic_decide___closed__4;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_decide___elambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_decide___closed__5;
x_2 = l_Lean_Parser_Tactic_decide___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_decide___closed__7;
return x_1;
}
}
lean_object* l___regBuiltinParser_Lean_Parser_Tactic_decide(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Lean_Parser_Tactic_tactic___x3c_x3b_x3e_____closed__6;
x_3 = l_Lean_Parser_Tactic_decide___elambda__1___closed__1;
x_4 = 1;
x_5 = l_Lean_Parser_Tactic_decide;
x_6 = lean_unsigned_to_nat(1000u);
x_7 = l_Lean_Parser_addBuiltinParser(x_2, x_3, x_4, x_5, x_6, x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Init_Meta_0__Lean_Meta_Simp_reprConfig____x40_Init_Meta___hyg_6907____closed__26;
x_2 = l_Lean_Parser_Tactic_decide___elambda__1___closed__2;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide_formatter___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Init_Meta_0__Lean_Meta_Simp_reprConfig____x40_Init_Meta___hyg_6907____closed__26;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_formatter___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_decide___elambda__1___closed__1;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_decide_formatter___closed__2;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Tactic_decide_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Tactic_decide_formatter___closed__1;
x_7 = l_Lean_Parser_Tactic_decide_formatter___closed__3;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_decide_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_decide___elambda__1___closed__1;
x_2 = l_Lean_PrettyPrinter_mkFormatterAttribute___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_decide_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_decide_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Tactic_decide_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l_Lean_Parser_Tactic_decide___elambda__1___closed__1;
x_4 = l___regBuiltin_Lean_Parser_Tactic_decide_formatter___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Tactic_decide_formatter___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___private_Init_Meta_0__Lean_Meta_Simp_reprConfig____x40_Init_Meta___hyg_6907____closed__26;
x_2 = l_Lean_Parser_Tactic_decide___elambda__1___closed__2;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Init_Meta_0__Lean_Meta_Simp_reprConfig____x40_Init_Meta___hyg_6907____closed__26;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_decide_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_decide___elambda__1___closed__1;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_decide_parenthesizer___closed__2;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Tactic_decide_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Tactic_decide_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Tactic_decide_parenthesizer___closed__3;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_decide_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_decide___elambda__1___closed__1;
x_2 = l_Lean_PrettyPrinter_mkParenthesizerAttribute___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_decide_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_decide_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Tactic_decide_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l_Lean_Parser_Tactic_decide___elambda__1___closed__1;
x_4 = l___regBuiltin_Lean_Parser_Tactic_decide_parenthesizer___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Tactic_decide_parenthesizer___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("nativeDecide");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_intro___closed__2;
x_2 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__1;
x_2 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__3;
x_3 = 1;
x_4 = l_Lean_Parser_mkAntiquot(x_1, x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__1;
x_2 = l_String_trim(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__5;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbolFn), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__6;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2;
x_2 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__7;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__8;
x_2 = l_Lean_Parser_Level_paren___elambda__1___closed__12;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Level_paren___elambda__1___closed__10;
x_2 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__9;
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Char_quote___closed__1;
x_2 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__5;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__11;
x_2 = l_Char_quote___closed__1;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_Tactic_nativeDecide___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__4;
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_dec(x_4);
x_6 = lean_unsigned_to_nat(1024u);
x_7 = l_Lean_Parser_checkPrecFn(x_6, x_1, x_2);
x_8 = lean_ctor_get(x_7, 4);
lean_inc(x_8);
x_9 = lean_box(0);
x_10 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_dec(x_1);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
x_12 = lean_array_get_size(x_11);
lean_dec(x_11);
x_13 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__5;
x_14 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__12;
lean_inc(x_1);
x_15 = l_Lean_Parser_nonReservedSymbolFnAux(x_13, x_14, x_1, x_7);
x_16 = lean_ctor_get(x_15, 4);
lean_inc(x_16);
x_17 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_16, x_9);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2;
x_19 = l_Lean_Parser_ParserState_mkNode(x_15, x_18, x_12);
x_20 = lean_ctor_get(x_19, 4);
lean_inc(x_20);
x_21 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_20, x_9);
lean_dec(x_20);
if (x_21 == 0)
{
lean_dec(x_1);
return x_19;
}
else
{
lean_object* x_22; 
x_22 = l_Lean_Parser_setLhsPrecFn(x_6, x_1, x_19);
lean_dec(x_1);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_1, 4);
lean_inc(x_23);
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_nat_dec_eq(x_23, x_24);
lean_dec(x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_26 = lean_box(0);
lean_inc(x_1);
x_27 = l_Lean_Parser_Level_paren___elambda__1___lambda__1(x_15, x_1, x_9, x_26);
x_28 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2;
x_29 = l_Lean_Parser_ParserState_mkNode(x_27, x_28, x_12);
x_30 = lean_ctor_get(x_29, 4);
lean_inc(x_30);
x_31 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_30, x_9);
lean_dec(x_30);
if (x_31 == 0)
{
lean_dec(x_1);
return x_29;
}
else
{
lean_object* x_32; 
x_32 = l_Lean_Parser_setLhsPrecFn(x_6, x_1, x_29);
lean_dec(x_1);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_33 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2;
x_34 = l_Lean_Parser_ParserState_mkNode(x_15, x_33, x_12);
x_35 = lean_ctor_get(x_34, 4);
lean_inc(x_35);
x_36 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_35, x_9);
lean_dec(x_35);
if (x_36 == 0)
{
lean_dec(x_1);
return x_34;
}
else
{
lean_object* x_37; 
x_37 = l_Lean_Parser_setLhsPrecFn(x_6, x_1, x_34);
lean_dec(x_1);
return x_37;
}
}
}
}
}
else
{
lean_object* x_38; uint8_t x_39; lean_object* x_40; 
x_38 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__10;
x_39 = 1;
x_40 = l_Lean_Parser_orelseFnCore(x_4, x_38, x_39, x_1, x_2);
return x_40;
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__5;
x_2 = 0;
x_3 = l_Lean_Parser_nonReservedSymbolInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2;
x_2 = l_Lean_Parser_Tactic_nativeDecide___closed__1;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___closed__2;
x_2 = l_Lean_Parser_epsilonInfo;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_Tactic_nativeDecide___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__4;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_Tactic_nativeDecide___closed__4;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_nativeDecide___elambda__1), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___closed__5;
x_2 = l_Lean_Parser_Tactic_nativeDecide___closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___closed__7;
return x_1;
}
}
lean_object* l___regBuiltinParser_Lean_Parser_Tactic_nativeDecide(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Lean_Parser_Tactic_tactic___x3c_x3b_x3e_____closed__6;
x_3 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2;
x_4 = 1;
x_5 = l_Lean_Parser_Tactic_nativeDecide;
x_6 = lean_unsigned_to_nat(1000u);
x_7 = l_Lean_Parser_addBuiltinParser(x_2, x_3, x_4, x_5, x_6, x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__1;
x_2 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__3;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide_formatter___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__1;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_formatter___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_nativeDecide_formatter___closed__2;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Tactic_nativeDecide_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Tactic_nativeDecide_formatter___closed__1;
x_7 = l_Lean_Parser_Tactic_nativeDecide_formatter___closed__3;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_nativeDecide_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2;
x_2 = l_Lean_PrettyPrinter_mkFormatterAttribute___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_nativeDecide_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_nativeDecide_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Tactic_nativeDecide_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Tactic_nativeDecide_formatter___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Tactic_nativeDecide_formatter___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__1;
x_2 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__3;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__1;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__2;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Tactic_nativeDecide_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__3;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2;
x_2 = l_Lean_PrettyPrinter_mkParenthesizerAttribute___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Tactic_nativeDecide_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Tactic_nativeDecide_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Parser_Term(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Parser_Tactic(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Term(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__1 = _init_l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__1);
l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__2 = _init_l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__2);
l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__3 = _init_l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5____closed__3);
res = l_Lean_Parser_Tactic_initFn____x40_Lean_Parser_Tactic___hyg_5_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_unknown___elambda__1___lambda__1___closed__1 = _init_l_Lean_Parser_Tactic_unknown___elambda__1___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown___elambda__1___lambda__1___closed__1);
l_Lean_Parser_Tactic_unknown___elambda__1___closed__1 = _init_l_Lean_Parser_Tactic_unknown___elambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown___elambda__1___closed__1);
l_Lean_Parser_Tactic_unknown___elambda__1___closed__2 = _init_l_Lean_Parser_Tactic_unknown___elambda__1___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown___elambda__1___closed__2);
l_Lean_Parser_Tactic_unknown___elambda__1___closed__3 = _init_l_Lean_Parser_Tactic_unknown___elambda__1___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown___elambda__1___closed__3);
l_Lean_Parser_Tactic_unknown___elambda__1___closed__4 = _init_l_Lean_Parser_Tactic_unknown___elambda__1___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown___elambda__1___closed__4);
l_Lean_Parser_Tactic_unknown___elambda__1___closed__5 = _init_l_Lean_Parser_Tactic_unknown___elambda__1___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown___elambda__1___closed__5);
l_Lean_Parser_Tactic_unknown___elambda__1___closed__6 = _init_l_Lean_Parser_Tactic_unknown___elambda__1___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown___elambda__1___closed__6);
l_Lean_Parser_Tactic_unknown___elambda__1___closed__7 = _init_l_Lean_Parser_Tactic_unknown___elambda__1___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown___elambda__1___closed__7);
l_Lean_Parser_Tactic_unknown___closed__1 = _init_l_Lean_Parser_Tactic_unknown___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown___closed__1);
l_Lean_Parser_Tactic_unknown___closed__2 = _init_l_Lean_Parser_Tactic_unknown___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown___closed__2);
l_Lean_Parser_Tactic_unknown___closed__3 = _init_l_Lean_Parser_Tactic_unknown___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown___closed__3);
l_Lean_Parser_Tactic_unknown___closed__4 = _init_l_Lean_Parser_Tactic_unknown___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown___closed__4);
l_Lean_Parser_Tactic_unknown___closed__5 = _init_l_Lean_Parser_Tactic_unknown___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown___closed__5);
l_Lean_Parser_Tactic_unknown___closed__6 = _init_l_Lean_Parser_Tactic_unknown___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown___closed__6);
l_Lean_Parser_Tactic_unknown___closed__7 = _init_l_Lean_Parser_Tactic_unknown___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown___closed__7);
l_Lean_Parser_Tactic_unknown = _init_l_Lean_Parser_Tactic_unknown();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown);
res = l___regBuiltinParser_Lean_Parser_Tactic_unknown(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_unknown_formatter___closed__1 = _init_l_Lean_Parser_Tactic_unknown_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown_formatter___closed__1);
l_Lean_Parser_Tactic_unknown_formatter___closed__2 = _init_l_Lean_Parser_Tactic_unknown_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown_formatter___closed__2);
l_Lean_Parser_Tactic_unknown_formatter___closed__3 = _init_l_Lean_Parser_Tactic_unknown_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown_formatter___closed__3);
l_Lean_Parser_Tactic_unknown_formatter___closed__4 = _init_l_Lean_Parser_Tactic_unknown_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown_formatter___closed__4);
l_Lean_Parser_Tactic_unknown_formatter___closed__5 = _init_l_Lean_Parser_Tactic_unknown_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown_formatter___closed__5);
l___regBuiltin_Lean_Parser_Tactic_unknown_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_Tactic_unknown_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_unknown_formatter___closed__1);
l___regBuiltin_Lean_Parser_Tactic_unknown_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_Tactic_unknown_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_unknown_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_Tactic_unknown_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_unknown_parenthesizer___closed__1 = _init_l_Lean_Parser_Tactic_unknown_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown_parenthesizer___closed__1);
l_Lean_Parser_Tactic_unknown_parenthesizer___closed__2 = _init_l_Lean_Parser_Tactic_unknown_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown_parenthesizer___closed__2);
l_Lean_Parser_Tactic_unknown_parenthesizer___closed__3 = _init_l_Lean_Parser_Tactic_unknown_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown_parenthesizer___closed__3);
l_Lean_Parser_Tactic_unknown_parenthesizer___closed__4 = _init_l_Lean_Parser_Tactic_unknown_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown_parenthesizer___closed__4);
l_Lean_Parser_Tactic_unknown_parenthesizer___closed__5 = _init_l_Lean_Parser_Tactic_unknown_parenthesizer___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_unknown_parenthesizer___closed__5);
l___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer___closed__2);
res = l___regBuiltin_Lean_Parser_Tactic_unknown_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_nestedTactic = _init_l_Lean_Parser_Tactic_nestedTactic();
lean_mark_persistent(l_Lean_Parser_Tactic_nestedTactic);
l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic___closed__1 = _init_l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic___closed__1();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic___closed__1);
l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic___closed__2 = _init_l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic___closed__2();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic___closed__2);
res = l___regBuiltinParser_Lean_Parser_Tactic_nestedTactic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Parser_Tactic_nestedTactic_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_Tactic_nestedTactic_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_nestedTactic_formatter___closed__1);
l___regBuiltin_Lean_Parser_Tactic_nestedTactic_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_Tactic_nestedTactic_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_nestedTactic_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_Tactic_nestedTactic_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Parser_Tactic_nestedTactic_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_Tactic_nestedTactic_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_nestedTactic_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_Tactic_nestedTactic_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_Parser_Tactic_nestedTactic_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_nestedTactic_parenthesizer___closed__2);
res = l___regBuiltin_Lean_Parser_Tactic_nestedTactic_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__1 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__1);
l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__2);
l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__3 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__3);
l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__4 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__4);
l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__5 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__5);
l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__6 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__6);
l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__7 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__7);
l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__8 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__8);
l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__9 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__9);
l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__10 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__10);
l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__11 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__11();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__11);
l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__12 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__12();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__12);
l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__13 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__13();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___elambda__1___closed__13);
l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__1 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__1);
l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__2 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__2);
l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__3 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__3);
l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__4 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__4);
l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__5 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__5);
l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__6 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__6);
l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__7 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs___closed__7);
l_Lean_Parser_Tactic_eraseAuxDiscrs = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs);
res = l___regBuiltinParser_Lean_Parser_Tactic_eraseAuxDiscrs(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__1 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__1);
l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__2 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__2);
l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__3 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__3);
l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__1);
l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__1 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__1);
l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__2 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__2);
l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__3 = _init_l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__3);
l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer___closed__2);
res = l___regBuiltin_Lean_Parser_Tactic_eraseAuxDiscrs_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_matchRhs___elambda__1___closed__1 = _init_l_Lean_Parser_Tactic_matchRhs___elambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_matchRhs___elambda__1___closed__1);
l_Lean_Parser_Tactic_matchRhs___closed__1 = _init_l_Lean_Parser_Tactic_matchRhs___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_matchRhs___closed__1);
l_Lean_Parser_Tactic_matchRhs___closed__2 = _init_l_Lean_Parser_Tactic_matchRhs___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_matchRhs___closed__2);
l_Lean_Parser_Tactic_matchRhs___closed__3 = _init_l_Lean_Parser_Tactic_matchRhs___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_matchRhs___closed__3);
l_Lean_Parser_Tactic_matchRhs___closed__4 = _init_l_Lean_Parser_Tactic_matchRhs___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_matchRhs___closed__4);
l_Lean_Parser_Tactic_matchRhs = _init_l_Lean_Parser_Tactic_matchRhs();
lean_mark_persistent(l_Lean_Parser_Tactic_matchRhs);
l_Lean_Parser_Tactic_matchAlts___closed__1 = _init_l_Lean_Parser_Tactic_matchAlts___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_matchAlts___closed__1);
l_Lean_Parser_Tactic_matchAlts = _init_l_Lean_Parser_Tactic_matchAlts();
lean_mark_persistent(l_Lean_Parser_Tactic_matchAlts);
l_Lean_Parser_Tactic_match___elambda__1___closed__1 = _init_l_Lean_Parser_Tactic_match___elambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_match___elambda__1___closed__1);
l_Lean_Parser_Tactic_match___elambda__1___closed__2 = _init_l_Lean_Parser_Tactic_match___elambda__1___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_match___elambda__1___closed__2);
l_Lean_Parser_Tactic_match___elambda__1___closed__3 = _init_l_Lean_Parser_Tactic_match___elambda__1___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_match___elambda__1___closed__3);
l_Lean_Parser_Tactic_match___elambda__1___closed__4 = _init_l_Lean_Parser_Tactic_match___elambda__1___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_match___elambda__1___closed__4);
l_Lean_Parser_Tactic_match___elambda__1___closed__5 = _init_l_Lean_Parser_Tactic_match___elambda__1___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_match___elambda__1___closed__5);
l_Lean_Parser_Tactic_match___elambda__1___closed__6 = _init_l_Lean_Parser_Tactic_match___elambda__1___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_match___elambda__1___closed__6);
l_Lean_Parser_Tactic_match___elambda__1___closed__7 = _init_l_Lean_Parser_Tactic_match___elambda__1___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_match___elambda__1___closed__7);
l_Lean_Parser_Tactic_match___elambda__1___closed__8 = _init_l_Lean_Parser_Tactic_match___elambda__1___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_match___elambda__1___closed__8);
l_Lean_Parser_Tactic_match___elambda__1___closed__9 = _init_l_Lean_Parser_Tactic_match___elambda__1___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_match___elambda__1___closed__9);
l_Lean_Parser_Tactic_match___elambda__1___closed__10 = _init_l_Lean_Parser_Tactic_match___elambda__1___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_match___elambda__1___closed__10);
l_Lean_Parser_Tactic_match___elambda__1___closed__11 = _init_l_Lean_Parser_Tactic_match___elambda__1___closed__11();
lean_mark_persistent(l_Lean_Parser_Tactic_match___elambda__1___closed__11);
l_Lean_Parser_Tactic_match___closed__1 = _init_l_Lean_Parser_Tactic_match___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_match___closed__1);
l_Lean_Parser_Tactic_match___closed__2 = _init_l_Lean_Parser_Tactic_match___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_match___closed__2);
l_Lean_Parser_Tactic_match___closed__3 = _init_l_Lean_Parser_Tactic_match___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_match___closed__3);
l_Lean_Parser_Tactic_match___closed__4 = _init_l_Lean_Parser_Tactic_match___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_match___closed__4);
l_Lean_Parser_Tactic_match___closed__5 = _init_l_Lean_Parser_Tactic_match___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_match___closed__5);
l_Lean_Parser_Tactic_match___closed__6 = _init_l_Lean_Parser_Tactic_match___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_match___closed__6);
l_Lean_Parser_Tactic_match___closed__7 = _init_l_Lean_Parser_Tactic_match___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_match___closed__7);
l_Lean_Parser_Tactic_match___closed__8 = _init_l_Lean_Parser_Tactic_match___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_match___closed__8);
l_Lean_Parser_Tactic_match___closed__9 = _init_l_Lean_Parser_Tactic_match___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_match___closed__9);
l_Lean_Parser_Tactic_match___closed__10 = _init_l_Lean_Parser_Tactic_match___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_match___closed__10);
l_Lean_Parser_Tactic_match___closed__11 = _init_l_Lean_Parser_Tactic_match___closed__11();
lean_mark_persistent(l_Lean_Parser_Tactic_match___closed__11);
l_Lean_Parser_Tactic_match = _init_l_Lean_Parser_Tactic_match();
lean_mark_persistent(l_Lean_Parser_Tactic_match);
res = l___regBuiltinParser_Lean_Parser_Tactic_match(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_matchRhs_formatter___closed__1 = _init_l_Lean_Parser_Tactic_matchRhs_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_matchRhs_formatter___closed__1);
l_Lean_Parser_Tactic_matchAlts_formatter___closed__1 = _init_l_Lean_Parser_Tactic_matchAlts_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_matchAlts_formatter___closed__1);
l_Lean_Parser_Tactic_match_formatter___closed__1 = _init_l_Lean_Parser_Tactic_match_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_match_formatter___closed__1);
l_Lean_Parser_Tactic_match_formatter___closed__2 = _init_l_Lean_Parser_Tactic_match_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_match_formatter___closed__2);
l_Lean_Parser_Tactic_match_formatter___closed__3 = _init_l_Lean_Parser_Tactic_match_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_match_formatter___closed__3);
l_Lean_Parser_Tactic_match_formatter___closed__4 = _init_l_Lean_Parser_Tactic_match_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_match_formatter___closed__4);
l_Lean_Parser_Tactic_match_formatter___closed__5 = _init_l_Lean_Parser_Tactic_match_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_match_formatter___closed__5);
l_Lean_Parser_Tactic_match_formatter___closed__6 = _init_l_Lean_Parser_Tactic_match_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_match_formatter___closed__6);
l_Lean_Parser_Tactic_match_formatter___closed__7 = _init_l_Lean_Parser_Tactic_match_formatter___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_match_formatter___closed__7);
l_Lean_Parser_Tactic_match_formatter___closed__8 = _init_l_Lean_Parser_Tactic_match_formatter___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_match_formatter___closed__8);
l___regBuiltin_Lean_Parser_Tactic_match_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_Tactic_match_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_match_formatter___closed__1);
l___regBuiltin_Lean_Parser_Tactic_match_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_Tactic_match_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_match_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_Tactic_match_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__1 = _init_l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_matchRhs_parenthesizer___closed__1);
l_Lean_Parser_Tactic_matchAlts_parenthesizer___closed__1 = _init_l_Lean_Parser_Tactic_matchAlts_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_matchAlts_parenthesizer___closed__1);
l_Lean_Parser_Tactic_match_parenthesizer___closed__1 = _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_match_parenthesizer___closed__1);
l_Lean_Parser_Tactic_match_parenthesizer___closed__2 = _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_match_parenthesizer___closed__2);
l_Lean_Parser_Tactic_match_parenthesizer___closed__3 = _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_match_parenthesizer___closed__3);
l_Lean_Parser_Tactic_match_parenthesizer___closed__4 = _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_match_parenthesizer___closed__4);
l_Lean_Parser_Tactic_match_parenthesizer___closed__5 = _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_match_parenthesizer___closed__5);
l_Lean_Parser_Tactic_match_parenthesizer___closed__6 = _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_match_parenthesizer___closed__6);
l_Lean_Parser_Tactic_match_parenthesizer___closed__7 = _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_match_parenthesizer___closed__7);
l_Lean_Parser_Tactic_match_parenthesizer___closed__8 = _init_l_Lean_Parser_Tactic_match_parenthesizer___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_match_parenthesizer___closed__8);
l___regBuiltin_Lean_Parser_Tactic_match_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_Tactic_match_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_match_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_Tactic_match_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_Parser_Tactic_match_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_match_parenthesizer___closed__2);
res = l___regBuiltin_Lean_Parser_Tactic_match_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_introMatch___elambda__1___closed__1 = _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___elambda__1___closed__1);
l_Lean_Parser_Tactic_introMatch___elambda__1___closed__2 = _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___elambda__1___closed__2);
l_Lean_Parser_Tactic_introMatch___elambda__1___closed__3 = _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___elambda__1___closed__3);
l_Lean_Parser_Tactic_introMatch___elambda__1___closed__4 = _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___elambda__1___closed__4);
l_Lean_Parser_Tactic_introMatch___elambda__1___closed__5 = _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___elambda__1___closed__5);
l_Lean_Parser_Tactic_introMatch___elambda__1___closed__6 = _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___elambda__1___closed__6);
l_Lean_Parser_Tactic_introMatch___elambda__1___closed__7 = _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___elambda__1___closed__7);
l_Lean_Parser_Tactic_introMatch___elambda__1___closed__8 = _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___elambda__1___closed__8);
l_Lean_Parser_Tactic_introMatch___elambda__1___closed__9 = _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___elambda__1___closed__9);
l_Lean_Parser_Tactic_introMatch___elambda__1___closed__10 = _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___elambda__1___closed__10);
l_Lean_Parser_Tactic_introMatch___elambda__1___closed__11 = _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__11();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___elambda__1___closed__11);
l_Lean_Parser_Tactic_introMatch___elambda__1___closed__12 = _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__12();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___elambda__1___closed__12);
l_Lean_Parser_Tactic_introMatch___elambda__1___closed__13 = _init_l_Lean_Parser_Tactic_introMatch___elambda__1___closed__13();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___elambda__1___closed__13);
l_Lean_Parser_Tactic_introMatch___closed__1 = _init_l_Lean_Parser_Tactic_introMatch___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___closed__1);
l_Lean_Parser_Tactic_introMatch___closed__2 = _init_l_Lean_Parser_Tactic_introMatch___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___closed__2);
l_Lean_Parser_Tactic_introMatch___closed__3 = _init_l_Lean_Parser_Tactic_introMatch___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___closed__3);
l_Lean_Parser_Tactic_introMatch___closed__4 = _init_l_Lean_Parser_Tactic_introMatch___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___closed__4);
l_Lean_Parser_Tactic_introMatch___closed__5 = _init_l_Lean_Parser_Tactic_introMatch___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___closed__5);
l_Lean_Parser_Tactic_introMatch___closed__6 = _init_l_Lean_Parser_Tactic_introMatch___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___closed__6);
l_Lean_Parser_Tactic_introMatch___closed__7 = _init_l_Lean_Parser_Tactic_introMatch___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___closed__7);
l_Lean_Parser_Tactic_introMatch___closed__8 = _init_l_Lean_Parser_Tactic_introMatch___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch___closed__8);
l_Lean_Parser_Tactic_introMatch = _init_l_Lean_Parser_Tactic_introMatch();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch);
res = l___regBuiltinParser_Lean_Parser_Tactic_introMatch(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_introMatch_formatter___closed__1 = _init_l_Lean_Parser_Tactic_introMatch_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch_formatter___closed__1);
l_Lean_Parser_Tactic_introMatch_formatter___closed__2 = _init_l_Lean_Parser_Tactic_introMatch_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch_formatter___closed__2);
l_Lean_Parser_Tactic_introMatch_formatter___closed__3 = _init_l_Lean_Parser_Tactic_introMatch_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch_formatter___closed__3);
l_Lean_Parser_Tactic_introMatch_formatter___closed__4 = _init_l_Lean_Parser_Tactic_introMatch_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch_formatter___closed__4);
l___regBuiltin_Lean_Parser_Tactic_introMatch_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_Tactic_introMatch_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_introMatch_formatter___closed__1);
l___regBuiltin_Lean_Parser_Tactic_introMatch_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_Tactic_introMatch_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_introMatch_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_Tactic_introMatch_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__1 = _init_l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__1);
l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2 = _init_l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2);
l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__3 = _init_l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__3);
l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__4 = _init_l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_introMatch_parenthesizer___closed__4);
l___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer___closed__2);
res = l___regBuiltin_Lean_Parser_Tactic_introMatch_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_decide___elambda__1___closed__1 = _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___elambda__1___closed__1);
l_Lean_Parser_Tactic_decide___elambda__1___closed__2 = _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___elambda__1___closed__2);
l_Lean_Parser_Tactic_decide___elambda__1___closed__3 = _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___elambda__1___closed__3);
l_Lean_Parser_Tactic_decide___elambda__1___closed__4 = _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___elambda__1___closed__4);
l_Lean_Parser_Tactic_decide___elambda__1___closed__5 = _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___elambda__1___closed__5);
l_Lean_Parser_Tactic_decide___elambda__1___closed__6 = _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___elambda__1___closed__6);
l_Lean_Parser_Tactic_decide___elambda__1___closed__7 = _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___elambda__1___closed__7);
l_Lean_Parser_Tactic_decide___elambda__1___closed__8 = _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___elambda__1___closed__8);
l_Lean_Parser_Tactic_decide___elambda__1___closed__9 = _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___elambda__1___closed__9);
l_Lean_Parser_Tactic_decide___elambda__1___closed__10 = _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___elambda__1___closed__10);
l_Lean_Parser_Tactic_decide___elambda__1___closed__11 = _init_l_Lean_Parser_Tactic_decide___elambda__1___closed__11();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___elambda__1___closed__11);
l_Lean_Parser_Tactic_decide___closed__1 = _init_l_Lean_Parser_Tactic_decide___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___closed__1);
l_Lean_Parser_Tactic_decide___closed__2 = _init_l_Lean_Parser_Tactic_decide___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___closed__2);
l_Lean_Parser_Tactic_decide___closed__3 = _init_l_Lean_Parser_Tactic_decide___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___closed__3);
l_Lean_Parser_Tactic_decide___closed__4 = _init_l_Lean_Parser_Tactic_decide___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___closed__4);
l_Lean_Parser_Tactic_decide___closed__5 = _init_l_Lean_Parser_Tactic_decide___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___closed__5);
l_Lean_Parser_Tactic_decide___closed__6 = _init_l_Lean_Parser_Tactic_decide___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___closed__6);
l_Lean_Parser_Tactic_decide___closed__7 = _init_l_Lean_Parser_Tactic_decide___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_decide___closed__7);
l_Lean_Parser_Tactic_decide = _init_l_Lean_Parser_Tactic_decide();
lean_mark_persistent(l_Lean_Parser_Tactic_decide);
res = l___regBuiltinParser_Lean_Parser_Tactic_decide(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_decide_formatter___closed__1 = _init_l_Lean_Parser_Tactic_decide_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_decide_formatter___closed__1);
l_Lean_Parser_Tactic_decide_formatter___closed__2 = _init_l_Lean_Parser_Tactic_decide_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_decide_formatter___closed__2);
l_Lean_Parser_Tactic_decide_formatter___closed__3 = _init_l_Lean_Parser_Tactic_decide_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_decide_formatter___closed__3);
l___regBuiltin_Lean_Parser_Tactic_decide_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_Tactic_decide_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_decide_formatter___closed__1);
l___regBuiltin_Lean_Parser_Tactic_decide_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_Tactic_decide_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_decide_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_Tactic_decide_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_decide_parenthesizer___closed__1 = _init_l_Lean_Parser_Tactic_decide_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_decide_parenthesizer___closed__1);
l_Lean_Parser_Tactic_decide_parenthesizer___closed__2 = _init_l_Lean_Parser_Tactic_decide_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_decide_parenthesizer___closed__2);
l_Lean_Parser_Tactic_decide_parenthesizer___closed__3 = _init_l_Lean_Parser_Tactic_decide_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_decide_parenthesizer___closed__3);
l___regBuiltin_Lean_Parser_Tactic_decide_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_Tactic_decide_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_decide_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_Tactic_decide_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_Parser_Tactic_decide_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_decide_parenthesizer___closed__2);
res = l___regBuiltin_Lean_Parser_Tactic_decide_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__1 = _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__1);
l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2 = _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__2);
l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__3 = _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__3);
l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__4 = _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__4);
l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__5 = _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__5);
l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__6 = _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__6);
l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__7 = _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__7);
l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__8 = _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__8);
l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__9 = _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__9();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__9);
l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__10 = _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__10();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__10);
l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__11 = _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__11();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__11);
l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__12 = _init_l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__12();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___elambda__1___closed__12);
l_Lean_Parser_Tactic_nativeDecide___closed__1 = _init_l_Lean_Parser_Tactic_nativeDecide___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___closed__1);
l_Lean_Parser_Tactic_nativeDecide___closed__2 = _init_l_Lean_Parser_Tactic_nativeDecide___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___closed__2);
l_Lean_Parser_Tactic_nativeDecide___closed__3 = _init_l_Lean_Parser_Tactic_nativeDecide___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___closed__3);
l_Lean_Parser_Tactic_nativeDecide___closed__4 = _init_l_Lean_Parser_Tactic_nativeDecide___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___closed__4);
l_Lean_Parser_Tactic_nativeDecide___closed__5 = _init_l_Lean_Parser_Tactic_nativeDecide___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___closed__5);
l_Lean_Parser_Tactic_nativeDecide___closed__6 = _init_l_Lean_Parser_Tactic_nativeDecide___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___closed__6);
l_Lean_Parser_Tactic_nativeDecide___closed__7 = _init_l_Lean_Parser_Tactic_nativeDecide___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide___closed__7);
l_Lean_Parser_Tactic_nativeDecide = _init_l_Lean_Parser_Tactic_nativeDecide();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide);
res = l___regBuiltinParser_Lean_Parser_Tactic_nativeDecide(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_nativeDecide_formatter___closed__1 = _init_l_Lean_Parser_Tactic_nativeDecide_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide_formatter___closed__1);
l_Lean_Parser_Tactic_nativeDecide_formatter___closed__2 = _init_l_Lean_Parser_Tactic_nativeDecide_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide_formatter___closed__2);
l_Lean_Parser_Tactic_nativeDecide_formatter___closed__3 = _init_l_Lean_Parser_Tactic_nativeDecide_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide_formatter___closed__3);
l___regBuiltin_Lean_Parser_Tactic_nativeDecide_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_Tactic_nativeDecide_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_nativeDecide_formatter___closed__1);
l___regBuiltin_Lean_Parser_Tactic_nativeDecide_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_Tactic_nativeDecide_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_nativeDecide_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_Tactic_nativeDecide_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__1 = _init_l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__1);
l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__2 = _init_l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__2);
l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__3 = _init_l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__3);
l___regBuiltin_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Tactic_nativeDecide_parenthesizer___closed__2);
res = l___regBuiltin_Lean_Parser_Tactic_nativeDecide_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
