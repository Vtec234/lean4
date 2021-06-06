// Lean compiler output
// Module: Lean.Data.Lsp.Diagnostics
// Imports: Init Lean.Data.Json Lean.Data.Lsp.Basic Lean.Data.Lsp.Utf16 Lean.Message
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
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_518____boxed(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__4(size_t, size_t, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__6___boxed(lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Lsp_instToJsonDiagnosticCode___boxed(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_484_(lean_object*);
lean_object* l_Lean_Lsp_msgToDiagnostic_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_Diagnostic_source_x3f___default;
lean_object* l_Lean_Lsp_instFromJsonDiagnosticSeverity___boxed(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticCode____x40_Lean_Data_Lsp_Diagnostics___hyg_161____boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonLocation____x40_Lean_Data_Lsp_Basic___hyg_577_(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonDiagnosticTag_match__1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Lsp_msgToDiagnostic_match__2(lean_object*);
uint8_t l_Lean_Lsp_instInhabitedDiagnosticTag;
lean_object* l_Lean_Lsp_instFromJsonDiagnosticCode___boxed(lean_object*);
lean_object* l_Lean_Lsp_instBEqDiagnosticTag;
lean_object* l_Lean_Lsp_Diagnostic_relatedInformation_x3f___default;
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Lsp_instFromJsonDiagnosticCode(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1112____spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__2(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticTag____x40_Lean_Data_Lsp_Diagnostics___hyg_300__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__3(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticCode____x40_Lean_Data_Lsp_Diagnostics___hyg_161__match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868_(lean_object*);
lean_object* l_Lean_Lsp_instInhabitedDiagnosticRelatedInformation;
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____boxed(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticSeverity____x40_Lean_Data_Lsp_Diagnostics___hyg_13__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instBEqDiagnosticCode;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__6(size_t, size_t, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_518____spec__1(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__2___boxed(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_423_(lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_423____boxed(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonDiagnostic;
lean_object* l_Lean_Lsp_msgToDiagnostic_match__1(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonDiagnosticCode(lean_object*);
lean_object* l_Lean_Lsp_instInhabitedDiagnosticCode;
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticCode____x40_Lean_Data_Lsp_Diagnostics___hyg_161__match__1(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_join___rarg(lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__5(lean_object*, lean_object*);
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonDocumentFilter____x40_Lean_Data_Lsp_Basic___hyg_1611____spec__1(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__3___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonLocation____x40_Lean_Data_Lsp_Basic___hyg_611_(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonDiagnosticSeverity(lean_object*);
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1112____spec__1(lean_object*, lean_object*);
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__4(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonDiagnosticRelatedInformation;
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticTag____x40_Lean_Data_Lsp_Diagnostics___hyg_300__match__1(lean_object*);
lean_object* l_Lean_Lsp_PublishDiagnosticsParams_version_x3f___default;
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instBEqDiagnostic;
lean_object* l_Lean_Lsp_instToJsonDiagnosticRelatedInformation;
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticSeverity____x40_Lean_Data_Lsp_Diagnostics___hyg_13__match__1(lean_object*);
lean_object* l_Lean_Lsp_msgToDiagnostic___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonDiagnosticCode_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_518____spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonDiagnosticTag_match__1(lean_object*);
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__3(lean_object*, lean_object*);
lean_object* l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticTag____x40_Lean_Data_Lsp_Diagnostics___hyg_300__match__1___rarg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getInt_x3f(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660__match__1(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonDocumentFilter____x40_Lean_Data_Lsp_Basic___hyg_1639____spec__1(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_348_(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__6___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instBEqDiagnosticRelatedInformation;
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__3___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticSeverity____x40_Lean_Data_Lsp_Diagnostics___hyg_13____boxed(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instInhabitedPublishDiagnosticsParams;
lean_object* l_Lean_Lsp_instToJsonDiagnosticCode_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonDiagnosticSeverity_match__1(lean_object*);
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonDiagnosticSeverity_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__2(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037____spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037__match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_518_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037__match__1(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1112_(lean_object*);
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__6___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonDiagnosticTag(uint8_t);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticSeverity____x40_Lean_Data_Lsp_Diagnostics___hyg_13__match__1___rarg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__6(size_t, size_t, lean_object*);
uint8_t l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660_(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_msgToDiagnostic_match__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__3(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805_(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_423__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_Diagnostic_tags_x3f___default;
lean_object* l_Lean_Lsp_instFromJsonDiagnosticTag___boxed(lean_object*);
lean_object* l_Lean_Lsp_msgToDiagnostic_match__2___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__5___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__4___boxed(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqLocation____x40_Lean_Data_Lsp_Basic___hyg_516_(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037____boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_423__match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonPublishDiagnosticsParams;
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonDiagnostic;
lean_object* l_Lean_Lsp_instInhabitedDiagnostic;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__4(size_t, size_t, lean_object*);
lean_object* l_Lean_Lsp_Diagnostic_fullRange___default(lean_object*);
uint8_t l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticCode____x40_Lean_Data_Lsp_Diagnostics___hyg_161_(lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__5(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonDiagnosticTag_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_msgToDiagnostic(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1112____spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonDiagnosticSeverity_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticSeverity____x40_Lean_Data_Lsp_Diagnostics___hyg_13_(uint8_t, uint8_t);
lean_object* l_Lean_Lsp_instFromJsonPublishDiagnosticsParams;
lean_object* l_Lean_Lsp_Diagnostic_fullRange___default___boxed(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonDiagnosticCode_match__1(lean_object*);
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instBEqDiagnosticSeverity;
lean_object* l_Lean_Lsp_instToJsonDiagnosticSeverity(uint8_t);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__1___boxed(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticTag____x40_Lean_Data_Lsp_Diagnostics___hyg_300_(uint8_t, uint8_t);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonDiagnosticTag_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____boxed(lean_object*);
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__6(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonDiagnosticTag_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instToJsonDiagnosticCode_match__1(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonLocation____x40_Lean_Data_Lsp_Basic___hyg_611____spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonDiagnosticTag(lean_object*);
lean_object* l_Lean_Lsp_instToJsonDiagnosticSeverity___boxed(lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonRange____x40_Lean_Data_Lsp_Basic___hyg_409_(lean_object*);
lean_object* l_Lean_FileMap_leanPosToLspPos(lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_Diagnostic_code_x3f___default;
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660__match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Lsp_instInhabitedDiagnosticSeverity;
uint8_t l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037____spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__3(size_t, size_t, lean_object*);
lean_object* l_Lean_Lsp_instToJsonDiagnosticTag___boxed(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__2(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_423__match__1(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonLocation____x40_Lean_Data_Lsp_Basic___hyg_611____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Lsp_Diagnostic_severity_x3f___default;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Lsp_instBEqPublishDiagnosticsParams;
lean_object* l_Lean_Lsp_instFromJsonDiagnosticSeverity_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Lsp_instFromJsonDiagnosticSeverity_match__1(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1112____spec__2(size_t, size_t, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__4___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037_(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticTag____x40_Lean_Data_Lsp_Diagnostics___hyg_300____boxed(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(lean_object*, lean_object*);
lean_object* l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037____spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static uint8_t _init_l_Lean_Lsp_instInhabitedDiagnosticSeverity() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticSeverity____x40_Lean_Data_Lsp_Diagnostics___hyg_13__match__1___rarg(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_8; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_8 = lean_box(x_2);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_3);
x_11 = lean_box(x_1);
x_12 = lean_box(x_2);
x_13 = lean_apply_2(x_7, x_11, x_12);
return x_13;
}
}
case 1:
{
lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_14 = lean_box(x_2);
if (lean_obj_tag(x_14) == 1)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_7);
x_15 = lean_box(0);
x_16 = lean_apply_1(x_4, x_15);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_14);
lean_dec(x_4);
x_17 = lean_box(x_1);
x_18 = lean_box(x_2);
x_19 = lean_apply_2(x_7, x_17, x_18);
return x_19;
}
}
case 2:
{
lean_object* x_20; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
x_20 = lean_box(x_2);
if (lean_obj_tag(x_20) == 2)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_7);
x_21 = lean_box(0);
x_22 = lean_apply_1(x_5, x_21);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_20);
lean_dec(x_5);
x_23 = lean_box(x_1);
x_24 = lean_box(x_2);
x_25 = lean_apply_2(x_7, x_23, x_24);
return x_25;
}
}
default: 
{
lean_object* x_26; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_26 = lean_box(x_2);
if (lean_obj_tag(x_26) == 3)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_7);
x_27 = lean_box(0);
x_28 = lean_apply_1(x_6, x_27);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_26);
lean_dec(x_6);
x_29 = lean_box(x_1);
x_30 = lean_box(x_2);
x_31 = lean_apply_2(x_7, x_29, x_30);
return x_31;
}
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticSeverity____x40_Lean_Data_Lsp_Diagnostics___hyg_13__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticSeverity____x40_Lean_Data_Lsp_Diagnostics___hyg_13__match__1___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticSeverity____x40_Lean_Data_Lsp_Diagnostics___hyg_13__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticSeverity____x40_Lean_Data_Lsp_Diagnostics___hyg_13__match__1___rarg(x_8, x_9, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
uint8_t l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticSeverity____x40_Lean_Data_Lsp_Diagnostics___hyg_13_(uint8_t x_1, uint8_t x_2) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_3; 
x_3 = lean_box(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
else
{
uint8_t x_5; 
lean_dec(x_3);
x_5 = 0;
return x_5;
}
}
case 1:
{
lean_object* x_6; 
x_6 = lean_box(x_2);
if (lean_obj_tag(x_6) == 1)
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_6);
x_8 = 0;
return x_8;
}
}
case 2:
{
lean_object* x_9; 
x_9 = lean_box(x_2);
if (lean_obj_tag(x_9) == 2)
{
uint8_t x_10; 
x_10 = 1;
return x_10;
}
else
{
uint8_t x_11; 
lean_dec(x_9);
x_11 = 0;
return x_11;
}
}
default: 
{
lean_object* x_12; 
x_12 = lean_box(x_2);
if (lean_obj_tag(x_12) == 3)
{
uint8_t x_13; 
x_13 = 1;
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_12);
x_14 = 0;
return x_14;
}
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticSeverity____x40_Lean_Data_Lsp_Diagnostics___hyg_13____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticSeverity____x40_Lean_Data_Lsp_Diagnostics___hyg_13_(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Lsp_instBEqDiagnosticSeverity() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticSeverity____x40_Lean_Data_Lsp_Diagnostics___hyg_13____boxed), 2, 0);
return x_1;
}
}
lean_object* l_Lean_Lsp_instFromJsonDiagnosticSeverity_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_apply_1(x_6, x_1);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_dec_eq(x_8, x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
lean_dec(x_2);
x_11 = lean_unsigned_to_nat(2u);
x_12 = lean_nat_dec_eq(x_8, x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
lean_dec(x_3);
x_13 = lean_unsigned_to_nat(3u);
x_14 = lean_nat_dec_eq(x_8, x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
lean_dec(x_4);
x_15 = lean_unsigned_to_nat(4u);
x_16 = lean_nat_dec_eq(x_8, x_15);
lean_dec(x_8);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_5);
x_17 = lean_apply_1(x_6, x_1);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_dec(x_6);
lean_dec(x_1);
x_18 = lean_box(0);
x_19 = lean_apply_1(x_5, x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_20 = lean_box(0);
x_21 = lean_apply_1(x_4, x_20);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_22 = lean_box(0);
x_23 = lean_apply_1(x_3, x_22);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_24 = lean_box(0);
x_25 = lean_apply_1(x_2, x_24);
return x_25;
}
}
}
}
lean_object* l_Lean_Lsp_instFromJsonDiagnosticSeverity_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Lsp_instFromJsonDiagnosticSeverity_match__1___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_Lsp_instFromJsonDiagnosticSeverity(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Json_getNat_x3f(x_1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_dec(x_4);
x_5 = lean_mk_string("unknown DiagnosticSeverity");
lean_ctor_set(x_2, 0, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_mk_string("unknown DiagnosticSeverity");
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_dec_eq(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(2u);
x_13 = lean_nat_dec_eq(x_9, x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_unsigned_to_nat(3u);
x_15 = lean_nat_dec_eq(x_9, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_unsigned_to_nat(4u);
x_17 = lean_nat_dec_eq(x_9, x_16);
lean_dec(x_9);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_mk_string("unknown DiagnosticSeverity");
lean_ctor_set_tag(x_2, 0);
lean_ctor_set(x_2, 0, x_18);
return x_2;
}
else
{
uint8_t x_19; lean_object* x_20; 
x_19 = 3;
x_20 = lean_box(x_19);
lean_ctor_set(x_2, 0, x_20);
return x_2;
}
}
else
{
uint8_t x_21; lean_object* x_22; 
lean_dec(x_9);
x_21 = 2;
x_22 = lean_box(x_21);
lean_ctor_set(x_2, 0, x_22);
return x_2;
}
}
else
{
uint8_t x_23; lean_object* x_24; 
lean_dec(x_9);
x_23 = 1;
x_24 = lean_box(x_23);
lean_ctor_set(x_2, 0, x_24);
return x_2;
}
}
else
{
uint8_t x_25; lean_object* x_26; 
lean_dec(x_9);
x_25 = 0;
x_26 = lean_box(x_25);
lean_ctor_set(x_2, 0, x_26);
return x_2;
}
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_ctor_get(x_2, 0);
lean_inc(x_27);
lean_dec(x_2);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_dec_eq(x_27, x_28);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; 
x_30 = lean_unsigned_to_nat(2u);
x_31 = lean_nat_dec_eq(x_27, x_30);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_unsigned_to_nat(3u);
x_33 = lean_nat_dec_eq(x_27, x_32);
if (x_33 == 0)
{
lean_object* x_34; uint8_t x_35; 
x_34 = lean_unsigned_to_nat(4u);
x_35 = lean_nat_dec_eq(x_27, x_34);
lean_dec(x_27);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_mk_string("unknown DiagnosticSeverity");
x_37 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_37, 0, x_36);
return x_37;
}
else
{
uint8_t x_38; lean_object* x_39; lean_object* x_40; 
x_38 = 3;
x_39 = lean_box(x_38);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_39);
return x_40;
}
}
else
{
uint8_t x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_27);
x_41 = 2;
x_42 = lean_box(x_41);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
return x_43;
}
}
else
{
uint8_t x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_27);
x_44 = 1;
x_45 = lean_box(x_44);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_45);
return x_46;
}
}
else
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_27);
x_47 = 0;
x_48 = lean_box(x_47);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_48);
return x_49;
}
}
}
}
}
lean_object* l_Lean_Lsp_instFromJsonDiagnosticSeverity___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Lsp_instFromJsonDiagnosticSeverity(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Lsp_instToJsonDiagnosticSeverity_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_box(0);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
case 2:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = lean_apply_1(x_4, x_10);
return x_11;
}
default: 
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_apply_1(x_5, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Lsp_instToJsonDiagnosticSeverity_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Lsp_instToJsonDiagnosticSeverity_match__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Lsp_instToJsonDiagnosticSeverity_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_Lean_Lsp_instToJsonDiagnosticSeverity_match__1___rarg(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_Lean_Lsp_instToJsonDiagnosticSeverity(uint8_t x_1) {
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
default: 
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
}
}
}
lean_object* l_Lean_Lsp_instToJsonDiagnosticSeverity___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lean_Lsp_instToJsonDiagnosticSeverity(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_instInhabitedDiagnosticCode() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticCode____x40_Lean_Data_Lsp_Diagnostics___hyg_161__match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_5);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_3);
x_9 = lean_apply_2(x_5, x_1, x_2);
return x_9;
}
}
else
{
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; 
lean_dec(x_4);
x_10 = lean_apply_2(x_5, x_1, x_2);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_apply_2(x_4, x_11, x_12);
return x_13;
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticCode____x40_Lean_Data_Lsp_Diagnostics___hyg_161__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticCode____x40_Lean_Data_Lsp_Diagnostics___hyg_161__match__1___rarg), 5, 0);
return x_2;
}
}
uint8_t l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticCode____x40_Lean_Data_Lsp_Diagnostics___hyg_161_(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_int_dec_eq(x_3, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_string_dec_eq(x_8, x_9);
return x_10;
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticCode____x40_Lean_Data_Lsp_Diagnostics___hyg_161____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticCode____x40_Lean_Data_Lsp_Diagnostics___hyg_161_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Lsp_instBEqDiagnosticCode() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticCode____x40_Lean_Data_Lsp_Diagnostics___hyg_161____boxed), 2, 0);
return x_1;
}
}
lean_object* l_Lean_Lsp_instFromJsonDiagnosticCode_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_2);
x_10 = lean_apply_1(x_4, x_1);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_4);
lean_dec(x_1);
x_11 = lean_apply_1(x_2, x_6);
return x_11;
}
}
case 3:
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_apply_1(x_3, x_12);
return x_13;
}
default: 
{
lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_apply_1(x_4, x_1);
return x_14;
}
}
}
}
lean_object* l_Lean_Lsp_instFromJsonDiagnosticCode_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Lsp_instFromJsonDiagnosticCode_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Lsp_instFromJsonDiagnosticCode(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_mk_string("the diagnostic code can only be a string or an integer");
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_inc(x_3);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_3);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
case 3:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
default: 
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_mk_string("the diagnostic code can only be a string or an integer");
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
}
}
lean_object* l_Lean_Lsp_instFromJsonDiagnosticCode___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Lsp_instFromJsonDiagnosticCode(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Lsp_instToJsonDiagnosticCode_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Lsp_instToJsonDiagnosticCode_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Lsp_instToJsonDiagnosticCode_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Lsp_instToJsonDiagnosticCode(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_unsigned_to_nat(0u);
lean_inc(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Lsp_instToJsonDiagnosticCode___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Lsp_instToJsonDiagnosticCode(x_1);
lean_dec(x_1);
return x_2;
}
}
static uint8_t _init_l_Lean_Lsp_instInhabitedDiagnosticTag() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticTag____x40_Lean_Data_Lsp_Diagnostics___hyg_300__match__1___rarg(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (x_1 == 0)
{
lean_dec(x_4);
if (x_2 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_8 = lean_box(x_1);
x_9 = lean_box(x_2);
x_10 = lean_apply_2(x_5, x_8, x_9);
return x_10;
}
}
else
{
lean_dec(x_3);
if (x_2 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
x_11 = lean_box(x_1);
x_12 = lean_box(x_2);
x_13 = lean_apply_2(x_5, x_11, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
x_14 = lean_box(0);
x_15 = lean_apply_1(x_4, x_14);
return x_15;
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticTag____x40_Lean_Data_Lsp_Diagnostics___hyg_300__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticTag____x40_Lean_Data_Lsp_Diagnostics___hyg_300__match__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticTag____x40_Lean_Data_Lsp_Diagnostics___hyg_300__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; uint8_t x_7; lean_object* x_8; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = lean_unbox(x_2);
lean_dec(x_2);
x_8 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticTag____x40_Lean_Data_Lsp_Diagnostics___hyg_300__match__1___rarg(x_6, x_7, x_3, x_4, x_5);
return x_8;
}
}
uint8_t l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticTag____x40_Lean_Data_Lsp_Diagnostics___hyg_300_(uint8_t x_1, uint8_t x_2) {
_start:
{
if (x_1 == 0)
{
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (x_2 == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 1;
return x_6;
}
}
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticTag____x40_Lean_Data_Lsp_Diagnostics___hyg_300____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticTag____x40_Lean_Data_Lsp_Diagnostics___hyg_300_(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Lsp_instBEqDiagnosticTag() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticTag____x40_Lean_Data_Lsp_Diagnostics___hyg_300____boxed), 2, 0);
return x_1;
}
}
lean_object* l_Lean_Lsp_instFromJsonDiagnosticTag_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_apply_1(x_4, x_1);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_dec_eq(x_6, x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
lean_dec(x_2);
x_9 = lean_unsigned_to_nat(2u);
x_10 = lean_nat_dec_eq(x_6, x_9);
lean_dec(x_6);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_3);
x_11 = lean_apply_1(x_4, x_1);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_apply_1(x_3, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_14 = lean_box(0);
x_15 = lean_apply_1(x_2, x_14);
return x_15;
}
}
}
}
lean_object* l_Lean_Lsp_instFromJsonDiagnosticTag_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Lsp_instFromJsonDiagnosticTag_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Lsp_instFromJsonDiagnosticTag(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Json_getNat_x3f(x_1);
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_dec(x_4);
x_5 = lean_mk_string("unknown DiagnosticTag");
lean_ctor_set(x_2, 0, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_mk_string("unknown DiagnosticTag");
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_2);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_dec_eq(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(2u);
x_13 = lean_nat_dec_eq(x_9, x_12);
lean_dec(x_9);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_mk_string("unknown DiagnosticTag");
lean_ctor_set_tag(x_2, 0);
lean_ctor_set(x_2, 0, x_14);
return x_2;
}
else
{
uint8_t x_15; lean_object* x_16; 
x_15 = 1;
x_16 = lean_box(x_15);
lean_ctor_set(x_2, 0, x_16);
return x_2;
}
}
else
{
uint8_t x_17; lean_object* x_18; 
lean_dec(x_9);
x_17 = 0;
x_18 = lean_box(x_17);
lean_ctor_set(x_2, 0, x_18);
return x_2;
}
}
else
{
lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_dec_eq(x_19, x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_unsigned_to_nat(2u);
x_23 = lean_nat_dec_eq(x_19, x_22);
lean_dec(x_19);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_mk_string("unknown DiagnosticTag");
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
else
{
uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_26 = 1;
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
return x_28;
}
}
else
{
uint8_t x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_19);
x_29 = 0;
x_30 = lean_box(x_29);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
return x_31;
}
}
}
}
}
lean_object* l_Lean_Lsp_instFromJsonDiagnosticTag___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Lsp_instFromJsonDiagnosticTag(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Lsp_instToJsonDiagnosticTag_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (x_1 == 0)
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
x_6 = lean_box(0);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Lsp_instToJsonDiagnosticTag_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Lsp_instToJsonDiagnosticTag_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Lsp_instToJsonDiagnosticTag_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Lean_Lsp_instToJsonDiagnosticTag_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Lsp_instToJsonDiagnosticTag(uint8_t x_1) {
_start:
{
if (x_1 == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Lean_JsonNumber_fromNat(x_2);
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(2u);
x_6 = l_Lean_JsonNumber_fromNat(x_5);
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Lsp_instToJsonDiagnosticTag___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lean_Lsp_instToJsonDiagnosticTag(x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Lsp_instInhabitedDiagnosticRelatedInformation() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_2);
x_4 = lean_mk_string("");
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_423__match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_apply_4(x_3, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_423__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_423__match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_423__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_423__match__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
uint8_t l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_423_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqLocation____x40_Lean_Data_Lsp_Basic___hyg_516_(x_3, x_5);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = lean_string_dec_eq(x_4, x_6);
return x_9;
}
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_423____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_423_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Lsp_instBEqDiagnosticRelatedInformation() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_423____boxed), 2, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_484_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonLocation____x40_Lean_Data_Lsp_Basic___hyg_577_(x_2);
x_4 = lean_mk_string("location");
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
x_9 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_mk_string("message");
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
static lean_object* _init_l_Lean_Lsp_instToJsonDiagnosticRelatedInformation() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_484_), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_518____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
x_4 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonLocation____x40_Lean_Data_Lsp_Basic___hyg_611_(x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_518_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("location");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_518____spec__1(x_1, x_2);
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
x_8 = lean_mk_string("message");
x_9 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(x_1, x_8);
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
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_518____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_518____spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_518____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_518_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDiagnosticRelatedInformation() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_518____boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Lsp_Diagnostic_fullRange___default(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Lean_Lsp_Diagnostic_fullRange___default___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Lsp_Diagnostic_fullRange___default(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_Diagnostic_severity_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Diagnostic_code_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Diagnostic_source_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Diagnostic_tags_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_Diagnostic_relatedInformation_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_instInhabitedDiagnostic() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_2);
x_4 = lean_box(0);
x_5 = lean_mk_string("");
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_4);
lean_ctor_set(x_6, 3, x_4);
lean_ctor_set(x_6, 4, x_4);
lean_ctor_set(x_6, 5, x_5);
lean_ctor_set(x_6, 6, x_4);
lean_ctor_set(x_6, 7, x_4);
return x_6;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660__match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 4);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 5);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 6);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 7);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 3);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 4);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 5);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 6);
lean_inc(x_19);
x_20 = lean_ctor_get(x_2, 7);
lean_inc(x_20);
lean_dec(x_2);
x_21 = lean_apply_16(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18, x_19, x_20);
return x_21;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660__match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660__match__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
lean_dec(x_2);
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
lean_dec(x_1);
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; uint8_t x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_unbox(x_6);
lean_dec(x_6);
x_9 = lean_unbox(x_7);
lean_dec(x_7);
x_10 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticSeverity____x40_Lean_Data_Lsp_Diagnostics___hyg_13_(x_8, x_9);
return x_10;
}
}
}
}
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_2, 0);
x_8 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticCode____x40_Lean_Data_Lsp_Diagnostics___hyg_161_(x_6, x_7);
return x_8;
}
}
}
}
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_string_dec_eq(x_6, x_7);
return x_8;
}
}
}
}
uint8_t l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_6);
x_9 = 1;
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; uint8_t x_13; uint8_t x_14; 
x_10 = lean_array_fget(x_4, x_6);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
x_12 = lean_array_fget(x_5, x_6);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
x_14 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticTag____x40_Lean_Data_Lsp_Diagnostics___hyg_300_(x_11, x_13);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_6);
x_15 = 0;
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_6, x_16);
lean_dec(x_6);
x_3 = lean_box(0);
x_6 = x_17;
goto _start;
}
}
}
}
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_array_get_size(x_6);
x_9 = lean_array_get_size(x_7);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__5(x_6, x_7, lean_box(0), x_6, x_7, x_12);
return x_13;
}
}
}
}
}
uint8_t l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_6);
x_9 = 1;
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_fget(x_4, x_6);
x_11 = lean_array_fget(x_5, x_6);
x_12 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_423_(x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_6);
x_13 = 0;
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_6, x_14);
lean_dec(x_6);
x_3 = lean_box(0);
x_6 = x_15;
goto _start;
}
}
}
}
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_array_get_size(x_6);
x_9 = lean_array_get_size(x_7);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 0;
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__7(x_6, x_7, lean_box(0), x_6, x_7, x_12);
return x_13;
}
}
}
}
}
uint8_t l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 4);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 5);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 6);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 7);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_2, 2);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 3);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 4);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 5);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 6);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 7);
lean_inc(x_18);
lean_dec(x_2);
x_19 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_348_(x_3, x_11);
lean_dec(x_11);
lean_dec(x_3);
if (x_19 == 0)
{
uint8_t x_20; 
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
x_20 = 0;
return x_20;
}
else
{
uint8_t x_21; 
x_21 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_beqRange____x40_Lean_Data_Lsp_Basic___hyg_348_(x_4, x_12);
lean_dec(x_12);
lean_dec(x_4);
if (x_21 == 0)
{
uint8_t x_22; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_22 = 0;
return x_22;
}
else
{
uint8_t x_23; 
x_23 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__1(x_5, x_13);
if (x_23 == 0)
{
uint8_t x_24; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_24 = 0;
return x_24;
}
else
{
uint8_t x_25; 
x_25 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__2(x_6, x_14);
lean_dec(x_14);
lean_dec(x_6);
if (x_25 == 0)
{
uint8_t x_26; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_26 = 0;
return x_26;
}
else
{
uint8_t x_27; 
x_27 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__3(x_7, x_15);
lean_dec(x_15);
lean_dec(x_7);
if (x_27 == 0)
{
uint8_t x_28; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_28 = 0;
return x_28;
}
else
{
uint8_t x_29; 
x_29 = lean_string_dec_eq(x_8, x_16);
lean_dec(x_16);
lean_dec(x_8);
if (x_29 == 0)
{
uint8_t x_30; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_9);
x_30 = 0;
return x_30;
}
else
{
uint8_t x_31; 
x_31 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__4(x_9, x_17);
lean_dec(x_17);
lean_dec(x_9);
if (x_31 == 0)
{
uint8_t x_32; 
lean_dec(x_18);
lean_dec(x_10);
x_32 = 0;
return x_32;
}
else
{
uint8_t x_33; 
x_33 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__6(x_10, x_18);
lean_dec(x_18);
lean_dec(x_10);
return x_33;
}
}
}
}
}
}
}
}
}
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__1(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__5(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__7(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____spec__6(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660_(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Lsp_instBEqDiagnostic() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660____boxed), 2, 0);
return x_1;
}
}
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__1(lean_object* x_1, lean_object* x_2) {
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
case 2:
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
default: 
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_28 = lean_unsigned_to_nat(4u);
x_29 = lean_nat_to_int(x_28);
x_30 = lean_unsigned_to_nat(0u);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_5);
return x_34;
}
}
}
}
}
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__2(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_box(0);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_unsigned_to_nat(0u);
lean_inc(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_4, 0);
lean_inc(x_12);
x_13 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_1);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_5);
return x_15;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__4(size_t x_1, size_t x_2, lean_object* x_3) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; size_t x_11; size_t x_12; 
x_6 = lean_array_uget(x_3, x_2);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_uset(x_3, x_2, x_7);
x_9 = x_6;
x_10 = lean_unbox(x_9);
lean_dec(x_9);
x_11 = 1;
x_12 = x_2 + x_11;
if (x_10 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_JsonNumber_fromNat(x_13);
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = x_15;
x_17 = lean_array_uset(x_8, x_2, x_16);
x_2 = x_12;
x_3 = x_17;
goto _start;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_unsigned_to_nat(2u);
x_20 = l_Lean_JsonNumber_fromNat(x_19);
x_21 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = x_21;
x_23 = lean_array_uset(x_8, x_2, x_22);
x_2 = x_12;
x_3 = x_23;
goto _start;
}
}
}
}
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__3(lean_object* x_1, lean_object* x_2) {
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
x_9 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__4(x_6, x_7, x_8);
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
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__6(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_484_(x_9);
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
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__5(lean_object* x_1, lean_object* x_2) {
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
x_9 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__6(x_6, x_7, x_8);
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
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
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
x_9 = l___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonRange____x40_Lean_Data_Lsp_Basic___hyg_409_(x_8);
x_10 = lean_mk_string("fullRange");
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_6);
x_13 = lean_ctor_get(x_1, 2);
lean_inc(x_13);
x_14 = lean_mk_string("severity");
x_15 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__1(x_14, x_13);
lean_dec(x_13);
x_16 = lean_ctor_get(x_1, 3);
lean_inc(x_16);
x_17 = lean_mk_string("code");
x_18 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__2(x_17, x_16);
lean_dec(x_16);
x_19 = lean_ctor_get(x_1, 4);
lean_inc(x_19);
x_20 = lean_mk_string("source");
x_21 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_toJsonDocumentFilter____x40_Lean_Data_Lsp_Basic___hyg_1611____spec__1(x_20, x_19);
lean_dec(x_19);
x_22 = lean_ctor_get(x_1, 5);
lean_inc(x_22);
x_23 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_mk_string("message");
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_6);
x_27 = lean_ctor_get(x_1, 6);
lean_inc(x_27);
x_28 = lean_mk_string("tags");
x_29 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__3(x_28, x_27);
x_30 = lean_ctor_get(x_1, 7);
lean_inc(x_30);
lean_dec(x_1);
x_31 = lean_mk_string("relatedInformation");
x_32 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__5(x_31, x_30);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_6);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_26);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_21);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_18);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_15);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_12);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_7);
lean_ctor_set(x_40, 1, x_39);
x_41 = l_List_join___rarg(x_40);
x_42 = l_Lean_Json_mkObj(x_41);
return x_42;
}
}
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__4(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805____spec__6(x_4, x_5, x_3);
return x_6;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonDiagnostic() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805_), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__1(lean_object* x_1, lean_object* x_2) {
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
x_6 = l_Lean_Json_getNat_x3f(x_3);
lean_dec(x_3);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_dec(x_8);
x_9 = lean_mk_string("unknown DiagnosticSeverity");
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
x_10 = lean_mk_string("unknown DiagnosticSeverity");
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_6);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_6, 0);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_dec_eq(x_13, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_unsigned_to_nat(2u);
x_17 = lean_nat_dec_eq(x_13, x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_unsigned_to_nat(3u);
x_19 = lean_nat_dec_eq(x_13, x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_unsigned_to_nat(4u);
x_21 = lean_nat_dec_eq(x_13, x_20);
lean_dec(x_13);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_mk_string("unknown DiagnosticSeverity");
lean_ctor_set_tag(x_6, 0);
lean_ctor_set(x_6, 0, x_22);
return x_6;
}
else
{
uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_23 = 3;
x_24 = lean_box(x_23);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_6, 0, x_25);
return x_6;
}
}
else
{
uint8_t x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_13);
x_26 = 2;
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_6, 0, x_28);
return x_6;
}
}
else
{
uint8_t x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_13);
x_29 = 1;
x_30 = lean_box(x_29);
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_6, 0, x_31);
return x_6;
}
}
else
{
uint8_t x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_13);
x_32 = 0;
x_33 = lean_box(x_32);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_6, 0, x_34);
return x_6;
}
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = lean_ctor_get(x_6, 0);
lean_inc(x_35);
lean_dec(x_6);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_nat_dec_eq(x_35, x_36);
if (x_37 == 0)
{
lean_object* x_38; uint8_t x_39; 
x_38 = lean_unsigned_to_nat(2u);
x_39 = lean_nat_dec_eq(x_35, x_38);
if (x_39 == 0)
{
lean_object* x_40; uint8_t x_41; 
x_40 = lean_unsigned_to_nat(3u);
x_41 = lean_nat_dec_eq(x_35, x_40);
if (x_41 == 0)
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_unsigned_to_nat(4u);
x_43 = lean_nat_dec_eq(x_35, x_42);
lean_dec(x_35);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_mk_string("unknown DiagnosticSeverity");
x_45 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_45, 0, x_44);
return x_45;
}
else
{
uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_46 = 3;
x_47 = lean_box(x_46);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_48);
return x_49;
}
}
else
{
uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_35);
x_50 = 2;
x_51 = lean_box(x_50);
x_52 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_53, 0, x_52);
return x_53;
}
}
else
{
uint8_t x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_35);
x_54 = 1;
x_55 = lean_box(x_54);
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_55);
x_57 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_57, 0, x_56);
return x_57;
}
}
else
{
uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_35);
x_58 = 0;
x_59 = lean_box(x_58);
x_60 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_60, 0, x_59);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_60);
return x_61;
}
}
}
}
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__2(lean_object* x_1, lean_object* x_2) {
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
case 2:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_7);
x_11 = lean_mk_string("the diagnostic code can only be a string or an integer");
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_7);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
case 3:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
lean_dec(x_3);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
default: 
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_3);
x_20 = lean_mk_string("the diagnostic code can only be a string or an integer");
x_21 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__4(size_t x_1, size_t x_2, lean_object* x_3) {
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
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_dec(x_13);
x_14 = lean_mk_string("unknown DiagnosticTag");
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_11);
x_15 = lean_mk_string("unknown DiagnosticTag");
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_11);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_ctor_get(x_11, 0);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_dec_eq(x_18, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_unsigned_to_nat(2u);
x_22 = lean_nat_dec_eq(x_18, x_21);
lean_dec(x_18);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_9);
x_23 = lean_mk_string("unknown DiagnosticTag");
lean_ctor_set_tag(x_11, 0);
lean_ctor_set(x_11, 0, x_23);
return x_11;
}
else
{
size_t x_24; size_t x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_free_object(x_11);
x_24 = 1;
x_25 = x_2 + x_24;
x_26 = 1;
x_27 = lean_box(x_26);
x_28 = x_27;
x_29 = lean_array_uset(x_9, x_2, x_28);
x_2 = x_25;
x_3 = x_29;
goto _start;
}
}
else
{
size_t x_31; size_t x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_free_object(x_11);
lean_dec(x_18);
x_31 = 1;
x_32 = x_2 + x_31;
x_33 = 0;
x_34 = lean_box(x_33);
x_35 = x_34;
x_36 = lean_array_uset(x_9, x_2, x_35);
x_2 = x_32;
x_3 = x_36;
goto _start;
}
}
else
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_11, 0);
lean_inc(x_38);
lean_dec(x_11);
x_39 = lean_unsigned_to_nat(1u);
x_40 = lean_nat_dec_eq(x_38, x_39);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_unsigned_to_nat(2u);
x_42 = lean_nat_dec_eq(x_38, x_41);
lean_dec(x_38);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_9);
x_43 = lean_mk_string("unknown DiagnosticTag");
x_44 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_44, 0, x_43);
return x_44;
}
else
{
size_t x_45; size_t x_46; uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_45 = 1;
x_46 = x_2 + x_45;
x_47 = 1;
x_48 = lean_box(x_47);
x_49 = x_48;
x_50 = lean_array_uset(x_9, x_2, x_49);
x_2 = x_46;
x_3 = x_50;
goto _start;
}
}
else
{
size_t x_52; size_t x_53; uint8_t x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_38);
x_52 = 1;
x_53 = x_2 + x_52;
x_54 = 0;
x_55 = lean_box(x_54);
x_56 = x_55;
x_57 = lean_array_uset(x_9, x_2, x_56);
x_2 = x_53;
x_3 = x_57;
goto _start;
}
}
}
}
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__3(lean_object* x_1, lean_object* x_2) {
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
x_11 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__4(x_8, x_9, x_10);
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
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__6(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_11 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnosticRelatedInformation____x40_Lean_Data_Lsp_Diagnostics___hyg_518_(x_10);
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
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__5(lean_object* x_1, lean_object* x_2) {
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
x_11 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__6(x_8, x_9, x_10);
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
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("range");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonLocation____x40_Lean_Data_Lsp_Basic___hyg_611____spec__2(x_1, x_2);
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
x_8 = lean_mk_string("fullRange");
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
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_mk_string("severity");
x_15 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__1(x_1, x_14);
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
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
lean_dec(x_15);
x_20 = lean_mk_string("code");
x_21 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__2(x_1, x_20);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
lean_dec(x_19);
lean_dec(x_13);
lean_dec(x_7);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_23);
return x_24;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_21, 0);
lean_inc(x_25);
lean_dec(x_21);
x_26 = lean_mk_string("source");
x_27 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonDocumentFilter____x40_Lean_Data_Lsp_Basic___hyg_1639____spec__1(x_1, x_26);
lean_dec(x_26);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_13);
lean_dec(x_7);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
return x_27;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_30, 0, x_29);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_27, 0);
lean_inc(x_31);
lean_dec(x_27);
x_32 = lean_mk_string("message");
x_33 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(x_1, x_32);
lean_dec(x_32);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
lean_dec(x_31);
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_13);
lean_dec(x_7);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
return x_33;
}
else
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_36, 0, x_35);
return x_36;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_33, 0);
lean_inc(x_37);
lean_dec(x_33);
x_38 = lean_mk_string("tags");
x_39 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__3(x_1, x_38);
lean_dec(x_38);
if (lean_obj_tag(x_39) == 0)
{
uint8_t x_40; 
lean_dec(x_37);
lean_dec(x_31);
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_13);
lean_dec(x_7);
x_40 = !lean_is_exclusive(x_39);
if (x_40 == 0)
{
return x_39;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
return x_42;
}
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_39, 0);
lean_inc(x_43);
lean_dec(x_39);
x_44 = lean_mk_string("relatedInformation");
x_45 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__5(x_1, x_44);
lean_dec(x_44);
if (lean_obj_tag(x_45) == 0)
{
uint8_t x_46; 
lean_dec(x_43);
lean_dec(x_37);
lean_dec(x_31);
lean_dec(x_25);
lean_dec(x_19);
lean_dec(x_13);
lean_dec(x_7);
x_46 = !lean_is_exclusive(x_45);
if (x_46 == 0)
{
return x_45;
}
else
{
lean_object* x_47; lean_object* x_48; 
x_47 = lean_ctor_get(x_45, 0);
lean_inc(x_47);
lean_dec(x_45);
x_48 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_48, 0, x_47);
return x_48;
}
}
else
{
uint8_t x_49; 
x_49 = !lean_is_exclusive(x_45);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_45, 0);
x_51 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_51, 0, x_7);
lean_ctor_set(x_51, 1, x_13);
lean_ctor_set(x_51, 2, x_19);
lean_ctor_set(x_51, 3, x_25);
lean_ctor_set(x_51, 4, x_31);
lean_ctor_set(x_51, 5, x_37);
lean_ctor_set(x_51, 6, x_43);
lean_ctor_set(x_51, 7, x_50);
lean_ctor_set(x_45, 0, x_51);
return x_45;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_45, 0);
lean_inc(x_52);
lean_dec(x_45);
x_53 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_53, 0, x_7);
lean_ctor_set(x_53, 1, x_13);
lean_ctor_set(x_53, 2, x_19);
lean_ctor_set(x_53, 3, x_25);
lean_ctor_set(x_53, 4, x_31);
lean_ctor_set(x_53, 5, x_37);
lean_ctor_set(x_53, 6, x_43);
lean_ctor_set(x_53, 7, x_52);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
return x_54;
}
}
}
}
}
}
}
}
}
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__4(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__6(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____spec__5(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonDiagnostic() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868____boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_PublishDiagnosticsParams_version_x3f___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_Lsp_instInhabitedPublishDiagnosticsParams() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_mk_empty_array_with_capacity(x_2);
x_4 = lean_mk_string("");
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 2, x_3);
return x_5;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037__match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 2);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_apply_6(x_3, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037__match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037__match__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
uint8_t l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_int_dec_eq(x_6, x_7);
return x_8;
}
}
}
}
uint8_t l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037____spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_4);
x_8 = lean_nat_dec_lt(x_6, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_6);
x_9 = 1;
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_array_fget(x_4, x_6);
x_11 = lean_array_fget(x_5, x_6);
x_12 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_660_(x_10, x_11);
if (x_12 == 0)
{
uint8_t x_13; 
lean_dec(x_6);
x_13 = 0;
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_6, x_14);
lean_dec(x_6);
x_3 = lean_box(0);
x_6 = x_15;
goto _start;
}
}
}
}
uint8_t l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = lean_ctor_get(x_2, 2);
x_9 = lean_string_dec_eq(x_3, x_6);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
else
{
uint8_t x_11; 
x_11 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037____spec__1(x_4, x_7);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_array_get_size(x_5);
x_14 = lean_array_get_size(x_8);
x_15 = lean_nat_dec_eq(x_13, x_14);
lean_dec(x_14);
lean_dec(x_13);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = 0;
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037____spec__2(x_5, x_8, lean_box(0), x_5, x_8, x_17);
return x_18;
}
}
}
}
}
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037____spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037____spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = l_Array_isEqvAux___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037____spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(x_7);
return x_8;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Lsp_instBEqPublishDiagnosticsParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_beqPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1037____boxed), 2, 0);
return x_1;
}
}
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1112____spec__1(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_unsigned_to_nat(0u);
lean_inc(x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1112____spec__2(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_805_(x_9);
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
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1112_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; size_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_5, 0, x_2);
x_6 = lean_mk_string("uri");
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_mk_string("version");
x_11 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1112____spec__1(x_10, x_3);
lean_dec(x_3);
x_12 = lean_array_get_size(x_4);
x_13 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_14 = 0;
x_15 = x_4;
x_16 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1112____spec__2(x_13, x_14, x_15);
x_17 = x_16;
x_18 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_mk_string("diagnostics");
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_8);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_8);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_11);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_9);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_List_join___rarg(x_24);
x_26 = l_Lean_Json_mkObj(x_25);
return x_26;
}
}
lean_object* l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1112____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_opt___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1112____spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1112____spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1112____spec__2(x_4, x_5, x_3);
return x_6;
}
}
static lean_object* _init_l_Lean_Lsp_instToJsonPublishDiagnosticsParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_toJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1112_), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__1(lean_object* x_1, lean_object* x_2) {
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
x_6 = l_Lean_Json_getInt_x3f(x_3);
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
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__3(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_11 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonDiagnostic____x40_Lean_Data_Lsp_Diagnostics___hyg_868_(x_10);
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
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__2(lean_object* x_1, lean_object* x_2) {
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
x_9 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__3(x_6, x_7, x_8);
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
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150_(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("uri");
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Basic_0__Lean_Lsp_fromJsonLocation____x40_Lean_Data_Lsp_Basic___hyg_611____spec__1(x_1, x_2);
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
x_8 = lean_mk_string("version");
x_9 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__1(x_1, x_8);
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
x_14 = lean_mk_string("diagnostics");
x_15 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__2(x_1, x_14);
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
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__3(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150_(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Lsp_instFromJsonPublishDiagnosticsParams() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_Lsp_Diagnostics_0__Lean_Lsp_fromJsonPublishDiagnosticsParams____x40_Lean_Data_Lsp_Diagnostics___hyg_1150____boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Lsp_msgToDiagnostic_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Lsp_msgToDiagnostic_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Lsp_msgToDiagnostic_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Lsp_msgToDiagnostic_match__2___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* l_Lean_Lsp_msgToDiagnostic_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Lsp_msgToDiagnostic_match__2___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Lsp_msgToDiagnostic_match__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Lsp_msgToDiagnostic_match__2___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_Lean_Lsp_msgToDiagnostic(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_inc(x_4);
x_5 = l_Lean_FileMap_leanPosToLspPos(x_1, x_4);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
x_7 = lean_ctor_get_uint8(x_2, sizeof(void*)*5);
x_8 = lean_ctor_get(x_2, 4);
lean_inc(x_8);
lean_dec(x_2);
x_9 = l_Lean_MessageData_toString(x_8, x_3);
if (lean_obj_tag(x_6) == 0)
{
lean_inc(x_4);
x_10 = x_4;
goto block_95;
}
else
{
lean_object* x_96; 
x_96 = lean_ctor_get(x_6, 0);
lean_inc(x_96);
x_10 = x_96;
goto block_95;
}
block_95:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = l_Lean_FileMap_leanPosToLspPos(x_1, x_10);
lean_inc(x_5);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_11);
if (lean_obj_tag(x_6) == 0)
{
lean_dec(x_4);
lean_inc(x_5);
x_13 = x_5;
goto block_84;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_85 = lean_ctor_get(x_6, 0);
lean_inc(x_85);
lean_dec(x_6);
x_86 = lean_ctor_get(x_4, 0);
lean_inc(x_86);
lean_dec(x_4);
x_87 = lean_ctor_get(x_85, 0);
lean_inc(x_87);
x_88 = lean_nat_dec_lt(x_86, x_87);
lean_dec(x_87);
if (x_88 == 0)
{
lean_object* x_89; 
lean_dec(x_86);
x_89 = l_Lean_FileMap_leanPosToLspPos(x_1, x_85);
x_13 = x_89;
goto block_84;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_85);
x_90 = lean_unsigned_to_nat(1u);
x_91 = lean_nat_add(x_86, x_90);
lean_dec(x_86);
x_92 = lean_unsigned_to_nat(0u);
x_93 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
x_94 = l_Lean_FileMap_leanPosToLspPos(x_1, x_93);
x_13 = x_94;
goto block_84;
}
}
block_84:
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_13);
switch (x_7) {
case 0:
{
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_9);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_9, 0);
x_17 = 2;
x_18 = lean_box(x_17);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_box(0);
x_21 = lean_mk_string("Lean 4 server");
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_12);
lean_ctor_set(x_23, 2, x_19);
lean_ctor_set(x_23, 3, x_20);
lean_ctor_set(x_23, 4, x_22);
lean_ctor_set(x_23, 5, x_16);
lean_ctor_set(x_23, 6, x_20);
lean_ctor_set(x_23, 7, x_20);
lean_ctor_set(x_9, 0, x_23);
return x_9;
}
else
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_24 = lean_ctor_get(x_9, 0);
x_25 = lean_ctor_get(x_9, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_9);
x_26 = 2;
x_27 = lean_box(x_26);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = lean_box(0);
x_30 = lean_mk_string("Lean 4 server");
x_31 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_32, 0, x_14);
lean_ctor_set(x_32, 1, x_12);
lean_ctor_set(x_32, 2, x_28);
lean_ctor_set(x_32, 3, x_29);
lean_ctor_set(x_32, 4, x_31);
lean_ctor_set(x_32, 5, x_24);
lean_ctor_set(x_32, 6, x_29);
lean_ctor_set(x_32, 7, x_29);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_25);
return x_33;
}
}
else
{
uint8_t x_34; 
lean_dec(x_14);
lean_dec(x_12);
x_34 = !lean_is_exclusive(x_9);
if (x_34 == 0)
{
return x_9;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_9, 0);
x_36 = lean_ctor_get(x_9, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_9);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
case 1:
{
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_9);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_39 = lean_ctor_get(x_9, 0);
x_40 = 1;
x_41 = lean_box(x_40);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_box(0);
x_44 = lean_mk_string("Lean 4 server");
x_45 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_46, 0, x_14);
lean_ctor_set(x_46, 1, x_12);
lean_ctor_set(x_46, 2, x_42);
lean_ctor_set(x_46, 3, x_43);
lean_ctor_set(x_46, 4, x_45);
lean_ctor_set(x_46, 5, x_39);
lean_ctor_set(x_46, 6, x_43);
lean_ctor_set(x_46, 7, x_43);
lean_ctor_set(x_9, 0, x_46);
return x_9;
}
else
{
lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_47 = lean_ctor_get(x_9, 0);
x_48 = lean_ctor_get(x_9, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_9);
x_49 = 1;
x_50 = lean_box(x_49);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_box(0);
x_53 = lean_mk_string("Lean 4 server");
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
x_55 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_55, 0, x_14);
lean_ctor_set(x_55, 1, x_12);
lean_ctor_set(x_55, 2, x_51);
lean_ctor_set(x_55, 3, x_52);
lean_ctor_set(x_55, 4, x_54);
lean_ctor_set(x_55, 5, x_47);
lean_ctor_set(x_55, 6, x_52);
lean_ctor_set(x_55, 7, x_52);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_48);
return x_56;
}
}
else
{
uint8_t x_57; 
lean_dec(x_14);
lean_dec(x_12);
x_57 = !lean_is_exclusive(x_9);
if (x_57 == 0)
{
return x_9;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_9, 0);
x_59 = lean_ctor_get(x_9, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_9);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
default: 
{
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_61; 
x_61 = !lean_is_exclusive(x_9);
if (x_61 == 0)
{
lean_object* x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_62 = lean_ctor_get(x_9, 0);
x_63 = 0;
x_64 = lean_box(x_63);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_66 = lean_box(0);
x_67 = lean_mk_string("Lean 4 server");
x_68 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_68, 0, x_67);
x_69 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_69, 0, x_14);
lean_ctor_set(x_69, 1, x_12);
lean_ctor_set(x_69, 2, x_65);
lean_ctor_set(x_69, 3, x_66);
lean_ctor_set(x_69, 4, x_68);
lean_ctor_set(x_69, 5, x_62);
lean_ctor_set(x_69, 6, x_66);
lean_ctor_set(x_69, 7, x_66);
lean_ctor_set(x_9, 0, x_69);
return x_9;
}
else
{
lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_70 = lean_ctor_get(x_9, 0);
x_71 = lean_ctor_get(x_9, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_9);
x_72 = 0;
x_73 = lean_box(x_72);
x_74 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_74, 0, x_73);
x_75 = lean_box(0);
x_76 = lean_mk_string("Lean 4 server");
x_77 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_77, 0, x_76);
x_78 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_78, 0, x_14);
lean_ctor_set(x_78, 1, x_12);
lean_ctor_set(x_78, 2, x_74);
lean_ctor_set(x_78, 3, x_75);
lean_ctor_set(x_78, 4, x_77);
lean_ctor_set(x_78, 5, x_70);
lean_ctor_set(x_78, 6, x_75);
lean_ctor_set(x_78, 7, x_75);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_71);
return x_79;
}
}
else
{
uint8_t x_80; 
lean_dec(x_14);
lean_dec(x_12);
x_80 = !lean_is_exclusive(x_9);
if (x_80 == 0)
{
return x_9;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_9, 0);
x_82 = lean_ctor_get(x_9, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_9);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
}
}
}
}
}
lean_object* l_Lean_Lsp_msgToDiagnostic___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Lsp_msgToDiagnostic(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Data_Json(lean_object*);
lean_object* initialize_Lean_Data_Lsp_Basic(lean_object*);
lean_object* initialize_Lean_Data_Lsp_Utf16(lean_object*);
lean_object* initialize_Lean_Message(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Data_Lsp_Diagnostics(lean_object* w) {
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
res = initialize_Lean_Data_Lsp_Utf16(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Message(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Lsp_instInhabitedDiagnosticSeverity = _init_l_Lean_Lsp_instInhabitedDiagnosticSeverity();
l_Lean_Lsp_instBEqDiagnosticSeverity = _init_l_Lean_Lsp_instBEqDiagnosticSeverity();
lean_mark_persistent(l_Lean_Lsp_instBEqDiagnosticSeverity);
l_Lean_Lsp_instInhabitedDiagnosticCode = _init_l_Lean_Lsp_instInhabitedDiagnosticCode();
lean_mark_persistent(l_Lean_Lsp_instInhabitedDiagnosticCode);
l_Lean_Lsp_instBEqDiagnosticCode = _init_l_Lean_Lsp_instBEqDiagnosticCode();
lean_mark_persistent(l_Lean_Lsp_instBEqDiagnosticCode);
l_Lean_Lsp_instInhabitedDiagnosticTag = _init_l_Lean_Lsp_instInhabitedDiagnosticTag();
l_Lean_Lsp_instBEqDiagnosticTag = _init_l_Lean_Lsp_instBEqDiagnosticTag();
lean_mark_persistent(l_Lean_Lsp_instBEqDiagnosticTag);
l_Lean_Lsp_instInhabitedDiagnosticRelatedInformation = _init_l_Lean_Lsp_instInhabitedDiagnosticRelatedInformation();
lean_mark_persistent(l_Lean_Lsp_instInhabitedDiagnosticRelatedInformation);
l_Lean_Lsp_instBEqDiagnosticRelatedInformation = _init_l_Lean_Lsp_instBEqDiagnosticRelatedInformation();
lean_mark_persistent(l_Lean_Lsp_instBEqDiagnosticRelatedInformation);
l_Lean_Lsp_instToJsonDiagnosticRelatedInformation = _init_l_Lean_Lsp_instToJsonDiagnosticRelatedInformation();
lean_mark_persistent(l_Lean_Lsp_instToJsonDiagnosticRelatedInformation);
l_Lean_Lsp_instFromJsonDiagnosticRelatedInformation = _init_l_Lean_Lsp_instFromJsonDiagnosticRelatedInformation();
lean_mark_persistent(l_Lean_Lsp_instFromJsonDiagnosticRelatedInformation);
l_Lean_Lsp_Diagnostic_severity_x3f___default = _init_l_Lean_Lsp_Diagnostic_severity_x3f___default();
lean_mark_persistent(l_Lean_Lsp_Diagnostic_severity_x3f___default);
l_Lean_Lsp_Diagnostic_code_x3f___default = _init_l_Lean_Lsp_Diagnostic_code_x3f___default();
lean_mark_persistent(l_Lean_Lsp_Diagnostic_code_x3f___default);
l_Lean_Lsp_Diagnostic_source_x3f___default = _init_l_Lean_Lsp_Diagnostic_source_x3f___default();
lean_mark_persistent(l_Lean_Lsp_Diagnostic_source_x3f___default);
l_Lean_Lsp_Diagnostic_tags_x3f___default = _init_l_Lean_Lsp_Diagnostic_tags_x3f___default();
lean_mark_persistent(l_Lean_Lsp_Diagnostic_tags_x3f___default);
l_Lean_Lsp_Diagnostic_relatedInformation_x3f___default = _init_l_Lean_Lsp_Diagnostic_relatedInformation_x3f___default();
lean_mark_persistent(l_Lean_Lsp_Diagnostic_relatedInformation_x3f___default);
l_Lean_Lsp_instInhabitedDiagnostic = _init_l_Lean_Lsp_instInhabitedDiagnostic();
lean_mark_persistent(l_Lean_Lsp_instInhabitedDiagnostic);
l_Lean_Lsp_instBEqDiagnostic = _init_l_Lean_Lsp_instBEqDiagnostic();
lean_mark_persistent(l_Lean_Lsp_instBEqDiagnostic);
l_Lean_Lsp_instToJsonDiagnostic = _init_l_Lean_Lsp_instToJsonDiagnostic();
lean_mark_persistent(l_Lean_Lsp_instToJsonDiagnostic);
l_Lean_Lsp_instFromJsonDiagnostic = _init_l_Lean_Lsp_instFromJsonDiagnostic();
lean_mark_persistent(l_Lean_Lsp_instFromJsonDiagnostic);
l_Lean_Lsp_PublishDiagnosticsParams_version_x3f___default = _init_l_Lean_Lsp_PublishDiagnosticsParams_version_x3f___default();
lean_mark_persistent(l_Lean_Lsp_PublishDiagnosticsParams_version_x3f___default);
l_Lean_Lsp_instInhabitedPublishDiagnosticsParams = _init_l_Lean_Lsp_instInhabitedPublishDiagnosticsParams();
lean_mark_persistent(l_Lean_Lsp_instInhabitedPublishDiagnosticsParams);
l_Lean_Lsp_instBEqPublishDiagnosticsParams = _init_l_Lean_Lsp_instBEqPublishDiagnosticsParams();
lean_mark_persistent(l_Lean_Lsp_instBEqPublishDiagnosticsParams);
l_Lean_Lsp_instToJsonPublishDiagnosticsParams = _init_l_Lean_Lsp_instToJsonPublishDiagnosticsParams();
lean_mark_persistent(l_Lean_Lsp_instToJsonPublishDiagnosticsParams);
l_Lean_Lsp_instFromJsonPublishDiagnosticsParams = _init_l_Lean_Lsp_instFromJsonPublishDiagnosticsParams();
lean_mark_persistent(l_Lean_Lsp_instFromJsonPublishDiagnosticsParams);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
