// Lean compiler output
// Module: Lean.Data.Lsp.LanguageFeatures
// Imports: Init Lean.Data.Json Lean.Data.Lsp.Basic
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
lean_object* l_Lean_Lsp_instFromJsonSemanticTokens;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284____spec__2(size_t, size_t, lean_object*);
lean_object* l_Lean_Lsp_instToJsonSemanticTokensParams;
lean_object* l_Lean_Lsp_instFromJsonCompletionOptions;
size_t l_USize_add(size_t, size_t);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonDocumentHighlightKind_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Lsp_instToJsonHoverParams;
lean_object* l_Lean_Lsp_SemanticTokenType_toNat_match__1(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1594____boxed(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHoverParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_559_(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonSemanticTokensRangeParams;
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonRange____x40_Lean_Data_Lsp_Basic___hyg_443____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonDocumentHighlightKind_match__1(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHover____x40_Lean_Data_Lsp_LanguageFeatures___hyg_503____boxed(lean_object*);
uint8_t l_Lean_Lsp_CompletionOptions_resolveProvider___default;
lean_object* l_Lean_Lsp_DocumentSymbolAux_children_x3f___default(lean_object*);
lean_object* l_Lean_Lsp_instToJsonDocumentSymbolAux___rarg(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentHighlight____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1040____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonDocumentSymbol;
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_Lsp_instToJsonSemanticTokens;
lean_object* l_Lean_Lsp_instToJsonSymbolKind_match__1(lean_object*);
lean_object* l_Lean_Lsp_instToJsonDocumentHighlightKind___boxed(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonDeclarationParams;
lean_object* l_Lean_Lsp_instToJsonDefinitionParams;
lean_object* l_Lean_Lsp_instFromJsonDefinitionParams;
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_221____boxed(lean_object*);
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_221____spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instInhabitedCompletionItem;
lean_object* l_Lean_Json_opt___at_Lean_Lsp_instToJsonDocumentSymbol_go___spec__2(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDeclarationParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_649_(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1594____spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentHighlightParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_964_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokensOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1653_(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_162____spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonSymbolKind_match__1___rarg___boxed(lean_object**);
lean_object* l_Lean_Lsp_SemanticTokenType_names;
lean_object* l_List_join___rarg(lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonDocumentFilter____x40_Lean_Data_Lsp_Basic___hyg_1611____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonCompletionItem;
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonTypeDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_874_(lean_object*);
lean_object* l_Lean_Lsp_instToJsonDocumentSymbolParams;
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonTextDocumentPositionParams____x40_Lean_Data_Lsp_Basic___hyg_1533____spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_374____boxed(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonDocumentHighlightParams;
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873____spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_100_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1594_(lean_object*);
lean_object* l_Lean_Lsp_CompletionOptions_triggerCharacters_x3f___default;
lean_object* l_Lean_Lsp_instToJsonDocumentHighlightParams;
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1488_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonHover____x40_Lean_Data_Lsp_LanguageFeatures___hyg_474_(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_329____spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_221____spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284_(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonDocumentSymbol_go___spec__3(size_t, size_t, lean_object*);
lean_object* l_Lean_Lsp_SemanticTokenType_toNat_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensRangeParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1782____boxed(lean_object*);
lean_object* l_Lean_Lsp_SemanticTokenType_toNat(uint8_t);
lean_object* l_Lean_Lsp_Hover_range_x3f___default;
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1488____spec__1(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_419_(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1904____spec__1(size_t, size_t, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1707____boxed(lean_object*);
lean_object* l_Lean_Lsp_instToJsonSymbolKind_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1904_(lean_object*);
lean_object* l_Lean_Lsp_CompletionOptions_allCommitCharacters_x3f___default;
lean_object* l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonDocumentSymbol_go___spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284____spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonDocumentFilter____x40_Lean_Data_Lsp_Basic___hyg_1639____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHover____x40_Lean_Data_Lsp_LanguageFeatures___hyg_503____spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDocumentSymbolParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1084____boxed(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensRangeParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1782_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_739____boxed(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDeclarationParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_694_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_739_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_162____boxed(lean_object*);
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentHighlight____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1040____spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonSymbolKind(uint8_t);
lean_object* l_Lean_Lsp_instFromJsonDocumentSymbolParams;
lean_object* l_Lean_Lsp_SemanticTokenType_toNat___boxed(lean_object*);
lean_object* l_Lean_Lsp_instToJsonSemanticTokensOptions;
lean_object* l_Lean_Lsp_instFromJsonTypeDefinitionParams;
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____spec__1(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873____boxed(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1707_(lean_object*);
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_100____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonDocumentSymbol_go_match__1(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291_(lean_object*);
lean_object* l_Lean_Lsp_instToJsonDocumentSymbolAux(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_784_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDocumentSymbolParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1084_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentHighlight____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1040_(lean_object*);
lean_object* l_Lean_Lsp_instToJsonDeclarationParams;
lean_object* l_Lean_Lsp_instToJsonSemanticTokensLegend;
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_374_(lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Lsp_instToJsonDocumentHighlightKind_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokensRangeParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1827_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDocumentHighlightParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_919____boxed(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1594____spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonTextDocumentIdentifier____x40_Lean_Data_Lsp_Basic___hyg_1071_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_329_(lean_object*);
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonLocationLink____x40_Lean_Data_Lsp_Basic___hyg_692____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonSemanticTokensParams;
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_162_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonMarkupContent____x40_Lean_Data_Lsp_Basic___hyg_1956_(lean_object*);
lean_object* l_Lean_Lsp_instToJsonCompletionParams;
lean_object* l_Lean_Lsp_DocumentSymbolAux_detail_x3f___default;
lean_object* l_Lean_Lsp_instToJsonCompletionList;
lean_object* l_Lean_Lsp_instToJsonCompletionItem;
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41_(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__3(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_DocumentHighlight_kind_x3f___default;
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonHoverParams;
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_162____spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonHoverParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_604_(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_329____spec__1(size_t, size_t, lean_object*);
lean_object* l_Lean_Lsp_instToJsonCompletionOptions;
lean_object* l_Lean_Lsp_instToJsonHover;
lean_object* l_Lean_Lsp_instToJsonDocumentSymbol_go(lean_object*);
lean_object* l_Lean_Lsp_instToJsonDocumentHighlightKind(uint8_t);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonMarkupContent____x40_Lean_Data_Lsp_Basic___hyg_1922_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____boxed(lean_object*);
lean_object* l_Lean_Lsp_SemanticTokenType_toNat_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_100____spec__2(size_t, size_t, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873____spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_221_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHoverParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_559____boxed(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284____boxed(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonLocationLink____x40_Lean_Data_Lsp_Basic___hyg_739____spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1533_(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284____spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonTypeDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_829____boxed(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____spec__2(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_100____spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonSemanticTokensOptions;
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonTypeDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_829_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokensParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1738_(lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonLocation____x40_Lean_Data_Lsp_Basic___hyg_611____spec__2(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____at_Lean_Lsp_instToJsonDocumentSymbol_go___spec__1(lean_object*);
lean_object* l_Lean_Lsp_instToJsonDocumentHighlight;
lean_object* l_Lean_Lsp_instToJsonSymbolKind___boxed(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__3___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHover____x40_Lean_Data_Lsp_LanguageFeatures___hyg_503_(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873____spec__2(size_t, size_t, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1115_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonRange____x40_Lean_Data_Lsp_Basic___hyg_409_(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonHover;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__2(size_t, size_t, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonSemanticTokensLegend;
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873_(lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHover____x40_Lean_Data_Lsp_LanguageFeatures___hyg_503____spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonSemanticTokensRangeParams;
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284____spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonDocumentSymbolResult(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonCompletionParams;
lean_object* l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonPosition____x40_Lean_Data_Lsp_Basic___hyg_219_(lean_object*);
lean_object* l_Lean_Lsp_instToJsonTypeDefinitionParams;
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDeclarationParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_649____boxed(lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1488____boxed(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Lsp_instToJsonDocumentSymbol_go_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1488____spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____spec__2___rarg(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1904____spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDocumentHighlightParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_919_(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonCompletionList;
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(lean_object*, lean_object*);
static lean_object* _init_l_Lean_Lsp_CompletionOptions_triggerCharacters_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_CompletionOptions_allCommitCharacters_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static uint8_t _init_l_Lean_Lsp_CompletionOptions_resolveProvider___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__2(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = x_3;
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_array_uget(x_3, x_2);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_3, x_2, x_8);
x_10 = x_7;
x_11 = l_Lean_Json_getStr_x3f(x_10);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
else
{
lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_11, 0);
lean_inc(x_15);
lean_dec(x_11);
x_16 = 1;
x_17 = x_2 + x_16;
x_18 = x_15;
x_19 = lean_array_uset(x_9, x_2, x_18);
x_2 = x_17;
x_3 = x_19;
goto _start;
}
}
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
case 4:
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_array_get_size(x_6);
x_8 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_9 = 0;
x_10 = x_6;
x_11 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__2(x_8, x_9, x_10);
x_12 = x_11;
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
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_12, 0, x_18);
return x_12;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_12, 0);
lean_inc(x_19);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
}
}
default: 
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_3);
x_22 = lean_mk_string("JSON array expected");
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
return x_23;
}
}
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
x_4 = l_Lean_Json_getBool_x3f(x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("triggerCharacters");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__1(x_1, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_mk_string("allCommitCharacters");
x_9 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__1(x_1, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_mk_string("resolveProvider");
x_15 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__3(x_1, x_14);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
lean_dec(x_13);
lean_dec(x_7);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_15);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_15, 0);
x_21 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_21, 0, x_7);
lean_ctor_set(x_21, 1, x_13);
x_22 = lean_unbox(x_20);
lean_dec(x_20);
lean_ctor_set_uint8(x_21, sizeof(void*)*2, x_22);
lean_ctor_set(x_15, 0, x_21);
return x_15;
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_15, 0);
lean_inc(x_23);
lean_dec(x_15);
x_24 = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(x_24, 0, x_7);
lean_ctor_set(x_24, 1, x_13);
x_25 = lean_unbox(x_23);
lean_dec(x_23);
lean_ctor_set_uint8(x_24, sizeof(void*)*2, x_25);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_24);
return x_26;
}
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__2(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCompletionOptions() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____boxed), 1, 0);
return x_1;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_100____spec__2(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_10, 0, x_9);
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
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_100____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_array_get_size(x_4);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = 0;
x_8 = x_4;
x_9 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_100____spec__2(x_6, x_7, x_8);
x_10 = x_9;
x_11 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_100_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_mk_string("triggerCharacters");
x_4 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_100____spec__1(x_3, x_2);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_mk_string("allCommitCharacters");
x_7 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_100____spec__1(x_6, x_5);
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_9 = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(x_9, 0, x_8);
x_10 = lean_mk_string("resolveProvider");
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_4);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_List_join___rarg(x_16);
x_18 = l_Lean_Json_mkObj(x_17);
return x_18;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_100____spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_100____spec__2(x_4, x_5, x_3);
return x_6;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonCompletionOptions() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_100_), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_162____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
else
{
lean_object* x_6; 
x_6 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonMarkupContent____x40_Lean_Data_Lsp_Basic___hyg_1956_(x_3);
lean_dec(x_3);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_6, 0);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_6, 0, x_12);
return x_6;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_6, 0);
lean_inc(x_13);
lean_dec(x_6);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_162_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("label");
x_3 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(x_1, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_mk_string("detail");
x_9 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonDocumentFilter____x40_Lean_Data_Lsp_Basic___hyg_1639____spec__1(x_1, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_mk_string("documentation");
x_15 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_162____spec__1(x_1, x_14);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
lean_dec(x_13);
lean_dec(x_7);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_15);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_15, 0);
x_21 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_21, 0, x_7);
lean_ctor_set(x_21, 1, x_13);
lean_ctor_set(x_21, 2, x_20);
lean_ctor_set(x_15, 0, x_21);
return x_15;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_15, 0);
lean_inc(x_22);
lean_dec(x_15);
x_23 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_23, 0, x_7);
lean_ctor_set(x_23, 1, x_13);
lean_ctor_set(x_23, 2, x_22);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
return x_24;
}
}
}
}
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_162____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_162____spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_162____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_162_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCompletionItem() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_162____boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_221____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonMarkupContent____x40_Lean_Data_Lsp_Basic___hyg_1922_(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_221_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_2);
x_5 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_5, 0, x_2);
x_6 = lean_mk_string("label");
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_mk_string("detail");
x_11 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonDocumentFilter____x40_Lean_Data_Lsp_Basic___hyg_1611____spec__1(x_10, x_3);
x_12 = lean_mk_string("documentation");
x_13 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_221____spec__1(x_12, x_4);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_8);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_List_join___rarg(x_16);
x_18 = l_Lean_Json_mkObj(x_17);
return x_18;
}
}
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_221____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_221____spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_221____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_221_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonCompletionItem() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_221____boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_instInhabitedCompletionItem() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_mk_string("");
x_3 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 2, x_1);
return x_3;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284____spec__2(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = x_3;
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_array_uget(x_3, x_2);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_3, x_2, x_8);
x_10 = x_7;
x_11 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_162_(x_10);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
else
{
lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_11, 0);
lean_inc(x_15);
lean_dec(x_11);
x_16 = 1;
x_17 = x_2 + x_16;
x_18 = x_15;
x_19 = lean_array_uset(x_9, x_2, x_18);
x_2 = x_17;
x_3 = x_19;
goto _start;
}
}
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
if (lean_obj_tag(x_3) == 4)
{
lean_object* x_4; lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_array_get_size(x_4);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = 0;
x_8 = x_4;
x_9 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284____spec__2(x_6, x_7, x_8);
x_10 = x_9;
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
x_11 = lean_mk_string("JSON array expected");
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("isIncomplete");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__3(x_1, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_mk_string("items");
x_9 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284____spec__1(x_1, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_unbox(x_7);
lean_dec(x_7);
lean_ctor_set_uint8(x_15, sizeof(void*)*1, x_16);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_9, 0);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_unbox(x_7);
lean_dec(x_7);
lean_ctor_set_uint8(x_18, sizeof(void*)*1, x_19);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_18);
return x_20;
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284____spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284____spec__2(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284____spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCompletionList() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_284____boxed), 1, 0);
return x_1;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_329____spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionItem____x40_Lean_Data_Lsp_LanguageFeatures___hyg_221_(x_9);
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
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_329_(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_2 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(x_4, 0, x_2);
x_5 = lean_mk_string("isIncomplete");
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_array_get_size(x_3);
x_10 = lean_usize_of_nat(x_9);
lean_dec(x_9);
x_11 = 0;
x_12 = x_3;
x_13 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_329____spec__1(x_10, x_11, x_12);
x_14 = x_13;
x_15 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_mk_string("items");
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_7);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_7);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_8);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_List_join___rarg(x_20);
x_22 = l_Lean_Json_mkObj(x_21);
return x_22;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_329____spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_329____spec__1(x_4, x_5, x_3);
return x_6;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonCompletionList() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionList____x40_Lean_Data_Lsp_LanguageFeatures___hyg_329_), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_374_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("textDocument");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonTextDocumentPositionParams____x40_Lean_Data_Lsp_Basic___hyg_1533____spec__1(x_1, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_mk_string("position");
x_9 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonRange____x40_Lean_Data_Lsp_Basic___hyg_443____spec__1(x_1, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec(x_9);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_7);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_374____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_374_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonCompletionParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_374____boxed), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_419_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonTextDocumentIdentifier____x40_Lean_Data_Lsp_Basic___hyg_1071_(x_2);
x_4 = lean_mk_string("textDocument");
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonPosition____x40_Lean_Data_Lsp_Basic___hyg_219_(x_8);
x_10 = lean_mk_string("position");
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_List_join___rarg(x_14);
x_16 = l_Lean_Json_mkObj(x_15);
return x_16;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonCompletionParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_419_), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Hover_range_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonHover____x40_Lean_Data_Lsp_LanguageFeatures___hyg_474_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonMarkupContent____x40_Lean_Data_Lsp_Basic___hyg_1922_(x_2);
lean_dec(x_2);
x_4 = lean_mk_string("contents");
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_mk_string("range");
x_10 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonLocationLink____x40_Lean_Data_Lsp_Basic___hyg_692____spec__1(x_9, x_8);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_List_join___rarg(x_12);
x_14 = l_Lean_Json_mkObj(x_13);
return x_14;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonHover() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonHover____x40_Lean_Data_Lsp_LanguageFeatures___hyg_474_), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHover____x40_Lean_Data_Lsp_LanguageFeatures___hyg_503____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
x_4 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonMarkupContent____x40_Lean_Data_Lsp_Basic___hyg_1956_(x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHover____x40_Lean_Data_Lsp_LanguageFeatures___hyg_503_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("contents");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHover____x40_Lean_Data_Lsp_LanguageFeatures___hyg_503____spec__1(x_1, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_mk_string("range");
x_9 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonLocationLink____x40_Lean_Data_Lsp_Basic___hyg_739____spec__1(x_1, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec(x_9);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_7);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHover____x40_Lean_Data_Lsp_LanguageFeatures___hyg_503____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHover____x40_Lean_Data_Lsp_LanguageFeatures___hyg_503____spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHover____x40_Lean_Data_Lsp_LanguageFeatures___hyg_503____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHover____x40_Lean_Data_Lsp_LanguageFeatures___hyg_503_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonHover() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHover____x40_Lean_Data_Lsp_LanguageFeatures___hyg_503____boxed), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHoverParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_559_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("textDocument");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonTextDocumentPositionParams____x40_Lean_Data_Lsp_Basic___hyg_1533____spec__1(x_1, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_mk_string("position");
x_9 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonRange____x40_Lean_Data_Lsp_Basic___hyg_443____spec__1(x_1, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec(x_9);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_7);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHoverParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_559____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHoverParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_559_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonHoverParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonHoverParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_559____boxed), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonHoverParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_604_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonTextDocumentIdentifier____x40_Lean_Data_Lsp_Basic___hyg_1071_(x_2);
x_4 = lean_mk_string("textDocument");
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonPosition____x40_Lean_Data_Lsp_Basic___hyg_219_(x_8);
x_10 = lean_mk_string("position");
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_List_join___rarg(x_14);
x_16 = l_Lean_Json_mkObj(x_15);
return x_16;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonHoverParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonHoverParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_604_), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDeclarationParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_649_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("textDocument");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonTextDocumentPositionParams____x40_Lean_Data_Lsp_Basic___hyg_1533____spec__1(x_1, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_mk_string("position");
x_9 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonRange____x40_Lean_Data_Lsp_Basic___hyg_443____spec__1(x_1, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec(x_9);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_7);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDeclarationParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_649____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDeclarationParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_649_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDeclarationParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDeclarationParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_649____boxed), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDeclarationParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_694_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonTextDocumentIdentifier____x40_Lean_Data_Lsp_Basic___hyg_1071_(x_2);
x_4 = lean_mk_string("textDocument");
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonPosition____x40_Lean_Data_Lsp_Basic___hyg_219_(x_8);
x_10 = lean_mk_string("position");
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_List_join___rarg(x_14);
x_16 = l_Lean_Json_mkObj(x_15);
return x_16;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonDeclarationParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDeclarationParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_694_), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_739_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("textDocument");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonTextDocumentPositionParams____x40_Lean_Data_Lsp_Basic___hyg_1533____spec__1(x_1, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_mk_string("position");
x_9 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonRange____x40_Lean_Data_Lsp_Basic___hyg_443____spec__1(x_1, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec(x_9);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_7);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_739____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_739_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDefinitionParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_739____boxed), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_784_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonTextDocumentIdentifier____x40_Lean_Data_Lsp_Basic___hyg_1071_(x_2);
x_4 = lean_mk_string("textDocument");
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonPosition____x40_Lean_Data_Lsp_Basic___hyg_219_(x_8);
x_10 = lean_mk_string("position");
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_List_join___rarg(x_14);
x_16 = l_Lean_Json_mkObj(x_15);
return x_16;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonDefinitionParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_784_), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonTypeDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_829_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("textDocument");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonTextDocumentPositionParams____x40_Lean_Data_Lsp_Basic___hyg_1533____spec__1(x_1, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_mk_string("position");
x_9 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonRange____x40_Lean_Data_Lsp_Basic___hyg_443____spec__1(x_1, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec(x_9);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_7);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonTypeDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_829____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonTypeDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_829_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonTypeDefinitionParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonTypeDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_829____boxed), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonTypeDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_874_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonTextDocumentIdentifier____x40_Lean_Data_Lsp_Basic___hyg_1071_(x_2);
x_4 = lean_mk_string("textDocument");
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonPosition____x40_Lean_Data_Lsp_Basic___hyg_219_(x_8);
x_10 = lean_mk_string("position");
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_List_join___rarg(x_14);
x_16 = l_Lean_Json_mkObj(x_15);
return x_16;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonTypeDefinitionParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonTypeDefinitionParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_874_), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDocumentHighlightParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_919_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("textDocument");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonTextDocumentPositionParams____x40_Lean_Data_Lsp_Basic___hyg_1533____spec__1(x_1, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_mk_string("position");
x_9 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonRange____x40_Lean_Data_Lsp_Basic___hyg_443____spec__1(x_1, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec(x_9);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_7);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDocumentHighlightParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_919____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDocumentHighlightParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_919_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentHighlightParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDocumentHighlightParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_919____boxed), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentHighlightParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_964_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonTextDocumentIdentifier____x40_Lean_Data_Lsp_Basic___hyg_1071_(x_2);
x_4 = lean_mk_string("textDocument");
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonPosition____x40_Lean_Data_Lsp_Basic___hyg_219_(x_8);
x_10 = lean_mk_string("position");
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_List_join___rarg(x_14);
x_16 = l_Lean_Json_mkObj(x_15);
return x_16;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonDocumentHighlightParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentHighlightParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_964_), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Lsp_instToJsonDocumentHighlightKind_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_4, x_9);
return x_10;
}
}
}
}
lean_object* l_Lean_Lsp_instToJsonDocumentHighlightKind_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Lsp_instToJsonDocumentHighlightKind_match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Lsp_instToJsonDocumentHighlightKind_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Lsp_instToJsonDocumentHighlightKind_match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_Lsp_instToJsonDocumentHighlightKind(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_to_int(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_unsigned_to_nat(2u);
x_8 = lean_nat_to_int(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
default: 
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_unsigned_to_nat(3u);
x_13 = lean_nat_to_int(x_12);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Lsp_instToJsonDocumentHighlightKind___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lean_Lsp_instToJsonDocumentHighlightKind(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_DocumentHighlight_kind_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentHighlight____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1040____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_box(0);
x_6 = lean_unbox(x_4);
switch (x_6) {
case 0:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_to_int(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_5);
return x_13;
}
case 1:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_unsigned_to_nat(2u);
x_15 = lean_nat_to_int(x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_5);
return x_20;
}
default: 
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_21 = lean_unsigned_to_nat(3u);
x_22 = lean_nat_to_int(x_21);
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_1);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_5);
return x_27;
}
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentHighlight____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1040_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonRange____x40_Lean_Data_Lsp_Basic___hyg_409_(x_2);
x_4 = lean_mk_string("range");
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_mk_string("kind");
x_10 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentHighlight____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1040____spec__1(x_9, x_8);
lean_dec(x_8);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_6);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_7);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_List_join___rarg(x_12);
x_14 = l_Lean_Json_mkObj(x_13);
return x_14;
}
}
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentHighlight____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1040____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentHighlight____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1040____spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonDocumentHighlight() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentHighlight____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1040_), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDocumentSymbolParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1084_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("textDocument");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonTextDocumentPositionParams____x40_Lean_Data_Lsp_Basic___hyg_1533____spec__1(x_1, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDocumentSymbolParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1084____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDocumentSymbolParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1084_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDocumentSymbolParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonDocumentSymbolParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1084____boxed), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1115_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonTextDocumentIdentifier____x40_Lean_Data_Lsp_Basic___hyg_1071_(x_1);
x_3 = lean_mk_string("textDocument");
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = l_List_join___rarg(x_7);
x_9 = l_Lean_Json_mkObj(x_8);
return x_9;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonDocumentSymbolParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1115_), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Lsp_instToJsonSymbolKind_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18, lean_object* x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25, lean_object* x_26, lean_object* x_27) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_28 = lean_box(0);
x_29 = lean_apply_1(x_2, x_28);
return x_29;
}
case 1:
{
lean_object* x_30; lean_object* x_31; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_30 = lean_box(0);
x_31 = lean_apply_1(x_3, x_30);
return x_31;
}
case 2:
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_32 = lean_box(0);
x_33 = lean_apply_1(x_4, x_32);
return x_33;
}
case 3:
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_34 = lean_box(0);
x_35 = lean_apply_1(x_5, x_34);
return x_35;
}
case 4:
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_36 = lean_box(0);
x_37 = lean_apply_1(x_6, x_36);
return x_37;
}
case 5:
{
lean_object* x_38; lean_object* x_39; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_38 = lean_box(0);
x_39 = lean_apply_1(x_7, x_38);
return x_39;
}
case 6:
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_40 = lean_box(0);
x_41 = lean_apply_1(x_8, x_40);
return x_41;
}
case 7:
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_42 = lean_box(0);
x_43 = lean_apply_1(x_9, x_42);
return x_43;
}
case 8:
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_44 = lean_box(0);
x_45 = lean_apply_1(x_10, x_44);
return x_45;
}
case 9:
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_46 = lean_box(0);
x_47 = lean_apply_1(x_11, x_46);
return x_47;
}
case 10:
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_48 = lean_box(0);
x_49 = lean_apply_1(x_12, x_48);
return x_49;
}
case 11:
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
x_50 = lean_box(0);
x_51 = lean_apply_1(x_13, x_50);
return x_51;
}
case 12:
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
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
lean_dec(x_2);
x_52 = lean_box(0);
x_53 = lean_apply_1(x_14, x_52);
return x_53;
}
case 13:
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_14);
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
lean_dec(x_2);
x_54 = lean_box(0);
x_55 = lean_apply_1(x_15, x_54);
return x_55;
}
case 14:
{
lean_object* x_56; lean_object* x_57; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_14);
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
lean_dec(x_2);
x_56 = lean_box(0);
x_57 = lean_apply_1(x_16, x_56);
return x_57;
}
case 15:
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
lean_dec(x_2);
x_58 = lean_box(0);
x_59 = lean_apply_1(x_17, x_58);
return x_59;
}
case 16:
{
lean_object* x_60; lean_object* x_61; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
lean_dec(x_2);
x_60 = lean_box(0);
x_61 = lean_apply_1(x_18, x_60);
return x_61;
}
case 17:
{
lean_object* x_62; lean_object* x_63; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
lean_dec(x_2);
x_62 = lean_box(0);
x_63 = lean_apply_1(x_19, x_62);
return x_63;
}
case 18:
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
lean_dec(x_2);
x_64 = lean_box(0);
x_65 = lean_apply_1(x_20, x_64);
return x_65;
}
case 19:
{
lean_object* x_66; lean_object* x_67; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
lean_dec(x_2);
x_66 = lean_box(0);
x_67 = lean_apply_1(x_21, x_66);
return x_67;
}
case 20:
{
lean_object* x_68; lean_object* x_69; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
lean_dec(x_2);
x_68 = lean_box(0);
x_69 = lean_apply_1(x_22, x_68);
return x_69;
}
case 21:
{
lean_object* x_70; lean_object* x_71; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
lean_dec(x_2);
x_70 = lean_box(0);
x_71 = lean_apply_1(x_23, x_70);
return x_71;
}
case 22:
{
lean_object* x_72; lean_object* x_73; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
lean_dec(x_2);
x_72 = lean_box(0);
x_73 = lean_apply_1(x_24, x_72);
return x_73;
}
case 23:
{
lean_object* x_74; lean_object* x_75; 
lean_dec(x_27);
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
lean_dec(x_2);
x_74 = lean_box(0);
x_75 = lean_apply_1(x_25, x_74);
return x_75;
}
case 24:
{
lean_object* x_76; lean_object* x_77; 
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
lean_dec(x_2);
x_76 = lean_box(0);
x_77 = lean_apply_1(x_26, x_76);
return x_77;
}
default: 
{
lean_object* x_78; lean_object* x_79; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
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
lean_dec(x_2);
x_78 = lean_box(0);
x_79 = lean_apply_1(x_27, x_78);
return x_79;
}
}
}
}
lean_object* l_Lean_Lsp_instToJsonSymbolKind_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Lsp_instToJsonSymbolKind_match__1___rarg___boxed), 27, 0);
return x_2;
}
}
lean_object* l_Lean_Lsp_instToJsonSymbolKind_match__1___rarg___boxed(lean_object** _args) {
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
lean_object* x_24 = _args[23];
lean_object* x_25 = _args[24];
lean_object* x_26 = _args[25];
lean_object* x_27 = _args[26];
_start:
{
uint8_t x_28; lean_object* x_29; 
x_28 = lean_unbox(x_1);
lean_dec(x_1);
x_29 = l_Lean_Lsp_instToJsonSymbolKind_match__1___rarg(x_28, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20, x_21, x_22, x_23, x_24, x_25, x_26, x_27);
return x_29;
}
}
lean_object* l_Lean_Lsp_instToJsonSymbolKind(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_nat_to_int(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_unsigned_to_nat(2u);
x_8 = lean_nat_to_int(x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
case 2:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_unsigned_to_nat(3u);
x_13 = lean_nat_to_int(x_12);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
case 3:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_unsigned_to_nat(4u);
x_18 = lean_nat_to_int(x_17);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
case 4:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_unsigned_to_nat(5u);
x_23 = lean_nat_to_int(x_22);
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_26, 0, x_25);
return x_26;
}
case 5:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_27 = lean_unsigned_to_nat(6u);
x_28 = lean_nat_to_int(x_27);
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_31, 0, x_30);
return x_31;
}
case 6:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_unsigned_to_nat(7u);
x_33 = lean_nat_to_int(x_32);
x_34 = lean_unsigned_to_nat(0u);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_36, 0, x_35);
return x_36;
}
case 7:
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_unsigned_to_nat(8u);
x_38 = lean_nat_to_int(x_37);
x_39 = lean_unsigned_to_nat(0u);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_40);
return x_41;
}
case 8:
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_42 = lean_unsigned_to_nat(9u);
x_43 = lean_nat_to_int(x_42);
x_44 = lean_unsigned_to_nat(0u);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_46, 0, x_45);
return x_46;
}
case 9:
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_47 = lean_unsigned_to_nat(10u);
x_48 = lean_nat_to_int(x_47);
x_49 = lean_unsigned_to_nat(0u);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_50);
return x_51;
}
case 10:
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_52 = lean_unsigned_to_nat(11u);
x_53 = lean_nat_to_int(x_52);
x_54 = lean_unsigned_to_nat(0u);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_56, 0, x_55);
return x_56;
}
case 11:
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_57 = lean_unsigned_to_nat(12u);
x_58 = lean_nat_to_int(x_57);
x_59 = lean_unsigned_to_nat(0u);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_61, 0, x_60);
return x_61;
}
case 12:
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_62 = lean_unsigned_to_nat(13u);
x_63 = lean_nat_to_int(x_62);
x_64 = lean_unsigned_to_nat(0u);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_66, 0, x_65);
return x_66;
}
case 13:
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_67 = lean_unsigned_to_nat(14u);
x_68 = lean_nat_to_int(x_67);
x_69 = lean_unsigned_to_nat(0u);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_71, 0, x_70);
return x_71;
}
case 14:
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_72 = lean_unsigned_to_nat(15u);
x_73 = lean_nat_to_int(x_72);
x_74 = lean_unsigned_to_nat(0u);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_76, 0, x_75);
return x_76;
}
case 15:
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_77 = lean_unsigned_to_nat(16u);
x_78 = lean_nat_to_int(x_77);
x_79 = lean_unsigned_to_nat(0u);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
case 16:
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_82 = lean_unsigned_to_nat(17u);
x_83 = lean_nat_to_int(x_82);
x_84 = lean_unsigned_to_nat(0u);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_86, 0, x_85);
return x_86;
}
case 17:
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_87 = lean_unsigned_to_nat(18u);
x_88 = lean_nat_to_int(x_87);
x_89 = lean_unsigned_to_nat(0u);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_88);
lean_ctor_set(x_90, 1, x_89);
x_91 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_91, 0, x_90);
return x_91;
}
case 18:
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_92 = lean_unsigned_to_nat(19u);
x_93 = lean_nat_to_int(x_92);
x_94 = lean_unsigned_to_nat(0u);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
x_96 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_96, 0, x_95);
return x_96;
}
case 19:
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_97 = lean_unsigned_to_nat(20u);
x_98 = lean_nat_to_int(x_97);
x_99 = lean_unsigned_to_nat(0u);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
x_101 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_101, 0, x_100);
return x_101;
}
case 20:
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_102 = lean_unsigned_to_nat(21u);
x_103 = lean_nat_to_int(x_102);
x_104 = lean_unsigned_to_nat(0u);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
x_106 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_106, 0, x_105);
return x_106;
}
case 21:
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_107 = lean_unsigned_to_nat(22u);
x_108 = lean_nat_to_int(x_107);
x_109 = lean_unsigned_to_nat(0u);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
x_111 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_111, 0, x_110);
return x_111;
}
case 22:
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_112 = lean_unsigned_to_nat(23u);
x_113 = lean_nat_to_int(x_112);
x_114 = lean_unsigned_to_nat(0u);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
x_116 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_116, 0, x_115);
return x_116;
}
case 23:
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_117 = lean_unsigned_to_nat(24u);
x_118 = lean_nat_to_int(x_117);
x_119 = lean_unsigned_to_nat(0u);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
x_121 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_121, 0, x_120);
return x_121;
}
case 24:
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_122 = lean_unsigned_to_nat(25u);
x_123 = lean_nat_to_int(x_122);
x_124 = lean_unsigned_to_nat(0u);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_126, 0, x_125);
return x_126;
}
default: 
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_127 = lean_unsigned_to_nat(26u);
x_128 = lean_nat_to_int(x_127);
x_129 = lean_unsigned_to_nat(0u);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_128);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_131, 0, x_130);
return x_131;
}
}
}
}
lean_object* l_Lean_Lsp_instToJsonSymbolKind___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lean_Lsp_instToJsonSymbolKind(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_DocumentSymbolAux_detail_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l_Lean_Lsp_DocumentSymbolAux_children_x3f___default(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____spec__2___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 < x_2;
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_1);
x_6 = x_4;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_array_uget(x_4, x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_4, x_3, x_8);
x_10 = x_7;
lean_inc(x_1);
x_11 = lean_apply_1(x_1, x_10);
x_12 = 1;
x_13 = x_3 + x_12;
x_14 = x_11;
x_15 = lean_array_uset(x_9, x_3, x_14);
x_3 = x_13;
x_4 = x_15;
goto _start;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____spec__2___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_array_get_size(x_5);
x_7 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_8 = 0;
x_9 = x_5;
x_10 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____spec__2___rarg(x_1, x_7, x_8, x_9);
x_11 = x_10;
x_12 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____spec__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get_uint8(x_2, sizeof(void*)*5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 3);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 4);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_9, 0, x_3);
x_10 = lean_mk_string("name");
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_mk_string("detail");
x_15 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonDocumentFilter____x40_Lean_Data_Lsp_Basic___hyg_1611____spec__1(x_14, x_4);
lean_dec(x_4);
x_16 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonRange____x40_Lean_Data_Lsp_Basic___hyg_409_(x_6);
x_17 = lean_mk_string("range");
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_12);
x_20 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonRange____x40_Lean_Data_Lsp_Basic___hyg_409_(x_7);
x_21 = lean_mk_string("selectionRange");
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_12);
x_24 = lean_mk_string("children");
x_25 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____spec__1___rarg(x_1, x_24, x_8);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_12);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_23);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_19);
lean_ctor_set(x_28, 1, x_27);
switch (x_5) {
case 0:
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_39 = lean_unsigned_to_nat(1u);
x_40 = lean_nat_to_int(x_39);
x_41 = lean_unsigned_to_nat(0u);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_29 = x_43;
goto block_38;
}
case 1:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_44 = lean_unsigned_to_nat(2u);
x_45 = lean_nat_to_int(x_44);
x_46 = lean_unsigned_to_nat(0u);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_29 = x_48;
goto block_38;
}
case 2:
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_49 = lean_unsigned_to_nat(3u);
x_50 = lean_nat_to_int(x_49);
x_51 = lean_unsigned_to_nat(0u);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_53, 0, x_52);
x_29 = x_53;
goto block_38;
}
case 3:
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_54 = lean_unsigned_to_nat(4u);
x_55 = lean_nat_to_int(x_54);
x_56 = lean_unsigned_to_nat(0u);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_29 = x_58;
goto block_38;
}
case 4:
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_59 = lean_unsigned_to_nat(5u);
x_60 = lean_nat_to_int(x_59);
x_61 = lean_unsigned_to_nat(0u);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_63, 0, x_62);
x_29 = x_63;
goto block_38;
}
case 5:
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_64 = lean_unsigned_to_nat(6u);
x_65 = lean_nat_to_int(x_64);
x_66 = lean_unsigned_to_nat(0u);
x_67 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_68, 0, x_67);
x_29 = x_68;
goto block_38;
}
case 6:
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_69 = lean_unsigned_to_nat(7u);
x_70 = lean_nat_to_int(x_69);
x_71 = lean_unsigned_to_nat(0u);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_73, 0, x_72);
x_29 = x_73;
goto block_38;
}
case 7:
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_74 = lean_unsigned_to_nat(8u);
x_75 = lean_nat_to_int(x_74);
x_76 = lean_unsigned_to_nat(0u);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_78, 0, x_77);
x_29 = x_78;
goto block_38;
}
case 8:
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_79 = lean_unsigned_to_nat(9u);
x_80 = lean_nat_to_int(x_79);
x_81 = lean_unsigned_to_nat(0u);
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_83, 0, x_82);
x_29 = x_83;
goto block_38;
}
case 9:
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_84 = lean_unsigned_to_nat(10u);
x_85 = lean_nat_to_int(x_84);
x_86 = lean_unsigned_to_nat(0u);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_88, 0, x_87);
x_29 = x_88;
goto block_38;
}
case 10:
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_89 = lean_unsigned_to_nat(11u);
x_90 = lean_nat_to_int(x_89);
x_91 = lean_unsigned_to_nat(0u);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_93, 0, x_92);
x_29 = x_93;
goto block_38;
}
case 11:
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_94 = lean_unsigned_to_nat(12u);
x_95 = lean_nat_to_int(x_94);
x_96 = lean_unsigned_to_nat(0u);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_98, 0, x_97);
x_29 = x_98;
goto block_38;
}
case 12:
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_99 = lean_unsigned_to_nat(13u);
x_100 = lean_nat_to_int(x_99);
x_101 = lean_unsigned_to_nat(0u);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
x_103 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_103, 0, x_102);
x_29 = x_103;
goto block_38;
}
case 13:
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_104 = lean_unsigned_to_nat(14u);
x_105 = lean_nat_to_int(x_104);
x_106 = lean_unsigned_to_nat(0u);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_108, 0, x_107);
x_29 = x_108;
goto block_38;
}
case 14:
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_109 = lean_unsigned_to_nat(15u);
x_110 = lean_nat_to_int(x_109);
x_111 = lean_unsigned_to_nat(0u);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_113, 0, x_112);
x_29 = x_113;
goto block_38;
}
case 15:
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_114 = lean_unsigned_to_nat(16u);
x_115 = lean_nat_to_int(x_114);
x_116 = lean_unsigned_to_nat(0u);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_115);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_118, 0, x_117);
x_29 = x_118;
goto block_38;
}
case 16:
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_119 = lean_unsigned_to_nat(17u);
x_120 = lean_nat_to_int(x_119);
x_121 = lean_unsigned_to_nat(0u);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_123, 0, x_122);
x_29 = x_123;
goto block_38;
}
case 17:
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_124 = lean_unsigned_to_nat(18u);
x_125 = lean_nat_to_int(x_124);
x_126 = lean_unsigned_to_nat(0u);
x_127 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
x_128 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_128, 0, x_127);
x_29 = x_128;
goto block_38;
}
case 18:
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
x_129 = lean_unsigned_to_nat(19u);
x_130 = lean_nat_to_int(x_129);
x_131 = lean_unsigned_to_nat(0u);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_130);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_133, 0, x_132);
x_29 = x_133;
goto block_38;
}
case 19:
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_134 = lean_unsigned_to_nat(20u);
x_135 = lean_nat_to_int(x_134);
x_136 = lean_unsigned_to_nat(0u);
x_137 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
x_138 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_138, 0, x_137);
x_29 = x_138;
goto block_38;
}
case 20:
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_139 = lean_unsigned_to_nat(21u);
x_140 = lean_nat_to_int(x_139);
x_141 = lean_unsigned_to_nat(0u);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_140);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_143, 0, x_142);
x_29 = x_143;
goto block_38;
}
case 21:
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_144 = lean_unsigned_to_nat(22u);
x_145 = lean_nat_to_int(x_144);
x_146 = lean_unsigned_to_nat(0u);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_145);
lean_ctor_set(x_147, 1, x_146);
x_148 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_148, 0, x_147);
x_29 = x_148;
goto block_38;
}
case 22:
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_149 = lean_unsigned_to_nat(23u);
x_150 = lean_nat_to_int(x_149);
x_151 = lean_unsigned_to_nat(0u);
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_151);
x_153 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_153, 0, x_152);
x_29 = x_153;
goto block_38;
}
case 23:
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_154 = lean_unsigned_to_nat(24u);
x_155 = lean_nat_to_int(x_154);
x_156 = lean_unsigned_to_nat(0u);
x_157 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_157, 0, x_155);
lean_ctor_set(x_157, 1, x_156);
x_158 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_158, 0, x_157);
x_29 = x_158;
goto block_38;
}
case 24:
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_159 = lean_unsigned_to_nat(25u);
x_160 = lean_nat_to_int(x_159);
x_161 = lean_unsigned_to_nat(0u);
x_162 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
x_163 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_163, 0, x_162);
x_29 = x_163;
goto block_38;
}
default: 
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_164 = lean_unsigned_to_nat(26u);
x_165 = lean_nat_to_int(x_164);
x_166 = lean_unsigned_to_nat(0u);
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
x_168 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_168, 0, x_167);
x_29 = x_168;
goto block_38;
}
}
block_38:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_30 = lean_mk_string("kind");
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_12);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_28);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_15);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_13);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_List_join___rarg(x_35);
x_37 = l_Lean_Json_mkObj(x_36);
return x_37;
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291_(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____spec__2___rarg(x_1, x_5, x_6, x_4);
return x_7;
}
}
lean_object* l_Lean_Lsp_instToJsonDocumentSymbolAux___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Lsp_instToJsonDocumentSymbolAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Lsp_instToJsonDocumentSymbolAux___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_Lsp_instToJsonDocumentSymbol_go_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Lsp_instToJsonDocumentSymbol_go_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Lsp_instToJsonDocumentSymbol_go_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonDocumentSymbol_go___spec__3(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____at_Lean_Lsp_instToJsonDocumentSymbol_go___spec__1(x_9);
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
lean_object* l_Lean_Json_opt___at_Lean_Lsp_instToJsonDocumentSymbol_go___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_array_get_size(x_4);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = 0;
x_8 = x_4;
x_9 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonDocumentSymbol_go___spec__3(x_6, x_7, x_8);
x_10 = x_9;
x_11 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____at_Lean_Lsp_instToJsonDocumentSymbol_go___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get_uint8(x_1, sizeof(void*)*5);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_2);
x_9 = lean_mk_string("name");
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_mk_string("detail");
x_14 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonDocumentFilter____x40_Lean_Data_Lsp_Basic___hyg_1611____spec__1(x_13, x_3);
lean_dec(x_3);
x_15 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonRange____x40_Lean_Data_Lsp_Basic___hyg_409_(x_5);
x_16 = lean_mk_string("range");
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_11);
x_19 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonRange____x40_Lean_Data_Lsp_Basic___hyg_409_(x_6);
x_20 = lean_mk_string("selectionRange");
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_11);
x_23 = lean_mk_string("children");
x_24 = l_Lean_Json_opt___at_Lean_Lsp_instToJsonDocumentSymbol_go___spec__2(x_23, x_7);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_11);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_22);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_18);
lean_ctor_set(x_27, 1, x_26);
switch (x_4) {
case 0:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_to_int(x_38);
x_40 = lean_unsigned_to_nat(0u);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_28 = x_42;
goto block_37;
}
case 1:
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_43 = lean_unsigned_to_nat(2u);
x_44 = lean_nat_to_int(x_43);
x_45 = lean_unsigned_to_nat(0u);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_28 = x_47;
goto block_37;
}
case 2:
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_48 = lean_unsigned_to_nat(3u);
x_49 = lean_nat_to_int(x_48);
x_50 = lean_unsigned_to_nat(0u);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_28 = x_52;
goto block_37;
}
case 3:
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_53 = lean_unsigned_to_nat(4u);
x_54 = lean_nat_to_int(x_53);
x_55 = lean_unsigned_to_nat(0u);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_28 = x_57;
goto block_37;
}
case 4:
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_58 = lean_unsigned_to_nat(5u);
x_59 = lean_nat_to_int(x_58);
x_60 = lean_unsigned_to_nat(0u);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_62, 0, x_61);
x_28 = x_62;
goto block_37;
}
case 5:
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_63 = lean_unsigned_to_nat(6u);
x_64 = lean_nat_to_int(x_63);
x_65 = lean_unsigned_to_nat(0u);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_67, 0, x_66);
x_28 = x_67;
goto block_37;
}
case 6:
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_68 = lean_unsigned_to_nat(7u);
x_69 = lean_nat_to_int(x_68);
x_70 = lean_unsigned_to_nat(0u);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_28 = x_72;
goto block_37;
}
case 7:
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_73 = lean_unsigned_to_nat(8u);
x_74 = lean_nat_to_int(x_73);
x_75 = lean_unsigned_to_nat(0u);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
x_77 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_77, 0, x_76);
x_28 = x_77;
goto block_37;
}
case 8:
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_78 = lean_unsigned_to_nat(9u);
x_79 = lean_nat_to_int(x_78);
x_80 = lean_unsigned_to_nat(0u);
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_82, 0, x_81);
x_28 = x_82;
goto block_37;
}
case 9:
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_83 = lean_unsigned_to_nat(10u);
x_84 = lean_nat_to_int(x_83);
x_85 = lean_unsigned_to_nat(0u);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_84);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_87, 0, x_86);
x_28 = x_87;
goto block_37;
}
case 10:
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_88 = lean_unsigned_to_nat(11u);
x_89 = lean_nat_to_int(x_88);
x_90 = lean_unsigned_to_nat(0u);
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
x_92 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_92, 0, x_91);
x_28 = x_92;
goto block_37;
}
case 11:
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_93 = lean_unsigned_to_nat(12u);
x_94 = lean_nat_to_int(x_93);
x_95 = lean_unsigned_to_nat(0u);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_97, 0, x_96);
x_28 = x_97;
goto block_37;
}
case 12:
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_98 = lean_unsigned_to_nat(13u);
x_99 = lean_nat_to_int(x_98);
x_100 = lean_unsigned_to_nat(0u);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_102, 0, x_101);
x_28 = x_102;
goto block_37;
}
case 13:
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_103 = lean_unsigned_to_nat(14u);
x_104 = lean_nat_to_int(x_103);
x_105 = lean_unsigned_to_nat(0u);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
x_107 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_107, 0, x_106);
x_28 = x_107;
goto block_37;
}
case 14:
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_108 = lean_unsigned_to_nat(15u);
x_109 = lean_nat_to_int(x_108);
x_110 = lean_unsigned_to_nat(0u);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
x_112 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_112, 0, x_111);
x_28 = x_112;
goto block_37;
}
case 15:
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_113 = lean_unsigned_to_nat(16u);
x_114 = lean_nat_to_int(x_113);
x_115 = lean_unsigned_to_nat(0u);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_117, 0, x_116);
x_28 = x_117;
goto block_37;
}
case 16:
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_118 = lean_unsigned_to_nat(17u);
x_119 = lean_nat_to_int(x_118);
x_120 = lean_unsigned_to_nat(0u);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_119);
lean_ctor_set(x_121, 1, x_120);
x_122 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_122, 0, x_121);
x_28 = x_122;
goto block_37;
}
case 17:
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_123 = lean_unsigned_to_nat(18u);
x_124 = lean_nat_to_int(x_123);
x_125 = lean_unsigned_to_nat(0u);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
x_127 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_127, 0, x_126);
x_28 = x_127;
goto block_37;
}
case 18:
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_128 = lean_unsigned_to_nat(19u);
x_129 = lean_nat_to_int(x_128);
x_130 = lean_unsigned_to_nat(0u);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_129);
lean_ctor_set(x_131, 1, x_130);
x_132 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_132, 0, x_131);
x_28 = x_132;
goto block_37;
}
case 19:
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_133 = lean_unsigned_to_nat(20u);
x_134 = lean_nat_to_int(x_133);
x_135 = lean_unsigned_to_nat(0u);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_134);
lean_ctor_set(x_136, 1, x_135);
x_137 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_137, 0, x_136);
x_28 = x_137;
goto block_37;
}
case 20:
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_138 = lean_unsigned_to_nat(21u);
x_139 = lean_nat_to_int(x_138);
x_140 = lean_unsigned_to_nat(0u);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_139);
lean_ctor_set(x_141, 1, x_140);
x_142 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_142, 0, x_141);
x_28 = x_142;
goto block_37;
}
case 21:
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_143 = lean_unsigned_to_nat(22u);
x_144 = lean_nat_to_int(x_143);
x_145 = lean_unsigned_to_nat(0u);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
x_147 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_147, 0, x_146);
x_28 = x_147;
goto block_37;
}
case 22:
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_148 = lean_unsigned_to_nat(23u);
x_149 = lean_nat_to_int(x_148);
x_150 = lean_unsigned_to_nat(0u);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_149);
lean_ctor_set(x_151, 1, x_150);
x_152 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_152, 0, x_151);
x_28 = x_152;
goto block_37;
}
case 23:
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_153 = lean_unsigned_to_nat(24u);
x_154 = lean_nat_to_int(x_153);
x_155 = lean_unsigned_to_nat(0u);
x_156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_156, 0, x_154);
lean_ctor_set(x_156, 1, x_155);
x_157 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_157, 0, x_156);
x_28 = x_157;
goto block_37;
}
case 24:
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_158 = lean_unsigned_to_nat(25u);
x_159 = lean_nat_to_int(x_158);
x_160 = lean_unsigned_to_nat(0u);
x_161 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_160);
x_162 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_162, 0, x_161);
x_28 = x_162;
goto block_37;
}
default: 
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_163 = lean_unsigned_to_nat(26u);
x_164 = lean_nat_to_int(x_163);
x_165 = lean_unsigned_to_nat(0u);
x_166 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
x_167 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_167, 0, x_166);
x_28 = x_167;
goto block_37;
}
}
block_37:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_29 = lean_mk_string("kind");
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_11);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_27);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_14);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_12);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_List_join___rarg(x_34);
x_36 = l_Lean_Json_mkObj(x_35);
return x_36;
}
}
}
lean_object* l_Lean_Lsp_instToJsonDocumentSymbol_go(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonDocumentSymbolAux____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1291____at_Lean_Lsp_instToJsonDocumentSymbol_go___spec__1(x_1);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonDocumentSymbol_go___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonDocumentSymbol_go___spec__3(x_4, x_5, x_3);
return x_6;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonDocumentSymbol() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Lsp_instToJsonDocumentSymbol_go), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Lsp_instToJsonDocumentSymbolResult(lean_object* x_1) {
_start:
{
lean_object* x_2; size_t x_3; size_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_usize_of_nat(x_2);
lean_dec(x_2);
x_4 = 0;
x_5 = x_1;
x_6 = l_Array_mapMUnsafe_map___at_Lean_Lsp_instToJsonDocumentSymbol_go___spec__3(x_3, x_4, x_5);
x_7 = x_6;
x_8 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
static lean_object* _init_l_Lean_Lsp_SemanticTokenType_names() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
x_3 = lean_mk_string("keyword");
x_4 = lean_array_push(x_2, x_3);
x_5 = lean_mk_string("variable");
x_6 = lean_array_push(x_4, x_5);
x_7 = lean_mk_string("property");
x_8 = lean_array_push(x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_Lsp_SemanticTokenType_toNat_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_4, x_9);
return x_10;
}
}
}
}
lean_object* l_Lean_Lsp_SemanticTokenType_toNat_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Lsp_SemanticTokenType_toNat_match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Lsp_SemanticTokenType_toNat_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Lsp_SemanticTokenType_toNat_match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_Lsp_SemanticTokenType_toNat(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(1u);
return x_3;
}
default: 
{
lean_object* x_4; 
x_4 = lean_unsigned_to_nat(2u);
return x_4;
}
}
}
}
lean_object* l_Lean_Lsp_SemanticTokenType_toNat___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lean_Lsp_SemanticTokenType_toNat(x_2);
return x_3;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1488____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
if (lean_obj_tag(x_3) == 4)
{
lean_object* x_4; lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_array_get_size(x_4);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = 0;
x_8 = x_4;
x_9 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__2(x_6, x_7, x_8);
x_10 = x_9;
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
x_11 = lean_mk_string("JSON array expected");
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1488_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("tokenTypes");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1488____spec__1(x_1, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_mk_string("tokenModifiers");
x_9 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1488____spec__1(x_1, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec(x_9);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_7);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1488____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1488____spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1488____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1488_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSemanticTokensLegend() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1488____boxed), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1533_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; size_t x_4; size_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_array_get_size(x_2);
x_4 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_5 = 0;
x_6 = x_2;
x_7 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_100____spec__2(x_4, x_5, x_6);
x_8 = x_7;
x_9 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_mk_string("tokenTypes");
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_array_get_size(x_14);
x_16 = lean_usize_of_nat(x_15);
lean_dec(x_15);
x_17 = x_14;
x_18 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_100____spec__2(x_16, x_5, x_17);
x_19 = x_18;
x_20 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_mk_string("tokenModifiers");
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_12);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_12);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_13);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_List_join___rarg(x_25);
x_27 = l_Lean_Json_mkObj(x_26);
return x_27;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonSemanticTokensLegend() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1533_), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1594____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
x_4 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1488_(x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1594_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("legend");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1594____spec__1(x_1, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_mk_string("range");
x_9 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__3(x_1, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_mk_string("full");
x_15 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonCompletionOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_41____spec__3(x_1, x_14);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
lean_dec(x_13);
lean_dec(x_7);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_15);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_15, 0);
x_21 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_21, 0, x_7);
x_22 = lean_unbox(x_13);
lean_dec(x_13);
lean_ctor_set_uint8(x_21, sizeof(void*)*1, x_22);
x_23 = lean_unbox(x_20);
lean_dec(x_20);
lean_ctor_set_uint8(x_21, sizeof(void*)*1 + 1, x_23);
lean_ctor_set(x_15, 0, x_21);
return x_15;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; uint8_t x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_15, 0);
lean_inc(x_24);
lean_dec(x_15);
x_25 = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(x_25, 0, x_7);
x_26 = lean_unbox(x_13);
lean_dec(x_13);
lean_ctor_set_uint8(x_25, sizeof(void*)*1, x_26);
x_27 = lean_unbox(x_24);
lean_dec(x_24);
lean_ctor_set_uint8(x_25, sizeof(void*)*1 + 1, x_27);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_25);
return x_28;
}
}
}
}
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1594____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1594____spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1594____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1594_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSemanticTokensOptions() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1594____boxed), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokensOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1653_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokensLegend____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1533_(x_2);
x_4 = lean_mk_string("legend");
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
x_9 = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(x_9, 0, x_8);
x_10 = lean_mk_string("range");
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
x_13 = lean_ctor_get_uint8(x_1, sizeof(void*)*1 + 1);
lean_dec(x_1);
x_14 = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(x_14, 0, x_13);
x_15 = lean_mk_string("full");
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_6);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_6);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_7);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_List_join___rarg(x_20);
x_22 = l_Lean_Json_mkObj(x_21);
return x_22;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonSemanticTokensOptions() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokensOptions____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1653_), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1707_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("textDocument");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonTextDocumentPositionParams____x40_Lean_Data_Lsp_Basic___hyg_1533____spec__1(x_1, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1707____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1707_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSemanticTokensParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1707____boxed), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokensParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1738_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_2 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonTextDocumentIdentifier____x40_Lean_Data_Lsp_Basic___hyg_1071_(x_1);
x_3 = lean_mk_string("textDocument");
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = l_List_join___rarg(x_7);
x_9 = l_Lean_Json_mkObj(x_8);
return x_9;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonSemanticTokensParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokensParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1738_), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensRangeParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1782_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("textDocument");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonTextDocumentPositionParams____x40_Lean_Data_Lsp_Basic___hyg_1533____spec__1(x_1, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_mk_string("range");
x_9 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonLocation____x40_Lean_Data_Lsp_Basic___hyg_611____spec__2(x_1, x_8);
lean_dec(x_8);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_9);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_9, 0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set(x_9, 0, x_15);
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec(x_9);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_7);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensRangeParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1782____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensRangeParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1782_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSemanticTokensRangeParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokensRangeParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1782____boxed), 1, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokensRangeParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1827_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonTextDocumentIdentifier____x40_Lean_Data_Lsp_Basic___hyg_1071_(x_2);
x_4 = lean_mk_string("textDocument");
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonRange____x40_Lean_Data_Lsp_Basic___hyg_409_(x_8);
x_10 = lean_mk_string("range");
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_List_join___rarg(x_14);
x_16 = l_Lean_Json_mkObj(x_15);
return x_16;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonSemanticTokensRangeParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokensRangeParams____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1827_), 1, 0);
return x_1;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873____spec__2(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 < x_1;
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = x_3;
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_array_uget(x_3, x_2);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_uset(x_3, x_2, x_8);
x_10 = x_7;
x_11 = l_Lean_Json_getNat_x3f(x_10);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
return x_11;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
else
{
lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_11, 0);
lean_inc(x_15);
lean_dec(x_11);
x_16 = 1;
x_17 = x_2 + x_16;
x_18 = x_15;
x_19 = lean_array_uset(x_9, x_2, x_18);
x_2 = x_17;
x_3 = x_19;
goto _start;
}
}
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
if (lean_obj_tag(x_3) == 4)
{
lean_object* x_4; lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_array_get_size(x_4);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = 0;
x_8 = x_4;
x_9 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873____spec__2(x_6, x_7, x_8);
x_10 = x_9;
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_3);
x_11 = lean_mk_string("JSON array expected");
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("data");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873____spec__1(x_1, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_3);
if (x_7 == 0)
{
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873____spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873____spec__2(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873____spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonSemanticTokens() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_fromJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1873____boxed), 1, 0);
return x_1;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1904____spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = l_Lean_JsonNumber_fromNat(x_9);
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = 1;
x_13 = x_2 + x_12;
x_14 = x_11;
x_15 = lean_array_uset(x_8, x_2, x_14);
x_2 = x_13;
x_3 = x_15;
goto _start;
}
}
}
lean_object* l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1904_(lean_object* x_1) {
_start:
{
lean_object* x_2; size_t x_3; size_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_usize_of_nat(x_2);
lean_dec(x_2);
x_4 = 0;
x_5 = x_1;
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1904____spec__1(x_3, x_4, x_5);
x_7 = x_6;
x_8 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_mk_string("data");
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_List_join___rarg(x_13);
x_15 = l_Lean_Json_mkObj(x_14);
return x_15;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1904____spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1904____spec__1(x_4, x_5, x_3);
return x_6;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonSemanticTokens() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_LanguageFeatures_0__Lean_Lsp_toJsonSemanticTokens____x40_Lean_Data_Lsp_LanguageFeatures___hyg_1904_), 1, 0);
return x_1;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Data_Json(lean_object*);
lean_object* initialize_Lean_Data_Lsp_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Data_Lsp_LanguageFeatures(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Lsp_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Lsp_CompletionOptions_triggerCharacters_x3f___default = _init_l_Lean_Lsp_CompletionOptions_triggerCharacters_x3f___default();
lean_mark_persistent(l_Lean_Lsp_CompletionOptions_triggerCharacters_x3f___default);
l_Lean_Lsp_CompletionOptions_allCommitCharacters_x3f___default = _init_l_Lean_Lsp_CompletionOptions_allCommitCharacters_x3f___default();
lean_mark_persistent(l_Lean_Lsp_CompletionOptions_allCommitCharacters_x3f___default);
l_Lean_Lsp_CompletionOptions_resolveProvider___default = _init_l_Lean_Lsp_CompletionOptions_resolveProvider___default();
l_Lean_Lsp_instFromJsonCompletionOptions = _init_l_Lean_Lsp_instFromJsonCompletionOptions();
lean_mark_persistent(l_Lean_Lsp_instFromJsonCompletionOptions);
l_Lean_Lsp_instToJsonCompletionOptions = _init_l_Lean_Lsp_instToJsonCompletionOptions();
lean_mark_persistent(l_Lean_Lsp_instToJsonCompletionOptions);
l_Lean_Lsp_instFromJsonCompletionItem = _init_l_Lean_Lsp_instFromJsonCompletionItem();
lean_mark_persistent(l_Lean_Lsp_instFromJsonCompletionItem);
l_Lean_Lsp_instToJsonCompletionItem = _init_l_Lean_Lsp_instToJsonCompletionItem();
lean_mark_persistent(l_Lean_Lsp_instToJsonCompletionItem);
l_Lean_Lsp_instInhabitedCompletionItem = _init_l_Lean_Lsp_instInhabitedCompletionItem();
lean_mark_persistent(l_Lean_Lsp_instInhabitedCompletionItem);
l_Lean_Lsp_instFromJsonCompletionList = _init_l_Lean_Lsp_instFromJsonCompletionList();
lean_mark_persistent(l_Lean_Lsp_instFromJsonCompletionList);
l_Lean_Lsp_instToJsonCompletionList = _init_l_Lean_Lsp_instToJsonCompletionList();
lean_mark_persistent(l_Lean_Lsp_instToJsonCompletionList);
l_Lean_Lsp_instFromJsonCompletionParams = _init_l_Lean_Lsp_instFromJsonCompletionParams();
lean_mark_persistent(l_Lean_Lsp_instFromJsonCompletionParams);
l_Lean_Lsp_instToJsonCompletionParams = _init_l_Lean_Lsp_instToJsonCompletionParams();
lean_mark_persistent(l_Lean_Lsp_instToJsonCompletionParams);
l_Lean_Lsp_Hover_range_x3f___default = _init_l_Lean_Lsp_Hover_range_x3f___default();
lean_mark_persistent(l_Lean_Lsp_Hover_range_x3f___default);
l_Lean_Lsp_instToJsonHover = _init_l_Lean_Lsp_instToJsonHover();
lean_mark_persistent(l_Lean_Lsp_instToJsonHover);
l_Lean_Lsp_instFromJsonHover = _init_l_Lean_Lsp_instFromJsonHover();
lean_mark_persistent(l_Lean_Lsp_instFromJsonHover);
l_Lean_Lsp_instFromJsonHoverParams = _init_l_Lean_Lsp_instFromJsonHoverParams();
lean_mark_persistent(l_Lean_Lsp_instFromJsonHoverParams);
l_Lean_Lsp_instToJsonHoverParams = _init_l_Lean_Lsp_instToJsonHoverParams();
lean_mark_persistent(l_Lean_Lsp_instToJsonHoverParams);
l_Lean_Lsp_instFromJsonDeclarationParams = _init_l_Lean_Lsp_instFromJsonDeclarationParams();
lean_mark_persistent(l_Lean_Lsp_instFromJsonDeclarationParams);
l_Lean_Lsp_instToJsonDeclarationParams = _init_l_Lean_Lsp_instToJsonDeclarationParams();
lean_mark_persistent(l_Lean_Lsp_instToJsonDeclarationParams);
l_Lean_Lsp_instFromJsonDefinitionParams = _init_l_Lean_Lsp_instFromJsonDefinitionParams();
lean_mark_persistent(l_Lean_Lsp_instFromJsonDefinitionParams);
l_Lean_Lsp_instToJsonDefinitionParams = _init_l_Lean_Lsp_instToJsonDefinitionParams();
lean_mark_persistent(l_Lean_Lsp_instToJsonDefinitionParams);
l_Lean_Lsp_instFromJsonTypeDefinitionParams = _init_l_Lean_Lsp_instFromJsonTypeDefinitionParams();
lean_mark_persistent(l_Lean_Lsp_instFromJsonTypeDefinitionParams);
l_Lean_Lsp_instToJsonTypeDefinitionParams = _init_l_Lean_Lsp_instToJsonTypeDefinitionParams();
lean_mark_persistent(l_Lean_Lsp_instToJsonTypeDefinitionParams);
l_Lean_Lsp_instFromJsonDocumentHighlightParams = _init_l_Lean_Lsp_instFromJsonDocumentHighlightParams();
lean_mark_persistent(l_Lean_Lsp_instFromJsonDocumentHighlightParams);
l_Lean_Lsp_instToJsonDocumentHighlightParams = _init_l_Lean_Lsp_instToJsonDocumentHighlightParams();
lean_mark_persistent(l_Lean_Lsp_instToJsonDocumentHighlightParams);
l_Lean_Lsp_DocumentHighlight_kind_x3f___default = _init_l_Lean_Lsp_DocumentHighlight_kind_x3f___default();
lean_mark_persistent(l_Lean_Lsp_DocumentHighlight_kind_x3f___default);
l_Lean_Lsp_instToJsonDocumentHighlight = _init_l_Lean_Lsp_instToJsonDocumentHighlight();
lean_mark_persistent(l_Lean_Lsp_instToJsonDocumentHighlight);
l_Lean_Lsp_instFromJsonDocumentSymbolParams = _init_l_Lean_Lsp_instFromJsonDocumentSymbolParams();
lean_mark_persistent(l_Lean_Lsp_instFromJsonDocumentSymbolParams);
l_Lean_Lsp_instToJsonDocumentSymbolParams = _init_l_Lean_Lsp_instToJsonDocumentSymbolParams();
lean_mark_persistent(l_Lean_Lsp_instToJsonDocumentSymbolParams);
l_Lean_Lsp_DocumentSymbolAux_detail_x3f___default = _init_l_Lean_Lsp_DocumentSymbolAux_detail_x3f___default();
lean_mark_persistent(l_Lean_Lsp_DocumentSymbolAux_detail_x3f___default);
l_Lean_Lsp_instToJsonDocumentSymbol = _init_l_Lean_Lsp_instToJsonDocumentSymbol();
lean_mark_persistent(l_Lean_Lsp_instToJsonDocumentSymbol);
l_Lean_Lsp_SemanticTokenType_names = _init_l_Lean_Lsp_SemanticTokenType_names();
lean_mark_persistent(l_Lean_Lsp_SemanticTokenType_names);
l_Lean_Lsp_instFromJsonSemanticTokensLegend = _init_l_Lean_Lsp_instFromJsonSemanticTokensLegend();
lean_mark_persistent(l_Lean_Lsp_instFromJsonSemanticTokensLegend);
l_Lean_Lsp_instToJsonSemanticTokensLegend = _init_l_Lean_Lsp_instToJsonSemanticTokensLegend();
lean_mark_persistent(l_Lean_Lsp_instToJsonSemanticTokensLegend);
l_Lean_Lsp_instFromJsonSemanticTokensOptions = _init_l_Lean_Lsp_instFromJsonSemanticTokensOptions();
lean_mark_persistent(l_Lean_Lsp_instFromJsonSemanticTokensOptions);
l_Lean_Lsp_instToJsonSemanticTokensOptions = _init_l_Lean_Lsp_instToJsonSemanticTokensOptions();
lean_mark_persistent(l_Lean_Lsp_instToJsonSemanticTokensOptions);
l_Lean_Lsp_instFromJsonSemanticTokensParams = _init_l_Lean_Lsp_instFromJsonSemanticTokensParams();
lean_mark_persistent(l_Lean_Lsp_instFromJsonSemanticTokensParams);
l_Lean_Lsp_instToJsonSemanticTokensParams = _init_l_Lean_Lsp_instToJsonSemanticTokensParams();
lean_mark_persistent(l_Lean_Lsp_instToJsonSemanticTokensParams);
l_Lean_Lsp_instFromJsonSemanticTokensRangeParams = _init_l_Lean_Lsp_instFromJsonSemanticTokensRangeParams();
lean_mark_persistent(l_Lean_Lsp_instFromJsonSemanticTokensRangeParams);
l_Lean_Lsp_instToJsonSemanticTokensRangeParams = _init_l_Lean_Lsp_instToJsonSemanticTokensRangeParams();
lean_mark_persistent(l_Lean_Lsp_instToJsonSemanticTokensRangeParams);
l_Lean_Lsp_instFromJsonSemanticTokens = _init_l_Lean_Lsp_instFromJsonSemanticTokens();
lean_mark_persistent(l_Lean_Lsp_instFromJsonSemanticTokens);
l_Lean_Lsp_instToJsonSemanticTokens = _init_l_Lean_Lsp_instToJsonSemanticTokens();
lean_mark_persistent(l_Lean_Lsp_instToJsonSemanticTokens);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
