// Lean compiler output
// Module: Lean.Data.JsonRpc
// Imports: Init Init.Control Init.System.IO Std.Data.RBTree Lean.Data.Json
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
lean_object* l_Lean_JsonRpc_instToJsonMessage_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instToStringRequestID(lean_object*);
lean_object* l_Lean_JsonRpc_instInhabitedRequest(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_32__match__1(lean_object*);
lean_object* l_Lean_JsonRpc_instToJsonErrorCode___boxed(lean_object*);
lean_object* l_IO_FS_Stream_writeMessage___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instBEqResponseError(lean_object*);
uint8_t l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_32_(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instCoeStringRequestID(lean_object*);
lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___boxed(lean_object*);
lean_object* l_IO_FS_Stream_readRequestAs_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readRequestAs_match__1(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readMessage___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1175____rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_731__match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instCoeResponseErrorMessage(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instCoeNotificationMessage___rarg(lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_toString(lean_object*);
lean_object* l_Lean_JsonRpc_instInhabitedRequestID;
lean_object* l_Lean_Json_toStructured_x3f___rarg(lean_object*, lean_object*);
lean_object* l_List_append___rarg(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeNotification___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1175__match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readRequestAs_match__2(lean_object*);
lean_object* l_Lean_JsonRpc_instBEqResponseError___rarg(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_884__match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107__match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_731__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_32__match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instFromJsonErrorCode_match__1(lean_object*);
lean_object* l_IO_FS_Stream_writeResponse___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readResponseAs_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1022__match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instFromJsonNotification___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readMessage(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instInhabitedResponse___rarg(lean_object*);
lean_object* l_Lean_JsonRpc_instToJsonMessage(lean_object*);
lean_object* l_Lean_JsonRpc_instFromJsonNotification___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instFromJsonNotification_match__1(lean_object*);
lean_object* l_Lean_JsonRpc_instFromJsonNotification___rarg(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1175__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readMessage_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1022_(lean_object*);
lean_object* l_Lean_JsonRpc_instToStringRequestID_match__1(lean_object*);
lean_object* l_Lean_JsonRpc_instBEqRequestID;
lean_object* l_Lean_JsonRpc_instBEqErrorCode;
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1022__match__1(lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_263__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__2___boxed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readRequestAs_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instFromJsonErrorCode_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instInhabitedNotification___rarg(lean_object*);
uint8_t l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_263_(uint8_t, uint8_t);
lean_object* l_Lean_JsonRpc_instBEqResponse___rarg(lean_object*);
lean_object* l_IO_FS_Stream_readResponseAs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instCoeResponseMessage___rarg(lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instDecidableLt___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_263__match__1(lean_object*);
lean_object* l_Lean_JsonRpc_instInhabitedResponse(lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__3___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_731____rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instFromJsonMessage___boxed(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1022__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_884__match__1(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__3(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeMessage(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readJson(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instLTRequestID;
uint8_t l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107_(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__4(lean_object*, lean_object*);
lean_object* l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeResponseErrorWithData___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__4___boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readNotificationAs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_263__match__1___rarg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instFromJsonMessage_match__1(lean_object*);
lean_object* l_IO_FS_Stream_readResponseAs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Json_Basic_0__Lean_decEqJsonNumber____x40_Lean_Data_Json_Basic___hyg_22_(lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instBEqNotification___rarg(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_884____rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instToJsonRequestID(lean_object*);
lean_object* l_Lean_JsonRpc_instFromJsonMessage_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readNotificationAs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_731_(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1022____rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readMessage_match__1(lean_object*);
lean_object* l_Lean_JsonRpc_instToJsonErrorCode_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instCoeNotificationMessage(lean_object*);
lean_object* l_IO_FS_Stream_readResponseAs_match__1(lean_object*);
lean_object* lean_int_neg_succ_of_nat(lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_ltProp;
lean_object* l_Lean_JsonRpc_instCoeRequestMessage___rarg(lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instCoeJsonNumberRequestID(lean_object*);
lean_object* l_Lean_JsonRpc_instToJsonMessage_match__1(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107____boxed(lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instFromJsonRequestID_match__1(lean_object*);
lean_object* l_IO_FS_Stream_writeResponseError(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instCoeResponseMessage(lean_object*);
lean_object* l_Lean_JsonRpc_instToStringRequestID_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instBEqResponse(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_263____boxed(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt_match__1(lean_object*);
lean_object* l_Lean_JsonRpc_instCoeRequestMessage(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t l_Lean_JsonNumber_lt(lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instInhabitedRequest___rarg(lean_object*);
lean_object* l_Lean_JsonRpc_instFromJsonNotification(lean_object*);
lean_object* l_Lean_JsonRpc_instFromJsonMessage(lean_object*);
lean_object* l_IO_FS_Stream_writeNotification(lean_object*);
lean_object* l_Lean_JsonRpc_ResponseError_data_x3f___default(lean_object*);
lean_object* l_IO_FS_Stream_writeResponseErrorWithData(lean_object*);
lean_object* l_Lean_JsonRpc_instFromJsonErrorCode(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_731__match__1(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1175__match__1(lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instCoeResponseErrorMessage___rarg(lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instBEqNotification(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1175_(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instInhabitedResponseError(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_884_(lean_object*);
lean_object* l_Lean_JsonRpc_instFromJsonRequestID_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instToJsonMessage___boxed(lean_object*);
lean_object* l_Lean_JsonRpc_instOrdRequestID;
uint8_t l_Lean_JsonRpc_instInhabitedErrorCode;
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107__match__2(lean_object*);
lean_object* l_IO_FS_Stream_writeRequest(lean_object*);
lean_object* l_IO_FS_Stream_writeJson(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instBEqRequest___rarg(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_32____boxed(lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instBEqRequest(lean_object*);
uint8_t l_Lean_JsonRpc_instDecidableLt(lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instFromJsonRequestID___boxed(lean_object*);
lean_object* l_Lean_JsonRpc_instToJsonRequestID___boxed(lean_object*);
lean_object* l_IO_FS_Stream_writeResponse(lean_object*);
lean_object* l_IO_FS_Stream_writeResponseError___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_884__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instFromJsonNotification_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjVal_x3f(lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instToJsonErrorCode(uint8_t);
lean_object* l_Lean_JsonRpc_instFromJsonRequestID(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt___boxed(lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instToJsonErrorCode_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_IO_FS_Stream_readRequestAs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_writeRequest___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instToJsonErrorCode_match__1(lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_JsonRpc_instInhabitedNotification(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107__match__1(lean_object*);
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107__match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_readRequestAs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_JsonRpc_instInhabitedRequestID() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_mk_string("");
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_32__match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_3);
x_10 = lean_apply_2(x_6, x_1, x_2);
return x_10;
}
}
case 1:
{
lean_dec(x_5);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_apply_2(x_4, x_11, x_12);
return x_13;
}
else
{
lean_object* x_14; 
lean_dec(x_4);
x_14 = lean_apply_2(x_6, x_1, x_2);
return x_14;
}
}
default: 
{
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 2)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_6);
x_15 = lean_box(0);
x_16 = lean_apply_1(x_5, x_15);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_5);
x_17 = lean_apply_2(x_6, x_1, x_2);
return x_17;
}
}
}
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_32__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_32__match__1___rarg), 6, 0);
return x_2;
}
}
uint8_t l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_32_(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_string_dec_eq(x_3, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
case 1:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_2, 0);
x_9 = l___private_Lean_Data_Json_Basic_0__Lean_decEqJsonNumber____x40_Lean_Data_Json_Basic___hyg_22_(x_7, x_8);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
default: 
{
if (lean_obj_tag(x_2) == 2)
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
else
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
}
}
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_32____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_32_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_JsonRpc_instBEqRequestID() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_32____boxed), 2, 0);
return x_1;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107__match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_dec(x_3);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_4, x_7);
return x_8;
}
default: 
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
}
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107__match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107__match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107__match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_4);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_apply_2(x_3, x_10, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_2(x_4, x_13, x_2);
return x_14;
}
}
case 1:
{
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_7);
lean_dec(x_6);
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
lean_dec(x_2);
x_16 = lean_apply_2(x_5, x_1, x_15);
return x_16;
}
case 1:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
lean_dec(x_5);
x_17 = lean_ctor_get(x_1, 0);
lean_inc(x_17);
lean_dec(x_1);
x_18 = lean_ctor_get(x_2, 0);
lean_inc(x_18);
lean_dec(x_2);
x_19 = lean_apply_2(x_6, x_17, x_18);
return x_19;
}
default: 
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_6);
lean_dec(x_5);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_apply_2(x_7, x_20, x_2);
return x_21;
}
}
}
default: 
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_9);
lean_dec(x_8);
x_22 = lean_ctor_get(x_2, 0);
lean_inc(x_22);
lean_dec(x_2);
x_23 = lean_apply_2(x_5, x_1, x_22);
return x_23;
}
case 1:
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_9);
lean_dec(x_5);
x_24 = lean_ctor_get(x_2, 0);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_apply_2(x_8, x_1, x_24);
return x_25;
}
default: 
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_8);
lean_dec(x_5);
x_26 = lean_box(0);
x_27 = lean_apply_1(x_9, x_26);
return x_27;
}
}
}
}
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107__match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107__match__2___rarg), 9, 0);
return x_2;
}
}
uint8_t l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107_(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_string_dec_lt(x_3, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = lean_string_dec_eq(x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = 2;
return x_7;
}
else
{
uint8_t x_8; 
x_8 = 1;
return x_8;
}
}
else
{
uint8_t x_9; 
lean_dec(x_4);
lean_dec(x_3);
x_9 = 0;
return x_9;
}
}
else
{
uint8_t x_10; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = 0;
return x_10;
}
}
case 1:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
uint8_t x_11; 
lean_dec(x_2);
lean_dec(x_1);
x_11 = 2;
return x_11;
}
case 1:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
lean_inc(x_13);
lean_inc(x_12);
x_14 = l_Lean_JsonNumber_lt(x_12, x_13);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = l_Lean_JsonNumber_lt(x_13, x_12);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = 1;
return x_16;
}
else
{
uint8_t x_17; 
x_17 = 2;
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_13);
lean_dec(x_12);
x_18 = 0;
return x_18;
}
}
default: 
{
uint8_t x_19; 
lean_dec(x_1);
x_19 = 0;
return x_19;
}
}
}
default: 
{
if (lean_obj_tag(x_2) == 2)
{
uint8_t x_20; 
x_20 = 1;
return x_20;
}
else
{
uint8_t x_21; 
lean_dec(x_2);
x_21 = 2;
return x_21;
}
}
}
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107_(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_JsonRpc_instOrdRequestID() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_ordRequestID____x40_Lean_Data_JsonRpc___hyg_107____boxed), 2, 0);
return x_1;
}
}
lean_object* l_Lean_JsonRpc_instToStringRequestID_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
case 1:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
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
lean_object* l_Lean_JsonRpc_instToStringRequestID_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instToStringRequestID_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instToStringRequestID(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
lean_dec(x_1);
x_2 = lean_mk_string("\"s\"");
return x_2;
}
case 1:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_Lean_JsonNumber_toString(x_3);
return x_4;
}
default: 
{
lean_object* x_5; 
x_5 = lean_mk_string("null");
return x_5;
}
}
}
}
static uint8_t _init_l_Lean_JsonRpc_instInhabitedErrorCode() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_263__match__1___rarg(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_15; 
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
x_15 = lean_box(x_2);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_14);
x_16 = lean_box(0);
x_17 = lean_apply_1(x_3, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec(x_15);
lean_dec(x_3);
x_18 = lean_box(x_1);
x_19 = lean_box(x_2);
x_20 = lean_apply_2(x_14, x_18, x_19);
return x_20;
}
}
case 1:
{
lean_object* x_21; 
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
x_21 = lean_box(x_2);
if (lean_obj_tag(x_21) == 1)
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_14);
x_22 = lean_box(0);
x_23 = lean_apply_1(x_4, x_22);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_21);
lean_dec(x_4);
x_24 = lean_box(x_1);
x_25 = lean_box(x_2);
x_26 = lean_apply_2(x_14, x_24, x_25);
return x_26;
}
}
case 2:
{
lean_object* x_27; 
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
x_27 = lean_box(x_2);
if (lean_obj_tag(x_27) == 2)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_14);
x_28 = lean_box(0);
x_29 = lean_apply_1(x_5, x_28);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_27);
lean_dec(x_5);
x_30 = lean_box(x_1);
x_31 = lean_box(x_2);
x_32 = lean_apply_2(x_14, x_30, x_31);
return x_32;
}
}
case 3:
{
lean_object* x_33; 
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
x_33 = lean_box(x_2);
if (lean_obj_tag(x_33) == 3)
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_14);
x_34 = lean_box(0);
x_35 = lean_apply_1(x_6, x_34);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_33);
lean_dec(x_6);
x_36 = lean_box(x_1);
x_37 = lean_box(x_2);
x_38 = lean_apply_2(x_14, x_36, x_37);
return x_38;
}
}
case 4:
{
lean_object* x_39; 
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
x_39 = lean_box(x_2);
if (lean_obj_tag(x_39) == 4)
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_14);
x_40 = lean_box(0);
x_41 = lean_apply_1(x_7, x_40);
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_39);
lean_dec(x_7);
x_42 = lean_box(x_1);
x_43 = lean_box(x_2);
x_44 = lean_apply_2(x_14, x_42, x_43);
return x_44;
}
}
case 5:
{
lean_object* x_45; 
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
x_45 = lean_box(x_2);
if (lean_obj_tag(x_45) == 5)
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_14);
x_46 = lean_box(0);
x_47 = lean_apply_1(x_8, x_46);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_45);
lean_dec(x_8);
x_48 = lean_box(x_1);
x_49 = lean_box(x_2);
x_50 = lean_apply_2(x_14, x_48, x_49);
return x_50;
}
}
case 6:
{
lean_object* x_51; 
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
x_51 = lean_box(x_2);
if (lean_obj_tag(x_51) == 6)
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_14);
x_52 = lean_box(0);
x_53 = lean_apply_1(x_9, x_52);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_51);
lean_dec(x_9);
x_54 = lean_box(x_1);
x_55 = lean_box(x_2);
x_56 = lean_apply_2(x_14, x_54, x_55);
return x_56;
}
}
case 7:
{
lean_object* x_57; 
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
x_57 = lean_box(x_2);
if (lean_obj_tag(x_57) == 7)
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_14);
x_58 = lean_box(0);
x_59 = lean_apply_1(x_10, x_58);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
lean_dec(x_57);
lean_dec(x_10);
x_60 = lean_box(x_1);
x_61 = lean_box(x_2);
x_62 = lean_apply_2(x_14, x_60, x_61);
return x_62;
}
}
case 8:
{
lean_object* x_63; 
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
x_63 = lean_box(x_2);
if (lean_obj_tag(x_63) == 8)
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_14);
x_64 = lean_box(0);
x_65 = lean_apply_1(x_11, x_64);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_63);
lean_dec(x_11);
x_66 = lean_box(x_1);
x_67 = lean_box(x_2);
x_68 = lean_apply_2(x_14, x_66, x_67);
return x_68;
}
}
case 9:
{
lean_object* x_69; 
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
x_69 = lean_box(x_2);
if (lean_obj_tag(x_69) == 9)
{
lean_object* x_70; lean_object* x_71; 
lean_dec(x_14);
x_70 = lean_box(0);
x_71 = lean_apply_1(x_12, x_70);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_69);
lean_dec(x_12);
x_72 = lean_box(x_1);
x_73 = lean_box(x_2);
x_74 = lean_apply_2(x_14, x_72, x_73);
return x_74;
}
}
default: 
{
lean_object* x_75; 
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
x_75 = lean_box(x_2);
if (lean_obj_tag(x_75) == 10)
{
lean_object* x_76; lean_object* x_77; 
lean_dec(x_14);
x_76 = lean_box(0);
x_77 = lean_apply_1(x_13, x_76);
return x_77;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_75);
lean_dec(x_13);
x_78 = lean_box(x_1);
x_79 = lean_box(x_2);
x_80 = lean_apply_2(x_14, x_78, x_79);
return x_80;
}
}
}
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_263__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_263__match__1___rarg___boxed), 14, 0);
return x_2;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_263__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; uint8_t x_16; lean_object* x_17; 
x_15 = lean_unbox(x_1);
lean_dec(x_1);
x_16 = lean_unbox(x_2);
lean_dec(x_2);
x_17 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_263__match__1___rarg(x_15, x_16, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
return x_17;
}
}
uint8_t l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_263_(uint8_t x_1, uint8_t x_2) {
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
case 3:
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
case 4:
{
lean_object* x_15; 
x_15 = lean_box(x_2);
if (lean_obj_tag(x_15) == 4)
{
uint8_t x_16; 
x_16 = 1;
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_15);
x_17 = 0;
return x_17;
}
}
case 5:
{
lean_object* x_18; 
x_18 = lean_box(x_2);
if (lean_obj_tag(x_18) == 5)
{
uint8_t x_19; 
x_19 = 1;
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_18);
x_20 = 0;
return x_20;
}
}
case 6:
{
lean_object* x_21; 
x_21 = lean_box(x_2);
if (lean_obj_tag(x_21) == 6)
{
uint8_t x_22; 
x_22 = 1;
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_21);
x_23 = 0;
return x_23;
}
}
case 7:
{
lean_object* x_24; 
x_24 = lean_box(x_2);
if (lean_obj_tag(x_24) == 7)
{
uint8_t x_25; 
x_25 = 1;
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_24);
x_26 = 0;
return x_26;
}
}
case 8:
{
lean_object* x_27; 
x_27 = lean_box(x_2);
if (lean_obj_tag(x_27) == 8)
{
uint8_t x_28; 
x_28 = 1;
return x_28;
}
else
{
uint8_t x_29; 
lean_dec(x_27);
x_29 = 0;
return x_29;
}
}
case 9:
{
lean_object* x_30; 
x_30 = lean_box(x_2);
if (lean_obj_tag(x_30) == 9)
{
uint8_t x_31; 
x_31 = 1;
return x_31;
}
else
{
uint8_t x_32; 
lean_dec(x_30);
x_32 = 0;
return x_32;
}
}
default: 
{
lean_object* x_33; 
x_33 = lean_box(x_2);
if (lean_obj_tag(x_33) == 10)
{
uint8_t x_34; 
x_34 = 1;
return x_34;
}
else
{
uint8_t x_35; 
lean_dec(x_33);
x_35 = 0;
return x_35;
}
}
}
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_263____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_263_(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_JsonRpc_instBEqErrorCode() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_263____boxed), 2, 0);
return x_1;
}
}
lean_object* l_Lean_JsonRpc_instFromJsonErrorCode_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_ctor_get(x_14, 0);
x_17 = lean_ctor_get(x_14, 1);
x_18 = lean_unsigned_to_nat(0u);
x_19 = lean_nat_to_int(x_18);
x_20 = lean_int_dec_lt(x_16, x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_16);
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
x_21 = lean_apply_1(x_13, x_1);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_22 = lean_nat_abs(x_16);
lean_dec(x_16);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_sub(x_22, x_23);
lean_dec(x_22);
x_25 = lean_unsigned_to_nat(32699u);
x_26 = lean_nat_dec_eq(x_24, x_25);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; 
lean_dec(x_2);
x_27 = lean_unsigned_to_nat(32599u);
x_28 = lean_nat_dec_eq(x_24, x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
lean_dec(x_3);
x_29 = lean_unsigned_to_nat(32600u);
x_30 = lean_nat_dec_eq(x_24, x_29);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
lean_dec(x_4);
x_31 = lean_unsigned_to_nat(32601u);
x_32 = lean_nat_dec_eq(x_24, x_31);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; 
lean_dec(x_5);
x_33 = lean_unsigned_to_nat(32602u);
x_34 = lean_nat_dec_eq(x_24, x_33);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
lean_dec(x_6);
x_35 = lean_unsigned_to_nat(32098u);
x_36 = lean_nat_dec_eq(x_24, x_35);
if (x_36 == 0)
{
lean_object* x_37; uint8_t x_38; 
lean_dec(x_7);
x_37 = lean_unsigned_to_nat(31999u);
x_38 = lean_nat_dec_eq(x_24, x_37);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; 
lean_dec(x_8);
x_39 = lean_unsigned_to_nat(32001u);
x_40 = lean_nat_dec_eq(x_24, x_39);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; 
lean_dec(x_9);
x_41 = lean_unsigned_to_nat(32000u);
x_42 = lean_nat_dec_eq(x_24, x_41);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
lean_dec(x_10);
x_43 = lean_unsigned_to_nat(32799u);
x_44 = lean_nat_dec_eq(x_24, x_43);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
lean_dec(x_11);
x_45 = lean_unsigned_to_nat(32800u);
x_46 = lean_nat_dec_eq(x_24, x_45);
lean_dec(x_24);
if (x_46 == 0)
{
lean_object* x_47; 
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_12);
x_47 = lean_apply_1(x_13, x_1);
return x_47;
}
else
{
uint8_t x_48; 
x_48 = !lean_is_exclusive(x_1);
if (x_48 == 0)
{
lean_object* x_49; uint8_t x_50; 
x_49 = lean_ctor_get(x_1, 0);
lean_dec(x_49);
x_50 = lean_nat_dec_eq(x_17, x_18);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_12);
x_51 = lean_int_neg_succ_of_nat(x_45);
lean_ctor_set(x_14, 0, x_51);
x_52 = lean_apply_1(x_13, x_1);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; 
lean_free_object(x_1);
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_53 = lean_box(0);
x_54 = lean_apply_1(x_12, x_53);
return x_54;
}
}
else
{
uint8_t x_55; 
lean_dec(x_1);
x_55 = lean_nat_dec_eq(x_17, x_18);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_12);
x_56 = lean_int_neg_succ_of_nat(x_45);
lean_ctor_set(x_14, 0, x_56);
x_57 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_57, 0, x_14);
x_58 = lean_apply_1(x_13, x_57);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; 
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_59 = lean_box(0);
x_60 = lean_apply_1(x_12, x_59);
return x_60;
}
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_24);
lean_dec(x_12);
x_61 = !lean_is_exclusive(x_1);
if (x_61 == 0)
{
lean_object* x_62; uint8_t x_63; 
x_62 = lean_ctor_get(x_1, 0);
lean_dec(x_62);
x_63 = lean_nat_dec_eq(x_17, x_18);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_11);
x_64 = lean_int_neg_succ_of_nat(x_43);
lean_ctor_set(x_14, 0, x_64);
x_65 = lean_apply_1(x_13, x_1);
return x_65;
}
else
{
lean_object* x_66; lean_object* x_67; 
lean_free_object(x_1);
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_66 = lean_box(0);
x_67 = lean_apply_1(x_11, x_66);
return x_67;
}
}
else
{
uint8_t x_68; 
lean_dec(x_1);
x_68 = lean_nat_dec_eq(x_17, x_18);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_11);
x_69 = lean_int_neg_succ_of_nat(x_43);
lean_ctor_set(x_14, 0, x_69);
x_70 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_70, 0, x_14);
x_71 = lean_apply_1(x_13, x_70);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; 
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_72 = lean_box(0);
x_73 = lean_apply_1(x_11, x_72);
return x_73;
}
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_11);
x_74 = !lean_is_exclusive(x_1);
if (x_74 == 0)
{
lean_object* x_75; uint8_t x_76; 
x_75 = lean_ctor_get(x_1, 0);
lean_dec(x_75);
x_76 = lean_nat_dec_eq(x_17, x_18);
if (x_76 == 0)
{
lean_object* x_77; lean_object* x_78; 
lean_dec(x_10);
x_77 = lean_int_neg_succ_of_nat(x_41);
lean_ctor_set(x_14, 0, x_77);
x_78 = lean_apply_1(x_13, x_1);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; 
lean_free_object(x_1);
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_79 = lean_box(0);
x_80 = lean_apply_1(x_10, x_79);
return x_80;
}
}
else
{
uint8_t x_81; 
lean_dec(x_1);
x_81 = lean_nat_dec_eq(x_17, x_18);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_10);
x_82 = lean_int_neg_succ_of_nat(x_41);
lean_ctor_set(x_14, 0, x_82);
x_83 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_83, 0, x_14);
x_84 = lean_apply_1(x_13, x_83);
return x_84;
}
else
{
lean_object* x_85; lean_object* x_86; 
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_85 = lean_box(0);
x_86 = lean_apply_1(x_10, x_85);
return x_86;
}
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
x_87 = !lean_is_exclusive(x_1);
if (x_87 == 0)
{
lean_object* x_88; uint8_t x_89; 
x_88 = lean_ctor_get(x_1, 0);
lean_dec(x_88);
x_89 = lean_nat_dec_eq(x_17, x_18);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; 
lean_dec(x_9);
x_90 = lean_int_neg_succ_of_nat(x_39);
lean_ctor_set(x_14, 0, x_90);
x_91 = lean_apply_1(x_13, x_1);
return x_91;
}
else
{
lean_object* x_92; lean_object* x_93; 
lean_free_object(x_1);
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_92 = lean_box(0);
x_93 = lean_apply_1(x_9, x_92);
return x_93;
}
}
else
{
uint8_t x_94; 
lean_dec(x_1);
x_94 = lean_nat_dec_eq(x_17, x_18);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
lean_dec(x_9);
x_95 = lean_int_neg_succ_of_nat(x_39);
lean_ctor_set(x_14, 0, x_95);
x_96 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_96, 0, x_14);
x_97 = lean_apply_1(x_13, x_96);
return x_97;
}
else
{
lean_object* x_98; lean_object* x_99; 
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_98 = lean_box(0);
x_99 = lean_apply_1(x_9, x_98);
return x_99;
}
}
}
}
else
{
uint8_t x_100; 
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
x_100 = !lean_is_exclusive(x_1);
if (x_100 == 0)
{
lean_object* x_101; uint8_t x_102; 
x_101 = lean_ctor_get(x_1, 0);
lean_dec(x_101);
x_102 = lean_nat_dec_eq(x_17, x_18);
if (x_102 == 0)
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_8);
x_103 = lean_int_neg_succ_of_nat(x_37);
lean_ctor_set(x_14, 0, x_103);
x_104 = lean_apply_1(x_13, x_1);
return x_104;
}
else
{
lean_object* x_105; lean_object* x_106; 
lean_free_object(x_1);
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_105 = lean_box(0);
x_106 = lean_apply_1(x_8, x_105);
return x_106;
}
}
else
{
uint8_t x_107; 
lean_dec(x_1);
x_107 = lean_nat_dec_eq(x_17, x_18);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_dec(x_8);
x_108 = lean_int_neg_succ_of_nat(x_37);
lean_ctor_set(x_14, 0, x_108);
x_109 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_109, 0, x_14);
x_110 = lean_apply_1(x_13, x_109);
return x_110;
}
else
{
lean_object* x_111; lean_object* x_112; 
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_111 = lean_box(0);
x_112 = lean_apply_1(x_8, x_111);
return x_112;
}
}
}
}
else
{
uint8_t x_113; 
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_113 = !lean_is_exclusive(x_1);
if (x_113 == 0)
{
lean_object* x_114; uint8_t x_115; 
x_114 = lean_ctor_get(x_1, 0);
lean_dec(x_114);
x_115 = lean_nat_dec_eq(x_17, x_18);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; 
lean_dec(x_7);
x_116 = lean_int_neg_succ_of_nat(x_35);
lean_ctor_set(x_14, 0, x_116);
x_117 = lean_apply_1(x_13, x_1);
return x_117;
}
else
{
lean_object* x_118; lean_object* x_119; 
lean_free_object(x_1);
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_118 = lean_box(0);
x_119 = lean_apply_1(x_7, x_118);
return x_119;
}
}
else
{
uint8_t x_120; 
lean_dec(x_1);
x_120 = lean_nat_dec_eq(x_17, x_18);
if (x_120 == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_7);
x_121 = lean_int_neg_succ_of_nat(x_35);
lean_ctor_set(x_14, 0, x_121);
x_122 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_122, 0, x_14);
x_123 = lean_apply_1(x_13, x_122);
return x_123;
}
else
{
lean_object* x_124; lean_object* x_125; 
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_124 = lean_box(0);
x_125 = lean_apply_1(x_7, x_124);
return x_125;
}
}
}
}
else
{
uint8_t x_126; 
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_126 = !lean_is_exclusive(x_1);
if (x_126 == 0)
{
lean_object* x_127; uint8_t x_128; 
x_127 = lean_ctor_get(x_1, 0);
lean_dec(x_127);
x_128 = lean_nat_dec_eq(x_17, x_18);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; 
lean_dec(x_6);
x_129 = lean_int_neg_succ_of_nat(x_33);
lean_ctor_set(x_14, 0, x_129);
x_130 = lean_apply_1(x_13, x_1);
return x_130;
}
else
{
lean_object* x_131; lean_object* x_132; 
lean_free_object(x_1);
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_131 = lean_box(0);
x_132 = lean_apply_1(x_6, x_131);
return x_132;
}
}
else
{
uint8_t x_133; 
lean_dec(x_1);
x_133 = lean_nat_dec_eq(x_17, x_18);
if (x_133 == 0)
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
lean_dec(x_6);
x_134 = lean_int_neg_succ_of_nat(x_33);
lean_ctor_set(x_14, 0, x_134);
x_135 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_135, 0, x_14);
x_136 = lean_apply_1(x_13, x_135);
return x_136;
}
else
{
lean_object* x_137; lean_object* x_138; 
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_137 = lean_box(0);
x_138 = lean_apply_1(x_6, x_137);
return x_138;
}
}
}
}
else
{
uint8_t x_139; 
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_139 = !lean_is_exclusive(x_1);
if (x_139 == 0)
{
lean_object* x_140; uint8_t x_141; 
x_140 = lean_ctor_get(x_1, 0);
lean_dec(x_140);
x_141 = lean_nat_dec_eq(x_17, x_18);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; 
lean_dec(x_5);
x_142 = lean_int_neg_succ_of_nat(x_31);
lean_ctor_set(x_14, 0, x_142);
x_143 = lean_apply_1(x_13, x_1);
return x_143;
}
else
{
lean_object* x_144; lean_object* x_145; 
lean_free_object(x_1);
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_144 = lean_box(0);
x_145 = lean_apply_1(x_5, x_144);
return x_145;
}
}
else
{
uint8_t x_146; 
lean_dec(x_1);
x_146 = lean_nat_dec_eq(x_17, x_18);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_dec(x_5);
x_147 = lean_int_neg_succ_of_nat(x_31);
lean_ctor_set(x_14, 0, x_147);
x_148 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_148, 0, x_14);
x_149 = lean_apply_1(x_13, x_148);
return x_149;
}
else
{
lean_object* x_150; lean_object* x_151; 
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_150 = lean_box(0);
x_151 = lean_apply_1(x_5, x_150);
return x_151;
}
}
}
}
else
{
uint8_t x_152; 
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_152 = !lean_is_exclusive(x_1);
if (x_152 == 0)
{
lean_object* x_153; uint8_t x_154; 
x_153 = lean_ctor_get(x_1, 0);
lean_dec(x_153);
x_154 = lean_nat_dec_eq(x_17, x_18);
if (x_154 == 0)
{
lean_object* x_155; lean_object* x_156; 
lean_dec(x_4);
x_155 = lean_int_neg_succ_of_nat(x_29);
lean_ctor_set(x_14, 0, x_155);
x_156 = lean_apply_1(x_13, x_1);
return x_156;
}
else
{
lean_object* x_157; lean_object* x_158; 
lean_free_object(x_1);
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_157 = lean_box(0);
x_158 = lean_apply_1(x_4, x_157);
return x_158;
}
}
else
{
uint8_t x_159; 
lean_dec(x_1);
x_159 = lean_nat_dec_eq(x_17, x_18);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
lean_dec(x_4);
x_160 = lean_int_neg_succ_of_nat(x_29);
lean_ctor_set(x_14, 0, x_160);
x_161 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_161, 0, x_14);
x_162 = lean_apply_1(x_13, x_161);
return x_162;
}
else
{
lean_object* x_163; lean_object* x_164; 
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_163 = lean_box(0);
x_164 = lean_apply_1(x_4, x_163);
return x_164;
}
}
}
}
else
{
uint8_t x_165; 
lean_dec(x_24);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_165 = !lean_is_exclusive(x_1);
if (x_165 == 0)
{
lean_object* x_166; uint8_t x_167; 
x_166 = lean_ctor_get(x_1, 0);
lean_dec(x_166);
x_167 = lean_nat_dec_eq(x_17, x_18);
if (x_167 == 0)
{
lean_object* x_168; lean_object* x_169; 
lean_dec(x_3);
x_168 = lean_int_neg_succ_of_nat(x_27);
lean_ctor_set(x_14, 0, x_168);
x_169 = lean_apply_1(x_13, x_1);
return x_169;
}
else
{
lean_object* x_170; lean_object* x_171; 
lean_free_object(x_1);
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_170 = lean_box(0);
x_171 = lean_apply_1(x_3, x_170);
return x_171;
}
}
else
{
uint8_t x_172; 
lean_dec(x_1);
x_172 = lean_nat_dec_eq(x_17, x_18);
if (x_172 == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_3);
x_173 = lean_int_neg_succ_of_nat(x_27);
lean_ctor_set(x_14, 0, x_173);
x_174 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_174, 0, x_14);
x_175 = lean_apply_1(x_13, x_174);
return x_175;
}
else
{
lean_object* x_176; lean_object* x_177; 
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_176 = lean_box(0);
x_177 = lean_apply_1(x_3, x_176);
return x_177;
}
}
}
}
else
{
uint8_t x_178; 
lean_dec(x_24);
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
x_178 = !lean_is_exclusive(x_1);
if (x_178 == 0)
{
lean_object* x_179; uint8_t x_180; 
x_179 = lean_ctor_get(x_1, 0);
lean_dec(x_179);
x_180 = lean_nat_dec_eq(x_17, x_18);
if (x_180 == 0)
{
lean_object* x_181; lean_object* x_182; 
lean_dec(x_2);
x_181 = lean_int_neg_succ_of_nat(x_25);
lean_ctor_set(x_14, 0, x_181);
x_182 = lean_apply_1(x_13, x_1);
return x_182;
}
else
{
lean_object* x_183; lean_object* x_184; 
lean_free_object(x_1);
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_183 = lean_box(0);
x_184 = lean_apply_1(x_2, x_183);
return x_184;
}
}
else
{
uint8_t x_185; 
lean_dec(x_1);
x_185 = lean_nat_dec_eq(x_17, x_18);
if (x_185 == 0)
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; 
lean_dec(x_2);
x_186 = lean_int_neg_succ_of_nat(x_25);
lean_ctor_set(x_14, 0, x_186);
x_187 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_187, 0, x_14);
x_188 = lean_apply_1(x_13, x_187);
return x_188;
}
else
{
lean_object* x_189; lean_object* x_190; 
lean_free_object(x_14);
lean_dec(x_17);
lean_dec(x_13);
x_189 = lean_box(0);
x_190 = lean_apply_1(x_2, x_189);
return x_190;
}
}
}
}
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; uint8_t x_195; 
x_191 = lean_ctor_get(x_14, 0);
x_192 = lean_ctor_get(x_14, 1);
lean_inc(x_192);
lean_inc(x_191);
lean_dec(x_14);
x_193 = lean_unsigned_to_nat(0u);
x_194 = lean_nat_to_int(x_193);
x_195 = lean_int_dec_lt(x_191, x_194);
lean_dec(x_194);
if (x_195 == 0)
{
lean_object* x_196; 
lean_dec(x_192);
lean_dec(x_191);
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
x_196 = lean_apply_1(x_13, x_1);
return x_196;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; uint8_t x_201; 
x_197 = lean_nat_abs(x_191);
lean_dec(x_191);
x_198 = lean_unsigned_to_nat(1u);
x_199 = lean_nat_sub(x_197, x_198);
lean_dec(x_197);
x_200 = lean_unsigned_to_nat(32699u);
x_201 = lean_nat_dec_eq(x_199, x_200);
if (x_201 == 0)
{
lean_object* x_202; uint8_t x_203; 
lean_dec(x_2);
x_202 = lean_unsigned_to_nat(32599u);
x_203 = lean_nat_dec_eq(x_199, x_202);
if (x_203 == 0)
{
lean_object* x_204; uint8_t x_205; 
lean_dec(x_3);
x_204 = lean_unsigned_to_nat(32600u);
x_205 = lean_nat_dec_eq(x_199, x_204);
if (x_205 == 0)
{
lean_object* x_206; uint8_t x_207; 
lean_dec(x_4);
x_206 = lean_unsigned_to_nat(32601u);
x_207 = lean_nat_dec_eq(x_199, x_206);
if (x_207 == 0)
{
lean_object* x_208; uint8_t x_209; 
lean_dec(x_5);
x_208 = lean_unsigned_to_nat(32602u);
x_209 = lean_nat_dec_eq(x_199, x_208);
if (x_209 == 0)
{
lean_object* x_210; uint8_t x_211; 
lean_dec(x_6);
x_210 = lean_unsigned_to_nat(32098u);
x_211 = lean_nat_dec_eq(x_199, x_210);
if (x_211 == 0)
{
lean_object* x_212; uint8_t x_213; 
lean_dec(x_7);
x_212 = lean_unsigned_to_nat(31999u);
x_213 = lean_nat_dec_eq(x_199, x_212);
if (x_213 == 0)
{
lean_object* x_214; uint8_t x_215; 
lean_dec(x_8);
x_214 = lean_unsigned_to_nat(32001u);
x_215 = lean_nat_dec_eq(x_199, x_214);
if (x_215 == 0)
{
lean_object* x_216; uint8_t x_217; 
lean_dec(x_9);
x_216 = lean_unsigned_to_nat(32000u);
x_217 = lean_nat_dec_eq(x_199, x_216);
if (x_217 == 0)
{
lean_object* x_218; uint8_t x_219; 
lean_dec(x_10);
x_218 = lean_unsigned_to_nat(32799u);
x_219 = lean_nat_dec_eq(x_199, x_218);
if (x_219 == 0)
{
lean_object* x_220; uint8_t x_221; 
lean_dec(x_11);
x_220 = lean_unsigned_to_nat(32800u);
x_221 = lean_nat_dec_eq(x_199, x_220);
lean_dec(x_199);
if (x_221 == 0)
{
lean_object* x_222; 
lean_dec(x_192);
lean_dec(x_12);
x_222 = lean_apply_1(x_13, x_1);
return x_222;
}
else
{
lean_object* x_223; uint8_t x_224; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_223 = x_1;
} else {
 lean_dec_ref(x_1);
 x_223 = lean_box(0);
}
x_224 = lean_nat_dec_eq(x_192, x_193);
if (x_224 == 0)
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; 
lean_dec(x_12);
x_225 = lean_int_neg_succ_of_nat(x_220);
x_226 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_226, 0, x_225);
lean_ctor_set(x_226, 1, x_192);
if (lean_is_scalar(x_223)) {
 x_227 = lean_alloc_ctor(2, 1, 0);
} else {
 x_227 = x_223;
}
lean_ctor_set(x_227, 0, x_226);
x_228 = lean_apply_1(x_13, x_227);
return x_228;
}
else
{
lean_object* x_229; lean_object* x_230; 
lean_dec(x_223);
lean_dec(x_192);
lean_dec(x_13);
x_229 = lean_box(0);
x_230 = lean_apply_1(x_12, x_229);
return x_230;
}
}
}
else
{
lean_object* x_231; uint8_t x_232; 
lean_dec(x_199);
lean_dec(x_12);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_231 = x_1;
} else {
 lean_dec_ref(x_1);
 x_231 = lean_box(0);
}
x_232 = lean_nat_dec_eq(x_192, x_193);
if (x_232 == 0)
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
lean_dec(x_11);
x_233 = lean_int_neg_succ_of_nat(x_218);
x_234 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_234, 0, x_233);
lean_ctor_set(x_234, 1, x_192);
if (lean_is_scalar(x_231)) {
 x_235 = lean_alloc_ctor(2, 1, 0);
} else {
 x_235 = x_231;
}
lean_ctor_set(x_235, 0, x_234);
x_236 = lean_apply_1(x_13, x_235);
return x_236;
}
else
{
lean_object* x_237; lean_object* x_238; 
lean_dec(x_231);
lean_dec(x_192);
lean_dec(x_13);
x_237 = lean_box(0);
x_238 = lean_apply_1(x_11, x_237);
return x_238;
}
}
}
else
{
lean_object* x_239; uint8_t x_240; 
lean_dec(x_199);
lean_dec(x_12);
lean_dec(x_11);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_239 = x_1;
} else {
 lean_dec_ref(x_1);
 x_239 = lean_box(0);
}
x_240 = lean_nat_dec_eq(x_192, x_193);
if (x_240 == 0)
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
lean_dec(x_10);
x_241 = lean_int_neg_succ_of_nat(x_216);
x_242 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_242, 0, x_241);
lean_ctor_set(x_242, 1, x_192);
if (lean_is_scalar(x_239)) {
 x_243 = lean_alloc_ctor(2, 1, 0);
} else {
 x_243 = x_239;
}
lean_ctor_set(x_243, 0, x_242);
x_244 = lean_apply_1(x_13, x_243);
return x_244;
}
else
{
lean_object* x_245; lean_object* x_246; 
lean_dec(x_239);
lean_dec(x_192);
lean_dec(x_13);
x_245 = lean_box(0);
x_246 = lean_apply_1(x_10, x_245);
return x_246;
}
}
}
else
{
lean_object* x_247; uint8_t x_248; 
lean_dec(x_199);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_247 = x_1;
} else {
 lean_dec_ref(x_1);
 x_247 = lean_box(0);
}
x_248 = lean_nat_dec_eq(x_192, x_193);
if (x_248 == 0)
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
lean_dec(x_9);
x_249 = lean_int_neg_succ_of_nat(x_214);
x_250 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_250, 0, x_249);
lean_ctor_set(x_250, 1, x_192);
if (lean_is_scalar(x_247)) {
 x_251 = lean_alloc_ctor(2, 1, 0);
} else {
 x_251 = x_247;
}
lean_ctor_set(x_251, 0, x_250);
x_252 = lean_apply_1(x_13, x_251);
return x_252;
}
else
{
lean_object* x_253; lean_object* x_254; 
lean_dec(x_247);
lean_dec(x_192);
lean_dec(x_13);
x_253 = lean_box(0);
x_254 = lean_apply_1(x_9, x_253);
return x_254;
}
}
}
else
{
lean_object* x_255; uint8_t x_256; 
lean_dec(x_199);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_255 = x_1;
} else {
 lean_dec_ref(x_1);
 x_255 = lean_box(0);
}
x_256 = lean_nat_dec_eq(x_192, x_193);
if (x_256 == 0)
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; 
lean_dec(x_8);
x_257 = lean_int_neg_succ_of_nat(x_212);
x_258 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_258, 0, x_257);
lean_ctor_set(x_258, 1, x_192);
if (lean_is_scalar(x_255)) {
 x_259 = lean_alloc_ctor(2, 1, 0);
} else {
 x_259 = x_255;
}
lean_ctor_set(x_259, 0, x_258);
x_260 = lean_apply_1(x_13, x_259);
return x_260;
}
else
{
lean_object* x_261; lean_object* x_262; 
lean_dec(x_255);
lean_dec(x_192);
lean_dec(x_13);
x_261 = lean_box(0);
x_262 = lean_apply_1(x_8, x_261);
return x_262;
}
}
}
else
{
lean_object* x_263; uint8_t x_264; 
lean_dec(x_199);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_263 = x_1;
} else {
 lean_dec_ref(x_1);
 x_263 = lean_box(0);
}
x_264 = lean_nat_dec_eq(x_192, x_193);
if (x_264 == 0)
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
lean_dec(x_7);
x_265 = lean_int_neg_succ_of_nat(x_210);
x_266 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_266, 0, x_265);
lean_ctor_set(x_266, 1, x_192);
if (lean_is_scalar(x_263)) {
 x_267 = lean_alloc_ctor(2, 1, 0);
} else {
 x_267 = x_263;
}
lean_ctor_set(x_267, 0, x_266);
x_268 = lean_apply_1(x_13, x_267);
return x_268;
}
else
{
lean_object* x_269; lean_object* x_270; 
lean_dec(x_263);
lean_dec(x_192);
lean_dec(x_13);
x_269 = lean_box(0);
x_270 = lean_apply_1(x_7, x_269);
return x_270;
}
}
}
else
{
lean_object* x_271; uint8_t x_272; 
lean_dec(x_199);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_271 = x_1;
} else {
 lean_dec_ref(x_1);
 x_271 = lean_box(0);
}
x_272 = lean_nat_dec_eq(x_192, x_193);
if (x_272 == 0)
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; 
lean_dec(x_6);
x_273 = lean_int_neg_succ_of_nat(x_208);
x_274 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_274, 0, x_273);
lean_ctor_set(x_274, 1, x_192);
if (lean_is_scalar(x_271)) {
 x_275 = lean_alloc_ctor(2, 1, 0);
} else {
 x_275 = x_271;
}
lean_ctor_set(x_275, 0, x_274);
x_276 = lean_apply_1(x_13, x_275);
return x_276;
}
else
{
lean_object* x_277; lean_object* x_278; 
lean_dec(x_271);
lean_dec(x_192);
lean_dec(x_13);
x_277 = lean_box(0);
x_278 = lean_apply_1(x_6, x_277);
return x_278;
}
}
}
else
{
lean_object* x_279; uint8_t x_280; 
lean_dec(x_199);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_279 = x_1;
} else {
 lean_dec_ref(x_1);
 x_279 = lean_box(0);
}
x_280 = lean_nat_dec_eq(x_192, x_193);
if (x_280 == 0)
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; 
lean_dec(x_5);
x_281 = lean_int_neg_succ_of_nat(x_206);
x_282 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_282, 0, x_281);
lean_ctor_set(x_282, 1, x_192);
if (lean_is_scalar(x_279)) {
 x_283 = lean_alloc_ctor(2, 1, 0);
} else {
 x_283 = x_279;
}
lean_ctor_set(x_283, 0, x_282);
x_284 = lean_apply_1(x_13, x_283);
return x_284;
}
else
{
lean_object* x_285; lean_object* x_286; 
lean_dec(x_279);
lean_dec(x_192);
lean_dec(x_13);
x_285 = lean_box(0);
x_286 = lean_apply_1(x_5, x_285);
return x_286;
}
}
}
else
{
lean_object* x_287; uint8_t x_288; 
lean_dec(x_199);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_287 = x_1;
} else {
 lean_dec_ref(x_1);
 x_287 = lean_box(0);
}
x_288 = lean_nat_dec_eq(x_192, x_193);
if (x_288 == 0)
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; 
lean_dec(x_4);
x_289 = lean_int_neg_succ_of_nat(x_204);
x_290 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_192);
if (lean_is_scalar(x_287)) {
 x_291 = lean_alloc_ctor(2, 1, 0);
} else {
 x_291 = x_287;
}
lean_ctor_set(x_291, 0, x_290);
x_292 = lean_apply_1(x_13, x_291);
return x_292;
}
else
{
lean_object* x_293; lean_object* x_294; 
lean_dec(x_287);
lean_dec(x_192);
lean_dec(x_13);
x_293 = lean_box(0);
x_294 = lean_apply_1(x_4, x_293);
return x_294;
}
}
}
else
{
lean_object* x_295; uint8_t x_296; 
lean_dec(x_199);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_295 = x_1;
} else {
 lean_dec_ref(x_1);
 x_295 = lean_box(0);
}
x_296 = lean_nat_dec_eq(x_192, x_193);
if (x_296 == 0)
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; 
lean_dec(x_3);
x_297 = lean_int_neg_succ_of_nat(x_202);
x_298 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_298, 0, x_297);
lean_ctor_set(x_298, 1, x_192);
if (lean_is_scalar(x_295)) {
 x_299 = lean_alloc_ctor(2, 1, 0);
} else {
 x_299 = x_295;
}
lean_ctor_set(x_299, 0, x_298);
x_300 = lean_apply_1(x_13, x_299);
return x_300;
}
else
{
lean_object* x_301; lean_object* x_302; 
lean_dec(x_295);
lean_dec(x_192);
lean_dec(x_13);
x_301 = lean_box(0);
x_302 = lean_apply_1(x_3, x_301);
return x_302;
}
}
}
else
{
lean_object* x_303; uint8_t x_304; 
lean_dec(x_199);
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
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_303 = x_1;
} else {
 lean_dec_ref(x_1);
 x_303 = lean_box(0);
}
x_304 = lean_nat_dec_eq(x_192, x_193);
if (x_304 == 0)
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; 
lean_dec(x_2);
x_305 = lean_int_neg_succ_of_nat(x_200);
x_306 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_306, 0, x_305);
lean_ctor_set(x_306, 1, x_192);
if (lean_is_scalar(x_303)) {
 x_307 = lean_alloc_ctor(2, 1, 0);
} else {
 x_307 = x_303;
}
lean_ctor_set(x_307, 0, x_306);
x_308 = lean_apply_1(x_13, x_307);
return x_308;
}
else
{
lean_object* x_309; lean_object* x_310; 
lean_dec(x_303);
lean_dec(x_192);
lean_dec(x_13);
x_309 = lean_box(0);
x_310 = lean_apply_1(x_2, x_309);
return x_310;
}
}
}
}
}
else
{
lean_object* x_311; 
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
x_311 = lean_apply_1(x_13, x_1);
return x_311;
}
}
}
lean_object* l_Lean_JsonRpc_instFromJsonErrorCode_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instFromJsonErrorCode_match__1___rarg), 13, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instFromJsonErrorCode(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_to_int(x_5);
x_7 = lean_int_dec_lt(x_3, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_mk_string("expected error code");
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_nat_abs(x_3);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_10, x_11);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(32699u);
x_14 = lean_nat_dec_eq(x_12, x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_unsigned_to_nat(32599u);
x_16 = lean_nat_dec_eq(x_12, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_unsigned_to_nat(32600u);
x_18 = lean_nat_dec_eq(x_12, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_unsigned_to_nat(32601u);
x_20 = lean_nat_dec_eq(x_12, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_unsigned_to_nat(32602u);
x_22 = lean_nat_dec_eq(x_12, x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_unsigned_to_nat(32098u);
x_24 = lean_nat_dec_eq(x_12, x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_unsigned_to_nat(31999u);
x_26 = lean_nat_dec_eq(x_12, x_25);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_unsigned_to_nat(32001u);
x_28 = lean_nat_dec_eq(x_12, x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_unsigned_to_nat(32000u);
x_30 = lean_nat_dec_eq(x_12, x_29);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_unsigned_to_nat(32799u);
x_32 = lean_nat_dec_eq(x_12, x_31);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_unsigned_to_nat(32800u);
x_34 = lean_nat_dec_eq(x_12, x_33);
lean_dec(x_12);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_mk_string("expected error code");
x_36 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_36, 0, x_35);
return x_36;
}
else
{
uint8_t x_37; 
x_37 = lean_nat_dec_eq(x_4, x_5);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_mk_string("expected error code");
x_39 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_39, 0, x_38);
return x_39;
}
else
{
uint8_t x_40; lean_object* x_41; lean_object* x_42; 
x_40 = 10;
x_41 = lean_box(x_40);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_12);
x_43 = lean_nat_dec_eq(x_4, x_5);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_mk_string("expected error code");
x_45 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_45, 0, x_44);
return x_45;
}
else
{
uint8_t x_46; lean_object* x_47; lean_object* x_48; 
x_46 = 9;
x_47 = lean_box(x_46);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_12);
x_49 = lean_nat_dec_eq(x_4, x_5);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_mk_string("expected error code");
x_51 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_51, 0, x_50);
return x_51;
}
else
{
uint8_t x_52; lean_object* x_53; lean_object* x_54; 
x_52 = 8;
x_53 = lean_box(x_52);
x_54 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_54, 0, x_53);
return x_54;
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_12);
x_55 = lean_nat_dec_eq(x_4, x_5);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_mk_string("expected error code");
x_57 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_57, 0, x_56);
return x_57;
}
else
{
uint8_t x_58; lean_object* x_59; lean_object* x_60; 
x_58 = 7;
x_59 = lean_box(x_58);
x_60 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_60, 0, x_59);
return x_60;
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_12);
x_61 = lean_nat_dec_eq(x_4, x_5);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_mk_string("expected error code");
x_63 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_63, 0, x_62);
return x_63;
}
else
{
uint8_t x_64; lean_object* x_65; lean_object* x_66; 
x_64 = 6;
x_65 = lean_box(x_64);
x_66 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_66, 0, x_65);
return x_66;
}
}
}
else
{
uint8_t x_67; 
lean_dec(x_12);
x_67 = lean_nat_dec_eq(x_4, x_5);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_mk_string("expected error code");
x_69 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_69, 0, x_68);
return x_69;
}
else
{
uint8_t x_70; lean_object* x_71; lean_object* x_72; 
x_70 = 5;
x_71 = lean_box(x_70);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_71);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_12);
x_73 = lean_nat_dec_eq(x_4, x_5);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; 
x_74 = lean_mk_string("expected error code");
x_75 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_75, 0, x_74);
return x_75;
}
else
{
uint8_t x_76; lean_object* x_77; lean_object* x_78; 
x_76 = 4;
x_77 = lean_box(x_76);
x_78 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_dec(x_12);
x_79 = lean_nat_dec_eq(x_4, x_5);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; 
x_80 = lean_mk_string("expected error code");
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
return x_81;
}
else
{
uint8_t x_82; lean_object* x_83; lean_object* x_84; 
x_82 = 3;
x_83 = lean_box(x_82);
x_84 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_84, 0, x_83);
return x_84;
}
}
}
else
{
uint8_t x_85; 
lean_dec(x_12);
x_85 = lean_nat_dec_eq(x_4, x_5);
if (x_85 == 0)
{
lean_object* x_86; lean_object* x_87; 
x_86 = lean_mk_string("expected error code");
x_87 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_87, 0, x_86);
return x_87;
}
else
{
uint8_t x_88; lean_object* x_89; lean_object* x_90; 
x_88 = 2;
x_89 = lean_box(x_88);
x_90 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_90, 0, x_89);
return x_90;
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_12);
x_91 = lean_nat_dec_eq(x_4, x_5);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_mk_string("expected error code");
x_93 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_93, 0, x_92);
return x_93;
}
else
{
uint8_t x_94; lean_object* x_95; lean_object* x_96; 
x_94 = 1;
x_95 = lean_box(x_94);
x_96 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_96, 0, x_95);
return x_96;
}
}
}
else
{
uint8_t x_97; 
lean_dec(x_12);
x_97 = lean_nat_dec_eq(x_4, x_5);
if (x_97 == 0)
{
lean_object* x_98; lean_object* x_99; 
x_98 = lean_mk_string("expected error code");
x_99 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_99, 0, x_98);
return x_99;
}
else
{
uint8_t x_100; lean_object* x_101; lean_object* x_102; 
x_100 = 0;
x_101 = lean_box(x_100);
x_102 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_102, 0, x_101);
return x_102;
}
}
}
}
else
{
lean_object* x_103; lean_object* x_104; 
x_103 = lean_mk_string("expected error code");
x_104 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_104, 0, x_103);
return x_104;
}
}
}
lean_object* l_Lean_JsonRpc_instFromJsonErrorCode___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_JsonRpc_instFromJsonErrorCode(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instToJsonErrorCode_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_13; lean_object* x_14; 
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
x_13 = lean_box(0);
x_14 = lean_apply_1(x_2, x_13);
return x_14;
}
case 1:
{
lean_object* x_15; lean_object* x_16; 
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
x_15 = lean_box(0);
x_16 = lean_apply_1(x_3, x_15);
return x_16;
}
case 2:
{
lean_object* x_17; lean_object* x_18; 
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
x_17 = lean_box(0);
x_18 = lean_apply_1(x_4, x_17);
return x_18;
}
case 3:
{
lean_object* x_19; lean_object* x_20; 
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
x_19 = lean_box(0);
x_20 = lean_apply_1(x_5, x_19);
return x_20;
}
case 4:
{
lean_object* x_21; lean_object* x_22; 
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
x_21 = lean_box(0);
x_22 = lean_apply_1(x_6, x_21);
return x_22;
}
case 5:
{
lean_object* x_23; lean_object* x_24; 
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
x_23 = lean_box(0);
x_24 = lean_apply_1(x_7, x_23);
return x_24;
}
case 6:
{
lean_object* x_25; lean_object* x_26; 
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
x_25 = lean_box(0);
x_26 = lean_apply_1(x_8, x_25);
return x_26;
}
case 7:
{
lean_object* x_27; lean_object* x_28; 
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
x_27 = lean_box(0);
x_28 = lean_apply_1(x_9, x_27);
return x_28;
}
case 8:
{
lean_object* x_29; lean_object* x_30; 
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
x_29 = lean_box(0);
x_30 = lean_apply_1(x_10, x_29);
return x_30;
}
case 9:
{
lean_object* x_31; lean_object* x_32; 
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
x_31 = lean_box(0);
x_32 = lean_apply_1(x_11, x_31);
return x_32;
}
default: 
{
lean_object* x_33; lean_object* x_34; 
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
x_33 = lean_box(0);
x_34 = lean_apply_1(x_12, x_33);
return x_34;
}
}
}
}
lean_object* l_Lean_JsonRpc_instToJsonErrorCode_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instToJsonErrorCode_match__1___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instToJsonErrorCode_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_1);
lean_dec(x_1);
x_14 = l_Lean_JsonRpc_instToJsonErrorCode_match__1___rarg(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* l_Lean_JsonRpc_instToJsonErrorCode(uint8_t x_1) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = lean_unsigned_to_nat(32700u);
x_3 = lean_nat_to_int(x_2);
x_4 = lean_int_neg(x_3);
lean_dec(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set(x_6, 1, x_5);
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_unsigned_to_nat(32600u);
x_9 = lean_nat_to_int(x_8);
x_10 = lean_int_neg(x_9);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
case 2:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_unsigned_to_nat(32601u);
x_15 = lean_nat_to_int(x_14);
x_16 = lean_int_neg(x_15);
lean_dec(x_15);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
case 3:
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_unsigned_to_nat(32602u);
x_21 = lean_nat_to_int(x_20);
x_22 = lean_int_neg(x_21);
lean_dec(x_21);
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
return x_25;
}
case 4:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_26 = lean_unsigned_to_nat(32603u);
x_27 = lean_nat_to_int(x_26);
x_28 = lean_int_neg(x_27);
lean_dec(x_27);
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_31, 0, x_30);
return x_31;
}
case 5:
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_unsigned_to_nat(32099u);
x_33 = lean_nat_to_int(x_32);
x_34 = lean_int_neg(x_33);
lean_dec(x_33);
x_35 = lean_unsigned_to_nat(0u);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_37, 0, x_36);
return x_37;
}
case 6:
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_38 = lean_unsigned_to_nat(32000u);
x_39 = lean_nat_to_int(x_38);
x_40 = lean_int_neg(x_39);
lean_dec(x_39);
x_41 = lean_unsigned_to_nat(0u);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_43, 0, x_42);
return x_43;
}
case 7:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_44 = lean_unsigned_to_nat(32002u);
x_45 = lean_nat_to_int(x_44);
x_46 = lean_int_neg(x_45);
lean_dec(x_45);
x_47 = lean_unsigned_to_nat(0u);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_49, 0, x_48);
return x_49;
}
case 8:
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_50 = lean_unsigned_to_nat(32001u);
x_51 = lean_nat_to_int(x_50);
x_52 = lean_int_neg(x_51);
lean_dec(x_51);
x_53 = lean_unsigned_to_nat(0u);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_55, 0, x_54);
return x_55;
}
case 9:
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_56 = lean_unsigned_to_nat(32800u);
x_57 = lean_nat_to_int(x_56);
x_58 = lean_int_neg(x_57);
lean_dec(x_57);
x_59 = lean_unsigned_to_nat(0u);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_61, 0, x_60);
return x_61;
}
default: 
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_62 = lean_unsigned_to_nat(32801u);
x_63 = lean_nat_to_int(x_62);
x_64 = lean_int_neg(x_63);
lean_dec(x_63);
x_65 = lean_unsigned_to_nat(0u);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
}
}
}
lean_object* l_Lean_JsonRpc_instToJsonErrorCode___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Lean_JsonRpc_instToJsonErrorCode(x_2);
return x_3;
}
}
lean_object* l_Lean_JsonRpc_instInhabitedRequest___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_mk_string("");
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_2);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
lean_object* l_Lean_JsonRpc_instInhabitedRequest(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instInhabitedRequest___rarg), 1, 0);
return x_2;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_731__match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_731__match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_731__match__1___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_731__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_731__match__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_731____rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 2);
lean_inc(x_9);
lean_dec(x_3);
x_10 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_32_(x_4, x_7);
lean_dec(x_7);
lean_dec(x_4);
if (x_10 == 0)
{
uint8_t x_11; lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_11 = 0;
x_12 = lean_box(x_11);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = lean_string_dec_eq(x_5, x_8);
lean_dec(x_8);
lean_dec(x_5);
if (x_13 == 0)
{
uint8_t x_14; lean_object* x_15; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_1);
x_14 = 0;
x_15 = lean_box(x_14);
return x_15;
}
else
{
lean_object* x_16; 
x_16 = lean_apply_2(x_1, x_6, x_9);
return x_16;
}
}
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_731_(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_731____rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instBEqRequest___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequest____x40_Lean_Data_JsonRpc___hyg_731____rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instBEqRequest(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instBEqRequest___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instCoeRequestMessage___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_Lean_Json_toStructured_x3f___rarg(x_1, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_6);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_4);
lean_ctor_set(x_8, 2, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_3);
lean_ctor_set(x_11, 1, x_4);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
}
}
lean_object* l_Lean_JsonRpc_instCoeRequestMessage(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instCoeRequestMessage___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instInhabitedNotification___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("");
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_JsonRpc_instInhabitedNotification(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instInhabitedNotification___rarg), 1, 0);
return x_2;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_884__match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_884__match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_884__match__1___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_884__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_884__match__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_884____rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_string_dec_eq(x_4, x_6);
lean_dec(x_6);
lean_dec(x_4);
if (x_8 == 0)
{
uint8_t x_9; lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_9 = 0;
x_10 = lean_box(x_9);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = lean_apply_2(x_1, x_5, x_7);
return x_11;
}
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_884_(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_884____rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instBEqNotification___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqNotification____x40_Lean_Data_JsonRpc___hyg_884____rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instBEqNotification(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instBEqNotification___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instCoeNotificationMessage___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = l_Lean_Json_toStructured_x3f___rarg(x_1, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_5);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
}
lean_object* l_Lean_JsonRpc_instCoeNotificationMessage(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instCoeNotificationMessage___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instInhabitedResponse___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_mk_string("");
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
}
lean_object* l_Lean_JsonRpc_instInhabitedResponse(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instInhabitedResponse___rarg), 1, 0);
return x_2;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1022__match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1022__match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1022__match__1___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1022__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1022__match__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1022____rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_32_(x_4, x_6);
lean_dec(x_6);
lean_dec(x_4);
if (x_8 == 0)
{
uint8_t x_9; lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_9 = 0;
x_10 = lean_box(x_9);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = lean_apply_2(x_1, x_5, x_7);
return x_11;
}
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1022_(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1022____rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instBEqResponse___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponse____x40_Lean_Data_JsonRpc___hyg_1022____rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instBEqResponse(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instBEqResponse___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instCoeResponseMessage___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
lean_object* l_Lean_JsonRpc_instCoeResponseMessage(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instCoeResponseMessage___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_ResponseError_data_x3f___default(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instInhabitedResponseError(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_2 = lean_mk_string("");
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_2);
x_4 = lean_box(0);
x_5 = 0;
x_6 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*3, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1175__match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 2);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_box(x_6);
x_14 = lean_box(x_10);
x_15 = lean_apply_8(x_3, x_5, x_13, x_7, x_8, x_9, x_14, x_11, x_12);
return x_15;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1175__match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1175__match__1___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1175__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1175__match__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1175____rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 2);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = lean_ctor_get_uint8(x_3, sizeof(void*)*3);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
x_11 = lean_ctor_get(x_3, 2);
lean_inc(x_11);
lean_dec(x_3);
x_12 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_32_(x_4, x_8);
lean_dec(x_8);
lean_dec(x_4);
if (x_12 == 0)
{
uint8_t x_13; lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_13 = 0;
x_14 = lean_box(x_13);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqErrorCode____x40_Lean_Data_JsonRpc___hyg_263_(x_5, x_9);
if (x_15 == 0)
{
uint8_t x_16; lean_object* x_17; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_16 = 0;
x_17 = lean_box(x_16);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = lean_string_dec_eq(x_6, x_10);
lean_dec(x_10);
lean_dec(x_6);
if (x_18 == 0)
{
uint8_t x_19; lean_object* x_20; 
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_1);
x_19 = 0;
x_20 = lean_box(x_19);
return x_20;
}
else
{
lean_object* x_21; 
x_21 = l___private_Init_Data_Option_Basic_0__beqOption____x40_Init_Data_Option_Basic___hyg_671____rarg(x_1, x_7, x_11);
return x_21;
}
}
}
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1175_(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1175____rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instBEqResponseError___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqResponseError____x40_Lean_Data_JsonRpc___hyg_1175____rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instBEqResponseError(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instBEqResponseError___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instCoeResponseErrorMessage___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 2);
lean_inc(x_3);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_1);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_box(0);
x_8 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_8, 2, x_7);
lean_ctor_set_uint8(x_8, sizeof(void*)*3, x_5);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_dec(x_2);
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_apply_1(x_1, x_13);
lean_ctor_set(x_3, 0, x_14);
x_15 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_15, 0, x_9);
lean_ctor_set(x_15, 1, x_11);
lean_ctor_set(x_15, 2, x_3);
lean_ctor_set_uint8(x_15, sizeof(void*)*3, x_10);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
lean_dec(x_3);
x_17 = lean_apply_1(x_1, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_11);
lean_ctor_set(x_19, 2, x_18);
lean_ctor_set_uint8(x_19, sizeof(void*)*3, x_10);
return x_19;
}
}
}
}
lean_object* l_Lean_JsonRpc_instCoeResponseErrorMessage(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instCoeResponseErrorMessage___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instCoeStringRequestID(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instCoeJsonNumberRequestID(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_2, 0);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_apply_2(x_3, x_9, x_10);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_3);
x_12 = lean_apply_2(x_8, x_1, x_2);
return x_12;
}
}
case 1:
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
lean_dec(x_4);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_apply_2(x_7, x_13, x_14);
return x_15;
}
case 1:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_8);
lean_dec(x_7);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
lean_dec(x_2);
x_18 = lean_apply_2(x_4, x_16, x_17);
return x_18;
}
default: 
{
lean_object* x_19; 
lean_dec(x_7);
lean_dec(x_4);
x_19 = lean_apply_2(x_8, x_1, x_2);
return x_19;
}
}
}
default: 
{
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_3);
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_8);
lean_dec(x_5);
x_20 = lean_ctor_get(x_2, 0);
lean_inc(x_20);
lean_dec(x_2);
x_21 = lean_apply_1(x_6, x_20);
return x_21;
}
case 1:
{
lean_object* x_22; lean_object* x_23; 
lean_dec(x_8);
lean_dec(x_6);
x_22 = lean_ctor_get(x_2, 0);
lean_inc(x_22);
lean_dec(x_2);
x_23 = lean_apply_1(x_5, x_22);
return x_23;
}
default: 
{
lean_object* x_24; 
lean_dec(x_6);
lean_dec(x_5);
x_24 = lean_apply_2(x_8, x_2, x_2);
return x_24;
}
}
}
}
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt_match__1___rarg), 8, 0);
return x_2;
}
}
uint8_t l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_string_dec_lt(x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
return x_6;
}
}
case 1:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
uint8_t x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = 1;
return x_7;
}
case 1:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = l_Lean_JsonNumber_lt(x_8, x_9);
return x_10;
}
default: 
{
uint8_t x_11; 
lean_dec(x_1);
x_11 = 0;
return x_11;
}
}
}
default: 
{
if (lean_obj_tag(x_2) == 2)
{
uint8_t x_12; 
x_12 = 0;
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_2);
x_13 = 1;
return x_13;
}
}
}
}
}
lean_object* l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_ltProp() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_Lean_JsonRpc_instLTRequestID() {
_start:
{
lean_object* x_1; 
x_1 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_ltProp;
return x_1;
}
}
uint8_t l_Lean_JsonRpc_instDecidableLt(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_lt(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_JsonRpc_instDecidableLt___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_JsonRpc_instDecidableLt(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Lean_JsonRpc_instFromJsonRequestID_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_3, x_5);
return x_6;
}
case 3:
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
lean_dec(x_3);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_1(x_2, x_7);
return x_8;
}
default: 
{
lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_apply_1(x_4, x_1);
return x_9;
}
}
}
}
lean_object* l_Lean_JsonRpc_instFromJsonRequestID_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instFromJsonRequestID_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instFromJsonRequestID(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 2:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
x_4 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
case 3:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
default: 
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_mk_string("a request id needs to be a number or a string");
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
}
lean_object* l_Lean_JsonRpc_instFromJsonRequestID___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_JsonRpc_instFromJsonRequestID(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instToJsonRequestID(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
case 1:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
default: 
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
}
}
}
lean_object* l_Lean_JsonRpc_instToJsonRequestID___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_JsonRpc_instToJsonRequestID(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instToJsonMessage_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_3(x_2, x_6, x_7, x_8);
return x_9;
}
case 1:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_2(x_3, x_10, x_11);
return x_12;
}
case 2:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_apply_2(x_4, x_13, x_14);
return x_15;
}
default: 
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
x_17 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 2);
lean_inc(x_19);
lean_dec(x_1);
x_20 = lean_box(x_17);
x_21 = lean_apply_4(x_5, x_16, x_20, x_18, x_19);
return x_21;
}
}
}
}
lean_object* l_Lean_JsonRpc_instToJsonMessage_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instToJsonMessage_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_5);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
x_11 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_5);
return x_13;
}
}
}
}
lean_object* l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__2(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
lean_object* l_Lean_JsonRpc_instToJsonMessage(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_mk_string("2.0");
x_3 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3, 0, x_2);
x_4 = lean_mk_string("jsonrpc");
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_1, 2);
lean_inc(x_7);
x_9 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_9, 0, x_7);
x_10 = lean_mk_string("method");
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_mk_string("params");
x_15 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_14, x_8);
switch (lean_obj_tag(x_6)) {
case 0:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_16 = lean_ctor_get(x_6, 0);
lean_inc(x_16);
x_17 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_17, 0, x_16);
x_18 = lean_mk_string("id");
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_13);
x_21 = l_List_append___rarg(x_20, x_15);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_5);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_Json_mkObj(x_22);
return x_23;
}
case 1:
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_24 = lean_ctor_get(x_6, 0);
lean_inc(x_24);
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_mk_string("id");
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_13);
x_29 = l_List_append___rarg(x_28, x_15);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_5);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_Json_mkObj(x_30);
return x_31;
}
default: 
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = lean_mk_string("id");
x_33 = lean_box(0);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_13);
x_36 = l_List_append___rarg(x_35, x_15);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_5);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_Lean_Json_mkObj(x_37);
return x_38;
}
}
}
case 1:
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_39 = lean_ctor_get(x_1, 0);
x_40 = lean_ctor_get(x_1, 1);
lean_inc(x_39);
x_41 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_41, 0, x_39);
x_42 = lean_mk_string("method");
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = lean_mk_string("params");
x_45 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_44, x_40);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_5);
lean_ctor_set(x_47, 1, x_46);
x_48 = l_Lean_Json_mkObj(x_47);
return x_48;
}
case 2:
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_49 = lean_ctor_get(x_1, 0);
x_50 = lean_ctor_get(x_1, 1);
x_51 = lean_mk_string("result");
lean_inc(x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
x_53 = lean_box(0);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
switch (lean_obj_tag(x_49)) {
case 0:
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_55 = lean_ctor_get(x_49, 0);
lean_inc(x_55);
x_56 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_56, 0, x_55);
x_57 = lean_mk_string("id");
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_54);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_5);
lean_ctor_set(x_60, 1, x_59);
x_61 = l_Lean_Json_mkObj(x_60);
return x_61;
}
case 1:
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_62 = lean_ctor_get(x_49, 0);
lean_inc(x_62);
x_63 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_63, 0, x_62);
x_64 = lean_mk_string("id");
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_63);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_54);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_5);
lean_ctor_set(x_67, 1, x_66);
x_68 = l_Lean_Json_mkObj(x_67);
return x_68;
}
default: 
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_69 = lean_mk_string("id");
x_70 = lean_box(0);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_54);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_5);
lean_ctor_set(x_73, 1, x_72);
x_74 = l_Lean_Json_mkObj(x_73);
return x_74;
}
}
}
default: 
{
lean_object* x_75; uint8_t x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_75 = lean_ctor_get(x_1, 0);
x_76 = lean_ctor_get_uint8(x_1, sizeof(void*)*3);
x_77 = lean_ctor_get(x_1, 1);
x_78 = lean_ctor_get(x_1, 2);
lean_inc(x_77);
x_79 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_79, 0, x_77);
x_80 = lean_mk_string("message");
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
x_82 = lean_box(0);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_mk_string("data");
x_85 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__2(x_84, x_78);
switch (lean_obj_tag(x_75)) {
case 0:
{
lean_object* x_169; lean_object* x_170; 
x_169 = lean_ctor_get(x_75, 0);
lean_inc(x_169);
x_170 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_170, 0, x_169);
x_86 = x_170;
goto block_168;
}
case 1:
{
lean_object* x_171; lean_object* x_172; 
x_171 = lean_ctor_get(x_75, 0);
lean_inc(x_171);
x_172 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_172, 0, x_171);
x_86 = x_172;
goto block_168;
}
default: 
{
lean_object* x_173; 
x_173 = lean_box(0);
x_86 = x_173;
goto block_168;
}
}
block_168:
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_mk_string("id");
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_86);
switch (x_76) {
case 0:
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_102 = lean_unsigned_to_nat(32700u);
x_103 = lean_nat_to_int(x_102);
x_104 = lean_int_neg(x_103);
lean_dec(x_103);
x_105 = lean_unsigned_to_nat(0u);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
x_107 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_107, 0, x_106);
x_89 = x_107;
goto block_101;
}
case 1:
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_108 = lean_unsigned_to_nat(32600u);
x_109 = lean_nat_to_int(x_108);
x_110 = lean_int_neg(x_109);
lean_dec(x_109);
x_111 = lean_unsigned_to_nat(0u);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_113, 0, x_112);
x_89 = x_113;
goto block_101;
}
case 2:
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_114 = lean_unsigned_to_nat(32601u);
x_115 = lean_nat_to_int(x_114);
x_116 = lean_int_neg(x_115);
lean_dec(x_115);
x_117 = lean_unsigned_to_nat(0u);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
x_119 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_119, 0, x_118);
x_89 = x_119;
goto block_101;
}
case 3:
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_120 = lean_unsigned_to_nat(32602u);
x_121 = lean_nat_to_int(x_120);
x_122 = lean_int_neg(x_121);
lean_dec(x_121);
x_123 = lean_unsigned_to_nat(0u);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
x_125 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_125, 0, x_124);
x_89 = x_125;
goto block_101;
}
case 4:
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_126 = lean_unsigned_to_nat(32603u);
x_127 = lean_nat_to_int(x_126);
x_128 = lean_int_neg(x_127);
lean_dec(x_127);
x_129 = lean_unsigned_to_nat(0u);
x_130 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_130, 0, x_128);
lean_ctor_set(x_130, 1, x_129);
x_131 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_131, 0, x_130);
x_89 = x_131;
goto block_101;
}
case 5:
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_132 = lean_unsigned_to_nat(32099u);
x_133 = lean_nat_to_int(x_132);
x_134 = lean_int_neg(x_133);
lean_dec(x_133);
x_135 = lean_unsigned_to_nat(0u);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_134);
lean_ctor_set(x_136, 1, x_135);
x_137 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_137, 0, x_136);
x_89 = x_137;
goto block_101;
}
case 6:
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_138 = lean_unsigned_to_nat(32000u);
x_139 = lean_nat_to_int(x_138);
x_140 = lean_int_neg(x_139);
lean_dec(x_139);
x_141 = lean_unsigned_to_nat(0u);
x_142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_142, 0, x_140);
lean_ctor_set(x_142, 1, x_141);
x_143 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_143, 0, x_142);
x_89 = x_143;
goto block_101;
}
case 7:
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_144 = lean_unsigned_to_nat(32002u);
x_145 = lean_nat_to_int(x_144);
x_146 = lean_int_neg(x_145);
lean_dec(x_145);
x_147 = lean_unsigned_to_nat(0u);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_146);
lean_ctor_set(x_148, 1, x_147);
x_149 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_149, 0, x_148);
x_89 = x_149;
goto block_101;
}
case 8:
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
x_150 = lean_unsigned_to_nat(32001u);
x_151 = lean_nat_to_int(x_150);
x_152 = lean_int_neg(x_151);
lean_dec(x_151);
x_153 = lean_unsigned_to_nat(0u);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
x_155 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_155, 0, x_154);
x_89 = x_155;
goto block_101;
}
case 9:
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_156 = lean_unsigned_to_nat(32800u);
x_157 = lean_nat_to_int(x_156);
x_158 = lean_int_neg(x_157);
lean_dec(x_157);
x_159 = lean_unsigned_to_nat(0u);
x_160 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_160, 0, x_158);
lean_ctor_set(x_160, 1, x_159);
x_161 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_161, 0, x_160);
x_89 = x_161;
goto block_101;
}
default: 
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_162 = lean_unsigned_to_nat(32801u);
x_163 = lean_nat_to_int(x_162);
x_164 = lean_int_neg(x_163);
lean_dec(x_163);
x_165 = lean_unsigned_to_nat(0u);
x_166 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
x_167 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_167, 0, x_166);
x_89 = x_167;
goto block_101;
}
}
block_101:
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_90 = lean_mk_string("code");
x_91 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_91, 0, x_90);
lean_ctor_set(x_91, 1, x_89);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_83);
x_93 = l_List_append___rarg(x_92, x_85);
x_94 = l_Lean_Json_mkObj(x_93);
x_95 = lean_mk_string("error");
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_94);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_82);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_88);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_5);
lean_ctor_set(x_99, 1, x_98);
x_100 = l_Lean_Json_mkObj(x_99);
return x_100;
}
}
}
}
}
}
lean_object* l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_JsonRpc_instToJsonMessage___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_JsonRpc_instToJsonMessage(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instFromJsonMessage_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_mk_string("2.0");
x_6 = lean_string_dec_eq(x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_box(0);
x_9 = lean_apply_1(x_2, x_8);
return x_9;
}
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l_Lean_JsonRpc_instFromJsonMessage_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instFromJsonMessage_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
switch (lean_obj_tag(x_3)) {
case 2:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
case 3:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
default: 
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
x_10 = lean_mk_string("a request id needs to be a number or a string");
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
x_4 = l_Lean_Json_getStr_x3f(x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
if (lean_obj_tag(x_3) == 2)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_to_int(x_7);
x_9 = lean_int_dec_lt(x_5, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
x_10 = lean_mk_string("expected error code");
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_nat_abs(x_5);
lean_dec(x_5);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_sub(x_12, x_13);
lean_dec(x_12);
x_15 = lean_unsigned_to_nat(32699u);
x_16 = lean_nat_dec_eq(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_unsigned_to_nat(32599u);
x_18 = lean_nat_dec_eq(x_14, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_unsigned_to_nat(32600u);
x_20 = lean_nat_dec_eq(x_14, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_unsigned_to_nat(32601u);
x_22 = lean_nat_dec_eq(x_14, x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_unsigned_to_nat(32602u);
x_24 = lean_nat_dec_eq(x_14, x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_unsigned_to_nat(32098u);
x_26 = lean_nat_dec_eq(x_14, x_25);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_unsigned_to_nat(31999u);
x_28 = lean_nat_dec_eq(x_14, x_27);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_unsigned_to_nat(32001u);
x_30 = lean_nat_dec_eq(x_14, x_29);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_unsigned_to_nat(32000u);
x_32 = lean_nat_dec_eq(x_14, x_31);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_unsigned_to_nat(32799u);
x_34 = lean_nat_dec_eq(x_14, x_33);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_unsigned_to_nat(32800u);
x_36 = lean_nat_dec_eq(x_14, x_35);
lean_dec(x_14);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_6);
x_37 = lean_mk_string("expected error code");
x_38 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_38, 0, x_37);
return x_38;
}
else
{
uint8_t x_39; 
x_39 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_mk_string("expected error code");
x_41 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_41, 0, x_40);
return x_41;
}
else
{
uint8_t x_42; lean_object* x_43; lean_object* x_44; 
x_42 = 10;
x_43 = lean_box(x_42);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_14);
x_45 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_mk_string("expected error code");
x_47 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_47, 0, x_46);
return x_47;
}
else
{
uint8_t x_48; lean_object* x_49; lean_object* x_50; 
x_48 = 9;
x_49 = lean_box(x_48);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_14);
x_51 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_mk_string("expected error code");
x_53 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_53, 0, x_52);
return x_53;
}
else
{
uint8_t x_54; lean_object* x_55; lean_object* x_56; 
x_54 = 8;
x_55 = lean_box(x_54);
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_55);
return x_56;
}
}
}
else
{
uint8_t x_57; 
lean_dec(x_14);
x_57 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; 
x_58 = lean_mk_string("expected error code");
x_59 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_59, 0, x_58);
return x_59;
}
else
{
uint8_t x_60; lean_object* x_61; lean_object* x_62; 
x_60 = 7;
x_61 = lean_box(x_60);
x_62 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_62, 0, x_61);
return x_62;
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_14);
x_63 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; 
x_64 = lean_mk_string("expected error code");
x_65 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_65, 0, x_64);
return x_65;
}
else
{
uint8_t x_66; lean_object* x_67; lean_object* x_68; 
x_66 = 6;
x_67 = lean_box(x_66);
x_68 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_68, 0, x_67);
return x_68;
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_14);
x_69 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; 
x_70 = lean_mk_string("expected error code");
x_71 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_71, 0, x_70);
return x_71;
}
else
{
uint8_t x_72; lean_object* x_73; lean_object* x_74; 
x_72 = 5;
x_73 = lean_box(x_72);
x_74 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_74, 0, x_73);
return x_74;
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_14);
x_75 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
if (x_75 == 0)
{
lean_object* x_76; lean_object* x_77; 
x_76 = lean_mk_string("expected error code");
x_77 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_77, 0, x_76);
return x_77;
}
else
{
uint8_t x_78; lean_object* x_79; lean_object* x_80; 
x_78 = 4;
x_79 = lean_box(x_78);
x_80 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_80, 0, x_79);
return x_80;
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_14);
x_81 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; 
x_82 = lean_mk_string("expected error code");
x_83 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_83, 0, x_82);
return x_83;
}
else
{
uint8_t x_84; lean_object* x_85; lean_object* x_86; 
x_84 = 3;
x_85 = lean_box(x_84);
x_86 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_86, 0, x_85);
return x_86;
}
}
}
else
{
uint8_t x_87; 
lean_dec(x_14);
x_87 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; 
x_88 = lean_mk_string("expected error code");
x_89 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_89, 0, x_88);
return x_89;
}
else
{
uint8_t x_90; lean_object* x_91; lean_object* x_92; 
x_90 = 2;
x_91 = lean_box(x_90);
x_92 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_92, 0, x_91);
return x_92;
}
}
}
else
{
uint8_t x_93; 
lean_dec(x_14);
x_93 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; 
x_94 = lean_mk_string("expected error code");
x_95 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_95, 0, x_94);
return x_95;
}
else
{
uint8_t x_96; lean_object* x_97; lean_object* x_98; 
x_96 = 1;
x_97 = lean_box(x_96);
x_98 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_98, 0, x_97);
return x_98;
}
}
}
else
{
uint8_t x_99; 
lean_dec(x_14);
x_99 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
if (x_99 == 0)
{
lean_object* x_100; lean_object* x_101; 
x_100 = lean_mk_string("expected error code");
x_101 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_101, 0, x_100);
return x_101;
}
else
{
uint8_t x_102; lean_object* x_103; lean_object* x_104; 
x_102 = 0;
x_103 = lean_box(x_102);
x_104 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_104, 0, x_103);
return x_104;
}
}
}
}
else
{
lean_object* x_105; lean_object* x_106; 
lean_dec(x_3);
x_105 = lean_mk_string("expected error code");
x_106 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_106, 0, x_105);
return x_106;
}
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValD(x_1, x_2);
switch (lean_obj_tag(x_3)) {
case 4:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
return x_6;
}
case 5:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 0);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
default: 
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_3);
x_10 = lean_mk_string("structured object expected");
x_11 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
}
}
}
lean_object* l_Lean_JsonRpc_instFromJsonMessage(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_mk_string("jsonrpc");
x_3 = l_Lean_Json_getObjVal_x3f(x_1, x_2);
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
lean_object* x_8; 
x_8 = lean_ctor_get(x_3, 0);
if (lean_obj_tag(x_8) == 3)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_mk_string("2.0");
x_11 = lean_string_dec_eq(x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_mk_string("only version 2.0 of JSON RPC is supported");
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 0, x_12);
return x_3;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_mk_string("id");
x_14 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__1(x_1, x_13);
lean_dec(x_13);
x_15 = lean_mk_string("method");
x_16 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(x_1, x_15);
lean_dec(x_15);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_140; 
x_140 = lean_ctor_get(x_14, 0);
lean_inc(x_140);
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 0, x_140);
x_17 = x_3;
goto block_139;
}
else
{
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_141; 
x_141 = lean_ctor_get(x_16, 0);
lean_inc(x_141);
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 0, x_141);
x_17 = x_3;
goto block_139;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_free_object(x_3);
x_142 = lean_ctor_get(x_14, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_16, 0);
lean_inc(x_143);
x_144 = lean_mk_string("params");
x_145 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__4(x_1, x_144);
lean_dec(x_144);
if (lean_obj_tag(x_145) == 0)
{
uint8_t x_146; 
x_146 = !lean_is_exclusive(x_145);
if (x_146 == 0)
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_147 = lean_ctor_get(x_145, 0);
lean_dec(x_147);
x_148 = lean_box(0);
x_149 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_149, 0, x_142);
lean_ctor_set(x_149, 1, x_143);
lean_ctor_set(x_149, 2, x_148);
lean_ctor_set_tag(x_145, 1);
lean_ctor_set(x_145, 0, x_149);
x_17 = x_145;
goto block_139;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_145);
x_150 = lean_box(0);
x_151 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_151, 0, x_142);
lean_ctor_set(x_151, 1, x_143);
lean_ctor_set(x_151, 2, x_150);
x_152 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_152, 0, x_151);
x_17 = x_152;
goto block_139;
}
}
else
{
uint8_t x_153; 
x_153 = !lean_is_exclusive(x_145);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_145, 0);
x_155 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_155, 0, x_154);
x_156 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_156, 0, x_142);
lean_ctor_set(x_156, 1, x_143);
lean_ctor_set(x_156, 2, x_155);
lean_ctor_set(x_145, 0, x_156);
x_17 = x_145;
goto block_139;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
x_157 = lean_ctor_get(x_145, 0);
lean_inc(x_157);
lean_dec(x_145);
x_158 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_158, 0, x_157);
x_159 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_159, 0, x_142);
lean_ctor_set(x_159, 1, x_143);
lean_ctor_set(x_159, 2, x_158);
x_160 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_160, 0, x_159);
x_17 = x_160;
goto block_139;
}
}
}
}
block_139:
{
lean_object* x_18; 
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_118; 
x_118 = !lean_is_exclusive(x_16);
if (x_118 == 0)
{
x_18 = x_16;
goto block_117;
}
else
{
lean_object* x_119; lean_object* x_120; 
x_119 = lean_ctor_get(x_16, 0);
lean_inc(x_119);
lean_dec(x_16);
x_120 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_120, 0, x_119);
x_18 = x_120;
goto block_117;
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_121 = lean_ctor_get(x_16, 0);
lean_inc(x_121);
lean_dec(x_16);
x_122 = lean_mk_string("params");
x_123 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__4(x_1, x_122);
lean_dec(x_122);
if (lean_obj_tag(x_123) == 0)
{
uint8_t x_124; 
x_124 = !lean_is_exclusive(x_123);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_123, 0);
lean_dec(x_125);
x_126 = lean_box(0);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_121);
lean_ctor_set(x_127, 1, x_126);
lean_ctor_set_tag(x_123, 1);
lean_ctor_set(x_123, 0, x_127);
x_18 = x_123;
goto block_117;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
lean_dec(x_123);
x_128 = lean_box(0);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_121);
lean_ctor_set(x_129, 1, x_128);
x_130 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_130, 0, x_129);
x_18 = x_130;
goto block_117;
}
}
else
{
uint8_t x_131; 
x_131 = !lean_is_exclusive(x_123);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_123, 0);
x_133 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_133, 0, x_132);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_121);
lean_ctor_set(x_134, 1, x_133);
lean_ctor_set(x_123, 0, x_134);
x_18 = x_123;
goto block_117;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_135 = lean_ctor_get(x_123, 0);
lean_inc(x_135);
lean_dec(x_123);
x_136 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_136, 0, x_135);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_121);
lean_ctor_set(x_137, 1, x_136);
x_138 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_138, 0, x_137);
x_18 = x_138;
goto block_117;
}
}
}
block_117:
{
lean_object* x_19; lean_object* x_32; lean_object* x_48; lean_object* x_49; 
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_102; 
x_102 = !lean_is_exclusive(x_14);
if (x_102 == 0)
{
x_19 = x_14;
goto block_31;
}
else
{
lean_object* x_103; lean_object* x_104; 
x_103 = lean_ctor_get(x_14, 0);
lean_inc(x_103);
lean_dec(x_14);
x_104 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_104, 0, x_103);
x_19 = x_104;
goto block_31;
}
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_14, 0);
lean_inc(x_105);
lean_dec(x_14);
x_106 = lean_mk_string("result");
x_107 = l_Lean_Json_getObjVal_x3f(x_1, x_106);
lean_dec(x_106);
if (lean_obj_tag(x_107) == 0)
{
uint8_t x_108; 
x_108 = !lean_is_exclusive(x_107);
if (x_108 == 0)
{
x_48 = x_107;
x_49 = x_105;
goto block_101;
}
else
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_107, 0);
lean_inc(x_109);
lean_dec(x_107);
x_110 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_110, 0, x_109);
x_48 = x_110;
x_49 = x_105;
goto block_101;
}
}
else
{
uint8_t x_111; 
x_111 = !lean_is_exclusive(x_107);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; 
x_112 = lean_ctor_get(x_107, 0);
lean_inc(x_105);
x_113 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_113, 0, x_105);
lean_ctor_set(x_113, 1, x_112);
lean_ctor_set(x_107, 0, x_113);
x_48 = x_107;
x_49 = x_105;
goto block_101;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_107, 0);
lean_inc(x_114);
lean_dec(x_107);
lean_inc(x_105);
x_115 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_115, 0, x_105);
lean_ctor_set(x_115, 1, x_114);
x_116 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_116, 0, x_115);
x_48 = x_116;
x_49 = x_105;
goto block_101;
}
}
}
block_31:
{
if (lean_obj_tag(x_18) == 0)
{
lean_dec(x_18);
if (lean_obj_tag(x_17) == 0)
{
lean_dec(x_17);
return x_19;
}
else
{
uint8_t x_20; 
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_17);
if (x_20 == 0)
{
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
else
{
lean_dec(x_19);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_17);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_17, 0);
lean_dec(x_24);
x_25 = lean_ctor_get(x_18, 0);
lean_inc(x_25);
lean_dec(x_18);
lean_ctor_set_tag(x_17, 1);
lean_ctor_set(x_17, 0, x_25);
return x_17;
}
else
{
lean_object* x_26; lean_object* x_27; 
lean_dec(x_17);
x_26 = lean_ctor_get(x_18, 0);
lean_inc(x_26);
lean_dec(x_18);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_18);
x_28 = !lean_is_exclusive(x_17);
if (x_28 == 0)
{
return x_17;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_17, 0);
lean_inc(x_29);
lean_dec(x_17);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
return x_30;
}
}
}
}
block_47:
{
if (lean_obj_tag(x_18) == 0)
{
lean_dec(x_18);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_17);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_17, 0);
lean_dec(x_34);
lean_ctor_set_tag(x_17, 1);
lean_ctor_set(x_17, 0, x_32);
return x_17;
}
else
{
lean_object* x_35; 
lean_dec(x_17);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_32);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_dec(x_32);
x_36 = !lean_is_exclusive(x_17);
if (x_36 == 0)
{
return x_17;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_17, 0);
lean_inc(x_37);
lean_dec(x_17);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_37);
return x_38;
}
}
}
else
{
lean_dec(x_32);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_39; 
x_39 = !lean_is_exclusive(x_17);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_17, 0);
lean_dec(x_40);
x_41 = lean_ctor_get(x_18, 0);
lean_inc(x_41);
lean_dec(x_18);
lean_ctor_set_tag(x_17, 1);
lean_ctor_set(x_17, 0, x_41);
return x_17;
}
else
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_17);
x_42 = lean_ctor_get(x_18, 0);
lean_inc(x_42);
lean_dec(x_18);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
return x_43;
}
}
else
{
uint8_t x_44; 
lean_dec(x_18);
x_44 = !lean_is_exclusive(x_17);
if (x_44 == 0)
{
return x_17;
}
else
{
lean_object* x_45; lean_object* x_46; 
x_45 = lean_ctor_get(x_17, 0);
lean_inc(x_45);
lean_dec(x_17);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_45);
return x_46;
}
}
}
}
block_101:
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_mk_string("error");
x_51 = l_Lean_Json_getObjVal_x3f(x_1, x_50);
lean_dec(x_50);
if (lean_obj_tag(x_51) == 0)
{
lean_dec(x_49);
if (lean_obj_tag(x_48) == 0)
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_48);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_48, 0);
lean_dec(x_53);
x_54 = lean_ctor_get(x_51, 0);
lean_inc(x_54);
lean_dec(x_51);
lean_ctor_set(x_48, 0, x_54);
x_19 = x_48;
goto block_31;
}
else
{
lean_object* x_55; lean_object* x_56; 
lean_dec(x_48);
x_55 = lean_ctor_get(x_51, 0);
lean_inc(x_55);
lean_dec(x_51);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_55);
x_19 = x_56;
goto block_31;
}
}
else
{
lean_object* x_57; 
lean_dec(x_51);
x_57 = lean_ctor_get(x_48, 0);
lean_inc(x_57);
lean_dec(x_48);
x_32 = x_57;
goto block_47;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_51, 0);
lean_inc(x_58);
lean_dec(x_51);
x_59 = lean_mk_string("code");
x_60 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__3(x_58, x_59);
lean_dec(x_59);
if (lean_obj_tag(x_60) == 0)
{
lean_dec(x_58);
lean_dec(x_49);
if (lean_obj_tag(x_48) == 0)
{
uint8_t x_61; 
x_61 = !lean_is_exclusive(x_48);
if (x_61 == 0)
{
lean_object* x_62; lean_object* x_63; 
x_62 = lean_ctor_get(x_48, 0);
lean_dec(x_62);
x_63 = lean_ctor_get(x_60, 0);
lean_inc(x_63);
lean_dec(x_60);
lean_ctor_set(x_48, 0, x_63);
x_19 = x_48;
goto block_31;
}
else
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_48);
x_64 = lean_ctor_get(x_60, 0);
lean_inc(x_64);
lean_dec(x_60);
x_65 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_65, 0, x_64);
x_19 = x_65;
goto block_31;
}
}
else
{
lean_object* x_66; 
lean_dec(x_60);
x_66 = lean_ctor_get(x_48, 0);
lean_inc(x_66);
lean_dec(x_48);
x_32 = x_66;
goto block_47;
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_60, 0);
lean_inc(x_67);
lean_dec(x_60);
x_68 = lean_mk_string("message");
x_69 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(x_58, x_68);
lean_dec(x_68);
if (lean_obj_tag(x_69) == 0)
{
lean_dec(x_67);
lean_dec(x_58);
lean_dec(x_49);
if (lean_obj_tag(x_48) == 0)
{
uint8_t x_70; 
x_70 = !lean_is_exclusive(x_48);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; 
x_71 = lean_ctor_get(x_48, 0);
lean_dec(x_71);
x_72 = lean_ctor_get(x_69, 0);
lean_inc(x_72);
lean_dec(x_69);
lean_ctor_set(x_48, 0, x_72);
x_19 = x_48;
goto block_31;
}
else
{
lean_object* x_73; lean_object* x_74; 
lean_dec(x_48);
x_73 = lean_ctor_get(x_69, 0);
lean_inc(x_73);
lean_dec(x_69);
x_74 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_74, 0, x_73);
x_19 = x_74;
goto block_31;
}
}
else
{
lean_object* x_75; 
lean_dec(x_69);
x_75 = lean_ctor_get(x_48, 0);
lean_inc(x_75);
lean_dec(x_48);
x_32 = x_75;
goto block_47;
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_69, 0);
lean_inc(x_76);
lean_dec(x_69);
x_77 = lean_mk_string("data");
x_78 = l_Lean_Json_getObjVal_x3f(x_58, x_77);
lean_dec(x_77);
lean_dec(x_58);
if (lean_obj_tag(x_78) == 0)
{
lean_dec(x_78);
if (lean_obj_tag(x_48) == 0)
{
uint8_t x_79; 
x_79 = !lean_is_exclusive(x_48);
if (x_79 == 0)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; uint8_t x_83; 
x_80 = lean_ctor_get(x_48, 0);
lean_dec(x_80);
x_81 = lean_box(0);
x_82 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_82, 0, x_49);
lean_ctor_set(x_82, 1, x_76);
lean_ctor_set(x_82, 2, x_81);
x_83 = lean_unbox(x_67);
lean_dec(x_67);
lean_ctor_set_uint8(x_82, sizeof(void*)*3, x_83);
lean_ctor_set_tag(x_48, 1);
lean_ctor_set(x_48, 0, x_82);
x_19 = x_48;
goto block_31;
}
else
{
lean_object* x_84; lean_object* x_85; uint8_t x_86; lean_object* x_87; 
lean_dec(x_48);
x_84 = lean_box(0);
x_85 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_85, 0, x_49);
lean_ctor_set(x_85, 1, x_76);
lean_ctor_set(x_85, 2, x_84);
x_86 = lean_unbox(x_67);
lean_dec(x_67);
lean_ctor_set_uint8(x_85, sizeof(void*)*3, x_86);
x_87 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_87, 0, x_85);
x_19 = x_87;
goto block_31;
}
}
else
{
lean_object* x_88; 
lean_dec(x_76);
lean_dec(x_67);
lean_dec(x_49);
x_88 = lean_ctor_get(x_48, 0);
lean_inc(x_88);
lean_dec(x_48);
x_32 = x_88;
goto block_47;
}
}
else
{
if (lean_obj_tag(x_48) == 0)
{
uint8_t x_89; 
x_89 = !lean_is_exclusive(x_48);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint8_t x_94; 
x_90 = lean_ctor_get(x_48, 0);
lean_dec(x_90);
x_91 = lean_ctor_get(x_78, 0);
lean_inc(x_91);
lean_dec(x_78);
x_92 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_92, 0, x_91);
x_93 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_93, 0, x_49);
lean_ctor_set(x_93, 1, x_76);
lean_ctor_set(x_93, 2, x_92);
x_94 = lean_unbox(x_67);
lean_dec(x_67);
lean_ctor_set_uint8(x_93, sizeof(void*)*3, x_94);
lean_ctor_set_tag(x_48, 1);
lean_ctor_set(x_48, 0, x_93);
x_19 = x_48;
goto block_31;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; lean_object* x_99; 
lean_dec(x_48);
x_95 = lean_ctor_get(x_78, 0);
lean_inc(x_95);
lean_dec(x_78);
x_96 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_96, 0, x_95);
x_97 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_97, 0, x_49);
lean_ctor_set(x_97, 1, x_76);
lean_ctor_set(x_97, 2, x_96);
x_98 = lean_unbox(x_67);
lean_dec(x_67);
lean_ctor_set_uint8(x_97, sizeof(void*)*3, x_98);
x_99 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_99, 0, x_97);
x_19 = x_99;
goto block_31;
}
}
else
{
lean_object* x_100; 
lean_dec(x_78);
lean_dec(x_76);
lean_dec(x_67);
lean_dec(x_49);
x_100 = lean_ctor_get(x_48, 0);
lean_inc(x_100);
lean_dec(x_48);
x_32 = x_100;
goto block_47;
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
else
{
lean_object* x_161; 
lean_dec(x_8);
x_161 = lean_mk_string("only version 2.0 of JSON RPC is supported");
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 0, x_161);
return x_3;
}
}
else
{
lean_object* x_162; 
x_162 = lean_ctor_get(x_3, 0);
lean_inc(x_162);
lean_dec(x_3);
if (lean_obj_tag(x_162) == 3)
{
lean_object* x_163; lean_object* x_164; uint8_t x_165; 
x_163 = lean_ctor_get(x_162, 0);
lean_inc(x_163);
lean_dec(x_162);
x_164 = lean_mk_string("2.0");
x_165 = lean_string_dec_eq(x_163, x_164);
lean_dec(x_164);
lean_dec(x_163);
if (x_165 == 0)
{
lean_object* x_166; lean_object* x_167; 
x_166 = lean_mk_string("only version 2.0 of JSON RPC is supported");
x_167 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_167, 0, x_166);
return x_167;
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_168 = lean_mk_string("id");
x_169 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__1(x_1, x_168);
lean_dec(x_168);
x_170 = lean_mk_string("method");
x_171 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(x_1, x_170);
lean_dec(x_170);
if (lean_obj_tag(x_169) == 0)
{
lean_object* x_267; lean_object* x_268; 
x_267 = lean_ctor_get(x_169, 0);
lean_inc(x_267);
x_268 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_268, 0, x_267);
x_172 = x_268;
goto block_266;
}
else
{
if (lean_obj_tag(x_171) == 0)
{
lean_object* x_269; lean_object* x_270; 
x_269 = lean_ctor_get(x_171, 0);
lean_inc(x_269);
x_270 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_270, 0, x_269);
x_172 = x_270;
goto block_266;
}
else
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; 
x_271 = lean_ctor_get(x_169, 0);
lean_inc(x_271);
x_272 = lean_ctor_get(x_171, 0);
lean_inc(x_272);
x_273 = lean_mk_string("params");
x_274 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__4(x_1, x_273);
lean_dec(x_273);
if (lean_obj_tag(x_274) == 0)
{
lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; 
if (lean_is_exclusive(x_274)) {
 lean_ctor_release(x_274, 0);
 x_275 = x_274;
} else {
 lean_dec_ref(x_274);
 x_275 = lean_box(0);
}
x_276 = lean_box(0);
x_277 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_277, 0, x_271);
lean_ctor_set(x_277, 1, x_272);
lean_ctor_set(x_277, 2, x_276);
if (lean_is_scalar(x_275)) {
 x_278 = lean_alloc_ctor(1, 1, 0);
} else {
 x_278 = x_275;
 lean_ctor_set_tag(x_278, 1);
}
lean_ctor_set(x_278, 0, x_277);
x_172 = x_278;
goto block_266;
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
x_279 = lean_ctor_get(x_274, 0);
lean_inc(x_279);
if (lean_is_exclusive(x_274)) {
 lean_ctor_release(x_274, 0);
 x_280 = x_274;
} else {
 lean_dec_ref(x_274);
 x_280 = lean_box(0);
}
x_281 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_281, 0, x_279);
x_282 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_282, 0, x_271);
lean_ctor_set(x_282, 1, x_272);
lean_ctor_set(x_282, 2, x_281);
if (lean_is_scalar(x_280)) {
 x_283 = lean_alloc_ctor(1, 1, 0);
} else {
 x_283 = x_280;
}
lean_ctor_set(x_283, 0, x_282);
x_172 = x_283;
goto block_266;
}
}
}
block_266:
{
lean_object* x_173; 
if (lean_obj_tag(x_171) == 0)
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_251 = lean_ctor_get(x_171, 0);
lean_inc(x_251);
if (lean_is_exclusive(x_171)) {
 lean_ctor_release(x_171, 0);
 x_252 = x_171;
} else {
 lean_dec_ref(x_171);
 x_252 = lean_box(0);
}
if (lean_is_scalar(x_252)) {
 x_253 = lean_alloc_ctor(0, 1, 0);
} else {
 x_253 = x_252;
}
lean_ctor_set(x_253, 0, x_251);
x_173 = x_253;
goto block_250;
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; 
x_254 = lean_ctor_get(x_171, 0);
lean_inc(x_254);
lean_dec(x_171);
x_255 = lean_mk_string("params");
x_256 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__4(x_1, x_255);
lean_dec(x_255);
if (lean_obj_tag(x_256) == 0)
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; 
if (lean_is_exclusive(x_256)) {
 lean_ctor_release(x_256, 0);
 x_257 = x_256;
} else {
 lean_dec_ref(x_256);
 x_257 = lean_box(0);
}
x_258 = lean_box(0);
x_259 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_259, 0, x_254);
lean_ctor_set(x_259, 1, x_258);
if (lean_is_scalar(x_257)) {
 x_260 = lean_alloc_ctor(1, 1, 0);
} else {
 x_260 = x_257;
 lean_ctor_set_tag(x_260, 1);
}
lean_ctor_set(x_260, 0, x_259);
x_173 = x_260;
goto block_250;
}
else
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; 
x_261 = lean_ctor_get(x_256, 0);
lean_inc(x_261);
if (lean_is_exclusive(x_256)) {
 lean_ctor_release(x_256, 0);
 x_262 = x_256;
} else {
 lean_dec_ref(x_256);
 x_262 = lean_box(0);
}
x_263 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_263, 0, x_261);
x_264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_264, 0, x_254);
lean_ctor_set(x_264, 1, x_263);
if (lean_is_scalar(x_262)) {
 x_265 = lean_alloc_ctor(1, 1, 0);
} else {
 x_265 = x_262;
}
lean_ctor_set(x_265, 0, x_264);
x_173 = x_265;
goto block_250;
}
}
block_250:
{
lean_object* x_174; lean_object* x_185; lean_object* x_198; lean_object* x_199; 
if (lean_obj_tag(x_169) == 0)
{
lean_object* x_237; lean_object* x_238; lean_object* x_239; 
x_237 = lean_ctor_get(x_169, 0);
lean_inc(x_237);
if (lean_is_exclusive(x_169)) {
 lean_ctor_release(x_169, 0);
 x_238 = x_169;
} else {
 lean_dec_ref(x_169);
 x_238 = lean_box(0);
}
if (lean_is_scalar(x_238)) {
 x_239 = lean_alloc_ctor(0, 1, 0);
} else {
 x_239 = x_238;
}
lean_ctor_set(x_239, 0, x_237);
x_174 = x_239;
goto block_184;
}
else
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_240 = lean_ctor_get(x_169, 0);
lean_inc(x_240);
lean_dec(x_169);
x_241 = lean_mk_string("result");
x_242 = l_Lean_Json_getObjVal_x3f(x_1, x_241);
lean_dec(x_241);
if (lean_obj_tag(x_242) == 0)
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_243 = lean_ctor_get(x_242, 0);
lean_inc(x_243);
if (lean_is_exclusive(x_242)) {
 lean_ctor_release(x_242, 0);
 x_244 = x_242;
} else {
 lean_dec_ref(x_242);
 x_244 = lean_box(0);
}
if (lean_is_scalar(x_244)) {
 x_245 = lean_alloc_ctor(0, 1, 0);
} else {
 x_245 = x_244;
}
lean_ctor_set(x_245, 0, x_243);
x_198 = x_245;
x_199 = x_240;
goto block_236;
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
x_246 = lean_ctor_get(x_242, 0);
lean_inc(x_246);
if (lean_is_exclusive(x_242)) {
 lean_ctor_release(x_242, 0);
 x_247 = x_242;
} else {
 lean_dec_ref(x_242);
 x_247 = lean_box(0);
}
lean_inc(x_240);
x_248 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_248, 0, x_240);
lean_ctor_set(x_248, 1, x_246);
if (lean_is_scalar(x_247)) {
 x_249 = lean_alloc_ctor(1, 1, 0);
} else {
 x_249 = x_247;
}
lean_ctor_set(x_249, 0, x_248);
x_198 = x_249;
x_199 = x_240;
goto block_236;
}
}
block_184:
{
if (lean_obj_tag(x_173) == 0)
{
lean_dec(x_173);
if (lean_obj_tag(x_172) == 0)
{
lean_dec(x_172);
return x_174;
}
else
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_174);
x_175 = lean_ctor_get(x_172, 0);
lean_inc(x_175);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 x_176 = x_172;
} else {
 lean_dec_ref(x_172);
 x_176 = lean_box(0);
}
if (lean_is_scalar(x_176)) {
 x_177 = lean_alloc_ctor(1, 1, 0);
} else {
 x_177 = x_176;
}
lean_ctor_set(x_177, 0, x_175);
return x_177;
}
}
else
{
lean_dec(x_174);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 x_178 = x_172;
} else {
 lean_dec_ref(x_172);
 x_178 = lean_box(0);
}
x_179 = lean_ctor_get(x_173, 0);
lean_inc(x_179);
lean_dec(x_173);
if (lean_is_scalar(x_178)) {
 x_180 = lean_alloc_ctor(1, 1, 0);
} else {
 x_180 = x_178;
 lean_ctor_set_tag(x_180, 1);
}
lean_ctor_set(x_180, 0, x_179);
return x_180;
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; 
lean_dec(x_173);
x_181 = lean_ctor_get(x_172, 0);
lean_inc(x_181);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 x_182 = x_172;
} else {
 lean_dec_ref(x_172);
 x_182 = lean_box(0);
}
if (lean_is_scalar(x_182)) {
 x_183 = lean_alloc_ctor(1, 1, 0);
} else {
 x_183 = x_182;
}
lean_ctor_set(x_183, 0, x_181);
return x_183;
}
}
}
block_197:
{
if (lean_obj_tag(x_173) == 0)
{
lean_dec(x_173);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_186; lean_object* x_187; 
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 x_186 = x_172;
} else {
 lean_dec_ref(x_172);
 x_186 = lean_box(0);
}
if (lean_is_scalar(x_186)) {
 x_187 = lean_alloc_ctor(1, 1, 0);
} else {
 x_187 = x_186;
 lean_ctor_set_tag(x_187, 1);
}
lean_ctor_set(x_187, 0, x_185);
return x_187;
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; 
lean_dec(x_185);
x_188 = lean_ctor_get(x_172, 0);
lean_inc(x_188);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 x_189 = x_172;
} else {
 lean_dec_ref(x_172);
 x_189 = lean_box(0);
}
if (lean_is_scalar(x_189)) {
 x_190 = lean_alloc_ctor(1, 1, 0);
} else {
 x_190 = x_189;
}
lean_ctor_set(x_190, 0, x_188);
return x_190;
}
}
else
{
lean_dec(x_185);
if (lean_obj_tag(x_172) == 0)
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; 
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 x_191 = x_172;
} else {
 lean_dec_ref(x_172);
 x_191 = lean_box(0);
}
x_192 = lean_ctor_get(x_173, 0);
lean_inc(x_192);
lean_dec(x_173);
if (lean_is_scalar(x_191)) {
 x_193 = lean_alloc_ctor(1, 1, 0);
} else {
 x_193 = x_191;
 lean_ctor_set_tag(x_193, 1);
}
lean_ctor_set(x_193, 0, x_192);
return x_193;
}
else
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; 
lean_dec(x_173);
x_194 = lean_ctor_get(x_172, 0);
lean_inc(x_194);
if (lean_is_exclusive(x_172)) {
 lean_ctor_release(x_172, 0);
 x_195 = x_172;
} else {
 lean_dec_ref(x_172);
 x_195 = lean_box(0);
}
if (lean_is_scalar(x_195)) {
 x_196 = lean_alloc_ctor(1, 1, 0);
} else {
 x_196 = x_195;
}
lean_ctor_set(x_196, 0, x_194);
return x_196;
}
}
}
block_236:
{
lean_object* x_200; lean_object* x_201; 
x_200 = lean_mk_string("error");
x_201 = l_Lean_Json_getObjVal_x3f(x_1, x_200);
lean_dec(x_200);
if (lean_obj_tag(x_201) == 0)
{
lean_dec(x_199);
if (lean_obj_tag(x_198) == 0)
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; 
if (lean_is_exclusive(x_198)) {
 lean_ctor_release(x_198, 0);
 x_202 = x_198;
} else {
 lean_dec_ref(x_198);
 x_202 = lean_box(0);
}
x_203 = lean_ctor_get(x_201, 0);
lean_inc(x_203);
lean_dec(x_201);
if (lean_is_scalar(x_202)) {
 x_204 = lean_alloc_ctor(0, 1, 0);
} else {
 x_204 = x_202;
}
lean_ctor_set(x_204, 0, x_203);
x_174 = x_204;
goto block_184;
}
else
{
lean_object* x_205; 
lean_dec(x_201);
x_205 = lean_ctor_get(x_198, 0);
lean_inc(x_205);
lean_dec(x_198);
x_185 = x_205;
goto block_197;
}
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_206 = lean_ctor_get(x_201, 0);
lean_inc(x_206);
lean_dec(x_201);
x_207 = lean_mk_string("code");
x_208 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__3(x_206, x_207);
lean_dec(x_207);
if (lean_obj_tag(x_208) == 0)
{
lean_dec(x_206);
lean_dec(x_199);
if (lean_obj_tag(x_198) == 0)
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; 
if (lean_is_exclusive(x_198)) {
 lean_ctor_release(x_198, 0);
 x_209 = x_198;
} else {
 lean_dec_ref(x_198);
 x_209 = lean_box(0);
}
x_210 = lean_ctor_get(x_208, 0);
lean_inc(x_210);
lean_dec(x_208);
if (lean_is_scalar(x_209)) {
 x_211 = lean_alloc_ctor(0, 1, 0);
} else {
 x_211 = x_209;
}
lean_ctor_set(x_211, 0, x_210);
x_174 = x_211;
goto block_184;
}
else
{
lean_object* x_212; 
lean_dec(x_208);
x_212 = lean_ctor_get(x_198, 0);
lean_inc(x_212);
lean_dec(x_198);
x_185 = x_212;
goto block_197;
}
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_213 = lean_ctor_get(x_208, 0);
lean_inc(x_213);
lean_dec(x_208);
x_214 = lean_mk_string("message");
x_215 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(x_206, x_214);
lean_dec(x_214);
if (lean_obj_tag(x_215) == 0)
{
lean_dec(x_213);
lean_dec(x_206);
lean_dec(x_199);
if (lean_obj_tag(x_198) == 0)
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; 
if (lean_is_exclusive(x_198)) {
 lean_ctor_release(x_198, 0);
 x_216 = x_198;
} else {
 lean_dec_ref(x_198);
 x_216 = lean_box(0);
}
x_217 = lean_ctor_get(x_215, 0);
lean_inc(x_217);
lean_dec(x_215);
if (lean_is_scalar(x_216)) {
 x_218 = lean_alloc_ctor(0, 1, 0);
} else {
 x_218 = x_216;
}
lean_ctor_set(x_218, 0, x_217);
x_174 = x_218;
goto block_184;
}
else
{
lean_object* x_219; 
lean_dec(x_215);
x_219 = lean_ctor_get(x_198, 0);
lean_inc(x_219);
lean_dec(x_198);
x_185 = x_219;
goto block_197;
}
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_220 = lean_ctor_get(x_215, 0);
lean_inc(x_220);
lean_dec(x_215);
x_221 = lean_mk_string("data");
x_222 = l_Lean_Json_getObjVal_x3f(x_206, x_221);
lean_dec(x_221);
lean_dec(x_206);
if (lean_obj_tag(x_222) == 0)
{
lean_dec(x_222);
if (lean_obj_tag(x_198) == 0)
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; uint8_t x_226; lean_object* x_227; 
if (lean_is_exclusive(x_198)) {
 lean_ctor_release(x_198, 0);
 x_223 = x_198;
} else {
 lean_dec_ref(x_198);
 x_223 = lean_box(0);
}
x_224 = lean_box(0);
x_225 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_225, 0, x_199);
lean_ctor_set(x_225, 1, x_220);
lean_ctor_set(x_225, 2, x_224);
x_226 = lean_unbox(x_213);
lean_dec(x_213);
lean_ctor_set_uint8(x_225, sizeof(void*)*3, x_226);
if (lean_is_scalar(x_223)) {
 x_227 = lean_alloc_ctor(1, 1, 0);
} else {
 x_227 = x_223;
 lean_ctor_set_tag(x_227, 1);
}
lean_ctor_set(x_227, 0, x_225);
x_174 = x_227;
goto block_184;
}
else
{
lean_object* x_228; 
lean_dec(x_220);
lean_dec(x_213);
lean_dec(x_199);
x_228 = lean_ctor_get(x_198, 0);
lean_inc(x_228);
lean_dec(x_198);
x_185 = x_228;
goto block_197;
}
}
else
{
if (lean_obj_tag(x_198) == 0)
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; uint8_t x_233; lean_object* x_234; 
if (lean_is_exclusive(x_198)) {
 lean_ctor_release(x_198, 0);
 x_229 = x_198;
} else {
 lean_dec_ref(x_198);
 x_229 = lean_box(0);
}
x_230 = lean_ctor_get(x_222, 0);
lean_inc(x_230);
lean_dec(x_222);
x_231 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_231, 0, x_230);
x_232 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_232, 0, x_199);
lean_ctor_set(x_232, 1, x_220);
lean_ctor_set(x_232, 2, x_231);
x_233 = lean_unbox(x_213);
lean_dec(x_213);
lean_ctor_set_uint8(x_232, sizeof(void*)*3, x_233);
if (lean_is_scalar(x_229)) {
 x_234 = lean_alloc_ctor(1, 1, 0);
} else {
 x_234 = x_229;
 lean_ctor_set_tag(x_234, 1);
}
lean_ctor_set(x_234, 0, x_232);
x_174 = x_234;
goto block_184;
}
else
{
lean_object* x_235; 
lean_dec(x_222);
lean_dec(x_220);
lean_dec(x_213);
lean_dec(x_199);
x_235 = lean_ctor_get(x_198, 0);
lean_inc(x_235);
lean_dec(x_198);
x_185 = x_235;
goto block_197;
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
else
{
lean_object* x_284; lean_object* x_285; 
lean_dec(x_162);
x_284 = lean_mk_string("only version 2.0 of JSON RPC is supported");
x_285 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_285, 0, x_284);
return x_285;
}
}
}
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__3(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__4___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__4(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_JsonRpc_instFromJsonMessage___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_JsonRpc_instFromJsonMessage(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instFromJsonNotification_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
}
}
lean_object* l_Lean_JsonRpc_instFromJsonNotification_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instFromJsonNotification_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instFromJsonNotification___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_47; lean_object* x_48; 
x_47 = lean_mk_string("jsonrpc");
x_48 = l_Lean_Json_getObjVal_x3f(x_2, x_47);
lean_dec(x_47);
if (lean_obj_tag(x_48) == 0)
{
uint8_t x_49; 
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
return x_48;
}
else
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_ctor_get(x_48, 0);
lean_inc(x_50);
lean_dec(x_48);
x_51 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_51, 0, x_50);
return x_51;
}
}
else
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_48);
if (x_52 == 0)
{
lean_object* x_53; 
x_53 = lean_ctor_get(x_48, 0);
if (lean_obj_tag(x_53) == 3)
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
lean_dec(x_53);
x_55 = lean_mk_string("2.0");
x_56 = lean_string_dec_eq(x_54, x_55);
lean_dec(x_55);
lean_dec(x_54);
if (x_56 == 0)
{
lean_object* x_57; 
lean_dec(x_1);
x_57 = lean_mk_string("only version 2.0 of JSON RPC is supported");
lean_ctor_set_tag(x_48, 0);
lean_ctor_set(x_48, 0, x_57);
return x_48;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_58 = lean_mk_string("id");
x_59 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__1(x_2, x_58);
lean_dec(x_58);
x_60 = lean_mk_string("method");
x_61 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(x_2, x_60);
lean_dec(x_60);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_170; 
x_170 = lean_ctor_get(x_59, 0);
lean_inc(x_170);
lean_ctor_set_tag(x_48, 0);
lean_ctor_set(x_48, 0, x_170);
x_62 = x_48;
goto block_169;
}
else
{
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_171; 
x_171 = lean_ctor_get(x_61, 0);
lean_inc(x_171);
lean_ctor_set_tag(x_48, 0);
lean_ctor_set(x_48, 0, x_171);
x_62 = x_48;
goto block_169;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_free_object(x_48);
x_172 = lean_ctor_get(x_59, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_61, 0);
lean_inc(x_173);
x_174 = lean_mk_string("params");
x_175 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__4(x_2, x_174);
lean_dec(x_174);
if (lean_obj_tag(x_175) == 0)
{
uint8_t x_176; 
x_176 = !lean_is_exclusive(x_175);
if (x_176 == 0)
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; 
x_177 = lean_ctor_get(x_175, 0);
lean_dec(x_177);
x_178 = lean_box(0);
x_179 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_179, 0, x_172);
lean_ctor_set(x_179, 1, x_173);
lean_ctor_set(x_179, 2, x_178);
lean_ctor_set_tag(x_175, 1);
lean_ctor_set(x_175, 0, x_179);
x_62 = x_175;
goto block_169;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; 
lean_dec(x_175);
x_180 = lean_box(0);
x_181 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_181, 0, x_172);
lean_ctor_set(x_181, 1, x_173);
lean_ctor_set(x_181, 2, x_180);
x_182 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_182, 0, x_181);
x_62 = x_182;
goto block_169;
}
}
else
{
uint8_t x_183; 
x_183 = !lean_is_exclusive(x_175);
if (x_183 == 0)
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_184 = lean_ctor_get(x_175, 0);
x_185 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_185, 0, x_184);
x_186 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_186, 0, x_172);
lean_ctor_set(x_186, 1, x_173);
lean_ctor_set(x_186, 2, x_185);
lean_ctor_set(x_175, 0, x_186);
x_62 = x_175;
goto block_169;
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_187 = lean_ctor_get(x_175, 0);
lean_inc(x_187);
lean_dec(x_175);
x_188 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_188, 0, x_187);
x_189 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_189, 0, x_172);
lean_ctor_set(x_189, 1, x_173);
lean_ctor_set(x_189, 2, x_188);
x_190 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_190, 0, x_189);
x_62 = x_190;
goto block_169;
}
}
}
}
block_169:
{
lean_object* x_63; 
if (lean_obj_tag(x_61) == 0)
{
uint8_t x_148; 
x_148 = !lean_is_exclusive(x_61);
if (x_148 == 0)
{
x_63 = x_61;
goto block_147;
}
else
{
lean_object* x_149; lean_object* x_150; 
x_149 = lean_ctor_get(x_61, 0);
lean_inc(x_149);
lean_dec(x_61);
x_150 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_150, 0, x_149);
x_63 = x_150;
goto block_147;
}
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_151 = lean_ctor_get(x_61, 0);
lean_inc(x_151);
lean_dec(x_61);
x_152 = lean_mk_string("params");
x_153 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__4(x_2, x_152);
lean_dec(x_152);
if (lean_obj_tag(x_153) == 0)
{
uint8_t x_154; 
x_154 = !lean_is_exclusive(x_153);
if (x_154 == 0)
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_153, 0);
lean_dec(x_155);
x_156 = lean_box(0);
x_157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_157, 0, x_151);
lean_ctor_set(x_157, 1, x_156);
lean_ctor_set_tag(x_153, 1);
lean_ctor_set(x_153, 0, x_157);
x_63 = x_153;
goto block_147;
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec(x_153);
x_158 = lean_box(0);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_151);
lean_ctor_set(x_159, 1, x_158);
x_160 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_160, 0, x_159);
x_63 = x_160;
goto block_147;
}
}
else
{
uint8_t x_161; 
x_161 = !lean_is_exclusive(x_153);
if (x_161 == 0)
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_162 = lean_ctor_get(x_153, 0);
x_163 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_163, 0, x_162);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_151);
lean_ctor_set(x_164, 1, x_163);
lean_ctor_set(x_153, 0, x_164);
x_63 = x_153;
goto block_147;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_165 = lean_ctor_get(x_153, 0);
lean_inc(x_165);
lean_dec(x_153);
x_166 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_166, 0, x_165);
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_151);
lean_ctor_set(x_167, 1, x_166);
x_168 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_168, 0, x_167);
x_63 = x_168;
goto block_147;
}
}
}
block_147:
{
lean_object* x_64; lean_object* x_73; lean_object* x_78; lean_object* x_79; 
if (lean_obj_tag(x_59) == 0)
{
uint8_t x_132; 
x_132 = !lean_is_exclusive(x_59);
if (x_132 == 0)
{
x_64 = x_59;
goto block_72;
}
else
{
lean_object* x_133; lean_object* x_134; 
x_133 = lean_ctor_get(x_59, 0);
lean_inc(x_133);
lean_dec(x_59);
x_134 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_134, 0, x_133);
x_64 = x_134;
goto block_72;
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_59, 0);
lean_inc(x_135);
lean_dec(x_59);
x_136 = lean_mk_string("result");
x_137 = l_Lean_Json_getObjVal_x3f(x_2, x_136);
lean_dec(x_136);
if (lean_obj_tag(x_137) == 0)
{
uint8_t x_138; 
x_138 = !lean_is_exclusive(x_137);
if (x_138 == 0)
{
x_78 = x_137;
x_79 = x_135;
goto block_131;
}
else
{
lean_object* x_139; lean_object* x_140; 
x_139 = lean_ctor_get(x_137, 0);
lean_inc(x_139);
lean_dec(x_137);
x_140 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_140, 0, x_139);
x_78 = x_140;
x_79 = x_135;
goto block_131;
}
}
else
{
uint8_t x_141; 
x_141 = !lean_is_exclusive(x_137);
if (x_141 == 0)
{
lean_object* x_142; lean_object* x_143; 
x_142 = lean_ctor_get(x_137, 0);
lean_inc(x_135);
x_143 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_143, 0, x_135);
lean_ctor_set(x_143, 1, x_142);
lean_ctor_set(x_137, 0, x_143);
x_78 = x_137;
x_79 = x_135;
goto block_131;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_137, 0);
lean_inc(x_144);
lean_dec(x_137);
lean_inc(x_135);
x_145 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_145, 0, x_135);
lean_ctor_set(x_145, 1, x_144);
x_146 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_146, 0, x_145);
x_78 = x_146;
x_79 = x_135;
goto block_131;
}
}
}
block_72:
{
if (lean_obj_tag(x_63) == 0)
{
lean_dec(x_63);
if (lean_obj_tag(x_62) == 0)
{
lean_dec(x_62);
if (lean_obj_tag(x_64) == 0)
{
uint8_t x_65; 
lean_dec(x_1);
x_65 = !lean_is_exclusive(x_64);
if (x_65 == 0)
{
return x_64;
}
else
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_64, 0);
lean_inc(x_66);
lean_dec(x_64);
x_67 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_67, 0, x_66);
return x_67;
}
}
else
{
lean_object* x_68; 
x_68 = lean_ctor_get(x_64, 0);
lean_inc(x_68);
lean_dec(x_64);
x_3 = x_68;
goto block_46;
}
}
else
{
lean_object* x_69; 
lean_dec(x_64);
x_69 = lean_ctor_get(x_62, 0);
lean_inc(x_69);
lean_dec(x_62);
x_3 = x_69;
goto block_46;
}
}
else
{
lean_dec(x_64);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_70; 
lean_dec(x_62);
x_70 = lean_ctor_get(x_63, 0);
lean_inc(x_70);
lean_dec(x_63);
x_3 = x_70;
goto block_46;
}
else
{
lean_object* x_71; 
lean_dec(x_63);
x_71 = lean_ctor_get(x_62, 0);
lean_inc(x_71);
lean_dec(x_62);
x_3 = x_71;
goto block_46;
}
}
}
block_77:
{
if (lean_obj_tag(x_63) == 0)
{
lean_dec(x_63);
if (lean_obj_tag(x_62) == 0)
{
lean_dec(x_62);
x_3 = x_73;
goto block_46;
}
else
{
lean_object* x_74; 
lean_dec(x_73);
x_74 = lean_ctor_get(x_62, 0);
lean_inc(x_74);
lean_dec(x_62);
x_3 = x_74;
goto block_46;
}
}
else
{
lean_dec(x_73);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_75; 
lean_dec(x_62);
x_75 = lean_ctor_get(x_63, 0);
lean_inc(x_75);
lean_dec(x_63);
x_3 = x_75;
goto block_46;
}
else
{
lean_object* x_76; 
lean_dec(x_63);
x_76 = lean_ctor_get(x_62, 0);
lean_inc(x_76);
lean_dec(x_62);
x_3 = x_76;
goto block_46;
}
}
}
block_131:
{
lean_object* x_80; lean_object* x_81; 
x_80 = lean_mk_string("error");
x_81 = l_Lean_Json_getObjVal_x3f(x_2, x_80);
lean_dec(x_80);
if (lean_obj_tag(x_81) == 0)
{
lean_dec(x_79);
if (lean_obj_tag(x_78) == 0)
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_78);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_78, 0);
lean_dec(x_83);
x_84 = lean_ctor_get(x_81, 0);
lean_inc(x_84);
lean_dec(x_81);
lean_ctor_set(x_78, 0, x_84);
x_64 = x_78;
goto block_72;
}
else
{
lean_object* x_85; lean_object* x_86; 
lean_dec(x_78);
x_85 = lean_ctor_get(x_81, 0);
lean_inc(x_85);
lean_dec(x_81);
x_86 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_86, 0, x_85);
x_64 = x_86;
goto block_72;
}
}
else
{
lean_object* x_87; 
lean_dec(x_81);
x_87 = lean_ctor_get(x_78, 0);
lean_inc(x_87);
lean_dec(x_78);
x_73 = x_87;
goto block_77;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_81, 0);
lean_inc(x_88);
lean_dec(x_81);
x_89 = lean_mk_string("code");
x_90 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__3(x_88, x_89);
lean_dec(x_89);
if (lean_obj_tag(x_90) == 0)
{
lean_dec(x_88);
lean_dec(x_79);
if (lean_obj_tag(x_78) == 0)
{
uint8_t x_91; 
x_91 = !lean_is_exclusive(x_78);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_ctor_get(x_78, 0);
lean_dec(x_92);
x_93 = lean_ctor_get(x_90, 0);
lean_inc(x_93);
lean_dec(x_90);
lean_ctor_set(x_78, 0, x_93);
x_64 = x_78;
goto block_72;
}
else
{
lean_object* x_94; lean_object* x_95; 
lean_dec(x_78);
x_94 = lean_ctor_get(x_90, 0);
lean_inc(x_94);
lean_dec(x_90);
x_95 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_95, 0, x_94);
x_64 = x_95;
goto block_72;
}
}
else
{
lean_object* x_96; 
lean_dec(x_90);
x_96 = lean_ctor_get(x_78, 0);
lean_inc(x_96);
lean_dec(x_78);
x_73 = x_96;
goto block_77;
}
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_90, 0);
lean_inc(x_97);
lean_dec(x_90);
x_98 = lean_mk_string("message");
x_99 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(x_88, x_98);
lean_dec(x_98);
if (lean_obj_tag(x_99) == 0)
{
lean_dec(x_97);
lean_dec(x_88);
lean_dec(x_79);
if (lean_obj_tag(x_78) == 0)
{
uint8_t x_100; 
x_100 = !lean_is_exclusive(x_78);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; 
x_101 = lean_ctor_get(x_78, 0);
lean_dec(x_101);
x_102 = lean_ctor_get(x_99, 0);
lean_inc(x_102);
lean_dec(x_99);
lean_ctor_set(x_78, 0, x_102);
x_64 = x_78;
goto block_72;
}
else
{
lean_object* x_103; lean_object* x_104; 
lean_dec(x_78);
x_103 = lean_ctor_get(x_99, 0);
lean_inc(x_103);
lean_dec(x_99);
x_104 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_104, 0, x_103);
x_64 = x_104;
goto block_72;
}
}
else
{
lean_object* x_105; 
lean_dec(x_99);
x_105 = lean_ctor_get(x_78, 0);
lean_inc(x_105);
lean_dec(x_78);
x_73 = x_105;
goto block_77;
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_99, 0);
lean_inc(x_106);
lean_dec(x_99);
x_107 = lean_mk_string("data");
x_108 = l_Lean_Json_getObjVal_x3f(x_88, x_107);
lean_dec(x_107);
lean_dec(x_88);
if (lean_obj_tag(x_108) == 0)
{
lean_dec(x_108);
if (lean_obj_tag(x_78) == 0)
{
uint8_t x_109; 
x_109 = !lean_is_exclusive(x_78);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_110 = lean_ctor_get(x_78, 0);
lean_dec(x_110);
x_111 = lean_box(0);
x_112 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_112, 0, x_79);
lean_ctor_set(x_112, 1, x_106);
lean_ctor_set(x_112, 2, x_111);
x_113 = lean_unbox(x_97);
lean_dec(x_97);
lean_ctor_set_uint8(x_112, sizeof(void*)*3, x_113);
lean_ctor_set_tag(x_78, 1);
lean_ctor_set(x_78, 0, x_112);
x_64 = x_78;
goto block_72;
}
else
{
lean_object* x_114; lean_object* x_115; uint8_t x_116; lean_object* x_117; 
lean_dec(x_78);
x_114 = lean_box(0);
x_115 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_115, 0, x_79);
lean_ctor_set(x_115, 1, x_106);
lean_ctor_set(x_115, 2, x_114);
x_116 = lean_unbox(x_97);
lean_dec(x_97);
lean_ctor_set_uint8(x_115, sizeof(void*)*3, x_116);
x_117 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_117, 0, x_115);
x_64 = x_117;
goto block_72;
}
}
else
{
lean_object* x_118; 
lean_dec(x_106);
lean_dec(x_97);
lean_dec(x_79);
x_118 = lean_ctor_get(x_78, 0);
lean_inc(x_118);
lean_dec(x_78);
x_73 = x_118;
goto block_77;
}
}
else
{
if (lean_obj_tag(x_78) == 0)
{
uint8_t x_119; 
x_119 = !lean_is_exclusive(x_78);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_120 = lean_ctor_get(x_78, 0);
lean_dec(x_120);
x_121 = lean_ctor_get(x_108, 0);
lean_inc(x_121);
lean_dec(x_108);
x_122 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_122, 0, x_121);
x_123 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_123, 0, x_79);
lean_ctor_set(x_123, 1, x_106);
lean_ctor_set(x_123, 2, x_122);
x_124 = lean_unbox(x_97);
lean_dec(x_97);
lean_ctor_set_uint8(x_123, sizeof(void*)*3, x_124);
lean_ctor_set_tag(x_78, 1);
lean_ctor_set(x_78, 0, x_123);
x_64 = x_78;
goto block_72;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; lean_object* x_129; 
lean_dec(x_78);
x_125 = lean_ctor_get(x_108, 0);
lean_inc(x_125);
lean_dec(x_108);
x_126 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_126, 0, x_125);
x_127 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_127, 0, x_79);
lean_ctor_set(x_127, 1, x_106);
lean_ctor_set(x_127, 2, x_126);
x_128 = lean_unbox(x_97);
lean_dec(x_97);
lean_ctor_set_uint8(x_127, sizeof(void*)*3, x_128);
x_129 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_129, 0, x_127);
x_64 = x_129;
goto block_72;
}
}
else
{
lean_object* x_130; 
lean_dec(x_108);
lean_dec(x_106);
lean_dec(x_97);
lean_dec(x_79);
x_130 = lean_ctor_get(x_78, 0);
lean_inc(x_130);
lean_dec(x_78);
x_73 = x_130;
goto block_77;
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
else
{
lean_object* x_191; 
lean_dec(x_53);
lean_dec(x_1);
x_191 = lean_mk_string("only version 2.0 of JSON RPC is supported");
lean_ctor_set_tag(x_48, 0);
lean_ctor_set(x_48, 0, x_191);
return x_48;
}
}
else
{
lean_object* x_192; 
x_192 = lean_ctor_get(x_48, 0);
lean_inc(x_192);
lean_dec(x_48);
if (lean_obj_tag(x_192) == 3)
{
lean_object* x_193; lean_object* x_194; uint8_t x_195; 
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
lean_dec(x_192);
x_194 = lean_mk_string("2.0");
x_195 = lean_string_dec_eq(x_193, x_194);
lean_dec(x_194);
lean_dec(x_193);
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; 
lean_dec(x_1);
x_196 = lean_mk_string("only version 2.0 of JSON RPC is supported");
x_197 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_197, 0, x_196);
return x_197;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_198 = lean_mk_string("id");
x_199 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__1(x_2, x_198);
lean_dec(x_198);
x_200 = lean_mk_string("method");
x_201 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(x_2, x_200);
lean_dec(x_200);
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_287; lean_object* x_288; 
x_287 = lean_ctor_get(x_199, 0);
lean_inc(x_287);
x_288 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_288, 0, x_287);
x_202 = x_288;
goto block_286;
}
else
{
if (lean_obj_tag(x_201) == 0)
{
lean_object* x_289; lean_object* x_290; 
x_289 = lean_ctor_get(x_201, 0);
lean_inc(x_289);
x_290 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_290, 0, x_289);
x_202 = x_290;
goto block_286;
}
else
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; 
x_291 = lean_ctor_get(x_199, 0);
lean_inc(x_291);
x_292 = lean_ctor_get(x_201, 0);
lean_inc(x_292);
x_293 = lean_mk_string("params");
x_294 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__4(x_2, x_293);
lean_dec(x_293);
if (lean_obj_tag(x_294) == 0)
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; 
if (lean_is_exclusive(x_294)) {
 lean_ctor_release(x_294, 0);
 x_295 = x_294;
} else {
 lean_dec_ref(x_294);
 x_295 = lean_box(0);
}
x_296 = lean_box(0);
x_297 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_297, 0, x_291);
lean_ctor_set(x_297, 1, x_292);
lean_ctor_set(x_297, 2, x_296);
if (lean_is_scalar(x_295)) {
 x_298 = lean_alloc_ctor(1, 1, 0);
} else {
 x_298 = x_295;
 lean_ctor_set_tag(x_298, 1);
}
lean_ctor_set(x_298, 0, x_297);
x_202 = x_298;
goto block_286;
}
else
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; 
x_299 = lean_ctor_get(x_294, 0);
lean_inc(x_299);
if (lean_is_exclusive(x_294)) {
 lean_ctor_release(x_294, 0);
 x_300 = x_294;
} else {
 lean_dec_ref(x_294);
 x_300 = lean_box(0);
}
x_301 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_301, 0, x_299);
x_302 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_302, 0, x_291);
lean_ctor_set(x_302, 1, x_292);
lean_ctor_set(x_302, 2, x_301);
if (lean_is_scalar(x_300)) {
 x_303 = lean_alloc_ctor(1, 1, 0);
} else {
 x_303 = x_300;
}
lean_ctor_set(x_303, 0, x_302);
x_202 = x_303;
goto block_286;
}
}
}
block_286:
{
lean_object* x_203; 
if (lean_obj_tag(x_201) == 0)
{
lean_object* x_271; lean_object* x_272; lean_object* x_273; 
x_271 = lean_ctor_get(x_201, 0);
lean_inc(x_271);
if (lean_is_exclusive(x_201)) {
 lean_ctor_release(x_201, 0);
 x_272 = x_201;
} else {
 lean_dec_ref(x_201);
 x_272 = lean_box(0);
}
if (lean_is_scalar(x_272)) {
 x_273 = lean_alloc_ctor(0, 1, 0);
} else {
 x_273 = x_272;
}
lean_ctor_set(x_273, 0, x_271);
x_203 = x_273;
goto block_270;
}
else
{
lean_object* x_274; lean_object* x_275; lean_object* x_276; 
x_274 = lean_ctor_get(x_201, 0);
lean_inc(x_274);
lean_dec(x_201);
x_275 = lean_mk_string("params");
x_276 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__4(x_2, x_275);
lean_dec(x_275);
if (lean_obj_tag(x_276) == 0)
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; 
if (lean_is_exclusive(x_276)) {
 lean_ctor_release(x_276, 0);
 x_277 = x_276;
} else {
 lean_dec_ref(x_276);
 x_277 = lean_box(0);
}
x_278 = lean_box(0);
x_279 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_279, 0, x_274);
lean_ctor_set(x_279, 1, x_278);
if (lean_is_scalar(x_277)) {
 x_280 = lean_alloc_ctor(1, 1, 0);
} else {
 x_280 = x_277;
 lean_ctor_set_tag(x_280, 1);
}
lean_ctor_set(x_280, 0, x_279);
x_203 = x_280;
goto block_270;
}
else
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; 
x_281 = lean_ctor_get(x_276, 0);
lean_inc(x_281);
if (lean_is_exclusive(x_276)) {
 lean_ctor_release(x_276, 0);
 x_282 = x_276;
} else {
 lean_dec_ref(x_276);
 x_282 = lean_box(0);
}
x_283 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_283, 0, x_281);
x_284 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_284, 0, x_274);
lean_ctor_set(x_284, 1, x_283);
if (lean_is_scalar(x_282)) {
 x_285 = lean_alloc_ctor(1, 1, 0);
} else {
 x_285 = x_282;
}
lean_ctor_set(x_285, 0, x_284);
x_203 = x_285;
goto block_270;
}
}
block_270:
{
lean_object* x_204; lean_object* x_213; lean_object* x_218; lean_object* x_219; 
if (lean_obj_tag(x_199) == 0)
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; 
x_257 = lean_ctor_get(x_199, 0);
lean_inc(x_257);
if (lean_is_exclusive(x_199)) {
 lean_ctor_release(x_199, 0);
 x_258 = x_199;
} else {
 lean_dec_ref(x_199);
 x_258 = lean_box(0);
}
if (lean_is_scalar(x_258)) {
 x_259 = lean_alloc_ctor(0, 1, 0);
} else {
 x_259 = x_258;
}
lean_ctor_set(x_259, 0, x_257);
x_204 = x_259;
goto block_212;
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; 
x_260 = lean_ctor_get(x_199, 0);
lean_inc(x_260);
lean_dec(x_199);
x_261 = lean_mk_string("result");
x_262 = l_Lean_Json_getObjVal_x3f(x_2, x_261);
lean_dec(x_261);
if (lean_obj_tag(x_262) == 0)
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; 
x_263 = lean_ctor_get(x_262, 0);
lean_inc(x_263);
if (lean_is_exclusive(x_262)) {
 lean_ctor_release(x_262, 0);
 x_264 = x_262;
} else {
 lean_dec_ref(x_262);
 x_264 = lean_box(0);
}
if (lean_is_scalar(x_264)) {
 x_265 = lean_alloc_ctor(0, 1, 0);
} else {
 x_265 = x_264;
}
lean_ctor_set(x_265, 0, x_263);
x_218 = x_265;
x_219 = x_260;
goto block_256;
}
else
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_266 = lean_ctor_get(x_262, 0);
lean_inc(x_266);
if (lean_is_exclusive(x_262)) {
 lean_ctor_release(x_262, 0);
 x_267 = x_262;
} else {
 lean_dec_ref(x_262);
 x_267 = lean_box(0);
}
lean_inc(x_260);
x_268 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_268, 0, x_260);
lean_ctor_set(x_268, 1, x_266);
if (lean_is_scalar(x_267)) {
 x_269 = lean_alloc_ctor(1, 1, 0);
} else {
 x_269 = x_267;
}
lean_ctor_set(x_269, 0, x_268);
x_218 = x_269;
x_219 = x_260;
goto block_256;
}
}
block_212:
{
if (lean_obj_tag(x_203) == 0)
{
lean_dec(x_203);
if (lean_obj_tag(x_202) == 0)
{
lean_dec(x_202);
if (lean_obj_tag(x_204) == 0)
{
lean_object* x_205; lean_object* x_206; lean_object* x_207; 
lean_dec(x_1);
x_205 = lean_ctor_get(x_204, 0);
lean_inc(x_205);
if (lean_is_exclusive(x_204)) {
 lean_ctor_release(x_204, 0);
 x_206 = x_204;
} else {
 lean_dec_ref(x_204);
 x_206 = lean_box(0);
}
if (lean_is_scalar(x_206)) {
 x_207 = lean_alloc_ctor(0, 1, 0);
} else {
 x_207 = x_206;
}
lean_ctor_set(x_207, 0, x_205);
return x_207;
}
else
{
lean_object* x_208; 
x_208 = lean_ctor_get(x_204, 0);
lean_inc(x_208);
lean_dec(x_204);
x_3 = x_208;
goto block_46;
}
}
else
{
lean_object* x_209; 
lean_dec(x_204);
x_209 = lean_ctor_get(x_202, 0);
lean_inc(x_209);
lean_dec(x_202);
x_3 = x_209;
goto block_46;
}
}
else
{
lean_dec(x_204);
if (lean_obj_tag(x_202) == 0)
{
lean_object* x_210; 
lean_dec(x_202);
x_210 = lean_ctor_get(x_203, 0);
lean_inc(x_210);
lean_dec(x_203);
x_3 = x_210;
goto block_46;
}
else
{
lean_object* x_211; 
lean_dec(x_203);
x_211 = lean_ctor_get(x_202, 0);
lean_inc(x_211);
lean_dec(x_202);
x_3 = x_211;
goto block_46;
}
}
}
block_217:
{
if (lean_obj_tag(x_203) == 0)
{
lean_dec(x_203);
if (lean_obj_tag(x_202) == 0)
{
lean_dec(x_202);
x_3 = x_213;
goto block_46;
}
else
{
lean_object* x_214; 
lean_dec(x_213);
x_214 = lean_ctor_get(x_202, 0);
lean_inc(x_214);
lean_dec(x_202);
x_3 = x_214;
goto block_46;
}
}
else
{
lean_dec(x_213);
if (lean_obj_tag(x_202) == 0)
{
lean_object* x_215; 
lean_dec(x_202);
x_215 = lean_ctor_get(x_203, 0);
lean_inc(x_215);
lean_dec(x_203);
x_3 = x_215;
goto block_46;
}
else
{
lean_object* x_216; 
lean_dec(x_203);
x_216 = lean_ctor_get(x_202, 0);
lean_inc(x_216);
lean_dec(x_202);
x_3 = x_216;
goto block_46;
}
}
}
block_256:
{
lean_object* x_220; lean_object* x_221; 
x_220 = lean_mk_string("error");
x_221 = l_Lean_Json_getObjVal_x3f(x_2, x_220);
lean_dec(x_220);
if (lean_obj_tag(x_221) == 0)
{
lean_dec(x_219);
if (lean_obj_tag(x_218) == 0)
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; 
if (lean_is_exclusive(x_218)) {
 lean_ctor_release(x_218, 0);
 x_222 = x_218;
} else {
 lean_dec_ref(x_218);
 x_222 = lean_box(0);
}
x_223 = lean_ctor_get(x_221, 0);
lean_inc(x_223);
lean_dec(x_221);
if (lean_is_scalar(x_222)) {
 x_224 = lean_alloc_ctor(0, 1, 0);
} else {
 x_224 = x_222;
}
lean_ctor_set(x_224, 0, x_223);
x_204 = x_224;
goto block_212;
}
else
{
lean_object* x_225; 
lean_dec(x_221);
x_225 = lean_ctor_get(x_218, 0);
lean_inc(x_225);
lean_dec(x_218);
x_213 = x_225;
goto block_217;
}
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; 
x_226 = lean_ctor_get(x_221, 0);
lean_inc(x_226);
lean_dec(x_221);
x_227 = lean_mk_string("code");
x_228 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__3(x_226, x_227);
lean_dec(x_227);
if (lean_obj_tag(x_228) == 0)
{
lean_dec(x_226);
lean_dec(x_219);
if (lean_obj_tag(x_218) == 0)
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; 
if (lean_is_exclusive(x_218)) {
 lean_ctor_release(x_218, 0);
 x_229 = x_218;
} else {
 lean_dec_ref(x_218);
 x_229 = lean_box(0);
}
x_230 = lean_ctor_get(x_228, 0);
lean_inc(x_230);
lean_dec(x_228);
if (lean_is_scalar(x_229)) {
 x_231 = lean_alloc_ctor(0, 1, 0);
} else {
 x_231 = x_229;
}
lean_ctor_set(x_231, 0, x_230);
x_204 = x_231;
goto block_212;
}
else
{
lean_object* x_232; 
lean_dec(x_228);
x_232 = lean_ctor_get(x_218, 0);
lean_inc(x_232);
lean_dec(x_218);
x_213 = x_232;
goto block_217;
}
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_233 = lean_ctor_get(x_228, 0);
lean_inc(x_233);
lean_dec(x_228);
x_234 = lean_mk_string("message");
x_235 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(x_226, x_234);
lean_dec(x_234);
if (lean_obj_tag(x_235) == 0)
{
lean_dec(x_233);
lean_dec(x_226);
lean_dec(x_219);
if (lean_obj_tag(x_218) == 0)
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; 
if (lean_is_exclusive(x_218)) {
 lean_ctor_release(x_218, 0);
 x_236 = x_218;
} else {
 lean_dec_ref(x_218);
 x_236 = lean_box(0);
}
x_237 = lean_ctor_get(x_235, 0);
lean_inc(x_237);
lean_dec(x_235);
if (lean_is_scalar(x_236)) {
 x_238 = lean_alloc_ctor(0, 1, 0);
} else {
 x_238 = x_236;
}
lean_ctor_set(x_238, 0, x_237);
x_204 = x_238;
goto block_212;
}
else
{
lean_object* x_239; 
lean_dec(x_235);
x_239 = lean_ctor_get(x_218, 0);
lean_inc(x_239);
lean_dec(x_218);
x_213 = x_239;
goto block_217;
}
}
else
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_240 = lean_ctor_get(x_235, 0);
lean_inc(x_240);
lean_dec(x_235);
x_241 = lean_mk_string("data");
x_242 = l_Lean_Json_getObjVal_x3f(x_226, x_241);
lean_dec(x_241);
lean_dec(x_226);
if (lean_obj_tag(x_242) == 0)
{
lean_dec(x_242);
if (lean_obj_tag(x_218) == 0)
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; uint8_t x_246; lean_object* x_247; 
if (lean_is_exclusive(x_218)) {
 lean_ctor_release(x_218, 0);
 x_243 = x_218;
} else {
 lean_dec_ref(x_218);
 x_243 = lean_box(0);
}
x_244 = lean_box(0);
x_245 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_245, 0, x_219);
lean_ctor_set(x_245, 1, x_240);
lean_ctor_set(x_245, 2, x_244);
x_246 = lean_unbox(x_233);
lean_dec(x_233);
lean_ctor_set_uint8(x_245, sizeof(void*)*3, x_246);
if (lean_is_scalar(x_243)) {
 x_247 = lean_alloc_ctor(1, 1, 0);
} else {
 x_247 = x_243;
 lean_ctor_set_tag(x_247, 1);
}
lean_ctor_set(x_247, 0, x_245);
x_204 = x_247;
goto block_212;
}
else
{
lean_object* x_248; 
lean_dec(x_240);
lean_dec(x_233);
lean_dec(x_219);
x_248 = lean_ctor_get(x_218, 0);
lean_inc(x_248);
lean_dec(x_218);
x_213 = x_248;
goto block_217;
}
}
else
{
if (lean_obj_tag(x_218) == 0)
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; uint8_t x_253; lean_object* x_254; 
if (lean_is_exclusive(x_218)) {
 lean_ctor_release(x_218, 0);
 x_249 = x_218;
} else {
 lean_dec_ref(x_218);
 x_249 = lean_box(0);
}
x_250 = lean_ctor_get(x_242, 0);
lean_inc(x_250);
lean_dec(x_242);
x_251 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_251, 0, x_250);
x_252 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_252, 0, x_219);
lean_ctor_set(x_252, 1, x_240);
lean_ctor_set(x_252, 2, x_251);
x_253 = lean_unbox(x_233);
lean_dec(x_233);
lean_ctor_set_uint8(x_252, sizeof(void*)*3, x_253);
if (lean_is_scalar(x_249)) {
 x_254 = lean_alloc_ctor(1, 1, 0);
} else {
 x_254 = x_249;
 lean_ctor_set_tag(x_254, 1);
}
lean_ctor_set(x_254, 0, x_252);
x_204 = x_254;
goto block_212;
}
else
{
lean_object* x_255; 
lean_dec(x_242);
lean_dec(x_240);
lean_dec(x_233);
lean_dec(x_219);
x_255 = lean_ctor_get(x_218, 0);
lean_inc(x_255);
lean_dec(x_218);
x_213 = x_255;
goto block_217;
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
else
{
lean_object* x_304; lean_object* x_305; 
lean_dec(x_192);
lean_dec(x_1);
x_304 = lean_mk_string("only version 2.0 of JSON RPC is supported");
x_305 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_305, 0, x_304);
return x_305;
}
}
}
block_46:
{
if (lean_obj_tag(x_3) == 1)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_1, x_6);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
return x_7;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set(x_7, 0, x_13);
return x_7;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_7, 0);
lean_inc(x_14);
lean_dec(x_7);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_5);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
}
else
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_4, 0);
lean_inc(x_17);
lean_dec(x_4);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_3, 0);
lean_inc(x_18);
lean_dec(x_3);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_apply_1(x_1, x_20);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
lean_dec(x_18);
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
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_21);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_21, 0);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_18);
lean_ctor_set(x_27, 1, x_26);
lean_ctor_set(x_21, 0, x_27);
return x_21;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_21, 0);
lean_inc(x_28);
lean_dec(x_21);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_18);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_3, 0);
lean_inc(x_31);
lean_dec(x_3);
x_32 = lean_ctor_get(x_17, 0);
lean_inc(x_32);
lean_dec(x_17);
x_33 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = lean_apply_1(x_1, x_33);
if (lean_obj_tag(x_34) == 0)
{
uint8_t x_35; 
lean_dec(x_31);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
return x_34;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_34, 0);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_37, 0, x_36);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_34);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_34, 0);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_31);
lean_ctor_set(x_40, 1, x_39);
lean_ctor_set(x_34, 0, x_40);
return x_34;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_34, 0);
lean_inc(x_41);
lean_dec(x_34);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_31);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
return x_43;
}
}
}
}
}
else
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_3);
lean_dec(x_1);
x_44 = lean_mk_string("not a notfication");
x_45 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_45, 0, x_44);
return x_45;
}
}
}
}
lean_object* l_Lean_JsonRpc_instFromJsonNotification___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instFromJsonNotification___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instFromJsonNotification(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_JsonRpc_instFromJsonNotification___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_JsonRpc_instFromJsonNotification___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_JsonRpc_instFromJsonNotification___rarg___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_IO_FS_Stream_readMessage_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_IO_FS_Stream_readMessage_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Stream_readMessage_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_FS_Stream_readMessage(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Stream_readJson(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_20; lean_object* x_21; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_7 = x_4;
} else {
 lean_dec_ref(x_4);
 x_7 = lean_box(0);
}
x_20 = lean_mk_string("jsonrpc");
x_21 = l_Lean_Json_getObjVal_x3f(x_5, x_20);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
x_8 = x_22;
goto block_19;
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_21, 0);
if (lean_obj_tag(x_24) == 3)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_mk_string("2.0");
x_27 = lean_string_dec_eq(x_25, x_26);
lean_dec(x_26);
lean_dec(x_25);
if (x_27 == 0)
{
lean_object* x_28; 
lean_free_object(x_21);
x_28 = lean_mk_string("only version 2.0 of JSON RPC is supported");
x_8 = x_28;
goto block_19;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_mk_string("id");
x_30 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__1(x_5, x_29);
lean_dec(x_29);
x_31 = lean_mk_string("method");
x_32 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(x_5, x_31);
lean_dec(x_31);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_147; 
x_147 = lean_ctor_get(x_30, 0);
lean_inc(x_147);
lean_ctor_set_tag(x_21, 0);
lean_ctor_set(x_21, 0, x_147);
x_33 = x_21;
goto block_146;
}
else
{
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_148; 
x_148 = lean_ctor_get(x_32, 0);
lean_inc(x_148);
lean_ctor_set_tag(x_21, 0);
lean_ctor_set(x_21, 0, x_148);
x_33 = x_21;
goto block_146;
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_free_object(x_21);
x_149 = lean_ctor_get(x_30, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_32, 0);
lean_inc(x_150);
x_151 = lean_mk_string("params");
x_152 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__4(x_5, x_151);
lean_dec(x_151);
if (lean_obj_tag(x_152) == 0)
{
uint8_t x_153; 
x_153 = !lean_is_exclusive(x_152);
if (x_153 == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; 
x_154 = lean_ctor_get(x_152, 0);
lean_dec(x_154);
x_155 = lean_box(0);
x_156 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_156, 0, x_149);
lean_ctor_set(x_156, 1, x_150);
lean_ctor_set(x_156, 2, x_155);
lean_ctor_set_tag(x_152, 1);
lean_ctor_set(x_152, 0, x_156);
x_33 = x_152;
goto block_146;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; 
lean_dec(x_152);
x_157 = lean_box(0);
x_158 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_158, 0, x_149);
lean_ctor_set(x_158, 1, x_150);
lean_ctor_set(x_158, 2, x_157);
x_159 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_159, 0, x_158);
x_33 = x_159;
goto block_146;
}
}
else
{
uint8_t x_160; 
x_160 = !lean_is_exclusive(x_152);
if (x_160 == 0)
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_161 = lean_ctor_get(x_152, 0);
x_162 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_162, 0, x_161);
x_163 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_163, 0, x_149);
lean_ctor_set(x_163, 1, x_150);
lean_ctor_set(x_163, 2, x_162);
lean_ctor_set(x_152, 0, x_163);
x_33 = x_152;
goto block_146;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_164 = lean_ctor_get(x_152, 0);
lean_inc(x_164);
lean_dec(x_152);
x_165 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_165, 0, x_164);
x_166 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_166, 0, x_149);
lean_ctor_set(x_166, 1, x_150);
lean_ctor_set(x_166, 2, x_165);
x_167 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_167, 0, x_166);
x_33 = x_167;
goto block_146;
}
}
}
}
block_146:
{
lean_object* x_34; 
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_125; 
x_125 = !lean_is_exclusive(x_32);
if (x_125 == 0)
{
x_34 = x_32;
goto block_124;
}
else
{
lean_object* x_126; lean_object* x_127; 
x_126 = lean_ctor_get(x_32, 0);
lean_inc(x_126);
lean_dec(x_32);
x_127 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_127, 0, x_126);
x_34 = x_127;
goto block_124;
}
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_32, 0);
lean_inc(x_128);
lean_dec(x_32);
x_129 = lean_mk_string("params");
x_130 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__4(x_5, x_129);
lean_dec(x_129);
if (lean_obj_tag(x_130) == 0)
{
uint8_t x_131; 
x_131 = !lean_is_exclusive(x_130);
if (x_131 == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_130, 0);
lean_dec(x_132);
x_133 = lean_box(0);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_128);
lean_ctor_set(x_134, 1, x_133);
lean_ctor_set_tag(x_130, 1);
lean_ctor_set(x_130, 0, x_134);
x_34 = x_130;
goto block_124;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_130);
x_135 = lean_box(0);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_128);
lean_ctor_set(x_136, 1, x_135);
x_137 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_137, 0, x_136);
x_34 = x_137;
goto block_124;
}
}
else
{
uint8_t x_138; 
x_138 = !lean_is_exclusive(x_130);
if (x_138 == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_139 = lean_ctor_get(x_130, 0);
x_140 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_140, 0, x_139);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_128);
lean_ctor_set(x_141, 1, x_140);
lean_ctor_set(x_130, 0, x_141);
x_34 = x_130;
goto block_124;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_142 = lean_ctor_get(x_130, 0);
lean_inc(x_142);
lean_dec(x_130);
x_143 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_143, 0, x_142);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_128);
lean_ctor_set(x_144, 1, x_143);
x_145 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_145, 0, x_144);
x_34 = x_145;
goto block_124;
}
}
}
block_124:
{
lean_object* x_35; lean_object* x_46; lean_object* x_55; lean_object* x_56; 
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_109; 
x_109 = !lean_is_exclusive(x_30);
if (x_109 == 0)
{
x_35 = x_30;
goto block_45;
}
else
{
lean_object* x_110; lean_object* x_111; 
x_110 = lean_ctor_get(x_30, 0);
lean_inc(x_110);
lean_dec(x_30);
x_111 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_111, 0, x_110);
x_35 = x_111;
goto block_45;
}
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_30, 0);
lean_inc(x_112);
lean_dec(x_30);
x_113 = lean_mk_string("result");
x_114 = l_Lean_Json_getObjVal_x3f(x_5, x_113);
lean_dec(x_113);
if (lean_obj_tag(x_114) == 0)
{
uint8_t x_115; 
x_115 = !lean_is_exclusive(x_114);
if (x_115 == 0)
{
x_55 = x_114;
x_56 = x_112;
goto block_108;
}
else
{
lean_object* x_116; lean_object* x_117; 
x_116 = lean_ctor_get(x_114, 0);
lean_inc(x_116);
lean_dec(x_114);
x_117 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_117, 0, x_116);
x_55 = x_117;
x_56 = x_112;
goto block_108;
}
}
else
{
uint8_t x_118; 
x_118 = !lean_is_exclusive(x_114);
if (x_118 == 0)
{
lean_object* x_119; lean_object* x_120; 
x_119 = lean_ctor_get(x_114, 0);
lean_inc(x_112);
x_120 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_120, 0, x_112);
lean_ctor_set(x_120, 1, x_119);
lean_ctor_set(x_114, 0, x_120);
x_55 = x_114;
x_56 = x_112;
goto block_108;
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_121 = lean_ctor_get(x_114, 0);
lean_inc(x_121);
lean_dec(x_114);
lean_inc(x_112);
x_122 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_122, 0, x_112);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_123, 0, x_122);
x_55 = x_123;
x_56 = x_112;
goto block_108;
}
}
}
block_45:
{
if (lean_obj_tag(x_34) == 0)
{
lean_dec(x_34);
if (lean_obj_tag(x_33) == 0)
{
lean_dec(x_33);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
lean_dec(x_35);
x_8 = x_36;
goto block_19;
}
else
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_7);
lean_dec(x_5);
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_6);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_35);
lean_dec(x_7);
lean_dec(x_5);
x_39 = lean_ctor_get(x_33, 0);
lean_inc(x_39);
lean_dec(x_33);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_6);
return x_40;
}
}
else
{
lean_dec(x_35);
lean_dec(x_7);
lean_dec(x_5);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_33);
x_41 = lean_ctor_get(x_34, 0);
lean_inc(x_41);
lean_dec(x_34);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_6);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_34);
x_43 = lean_ctor_get(x_33, 0);
lean_inc(x_43);
lean_dec(x_33);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_6);
return x_44;
}
}
}
block_54:
{
if (lean_obj_tag(x_34) == 0)
{
lean_dec(x_34);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_47; 
lean_dec(x_33);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_6);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_46);
x_48 = lean_ctor_get(x_33, 0);
lean_inc(x_48);
lean_dec(x_33);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_6);
return x_49;
}
}
else
{
lean_dec(x_46);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_50; lean_object* x_51; 
lean_dec(x_33);
x_50 = lean_ctor_get(x_34, 0);
lean_inc(x_50);
lean_dec(x_34);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_6);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_34);
x_52 = lean_ctor_get(x_33, 0);
lean_inc(x_52);
lean_dec(x_33);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_6);
return x_53;
}
}
}
block_108:
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_mk_string("error");
x_58 = l_Lean_Json_getObjVal_x3f(x_5, x_57);
lean_dec(x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_dec(x_56);
if (lean_obj_tag(x_55) == 0)
{
uint8_t x_59; 
x_59 = !lean_is_exclusive(x_55);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; 
x_60 = lean_ctor_get(x_55, 0);
lean_dec(x_60);
x_61 = lean_ctor_get(x_58, 0);
lean_inc(x_61);
lean_dec(x_58);
lean_ctor_set(x_55, 0, x_61);
x_35 = x_55;
goto block_45;
}
else
{
lean_object* x_62; lean_object* x_63; 
lean_dec(x_55);
x_62 = lean_ctor_get(x_58, 0);
lean_inc(x_62);
lean_dec(x_58);
x_63 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_63, 0, x_62);
x_35 = x_63;
goto block_45;
}
}
else
{
lean_object* x_64; 
lean_dec(x_58);
lean_dec(x_7);
lean_dec(x_5);
x_64 = lean_ctor_get(x_55, 0);
lean_inc(x_64);
lean_dec(x_55);
x_46 = x_64;
goto block_54;
}
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_58, 0);
lean_inc(x_65);
lean_dec(x_58);
x_66 = lean_mk_string("code");
x_67 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__3(x_65, x_66);
lean_dec(x_66);
if (lean_obj_tag(x_67) == 0)
{
lean_dec(x_65);
lean_dec(x_56);
if (lean_obj_tag(x_55) == 0)
{
uint8_t x_68; 
x_68 = !lean_is_exclusive(x_55);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_55, 0);
lean_dec(x_69);
x_70 = lean_ctor_get(x_67, 0);
lean_inc(x_70);
lean_dec(x_67);
lean_ctor_set(x_55, 0, x_70);
x_35 = x_55;
goto block_45;
}
else
{
lean_object* x_71; lean_object* x_72; 
lean_dec(x_55);
x_71 = lean_ctor_get(x_67, 0);
lean_inc(x_71);
lean_dec(x_67);
x_72 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_35 = x_72;
goto block_45;
}
}
else
{
lean_object* x_73; 
lean_dec(x_67);
lean_dec(x_7);
lean_dec(x_5);
x_73 = lean_ctor_get(x_55, 0);
lean_inc(x_73);
lean_dec(x_55);
x_46 = x_73;
goto block_54;
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_67, 0);
lean_inc(x_74);
lean_dec(x_67);
x_75 = lean_mk_string("message");
x_76 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(x_65, x_75);
lean_dec(x_75);
if (lean_obj_tag(x_76) == 0)
{
lean_dec(x_74);
lean_dec(x_65);
lean_dec(x_56);
if (lean_obj_tag(x_55) == 0)
{
uint8_t x_77; 
x_77 = !lean_is_exclusive(x_55);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_ctor_get(x_55, 0);
lean_dec(x_78);
x_79 = lean_ctor_get(x_76, 0);
lean_inc(x_79);
lean_dec(x_76);
lean_ctor_set(x_55, 0, x_79);
x_35 = x_55;
goto block_45;
}
else
{
lean_object* x_80; lean_object* x_81; 
lean_dec(x_55);
x_80 = lean_ctor_get(x_76, 0);
lean_inc(x_80);
lean_dec(x_76);
x_81 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_81, 0, x_80);
x_35 = x_81;
goto block_45;
}
}
else
{
lean_object* x_82; 
lean_dec(x_76);
lean_dec(x_7);
lean_dec(x_5);
x_82 = lean_ctor_get(x_55, 0);
lean_inc(x_82);
lean_dec(x_55);
x_46 = x_82;
goto block_54;
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_76, 0);
lean_inc(x_83);
lean_dec(x_76);
x_84 = lean_mk_string("data");
x_85 = l_Lean_Json_getObjVal_x3f(x_65, x_84);
lean_dec(x_84);
lean_dec(x_65);
if (lean_obj_tag(x_85) == 0)
{
lean_dec(x_85);
if (lean_obj_tag(x_55) == 0)
{
uint8_t x_86; 
x_86 = !lean_is_exclusive(x_55);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_87 = lean_ctor_get(x_55, 0);
lean_dec(x_87);
x_88 = lean_box(0);
x_89 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_89, 0, x_56);
lean_ctor_set(x_89, 1, x_83);
lean_ctor_set(x_89, 2, x_88);
x_90 = lean_unbox(x_74);
lean_dec(x_74);
lean_ctor_set_uint8(x_89, sizeof(void*)*3, x_90);
lean_ctor_set_tag(x_55, 1);
lean_ctor_set(x_55, 0, x_89);
x_35 = x_55;
goto block_45;
}
else
{
lean_object* x_91; lean_object* x_92; uint8_t x_93; lean_object* x_94; 
lean_dec(x_55);
x_91 = lean_box(0);
x_92 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_92, 0, x_56);
lean_ctor_set(x_92, 1, x_83);
lean_ctor_set(x_92, 2, x_91);
x_93 = lean_unbox(x_74);
lean_dec(x_74);
lean_ctor_set_uint8(x_92, sizeof(void*)*3, x_93);
x_94 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_94, 0, x_92);
x_35 = x_94;
goto block_45;
}
}
else
{
lean_object* x_95; 
lean_dec(x_83);
lean_dec(x_74);
lean_dec(x_56);
lean_dec(x_7);
lean_dec(x_5);
x_95 = lean_ctor_get(x_55, 0);
lean_inc(x_95);
lean_dec(x_55);
x_46 = x_95;
goto block_54;
}
}
else
{
if (lean_obj_tag(x_55) == 0)
{
uint8_t x_96; 
x_96 = !lean_is_exclusive(x_55);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; 
x_97 = lean_ctor_get(x_55, 0);
lean_dec(x_97);
x_98 = lean_ctor_get(x_85, 0);
lean_inc(x_98);
lean_dec(x_85);
x_99 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_99, 0, x_98);
x_100 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_100, 0, x_56);
lean_ctor_set(x_100, 1, x_83);
lean_ctor_set(x_100, 2, x_99);
x_101 = lean_unbox(x_74);
lean_dec(x_74);
lean_ctor_set_uint8(x_100, sizeof(void*)*3, x_101);
lean_ctor_set_tag(x_55, 1);
lean_ctor_set(x_55, 0, x_100);
x_35 = x_55;
goto block_45;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; lean_object* x_106; 
lean_dec(x_55);
x_102 = lean_ctor_get(x_85, 0);
lean_inc(x_102);
lean_dec(x_85);
x_103 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_103, 0, x_102);
x_104 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_104, 0, x_56);
lean_ctor_set(x_104, 1, x_83);
lean_ctor_set(x_104, 2, x_103);
x_105 = lean_unbox(x_74);
lean_dec(x_74);
lean_ctor_set_uint8(x_104, sizeof(void*)*3, x_105);
x_106 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_106, 0, x_104);
x_35 = x_106;
goto block_45;
}
}
else
{
lean_object* x_107; 
lean_dec(x_85);
lean_dec(x_83);
lean_dec(x_74);
lean_dec(x_56);
lean_dec(x_7);
lean_dec(x_5);
x_107 = lean_ctor_get(x_55, 0);
lean_inc(x_107);
lean_dec(x_55);
x_46 = x_107;
goto block_54;
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
else
{
lean_object* x_168; 
lean_free_object(x_21);
lean_dec(x_24);
x_168 = lean_mk_string("only version 2.0 of JSON RPC is supported");
x_8 = x_168;
goto block_19;
}
}
else
{
lean_object* x_169; 
x_169 = lean_ctor_get(x_21, 0);
lean_inc(x_169);
lean_dec(x_21);
if (lean_obj_tag(x_169) == 3)
{
lean_object* x_170; lean_object* x_171; uint8_t x_172; 
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
lean_dec(x_169);
x_171 = lean_mk_string("2.0");
x_172 = lean_string_dec_eq(x_170, x_171);
lean_dec(x_171);
lean_dec(x_170);
if (x_172 == 0)
{
lean_object* x_173; 
x_173 = lean_mk_string("only version 2.0 of JSON RPC is supported");
x_8 = x_173;
goto block_19;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; 
x_174 = lean_mk_string("id");
x_175 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__1(x_5, x_174);
lean_dec(x_174);
x_176 = lean_mk_string("method");
x_177 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(x_5, x_176);
lean_dec(x_176);
if (lean_obj_tag(x_175) == 0)
{
lean_object* x_269; lean_object* x_270; 
x_269 = lean_ctor_get(x_175, 0);
lean_inc(x_269);
x_270 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_270, 0, x_269);
x_178 = x_270;
goto block_268;
}
else
{
if (lean_obj_tag(x_177) == 0)
{
lean_object* x_271; lean_object* x_272; 
x_271 = lean_ctor_get(x_177, 0);
lean_inc(x_271);
x_272 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_272, 0, x_271);
x_178 = x_272;
goto block_268;
}
else
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; 
x_273 = lean_ctor_get(x_175, 0);
lean_inc(x_273);
x_274 = lean_ctor_get(x_177, 0);
lean_inc(x_274);
x_275 = lean_mk_string("params");
x_276 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__4(x_5, x_275);
lean_dec(x_275);
if (lean_obj_tag(x_276) == 0)
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; 
if (lean_is_exclusive(x_276)) {
 lean_ctor_release(x_276, 0);
 x_277 = x_276;
} else {
 lean_dec_ref(x_276);
 x_277 = lean_box(0);
}
x_278 = lean_box(0);
x_279 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_279, 0, x_273);
lean_ctor_set(x_279, 1, x_274);
lean_ctor_set(x_279, 2, x_278);
if (lean_is_scalar(x_277)) {
 x_280 = lean_alloc_ctor(1, 1, 0);
} else {
 x_280 = x_277;
 lean_ctor_set_tag(x_280, 1);
}
lean_ctor_set(x_280, 0, x_279);
x_178 = x_280;
goto block_268;
}
else
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; 
x_281 = lean_ctor_get(x_276, 0);
lean_inc(x_281);
if (lean_is_exclusive(x_276)) {
 lean_ctor_release(x_276, 0);
 x_282 = x_276;
} else {
 lean_dec_ref(x_276);
 x_282 = lean_box(0);
}
x_283 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_283, 0, x_281);
x_284 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_284, 0, x_273);
lean_ctor_set(x_284, 1, x_274);
lean_ctor_set(x_284, 2, x_283);
if (lean_is_scalar(x_282)) {
 x_285 = lean_alloc_ctor(1, 1, 0);
} else {
 x_285 = x_282;
}
lean_ctor_set(x_285, 0, x_284);
x_178 = x_285;
goto block_268;
}
}
}
block_268:
{
lean_object* x_179; 
if (lean_obj_tag(x_177) == 0)
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; 
x_253 = lean_ctor_get(x_177, 0);
lean_inc(x_253);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 x_254 = x_177;
} else {
 lean_dec_ref(x_177);
 x_254 = lean_box(0);
}
if (lean_is_scalar(x_254)) {
 x_255 = lean_alloc_ctor(0, 1, 0);
} else {
 x_255 = x_254;
}
lean_ctor_set(x_255, 0, x_253);
x_179 = x_255;
goto block_252;
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; 
x_256 = lean_ctor_get(x_177, 0);
lean_inc(x_256);
lean_dec(x_177);
x_257 = lean_mk_string("params");
x_258 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__4(x_5, x_257);
lean_dec(x_257);
if (lean_obj_tag(x_258) == 0)
{
lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; 
if (lean_is_exclusive(x_258)) {
 lean_ctor_release(x_258, 0);
 x_259 = x_258;
} else {
 lean_dec_ref(x_258);
 x_259 = lean_box(0);
}
x_260 = lean_box(0);
x_261 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_261, 0, x_256);
lean_ctor_set(x_261, 1, x_260);
if (lean_is_scalar(x_259)) {
 x_262 = lean_alloc_ctor(1, 1, 0);
} else {
 x_262 = x_259;
 lean_ctor_set_tag(x_262, 1);
}
lean_ctor_set(x_262, 0, x_261);
x_179 = x_262;
goto block_252;
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; 
x_263 = lean_ctor_get(x_258, 0);
lean_inc(x_263);
if (lean_is_exclusive(x_258)) {
 lean_ctor_release(x_258, 0);
 x_264 = x_258;
} else {
 lean_dec_ref(x_258);
 x_264 = lean_box(0);
}
x_265 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_265, 0, x_263);
x_266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_266, 0, x_256);
lean_ctor_set(x_266, 1, x_265);
if (lean_is_scalar(x_264)) {
 x_267 = lean_alloc_ctor(1, 1, 0);
} else {
 x_267 = x_264;
}
lean_ctor_set(x_267, 0, x_266);
x_179 = x_267;
goto block_252;
}
}
block_252:
{
lean_object* x_180; lean_object* x_191; lean_object* x_200; lean_object* x_201; 
if (lean_obj_tag(x_175) == 0)
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_239 = lean_ctor_get(x_175, 0);
lean_inc(x_239);
if (lean_is_exclusive(x_175)) {
 lean_ctor_release(x_175, 0);
 x_240 = x_175;
} else {
 lean_dec_ref(x_175);
 x_240 = lean_box(0);
}
if (lean_is_scalar(x_240)) {
 x_241 = lean_alloc_ctor(0, 1, 0);
} else {
 x_241 = x_240;
}
lean_ctor_set(x_241, 0, x_239);
x_180 = x_241;
goto block_190;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; 
x_242 = lean_ctor_get(x_175, 0);
lean_inc(x_242);
lean_dec(x_175);
x_243 = lean_mk_string("result");
x_244 = l_Lean_Json_getObjVal_x3f(x_5, x_243);
lean_dec(x_243);
if (lean_obj_tag(x_244) == 0)
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_245 = lean_ctor_get(x_244, 0);
lean_inc(x_245);
if (lean_is_exclusive(x_244)) {
 lean_ctor_release(x_244, 0);
 x_246 = x_244;
} else {
 lean_dec_ref(x_244);
 x_246 = lean_box(0);
}
if (lean_is_scalar(x_246)) {
 x_247 = lean_alloc_ctor(0, 1, 0);
} else {
 x_247 = x_246;
}
lean_ctor_set(x_247, 0, x_245);
x_200 = x_247;
x_201 = x_242;
goto block_238;
}
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; 
x_248 = lean_ctor_get(x_244, 0);
lean_inc(x_248);
if (lean_is_exclusive(x_244)) {
 lean_ctor_release(x_244, 0);
 x_249 = x_244;
} else {
 lean_dec_ref(x_244);
 x_249 = lean_box(0);
}
lean_inc(x_242);
x_250 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_250, 0, x_242);
lean_ctor_set(x_250, 1, x_248);
if (lean_is_scalar(x_249)) {
 x_251 = lean_alloc_ctor(1, 1, 0);
} else {
 x_251 = x_249;
}
lean_ctor_set(x_251, 0, x_250);
x_200 = x_251;
x_201 = x_242;
goto block_238;
}
}
block_190:
{
if (lean_obj_tag(x_179) == 0)
{
lean_dec(x_179);
if (lean_obj_tag(x_178) == 0)
{
lean_dec(x_178);
if (lean_obj_tag(x_180) == 0)
{
lean_object* x_181; 
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
lean_dec(x_180);
x_8 = x_181;
goto block_19;
}
else
{
lean_object* x_182; lean_object* x_183; 
lean_dec(x_7);
lean_dec(x_5);
x_182 = lean_ctor_get(x_180, 0);
lean_inc(x_182);
lean_dec(x_180);
x_183 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_183, 1, x_6);
return x_183;
}
}
else
{
lean_object* x_184; lean_object* x_185; 
lean_dec(x_180);
lean_dec(x_7);
lean_dec(x_5);
x_184 = lean_ctor_get(x_178, 0);
lean_inc(x_184);
lean_dec(x_178);
x_185 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_185, 0, x_184);
lean_ctor_set(x_185, 1, x_6);
return x_185;
}
}
else
{
lean_dec(x_180);
lean_dec(x_7);
lean_dec(x_5);
if (lean_obj_tag(x_178) == 0)
{
lean_object* x_186; lean_object* x_187; 
lean_dec(x_178);
x_186 = lean_ctor_get(x_179, 0);
lean_inc(x_186);
lean_dec(x_179);
x_187 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_187, 0, x_186);
lean_ctor_set(x_187, 1, x_6);
return x_187;
}
else
{
lean_object* x_188; lean_object* x_189; 
lean_dec(x_179);
x_188 = lean_ctor_get(x_178, 0);
lean_inc(x_188);
lean_dec(x_178);
x_189 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set(x_189, 1, x_6);
return x_189;
}
}
}
block_199:
{
if (lean_obj_tag(x_179) == 0)
{
lean_dec(x_179);
if (lean_obj_tag(x_178) == 0)
{
lean_object* x_192; 
lean_dec(x_178);
x_192 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_6);
return x_192;
}
else
{
lean_object* x_193; lean_object* x_194; 
lean_dec(x_191);
x_193 = lean_ctor_get(x_178, 0);
lean_inc(x_193);
lean_dec(x_178);
x_194 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_194, 0, x_193);
lean_ctor_set(x_194, 1, x_6);
return x_194;
}
}
else
{
lean_dec(x_191);
if (lean_obj_tag(x_178) == 0)
{
lean_object* x_195; lean_object* x_196; 
lean_dec(x_178);
x_195 = lean_ctor_get(x_179, 0);
lean_inc(x_195);
lean_dec(x_179);
x_196 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_6);
return x_196;
}
else
{
lean_object* x_197; lean_object* x_198; 
lean_dec(x_179);
x_197 = lean_ctor_get(x_178, 0);
lean_inc(x_197);
lean_dec(x_178);
x_198 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_198, 0, x_197);
lean_ctor_set(x_198, 1, x_6);
return x_198;
}
}
}
block_238:
{
lean_object* x_202; lean_object* x_203; 
x_202 = lean_mk_string("error");
x_203 = l_Lean_Json_getObjVal_x3f(x_5, x_202);
lean_dec(x_202);
if (lean_obj_tag(x_203) == 0)
{
lean_dec(x_201);
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; 
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 x_204 = x_200;
} else {
 lean_dec_ref(x_200);
 x_204 = lean_box(0);
}
x_205 = lean_ctor_get(x_203, 0);
lean_inc(x_205);
lean_dec(x_203);
if (lean_is_scalar(x_204)) {
 x_206 = lean_alloc_ctor(0, 1, 0);
} else {
 x_206 = x_204;
}
lean_ctor_set(x_206, 0, x_205);
x_180 = x_206;
goto block_190;
}
else
{
lean_object* x_207; 
lean_dec(x_203);
lean_dec(x_7);
lean_dec(x_5);
x_207 = lean_ctor_get(x_200, 0);
lean_inc(x_207);
lean_dec(x_200);
x_191 = x_207;
goto block_199;
}
}
else
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_208 = lean_ctor_get(x_203, 0);
lean_inc(x_208);
lean_dec(x_203);
x_209 = lean_mk_string("code");
x_210 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__3(x_208, x_209);
lean_dec(x_209);
if (lean_obj_tag(x_210) == 0)
{
lean_dec(x_208);
lean_dec(x_201);
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; 
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 x_211 = x_200;
} else {
 lean_dec_ref(x_200);
 x_211 = lean_box(0);
}
x_212 = lean_ctor_get(x_210, 0);
lean_inc(x_212);
lean_dec(x_210);
if (lean_is_scalar(x_211)) {
 x_213 = lean_alloc_ctor(0, 1, 0);
} else {
 x_213 = x_211;
}
lean_ctor_set(x_213, 0, x_212);
x_180 = x_213;
goto block_190;
}
else
{
lean_object* x_214; 
lean_dec(x_210);
lean_dec(x_7);
lean_dec(x_5);
x_214 = lean_ctor_get(x_200, 0);
lean_inc(x_214);
lean_dec(x_200);
x_191 = x_214;
goto block_199;
}
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; 
x_215 = lean_ctor_get(x_210, 0);
lean_inc(x_215);
lean_dec(x_210);
x_216 = lean_mk_string("message");
x_217 = l_Lean_Json_getObjValAs_x3f___at_Lean_JsonRpc_instFromJsonMessage___spec__2(x_208, x_216);
lean_dec(x_216);
if (lean_obj_tag(x_217) == 0)
{
lean_dec(x_215);
lean_dec(x_208);
lean_dec(x_201);
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; 
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 x_218 = x_200;
} else {
 lean_dec_ref(x_200);
 x_218 = lean_box(0);
}
x_219 = lean_ctor_get(x_217, 0);
lean_inc(x_219);
lean_dec(x_217);
if (lean_is_scalar(x_218)) {
 x_220 = lean_alloc_ctor(0, 1, 0);
} else {
 x_220 = x_218;
}
lean_ctor_set(x_220, 0, x_219);
x_180 = x_220;
goto block_190;
}
else
{
lean_object* x_221; 
lean_dec(x_217);
lean_dec(x_7);
lean_dec(x_5);
x_221 = lean_ctor_get(x_200, 0);
lean_inc(x_221);
lean_dec(x_200);
x_191 = x_221;
goto block_199;
}
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_222 = lean_ctor_get(x_217, 0);
lean_inc(x_222);
lean_dec(x_217);
x_223 = lean_mk_string("data");
x_224 = l_Lean_Json_getObjVal_x3f(x_208, x_223);
lean_dec(x_223);
lean_dec(x_208);
if (lean_obj_tag(x_224) == 0)
{
lean_dec(x_224);
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; uint8_t x_228; lean_object* x_229; 
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 x_225 = x_200;
} else {
 lean_dec_ref(x_200);
 x_225 = lean_box(0);
}
x_226 = lean_box(0);
x_227 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_227, 0, x_201);
lean_ctor_set(x_227, 1, x_222);
lean_ctor_set(x_227, 2, x_226);
x_228 = lean_unbox(x_215);
lean_dec(x_215);
lean_ctor_set_uint8(x_227, sizeof(void*)*3, x_228);
if (lean_is_scalar(x_225)) {
 x_229 = lean_alloc_ctor(1, 1, 0);
} else {
 x_229 = x_225;
 lean_ctor_set_tag(x_229, 1);
}
lean_ctor_set(x_229, 0, x_227);
x_180 = x_229;
goto block_190;
}
else
{
lean_object* x_230; 
lean_dec(x_222);
lean_dec(x_215);
lean_dec(x_201);
lean_dec(x_7);
lean_dec(x_5);
x_230 = lean_ctor_get(x_200, 0);
lean_inc(x_230);
lean_dec(x_200);
x_191 = x_230;
goto block_199;
}
}
else
{
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; uint8_t x_235; lean_object* x_236; 
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 x_231 = x_200;
} else {
 lean_dec_ref(x_200);
 x_231 = lean_box(0);
}
x_232 = lean_ctor_get(x_224, 0);
lean_inc(x_232);
lean_dec(x_224);
x_233 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_233, 0, x_232);
x_234 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_234, 0, x_201);
lean_ctor_set(x_234, 1, x_222);
lean_ctor_set(x_234, 2, x_233);
x_235 = lean_unbox(x_215);
lean_dec(x_215);
lean_ctor_set_uint8(x_234, sizeof(void*)*3, x_235);
if (lean_is_scalar(x_231)) {
 x_236 = lean_alloc_ctor(1, 1, 0);
} else {
 x_236 = x_231;
 lean_ctor_set_tag(x_236, 1);
}
lean_ctor_set(x_236, 0, x_234);
x_180 = x_236;
goto block_190;
}
else
{
lean_object* x_237; 
lean_dec(x_224);
lean_dec(x_222);
lean_dec(x_215);
lean_dec(x_201);
lean_dec(x_7);
lean_dec(x_5);
x_237 = lean_ctor_get(x_200, 0);
lean_inc(x_237);
lean_dec(x_200);
x_191 = x_237;
goto block_199;
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
else
{
lean_object* x_286; 
lean_dec(x_169);
x_286 = lean_mk_string("only version 2.0 of JSON RPC is supported");
x_8 = x_286;
goto block_19;
}
}
}
block_19:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_9 = l_Lean_Json_compress(x_5);
x_10 = lean_mk_string("JSON '");
x_11 = lean_string_append(x_10, x_9);
lean_dec(x_9);
x_12 = lean_mk_string("' did not have the format of a JSON-RPC message.\n");
x_13 = lean_string_append(x_11, x_12);
lean_dec(x_12);
x_14 = lean_string_append(x_13, x_8);
lean_dec(x_8);
x_15 = lean_mk_string("");
x_16 = lean_string_append(x_14, x_15);
lean_dec(x_15);
x_17 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_17, 0, x_16);
if (lean_is_scalar(x_7)) {
 x_18 = lean_alloc_ctor(1, 2, 0);
} else {
 x_18 = x_7;
 lean_ctor_set_tag(x_18, 1);
}
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_6);
return x_18;
}
}
else
{
uint8_t x_287; 
x_287 = !lean_is_exclusive(x_4);
if (x_287 == 0)
{
return x_4;
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_288 = lean_ctor_get(x_4, 0);
x_289 = lean_ctor_get(x_4, 1);
lean_inc(x_289);
lean_inc(x_288);
lean_dec(x_4);
x_290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_290, 0, x_288);
lean_ctor_set(x_290, 1, x_289);
return x_290;
}
}
}
}
lean_object* l_IO_FS_Stream_readMessage___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Stream_readMessage(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_IO_FS_Stream_readRequestAs_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_IO_FS_Stream_readRequestAs_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IO_FS_Stream_readRequestAs_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_IO_FS_Stream_readRequestAs_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_3(x_2, x_4, x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
lean_object* l_IO_FS_Stream_readRequestAs_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Stream_readRequestAs_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_FS_Stream_readRequestAs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IO_FS_Stream_readMessage(x_1, x_2, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
switch (lean_obj_tag(x_8)) {
case 0:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_10 = x_7;
} else {
 lean_dec_ref(x_7);
 x_10 = lean_box(0);
}
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_8, 2);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_string_dec_eq(x_12, x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_5);
x_15 = lean_mk_string("Expected method '");
x_16 = lean_string_append(x_15, x_3);
lean_dec(x_3);
x_17 = lean_mk_string("', got method '");
x_18 = lean_string_append(x_16, x_17);
lean_dec(x_17);
x_19 = lean_string_append(x_18, x_12);
lean_dec(x_12);
x_20 = lean_mk_string("'");
x_21 = lean_string_append(x_19, x_20);
lean_dec(x_20);
x_22 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_22, 0, x_21);
if (lean_is_scalar(x_10)) {
 x_23 = lean_alloc_ctor(1, 2, 0);
} else {
 x_23 = x_10;
 lean_ctor_set_tag(x_23, 1);
}
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_9);
return x_23;
}
else
{
lean_object* x_24; 
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_44; 
x_44 = lean_box(0);
x_24 = x_44;
goto block_43;
}
else
{
lean_object* x_45; 
x_45 = lean_ctor_get(x_13, 0);
lean_inc(x_45);
lean_dec(x_13);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_24 = x_47;
goto block_43;
}
else
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_45, 0);
lean_inc(x_48);
lean_dec(x_45);
x_49 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_49, 0, x_48);
x_24 = x_49;
goto block_43;
}
}
block_43:
{
lean_object* x_25; 
lean_inc(x_24);
x_25 = lean_apply_1(x_5, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_11);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_Lean_Json_compress(x_24);
x_28 = lean_mk_string("Unexpected param '");
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
x_30 = lean_mk_string("' for method '");
x_31 = lean_string_append(x_29, x_30);
lean_dec(x_30);
x_32 = lean_string_append(x_31, x_3);
lean_dec(x_3);
x_33 = lean_mk_string("'\n");
x_34 = lean_string_append(x_32, x_33);
lean_dec(x_33);
x_35 = lean_string_append(x_34, x_26);
lean_dec(x_26);
x_36 = lean_mk_string("");
x_37 = lean_string_append(x_35, x_36);
lean_dec(x_36);
x_38 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_38, 0, x_37);
if (lean_is_scalar(x_10)) {
 x_39 = lean_alloc_ctor(1, 2, 0);
} else {
 x_39 = x_10;
 lean_ctor_set_tag(x_39, 1);
}
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_9);
return x_39;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_24);
x_40 = lean_ctor_get(x_25, 0);
lean_inc(x_40);
lean_dec(x_25);
x_41 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_41, 0, x_11);
lean_ctor_set(x_41, 1, x_3);
lean_ctor_set(x_41, 2, x_40);
if (lean_is_scalar(x_10)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_10;
}
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_9);
return x_42;
}
}
}
}
case 1:
{
uint8_t x_50; 
lean_dec(x_5);
lean_dec(x_3);
x_50 = !lean_is_exclusive(x_7);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_51 = lean_ctor_get(x_7, 0);
lean_dec(x_51);
x_52 = lean_ctor_get(x_8, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_8, 1);
lean_inc(x_53);
lean_dec(x_8);
x_54 = lean_mk_string("2.0");
x_55 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_55, 0, x_54);
x_56 = lean_mk_string("jsonrpc");
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
x_58 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_58, 0, x_52);
x_59 = lean_mk_string("method");
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = lean_mk_string("params");
x_62 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_61, x_53);
lean_dec(x_53);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_57);
lean_ctor_set(x_64, 1, x_63);
x_65 = l_Lean_Json_mkObj(x_64);
x_66 = l_Lean_Json_compress(x_65);
x_67 = lean_mk_string("Expected JSON-RPC request, got: '");
x_68 = lean_string_append(x_67, x_66);
lean_dec(x_66);
x_69 = lean_mk_string("'");
x_70 = lean_string_append(x_68, x_69);
lean_dec(x_69);
x_71 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_71);
return x_7;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_72 = lean_ctor_get(x_7, 1);
lean_inc(x_72);
lean_dec(x_7);
x_73 = lean_ctor_get(x_8, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_8, 1);
lean_inc(x_74);
lean_dec(x_8);
x_75 = lean_mk_string("2.0");
x_76 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_76, 0, x_75);
x_77 = lean_mk_string("jsonrpc");
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_76);
x_79 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_79, 0, x_73);
x_80 = lean_mk_string("method");
x_81 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
x_82 = lean_mk_string("params");
x_83 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_82, x_74);
lean_dec(x_74);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_81);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_78);
lean_ctor_set(x_85, 1, x_84);
x_86 = l_Lean_Json_mkObj(x_85);
x_87 = l_Lean_Json_compress(x_86);
x_88 = lean_mk_string("Expected JSON-RPC request, got: '");
x_89 = lean_string_append(x_88, x_87);
lean_dec(x_87);
x_90 = lean_mk_string("'");
x_91 = lean_string_append(x_89, x_90);
lean_dec(x_90);
x_92 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_92, 0, x_91);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_72);
return x_93;
}
}
case 2:
{
uint8_t x_94; 
lean_dec(x_5);
lean_dec(x_3);
x_94 = !lean_is_exclusive(x_7);
if (x_94 == 0)
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_95 = lean_ctor_get(x_7, 0);
lean_dec(x_95);
x_96 = lean_ctor_get(x_8, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_8, 1);
lean_inc(x_97);
lean_dec(x_8);
x_98 = lean_mk_string("2.0");
x_99 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_99, 0, x_98);
x_100 = lean_mk_string("jsonrpc");
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
x_102 = lean_mk_string("result");
x_103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_97);
x_104 = lean_box(0);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
switch (lean_obj_tag(x_96)) {
case 0:
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_106 = lean_ctor_get(x_96, 0);
lean_inc(x_106);
lean_dec(x_96);
x_107 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_107, 0, x_106);
x_108 = lean_mk_string("id");
x_109 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_107);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_105);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_101);
lean_ctor_set(x_111, 1, x_110);
x_112 = l_Lean_Json_mkObj(x_111);
x_113 = l_Lean_Json_compress(x_112);
x_114 = lean_mk_string("Expected JSON-RPC request, got: '");
x_115 = lean_string_append(x_114, x_113);
lean_dec(x_113);
x_116 = lean_mk_string("'");
x_117 = lean_string_append(x_115, x_116);
lean_dec(x_116);
x_118 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_118);
return x_7;
}
case 1:
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_119 = lean_ctor_get(x_96, 0);
lean_inc(x_119);
lean_dec(x_96);
x_120 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_120, 0, x_119);
x_121 = lean_mk_string("id");
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_120);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_105);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_101);
lean_ctor_set(x_124, 1, x_123);
x_125 = l_Lean_Json_mkObj(x_124);
x_126 = l_Lean_Json_compress(x_125);
x_127 = lean_mk_string("Expected JSON-RPC request, got: '");
x_128 = lean_string_append(x_127, x_126);
lean_dec(x_126);
x_129 = lean_mk_string("'");
x_130 = lean_string_append(x_128, x_129);
lean_dec(x_129);
x_131 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_131);
return x_7;
}
default: 
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_132 = lean_mk_string("id");
x_133 = lean_box(0);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_105);
x_136 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_136, 0, x_101);
lean_ctor_set(x_136, 1, x_135);
x_137 = l_Lean_Json_mkObj(x_136);
x_138 = l_Lean_Json_compress(x_137);
x_139 = lean_mk_string("Expected JSON-RPC request, got: '");
x_140 = lean_string_append(x_139, x_138);
lean_dec(x_138);
x_141 = lean_mk_string("'");
x_142 = lean_string_append(x_140, x_141);
lean_dec(x_141);
x_143 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_143, 0, x_142);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_143);
return x_7;
}
}
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_144 = lean_ctor_get(x_7, 1);
lean_inc(x_144);
lean_dec(x_7);
x_145 = lean_ctor_get(x_8, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_8, 1);
lean_inc(x_146);
lean_dec(x_8);
x_147 = lean_mk_string("2.0");
x_148 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_148, 0, x_147);
x_149 = lean_mk_string("jsonrpc");
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_148);
x_151 = lean_mk_string("result");
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_151);
lean_ctor_set(x_152, 1, x_146);
x_153 = lean_box(0);
x_154 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_154, 0, x_152);
lean_ctor_set(x_154, 1, x_153);
switch (lean_obj_tag(x_145)) {
case 0:
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_155 = lean_ctor_get(x_145, 0);
lean_inc(x_155);
lean_dec(x_145);
x_156 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_156, 0, x_155);
x_157 = lean_mk_string("id");
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_156);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_154);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_150);
lean_ctor_set(x_160, 1, x_159);
x_161 = l_Lean_Json_mkObj(x_160);
x_162 = l_Lean_Json_compress(x_161);
x_163 = lean_mk_string("Expected JSON-RPC request, got: '");
x_164 = lean_string_append(x_163, x_162);
lean_dec(x_162);
x_165 = lean_mk_string("'");
x_166 = lean_string_append(x_164, x_165);
lean_dec(x_165);
x_167 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_167, 0, x_166);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_144);
return x_168;
}
case 1:
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_169 = lean_ctor_get(x_145, 0);
lean_inc(x_169);
lean_dec(x_145);
x_170 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_170, 0, x_169);
x_171 = lean_mk_string("id");
x_172 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_172, 0, x_171);
lean_ctor_set(x_172, 1, x_170);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_172);
lean_ctor_set(x_173, 1, x_154);
x_174 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_174, 0, x_150);
lean_ctor_set(x_174, 1, x_173);
x_175 = l_Lean_Json_mkObj(x_174);
x_176 = l_Lean_Json_compress(x_175);
x_177 = lean_mk_string("Expected JSON-RPC request, got: '");
x_178 = lean_string_append(x_177, x_176);
lean_dec(x_176);
x_179 = lean_mk_string("'");
x_180 = lean_string_append(x_178, x_179);
lean_dec(x_179);
x_181 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_181, 0, x_180);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_144);
return x_182;
}
default: 
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_183 = lean_mk_string("id");
x_184 = lean_box(0);
x_185 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_185, 0, x_183);
lean_ctor_set(x_185, 1, x_184);
x_186 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_154);
x_187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_187, 0, x_150);
lean_ctor_set(x_187, 1, x_186);
x_188 = l_Lean_Json_mkObj(x_187);
x_189 = l_Lean_Json_compress(x_188);
x_190 = lean_mk_string("Expected JSON-RPC request, got: '");
x_191 = lean_string_append(x_190, x_189);
lean_dec(x_189);
x_192 = lean_mk_string("'");
x_193 = lean_string_append(x_191, x_192);
lean_dec(x_192);
x_194 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_194, 0, x_193);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_194);
lean_ctor_set(x_195, 1, x_144);
return x_195;
}
}
}
}
default: 
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; uint8_t x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
lean_dec(x_5);
lean_dec(x_3);
x_196 = lean_ctor_get(x_7, 1);
lean_inc(x_196);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_197 = x_7;
} else {
 lean_dec_ref(x_7);
 x_197 = lean_box(0);
}
x_198 = lean_ctor_get(x_8, 0);
lean_inc(x_198);
x_199 = lean_ctor_get_uint8(x_8, sizeof(void*)*3);
x_200 = lean_ctor_get(x_8, 1);
lean_inc(x_200);
x_201 = lean_ctor_get(x_8, 2);
lean_inc(x_201);
lean_dec(x_8);
x_202 = lean_mk_string("2.0");
x_203 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_203, 0, x_202);
x_204 = lean_mk_string("jsonrpc");
x_205 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_205, 0, x_204);
lean_ctor_set(x_205, 1, x_203);
x_206 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_206, 0, x_200);
x_207 = lean_mk_string("message");
x_208 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set(x_208, 1, x_206);
x_209 = lean_box(0);
x_210 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_210, 0, x_208);
lean_ctor_set(x_210, 1, x_209);
x_211 = lean_mk_string("data");
x_212 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__2(x_211, x_201);
lean_dec(x_201);
switch (lean_obj_tag(x_198)) {
case 0:
{
lean_object* x_303; lean_object* x_304; 
x_303 = lean_ctor_get(x_198, 0);
lean_inc(x_303);
lean_dec(x_198);
x_304 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_304, 0, x_303);
x_213 = x_304;
goto block_302;
}
case 1:
{
lean_object* x_305; lean_object* x_306; 
x_305 = lean_ctor_get(x_198, 0);
lean_inc(x_305);
lean_dec(x_198);
x_306 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_306, 0, x_305);
x_213 = x_306;
goto block_302;
}
default: 
{
lean_object* x_307; 
x_307 = lean_box(0);
x_213 = x_307;
goto block_302;
}
}
block_302:
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_214 = lean_mk_string("id");
x_215 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_213);
switch (x_199) {
case 0:
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_236 = lean_unsigned_to_nat(32700u);
x_237 = lean_nat_to_int(x_236);
x_238 = lean_int_neg(x_237);
lean_dec(x_237);
x_239 = lean_unsigned_to_nat(0u);
x_240 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_240, 0, x_238);
lean_ctor_set(x_240, 1, x_239);
x_241 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_241, 0, x_240);
x_216 = x_241;
goto block_235;
}
case 1:
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_242 = lean_unsigned_to_nat(32600u);
x_243 = lean_nat_to_int(x_242);
x_244 = lean_int_neg(x_243);
lean_dec(x_243);
x_245 = lean_unsigned_to_nat(0u);
x_246 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_246, 0, x_244);
lean_ctor_set(x_246, 1, x_245);
x_247 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_247, 0, x_246);
x_216 = x_247;
goto block_235;
}
case 2:
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_248 = lean_unsigned_to_nat(32601u);
x_249 = lean_nat_to_int(x_248);
x_250 = lean_int_neg(x_249);
lean_dec(x_249);
x_251 = lean_unsigned_to_nat(0u);
x_252 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_252, 0, x_250);
lean_ctor_set(x_252, 1, x_251);
x_253 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_253, 0, x_252);
x_216 = x_253;
goto block_235;
}
case 3:
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; 
x_254 = lean_unsigned_to_nat(32602u);
x_255 = lean_nat_to_int(x_254);
x_256 = lean_int_neg(x_255);
lean_dec(x_255);
x_257 = lean_unsigned_to_nat(0u);
x_258 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_258, 0, x_256);
lean_ctor_set(x_258, 1, x_257);
x_259 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_259, 0, x_258);
x_216 = x_259;
goto block_235;
}
case 4:
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; 
x_260 = lean_unsigned_to_nat(32603u);
x_261 = lean_nat_to_int(x_260);
x_262 = lean_int_neg(x_261);
lean_dec(x_261);
x_263 = lean_unsigned_to_nat(0u);
x_264 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_264, 0, x_262);
lean_ctor_set(x_264, 1, x_263);
x_265 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_265, 0, x_264);
x_216 = x_265;
goto block_235;
}
case 5:
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; 
x_266 = lean_unsigned_to_nat(32099u);
x_267 = lean_nat_to_int(x_266);
x_268 = lean_int_neg(x_267);
lean_dec(x_267);
x_269 = lean_unsigned_to_nat(0u);
x_270 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_270, 0, x_268);
lean_ctor_set(x_270, 1, x_269);
x_271 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_271, 0, x_270);
x_216 = x_271;
goto block_235;
}
case 6:
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; 
x_272 = lean_unsigned_to_nat(32000u);
x_273 = lean_nat_to_int(x_272);
x_274 = lean_int_neg(x_273);
lean_dec(x_273);
x_275 = lean_unsigned_to_nat(0u);
x_276 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_276, 0, x_274);
lean_ctor_set(x_276, 1, x_275);
x_277 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_277, 0, x_276);
x_216 = x_277;
goto block_235;
}
case 7:
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
x_278 = lean_unsigned_to_nat(32002u);
x_279 = lean_nat_to_int(x_278);
x_280 = lean_int_neg(x_279);
lean_dec(x_279);
x_281 = lean_unsigned_to_nat(0u);
x_282 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_282, 0, x_280);
lean_ctor_set(x_282, 1, x_281);
x_283 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_283, 0, x_282);
x_216 = x_283;
goto block_235;
}
case 8:
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; 
x_284 = lean_unsigned_to_nat(32001u);
x_285 = lean_nat_to_int(x_284);
x_286 = lean_int_neg(x_285);
lean_dec(x_285);
x_287 = lean_unsigned_to_nat(0u);
x_288 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_288, 0, x_286);
lean_ctor_set(x_288, 1, x_287);
x_289 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_289, 0, x_288);
x_216 = x_289;
goto block_235;
}
case 9:
{
lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; 
x_290 = lean_unsigned_to_nat(32800u);
x_291 = lean_nat_to_int(x_290);
x_292 = lean_int_neg(x_291);
lean_dec(x_291);
x_293 = lean_unsigned_to_nat(0u);
x_294 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_294, 0, x_292);
lean_ctor_set(x_294, 1, x_293);
x_295 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_295, 0, x_294);
x_216 = x_295;
goto block_235;
}
default: 
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; 
x_296 = lean_unsigned_to_nat(32801u);
x_297 = lean_nat_to_int(x_296);
x_298 = lean_int_neg(x_297);
lean_dec(x_297);
x_299 = lean_unsigned_to_nat(0u);
x_300 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_300, 0, x_298);
lean_ctor_set(x_300, 1, x_299);
x_301 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_301, 0, x_300);
x_216 = x_301;
goto block_235;
}
}
block_235:
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_217 = lean_mk_string("code");
x_218 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_218, 0, x_217);
lean_ctor_set(x_218, 1, x_216);
x_219 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_219, 0, x_218);
lean_ctor_set(x_219, 1, x_210);
x_220 = l_List_append___rarg(x_219, x_212);
x_221 = l_Lean_Json_mkObj(x_220);
x_222 = lean_mk_string("error");
x_223 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_223, 0, x_222);
lean_ctor_set(x_223, 1, x_221);
x_224 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_224, 0, x_223);
lean_ctor_set(x_224, 1, x_209);
x_225 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_225, 0, x_215);
lean_ctor_set(x_225, 1, x_224);
x_226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_226, 0, x_205);
lean_ctor_set(x_226, 1, x_225);
x_227 = l_Lean_Json_mkObj(x_226);
x_228 = l_Lean_Json_compress(x_227);
x_229 = lean_mk_string("Expected JSON-RPC request, got: '");
x_230 = lean_string_append(x_229, x_228);
lean_dec(x_228);
x_231 = lean_mk_string("'");
x_232 = lean_string_append(x_230, x_231);
lean_dec(x_231);
x_233 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_233, 0, x_232);
if (lean_is_scalar(x_197)) {
 x_234 = lean_alloc_ctor(1, 2, 0);
} else {
 x_234 = x_197;
 lean_ctor_set_tag(x_234, 1);
}
lean_ctor_set(x_234, 0, x_233);
lean_ctor_set(x_234, 1, x_196);
return x_234;
}
}
}
}
}
else
{
uint8_t x_308; 
lean_dec(x_5);
lean_dec(x_3);
x_308 = !lean_is_exclusive(x_7);
if (x_308 == 0)
{
return x_7;
}
else
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; 
x_309 = lean_ctor_get(x_7, 0);
x_310 = lean_ctor_get(x_7, 1);
lean_inc(x_310);
lean_inc(x_309);
lean_dec(x_7);
x_311 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_311, 0, x_309);
lean_ctor_set(x_311, 1, x_310);
return x_311;
}
}
}
}
lean_object* l_IO_FS_Stream_readRequestAs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IO_FS_Stream_readRequestAs(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_IO_FS_Stream_readNotificationAs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IO_FS_Stream_readMessage(x_1, x_2, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
switch (lean_obj_tag(x_8)) {
case 0:
{
uint8_t x_9; 
lean_dec(x_5);
lean_dec(x_3);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_8, 2);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_mk_string("2.0");
x_15 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_mk_string("jsonrpc");
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_18, 0, x_12);
x_19 = lean_mk_string("method");
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_mk_string("params");
x_24 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_23, x_13);
lean_dec(x_13);
switch (lean_obj_tag(x_11)) {
case 0:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_25 = lean_ctor_get(x_11, 0);
lean_inc(x_25);
lean_dec(x_11);
x_26 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_mk_string("id");
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_22);
x_30 = l_List_append___rarg(x_29, x_24);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_17);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_Json_mkObj(x_31);
x_33 = l_Lean_Json_compress(x_32);
x_34 = lean_mk_string("Expected JSON-RPC notification, got: '");
x_35 = lean_string_append(x_34, x_33);
lean_dec(x_33);
x_36 = lean_mk_string("'");
x_37 = lean_string_append(x_35, x_36);
lean_dec(x_36);
x_38 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_38);
return x_7;
}
case 1:
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_39 = lean_ctor_get(x_11, 0);
lean_inc(x_39);
lean_dec(x_11);
x_40 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_mk_string("id");
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_22);
x_44 = l_List_append___rarg(x_43, x_24);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_17);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_Lean_Json_mkObj(x_45);
x_47 = l_Lean_Json_compress(x_46);
x_48 = lean_mk_string("Expected JSON-RPC notification, got: '");
x_49 = lean_string_append(x_48, x_47);
lean_dec(x_47);
x_50 = lean_mk_string("'");
x_51 = lean_string_append(x_49, x_50);
lean_dec(x_50);
x_52 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_52);
return x_7;
}
default: 
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_53 = lean_mk_string("id");
x_54 = lean_box(0);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_22);
x_57 = l_List_append___rarg(x_56, x_24);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_17);
lean_ctor_set(x_58, 1, x_57);
x_59 = l_Lean_Json_mkObj(x_58);
x_60 = l_Lean_Json_compress(x_59);
x_61 = lean_mk_string("Expected JSON-RPC notification, got: '");
x_62 = lean_string_append(x_61, x_60);
lean_dec(x_60);
x_63 = lean_mk_string("'");
x_64 = lean_string_append(x_62, x_63);
lean_dec(x_63);
x_65 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_65);
return x_7;
}
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_66 = lean_ctor_get(x_7, 1);
lean_inc(x_66);
lean_dec(x_7);
x_67 = lean_ctor_get(x_8, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_8, 1);
lean_inc(x_68);
x_69 = lean_ctor_get(x_8, 2);
lean_inc(x_69);
lean_dec(x_8);
x_70 = lean_mk_string("2.0");
x_71 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_71, 0, x_70);
x_72 = lean_mk_string("jsonrpc");
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
x_74 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_74, 0, x_68);
x_75 = lean_mk_string("method");
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
x_77 = lean_box(0);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
x_79 = lean_mk_string("params");
x_80 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_79, x_69);
lean_dec(x_69);
switch (lean_obj_tag(x_67)) {
case 0:
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_81 = lean_ctor_get(x_67, 0);
lean_inc(x_81);
lean_dec(x_67);
x_82 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_82, 0, x_81);
x_83 = lean_mk_string("id");
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_82);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_78);
x_86 = l_List_append___rarg(x_85, x_80);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_73);
lean_ctor_set(x_87, 1, x_86);
x_88 = l_Lean_Json_mkObj(x_87);
x_89 = l_Lean_Json_compress(x_88);
x_90 = lean_mk_string("Expected JSON-RPC notification, got: '");
x_91 = lean_string_append(x_90, x_89);
lean_dec(x_89);
x_92 = lean_mk_string("'");
x_93 = lean_string_append(x_91, x_92);
lean_dec(x_92);
x_94 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_94, 0, x_93);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_66);
return x_95;
}
case 1:
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_96 = lean_ctor_get(x_67, 0);
lean_inc(x_96);
lean_dec(x_67);
x_97 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_97, 0, x_96);
x_98 = lean_mk_string("id");
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_97);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_78);
x_101 = l_List_append___rarg(x_100, x_80);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_73);
lean_ctor_set(x_102, 1, x_101);
x_103 = l_Lean_Json_mkObj(x_102);
x_104 = l_Lean_Json_compress(x_103);
x_105 = lean_mk_string("Expected JSON-RPC notification, got: '");
x_106 = lean_string_append(x_105, x_104);
lean_dec(x_104);
x_107 = lean_mk_string("'");
x_108 = lean_string_append(x_106, x_107);
lean_dec(x_107);
x_109 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_109, 0, x_108);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_66);
return x_110;
}
default: 
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_111 = lean_mk_string("id");
x_112 = lean_box(0);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_78);
x_115 = l_List_append___rarg(x_114, x_80);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_73);
lean_ctor_set(x_116, 1, x_115);
x_117 = l_Lean_Json_mkObj(x_116);
x_118 = l_Lean_Json_compress(x_117);
x_119 = lean_mk_string("Expected JSON-RPC notification, got: '");
x_120 = lean_string_append(x_119, x_118);
lean_dec(x_118);
x_121 = lean_mk_string("'");
x_122 = lean_string_append(x_120, x_121);
lean_dec(x_121);
x_123 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_123, 0, x_122);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_66);
return x_124;
}
}
}
}
case 1:
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; 
x_125 = lean_ctor_get(x_7, 1);
lean_inc(x_125);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_126 = x_7;
} else {
 lean_dec_ref(x_7);
 x_126 = lean_box(0);
}
x_127 = lean_ctor_get(x_8, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_8, 1);
lean_inc(x_128);
lean_dec(x_8);
x_129 = lean_string_dec_eq(x_127, x_3);
if (x_129 == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_128);
lean_dec(x_5);
x_130 = lean_mk_string("Expected method '");
x_131 = lean_string_append(x_130, x_3);
lean_dec(x_3);
x_132 = lean_mk_string("', got method '");
x_133 = lean_string_append(x_131, x_132);
lean_dec(x_132);
x_134 = lean_string_append(x_133, x_127);
lean_dec(x_127);
x_135 = lean_mk_string("'");
x_136 = lean_string_append(x_134, x_135);
lean_dec(x_135);
x_137 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_137, 0, x_136);
if (lean_is_scalar(x_126)) {
 x_138 = lean_alloc_ctor(1, 2, 0);
} else {
 x_138 = x_126;
 lean_ctor_set_tag(x_138, 1);
}
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_125);
return x_138;
}
else
{
lean_object* x_139; 
lean_dec(x_127);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_159; 
x_159 = lean_box(0);
x_139 = x_159;
goto block_158;
}
else
{
lean_object* x_160; 
x_160 = lean_ctor_get(x_128, 0);
lean_inc(x_160);
lean_dec(x_128);
if (lean_obj_tag(x_160) == 0)
{
lean_object* x_161; lean_object* x_162; 
x_161 = lean_ctor_get(x_160, 0);
lean_inc(x_161);
lean_dec(x_160);
x_162 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_162, 0, x_161);
x_139 = x_162;
goto block_158;
}
else
{
lean_object* x_163; lean_object* x_164; 
x_163 = lean_ctor_get(x_160, 0);
lean_inc(x_163);
lean_dec(x_160);
x_164 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_164, 0, x_163);
x_139 = x_164;
goto block_158;
}
}
block_158:
{
lean_object* x_140; 
lean_inc(x_139);
x_140 = lean_apply_1(x_5, x_139);
if (lean_obj_tag(x_140) == 0)
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; 
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
lean_dec(x_140);
x_142 = l_Lean_Json_compress(x_139);
x_143 = lean_mk_string("Unexpected param '");
x_144 = lean_string_append(x_143, x_142);
lean_dec(x_142);
x_145 = lean_mk_string("' for method '");
x_146 = lean_string_append(x_144, x_145);
lean_dec(x_145);
x_147 = lean_string_append(x_146, x_3);
lean_dec(x_3);
x_148 = lean_mk_string("'\n");
x_149 = lean_string_append(x_147, x_148);
lean_dec(x_148);
x_150 = lean_string_append(x_149, x_141);
lean_dec(x_141);
x_151 = lean_mk_string("");
x_152 = lean_string_append(x_150, x_151);
lean_dec(x_151);
x_153 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_153, 0, x_152);
if (lean_is_scalar(x_126)) {
 x_154 = lean_alloc_ctor(1, 2, 0);
} else {
 x_154 = x_126;
 lean_ctor_set_tag(x_154, 1);
}
lean_ctor_set(x_154, 0, x_153);
lean_ctor_set(x_154, 1, x_125);
return x_154;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_dec(x_139);
x_155 = lean_ctor_get(x_140, 0);
lean_inc(x_155);
lean_dec(x_140);
x_156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_156, 0, x_3);
lean_ctor_set(x_156, 1, x_155);
if (lean_is_scalar(x_126)) {
 x_157 = lean_alloc_ctor(0, 2, 0);
} else {
 x_157 = x_126;
}
lean_ctor_set(x_157, 0, x_156);
lean_ctor_set(x_157, 1, x_125);
return x_157;
}
}
}
}
case 2:
{
uint8_t x_165; 
lean_dec(x_5);
lean_dec(x_3);
x_165 = !lean_is_exclusive(x_7);
if (x_165 == 0)
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_166 = lean_ctor_get(x_7, 0);
lean_dec(x_166);
x_167 = lean_ctor_get(x_8, 0);
lean_inc(x_167);
x_168 = lean_ctor_get(x_8, 1);
lean_inc(x_168);
lean_dec(x_8);
x_169 = lean_mk_string("2.0");
x_170 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_170, 0, x_169);
x_171 = lean_mk_string("jsonrpc");
x_172 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_172, 0, x_171);
lean_ctor_set(x_172, 1, x_170);
x_173 = lean_mk_string("result");
x_174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_174, 0, x_173);
lean_ctor_set(x_174, 1, x_168);
x_175 = lean_box(0);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_174);
lean_ctor_set(x_176, 1, x_175);
switch (lean_obj_tag(x_167)) {
case 0:
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_177 = lean_ctor_get(x_167, 0);
lean_inc(x_177);
lean_dec(x_167);
x_178 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_178, 0, x_177);
x_179 = lean_mk_string("id");
x_180 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_180, 0, x_179);
lean_ctor_set(x_180, 1, x_178);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_176);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_172);
lean_ctor_set(x_182, 1, x_181);
x_183 = l_Lean_Json_mkObj(x_182);
x_184 = l_Lean_Json_compress(x_183);
x_185 = lean_mk_string("Expected JSON-RPC notification, got: '");
x_186 = lean_string_append(x_185, x_184);
lean_dec(x_184);
x_187 = lean_mk_string("'");
x_188 = lean_string_append(x_186, x_187);
lean_dec(x_187);
x_189 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_189, 0, x_188);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_189);
return x_7;
}
case 1:
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_190 = lean_ctor_get(x_167, 0);
lean_inc(x_190);
lean_dec(x_167);
x_191 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_191, 0, x_190);
x_192 = lean_mk_string("id");
x_193 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_193, 0, x_192);
lean_ctor_set(x_193, 1, x_191);
x_194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_194, 0, x_193);
lean_ctor_set(x_194, 1, x_176);
x_195 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_195, 0, x_172);
lean_ctor_set(x_195, 1, x_194);
x_196 = l_Lean_Json_mkObj(x_195);
x_197 = l_Lean_Json_compress(x_196);
x_198 = lean_mk_string("Expected JSON-RPC notification, got: '");
x_199 = lean_string_append(x_198, x_197);
lean_dec(x_197);
x_200 = lean_mk_string("'");
x_201 = lean_string_append(x_199, x_200);
lean_dec(x_200);
x_202 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_202);
return x_7;
}
default: 
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
x_203 = lean_mk_string("id");
x_204 = lean_box(0);
x_205 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_205, 0, x_203);
lean_ctor_set(x_205, 1, x_204);
x_206 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_206, 0, x_205);
lean_ctor_set(x_206, 1, x_176);
x_207 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_207, 0, x_172);
lean_ctor_set(x_207, 1, x_206);
x_208 = l_Lean_Json_mkObj(x_207);
x_209 = l_Lean_Json_compress(x_208);
x_210 = lean_mk_string("Expected JSON-RPC notification, got: '");
x_211 = lean_string_append(x_210, x_209);
lean_dec(x_209);
x_212 = lean_mk_string("'");
x_213 = lean_string_append(x_211, x_212);
lean_dec(x_212);
x_214 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_214);
return x_7;
}
}
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_215 = lean_ctor_get(x_7, 1);
lean_inc(x_215);
lean_dec(x_7);
x_216 = lean_ctor_get(x_8, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_8, 1);
lean_inc(x_217);
lean_dec(x_8);
x_218 = lean_mk_string("2.0");
x_219 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_219, 0, x_218);
x_220 = lean_mk_string("jsonrpc");
x_221 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_221, 0, x_220);
lean_ctor_set(x_221, 1, x_219);
x_222 = lean_mk_string("result");
x_223 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_223, 0, x_222);
lean_ctor_set(x_223, 1, x_217);
x_224 = lean_box(0);
x_225 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_225, 0, x_223);
lean_ctor_set(x_225, 1, x_224);
switch (lean_obj_tag(x_216)) {
case 0:
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; 
x_226 = lean_ctor_get(x_216, 0);
lean_inc(x_226);
lean_dec(x_216);
x_227 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_227, 0, x_226);
x_228 = lean_mk_string("id");
x_229 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_229, 0, x_228);
lean_ctor_set(x_229, 1, x_227);
x_230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_230, 0, x_229);
lean_ctor_set(x_230, 1, x_225);
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_221);
lean_ctor_set(x_231, 1, x_230);
x_232 = l_Lean_Json_mkObj(x_231);
x_233 = l_Lean_Json_compress(x_232);
x_234 = lean_mk_string("Expected JSON-RPC notification, got: '");
x_235 = lean_string_append(x_234, x_233);
lean_dec(x_233);
x_236 = lean_mk_string("'");
x_237 = lean_string_append(x_235, x_236);
lean_dec(x_236);
x_238 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_238, 0, x_237);
x_239 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_239, 0, x_238);
lean_ctor_set(x_239, 1, x_215);
return x_239;
}
case 1:
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_240 = lean_ctor_get(x_216, 0);
lean_inc(x_240);
lean_dec(x_216);
x_241 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_241, 0, x_240);
x_242 = lean_mk_string("id");
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_242);
lean_ctor_set(x_243, 1, x_241);
x_244 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_244, 0, x_243);
lean_ctor_set(x_244, 1, x_225);
x_245 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_245, 0, x_221);
lean_ctor_set(x_245, 1, x_244);
x_246 = l_Lean_Json_mkObj(x_245);
x_247 = l_Lean_Json_compress(x_246);
x_248 = lean_mk_string("Expected JSON-RPC notification, got: '");
x_249 = lean_string_append(x_248, x_247);
lean_dec(x_247);
x_250 = lean_mk_string("'");
x_251 = lean_string_append(x_249, x_250);
lean_dec(x_250);
x_252 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_252, 0, x_251);
x_253 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_253, 0, x_252);
lean_ctor_set(x_253, 1, x_215);
return x_253;
}
default: 
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_254 = lean_mk_string("id");
x_255 = lean_box(0);
x_256 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_256, 0, x_254);
lean_ctor_set(x_256, 1, x_255);
x_257 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_257, 1, x_225);
x_258 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_258, 0, x_221);
lean_ctor_set(x_258, 1, x_257);
x_259 = l_Lean_Json_mkObj(x_258);
x_260 = l_Lean_Json_compress(x_259);
x_261 = lean_mk_string("Expected JSON-RPC notification, got: '");
x_262 = lean_string_append(x_261, x_260);
lean_dec(x_260);
x_263 = lean_mk_string("'");
x_264 = lean_string_append(x_262, x_263);
lean_dec(x_263);
x_265 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_265, 0, x_264);
x_266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_266, 0, x_265);
lean_ctor_set(x_266, 1, x_215);
return x_266;
}
}
}
}
default: 
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; uint8_t x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; 
lean_dec(x_5);
lean_dec(x_3);
x_267 = lean_ctor_get(x_7, 1);
lean_inc(x_267);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_268 = x_7;
} else {
 lean_dec_ref(x_7);
 x_268 = lean_box(0);
}
x_269 = lean_ctor_get(x_8, 0);
lean_inc(x_269);
x_270 = lean_ctor_get_uint8(x_8, sizeof(void*)*3);
x_271 = lean_ctor_get(x_8, 1);
lean_inc(x_271);
x_272 = lean_ctor_get(x_8, 2);
lean_inc(x_272);
lean_dec(x_8);
x_273 = lean_mk_string("2.0");
x_274 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_274, 0, x_273);
x_275 = lean_mk_string("jsonrpc");
x_276 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_276, 0, x_275);
lean_ctor_set(x_276, 1, x_274);
x_277 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_277, 0, x_271);
x_278 = lean_mk_string("message");
x_279 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_279, 0, x_278);
lean_ctor_set(x_279, 1, x_277);
x_280 = lean_box(0);
x_281 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_281, 0, x_279);
lean_ctor_set(x_281, 1, x_280);
x_282 = lean_mk_string("data");
x_283 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__2(x_282, x_272);
lean_dec(x_272);
switch (lean_obj_tag(x_269)) {
case 0:
{
lean_object* x_374; lean_object* x_375; 
x_374 = lean_ctor_get(x_269, 0);
lean_inc(x_374);
lean_dec(x_269);
x_375 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_375, 0, x_374);
x_284 = x_375;
goto block_373;
}
case 1:
{
lean_object* x_376; lean_object* x_377; 
x_376 = lean_ctor_get(x_269, 0);
lean_inc(x_376);
lean_dec(x_269);
x_377 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_377, 0, x_376);
x_284 = x_377;
goto block_373;
}
default: 
{
lean_object* x_378; 
x_378 = lean_box(0);
x_284 = x_378;
goto block_373;
}
}
block_373:
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; 
x_285 = lean_mk_string("id");
x_286 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_286, 0, x_285);
lean_ctor_set(x_286, 1, x_284);
switch (x_270) {
case 0:
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; 
x_307 = lean_unsigned_to_nat(32700u);
x_308 = lean_nat_to_int(x_307);
x_309 = lean_int_neg(x_308);
lean_dec(x_308);
x_310 = lean_unsigned_to_nat(0u);
x_311 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_311, 0, x_309);
lean_ctor_set(x_311, 1, x_310);
x_312 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_312, 0, x_311);
x_287 = x_312;
goto block_306;
}
case 1:
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; 
x_313 = lean_unsigned_to_nat(32600u);
x_314 = lean_nat_to_int(x_313);
x_315 = lean_int_neg(x_314);
lean_dec(x_314);
x_316 = lean_unsigned_to_nat(0u);
x_317 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_317, 0, x_315);
lean_ctor_set(x_317, 1, x_316);
x_318 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_318, 0, x_317);
x_287 = x_318;
goto block_306;
}
case 2:
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; 
x_319 = lean_unsigned_to_nat(32601u);
x_320 = lean_nat_to_int(x_319);
x_321 = lean_int_neg(x_320);
lean_dec(x_320);
x_322 = lean_unsigned_to_nat(0u);
x_323 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_323, 0, x_321);
lean_ctor_set(x_323, 1, x_322);
x_324 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_324, 0, x_323);
x_287 = x_324;
goto block_306;
}
case 3:
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; 
x_325 = lean_unsigned_to_nat(32602u);
x_326 = lean_nat_to_int(x_325);
x_327 = lean_int_neg(x_326);
lean_dec(x_326);
x_328 = lean_unsigned_to_nat(0u);
x_329 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_329, 0, x_327);
lean_ctor_set(x_329, 1, x_328);
x_330 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_330, 0, x_329);
x_287 = x_330;
goto block_306;
}
case 4:
{
lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; 
x_331 = lean_unsigned_to_nat(32603u);
x_332 = lean_nat_to_int(x_331);
x_333 = lean_int_neg(x_332);
lean_dec(x_332);
x_334 = lean_unsigned_to_nat(0u);
x_335 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_335, 0, x_333);
lean_ctor_set(x_335, 1, x_334);
x_336 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_336, 0, x_335);
x_287 = x_336;
goto block_306;
}
case 5:
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; 
x_337 = lean_unsigned_to_nat(32099u);
x_338 = lean_nat_to_int(x_337);
x_339 = lean_int_neg(x_338);
lean_dec(x_338);
x_340 = lean_unsigned_to_nat(0u);
x_341 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_341, 0, x_339);
lean_ctor_set(x_341, 1, x_340);
x_342 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_342, 0, x_341);
x_287 = x_342;
goto block_306;
}
case 6:
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; 
x_343 = lean_unsigned_to_nat(32000u);
x_344 = lean_nat_to_int(x_343);
x_345 = lean_int_neg(x_344);
lean_dec(x_344);
x_346 = lean_unsigned_to_nat(0u);
x_347 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_347, 0, x_345);
lean_ctor_set(x_347, 1, x_346);
x_348 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_348, 0, x_347);
x_287 = x_348;
goto block_306;
}
case 7:
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; 
x_349 = lean_unsigned_to_nat(32002u);
x_350 = lean_nat_to_int(x_349);
x_351 = lean_int_neg(x_350);
lean_dec(x_350);
x_352 = lean_unsigned_to_nat(0u);
x_353 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_353, 0, x_351);
lean_ctor_set(x_353, 1, x_352);
x_354 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_354, 0, x_353);
x_287 = x_354;
goto block_306;
}
case 8:
{
lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; 
x_355 = lean_unsigned_to_nat(32001u);
x_356 = lean_nat_to_int(x_355);
x_357 = lean_int_neg(x_356);
lean_dec(x_356);
x_358 = lean_unsigned_to_nat(0u);
x_359 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_359, 0, x_357);
lean_ctor_set(x_359, 1, x_358);
x_360 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_360, 0, x_359);
x_287 = x_360;
goto block_306;
}
case 9:
{
lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; 
x_361 = lean_unsigned_to_nat(32800u);
x_362 = lean_nat_to_int(x_361);
x_363 = lean_int_neg(x_362);
lean_dec(x_362);
x_364 = lean_unsigned_to_nat(0u);
x_365 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_365, 0, x_363);
lean_ctor_set(x_365, 1, x_364);
x_366 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_366, 0, x_365);
x_287 = x_366;
goto block_306;
}
default: 
{
lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; 
x_367 = lean_unsigned_to_nat(32801u);
x_368 = lean_nat_to_int(x_367);
x_369 = lean_int_neg(x_368);
lean_dec(x_368);
x_370 = lean_unsigned_to_nat(0u);
x_371 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_371, 0, x_369);
lean_ctor_set(x_371, 1, x_370);
x_372 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_372, 0, x_371);
x_287 = x_372;
goto block_306;
}
}
block_306:
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; 
x_288 = lean_mk_string("code");
x_289 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_289, 0, x_288);
lean_ctor_set(x_289, 1, x_287);
x_290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_281);
x_291 = l_List_append___rarg(x_290, x_283);
x_292 = l_Lean_Json_mkObj(x_291);
x_293 = lean_mk_string("error");
x_294 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_294, 0, x_293);
lean_ctor_set(x_294, 1, x_292);
x_295 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_295, 0, x_294);
lean_ctor_set(x_295, 1, x_280);
x_296 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_296, 0, x_286);
lean_ctor_set(x_296, 1, x_295);
x_297 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_297, 0, x_276);
lean_ctor_set(x_297, 1, x_296);
x_298 = l_Lean_Json_mkObj(x_297);
x_299 = l_Lean_Json_compress(x_298);
x_300 = lean_mk_string("Expected JSON-RPC notification, got: '");
x_301 = lean_string_append(x_300, x_299);
lean_dec(x_299);
x_302 = lean_mk_string("'");
x_303 = lean_string_append(x_301, x_302);
lean_dec(x_302);
x_304 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_304, 0, x_303);
if (lean_is_scalar(x_268)) {
 x_305 = lean_alloc_ctor(1, 2, 0);
} else {
 x_305 = x_268;
 lean_ctor_set_tag(x_305, 1);
}
lean_ctor_set(x_305, 0, x_304);
lean_ctor_set(x_305, 1, x_267);
return x_305;
}
}
}
}
}
else
{
uint8_t x_379; 
lean_dec(x_5);
lean_dec(x_3);
x_379 = !lean_is_exclusive(x_7);
if (x_379 == 0)
{
return x_7;
}
else
{
lean_object* x_380; lean_object* x_381; lean_object* x_382; 
x_380 = lean_ctor_get(x_7, 0);
x_381 = lean_ctor_get(x_7, 1);
lean_inc(x_381);
lean_inc(x_380);
lean_dec(x_7);
x_382 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_382, 0, x_380);
lean_ctor_set(x_382, 1, x_381);
return x_382;
}
}
}
}
lean_object* l_IO_FS_Stream_readNotificationAs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IO_FS_Stream_readNotificationAs(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_IO_FS_Stream_readResponseAs_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
}
}
lean_object* l_IO_FS_Stream_readResponseAs_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Stream_readResponseAs_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_FS_Stream_readResponseAs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IO_FS_Stream_readMessage(x_1, x_2, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
switch (lean_obj_tag(x_8)) {
case 0:
{
uint8_t x_9; 
lean_dec(x_5);
lean_dec(x_3);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_8, 2);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_mk_string("2.0");
x_15 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_mk_string("jsonrpc");
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_18, 0, x_12);
x_19 = lean_mk_string("method");
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_mk_string("params");
x_24 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_23, x_13);
lean_dec(x_13);
switch (lean_obj_tag(x_11)) {
case 0:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_25 = lean_ctor_get(x_11, 0);
lean_inc(x_25);
lean_dec(x_11);
x_26 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_mk_string("id");
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_22);
x_30 = l_List_append___rarg(x_29, x_24);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_17);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_Json_mkObj(x_31);
x_33 = l_Lean_Json_compress(x_32);
x_34 = lean_mk_string("Expected JSON-RPC response, got: '");
x_35 = lean_string_append(x_34, x_33);
lean_dec(x_33);
x_36 = lean_mk_string("'");
x_37 = lean_string_append(x_35, x_36);
lean_dec(x_36);
x_38 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_38);
return x_7;
}
case 1:
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_39 = lean_ctor_get(x_11, 0);
lean_inc(x_39);
lean_dec(x_11);
x_40 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_mk_string("id");
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_22);
x_44 = l_List_append___rarg(x_43, x_24);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_17);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_Lean_Json_mkObj(x_45);
x_47 = l_Lean_Json_compress(x_46);
x_48 = lean_mk_string("Expected JSON-RPC response, got: '");
x_49 = lean_string_append(x_48, x_47);
lean_dec(x_47);
x_50 = lean_mk_string("'");
x_51 = lean_string_append(x_49, x_50);
lean_dec(x_50);
x_52 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_52);
return x_7;
}
default: 
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_53 = lean_mk_string("id");
x_54 = lean_box(0);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_22);
x_57 = l_List_append___rarg(x_56, x_24);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_17);
lean_ctor_set(x_58, 1, x_57);
x_59 = l_Lean_Json_mkObj(x_58);
x_60 = l_Lean_Json_compress(x_59);
x_61 = lean_mk_string("Expected JSON-RPC response, got: '");
x_62 = lean_string_append(x_61, x_60);
lean_dec(x_60);
x_63 = lean_mk_string("'");
x_64 = lean_string_append(x_62, x_63);
lean_dec(x_63);
x_65 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_65);
return x_7;
}
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_66 = lean_ctor_get(x_7, 1);
lean_inc(x_66);
lean_dec(x_7);
x_67 = lean_ctor_get(x_8, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_8, 1);
lean_inc(x_68);
x_69 = lean_ctor_get(x_8, 2);
lean_inc(x_69);
lean_dec(x_8);
x_70 = lean_mk_string("2.0");
x_71 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_71, 0, x_70);
x_72 = lean_mk_string("jsonrpc");
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
x_74 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_74, 0, x_68);
x_75 = lean_mk_string("method");
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
x_77 = lean_box(0);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
x_79 = lean_mk_string("params");
x_80 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_79, x_69);
lean_dec(x_69);
switch (lean_obj_tag(x_67)) {
case 0:
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_81 = lean_ctor_get(x_67, 0);
lean_inc(x_81);
lean_dec(x_67);
x_82 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_82, 0, x_81);
x_83 = lean_mk_string("id");
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_82);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_78);
x_86 = l_List_append___rarg(x_85, x_80);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_73);
lean_ctor_set(x_87, 1, x_86);
x_88 = l_Lean_Json_mkObj(x_87);
x_89 = l_Lean_Json_compress(x_88);
x_90 = lean_mk_string("Expected JSON-RPC response, got: '");
x_91 = lean_string_append(x_90, x_89);
lean_dec(x_89);
x_92 = lean_mk_string("'");
x_93 = lean_string_append(x_91, x_92);
lean_dec(x_92);
x_94 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_94, 0, x_93);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_66);
return x_95;
}
case 1:
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_96 = lean_ctor_get(x_67, 0);
lean_inc(x_96);
lean_dec(x_67);
x_97 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_97, 0, x_96);
x_98 = lean_mk_string("id");
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_97);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_78);
x_101 = l_List_append___rarg(x_100, x_80);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_73);
lean_ctor_set(x_102, 1, x_101);
x_103 = l_Lean_Json_mkObj(x_102);
x_104 = l_Lean_Json_compress(x_103);
x_105 = lean_mk_string("Expected JSON-RPC response, got: '");
x_106 = lean_string_append(x_105, x_104);
lean_dec(x_104);
x_107 = lean_mk_string("'");
x_108 = lean_string_append(x_106, x_107);
lean_dec(x_107);
x_109 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_109, 0, x_108);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_109);
lean_ctor_set(x_110, 1, x_66);
return x_110;
}
default: 
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_111 = lean_mk_string("id");
x_112 = lean_box(0);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_111);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_78);
x_115 = l_List_append___rarg(x_114, x_80);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_73);
lean_ctor_set(x_116, 1, x_115);
x_117 = l_Lean_Json_mkObj(x_116);
x_118 = l_Lean_Json_compress(x_117);
x_119 = lean_mk_string("Expected JSON-RPC response, got: '");
x_120 = lean_string_append(x_119, x_118);
lean_dec(x_118);
x_121 = lean_mk_string("'");
x_122 = lean_string_append(x_120, x_121);
lean_dec(x_121);
x_123 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_123, 0, x_122);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_66);
return x_124;
}
}
}
}
case 1:
{
uint8_t x_125; 
lean_dec(x_5);
lean_dec(x_3);
x_125 = !lean_is_exclusive(x_7);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_126 = lean_ctor_get(x_7, 0);
lean_dec(x_126);
x_127 = lean_ctor_get(x_8, 0);
lean_inc(x_127);
x_128 = lean_ctor_get(x_8, 1);
lean_inc(x_128);
lean_dec(x_8);
x_129 = lean_mk_string("2.0");
x_130 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_130, 0, x_129);
x_131 = lean_mk_string("jsonrpc");
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_131);
lean_ctor_set(x_132, 1, x_130);
x_133 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_133, 0, x_127);
x_134 = lean_mk_string("method");
x_135 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_135, 0, x_134);
lean_ctor_set(x_135, 1, x_133);
x_136 = lean_mk_string("params");
x_137 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_136, x_128);
lean_dec(x_128);
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_135);
lean_ctor_set(x_138, 1, x_137);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_132);
lean_ctor_set(x_139, 1, x_138);
x_140 = l_Lean_Json_mkObj(x_139);
x_141 = l_Lean_Json_compress(x_140);
x_142 = lean_mk_string("Expected JSON-RPC response, got: '");
x_143 = lean_string_append(x_142, x_141);
lean_dec(x_141);
x_144 = lean_mk_string("'");
x_145 = lean_string_append(x_143, x_144);
lean_dec(x_144);
x_146 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_146);
return x_7;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_147 = lean_ctor_get(x_7, 1);
lean_inc(x_147);
lean_dec(x_7);
x_148 = lean_ctor_get(x_8, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_8, 1);
lean_inc(x_149);
lean_dec(x_8);
x_150 = lean_mk_string("2.0");
x_151 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_151, 0, x_150);
x_152 = lean_mk_string("jsonrpc");
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_151);
x_154 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_154, 0, x_148);
x_155 = lean_mk_string("method");
x_156 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_156, 1, x_154);
x_157 = lean_mk_string("params");
x_158 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_157, x_149);
lean_dec(x_149);
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_156);
lean_ctor_set(x_159, 1, x_158);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_153);
lean_ctor_set(x_160, 1, x_159);
x_161 = l_Lean_Json_mkObj(x_160);
x_162 = l_Lean_Json_compress(x_161);
x_163 = lean_mk_string("Expected JSON-RPC response, got: '");
x_164 = lean_string_append(x_163, x_162);
lean_dec(x_162);
x_165 = lean_mk_string("'");
x_166 = lean_string_append(x_164, x_165);
lean_dec(x_165);
x_167 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_167, 0, x_166);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_147);
return x_168;
}
}
case 2:
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; uint8_t x_198; 
x_169 = lean_ctor_get(x_7, 1);
lean_inc(x_169);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_170 = x_7;
} else {
 lean_dec_ref(x_7);
 x_170 = lean_box(0);
}
x_171 = lean_ctor_get(x_8, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_8, 1);
lean_inc(x_172);
lean_dec(x_8);
x_198 = l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_beqRequestID____x40_Lean_Data_JsonRpc___hyg_32_(x_171, x_3);
if (x_198 == 0)
{
lean_dec(x_172);
lean_dec(x_5);
switch (lean_obj_tag(x_3)) {
case 0:
{
lean_object* x_199; 
lean_dec(x_3);
x_199 = lean_mk_string("\"s\"");
x_173 = x_199;
goto block_197;
}
case 1:
{
lean_object* x_200; lean_object* x_201; 
x_200 = lean_ctor_get(x_3, 0);
lean_inc(x_200);
lean_dec(x_3);
x_201 = l_Lean_JsonNumber_toString(x_200);
x_173 = x_201;
goto block_197;
}
default: 
{
lean_object* x_202; 
x_202 = lean_mk_string("null");
x_173 = x_202;
goto block_197;
}
}
}
else
{
lean_object* x_203; 
lean_dec(x_171);
lean_dec(x_170);
lean_inc(x_172);
x_203 = lean_apply_1(x_5, x_172);
if (lean_obj_tag(x_203) == 0)
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
lean_dec(x_3);
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
lean_dec(x_203);
x_205 = l_Lean_Json_compress(x_172);
x_206 = lean_mk_string("Unexpected result '");
x_207 = lean_string_append(x_206, x_205);
lean_dec(x_205);
x_208 = lean_mk_string("'\n");
x_209 = lean_string_append(x_207, x_208);
lean_dec(x_208);
x_210 = lean_string_append(x_209, x_204);
lean_dec(x_204);
x_211 = lean_mk_string("");
x_212 = lean_string_append(x_210, x_211);
lean_dec(x_211);
x_213 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_213, 0, x_212);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_169);
return x_214;
}
else
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; 
lean_dec(x_172);
x_215 = lean_ctor_get(x_203, 0);
lean_inc(x_215);
lean_dec(x_203);
x_216 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_216, 0, x_3);
lean_ctor_set(x_216, 1, x_215);
x_217 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_217, 0, x_216);
lean_ctor_set(x_217, 1, x_169);
return x_217;
}
}
block_197:
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_174 = lean_mk_string("Expected id ");
x_175 = lean_string_append(x_174, x_173);
lean_dec(x_173);
x_176 = lean_mk_string(", got id ");
x_177 = lean_string_append(x_175, x_176);
lean_dec(x_176);
switch (lean_obj_tag(x_171)) {
case 0:
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; 
lean_dec(x_171);
x_178 = lean_mk_string("\"s\"");
x_179 = lean_string_append(x_177, x_178);
lean_dec(x_178);
x_180 = lean_mk_string("");
x_181 = lean_string_append(x_179, x_180);
lean_dec(x_180);
x_182 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_182, 0, x_181);
if (lean_is_scalar(x_170)) {
 x_183 = lean_alloc_ctor(1, 2, 0);
} else {
 x_183 = x_170;
 lean_ctor_set_tag(x_183, 1);
}
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_183, 1, x_169);
return x_183;
}
case 1:
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_184 = lean_ctor_get(x_171, 0);
lean_inc(x_184);
lean_dec(x_171);
x_185 = l_Lean_JsonNumber_toString(x_184);
x_186 = lean_string_append(x_177, x_185);
lean_dec(x_185);
x_187 = lean_mk_string("");
x_188 = lean_string_append(x_186, x_187);
lean_dec(x_187);
x_189 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_189, 0, x_188);
if (lean_is_scalar(x_170)) {
 x_190 = lean_alloc_ctor(1, 2, 0);
} else {
 x_190 = x_170;
 lean_ctor_set_tag(x_190, 1);
}
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_169);
return x_190;
}
default: 
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
x_191 = lean_mk_string("null");
x_192 = lean_string_append(x_177, x_191);
lean_dec(x_191);
x_193 = lean_mk_string("");
x_194 = lean_string_append(x_192, x_193);
lean_dec(x_193);
x_195 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_195, 0, x_194);
if (lean_is_scalar(x_170)) {
 x_196 = lean_alloc_ctor(1, 2, 0);
} else {
 x_196 = x_170;
 lean_ctor_set_tag(x_196, 1);
}
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_169);
return x_196;
}
}
}
}
default: 
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; uint8_t x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; 
lean_dec(x_5);
lean_dec(x_3);
x_218 = lean_ctor_get(x_7, 1);
lean_inc(x_218);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_219 = x_7;
} else {
 lean_dec_ref(x_7);
 x_219 = lean_box(0);
}
x_220 = lean_ctor_get(x_8, 0);
lean_inc(x_220);
x_221 = lean_ctor_get_uint8(x_8, sizeof(void*)*3);
x_222 = lean_ctor_get(x_8, 1);
lean_inc(x_222);
x_223 = lean_ctor_get(x_8, 2);
lean_inc(x_223);
lean_dec(x_8);
x_224 = lean_mk_string("2.0");
x_225 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_225, 0, x_224);
x_226 = lean_mk_string("jsonrpc");
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_226);
lean_ctor_set(x_227, 1, x_225);
x_228 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_228, 0, x_222);
x_229 = lean_mk_string("message");
x_230 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_230, 0, x_229);
lean_ctor_set(x_230, 1, x_228);
x_231 = lean_box(0);
x_232 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_232, 0, x_230);
lean_ctor_set(x_232, 1, x_231);
x_233 = lean_mk_string("data");
x_234 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__2(x_233, x_223);
lean_dec(x_223);
switch (lean_obj_tag(x_220)) {
case 0:
{
lean_object* x_325; lean_object* x_326; 
x_325 = lean_ctor_get(x_220, 0);
lean_inc(x_325);
lean_dec(x_220);
x_326 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_326, 0, x_325);
x_235 = x_326;
goto block_324;
}
case 1:
{
lean_object* x_327; lean_object* x_328; 
x_327 = lean_ctor_get(x_220, 0);
lean_inc(x_327);
lean_dec(x_220);
x_328 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_328, 0, x_327);
x_235 = x_328;
goto block_324;
}
default: 
{
lean_object* x_329; 
x_329 = lean_box(0);
x_235 = x_329;
goto block_324;
}
}
block_324:
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_236 = lean_mk_string("id");
x_237 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_237, 0, x_236);
lean_ctor_set(x_237, 1, x_235);
switch (x_221) {
case 0:
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; 
x_258 = lean_unsigned_to_nat(32700u);
x_259 = lean_nat_to_int(x_258);
x_260 = lean_int_neg(x_259);
lean_dec(x_259);
x_261 = lean_unsigned_to_nat(0u);
x_262 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_262, 0, x_260);
lean_ctor_set(x_262, 1, x_261);
x_263 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_263, 0, x_262);
x_238 = x_263;
goto block_257;
}
case 1:
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_264 = lean_unsigned_to_nat(32600u);
x_265 = lean_nat_to_int(x_264);
x_266 = lean_int_neg(x_265);
lean_dec(x_265);
x_267 = lean_unsigned_to_nat(0u);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_266);
lean_ctor_set(x_268, 1, x_267);
x_269 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_269, 0, x_268);
x_238 = x_269;
goto block_257;
}
case 2:
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_270 = lean_unsigned_to_nat(32601u);
x_271 = lean_nat_to_int(x_270);
x_272 = lean_int_neg(x_271);
lean_dec(x_271);
x_273 = lean_unsigned_to_nat(0u);
x_274 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_274, 0, x_272);
lean_ctor_set(x_274, 1, x_273);
x_275 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_275, 0, x_274);
x_238 = x_275;
goto block_257;
}
case 3:
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; 
x_276 = lean_unsigned_to_nat(32602u);
x_277 = lean_nat_to_int(x_276);
x_278 = lean_int_neg(x_277);
lean_dec(x_277);
x_279 = lean_unsigned_to_nat(0u);
x_280 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_280, 0, x_278);
lean_ctor_set(x_280, 1, x_279);
x_281 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_281, 0, x_280);
x_238 = x_281;
goto block_257;
}
case 4:
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; 
x_282 = lean_unsigned_to_nat(32603u);
x_283 = lean_nat_to_int(x_282);
x_284 = lean_int_neg(x_283);
lean_dec(x_283);
x_285 = lean_unsigned_to_nat(0u);
x_286 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_286, 0, x_284);
lean_ctor_set(x_286, 1, x_285);
x_287 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_287, 0, x_286);
x_238 = x_287;
goto block_257;
}
case 5:
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_288 = lean_unsigned_to_nat(32099u);
x_289 = lean_nat_to_int(x_288);
x_290 = lean_int_neg(x_289);
lean_dec(x_289);
x_291 = lean_unsigned_to_nat(0u);
x_292 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_292, 0, x_290);
lean_ctor_set(x_292, 1, x_291);
x_293 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_293, 0, x_292);
x_238 = x_293;
goto block_257;
}
case 6:
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; 
x_294 = lean_unsigned_to_nat(32000u);
x_295 = lean_nat_to_int(x_294);
x_296 = lean_int_neg(x_295);
lean_dec(x_295);
x_297 = lean_unsigned_to_nat(0u);
x_298 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_298, 0, x_296);
lean_ctor_set(x_298, 1, x_297);
x_299 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_299, 0, x_298);
x_238 = x_299;
goto block_257;
}
case 7:
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; 
x_300 = lean_unsigned_to_nat(32002u);
x_301 = lean_nat_to_int(x_300);
x_302 = lean_int_neg(x_301);
lean_dec(x_301);
x_303 = lean_unsigned_to_nat(0u);
x_304 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_304, 0, x_302);
lean_ctor_set(x_304, 1, x_303);
x_305 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_305, 0, x_304);
x_238 = x_305;
goto block_257;
}
case 8:
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; 
x_306 = lean_unsigned_to_nat(32001u);
x_307 = lean_nat_to_int(x_306);
x_308 = lean_int_neg(x_307);
lean_dec(x_307);
x_309 = lean_unsigned_to_nat(0u);
x_310 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_310, 0, x_308);
lean_ctor_set(x_310, 1, x_309);
x_311 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_311, 0, x_310);
x_238 = x_311;
goto block_257;
}
case 9:
{
lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
x_312 = lean_unsigned_to_nat(32800u);
x_313 = lean_nat_to_int(x_312);
x_314 = lean_int_neg(x_313);
lean_dec(x_313);
x_315 = lean_unsigned_to_nat(0u);
x_316 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_316, 0, x_314);
lean_ctor_set(x_316, 1, x_315);
x_317 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_317, 0, x_316);
x_238 = x_317;
goto block_257;
}
default: 
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; 
x_318 = lean_unsigned_to_nat(32801u);
x_319 = lean_nat_to_int(x_318);
x_320 = lean_int_neg(x_319);
lean_dec(x_319);
x_321 = lean_unsigned_to_nat(0u);
x_322 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_322, 0, x_320);
lean_ctor_set(x_322, 1, x_321);
x_323 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_323, 0, x_322);
x_238 = x_323;
goto block_257;
}
}
block_257:
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
x_239 = lean_mk_string("code");
x_240 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_240, 0, x_239);
lean_ctor_set(x_240, 1, x_238);
x_241 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_241, 0, x_240);
lean_ctor_set(x_241, 1, x_232);
x_242 = l_List_append___rarg(x_241, x_234);
x_243 = l_Lean_Json_mkObj(x_242);
x_244 = lean_mk_string("error");
x_245 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_245, 0, x_244);
lean_ctor_set(x_245, 1, x_243);
x_246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_246, 0, x_245);
lean_ctor_set(x_246, 1, x_231);
x_247 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_247, 0, x_237);
lean_ctor_set(x_247, 1, x_246);
x_248 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_248, 0, x_227);
lean_ctor_set(x_248, 1, x_247);
x_249 = l_Lean_Json_mkObj(x_248);
x_250 = l_Lean_Json_compress(x_249);
x_251 = lean_mk_string("Expected JSON-RPC response, got: '");
x_252 = lean_string_append(x_251, x_250);
lean_dec(x_250);
x_253 = lean_mk_string("'");
x_254 = lean_string_append(x_252, x_253);
lean_dec(x_253);
x_255 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_255, 0, x_254);
if (lean_is_scalar(x_219)) {
 x_256 = lean_alloc_ctor(1, 2, 0);
} else {
 x_256 = x_219;
 lean_ctor_set_tag(x_256, 1);
}
lean_ctor_set(x_256, 0, x_255);
lean_ctor_set(x_256, 1, x_218);
return x_256;
}
}
}
}
}
else
{
uint8_t x_330; 
lean_dec(x_5);
lean_dec(x_3);
x_330 = !lean_is_exclusive(x_7);
if (x_330 == 0)
{
return x_7;
}
else
{
lean_object* x_331; lean_object* x_332; lean_object* x_333; 
x_331 = lean_ctor_get(x_7, 0);
x_332 = lean_ctor_get(x_7, 1);
lean_inc(x_332);
lean_inc(x_331);
lean_dec(x_7);
x_333 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_333, 0, x_331);
lean_ctor_set(x_333, 1, x_332);
return x_333;
}
}
}
}
lean_object* l_IO_FS_Stream_readResponseAs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_IO_FS_Stream_readResponseAs(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_IO_FS_Stream_writeMessage(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_mk_string("2.0");
x_5 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_mk_string("jsonrpc");
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_5);
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lean_ctor_get(x_2, 2);
lean_inc(x_9);
x_11 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_11, 0, x_9);
x_12 = lean_mk_string("method");
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_mk_string("params");
x_17 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_16, x_10);
switch (lean_obj_tag(x_8)) {
case 0:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_18 = lean_ctor_get(x_8, 0);
lean_inc(x_18);
x_19 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_mk_string("id");
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_15);
x_23 = l_List_append___rarg(x_22, x_17);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_7);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_Json_mkObj(x_24);
x_26 = l_IO_FS_Stream_writeJson(x_1, x_25, x_3);
return x_26;
}
case 1:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_27 = lean_ctor_get(x_8, 0);
lean_inc(x_27);
x_28 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = lean_mk_string("id");
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_15);
x_32 = l_List_append___rarg(x_31, x_17);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_7);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Lean_Json_mkObj(x_33);
x_35 = l_IO_FS_Stream_writeJson(x_1, x_34, x_3);
return x_35;
}
default: 
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_36 = lean_mk_string("id");
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_15);
x_40 = l_List_append___rarg(x_39, x_17);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_7);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_Lean_Json_mkObj(x_41);
x_43 = l_IO_FS_Stream_writeJson(x_1, x_42, x_3);
return x_43;
}
}
}
case 1:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_44 = lean_ctor_get(x_2, 0);
x_45 = lean_ctor_get(x_2, 1);
lean_inc(x_44);
x_46 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_46, 0, x_44);
x_47 = lean_mk_string("method");
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = lean_mk_string("params");
x_50 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__1(x_49, x_45);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_48);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_7);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_Lean_Json_mkObj(x_52);
x_54 = l_IO_FS_Stream_writeJson(x_1, x_53, x_3);
return x_54;
}
case 2:
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_55 = lean_ctor_get(x_2, 0);
x_56 = lean_ctor_get(x_2, 1);
x_57 = lean_mk_string("result");
lean_inc(x_56);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
x_59 = lean_box(0);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
switch (lean_obj_tag(x_55)) {
case 0:
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_61 = lean_ctor_get(x_55, 0);
lean_inc(x_61);
x_62 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_62, 0, x_61);
x_63 = lean_mk_string("id");
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_62);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_60);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_7);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Lean_Json_mkObj(x_66);
x_68 = l_IO_FS_Stream_writeJson(x_1, x_67, x_3);
return x_68;
}
case 1:
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_69 = lean_ctor_get(x_55, 0);
lean_inc(x_69);
x_70 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_70, 0, x_69);
x_71 = lean_mk_string("id");
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_60);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_7);
lean_ctor_set(x_74, 1, x_73);
x_75 = l_Lean_Json_mkObj(x_74);
x_76 = l_IO_FS_Stream_writeJson(x_1, x_75, x_3);
return x_76;
}
default: 
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_77 = lean_mk_string("id");
x_78 = lean_box(0);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_60);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_7);
lean_ctor_set(x_81, 1, x_80);
x_82 = l_Lean_Json_mkObj(x_81);
x_83 = l_IO_FS_Stream_writeJson(x_1, x_82, x_3);
return x_83;
}
}
}
default: 
{
lean_object* x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_84 = lean_ctor_get(x_2, 0);
x_85 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_86 = lean_ctor_get(x_2, 1);
x_87 = lean_ctor_get(x_2, 2);
lean_inc(x_86);
x_88 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_88, 0, x_86);
x_89 = lean_mk_string("message");
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_88);
x_91 = lean_box(0);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_mk_string("data");
x_94 = l_Lean_Json_opt___at_Lean_JsonRpc_instToJsonMessage___spec__2(x_93, x_87);
switch (lean_obj_tag(x_84)) {
case 0:
{
lean_object* x_179; lean_object* x_180; 
x_179 = lean_ctor_get(x_84, 0);
lean_inc(x_179);
x_180 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_180, 0, x_179);
x_95 = x_180;
goto block_178;
}
case 1:
{
lean_object* x_181; lean_object* x_182; 
x_181 = lean_ctor_get(x_84, 0);
lean_inc(x_181);
x_182 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_182, 0, x_181);
x_95 = x_182;
goto block_178;
}
default: 
{
lean_object* x_183; 
x_183 = lean_box(0);
x_95 = x_183;
goto block_178;
}
}
block_178:
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_mk_string("id");
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_95);
switch (x_85) {
case 0:
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_112 = lean_unsigned_to_nat(32700u);
x_113 = lean_nat_to_int(x_112);
x_114 = lean_int_neg(x_113);
lean_dec(x_113);
x_115 = lean_unsigned_to_nat(0u);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
x_117 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_117, 0, x_116);
x_98 = x_117;
goto block_111;
}
case 1:
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
x_118 = lean_unsigned_to_nat(32600u);
x_119 = lean_nat_to_int(x_118);
x_120 = lean_int_neg(x_119);
lean_dec(x_119);
x_121 = lean_unsigned_to_nat(0u);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_120);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_123, 0, x_122);
x_98 = x_123;
goto block_111;
}
case 2:
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_124 = lean_unsigned_to_nat(32601u);
x_125 = lean_nat_to_int(x_124);
x_126 = lean_int_neg(x_125);
lean_dec(x_125);
x_127 = lean_unsigned_to_nat(0u);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_126);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_129, 0, x_128);
x_98 = x_129;
goto block_111;
}
case 3:
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_130 = lean_unsigned_to_nat(32602u);
x_131 = lean_nat_to_int(x_130);
x_132 = lean_int_neg(x_131);
lean_dec(x_131);
x_133 = lean_unsigned_to_nat(0u);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
x_135 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_135, 0, x_134);
x_98 = x_135;
goto block_111;
}
case 4:
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_136 = lean_unsigned_to_nat(32603u);
x_137 = lean_nat_to_int(x_136);
x_138 = lean_int_neg(x_137);
lean_dec(x_137);
x_139 = lean_unsigned_to_nat(0u);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
x_141 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_141, 0, x_140);
x_98 = x_141;
goto block_111;
}
case 5:
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_142 = lean_unsigned_to_nat(32099u);
x_143 = lean_nat_to_int(x_142);
x_144 = lean_int_neg(x_143);
lean_dec(x_143);
x_145 = lean_unsigned_to_nat(0u);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
x_147 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_147, 0, x_146);
x_98 = x_147;
goto block_111;
}
case 6:
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_148 = lean_unsigned_to_nat(32000u);
x_149 = lean_nat_to_int(x_148);
x_150 = lean_int_neg(x_149);
lean_dec(x_149);
x_151 = lean_unsigned_to_nat(0u);
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_150);
lean_ctor_set(x_152, 1, x_151);
x_153 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_153, 0, x_152);
x_98 = x_153;
goto block_111;
}
case 7:
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
x_154 = lean_unsigned_to_nat(32002u);
x_155 = lean_nat_to_int(x_154);
x_156 = lean_int_neg(x_155);
lean_dec(x_155);
x_157 = lean_unsigned_to_nat(0u);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_156);
lean_ctor_set(x_158, 1, x_157);
x_159 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_159, 0, x_158);
x_98 = x_159;
goto block_111;
}
case 8:
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_160 = lean_unsigned_to_nat(32001u);
x_161 = lean_nat_to_int(x_160);
x_162 = lean_int_neg(x_161);
lean_dec(x_161);
x_163 = lean_unsigned_to_nat(0u);
x_164 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_164, 0, x_162);
lean_ctor_set(x_164, 1, x_163);
x_165 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_165, 0, x_164);
x_98 = x_165;
goto block_111;
}
case 9:
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_166 = lean_unsigned_to_nat(32800u);
x_167 = lean_nat_to_int(x_166);
x_168 = lean_int_neg(x_167);
lean_dec(x_167);
x_169 = lean_unsigned_to_nat(0u);
x_170 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_170, 0, x_168);
lean_ctor_set(x_170, 1, x_169);
x_171 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_171, 0, x_170);
x_98 = x_171;
goto block_111;
}
default: 
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_172 = lean_unsigned_to_nat(32801u);
x_173 = lean_nat_to_int(x_172);
x_174 = lean_int_neg(x_173);
lean_dec(x_173);
x_175 = lean_unsigned_to_nat(0u);
x_176 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_176, 0, x_174);
lean_ctor_set(x_176, 1, x_175);
x_177 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_177, 0, x_176);
x_98 = x_177;
goto block_111;
}
}
block_111:
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_99 = lean_mk_string("code");
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_99);
lean_ctor_set(x_100, 1, x_98);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_92);
x_102 = l_List_append___rarg(x_101, x_94);
x_103 = l_Lean_Json_mkObj(x_102);
x_104 = lean_mk_string("error");
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_103);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_91);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_97);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_7);
lean_ctor_set(x_108, 1, x_107);
x_109 = l_Lean_Json_mkObj(x_108);
x_110 = l_IO_FS_Stream_writeJson(x_1, x_109, x_3);
return x_110;
}
}
}
}
}
}
lean_object* l_IO_FS_Stream_writeMessage___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Stream_writeMessage(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_IO_FS_Stream_writeRequest___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 2);
lean_inc(x_7);
lean_dec(x_3);
x_8 = l_Lean_Json_toStructured_x3f___rarg(x_1, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_6);
lean_ctor_set(x_10, 2, x_9);
x_11 = l_IO_FS_Stream_writeMessage(x_2, x_10, x_4);
lean_dec(x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_14, 0, x_5);
lean_ctor_set(x_14, 1, x_6);
lean_ctor_set(x_14, 2, x_13);
x_15 = l_IO_FS_Stream_writeMessage(x_2, x_14, x_4);
lean_dec(x_14);
return x_15;
}
}
}
lean_object* l_IO_FS_Stream_writeRequest(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Stream_writeRequest___rarg), 4, 0);
return x_2;
}
}
lean_object* l_IO_FS_Stream_writeNotification___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = l_Lean_Json_toStructured_x3f___rarg(x_1, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_7);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
x_10 = l_IO_FS_Stream_writeMessage(x_2, x_9, x_4);
lean_dec(x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_7, 0);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_IO_FS_Stream_writeMessage(x_2, x_13, x_4);
lean_dec(x_13);
return x_14;
}
}
}
lean_object* l_IO_FS_Stream_writeNotification(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Stream_writeNotification___rarg), 4, 0);
return x_2;
}
}
lean_object* l_IO_FS_Stream_writeResponse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_apply_1(x_1, x_6);
x_8 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
x_9 = l_IO_FS_Stream_writeMessage(x_2, x_8, x_4);
lean_dec(x_8);
return x_9;
}
}
lean_object* l_IO_FS_Stream_writeResponse(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Stream_writeResponse___rarg), 4, 0);
return x_2;
}
}
lean_object* l_IO_FS_Stream_writeResponseError(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get_uint8(x_2, sizeof(void*)*3);
x_6 = lean_ctor_get(x_2, 1);
x_7 = lean_box(0);
lean_inc(x_6);
lean_inc(x_4);
x_8 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_6);
lean_ctor_set(x_8, 2, x_7);
lean_ctor_set_uint8(x_8, sizeof(void*)*3, x_5);
x_9 = l_IO_FS_Stream_writeMessage(x_1, x_8, x_3);
lean_dec(x_8);
return x_9;
}
}
lean_object* l_IO_FS_Stream_writeResponseError___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Stream_writeResponseError(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_IO_FS_Stream_writeResponseErrorWithData___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_3, 2);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_1);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get_uint8(x_3, sizeof(void*)*3);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_10, 0, x_6);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
lean_ctor_set_uint8(x_10, sizeof(void*)*3, x_7);
x_11 = l_IO_FS_Stream_writeMessage(x_2, x_10, x_4);
lean_dec(x_10);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
x_13 = lean_ctor_get_uint8(x_3, sizeof(void*)*3);
x_14 = lean_ctor_get(x_3, 1);
lean_inc(x_14);
lean_dec(x_3);
x_15 = !lean_is_exclusive(x_5);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_5, 0);
x_17 = lean_apply_1(x_1, x_16);
lean_ctor_set(x_5, 0, x_17);
x_18 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_14);
lean_ctor_set(x_18, 2, x_5);
lean_ctor_set_uint8(x_18, sizeof(void*)*3, x_13);
x_19 = l_IO_FS_Stream_writeMessage(x_2, x_18, x_4);
lean_dec(x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_5, 0);
lean_inc(x_20);
lean_dec(x_5);
x_21 = lean_apply_1(x_1, x_20);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(3, 3, 1);
lean_ctor_set(x_23, 0, x_12);
lean_ctor_set(x_23, 1, x_14);
lean_ctor_set(x_23, 2, x_22);
lean_ctor_set_uint8(x_23, sizeof(void*)*3, x_13);
x_24 = l_IO_FS_Stream_writeMessage(x_2, x_23, x_4);
lean_dec(x_23);
return x_24;
}
}
}
}
lean_object* l_IO_FS_Stream_writeResponseErrorWithData(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Stream_writeResponseErrorWithData___rarg), 4, 0);
return x_2;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Init_Control(lean_object*);
lean_object* initialize_Init_System_IO(lean_object*);
lean_object* initialize_Std_Data_RBTree(lean_object*);
lean_object* initialize_Lean_Data_Json(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Data_JsonRpc(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_IO(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_RBTree(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_JsonRpc_instInhabitedRequestID = _init_l_Lean_JsonRpc_instInhabitedRequestID();
lean_mark_persistent(l_Lean_JsonRpc_instInhabitedRequestID);
l_Lean_JsonRpc_instBEqRequestID = _init_l_Lean_JsonRpc_instBEqRequestID();
lean_mark_persistent(l_Lean_JsonRpc_instBEqRequestID);
l_Lean_JsonRpc_instOrdRequestID = _init_l_Lean_JsonRpc_instOrdRequestID();
lean_mark_persistent(l_Lean_JsonRpc_instOrdRequestID);
l_Lean_JsonRpc_instInhabitedErrorCode = _init_l_Lean_JsonRpc_instInhabitedErrorCode();
l_Lean_JsonRpc_instBEqErrorCode = _init_l_Lean_JsonRpc_instBEqErrorCode();
lean_mark_persistent(l_Lean_JsonRpc_instBEqErrorCode);
l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_ltProp = _init_l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_ltProp();
lean_mark_persistent(l___private_Lean_Data_JsonRpc_0__Lean_JsonRpc_RequestID_ltProp);
l_Lean_JsonRpc_instLTRequestID = _init_l_Lean_JsonRpc_instLTRequestID();
lean_mark_persistent(l_Lean_JsonRpc_instLTRequestID);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
