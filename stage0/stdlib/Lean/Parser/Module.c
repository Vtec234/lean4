// Lean compiler output
// Module: Lean.Parser.Module
// Imports: Init Lean.Message Lean.Parser.Command
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
lean_object* l_Lean_Parser_Module_header_parenthesizer___closed__10;
lean_object* l_Lean_Parser_Module_module_parenthesizer___closed__6;
lean_object* l_Lean_Parser_Module_module_formatter___closed__2;
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Parser_Trie_instInhabitedTrie(lean_object*);
lean_object* l_Lean_Parser_Module_module_formatter___closed__1;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthenInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserContext(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Parser_Module_prelude_parenthesizer___closed__2;
lean_object* l_Lean_Parser_Module_module_parenthesizer___closed__4;
lean_object* l_Lean_Parser_Module_module_formatter___closed__9;
extern lean_object* l_Lean_nullKind;
lean_object* l_Lean_Parser_many(lean_object*);
lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__6(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_parseHeader_match__1(lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* l_Lean_Parser_parseHeader(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Parser_parseCommand_parse_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_setLhsPrecFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_module_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_header_parenthesizer___closed__7;
lean_object* l_Lean_Parser_Module_import_parenthesizer___closed__5;
lean_object* l_Lean_Parser_Module_import_parenthesizer___closed__7;
lean_object* l_Lean_Parser_Module_prelude;
lean_object* l_Lean_Parser_tokenWithAntiquotFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_ident;
lean_object* l_Lean_Parser_ParserState_mkNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserState(lean_object*);
lean_object* l_Std_PersistentArray_forM___at_Lean_Parser_testParseModuleAux_parse___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_import;
lean_object* l_Lean_Parser_Module_prelude_formatter___closed__2;
lean_object* l_Lean_Parser_mkInputContext(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Parser_Module_prelude_formatter___closed__1;
lean_object* l_Lean_Parser_Module_module_parenthesizer___closed__1;
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_import_formatter___closed__8;
lean_object* l_Lean_Parser_tokenFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_header_parenthesizer___closed__5;
lean_object* l_Lean_Parser_isExitCommand___boxed(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__11(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_prelude_formatter___closed__8;
lean_object* l_Std_PersistentArray_forM___at_Lean_Parser_testParseModuleAux_parse___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_module_formatter___closed__8;
lean_object* l_Lean_Parser_checkPrecFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_import_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_header_formatter___closed__6;
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Parser_Module_import_formatter___closed__9;
lean_object* l_Lean_Parser_Module_module_formatter___closed__4;
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_ModuleParserState_recovering___default;
lean_object* l_Lean_Parser_Module_prelude_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_import_parenthesizer___closed__3;
lean_object* l_Lean_Parser_many_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__14;
lean_object* l_Lean_Parser_Module_import_formatter___closed__4;
lean_object* l_Lean_Parser_optional_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_prelude_formatter___closed__4;
lean_object* l_Lean_Parser_instInhabitedParser___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_instInhabitedModuleParserState;
lean_object* l_Lean_Parser_checkPrecFn(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_prelude_formatter___closed__5;
lean_object* l_Lean_Parser_testParseModuleAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__10(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_module_parenthesizer___closed__7;
lean_object* l_Lean_Parser_Module_prelude_parenthesizer___closed__3;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_import_parenthesizer___closed__1;
lean_object* l_Lean_Parser_initCacheForInput(lean_object*);
lean_object* l_Lean_Parser_Module_module_parenthesizer___closed__2;
lean_object* l_Lean_Parser_parseHeader_match__1___rarg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_header_formatter___closed__11;
lean_object* l_Lean_Parser_testParseModuleAux_parse_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_forM___at_Lean_Parser_testParseModuleAux_parse___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_header_parenthesizer___closed__6;
lean_object* l_IO_FS_Handle_mk___at_Lean_Parser_testParseFile___spec__2(lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Parser_Module_prelude_formatter___closed__3;
lean_object* l_Lean_Parser_Module_import_parenthesizer___closed__6;
lean_object* l_Lean_Parser_Module_import_parenthesizer___closed__4;
lean_object* l_Lean_Parser_Module_prelude_formatter___closed__6;
uint8_t l_Lean_Parser_tryAnti(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Level_ident_parenthesizer___closed__1;
lean_object* l_IO_FS_Handle_readToEnd_read___at_IO_Process_output___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_import_parenthesizer___closed__2;
lean_object* l_Lean_Syntax_updateLeading(lean_object*);
lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_testParseModuleAux_parse___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_import_formatter___closed__10;
lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__6___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Prim_fopenFlags(uint8_t, uint8_t);
lean_object* l_Lean_Parser_orelseInfo(lean_object*, lean_object*);
lean_object* l_Lean_Parser_topLevelCommandParserFn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_header_formatter___closed__7;
lean_object* l_Lean_Parser_Module_import_formatter___closed__6;
lean_object* l_Lean_Parser_Module_module_parenthesizer___closed__5;
lean_object* l_Lean_Parser_addParserTokens(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_header_parenthesizer___closed__2;
lean_object* l_Lean_Parser_testParseModuleAux_parse_match__1(lean_object*);
lean_object* l_IO_FS_Handle_mk___at_Lean_Parser_testParseFile___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_import_formatter___closed__7;
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
uint8_t l_Std_PersistentArray_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Parser_Module_header_parenthesizer___closed__1;
lean_object* l_Lean_Parser_Module_header_formatter___closed__9;
lean_object* l_Lean_Parser_Module_module_formatter___closed__10;
lean_object* l_Lean_Parser_whitespace(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_module;
lean_object* l_Lean_Parser_Module_prelude_parenthesizer___closed__1;
lean_object* l_Lean_Parser_Module_header_formatter___closed__13;
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Parser_Module_import_formatter___closed__5;
lean_object* l_Lean_Parser_Module_header;
lean_object* l_Lean_Parser_Module_import_formatter___closed__3;
lean_object* l_Lean_Parser_Module_header_parenthesizer___closed__4;
lean_object* l_Lean_Parser_Module_module_formatter___closed__5;
lean_object* l_Lean_Parser_Module_header_parenthesizer___closed__8;
lean_object* l_Lean_Parser_Module_header_parenthesizer___closed__9;
lean_object* l_Lean_Parser_parseCommand_parse_match__1(lean_object*);
lean_object* l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__9(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_quot_formatter___closed__3;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_module_formatter___closed__3;
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_mk_empty_environment(uint32_t, lean_object*);
lean_object* l_Lean_Parser_ident___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_header_formatter___closed__2;
lean_object* l_Lean_Parser_parseCommand_parse_match__2(lean_object*);
extern lean_object* l_Lean_Parser_Level_ident_formatter___closed__1;
lean_object* l_Lean_Parser_parseCommand_parse(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_prelude_formatter___closed__7;
lean_object* l_Lean_Parser_Error_toString(lean_object*);
lean_object* l_Lean_Parser_testParseFile(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_readFile___at_Lean_Parser_testParseFile___spec__1(lean_object*, lean_object*);
uint8_t l_Lean_Parser_isExitCommand(lean_object*);
lean_object* l_Lean_Parser_Module_updateTokens(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_categoryParser(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_module_formatter___closed__7;
extern lean_object* l___regBuiltinParser_Lean_Parser_Level_paren___closed__2;
lean_object* l_Lean_Parser_Module_header_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_import_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_header_parenthesizer___closed__3;
lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput(lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbolInfo(lean_object*);
lean_object* l_Lean_Parser_orelseFnCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_epsilonInfo;
lean_object* l_Lean_Parser_categoryParser___elambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_header_formatter___closed__12;
lean_object* l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__9___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_module_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_import_formatter___closed__2;
lean_object* l_String_trim(lean_object*);
lean_object* l_Lean_Parser_Module_module___elambda__1(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_testParseModuleAux_parse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_updateTokens_match__1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_module_parenthesizer___closed__3;
lean_object* l_Lean_Parser_Module_header_formatter___closed__3;
lean_object* l_Lean_Parser_Level_paren___elambda__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_prelude___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_header_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_ModuleParserState_pos___default;
lean_object* l_IO_println___at_Lean_instEval___spec__1(lean_object*, lean_object*);
uint8_t l_Lean_Parser_isEOI(lean_object*);
lean_object* l_Lean_Parser_Module_prelude_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_forM___at_Lean_Parser_testParseModuleAux_parse___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Term_quot_parenthesizer___closed__2;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_import_formatter___closed__11;
lean_object* l_Lean_Parser_Module_header_formatter___closed__5;
lean_object* l_Lean_Parser_parseCommand_parse_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_import_formatter___closed__1;
lean_object* l_Lean_Message_toString(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Parser_symbolFnAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(lean_object*);
lean_object* l_Lean_Parser_Module_updateTokens_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_header_formatter___closed__10;
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_header_formatter___closed__8;
lean_object* l_Lean_Parser_Module_module_formatter___closed__6;
lean_object* l_Lean_Parser_symbol_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__7;
lean_object* l_Lean_Parser_Module_import_formatter___closed__12;
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_parseCommand(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_testParseModule(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_header_formatter___closed__1;
lean_object* l_Lean_Parser_Module_import___elambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Parser_isEOI___boxed(lean_object*);
lean_object* l_Lean_Parser_Module_header___elambda__1(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_header_formatter___closed__4;
lean_object* l_Lean_Parser_setLhsPrecFn___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_readFile___at_Lean_Parser_testParseFile___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthenFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_prelude___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_3 = lean_box(0);
x_4 = lean_mk_string("Lean");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Parser");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Module");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("prelude");
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
x_46 = l_Lean_Parser_Level_paren___elambda__1___lambda__1(x_35, x_1, x_28, x_45);
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
static lean_object* _init_l_Lean_Parser_Module_prelude() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Module");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("prelude");
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
x_21 = lean_alloc_closure((void*)(l_Lean_Parser_Module_prelude___elambda__1), 2, 0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
lean_object* l_Lean_Parser_Module_import___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_3 = lean_box(0);
x_4 = lean_mk_string("Lean");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Parser");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Module");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("import");
lean_inc(x_10);
x_11 = lean_name_mk_string(x_9, x_10);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = 1;
x_14 = l_Lean_Parser_mkAntiquot(x_10, x_12, x_13);
lean_dec(x_10);
x_15 = lean_mk_string("runtime");
x_16 = l_String_trim(x_15);
lean_dec(x_15);
lean_inc(x_16);
x_17 = l_Lean_Parser_symbolInfo(x_16);
x_18 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_18, 0, x_16);
x_19 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_19, 0, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_Parser_optional(x_20);
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_alloc_closure((void*)(l_Lean_Parser_ident___elambda__1), 2, 0);
lean_inc(x_22);
x_24 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_24, 0, x_22);
lean_closure_set(x_24, 1, x_23);
x_25 = lean_mk_string("import ");
x_26 = l_String_trim(x_25);
lean_dec(x_25);
lean_inc(x_26);
x_27 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_27, 0, x_26);
x_28 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_28, 0, x_27);
x_29 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_29, 0, x_28);
lean_closure_set(x_29, 1, x_24);
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
lean_dec(x_26);
lean_dec(x_22);
lean_dec(x_11);
lean_dec(x_1);
return x_38;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; 
x_42 = lean_ctor_get(x_38, 0);
lean_inc(x_42);
x_43 = lean_array_get_size(x_42);
lean_dec(x_42);
x_44 = lean_mk_string("'");
lean_inc(x_44);
x_45 = lean_string_append(x_44, x_26);
x_46 = lean_string_append(x_45, x_44);
lean_dec(x_44);
lean_inc(x_1);
x_47 = l_Lean_Parser_symbolFnAux(x_26, x_46, x_1, x_38);
lean_dec(x_26);
x_48 = lean_ctor_get(x_47, 4);
lean_inc(x_48);
x_49 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_48, x_40);
lean_dec(x_48);
if (x_49 == 0)
{
x_50 = x_47;
goto block_69;
}
else
{
lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_70 = lean_ctor_get(x_1, 4);
lean_inc(x_70);
x_71 = lean_unsigned_to_nat(0u);
x_72 = lean_nat_dec_eq(x_70, x_71);
lean_dec(x_70);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; 
x_73 = lean_box(0);
lean_inc(x_1);
x_74 = l_Lean_Parser_Level_paren___elambda__1___lambda__1(x_47, x_1, x_40, x_73);
x_50 = x_74;
goto block_69;
}
else
{
x_50 = x_47;
goto block_69;
}
}
block_69:
{
lean_object* x_51; uint8_t x_52; 
x_51 = lean_ctor_get(x_50, 4);
lean_inc(x_51);
x_52 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_51, x_40);
lean_dec(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; uint8_t x_55; 
lean_dec(x_22);
x_53 = l_Lean_Parser_ParserState_mkNode(x_50, x_11, x_43);
x_54 = lean_ctor_get(x_53, 4);
lean_inc(x_54);
x_55 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_54, x_40);
lean_dec(x_54);
if (x_55 == 0)
{
lean_dec(x_1);
return x_53;
}
else
{
lean_object* x_56; 
x_56 = l_Lean_Parser_setLhsPrecFn(x_30, x_1, x_53);
lean_dec(x_1);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; uint8_t x_59; 
lean_inc(x_1);
x_57 = lean_apply_2(x_22, x_1, x_50);
x_58 = lean_ctor_get(x_57, 4);
lean_inc(x_58);
x_59 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_58, x_40);
lean_dec(x_58);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_60 = l_Lean_Parser_ParserState_mkNode(x_57, x_11, x_43);
x_61 = lean_ctor_get(x_60, 4);
lean_inc(x_61);
x_62 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_61, x_40);
lean_dec(x_61);
if (x_62 == 0)
{
lean_dec(x_1);
return x_60;
}
else
{
lean_object* x_63; 
x_63 = l_Lean_Parser_setLhsPrecFn(x_30, x_1, x_60);
lean_dec(x_1);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
lean_inc(x_1);
x_64 = l_Lean_Parser_ident___elambda__1(x_1, x_57);
x_65 = l_Lean_Parser_ParserState_mkNode(x_64, x_11, x_43);
x_66 = lean_ctor_get(x_65, 4);
lean_inc(x_66);
x_67 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_66, x_40);
lean_dec(x_66);
if (x_67 == 0)
{
lean_dec(x_1);
return x_65;
}
else
{
lean_object* x_68; 
x_68 = l_Lean_Parser_setLhsPrecFn(x_30, x_1, x_65);
lean_dec(x_1);
return x_68;
}
}
}
}
}
}
else
{
lean_object* x_75; 
lean_dec(x_26);
lean_dec(x_22);
lean_dec(x_11);
x_75 = l_Lean_Parser_orelseFnCore(x_36, x_35, x_13, x_1, x_2);
return x_75;
}
}
}
static lean_object* _init_l_Lean_Parser_Module_import() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Module");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("import");
lean_inc(x_8);
x_9 = lean_name_mk_string(x_7, x_8);
lean_inc(x_9);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = 1;
x_12 = l_Lean_Parser_mkAntiquot(x_8, x_10, x_11);
lean_dec(x_8);
x_13 = lean_mk_string("runtime");
x_14 = l_String_trim(x_13);
lean_dec(x_13);
lean_inc(x_14);
x_15 = l_Lean_Parser_symbolInfo(x_14);
x_16 = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn___boxed), 3, 1);
lean_closure_set(x_16, 0, x_14);
x_17 = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquotFn), 3, 1);
lean_closure_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_Parser_optional(x_18);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Lean_Parser_ident;
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = l_Lean_Parser_andthenInfo(x_20, x_22);
x_24 = lean_mk_string("import ");
x_25 = l_String_trim(x_24);
lean_dec(x_24);
x_26 = l_Lean_Parser_symbolInfo(x_25);
x_27 = l_Lean_Parser_andthenInfo(x_26, x_23);
x_28 = l_Lean_Parser_nodeInfo(x_9, x_27);
x_29 = l_Lean_Parser_epsilonInfo;
x_30 = l_Lean_Parser_andthenInfo(x_28, x_29);
x_31 = l_Lean_Parser_andthenInfo(x_29, x_30);
x_32 = lean_ctor_get(x_12, 0);
lean_inc(x_32);
lean_dec(x_12);
x_33 = l_Lean_Parser_orelseInfo(x_32, x_31);
x_34 = lean_alloc_closure((void*)(l_Lean_Parser_Module_import___elambda__1), 2, 0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
lean_object* l_Lean_Parser_Module_header___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_3 = lean_box(0);
x_4 = lean_mk_string("Lean");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Parser");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Module");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("header");
lean_inc(x_10);
x_11 = lean_name_mk_string(x_9, x_10);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = 1;
x_14 = l_Lean_Parser_mkAntiquot(x_10, x_12, x_13);
lean_dec(x_10);
x_15 = l_Lean_Parser_Module_prelude;
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = l_Lean_Parser_epsilonInfo;
x_18 = l_Lean_Parser_andthenInfo(x_16, x_17);
x_19 = lean_alloc_closure((void*)(l_Lean_Parser_Module_prelude___elambda__1), 2, 0);
x_20 = lean_alloc_closure((void*)(l_Lean_Parser_instInhabitedParser___lambda__1___boxed), 2, 0);
lean_inc(x_20);
x_21 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_21, 0, x_19);
lean_closure_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_18);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_Parser_optional(x_22);
x_24 = l_Lean_Parser_Module_import;
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = l_Lean_Parser_andthenInfo(x_25, x_17);
x_27 = lean_alloc_closure((void*)(l_Lean_Parser_Module_import___elambda__1), 2, 0);
lean_inc(x_20);
x_28 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_28, 0, x_27);
lean_closure_set(x_28, 1, x_20);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_Parser_many(x_29);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
lean_inc(x_31);
x_32 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_32, 0, x_31);
lean_closure_set(x_32, 1, x_20);
x_33 = lean_ctor_get(x_23, 1);
lean_inc(x_33);
lean_dec(x_23);
lean_inc(x_33);
x_34 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_34, 0, x_33);
lean_closure_set(x_34, 1, x_32);
x_35 = lean_unsigned_to_nat(1024u);
x_36 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_36, 0, x_35);
lean_inc(x_11);
x_37 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_37, 0, x_11);
lean_closure_set(x_37, 1, x_34);
x_38 = lean_alloc_closure((void*)(l_Lean_Parser_setLhsPrecFn___boxed), 3, 1);
lean_closure_set(x_38, 0, x_35);
x_39 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_39, 0, x_37);
lean_closure_set(x_39, 1, x_38);
x_40 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_40, 0, x_36);
lean_closure_set(x_40, 1, x_39);
x_41 = lean_ctor_get(x_14, 1);
lean_inc(x_41);
lean_dec(x_14);
lean_inc(x_2);
lean_inc(x_1);
x_42 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; 
lean_dec(x_41);
lean_dec(x_40);
x_43 = l_Lean_Parser_checkPrecFn(x_35, x_1, x_2);
x_44 = lean_ctor_get(x_43, 4);
lean_inc(x_44);
x_45 = lean_box(0);
x_46 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_44, x_45);
lean_dec(x_44);
if (x_46 == 0)
{
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_11);
lean_dec(x_1);
return x_43;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_47 = lean_ctor_get(x_43, 0);
lean_inc(x_47);
x_48 = lean_array_get_size(x_47);
lean_dec(x_47);
lean_inc(x_1);
x_49 = lean_apply_2(x_33, x_1, x_43);
x_50 = lean_ctor_get(x_49, 4);
lean_inc(x_50);
x_51 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_50, x_45);
lean_dec(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_dec(x_31);
x_52 = l_Lean_Parser_ParserState_mkNode(x_49, x_11, x_48);
x_53 = lean_ctor_get(x_52, 4);
lean_inc(x_53);
x_54 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_53, x_45);
lean_dec(x_53);
if (x_54 == 0)
{
lean_dec(x_1);
return x_52;
}
else
{
lean_object* x_55; 
x_55 = l_Lean_Parser_setLhsPrecFn(x_35, x_1, x_52);
lean_dec(x_1);
return x_55;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; 
lean_inc(x_1);
x_56 = lean_apply_2(x_31, x_1, x_49);
x_57 = l_Lean_Parser_ParserState_mkNode(x_56, x_11, x_48);
x_58 = lean_ctor_get(x_57, 4);
lean_inc(x_58);
x_59 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_58, x_45);
lean_dec(x_58);
if (x_59 == 0)
{
lean_dec(x_1);
return x_57;
}
else
{
lean_object* x_60; 
x_60 = l_Lean_Parser_setLhsPrecFn(x_35, x_1, x_57);
lean_dec(x_1);
return x_60;
}
}
}
}
else
{
lean_object* x_61; 
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_11);
x_61 = l_Lean_Parser_orelseFnCore(x_41, x_40, x_13, x_1, x_2);
return x_61;
}
}
}
static lean_object* _init_l_Lean_Parser_Module_header() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Module");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("header");
lean_inc(x_8);
x_9 = lean_name_mk_string(x_7, x_8);
lean_inc(x_9);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = 1;
x_12 = l_Lean_Parser_mkAntiquot(x_8, x_10, x_11);
lean_dec(x_8);
x_13 = l_Lean_Parser_Module_prelude;
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = l_Lean_Parser_epsilonInfo;
x_16 = l_Lean_Parser_andthenInfo(x_14, x_15);
x_17 = lean_alloc_closure((void*)(l_Lean_Parser_Module_prelude___elambda__1), 2, 0);
x_18 = lean_alloc_closure((void*)(l_Lean_Parser_instInhabitedParser___lambda__1___boxed), 2, 0);
lean_inc(x_18);
x_19 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_19, 0, x_17);
lean_closure_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_16);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_Parser_optional(x_20);
x_22 = l_Lean_Parser_Module_import;
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = l_Lean_Parser_andthenInfo(x_23, x_15);
x_25 = lean_alloc_closure((void*)(l_Lean_Parser_Module_import___elambda__1), 2, 0);
x_26 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_26, 0, x_25);
lean_closure_set(x_26, 1, x_18);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_Parser_many(x_27);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
lean_dec(x_28);
x_30 = l_Lean_Parser_andthenInfo(x_29, x_15);
x_31 = lean_ctor_get(x_21, 0);
lean_inc(x_31);
lean_dec(x_21);
x_32 = l_Lean_Parser_andthenInfo(x_31, x_30);
x_33 = l_Lean_Parser_nodeInfo(x_9, x_32);
x_34 = l_Lean_Parser_andthenInfo(x_33, x_15);
x_35 = l_Lean_Parser_andthenInfo(x_15, x_34);
x_36 = lean_ctor_get(x_12, 0);
lean_inc(x_36);
lean_dec(x_12);
x_37 = l_Lean_Parser_orelseInfo(x_36, x_35);
x_38 = lean_alloc_closure((void*)(l_Lean_Parser_Module_header___elambda__1), 2, 0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
static lean_object* _init_l_Lean_Parser_Module_prelude_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Module");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Module_prelude_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___regBuiltinParser_Lean_Parser_Level_paren___closed__2;
x_2 = l_Lean_Parser_Module_prelude_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_prelude_formatter___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("prelude");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Module_prelude_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_prelude_formatter___closed__2;
x_2 = l_Lean_Parser_Module_prelude_formatter___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_prelude_formatter___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_prelude_formatter___closed__4;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_prelude_formatter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Module_prelude_formatter___closed__3;
x_2 = l_Lean_Parser_Module_prelude_formatter___closed__5;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Module_prelude_formatter___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_prelude_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_prelude_formatter___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Module_prelude_formatter___closed__4;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Module_prelude_formatter___closed__7;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Module_prelude_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Module_prelude_formatter___closed__6;
x_7 = l_Lean_Parser_Module_prelude_formatter___closed__8;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("import");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_prelude_formatter___closed__2;
x_2 = l_Lean_Parser_Module_import_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_import_formatter___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Module_import_formatter___closed__1;
x_2 = l_Lean_Parser_Module_import_formatter___closed__3;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_formatter___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("import ");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_formatter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_import_formatter___closed__5;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_formatter___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("runtime");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_formatter___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_import_formatter___closed__7;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_formatter___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_import_formatter___closed__8;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_optional_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_formatter___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_import_formatter___closed__9;
x_2 = l_Lean_Parser_Level_ident_formatter___closed__1;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_formatter___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_import_formatter___closed__6;
x_2 = l_Lean_Parser_Module_import_formatter___closed__10;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_formatter___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Module_import_formatter___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Module_import_formatter___closed__11;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Module_import_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Module_import_formatter___closed__4;
x_7 = l_Lean_Parser_Module_import_formatter___closed__12;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("header");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_prelude_formatter___closed__2;
x_2 = l_Lean_Parser_Module_header_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_header_formatter___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Module_header_formatter___closed__1;
x_2 = l_Lean_Parser_Module_header_formatter___closed__3;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_formatter___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Module_prelude_formatter), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_formatter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_header_formatter___closed__5;
x_2 = l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__14;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_formatter___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_header_formatter___closed__6;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_optional_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_formatter___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Module_import_formatter), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_formatter___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_header_formatter___closed__8;
x_2 = l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__14;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_formatter___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_header_formatter___closed__9;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_many_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_formatter___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_header_formatter___closed__10;
x_2 = l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__14;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_formatter___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_header_formatter___closed__7;
x_2 = l_Lean_Parser_Module_header_formatter___closed__11;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_formatter___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Module_header_formatter___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Module_header_formatter___closed__12;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Module_header_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Module_header_formatter___closed__4;
x_7 = l_Lean_Parser_Module_header_formatter___closed__13;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_Module_module_formatter___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("module");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Module_module_formatter___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_prelude_formatter___closed__2;
x_2 = l_Lean_Parser_Module_module_formatter___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_module_formatter___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_module_formatter___closed__2;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_module_formatter___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Module_module_formatter___closed__1;
x_2 = l_Lean_Parser_Module_module_formatter___closed__3;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_formatter___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Module_module_formatter___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_tacticSeqBracketed_formatter___closed__14;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_2, 0, x_1);
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_module_formatter___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_quot_formatter___closed__3;
x_2 = l_Lean_Parser_Module_module_formatter___closed__5;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_module_formatter___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_module_formatter___closed__6;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_many_formatter), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_module_formatter___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Module_header_formatter), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Module_module_formatter___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_module_formatter___closed__8;
x_2 = l_Lean_Parser_Module_module_formatter___closed__7;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_module_formatter___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Module_module_formatter___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Module_module_formatter___closed__9;
x_4 = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Module_module_formatter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Module_module_formatter___closed__4;
x_7 = l_Lean_Parser_Module_module_formatter___closed__10;
x_8 = l_Lean_PrettyPrinter_Formatter_orelse_formatter(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_Module_prelude_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Module_prelude_formatter___closed__3;
x_2 = l_Lean_Parser_Module_prelude_formatter___closed__5;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Module_prelude_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_prelude_formatter___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_prelude_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Module_prelude_formatter___closed__4;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Module_prelude_parenthesizer___closed__2;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Module_prelude_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Module_prelude_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Module_prelude_parenthesizer___closed__3;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Module_import_formatter___closed__1;
x_2 = l_Lean_Parser_Module_import_formatter___closed__3;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_import_formatter___closed__5;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_import_formatter___closed__7;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_symbol_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_import_parenthesizer___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_optional_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_parenthesizer___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_import_parenthesizer___closed__4;
x_2 = l_Lean_Parser_Level_ident_parenthesizer___closed__1;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_parenthesizer___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_import_parenthesizer___closed__2;
x_2 = l_Lean_Parser_Module_import_parenthesizer___closed__5;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_import_parenthesizer___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Module_import_formatter___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Module_import_parenthesizer___closed__6;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Module_import_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Module_import_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Module_import_parenthesizer___closed__7;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Module_header_formatter___closed__1;
x_2 = l_Lean_Parser_Module_header_formatter___closed__3;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Module_prelude_parenthesizer), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_header_parenthesizer___closed__2;
x_2 = l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__7;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_header_parenthesizer___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_optional_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_parenthesizer___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Module_import_parenthesizer), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_parenthesizer___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_header_parenthesizer___closed__5;
x_2 = l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__7;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_parenthesizer___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_header_parenthesizer___closed__6;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_many_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_parenthesizer___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_header_parenthesizer___closed__7;
x_2 = l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__7;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_parenthesizer___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_header_parenthesizer___closed__4;
x_2 = l_Lean_Parser_Module_header_parenthesizer___closed__8;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_header_parenthesizer___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Module_header_formatter___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Module_header_parenthesizer___closed__9;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Module_header_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Module_header_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Module_header_parenthesizer___closed__10;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
static lean_object* _init_l_Lean_Parser_Module_module_parenthesizer___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Parser_Module_module_formatter___closed__1;
x_2 = l_Lean_Parser_Module_module_formatter___closed__3;
x_3 = 1;
x_4 = lean_box(x_3);
x_5 = lean_alloc_closure((void*)(l_Lean_Parser_mkAntiquot_parenthesizer___boxed), 8, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Parser_Module_module_parenthesizer___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Tactic_tacticSeqBracketed_parenthesizer___closed__7;
x_2 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_2, 0, x_1);
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_module_parenthesizer___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Term_quot_parenthesizer___closed__2;
x_2 = l_Lean_Parser_Module_module_parenthesizer___closed__2;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_module_parenthesizer___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Parser_Module_module_parenthesizer___closed__3;
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_many_parenthesizer), 6, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Parser_Module_module_parenthesizer___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Parser_Module_header_parenthesizer), 5, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Module_module_parenthesizer___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Module_module_parenthesizer___closed__5;
x_2 = l_Lean_Parser_Module_module_parenthesizer___closed__4;
x_3 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer), 7, 2);
lean_closure_set(x_3, 0, x_1);
lean_closure_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Module_module_parenthesizer___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Module_module_formatter___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Module_module_parenthesizer___closed__6;
x_4 = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(x_4, 0, x_1);
lean_closure_set(x_4, 1, x_2);
lean_closure_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_Module_module_parenthesizer(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Parser_Module_module_parenthesizer___closed__1;
x_7 = l_Lean_Parser_Module_module_parenthesizer___closed__7;
x_8 = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(x_6, x_7, x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
lean_object* l_Lean_Parser_Module_module___elambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
x_3 = lean_box(0);
x_4 = lean_mk_string("Lean");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Parser");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("Module");
x_9 = lean_name_mk_string(x_7, x_8);
x_10 = lean_mk_string("module");
lean_inc(x_10);
x_11 = lean_name_mk_string(x_9, x_10);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = 1;
x_14 = l_Lean_Parser_mkAntiquot(x_10, x_12, x_13);
lean_dec(x_10);
x_15 = lean_mk_string("command");
x_16 = lean_name_mk_string(x_3, x_15);
x_17 = lean_unsigned_to_nat(0u);
lean_inc(x_16);
x_18 = l_Lean_Parser_categoryParser(x_16, x_17);
x_19 = l_Lean_Parser_epsilonInfo;
x_20 = l_Lean_Parser_andthenInfo(x_19, x_19);
x_21 = lean_alloc_closure((void*)(l_Lean_Parser_instInhabitedParser___lambda__1___boxed), 2, 0);
lean_inc(x_21);
x_22 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_22, 0, x_21);
lean_closure_set(x_22, 1, x_21);
x_23 = lean_ctor_get(x_18, 0);
lean_inc(x_23);
lean_dec(x_18);
x_24 = l_Lean_Parser_andthenInfo(x_23, x_20);
x_25 = lean_alloc_closure((void*)(l_Lean_Parser_categoryParser___elambda__1), 4, 2);
lean_closure_set(x_25, 0, x_16);
lean_closure_set(x_25, 1, x_17);
x_26 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_26, 0, x_25);
lean_closure_set(x_26, 1, x_22);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_24);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_Parser_many(x_27);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_alloc_closure((void*)(l_Lean_Parser_Module_header___elambda__1), 2, 0);
lean_inc(x_29);
x_31 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_31, 0, x_30);
lean_closure_set(x_31, 1, x_29);
x_32 = lean_unsigned_to_nat(1024u);
x_33 = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(x_33, 0, x_32);
lean_inc(x_11);
x_34 = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(x_34, 0, x_11);
lean_closure_set(x_34, 1, x_31);
x_35 = lean_alloc_closure((void*)(l_Lean_Parser_setLhsPrecFn___boxed), 3, 1);
lean_closure_set(x_35, 0, x_32);
x_36 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_36, 0, x_34);
lean_closure_set(x_36, 1, x_35);
x_37 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_37, 0, x_33);
lean_closure_set(x_37, 1, x_36);
x_38 = lean_ctor_get(x_14, 1);
lean_inc(x_38);
lean_dec(x_14);
lean_inc(x_2);
lean_inc(x_1);
x_39 = l_Lean_Parser_tryAnti(x_1, x_2);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_dec(x_38);
lean_dec(x_37);
x_40 = l_Lean_Parser_checkPrecFn(x_32, x_1, x_2);
x_41 = lean_ctor_get(x_40, 4);
lean_inc(x_41);
x_42 = lean_box(0);
x_43 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_41, x_42);
lean_dec(x_41);
if (x_43 == 0)
{
lean_dec(x_29);
lean_dec(x_11);
lean_dec(x_1);
return x_40;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_44 = lean_ctor_get(x_40, 0);
lean_inc(x_44);
x_45 = lean_array_get_size(x_44);
lean_dec(x_44);
lean_inc(x_1);
x_46 = l_Lean_Parser_Module_header___elambda__1(x_1, x_40);
x_47 = lean_ctor_get(x_46, 4);
lean_inc(x_47);
x_48 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_47, x_42);
lean_dec(x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
lean_dec(x_29);
x_49 = l_Lean_Parser_ParserState_mkNode(x_46, x_11, x_45);
x_50 = lean_ctor_get(x_49, 4);
lean_inc(x_50);
x_51 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_50, x_42);
lean_dec(x_50);
if (x_51 == 0)
{
lean_dec(x_1);
return x_49;
}
else
{
lean_object* x_52; 
x_52 = l_Lean_Parser_setLhsPrecFn(x_32, x_1, x_49);
lean_dec(x_1);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
lean_inc(x_1);
x_53 = lean_apply_2(x_29, x_1, x_46);
x_54 = l_Lean_Parser_ParserState_mkNode(x_53, x_11, x_45);
x_55 = lean_ctor_get(x_54, 4);
lean_inc(x_55);
x_56 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at_Lean_Parser_ParserState_hasError___spec__1(x_55, x_42);
lean_dec(x_55);
if (x_56 == 0)
{
lean_dec(x_1);
return x_54;
}
else
{
lean_object* x_57; 
x_57 = l_Lean_Parser_setLhsPrecFn(x_32, x_1, x_54);
lean_dec(x_1);
return x_57;
}
}
}
}
else
{
lean_object* x_58; 
lean_dec(x_29);
lean_dec(x_11);
x_58 = l_Lean_Parser_orelseFnCore(x_38, x_37, x_13, x_1, x_2);
return x_58;
}
}
}
static lean_object* _init_l_Lean_Parser_Module_module() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("Parser");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("Module");
x_7 = lean_name_mk_string(x_5, x_6);
x_8 = lean_mk_string("module");
lean_inc(x_8);
x_9 = lean_name_mk_string(x_7, x_8);
lean_inc(x_9);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = 1;
x_12 = l_Lean_Parser_mkAntiquot(x_8, x_10, x_11);
lean_dec(x_8);
x_13 = lean_mk_string("command");
x_14 = lean_name_mk_string(x_1, x_13);
x_15 = lean_unsigned_to_nat(0u);
lean_inc(x_14);
x_16 = l_Lean_Parser_categoryParser(x_14, x_15);
x_17 = l_Lean_Parser_epsilonInfo;
x_18 = l_Lean_Parser_andthenInfo(x_17, x_17);
x_19 = lean_alloc_closure((void*)(l_Lean_Parser_instInhabitedParser___lambda__1___boxed), 2, 0);
lean_inc(x_19);
x_20 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_20, 0, x_19);
lean_closure_set(x_20, 1, x_19);
x_21 = lean_ctor_get(x_16, 0);
lean_inc(x_21);
lean_dec(x_16);
x_22 = l_Lean_Parser_andthenInfo(x_21, x_18);
x_23 = lean_alloc_closure((void*)(l_Lean_Parser_categoryParser___elambda__1), 4, 2);
lean_closure_set(x_23, 0, x_14);
lean_closure_set(x_23, 1, x_15);
x_24 = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(x_24, 0, x_23);
lean_closure_set(x_24, 1, x_20);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Lean_Parser_many(x_25);
x_27 = l_Lean_Parser_Module_header;
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 0);
lean_inc(x_29);
lean_dec(x_26);
x_30 = l_Lean_Parser_andthenInfo(x_28, x_29);
x_31 = l_Lean_Parser_nodeInfo(x_9, x_30);
x_32 = l_Lean_Parser_andthenInfo(x_31, x_17);
x_33 = l_Lean_Parser_andthenInfo(x_17, x_32);
x_34 = lean_ctor_get(x_12, 0);
lean_inc(x_34);
lean_dec(x_12);
x_35 = l_Lean_Parser_orelseInfo(x_34, x_33);
x_36 = lean_alloc_closure((void*)(l_Lean_Parser_Module_module___elambda__1), 2, 0);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
lean_object* l_Lean_Parser_Module_updateTokens_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
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
lean_object* l_Lean_Parser_Module_updateTokens_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_Module_updateTokens_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_Module_updateTokens(lean_object* x_1) {
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
lean_object* x_5; uint8_t x_6; 
x_5 = lean_ctor_get(x_1, 1);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 3);
x_8 = l_Lean_Parser_Module_header;
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = l_Lean_Parser_addParserTokens(x_7, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_10);
x_11 = l_Lean_Parser_Trie_instInhabitedTrie(lean_box(0));
x_12 = lean_mk_string("Lean.Parser.Module");
x_13 = lean_mk_string("Lean.Parser.Module.updateTokens");
x_14 = lean_unsigned_to_nat(27u);
x_15 = lean_unsigned_to_nat(28u);
x_16 = lean_mk_string("unreachable code has been reached");
x_17 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_12, x_13, x_14, x_15, x_16);
lean_dec(x_16);
lean_dec(x_13);
lean_dec(x_12);
x_18 = lean_panic_fn(x_11, x_17);
lean_ctor_set(x_1, 3, x_18);
return x_1;
}
else
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_10, 0);
lean_inc(x_19);
lean_dec(x_10);
lean_ctor_set(x_1, 3, x_19);
return x_1;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_20 = lean_ctor_get(x_1, 3);
x_21 = lean_ctor_get(x_5, 0);
x_22 = lean_ctor_get(x_5, 1);
x_23 = lean_ctor_get(x_5, 2);
x_24 = lean_ctor_get(x_5, 3);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_5);
x_25 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_25, 0, x_21);
lean_ctor_set(x_25, 1, x_22);
lean_ctor_set(x_25, 2, x_23);
lean_ctor_set(x_25, 3, x_24);
x_26 = l_Lean_Parser_Module_header;
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = l_Lean_Parser_addParserTokens(x_20, x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec(x_28);
x_29 = l_Lean_Parser_Trie_instInhabitedTrie(lean_box(0));
x_30 = lean_mk_string("Lean.Parser.Module");
x_31 = lean_mk_string("Lean.Parser.Module.updateTokens");
x_32 = lean_unsigned_to_nat(27u);
x_33 = lean_unsigned_to_nat(28u);
x_34 = lean_mk_string("unreachable code has been reached");
x_35 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_30, x_31, x_32, x_33, x_34);
lean_dec(x_34);
lean_dec(x_31);
lean_dec(x_30);
x_36 = lean_panic_fn(x_29, x_35);
lean_ctor_set(x_1, 3, x_36);
lean_ctor_set(x_1, 1, x_25);
return x_1;
}
else
{
lean_object* x_37; 
x_37 = lean_ctor_get(x_28, 0);
lean_inc(x_37);
lean_dec(x_28);
lean_ctor_set(x_1, 3, x_37);
lean_ctor_set(x_1, 1, x_25);
return x_1;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_38 = lean_ctor_get(x_1, 1);
x_39 = lean_ctor_get(x_1, 3);
x_40 = lean_ctor_get(x_3, 0);
x_41 = lean_ctor_get(x_3, 1);
x_42 = lean_ctor_get(x_3, 2);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_3);
x_43 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_43, 0, x_40);
lean_ctor_set(x_43, 1, x_41);
lean_ctor_set(x_43, 2, x_42);
x_44 = lean_ctor_get(x_38, 0);
lean_inc(x_44);
x_45 = lean_ctor_get(x_38, 1);
lean_inc(x_45);
x_46 = lean_ctor_get(x_38, 2);
lean_inc(x_46);
x_47 = lean_ctor_get(x_38, 3);
lean_inc(x_47);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 lean_ctor_release(x_38, 2);
 lean_ctor_release(x_38, 3);
 x_48 = x_38;
} else {
 lean_dec_ref(x_38);
 x_48 = lean_box(0);
}
if (lean_is_scalar(x_48)) {
 x_49 = lean_alloc_ctor(0, 4, 0);
} else {
 x_49 = x_48;
}
lean_ctor_set(x_49, 0, x_44);
lean_ctor_set(x_49, 1, x_45);
lean_ctor_set(x_49, 2, x_46);
lean_ctor_set(x_49, 3, x_47);
x_50 = l_Lean_Parser_Module_header;
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = l_Lean_Parser_addParserTokens(x_39, x_51);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_52);
x_53 = l_Lean_Parser_Trie_instInhabitedTrie(lean_box(0));
x_54 = lean_mk_string("Lean.Parser.Module");
x_55 = lean_mk_string("Lean.Parser.Module.updateTokens");
x_56 = lean_unsigned_to_nat(27u);
x_57 = lean_unsigned_to_nat(28u);
x_58 = lean_mk_string("unreachable code has been reached");
x_59 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_54, x_55, x_56, x_57, x_58);
lean_dec(x_58);
lean_dec(x_55);
lean_dec(x_54);
x_60 = lean_panic_fn(x_53, x_59);
lean_ctor_set(x_1, 3, x_60);
lean_ctor_set(x_1, 1, x_49);
lean_ctor_set(x_1, 0, x_43);
return x_1;
}
else
{
lean_object* x_61; 
x_61 = lean_ctor_get(x_52, 0);
lean_inc(x_61);
lean_dec(x_52);
lean_ctor_set(x_1, 3, x_61);
lean_ctor_set(x_1, 1, x_49);
lean_ctor_set(x_1, 0, x_43);
return x_1;
}
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_62 = lean_ctor_get(x_1, 0);
x_63 = lean_ctor_get(x_1, 1);
x_64 = lean_ctor_get(x_1, 2);
x_65 = lean_ctor_get(x_1, 3);
x_66 = lean_ctor_get(x_1, 4);
x_67 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
x_68 = lean_ctor_get(x_1, 5);
x_69 = lean_ctor_get(x_1, 6);
lean_inc(x_69);
lean_inc(x_68);
lean_inc(x_66);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_1);
x_70 = lean_ctor_get(x_62, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_62, 1);
lean_inc(x_71);
x_72 = lean_ctor_get(x_62, 2);
lean_inc(x_72);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 lean_ctor_release(x_62, 2);
 x_73 = x_62;
} else {
 lean_dec_ref(x_62);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(0, 3, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_70);
lean_ctor_set(x_74, 1, x_71);
lean_ctor_set(x_74, 2, x_72);
x_75 = lean_ctor_get(x_63, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_63, 1);
lean_inc(x_76);
x_77 = lean_ctor_get(x_63, 2);
lean_inc(x_77);
x_78 = lean_ctor_get(x_63, 3);
lean_inc(x_78);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 lean_ctor_release(x_63, 2);
 lean_ctor_release(x_63, 3);
 x_79 = x_63;
} else {
 lean_dec_ref(x_63);
 x_79 = lean_box(0);
}
if (lean_is_scalar(x_79)) {
 x_80 = lean_alloc_ctor(0, 4, 0);
} else {
 x_80 = x_79;
}
lean_ctor_set(x_80, 0, x_75);
lean_ctor_set(x_80, 1, x_76);
lean_ctor_set(x_80, 2, x_77);
lean_ctor_set(x_80, 3, x_78);
x_81 = l_Lean_Parser_Module_header;
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = l_Lean_Parser_addParserTokens(x_65, x_82);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
lean_dec(x_83);
x_84 = l_Lean_Parser_Trie_instInhabitedTrie(lean_box(0));
x_85 = lean_mk_string("Lean.Parser.Module");
x_86 = lean_mk_string("Lean.Parser.Module.updateTokens");
x_87 = lean_unsigned_to_nat(27u);
x_88 = lean_unsigned_to_nat(28u);
x_89 = lean_mk_string("unreachable code has been reached");
x_90 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_85, x_86, x_87, x_88, x_89);
lean_dec(x_89);
lean_dec(x_86);
lean_dec(x_85);
x_91 = lean_panic_fn(x_84, x_90);
x_92 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_92, 0, x_74);
lean_ctor_set(x_92, 1, x_80);
lean_ctor_set(x_92, 2, x_64);
lean_ctor_set(x_92, 3, x_91);
lean_ctor_set(x_92, 4, x_66);
lean_ctor_set(x_92, 5, x_68);
lean_ctor_set(x_92, 6, x_69);
lean_ctor_set_uint8(x_92, sizeof(void*)*7, x_67);
return x_92;
}
else
{
lean_object* x_93; lean_object* x_94; 
x_93 = lean_ctor_get(x_83, 0);
lean_inc(x_93);
lean_dec(x_83);
x_94 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_94, 0, x_74);
lean_ctor_set(x_94, 1, x_80);
lean_ctor_set(x_94, 2, x_64);
lean_ctor_set(x_94, 3, x_93);
lean_ctor_set(x_94, 4, x_66);
lean_ctor_set(x_94, 5, x_68);
lean_ctor_set(x_94, 6, x_69);
lean_ctor_set_uint8(x_94, sizeof(void*)*7, x_67);
return x_94;
}
}
}
}
static lean_object* _init_l_Lean_Parser_ModuleParserState_pos___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
static uint8_t _init_l_Lean_Parser_ModuleParserState_recovering___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedModuleParserState() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = 0;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_4, 2);
x_6 = l_Lean_FileMap_toPosition(x_5, x_2);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_9, 0, x_3);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = 2;
x_12 = lean_mk_string("");
lean_inc(x_7);
x_13 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_13, 0, x_7);
lean_ctor_set(x_13, 1, x_6);
lean_ctor_set(x_13, 2, x_8);
lean_ctor_set(x_13, 3, x_12);
lean_ctor_set(x_13, 4, x_10);
lean_ctor_set_uint8(x_13, sizeof(void*)*5, x_11);
return x_13;
}
}
lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Parser_parseHeader_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Parser_parseHeader_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_parseHeader_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_parseHeader(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; 
x_3 = 0;
x_4 = lean_mk_empty_environment(x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_box(0);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_7);
lean_ctor_set(x_9, 2, x_8);
lean_ctor_set(x_9, 3, x_7);
x_10 = l_Lean_Parser_mkParserContext(x_1, x_9);
x_11 = l_Lean_Parser_Module_updateTokens(x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_Parser_mkParserState(x_13);
lean_dec(x_13);
x_15 = l_Lean_Parser_whitespace(x_11, x_14);
lean_inc(x_11);
x_16 = l_Lean_Parser_Module_header___elambda__1(x_11, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_17);
lean_dec(x_17);
x_19 = lean_ctor_get(x_16, 4);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_11);
x_20 = lean_ctor_get(x_16, 2);
lean_inc(x_20);
lean_dec(x_16);
x_21 = 0;
x_22 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set_uint8(x_22, sizeof(void*)*1, x_21);
x_23 = lean_unsigned_to_nat(32u);
x_24 = lean_mk_empty_array_with_capacity(x_23);
lean_inc(x_24);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = 5;
x_27 = lean_unsigned_to_nat(0u);
x_28 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_24);
lean_ctor_set(x_28, 2, x_27);
lean_ctor_set(x_28, 3, x_27);
lean_ctor_set_usize(x_28, 4, x_26);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_22);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_18);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_4, 0, x_30);
return x_4;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; size_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_31 = lean_ctor_get(x_19, 0);
lean_inc(x_31);
lean_dec(x_19);
x_32 = lean_ctor_get(x_16, 2);
lean_inc(x_32);
lean_dec(x_16);
x_33 = l_Lean_Parser_Error_toString(x_31);
x_34 = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(x_11, x_32, x_33);
lean_dec(x_11);
x_35 = 1;
x_36 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_36, 0, x_32);
lean_ctor_set_uint8(x_36, sizeof(void*)*1, x_35);
x_37 = lean_unsigned_to_nat(32u);
x_38 = lean_mk_empty_array_with_capacity(x_37);
lean_inc(x_38);
x_39 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_39, 0, x_38);
x_40 = 5;
x_41 = lean_unsigned_to_nat(0u);
x_42 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_42, 0, x_39);
lean_ctor_set(x_42, 1, x_38);
lean_ctor_set(x_42, 2, x_41);
lean_ctor_set(x_42, 3, x_41);
lean_ctor_set_usize(x_42, 4, x_40);
x_43 = l_Std_PersistentArray_push___rarg(x_42, x_34);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_36);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_18);
lean_ctor_set(x_45, 1, x_44);
lean_ctor_set(x_4, 0, x_45);
return x_4;
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_46 = lean_ctor_get(x_4, 0);
x_47 = lean_ctor_get(x_4, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_4);
x_48 = lean_box(0);
x_49 = lean_box(0);
x_50 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_50, 0, x_46);
lean_ctor_set(x_50, 1, x_48);
lean_ctor_set(x_50, 2, x_49);
lean_ctor_set(x_50, 3, x_48);
x_51 = l_Lean_Parser_mkParserContext(x_1, x_50);
x_52 = l_Lean_Parser_Module_updateTokens(x_51);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
lean_dec(x_53);
x_55 = l_Lean_Parser_mkParserState(x_54);
lean_dec(x_54);
x_56 = l_Lean_Parser_whitespace(x_52, x_55);
lean_inc(x_52);
x_57 = l_Lean_Parser_Module_header___elambda__1(x_52, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_58);
lean_dec(x_58);
x_60 = lean_ctor_get(x_57, 4);
lean_inc(x_60);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; uint8_t x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; size_t x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_52);
x_61 = lean_ctor_get(x_57, 2);
lean_inc(x_61);
lean_dec(x_57);
x_62 = 0;
x_63 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set_uint8(x_63, sizeof(void*)*1, x_62);
x_64 = lean_unsigned_to_nat(32u);
x_65 = lean_mk_empty_array_with_capacity(x_64);
lean_inc(x_65);
x_66 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_66, 0, x_65);
x_67 = 5;
x_68 = lean_unsigned_to_nat(0u);
x_69 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_69, 0, x_66);
lean_ctor_set(x_69, 1, x_65);
lean_ctor_set(x_69, 2, x_68);
lean_ctor_set(x_69, 3, x_68);
lean_ctor_set_usize(x_69, 4, x_67);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_63);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_59);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_47);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; size_t x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_73 = lean_ctor_get(x_60, 0);
lean_inc(x_73);
lean_dec(x_60);
x_74 = lean_ctor_get(x_57, 2);
lean_inc(x_74);
lean_dec(x_57);
x_75 = l_Lean_Parser_Error_toString(x_73);
x_76 = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(x_52, x_74, x_75);
lean_dec(x_52);
x_77 = 1;
x_78 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_78, 0, x_74);
lean_ctor_set_uint8(x_78, sizeof(void*)*1, x_77);
x_79 = lean_unsigned_to_nat(32u);
x_80 = lean_mk_empty_array_with_capacity(x_79);
lean_inc(x_80);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
x_82 = 5;
x_83 = lean_unsigned_to_nat(0u);
x_84 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_84, 0, x_81);
lean_ctor_set(x_84, 1, x_80);
lean_ctor_set(x_84, 2, x_83);
lean_ctor_set(x_84, 3, x_83);
lean_ctor_set_usize(x_84, 4, x_82);
x_85 = l_Std_PersistentArray_push___rarg(x_84, x_76);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_78);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_59);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_47);
return x_88;
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_1);
x_89 = !lean_is_exclusive(x_4);
if (x_89 == 0)
{
return x_4;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_4, 0);
x_91 = lean_ctor_get(x_4, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_4);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
}
lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_2 = lean_mk_string("");
x_3 = lean_string_utf8_byte_size(x_2);
x_4 = lean_unsigned_to_nat(0u);
lean_inc(x_2);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_4);
lean_ctor_set(x_5, 2, x_3);
lean_inc(x_1);
lean_inc(x_5);
x_6 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_1);
lean_ctor_set(x_6, 2, x_5);
lean_ctor_set(x_6, 3, x_1);
x_7 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
x_8 = lean_box(0);
x_9 = lean_mk_string("Lean");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = lean_mk_string("Parser");
x_12 = lean_name_mk_string(x_10, x_11);
x_13 = lean_mk_string("Module");
x_14 = lean_name_mk_string(x_12, x_13);
x_15 = lean_mk_string("eoi");
x_16 = lean_name_mk_string(x_14, x_15);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_mk_empty_array_with_capacity(x_17);
x_19 = lean_array_push(x_18, x_7);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_16);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
uint8_t l_Lean_Parser_isEOI(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Lean");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("Parser");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Module");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("eoi");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
lean_dec(x_10);
return x_11;
}
}
lean_object* l_Lean_Parser_isEOI___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Parser_isEOI(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
uint8_t l_Lean_Parser_isExitCommand(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_2 = lean_box(0);
x_3 = lean_mk_string("Lean");
x_4 = lean_name_mk_string(x_2, x_3);
x_5 = lean_mk_string("Parser");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("Command");
x_8 = lean_name_mk_string(x_6, x_7);
x_9 = lean_mk_string("exit");
x_10 = lean_name_mk_string(x_8, x_9);
x_11 = l_Lean_Syntax_isOfKind(x_1, x_10);
lean_dec(x_10);
return x_11;
}
}
lean_object* l_Lean_Parser_isExitCommand___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Parser_isExitCommand(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_mk_empty_array_with_capacity(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_Lean_Parser_initCacheForInput(x_6);
lean_dec(x_6);
x_8 = lean_box(0);
lean_inc(x_2);
x_9 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_3);
lean_ctor_set(x_9, 2, x_2);
lean_ctor_set(x_9, 3, x_7);
lean_ctor_set(x_9, 4, x_8);
x_10 = lean_box(0);
x_11 = l_Lean_Parser_tokenFn(x_10, x_1, x_9);
x_12 = lean_ctor_get(x_11, 4);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_dec(x_2);
x_13 = lean_ctor_get(x_11, 2);
lean_inc(x_13);
lean_dec(x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_2, x_14);
lean_dec(x_2);
return x_15;
}
}
}
lean_object* l_Lean_Parser_topLevelCommandParserFn(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_box(0);
x_4 = lean_mk_string("command");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Lean_Parser_categoryParser___elambda__1(x_5, x_6, x_1, x_2);
return x_7;
}
}
lean_object* l_Lean_Parser_parseCommand_parse_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Parser_parseCommand_parse_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_parseCommand_parse_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_parseCommand_parse_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_5 = lean_box(x_4);
x_6 = lean_apply_2(x_2, x_3, x_5);
return x_6;
}
}
lean_object* l_Lean_Parser_parseCommand_parse_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_parseCommand_parse_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Parser_parseCommand_parse(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_string_utf8_at_end(x_7, x_5);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_3);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_10 = lean_ctor_get(x_3, 0);
lean_dec(x_10);
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_Lean_Parser_mkParserContext(x_1, x_2);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_mk_empty_array_with_capacity(x_12);
x_14 = l_Lean_Parser_initCacheForInput(x_7);
lean_dec(x_7);
x_15 = lean_box(0);
lean_inc(x_5);
x_16 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_5);
lean_ctor_set(x_16, 3, x_14);
lean_ctor_set(x_16, 4, x_15);
x_17 = l_Lean_Parser_whitespace(x_11, x_16);
lean_inc(x_11);
x_18 = l_Lean_Parser_topLevelCommandParserFn(x_11, x_17);
x_19 = lean_ctor_get(x_18, 4);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_11);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_20);
lean_dec(x_20);
x_22 = lean_ctor_get(x_18, 2);
lean_inc(x_22);
lean_dec(x_18);
x_23 = 0;
lean_ctor_set(x_3, 0, x_22);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_23);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_3);
lean_ctor_set(x_24, 1, x_4);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_21);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; uint8_t x_30; 
x_26 = lean_ctor_get(x_19, 0);
lean_inc(x_26);
lean_dec(x_19);
x_27 = lean_ctor_get(x_18, 2);
lean_inc(x_27);
x_28 = lean_nat_dec_eq(x_27, x_5);
lean_dec(x_5);
x_29 = lean_ctor_get(x_18, 0);
lean_inc(x_29);
lean_dec(x_18);
x_30 = l_Array_isEmpty___rarg(x_29);
if (x_28 == 0)
{
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_31 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_29);
lean_dec(x_29);
x_32 = 0;
x_33 = l_Lean_Syntax_getPos_x3f(x_31, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_dec(x_31);
if (x_6 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_34 = l_Lean_Parser_Error_toString(x_26);
x_35 = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(x_11, x_27, x_34);
lean_dec(x_11);
x_36 = l_Std_PersistentArray_push___rarg(x_4, x_35);
x_37 = 1;
lean_ctor_set(x_3, 0, x_27);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_37);
x_4 = x_36;
goto _start;
}
else
{
uint8_t x_39; 
lean_dec(x_26);
lean_dec(x_11);
x_39 = 1;
lean_ctor_set(x_3, 0, x_27);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_39);
goto _start;
}
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_33);
lean_dec(x_2);
lean_dec(x_1);
x_41 = l_Lean_Parser_Error_toString(x_26);
x_42 = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(x_11, x_27, x_41);
lean_dec(x_11);
x_43 = l_Std_PersistentArray_push___rarg(x_4, x_42);
x_44 = 1;
lean_ctor_set(x_3, 0, x_27);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_44);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_3);
lean_ctor_set(x_45, 1, x_43);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_31);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
else
{
lean_dec(x_29);
if (x_6 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
x_47 = l_Lean_Parser_Error_toString(x_26);
x_48 = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(x_11, x_27, x_47);
lean_dec(x_11);
x_49 = l_Std_PersistentArray_push___rarg(x_4, x_48);
x_50 = 1;
lean_ctor_set(x_3, 0, x_27);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_50);
x_4 = x_49;
goto _start;
}
else
{
uint8_t x_52; 
lean_dec(x_26);
lean_dec(x_11);
x_52 = 1;
lean_ctor_set(x_3, 0, x_27);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_52);
goto _start;
}
}
}
else
{
lean_object* x_54; 
lean_inc(x_27);
lean_inc(x_11);
x_54 = l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput(x_11, x_27);
if (x_30 == 0)
{
lean_object* x_55; uint8_t x_56; lean_object* x_57; 
x_55 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_29);
lean_dec(x_29);
x_56 = 0;
x_57 = l_Lean_Syntax_getPos_x3f(x_55, x_56);
if (lean_obj_tag(x_57) == 0)
{
lean_dec(x_55);
if (x_6 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_58 = l_Lean_Parser_Error_toString(x_26);
x_59 = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(x_11, x_27, x_58);
lean_dec(x_27);
lean_dec(x_11);
x_60 = l_Std_PersistentArray_push___rarg(x_4, x_59);
x_61 = 1;
lean_ctor_set(x_3, 0, x_54);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_61);
x_4 = x_60;
goto _start;
}
else
{
uint8_t x_63; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_11);
x_63 = 1;
lean_ctor_set(x_3, 0, x_54);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_63);
goto _start;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_57);
lean_dec(x_2);
lean_dec(x_1);
x_65 = l_Lean_Parser_Error_toString(x_26);
x_66 = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(x_11, x_27, x_65);
lean_dec(x_27);
lean_dec(x_11);
x_67 = l_Std_PersistentArray_push___rarg(x_4, x_66);
x_68 = 1;
lean_ctor_set(x_3, 0, x_54);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_68);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_3);
lean_ctor_set(x_69, 1, x_67);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_55);
lean_ctor_set(x_70, 1, x_69);
return x_70;
}
}
else
{
lean_dec(x_29);
if (x_6 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_71 = l_Lean_Parser_Error_toString(x_26);
x_72 = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(x_11, x_27, x_71);
lean_dec(x_27);
lean_dec(x_11);
x_73 = l_Std_PersistentArray_push___rarg(x_4, x_72);
x_74 = 1;
lean_ctor_set(x_3, 0, x_54);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_74);
x_4 = x_73;
goto _start;
}
else
{
uint8_t x_76; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_11);
x_76 = 1;
lean_ctor_set(x_3, 0, x_54);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_76);
goto _start;
}
}
}
}
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_78 = l_Lean_Parser_mkParserContext(x_1, x_2);
x_79 = lean_unsigned_to_nat(0u);
x_80 = lean_mk_empty_array_with_capacity(x_79);
x_81 = l_Lean_Parser_initCacheForInput(x_7);
lean_dec(x_7);
x_82 = lean_box(0);
lean_inc(x_5);
x_83 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_79);
lean_ctor_set(x_83, 2, x_5);
lean_ctor_set(x_83, 3, x_81);
lean_ctor_set(x_83, 4, x_82);
x_84 = l_Lean_Parser_whitespace(x_78, x_83);
lean_inc(x_78);
x_85 = l_Lean_Parser_topLevelCommandParserFn(x_78, x_84);
x_86 = lean_ctor_get(x_85, 4);
lean_inc(x_86);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
lean_dec(x_78);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_87 = lean_ctor_get(x_85, 0);
lean_inc(x_87);
x_88 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_87);
lean_dec(x_87);
x_89 = lean_ctor_get(x_85, 2);
lean_inc(x_89);
lean_dec(x_85);
x_90 = 0;
x_91 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set_uint8(x_91, sizeof(void*)*1, x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_4);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_88);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
else
{
lean_object* x_94; lean_object* x_95; uint8_t x_96; lean_object* x_97; uint8_t x_98; 
x_94 = lean_ctor_get(x_86, 0);
lean_inc(x_94);
lean_dec(x_86);
x_95 = lean_ctor_get(x_85, 2);
lean_inc(x_95);
x_96 = lean_nat_dec_eq(x_95, x_5);
lean_dec(x_5);
x_97 = lean_ctor_get(x_85, 0);
lean_inc(x_97);
lean_dec(x_85);
x_98 = l_Array_isEmpty___rarg(x_97);
if (x_96 == 0)
{
if (x_98 == 0)
{
lean_object* x_99; uint8_t x_100; lean_object* x_101; 
x_99 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_97);
lean_dec(x_97);
x_100 = 0;
x_101 = l_Lean_Syntax_getPos_x3f(x_99, x_100);
if (lean_obj_tag(x_101) == 0)
{
lean_dec(x_99);
if (x_6 == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; lean_object* x_106; 
x_102 = l_Lean_Parser_Error_toString(x_94);
x_103 = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(x_78, x_95, x_102);
lean_dec(x_78);
x_104 = l_Std_PersistentArray_push___rarg(x_4, x_103);
x_105 = 1;
x_106 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_106, 0, x_95);
lean_ctor_set_uint8(x_106, sizeof(void*)*1, x_105);
x_3 = x_106;
x_4 = x_104;
goto _start;
}
else
{
uint8_t x_108; lean_object* x_109; 
lean_dec(x_94);
lean_dec(x_78);
x_108 = 1;
x_109 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_109, 0, x_95);
lean_ctor_set_uint8(x_109, sizeof(void*)*1, x_108);
x_3 = x_109;
goto _start;
}
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; uint8_t x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_101);
lean_dec(x_2);
lean_dec(x_1);
x_111 = l_Lean_Parser_Error_toString(x_94);
x_112 = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(x_78, x_95, x_111);
lean_dec(x_78);
x_113 = l_Std_PersistentArray_push___rarg(x_4, x_112);
x_114 = 1;
x_115 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_115, 0, x_95);
lean_ctor_set_uint8(x_115, sizeof(void*)*1, x_114);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_113);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_99);
lean_ctor_set(x_117, 1, x_116);
return x_117;
}
}
else
{
lean_dec(x_97);
if (x_6 == 0)
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; lean_object* x_122; 
x_118 = l_Lean_Parser_Error_toString(x_94);
x_119 = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(x_78, x_95, x_118);
lean_dec(x_78);
x_120 = l_Std_PersistentArray_push___rarg(x_4, x_119);
x_121 = 1;
x_122 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_122, 0, x_95);
lean_ctor_set_uint8(x_122, sizeof(void*)*1, x_121);
x_3 = x_122;
x_4 = x_120;
goto _start;
}
else
{
uint8_t x_124; lean_object* x_125; 
lean_dec(x_94);
lean_dec(x_78);
x_124 = 1;
x_125 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_125, 0, x_95);
lean_ctor_set_uint8(x_125, sizeof(void*)*1, x_124);
x_3 = x_125;
goto _start;
}
}
}
else
{
lean_object* x_127; 
lean_inc(x_95);
lean_inc(x_78);
x_127 = l___private_Lean_Parser_Module_0__Lean_Parser_consumeInput(x_78, x_95);
if (x_98 == 0)
{
lean_object* x_128; uint8_t x_129; lean_object* x_130; 
x_128 = l_Array_back___at_Lean_Syntax_Traverser_up___spec__2(x_97);
lean_dec(x_97);
x_129 = 0;
x_130 = l_Lean_Syntax_getPos_x3f(x_128, x_129);
if (lean_obj_tag(x_130) == 0)
{
lean_dec(x_128);
if (x_6 == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; uint8_t x_134; lean_object* x_135; 
x_131 = l_Lean_Parser_Error_toString(x_94);
x_132 = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(x_78, x_95, x_131);
lean_dec(x_95);
lean_dec(x_78);
x_133 = l_Std_PersistentArray_push___rarg(x_4, x_132);
x_134 = 1;
x_135 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_135, 0, x_127);
lean_ctor_set_uint8(x_135, sizeof(void*)*1, x_134);
x_3 = x_135;
x_4 = x_133;
goto _start;
}
else
{
uint8_t x_137; lean_object* x_138; 
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_78);
x_137 = 1;
x_138 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_138, 0, x_127);
lean_ctor_set_uint8(x_138, sizeof(void*)*1, x_137);
x_3 = x_138;
goto _start;
}
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_130);
lean_dec(x_2);
lean_dec(x_1);
x_140 = l_Lean_Parser_Error_toString(x_94);
x_141 = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(x_78, x_95, x_140);
lean_dec(x_95);
lean_dec(x_78);
x_142 = l_Std_PersistentArray_push___rarg(x_4, x_141);
x_143 = 1;
x_144 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_144, 0, x_127);
lean_ctor_set_uint8(x_144, sizeof(void*)*1, x_143);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_142);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_128);
lean_ctor_set(x_146, 1, x_145);
return x_146;
}
}
else
{
lean_dec(x_97);
if (x_6 == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; uint8_t x_150; lean_object* x_151; 
x_147 = l_Lean_Parser_Error_toString(x_94);
x_148 = l___private_Lean_Parser_Module_0__Lean_Parser_mkErrorMessage(x_78, x_95, x_147);
lean_dec(x_95);
lean_dec(x_78);
x_149 = l_Std_PersistentArray_push___rarg(x_4, x_148);
x_150 = 1;
x_151 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_151, 0, x_127);
lean_ctor_set_uint8(x_151, sizeof(void*)*1, x_150);
x_3 = x_151;
x_4 = x_149;
goto _start;
}
else
{
uint8_t x_153; lean_object* x_154; 
lean_dec(x_95);
lean_dec(x_94);
lean_dec(x_78);
x_153 = 1;
x_154 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_154, 0, x_127);
lean_ctor_set_uint8(x_154, sizeof(void*)*1, x_153);
x_3 = x_154;
goto _start;
}
}
}
}
}
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_156 = l___private_Lean_Parser_Module_0__Lean_Parser_mkEOI(x_5);
x_157 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_157, 0, x_3);
lean_ctor_set(x_157, 1, x_4);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
return x_158;
}
}
}
lean_object* l_Lean_Parser_parseCommand(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Parser_parseCommand_parse(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Parser_testParseModuleAux_parse_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Parser_testParseModuleAux_parse_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Parser_testParseModuleAux_parse_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__4(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_3 == x_4;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
x_8 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
x_9 = l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__3(x_1, x_8, x_6);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = 1;
x_13 = x_3 + x_12;
x_3 = x_13;
x_5 = x_10;
x_6 = x_11;
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; 
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_5);
lean_ctor_set(x_19, 1, x_6);
return x_19;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__5(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_3 == x_4;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
x_8 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
x_9 = lean_apply_2(x_1, x_8, x_6);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = 1;
x_13 = x_3 + x_12;
x_3 = x_13;
x_5 = x_10;
x_6 = x_11;
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; 
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_5);
lean_ctor_set(x_19, 1, x_6);
return x_19;
}
}
}
lean_object* l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = lean_nat_dec_le(x_5, x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_1);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_13 = 0;
x_14 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_15 = lean_box(0);
x_16 = l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__4(x_1, x_4, x_13, x_14, x_15, x_3);
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_2, 0);
x_18 = lean_array_get_size(x_17);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_lt(x_19, x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_18);
lean_dec(x_1);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_3);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = lean_nat_dec_le(x_18, x_18);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_18);
lean_dec(x_1);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_3);
return x_25;
}
else
{
size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; 
x_26 = 0;
x_27 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_28 = lean_box(0);
x_29 = l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__5(x_1, x_17, x_26, x_27, x_28, x_3);
return x_29;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__7(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_3 == x_4;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
x_8 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
x_9 = l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__6(x_1, x_8, x_6);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = 1;
x_13 = x_3 + x_12;
x_3 = x_13;
x_5 = x_10;
x_6 = x_11;
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; 
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_5);
lean_ctor_set(x_19, 1, x_6);
return x_19;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__8(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_3 == x_4;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
x_8 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
x_9 = lean_apply_2(x_1, x_8, x_6);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = 1;
x_13 = x_3 + x_12;
x_3 = x_13;
x_5 = x_10;
x_6 = x_11;
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; 
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_5);
lean_ctor_set(x_19, 1, x_6);
return x_19;
}
}
}
lean_object* l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = lean_nat_dec_le(x_5, x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_1);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_13 = 0;
x_14 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_15 = lean_box(0);
x_16 = l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__7(x_1, x_4, x_13, x_14, x_15, x_3);
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_2, 0);
x_18 = lean_array_get_size(x_17);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_lt(x_19, x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_18);
lean_dec(x_1);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_3);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = lean_nat_dec_le(x_18, x_18);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_18);
lean_dec(x_1);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_3);
return x_25;
}
else
{
size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; 
x_26 = 0;
x_27 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_28 = lean_box(0);
x_29 = l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__8(x_1, x_17, x_26, x_27, x_28, x_3);
return x_29;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__10(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_3 == x_4;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
x_8 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
x_9 = l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__9(x_1, x_8, x_6);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = 1;
x_13 = x_3 + x_12;
x_3 = x_13;
x_5 = x_10;
x_6 = x_11;
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; 
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_5);
lean_ctor_set(x_19, 1, x_6);
return x_19;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__11(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_3 == x_4;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
x_8 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
x_9 = lean_apply_2(x_1, x_8, x_6);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = 1;
x_13 = x_3 + x_12;
x_3 = x_13;
x_5 = x_10;
x_6 = x_11;
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; 
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_5);
lean_ctor_set(x_19, 1, x_6);
return x_19;
}
}
}
lean_object* l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = lean_nat_dec_le(x_5, x_5);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_1);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_3);
return x_12;
}
else
{
size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; 
x_13 = 0;
x_14 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_15 = lean_box(0);
x_16 = l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__10(x_1, x_4, x_13, x_14, x_15, x_3);
return x_16;
}
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_ctor_get(x_2, 0);
x_18 = lean_array_get_size(x_17);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_lt(x_19, x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_18);
lean_dec(x_1);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_3);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = lean_nat_dec_le(x_18, x_18);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_18);
lean_dec(x_1);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_3);
return x_25;
}
else
{
size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; 
x_26 = 0;
x_27 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_28 = lean_box(0);
x_29 = l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__11(x_1, x_17, x_26, x_27, x_28, x_3);
return x_29;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__12(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_3 == x_4;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
x_8 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
x_9 = lean_apply_2(x_1, x_8, x_6);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = 1;
x_13 = x_3 + x_12;
x_3 = x_13;
x_5 = x_10;
x_6 = x_11;
goto _start;
}
else
{
uint8_t x_15; 
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_9);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; 
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_5);
lean_ctor_set(x_19, 1, x_6);
return x_19;
}
}
}
lean_object* l_Std_PersistentArray_forM___at_Lean_Parser_testParseModuleAux_parse___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_6);
x_9 = l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__3(x_1, x_4, x_3);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_dec(x_11);
x_12 = lean_box(0);
lean_ctor_set(x_9, 0, x_12);
return x_9;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_9);
if (x_16 == 0)
{
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_9, 0);
x_18 = lean_ctor_get(x_9, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_9);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
else
{
uint8_t x_20; 
x_20 = lean_nat_dec_le(x_6, x_6);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_6);
x_21 = l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__6(x_1, x_4, x_3);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
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
uint8_t x_28; 
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
size_t x_32; size_t x_33; lean_object* x_34; 
x_32 = 0;
x_33 = lean_usize_of_nat(x_6);
lean_dec(x_6);
lean_inc(x_1);
x_34 = l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__9(x_1, x_4, x_3);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_box(0);
x_37 = l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__12(x_1, x_5, x_32, x_33, x_36, x_35);
return x_37;
}
else
{
uint8_t x_38; 
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_34);
if (x_38 == 0)
{
return x_34;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_34, 0);
x_40 = lean_ctor_get(x_34, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_34);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
}
}
lean_object* l_Lean_MessageLog_forM___at_Lean_Parser_testParseModuleAux_parse___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentArray_forM___at_Lean_Parser_testParseModuleAux_parse___spec__2(x_2, x_1, x_3);
return x_4;
}
}
lean_object* l_Lean_Parser_testParseModuleAux_parse___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = 0;
x_4 = l_Lean_Message_toString(x_1, x_3, x_2);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_IO_println___at_Lean_instEval___spec__1(x_5, x_6);
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
lean_object* l_Lean_Parser_testParseModuleAux_parse(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_7 = lean_box(0);
x_8 = lean_box(0);
lean_inc(x_1);
x_9 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_9, 0, x_1);
lean_ctor_set(x_9, 1, x_7);
lean_ctor_set(x_9, 2, x_8);
lean_ctor_set(x_9, 3, x_7);
lean_inc(x_2);
x_10 = l_Lean_Parser_parseCommand_parse(x_2, x_9, x_3, x_4);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_11, 1);
lean_inc(x_14);
lean_dec(x_11);
lean_inc(x_12);
x_15 = l_Lean_Parser_isEOI(x_12);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_array_push(x_5, x_12);
x_3 = x_13;
x_4 = x_14;
x_5 = x_16;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_18 = l_Std_PersistentArray_isEmpty___rarg(x_14);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_5);
x_19 = lean_alloc_closure((void*)(l_Lean_Parser_testParseModuleAux_parse___lambda__1), 2, 0);
x_20 = l_Std_PersistentArray_forM___at_Lean_Parser_testParseModuleAux_parse___spec__2(x_19, x_14, x_6);
lean_dec(x_14);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
x_23 = lean_mk_string("failed to parse file");
x_24 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set_tag(x_20, 1);
lean_ctor_set(x_20, 0, x_24);
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_mk_string("failed to parse file");
x_27 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
else
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_20);
if (x_29 == 0)
{
return x_20;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_20, 0);
x_31 = lean_ctor_get(x_20, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_20);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
lean_object* x_33; 
lean_dec(x_14);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_5);
lean_ctor_set(x_33, 1, x_6);
return x_33;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__4(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__5(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__3(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__7(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__8(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__6(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__10(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__11(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentArray_forMAux___at_Lean_Parser_testParseModuleAux_parse___spec__9(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Array_foldlMUnsafe_fold___at_Lean_Parser_testParseModuleAux_parse___spec__12(x_1, x_2, x_7, x_8, x_5, x_6);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Std_PersistentArray_forM___at_Lean_Parser_testParseModuleAux_parse___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentArray_forM___at_Lean_Parser_testParseModuleAux_parse___spec__2(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Lean_MessageLog_forM___at_Lean_Parser_testParseModuleAux_parse___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_MessageLog_forM___at_Lean_Parser_testParseModuleAux_parse___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Parser_testParseModuleAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Parser_testParseModuleAux_parse(x_1, x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_Parser_testParseModule(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_Lean_Parser_mkInputContext(x_3, x_2);
lean_inc(x_5);
x_6 = l_Lean_Parser_parseHeader(x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
lean_dec(x_7);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_mk_empty_array_with_capacity(x_13);
x_15 = l_Lean_Parser_testParseModuleAux_parse(x_1, x_5, x_11, x_12, x_14, x_9);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_box(0);
x_19 = lean_mk_string("Lean");
x_20 = lean_name_mk_string(x_18, x_19);
x_21 = lean_mk_string("Parser");
x_22 = lean_name_mk_string(x_20, x_21);
x_23 = lean_mk_string("Module");
x_24 = lean_name_mk_string(x_22, x_23);
x_25 = lean_mk_string("module");
x_26 = lean_name_mk_string(x_24, x_25);
x_27 = l_Lean_nullKind;
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_17);
x_29 = lean_unsigned_to_nat(2u);
x_30 = lean_mk_empty_array_with_capacity(x_29);
x_31 = lean_array_push(x_30, x_10);
x_32 = lean_array_push(x_31, x_28);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_26);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Lean_Syntax_updateLeading(x_33);
lean_ctor_set(x_15, 0, x_34);
return x_15;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = lean_ctor_get(x_15, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_15);
x_37 = lean_box(0);
x_38 = lean_mk_string("Lean");
x_39 = lean_name_mk_string(x_37, x_38);
x_40 = lean_mk_string("Parser");
x_41 = lean_name_mk_string(x_39, x_40);
x_42 = lean_mk_string("Module");
x_43 = lean_name_mk_string(x_41, x_42);
x_44 = lean_mk_string("module");
x_45 = lean_name_mk_string(x_43, x_44);
x_46 = l_Lean_nullKind;
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_35);
x_48 = lean_unsigned_to_nat(2u);
x_49 = lean_mk_empty_array_with_capacity(x_48);
x_50 = lean_array_push(x_49, x_10);
x_51 = lean_array_push(x_50, x_47);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_45);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_Syntax_updateLeading(x_52);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_36);
return x_54;
}
}
else
{
uint8_t x_55; 
lean_dec(x_10);
x_55 = !lean_is_exclusive(x_15);
if (x_55 == 0)
{
return x_15;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_15, 0);
x_57 = lean_ctor_get(x_15, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_15);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_5);
lean_dec(x_1);
x_59 = !lean_is_exclusive(x_6);
if (x_59 == 0)
{
return x_6;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_6, 0);
x_61 = lean_ctor_get(x_6, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_6);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
}
lean_object* l_IO_FS_Handle_mk___at_Lean_Parser_testParseFile___spec__2(lean_object* x_1, uint8_t x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = l_IO_Prim_fopenFlags(x_2, x_3);
x_6 = lean_io_prim_handle_mk(x_1, x_5, x_4);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_IO_FS_readFile___at_Lean_Parser_testParseFile___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = 0;
x_4 = 0;
x_5 = l_IO_FS_Handle_mk___at_Lean_Parser_testParseFile___spec__2(x_1, x_3, x_4, x_2);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_mk_string("");
x_9 = l_IO_FS_Handle_readToEnd_read___at_IO_Process_output___spec__1(x_6, x_8, x_7);
lean_dec(x_6);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_5);
if (x_10 == 0)
{
return x_5;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_5, 0);
x_12 = lean_ctor_get(x_5, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_5);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Parser_testParseFile(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_readFile___at_Lean_Parser_testParseFile___spec__1(x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_Lean_Parser_testParseModule(x_1, x_2, x_5, x_6);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_2);
lean_dec(x_1);
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
lean_object* l_IO_FS_Handle_mk___at_Lean_Parser_testParseFile___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_unbox(x_2);
lean_dec(x_2);
x_6 = lean_unbox(x_3);
lean_dec(x_3);
x_7 = l_IO_FS_Handle_mk___at_Lean_Parser_testParseFile___spec__2(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_IO_FS_readFile___at_Lean_Parser_testParseFile___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_FS_readFile___at_Lean_Parser_testParseFile___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Message(lean_object*);
lean_object* initialize_Lean_Parser_Command(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Parser_Module(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Message(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Command(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Module_prelude = _init_l_Lean_Parser_Module_prelude();
lean_mark_persistent(l_Lean_Parser_Module_prelude);
l_Lean_Parser_Module_import = _init_l_Lean_Parser_Module_import();
lean_mark_persistent(l_Lean_Parser_Module_import);
l_Lean_Parser_Module_header = _init_l_Lean_Parser_Module_header();
lean_mark_persistent(l_Lean_Parser_Module_header);
l_Lean_Parser_Module_prelude_formatter___closed__1 = _init_l_Lean_Parser_Module_prelude_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Module_prelude_formatter___closed__1);
l_Lean_Parser_Module_prelude_formatter___closed__2 = _init_l_Lean_Parser_Module_prelude_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Module_prelude_formatter___closed__2);
l_Lean_Parser_Module_prelude_formatter___closed__3 = _init_l_Lean_Parser_Module_prelude_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Module_prelude_formatter___closed__3);
l_Lean_Parser_Module_prelude_formatter___closed__4 = _init_l_Lean_Parser_Module_prelude_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_Module_prelude_formatter___closed__4);
l_Lean_Parser_Module_prelude_formatter___closed__5 = _init_l_Lean_Parser_Module_prelude_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_Module_prelude_formatter___closed__5);
l_Lean_Parser_Module_prelude_formatter___closed__6 = _init_l_Lean_Parser_Module_prelude_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_Module_prelude_formatter___closed__6);
l_Lean_Parser_Module_prelude_formatter___closed__7 = _init_l_Lean_Parser_Module_prelude_formatter___closed__7();
lean_mark_persistent(l_Lean_Parser_Module_prelude_formatter___closed__7);
l_Lean_Parser_Module_prelude_formatter___closed__8 = _init_l_Lean_Parser_Module_prelude_formatter___closed__8();
lean_mark_persistent(l_Lean_Parser_Module_prelude_formatter___closed__8);
l_Lean_Parser_Module_import_formatter___closed__1 = _init_l_Lean_Parser_Module_import_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Module_import_formatter___closed__1);
l_Lean_Parser_Module_import_formatter___closed__2 = _init_l_Lean_Parser_Module_import_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Module_import_formatter___closed__2);
l_Lean_Parser_Module_import_formatter___closed__3 = _init_l_Lean_Parser_Module_import_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Module_import_formatter___closed__3);
l_Lean_Parser_Module_import_formatter___closed__4 = _init_l_Lean_Parser_Module_import_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_Module_import_formatter___closed__4);
l_Lean_Parser_Module_import_formatter___closed__5 = _init_l_Lean_Parser_Module_import_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_Module_import_formatter___closed__5);
l_Lean_Parser_Module_import_formatter___closed__6 = _init_l_Lean_Parser_Module_import_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_Module_import_formatter___closed__6);
l_Lean_Parser_Module_import_formatter___closed__7 = _init_l_Lean_Parser_Module_import_formatter___closed__7();
lean_mark_persistent(l_Lean_Parser_Module_import_formatter___closed__7);
l_Lean_Parser_Module_import_formatter___closed__8 = _init_l_Lean_Parser_Module_import_formatter___closed__8();
lean_mark_persistent(l_Lean_Parser_Module_import_formatter___closed__8);
l_Lean_Parser_Module_import_formatter___closed__9 = _init_l_Lean_Parser_Module_import_formatter___closed__9();
lean_mark_persistent(l_Lean_Parser_Module_import_formatter___closed__9);
l_Lean_Parser_Module_import_formatter___closed__10 = _init_l_Lean_Parser_Module_import_formatter___closed__10();
lean_mark_persistent(l_Lean_Parser_Module_import_formatter___closed__10);
l_Lean_Parser_Module_import_formatter___closed__11 = _init_l_Lean_Parser_Module_import_formatter___closed__11();
lean_mark_persistent(l_Lean_Parser_Module_import_formatter___closed__11);
l_Lean_Parser_Module_import_formatter___closed__12 = _init_l_Lean_Parser_Module_import_formatter___closed__12();
lean_mark_persistent(l_Lean_Parser_Module_import_formatter___closed__12);
l_Lean_Parser_Module_header_formatter___closed__1 = _init_l_Lean_Parser_Module_header_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Module_header_formatter___closed__1);
l_Lean_Parser_Module_header_formatter___closed__2 = _init_l_Lean_Parser_Module_header_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Module_header_formatter___closed__2);
l_Lean_Parser_Module_header_formatter___closed__3 = _init_l_Lean_Parser_Module_header_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Module_header_formatter___closed__3);
l_Lean_Parser_Module_header_formatter___closed__4 = _init_l_Lean_Parser_Module_header_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_Module_header_formatter___closed__4);
l_Lean_Parser_Module_header_formatter___closed__5 = _init_l_Lean_Parser_Module_header_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_Module_header_formatter___closed__5);
l_Lean_Parser_Module_header_formatter___closed__6 = _init_l_Lean_Parser_Module_header_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_Module_header_formatter___closed__6);
l_Lean_Parser_Module_header_formatter___closed__7 = _init_l_Lean_Parser_Module_header_formatter___closed__7();
lean_mark_persistent(l_Lean_Parser_Module_header_formatter___closed__7);
l_Lean_Parser_Module_header_formatter___closed__8 = _init_l_Lean_Parser_Module_header_formatter___closed__8();
lean_mark_persistent(l_Lean_Parser_Module_header_formatter___closed__8);
l_Lean_Parser_Module_header_formatter___closed__9 = _init_l_Lean_Parser_Module_header_formatter___closed__9();
lean_mark_persistent(l_Lean_Parser_Module_header_formatter___closed__9);
l_Lean_Parser_Module_header_formatter___closed__10 = _init_l_Lean_Parser_Module_header_formatter___closed__10();
lean_mark_persistent(l_Lean_Parser_Module_header_formatter___closed__10);
l_Lean_Parser_Module_header_formatter___closed__11 = _init_l_Lean_Parser_Module_header_formatter___closed__11();
lean_mark_persistent(l_Lean_Parser_Module_header_formatter___closed__11);
l_Lean_Parser_Module_header_formatter___closed__12 = _init_l_Lean_Parser_Module_header_formatter___closed__12();
lean_mark_persistent(l_Lean_Parser_Module_header_formatter___closed__12);
l_Lean_Parser_Module_header_formatter___closed__13 = _init_l_Lean_Parser_Module_header_formatter___closed__13();
lean_mark_persistent(l_Lean_Parser_Module_header_formatter___closed__13);
l_Lean_Parser_Module_module_formatter___closed__1 = _init_l_Lean_Parser_Module_module_formatter___closed__1();
lean_mark_persistent(l_Lean_Parser_Module_module_formatter___closed__1);
l_Lean_Parser_Module_module_formatter___closed__2 = _init_l_Lean_Parser_Module_module_formatter___closed__2();
lean_mark_persistent(l_Lean_Parser_Module_module_formatter___closed__2);
l_Lean_Parser_Module_module_formatter___closed__3 = _init_l_Lean_Parser_Module_module_formatter___closed__3();
lean_mark_persistent(l_Lean_Parser_Module_module_formatter___closed__3);
l_Lean_Parser_Module_module_formatter___closed__4 = _init_l_Lean_Parser_Module_module_formatter___closed__4();
lean_mark_persistent(l_Lean_Parser_Module_module_formatter___closed__4);
l_Lean_Parser_Module_module_formatter___closed__5 = _init_l_Lean_Parser_Module_module_formatter___closed__5();
lean_mark_persistent(l_Lean_Parser_Module_module_formatter___closed__5);
l_Lean_Parser_Module_module_formatter___closed__6 = _init_l_Lean_Parser_Module_module_formatter___closed__6();
lean_mark_persistent(l_Lean_Parser_Module_module_formatter___closed__6);
l_Lean_Parser_Module_module_formatter___closed__7 = _init_l_Lean_Parser_Module_module_formatter___closed__7();
lean_mark_persistent(l_Lean_Parser_Module_module_formatter___closed__7);
l_Lean_Parser_Module_module_formatter___closed__8 = _init_l_Lean_Parser_Module_module_formatter___closed__8();
lean_mark_persistent(l_Lean_Parser_Module_module_formatter___closed__8);
l_Lean_Parser_Module_module_formatter___closed__9 = _init_l_Lean_Parser_Module_module_formatter___closed__9();
lean_mark_persistent(l_Lean_Parser_Module_module_formatter___closed__9);
l_Lean_Parser_Module_module_formatter___closed__10 = _init_l_Lean_Parser_Module_module_formatter___closed__10();
lean_mark_persistent(l_Lean_Parser_Module_module_formatter___closed__10);
l_Lean_Parser_Module_prelude_parenthesizer___closed__1 = _init_l_Lean_Parser_Module_prelude_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Module_prelude_parenthesizer___closed__1);
l_Lean_Parser_Module_prelude_parenthesizer___closed__2 = _init_l_Lean_Parser_Module_prelude_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Module_prelude_parenthesizer___closed__2);
l_Lean_Parser_Module_prelude_parenthesizer___closed__3 = _init_l_Lean_Parser_Module_prelude_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Module_prelude_parenthesizer___closed__3);
l_Lean_Parser_Module_import_parenthesizer___closed__1 = _init_l_Lean_Parser_Module_import_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Module_import_parenthesizer___closed__1);
l_Lean_Parser_Module_import_parenthesizer___closed__2 = _init_l_Lean_Parser_Module_import_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Module_import_parenthesizer___closed__2);
l_Lean_Parser_Module_import_parenthesizer___closed__3 = _init_l_Lean_Parser_Module_import_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Module_import_parenthesizer___closed__3);
l_Lean_Parser_Module_import_parenthesizer___closed__4 = _init_l_Lean_Parser_Module_import_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_Module_import_parenthesizer___closed__4);
l_Lean_Parser_Module_import_parenthesizer___closed__5 = _init_l_Lean_Parser_Module_import_parenthesizer___closed__5();
lean_mark_persistent(l_Lean_Parser_Module_import_parenthesizer___closed__5);
l_Lean_Parser_Module_import_parenthesizer___closed__6 = _init_l_Lean_Parser_Module_import_parenthesizer___closed__6();
lean_mark_persistent(l_Lean_Parser_Module_import_parenthesizer___closed__6);
l_Lean_Parser_Module_import_parenthesizer___closed__7 = _init_l_Lean_Parser_Module_import_parenthesizer___closed__7();
lean_mark_persistent(l_Lean_Parser_Module_import_parenthesizer___closed__7);
l_Lean_Parser_Module_header_parenthesizer___closed__1 = _init_l_Lean_Parser_Module_header_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Module_header_parenthesizer___closed__1);
l_Lean_Parser_Module_header_parenthesizer___closed__2 = _init_l_Lean_Parser_Module_header_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Module_header_parenthesizer___closed__2);
l_Lean_Parser_Module_header_parenthesizer___closed__3 = _init_l_Lean_Parser_Module_header_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Module_header_parenthesizer___closed__3);
l_Lean_Parser_Module_header_parenthesizer___closed__4 = _init_l_Lean_Parser_Module_header_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_Module_header_parenthesizer___closed__4);
l_Lean_Parser_Module_header_parenthesizer___closed__5 = _init_l_Lean_Parser_Module_header_parenthesizer___closed__5();
lean_mark_persistent(l_Lean_Parser_Module_header_parenthesizer___closed__5);
l_Lean_Parser_Module_header_parenthesizer___closed__6 = _init_l_Lean_Parser_Module_header_parenthesizer___closed__6();
lean_mark_persistent(l_Lean_Parser_Module_header_parenthesizer___closed__6);
l_Lean_Parser_Module_header_parenthesizer___closed__7 = _init_l_Lean_Parser_Module_header_parenthesizer___closed__7();
lean_mark_persistent(l_Lean_Parser_Module_header_parenthesizer___closed__7);
l_Lean_Parser_Module_header_parenthesizer___closed__8 = _init_l_Lean_Parser_Module_header_parenthesizer___closed__8();
lean_mark_persistent(l_Lean_Parser_Module_header_parenthesizer___closed__8);
l_Lean_Parser_Module_header_parenthesizer___closed__9 = _init_l_Lean_Parser_Module_header_parenthesizer___closed__9();
lean_mark_persistent(l_Lean_Parser_Module_header_parenthesizer___closed__9);
l_Lean_Parser_Module_header_parenthesizer___closed__10 = _init_l_Lean_Parser_Module_header_parenthesizer___closed__10();
lean_mark_persistent(l_Lean_Parser_Module_header_parenthesizer___closed__10);
l_Lean_Parser_Module_module_parenthesizer___closed__1 = _init_l_Lean_Parser_Module_module_parenthesizer___closed__1();
lean_mark_persistent(l_Lean_Parser_Module_module_parenthesizer___closed__1);
l_Lean_Parser_Module_module_parenthesizer___closed__2 = _init_l_Lean_Parser_Module_module_parenthesizer___closed__2();
lean_mark_persistent(l_Lean_Parser_Module_module_parenthesizer___closed__2);
l_Lean_Parser_Module_module_parenthesizer___closed__3 = _init_l_Lean_Parser_Module_module_parenthesizer___closed__3();
lean_mark_persistent(l_Lean_Parser_Module_module_parenthesizer___closed__3);
l_Lean_Parser_Module_module_parenthesizer___closed__4 = _init_l_Lean_Parser_Module_module_parenthesizer___closed__4();
lean_mark_persistent(l_Lean_Parser_Module_module_parenthesizer___closed__4);
l_Lean_Parser_Module_module_parenthesizer___closed__5 = _init_l_Lean_Parser_Module_module_parenthesizer___closed__5();
lean_mark_persistent(l_Lean_Parser_Module_module_parenthesizer___closed__5);
l_Lean_Parser_Module_module_parenthesizer___closed__6 = _init_l_Lean_Parser_Module_module_parenthesizer___closed__6();
lean_mark_persistent(l_Lean_Parser_Module_module_parenthesizer___closed__6);
l_Lean_Parser_Module_module_parenthesizer___closed__7 = _init_l_Lean_Parser_Module_module_parenthesizer___closed__7();
lean_mark_persistent(l_Lean_Parser_Module_module_parenthesizer___closed__7);
l_Lean_Parser_Module_module = _init_l_Lean_Parser_Module_module();
lean_mark_persistent(l_Lean_Parser_Module_module);
l_Lean_Parser_ModuleParserState_pos___default = _init_l_Lean_Parser_ModuleParserState_pos___default();
lean_mark_persistent(l_Lean_Parser_ModuleParserState_pos___default);
l_Lean_Parser_ModuleParserState_recovering___default = _init_l_Lean_Parser_ModuleParserState_recovering___default();
l_Lean_Parser_instInhabitedModuleParserState = _init_l_Lean_Parser_instInhabitedModuleParserState();
lean_mark_persistent(l_Lean_Parser_instInhabitedModuleParserState);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
