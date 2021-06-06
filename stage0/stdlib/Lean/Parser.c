// Lean compiler output
// Module: Lean.Parser
// Imports: Init Lean.Parser.Basic Lean.Parser.Level Lean.Parser.Term Lean.Parser.Tactic Lean.Parser.Command Lean.Parser.Module Lean.Parser.Syntax Lean.Parser.Do
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
lean_object* l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__10(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__4;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer(lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__2;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__1;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__1;
lean_object* l_Lean_Parser_checkLinebreakBefore(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__2;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__1;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_notFollowedByFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__3;
lean_object* l_Lean_Parser_many(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getBinaryAlias___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_lookahead(lean_object*);
lean_object* l_Lean_Parser_symbol_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_charLit;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__2;
extern lean_object* l_Lean_Parser_ident_formatter___closed__2;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__3;
extern lean_object* l_Lean_Parser_ident;
lean_object* l_id___rarg___boxed(lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__6;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__3;
extern lean_object* l_Lean_Parser_strLit_formatter___closed__2;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__4;
lean_object* l_Lean_Parser_withPosition(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_charLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1_formatter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__4;
lean_object* l_Lean_Parser_checkColGeFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_str_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__2;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Term_scientific_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__1;
lean_object* l_Lean_Parser_registerAliasCore___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__2;
lean_object* l_Lean_PrettyPrinter_Formatter_trailingNode_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_parenthesizerAttribute;
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__1;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__3;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_charLit_formatter___closed__2;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__4;
lean_object* lean_mk_antiquot_parenthesizer(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_charLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__4;
lean_object* l_Lean_Parser_checkNoWsBefore(lean_object*);
lean_object* l_Lean_Parser_scientificLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__10(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_ident_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter(lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter(lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer(lean_object*);
lean_object* l_Lean_Parser_atomic(lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter(lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter(lean_object*);
extern lean_object* l_Lean_Parser_nameLit;
lean_object* l_Lean_PrettyPrinter_Formatter_node_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer(lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__3;
lean_object* l_Lean_Parser_checkWsBefore(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_parserAliasesRef;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_combinatorFormatterAttribute;
extern lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__8;
extern lean_object* l_Lean_PrettyPrinter_formatterAttribute;
lean_object* l_Lean_Parser_interpolatedStr(lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__2;
lean_object* l_Lean_Parser_Term_char_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_scientificLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_incQuotDepth(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__1;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getConstAlias___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_pretty_printer_parenthesizer_interpret_parser_descr(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_numLit;
lean_object* lean_mk_antiquot_formatter(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getUnaryAlias___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__10;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__1;
extern lean_object* l_Lean_PrettyPrinter_Formatter_formatterAliasesRef;
lean_object* l_Lean_Parser_Term_ident_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_combinatorParenthesizerAttribute;
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_numLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__2;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__3;
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__2;
lean_object* l_Lean_Parser_sepBy_formatter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_strLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__3;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser___hyg_4_(lean_object*);
extern lean_object* l_Lean_Parser_numLit_formatter___closed__2;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__1;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__2;
extern lean_object* l_Lean_PrettyPrinter_Parenthesizer_parenthesizerAliasesRef;
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_pretty_printer_formatter_interpret_parser_descr(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_scientificLit_formatter___closed__2;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__3;
lean_object* l_Lean_PrettyPrinter_Formatter_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__4;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_orelse(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr_match__1(lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__5;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__2;
lean_object* l_Lean_Parser_Term_num_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_trailingNode_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__1;
lean_object* l_Lean_Parser_nonReservedSymbol_formatter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser___hyg_4____lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__3;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__1;
lean_object* l_Lean_Parser_ident_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkColGtFn___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_strLit;
lean_object* l_Lean_Parser_many1(lean_object*);
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__3;
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser___hyg_4____lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 1);
lean_inc(x_3);
lean_dec(x_2);
x_4 = lean_mk_string("element");
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_notFollowedByFn___boxed), 4, 2);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser___hyg_4_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = lean_box(0);
x_3 = lean_mk_string("ws");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("space before");
x_6 = l_Lean_Parser_checkWsBefore(x_5);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = l_Lean_Parser_parserAliasesRef;
x_9 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_4, x_7, x_1);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_mk_string("noWs");
x_12 = lean_name_mk_string(x_2, x_11);
x_13 = lean_mk_string("no space before");
x_14 = l_Lean_Parser_checkNoWsBefore(x_13);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_12, x_15, x_10);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_mk_string("linebreak");
x_19 = lean_name_mk_string(x_2, x_18);
x_20 = lean_mk_string("line break");
x_21 = l_Lean_Parser_checkLinebreakBefore(x_20);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_19, x_22, x_17);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = lean_mk_string("num");
x_26 = lean_name_mk_string(x_2, x_25);
x_27 = l_Lean_Parser_numLit;
x_28 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_26, x_28, x_24);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_mk_string("str");
x_32 = lean_name_mk_string(x_2, x_31);
x_33 = l_Lean_Parser_strLit;
x_34 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_32, x_34, x_30);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = lean_mk_string("char");
x_38 = lean_name_mk_string(x_2, x_37);
x_39 = l_Lean_Parser_charLit;
x_40 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_38, x_40, x_36);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_mk_string("name");
x_44 = lean_name_mk_string(x_2, x_43);
x_45 = l_Lean_Parser_nameLit;
x_46 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_46, 0, x_45);
x_47 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_44, x_46, x_42);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_48 = lean_ctor_get(x_47, 1);
lean_inc(x_48);
lean_dec(x_47);
x_49 = lean_mk_string("ident");
x_50 = lean_name_mk_string(x_2, x_49);
x_51 = l_Lean_Parser_ident;
x_52 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_50, x_52, x_48);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_54 = lean_ctor_get(x_53, 1);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_mk_string("colGt");
x_56 = lean_name_mk_string(x_2, x_55);
x_57 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
x_58 = lean_box(1);
lean_inc(x_57);
x_59 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_57);
lean_ctor_set(x_59, 2, x_58);
x_60 = lean_mk_string("checkColGt");
x_61 = lean_alloc_closure((void*)(l_Lean_Parser_checkColGtFn___boxed), 3, 1);
lean_closure_set(x_61, 0, x_60);
lean_inc(x_59);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_59);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_63, 0, x_62);
x_64 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_56, x_63, x_54);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = lean_mk_string("colGe");
x_67 = lean_name_mk_string(x_2, x_66);
x_68 = lean_mk_string("checkColGe");
x_69 = lean_alloc_closure((void*)(l_Lean_Parser_checkColGeFn___boxed), 3, 1);
lean_closure_set(x_69, 0, x_68);
lean_inc(x_59);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_59);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_71, 0, x_70);
x_72 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_67, x_71, x_65);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_73 = lean_ctor_get(x_72, 1);
lean_inc(x_73);
lean_dec(x_72);
x_74 = lean_mk_string("lookahead");
x_75 = lean_name_mk_string(x_2, x_74);
x_76 = lean_alloc_closure((void*)(l_Lean_Parser_lookahead), 1, 0);
x_77 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_77, 0, x_76);
x_78 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_75, x_77, x_73);
if (lean_obj_tag(x_78) == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_79 = lean_ctor_get(x_78, 1);
lean_inc(x_79);
lean_dec(x_78);
x_80 = lean_mk_string("atomic");
x_81 = lean_name_mk_string(x_2, x_80);
x_82 = lean_alloc_closure((void*)(l_Lean_Parser_atomic), 1, 0);
x_83 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_83, 0, x_82);
x_84 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_81, x_83, x_79);
if (lean_obj_tag(x_84) == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
lean_dec(x_84);
x_86 = lean_mk_string("many");
x_87 = lean_name_mk_string(x_2, x_86);
x_88 = lean_alloc_closure((void*)(l_Lean_Parser_many), 1, 0);
x_89 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_89, 0, x_88);
x_90 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_87, x_89, x_85);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_91 = lean_ctor_get(x_90, 1);
lean_inc(x_91);
lean_dec(x_90);
x_92 = lean_mk_string("many1");
x_93 = lean_name_mk_string(x_2, x_92);
x_94 = lean_alloc_closure((void*)(l_Lean_Parser_many1), 1, 0);
x_95 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_95, 0, x_94);
x_96 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_93, x_95, x_91);
if (lean_obj_tag(x_96) == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_97 = lean_ctor_get(x_96, 1);
lean_inc(x_97);
lean_dec(x_96);
x_98 = lean_mk_string("notFollowedBy");
x_99 = lean_name_mk_string(x_2, x_98);
x_100 = lean_alloc_closure((void*)(l_Lean_Parser_initFn____x40_Lean_Parser___hyg_4____lambda__1), 2, 1);
lean_closure_set(x_100, 0, x_59);
x_101 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_101, 0, x_100);
x_102 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_99, x_101, x_97);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_103 = lean_ctor_get(x_102, 1);
lean_inc(x_103);
lean_dec(x_102);
x_104 = lean_mk_string("optional");
x_105 = lean_name_mk_string(x_2, x_104);
x_106 = lean_alloc_closure((void*)(l_Lean_Parser_optional), 1, 0);
x_107 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_107, 0, x_106);
x_108 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_105, x_107, x_103);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_109 = lean_ctor_get(x_108, 1);
lean_inc(x_109);
lean_dec(x_108);
x_110 = lean_mk_string("withPosition");
x_111 = lean_name_mk_string(x_2, x_110);
x_112 = lean_alloc_closure((void*)(l_Lean_Parser_withPosition), 1, 0);
x_113 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_113, 0, x_112);
x_114 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_111, x_113, x_109);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_115 = lean_ctor_get(x_114, 1);
lean_inc(x_115);
lean_dec(x_114);
x_116 = lean_mk_string("interpolatedStr");
x_117 = lean_name_mk_string(x_2, x_116);
x_118 = lean_alloc_closure((void*)(l_Lean_Parser_interpolatedStr), 1, 0);
x_119 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_119, 0, x_118);
x_120 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_117, x_119, x_115);
if (lean_obj_tag(x_120) == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_121 = lean_ctor_get(x_120, 1);
lean_inc(x_121);
lean_dec(x_120);
x_122 = lean_mk_string("orelse");
x_123 = lean_name_mk_string(x_2, x_122);
x_124 = lean_alloc_closure((void*)(l_Lean_Parser_orelse), 2, 0);
x_125 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_125, 0, x_124);
x_126 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_123, x_125, x_121);
if (lean_obj_tag(x_126) == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_127 = lean_ctor_get(x_126, 1);
lean_inc(x_127);
lean_dec(x_126);
x_128 = lean_mk_string("andthen");
x_129 = lean_name_mk_string(x_2, x_128);
x_130 = lean_alloc_closure((void*)(l_Lean_Parser_andthen), 2, 0);
x_131 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_131, 0, x_130);
x_132 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_129, x_131, x_127);
if (lean_obj_tag(x_132) == 0)
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_133 = lean_ctor_get(x_132, 1);
lean_inc(x_133);
lean_dec(x_132);
x_134 = lean_mk_string("incQuotDepth");
x_135 = lean_name_mk_string(x_2, x_134);
x_136 = lean_alloc_closure((void*)(l_Lean_Parser_incQuotDepth), 1, 0);
x_137 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_137, 0, x_136);
x_138 = l_Lean_Parser_registerAliasCore___rarg(x_8, x_135, x_137, x_133);
return x_138;
}
else
{
uint8_t x_139; 
x_139 = !lean_is_exclusive(x_132);
if (x_139 == 0)
{
return x_132;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_140 = lean_ctor_get(x_132, 0);
x_141 = lean_ctor_get(x_132, 1);
lean_inc(x_141);
lean_inc(x_140);
lean_dec(x_132);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_140);
lean_ctor_set(x_142, 1, x_141);
return x_142;
}
}
}
else
{
uint8_t x_143; 
x_143 = !lean_is_exclusive(x_126);
if (x_143 == 0)
{
return x_126;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_126, 0);
x_145 = lean_ctor_get(x_126, 1);
lean_inc(x_145);
lean_inc(x_144);
lean_dec(x_126);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
return x_146;
}
}
}
else
{
uint8_t x_147; 
x_147 = !lean_is_exclusive(x_120);
if (x_147 == 0)
{
return x_120;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_120, 0);
x_149 = lean_ctor_get(x_120, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_120);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
}
else
{
uint8_t x_151; 
x_151 = !lean_is_exclusive(x_114);
if (x_151 == 0)
{
return x_114;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_152 = lean_ctor_get(x_114, 0);
x_153 = lean_ctor_get(x_114, 1);
lean_inc(x_153);
lean_inc(x_152);
lean_dec(x_114);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
return x_154;
}
}
}
else
{
uint8_t x_155; 
x_155 = !lean_is_exclusive(x_108);
if (x_155 == 0)
{
return x_108;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_108, 0);
x_157 = lean_ctor_get(x_108, 1);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_108);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
return x_158;
}
}
}
else
{
uint8_t x_159; 
x_159 = !lean_is_exclusive(x_102);
if (x_159 == 0)
{
return x_102;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_102, 0);
x_161 = lean_ctor_get(x_102, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_102);
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
lean_dec(x_59);
x_163 = !lean_is_exclusive(x_96);
if (x_163 == 0)
{
return x_96;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_164 = lean_ctor_get(x_96, 0);
x_165 = lean_ctor_get(x_96, 1);
lean_inc(x_165);
lean_inc(x_164);
lean_dec(x_96);
x_166 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
return x_166;
}
}
}
else
{
uint8_t x_167; 
lean_dec(x_59);
x_167 = !lean_is_exclusive(x_90);
if (x_167 == 0)
{
return x_90;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_90, 0);
x_169 = lean_ctor_get(x_90, 1);
lean_inc(x_169);
lean_inc(x_168);
lean_dec(x_90);
x_170 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
return x_170;
}
}
}
else
{
uint8_t x_171; 
lean_dec(x_59);
x_171 = !lean_is_exclusive(x_84);
if (x_171 == 0)
{
return x_84;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_172 = lean_ctor_get(x_84, 0);
x_173 = lean_ctor_get(x_84, 1);
lean_inc(x_173);
lean_inc(x_172);
lean_dec(x_84);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_172);
lean_ctor_set(x_174, 1, x_173);
return x_174;
}
}
}
else
{
uint8_t x_175; 
lean_dec(x_59);
x_175 = !lean_is_exclusive(x_78);
if (x_175 == 0)
{
return x_78;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_176 = lean_ctor_get(x_78, 0);
x_177 = lean_ctor_get(x_78, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_78);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_176);
lean_ctor_set(x_178, 1, x_177);
return x_178;
}
}
}
else
{
uint8_t x_179; 
lean_dec(x_59);
x_179 = !lean_is_exclusive(x_72);
if (x_179 == 0)
{
return x_72;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_180 = lean_ctor_get(x_72, 0);
x_181 = lean_ctor_get(x_72, 1);
lean_inc(x_181);
lean_inc(x_180);
lean_dec(x_72);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_180);
lean_ctor_set(x_182, 1, x_181);
return x_182;
}
}
}
else
{
uint8_t x_183; 
lean_dec(x_59);
x_183 = !lean_is_exclusive(x_64);
if (x_183 == 0)
{
return x_64;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_184 = lean_ctor_get(x_64, 0);
x_185 = lean_ctor_get(x_64, 1);
lean_inc(x_185);
lean_inc(x_184);
lean_dec(x_64);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_184);
lean_ctor_set(x_186, 1, x_185);
return x_186;
}
}
}
else
{
uint8_t x_187; 
x_187 = !lean_is_exclusive(x_53);
if (x_187 == 0)
{
return x_53;
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_188 = lean_ctor_get(x_53, 0);
x_189 = lean_ctor_get(x_53, 1);
lean_inc(x_189);
lean_inc(x_188);
lean_dec(x_53);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_188);
lean_ctor_set(x_190, 1, x_189);
return x_190;
}
}
}
else
{
uint8_t x_191; 
x_191 = !lean_is_exclusive(x_47);
if (x_191 == 0)
{
return x_47;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_192 = lean_ctor_get(x_47, 0);
x_193 = lean_ctor_get(x_47, 1);
lean_inc(x_193);
lean_inc(x_192);
lean_dec(x_47);
x_194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_194, 0, x_192);
lean_ctor_set(x_194, 1, x_193);
return x_194;
}
}
}
else
{
uint8_t x_195; 
x_195 = !lean_is_exclusive(x_41);
if (x_195 == 0)
{
return x_41;
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_196 = lean_ctor_get(x_41, 0);
x_197 = lean_ctor_get(x_41, 1);
lean_inc(x_197);
lean_inc(x_196);
lean_dec(x_41);
x_198 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_198, 0, x_196);
lean_ctor_set(x_198, 1, x_197);
return x_198;
}
}
}
else
{
uint8_t x_199; 
x_199 = !lean_is_exclusive(x_35);
if (x_199 == 0)
{
return x_35;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_200 = lean_ctor_get(x_35, 0);
x_201 = lean_ctor_get(x_35, 1);
lean_inc(x_201);
lean_inc(x_200);
lean_dec(x_35);
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_200);
lean_ctor_set(x_202, 1, x_201);
return x_202;
}
}
}
else
{
uint8_t x_203; 
x_203 = !lean_is_exclusive(x_29);
if (x_203 == 0)
{
return x_29;
}
else
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; 
x_204 = lean_ctor_get(x_29, 0);
x_205 = lean_ctor_get(x_29, 1);
lean_inc(x_205);
lean_inc(x_204);
lean_dec(x_29);
x_206 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_206, 0, x_204);
lean_ctor_set(x_206, 1, x_205);
return x_206;
}
}
}
else
{
uint8_t x_207; 
x_207 = !lean_is_exclusive(x_23);
if (x_207 == 0)
{
return x_23;
}
else
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_208 = lean_ctor_get(x_23, 0);
x_209 = lean_ctor_get(x_23, 1);
lean_inc(x_209);
lean_inc(x_208);
lean_dec(x_23);
x_210 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_210, 0, x_208);
lean_ctor_set(x_210, 1, x_209);
return x_210;
}
}
}
else
{
uint8_t x_211; 
x_211 = !lean_is_exclusive(x_16);
if (x_211 == 0)
{
return x_16;
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_212 = lean_ctor_get(x_16, 0);
x_213 = lean_ctor_get(x_16, 1);
lean_inc(x_213);
lean_inc(x_212);
lean_dec(x_16);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_212);
lean_ctor_set(x_214, 1, x_213);
return x_214;
}
}
}
else
{
uint8_t x_215; 
x_215 = !lean_is_exclusive(x_9);
if (x_215 == 0)
{
return x_9;
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_216 = lean_ctor_get(x_9, 0);
x_217 = lean_ctor_get(x_9, 1);
lean_inc(x_217);
lean_inc(x_216);
lean_dec(x_9);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_216);
lean_ctor_set(x_218, 1, x_217);
return x_218;
}
}
}
}
lean_object* lean_mk_antiquot_parenthesizer(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Parser_mkAntiquot_parenthesizer(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_mkAntiquot_parenthesizer___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = lean_mk_antiquot_parenthesizer(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_Term_ident_parenthesizer(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_ident_formatter___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__8;
x_2 = l_Lean_Parser_ident_formatter___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__2;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__1;
x_4 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__3;
x_5 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__4;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_Term_num_parenthesizer(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_numLit_formatter___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__8;
x_2 = l_Lean_Parser_numLit_formatter___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__2;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__1;
x_4 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__3;
x_5 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__4;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_Term_scientific_parenthesizer(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_scientificLit_formatter___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__8;
x_2 = l_Lean_Parser_scientificLit_formatter___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__2;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__1;
x_4 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__3;
x_5 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__4;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_Term_char_parenthesizer(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_charLit_formatter___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__8;
x_2 = l_Lean_Parser_charLit_formatter___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__2;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__1;
x_4 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__3;
x_5 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__4;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Parser_Term_str_parenthesizer(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_strLit_formatter___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__8;
x_2 = l_Lean_Parser_strLit_formatter___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__2;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__1;
x_4 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__3;
x_5 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__4;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_13);
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
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_1(x_2, x_14);
return x_15;
}
case 1:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_13);
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
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_1, 1);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_apply_2(x_3, x_16, x_17);
return x_18;
}
case 2:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_13);
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
x_19 = lean_ctor_get(x_1, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 2);
lean_inc(x_21);
lean_dec(x_1);
x_22 = lean_apply_3(x_4, x_19, x_20, x_21);
return x_22;
}
case 3:
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_13);
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
x_23 = lean_ctor_get(x_1, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_1, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_1, 2);
lean_inc(x_25);
lean_dec(x_1);
x_26 = lean_apply_3(x_5, x_23, x_24, x_25);
return x_26;
}
case 4:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_13);
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
x_27 = lean_ctor_get(x_1, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_1, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 2);
lean_inc(x_29);
x_30 = lean_ctor_get(x_1, 3);
lean_inc(x_30);
lean_dec(x_1);
x_31 = lean_apply_4(x_9, x_27, x_28, x_29, x_30);
return x_31;
}
case 5:
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_13);
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
x_32 = lean_ctor_get(x_1, 0);
lean_inc(x_32);
lean_dec(x_1);
x_33 = lean_apply_1(x_10, x_32);
return x_33;
}
case 6:
{
lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_13);
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
x_34 = lean_ctor_get(x_1, 0);
lean_inc(x_34);
x_35 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_36 = lean_box(x_35);
x_37 = lean_apply_2(x_11, x_34, x_36);
return x_37;
}
case 7:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
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
lean_dec(x_2);
x_38 = lean_ctor_get(x_1, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_1, 1);
lean_inc(x_39);
lean_dec(x_1);
x_40 = lean_apply_2(x_13, x_38, x_39);
return x_40;
}
case 8:
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_13);
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
x_41 = lean_ctor_get(x_1, 0);
lean_inc(x_41);
lean_dec(x_1);
x_42 = lean_apply_1(x_12, x_41);
return x_42;
}
case 9:
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_13);
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
x_43 = lean_ctor_get(x_1, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_1, 1);
lean_inc(x_44);
x_45 = lean_ctor_get(x_1, 2);
lean_inc(x_45);
lean_dec(x_1);
x_46 = lean_apply_3(x_6, x_43, x_44, x_45);
return x_46;
}
case 10:
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_52; 
lean_dec(x_13);
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
x_47 = lean_ctor_get(x_1, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_1, 1);
lean_inc(x_48);
x_49 = lean_ctor_get(x_1, 2);
lean_inc(x_49);
x_50 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_51 = lean_box(x_50);
x_52 = lean_apply_4(x_7, x_47, x_48, x_49, x_51);
return x_52;
}
default: 
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_13);
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
x_53 = lean_ctor_get(x_1, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_1, 1);
lean_inc(x_54);
x_55 = lean_ctor_get(x_1, 2);
lean_inc(x_55);
x_56 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_57 = lean_box(x_56);
x_58 = lean_apply_4(x_8, x_53, x_54, x_55, x_57);
return x_58;
}
}
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr_match__1___rarg), 13, 0);
return x_2;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_apply_6(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Parenthesizer_trailingNode_parenthesizer(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Parser_symbol_parenthesizer(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__6(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Parser_nonReservedSymbol_parenthesizer(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Parenthesizer_node_parenthesizer(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__9(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Parser_sepBy_parenthesizer(x_3, x_1, x_4, x_2, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__10(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Parser_sepBy1_parenthesizer(x_3, x_1, x_4, x_2, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* lean_pretty_printer_parenthesizer_interpret_parser_descr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_st_ref_get(x_3, x_4);
lean_dec(x_3);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_2, 3);
lean_inc(x_8);
lean_dec(x_2);
x_9 = l_Lean_PrettyPrinter_Parenthesizer_parenthesizerAliasesRef;
x_10 = l_Lean_Parser_getConstAlias___rarg(x_9, x_5, x_7);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_8);
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
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_io_error_to_string(x_16);
x_18 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_8);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_10, 0, x_20);
return x_10;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
x_23 = lean_io_error_to_string(x_21);
x_24 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_8);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_22);
return x_27;
}
}
}
case 1:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_29);
lean_dec(x_1);
x_30 = lean_st_ref_get(x_3, x_4);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_ctor_get(x_2, 3);
lean_inc(x_32);
x_33 = l_Lean_PrettyPrinter_Parenthesizer_parenthesizerAliasesRef;
x_34 = l_Lean_Parser_getUnaryAlias___rarg(x_33, x_28, x_31);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_32);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_pretty_printer_parenthesizer_interpret_parser_descr(x_29, x_2, x_3, x_36);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__1), 7, 2);
lean_closure_set(x_40, 0, x_35);
lean_closure_set(x_40, 1, x_39);
lean_ctor_set(x_37, 0, x_40);
return x_37;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_37, 0);
x_42 = lean_ctor_get(x_37, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_37);
x_43 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__1), 7, 2);
lean_closure_set(x_43, 0, x_35);
lean_closure_set(x_43, 1, x_41);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_dec(x_35);
x_45 = !lean_is_exclusive(x_37);
if (x_45 == 0)
{
return x_37;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_37, 0);
x_47 = lean_ctor_get(x_37, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_37);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_29);
lean_dec(x_3);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_34);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_50 = lean_ctor_get(x_34, 0);
x_51 = lean_io_error_to_string(x_50);
x_52 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_53, 0, x_52);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_32);
lean_ctor_set(x_54, 1, x_53);
lean_ctor_set(x_34, 0, x_54);
return x_34;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_55 = lean_ctor_get(x_34, 0);
x_56 = lean_ctor_get(x_34, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_34);
x_57 = lean_io_error_to_string(x_55);
x_58 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_59, 0, x_58);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_32);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_56);
return x_61;
}
}
}
case 2:
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_62 = lean_ctor_get(x_1, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_1, 1);
lean_inc(x_63);
x_64 = lean_ctor_get(x_1, 2);
lean_inc(x_64);
lean_dec(x_1);
x_65 = lean_st_ref_get(x_3, x_4);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
lean_dec(x_65);
x_67 = lean_ctor_get(x_2, 3);
lean_inc(x_67);
x_68 = l_Lean_PrettyPrinter_Parenthesizer_parenthesizerAliasesRef;
x_69 = l_Lean_Parser_getBinaryAlias___rarg(x_68, x_62, x_66);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_67);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
lean_inc(x_3);
lean_inc(x_2);
x_72 = lean_pretty_printer_parenthesizer_interpret_parser_descr(x_63, x_2, x_3, x_71);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_pretty_printer_parenthesizer_interpret_parser_descr(x_64, x_2, x_3, x_74);
if (lean_obj_tag(x_75) == 0)
{
uint8_t x_76; 
x_76 = !lean_is_exclusive(x_75);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_75, 0);
x_78 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__2), 8, 3);
lean_closure_set(x_78, 0, x_70);
lean_closure_set(x_78, 1, x_73);
lean_closure_set(x_78, 2, x_77);
lean_ctor_set(x_75, 0, x_78);
return x_75;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_79 = lean_ctor_get(x_75, 0);
x_80 = lean_ctor_get(x_75, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_75);
x_81 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__2), 8, 3);
lean_closure_set(x_81, 0, x_70);
lean_closure_set(x_81, 1, x_73);
lean_closure_set(x_81, 2, x_79);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
}
else
{
uint8_t x_83; 
lean_dec(x_73);
lean_dec(x_70);
x_83 = !lean_is_exclusive(x_75);
if (x_83 == 0)
{
return x_75;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_75, 0);
x_85 = lean_ctor_get(x_75, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_75);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_70);
lean_dec(x_64);
lean_dec(x_3);
lean_dec(x_2);
x_87 = !lean_is_exclusive(x_72);
if (x_87 == 0)
{
return x_72;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_72, 0);
x_89 = lean_ctor_get(x_72, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_72);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_3);
lean_dec(x_2);
x_91 = !lean_is_exclusive(x_69);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_92 = lean_ctor_get(x_69, 0);
x_93 = lean_io_error_to_string(x_92);
x_94 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_94, 0, x_93);
x_95 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_95, 0, x_94);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_67);
lean_ctor_set(x_96, 1, x_95);
lean_ctor_set(x_69, 0, x_96);
return x_69;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_97 = lean_ctor_get(x_69, 0);
x_98 = lean_ctor_get(x_69, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_69);
x_99 = lean_io_error_to_string(x_97);
x_100 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_100, 0, x_99);
x_101 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_101, 0, x_100);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_67);
lean_ctor_set(x_102, 1, x_101);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_98);
return x_103;
}
}
}
case 3:
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_104 = lean_ctor_get(x_1, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_1, 1);
lean_inc(x_105);
x_106 = lean_ctor_get(x_1, 2);
lean_inc(x_106);
lean_dec(x_1);
x_107 = lean_pretty_printer_parenthesizer_interpret_parser_descr(x_106, x_2, x_3, x_4);
if (lean_obj_tag(x_107) == 0)
{
uint8_t x_108; 
x_108 = !lean_is_exclusive(x_107);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_107, 0);
x_110 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__3___boxed), 8, 3);
lean_closure_set(x_110, 0, x_104);
lean_closure_set(x_110, 1, x_105);
lean_closure_set(x_110, 2, x_109);
lean_ctor_set(x_107, 0, x_110);
return x_107;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_111 = lean_ctor_get(x_107, 0);
x_112 = lean_ctor_get(x_107, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_107);
x_113 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__3___boxed), 8, 3);
lean_closure_set(x_113, 0, x_104);
lean_closure_set(x_113, 1, x_105);
lean_closure_set(x_113, 2, x_111);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_112);
return x_114;
}
}
else
{
uint8_t x_115; 
lean_dec(x_105);
lean_dec(x_104);
x_115 = !lean_is_exclusive(x_107);
if (x_115 == 0)
{
return x_107;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_107, 0);
x_117 = lean_ctor_get(x_107, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_107);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
}
case 4:
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_119 = lean_ctor_get(x_1, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_1, 1);
lean_inc(x_120);
x_121 = lean_ctor_get(x_1, 2);
lean_inc(x_121);
x_122 = lean_ctor_get(x_1, 3);
lean_inc(x_122);
lean_dec(x_1);
x_123 = lean_pretty_printer_parenthesizer_interpret_parser_descr(x_122, x_2, x_3, x_4);
if (lean_obj_tag(x_123) == 0)
{
uint8_t x_124; 
x_124 = !lean_is_exclusive(x_123);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; 
x_125 = lean_ctor_get(x_123, 0);
x_126 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__4___boxed), 9, 4);
lean_closure_set(x_126, 0, x_119);
lean_closure_set(x_126, 1, x_120);
lean_closure_set(x_126, 2, x_121);
lean_closure_set(x_126, 3, x_125);
lean_ctor_set(x_123, 0, x_126);
return x_123;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_127 = lean_ctor_get(x_123, 0);
x_128 = lean_ctor_get(x_123, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_123);
x_129 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__4___boxed), 9, 4);
lean_closure_set(x_129, 0, x_119);
lean_closure_set(x_129, 1, x_120);
lean_closure_set(x_129, 2, x_121);
lean_closure_set(x_129, 3, x_127);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_128);
return x_130;
}
}
else
{
uint8_t x_131; 
lean_dec(x_121);
lean_dec(x_120);
lean_dec(x_119);
x_131 = !lean_is_exclusive(x_123);
if (x_131 == 0)
{
return x_123;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_123, 0);
x_133 = lean_ctor_get(x_123, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_123);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
return x_134;
}
}
}
case 5:
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_3);
lean_dec(x_2);
x_135 = lean_ctor_get(x_1, 0);
lean_inc(x_135);
lean_dec(x_1);
x_136 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__5), 6, 1);
lean_closure_set(x_136, 0, x_135);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_4);
return x_137;
}
case 6:
{
lean_object* x_138; uint8_t x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_3);
lean_dec(x_2);
x_138 = lean_ctor_get(x_1, 0);
lean_inc(x_138);
x_139 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_140 = lean_box(x_139);
x_141 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__6___boxed), 7, 2);
lean_closure_set(x_141, 0, x_138);
lean_closure_set(x_141, 1, x_140);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_4);
return x_142;
}
case 7:
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_3);
lean_dec(x_2);
x_143 = lean_ctor_get(x_1, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_1, 1);
lean_inc(x_144);
lean_dec(x_1);
x_145 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__7), 7, 2);
lean_closure_set(x_145, 0, x_143);
lean_closure_set(x_145, 1, x_144);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_4);
return x_146;
}
case 8:
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_147 = lean_ctor_get(x_1, 0);
lean_inc(x_147);
lean_dec(x_1);
x_148 = l_Lean_PrettyPrinter_combinatorParenthesizerAttribute;
x_149 = l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___rarg(x_148, x_147, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_149;
}
case 9:
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_150 = lean_ctor_get(x_1, 1);
lean_inc(x_150);
x_151 = lean_ctor_get(x_1, 2);
lean_inc(x_151);
lean_dec(x_1);
x_152 = lean_pretty_printer_parenthesizer_interpret_parser_descr(x_151, x_2, x_3, x_4);
if (lean_obj_tag(x_152) == 0)
{
uint8_t x_153; 
x_153 = !lean_is_exclusive(x_152);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; 
x_154 = lean_ctor_get(x_152, 0);
x_155 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__8), 7, 2);
lean_closure_set(x_155, 0, x_150);
lean_closure_set(x_155, 1, x_154);
lean_ctor_set(x_152, 0, x_155);
return x_152;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_156 = lean_ctor_get(x_152, 0);
x_157 = lean_ctor_get(x_152, 1);
lean_inc(x_157);
lean_inc(x_156);
lean_dec(x_152);
x_158 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__8), 7, 2);
lean_closure_set(x_158, 0, x_150);
lean_closure_set(x_158, 1, x_156);
x_159 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_157);
return x_159;
}
}
else
{
uint8_t x_160; 
lean_dec(x_150);
x_160 = !lean_is_exclusive(x_152);
if (x_160 == 0)
{
return x_152;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_161 = lean_ctor_get(x_152, 0);
x_162 = lean_ctor_get(x_152, 1);
lean_inc(x_162);
lean_inc(x_161);
lean_dec(x_152);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_161);
lean_ctor_set(x_163, 1, x_162);
return x_163;
}
}
}
case 10:
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; uint8_t x_167; lean_object* x_168; 
x_164 = lean_ctor_get(x_1, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_1, 1);
lean_inc(x_165);
x_166 = lean_ctor_get(x_1, 2);
lean_inc(x_166);
x_167 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
lean_dec(x_1);
lean_inc(x_3);
lean_inc(x_2);
x_168 = lean_pretty_printer_parenthesizer_interpret_parser_descr(x_164, x_2, x_3, x_4);
if (lean_obj_tag(x_168) == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_169 = lean_ctor_get(x_168, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_168, 1);
lean_inc(x_170);
lean_dec(x_168);
x_171 = lean_pretty_printer_parenthesizer_interpret_parser_descr(x_166, x_2, x_3, x_170);
if (lean_obj_tag(x_171) == 0)
{
uint8_t x_172; 
x_172 = !lean_is_exclusive(x_171);
if (x_172 == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_173 = lean_ctor_get(x_171, 0);
x_174 = lean_box(x_167);
x_175 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__9___boxed), 9, 4);
lean_closure_set(x_175, 0, x_165);
lean_closure_set(x_175, 1, x_174);
lean_closure_set(x_175, 2, x_169);
lean_closure_set(x_175, 3, x_173);
lean_ctor_set(x_171, 0, x_175);
return x_171;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_176 = lean_ctor_get(x_171, 0);
x_177 = lean_ctor_get(x_171, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_171);
x_178 = lean_box(x_167);
x_179 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__9___boxed), 9, 4);
lean_closure_set(x_179, 0, x_165);
lean_closure_set(x_179, 1, x_178);
lean_closure_set(x_179, 2, x_169);
lean_closure_set(x_179, 3, x_176);
x_180 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_180, 0, x_179);
lean_ctor_set(x_180, 1, x_177);
return x_180;
}
}
else
{
uint8_t x_181; 
lean_dec(x_169);
lean_dec(x_165);
x_181 = !lean_is_exclusive(x_171);
if (x_181 == 0)
{
return x_171;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_171, 0);
x_183 = lean_ctor_get(x_171, 1);
lean_inc(x_183);
lean_inc(x_182);
lean_dec(x_171);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_182);
lean_ctor_set(x_184, 1, x_183);
return x_184;
}
}
}
else
{
uint8_t x_185; 
lean_dec(x_166);
lean_dec(x_165);
lean_dec(x_3);
lean_dec(x_2);
x_185 = !lean_is_exclusive(x_168);
if (x_185 == 0)
{
return x_168;
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_186 = lean_ctor_get(x_168, 0);
x_187 = lean_ctor_get(x_168, 1);
lean_inc(x_187);
lean_inc(x_186);
lean_dec(x_168);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_186);
lean_ctor_set(x_188, 1, x_187);
return x_188;
}
}
}
default: 
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; uint8_t x_192; lean_object* x_193; 
x_189 = lean_ctor_get(x_1, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_1, 1);
lean_inc(x_190);
x_191 = lean_ctor_get(x_1, 2);
lean_inc(x_191);
x_192 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
lean_dec(x_1);
lean_inc(x_3);
lean_inc(x_2);
x_193 = lean_pretty_printer_parenthesizer_interpret_parser_descr(x_189, x_2, x_3, x_4);
if (lean_obj_tag(x_193) == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_194 = lean_ctor_get(x_193, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_193, 1);
lean_inc(x_195);
lean_dec(x_193);
x_196 = lean_pretty_printer_parenthesizer_interpret_parser_descr(x_191, x_2, x_3, x_195);
if (lean_obj_tag(x_196) == 0)
{
uint8_t x_197; 
x_197 = !lean_is_exclusive(x_196);
if (x_197 == 0)
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_198 = lean_ctor_get(x_196, 0);
x_199 = lean_box(x_192);
x_200 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__10___boxed), 9, 4);
lean_closure_set(x_200, 0, x_190);
lean_closure_set(x_200, 1, x_199);
lean_closure_set(x_200, 2, x_194);
lean_closure_set(x_200, 3, x_198);
lean_ctor_set(x_196, 0, x_200);
return x_196;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_201 = lean_ctor_get(x_196, 0);
x_202 = lean_ctor_get(x_196, 1);
lean_inc(x_202);
lean_inc(x_201);
lean_dec(x_196);
x_203 = lean_box(x_192);
x_204 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__10___boxed), 9, 4);
lean_closure_set(x_204, 0, x_190);
lean_closure_set(x_204, 1, x_203);
lean_closure_set(x_204, 2, x_194);
lean_closure_set(x_204, 3, x_201);
x_205 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_205, 0, x_204);
lean_ctor_set(x_205, 1, x_202);
return x_205;
}
}
else
{
uint8_t x_206; 
lean_dec(x_194);
lean_dec(x_190);
x_206 = !lean_is_exclusive(x_196);
if (x_206 == 0)
{
return x_196;
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_207 = lean_ctor_get(x_196, 0);
x_208 = lean_ctor_get(x_196, 1);
lean_inc(x_208);
lean_inc(x_207);
lean_dec(x_196);
x_209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_209, 0, x_207);
lean_ctor_set(x_209, 1, x_208);
return x_209;
}
}
}
else
{
uint8_t x_210; 
lean_dec(x_191);
lean_dec(x_190);
lean_dec(x_3);
lean_dec(x_2);
x_210 = !lean_is_exclusive(x_193);
if (x_210 == 0)
{
return x_193;
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_211 = lean_ctor_get(x_193, 0);
x_212 = lean_ctor_get(x_193, 1);
lean_inc(x_212);
lean_inc(x_211);
lean_dec(x_193);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_211);
lean_ctor_set(x_213, 1, x_212);
return x_213;
}
}
}
}
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__6(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__9(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_PrettyPrinter_Parenthesizer_interpretParserDescr___elambda__10(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* lean_mk_antiquot_formatter(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Parser_mkAntiquot_formatter(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_mkAntiquot_formatter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
lean_dec(x_3);
x_10 = lean_mk_antiquot_formatter(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_ident_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed), 4, 0);
x_7 = lean_alloc_closure((void*)(l_Lean_Parser_ident_formatter), 5, 0);
x_8 = l_Lean_PrettyPrinter_Formatter_andthen_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Formatter");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__6;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__2;
x_2 = l_Lean_Parser_ident_formatter___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__3;
x_2 = l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_ident_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__1;
x_4 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__4;
x_5 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__5;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_numLit_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed), 4, 0);
x_7 = lean_alloc_closure((void*)(l_Lean_Parser_numLit_formatter), 5, 0);
x_8 = l_Lean_PrettyPrinter_Formatter_andthen_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__2;
x_2 = l_Lean_Parser_numLit_formatter___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__1;
x_2 = l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_numLit_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__1;
x_4 = l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__2;
x_5 = l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_scientificLit_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed), 4, 0);
x_7 = lean_alloc_closure((void*)(l_Lean_Parser_scientificLit_formatter), 5, 0);
x_8 = l_Lean_PrettyPrinter_Formatter_andthen_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__2;
x_2 = l_Lean_Parser_scientificLit_formatter___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__1;
x_2 = l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_scientificLit_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__1;
x_4 = l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__2;
x_5 = l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_charLit_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed), 4, 0);
x_7 = lean_alloc_closure((void*)(l_Lean_Parser_charLit_formatter), 5, 0);
x_8 = l_Lean_PrettyPrinter_Formatter_andthen_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__2;
x_2 = l_Lean_Parser_charLit_formatter___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__1;
x_2 = l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_charLit_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__1;
x_4 = l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__2;
x_5 = l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_strLit_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed), 4, 0);
x_7 = lean_alloc_closure((void*)(l_Lean_Parser_strLit_formatter), 5, 0);
x_8 = l_Lean_PrettyPrinter_Formatter_andthen_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__2;
x_2 = l_Lean_Parser_strLit_formatter___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__1;
x_2 = l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_strLit_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__1;
x_4 = l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__2;
x_5 = l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_apply_6(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lean_apply_7(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Formatter_node_formatter(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Formatter_trailingNode_formatter(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Parser_symbol_formatter(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = 0;
x_8 = l_Lean_Parser_nonReservedSymbol_formatter(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PrettyPrinter_Formatter_node_formatter(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__9(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Parser_sepBy_formatter(x_3, x_1, x_4, x_2, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__10(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Parser_sepBy1_formatter(x_3, x_1, x_4, x_2, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* lean_pretty_printer_formatter_interpret_parser_descr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_st_ref_get(x_3, x_4);
lean_dec(x_3);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_2, 3);
lean_inc(x_8);
lean_dec(x_2);
x_9 = l_Lean_PrettyPrinter_Formatter_formatterAliasesRef;
x_10 = l_Lean_Parser_getConstAlias___rarg(x_9, x_5, x_7);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_8);
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
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_io_error_to_string(x_16);
x_18 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_8);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_10, 0, x_20);
return x_10;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
x_23 = lean_io_error_to_string(x_21);
x_24 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_8);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_22);
return x_27;
}
}
}
case 1:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_29);
lean_dec(x_1);
x_30 = lean_st_ref_get(x_3, x_4);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_ctor_get(x_2, 3);
lean_inc(x_32);
x_33 = l_Lean_PrettyPrinter_Formatter_formatterAliasesRef;
x_34 = l_Lean_Parser_getUnaryAlias___rarg(x_33, x_28, x_31);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_32);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_pretty_printer_formatter_interpret_parser_descr(x_29, x_2, x_3, x_36);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__1), 7, 2);
lean_closure_set(x_40, 0, x_35);
lean_closure_set(x_40, 1, x_39);
lean_ctor_set(x_37, 0, x_40);
return x_37;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_37, 0);
x_42 = lean_ctor_get(x_37, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_37);
x_43 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__1), 7, 2);
lean_closure_set(x_43, 0, x_35);
lean_closure_set(x_43, 1, x_41);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_dec(x_35);
x_45 = !lean_is_exclusive(x_37);
if (x_45 == 0)
{
return x_37;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_37, 0);
x_47 = lean_ctor_get(x_37, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_37);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_29);
lean_dec(x_3);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_34);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_50 = lean_ctor_get(x_34, 0);
x_51 = lean_io_error_to_string(x_50);
x_52 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_53, 0, x_52);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_32);
lean_ctor_set(x_54, 1, x_53);
lean_ctor_set(x_34, 0, x_54);
return x_34;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_55 = lean_ctor_get(x_34, 0);
x_56 = lean_ctor_get(x_34, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_34);
x_57 = lean_io_error_to_string(x_55);
x_58 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_59 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_59, 0, x_58);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_32);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_56);
return x_61;
}
}
}
case 2:
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_62 = lean_ctor_get(x_1, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_1, 1);
lean_inc(x_63);
x_64 = lean_ctor_get(x_1, 2);
lean_inc(x_64);
lean_dec(x_1);
x_65 = lean_st_ref_get(x_3, x_4);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
lean_dec(x_65);
x_67 = lean_ctor_get(x_2, 3);
lean_inc(x_67);
x_68 = l_Lean_PrettyPrinter_Formatter_formatterAliasesRef;
x_69 = l_Lean_Parser_getBinaryAlias___rarg(x_68, x_62, x_66);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_67);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
lean_inc(x_3);
lean_inc(x_2);
x_72 = lean_pretty_printer_formatter_interpret_parser_descr(x_63, x_2, x_3, x_71);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_pretty_printer_formatter_interpret_parser_descr(x_64, x_2, x_3, x_74);
if (lean_obj_tag(x_75) == 0)
{
uint8_t x_76; 
x_76 = !lean_is_exclusive(x_75);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; 
x_77 = lean_ctor_get(x_75, 0);
x_78 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__2), 8, 3);
lean_closure_set(x_78, 0, x_70);
lean_closure_set(x_78, 1, x_73);
lean_closure_set(x_78, 2, x_77);
lean_ctor_set(x_75, 0, x_78);
return x_75;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_79 = lean_ctor_get(x_75, 0);
x_80 = lean_ctor_get(x_75, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_75);
x_81 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__2), 8, 3);
lean_closure_set(x_81, 0, x_70);
lean_closure_set(x_81, 1, x_73);
lean_closure_set(x_81, 2, x_79);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_81);
lean_ctor_set(x_82, 1, x_80);
return x_82;
}
}
else
{
uint8_t x_83; 
lean_dec(x_73);
lean_dec(x_70);
x_83 = !lean_is_exclusive(x_75);
if (x_83 == 0)
{
return x_75;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_75, 0);
x_85 = lean_ctor_get(x_75, 1);
lean_inc(x_85);
lean_inc(x_84);
lean_dec(x_75);
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
return x_86;
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_70);
lean_dec(x_64);
lean_dec(x_3);
lean_dec(x_2);
x_87 = !lean_is_exclusive(x_72);
if (x_87 == 0)
{
return x_72;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_72, 0);
x_89 = lean_ctor_get(x_72, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_72);
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_64);
lean_dec(x_63);
lean_dec(x_3);
lean_dec(x_2);
x_91 = !lean_is_exclusive(x_69);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_92 = lean_ctor_get(x_69, 0);
x_93 = lean_io_error_to_string(x_92);
x_94 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_94, 0, x_93);
x_95 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_95, 0, x_94);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_67);
lean_ctor_set(x_96, 1, x_95);
lean_ctor_set(x_69, 0, x_96);
return x_69;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_97 = lean_ctor_get(x_69, 0);
x_98 = lean_ctor_get(x_69, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_69);
x_99 = lean_io_error_to_string(x_97);
x_100 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_100, 0, x_99);
x_101 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_101, 0, x_100);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_67);
lean_ctor_set(x_102, 1, x_101);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_98);
return x_103;
}
}
}
case 3:
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_1, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_1, 2);
lean_inc(x_105);
lean_dec(x_1);
x_106 = lean_pretty_printer_formatter_interpret_parser_descr(x_105, x_2, x_3, x_4);
if (lean_obj_tag(x_106) == 0)
{
uint8_t x_107; 
x_107 = !lean_is_exclusive(x_106);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; 
x_108 = lean_ctor_get(x_106, 0);
x_109 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__3), 7, 2);
lean_closure_set(x_109, 0, x_104);
lean_closure_set(x_109, 1, x_108);
lean_ctor_set(x_106, 0, x_109);
return x_106;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_110 = lean_ctor_get(x_106, 0);
x_111 = lean_ctor_get(x_106, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_106);
x_112 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__3), 7, 2);
lean_closure_set(x_112, 0, x_104);
lean_closure_set(x_112, 1, x_110);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_111);
return x_113;
}
}
else
{
uint8_t x_114; 
lean_dec(x_104);
x_114 = !lean_is_exclusive(x_106);
if (x_114 == 0)
{
return x_106;
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_106, 0);
x_116 = lean_ctor_get(x_106, 1);
lean_inc(x_116);
lean_inc(x_115);
lean_dec(x_106);
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
return x_117;
}
}
}
case 4:
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_118 = lean_ctor_get(x_1, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_1, 1);
lean_inc(x_119);
x_120 = lean_ctor_get(x_1, 2);
lean_inc(x_120);
x_121 = lean_ctor_get(x_1, 3);
lean_inc(x_121);
lean_dec(x_1);
x_122 = lean_pretty_printer_formatter_interpret_parser_descr(x_121, x_2, x_3, x_4);
if (lean_obj_tag(x_122) == 0)
{
uint8_t x_123; 
x_123 = !lean_is_exclusive(x_122);
if (x_123 == 0)
{
lean_object* x_124; lean_object* x_125; 
x_124 = lean_ctor_get(x_122, 0);
x_125 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__4___boxed), 9, 4);
lean_closure_set(x_125, 0, x_118);
lean_closure_set(x_125, 1, x_119);
lean_closure_set(x_125, 2, x_120);
lean_closure_set(x_125, 3, x_124);
lean_ctor_set(x_122, 0, x_125);
return x_122;
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_126 = lean_ctor_get(x_122, 0);
x_127 = lean_ctor_get(x_122, 1);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_122);
x_128 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__4___boxed), 9, 4);
lean_closure_set(x_128, 0, x_118);
lean_closure_set(x_128, 1, x_119);
lean_closure_set(x_128, 2, x_120);
lean_closure_set(x_128, 3, x_126);
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_127);
return x_129;
}
}
else
{
uint8_t x_130; 
lean_dec(x_120);
lean_dec(x_119);
lean_dec(x_118);
x_130 = !lean_is_exclusive(x_122);
if (x_130 == 0)
{
return x_122;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_131 = lean_ctor_get(x_122, 0);
x_132 = lean_ctor_get(x_122, 1);
lean_inc(x_132);
lean_inc(x_131);
lean_dec(x_122);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
return x_133;
}
}
}
case 5:
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_3);
lean_dec(x_2);
x_134 = lean_ctor_get(x_1, 0);
lean_inc(x_134);
lean_dec(x_1);
x_135 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__5), 6, 1);
lean_closure_set(x_135, 0, x_134);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_4);
return x_136;
}
case 6:
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_3);
lean_dec(x_2);
x_137 = lean_ctor_get(x_1, 0);
lean_inc(x_137);
lean_dec(x_1);
x_138 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__6), 6, 1);
lean_closure_set(x_138, 0, x_137);
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_4);
return x_139;
}
case 7:
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
lean_dec(x_3);
lean_dec(x_2);
x_140 = lean_ctor_get(x_1, 0);
lean_inc(x_140);
lean_dec(x_1);
x_141 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__7), 6, 1);
lean_closure_set(x_141, 0, x_140);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_4);
return x_142;
}
case 8:
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_143 = lean_ctor_get(x_1, 0);
lean_inc(x_143);
lean_dec(x_1);
x_144 = l_Lean_PrettyPrinter_combinatorFormatterAttribute;
x_145 = l_Lean_ParserCompiler_CombinatorAttribute_runDeclFor___rarg(x_144, x_143, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_145;
}
case 9:
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_146 = lean_ctor_get(x_1, 1);
lean_inc(x_146);
x_147 = lean_ctor_get(x_1, 2);
lean_inc(x_147);
lean_dec(x_1);
x_148 = lean_pretty_printer_formatter_interpret_parser_descr(x_147, x_2, x_3, x_4);
if (lean_obj_tag(x_148) == 0)
{
uint8_t x_149; 
x_149 = !lean_is_exclusive(x_148);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; 
x_150 = lean_ctor_get(x_148, 0);
x_151 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__8), 7, 2);
lean_closure_set(x_151, 0, x_146);
lean_closure_set(x_151, 1, x_150);
lean_ctor_set(x_148, 0, x_151);
return x_148;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_152 = lean_ctor_get(x_148, 0);
x_153 = lean_ctor_get(x_148, 1);
lean_inc(x_153);
lean_inc(x_152);
lean_dec(x_148);
x_154 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__8), 7, 2);
lean_closure_set(x_154, 0, x_146);
lean_closure_set(x_154, 1, x_152);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_153);
return x_155;
}
}
else
{
uint8_t x_156; 
lean_dec(x_146);
x_156 = !lean_is_exclusive(x_148);
if (x_156 == 0)
{
return x_148;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_157 = lean_ctor_get(x_148, 0);
x_158 = lean_ctor_get(x_148, 1);
lean_inc(x_158);
lean_inc(x_157);
lean_dec(x_148);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_157);
lean_ctor_set(x_159, 1, x_158);
return x_159;
}
}
}
case 10:
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; uint8_t x_163; lean_object* x_164; 
x_160 = lean_ctor_get(x_1, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_1, 1);
lean_inc(x_161);
x_162 = lean_ctor_get(x_1, 2);
lean_inc(x_162);
x_163 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
lean_dec(x_1);
lean_inc(x_3);
lean_inc(x_2);
x_164 = lean_pretty_printer_formatter_interpret_parser_descr(x_160, x_2, x_3, x_4);
if (lean_obj_tag(x_164) == 0)
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_165 = lean_ctor_get(x_164, 0);
lean_inc(x_165);
x_166 = lean_ctor_get(x_164, 1);
lean_inc(x_166);
lean_dec(x_164);
x_167 = lean_pretty_printer_formatter_interpret_parser_descr(x_162, x_2, x_3, x_166);
if (lean_obj_tag(x_167) == 0)
{
uint8_t x_168; 
x_168 = !lean_is_exclusive(x_167);
if (x_168 == 0)
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_169 = lean_ctor_get(x_167, 0);
x_170 = lean_box(x_163);
x_171 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__9___boxed), 9, 4);
lean_closure_set(x_171, 0, x_161);
lean_closure_set(x_171, 1, x_170);
lean_closure_set(x_171, 2, x_165);
lean_closure_set(x_171, 3, x_169);
lean_ctor_set(x_167, 0, x_171);
return x_167;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_172 = lean_ctor_get(x_167, 0);
x_173 = lean_ctor_get(x_167, 1);
lean_inc(x_173);
lean_inc(x_172);
lean_dec(x_167);
x_174 = lean_box(x_163);
x_175 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__9___boxed), 9, 4);
lean_closure_set(x_175, 0, x_161);
lean_closure_set(x_175, 1, x_174);
lean_closure_set(x_175, 2, x_165);
lean_closure_set(x_175, 3, x_172);
x_176 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_176, 0, x_175);
lean_ctor_set(x_176, 1, x_173);
return x_176;
}
}
else
{
uint8_t x_177; 
lean_dec(x_165);
lean_dec(x_161);
x_177 = !lean_is_exclusive(x_167);
if (x_177 == 0)
{
return x_167;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_ctor_get(x_167, 0);
x_179 = lean_ctor_get(x_167, 1);
lean_inc(x_179);
lean_inc(x_178);
lean_dec(x_167);
x_180 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_180, 0, x_178);
lean_ctor_set(x_180, 1, x_179);
return x_180;
}
}
}
else
{
uint8_t x_181; 
lean_dec(x_162);
lean_dec(x_161);
lean_dec(x_3);
lean_dec(x_2);
x_181 = !lean_is_exclusive(x_164);
if (x_181 == 0)
{
return x_164;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_164, 0);
x_183 = lean_ctor_get(x_164, 1);
lean_inc(x_183);
lean_inc(x_182);
lean_dec(x_164);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_182);
lean_ctor_set(x_184, 1, x_183);
return x_184;
}
}
}
default: 
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; uint8_t x_188; lean_object* x_189; 
x_185 = lean_ctor_get(x_1, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_1, 1);
lean_inc(x_186);
x_187 = lean_ctor_get(x_1, 2);
lean_inc(x_187);
x_188 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
lean_dec(x_1);
lean_inc(x_3);
lean_inc(x_2);
x_189 = lean_pretty_printer_formatter_interpret_parser_descr(x_185, x_2, x_3, x_4);
if (lean_obj_tag(x_189) == 0)
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_190 = lean_ctor_get(x_189, 0);
lean_inc(x_190);
x_191 = lean_ctor_get(x_189, 1);
lean_inc(x_191);
lean_dec(x_189);
x_192 = lean_pretty_printer_formatter_interpret_parser_descr(x_187, x_2, x_3, x_191);
if (lean_obj_tag(x_192) == 0)
{
uint8_t x_193; 
x_193 = !lean_is_exclusive(x_192);
if (x_193 == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_194 = lean_ctor_get(x_192, 0);
x_195 = lean_box(x_188);
x_196 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__10___boxed), 9, 4);
lean_closure_set(x_196, 0, x_186);
lean_closure_set(x_196, 1, x_195);
lean_closure_set(x_196, 2, x_190);
lean_closure_set(x_196, 3, x_194);
lean_ctor_set(x_192, 0, x_196);
return x_192;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_197 = lean_ctor_get(x_192, 0);
x_198 = lean_ctor_get(x_192, 1);
lean_inc(x_198);
lean_inc(x_197);
lean_dec(x_192);
x_199 = lean_box(x_188);
x_200 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__10___boxed), 9, 4);
lean_closure_set(x_200, 0, x_186);
lean_closure_set(x_200, 1, x_199);
lean_closure_set(x_200, 2, x_190);
lean_closure_set(x_200, 3, x_197);
x_201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_201, 0, x_200);
lean_ctor_set(x_201, 1, x_198);
return x_201;
}
}
else
{
uint8_t x_202; 
lean_dec(x_190);
lean_dec(x_186);
x_202 = !lean_is_exclusive(x_192);
if (x_202 == 0)
{
return x_192;
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_203 = lean_ctor_get(x_192, 0);
x_204 = lean_ctor_get(x_192, 1);
lean_inc(x_204);
lean_inc(x_203);
lean_dec(x_192);
x_205 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_205, 0, x_203);
lean_ctor_set(x_205, 1, x_204);
return x_205;
}
}
}
else
{
uint8_t x_206; 
lean_dec(x_187);
lean_dec(x_186);
lean_dec(x_3);
lean_dec(x_2);
x_206 = !lean_is_exclusive(x_189);
if (x_206 == 0)
{
return x_189;
}
else
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; 
x_207 = lean_ctor_get(x_189, 0);
x_208 = lean_ctor_get(x_189, 1);
lean_inc(x_208);
lean_inc(x_207);
lean_dec(x_189);
x_209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_209, 0, x_207);
lean_ctor_set(x_209, 1, x_208);
return x_209;
}
}
}
}
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__9(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_2);
lean_dec(x_2);
x_11 = l_Lean_PrettyPrinter_Formatter_interpretParserDescr___elambda__10(x_1, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Parser_Basic(lean_object*);
lean_object* initialize_Lean_Parser_Level(lean_object*);
lean_object* initialize_Lean_Parser_Term(lean_object*);
lean_object* initialize_Lean_Parser_Tactic(lean_object*);
lean_object* initialize_Lean_Parser_Command(lean_object*);
lean_object* initialize_Lean_Parser_Module(lean_object*);
lean_object* initialize_Lean_Parser_Syntax(lean_object*);
lean_object* initialize_Lean_Parser_Do(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Parser(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Level(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Term(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Tactic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Command(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Module(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Syntax(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Parser_initFn____x40_Lean_Parser___hyg_4_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__1);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__2);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__3 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__3);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__4 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer___closed__4);
res = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_ident_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__1);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__2);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__3 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__3);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__4 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer___closed__4);
res = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_numLit_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__1);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__2);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__3 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__3);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__4 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer___closed__4);
res = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_scientificLit_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__1);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__2);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__3 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__3);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__4 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer___closed__4);
res = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_charLit_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__1);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__2);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__3 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__3);
l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__4 = _init_l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer___closed__4);
res = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_strLit_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__1 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__1);
l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__2 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__2);
l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__3 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__3);
l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__4 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__4();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__4);
l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__5 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__5();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter___closed__5);
res = l___regBuiltin_Lean_PrettyPrinter_Formatter_ident_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__1 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__1);
l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__2 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__2);
l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__3 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter___closed__3);
res = l___regBuiltin_Lean_PrettyPrinter_Formatter_numLit_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__1 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__1);
l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__2 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__2);
l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__3 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter___closed__3);
res = l___regBuiltin_Lean_PrettyPrinter_Formatter_scientificLit_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__1 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__1);
l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__2 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__2);
l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__3 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter___closed__3);
res = l___regBuiltin_Lean_PrettyPrinter_Formatter_charLit_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__1 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__1);
l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__2 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__2);
l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__3 = _init_l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter___closed__3);
res = l___regBuiltin_Lean_PrettyPrinter_Formatter_strLit_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
