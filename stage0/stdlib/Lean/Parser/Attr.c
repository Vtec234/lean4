// Lean compiler output
// Module: Lean.Parser.Attr
// Imports: Init Lean.Parser.Basic Lean.Parser.Extra
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
lean_object* l_Lean_Parser_Attr_extern_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_extern;
lean_object* l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__2;
lean_object* l___regBuiltin_Lean_Parser_Attr_recursor_formatter(lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_attrParser_formatter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_extern_formatter___closed__9;
lean_object* l_Lean_Parser_Attr_defaultInstance_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_simple_formatter___closed__3;
lean_object* l_Lean_Parser_Attr_defaultInstance_formatter___closed__2;
lean_object* l_Lean_Parser_andthenInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_simple_formatter___closed__5;
lean_object* l_Lean_Parser_Attr_macro_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__12;
lean_object* l___regBuiltin_Lean_Parser_Attr_instance_parenthesizer___closed__2;
lean_object* l___regBuiltin_Lean_Parser_Attr_instance_formatter(lean_object*);
lean_object* l_Lean_Parser_many(lean_object*);
lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__9;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Parser_setLhsPrecFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__5;
lean_object* l___regBuiltinParser_Lean_Parser_Attr_extern___closed__1;
lean_object* l_Lean_Parser_Attr_macro_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_macro_parenthesizer___closed__3;
lean_object* l_Lean_Parser_symbol_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_class_formatter___closed__2;
lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_attrParser_formatter(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_simple_formatter(lean_object*);
lean_object* l_Lean_Parser_Attr_simple_formatter___closed__7;
lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__3;
lean_object* l_Lean_Parser_Attr_macro___elambda__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__4;
lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__4;
lean_object* l_Lean_Parser_Attr_extern_formatter___closed__4;
lean_object* l___regBuiltinParser_Lean_Parser_Attr_class___closed__2;
lean_object* l_Lean_Parser_tokenWithAntiquotFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinParser_Lean_Parser_Attr_simple___closed__3;
lean_object* l_Lean_Parser_Attr_class___elambda__1(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_ident;
lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__1;
lean_object* l_Lean_Parser_Attr_recursor_formatter___closed__3;
lean_object* l_Lean_Parser_Attr_class_formatter___closed__3;
lean_object* l_Lean_Parser_nonReservedSymbolFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_extern_formatter___closed__5;
lean_object* l_Lean_Parser_ParserState_mkNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_export_parenthesizer___closed__3;
lean_object* l_Lean_Parser_antiquotNestedExpr___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_priorityParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinParser_Lean_Parser_Attr_extern(lean_object*);
lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__8;
lean_object* l_Lean_Parser_Attr_macro_formatter___closed__4;
lean_object* l_Lean_Parser_Attr_recursor;
lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__11;
lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__2;
lean_object* l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__1;
lean_object* l_Lean_Parser_orelseFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__1;
lean_object* l_Lean_Parser_registerBuiltinDynamicParserAttribute(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer___closed__1;
lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__4;
lean_object* l___regBuiltin_Lean_Parser_Attr_export_parenthesizer___closed__1;
lean_object* l_Lean_Parser_addBuiltinParser(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Parser_Attr_macro_parenthesizer___closed__1;
lean_object* l___regBuiltin_Lean_Parser_Attr_export_parenthesizer(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__6;
lean_object* l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__1;
lean_object* l_Lean_Parser_Attr_extern_formatter___closed__6;
lean_object* l___regBuiltin_Lean_Parser_Attr_simple_parenthesizer___closed__2;
lean_object* l___regBuiltin_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__1;
lean_object* l_Lean_Parser_Attr_macro___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_class_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinParser_Lean_Parser_Attr_class___closed__1;
lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__8;
lean_object* l_Lean_Parser_checkPrecFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinParser_Lean_Parser_Attr_export___closed__2;
lean_object* l___regBuiltin_Lean_Parser_Attr_extern_parenthesizer___closed__1;
lean_object* l_Lean_Parser_Attr_extern___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_recursor___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_defaultInstance_formatter___closed__3;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__8;
lean_object* l_Lean_Parser_many_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__4;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_macro_parenthesizer(lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_simple_parenthesizer(lean_object*);
lean_object* l_Lean_Parser_Attr_class_formatter___closed__1;
lean_object* l_Lean_Parser_optional_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_checkPrec_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinParser_Lean_Parser_Attr_export___closed__1;
lean_object* l_Lean_Parser_Attr_extern_formatter___closed__3;
lean_object* l_Lean_Parser_checkPrecFn(lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_extern_formatter___closed__1;
lean_object* l_Lean_Parser_Attr_class_formatter___closed__4;
lean_object* l___regBuiltinParser_Lean_Parser_Attr_instance___closed__2;
lean_object* l_Lean_Parser_Attr_recursor_parenthesizer___closed__2;
lean_object* l_Lean_Parser_optional(lean_object*);
lean_object* l___regBuiltinParser_Lean_Parser_Attr_instance___closed__1;
lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__1;
lean_object* l___regBuiltin_Lean_Parser_Attr_macro_formatter(lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_extern_parenthesizer___closed__2;
lean_object* l_Lean_Parser_strLit___elambda__1(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_simple_parenthesizer___closed__1;
lean_object* l___regBuiltin_Lean_Parser_Attr_extern_formatter___closed__2;
extern lean_object* l_Lean_PrettyPrinter_parenthesizerAttribute;
lean_object* l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__3;
lean_object* l___regBuiltin_Lean_Parser_Priority_numPrio_formatter(lean_object*);
lean_object* l___regBuiltinParser_Lean_Parser_Attr_simple___closed__2;
lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__2;
lean_object* l___regBuiltinParser_Lean_Parser_Attr_simple___closed__4;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbolFnAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_recursor_formatter___closed__2;
lean_object* l_Lean_Parser_Attr_simple_formatter___closed__4;
lean_object* l_Lean_Parser_attrParser(lean_object*);
lean_object* l_Lean_Parser_Attr_simple;
lean_object* l_Lean_Parser_nodeInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1;
lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__5;
lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__1;
lean_object* l_Lean_Parser_Attr_class_parenthesizer___closed__3;
lean_object* l_Lean_Parser_nonReservedSymbolInfo(lean_object*, uint8_t);
lean_object* l_Lean_Parser_strLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer___closed__2;
lean_object* l___regBuiltin_Lean_Parser_Attr_macro_parenthesizer___closed__1;
lean_object* l_Lean_Parser_Attr_instance_parenthesizer___closed__1;
lean_object* l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__2;
lean_object* l_Lean_Parser_Attr_extern_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_class_parenthesizer(lean_object*);
lean_object* l_Lean_Parser_Attr_instance_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__6;
lean_object* l___regBuiltinParser_Lean_Parser_Attr_simple___closed__1;
lean_object* l_Lean_Parser_Attr_export_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_simple_formatter___closed__1;
uint8_t l_Lean_Parser_tryAnti(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_class;
lean_object* l___regBuiltinParser_Lean_Parser_Attr_extern___closed__2;
lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__2;
lean_object* l_Lean_Parser_Attr_macro;
lean_object* l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1;
lean_object* l_Lean_Parser_Priority_numPrio___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_simple_formatter___closed__8;
lean_object* l_Lean_Parser_Attr_recursor_parenthesizer___closed__4;
extern lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__4;
lean_object* l_Lean_Parser_checkNoWsBeforeFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_macro_formatter___closed__1;
lean_object* l_Lean_Parser_Attr_export_parenthesizer___closed__1;
lean_object* l___regBuiltin_Lean_Parser_Attr_class_parenthesizer___closed__1;
lean_object* l_Lean_Parser_Attr_extern_formatter___closed__8;
lean_object* l_Lean_Parser_orelseInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_export_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__3;
lean_object* l___regBuiltin_Lean_Parser_Attr_class_formatter(lean_object*);
lean_object* l___regBuiltinParser_Lean_Parser_Attr_macro(lean_object*);
lean_object* l_Lean_Parser_tokenWithAntiquotFn___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_instance_parenthesizer___closed__4;
lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__5;
lean_object* l_Lean_Parser_Priority_numPrio_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__4;
lean_object* l_Lean_Parser_Attr_extern_formatter___closed__1;
lean_object* l_Lean_Parser_Attr_export_formatter___closed__5;
extern lean_object* l_Lean_Parser_maxPrec;
lean_object* l_Lean_Parser_Attr_recursor_parenthesizer___closed__1;
lean_object* l_Lean_Parser_strLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_simple_formatter___closed__2;
lean_object* l_Lean_Parser_Attr_macro_formatter___closed__2;
lean_object* l_Lean_Parser_attrParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_extern_formatter___closed__2;
lean_object* l_Lean_Parser_Attr_recursor_formatter___closed__4;
lean_object* l___regBuiltin_Lean_Parser_Attr_defaultInstance_formatter(lean_object*);
extern lean_object* l_Lean_PrettyPrinter_formatterAttribute;
lean_object* l_Lean_Parser_Attr_export_parenthesizer___closed__4;
lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__3;
lean_object* l_Lean_Parser_registerBuiltinParserAttribute(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__6;
lean_object* l_Lean_Parser_Attr_instance___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_instance_formatter___closed__1;
lean_object* l___regBuiltin_Lean_Parser_Attr_macro_parenthesizer___closed__2;
lean_object* l___regBuiltin_Lean_Parser_Attr_class_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__5;
lean_object* l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__4;
lean_object* l___regBuiltin_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Attr_recursor_formatter___closed__1;
lean_object* l___regBuiltinParser_Lean_Parser_Attr_class(lean_object*);
lean_object* l_Lean_Parser_Attr_recursor_formatter___closed__2;
lean_object* l_Lean_Parser_priorityParser_formatter___boxed(lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_restore(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_extern_formatter___closed__10;
lean_object* l___regBuiltinParser_Lean_Parser_Attr_macro___closed__2;
lean_object* l_Lean_Parser_Attr_recursor_formatter___closed__6;
lean_object* l_Lean_Parser_Attr_instance_parenthesizer___closed__5;
lean_object* l_Lean_Parser_Attr_export_formatter___closed__4;
lean_object* l_Lean_Parser_attrParser_formatter___rarg___closed__1;
lean_object* l_Lean_Parser_Attr_instance_formatter___closed__4;
lean_object* l_Lean_Parser_attrParser_formatter___rarg___closed__2;
lean_object* l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__5;
lean_object* l_Lean_Parser_Attr_instance_parenthesizer___closed__3;
lean_object* l_Lean_Parser_Attr_macro_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__3;
lean_object* l_Lean_Parser_Attr_export_formatter___closed__6;
lean_object* l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__3;
lean_object* l_Lean_Parser_Attr_macro_parenthesizer___closed__4;
lean_object* l_Lean_Parser_Attr_instance;
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_defaultInstance;
lean_object* l_Lean_Parser_Attr_defaultInstance_formatter___closed__4;
lean_object* l_Lean_Parser_Attr_export;
lean_object* l___regBuiltin_Lean_Parser_Attr_simple_formatter___closed__1;
lean_object* l_Lean_Parser_ident___elambda__1(lean_object*, lean_object*);
lean_object* l___regBuiltinParser_Lean_Parser_Attr_defaultInstance(lean_object*);
extern lean_object* l_Lean_Parser_numLit;
lean_object* l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__1;
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__7;
lean_object* l___regBuiltinParser_Lean_Parser_Attr_instance(lean_object*);
lean_object* l_Lean_Parser_Attr_macro___elambda__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__10;
lean_object* l_Lean_Parser_numLit___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_export_formatter___closed__1;
lean_object* l_Lean_Parser_Attr_defaultInstance_formatter___closed__1;
lean_object* l___regBuiltin_Lean_Parser_Attr_instance_parenthesizer(lean_object*);
lean_object* l_Lean_Parser_Attr_macro_formatter___closed__5;
lean_object* l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__2;
lean_object* l___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer(lean_object*);
lean_object* l_Lean_Parser_priorityParser_formatter___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_categoryParser(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_simple_formatter___closed__2;
lean_object* l___regBuiltin_Lean_Parser_Attr_macro_formatter___closed__1;
lean_object* l_Lean_Parser_Attr_export_formatter___closed__3;
lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Attr_defaultInstance_formatter___closed__5;
lean_object* l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__3;
lean_object* l_Lean_Parser_Priority_numPrio;
lean_object* l___regBuiltin_Lean_Parser_Attr_extern_parenthesizer(lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_class_formatter___closed__2;
lean_object* l___regBuiltin_Lean_Parser_Priority_numPrio_parenthesizer___closed__1;
lean_object* l___regBuiltin_Lean_Parser_Attr_macro_formatter___closed__2;
lean_object* l_Lean_Parser_Attr_macro_formatter___closed__3;
lean_object* l_Lean_Parser_symbolInfo(lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_class_formatter___closed__1;
lean_object* l_Lean_Parser_orelseFnCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_epsilonInfo;
lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__6;
lean_object* l___regBuiltin_Lean_Parser_Attr_extern_formatter(lean_object*);
lean_object* l_Lean_Parser_Attr_externEntry___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_categoryParser___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Priority_numPrio_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Attr_export_formatter___closed__2;
lean_object* l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__6;
lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__10;
lean_object* l_Lean_Parser_Attr_externEntry;
lean_object* l_Lean_Parser_Attr_externEntry_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_priorityParser_formatter(lean_object*);
lean_object* l___regBuiltinParser_Lean_Parser_Attr_export(lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_instance_formatter___closed__2;
lean_object* l_Lean_Parser_ident_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_recursor_formatter___closed__1;
lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__7;
lean_object* l_Lean_Parser_Attr_export_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinParser_Lean_Parser_Priority_numPrio(lean_object*);
lean_object* l_Lean_Parser_numLit_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_class_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinParser_Lean_Parser_Attr_recursor(lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_defaultInstance_parenthesizer(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Attr___hyg_3_(lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Attr___hyg_27_(lean_object*);
lean_object* l_Lean_Parser_Attr_instance_formatter___closed__6;
lean_object* l_Lean_Parser_Priority_numPrio_formatter___closed__1;
lean_object* l_String_trim(lean_object*);
lean_object* l_Lean_Parser_nodeFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_recursor_parenthesizer___closed__3;
lean_object* l_Lean_Parser_Attr_instance_formatter___closed__2;
lean_object* l_Lean_Parser_Attr_instance_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_macro_formatter___closed__6;
lean_object* l_Lean_Parser_Attr_defaultInstance___elambda__1(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_export_formatter(lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_export_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Attr_recursor_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_simple_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__1;
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_Attr_recursor_formatter___closed__5;
lean_object* l_Lean_Parser_many_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__2;
lean_object* l_Lean_Parser_Attr_simple_formatter___closed__6;
lean_object* l_Lean_Parser_Attr_export___elambda__1(lean_object*, lean_object*);
lean_object* l___regBuiltinParser_Lean_Parser_Attr_macro___closed__1;
lean_object* l___regBuiltin_Lean_Parser_Attr_defaultInstance_formatter___closed__2;
lean_object* l_Lean_Parser_Attr_defaultInstance_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_priorityParser_formatter___rarg___closed__2;
lean_object* l_Lean_Parser_attrParser_formatter___boxed(lean_object*);
lean_object* l_Lean_Parser_numLit_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolFnAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Parser_Attr_instance_formatter___closed__1;
lean_object* l_Lean_Parser_priorityParser_formatter___rarg___closed__1;
lean_object* l_Lean_Parser_ident_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_instance_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_class_parenthesizer___closed__1;
lean_object* l_Lean_Parser_symbol_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_class_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Attr_instance_formatter___closed__3;
lean_object* l___regBuiltin_Lean_Parser_Attr_export_formatter___closed__2;
lean_object* l_Lean_Parser_identFn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_defaultInstance_formatter___closed__6;
lean_object* l_Lean_Parser_Attr_recursor_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_extern_formatter___closed__7;
lean_object* l_Lean_Parser_Attr_simple_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_instance_formatter___closed__5;
lean_object* l___regBuiltin_Lean_Parser_Attr_export_formatter___closed__1;
extern lean_object* l_Lean_Parser_strLit;
lean_object* l___regBuiltinParser_Lean_Parser_Attr_simple(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__7;
lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__7;
lean_object* l___regBuiltin_Lean_Parser_Attr_defaultInstance_formatter___closed__1;
lean_object* l_Lean_Parser_priorityParser(lean_object*);
lean_object* l_Lean_Parser_Attr_simple___elambda__1(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_leadingNode_formatter___closed__2;
lean_object* l___regBuiltin_Lean_Parser_Attr_instance_parenthesizer___closed__1;
lean_object* l___regBuiltin_Lean_Parser_Priority_numPrio_parenthesizer(lean_object*);
lean_object* l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__2;
lean_object* l_Lean_Parser_setLhsPrecFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthenFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Attr___hyg_3_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_2 = lean_box(0);
x_3 = lean_mk_string("builtinPrioParser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("prio");
x_6 = lean_name_mk_string(x_2, x_5);
x_7 = 2;
lean_inc(x_6);
x_8 = l_Lean_Parser_registerBuiltinParserAttribute(x_4, x_6, x_7, x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_mk_string("prioParser");
x_11 = lean_name_mk_string(x_2, x_10);
x_12 = l_Lean_Parser_registerBuiltinDynamicParserAttribute(x_11, x_6, x_9);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_6);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_8);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Parser_initFn____x40_Lean_Parser_Attr___hyg_27_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; 
x_2 = lean_box(0);
x_3 = lean_mk_string("builtinAttrParser");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("attr");
x_6 = lean_name_mk_string(x_2, x_5);
x_7 = 1;
lean_inc(x_6);
x_8 = l_Lean_Parser_registerBuiltinParserAttribute(x_4, x_6, x_7, x_1);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_mk_string("attrParser");
x_11 = lean_name_mk_string(x_2, x_10);
x_12 = l_Lean_Parser_registerBuiltinDynamicParserAttribute(x_11, x_6, x_9);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_6);
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_8);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Parser_priorityParser(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = lean_mk_string("prio");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = l_Lean_Parser_categoryParser(x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Parser_attrParser(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_box(0);
x_3 = lean_mk_string("attr");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = l_Lean_Parser_categoryParser(x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_priorityParser_formatter___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("prio");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_priorityParser_formatter___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_priorityParser_formatter___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_priorityParser_formatter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Parser_priorityParser_formatter___rarg___closed__2;
x_7 = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(x_6, x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_Parser_priorityParser_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_priorityParser_formatter___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_priorityParser_formatter___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_priorityParser_formatter(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_priorityParser_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_Parser_priorityParser_formatter___rarg___closed__2;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_attrParser_formatter___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("attr");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_attrParser_formatter___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Parser_attrParser_formatter___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Parser_attrParser_formatter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_Lean_Parser_attrParser_formatter___rarg___closed__2;
x_7 = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(x_6, x_1, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_Parser_attrParser_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_attrParser_formatter___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_attrParser_formatter___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Parser_attrParser_formatter(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Parser_attrParser_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_Parser_attrParser_formatter___rarg___closed__2;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(x_7, x_1, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
lean_object* l_Lean_Parser_Priority_numPrio___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = l_Lean_Parser_maxPrec;
x_4 = l_Lean_Parser_checkPrecFn(x_3, x_1, x_2);
x_5 = lean_ctor_get(x_4, 4);
lean_inc(x_5);
x_6 = lean_box(0);
x_7 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_5, x_6);
lean_dec(x_5);
if (x_7 == 0)
{
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_8; 
x_8 = l_Lean_Parser_numLit___elambda__1(x_1, x_4);
return x_8;
}
}
}
static lean_object* _init_l_Lean_Parser_Priority_numPrio() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Parser_numLit;
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l_Lean_Parser_epsilonInfo;
x_4 = l_Lean_Parser_andthenInfo(x_3, x_2);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_Priority_numPrio___elambda__1), 2, 0);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Parser");
return x_1;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__4;
x_2 = l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Priority");
return x_1;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__2;
x_2 = l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("numPrio");
return x_1;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__4;
x_2 = l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___regBuiltinParser_Lean_Parser_Priority_numPrio(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Lean_Parser_priorityParser_formatter___rarg___closed__2;
x_3 = l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__6;
x_4 = 1;
x_5 = l_Lean_Parser_Priority_numPrio;
x_6 = lean_unsigned_to_nat(1000u);
x_7 = l_Lean_Parser_addBuiltinParser(x_2, x_3, x_4, x_5, x_6, x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_Priority_numPrio_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_numLit_formatter), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_Priority_numPrio_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_leadingNode_formatter___closed__2;
x_7 = l_Lean_Parser_Priority_numPrio_formatter___closed__1;
x_8 = l_Lean_PrettyPrinter_Formatter_andthen_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("formatter");
return x_1;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__6;
x_2 = l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Priority_numPrio_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Priority_numPrio_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__6;
x_4 = l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__2;
x_5 = l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__3;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_maxPrec;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_checkPrec_parenthesizer___boxed), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Priority_numPrio_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_numLit_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Priority_numPrio_parenthesizer___closed__2;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Priority_numPrio_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__6;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Priority_numPrio_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Priority_numPrio_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Priority_numPrio_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__6;
x_4 = l___regBuiltin_Lean_Parser_Priority_numPrio_parenthesizer___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Priority_numPrio_parenthesizer___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_Attr_simple___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_3 = lean_box(0);
x_4 = lean_mk_string("Lean");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Parser");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Attr");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("simple");
lean_inc(x_10);
x_11 = lean_name_mk_string(x_9, x_10);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = 1;
x_14 = l_Lean_Parser_mkAntiquot(x_10, x_12, x_13);
lean_dec(x_10);
x_15 = lean_mk_string("prio");
x_16 = lean_name_mk_string(x_3, x_15);
x_17 = lean_unsigned_to_nat(0u);
lean_inc(x_16);
x_18 = l_Lean_Parser_categoryParser(x_16, x_17);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_Parser_ident;
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = l_Lean_Parser_orelseInfo(x_19, x_21);
x_23 = lean_alloc_closure((void*)(l_Lean_Parser_categoryParser___elambda__1), 4, 2);
lean_closure_set(x_23, 0, x_16);
lean_closure_set(x_23, 1, x_17);
x_24 = lean_alloc_closure((void*)(l_Lean_Parser_ident___elambda__1), 2, 0);
lean_inc(x_24);
x_25 = lean_alloc_closure((void*)(l_Lean_Parser_orelseFn), 4, 2);
lean_closure_set(x_25, 0, x_23);
lean_closure_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_22);
lean_ctor_set(x_26, 1, x_25);
x_27 = l_Lean_Parser_optional(x_26);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
lean_inc(x_28);
x_29 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_29, 0, x_24);
lean_closure_set(x_29, 1, x_28);
x_30 = lean_unsigned_to_nat(1024u);
x_31 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_31, 0, x_30);
lean_inc(x_11);
x_32 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_32, 0, x_11);
lean_closure_set(x_32, 1, x_29);
x_33 = lean_alloc_closure((void*)(l_Lean_Parser_setLhsPrecFn___boxed), 3, 1);
lean_closure_set(x_33, 0, x_30);
x_34 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_34, 0, x_32);
lean_closure_set(x_34, 1, x_33);
x_35 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_35, 0, x_31);
lean_closure_set(x_35, 1, x_34);
x_36 = lean_ctor_get(x_14, 1);
lean_inc(x_36);
lean_dec(x_14);
lean_inc(x_2);
lean_inc(x_1);
x_37 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
lean_dec(x_36);
lean_dec(x_35);
x_38 = l_Lean_Parser_checkPrecFn(x_30, x_1, x_2);
x_39 = lean_ctor_get(x_38, 4);
lean_inc(x_39);
x_40 = lean_box(0);
x_41 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_39, x_40);
lean_dec(x_39);
if (x_41 == 0)
{
lean_dec(x_28);
lean_dec(x_11);
lean_dec(x_1);
return x_38;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_42 = lean_ctor_get(x_38, 0);
lean_inc(x_42);
x_43 = lean_array_get_size(x_42);
lean_dec(x_42);
lean_inc(x_1);
x_44 = l_Lean_Parser_ident___elambda__1(x_1, x_38);
x_45 = lean_ctor_get(x_44, 4);
lean_inc(x_45);
x_46 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_45, x_40);
lean_dec(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; 
lean_dec(x_28);
x_47 = l_Lean_Parser_ParserState_mkNode(x_44, x_11, x_43);
x_48 = lean_ctor_get(x_47, 4);
lean_inc(x_48);
x_49 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_48, x_40);
lean_dec(x_48);
if (x_49 == 0)
{
lean_dec(x_1);
return x_47;
}
else
{
lean_object* x_50; 
x_50 = l_Lean_Parser_setLhsPrecFn(x_30, x_1, x_47);
lean_dec(x_1);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_inc(x_1);
x_51 = lean_apply_2(x_28, x_1, x_44);
x_52 = l_Lean_Parser_ParserState_mkNode(x_51, x_11, x_43);
x_53 = lean_ctor_get(x_52, 4);
lean_inc(x_53);
x_54 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_53, x_40);
lean_dec(x_53);
if (x_54 == 0)
{
lean_dec(x_1);
return x_52;
}
else
{
lean_object* x_55; 
x_55 = l_Lean_Parser_setLhsPrecFn(x_30, x_1, x_52);
lean_dec(x_1);
return x_55;
}
}
}
}
else
{
lean_object* x_56; 
lean_dec(x_28);
lean_dec(x_11);
x_56 = l_Lean_Parser_orelseFnCore(x_36, x_35, x_13, x_1, x_2);
return x_56;
}
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Attr");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("simple");
lean_inc(x_8);
x_9 = lean_name_mk_string(x_7, x_8);
lean_inc(x_9);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = 1;
x_12 = l_Lean_Parser_mkAntiquot(x_8, x_10, x_11);
lean_dec(x_8);
x_13 = lean_mk_string("prio");
x_14 = lean_name_mk_string(x_1, x_13);
x_15 = lean_unsigned_to_nat(0u);
lean_inc(x_14);
x_16 = l_Lean_Parser_categoryParser(x_14, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Lean_Parser_ident;
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_inc(x_19);
x_20 = l_Lean_Parser_orelseInfo(x_17, x_19);
x_21 = lean_alloc_closure((void*)(l_Lean_Parser_categoryParser___elambda__1), 4, 2);
lean_closure_set(x_21, 0, x_14);
lean_closure_set(x_21, 1, x_15);
x_22 = lean_alloc_closure((void*)(l_Lean_Parser_ident___elambda__1), 2, 0);
x_23 = lean_alloc_closure((void*)(l_Lean_Parser_orelseFn), 4, 2);
lean_closure_set(x_23, 0, x_21);
lean_closure_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_20);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_Parser_optional(x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_Lean_Parser_andthenInfo(x_19, x_26);
x_28 = l_Lean_Parser_nodeInfo(x_9, x_27);
x_29 = l_Lean_Parser_epsilonInfo;
x_30 = l_Lean_Parser_andthenInfo(x_28, x_29);
x_31 = l_Lean_Parser_andthenInfo(x_29, x_30);
x_32 = lean_ctor_get(x_12, 0);
lean_inc(x_32);
lean_dec(x_12);
x_33 = l_Lean_Parser_orelseInfo(x_32, x_31);
x_34 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_simple___elambda__1), 2, 0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_simple___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Attr");
return x_1;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_simple___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__2;
x_2 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_simple___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("simple");
return x_1;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_simple___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__2;
x_2 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___regBuiltinParser_Lean_Parser_Attr_simple(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Lean_Parser_attrParser_formatter___rarg___closed__2;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__4;
x_4 = 1;
x_5 = l_Lean_Parser_Attr_simple;
x_6 = lean_unsigned_to_nat(1000u);
x_7 = l_Lean_Parser_addBuiltinParser(x_2, x_3, x_4, x_5, x_6, x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__4;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__3;
x_2 = l_Lean_Parser_Attr_simple_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_priorityParser_formatter___rarg), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple_formatter___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_ident_formatter), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple_formatter___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_simple_formatter___closed__3;
x_2 = l_Lean_Parser_Attr_simple_formatter___closed__4;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple_formatter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Attr_simple_formatter___closed__5;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_optional_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple_formatter___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_simple_formatter___closed__4;
x_2 = l_Lean_Parser_Attr_simple_formatter___closed__6;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple_formatter___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__4;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_simple_formatter___closed__7;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_simple_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_simple_formatter___closed__2;
x_7 = l_Lean_Parser_Attr_simple_formatter___closed__8;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_simple_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__4;
x_2 = l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_simple_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_simple_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Attr_simple_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__4;
x_4 = l___regBuiltin_Lean_Parser_Attr_simple_formatter___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Attr_simple_formatter___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__3;
x_2 = l_Lean_Parser_Attr_simple_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_priorityParser_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_ident_parenthesizer), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_simple_parenthesizer___closed__2;
x_2 = l_Lean_Parser_Attr_simple_parenthesizer___closed__3;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple_parenthesizer___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Attr_simple_parenthesizer___closed__4;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_optional_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple_parenthesizer___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_simple_parenthesizer___closed__3;
x_2 = l_Lean_Parser_Attr_simple_parenthesizer___closed__5;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple_parenthesizer___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__4;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_simple_parenthesizer___closed__6;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_simple_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_simple_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Attr_simple_parenthesizer___closed__7;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_simple_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__4;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_simple_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_simple_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Attr_simple_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__4;
x_4 = l___regBuiltin_Lean_Parser_Attr_simple_parenthesizer___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Attr_simple_parenthesizer___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_Attr_macro___elambda__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_array_get_size(x_5);
lean_dec(x_5);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = lean_mk_string("%");
x_9 = l_String_trim(x_8);
lean_dec(x_8);
x_10 = lean_mk_string("$");
x_11 = l_String_trim(x_10);
lean_dec(x_10);
x_12 = lean_mk_string("no space before");
lean_inc(x_12);
x_13 = l_Lean_Parser_checkNoWsBeforeFn(x_12, x_2, x_1);
x_14 = lean_ctor_get(x_13, 4);
lean_inc(x_14);
x_15 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_14, x_3);
lean_dec(x_14);
if (x_15 == 0)
{
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_2);
x_16 = x_13;
goto block_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_23 = lean_mk_string("'");
lean_inc(x_23);
x_24 = lean_string_append(x_23, x_9);
x_25 = lean_string_append(x_24, x_23);
lean_inc(x_2);
x_26 = l_Lean_Parser_symbolFnAux(x_9, x_25, x_2, x_13);
lean_dec(x_9);
x_27 = lean_ctor_get(x_26, 4);
lean_inc(x_27);
x_28 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_27, x_3);
lean_dec(x_27);
if (x_28 == 0)
{
lean_dec(x_23);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_2);
x_16 = x_26;
goto block_22;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
lean_inc(x_23);
x_29 = lean_string_append(x_23, x_11);
x_30 = lean_string_append(x_29, x_23);
lean_dec(x_23);
lean_inc(x_2);
x_31 = l_Lean_Parser_symbolFnAux(x_11, x_30, x_2, x_26);
lean_dec(x_11);
x_32 = lean_ctor_get(x_31, 4);
lean_inc(x_32);
x_33 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_32, x_3);
lean_dec(x_32);
if (x_33 == 0)
{
lean_dec(x_12);
lean_dec(x_2);
x_16 = x_31;
goto block_22;
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = l_Lean_Parser_checkNoWsBeforeFn(x_12, x_2, x_31);
x_35 = lean_ctor_get(x_34, 4);
lean_inc(x_35);
x_36 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_35, x_3);
lean_dec(x_35);
if (x_36 == 0)
{
lean_dec(x_2);
x_16 = x_34;
goto block_22;
}
else
{
lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; 
x_37 = lean_alloc_closure((void*)(l_Lean_Parser_identFn), 2, 0);
x_38 = lean_alloc_closure((void*)(l_Lean_Parser_antiquotNestedExpr___elambda__1), 2, 0);
x_39 = 1;
x_40 = l_Lean_Parser_orelseFnCore(x_37, x_38, x_39, x_2, x_34);
x_16 = x_40;
goto block_22;
}
}
}
}
block_22:
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_ctor_get(x_16, 4);
lean_inc(x_17);
x_18 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_17, x_3);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = l_Lean_Parser_ParserState_restore(x_16, x_6, x_7);
lean_dec(x_6);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_7);
x_20 = lean_box(0);
x_21 = l_Lean_Parser_tokenWithAntiquotFn___lambda__1(x_6, x_16, x_20);
lean_dec(x_6);
return x_21;
}
}
}
}
lean_object* l_Lean_Parser_Attr_macro___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_3 = lean_box(0);
x_4 = lean_mk_string("Lean");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Parser");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Attr");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("macro");
lean_inc(x_10);
x_11 = lean_name_mk_string(x_9, x_10);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = 1;
x_14 = l_Lean_Parser_mkAntiquot(x_10, x_12, x_13);
lean_dec(x_10);
x_15 = lean_mk_string("macro ");
x_16 = l_String_trim(x_15);
lean_dec(x_15);
lean_inc(x_16);
x_17 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = lean_alloc_closure((void*)(l_Lean_Parser_ident___elambda__1), 2, 0);
x_20 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_20, 0, x_18);
lean_closure_set(x_20, 1, x_19);
x_21 = lean_unsigned_to_nat(1024u);
x_22 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_22, 0, x_21);
lean_inc(x_11);
x_23 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_23, 0, x_11);
lean_closure_set(x_23, 1, x_20);
x_24 = lean_alloc_closure((void*)(l_Lean_Parser_setLhsPrecFn___boxed), 3, 1);
lean_closure_set(x_24, 0, x_21);
x_25 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_25, 0, x_23);
lean_closure_set(x_25, 1, x_24);
x_26 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_26, 0, x_22);
lean_closure_set(x_26, 1, x_25);
x_27 = lean_ctor_get(x_14, 1);
lean_inc(x_27);
lean_dec(x_14);
lean_inc(x_2);
lean_inc(x_1);
x_28 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_27);
lean_dec(x_26);
x_29 = l_Lean_Parser_checkPrecFn(x_21, x_1, x_2);
x_30 = lean_ctor_get(x_29, 4);
lean_inc(x_30);
x_31 = lean_box(0);
x_32 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_30, x_31);
lean_dec(x_30);
if (x_32 == 0)
{
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_1);
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_29, 0);
lean_inc(x_33);
x_34 = lean_array_get_size(x_33);
lean_dec(x_33);
x_35 = lean_mk_string("'");
lean_inc(x_35);
x_36 = lean_string_append(x_35, x_16);
x_37 = lean_string_append(x_36, x_35);
lean_dec(x_35);
lean_inc(x_1);
x_38 = l_Lean_Parser_symbolFnAux(x_16, x_37, x_1, x_29);
lean_dec(x_16);
x_39 = lean_ctor_get(x_38, 4);
lean_inc(x_39);
x_40 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_39, x_31);
lean_dec(x_39);
if (x_40 == 0)
{
x_41 = x_38;
goto block_53;
}
else
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_54 = lean_ctor_get(x_1, 4);
lean_inc(x_54);
x_55 = lean_unsigned_to_nat(0u);
x_56 = lean_nat_dec_eq(x_54, x_55);
lean_dec(x_54);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_box(0);
lean_inc(x_1);
x_58 = l_Lean_Parser_Attr_macro___elambda__1___lambda__1(x_38, x_1, x_31, x_57);
x_41 = x_58;
goto block_53;
}
else
{
x_41 = x_38;
goto block_53;
}
}
block_53:
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_41, 4);
lean_inc(x_42);
x_43 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_42, x_31);
lean_dec(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = l_Lean_Parser_ParserState_mkNode(x_41, x_11, x_34);
x_45 = lean_ctor_get(x_44, 4);
lean_inc(x_45);
x_46 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_45, x_31);
lean_dec(x_45);
if (x_46 == 0)
{
lean_dec(x_1);
return x_44;
}
else
{
lean_object* x_47; 
x_47 = l_Lean_Parser_setLhsPrecFn(x_21, x_1, x_44);
lean_dec(x_1);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
lean_inc(x_1);
x_48 = l_Lean_Parser_ident___elambda__1(x_1, x_41);
x_49 = l_Lean_Parser_ParserState_mkNode(x_48, x_11, x_34);
x_50 = lean_ctor_get(x_49, 4);
lean_inc(x_50);
x_51 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_50, x_31);
lean_dec(x_50);
if (x_51 == 0)
{
lean_dec(x_1);
return x_49;
}
else
{
lean_object* x_52; 
x_52 = l_Lean_Parser_setLhsPrecFn(x_21, x_1, x_49);
lean_dec(x_1);
return x_52;
}
}
}
}
}
else
{
lean_object* x_59; 
lean_dec(x_16);
lean_dec(x_11);
x_59 = l_Lean_Parser_orelseFnCore(x_27, x_26, x_13, x_1, x_2);
return x_59;
}
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Attr");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("macro");
lean_inc(x_8);
x_9 = lean_name_mk_string(x_7, x_8);
lean_inc(x_9);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = 1;
x_12 = l_Lean_Parser_mkAntiquot(x_8, x_10, x_11);
lean_dec(x_8);
x_13 = lean_mk_string("macro ");
x_14 = l_String_trim(x_13);
lean_dec(x_13);
x_15 = l_Lean_Parser_symbolInfo(x_14);
x_16 = l_Lean_Parser_ident;
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = l_Lean_Parser_andthenInfo(x_15, x_17);
x_19 = l_Lean_Parser_nodeInfo(x_9, x_18);
x_20 = l_Lean_Parser_epsilonInfo;
x_21 = l_Lean_Parser_andthenInfo(x_19, x_20);
x_22 = l_Lean_Parser_andthenInfo(x_20, x_21);
x_23 = lean_ctor_get(x_12, 0);
lean_inc(x_23);
lean_dec(x_12);
x_24 = l_Lean_Parser_orelseInfo(x_23, x_22);
x_25 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_macro___elambda__1), 2, 0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
lean_object* l_Lean_Parser_Attr_macro___elambda__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_Attr_macro___elambda__1___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_macro___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("macro");
return x_1;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_macro___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__2;
x_2 = l___regBuiltinParser_Lean_Parser_Attr_macro___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___regBuiltinParser_Lean_Parser_Attr_macro(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Lean_Parser_attrParser_formatter___rarg___closed__2;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_macro___closed__2;
x_4 = 1;
x_5 = l_Lean_Parser_Attr_macro;
x_6 = lean_unsigned_to_nat(1000u);
x_7 = l_Lean_Parser_addBuiltinParser(x_2, x_3, x_4, x_5, x_6, x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_macro___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_macro___closed__1;
x_2 = l_Lean_Parser_Attr_macro_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("macro ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Attr_macro_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro_formatter___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_macro_formatter___closed__4;
x_2 = l_Lean_Parser_Attr_simple_formatter___closed__4;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro_formatter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_macro___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_macro_formatter___closed__5;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_macro_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_macro_formatter___closed__2;
x_7 = l_Lean_Parser_Attr_macro_formatter___closed__6;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_macro_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_macro___closed__2;
x_2 = l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_macro_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_macro_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Attr_macro_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_macro___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Attr_macro_formatter___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Attr_macro_formatter___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_macro___closed__1;
x_2 = l_Lean_Parser_Attr_macro_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Attr_macro_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_macro_parenthesizer___closed__2;
x_2 = l_Lean_Parser_Attr_simple_parenthesizer___closed__3;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_macro___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_macro_parenthesizer___closed__3;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_macro_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_macro_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Attr_macro_parenthesizer___closed__4;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_macro_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_macro___closed__2;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_macro_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_macro_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Attr_macro_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_macro___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Attr_macro_parenthesizer___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Attr_macro_parenthesizer___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_Attr_export___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_3 = lean_box(0);
x_4 = lean_mk_string("Lean");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Parser");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Attr");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("export");
lean_inc(x_10);
x_11 = lean_name_mk_string(x_9, x_10);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = 1;
x_14 = l_Lean_Parser_mkAntiquot(x_10, x_12, x_13);
lean_dec(x_10);
x_15 = lean_mk_string("export ");
x_16 = l_String_trim(x_15);
lean_dec(x_15);
lean_inc(x_16);
x_17 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = lean_alloc_closure((void*)(l_Lean_Parser_ident___elambda__1), 2, 0);
x_20 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_20, 0, x_18);
lean_closure_set(x_20, 1, x_19);
x_21 = lean_unsigned_to_nat(1024u);
x_22 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_22, 0, x_21);
lean_inc(x_11);
x_23 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_23, 0, x_11);
lean_closure_set(x_23, 1, x_20);
x_24 = lean_alloc_closure((void*)(l_Lean_Parser_setLhsPrecFn___boxed), 3, 1);
lean_closure_set(x_24, 0, x_21);
x_25 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_25, 0, x_23);
lean_closure_set(x_25, 1, x_24);
x_26 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_26, 0, x_22);
lean_closure_set(x_26, 1, x_25);
x_27 = lean_ctor_get(x_14, 1);
lean_inc(x_27);
lean_dec(x_14);
lean_inc(x_2);
lean_inc(x_1);
x_28 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_27);
lean_dec(x_26);
x_29 = l_Lean_Parser_checkPrecFn(x_21, x_1, x_2);
x_30 = lean_ctor_get(x_29, 4);
lean_inc(x_30);
x_31 = lean_box(0);
x_32 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_30, x_31);
lean_dec(x_30);
if (x_32 == 0)
{
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_1);
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_29, 0);
lean_inc(x_33);
x_34 = lean_array_get_size(x_33);
lean_dec(x_33);
x_35 = lean_mk_string("'");
lean_inc(x_35);
x_36 = lean_string_append(x_35, x_16);
x_37 = lean_string_append(x_36, x_35);
lean_dec(x_35);
lean_inc(x_1);
x_38 = l_Lean_Parser_symbolFnAux(x_16, x_37, x_1, x_29);
lean_dec(x_16);
x_39 = lean_ctor_get(x_38, 4);
lean_inc(x_39);
x_40 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_39, x_31);
lean_dec(x_39);
if (x_40 == 0)
{
x_41 = x_38;
goto block_53;
}
else
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_54 = lean_ctor_get(x_1, 4);
lean_inc(x_54);
x_55 = lean_unsigned_to_nat(0u);
x_56 = lean_nat_dec_eq(x_54, x_55);
lean_dec(x_54);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_box(0);
lean_inc(x_1);
x_58 = l_Lean_Parser_Attr_macro___elambda__1___lambda__1(x_38, x_1, x_31, x_57);
x_41 = x_58;
goto block_53;
}
else
{
x_41 = x_38;
goto block_53;
}
}
block_53:
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_41, 4);
lean_inc(x_42);
x_43 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_42, x_31);
lean_dec(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = l_Lean_Parser_ParserState_mkNode(x_41, x_11, x_34);
x_45 = lean_ctor_get(x_44, 4);
lean_inc(x_45);
x_46 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_45, x_31);
lean_dec(x_45);
if (x_46 == 0)
{
lean_dec(x_1);
return x_44;
}
else
{
lean_object* x_47; 
x_47 = l_Lean_Parser_setLhsPrecFn(x_21, x_1, x_44);
lean_dec(x_1);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
lean_inc(x_1);
x_48 = l_Lean_Parser_ident___elambda__1(x_1, x_41);
x_49 = l_Lean_Parser_ParserState_mkNode(x_48, x_11, x_34);
x_50 = lean_ctor_get(x_49, 4);
lean_inc(x_50);
x_51 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_50, x_31);
lean_dec(x_50);
if (x_51 == 0)
{
lean_dec(x_1);
return x_49;
}
else
{
lean_object* x_52; 
x_52 = l_Lean_Parser_setLhsPrecFn(x_21, x_1, x_49);
lean_dec(x_1);
return x_52;
}
}
}
}
}
else
{
lean_object* x_59; 
lean_dec(x_16);
lean_dec(x_11);
x_59 = l_Lean_Parser_orelseFnCore(x_27, x_26, x_13, x_1, x_2);
return x_59;
}
}
}
static lean_object* _init_l_Lean_Parser_Attr_export() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Attr");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("export");
lean_inc(x_8);
x_9 = lean_name_mk_string(x_7, x_8);
lean_inc(x_9);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = 1;
x_12 = l_Lean_Parser_mkAntiquot(x_8, x_10, x_11);
lean_dec(x_8);
x_13 = lean_mk_string("export ");
x_14 = l_String_trim(x_13);
lean_dec(x_13);
x_15 = l_Lean_Parser_symbolInfo(x_14);
x_16 = l_Lean_Parser_ident;
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = l_Lean_Parser_andthenInfo(x_15, x_17);
x_19 = l_Lean_Parser_nodeInfo(x_9, x_18);
x_20 = l_Lean_Parser_epsilonInfo;
x_21 = l_Lean_Parser_andthenInfo(x_19, x_20);
x_22 = l_Lean_Parser_andthenInfo(x_20, x_21);
x_23 = lean_ctor_get(x_12, 0);
lean_inc(x_23);
lean_dec(x_12);
x_24 = l_Lean_Parser_orelseInfo(x_23, x_22);
x_25 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_export___elambda__1), 2, 0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_export___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("export");
return x_1;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_export___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__2;
x_2 = l___regBuiltinParser_Lean_Parser_Attr_export___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___regBuiltinParser_Lean_Parser_Attr_export(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Lean_Parser_attrParser_formatter___rarg___closed__2;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_export___closed__2;
x_4 = 1;
x_5 = l_Lean_Parser_Attr_export;
x_6 = lean_unsigned_to_nat(1000u);
x_7 = l_Lean_Parser_addBuiltinParser(x_2, x_3, x_4, x_5, x_6, x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_export___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_export___closed__1;
x_2 = l_Lean_Parser_Attr_export_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("export ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Attr_export_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export_formatter___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_export_formatter___closed__4;
x_2 = l_Lean_Parser_Attr_simple_formatter___closed__4;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export_formatter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_export___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_export_formatter___closed__5;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_export_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_export_formatter___closed__2;
x_7 = l_Lean_Parser_Attr_export_formatter___closed__6;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_export_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_export___closed__2;
x_2 = l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_export_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_export_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Attr_export_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_export___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Attr_export_formatter___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Attr_export_formatter___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_export___closed__1;
x_2 = l_Lean_Parser_Attr_export_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Attr_export_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_export_parenthesizer___closed__2;
x_2 = l_Lean_Parser_Attr_simple_parenthesizer___closed__3;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_export___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_export_parenthesizer___closed__3;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_export_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_export_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Attr_export_parenthesizer___closed__4;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_export_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_export___closed__2;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_export_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_export_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Attr_export_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_export___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Attr_export_parenthesizer___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Attr_export_parenthesizer___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_Attr_recursor___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_3 = lean_box(0);
x_4 = lean_mk_string("Lean");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Parser");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Attr");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("recursor");
lean_inc(x_10);
x_11 = lean_name_mk_string(x_9, x_10);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = 1;
x_14 = l_Lean_Parser_mkAntiquot(x_10, x_12, x_13);
lean_dec(x_10);
x_15 = lean_mk_string("recursor ");
x_16 = l_String_trim(x_15);
lean_dec(x_15);
lean_inc(x_16);
x_17 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbolFn), 3, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = lean_alloc_closure((void*)(l_Lean_Parser_numLit___elambda__1), 2, 0);
x_20 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_20, 0, x_18);
lean_closure_set(x_20, 1, x_19);
x_21 = lean_unsigned_to_nat(1024u);
x_22 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_22, 0, x_21);
lean_inc(x_11);
x_23 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_23, 0, x_11);
lean_closure_set(x_23, 1, x_20);
x_24 = lean_alloc_closure((void*)(l_Lean_Parser_setLhsPrecFn___boxed), 3, 1);
lean_closure_set(x_24, 0, x_21);
x_25 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_25, 0, x_23);
lean_closure_set(x_25, 1, x_24);
x_26 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_26, 0, x_22);
lean_closure_set(x_26, 1, x_25);
x_27 = lean_ctor_get(x_14, 1);
lean_inc(x_27);
lean_dec(x_14);
lean_inc(x_2);
lean_inc(x_1);
x_28 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_27);
lean_dec(x_26);
x_29 = l_Lean_Parser_checkPrecFn(x_21, x_1, x_2);
x_30 = lean_ctor_get(x_29, 4);
lean_inc(x_30);
x_31 = lean_box(0);
x_32 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_30, x_31);
lean_dec(x_30);
if (x_32 == 0)
{
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_1);
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; 
x_33 = lean_ctor_get(x_29, 0);
lean_inc(x_33);
x_34 = lean_array_get_size(x_33);
lean_dec(x_33);
x_35 = lean_mk_string("'");
lean_inc(x_35);
x_36 = lean_string_append(x_35, x_16);
x_37 = lean_string_append(x_36, x_35);
lean_dec(x_35);
lean_inc(x_1);
x_38 = l_Lean_Parser_nonReservedSymbolFnAux(x_16, x_37, x_1, x_29);
x_39 = lean_ctor_get(x_38, 4);
lean_inc(x_39);
x_40 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_39, x_31);
lean_dec(x_39);
if (x_40 == 0)
{
x_41 = x_38;
goto block_53;
}
else
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_54 = lean_ctor_get(x_1, 4);
lean_inc(x_54);
x_55 = lean_unsigned_to_nat(0u);
x_56 = lean_nat_dec_eq(x_54, x_55);
lean_dec(x_54);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_box(0);
lean_inc(x_1);
x_58 = l_Lean_Parser_Attr_macro___elambda__1___lambda__1(x_38, x_1, x_31, x_57);
x_41 = x_58;
goto block_53;
}
else
{
x_41 = x_38;
goto block_53;
}
}
block_53:
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_ctor_get(x_41, 4);
lean_inc(x_42);
x_43 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_42, x_31);
lean_dec(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = l_Lean_Parser_ParserState_mkNode(x_41, x_11, x_34);
x_45 = lean_ctor_get(x_44, 4);
lean_inc(x_45);
x_46 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_45, x_31);
lean_dec(x_45);
if (x_46 == 0)
{
lean_dec(x_1);
return x_44;
}
else
{
lean_object* x_47; 
x_47 = l_Lean_Parser_setLhsPrecFn(x_21, x_1, x_44);
lean_dec(x_1);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
lean_inc(x_1);
x_48 = l_Lean_Parser_numLit___elambda__1(x_1, x_41);
x_49 = l_Lean_Parser_ParserState_mkNode(x_48, x_11, x_34);
x_50 = lean_ctor_get(x_49, 4);
lean_inc(x_50);
x_51 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_50, x_31);
lean_dec(x_50);
if (x_51 == 0)
{
lean_dec(x_1);
return x_49;
}
else
{
lean_object* x_52; 
x_52 = l_Lean_Parser_setLhsPrecFn(x_21, x_1, x_49);
lean_dec(x_1);
return x_52;
}
}
}
}
}
else
{
lean_object* x_59; 
lean_dec(x_16);
lean_dec(x_11);
x_59 = l_Lean_Parser_orelseFnCore(x_27, x_26, x_13, x_1, x_2);
return x_59;
}
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Attr");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("recursor");
lean_inc(x_8);
x_9 = lean_name_mk_string(x_7, x_8);
lean_inc(x_9);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = 1;
x_12 = l_Lean_Parser_mkAntiquot(x_8, x_10, x_11);
lean_dec(x_8);
x_13 = lean_mk_string("recursor ");
x_14 = l_String_trim(x_13);
lean_dec(x_13);
x_15 = 0;
x_16 = l_Lean_Parser_nonReservedSymbolInfo(x_14, x_15);
x_17 = l_Lean_Parser_numLit;
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = l_Lean_Parser_andthenInfo(x_16, x_18);
x_20 = l_Lean_Parser_nodeInfo(x_9, x_19);
x_21 = l_Lean_Parser_epsilonInfo;
x_22 = l_Lean_Parser_andthenInfo(x_20, x_21);
x_23 = l_Lean_Parser_andthenInfo(x_21, x_22);
x_24 = lean_ctor_get(x_12, 0);
lean_inc(x_24);
lean_dec(x_12);
x_25 = l_Lean_Parser_orelseInfo(x_24, x_23);
x_26 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_recursor___elambda__1), 2, 0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("recursor");
return x_1;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__2;
x_2 = l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___regBuiltinParser_Lean_Parser_Attr_recursor(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Lean_Parser_attrParser_formatter___rarg___closed__2;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__2;
x_4 = 1;
x_5 = l_Lean_Parser_Attr_recursor;
x_6 = lean_unsigned_to_nat(1000u);
x_7 = l_Lean_Parser_addBuiltinParser(x_2, x_3, x_4, x_5, x_6, x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__1;
x_2 = l_Lean_Parser_Attr_recursor_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("recursor ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor_formatter___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Attr_recursor_formatter___closed__3;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_formatter___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor_formatter___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_recursor_formatter___closed__4;
x_2 = l_Lean_Parser_Priority_numPrio_formatter___closed__1;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor_formatter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_recursor_formatter___closed__5;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_recursor_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_recursor_formatter___closed__2;
x_7 = l_Lean_Parser_Attr_recursor_formatter___closed__6;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_recursor_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__2;
x_2 = l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_recursor_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_recursor_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Attr_recursor_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Attr_recursor_formatter___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Attr_recursor_formatter___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__1;
x_2 = l_Lean_Parser_Attr_recursor_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Attr_recursor_formatter___closed__3;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_recursor_parenthesizer___closed__2;
x_2 = l_Lean_Parser_Priority_numPrio_parenthesizer___closed__2;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_recursor_parenthesizer___closed__3;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_recursor_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_recursor_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Attr_recursor_parenthesizer___closed__4;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__2;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_recursor_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_Attr_class___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_3 = lean_box(0);
x_4 = lean_mk_string("Lean");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Parser");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Attr");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("class");
lean_inc(x_10);
x_11 = lean_name_mk_string(x_9, x_10);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = 1;
x_14 = l_Lean_Parser_mkAntiquot(x_10, x_12, x_13);
x_15 = l_String_trim(x_10);
lean_dec(x_10);
lean_inc(x_15);
x_16 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = lean_unsigned_to_nat(1024u);
x_19 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_19, 0, x_18);
lean_inc(x_11);
x_20 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_20, 0, x_11);
lean_closure_set(x_20, 1, x_17);
x_21 = lean_alloc_closure((void*)(l_Lean_Parser_setLhsPrecFn___boxed), 3, 1);
lean_closure_set(x_21, 0, x_18);
x_22 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_22, 0, x_20);
lean_closure_set(x_22, 1, x_21);
x_23 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_23, 0, x_19);
lean_closure_set(x_23, 1, x_22);
x_24 = lean_ctor_get(x_14, 1);
lean_inc(x_24);
lean_dec(x_14);
lean_inc(x_2);
lean_inc(x_1);
x_25 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
lean_dec(x_24);
lean_dec(x_23);
x_26 = l_Lean_Parser_checkPrecFn(x_18, x_1, x_2);
x_27 = lean_ctor_get(x_26, 4);
lean_inc(x_27);
x_28 = lean_box(0);
x_29 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_27, x_28);
lean_dec(x_27);
if (x_29 == 0)
{
lean_dec(x_15);
lean_dec(x_11);
lean_dec(x_1);
return x_26;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_30 = lean_ctor_get(x_26, 0);
lean_inc(x_30);
x_31 = lean_array_get_size(x_30);
lean_dec(x_30);
x_32 = lean_mk_string("'");
lean_inc(x_32);
x_33 = lean_string_append(x_32, x_15);
x_34 = lean_string_append(x_33, x_32);
lean_dec(x_32);
lean_inc(x_1);
x_35 = l_Lean_Parser_symbolFnAux(x_15, x_34, x_1, x_26);
lean_dec(x_15);
x_36 = lean_ctor_get(x_35, 4);
lean_inc(x_36);
x_37 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_36, x_28);
lean_dec(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = l_Lean_Parser_ParserState_mkNode(x_35, x_11, x_31);
x_39 = lean_ctor_get(x_38, 4);
lean_inc(x_39);
x_40 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_39, x_28);
lean_dec(x_39);
if (x_40 == 0)
{
lean_dec(x_1);
return x_38;
}
else
{
lean_object* x_41; 
x_41 = l_Lean_Parser_setLhsPrecFn(x_18, x_1, x_38);
lean_dec(x_1);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_ctor_get(x_1, 4);
lean_inc(x_42);
x_43 = lean_unsigned_to_nat(0u);
x_44 = lean_nat_dec_eq(x_42, x_43);
lean_dec(x_42);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_45 = lean_box(0);
lean_inc(x_1);
x_46 = l_Lean_Parser_Attr_macro___elambda__1___lambda__1(x_35, x_1, x_28, x_45);
x_47 = l_Lean_Parser_ParserState_mkNode(x_46, x_11, x_31);
x_48 = lean_ctor_get(x_47, 4);
lean_inc(x_48);
x_49 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_48, x_28);
lean_dec(x_48);
if (x_49 == 0)
{
lean_dec(x_1);
return x_47;
}
else
{
lean_object* x_50; 
x_50 = l_Lean_Parser_setLhsPrecFn(x_18, x_1, x_47);
lean_dec(x_1);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_51 = l_Lean_Parser_ParserState_mkNode(x_35, x_11, x_31);
x_52 = lean_ctor_get(x_51, 4);
lean_inc(x_52);
x_53 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_52, x_28);
lean_dec(x_52);
if (x_53 == 0)
{
lean_dec(x_1);
return x_51;
}
else
{
lean_object* x_54; 
x_54 = l_Lean_Parser_setLhsPrecFn(x_18, x_1, x_51);
lean_dec(x_1);
return x_54;
}
}
}
}
}
else
{
lean_object* x_55; 
lean_dec(x_15);
lean_dec(x_11);
x_55 = l_Lean_Parser_orelseFnCore(x_24, x_23, x_13, x_1, x_2);
return x_55;
}
}
}
static lean_object* _init_l_Lean_Parser_Attr_class() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Attr");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("class");
lean_inc(x_8);
x_9 = lean_name_mk_string(x_7, x_8);
lean_inc(x_9);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = 1;
x_12 = l_Lean_Parser_mkAntiquot(x_8, x_10, x_11);
x_13 = l_String_trim(x_8);
lean_dec(x_8);
x_14 = l_Lean_Parser_symbolInfo(x_13);
x_15 = l_Lean_Parser_nodeInfo(x_9, x_14);
x_16 = l_Lean_Parser_epsilonInfo;
x_17 = l_Lean_Parser_andthenInfo(x_15, x_16);
x_18 = l_Lean_Parser_andthenInfo(x_16, x_17);
x_19 = lean_ctor_get(x_12, 0);
lean_inc(x_19);
lean_dec(x_12);
x_20 = l_Lean_Parser_orelseInfo(x_19, x_18);
x_21 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_class___elambda__1), 2, 0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_class___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("class");
return x_1;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_class___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__2;
x_2 = l___regBuiltinParser_Lean_Parser_Attr_class___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___regBuiltinParser_Lean_Parser_Attr_class(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Lean_Parser_attrParser_formatter___rarg___closed__2;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_class___closed__2;
x_4 = 1;
x_5 = l_Lean_Parser_Attr_class;
x_6 = lean_unsigned_to_nat(1000u);
x_7 = l_Lean_Parser_addBuiltinParser(x_2, x_3, x_4, x_5, x_6, x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_class___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_class___closed__1;
x_2 = l_Lean_Parser_Attr_class_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_class___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_class___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_class_formatter___closed__3;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_class_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_class_formatter___closed__2;
x_7 = l_Lean_Parser_Attr_class_formatter___closed__4;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_class_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_class___closed__2;
x_2 = l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_class_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_class_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Attr_class_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_class___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Attr_class_formatter___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Attr_class_formatter___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_class___closed__1;
x_2 = l_Lean_Parser_Attr_class_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_class___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_class___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_class_parenthesizer___closed__2;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_class_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_class_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Attr_class_parenthesizer___closed__3;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_class_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_class___closed__2;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_class_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_class_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Attr_class_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_class___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Attr_class_parenthesizer___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Attr_class_parenthesizer___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_Attr_instance___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_3 = lean_box(0);
x_4 = lean_mk_string("Lean");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Parser");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Attr");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("instance");
lean_inc(x_10);
x_11 = lean_name_mk_string(x_9, x_10);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = 1;
x_14 = l_Lean_Parser_mkAntiquot(x_10, x_12, x_13);
x_15 = lean_mk_string("prio");
x_16 = lean_name_mk_string(x_3, x_15);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Lean_Parser_categoryParser(x_16, x_17);
x_19 = l_Lean_Parser_optional(x_18);
x_20 = l_String_trim(x_10);
lean_dec(x_10);
lean_inc(x_20);
x_21 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_21, 0, x_20);
x_22 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_22, 0, x_21);
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
lean_inc(x_23);
x_24 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_24, 0, x_22);
lean_closure_set(x_24, 1, x_23);
x_25 = lean_unsigned_to_nat(1024u);
x_26 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_26, 0, x_25);
lean_inc(x_11);
x_27 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_27, 0, x_11);
lean_closure_set(x_27, 1, x_24);
x_28 = lean_alloc_closure((void*)(l_Lean_Parser_setLhsPrecFn___boxed), 3, 1);
lean_closure_set(x_28, 0, x_25);
x_29 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_29, 0, x_27);
lean_closure_set(x_29, 1, x_28);
x_30 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_30, 0, x_26);
lean_closure_set(x_30, 1, x_29);
x_31 = lean_ctor_get(x_14, 1);
lean_inc(x_31);
lean_dec(x_14);
lean_inc(x_2);
lean_inc(x_1);
x_32 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_31);
lean_dec(x_30);
x_33 = l_Lean_Parser_checkPrecFn(x_25, x_1, x_2);
x_34 = lean_ctor_get(x_33, 4);
lean_inc(x_34);
x_35 = lean_box(0);
x_36 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_34, x_35);
lean_dec(x_34);
if (x_36 == 0)
{
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_1);
return x_33;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; 
x_37 = lean_ctor_get(x_33, 0);
lean_inc(x_37);
x_38 = lean_array_get_size(x_37);
lean_dec(x_37);
x_39 = lean_mk_string("'");
lean_inc(x_39);
x_40 = lean_string_append(x_39, x_20);
x_41 = lean_string_append(x_40, x_39);
lean_dec(x_39);
lean_inc(x_1);
x_42 = l_Lean_Parser_symbolFnAux(x_20, x_41, x_1, x_33);
lean_dec(x_20);
x_43 = lean_ctor_get(x_42, 4);
lean_inc(x_43);
x_44 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_43, x_35);
lean_dec(x_43);
if (x_44 == 0)
{
x_45 = x_42;
goto block_57;
}
else
{
lean_object* x_58; uint8_t x_59; 
x_58 = lean_ctor_get(x_1, 4);
lean_inc(x_58);
x_59 = lean_nat_dec_eq(x_58, x_17);
lean_dec(x_58);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_box(0);
lean_inc(x_1);
x_61 = l_Lean_Parser_Attr_macro___elambda__1___lambda__1(x_42, x_1, x_35, x_60);
x_45 = x_61;
goto block_57;
}
else
{
x_45 = x_42;
goto block_57;
}
}
block_57:
{
lean_object* x_46; uint8_t x_47; 
x_46 = lean_ctor_get(x_45, 4);
lean_inc(x_46);
x_47 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_46, x_35);
lean_dec(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; 
lean_dec(x_23);
x_48 = l_Lean_Parser_ParserState_mkNode(x_45, x_11, x_38);
x_49 = lean_ctor_get(x_48, 4);
lean_inc(x_49);
x_50 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_49, x_35);
lean_dec(x_49);
if (x_50 == 0)
{
lean_dec(x_1);
return x_48;
}
else
{
lean_object* x_51; 
x_51 = l_Lean_Parser_setLhsPrecFn(x_25, x_1, x_48);
lean_dec(x_1);
return x_51;
}
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
lean_inc(x_1);
x_52 = lean_apply_2(x_23, x_1, x_45);
x_53 = l_Lean_Parser_ParserState_mkNode(x_52, x_11, x_38);
x_54 = lean_ctor_get(x_53, 4);
lean_inc(x_54);
x_55 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_54, x_35);
lean_dec(x_54);
if (x_55 == 0)
{
lean_dec(x_1);
return x_53;
}
else
{
lean_object* x_56; 
x_56 = l_Lean_Parser_setLhsPrecFn(x_25, x_1, x_53);
lean_dec(x_1);
return x_56;
}
}
}
}
}
else
{
lean_object* x_62; 
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_11);
x_62 = l_Lean_Parser_orelseFnCore(x_31, x_30, x_13, x_1, x_2);
return x_62;
}
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Attr");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("instance");
lean_inc(x_8);
x_9 = lean_name_mk_string(x_7, x_8);
lean_inc(x_9);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = 1;
x_12 = l_Lean_Parser_mkAntiquot(x_8, x_10, x_11);
x_13 = lean_mk_string("prio");
x_14 = lean_name_mk_string(x_1, x_13);
x_15 = lean_unsigned_to_nat(0u);
x_16 = l_Lean_Parser_categoryParser(x_14, x_15);
x_17 = l_Lean_Parser_optional(x_16);
x_18 = l_String_trim(x_8);
lean_dec(x_8);
x_19 = l_Lean_Parser_symbolInfo(x_18);
x_20 = lean_ctor_get(x_17, 0);
lean_inc(x_20);
lean_dec(x_17);
x_21 = l_Lean_Parser_andthenInfo(x_19, x_20);
x_22 = l_Lean_Parser_nodeInfo(x_9, x_21);
x_23 = l_Lean_Parser_epsilonInfo;
x_24 = l_Lean_Parser_andthenInfo(x_22, x_23);
x_25 = l_Lean_Parser_andthenInfo(x_23, x_24);
x_26 = lean_ctor_get(x_12, 0);
lean_inc(x_26);
lean_dec(x_12);
x_27 = l_Lean_Parser_orelseInfo(x_26, x_25);
x_28 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_instance___elambda__1), 2, 0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_instance___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("instance");
return x_1;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_instance___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__2;
x_2 = l___regBuiltinParser_Lean_Parser_Attr_instance___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___regBuiltinParser_Lean_Parser_Attr_instance(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Lean_Parser_attrParser_formatter___rarg___closed__2;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_instance___closed__2;
x_4 = 1;
x_5 = l_Lean_Parser_Attr_instance;
x_6 = lean_unsigned_to_nat(1000u);
x_7 = l_Lean_Parser_addBuiltinParser(x_2, x_3, x_4, x_5, x_6, x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_instance___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_instance___closed__1;
x_2 = l_Lean_Parser_Attr_instance_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_instance___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Attr_simple_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_optional_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance_formatter___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_instance_formatter___closed__3;
x_2 = l_Lean_Parser_Attr_instance_formatter___closed__4;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance_formatter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_instance___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_instance_formatter___closed__5;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_instance_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_instance_formatter___closed__2;
x_7 = l_Lean_Parser_Attr_instance_formatter___closed__6;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_instance_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_instance___closed__2;
x_2 = l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_instance_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_instance_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Attr_instance_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_instance___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Attr_instance_formatter___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Attr_instance_formatter___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_instance___closed__1;
x_2 = l_Lean_Parser_Attr_instance_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_instance___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Attr_simple_parenthesizer___closed__2;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_optional_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_instance_parenthesizer___closed__2;
x_2 = l_Lean_Parser_Attr_instance_parenthesizer___closed__3;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance_parenthesizer___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_instance___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_instance_parenthesizer___closed__4;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_instance_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_instance_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Attr_instance_parenthesizer___closed__5;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_instance_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_instance___closed__2;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_instance_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_instance_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Attr_instance_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_instance___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Attr_instance_parenthesizer___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Attr_instance_parenthesizer___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_Attr_defaultInstance___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_3 = lean_box(0);
x_4 = lean_mk_string("Lean");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Parser");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Attr");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("defaultInstance");
lean_inc(x_10);
x_11 = lean_name_mk_string(x_9, x_10);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = 1;
x_14 = l_Lean_Parser_mkAntiquot(x_10, x_12, x_13);
lean_dec(x_10);
x_15 = lean_mk_string("defaultInstance ");
x_16 = l_String_trim(x_15);
lean_dec(x_15);
lean_inc(x_16);
x_17 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbolFn), 3, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = lean_mk_string("prio");
x_20 = lean_name_mk_string(x_3, x_19);
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Lean_Parser_categoryParser(x_20, x_21);
x_23 = l_Lean_Parser_optional(x_22);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
lean_inc(x_24);
x_25 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_25, 0, x_18);
lean_closure_set(x_25, 1, x_24);
x_26 = lean_unsigned_to_nat(1024u);
x_27 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_27, 0, x_26);
lean_inc(x_11);
x_28 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_28, 0, x_11);
lean_closure_set(x_28, 1, x_25);
x_29 = lean_alloc_closure((void*)(l_Lean_Parser_setLhsPrecFn___boxed), 3, 1);
lean_closure_set(x_29, 0, x_26);
x_30 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_30, 0, x_28);
lean_closure_set(x_30, 1, x_29);
x_31 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_31, 0, x_27);
lean_closure_set(x_31, 1, x_30);
x_32 = lean_ctor_get(x_14, 1);
lean_inc(x_32);
lean_dec(x_14);
lean_inc(x_2);
lean_inc(x_1);
x_33 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
lean_dec(x_32);
lean_dec(x_31);
x_34 = l_Lean_Parser_checkPrecFn(x_26, x_1, x_2);
x_35 = lean_ctor_get(x_34, 4);
lean_inc(x_35);
x_36 = lean_box(0);
x_37 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_35, x_36);
lean_dec(x_35);
if (x_37 == 0)
{
lean_dec(x_24);
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_1);
return x_34;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; 
x_38 = lean_ctor_get(x_34, 0);
lean_inc(x_38);
x_39 = lean_array_get_size(x_38);
lean_dec(x_38);
x_40 = lean_mk_string("'");
lean_inc(x_40);
x_41 = lean_string_append(x_40, x_16);
x_42 = lean_string_append(x_41, x_40);
lean_dec(x_40);
lean_inc(x_1);
x_43 = l_Lean_Parser_nonReservedSymbolFnAux(x_16, x_42, x_1, x_34);
x_44 = lean_ctor_get(x_43, 4);
lean_inc(x_44);
x_45 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_44, x_36);
lean_dec(x_44);
if (x_45 == 0)
{
x_46 = x_43;
goto block_58;
}
else
{
lean_object* x_59; uint8_t x_60; 
x_59 = lean_ctor_get(x_1, 4);
lean_inc(x_59);
x_60 = lean_nat_dec_eq(x_59, x_21);
lean_dec(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_box(0);
lean_inc(x_1);
x_62 = l_Lean_Parser_Attr_macro___elambda__1___lambda__1(x_43, x_1, x_36, x_61);
x_46 = x_62;
goto block_58;
}
else
{
x_46 = x_43;
goto block_58;
}
}
block_58:
{
lean_object* x_47; uint8_t x_48; 
x_47 = lean_ctor_get(x_46, 4);
lean_inc(x_47);
x_48 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_47, x_36);
lean_dec(x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
lean_dec(x_24);
x_49 = l_Lean_Parser_ParserState_mkNode(x_46, x_11, x_39);
x_50 = lean_ctor_get(x_49, 4);
lean_inc(x_50);
x_51 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_50, x_36);
lean_dec(x_50);
if (x_51 == 0)
{
lean_dec(x_1);
return x_49;
}
else
{
lean_object* x_52; 
x_52 = l_Lean_Parser_setLhsPrecFn(x_26, x_1, x_49);
lean_dec(x_1);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
lean_inc(x_1);
x_53 = lean_apply_2(x_24, x_1, x_46);
x_54 = l_Lean_Parser_ParserState_mkNode(x_53, x_11, x_39);
x_55 = lean_ctor_get(x_54, 4);
lean_inc(x_55);
x_56 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_55, x_36);
lean_dec(x_55);
if (x_56 == 0)
{
lean_dec(x_1);
return x_54;
}
else
{
lean_object* x_57; 
x_57 = l_Lean_Parser_setLhsPrecFn(x_26, x_1, x_54);
lean_dec(x_1);
return x_57;
}
}
}
}
}
else
{
lean_object* x_63; 
lean_dec(x_24);
lean_dec(x_16);
lean_dec(x_11);
x_63 = l_Lean_Parser_orelseFnCore(x_32, x_31, x_13, x_1, x_2);
return x_63;
}
}
}
static lean_object* _init_l_Lean_Parser_Attr_defaultInstance() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Attr");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("defaultInstance");
lean_inc(x_8);
x_9 = lean_name_mk_string(x_7, x_8);
lean_inc(x_9);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = 1;
x_12 = l_Lean_Parser_mkAntiquot(x_8, x_10, x_11);
lean_dec(x_8);
x_13 = lean_mk_string("defaultInstance ");
x_14 = l_String_trim(x_13);
lean_dec(x_13);
x_15 = 0;
x_16 = l_Lean_Parser_nonReservedSymbolInfo(x_14, x_15);
x_17 = lean_mk_string("prio");
x_18 = lean_name_mk_string(x_1, x_17);
x_19 = lean_unsigned_to_nat(0u);
x_20 = l_Lean_Parser_categoryParser(x_18, x_19);
x_21 = l_Lean_Parser_optional(x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
x_23 = l_Lean_Parser_andthenInfo(x_16, x_22);
x_24 = l_Lean_Parser_nodeInfo(x_9, x_23);
x_25 = l_Lean_Parser_epsilonInfo;
x_26 = l_Lean_Parser_andthenInfo(x_24, x_25);
x_27 = l_Lean_Parser_andthenInfo(x_25, x_26);
x_28 = lean_ctor_get(x_12, 0);
lean_inc(x_28);
lean_dec(x_12);
x_29 = l_Lean_Parser_orelseInfo(x_28, x_27);
x_30 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_defaultInstance___elambda__1), 2, 0);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("defaultInstance");
return x_1;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__2;
x_2 = l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___regBuiltinParser_Lean_Parser_Attr_defaultInstance(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Lean_Parser_attrParser_formatter___rarg___closed__2;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__2;
x_4 = 1;
x_5 = l_Lean_Parser_Attr_defaultInstance;
x_6 = lean_unsigned_to_nat(1000u);
x_7 = l_Lean_Parser_addBuiltinParser(x_2, x_3, x_4, x_5, x_6, x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_Attr_defaultInstance_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_defaultInstance_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__1;
x_2 = l_Lean_Parser_Attr_defaultInstance_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_defaultInstance_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("defaultInstance ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_defaultInstance_formatter___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Attr_defaultInstance_formatter___closed__3;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_formatter___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Attr_defaultInstance_formatter___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_defaultInstance_formatter___closed__4;
x_2 = l_Lean_Parser_Attr_instance_formatter___closed__4;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_defaultInstance_formatter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_defaultInstance_formatter___closed__5;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_defaultInstance_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_defaultInstance_formatter___closed__2;
x_7 = l_Lean_Parser_Attr_defaultInstance_formatter___closed__6;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_defaultInstance_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__2;
x_2 = l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_defaultInstance_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_defaultInstance_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Attr_defaultInstance_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Attr_defaultInstance_formatter___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Attr_defaultInstance_formatter___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__1;
x_2 = l_Lean_Parser_Attr_defaultInstance_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Attr_defaultInstance_formatter___closed__3;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__2;
x_2 = l_Lean_Parser_Attr_instance_parenthesizer___closed__3;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__3;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_defaultInstance_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__4;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__2;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_defaultInstance_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Attr_defaultInstance_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* l_Lean_Parser_Attr_externEntry___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_3 = lean_box(0);
x_4 = lean_mk_string("Lean");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Parser");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Attr");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("externEntry");
lean_inc(x_10);
x_11 = lean_name_mk_string(x_9, x_10);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = 1;
x_14 = l_Lean_Parser_mkAntiquot(x_10, x_12, x_13);
lean_dec(x_10);
x_15 = l_Lean_Parser_ident;
x_16 = l_Lean_Parser_optional(x_15);
x_17 = lean_mk_string("inline ");
x_18 = l_String_trim(x_17);
lean_dec(x_17);
x_19 = 0;
lean_inc(x_18);
x_20 = l_Lean_Parser_nonReservedSymbolInfo(x_18, x_19);
x_21 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbolFn), 3, 1);
lean_closure_set(x_21, 0, x_18);
x_22 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_20);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Lean_Parser_optional(x_23);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_alloc_closure((void*)(l_Lean_Parser_strLit___elambda__1), 2, 0);
lean_inc(x_25);
x_27 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_27, 0, x_25);
lean_closure_set(x_27, 1, x_26);
x_28 = lean_ctor_get(x_16, 1);
lean_inc(x_28);
lean_dec(x_16);
lean_inc(x_28);
x_29 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_29, 0, x_28);
lean_closure_set(x_29, 1, x_27);
x_30 = lean_unsigned_to_nat(1024u);
x_31 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_31, 0, x_30);
lean_inc(x_11);
x_32 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_32, 0, x_11);
lean_closure_set(x_32, 1, x_29);
x_33 = lean_alloc_closure((void*)(l_Lean_Parser_setLhsPrecFn___boxed), 3, 1);
lean_closure_set(x_33, 0, x_30);
x_34 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_34, 0, x_32);
lean_closure_set(x_34, 1, x_33);
x_35 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_35, 0, x_31);
lean_closure_set(x_35, 1, x_34);
x_36 = lean_ctor_get(x_14, 1);
lean_inc(x_36);
lean_dec(x_14);
lean_inc(x_2);
lean_inc(x_1);
x_37 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
lean_dec(x_36);
lean_dec(x_35);
x_38 = l_Lean_Parser_checkPrecFn(x_30, x_1, x_2);
x_39 = lean_ctor_get(x_38, 4);
lean_inc(x_39);
x_40 = lean_box(0);
x_41 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_39, x_40);
lean_dec(x_39);
if (x_41 == 0)
{
lean_dec(x_28);
lean_dec(x_25);
lean_dec(x_11);
lean_dec(x_1);
return x_38;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_42 = lean_ctor_get(x_38, 0);
lean_inc(x_42);
x_43 = lean_array_get_size(x_42);
lean_dec(x_42);
lean_inc(x_1);
x_44 = lean_apply_2(x_28, x_1, x_38);
x_45 = lean_ctor_get(x_44, 4);
lean_inc(x_45);
x_46 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_45, x_40);
lean_dec(x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; 
lean_dec(x_25);
x_47 = l_Lean_Parser_ParserState_mkNode(x_44, x_11, x_43);
x_48 = lean_ctor_get(x_47, 4);
lean_inc(x_48);
x_49 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_48, x_40);
lean_dec(x_48);
if (x_49 == 0)
{
lean_dec(x_1);
return x_47;
}
else
{
lean_object* x_50; 
x_50 = l_Lean_Parser_setLhsPrecFn(x_30, x_1, x_47);
lean_dec(x_1);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
lean_inc(x_1);
x_51 = lean_apply_2(x_25, x_1, x_44);
x_52 = lean_ctor_get(x_51, 4);
lean_inc(x_52);
x_53 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_52, x_40);
lean_dec(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_54 = l_Lean_Parser_ParserState_mkNode(x_51, x_11, x_43);
x_55 = lean_ctor_get(x_54, 4);
lean_inc(x_55);
x_56 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_55, x_40);
lean_dec(x_55);
if (x_56 == 0)
{
lean_dec(x_1);
return x_54;
}
else
{
lean_object* x_57; 
x_57 = l_Lean_Parser_setLhsPrecFn(x_30, x_1, x_54);
lean_dec(x_1);
return x_57;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
lean_inc(x_1);
x_58 = l_Lean_Parser_strLit___elambda__1(x_1, x_51);
x_59 = l_Lean_Parser_ParserState_mkNode(x_58, x_11, x_43);
x_60 = lean_ctor_get(x_59, 4);
lean_inc(x_60);
x_61 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_60, x_40);
lean_dec(x_60);
if (x_61 == 0)
{
lean_dec(x_1);
return x_59;
}
else
{
lean_object* x_62; 
x_62 = l_Lean_Parser_setLhsPrecFn(x_30, x_1, x_59);
lean_dec(x_1);
return x_62;
}
}
}
}
}
else
{
lean_object* x_63; 
lean_dec(x_28);
lean_dec(x_25);
lean_dec(x_11);
x_63 = l_Lean_Parser_orelseFnCore(x_36, x_35, x_13, x_1, x_2);
return x_63;
}
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Attr");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("externEntry");
lean_inc(x_8);
x_9 = lean_name_mk_string(x_7, x_8);
lean_inc(x_9);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = 1;
x_12 = l_Lean_Parser_mkAntiquot(x_8, x_10, x_11);
lean_dec(x_8);
x_13 = l_Lean_Parser_ident;
x_14 = l_Lean_Parser_optional(x_13);
x_15 = lean_mk_string("inline ");
x_16 = l_String_trim(x_15);
lean_dec(x_15);
x_17 = 0;
lean_inc(x_16);
x_18 = l_Lean_Parser_nonReservedSymbolInfo(x_16, x_17);
x_19 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbolFn), 3, 1);
lean_closure_set(x_19, 0, x_16);
x_20 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_Parser_optional(x_21);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_Lean_Parser_strLit;
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = l_Lean_Parser_andthenInfo(x_23, x_25);
x_27 = lean_ctor_get(x_14, 0);
lean_inc(x_27);
lean_dec(x_14);
x_28 = l_Lean_Parser_andthenInfo(x_27, x_26);
x_29 = l_Lean_Parser_nodeInfo(x_9, x_28);
x_30 = l_Lean_Parser_epsilonInfo;
x_31 = l_Lean_Parser_andthenInfo(x_29, x_30);
x_32 = l_Lean_Parser_andthenInfo(x_30, x_31);
x_33 = lean_ctor_get(x_12, 0);
lean_inc(x_33);
lean_dec(x_12);
x_34 = l_Lean_Parser_orelseInfo(x_33, x_32);
x_35 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_externEntry___elambda__1), 2, 0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
lean_object* l_Lean_Parser_Attr_extern___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_3 = lean_box(0);
x_4 = lean_mk_string("Lean");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Parser");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Attr");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("extern");
lean_inc(x_10);
x_11 = lean_name_mk_string(x_9, x_10);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = 1;
x_14 = l_Lean_Parser_mkAntiquot(x_10, x_12, x_13);
lean_dec(x_10);
x_15 = lean_mk_string("extern ");
x_16 = l_String_trim(x_15);
lean_dec(x_15);
lean_inc(x_16);
x_17 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbolFn), 3, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_18, 0, x_17);
x_19 = l_Lean_Parser_numLit;
x_20 = l_Lean_Parser_optional(x_19);
x_21 = l_Lean_Parser_Attr_externEntry;
x_22 = l_Lean_Parser_many(x_21);
x_23 = lean_ctor_get(x_20, 1);
lean_inc(x_23);
lean_dec(x_20);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_24);
lean_inc(x_23);
x_25 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_25, 0, x_23);
lean_closure_set(x_25, 1, x_24);
x_26 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_26, 0, x_18);
lean_closure_set(x_26, 1, x_25);
x_27 = lean_unsigned_to_nat(1024u);
x_28 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_28, 0, x_27);
lean_inc(x_11);
x_29 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_29, 0, x_11);
lean_closure_set(x_29, 1, x_26);
x_30 = lean_alloc_closure((void*)(l_Lean_Parser_setLhsPrecFn___boxed), 3, 1);
lean_closure_set(x_30, 0, x_27);
x_31 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_31, 0, x_29);
lean_closure_set(x_31, 1, x_30);
x_32 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_32, 0, x_28);
lean_closure_set(x_32, 1, x_31);
x_33 = lean_ctor_get(x_14, 1);
lean_inc(x_33);
lean_dec(x_14);
lean_inc(x_2);
lean_inc(x_1);
x_34 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_dec(x_33);
lean_dec(x_32);
x_35 = l_Lean_Parser_checkPrecFn(x_27, x_1, x_2);
x_36 = lean_ctor_get(x_35, 4);
lean_inc(x_36);
x_37 = lean_box(0);
x_38 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_36, x_37);
lean_dec(x_36);
if (x_38 == 0)
{
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_1);
return x_35;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; 
x_39 = lean_ctor_get(x_35, 0);
lean_inc(x_39);
x_40 = lean_array_get_size(x_39);
lean_dec(x_39);
x_41 = lean_mk_string("'");
lean_inc(x_41);
x_42 = lean_string_append(x_41, x_16);
x_43 = lean_string_append(x_42, x_41);
lean_dec(x_41);
lean_inc(x_1);
x_44 = l_Lean_Parser_nonReservedSymbolFnAux(x_16, x_43, x_1, x_35);
x_45 = lean_ctor_get(x_44, 4);
lean_inc(x_45);
x_46 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_45, x_37);
lean_dec(x_45);
if (x_46 == 0)
{
x_47 = x_44;
goto block_66;
}
else
{
lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_67 = lean_ctor_get(x_1, 4);
lean_inc(x_67);
x_68 = lean_unsigned_to_nat(0u);
x_69 = lean_nat_dec_eq(x_67, x_68);
lean_dec(x_67);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; 
x_70 = lean_box(0);
lean_inc(x_1);
x_71 = l_Lean_Parser_Attr_macro___elambda__1___lambda__1(x_44, x_1, x_37, x_70);
x_47 = x_71;
goto block_66;
}
else
{
x_47 = x_44;
goto block_66;
}
}
block_66:
{
lean_object* x_48; uint8_t x_49; 
x_48 = lean_ctor_get(x_47, 4);
lean_inc(x_48);
x_49 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_48, x_37);
lean_dec(x_48);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; uint8_t x_52; 
lean_dec(x_24);
lean_dec(x_23);
x_50 = l_Lean_Parser_ParserState_mkNode(x_47, x_11, x_40);
x_51 = lean_ctor_get(x_50, 4);
lean_inc(x_51);
x_52 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_51, x_37);
lean_dec(x_51);
if (x_52 == 0)
{
lean_dec(x_1);
return x_50;
}
else
{
lean_object* x_53; 
x_53 = l_Lean_Parser_setLhsPrecFn(x_27, x_1, x_50);
lean_dec(x_1);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
lean_inc(x_1);
x_54 = lean_apply_2(x_23, x_1, x_47);
x_55 = lean_ctor_get(x_54, 4);
lean_inc(x_55);
x_56 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_55, x_37);
lean_dec(x_55);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; uint8_t x_59; 
lean_dec(x_24);
x_57 = l_Lean_Parser_ParserState_mkNode(x_54, x_11, x_40);
x_58 = lean_ctor_get(x_57, 4);
lean_inc(x_58);
x_59 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_58, x_37);
lean_dec(x_58);
if (x_59 == 0)
{
lean_dec(x_1);
return x_57;
}
else
{
lean_object* x_60; 
x_60 = l_Lean_Parser_setLhsPrecFn(x_27, x_1, x_57);
lean_dec(x_1);
return x_60;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
lean_inc(x_1);
x_61 = lean_apply_2(x_24, x_1, x_54);
x_62 = l_Lean_Parser_ParserState_mkNode(x_61, x_11, x_40);
x_63 = lean_ctor_get(x_62, 4);
lean_inc(x_63);
x_64 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_63, x_37);
lean_dec(x_63);
if (x_64 == 0)
{
lean_dec(x_1);
return x_62;
}
else
{
lean_object* x_65; 
x_65 = l_Lean_Parser_setLhsPrecFn(x_27, x_1, x_62);
lean_dec(x_1);
return x_65;
}
}
}
}
}
}
else
{
lean_object* x_72; 
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_16);
lean_dec(x_11);
x_72 = l_Lean_Parser_orelseFnCore(x_33, x_32, x_13, x_1, x_2);
return x_72;
}
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Attr");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("extern");
lean_inc(x_8);
x_9 = lean_name_mk_string(x_7, x_8);
lean_inc(x_9);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = 1;
x_12 = l_Lean_Parser_mkAntiquot(x_8, x_10, x_11);
lean_dec(x_8);
x_13 = lean_mk_string("extern ");
x_14 = l_String_trim(x_13);
lean_dec(x_13);
x_15 = 0;
x_16 = l_Lean_Parser_nonReservedSymbolInfo(x_14, x_15);
x_17 = l_Lean_Parser_numLit;
x_18 = l_Lean_Parser_optional(x_17);
x_19 = l_Lean_Parser_Attr_externEntry;
x_20 = l_Lean_Parser_many(x_19);
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
lean_dec(x_20);
x_23 = l_Lean_Parser_andthenInfo(x_21, x_22);
x_24 = l_Lean_Parser_andthenInfo(x_16, x_23);
x_25 = l_Lean_Parser_nodeInfo(x_9, x_24);
x_26 = l_Lean_Parser_epsilonInfo;
x_27 = l_Lean_Parser_andthenInfo(x_25, x_26);
x_28 = l_Lean_Parser_andthenInfo(x_26, x_27);
x_29 = lean_ctor_get(x_12, 0);
lean_inc(x_29);
lean_dec(x_12);
x_30 = l_Lean_Parser_orelseInfo(x_29, x_28);
x_31 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_extern___elambda__1), 2, 0);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_extern___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("extern");
return x_1;
}
}
static lean_object* _init_l___regBuiltinParser_Lean_Parser_Attr_extern___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__2;
x_2 = l___regBuiltinParser_Lean_Parser_Attr_extern___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___regBuiltinParser_Lean_Parser_Attr_extern(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = l_Lean_Parser_attrParser_formatter___rarg___closed__2;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_extern___closed__2;
x_4 = 1;
x_5 = l_Lean_Parser_Attr_extern;
x_6 = lean_unsigned_to_nat(1000u);
x_7 = l_Lean_Parser_addBuiltinParser(x_2, x_3, x_4, x_5, x_6, x_1);
return x_7;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("externEntry");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_simple___closed__2;
x_2 = l_Lean_Parser_Attr_externEntry_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Attr_externEntry_formatter___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Attr_externEntry_formatter___closed__1;
x_2 = l_Lean_Parser_Attr_externEntry_formatter___closed__3;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_formatter___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Attr_simple_formatter___closed__4;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_optional_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_formatter___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("inline ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_formatter___closed__7() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Attr_externEntry_formatter___closed__6;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_formatter___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_formatter___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Attr_externEntry_formatter___closed__7;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_optional_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_formatter___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_strLit_formatter), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_formatter___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_externEntry_formatter___closed__8;
x_2 = l_Lean_Parser_Attr_externEntry_formatter___closed__9;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_formatter___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_externEntry_formatter___closed__5;
x_2 = l_Lean_Parser_Attr_externEntry_formatter___closed__10;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_formatter___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Attr_externEntry_formatter___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_externEntry_formatter___closed__11;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_externEntry_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_externEntry_formatter___closed__4;
x_7 = l_Lean_Parser_Attr_externEntry_formatter___closed__12;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_extern___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_extern___closed__1;
x_2 = l_Lean_Parser_Attr_extern_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("extern ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Attr_extern_formatter___closed__3;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_formatter___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Priority_numPrio_formatter___closed__1;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_optional_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_externEntry_formatter), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Attr_extern_formatter___closed__6;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_many_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_extern_formatter___closed__5;
x_2 = l_Lean_Parser_Attr_extern_formatter___closed__7;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_extern_formatter___closed__4;
x_2 = l_Lean_Parser_Attr_extern_formatter___closed__8;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_extern___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_extern_formatter___closed__9;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_extern_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_extern_formatter___closed__2;
x_7 = l_Lean_Parser_Attr_extern_formatter___closed__10;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_extern_formatter___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_extern___closed__2;
x_2 = l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_extern_formatter___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_extern_formatter), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Attr_extern_formatter(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_formatterAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_extern___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Attr_extern_formatter___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Attr_extern_formatter___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Attr_externEntry_formatter___closed__1;
x_2 = l_Lean_Parser_Attr_externEntry_formatter___closed__3;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Attr_simple_parenthesizer___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_optional_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Attr_externEntry_formatter___closed__6;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Attr_externEntry_parenthesizer___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_optional_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_parenthesizer___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_strLit_parenthesizer), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_parenthesizer___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_externEntry_parenthesizer___closed__4;
x_2 = l_Lean_Parser_Attr_externEntry_parenthesizer___closed__5;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_parenthesizer___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_externEntry_parenthesizer___closed__2;
x_2 = l_Lean_Parser_Attr_externEntry_parenthesizer___closed__6;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry_parenthesizer___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Attr_externEntry_formatter___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_externEntry_parenthesizer___closed__7;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_externEntry_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Attr_externEntry_parenthesizer___closed__8;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_extern___closed__1;
x_2 = l_Lean_Parser_Attr_extern_formatter___closed__1;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Attr_extern_formatter___closed__3;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed), 7, 2);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Priority_numPrio_parenthesizer___closed__2;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_optional_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_externEntry_parenthesizer), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Attr_extern_parenthesizer___closed__4;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_many_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_extern_parenthesizer___closed__3;
x_2 = l_Lean_Parser_Attr_extern_parenthesizer___closed__5;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Attr_extern_parenthesizer___closed__2;
x_2 = l_Lean_Parser_Attr_extern_parenthesizer___closed__6;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_extern___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Attr_extern_parenthesizer___closed__7;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Attr_extern_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Attr_extern_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Attr_extern_parenthesizer___closed__8;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_extern_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Attr_extern___closed__2;
x_2 = l___regBuiltin_Lean_PrettyPrinter_Parenthesizer_term_parenthesizer___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l___regBuiltin_Lean_Parser_Attr_extern_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Attr_extern_parenthesizer), 5, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Parser_Attr_extern_parenthesizer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_PrettyPrinter_parenthesizerAttribute;
x_3 = l___regBuiltinParser_Lean_Parser_Attr_extern___closed__2;
x_4 = l___regBuiltin_Lean_Parser_Attr_extern_parenthesizer___closed__1;
x_5 = l___regBuiltin_Lean_Parser_Attr_extern_parenthesizer___closed__2;
x_6 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Parser_Basic(lean_object*);
lean_object* initialize_Lean_Parser_Extra(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Parser_Attr(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Extra(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Parser_initFn____x40_Lean_Parser_Attr___hyg_3_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Parser_initFn____x40_Lean_Parser_Attr___hyg_27_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_priorityParser_formatter___rarg___closed__1 = _init_l_Lean_Parser_priorityParser_formatter___rarg___closed__1();
lean_mark_persistent(l_Lean_Parser_priorityParser_formatter___rarg___closed__1);
l_Lean_Parser_priorityParser_formatter___rarg___closed__2 = _init_l_Lean_Parser_priorityParser_formatter___rarg___closed__2();
lean_mark_persistent(l_Lean_Parser_priorityParser_formatter___rarg___closed__2);
l_Lean_Parser_attrParser_formatter___rarg___closed__1 = _init_l_Lean_Parser_attrParser_formatter___rarg___closed__1();
lean_mark_persistent(l_Lean_Parser_attrParser_formatter___rarg___closed__1);
l_Lean_Parser_attrParser_formatter___rarg___closed__2 = _init_l_Lean_Parser_attrParser_formatter___rarg___closed__2();
lean_mark_persistent(l_Lean_Parser_attrParser_formatter___rarg___closed__2);
l_Lean_Parser_Priority_numPrio = _init_l_Lean_Parser_Priority_numPrio();
lean_mark_persistent(l_Lean_Parser_Priority_numPrio);
l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__1 = _init_l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__1();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__1);
l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__2 = _init_l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__2();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__2);
l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__3 = _init_l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__3();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__3);
l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__4 = _init_l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__4();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__4);
l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__5 = _init_l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__5();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__5);
l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__6 = _init_l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__6();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Priority_numPrio___closed__6);
res = l___regBuiltinParser_Lean_Parser_Priority_numPrio(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Priority_numPrio_formatter___closed__1 = _init_l_Lean_Parser_Priority_numPrio_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Priority_numPrio_formatter___closed__1);
l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__1);
l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__2);
l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__3 = _init_l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Priority_numPrio_formatter___closed__3);
res = l___regBuiltin_Lean_Parser_Priority_numPrio_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1 = _init_l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1);
l_Lean_Parser_Priority_numPrio_parenthesizer___closed__2 = _init_l_Lean_Parser_Priority_numPrio_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Priority_numPrio_parenthesizer___closed__2);
l___regBuiltin_Lean_Parser_Priority_numPrio_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_Priority_numPrio_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Priority_numPrio_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_Priority_numPrio_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_Parser_Priority_numPrio_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Priority_numPrio_parenthesizer___closed__2);
res = l___regBuiltin_Lean_Parser_Priority_numPrio_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_simple = _init_l_Lean_Parser_Attr_simple();
lean_mark_persistent(l_Lean_Parser_Attr_simple);
l___regBuiltinParser_Lean_Parser_Attr_simple___closed__1 = _init_l___regBuiltinParser_Lean_Parser_Attr_simple___closed__1();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_simple___closed__1);
l___regBuiltinParser_Lean_Parser_Attr_simple___closed__2 = _init_l___regBuiltinParser_Lean_Parser_Attr_simple___closed__2();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_simple___closed__2);
l___regBuiltinParser_Lean_Parser_Attr_simple___closed__3 = _init_l___regBuiltinParser_Lean_Parser_Attr_simple___closed__3();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_simple___closed__3);
l___regBuiltinParser_Lean_Parser_Attr_simple___closed__4 = _init_l___regBuiltinParser_Lean_Parser_Attr_simple___closed__4();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_simple___closed__4);
res = l___regBuiltinParser_Lean_Parser_Attr_simple(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_simple_formatter___closed__1 = _init_l_Lean_Parser_Attr_simple_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_simple_formatter___closed__1);
l_Lean_Parser_Attr_simple_formatter___closed__2 = _init_l_Lean_Parser_Attr_simple_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_simple_formatter___closed__2);
l_Lean_Parser_Attr_simple_formatter___closed__3 = _init_l_Lean_Parser_Attr_simple_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_simple_formatter___closed__3);
l_Lean_Parser_Attr_simple_formatter___closed__4 = _init_l_Lean_Parser_Attr_simple_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_simple_formatter___closed__4);
l_Lean_Parser_Attr_simple_formatter___closed__5 = _init_l_Lean_Parser_Attr_simple_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_Attr_simple_formatter___closed__5);
l_Lean_Parser_Attr_simple_formatter___closed__6 = _init_l_Lean_Parser_Attr_simple_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_Attr_simple_formatter___closed__6);
l_Lean_Parser_Attr_simple_formatter___closed__7 = _init_l_Lean_Parser_Attr_simple_formatter___closed__7();
lean_mark_persistent(l_Lean_Parser_Attr_simple_formatter___closed__7);
l_Lean_Parser_Attr_simple_formatter___closed__8 = _init_l_Lean_Parser_Attr_simple_formatter___closed__8();
lean_mark_persistent(l_Lean_Parser_Attr_simple_formatter___closed__8);
l___regBuiltin_Lean_Parser_Attr_simple_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_Attr_simple_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_simple_formatter___closed__1);
l___regBuiltin_Lean_Parser_Attr_simple_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_Attr_simple_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_simple_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_Attr_simple_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_simple_parenthesizer___closed__1 = _init_l_Lean_Parser_Attr_simple_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_simple_parenthesizer___closed__1);
l_Lean_Parser_Attr_simple_parenthesizer___closed__2 = _init_l_Lean_Parser_Attr_simple_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_simple_parenthesizer___closed__2);
l_Lean_Parser_Attr_simple_parenthesizer___closed__3 = _init_l_Lean_Parser_Attr_simple_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_simple_parenthesizer___closed__3);
l_Lean_Parser_Attr_simple_parenthesizer___closed__4 = _init_l_Lean_Parser_Attr_simple_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_simple_parenthesizer___closed__4);
l_Lean_Parser_Attr_simple_parenthesizer___closed__5 = _init_l_Lean_Parser_Attr_simple_parenthesizer___closed__5();
lean_mark_persistent(l_Lean_Parser_Attr_simple_parenthesizer___closed__5);
l_Lean_Parser_Attr_simple_parenthesizer___closed__6 = _init_l_Lean_Parser_Attr_simple_parenthesizer___closed__6();
lean_mark_persistent(l_Lean_Parser_Attr_simple_parenthesizer___closed__6);
l_Lean_Parser_Attr_simple_parenthesizer___closed__7 = _init_l_Lean_Parser_Attr_simple_parenthesizer___closed__7();
lean_mark_persistent(l_Lean_Parser_Attr_simple_parenthesizer___closed__7);
l___regBuiltin_Lean_Parser_Attr_simple_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_Attr_simple_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_simple_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_Attr_simple_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_Parser_Attr_simple_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_simple_parenthesizer___closed__2);
res = l___regBuiltin_Lean_Parser_Attr_simple_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_macro = _init_l_Lean_Parser_Attr_macro();
lean_mark_persistent(l_Lean_Parser_Attr_macro);
l___regBuiltinParser_Lean_Parser_Attr_macro___closed__1 = _init_l___regBuiltinParser_Lean_Parser_Attr_macro___closed__1();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_macro___closed__1);
l___regBuiltinParser_Lean_Parser_Attr_macro___closed__2 = _init_l___regBuiltinParser_Lean_Parser_Attr_macro___closed__2();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_macro___closed__2);
res = l___regBuiltinParser_Lean_Parser_Attr_macro(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_macro_formatter___closed__1 = _init_l_Lean_Parser_Attr_macro_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_macro_formatter___closed__1);
l_Lean_Parser_Attr_macro_formatter___closed__2 = _init_l_Lean_Parser_Attr_macro_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_macro_formatter___closed__2);
l_Lean_Parser_Attr_macro_formatter___closed__3 = _init_l_Lean_Parser_Attr_macro_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_macro_formatter___closed__3);
l_Lean_Parser_Attr_macro_formatter___closed__4 = _init_l_Lean_Parser_Attr_macro_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_macro_formatter___closed__4);
l_Lean_Parser_Attr_macro_formatter___closed__5 = _init_l_Lean_Parser_Attr_macro_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_Attr_macro_formatter___closed__5);
l_Lean_Parser_Attr_macro_formatter___closed__6 = _init_l_Lean_Parser_Attr_macro_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_Attr_macro_formatter___closed__6);
l___regBuiltin_Lean_Parser_Attr_macro_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_Attr_macro_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_macro_formatter___closed__1);
l___regBuiltin_Lean_Parser_Attr_macro_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_Attr_macro_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_macro_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_Attr_macro_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_macro_parenthesizer___closed__1 = _init_l_Lean_Parser_Attr_macro_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_macro_parenthesizer___closed__1);
l_Lean_Parser_Attr_macro_parenthesizer___closed__2 = _init_l_Lean_Parser_Attr_macro_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_macro_parenthesizer___closed__2);
l_Lean_Parser_Attr_macro_parenthesizer___closed__3 = _init_l_Lean_Parser_Attr_macro_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_macro_parenthesizer___closed__3);
l_Lean_Parser_Attr_macro_parenthesizer___closed__4 = _init_l_Lean_Parser_Attr_macro_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_macro_parenthesizer___closed__4);
l___regBuiltin_Lean_Parser_Attr_macro_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_Attr_macro_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_macro_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_Attr_macro_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_Parser_Attr_macro_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_macro_parenthesizer___closed__2);
res = l___regBuiltin_Lean_Parser_Attr_macro_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_export = _init_l_Lean_Parser_Attr_export();
lean_mark_persistent(l_Lean_Parser_Attr_export);
l___regBuiltinParser_Lean_Parser_Attr_export___closed__1 = _init_l___regBuiltinParser_Lean_Parser_Attr_export___closed__1();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_export___closed__1);
l___regBuiltinParser_Lean_Parser_Attr_export___closed__2 = _init_l___regBuiltinParser_Lean_Parser_Attr_export___closed__2();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_export___closed__2);
res = l___regBuiltinParser_Lean_Parser_Attr_export(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_export_formatter___closed__1 = _init_l_Lean_Parser_Attr_export_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_export_formatter___closed__1);
l_Lean_Parser_Attr_export_formatter___closed__2 = _init_l_Lean_Parser_Attr_export_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_export_formatter___closed__2);
l_Lean_Parser_Attr_export_formatter___closed__3 = _init_l_Lean_Parser_Attr_export_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_export_formatter___closed__3);
l_Lean_Parser_Attr_export_formatter___closed__4 = _init_l_Lean_Parser_Attr_export_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_export_formatter___closed__4);
l_Lean_Parser_Attr_export_formatter___closed__5 = _init_l_Lean_Parser_Attr_export_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_Attr_export_formatter___closed__5);
l_Lean_Parser_Attr_export_formatter___closed__6 = _init_l_Lean_Parser_Attr_export_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_Attr_export_formatter___closed__6);
l___regBuiltin_Lean_Parser_Attr_export_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_Attr_export_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_export_formatter___closed__1);
l___regBuiltin_Lean_Parser_Attr_export_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_Attr_export_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_export_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_Attr_export_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_export_parenthesizer___closed__1 = _init_l_Lean_Parser_Attr_export_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_export_parenthesizer___closed__1);
l_Lean_Parser_Attr_export_parenthesizer___closed__2 = _init_l_Lean_Parser_Attr_export_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_export_parenthesizer___closed__2);
l_Lean_Parser_Attr_export_parenthesizer___closed__3 = _init_l_Lean_Parser_Attr_export_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_export_parenthesizer___closed__3);
l_Lean_Parser_Attr_export_parenthesizer___closed__4 = _init_l_Lean_Parser_Attr_export_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_export_parenthesizer___closed__4);
l___regBuiltin_Lean_Parser_Attr_export_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_Attr_export_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_export_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_Attr_export_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_Parser_Attr_export_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_export_parenthesizer___closed__2);
res = l___regBuiltin_Lean_Parser_Attr_export_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_recursor = _init_l_Lean_Parser_Attr_recursor();
lean_mark_persistent(l_Lean_Parser_Attr_recursor);
l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__1 = _init_l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__1();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__1);
l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__2 = _init_l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__2();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_recursor___closed__2);
res = l___regBuiltinParser_Lean_Parser_Attr_recursor(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_recursor_formatter___closed__1 = _init_l_Lean_Parser_Attr_recursor_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_recursor_formatter___closed__1);
l_Lean_Parser_Attr_recursor_formatter___closed__2 = _init_l_Lean_Parser_Attr_recursor_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_recursor_formatter___closed__2);
l_Lean_Parser_Attr_recursor_formatter___closed__3 = _init_l_Lean_Parser_Attr_recursor_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_recursor_formatter___closed__3);
l_Lean_Parser_Attr_recursor_formatter___closed__4 = _init_l_Lean_Parser_Attr_recursor_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_recursor_formatter___closed__4);
l_Lean_Parser_Attr_recursor_formatter___closed__5 = _init_l_Lean_Parser_Attr_recursor_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_Attr_recursor_formatter___closed__5);
l_Lean_Parser_Attr_recursor_formatter___closed__6 = _init_l_Lean_Parser_Attr_recursor_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_Attr_recursor_formatter___closed__6);
l___regBuiltin_Lean_Parser_Attr_recursor_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_Attr_recursor_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_recursor_formatter___closed__1);
l___regBuiltin_Lean_Parser_Attr_recursor_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_Attr_recursor_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_recursor_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_Attr_recursor_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_recursor_parenthesizer___closed__1 = _init_l_Lean_Parser_Attr_recursor_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_recursor_parenthesizer___closed__1);
l_Lean_Parser_Attr_recursor_parenthesizer___closed__2 = _init_l_Lean_Parser_Attr_recursor_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_recursor_parenthesizer___closed__2);
l_Lean_Parser_Attr_recursor_parenthesizer___closed__3 = _init_l_Lean_Parser_Attr_recursor_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_recursor_parenthesizer___closed__3);
l_Lean_Parser_Attr_recursor_parenthesizer___closed__4 = _init_l_Lean_Parser_Attr_recursor_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_recursor_parenthesizer___closed__4);
l___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer___closed__2);
res = l___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_class = _init_l_Lean_Parser_Attr_class();
lean_mark_persistent(l_Lean_Parser_Attr_class);
l___regBuiltinParser_Lean_Parser_Attr_class___closed__1 = _init_l___regBuiltinParser_Lean_Parser_Attr_class___closed__1();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_class___closed__1);
l___regBuiltinParser_Lean_Parser_Attr_class___closed__2 = _init_l___regBuiltinParser_Lean_Parser_Attr_class___closed__2();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_class___closed__2);
res = l___regBuiltinParser_Lean_Parser_Attr_class(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_class_formatter___closed__1 = _init_l_Lean_Parser_Attr_class_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_class_formatter___closed__1);
l_Lean_Parser_Attr_class_formatter___closed__2 = _init_l_Lean_Parser_Attr_class_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_class_formatter___closed__2);
l_Lean_Parser_Attr_class_formatter___closed__3 = _init_l_Lean_Parser_Attr_class_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_class_formatter___closed__3);
l_Lean_Parser_Attr_class_formatter___closed__4 = _init_l_Lean_Parser_Attr_class_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_class_formatter___closed__4);
l___regBuiltin_Lean_Parser_Attr_class_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_Attr_class_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_class_formatter___closed__1);
l___regBuiltin_Lean_Parser_Attr_class_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_Attr_class_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_class_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_Attr_class_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_class_parenthesizer___closed__1 = _init_l_Lean_Parser_Attr_class_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_class_parenthesizer___closed__1);
l_Lean_Parser_Attr_class_parenthesizer___closed__2 = _init_l_Lean_Parser_Attr_class_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_class_parenthesizer___closed__2);
l_Lean_Parser_Attr_class_parenthesizer___closed__3 = _init_l_Lean_Parser_Attr_class_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_class_parenthesizer___closed__3);
l___regBuiltin_Lean_Parser_Attr_class_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_Attr_class_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_class_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_Attr_class_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_Parser_Attr_class_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_class_parenthesizer___closed__2);
res = l___regBuiltin_Lean_Parser_Attr_class_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_instance = _init_l_Lean_Parser_Attr_instance();
lean_mark_persistent(l_Lean_Parser_Attr_instance);
l___regBuiltinParser_Lean_Parser_Attr_instance___closed__1 = _init_l___regBuiltinParser_Lean_Parser_Attr_instance___closed__1();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_instance___closed__1);
l___regBuiltinParser_Lean_Parser_Attr_instance___closed__2 = _init_l___regBuiltinParser_Lean_Parser_Attr_instance___closed__2();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_instance___closed__2);
res = l___regBuiltinParser_Lean_Parser_Attr_instance(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_instance_formatter___closed__1 = _init_l_Lean_Parser_Attr_instance_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_instance_formatter___closed__1);
l_Lean_Parser_Attr_instance_formatter___closed__2 = _init_l_Lean_Parser_Attr_instance_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_instance_formatter___closed__2);
l_Lean_Parser_Attr_instance_formatter___closed__3 = _init_l_Lean_Parser_Attr_instance_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_instance_formatter___closed__3);
l_Lean_Parser_Attr_instance_formatter___closed__4 = _init_l_Lean_Parser_Attr_instance_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_instance_formatter___closed__4);
l_Lean_Parser_Attr_instance_formatter___closed__5 = _init_l_Lean_Parser_Attr_instance_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_Attr_instance_formatter___closed__5);
l_Lean_Parser_Attr_instance_formatter___closed__6 = _init_l_Lean_Parser_Attr_instance_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_Attr_instance_formatter___closed__6);
l___regBuiltin_Lean_Parser_Attr_instance_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_Attr_instance_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_instance_formatter___closed__1);
l___regBuiltin_Lean_Parser_Attr_instance_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_Attr_instance_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_instance_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_Attr_instance_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_instance_parenthesizer___closed__1 = _init_l_Lean_Parser_Attr_instance_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_instance_parenthesizer___closed__1);
l_Lean_Parser_Attr_instance_parenthesizer___closed__2 = _init_l_Lean_Parser_Attr_instance_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_instance_parenthesizer___closed__2);
l_Lean_Parser_Attr_instance_parenthesizer___closed__3 = _init_l_Lean_Parser_Attr_instance_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_instance_parenthesizer___closed__3);
l_Lean_Parser_Attr_instance_parenthesizer___closed__4 = _init_l_Lean_Parser_Attr_instance_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_instance_parenthesizer___closed__4);
l_Lean_Parser_Attr_instance_parenthesizer___closed__5 = _init_l_Lean_Parser_Attr_instance_parenthesizer___closed__5();
lean_mark_persistent(l_Lean_Parser_Attr_instance_parenthesizer___closed__5);
l___regBuiltin_Lean_Parser_Attr_instance_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_Attr_instance_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_instance_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_Attr_instance_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_Parser_Attr_instance_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_instance_parenthesizer___closed__2);
res = l___regBuiltin_Lean_Parser_Attr_instance_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_defaultInstance = _init_l_Lean_Parser_Attr_defaultInstance();
lean_mark_persistent(l_Lean_Parser_Attr_defaultInstance);
l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__1 = _init_l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__1();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__1);
l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__2 = _init_l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__2();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_defaultInstance___closed__2);
res = l___regBuiltinParser_Lean_Parser_Attr_defaultInstance(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_defaultInstance_formatter___closed__1 = _init_l_Lean_Parser_Attr_defaultInstance_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_defaultInstance_formatter___closed__1);
l_Lean_Parser_Attr_defaultInstance_formatter___closed__2 = _init_l_Lean_Parser_Attr_defaultInstance_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_defaultInstance_formatter___closed__2);
l_Lean_Parser_Attr_defaultInstance_formatter___closed__3 = _init_l_Lean_Parser_Attr_defaultInstance_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_defaultInstance_formatter___closed__3);
l_Lean_Parser_Attr_defaultInstance_formatter___closed__4 = _init_l_Lean_Parser_Attr_defaultInstance_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_defaultInstance_formatter___closed__4);
l_Lean_Parser_Attr_defaultInstance_formatter___closed__5 = _init_l_Lean_Parser_Attr_defaultInstance_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_Attr_defaultInstance_formatter___closed__5);
l_Lean_Parser_Attr_defaultInstance_formatter___closed__6 = _init_l_Lean_Parser_Attr_defaultInstance_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_Attr_defaultInstance_formatter___closed__6);
l___regBuiltin_Lean_Parser_Attr_defaultInstance_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_Attr_defaultInstance_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_defaultInstance_formatter___closed__1);
l___regBuiltin_Lean_Parser_Attr_defaultInstance_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_Attr_defaultInstance_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_defaultInstance_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_Attr_defaultInstance_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__1 = _init_l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__1);
l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__2 = _init_l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__2);
l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__3 = _init_l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__3);
l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__4 = _init_l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__4);
l___regBuiltin_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_defaultInstance_parenthesizer___closed__2);
res = l___regBuiltin_Lean_Parser_Attr_defaultInstance_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_externEntry = _init_l_Lean_Parser_Attr_externEntry();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry);
l_Lean_Parser_Attr_extern = _init_l_Lean_Parser_Attr_extern();
lean_mark_persistent(l_Lean_Parser_Attr_extern);
l___regBuiltinParser_Lean_Parser_Attr_extern___closed__1 = _init_l___regBuiltinParser_Lean_Parser_Attr_extern___closed__1();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_extern___closed__1);
l___regBuiltinParser_Lean_Parser_Attr_extern___closed__2 = _init_l___regBuiltinParser_Lean_Parser_Attr_extern___closed__2();
lean_mark_persistent(l___regBuiltinParser_Lean_Parser_Attr_extern___closed__2);
res = l___regBuiltinParser_Lean_Parser_Attr_extern(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_externEntry_formatter___closed__1 = _init_l_Lean_Parser_Attr_externEntry_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_formatter___closed__1);
l_Lean_Parser_Attr_externEntry_formatter___closed__2 = _init_l_Lean_Parser_Attr_externEntry_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_formatter___closed__2);
l_Lean_Parser_Attr_externEntry_formatter___closed__3 = _init_l_Lean_Parser_Attr_externEntry_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_formatter___closed__3);
l_Lean_Parser_Attr_externEntry_formatter___closed__4 = _init_l_Lean_Parser_Attr_externEntry_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_formatter___closed__4);
l_Lean_Parser_Attr_externEntry_formatter___closed__5 = _init_l_Lean_Parser_Attr_externEntry_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_formatter___closed__5);
l_Lean_Parser_Attr_externEntry_formatter___closed__6 = _init_l_Lean_Parser_Attr_externEntry_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_formatter___closed__6);
l_Lean_Parser_Attr_externEntry_formatter___closed__7 = _init_l_Lean_Parser_Attr_externEntry_formatter___closed__7();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_formatter___closed__7);
l_Lean_Parser_Attr_externEntry_formatter___closed__8 = _init_l_Lean_Parser_Attr_externEntry_formatter___closed__8();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_formatter___closed__8);
l_Lean_Parser_Attr_externEntry_formatter___closed__9 = _init_l_Lean_Parser_Attr_externEntry_formatter___closed__9();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_formatter___closed__9);
l_Lean_Parser_Attr_externEntry_formatter___closed__10 = _init_l_Lean_Parser_Attr_externEntry_formatter___closed__10();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_formatter___closed__10);
l_Lean_Parser_Attr_externEntry_formatter___closed__11 = _init_l_Lean_Parser_Attr_externEntry_formatter___closed__11();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_formatter___closed__11);
l_Lean_Parser_Attr_externEntry_formatter___closed__12 = _init_l_Lean_Parser_Attr_externEntry_formatter___closed__12();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_formatter___closed__12);
l_Lean_Parser_Attr_extern_formatter___closed__1 = _init_l_Lean_Parser_Attr_extern_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_extern_formatter___closed__1);
l_Lean_Parser_Attr_extern_formatter___closed__2 = _init_l_Lean_Parser_Attr_extern_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_extern_formatter___closed__2);
l_Lean_Parser_Attr_extern_formatter___closed__3 = _init_l_Lean_Parser_Attr_extern_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_extern_formatter___closed__3);
l_Lean_Parser_Attr_extern_formatter___closed__4 = _init_l_Lean_Parser_Attr_extern_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_extern_formatter___closed__4);
l_Lean_Parser_Attr_extern_formatter___closed__5 = _init_l_Lean_Parser_Attr_extern_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_Attr_extern_formatter___closed__5);
l_Lean_Parser_Attr_extern_formatter___closed__6 = _init_l_Lean_Parser_Attr_extern_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_Attr_extern_formatter___closed__6);
l_Lean_Parser_Attr_extern_formatter___closed__7 = _init_l_Lean_Parser_Attr_extern_formatter___closed__7();
lean_mark_persistent(l_Lean_Parser_Attr_extern_formatter___closed__7);
l_Lean_Parser_Attr_extern_formatter___closed__8 = _init_l_Lean_Parser_Attr_extern_formatter___closed__8();
lean_mark_persistent(l_Lean_Parser_Attr_extern_formatter___closed__8);
l_Lean_Parser_Attr_extern_formatter___closed__9 = _init_l_Lean_Parser_Attr_extern_formatter___closed__9();
lean_mark_persistent(l_Lean_Parser_Attr_extern_formatter___closed__9);
l_Lean_Parser_Attr_extern_formatter___closed__10 = _init_l_Lean_Parser_Attr_extern_formatter___closed__10();
lean_mark_persistent(l_Lean_Parser_Attr_extern_formatter___closed__10);
l___regBuiltin_Lean_Parser_Attr_extern_formatter___closed__1 = _init_l___regBuiltin_Lean_Parser_Attr_extern_formatter___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_extern_formatter___closed__1);
l___regBuiltin_Lean_Parser_Attr_extern_formatter___closed__2 = _init_l___regBuiltin_Lean_Parser_Attr_extern_formatter___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_extern_formatter___closed__2);
res = l___regBuiltin_Lean_Parser_Attr_extern_formatter(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_externEntry_parenthesizer___closed__1 = _init_l_Lean_Parser_Attr_externEntry_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_parenthesizer___closed__1);
l_Lean_Parser_Attr_externEntry_parenthesizer___closed__2 = _init_l_Lean_Parser_Attr_externEntry_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_parenthesizer___closed__2);
l_Lean_Parser_Attr_externEntry_parenthesizer___closed__3 = _init_l_Lean_Parser_Attr_externEntry_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_parenthesizer___closed__3);
l_Lean_Parser_Attr_externEntry_parenthesizer___closed__4 = _init_l_Lean_Parser_Attr_externEntry_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_parenthesizer___closed__4);
l_Lean_Parser_Attr_externEntry_parenthesizer___closed__5 = _init_l_Lean_Parser_Attr_externEntry_parenthesizer___closed__5();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_parenthesizer___closed__5);
l_Lean_Parser_Attr_externEntry_parenthesizer___closed__6 = _init_l_Lean_Parser_Attr_externEntry_parenthesizer___closed__6();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_parenthesizer___closed__6);
l_Lean_Parser_Attr_externEntry_parenthesizer___closed__7 = _init_l_Lean_Parser_Attr_externEntry_parenthesizer___closed__7();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_parenthesizer___closed__7);
l_Lean_Parser_Attr_externEntry_parenthesizer___closed__8 = _init_l_Lean_Parser_Attr_externEntry_parenthesizer___closed__8();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry_parenthesizer___closed__8);
l_Lean_Parser_Attr_extern_parenthesizer___closed__1 = _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Attr_extern_parenthesizer___closed__1);
l_Lean_Parser_Attr_extern_parenthesizer___closed__2 = _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Attr_extern_parenthesizer___closed__2);
l_Lean_Parser_Attr_extern_parenthesizer___closed__3 = _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Attr_extern_parenthesizer___closed__3);
l_Lean_Parser_Attr_extern_parenthesizer___closed__4 = _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_Attr_extern_parenthesizer___closed__4);
l_Lean_Parser_Attr_extern_parenthesizer___closed__5 = _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__5();
lean_mark_persistent(l_Lean_Parser_Attr_extern_parenthesizer___closed__5);
l_Lean_Parser_Attr_extern_parenthesizer___closed__6 = _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__6();
lean_mark_persistent(l_Lean_Parser_Attr_extern_parenthesizer___closed__6);
l_Lean_Parser_Attr_extern_parenthesizer___closed__7 = _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__7();
lean_mark_persistent(l_Lean_Parser_Attr_extern_parenthesizer___closed__7);
l_Lean_Parser_Attr_extern_parenthesizer___closed__8 = _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__8();
lean_mark_persistent(l_Lean_Parser_Attr_extern_parenthesizer___closed__8);
l___regBuiltin_Lean_Parser_Attr_extern_parenthesizer___closed__1 = _init_l___regBuiltin_Lean_Parser_Attr_extern_parenthesizer___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_extern_parenthesizer___closed__1);
l___regBuiltin_Lean_Parser_Attr_extern_parenthesizer___closed__2 = _init_l___regBuiltin_Lean_Parser_Attr_extern_parenthesizer___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Parser_Attr_extern_parenthesizer___closed__2);
res = l___regBuiltin_Lean_Parser_Attr_extern_parenthesizer(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
