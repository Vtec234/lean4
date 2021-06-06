// Lean compiler output
// Module: Lean.Parser.Extra
// Imports: Init Lean.Parser.Extension Lean.PrettyPrinter.Parenthesizer Lean.PrettyPrinter.Formatter
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
lean_object* l_Lean_PrettyPrinter_Formatter_rawIdentNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__2;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withoutInfo_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_indent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1Indent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_visitArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__14;
lean_object* l_Lean_Parser_andthenInfo(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_numLitNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___rarg(lean_object*);
lean_object* l_Lean_Parser_commandParser_formatter___rarg___closed__2;
lean_object* l_Lean_Parser_commandParser_formatter___rarg___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__5;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Parser_ppSpace_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_identNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__10;
lean_object* l_Lean_ppHardSpace_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_rawIdentNoAntiquot_parenthesizer___boxed(lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__6;
lean_object* l_Lean_Parser_notFollowedByFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_sepByNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__10;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotExpr_formatter___closed__2;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppSpace_parenthesizer___rarg(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_identNoAntiquot_parenthesizer___boxed(lean_object*);
lean_object* l_Lean_Parser_many1Indent_parenthesizer___closed__1;
lean_object* l_Lean_Parser_sepBy1_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__3;
lean_object* l_Lean_Parser_sepBy_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppGroup___boxed(lean_object*);
lean_object* l_Lean_Parser_symbol_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLit;
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__15;
lean_object* l_Lean_PrettyPrinter_Formatter_indent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_formatter___closed__1;
lean_object* l_Lean_Parser_sepBy_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_atomic_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__2;
lean_object* l_Lean_Parser_group_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_manyNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit_formatter___closed__3;
lean_object* l_Lean_Parser_ident_formatter___closed__2;
lean_object* l_Lean_Parser_scientificLit;
lean_object* l_Lean_ppSpace_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_tokenWithAntiquotFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many_parenthesizer___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_group(lean_object*);
lean_object* l_Lean_Parser_ident;
lean_object* l_id___rarg___boxed(lean_object*);
lean_object* l_Lean_Parser_ParserState_mkNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepByElemParser_formatter___closed__3;
lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_pushLine(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*);
lean_object* l_Lean_Parser_scientificLit___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_formatter___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__8;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_nameLitNoAntiquot_parenthesizer___boxed(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Parser_ppIndent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_formatter___closed__4;
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__9;
lean_object* l_Lean_Parser_strLit_formatter___closed__2;
lean_object* l_Lean_Parser_mkAtomicInfo(lean_object*);
lean_object* l_Lean_Parser_unicodeSymbol_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_formatter___closed__2;
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_nonReservedSymbolNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1_formatter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_numLitNoAntiquot_parenthesizer___boxed(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__5;
lean_object* l_Lean_PrettyPrinter_Formatter_unicodeSymbolNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5;
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_group_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_scientificLitNoAntiquot_parenthesizer___boxed(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3;
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkColGeFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__4;
lean_object* l_Lean_Parser_many_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLitFn(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppLine;
extern lean_object* l_Lean_nameLitKind;
lean_object* l_Lean_Parser_rawIdent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_formatter___closed__3;
lean_object* l_Lean_Parser_leadingNode_formatter___closed__1;
lean_object* l_Lean_Parser_optional_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_instInhabitedParser___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__3;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_sepByNoAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_atomic_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_unicodeSymbolNoAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional(lean_object*);
lean_object* l_Lean_Parser_rawIdentFn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerAliasCore___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkColGe_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppIndent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_setExpected_parenthesizer___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_termParser_formatter___boxed(lean_object*);
lean_object* l_Lean_Parser_ident_formatter___closed__3;
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2;
lean_object* l_Lean_PrettyPrinter_Formatter_tokenWithAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppSpace_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__1;
lean_object* l_Lean_Parser_sepByElemParser_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__7;
lean_object* l_Lean_Parser_charLit_formatter___closed__2;
lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_setExpected_formatter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_strLitNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_parenthesizer___closed__2;
lean_object* l_Lean_Parser_termRegister__parser__alias______;
lean_object* l_Lean_Parser_nodeInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolFn___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind;
lean_object* l_Lean_Parser_strLit_parenthesizer___closed__1;
lean_object* l_Lean_Parser_charLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLit_formatter___closed__4;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_nonReservedSymbolNoAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_scientificLit_formatter___closed__3;
lean_object* l_Lean_Parser_noFirstTokenInfo(lean_object*);
lean_object* l_Lean_Parser_scientificLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_strLitKind;
lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__2;
lean_object* l_Lean_Parser_strLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_decQuotDepth_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_visitArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeWithAntiquot_formatter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_manyIndent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit_formatter___closed__1;
lean_object* l_Lean_Parser_sepByElemParser_formatter___closed__1;
lean_object* l_Lean_Parser_notSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLitFn(lean_object*, lean_object*);
uint8_t l_Lean_Parser_tryAnti(lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optionaInfo(lean_object*);
lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__5;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_manyNoAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit;
lean_object* l_Lean_PrettyPrinter_Formatter_node_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1Indent_formatter___closed__1;
lean_object* l_Lean_Parser_charLitFn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_formatter___closed__4;
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__6;
lean_object* l_Lean_Parser_strLitFn(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_charLitNoAntiquot_parenthesizer___boxed(lean_object*);
lean_object* l_Lean_Parser_many1___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_manyIndent(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit_formatter___closed__4;
lean_object* l_Lean_Parser_ppSpace;
lean_object* l_Lean_Parser_ppHardSpace;
extern lean_object* l_Lean_Parser_parserAliasesRef;
lean_object* l_Lean_Parser_orelseInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_termParser_formatter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepByElemParser_formatter___closed__2;
lean_object* l_Lean_Parser_ppIndent(lean_object*);
lean_object* l_Lean_Parser_scientificLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_commandParser_formatter___boxed(lean_object*);
lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__3;
lean_object* l_Lean_Syntax_getId(lean_object*);
extern lean_object* l_Lean_charLitKind;
extern lean_object* l_Lean_Parser_maxPrec;
lean_object* l_Lean_Parser_strLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_rawIdent;
lean_object* l_Lean_Parser_antiquotExpr_parenthesizer___closed__2;
lean_object* l_Lean_Parser_ppDedent(lean_object*);
lean_object* l_Lean_Parser_many1Indent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_scientificLitFn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeWithAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_scientificLitNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppLine_parenthesizer___rarg(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__10;
lean_object* l_Lean_Parser_antiquotExpr_parenthesizer___closed__1;
lean_object* l_Lean_Parser_optional_formatter___closed__3;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_pushNone_parenthesizer___boxed(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__8;
lean_object* l_Lean_Parser_numLit_formatter___closed__3;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__9;
lean_object* l_Lean_Parser_numLit_parenthesizer___closed__2;
lean_object* l_Lean_Parser_ppIndent___boxed(lean_object*);
lean_object* l_Lean_Parser_optional_parenthesizer___closed__1;
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__11;
lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__4;
lean_object* l_Lean_Parser_sepBy1_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_commandParser_formatter(lean_object*);
lean_object* l_Lean_Parser_rawIdent_parenthesizer___closed__1;
lean_object* l_Lean_Parser_manyAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__6;
lean_object* l_Lean_Parser_numLit_parenthesizer___closed__1;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__2;
lean_object* l_Lean_PrettyPrinter_Formatter_nameLitNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__6;
lean_object* l_Lean_Parser_mkAntiquot_formatter(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppHardSpace_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_notSymbol(lean_object*);
lean_object* l_Lean_Parser_sepByElemParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__2;
lean_object* l_Lean_Parser_termParser_formatter(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppLine_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_groupKind;
lean_object* l_Lean_ppGroup_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__1;
extern lean_object* l_Lean_identKind;
lean_object* l_Lean_Parser_commandParser_formatter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many_formatter___closed__3;
lean_object* l_Lean_Parser_ident___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLit___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit_parenthesizer___closed__1;
lean_object* l_Lean_Parser_myMacro____x40_Lean_Parser_Extra___hyg_258_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit;
lean_object* l_Lean_Parser_charLit_formatter___closed__1;
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_decQuotDepth_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppDedent___boxed(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_push(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extra___hyg_488_(lean_object*);
extern lean_object* l_Lean_PrettyPrinter_Formatter_formatterAliasesRef;
extern lean_object* l_Lean_scientificLitKind;
lean_object* l_Lean_PrettyPrinter_Formatter_checkNoWsBefore_formatter___boxed(lean_object*);
lean_object* l_Lean_Parser_withPosition___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppGroup_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_commandParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_scientificLit_parenthesizer___closed__2;
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__16;
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__7;
lean_object* l_Lean_Parser_nameLit_parenthesizer___closed__2;
lean_object* l_Lean_Parser_many___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLit_parenthesizer___closed__1;
lean_object* l_Lean_Parser_symbolInfo(lean_object*);
lean_object* l_Lean_Parser_charLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__6;
lean_object* l_Lean_Parser_charLit_parenthesizer___closed__2;
lean_object* l_Lean_Parser_charLit_formatter___closed__3;
lean_object* l_Lean_Parser_orelseFnCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_epsilonInfo;
lean_object* l_Lean_Parser_notSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppLine_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1Indent(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkNoImmediateColon_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_pushNone_formatter___boxed(lean_object*);
lean_object* l_Std_Format_getIndent(lean_object*);
lean_object* l_Lean_Parser_notSymbol_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy_formatter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__9;
lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingNode_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__2;
lean_object* l_Lean_Parser_sepByElemParser_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit_formatter___closed__1;
lean_object* l_Lean_Parser_antiquotExpr_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_formatter___closed__1;
lean_object* l_Lean_PrettyPrinter_Formatter_checkNoImmediateColon_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__1;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit_formatter___closed__2;
lean_object* l_Lean_Parser_sepBy1_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppSpace_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_scientificLit_formatter___closed__4;
lean_object* l_Lean_Parser_rawIdentFn___boxed(lean_object*, lean_object*);
lean_object* l_String_trim(lean_object*);
lean_object* l_Lean_Parser_nodeFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optionalFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_withoutInfo_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many_formatter___closed__2;
lean_object* l_Lean_Parser_nameLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_unicodeSymbol_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Parser_rawIdent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_scientificLit_formatter___closed__1;
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_parenthesizerAliasesRef;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withAntiquotSuffixSplice_parenthesizer___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppLine_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_many_formatter___closed__1;
lean_object* l_Lean_Parser_scientificLit_formatter___closed__2;
lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___closed__4;
lean_object* l_Lean_PrettyPrinter_Formatter_charLitNoAntiquot_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__13;
lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit_formatter___closed__2;
lean_object* l_Lean_Parser_ppGroup(lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_many_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__4;
lean_object* l_Lean_Parser_ident_parenthesizer___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__3;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_strLitNoAntiquot_parenthesizer___boxed(lean_object*);
lean_object* l_Lean_Parser_rawIdent_formatter___closed__1;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkColGe_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___closed__12;
lean_object* l_Lean_Parser_mkAntiquotSplice_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_notSymbol_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol_formatter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotExpr_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter___closed__8;
lean_object* l_Lean_Parser_numLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__5;
lean_object* l_Lean_Parser_nameLit_formatter___closed__4;
lean_object* l_Lean_PrettyPrinter_Formatter_withAntiquotSuffixSplice_formatter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_setLhsPrec_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_tokenWithAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_group(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_identFn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_nameLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Parser_scientificLit_parenthesizer___closed__1;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___closed__7;
lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_notSymbol_parenthesizer___rarg(lean_object*);
lean_object* l_Lean_Parser_rawIdent___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit;
lean_object* l_Lean_Parser_many1(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepByElemParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppDedent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_notSymbol_formatter___rarg(lean_object*);
lean_object* l_Lean_Parser_antiquotExpr_formatter___closed__1;
lean_object* l_Lean_Parser_leadingNode_formatter___closed__2;
lean_object* l_Lean_Parser_termParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ppDedent_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_manyIndent_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Parser_Extra___hyg_929_(lean_object*);
lean_object* l_Lean_initFn____x40_Lean_Parser_Extra___hyg_792_(lean_object*);
lean_object* l_Lean_Parser_ppLine_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthenFn(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Parser_leadingNode_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_setLhsPrec_formatter___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_leadingNode_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed), 4, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_leadingNode_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter), 7, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_3);
x_10 = l_Lean_Parser_leadingNode_formatter___closed__1;
x_11 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
x_12 = l_Lean_Parser_leadingNode_formatter___closed__2;
x_13 = l_Lean_PrettyPrinter_Formatter_andthen_formatter(x_12, x_11, x_4, x_5, x_6, x_7, x_8);
return x_13;
}
}
lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Parser_leadingNode_formatter(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Parser_termParser_formatter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__2;
x_7 = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(x_6, x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_Parser_termParser_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_termParser_formatter___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_termParser_formatter___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_termParser_formatter(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_termParser_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__2;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_commandParser_formatter___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("command");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_commandParser_formatter___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_commandParser_formatter___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_commandParser_formatter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Parser_commandParser_formatter___rarg___closed__2;
x_7 = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(x_6, x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_Parser_commandParser_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_commandParser_formatter___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_commandParser_formatter___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_commandParser_formatter(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_commandParser_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_Parser_commandParser_formatter___rarg___closed__2;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Parser_symbol_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter), 6, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_Lean_PrettyPrinter_Formatter_tokenWithAntiquot_formatter(x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("antiquotNestedExpr");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("(");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_termParser_formatter___rarg), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__5;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_decQuotDepth_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(")");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__7;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_symbolNoAntiquot_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__6;
x_2 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__8;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__4;
x_2 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__9;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_antiquotNestedExpr_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__2;
x_7 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__10;
x_8 = l_Lean_PrettyPrinter_Formatter_node_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_identNoAntiquot_formatter), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_antiquotNestedExpr_formatter), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_antiquotExpr_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_antiquotExpr_formatter___closed__1;
x_7 = l_Lean_Parser_antiquotExpr_formatter___closed__2;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_Parser_nonReservedSymbol_formatter(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_nonReservedSymbolNoAntiquot_formatter), 6, 1);
lean_closure_set(x_8, 0, x_1);
x_9 = l_Lean_PrettyPrinter_Formatter_tokenWithAntiquot_formatter(x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_Parser_nonReservedSymbol_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_Lean_Parser_nonReservedSymbol_formatter(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("antiquot");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_mkAntiquot_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("$");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__4;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_setExpected_formatter___rarg), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkNoWsBefore_formatter___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__6;
x_2 = l_Lean_Parser_mkAntiquot_formatter___closed__4;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__7;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_manyNoAntiquot_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("antiquotName");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_mkAntiquot_formatter___closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(":");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__11;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_antiquotExpr_formatter), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkNoImmediateColon_formatter___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_pushNone_formatter___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_formatter___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__14;
x_2 = l_Lean_Parser_mkAntiquot_formatter___closed__15;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_mkAntiquot_formatter(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_53; 
x_53 = lean_box(0);
x_9 = x_53;
goto block_52;
}
else
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_2, 0);
lean_inc(x_54);
lean_dec(x_2);
x_9 = x_54;
goto block_52;
}
block_52:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Parser_mkAntiquot_formatter___closed__2;
x_11 = l_Lean_Name_append(x_9, x_10);
lean_dec(x_9);
if (x_3 == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_12 = 0;
x_13 = lean_box(x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_formatter___boxed), 7, 2);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_13);
x_15 = l_Lean_Parser_mkAntiquot_formatter___closed__12;
x_16 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_16, 0, x_15);
lean_closure_set(x_16, 1, x_14);
x_17 = l_Lean_Parser_mkAntiquot_formatter___closed__6;
x_18 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_18, 0, x_17);
lean_closure_set(x_18, 1, x_16);
x_19 = l_Lean_Parser_mkAntiquot_formatter___closed__10;
x_20 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter), 7, 2);
lean_closure_set(x_20, 0, x_19);
lean_closure_set(x_20, 1, x_18);
x_21 = l_Lean_Parser_mkAntiquot_formatter___closed__13;
x_22 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_22, 0, x_21);
lean_closure_set(x_22, 1, x_20);
x_23 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_23, 0, x_17);
lean_closure_set(x_23, 1, x_22);
x_24 = l_Lean_Parser_mkAntiquot_formatter___closed__8;
x_25 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_25, 0, x_24);
lean_closure_set(x_25, 1, x_23);
x_26 = l_Lean_Parser_mkAntiquot_formatter___closed__5;
x_27 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_27, 0, x_26);
lean_closure_set(x_27, 1, x_25);
x_28 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_atomic_formatter), 6, 1);
lean_closure_set(x_28, 0, x_27);
x_29 = l_Lean_Parser_maxPrec;
x_30 = l_Lean_Parser_leadingNode_formatter(x_11, x_29, x_28, x_4, x_5, x_6, x_7, x_8);
return x_30;
}
else
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_31 = 0;
x_32 = lean_box(x_31);
x_33 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_formatter___boxed), 7, 2);
lean_closure_set(x_33, 0, x_1);
lean_closure_set(x_33, 1, x_32);
x_34 = l_Lean_Parser_mkAntiquot_formatter___closed__12;
x_35 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_35, 0, x_34);
lean_closure_set(x_35, 1, x_33);
x_36 = l_Lean_Parser_mkAntiquot_formatter___closed__6;
x_37 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_37, 0, x_36);
lean_closure_set(x_37, 1, x_35);
x_38 = l_Lean_Parser_mkAntiquot_formatter___closed__10;
x_39 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter), 7, 2);
lean_closure_set(x_39, 0, x_38);
lean_closure_set(x_39, 1, x_37);
x_40 = l_Lean_Parser_mkAntiquot_formatter___closed__16;
x_41 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter), 7, 2);
lean_closure_set(x_41, 0, x_39);
lean_closure_set(x_41, 1, x_40);
x_42 = l_Lean_Parser_mkAntiquot_formatter___closed__13;
x_43 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_43, 0, x_42);
lean_closure_set(x_43, 1, x_41);
x_44 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_44, 0, x_36);
lean_closure_set(x_44, 1, x_43);
x_45 = l_Lean_Parser_mkAntiquot_formatter___closed__8;
x_46 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_46, 0, x_45);
lean_closure_set(x_46, 1, x_44);
x_47 = l_Lean_Parser_mkAntiquot_formatter___closed__5;
x_48 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_48, 0, x_47);
lean_closure_set(x_48, 1, x_46);
x_49 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_atomic_formatter), 6, 1);
lean_closure_set(x_49, 0, x_48);
x_50 = l_Lean_Parser_maxPrec;
x_51 = l_Lean_Parser_leadingNode_formatter(x_11, x_50, x_49, x_4, x_5, x_6, x_7, x_8);
return x_51;
}
}
}
}
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lean_Parser_mkAntiquot_formatter(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Parser_symbol_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___boxed), 2, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_Lean_PrettyPrinter_Parenthesizer_tokenWithAntiquot_parenthesizer(x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_termParser_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_decQuotDepth_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__7;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_symbolNoAntiquot_parenthesizer___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3;
x_2 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1;
x_2 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_antiquotNestedExpr_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_antiquotNestedExpr_formatter___closed__2;
x_7 = l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__6;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_identNoAntiquot_parenthesizer___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_antiquotNestedExpr_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_antiquotExpr_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_antiquotExpr_parenthesizer___closed__1;
x_7 = l_Lean_Parser_antiquotExpr_parenthesizer___closed__2;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_box(x_2);
x_9 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_nonReservedSymbolNoAntiquot_parenthesizer___boxed), 3, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_8);
x_10 = l_Lean_PrettyPrinter_Parenthesizer_tokenWithAntiquot_parenthesizer(x_9, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_Lean_Parser_nonReservedSymbol_parenthesizer(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_setExpected_parenthesizer___rarg), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoWsBefore_parenthesizer___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__3;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__1;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__4;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_manyNoAntiquot_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquot_formatter___closed__11;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_antiquotExpr_parenthesizer), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkNoImmediateColon_parenthesizer___boxed), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_pushNone_parenthesizer___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__8;
x_2 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__9;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_53; 
x_53 = lean_box(0);
x_9 = x_53;
goto block_52;
}
else
{
lean_object* x_54; 
x_54 = lean_ctor_get(x_2, 0);
lean_inc(x_54);
lean_dec(x_2);
x_9 = x_54;
goto block_52;
}
block_52:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Parser_mkAntiquot_formatter___closed__2;
x_11 = l_Lean_Name_append(x_9, x_10);
lean_dec(x_9);
if (x_3 == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_12 = 0;
x_13 = lean_box(x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed), 7, 2);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_13);
x_15 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__6;
x_16 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_16, 0, x_15);
lean_closure_set(x_16, 1, x_14);
x_17 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__3;
x_18 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_18, 0, x_17);
lean_closure_set(x_18, 1, x_16);
x_19 = l_Lean_Parser_mkAntiquot_formatter___closed__10;
x_20 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer), 7, 2);
lean_closure_set(x_20, 0, x_19);
lean_closure_set(x_20, 1, x_18);
x_21 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__7;
x_22 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_22, 0, x_21);
lean_closure_set(x_22, 1, x_20);
x_23 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_23, 0, x_17);
lean_closure_set(x_23, 1, x_22);
x_24 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__5;
x_25 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_25, 0, x_24);
lean_closure_set(x_25, 1, x_23);
x_26 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__2;
x_27 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_27, 0, x_26);
lean_closure_set(x_27, 1, x_25);
x_28 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_atomic_parenthesizer), 6, 1);
lean_closure_set(x_28, 0, x_27);
x_29 = l_Lean_Parser_maxPrec;
x_30 = l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer(x_11, x_29, x_28, x_4, x_5, x_6, x_7, x_8);
return x_30;
}
else
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_31 = 0;
x_32 = lean_box(x_31);
x_33 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed), 7, 2);
lean_closure_set(x_33, 0, x_1);
lean_closure_set(x_33, 1, x_32);
x_34 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__6;
x_35 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_35, 0, x_34);
lean_closure_set(x_35, 1, x_33);
x_36 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__3;
x_37 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_37, 0, x_36);
lean_closure_set(x_37, 1, x_35);
x_38 = l_Lean_Parser_mkAntiquot_formatter___closed__10;
x_39 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer), 7, 2);
lean_closure_set(x_39, 0, x_38);
lean_closure_set(x_39, 1, x_37);
x_40 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__10;
x_41 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer), 7, 2);
lean_closure_set(x_41, 0, x_39);
lean_closure_set(x_41, 1, x_40);
x_42 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__7;
x_43 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_43, 0, x_42);
lean_closure_set(x_43, 1, x_41);
x_44 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_44, 0, x_36);
lean_closure_set(x_44, 1, x_43);
x_45 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__5;
x_46 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_46, 0, x_45);
lean_closure_set(x_46, 1, x_44);
x_47 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__2;
x_48 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_48, 0, x_47);
lean_closure_set(x_48, 1, x_46);
x_49 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_atomic_parenthesizer), 6, 1);
lean_closure_set(x_49, 0, x_48);
x_50 = l_Lean_Parser_maxPrec;
x_51 = l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer(x_11, x_50, x_49, x_4, x_5, x_6, x_7, x_8);
return x_51;
}
}
}
}
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = l_Lean_Parser_mkAntiquot_parenthesizer(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_Parser_nodeWithAntiquot_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_2);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_2);
x_11 = lean_box(x_4);
x_12 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_10);
lean_closure_set(x_12, 2, x_11);
x_13 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter), 7, 2);
lean_closure_set(x_13, 0, x_2);
lean_closure_set(x_13, 1, x_3);
x_14 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_12, x_13, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l_Lean_Parser_nodeWithAntiquot_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_4);
lean_dec(x_4);
x_11 = l_Lean_Parser_nodeWithAntiquot_formatter(x_1, x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_inc(x_2);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_2);
x_11 = lean_box(x_4);
x_12 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_10);
lean_closure_set(x_12, 2, x_11);
x_13 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer), 7, 2);
lean_closure_set(x_13, 0, x_2);
lean_closure_set(x_13, 1, x_3);
x_14 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_12, x_13, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_4);
lean_dec(x_4);
x_11 = l_Lean_Parser_nodeWithAntiquot_parenthesizer(x_1, x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("antiquot_scope");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_mkAntiquotSplice_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("[");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquotSplice_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("]");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquotSplice_formatter___closed__5;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_mkAntiquotSplice_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_9 = l_Lean_Parser_mkAntiquotSplice_formatter___closed__2;
x_10 = l_Lean_Name_append(x_1, x_9);
x_11 = l_Lean_nullKind;
x_12 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_node_formatter), 7, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_2);
x_13 = l_Lean_Parser_mkAntiquotSplice_formatter___closed__6;
x_14 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_14, 0, x_13);
lean_closure_set(x_14, 1, x_3);
x_15 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_15, 0, x_12);
lean_closure_set(x_15, 1, x_14);
x_16 = l_Lean_Parser_mkAntiquotSplice_formatter___closed__4;
x_17 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_17, 0, x_16);
lean_closure_set(x_17, 1, x_15);
x_18 = l_Lean_Parser_mkAntiquot_formatter___closed__6;
x_19 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_19, 0, x_18);
lean_closure_set(x_19, 1, x_17);
x_20 = l_Lean_Parser_mkAntiquot_formatter___closed__8;
x_21 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_21, 0, x_20);
lean_closure_set(x_21, 1, x_19);
x_22 = l_Lean_Parser_mkAntiquot_formatter___closed__5;
x_23 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_23, 0, x_22);
lean_closure_set(x_23, 1, x_21);
x_24 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_atomic_formatter), 6, 1);
lean_closure_set(x_24, 0, x_23);
x_25 = l_Lean_Parser_maxPrec;
x_26 = l_Lean_Parser_leadingNode_formatter(x_10, x_25, x_24, x_4, x_5, x_6, x_7, x_8);
return x_26;
}
}
lean_object* l_Lean_Parser_mkAntiquotSplice_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Parser_mkAntiquotSplice_formatter(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_2);
x_9 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_withoutInfo_formatter), 6, 1);
lean_closure_set(x_9, 0, x_2);
lean_inc(x_3);
x_10 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquotSplice_formatter___boxed), 8, 3);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_9);
lean_closure_set(x_10, 2, x_3);
x_11 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_withAntiquotSuffixSplice_formatter___rarg), 7, 2);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_3);
x_12 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_10, x_11, x_4, x_5, x_6, x_7, x_8);
return x_12;
}
}
static lean_object* _init_l_Lean_Parser_sepByElemParser_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("sepBy");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_sepByElemParser_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_sepByElemParser_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_sepByElemParser_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("*");
return x_1;
}
}
lean_object* l_Lean_Parser_sepByElemParser_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = l_String_trim(x_2);
x_9 = l_Lean_Parser_sepByElemParser_formatter___closed__3;
x_10 = lean_string_append(x_8, x_9);
x_11 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter), 6, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = l_Lean_Parser_sepByElemParser_formatter___closed__2;
x_13 = l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter(x_12, x_1, x_11, x_3, x_4, x_5, x_6, x_7);
return x_13;
}
}
lean_object* l_Lean_Parser_sepByElemParser_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Parser_sepByElemParser_formatter(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Parser_sepBy_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Lean_Parser_sepByElemParser_formatter___boxed), 7, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
x_11 = l_Lean_PrettyPrinter_Formatter_sepByNoAntiquot_formatter(x_10, x_3, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Parser_sepBy_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_4);
lean_dec(x_4);
x_11 = l_Lean_Parser_sepBy_formatter(x_1, x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquotSplice_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_mkAntiquotSplice_formatter___closed__5;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_9 = l_Lean_Parser_mkAntiquotSplice_formatter___closed__2;
x_10 = l_Lean_Name_append(x_1, x_9);
x_11 = l_Lean_nullKind;
x_12 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer), 7, 2);
lean_closure_set(x_12, 0, x_11);
lean_closure_set(x_12, 1, x_2);
x_13 = l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__2;
x_14 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_14, 0, x_13);
lean_closure_set(x_14, 1, x_3);
x_15 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_15, 0, x_12);
lean_closure_set(x_15, 1, x_14);
x_16 = l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__1;
x_17 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_17, 0, x_16);
lean_closure_set(x_17, 1, x_15);
x_18 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__3;
x_19 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_19, 0, x_18);
lean_closure_set(x_19, 1, x_17);
x_20 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__5;
x_21 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_21, 0, x_20);
lean_closure_set(x_21, 1, x_19);
x_22 = l_Lean_Parser_mkAntiquot_parenthesizer___closed__2;
x_23 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_23, 0, x_22);
lean_closure_set(x_23, 1, x_21);
x_24 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_atomic_parenthesizer), 6, 1);
lean_closure_set(x_24, 0, x_23);
x_25 = l_Lean_Parser_maxPrec;
x_26 = l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer(x_10, x_25, x_24, x_4, x_5, x_6, x_7, x_8);
return x_26;
}
}
lean_object* l_Lean_Parser_mkAntiquotSplice_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Parser_mkAntiquotSplice_parenthesizer(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_2);
x_9 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_withoutInfo_parenthesizer), 6, 1);
lean_closure_set(x_9, 0, x_2);
lean_inc(x_3);
x_10 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquotSplice_parenthesizer___boxed), 8, 3);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_9);
lean_closure_set(x_10, 2, x_3);
x_11 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_withAntiquotSuffixSplice_parenthesizer___rarg), 7, 2);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_3);
x_12 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_10, x_11, x_4, x_5, x_6, x_7, x_8);
return x_12;
}
}
lean_object* l_Lean_Parser_sepByElemParser_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = l_String_trim(x_2);
x_9 = l_Lean_Parser_sepByElemParser_formatter___closed__3;
x_10 = lean_string_append(x_8, x_9);
x_11 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer), 6, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = l_Lean_Parser_sepByElemParser_formatter___closed__2;
x_13 = l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer(x_12, x_1, x_11, x_3, x_4, x_5, x_6, x_7);
return x_13;
}
}
lean_object* l_Lean_Parser_sepByElemParser_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Parser_sepByElemParser_parenthesizer(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Lean_Parser_sepBy_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Lean_Parser_sepByElemParser_parenthesizer___boxed), 7, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
x_11 = l_Lean_PrettyPrinter_Parenthesizer_sepByNoAntiquot_parenthesizer(x_10, x_3, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Parser_sepBy_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_4);
lean_dec(x_4);
x_11 = l_Lean_Parser_sepBy_parenthesizer(x_1, x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Parser_sepBy1_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Lean_Parser_sepByElemParser_formatter___boxed), 7, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
x_11 = l_Lean_PrettyPrinter_Formatter_sepByNoAntiquot_formatter(x_10, x_3, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Parser_sepBy1_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_4);
lean_dec(x_4);
x_11 = l_Lean_Parser_sepBy1_formatter(x_1, x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Parser_sepBy1_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_closure((void*)(l_Lean_Parser_sepByElemParser_parenthesizer___boxed), 7, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
x_11 = l_Lean_PrettyPrinter_Parenthesizer_sepByNoAntiquot_parenthesizer(x_10, x_3, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Parser_sepBy1_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_4);
lean_dec(x_4);
x_11 = l_Lean_Parser_sepBy1_parenthesizer(x_1, x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Parser_unicodeSymbol_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_unicodeSymbolNoAntiquot_formatter), 7, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
x_9 = l_Lean_PrettyPrinter_Formatter_tokenWithAntiquot_formatter(x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_Parser_unicodeSymbol_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_unicodeSymbolNoAntiquot_parenthesizer___boxed), 3, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
x_9 = l_Lean_PrettyPrinter_Parenthesizer_tokenWithAntiquot_parenthesizer(x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
static lean_object* _init_l_Lean_Parser_optional_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("optional");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_optional_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_optional_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_optional_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("?");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_optional_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_optional_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_optional_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Parser_optional_formatter___closed__2;
x_8 = l_Lean_Parser_optional_formatter___closed__4;
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter), 8, 3);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_1);
lean_closure_set(x_9, 2, x_8);
x_10 = l_Lean_PrettyPrinter_Formatter_visitArgs(x_9, x_2, x_3, x_4, x_5, x_6);
return x_10;
}
}
static lean_object* _init_l_Lean_Parser_optional_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_optional_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_optional_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Parser_optional_formatter___closed__2;
x_8 = l_Lean_Parser_optional_parenthesizer___closed__1;
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer), 8, 3);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_1);
lean_closure_set(x_9, 2, x_8);
x_10 = l_Lean_PrettyPrinter_Parenthesizer_visitArgs(x_9, x_2, x_3, x_4, x_5, x_6);
return x_10;
}
}
lean_object* l_Lean_Parser_optional___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Parser_optionalFn(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_optional(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_2 = lean_box(0);
x_3 = lean_mk_string("optional");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("?");
x_6 = l_String_trim(x_5);
lean_dec(x_5);
lean_inc(x_6);
x_7 = l_Lean_Parser_symbolInfo(x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_8, 0, x_6);
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_Lean_Parser_withAntiquotSpliceAndSuffix(x_4, x_1, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = l_Lean_Parser_optionaInfo(x_12);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_alloc_closure((void*)(l_Lean_Parser_optional___elambda__1), 3, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
static lean_object* _init_l_Lean_Parser_many_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("many");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_many_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_many_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_many_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_sepByElemParser_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_many_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Parser_many_formatter___closed__2;
x_8 = l_Lean_Parser_many_formatter___closed__3;
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter), 8, 3);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_1);
lean_closure_set(x_9, 2, x_8);
x_10 = l_Lean_PrettyPrinter_Formatter_manyNoAntiquot_formatter(x_9, x_2, x_3, x_4, x_5, x_6);
return x_10;
}
}
static lean_object* _init_l_Lean_Parser_many_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_sepByElemParser_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_many_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Parser_many_formatter___closed__2;
x_8 = l_Lean_Parser_many_parenthesizer___closed__1;
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer), 8, 3);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_1);
lean_closure_set(x_9, 2, x_8);
x_10 = l_Lean_PrettyPrinter_Parenthesizer_manyNoAntiquot_parenthesizer(x_9, x_2, x_3, x_4, x_5, x_6);
return x_10;
}
}
lean_object* l_Lean_Parser_many___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_array_get_size(x_4);
lean_dec(x_4);
x_6 = l_Lean_Parser_manyAux(x_1, x_2, x_3);
x_7 = l_Lean_nullKind;
x_8 = l_Lean_Parser_ParserState_mkNode(x_6, x_7, x_5);
return x_8;
}
}
lean_object* l_Lean_Parser_many(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_2 = lean_box(0);
x_3 = lean_mk_string("many");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("*");
x_6 = l_String_trim(x_5);
lean_dec(x_5);
lean_inc(x_6);
x_7 = l_Lean_Parser_symbolInfo(x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_8, 0, x_6);
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_Lean_Parser_withAntiquotSpliceAndSuffix(x_4, x_1, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = l_Lean_Parser_noFirstTokenInfo(x_12);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
x_15 = lean_alloc_closure((void*)(l_Lean_Parser_many___elambda__1), 3, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
lean_object* l_Lean_Parser_many1_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Parser_many_formatter___closed__2;
x_8 = l_Lean_Parser_many_formatter___closed__3;
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_formatter), 8, 3);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_1);
lean_closure_set(x_9, 2, x_8);
x_10 = l_Lean_PrettyPrinter_Formatter_manyNoAntiquot_formatter(x_9, x_2, x_3, x_4, x_5, x_6);
return x_10;
}
}
lean_object* l_Lean_Parser_many1_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Parser_many_formatter___closed__2;
x_8 = l_Lean_Parser_many_parenthesizer___closed__1;
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSpliceAndSuffix_parenthesizer), 8, 3);
lean_closure_set(x_9, 0, x_7);
lean_closure_set(x_9, 1, x_1);
lean_closure_set(x_9, 2, x_8);
x_10 = l_Lean_PrettyPrinter_Parenthesizer_manyNoAntiquot_parenthesizer(x_9, x_2, x_3, x_4, x_5, x_6);
return x_10;
}
}
lean_object* l_Lean_Parser_many1___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_array_get_size(x_4);
lean_dec(x_4);
lean_inc(x_1);
lean_inc(x_2);
x_6 = lean_apply_2(x_1, x_2, x_3);
x_7 = lean_ctor_get(x_6, 4);
lean_inc(x_7);
x_8 = lean_box(0);
x_9 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = l_Lean_nullKind;
x_11 = l_Lean_Parser_ParserState_mkNode(x_6, x_10, x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = l_Lean_Parser_manyAux(x_1, x_2, x_6);
x_13 = l_Lean_nullKind;
x_14 = l_Lean_Parser_ParserState_mkNode(x_12, x_13, x_5);
return x_14;
}
}
}
lean_object* l_Lean_Parser_many1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_2 = lean_box(0);
x_3 = lean_mk_string("many");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("*");
x_6 = l_String_trim(x_5);
lean_dec(x_5);
lean_inc(x_6);
x_7 = l_Lean_Parser_symbolInfo(x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_8, 0, x_6);
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
x_11 = l_Lean_Parser_withAntiquotSpliceAndSuffix(x_4, x_1, x_10);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 1);
x_14 = lean_alloc_closure((void*)(l_Lean_Parser_many1___elambda__1), 3, 1);
lean_closure_set(x_14, 0, x_13);
lean_ctor_set(x_11, 1, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
x_17 = lean_alloc_closure((void*)(l_Lean_Parser_many1___elambda__1), 3, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
static lean_object* _init_l_Lean_Parser_ident_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_identKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_ident_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ident");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_ident_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_ident_formatter___closed__2;
x_2 = l_Lean_Parser_ident_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_ident_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_ident_formatter___closed__3;
x_7 = l_Lean_Parser_antiquotExpr_formatter___closed__1;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_ident_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_ident_formatter___closed__2;
x_2 = l_Lean_Parser_ident_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_ident_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_ident_parenthesizer___closed__1;
x_7 = l_Lean_Parser_antiquotExpr_parenthesizer___closed__1;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_Parser_ident___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = l_Lean_identKind;
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_mk_string("ident");
x_6 = 1;
x_7 = l_Lean_Parser_mkAntiquot(x_5, x_4, x_6);
lean_dec(x_5);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_8);
x_10 = l_Lean_Parser_identFn(x_1, x_2);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Parser_identFn), 2, 0);
x_12 = l_Lean_Parser_orelseFnCore(x_8, x_11, x_6, x_1, x_2);
return x_12;
}
}
}
static lean_object* _init_l_Lean_Parser_ident() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_1 = l_Lean_identKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
x_3 = lean_mk_string("ident");
x_4 = 1;
x_5 = l_Lean_Parser_mkAntiquot(x_3, x_2, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_Parser_mkAtomicInfo(x_3);
x_8 = l_Lean_Parser_orelseInfo(x_6, x_7);
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_ident___elambda__1), 2, 0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
static lean_object* _init_l_Lean_Parser_rawIdent_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_rawIdentNoAntiquot_formatter), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_rawIdent_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_ident_formatter___closed__3;
x_7 = l_Lean_Parser_rawIdent_formatter___closed__1;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_rawIdent_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_rawIdentNoAntiquot_parenthesizer___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_rawIdent_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_ident_parenthesizer___closed__1;
x_7 = l_Lean_Parser_rawIdent_parenthesizer___closed__1;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_Parser_rawIdent___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = l_Lean_identKind;
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_mk_string("ident");
x_6 = 1;
x_7 = l_Lean_Parser_mkAntiquot(x_5, x_4, x_6);
lean_dec(x_5);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_8);
x_10 = l_Lean_Parser_rawIdentFn(x_1, x_2);
lean_dec(x_1);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Parser_rawIdentFn___boxed), 2, 0);
x_12 = l_Lean_Parser_orelseFnCore(x_8, x_11, x_6, x_1, x_2);
return x_12;
}
}
}
static lean_object* _init_l_Lean_Parser_rawIdent() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_1 = l_Lean_identKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
x_3 = lean_mk_string("ident");
x_4 = 1;
x_5 = l_Lean_Parser_mkAntiquot(x_3, x_2, x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_8 = lean_box(1);
lean_inc(x_7);
x_9 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_7);
lean_ctor_set(x_9, 2, x_8);
x_10 = l_Lean_Parser_orelseInfo(x_6, x_9);
x_11 = lean_alloc_closure((void*)(l_Lean_Parser_rawIdent___elambda__1), 2, 0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
static lean_object* _init_l_Lean_Parser_numLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_numLitKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_numLit_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("numLit");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_numLit_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_numLit_formatter___closed__2;
x_2 = l_Lean_Parser_numLit_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_numLit_formatter___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_numLitNoAntiquot_formatter), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_numLit_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_numLit_formatter___closed__3;
x_7 = l_Lean_Parser_numLit_formatter___closed__4;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_numLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_numLit_formatter___closed__2;
x_2 = l_Lean_Parser_numLit_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_numLit_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_numLitNoAntiquot_parenthesizer___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_numLit_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_numLit_parenthesizer___closed__1;
x_7 = l_Lean_Parser_numLit_parenthesizer___closed__2;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_Parser_numLit___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = l_Lean_numLitKind;
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_mk_string("numLit");
x_6 = 1;
x_7 = l_Lean_Parser_mkAntiquot(x_5, x_4, x_6);
lean_dec(x_5);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_8);
x_10 = l_Lean_Parser_numLitFn(x_1, x_2);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Parser_numLitFn), 2, 0);
x_12 = l_Lean_Parser_orelseFnCore(x_8, x_11, x_6, x_1, x_2);
return x_12;
}
}
}
static lean_object* _init_l_Lean_Parser_numLit() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_1 = l_Lean_numLitKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
x_3 = lean_mk_string("numLit");
x_4 = 1;
x_5 = l_Lean_Parser_mkAntiquot(x_3, x_2, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_Parser_mkAtomicInfo(x_3);
x_8 = l_Lean_Parser_orelseInfo(x_6, x_7);
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_numLit___elambda__1), 2, 0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
static lean_object* _init_l_Lean_Parser_scientificLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_scientificLitKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_scientificLit_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("scientificLit");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_scientificLit_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_scientificLit_formatter___closed__2;
x_2 = l_Lean_Parser_scientificLit_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_scientificLit_formatter___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_scientificLitNoAntiquot_formatter), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_scientificLit_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_scientificLit_formatter___closed__3;
x_7 = l_Lean_Parser_scientificLit_formatter___closed__4;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_scientificLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_scientificLit_formatter___closed__2;
x_2 = l_Lean_Parser_scientificLit_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_scientificLit_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_scientificLitNoAntiquot_parenthesizer___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_scientificLit_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_scientificLit_parenthesizer___closed__1;
x_7 = l_Lean_Parser_scientificLit_parenthesizer___closed__2;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_Parser_scientificLit___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = l_Lean_scientificLitKind;
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_mk_string("scientificLit");
x_6 = 1;
x_7 = l_Lean_Parser_mkAntiquot(x_5, x_4, x_6);
lean_dec(x_5);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_8);
x_10 = l_Lean_Parser_scientificLitFn(x_1, x_2);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Parser_scientificLitFn), 2, 0);
x_12 = l_Lean_Parser_orelseFnCore(x_8, x_11, x_6, x_1, x_2);
return x_12;
}
}
}
static lean_object* _init_l_Lean_Parser_scientificLit() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_1 = l_Lean_scientificLitKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
x_3 = lean_mk_string("scientificLit");
x_4 = 1;
x_5 = l_Lean_Parser_mkAntiquot(x_3, x_2, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_Parser_mkAtomicInfo(x_3);
x_8 = l_Lean_Parser_orelseInfo(x_6, x_7);
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_scientificLit___elambda__1), 2, 0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
static lean_object* _init_l_Lean_Parser_strLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_strLitKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_strLit_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("strLit");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_strLit_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_strLit_formatter___closed__2;
x_2 = l_Lean_Parser_strLit_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_strLit_formatter___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_strLitNoAntiquot_formatter), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_strLit_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_strLit_formatter___closed__3;
x_7 = l_Lean_Parser_strLit_formatter___closed__4;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_strLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_strLit_formatter___closed__2;
x_2 = l_Lean_Parser_strLit_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_strLit_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_strLitNoAntiquot_parenthesizer___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_strLit_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_strLit_parenthesizer___closed__1;
x_7 = l_Lean_Parser_strLit_parenthesizer___closed__2;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_Parser_strLit___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = l_Lean_strLitKind;
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_mk_string("strLit");
x_6 = 1;
x_7 = l_Lean_Parser_mkAntiquot(x_5, x_4, x_6);
lean_dec(x_5);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_8);
x_10 = l_Lean_Parser_strLitFn(x_1, x_2);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Parser_strLitFn), 2, 0);
x_12 = l_Lean_Parser_orelseFnCore(x_8, x_11, x_6, x_1, x_2);
return x_12;
}
}
}
static lean_object* _init_l_Lean_Parser_strLit() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_1 = l_Lean_strLitKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
x_3 = lean_mk_string("strLit");
x_4 = 1;
x_5 = l_Lean_Parser_mkAntiquot(x_3, x_2, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_Parser_mkAtomicInfo(x_3);
x_8 = l_Lean_Parser_orelseInfo(x_6, x_7);
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_strLit___elambda__1), 2, 0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
static lean_object* _init_l_Lean_Parser_charLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_charLitKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_charLit_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("charLit");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_charLit_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_charLit_formatter___closed__2;
x_2 = l_Lean_Parser_charLit_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_charLit_formatter___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_charLitNoAntiquot_formatter), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_charLit_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_charLit_formatter___closed__3;
x_7 = l_Lean_Parser_charLit_formatter___closed__4;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_charLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_charLit_formatter___closed__2;
x_2 = l_Lean_Parser_charLit_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_charLit_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_charLitNoAntiquot_parenthesizer___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_charLit_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_charLit_parenthesizer___closed__1;
x_7 = l_Lean_Parser_charLit_parenthesizer___closed__2;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_Parser_charLit___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = l_Lean_charLitKind;
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_mk_string("charLit");
x_6 = 1;
x_7 = l_Lean_Parser_mkAntiquot(x_5, x_4, x_6);
lean_dec(x_5);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_8);
x_10 = l_Lean_Parser_charLitFn(x_1, x_2);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Parser_charLitFn), 2, 0);
x_12 = l_Lean_Parser_orelseFnCore(x_8, x_11, x_6, x_1, x_2);
return x_12;
}
}
}
static lean_object* _init_l_Lean_Parser_charLit() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_1 = l_Lean_charLitKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
x_3 = lean_mk_string("charLit");
x_4 = 1;
x_5 = l_Lean_Parser_mkAntiquot(x_3, x_2, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_Parser_mkAtomicInfo(x_3);
x_8 = l_Lean_Parser_orelseInfo(x_6, x_7);
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_charLit___elambda__1), 2, 0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
static lean_object* _init_l_Lean_Parser_nameLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_nameLitKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_nameLit_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("nameLit");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_nameLit_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_nameLit_formatter___closed__2;
x_2 = l_Lean_Parser_nameLit_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_nameLit_formatter___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_nameLitNoAntiquot_formatter), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_nameLit_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_nameLit_formatter___closed__3;
x_7 = l_Lean_Parser_nameLit_formatter___closed__4;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_nameLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_nameLit_formatter___closed__2;
x_2 = l_Lean_Parser_nameLit_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_nameLit_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_nameLitNoAntiquot_parenthesizer___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_nameLit_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_nameLit_parenthesizer___closed__1;
x_7 = l_Lean_Parser_nameLit_parenthesizer___closed__2;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_Parser_nameLit___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = l_Lean_nameLitKind;
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_mk_string("nameLit");
x_6 = 1;
x_7 = l_Lean_Parser_mkAntiquot(x_5, x_4, x_6);
lean_dec(x_5);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_8);
x_10 = l_Lean_Parser_nameLitFn(x_1, x_2);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Parser_nameLitFn), 2, 0);
x_12 = l_Lean_Parser_orelseFnCore(x_8, x_11, x_6, x_1, x_2);
return x_12;
}
}
}
static lean_object* _init_l_Lean_Parser_nameLit() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_1 = l_Lean_nameLitKind;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
x_3 = lean_mk_string("nameLit");
x_4 = 1;
x_5 = l_Lean_Parser_mkAntiquot(x_3, x_2, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_Parser_mkAtomicInfo(x_3);
x_8 = l_Lean_Parser_orelseInfo(x_6, x_7);
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_nameLit___elambda__1), 2, 0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
lean_object* l_Lean_Parser_group_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_groupKind;
x_8 = l_Lean_PrettyPrinter_Formatter_node_formatter(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Parser_group_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_groupKind;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Parser_group(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_groupKind;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_many1Indent_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkColGe_formatter___boxed), 4, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_many1Indent_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_Parser_many1Indent_formatter___closed__1;
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_1);
x_9 = l_Lean_Parser_many1_formatter(x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
static lean_object* _init_l_Lean_Parser_many1Indent_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkColGe_parenthesizer___boxed), 4, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_many1Indent_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Parser_many1Indent_parenthesizer___closed__1;
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_1);
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_many1_parenthesizer), 6, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer(x_9, x_2, x_3, x_4, x_5, x_6);
return x_10;
}
}
lean_object* l_Lean_Parser_many1Indent(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_2 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_3 = lean_box(1);
lean_inc(x_2);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
x_5 = lean_mk_string("irrelevant");
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_checkColGeFn___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = l_Lean_Parser_andthenInfo(x_4, x_7);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_10, 0, x_6);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
x_12 = l_Lean_Parser_many1(x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_inc(x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Parser_withPosition___lambda__1), 3, 1);
lean_closure_set(x_14, 0, x_12);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_12, 1);
lean_dec(x_16);
x_17 = lean_ctor_get(x_12, 0);
lean_dec(x_17);
lean_ctor_set(x_12, 1, x_14);
return x_12;
}
else
{
lean_object* x_18; 
lean_dec(x_12);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_14);
return x_18;
}
}
}
lean_object* l_Lean_Parser_manyIndent_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_Lean_Parser_many1Indent_formatter___closed__1;
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_1);
x_9 = l_Lean_Parser_many_formatter(x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
lean_object* l_Lean_Parser_manyIndent_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Parser_many1Indent_parenthesizer___closed__1;
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_8, 0, x_7);
lean_closure_set(x_8, 1, x_1);
x_9 = lean_alloc_closure((void*)(l_Lean_Parser_many_parenthesizer), 6, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = l_Lean_PrettyPrinter_Parenthesizer_withPosition_parenthesizer(x_9, x_2, x_3, x_4, x_5, x_6);
return x_10;
}
}
lean_object* l_Lean_Parser_manyIndent(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_2 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_3 = lean_box(1);
lean_inc(x_2);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
x_5 = lean_mk_string("irrelevant");
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_checkColGeFn___boxed), 3, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = l_Lean_Parser_andthenInfo(x_4, x_7);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_10, 0, x_6);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
x_12 = l_Lean_Parser_many(x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_inc(x_12);
x_14 = lean_alloc_closure((void*)(l_Lean_Parser_withPosition___lambda__1), 3, 1);
lean_closure_set(x_14, 0, x_12);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_12, 1);
lean_dec(x_16);
x_17 = lean_ctor_get(x_12, 0);
lean_dec(x_17);
lean_ctor_set(x_12, 1, x_14);
return x_12;
}
else
{
lean_object* x_18; 
lean_dec(x_12);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_13);
lean_ctor_set(x_18, 1, x_14);
return x_18;
}
}
}
lean_object* l_Lean_Parser_notSymbol_formatter___rarg(lean_object* x_1) {
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
lean_object* l_Lean_Parser_notSymbol_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_notSymbol_formatter___rarg), 1, 0);
return x_6;
}
}
lean_object* l_Lean_Parser_notSymbol_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_notSymbol_formatter(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_notSymbol_parenthesizer___rarg(lean_object* x_1) {
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
lean_object* l_Lean_Parser_notSymbol_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Lean_Parser_notSymbol_parenthesizer___rarg), 1, 0);
return x_6;
}
}
lean_object* l_Lean_Parser_notSymbol_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_notSymbol_parenthesizer(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_notSymbol(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = l_String_trim(x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_6 = lean_box(1);
lean_inc(x_5);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_6);
x_8 = lean_alloc_closure((void*)(l_Lean_Parser_notFollowedByFn___boxed), 4, 2);
lean_closure_set(x_8, 0, x_4);
lean_closure_set(x_8, 1, x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
static lean_object* _init_l_Lean_Parser_ppHardSpace() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_instInhabitedParser___lambda__1___boxed), 2, 0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_ppSpace() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_instInhabitedParser___lambda__1___boxed), 2, 0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_ppLine() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_instInhabitedParser___lambda__1___boxed), 2, 0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_ppGroup(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_ppGroup___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_ppGroup(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_ppIndent(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_ppIndent___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_ppIndent(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_ppDedent(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Parser_ppDedent___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_ppDedent(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_ppHardSpace_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_mk_string(" ");
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = l_Lean_PrettyPrinter_Formatter_push(x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_ppHardSpace_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_ppHardSpace_formatter(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_ppSpace_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PrettyPrinter_Formatter_pushLine(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_ppSpace_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_ppSpace_formatter(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_ppLine_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_mk_string("\n");
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = l_Lean_PrettyPrinter_Formatter_push(x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_ppLine_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_ppLine_formatter(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_ppGroup_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_box(0);
x_8 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_indent___boxed), 7, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_7);
x_9 = l_Lean_PrettyPrinter_Formatter_group(x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
lean_object* l_Lean_ppIndent_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l_Lean_PrettyPrinter_Formatter_indent(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_ppDedent_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_to_int(x_8);
x_10 = l_Std_Format_getIndent(x_7);
lean_dec(x_7);
x_11 = lean_nat_to_int(x_10);
x_12 = lean_int_sub(x_9, x_11);
lean_dec(x_11);
lean_dec(x_9);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = l_Lean_PrettyPrinter_Formatter_indent(x_1, x_13, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_13);
return x_14;
}
}
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___rarg(lean_object* x_1) {
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
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_ppHardSpace_parenthesizer___rarg), 1, 0);
return x_5;
}
}
lean_object* l_Lean_Parser_ppHardSpace_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_ppHardSpace_parenthesizer(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Parser_ppSpace_parenthesizer___rarg(lean_object* x_1) {
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
lean_object* l_Lean_Parser_ppSpace_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_ppSpace_parenthesizer___rarg), 1, 0);
return x_5;
}
}
lean_object* l_Lean_Parser_ppSpace_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_ppSpace_parenthesizer(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Parser_ppLine_parenthesizer___rarg(lean_object* x_1) {
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
lean_object* l_Lean_Parser_ppLine_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_ppLine_parenthesizer___rarg), 1, 0);
return x_5;
}
}
lean_object* l_Lean_Parser_ppLine_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_ppLine_parenthesizer(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Parser_ppGroup_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_ppIndent_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_ppDedent_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_termRegister__parser__alias______() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("termRegister_parser_alias___");
lean_inc(x_5);
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("andthen");
x_9 = lean_name_mk_string(x_1, x_8);
x_10 = lean_mk_string("register_parser_alias");
x_11 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_mk_string("strLit");
lean_inc(x_5);
x_13 = lean_name_mk_string(x_5, x_12);
x_14 = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(x_14, 0, x_13);
lean_inc(x_9);
x_15 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_15, 0, x_9);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_14);
x_16 = lean_mk_string("ident");
x_17 = lean_name_mk_string(x_5, x_16);
x_18 = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_15);
lean_ctor_set(x_19, 2, x_18);
x_20 = lean_unsigned_to_nat(1022u);
x_21 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_21, 0, x_7);
lean_ctor_set(x_21, 1, x_20);
lean_ctor_set(x_21, 2, x_19);
return x_21;
}
}
lean_object* l_Lean_Parser_myMacro____x40_Lean_Parser_Extra___hyg_258_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Lean");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Parser");
lean_inc(x_7);
lean_inc(x_6);
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("termRegister_parser_alias___");
lean_inc(x_8);
x_10 = lean_name_mk_string(x_8, x_9);
lean_inc(x_1);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
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
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(2u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
lean_dec(x_1);
x_18 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_2, 2);
lean_inc(x_21);
x_22 = lean_ctor_get(x_2, 1);
lean_inc(x_22);
lean_dec(x_2);
x_23 = lean_mk_string("Term");
lean_inc(x_8);
x_24 = lean_name_mk_string(x_8, x_23);
x_25 = lean_mk_string("do");
lean_inc(x_25);
lean_inc(x_24);
x_26 = lean_name_mk_string(x_24, x_25);
lean_inc(x_20);
x_27 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_27, 0, x_20);
lean_ctor_set(x_27, 1, x_25);
x_28 = lean_mk_string("doSeqIndent");
lean_inc(x_24);
x_29 = lean_name_mk_string(x_24, x_28);
x_30 = lean_mk_string("null");
x_31 = lean_name_mk_string(x_4, x_30);
x_32 = lean_mk_string("doSeqItem");
lean_inc(x_24);
x_33 = lean_name_mk_string(x_24, x_32);
x_34 = lean_mk_string("doExpr");
lean_inc(x_24);
x_35 = lean_name_mk_string(x_24, x_34);
x_36 = lean_mk_string("app");
x_37 = lean_name_mk_string(x_24, x_36);
x_38 = lean_mk_string("Parser.registerAlias");
x_39 = lean_string_utf8_byte_size(x_38);
x_40 = lean_unsigned_to_nat(0u);
x_41 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_40);
lean_ctor_set(x_41, 2, x_39);
x_42 = lean_name_mk_string(x_4, x_7);
x_43 = lean_mk_string("registerAlias");
lean_inc(x_43);
x_44 = lean_name_mk_string(x_42, x_43);
lean_inc(x_21);
lean_inc(x_22);
x_45 = l_Lean_addMacroScope(x_22, x_44, x_21);
lean_inc(x_43);
x_46 = lean_name_mk_string(x_8, x_43);
x_47 = lean_box(0);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
lean_inc(x_20);
x_50 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_50, 0, x_20);
lean_ctor_set(x_50, 1, x_41);
lean_ctor_set(x_50, 2, x_45);
lean_ctor_set(x_50, 3, x_49);
x_51 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_51);
x_52 = lean_array_push(x_51, x_15);
lean_inc(x_17);
lean_inc(x_52);
x_53 = lean_array_push(x_52, x_17);
lean_inc(x_31);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_31);
lean_ctor_set(x_54, 1, x_53);
lean_inc(x_51);
x_55 = lean_array_push(x_51, x_50);
x_56 = lean_array_push(x_55, x_54);
lean_inc(x_37);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_37);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_58);
x_59 = lean_array_push(x_58, x_57);
lean_inc(x_35);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_35);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_mk_empty_array_with_capacity(x_40);
lean_inc(x_31);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_31);
lean_ctor_set(x_62, 1, x_61);
lean_inc(x_51);
x_63 = lean_array_push(x_51, x_60);
lean_inc(x_62);
x_64 = lean_array_push(x_63, x_62);
lean_inc(x_33);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_33);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_mk_string("PrettyPrinter.Formatter.registerAlias");
x_67 = lean_string_utf8_byte_size(x_66);
x_68 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_40);
lean_ctor_set(x_68, 2, x_67);
x_69 = lean_mk_string("PrettyPrinter");
lean_inc(x_69);
x_70 = lean_name_mk_string(x_4, x_69);
x_71 = lean_mk_string("Formatter");
lean_inc(x_71);
lean_inc(x_70);
x_72 = lean_name_mk_string(x_70, x_71);
lean_inc(x_43);
x_73 = lean_name_mk_string(x_72, x_43);
lean_inc(x_21);
lean_inc(x_22);
x_74 = l_Lean_addMacroScope(x_22, x_73, x_21);
x_75 = lean_name_mk_string(x_6, x_69);
lean_inc(x_75);
x_76 = lean_name_mk_string(x_75, x_71);
lean_inc(x_43);
x_77 = lean_name_mk_string(x_76, x_43);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_47);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_47);
lean_inc(x_20);
x_80 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_80, 0, x_20);
lean_ctor_set(x_80, 1, x_68);
lean_ctor_set(x_80, 2, x_74);
lean_ctor_set(x_80, 3, x_79);
x_81 = l_Lean_Syntax_getId(x_17);
x_82 = lean_mk_string("formatter");
x_83 = lean_name_mk_string(x_4, x_82);
x_84 = l_Lean_Name_append(x_81, x_83);
x_85 = l_Lean_mkIdentFrom(x_17, x_84);
lean_inc(x_52);
x_86 = lean_array_push(x_52, x_85);
lean_inc(x_31);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_31);
lean_ctor_set(x_87, 1, x_86);
lean_inc(x_51);
x_88 = lean_array_push(x_51, x_80);
x_89 = lean_array_push(x_88, x_87);
lean_inc(x_37);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_37);
lean_ctor_set(x_90, 1, x_89);
lean_inc(x_58);
x_91 = lean_array_push(x_58, x_90);
lean_inc(x_35);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_35);
lean_ctor_set(x_92, 1, x_91);
lean_inc(x_51);
x_93 = lean_array_push(x_51, x_92);
lean_inc(x_62);
x_94 = lean_array_push(x_93, x_62);
lean_inc(x_33);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_33);
lean_ctor_set(x_95, 1, x_94);
x_96 = lean_mk_string("PrettyPrinter.Parenthesizer.registerAlias");
x_97 = lean_string_utf8_byte_size(x_96);
x_98 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_40);
lean_ctor_set(x_98, 2, x_97);
x_99 = lean_mk_string("Parenthesizer");
lean_inc(x_99);
x_100 = lean_name_mk_string(x_70, x_99);
lean_inc(x_43);
x_101 = lean_name_mk_string(x_100, x_43);
x_102 = l_Lean_addMacroScope(x_22, x_101, x_21);
x_103 = lean_name_mk_string(x_75, x_99);
x_104 = lean_name_mk_string(x_103, x_43);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_47);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_47);
x_107 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_107, 0, x_20);
lean_ctor_set(x_107, 1, x_98);
lean_ctor_set(x_107, 2, x_102);
lean_ctor_set(x_107, 3, x_106);
x_108 = lean_mk_string("parenthesizer");
x_109 = lean_name_mk_string(x_4, x_108);
x_110 = l_Lean_Name_append(x_81, x_109);
lean_dec(x_81);
x_111 = l_Lean_mkIdentFrom(x_17, x_110);
lean_dec(x_17);
x_112 = lean_array_push(x_52, x_111);
lean_inc(x_31);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_31);
lean_ctor_set(x_113, 1, x_112);
lean_inc(x_51);
x_114 = lean_array_push(x_51, x_107);
x_115 = lean_array_push(x_114, x_113);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_37);
lean_ctor_set(x_116, 1, x_115);
lean_inc(x_58);
x_117 = lean_array_push(x_58, x_116);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_35);
lean_ctor_set(x_118, 1, x_117);
lean_inc(x_51);
x_119 = lean_array_push(x_51, x_118);
x_120 = lean_array_push(x_119, x_62);
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_33);
lean_ctor_set(x_121, 1, x_120);
x_122 = lean_unsigned_to_nat(3u);
x_123 = lean_mk_empty_array_with_capacity(x_122);
x_124 = lean_array_push(x_123, x_65);
x_125 = lean_array_push(x_124, x_95);
x_126 = lean_array_push(x_125, x_121);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_31);
lean_ctor_set(x_127, 1, x_126);
x_128 = lean_array_push(x_58, x_127);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_29);
lean_ctor_set(x_129, 1, x_128);
x_130 = lean_array_push(x_51, x_27);
x_131 = lean_array_push(x_130, x_129);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_26);
lean_ctor_set(x_132, 1, x_131);
lean_ctor_set(x_18, 0, x_132);
return x_18;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_133 = lean_ctor_get(x_18, 0);
x_134 = lean_ctor_get(x_18, 1);
lean_inc(x_134);
lean_inc(x_133);
lean_dec(x_18);
x_135 = lean_ctor_get(x_2, 2);
lean_inc(x_135);
x_136 = lean_ctor_get(x_2, 1);
lean_inc(x_136);
lean_dec(x_2);
x_137 = lean_mk_string("Term");
lean_inc(x_8);
x_138 = lean_name_mk_string(x_8, x_137);
x_139 = lean_mk_string("do");
lean_inc(x_139);
lean_inc(x_138);
x_140 = lean_name_mk_string(x_138, x_139);
lean_inc(x_133);
x_141 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_141, 0, x_133);
lean_ctor_set(x_141, 1, x_139);
x_142 = lean_mk_string("doSeqIndent");
lean_inc(x_138);
x_143 = lean_name_mk_string(x_138, x_142);
x_144 = lean_mk_string("null");
x_145 = lean_name_mk_string(x_4, x_144);
x_146 = lean_mk_string("doSeqItem");
lean_inc(x_138);
x_147 = lean_name_mk_string(x_138, x_146);
x_148 = lean_mk_string("doExpr");
lean_inc(x_138);
x_149 = lean_name_mk_string(x_138, x_148);
x_150 = lean_mk_string("app");
x_151 = lean_name_mk_string(x_138, x_150);
x_152 = lean_mk_string("Parser.registerAlias");
x_153 = lean_string_utf8_byte_size(x_152);
x_154 = lean_unsigned_to_nat(0u);
x_155 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_155, 0, x_152);
lean_ctor_set(x_155, 1, x_154);
lean_ctor_set(x_155, 2, x_153);
x_156 = lean_name_mk_string(x_4, x_7);
x_157 = lean_mk_string("registerAlias");
lean_inc(x_157);
x_158 = lean_name_mk_string(x_156, x_157);
lean_inc(x_135);
lean_inc(x_136);
x_159 = l_Lean_addMacroScope(x_136, x_158, x_135);
lean_inc(x_157);
x_160 = lean_name_mk_string(x_8, x_157);
x_161 = lean_box(0);
x_162 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_161);
lean_inc(x_133);
x_164 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_164, 0, x_133);
lean_ctor_set(x_164, 1, x_155);
lean_ctor_set(x_164, 2, x_159);
lean_ctor_set(x_164, 3, x_163);
x_165 = lean_mk_empty_array_with_capacity(x_16);
lean_inc(x_165);
x_166 = lean_array_push(x_165, x_15);
lean_inc(x_17);
lean_inc(x_166);
x_167 = lean_array_push(x_166, x_17);
lean_inc(x_145);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_145);
lean_ctor_set(x_168, 1, x_167);
lean_inc(x_165);
x_169 = lean_array_push(x_165, x_164);
x_170 = lean_array_push(x_169, x_168);
lean_inc(x_151);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_151);
lean_ctor_set(x_171, 1, x_170);
x_172 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_172);
x_173 = lean_array_push(x_172, x_171);
lean_inc(x_149);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_149);
lean_ctor_set(x_174, 1, x_173);
x_175 = lean_mk_empty_array_with_capacity(x_154);
lean_inc(x_145);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_145);
lean_ctor_set(x_176, 1, x_175);
lean_inc(x_165);
x_177 = lean_array_push(x_165, x_174);
lean_inc(x_176);
x_178 = lean_array_push(x_177, x_176);
lean_inc(x_147);
x_179 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_179, 0, x_147);
lean_ctor_set(x_179, 1, x_178);
x_180 = lean_mk_string("PrettyPrinter.Formatter.registerAlias");
x_181 = lean_string_utf8_byte_size(x_180);
x_182 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_154);
lean_ctor_set(x_182, 2, x_181);
x_183 = lean_mk_string("PrettyPrinter");
lean_inc(x_183);
x_184 = lean_name_mk_string(x_4, x_183);
x_185 = lean_mk_string("Formatter");
lean_inc(x_185);
lean_inc(x_184);
x_186 = lean_name_mk_string(x_184, x_185);
lean_inc(x_157);
x_187 = lean_name_mk_string(x_186, x_157);
lean_inc(x_135);
lean_inc(x_136);
x_188 = l_Lean_addMacroScope(x_136, x_187, x_135);
x_189 = lean_name_mk_string(x_6, x_183);
lean_inc(x_189);
x_190 = lean_name_mk_string(x_189, x_185);
lean_inc(x_157);
x_191 = lean_name_mk_string(x_190, x_157);
x_192 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_161);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_161);
lean_inc(x_133);
x_194 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_194, 0, x_133);
lean_ctor_set(x_194, 1, x_182);
lean_ctor_set(x_194, 2, x_188);
lean_ctor_set(x_194, 3, x_193);
x_195 = l_Lean_Syntax_getId(x_17);
x_196 = lean_mk_string("formatter");
x_197 = lean_name_mk_string(x_4, x_196);
x_198 = l_Lean_Name_append(x_195, x_197);
x_199 = l_Lean_mkIdentFrom(x_17, x_198);
lean_inc(x_166);
x_200 = lean_array_push(x_166, x_199);
lean_inc(x_145);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_145);
lean_ctor_set(x_201, 1, x_200);
lean_inc(x_165);
x_202 = lean_array_push(x_165, x_194);
x_203 = lean_array_push(x_202, x_201);
lean_inc(x_151);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_151);
lean_ctor_set(x_204, 1, x_203);
lean_inc(x_172);
x_205 = lean_array_push(x_172, x_204);
lean_inc(x_149);
x_206 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_206, 0, x_149);
lean_ctor_set(x_206, 1, x_205);
lean_inc(x_165);
x_207 = lean_array_push(x_165, x_206);
lean_inc(x_176);
x_208 = lean_array_push(x_207, x_176);
lean_inc(x_147);
x_209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_209, 0, x_147);
lean_ctor_set(x_209, 1, x_208);
x_210 = lean_mk_string("PrettyPrinter.Parenthesizer.registerAlias");
x_211 = lean_string_utf8_byte_size(x_210);
x_212 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_212, 0, x_210);
lean_ctor_set(x_212, 1, x_154);
lean_ctor_set(x_212, 2, x_211);
x_213 = lean_mk_string("Parenthesizer");
lean_inc(x_213);
x_214 = lean_name_mk_string(x_184, x_213);
lean_inc(x_157);
x_215 = lean_name_mk_string(x_214, x_157);
x_216 = l_Lean_addMacroScope(x_136, x_215, x_135);
x_217 = lean_name_mk_string(x_189, x_213);
x_218 = lean_name_mk_string(x_217, x_157);
x_219 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_219, 0, x_218);
lean_ctor_set(x_219, 1, x_161);
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_219);
lean_ctor_set(x_220, 1, x_161);
x_221 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_221, 0, x_133);
lean_ctor_set(x_221, 1, x_212);
lean_ctor_set(x_221, 2, x_216);
lean_ctor_set(x_221, 3, x_220);
x_222 = lean_mk_string("parenthesizer");
x_223 = lean_name_mk_string(x_4, x_222);
x_224 = l_Lean_Name_append(x_195, x_223);
lean_dec(x_195);
x_225 = l_Lean_mkIdentFrom(x_17, x_224);
lean_dec(x_17);
x_226 = lean_array_push(x_166, x_225);
lean_inc(x_145);
x_227 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_227, 0, x_145);
lean_ctor_set(x_227, 1, x_226);
lean_inc(x_165);
x_228 = lean_array_push(x_165, x_221);
x_229 = lean_array_push(x_228, x_227);
x_230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_230, 0, x_151);
lean_ctor_set(x_230, 1, x_229);
lean_inc(x_172);
x_231 = lean_array_push(x_172, x_230);
x_232 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_232, 0, x_149);
lean_ctor_set(x_232, 1, x_231);
lean_inc(x_165);
x_233 = lean_array_push(x_165, x_232);
x_234 = lean_array_push(x_233, x_176);
x_235 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_235, 0, x_147);
lean_ctor_set(x_235, 1, x_234);
x_236 = lean_unsigned_to_nat(3u);
x_237 = lean_mk_empty_array_with_capacity(x_236);
x_238 = lean_array_push(x_237, x_179);
x_239 = lean_array_push(x_238, x_209);
x_240 = lean_array_push(x_239, x_235);
x_241 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_241, 0, x_145);
lean_ctor_set(x_241, 1, x_240);
x_242 = lean_array_push(x_172, x_241);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_143);
lean_ctor_set(x_243, 1, x_242);
x_244 = lean_array_push(x_165, x_141);
x_245 = lean_array_push(x_244, x_243);
x_246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_246, 0, x_140);
lean_ctor_set(x_246, 1, x_245);
x_247 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_247, 0, x_246);
lean_ctor_set(x_247, 1, x_134);
return x_247;
}
}
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Extra___hyg_488_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_box(0);
x_3 = lean_mk_string("group");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_group), 1, 0);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = l_Lean_Parser_parserAliasesRef;
lean_inc(x_4);
x_8 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_4, x_6, x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_closure((void*)(l_Lean_Parser_group_formatter), 6, 0);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = l_Lean_PrettyPrinter_Formatter_formatterAliasesRef;
lean_inc(x_4);
x_13 = l_Lean_Parser_registerAliasCore___rarg(x_12, x_4, x_11, x_9);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_alloc_closure((void*)(l_Lean_Parser_group_parenthesizer), 6, 0);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = l_Lean_PrettyPrinter_Parenthesizer_parenthesizerAliasesRef;
x_18 = l_Lean_Parser_registerAliasCore___rarg(x_17, x_4, x_16, x_14);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_mk_string("ppHardSpace");
x_21 = lean_name_mk_string(x_2, x_20);
x_22 = l_Lean_Parser_epsilonInfo;
x_23 = lean_alloc_closure((void*)(l_Lean_Parser_instInhabitedParser___lambda__1___boxed), 2, 0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_24);
lean_inc(x_25);
lean_inc(x_21);
x_26 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_21, x_25, x_19);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_alloc_closure((void*)(l_Lean_ppHardSpace_formatter___boxed), 5, 0);
x_29 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_29, 0, x_28);
lean_inc(x_21);
x_30 = l_Lean_Parser_registerAliasCore___rarg(x_12, x_21, x_29, x_27);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_alloc_closure((void*)(l_Lean_Parser_ppHardSpace_parenthesizer___boxed), 4, 0);
x_33 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = l_Lean_Parser_registerAliasCore___rarg(x_17, x_21, x_33, x_31);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_mk_string("ppSpace");
x_37 = lean_name_mk_string(x_2, x_36);
lean_inc(x_25);
lean_inc(x_37);
x_38 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_37, x_25, x_35);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_alloc_closure((void*)(l_Lean_ppSpace_formatter___boxed), 5, 0);
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_40);
lean_inc(x_37);
x_42 = l_Lean_Parser_registerAliasCore___rarg(x_12, x_37, x_41, x_39);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_42, 1);
lean_inc(x_43);
lean_dec(x_42);
x_44 = lean_alloc_closure((void*)(l_Lean_Parser_ppSpace_parenthesizer___boxed), 4, 0);
x_45 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = l_Lean_Parser_registerAliasCore___rarg(x_17, x_37, x_45, x_43);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
lean_dec(x_46);
x_48 = lean_mk_string("ppLine");
x_49 = lean_name_mk_string(x_2, x_48);
lean_inc(x_49);
x_50 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_49, x_25, x_47);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_alloc_closure((void*)(l_Lean_ppLine_formatter___boxed), 5, 0);
x_53 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_53, 0, x_52);
lean_inc(x_49);
x_54 = l_Lean_Parser_registerAliasCore___rarg(x_12, x_49, x_53, x_51);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
lean_dec(x_54);
x_56 = lean_alloc_closure((void*)(l_Lean_Parser_ppLine_parenthesizer___boxed), 4, 0);
x_57 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = l_Lean_Parser_registerAliasCore___rarg(x_17, x_49, x_57, x_55);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
lean_dec(x_58);
x_60 = lean_mk_string("ppGroup");
x_61 = lean_name_mk_string(x_2, x_60);
x_62 = lean_alloc_closure((void*)(l_Lean_Parser_ppGroup___boxed), 1, 0);
x_63 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_63, 0, x_62);
lean_inc(x_61);
x_64 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_61, x_63, x_59);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = lean_alloc_closure((void*)(l_Lean_ppGroup_formatter), 6, 0);
x_67 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_67, 0, x_66);
lean_inc(x_61);
x_68 = l_Lean_Parser_registerAliasCore___rarg(x_12, x_61, x_67, x_65);
if (lean_obj_tag(x_68) == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_69 = lean_ctor_get(x_68, 1);
lean_inc(x_69);
lean_dec(x_68);
x_70 = lean_alloc_closure((void*)(l_Lean_Parser_ppGroup_parenthesizer), 6, 0);
x_71 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_71, 0, x_70);
x_72 = l_Lean_Parser_registerAliasCore___rarg(x_17, x_61, x_71, x_69);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_dec(x_72);
x_74 = lean_mk_string("ppIndent");
x_75 = lean_name_mk_string(x_2, x_74);
x_76 = lean_alloc_closure((void*)(l_Lean_Parser_ppIndent___boxed), 1, 0);
x_77 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_77, 0, x_76);
lean_inc(x_75);
x_78 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_75, x_77, x_73);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
lean_dec(x_78);
x_80 = lean_alloc_closure((void*)(l_Lean_ppIndent_formatter), 6, 0);
x_81 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_81, 0, x_80);
lean_inc(x_75);
x_82 = l_Lean_Parser_registerAliasCore___rarg(x_12, x_75, x_81, x_79);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
lean_dec(x_82);
x_84 = lean_alloc_closure((void*)(l_Lean_Parser_ppIndent_parenthesizer), 6, 0);
x_85 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_85, 0, x_84);
x_86 = l_Lean_Parser_registerAliasCore___rarg(x_17, x_75, x_85, x_83);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
lean_dec(x_86);
x_88 = lean_mk_string("ppDedent");
x_89 = lean_name_mk_string(x_2, x_88);
x_90 = lean_alloc_closure((void*)(l_Lean_Parser_ppDedent___boxed), 1, 0);
x_91 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_91, 0, x_90);
lean_inc(x_89);
x_92 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_89, x_91, x_87);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_93 = lean_ctor_get(x_92, 1);
lean_inc(x_93);
lean_dec(x_92);
x_94 = lean_alloc_closure((void*)(l_Lean_ppDedent_formatter), 6, 0);
x_95 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_95, 0, x_94);
lean_inc(x_89);
x_96 = l_Lean_Parser_registerAliasCore___rarg(x_12, x_89, x_95, x_93);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_97 = lean_ctor_get(x_96, 1);
lean_inc(x_97);
lean_dec(x_96);
x_98 = lean_alloc_closure((void*)(l_Lean_Parser_ppDedent_parenthesizer), 6, 0);
x_99 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_99, 0, x_98);
x_100 = l_Lean_Parser_registerAliasCore___rarg(x_17, x_89, x_99, x_97);
return x_100;
}
else
{
uint8_t x_101; 
lean_dec(x_89);
x_101 = !lean_is_exclusive(x_96);
if (x_101 == 0)
{
return x_96;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_96, 0);
x_103 = lean_ctor_get(x_96, 1);
lean_inc(x_103);
lean_inc(x_102);
lean_dec(x_96);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_102);
lean_ctor_set(x_104, 1, x_103);
return x_104;
}
}
}
else
{
uint8_t x_105; 
lean_dec(x_89);
x_105 = !lean_is_exclusive(x_92);
if (x_105 == 0)
{
return x_92;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_92, 0);
x_107 = lean_ctor_get(x_92, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_92);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_106);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
}
else
{
uint8_t x_109; 
x_109 = !lean_is_exclusive(x_86);
if (x_109 == 0)
{
return x_86;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_86, 0);
x_111 = lean_ctor_get(x_86, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_86);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
else
{
uint8_t x_113; 
lean_dec(x_75);
x_113 = !lean_is_exclusive(x_82);
if (x_113 == 0)
{
return x_82;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_82, 0);
x_115 = lean_ctor_get(x_82, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_82);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
else
{
uint8_t x_117; 
lean_dec(x_75);
x_117 = !lean_is_exclusive(x_78);
if (x_117 == 0)
{
return x_78;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_78, 0);
x_119 = lean_ctor_get(x_78, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_78);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
return x_120;
}
}
}
else
{
uint8_t x_121; 
x_121 = !lean_is_exclusive(x_72);
if (x_121 == 0)
{
return x_72;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_72, 0);
x_123 = lean_ctor_get(x_72, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_72);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
return x_124;
}
}
}
else
{
uint8_t x_125; 
lean_dec(x_61);
x_125 = !lean_is_exclusive(x_68);
if (x_125 == 0)
{
return x_68;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_126 = lean_ctor_get(x_68, 0);
x_127 = lean_ctor_get(x_68, 1);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_68);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_126);
lean_ctor_set(x_128, 1, x_127);
return x_128;
}
}
}
else
{
uint8_t x_129; 
lean_dec(x_61);
x_129 = !lean_is_exclusive(x_64);
if (x_129 == 0)
{
return x_64;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = lean_ctor_get(x_64, 0);
x_131 = lean_ctor_get(x_64, 1);
lean_inc(x_131);
lean_inc(x_130);
lean_dec(x_64);
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
x_133 = !lean_is_exclusive(x_58);
if (x_133 == 0)
{
return x_58;
}
else
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_134 = lean_ctor_get(x_58, 0);
x_135 = lean_ctor_get(x_58, 1);
lean_inc(x_135);
lean_inc(x_134);
lean_dec(x_58);
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
lean_dec(x_49);
x_137 = !lean_is_exclusive(x_54);
if (x_137 == 0)
{
return x_54;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; 
x_138 = lean_ctor_get(x_54, 0);
x_139 = lean_ctor_get(x_54, 1);
lean_inc(x_139);
lean_inc(x_138);
lean_dec(x_54);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
return x_140;
}
}
}
else
{
uint8_t x_141; 
lean_dec(x_49);
x_141 = !lean_is_exclusive(x_50);
if (x_141 == 0)
{
return x_50;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_142 = lean_ctor_get(x_50, 0);
x_143 = lean_ctor_get(x_50, 1);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_50);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set(x_144, 1, x_143);
return x_144;
}
}
}
else
{
uint8_t x_145; 
lean_dec(x_25);
x_145 = !lean_is_exclusive(x_46);
if (x_145 == 0)
{
return x_46;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_146 = lean_ctor_get(x_46, 0);
x_147 = lean_ctor_get(x_46, 1);
lean_inc(x_147);
lean_inc(x_146);
lean_dec(x_46);
x_148 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_148, 0, x_146);
lean_ctor_set(x_148, 1, x_147);
return x_148;
}
}
}
else
{
uint8_t x_149; 
lean_dec(x_37);
lean_dec(x_25);
x_149 = !lean_is_exclusive(x_42);
if (x_149 == 0)
{
return x_42;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_150 = lean_ctor_get(x_42, 0);
x_151 = lean_ctor_get(x_42, 1);
lean_inc(x_151);
lean_inc(x_150);
lean_dec(x_42);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_151);
return x_152;
}
}
}
else
{
uint8_t x_153; 
lean_dec(x_37);
lean_dec(x_25);
x_153 = !lean_is_exclusive(x_38);
if (x_153 == 0)
{
return x_38;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_38, 0);
x_155 = lean_ctor_get(x_38, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_38);
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
return x_156;
}
}
}
else
{
uint8_t x_157; 
lean_dec(x_25);
x_157 = !lean_is_exclusive(x_34);
if (x_157 == 0)
{
return x_34;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_158 = lean_ctor_get(x_34, 0);
x_159 = lean_ctor_get(x_34, 1);
lean_inc(x_159);
lean_inc(x_158);
lean_dec(x_34);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_158);
lean_ctor_set(x_160, 1, x_159);
return x_160;
}
}
}
else
{
uint8_t x_161; 
lean_dec(x_25);
lean_dec(x_21);
x_161 = !lean_is_exclusive(x_30);
if (x_161 == 0)
{
return x_30;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_162 = lean_ctor_get(x_30, 0);
x_163 = lean_ctor_get(x_30, 1);
lean_inc(x_163);
lean_inc(x_162);
lean_dec(x_30);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_163);
return x_164;
}
}
}
else
{
uint8_t x_165; 
lean_dec(x_25);
lean_dec(x_21);
x_165 = !lean_is_exclusive(x_26);
if (x_165 == 0)
{
return x_26;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_166 = lean_ctor_get(x_26, 0);
x_167 = lean_ctor_get(x_26, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_26);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set(x_168, 1, x_167);
return x_168;
}
}
}
else
{
uint8_t x_169; 
x_169 = !lean_is_exclusive(x_18);
if (x_169 == 0)
{
return x_18;
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_170 = lean_ctor_get(x_18, 0);
x_171 = lean_ctor_get(x_18, 1);
lean_inc(x_171);
lean_inc(x_170);
lean_dec(x_18);
x_172 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_172, 0, x_170);
lean_ctor_set(x_172, 1, x_171);
return x_172;
}
}
}
else
{
uint8_t x_173; 
lean_dec(x_4);
x_173 = !lean_is_exclusive(x_13);
if (x_173 == 0)
{
return x_13;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_174 = lean_ctor_get(x_13, 0);
x_175 = lean_ctor_get(x_13, 1);
lean_inc(x_175);
lean_inc(x_174);
lean_dec(x_13);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_174);
lean_ctor_set(x_176, 1, x_175);
return x_176;
}
}
}
else
{
uint8_t x_177; 
lean_dec(x_4);
x_177 = !lean_is_exclusive(x_8);
if (x_177 == 0)
{
return x_8;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_ctor_get(x_8, 0);
x_179 = lean_ctor_get(x_8, 1);
lean_inc(x_179);
lean_inc(x_178);
lean_dec(x_8);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_179);
return x_180;
}
}
}
}
lean_object* l_Lean_initFn____x40_Lean_Parser_Extra___hyg_792_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_box(0);
x_3 = lean_mk_string("num");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_numLit_parenthesizer), 5, 0);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = l_Lean_PrettyPrinter_Parenthesizer_parenthesizerAliasesRef;
x_8 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_4, x_6, x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_mk_string("scientific");
x_11 = lean_name_mk_string(x_2, x_10);
x_12 = lean_alloc_closure((void*)(l_Lean_Parser_scientificLit_parenthesizer), 5, 0);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_11, x_13, x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_mk_string("str");
x_17 = lean_name_mk_string(x_2, x_16);
x_18 = lean_alloc_closure((void*)(l_Lean_Parser_strLit_parenthesizer), 5, 0);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_17, x_19, x_15);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_mk_string("char");
x_23 = lean_name_mk_string(x_2, x_22);
x_24 = lean_alloc_closure((void*)(l_Lean_Parser_charLit_parenthesizer), 5, 0);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_23, x_25, x_21);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_mk_string("name");
x_29 = lean_name_mk_string(x_2, x_28);
x_30 = lean_alloc_closure((void*)(l_Lean_Parser_nameLit_parenthesizer), 5, 0);
x_31 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_29, x_31, x_27);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_mk_string("ident");
x_35 = lean_name_mk_string(x_2, x_34);
x_36 = lean_alloc_closure((void*)(l_Lean_Parser_ident_parenthesizer), 5, 0);
x_37 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_35, x_37, x_33);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_mk_string("many");
x_41 = lean_name_mk_string(x_2, x_40);
x_42 = lean_alloc_closure((void*)(l_Lean_Parser_many_parenthesizer), 6, 0);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_41, x_43, x_39);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_mk_string("many1");
x_47 = lean_name_mk_string(x_2, x_46);
x_48 = lean_alloc_closure((void*)(l_Lean_Parser_many1_parenthesizer), 6, 0);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_48);
x_50 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_47, x_49, x_45);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_mk_string("optional");
x_53 = lean_name_mk_string(x_2, x_52);
x_54 = lean_alloc_closure((void*)(l_Lean_Parser_optional_parenthesizer), 6, 0);
x_55 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_55, 0, x_54);
x_56 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_53, x_55, x_51);
return x_56;
}
else
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_50);
if (x_57 == 0)
{
return x_50;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_50, 0);
x_59 = lean_ctor_get(x_50, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_50);
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
x_61 = !lean_is_exclusive(x_44);
if (x_61 == 0)
{
return x_44;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_44, 0);
x_63 = lean_ctor_get(x_44, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_44);
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
x_65 = !lean_is_exclusive(x_38);
if (x_65 == 0)
{
return x_38;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_38, 0);
x_67 = lean_ctor_get(x_38, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_38);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
uint8_t x_69; 
x_69 = !lean_is_exclusive(x_32);
if (x_69 == 0)
{
return x_32;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_32, 0);
x_71 = lean_ctor_get(x_32, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_32);
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
x_73 = !lean_is_exclusive(x_26);
if (x_73 == 0)
{
return x_26;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_26, 0);
x_75 = lean_ctor_get(x_26, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_26);
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
x_77 = !lean_is_exclusive(x_20);
if (x_77 == 0)
{
return x_20;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_20, 0);
x_79 = lean_ctor_get(x_20, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_20);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
uint8_t x_81; 
x_81 = !lean_is_exclusive(x_14);
if (x_81 == 0)
{
return x_14;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_14, 0);
x_83 = lean_ctor_get(x_14, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_14);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
else
{
uint8_t x_85; 
x_85 = !lean_is_exclusive(x_8);
if (x_85 == 0)
{
return x_8;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_8, 0);
x_87 = lean_ctor_get(x_8, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_8);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
}
lean_object* l_Lean_initFn____x40_Lean_Parser_Extra___hyg_929_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_box(0);
x_3 = lean_mk_string("num");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_numLit_formatter), 5, 0);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = l_Lean_PrettyPrinter_Formatter_formatterAliasesRef;
x_8 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_4, x_6, x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_mk_string("scientific");
x_11 = lean_name_mk_string(x_2, x_10);
x_12 = lean_alloc_closure((void*)(l_Lean_Parser_scientificLit_formatter), 5, 0);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_11, x_13, x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_mk_string("str");
x_17 = lean_name_mk_string(x_2, x_16);
x_18 = lean_alloc_closure((void*)(l_Lean_Parser_strLit_formatter), 5, 0);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_17, x_19, x_15);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_mk_string("char");
x_23 = lean_name_mk_string(x_2, x_22);
x_24 = lean_alloc_closure((void*)(l_Lean_Parser_charLit_formatter), 5, 0);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_23, x_25, x_21);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_mk_string("name");
x_29 = lean_name_mk_string(x_2, x_28);
x_30 = lean_alloc_closure((void*)(l_Lean_Parser_nameLit_formatter), 5, 0);
x_31 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_29, x_31, x_27);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_34 = lean_mk_string("ident");
x_35 = lean_name_mk_string(x_2, x_34);
x_36 = lean_alloc_closure((void*)(l_Lean_Parser_ident_formatter), 5, 0);
x_37 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_35, x_37, x_33);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = lean_mk_string("many");
x_41 = lean_name_mk_string(x_2, x_40);
x_42 = lean_alloc_closure((void*)(l_Lean_Parser_many_formatter), 6, 0);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_41, x_43, x_39);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_45 = lean_ctor_get(x_44, 1);
lean_inc(x_45);
lean_dec(x_44);
x_46 = lean_mk_string("many1");
x_47 = lean_name_mk_string(x_2, x_46);
x_48 = lean_alloc_closure((void*)(l_Lean_Parser_many1_formatter), 6, 0);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_48);
x_50 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_47, x_49, x_45);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_51 = lean_ctor_get(x_50, 1);
lean_inc(x_51);
lean_dec(x_50);
x_52 = lean_mk_string("optional");
x_53 = lean_name_mk_string(x_2, x_52);
x_54 = lean_alloc_closure((void*)(l_Lean_Parser_optional_formatter), 6, 0);
x_55 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_55, 0, x_54);
x_56 = l_Lean_Parser_registerAliasCore___rarg(x_7, x_53, x_55, x_51);
return x_56;
}
else
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_50);
if (x_57 == 0)
{
return x_50;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_50, 0);
x_59 = lean_ctor_get(x_50, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_50);
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
x_61 = !lean_is_exclusive(x_44);
if (x_61 == 0)
{
return x_44;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_44, 0);
x_63 = lean_ctor_get(x_44, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_44);
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
x_65 = !lean_is_exclusive(x_38);
if (x_65 == 0)
{
return x_38;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_38, 0);
x_67 = lean_ctor_get(x_38, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_38);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_66);
lean_ctor_set(x_68, 1, x_67);
return x_68;
}
}
}
else
{
uint8_t x_69; 
x_69 = !lean_is_exclusive(x_32);
if (x_69 == 0)
{
return x_32;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_32, 0);
x_71 = lean_ctor_get(x_32, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_32);
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
x_73 = !lean_is_exclusive(x_26);
if (x_73 == 0)
{
return x_26;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_26, 0);
x_75 = lean_ctor_get(x_26, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_26);
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
x_77 = !lean_is_exclusive(x_20);
if (x_77 == 0)
{
return x_20;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_20, 0);
x_79 = lean_ctor_get(x_20, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_20);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
uint8_t x_81; 
x_81 = !lean_is_exclusive(x_14);
if (x_81 == 0)
{
return x_14;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_14, 0);
x_83 = lean_ctor_get(x_14, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_14);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
else
{
uint8_t x_85; 
x_85 = !lean_is_exclusive(x_8);
if (x_85 == 0)
{
return x_8;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_8, 0);
x_87 = lean_ctor_get(x_8, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_8);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Parser_Extension(lean_object*);
lean_object* initialize_Lean_PrettyPrinter_Parenthesizer(lean_object*);
lean_object* initialize_Lean_PrettyPrinter_Formatter(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Parser_Extra(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Extension(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_leadingNode_formatter___closed__1 = _init_l_Lean_Parser_leadingNode_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_leadingNode_formatter___closed__1);
l_Lean_Parser_leadingNode_formatter___closed__2 = _init_l_Lean_Parser_leadingNode_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_leadingNode_formatter___closed__2);
l_Lean_Parser_commandParser_formatter___rarg___closed__1 = _init_l_Lean_Parser_commandParser_formatter___rarg___closed__1();
lean_mark_persistent(l_Lean_Parser_commandParser_formatter___rarg___closed__1);
l_Lean_Parser_commandParser_formatter___rarg___closed__2 = _init_l_Lean_Parser_commandParser_formatter___rarg___closed__2();
lean_mark_persistent(l_Lean_Parser_commandParser_formatter___rarg___closed__2);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__1 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__1);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__2 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__2);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__3 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__3);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__4 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__4);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__5 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__5);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__6 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__6);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__7 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__7();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__7);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__8 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__8();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__8);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__9 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__9();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__9);
l_Lean_Parser_antiquotNestedExpr_formatter___closed__10 = _init_l_Lean_Parser_antiquotNestedExpr_formatter___closed__10();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_formatter___closed__10);
l_Lean_Parser_antiquotExpr_formatter___closed__1 = _init_l_Lean_Parser_antiquotExpr_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_antiquotExpr_formatter___closed__1);
l_Lean_Parser_antiquotExpr_formatter___closed__2 = _init_l_Lean_Parser_antiquotExpr_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_antiquotExpr_formatter___closed__2);
l_Lean_Parser_mkAntiquot_formatter___closed__1 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__1);
l_Lean_Parser_mkAntiquot_formatter___closed__2 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__2);
l_Lean_Parser_mkAntiquot_formatter___closed__3 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__3);
l_Lean_Parser_mkAntiquot_formatter___closed__4 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__4);
l_Lean_Parser_mkAntiquot_formatter___closed__5 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__5);
l_Lean_Parser_mkAntiquot_formatter___closed__6 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__6);
l_Lean_Parser_mkAntiquot_formatter___closed__7 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__7();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__7);
l_Lean_Parser_mkAntiquot_formatter___closed__8 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__8();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__8);
l_Lean_Parser_mkAntiquot_formatter___closed__9 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__9();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__9);
l_Lean_Parser_mkAntiquot_formatter___closed__10 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__10();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__10);
l_Lean_Parser_mkAntiquot_formatter___closed__11 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__11();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__11);
l_Lean_Parser_mkAntiquot_formatter___closed__12 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__12();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__12);
l_Lean_Parser_mkAntiquot_formatter___closed__13 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__13();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__13);
l_Lean_Parser_mkAntiquot_formatter___closed__14 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__14();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__14);
l_Lean_Parser_mkAntiquot_formatter___closed__15 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__15();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__15);
l_Lean_Parser_mkAntiquot_formatter___closed__16 = _init_l_Lean_Parser_mkAntiquot_formatter___closed__16();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_formatter___closed__16);
l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1 = _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__1);
l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2 = _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__2);
l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3 = _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__3);
l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4 = _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__4);
l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5 = _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__5);
l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__6 = _init_l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__6();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr_parenthesizer___closed__6);
l_Lean_Parser_antiquotExpr_parenthesizer___closed__1 = _init_l_Lean_Parser_antiquotExpr_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_antiquotExpr_parenthesizer___closed__1);
l_Lean_Parser_antiquotExpr_parenthesizer___closed__2 = _init_l_Lean_Parser_antiquotExpr_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_antiquotExpr_parenthesizer___closed__2);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__1 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__1);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__2 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__2);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__3 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__3);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__4 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__4);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__5 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__5();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__5);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__6 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__6();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__6);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__7 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__7();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__7);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__8 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__8();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__8);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__9 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__9();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__9);
l_Lean_Parser_mkAntiquot_parenthesizer___closed__10 = _init_l_Lean_Parser_mkAntiquot_parenthesizer___closed__10();
lean_mark_persistent(l_Lean_Parser_mkAntiquot_parenthesizer___closed__10);
l_Lean_Parser_mkAntiquotSplice_formatter___closed__1 = _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_mkAntiquotSplice_formatter___closed__1);
l_Lean_Parser_mkAntiquotSplice_formatter___closed__2 = _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_mkAntiquotSplice_formatter___closed__2);
l_Lean_Parser_mkAntiquotSplice_formatter___closed__3 = _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_mkAntiquotSplice_formatter___closed__3);
l_Lean_Parser_mkAntiquotSplice_formatter___closed__4 = _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_mkAntiquotSplice_formatter___closed__4);
l_Lean_Parser_mkAntiquotSplice_formatter___closed__5 = _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_mkAntiquotSplice_formatter___closed__5);
l_Lean_Parser_mkAntiquotSplice_formatter___closed__6 = _init_l_Lean_Parser_mkAntiquotSplice_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_mkAntiquotSplice_formatter___closed__6);
l_Lean_Parser_sepByElemParser_formatter___closed__1 = _init_l_Lean_Parser_sepByElemParser_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_sepByElemParser_formatter___closed__1);
l_Lean_Parser_sepByElemParser_formatter___closed__2 = _init_l_Lean_Parser_sepByElemParser_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_sepByElemParser_formatter___closed__2);
l_Lean_Parser_sepByElemParser_formatter___closed__3 = _init_l_Lean_Parser_sepByElemParser_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_sepByElemParser_formatter___closed__3);
l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__1 = _init_l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__1);
l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__2 = _init_l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_mkAntiquotSplice_parenthesizer___closed__2);
l_Lean_Parser_optional_formatter___closed__1 = _init_l_Lean_Parser_optional_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_optional_formatter___closed__1);
l_Lean_Parser_optional_formatter___closed__2 = _init_l_Lean_Parser_optional_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_optional_formatter___closed__2);
l_Lean_Parser_optional_formatter___closed__3 = _init_l_Lean_Parser_optional_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_optional_formatter___closed__3);
l_Lean_Parser_optional_formatter___closed__4 = _init_l_Lean_Parser_optional_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_optional_formatter___closed__4);
l_Lean_Parser_optional_parenthesizer___closed__1 = _init_l_Lean_Parser_optional_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_optional_parenthesizer___closed__1);
l_Lean_Parser_many_formatter___closed__1 = _init_l_Lean_Parser_many_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_many_formatter___closed__1);
l_Lean_Parser_many_formatter___closed__2 = _init_l_Lean_Parser_many_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_many_formatter___closed__2);
l_Lean_Parser_many_formatter___closed__3 = _init_l_Lean_Parser_many_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_many_formatter___closed__3);
l_Lean_Parser_many_parenthesizer___closed__1 = _init_l_Lean_Parser_many_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_many_parenthesizer___closed__1);
l_Lean_Parser_ident_formatter___closed__1 = _init_l_Lean_Parser_ident_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_ident_formatter___closed__1);
l_Lean_Parser_ident_formatter___closed__2 = _init_l_Lean_Parser_ident_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_ident_formatter___closed__2);
l_Lean_Parser_ident_formatter___closed__3 = _init_l_Lean_Parser_ident_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_ident_formatter___closed__3);
l_Lean_Parser_ident_parenthesizer___closed__1 = _init_l_Lean_Parser_ident_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_ident_parenthesizer___closed__1);
l_Lean_Parser_ident = _init_l_Lean_Parser_ident();
lean_mark_persistent(l_Lean_Parser_ident);
l_Lean_Parser_rawIdent_formatter___closed__1 = _init_l_Lean_Parser_rawIdent_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_rawIdent_formatter___closed__1);
l_Lean_Parser_rawIdent_parenthesizer___closed__1 = _init_l_Lean_Parser_rawIdent_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_rawIdent_parenthesizer___closed__1);
l_Lean_Parser_rawIdent = _init_l_Lean_Parser_rawIdent();
lean_mark_persistent(l_Lean_Parser_rawIdent);
l_Lean_Parser_numLit_formatter___closed__1 = _init_l_Lean_Parser_numLit_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_numLit_formatter___closed__1);
l_Lean_Parser_numLit_formatter___closed__2 = _init_l_Lean_Parser_numLit_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_numLit_formatter___closed__2);
l_Lean_Parser_numLit_formatter___closed__3 = _init_l_Lean_Parser_numLit_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_numLit_formatter___closed__3);
l_Lean_Parser_numLit_formatter___closed__4 = _init_l_Lean_Parser_numLit_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_numLit_formatter___closed__4);
l_Lean_Parser_numLit_parenthesizer___closed__1 = _init_l_Lean_Parser_numLit_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_numLit_parenthesizer___closed__1);
l_Lean_Parser_numLit_parenthesizer___closed__2 = _init_l_Lean_Parser_numLit_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_numLit_parenthesizer___closed__2);
l_Lean_Parser_numLit = _init_l_Lean_Parser_numLit();
lean_mark_persistent(l_Lean_Parser_numLit);
l_Lean_Parser_scientificLit_formatter___closed__1 = _init_l_Lean_Parser_scientificLit_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_scientificLit_formatter___closed__1);
l_Lean_Parser_scientificLit_formatter___closed__2 = _init_l_Lean_Parser_scientificLit_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_scientificLit_formatter___closed__2);
l_Lean_Parser_scientificLit_formatter___closed__3 = _init_l_Lean_Parser_scientificLit_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_scientificLit_formatter___closed__3);
l_Lean_Parser_scientificLit_formatter___closed__4 = _init_l_Lean_Parser_scientificLit_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_scientificLit_formatter___closed__4);
l_Lean_Parser_scientificLit_parenthesizer___closed__1 = _init_l_Lean_Parser_scientificLit_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_scientificLit_parenthesizer___closed__1);
l_Lean_Parser_scientificLit_parenthesizer___closed__2 = _init_l_Lean_Parser_scientificLit_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_scientificLit_parenthesizer___closed__2);
l_Lean_Parser_scientificLit = _init_l_Lean_Parser_scientificLit();
lean_mark_persistent(l_Lean_Parser_scientificLit);
l_Lean_Parser_strLit_formatter___closed__1 = _init_l_Lean_Parser_strLit_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_strLit_formatter___closed__1);
l_Lean_Parser_strLit_formatter___closed__2 = _init_l_Lean_Parser_strLit_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_strLit_formatter___closed__2);
l_Lean_Parser_strLit_formatter___closed__3 = _init_l_Lean_Parser_strLit_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_strLit_formatter___closed__3);
l_Lean_Parser_strLit_formatter___closed__4 = _init_l_Lean_Parser_strLit_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_strLit_formatter___closed__4);
l_Lean_Parser_strLit_parenthesizer___closed__1 = _init_l_Lean_Parser_strLit_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_strLit_parenthesizer___closed__1);
l_Lean_Parser_strLit_parenthesizer___closed__2 = _init_l_Lean_Parser_strLit_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_strLit_parenthesizer___closed__2);
l_Lean_Parser_strLit = _init_l_Lean_Parser_strLit();
lean_mark_persistent(l_Lean_Parser_strLit);
l_Lean_Parser_charLit_formatter___closed__1 = _init_l_Lean_Parser_charLit_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_charLit_formatter___closed__1);
l_Lean_Parser_charLit_formatter___closed__2 = _init_l_Lean_Parser_charLit_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_charLit_formatter___closed__2);
l_Lean_Parser_charLit_formatter___closed__3 = _init_l_Lean_Parser_charLit_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_charLit_formatter___closed__3);
l_Lean_Parser_charLit_formatter___closed__4 = _init_l_Lean_Parser_charLit_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_charLit_formatter___closed__4);
l_Lean_Parser_charLit_parenthesizer___closed__1 = _init_l_Lean_Parser_charLit_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_charLit_parenthesizer___closed__1);
l_Lean_Parser_charLit_parenthesizer___closed__2 = _init_l_Lean_Parser_charLit_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_charLit_parenthesizer___closed__2);
l_Lean_Parser_charLit = _init_l_Lean_Parser_charLit();
lean_mark_persistent(l_Lean_Parser_charLit);
l_Lean_Parser_nameLit_formatter___closed__1 = _init_l_Lean_Parser_nameLit_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_nameLit_formatter___closed__1);
l_Lean_Parser_nameLit_formatter___closed__2 = _init_l_Lean_Parser_nameLit_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_nameLit_formatter___closed__2);
l_Lean_Parser_nameLit_formatter___closed__3 = _init_l_Lean_Parser_nameLit_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_nameLit_formatter___closed__3);
l_Lean_Parser_nameLit_formatter___closed__4 = _init_l_Lean_Parser_nameLit_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_nameLit_formatter___closed__4);
l_Lean_Parser_nameLit_parenthesizer___closed__1 = _init_l_Lean_Parser_nameLit_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_nameLit_parenthesizer___closed__1);
l_Lean_Parser_nameLit_parenthesizer___closed__2 = _init_l_Lean_Parser_nameLit_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_nameLit_parenthesizer___closed__2);
l_Lean_Parser_nameLit = _init_l_Lean_Parser_nameLit();
lean_mark_persistent(l_Lean_Parser_nameLit);
l_Lean_Parser_many1Indent_formatter___closed__1 = _init_l_Lean_Parser_many1Indent_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_many1Indent_formatter___closed__1);
l_Lean_Parser_many1Indent_parenthesizer___closed__1 = _init_l_Lean_Parser_many1Indent_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_many1Indent_parenthesizer___closed__1);
l_Lean_Parser_ppHardSpace = _init_l_Lean_Parser_ppHardSpace();
lean_mark_persistent(l_Lean_Parser_ppHardSpace);
l_Lean_Parser_ppSpace = _init_l_Lean_Parser_ppSpace();
lean_mark_persistent(l_Lean_Parser_ppSpace);
l_Lean_Parser_ppLine = _init_l_Lean_Parser_ppLine();
lean_mark_persistent(l_Lean_Parser_ppLine);
l_Lean_Parser_termRegister__parser__alias______ = _init_l_Lean_Parser_termRegister__parser__alias______();
lean_mark_persistent(l_Lean_Parser_termRegister__parser__alias______);
res = l_Lean_Parser_initFn____x40_Lean_Parser_Extra___hyg_488_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_initFn____x40_Lean_Parser_Extra___hyg_792_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_initFn____x40_Lean_Parser_Extra___hyg_929_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
