// Lean compiler output
// Module: Lean.Util.Trace
// Imports: Init Lean.Message Lean.MonadEnv
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
lean_object* l_tryFinally___rarg___lambda__1___boxed(lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MessageData_isNest(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__4(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_isTracingEnabledFor___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_MessageData_format(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_printTraces___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_get_x21___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__1___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_traceCtx___rarg___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_sub(size_t, size_t);
lean_object* l_Lean_enableTracing___rarg___lambda__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_trace___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_append___rarg(lean_object*, lean_object*);
lean_object* l_Monad_seqRight___default___rarg___lambda__1___boxed(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addNode___spec__1(size_t, size_t, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_termTrace_x5b_____x5d____;
lean_object* l_Std_PersistentArray_getAux___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_enableTracing___rarg(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_traceCtx___rarg___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* l_Lean_interpolatedStrKind;
lean_object* l_Lean_getTraces(lean_object*);
lean_object* l_Lean_isTracingEnabledFor___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__5___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
size_t l_USize_shiftRight(size_t, size_t);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__3___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_withNestedTraces___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_traceM___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forM___at_Lean_printTraces___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nameLitKind;
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_foldlM___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedTraceState;
lean_object* l_Lean_traceCtx___rarg___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM(lean_object*);
lean_object* l_Lean_trace(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_setTraceState(lean_object*);
lean_object* l_Lean_withNestedTraces(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_addNode(lean_object*);
lean_object* l_Lean_traceM___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__3(lean_object*);
lean_object* l_Lean_enableTracing___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_modifyTraces(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer(lean_object*, lean_object*);
lean_object* l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Nat_foldM_loop___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_KVMap_getBool(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_enableTracing___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___boxed(lean_object*, lean_object*);
lean_object* l_Lean_traceCtx___rarg___lambda__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MessageData_isNil(lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_addNode___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_traceCtx___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_traceM(lean_object*);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__3___boxed(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l___private_Init_Meta_0__Lean_quoteNameMk(lean_object*);
lean_object* l_Lean_isTracingEnabledFor(lean_object*);
lean_object* l_Lean_traceCtx___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4(lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_object*);
lean_object* l_Lean_isTracingEnabledFor___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_withNestedTraces___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_forM___at_Lean_printTraces___spec__1(lean_object*);
lean_object* l_Lean_resetTraceState___rarg(lean_object*);
lean_object* l_Nat_foldM_loop___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_shiftLeft(size_t, size_t);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___rarg___lambda__1(lean_object*);
lean_object* l_Lean_traceCtx___rarg___lambda__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_KVMap_contains(lean_object*, lean_object*);
lean_object* l_Lean_withNestedTraces___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_withNestedTraces___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_enableTracing(lean_object*);
lean_object* l_Std_PersistentArray_forMAux___at_Lean_printTraces___spec__2(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Std_PersistentArray_isEmpty___rarg(lean_object*);
lean_object* l_Std_PersistentArray_foldlM___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__5(lean_object*);
lean_object* l_Lean_addTrace___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_modifyTraces___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_MonadTracer_trace___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_addTrace___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_traceCtx___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___rarg(lean_object*, lean_object*);
lean_object* l_Lean_modifyTraces___rarg(lean_object*, lean_object*);
size_t l_USize_land(size_t, size_t);
lean_object* l_ReaderT_instMonadReaderT___rarg___lambda__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_resetTraceState(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__3___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadTracer_trace(lean_object*);
lean_object* l_Lean_setTraceState___rarg(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedTraceElem;
lean_object* l_Lean_enableTracing___rarg___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_traceCtx(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionAux_match__1(lean_object*);
lean_object* l_Lean_TraceState_traces___default;
lean_object* l_Lean_instMonadTrace___rarg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_get_x21___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__1(lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_toArray___rarg(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__3(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_addNode___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_traceCtx___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_enableTracing___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_enableTracing___rarg___lambda__2(lean_object*, uint8_t, lean_object*);
lean_object* l_Std_PersistentArray_forMAux___at_Lean_printTraces___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_printTraces(lean_object*);
lean_object* l_Lean_checkTraceOption___boxed(lean_object*, lean_object*);
lean_object* l_Lean_traceM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace(lean_object*);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__2(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_resetTraceState___rarg___lambda__1___boxed(lean_object*);
lean_object* l_IO_println___at_Lean_instEval__1___spec__1(lean_object*, lean_object*);
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg___lambda__2(size_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionAux_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addNode___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__5___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_resetTraceState___rarg___lambda__1(lean_object*);
lean_object* l_Lean_enableTracing___rarg___lambda__1(uint8_t, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_trace___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_traceCtx___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_myMacro____x40_Lean_Util_Trace___hyg_1091_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addTrace___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_traceCtx___rarg___lambda__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_printTraces___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_TraceState_enabled___default;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_instMonadTrace___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getTraces___rarg(lean_object*, lean_object*);
lean_object* l_Lean_trace___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_traceCtx___rarg___lambda__1(lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_Std_PersistentArray_getAux___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__2(lean_object*, size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_instMonadTrace(lean_object*, lean_object*);
lean_object* l_Std_instInhabitedPersistentArrayNode(lean_object*);
lean_object* l_Lean_getTraces___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_traceCtx___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_withNestedTraces___rarg___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_traceCtx___rarg___lambda__3(lean_object*, uint8_t, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOptionAux(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_TraceState_toFormat(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkLit(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionAux___boxed(lean_object*, lean_object*);
static lean_object* _init_l_Lean_instInhabitedTraceElem() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
static uint8_t _init_l_Lean_TraceState_enabled___default() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static lean_object* _init_l_Lean_TraceState_traces___default() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; size_t x_4; lean_object* x_5; lean_object* x_6; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_2);
x_4 = 5;
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_2);
lean_ctor_set(x_6, 2, x_5);
lean_ctor_set(x_6, 3, x_5);
lean_ctor_set_usize(x_6, 4, x_4);
return x_6;
}
}
static lean_object* _init_l_Lean_instInhabitedTraceState() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; size_t x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
lean_inc(x_2);
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_2);
x_4 = lean_usize_of_nat(x_1);
x_5 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_1);
lean_ctor_set(x_5, 3, x_1);
lean_ctor_set_usize(x_5, 4, x_4);
x_6 = 0;
x_7 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*1, x_6);
return x_7;
}
}
lean_object* l_Std_PersistentArray_getAux___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__2(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; size_t x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_Std_instInhabitedPersistentArrayNode(lean_box(0));
x_6 = x_2 >> x_3 % (sizeof(size_t) * 8);
x_7 = lean_usize_to_nat(x_6);
x_8 = lean_array_get(x_5, x_4, x_7);
lean_dec(x_7);
lean_dec(x_4);
x_9 = 1;
x_10 = x_9 << x_3 % (sizeof(size_t) * 8);
x_11 = x_10 - x_9;
x_12 = x_2 & x_11;
x_13 = 5;
x_14 = x_3 - x_13;
x_1 = x_8;
x_2 = x_12;
x_3 = x_14;
goto _start;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_usize_to_nat(x_2);
x_18 = l_Lean_instInhabitedTraceElem;
x_19 = lean_array_get(x_18, x_16, x_17);
lean_dec(x_17);
lean_dec(x_16);
return x_19;
}
}
}
lean_object* l_Std_PersistentArray_get_x21___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_1, 3);
lean_inc(x_3);
x_4 = lean_nat_dec_le(x_3, x_2);
if (x_4 == 0)
{
lean_object* x_5; size_t x_6; size_t x_7; lean_object* x_8; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_usize_of_nat(x_2);
x_7 = lean_ctor_get_usize(x_1, 4);
lean_dec(x_1);
x_8 = l_Std_PersistentArray_getAux___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__2(x_5, x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_nat_sub(x_2, x_3);
lean_dec(x_3);
x_11 = l_Lean_instInhabitedTraceElem;
x_12 = lean_array_get(x_11, x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
return x_12;
}
}
}
lean_object* l_Nat_foldM_loop___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_4, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_4, x_9);
lean_dec(x_4);
x_11 = lean_nat_sub(x_3, x_10);
x_12 = lean_nat_sub(x_11, x_9);
lean_dec(x_11);
lean_inc(x_1);
x_13 = l_Std_PersistentArray_get_x21___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__1(x_1, x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_MessageData_format(x_14, x_6);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_nat_dec_lt(x_7, x_12);
lean_dec(x_12);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_19, 0, x_5);
lean_ctor_set(x_19, 1, x_16);
x_4 = x_10;
x_5 = x_19;
x_6 = x_17;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_inc(x_2);
x_21 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_21, 0, x_5);
lean_ctor_set(x_21, 1, x_2);
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_16);
x_4 = x_10;
x_5 = x_22;
x_6 = x_17;
goto _start;
}
}
else
{
uint8_t x_24; 
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_15);
if (x_24 == 0)
{
return x_15;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_15, 0);
x_26 = lean_ctor_get(x_15, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_15);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_5);
lean_ctor_set(x_28, 1, x_6);
return x_28;
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_TraceState_toFormat(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
x_5 = lean_box(0);
lean_inc(x_4);
x_6 = l_Nat_foldM_loop___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__3(x_1, x_2, x_4, x_4, x_5, x_3);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Std_PersistentArray_getAux___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Std_PersistentArray_getAux___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__2(x_1, x_4, x_5);
return x_6;
}
}
lean_object* l_Std_PersistentArray_get_x21___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_PersistentArray_get_x21___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Nat_foldM_loop___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Nat_foldM_loop___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Lean_instMonadTrace___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_4, x_3);
x_6 = lean_apply_2(x_2, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_instMonadTrace___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
lean_inc(x_2);
x_3 = lean_alloc_closure((void*)(l_Lean_instMonadTrace___rarg___lambda__1), 3, 2);
lean_closure_set(x_3, 0, x_2);
lean_closure_set(x_3, 1, x_1);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_2(x_1, lean_box(0), x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
}
lean_object* l_Lean_instMonadTrace(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_instMonadTrace___rarg), 2, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__3___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 1;
x_9 = x_1 + x_8;
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__3___rarg(x_2, x_3, x_4, x_5, x_9, x_6, x_7);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_5 == x_6;
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_7);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_array_uget(x_4, x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_11 = l_Std_PersistentArray_forMAux___at_Lean_printTraces___spec__2___rarg(x_1, x_2, x_3, x_10);
x_12 = lean_box_usize(x_5);
x_13 = lean_box_usize(x_6);
x_14 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__3___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_14, 0, x_12);
lean_closure_set(x_14, 1, x_1);
lean_closure_set(x_14, 2, x_2);
lean_closure_set(x_14, 3, x_3);
lean_closure_set(x_14, 4, x_4);
lean_closure_set(x_14, 5, x_13);
x_15 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_11, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_apply_2(x_17, lean_box(0), x_7);
return x_18;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__3___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_IO_println___at_Lean_instEval__1___spec__1), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg___lambda__2(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 1;
x_9 = x_1 + x_8;
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg(x_2, x_3, x_4, x_5, x_9, x_6, x_7);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_5 == x_6;
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_array_uget(x_4, x_5);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_alloc_closure((void*)(l_Lean_MessageData_format), 2, 1);
lean_closure_set(x_12, 0, x_11);
lean_inc(x_2);
x_13 = lean_apply_2(x_2, lean_box(0), x_12);
lean_inc(x_2);
x_14 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg___lambda__1), 2, 1);
lean_closure_set(x_14, 0, x_2);
lean_inc(x_3);
x_15 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_13, x_14);
x_16 = lean_box_usize(x_5);
x_17 = lean_box_usize(x_6);
x_18 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg___lambda__2___boxed), 7, 6);
lean_closure_set(x_18, 0, x_16);
lean_closure_set(x_18, 1, x_1);
lean_closure_set(x_18, 2, x_2);
lean_closure_set(x_18, 3, x_3);
lean_closure_set(x_18, 4, x_4);
lean_closure_set(x_18, 5, x_17);
x_19 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_15, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_apply_2(x_21, lean_box(0), x_7);
return x_22;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Std_PersistentArray_forMAux___at_Lean_printTraces___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
uint8_t x_13; 
x_13 = lean_nat_dec_le(x_6, x_6);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_ctor_get(x_1, 0);
lean_inc(x_14);
lean_dec(x_1);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_box(0);
x_17 = lean_apply_2(x_15, lean_box(0), x_16);
return x_17;
}
else
{
size_t x_18; size_t x_19; lean_object* x_20; lean_object* x_21; 
x_18 = 0;
x_19 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_20 = lean_box(0);
x_21 = l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__3___rarg(x_1, x_2, x_3, x_5, x_18, x_19, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_22 = lean_ctor_get(x_4, 0);
lean_inc(x_22);
lean_dec(x_4);
x_23 = lean_array_get_size(x_22);
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_nat_dec_lt(x_24, x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_3);
lean_dec(x_2);
x_26 = lean_ctor_get(x_1, 0);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_box(0);
x_29 = lean_apply_2(x_27, lean_box(0), x_28);
return x_29;
}
else
{
uint8_t x_30; 
x_30 = lean_nat_dec_le(x_23, x_23);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_3);
lean_dec(x_2);
x_31 = lean_ctor_get(x_1, 0);
lean_inc(x_31);
lean_dec(x_1);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = lean_box(0);
x_34 = lean_apply_2(x_32, lean_box(0), x_33);
return x_34;
}
else
{
size_t x_35; size_t x_36; lean_object* x_37; lean_object* x_38; 
x_35 = 0;
x_36 = lean_usize_of_nat(x_23);
lean_dec(x_23);
x_37 = lean_box(0);
x_38 = l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg(x_1, x_2, x_3, x_22, x_35, x_36, x_37);
return x_38;
}
}
}
}
}
lean_object* l_Std_PersistentArray_forMAux___at_Lean_printTraces___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentArray_forMAux___at_Lean_printTraces___spec__2___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__5___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, size_t x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 1;
x_9 = x_1 + x_8;
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__5___rarg(x_2, x_3, x_4, x_5, x_9, x_6, x_7);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_5 == x_6;
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_7);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_array_uget(x_4, x_5);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_alloc_closure((void*)(l_Lean_MessageData_format), 2, 1);
lean_closure_set(x_12, 0, x_11);
lean_inc(x_2);
x_13 = lean_apply_2(x_2, lean_box(0), x_12);
lean_inc(x_2);
x_14 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg___lambda__1), 2, 1);
lean_closure_set(x_14, 0, x_2);
lean_inc(x_3);
x_15 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_13, x_14);
x_16 = lean_box_usize(x_5);
x_17 = lean_box_usize(x_6);
x_18 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__5___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_18, 0, x_16);
lean_closure_set(x_18, 1, x_1);
lean_closure_set(x_18, 2, x_2);
lean_closure_set(x_18, 3, x_3);
lean_closure_set(x_18, 4, x_4);
lean_closure_set(x_18, 5, x_17);
x_19 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_15, x_18);
return x_19;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
lean_dec(x_1);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_apply_2(x_21, lean_box(0), x_7);
return x_22;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__5___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l_Std_PersistentArray_forM___at_Lean_printTraces___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_5, 4);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_Std_PersistentArray_forMAux___at_Lean_printTraces___spec__2___rarg(x_1, x_2, x_3, x_7);
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_array_get_size(x_9);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_lt(x_11, x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_ctor_get(x_5, 1);
lean_inc(x_13);
lean_dec(x_5);
x_14 = lean_box(0);
x_15 = lean_apply_2(x_13, lean_box(0), x_14);
x_16 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_8, x_15);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = lean_nat_dec_le(x_10, x_10);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_18 = lean_ctor_get(x_5, 1);
lean_inc(x_18);
lean_dec(x_5);
x_19 = lean_box(0);
x_20 = lean_apply_2(x_18, lean_box(0), x_19);
x_21 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_8, x_20);
return x_21;
}
else
{
size_t x_22; size_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_5);
x_22 = 0;
x_23 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_24 = lean_box(0);
x_25 = l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__5___rarg(x_1, x_2, x_3, x_9, x_22, x_23, x_24);
x_26 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_8, x_25);
return x_26;
}
}
}
}
lean_object* l_Std_PersistentArray_forM___at_Lean_printTraces___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Std_PersistentArray_forM___at_Lean_printTraces___spec__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_printTraces___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Std_PersistentArray_forM___at_Lean_printTraces___spec__1___rarg(x_1, x_2, x_3, x_5);
return x_6;
}
}
lean_object* l_Lean_printTraces___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
lean_inc(x_4);
x_6 = lean_alloc_closure((void*)(l_Lean_printTraces___rarg___lambda__1), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_3);
lean_closure_set(x_6, 2, x_4);
x_7 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_printTraces(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_printTraces___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__3___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__3___rarg___lambda__1(x_8, x_2, x_3, x_4, x_5, x_9, x_7);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__3___rarg(x_1, x_2, x_3, x_4, x_8, x_9, x_7);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg___lambda__2(x_8, x_2, x_3, x_4, x_5, x_9, x_7);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__4___rarg(x_1, x_2, x_3, x_4, x_8, x_9, x_7);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__5___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__5___rarg___lambda__1(x_8, x_2, x_3, x_4, x_5, x_9, x_7);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_10 = l_Array_foldlMUnsafe_fold___at_Lean_printTraces___spec__5___rarg(x_1, x_2, x_3, x_4, x_8, x_9, x_7);
return x_10;
}
}
lean_object* l_Lean_resetTraceState___rarg___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; size_t x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; 
x_2 = lean_unsigned_to_nat(32u);
x_3 = lean_mk_empty_array_with_capacity(x_2);
lean_inc(x_3);
x_4 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = 5;
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_3);
lean_ctor_set(x_7, 2, x_6);
lean_ctor_set(x_7, 3, x_6);
lean_ctor_set_usize(x_7, 4, x_5);
x_8 = 1;
x_9 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set_uint8(x_9, sizeof(void*)*1, x_8);
return x_9;
}
}
lean_object* l_Lean_resetTraceState___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = lean_alloc_closure((void*)(l_Lean_resetTraceState___rarg___lambda__1___boxed), 1, 0);
x_4 = lean_apply_1(x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_resetTraceState(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_resetTraceState___rarg), 1, 0);
return x_2;
}
}
lean_object* l_Lean_resetTraceState___rarg___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_resetTraceState___rarg___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; lean_object* x_5; uint64_t x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_7 = lean_box_uint64(x_6);
x_8 = lean_apply_4(x_2, x_1, x_4, x_5, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_checkTraceOptionAux_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOptionAux(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 1)
{
lean_object* x_3; uint8_t x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = 0;
x_5 = l_Lean_KVMap_getBool(x_1, x_2, x_4);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = l_Lean_KVMap_contains(x_1, x_2);
if (x_6 == 0)
{
x_2 = x_3;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
}
else
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionAux___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionAux(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_Lean_checkTraceOption(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_List_isEmpty___rarg(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_box(0);
x_5 = lean_mk_string("trace");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = l_Lean_Name_append(x_6, x_2);
lean_dec(x_6);
x_8 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionAux(x_1, x_7);
lean_dec(x_7);
return x_8;
}
else
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = 0;
return x_9;
}
}
}
lean_object* l_Lean_checkTraceOption___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_checkTraceOption(x_1, x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Lean_checkTraceOption(x_3, x_2);
x_7 = lean_box(x_6);
x_8 = lean_apply_2(x_5, lean_box(0), x_7);
return x_8;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_2, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Lean_isTracingEnabledFor___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_ctor_get_uint8(x_4, sizeof(void*)*1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = 0;
x_9 = lean_box(x_8);
x_10 = lean_apply_2(x_7, lean_box(0), x_9);
return x_10;
}
else
{
lean_object* x_11; 
x_11 = l___private_Lean_Util_Trace_0__Lean_checkTraceOptionM___rarg(x_1, x_2, x_3);
return x_11;
}
}
}
lean_object* l_Lean_isTracingEnabledFor___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_dec(x_2);
x_7 = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_4);
x_8 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_Lean_isTracingEnabledFor(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_isTracingEnabledFor___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_isTracingEnabledFor___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Lean_enableTracing___rarg___lambda__1(uint8_t x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_ctor_set_uint8(x_2, sizeof(void*)*1, x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set_uint8(x_5, sizeof(void*)*1, x_1);
return x_5;
}
}
}
lean_object* l_Lean_enableTracing___rarg___lambda__2(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_box(x_2);
x_7 = lean_apply_2(x_5, lean_box(0), x_6);
return x_7;
}
}
lean_object* l_Lean_enableTracing___rarg___lambda__3(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get_uint8(x_5, sizeof(void*)*1);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_box(x_2);
x_9 = lean_alloc_closure((void*)(l_Lean_enableTracing___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_apply_1(x_7, x_9);
x_11 = lean_box(x_6);
x_12 = lean_alloc_closure((void*)(l_Lean_enableTracing___rarg___lambda__2___boxed), 3, 2);
lean_closure_set(x_12, 0, x_3);
lean_closure_set(x_12, 1, x_11);
x_13 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_10, x_12);
return x_13;
}
}
lean_object* l_Lean_enableTracing___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
x_6 = lean_box(x_3);
lean_inc(x_4);
x_7 = lean_alloc_closure((void*)(l_Lean_enableTracing___rarg___lambda__3___boxed), 5, 4);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_6);
lean_closure_set(x_7, 2, x_1);
lean_closure_set(x_7, 3, x_4);
x_8 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_5, x_7);
return x_8;
}
}
lean_object* l_Lean_enableTracing(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_enableTracing___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_Lean_enableTracing___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_enableTracing___rarg___lambda__1(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_enableTracing___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_Lean_enableTracing___rarg___lambda__2(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_enableTracing___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = l_Lean_enableTracing___rarg___lambda__3(x_1, x_6, x_3, x_4, x_5);
lean_dec(x_5);
return x_7;
}
}
lean_object* l_Lean_enableTracing___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_3);
lean_dec(x_3);
x_5 = l_Lean_enableTracing___rarg(x_1, x_2, x_4);
return x_5;
}
}
lean_object* l_Lean_getTraces___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_apply_2(x_4, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_getTraces___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_alloc_closure((void*)(l_Lean_getTraces___rarg___lambda__1), 2, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_getTraces(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_getTraces___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_modifyTraces___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_apply_1(x_1, x_4);
lean_ctor_set(x_2, 0, x_5);
return x_2;
}
else
{
uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get_uint8(x_2, sizeof(void*)*1);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_apply_1(x_1, x_7);
x_9 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set_uint8(x_9, sizeof(void*)*1, x_6);
return x_9;
}
}
}
lean_object* l_Lean_modifyTraces___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_closure((void*)(l_Lean_modifyTraces___rarg___lambda__1), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_modifyTraces(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_modifyTraces___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_setTraceState___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_alloc_closure((void*)(l_Monad_seqRight___default___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_4, 0, x_2);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_setTraceState(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_setTraceState___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addNode___spec__1(size_t x_1, size_t x_2, lean_object* x_3) {
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
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
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
lean_object* l___private_Lean_Util_Trace_0__Lean_addNode___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = l_Std_PersistentArray_isEmpty___rarg(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_8 = lean_mk_string("[");
x_9 = l_Lean_stringToMessageData(x_8);
lean_dec(x_8);
lean_inc(x_1);
x_10 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_10, 0, x_1);
x_11 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_mk_string("] ");
x_13 = l_Lean_stringToMessageData(x_12);
lean_dec(x_12);
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Std_PersistentArray_toArray___rarg(x_6);
lean_dec(x_6);
x_16 = lean_array_get_size(x_15);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = 0;
x_19 = x_15;
x_20 = l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addNode___spec__1(x_17, x_18, x_19);
x_21 = x_20;
x_22 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_mk_string("");
x_25 = l_Lean_stringToMessageData(x_24);
lean_dec(x_24);
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_27, 0, x_1);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Std_PersistentArray_push___rarg(x_3, x_28);
lean_ctor_set(x_4, 0, x_29);
return x_4;
}
else
{
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
lean_ctor_set(x_4, 0, x_3);
return x_4;
}
}
else
{
uint8_t x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_ctor_get_uint8(x_4, sizeof(void*)*1);
x_31 = lean_ctor_get(x_4, 0);
lean_inc(x_31);
lean_dec(x_4);
x_32 = l_Std_PersistentArray_isEmpty___rarg(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; size_t x_42; size_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_33 = lean_mk_string("[");
x_34 = l_Lean_stringToMessageData(x_33);
lean_dec(x_33);
lean_inc(x_1);
x_35 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_35, 0, x_1);
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_mk_string("] ");
x_38 = l_Lean_stringToMessageData(x_37);
lean_dec(x_37);
x_39 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_39, 0, x_36);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_Std_PersistentArray_toArray___rarg(x_31);
lean_dec(x_31);
x_41 = lean_array_get_size(x_40);
x_42 = lean_usize_of_nat(x_41);
lean_dec(x_41);
x_43 = 0;
x_44 = x_40;
x_45 = l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addNode___spec__1(x_42, x_43, x_44);
x_46 = x_45;
x_47 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_39);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_mk_string("");
x_50 = l_Lean_stringToMessageData(x_49);
lean_dec(x_49);
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_48);
lean_ctor_set(x_51, 1, x_50);
x_52 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_52, 0, x_1);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_2);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Std_PersistentArray_push___rarg(x_3, x_53);
x_55 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set_uint8(x_55, sizeof(void*)*1, x_30);
return x_55;
}
else
{
lean_object* x_56; 
lean_dec(x_31);
lean_dec(x_2);
lean_dec(x_1);
x_56 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_56, 0, x_3);
lean_ctor_set_uint8(x_56, sizeof(void*)*1, x_30);
return x_56;
}
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_addNode___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addNode___rarg___lambda__1), 4, 3);
lean_closure_set(x_6, 0, x_3);
lean_closure_set(x_6, 1, x_4);
lean_closure_set(x_6, 2, x_2);
x_7 = lean_apply_1(x_5, x_6);
return x_7;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_addNode(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addNode___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addNode___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___private_Lean_Util_Trace_0__Lean_addNode___spec__1(x_4, x_5, x_3);
return x_6;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___rarg___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_dec(x_3);
x_4 = lean_unsigned_to_nat(32u);
x_5 = lean_mk_empty_array_with_capacity(x_4);
lean_inc(x_5);
x_6 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = 5;
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 2, x_8);
lean_ctor_set(x_9, 3, x_8);
lean_ctor_set_usize(x_9, 4, x_7);
lean_ctor_set(x_1, 0, x_9);
return x_1;
}
else
{
uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_10 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_11 = lean_unsigned_to_nat(32u);
x_12 = lean_mk_empty_array_with_capacity(x_11);
lean_inc(x_12);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = 5;
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_15);
lean_ctor_set(x_16, 3, x_15);
lean_ctor_set_usize(x_16, 4, x_14);
x_17 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set_uint8(x_17, sizeof(void*)*1, x_10);
return x_17;
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_getResetTraces___rarg___lambda__1), 1, 0);
x_7 = lean_apply_1(x_5, x_6);
x_8 = lean_alloc_closure((void*)(l_ReaderT_instMonadReaderT___rarg___lambda__4___boxed), 3, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_4);
x_9 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_7, x_8);
return x_9;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_getTraces___rarg___lambda__1), 2, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_3);
x_6 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_4, x_5);
lean_inc(x_3);
x_7 = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_getResetTraces___rarg___lambda__2), 4, 3);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_1);
lean_closure_set(x_7, 2, x_3);
x_8 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_getResetTraces___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_addTrace___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_mk_string("[");
x_8 = l_Lean_stringToMessageData(x_7);
lean_dec(x_7);
lean_inc(x_1);
x_9 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_9, 0, x_1);
x_10 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_mk_string("] ");
x_12 = l_Lean_stringToMessageData(x_11);
lean_dec(x_11);
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_2);
x_15 = lean_mk_string("");
x_16 = l_Lean_stringToMessageData(x_15);
lean_dec(x_15);
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_14);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_18, 0, x_1);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_3);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Std_PersistentArray_push___rarg(x_6, x_19);
lean_ctor_set(x_4, 0, x_20);
return x_4;
}
else
{
uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_21 = lean_ctor_get_uint8(x_4, sizeof(void*)*1);
x_22 = lean_ctor_get(x_4, 0);
lean_inc(x_22);
lean_dec(x_4);
x_23 = lean_mk_string("[");
x_24 = l_Lean_stringToMessageData(x_23);
lean_dec(x_23);
lean_inc(x_1);
x_25 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_25, 0, x_1);
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_mk_string("] ");
x_28 = l_Lean_stringToMessageData(x_27);
lean_dec(x_27);
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_2);
x_31 = lean_mk_string("");
x_32 = l_Lean_stringToMessageData(x_31);
lean_dec(x_31);
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_34, 0, x_1);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_3);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_Std_PersistentArray_push___rarg(x_22, x_35);
x_37 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set_uint8(x_37, sizeof(void*)*1, x_21);
return x_37;
}
}
}
lean_object* l_Lean_addTrace___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_alloc_closure((void*)(l_Lean_addTrace___rarg___lambda__1), 4, 3);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_4);
lean_closure_set(x_6, 2, x_3);
x_7 = lean_apply_1(x_5, x_6);
return x_7;
}
}
lean_object* l_Lean_addTrace___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_apply_1(x_1, x_2);
x_8 = lean_alloc_closure((void*)(l_Lean_addTrace___rarg___lambda__2), 4, 3);
lean_closure_set(x_8, 0, x_3);
lean_closure_set(x_8, 1, x_4);
lean_closure_set(x_8, 2, x_6);
x_9 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_addTrace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
lean_inc(x_7);
x_9 = lean_alloc_closure((void*)(l_Lean_addTrace___rarg___lambda__3), 6, 5);
lean_closure_set(x_9, 0, x_4);
lean_closure_set(x_9, 1, x_6);
lean_closure_set(x_9, 2, x_2);
lean_closure_set(x_9, 3, x_5);
lean_closure_set(x_9, 4, x_7);
x_10 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_addTrace(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_addTrace___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_trace___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7) {
_start:
{
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_box(0);
x_11 = lean_apply_2(x_9, lean_box(0), x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_box(0);
x_13 = lean_apply_1(x_2, x_12);
x_14 = l_Lean_addTrace___rarg(x_1, x_3, x_4, x_5, x_6, x_13);
return x_14;
}
}
}
lean_object* l_Lean_trace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_6);
lean_inc(x_8);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
x_12 = lean_alloc_closure((void*)(l_Lean_trace___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_7);
lean_closure_set(x_12, 2, x_2);
lean_closure_set(x_12, 3, x_3);
lean_closure_set(x_12, 4, x_4);
lean_closure_set(x_12, 5, x_6);
x_13 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_11, x_12);
return x_13;
}
}
lean_object* l_Lean_trace(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_trace___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_trace___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_Lean_trace___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
lean_object* l_Lean_traceM___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, uint8_t x_8) {
_start:
{
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_box(0);
x_12 = lean_apply_2(x_10, lean_box(0), x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_alloc_closure((void*)(l_Lean_addTrace___rarg), 6, 5);
lean_closure_set(x_13, 0, x_1);
lean_closure_set(x_13, 1, x_2);
lean_closure_set(x_13, 2, x_3);
lean_closure_set(x_13, 3, x_4);
lean_closure_set(x_13, 4, x_5);
x_14 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_7, x_13);
return x_14;
}
}
}
lean_object* l_Lean_traceM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_6);
lean_inc(x_8);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
lean_inc(x_8);
x_12 = lean_alloc_closure((void*)(l_Lean_traceM___rarg___lambda__1___boxed), 8, 7);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_2);
lean_closure_set(x_12, 2, x_3);
lean_closure_set(x_12, 3, x_4);
lean_closure_set(x_12, 4, x_6);
lean_closure_set(x_12, 5, x_8);
lean_closure_set(x_12, 6, x_7);
x_13 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_11, x_12);
return x_13;
}
}
lean_object* l_Lean_traceM(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_traceM___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_traceM___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_8);
lean_dec(x_8);
x_10 = l_Lean_traceM___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_9);
return x_10;
}
}
lean_object* l_Lean_traceCtx___rarg___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = 0;
lean_ctor_set_uint8(x_1, sizeof(void*)*1, x_3);
return x_1;
}
else
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = 0;
x_6 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_6, 0, x_4);
lean_ctor_set_uint8(x_6, sizeof(void*)*1, x_5);
return x_6;
}
}
}
lean_object* l_Lean_traceCtx___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get_uint8(x_4, sizeof(void*)*1);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_traceCtx___rarg___lambda__1), 1, 0);
x_8 = lean_apply_1(x_6, x_7);
x_9 = lean_box(x_5);
x_10 = lean_alloc_closure((void*)(l_Lean_enableTracing___rarg___lambda__2___boxed), 3, 2);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_8, x_10);
return x_11;
}
}
lean_object* l_Lean_traceCtx___rarg___lambda__3(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_box(x_2);
x_6 = lean_apply_2(x_4, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_Lean_traceCtx___rarg___lambda__4(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get_uint8(x_5, sizeof(void*)*1);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_box(x_2);
x_9 = lean_alloc_closure((void*)(l_Lean_enableTracing___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_apply_1(x_7, x_9);
x_11 = lean_box(x_6);
x_12 = lean_alloc_closure((void*)(l_Lean_traceCtx___rarg___lambda__3___boxed), 3, 2);
lean_closure_set(x_12, 0, x_3);
lean_closure_set(x_12, 1, x_11);
x_13 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_10, x_12);
return x_13;
}
}
lean_object* l_Lean_traceCtx___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, uint8_t x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_box(x_7);
lean_inc(x_3);
x_11 = lean_alloc_closure((void*)(l_Lean_traceCtx___rarg___lambda__4___boxed), 5, 4);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_10);
lean_closure_set(x_11, 2, x_8);
lean_closure_set(x_11, 3, x_3);
x_12 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_4, x_11);
x_13 = lean_alloc_closure((void*)(l_Monad_seqRight___default___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_13, 0, x_12);
x_14 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_6, x_13);
x_15 = lean_ctor_get(x_9, 0);
lean_inc(x_15);
lean_dec(x_9);
x_16 = lean_alloc_closure((void*)(l_tryFinally___rarg___lambda__1___boxed), 1, 0);
x_17 = lean_apply_4(x_15, lean_box(0), lean_box(0), x_16, x_14);
return x_17;
}
}
lean_object* l_Lean_traceCtx___rarg___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
lean_dec(x_8);
x_10 = l___private_Lean_Util_Trace_0__Lean_addNode___rarg(x_2, x_7, x_3, x_4);
x_11 = lean_alloc_closure((void*)(l_Monad_seqRight___default___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_6, x_11);
x_13 = lean_ctor_get(x_9, 0);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_alloc_closure((void*)(l_tryFinally___rarg___lambda__1___boxed), 1, 0);
x_15 = lean_apply_4(x_13, lean_box(0), lean_box(0), x_14, x_12);
return x_15;
}
}
lean_object* l_Lean_traceCtx___rarg___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_2);
lean_inc(x_1);
x_8 = l___private_Lean_Util_Trace_0__Lean_getResetTraces___rarg(x_1, x_2);
x_9 = lean_alloc_closure((void*)(l_Lean_traceCtx___rarg___lambda__6), 7, 6);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_3);
lean_closure_set(x_9, 3, x_7);
lean_closure_set(x_9, 4, x_4);
lean_closure_set(x_9, 5, x_5);
x_10 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_traceCtx___rarg___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, uint8_t x_9) {
_start:
{
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Lean_traceCtx___rarg___lambda__2___boxed), 4, 3);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_2);
lean_closure_set(x_10, 2, x_3);
lean_inc(x_3);
lean_inc(x_4);
x_11 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_4, x_10);
lean_inc(x_3);
x_12 = lean_alloc_closure((void*)(l_Lean_traceCtx___rarg___lambda__5___boxed), 7, 6);
lean_closure_set(x_12, 0, x_2);
lean_closure_set(x_12, 1, x_1);
lean_closure_set(x_12, 2, x_3);
lean_closure_set(x_12, 3, x_4);
lean_closure_set(x_12, 4, x_5);
lean_closure_set(x_12, 5, x_6);
x_13 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_11, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_14 = lean_ctor_get(x_7, 0);
lean_inc(x_14);
lean_dec(x_7);
lean_inc(x_3);
x_15 = lean_alloc_closure((void*)(l_Lean_traceCtx___rarg___lambda__7), 7, 6);
lean_closure_set(x_15, 0, x_2);
lean_closure_set(x_15, 1, x_1);
lean_closure_set(x_15, 2, x_8);
lean_closure_set(x_15, 3, x_5);
lean_closure_set(x_15, 4, x_6);
lean_closure_set(x_15, 5, x_3);
x_16 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_14, x_15);
return x_16;
}
}
}
lean_object* l_Lean_traceCtx___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_4);
lean_closure_set(x_10, 2, x_6);
lean_inc(x_8);
lean_inc(x_9);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
lean_inc(x_8);
x_12 = lean_alloc_closure((void*)(l_Lean_traceCtx___rarg___lambda__8___boxed), 9, 8);
lean_closure_set(x_12, 0, x_2);
lean_closure_set(x_12, 1, x_1);
lean_closure_set(x_12, 2, x_8);
lean_closure_set(x_12, 3, x_9);
lean_closure_set(x_12, 4, x_5);
lean_closure_set(x_12, 5, x_7);
lean_closure_set(x_12, 6, x_3);
lean_closure_set(x_12, 7, x_6);
x_13 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_11, x_12);
return x_13;
}
}
lean_object* l_Lean_traceCtx(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_traceCtx___rarg), 7, 0);
return x_3;
}
}
lean_object* l_Lean_traceCtx___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_traceCtx___rarg___lambda__2(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
lean_object* l_Lean_traceCtx___rarg___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_Lean_traceCtx___rarg___lambda__3(x_1, x_4, x_3);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_traceCtx___rarg___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_2);
lean_dec(x_2);
x_7 = l_Lean_traceCtx___rarg___lambda__4(x_1, x_6, x_3, x_4, x_5);
lean_dec(x_5);
return x_7;
}
}
lean_object* l_Lean_traceCtx___rarg___lambda__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_7);
lean_dec(x_7);
x_9 = l_Lean_traceCtx___rarg___lambda__5(x_1, x_2, x_3, x_4, x_5, x_6, x_8);
return x_9;
}
}
lean_object* l_Lean_traceCtx___rarg___lambda__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_11; 
x_10 = lean_unbox(x_9);
lean_dec(x_9);
x_11 = l_Lean_traceCtx___rarg___lambda__8(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_10);
return x_11;
}
}
lean_object* l_Lean_MonadTracer_trace___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_6);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___rarg___lambda__1___boxed), 4, 3);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_5);
lean_closure_set(x_10, 2, x_6);
lean_inc(x_8);
x_11 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_9, x_10);
x_12 = lean_alloc_closure((void*)(l_Lean_trace___rarg___lambda__1___boxed), 7, 6);
lean_closure_set(x_12, 0, x_1);
lean_closure_set(x_12, 1, x_7);
lean_closure_set(x_12, 2, x_2);
lean_closure_set(x_12, 3, x_3);
lean_closure_set(x_12, 4, x_4);
lean_closure_set(x_12, 5, x_6);
x_13 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_11, x_12);
return x_13;
}
}
lean_object* l_Lean_MonadTracer_trace(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_MonadTracer_trace___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_registerTraceClass(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_3 = lean_box(0);
x_4 = lean_mk_string("trace");
lean_inc(x_4);
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = l_Lean_Name_append(x_5, x_1);
lean_dec(x_5);
x_7 = 0;
x_8 = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(x_8, 0, x_7);
x_9 = lean_mk_string("enable/disable tracing for the given module and submodules");
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_4);
lean_ctor_set(x_10, 2, x_9);
x_11 = lean_register_option(x_6, x_10, x_2);
return x_11;
}
}
static lean_object* _init_l_Lean_termTrace_x5b_____x5d____() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_1 = lean_box(0);
x_2 = lean_mk_string("Lean");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("termTrace[__]__");
x_5 = lean_name_mk_string(x_3, x_4);
x_6 = lean_mk_string("andthen");
x_7 = lean_name_mk_string(x_1, x_6);
x_8 = lean_mk_string("trace[");
x_9 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_mk_string("ident");
x_11 = lean_name_mk_string(x_1, x_10);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
lean_inc(x_7);
x_13 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_13, 0, x_7);
lean_ctor_set(x_13, 1, x_9);
lean_ctor_set(x_13, 2, x_12);
x_14 = lean_mk_string("]");
x_15 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_15, 0, x_14);
lean_inc(x_7);
x_16 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_16, 0, x_7);
lean_ctor_set(x_16, 1, x_13);
lean_ctor_set(x_16, 2, x_15);
x_17 = lean_mk_string("orelse");
x_18 = lean_name_mk_string(x_1, x_17);
x_19 = lean_mk_string("interpolatedStr");
x_20 = lean_name_mk_string(x_1, x_19);
x_21 = lean_mk_string("term");
x_22 = lean_name_mk_string(x_1, x_21);
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
lean_inc(x_24);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_26, 0, x_18);
lean_ctor_set(x_26, 1, x_25);
lean_ctor_set(x_26, 2, x_24);
x_27 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_27, 0, x_7);
lean_ctor_set(x_27, 1, x_16);
lean_ctor_set(x_27, 2, x_26);
x_28 = lean_unsigned_to_nat(1022u);
x_29 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_29, 0, x_5);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_29, 2, x_27);
return x_29;
}
}
lean_object* l_Lean_myMacro____x40_Lean_Util_Trace___hyg_1091_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_4 = lean_box(0);
x_5 = lean_mk_string("Lean");
x_6 = lean_name_mk_string(x_4, x_5);
x_7 = lean_mk_string("termTrace[__]__");
lean_inc(x_6);
x_8 = lean_name_mk_string(x_6, x_7);
lean_inc(x_1);
x_9 = l_Lean_Syntax_isOfKind(x_1, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_box(1);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_3);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = lean_unsigned_to_nat(3u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
lean_inc(x_15);
x_16 = l_Lean_Syntax_getKind(x_15);
x_17 = l_Lean_interpolatedStrKind;
x_18 = lean_name_eq(x_16, x_17);
lean_dec(x_16);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_2, 2);
lean_inc(x_22);
x_23 = lean_ctor_get(x_2, 1);
lean_inc(x_23);
lean_dec(x_2);
x_24 = lean_mk_string("Parser");
lean_inc(x_6);
x_25 = lean_name_mk_string(x_6, x_24);
x_26 = lean_mk_string("Term");
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("app");
lean_inc(x_27);
x_29 = lean_name_mk_string(x_27, x_28);
x_30 = lean_mk_string("Lean.trace");
x_31 = lean_string_utf8_byte_size(x_30);
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set(x_33, 2, x_31);
x_34 = lean_mk_string("trace");
lean_inc(x_6);
x_35 = lean_name_mk_string(x_6, x_34);
lean_inc(x_22);
lean_inc(x_35);
lean_inc(x_23);
x_36 = l_Lean_addMacroScope(x_23, x_35, x_22);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
lean_inc(x_21);
x_40 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_40, 0, x_21);
lean_ctor_set(x_40, 1, x_33);
lean_ctor_set(x_40, 2, x_36);
lean_ctor_set(x_40, 3, x_39);
x_41 = lean_mk_string("null");
x_42 = lean_name_mk_string(x_4, x_41);
x_43 = l_Lean_Syntax_getId(x_13);
lean_dec(x_13);
lean_inc(x_43);
x_44 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_37, x_43);
x_45 = lean_mk_string("fun");
lean_inc(x_45);
lean_inc(x_27);
x_46 = lean_name_mk_string(x_27, x_45);
lean_inc(x_21);
x_47 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_47, 0, x_21);
lean_ctor_set(x_47, 1, x_45);
x_48 = lean_mk_string("basicFun");
lean_inc(x_27);
x_49 = lean_name_mk_string(x_27, x_48);
x_50 = lean_mk_string("hole");
lean_inc(x_27);
x_51 = lean_name_mk_string(x_27, x_50);
x_52 = lean_mk_string("_");
lean_inc(x_21);
x_53 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_53, 0, x_21);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_mk_empty_array_with_capacity(x_12);
lean_inc(x_54);
x_55 = lean_array_push(x_54, x_53);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_51);
lean_ctor_set(x_56, 1, x_55);
lean_inc(x_54);
x_57 = lean_array_push(x_54, x_56);
lean_inc(x_42);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_42);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_mk_string("=>");
lean_inc(x_21);
x_60 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_60, 0, x_21);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_mk_string("paren");
lean_inc(x_27);
x_62 = lean_name_mk_string(x_27, x_61);
x_63 = lean_mk_string("(");
lean_inc(x_21);
x_64 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_64, 0, x_21);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_mk_string("typeAscription");
lean_inc(x_27);
x_66 = lean_name_mk_string(x_27, x_65);
x_67 = lean_mk_string(":");
lean_inc(x_21);
x_68 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_68, 0, x_21);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_mk_string("MessageData");
x_70 = lean_string_utf8_byte_size(x_69);
lean_inc(x_69);
x_71 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_32);
lean_ctor_set(x_71, 2, x_70);
lean_inc(x_69);
x_72 = lean_name_mk_string(x_4, x_69);
x_73 = l_Lean_addMacroScope(x_23, x_72, x_22);
x_74 = lean_name_mk_string(x_6, x_69);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_37);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_37);
lean_inc(x_21);
x_77 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_77, 0, x_21);
lean_ctor_set(x_77, 1, x_71);
lean_ctor_set(x_77, 2, x_73);
lean_ctor_set(x_77, 3, x_76);
x_78 = lean_unsigned_to_nat(2u);
x_79 = lean_mk_empty_array_with_capacity(x_78);
lean_inc(x_79);
x_80 = lean_array_push(x_79, x_68);
x_81 = lean_array_push(x_80, x_77);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_66);
lean_ctor_set(x_82, 1, x_81);
lean_inc(x_54);
x_83 = lean_array_push(x_54, x_82);
lean_inc(x_42);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_42);
lean_ctor_set(x_84, 1, x_83);
lean_inc(x_79);
x_85 = lean_array_push(x_79, x_15);
x_86 = lean_array_push(x_85, x_84);
lean_inc(x_42);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_42);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_mk_string(")");
x_89 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_89, 0, x_21);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_90);
x_91 = lean_array_push(x_90, x_64);
x_92 = lean_array_push(x_91, x_87);
x_93 = lean_array_push(x_92, x_89);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_62);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_array_push(x_90, x_58);
x_96 = lean_array_push(x_95, x_60);
x_97 = lean_array_push(x_96, x_94);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_49);
lean_ctor_set(x_98, 1, x_97);
lean_inc(x_79);
x_99 = lean_array_push(x_79, x_47);
x_100 = lean_array_push(x_99, x_98);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_46);
lean_ctor_set(x_101, 1, x_100);
lean_inc(x_79);
x_102 = lean_array_push(x_79, x_40);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_54);
lean_dec(x_27);
x_103 = l___private_Init_Meta_0__Lean_quoteNameMk(x_43);
x_104 = lean_array_push(x_79, x_103);
x_105 = lean_array_push(x_104, x_101);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_42);
lean_ctor_set(x_106, 1, x_105);
x_107 = lean_array_push(x_102, x_106);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_29);
lean_ctor_set(x_108, 1, x_107);
lean_ctor_set(x_19, 0, x_108);
return x_19;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
lean_dec(x_43);
x_109 = lean_ctor_get(x_44, 0);
lean_inc(x_109);
lean_dec(x_44);
x_110 = lean_mk_string("quotedName");
x_111 = lean_name_mk_string(x_27, x_110);
x_112 = lean_mk_string(".");
x_113 = l_String_intercalate(x_112, x_109);
x_114 = lean_mk_string("`");
x_115 = lean_string_append(x_114, x_113);
lean_dec(x_113);
x_116 = l_Lean_nameLitKind;
x_117 = lean_box(2);
x_118 = l_Lean_Syntax_mkLit(x_116, x_115, x_117);
x_119 = lean_array_push(x_54, x_118);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_111);
lean_ctor_set(x_120, 1, x_119);
x_121 = lean_array_push(x_79, x_120);
x_122 = lean_array_push(x_121, x_101);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_42);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_array_push(x_102, x_123);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_29);
lean_ctor_set(x_125, 1, x_124);
lean_ctor_set(x_19, 0, x_125);
return x_19;
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_126 = lean_ctor_get(x_19, 0);
x_127 = lean_ctor_get(x_19, 1);
lean_inc(x_127);
lean_inc(x_126);
lean_dec(x_19);
x_128 = lean_ctor_get(x_2, 2);
lean_inc(x_128);
x_129 = lean_ctor_get(x_2, 1);
lean_inc(x_129);
lean_dec(x_2);
x_130 = lean_mk_string("Parser");
lean_inc(x_6);
x_131 = lean_name_mk_string(x_6, x_130);
x_132 = lean_mk_string("Term");
x_133 = lean_name_mk_string(x_131, x_132);
x_134 = lean_mk_string("app");
lean_inc(x_133);
x_135 = lean_name_mk_string(x_133, x_134);
x_136 = lean_mk_string("Lean.trace");
x_137 = lean_string_utf8_byte_size(x_136);
x_138 = lean_unsigned_to_nat(0u);
x_139 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_139, 0, x_136);
lean_ctor_set(x_139, 1, x_138);
lean_ctor_set(x_139, 2, x_137);
x_140 = lean_mk_string("trace");
lean_inc(x_6);
x_141 = lean_name_mk_string(x_6, x_140);
lean_inc(x_128);
lean_inc(x_141);
lean_inc(x_129);
x_142 = l_Lean_addMacroScope(x_129, x_141, x_128);
x_143 = lean_box(0);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_141);
lean_ctor_set(x_144, 1, x_143);
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_143);
lean_inc(x_126);
x_146 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_146, 0, x_126);
lean_ctor_set(x_146, 1, x_139);
lean_ctor_set(x_146, 2, x_142);
lean_ctor_set(x_146, 3, x_145);
x_147 = lean_mk_string("null");
x_148 = lean_name_mk_string(x_4, x_147);
x_149 = l_Lean_Syntax_getId(x_13);
lean_dec(x_13);
lean_inc(x_149);
x_150 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_143, x_149);
x_151 = lean_mk_string("fun");
lean_inc(x_151);
lean_inc(x_133);
x_152 = lean_name_mk_string(x_133, x_151);
lean_inc(x_126);
x_153 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_153, 0, x_126);
lean_ctor_set(x_153, 1, x_151);
x_154 = lean_mk_string("basicFun");
lean_inc(x_133);
x_155 = lean_name_mk_string(x_133, x_154);
x_156 = lean_mk_string("hole");
lean_inc(x_133);
x_157 = lean_name_mk_string(x_133, x_156);
x_158 = lean_mk_string("_");
lean_inc(x_126);
x_159 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_159, 0, x_126);
lean_ctor_set(x_159, 1, x_158);
x_160 = lean_mk_empty_array_with_capacity(x_12);
lean_inc(x_160);
x_161 = lean_array_push(x_160, x_159);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_157);
lean_ctor_set(x_162, 1, x_161);
lean_inc(x_160);
x_163 = lean_array_push(x_160, x_162);
lean_inc(x_148);
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_148);
lean_ctor_set(x_164, 1, x_163);
x_165 = lean_mk_string("=>");
lean_inc(x_126);
x_166 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_166, 0, x_126);
lean_ctor_set(x_166, 1, x_165);
x_167 = lean_mk_string("paren");
lean_inc(x_133);
x_168 = lean_name_mk_string(x_133, x_167);
x_169 = lean_mk_string("(");
lean_inc(x_126);
x_170 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_170, 0, x_126);
lean_ctor_set(x_170, 1, x_169);
x_171 = lean_mk_string("typeAscription");
lean_inc(x_133);
x_172 = lean_name_mk_string(x_133, x_171);
x_173 = lean_mk_string(":");
lean_inc(x_126);
x_174 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_174, 0, x_126);
lean_ctor_set(x_174, 1, x_173);
x_175 = lean_mk_string("MessageData");
x_176 = lean_string_utf8_byte_size(x_175);
lean_inc(x_175);
x_177 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_177, 0, x_175);
lean_ctor_set(x_177, 1, x_138);
lean_ctor_set(x_177, 2, x_176);
lean_inc(x_175);
x_178 = lean_name_mk_string(x_4, x_175);
x_179 = l_Lean_addMacroScope(x_129, x_178, x_128);
x_180 = lean_name_mk_string(x_6, x_175);
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_180);
lean_ctor_set(x_181, 1, x_143);
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_143);
lean_inc(x_126);
x_183 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_183, 0, x_126);
lean_ctor_set(x_183, 1, x_177);
lean_ctor_set(x_183, 2, x_179);
lean_ctor_set(x_183, 3, x_182);
x_184 = lean_unsigned_to_nat(2u);
x_185 = lean_mk_empty_array_with_capacity(x_184);
lean_inc(x_185);
x_186 = lean_array_push(x_185, x_174);
x_187 = lean_array_push(x_186, x_183);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_172);
lean_ctor_set(x_188, 1, x_187);
lean_inc(x_160);
x_189 = lean_array_push(x_160, x_188);
lean_inc(x_148);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_148);
lean_ctor_set(x_190, 1, x_189);
lean_inc(x_185);
x_191 = lean_array_push(x_185, x_15);
x_192 = lean_array_push(x_191, x_190);
lean_inc(x_148);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_148);
lean_ctor_set(x_193, 1, x_192);
x_194 = lean_mk_string(")");
x_195 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_195, 0, x_126);
lean_ctor_set(x_195, 1, x_194);
x_196 = lean_mk_empty_array_with_capacity(x_14);
lean_inc(x_196);
x_197 = lean_array_push(x_196, x_170);
x_198 = lean_array_push(x_197, x_193);
x_199 = lean_array_push(x_198, x_195);
x_200 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_200, 0, x_168);
lean_ctor_set(x_200, 1, x_199);
x_201 = lean_array_push(x_196, x_164);
x_202 = lean_array_push(x_201, x_166);
x_203 = lean_array_push(x_202, x_200);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_155);
lean_ctor_set(x_204, 1, x_203);
lean_inc(x_185);
x_205 = lean_array_push(x_185, x_153);
x_206 = lean_array_push(x_205, x_204);
x_207 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_207, 0, x_152);
lean_ctor_set(x_207, 1, x_206);
lean_inc(x_185);
x_208 = lean_array_push(x_185, x_146);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; 
lean_dec(x_160);
lean_dec(x_133);
x_209 = l___private_Init_Meta_0__Lean_quoteNameMk(x_149);
x_210 = lean_array_push(x_185, x_209);
x_211 = lean_array_push(x_210, x_207);
x_212 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_212, 0, x_148);
lean_ctor_set(x_212, 1, x_211);
x_213 = lean_array_push(x_208, x_212);
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_135);
lean_ctor_set(x_214, 1, x_213);
x_215 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_127);
return x_215;
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; 
lean_dec(x_149);
x_216 = lean_ctor_get(x_150, 0);
lean_inc(x_216);
lean_dec(x_150);
x_217 = lean_mk_string("quotedName");
x_218 = lean_name_mk_string(x_133, x_217);
x_219 = lean_mk_string(".");
x_220 = l_String_intercalate(x_219, x_216);
x_221 = lean_mk_string("`");
x_222 = lean_string_append(x_221, x_220);
lean_dec(x_220);
x_223 = l_Lean_nameLitKind;
x_224 = lean_box(2);
x_225 = l_Lean_Syntax_mkLit(x_223, x_222, x_224);
x_226 = lean_array_push(x_160, x_225);
x_227 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_227, 0, x_218);
lean_ctor_set(x_227, 1, x_226);
x_228 = lean_array_push(x_185, x_227);
x_229 = lean_array_push(x_228, x_207);
x_230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_230, 0, x_148);
lean_ctor_set(x_230, 1, x_229);
x_231 = lean_array_push(x_208, x_230);
x_232 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_232, 0, x_135);
lean_ctor_set(x_232, 1, x_231);
x_233 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_233, 0, x_232);
lean_ctor_set(x_233, 1, x_127);
return x_233;
}
}
}
else
{
lean_object* x_234; uint8_t x_235; 
x_234 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_235 = !lean_is_exclusive(x_234);
if (x_235 == 0)
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_236 = lean_ctor_get(x_234, 0);
x_237 = lean_ctor_get(x_2, 2);
lean_inc(x_237);
x_238 = lean_ctor_get(x_2, 1);
lean_inc(x_238);
lean_dec(x_2);
x_239 = lean_mk_string("Parser");
lean_inc(x_6);
x_240 = lean_name_mk_string(x_6, x_239);
x_241 = lean_mk_string("Term");
x_242 = lean_name_mk_string(x_240, x_241);
x_243 = lean_mk_string("app");
lean_inc(x_242);
x_244 = lean_name_mk_string(x_242, x_243);
x_245 = lean_mk_string("Lean.trace");
x_246 = lean_string_utf8_byte_size(x_245);
x_247 = lean_unsigned_to_nat(0u);
x_248 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_248, 0, x_245);
lean_ctor_set(x_248, 1, x_247);
lean_ctor_set(x_248, 2, x_246);
x_249 = lean_mk_string("trace");
lean_inc(x_6);
x_250 = lean_name_mk_string(x_6, x_249);
lean_inc(x_250);
x_251 = l_Lean_addMacroScope(x_238, x_250, x_237);
x_252 = lean_box(0);
x_253 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_253, 0, x_250);
lean_ctor_set(x_253, 1, x_252);
x_254 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_254, 0, x_253);
lean_ctor_set(x_254, 1, x_252);
lean_inc(x_236);
x_255 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_255, 0, x_236);
lean_ctor_set(x_255, 1, x_248);
lean_ctor_set(x_255, 2, x_251);
lean_ctor_set(x_255, 3, x_254);
x_256 = lean_mk_string("null");
x_257 = lean_name_mk_string(x_4, x_256);
x_258 = l_Lean_Syntax_getId(x_13);
lean_dec(x_13);
lean_inc(x_258);
x_259 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_252, x_258);
x_260 = lean_mk_string("fun");
lean_inc(x_260);
lean_inc(x_242);
x_261 = lean_name_mk_string(x_242, x_260);
lean_inc(x_236);
x_262 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_262, 0, x_236);
lean_ctor_set(x_262, 1, x_260);
x_263 = lean_mk_string("basicFun");
lean_inc(x_242);
x_264 = lean_name_mk_string(x_242, x_263);
x_265 = lean_mk_string("hole");
lean_inc(x_242);
x_266 = lean_name_mk_string(x_242, x_265);
x_267 = lean_mk_string("_");
lean_inc(x_236);
x_268 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_268, 0, x_236);
lean_ctor_set(x_268, 1, x_267);
x_269 = lean_mk_empty_array_with_capacity(x_12);
lean_inc(x_269);
x_270 = lean_array_push(x_269, x_268);
x_271 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_271, 0, x_266);
lean_ctor_set(x_271, 1, x_270);
lean_inc(x_269);
x_272 = lean_array_push(x_269, x_271);
lean_inc(x_257);
x_273 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_273, 0, x_257);
lean_ctor_set(x_273, 1, x_272);
x_274 = lean_mk_string("=>");
lean_inc(x_236);
x_275 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_275, 0, x_236);
lean_ctor_set(x_275, 1, x_274);
x_276 = lean_mk_string("termM!_");
x_277 = lean_name_mk_string(x_6, x_276);
x_278 = lean_mk_string("m!");
x_279 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_279, 0, x_236);
lean_ctor_set(x_279, 1, x_278);
x_280 = lean_unsigned_to_nat(2u);
x_281 = lean_mk_empty_array_with_capacity(x_280);
lean_inc(x_281);
x_282 = lean_array_push(x_281, x_279);
x_283 = lean_array_push(x_282, x_15);
x_284 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_284, 0, x_277);
lean_ctor_set(x_284, 1, x_283);
x_285 = lean_mk_empty_array_with_capacity(x_14);
x_286 = lean_array_push(x_285, x_273);
x_287 = lean_array_push(x_286, x_275);
x_288 = lean_array_push(x_287, x_284);
x_289 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_289, 0, x_264);
lean_ctor_set(x_289, 1, x_288);
lean_inc(x_281);
x_290 = lean_array_push(x_281, x_262);
x_291 = lean_array_push(x_290, x_289);
x_292 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_292, 0, x_261);
lean_ctor_set(x_292, 1, x_291);
lean_inc(x_281);
x_293 = lean_array_push(x_281, x_255);
if (lean_obj_tag(x_259) == 0)
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; 
lean_dec(x_269);
lean_dec(x_242);
x_294 = l___private_Init_Meta_0__Lean_quoteNameMk(x_258);
x_295 = lean_array_push(x_281, x_294);
x_296 = lean_array_push(x_295, x_292);
x_297 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_297, 0, x_257);
lean_ctor_set(x_297, 1, x_296);
x_298 = lean_array_push(x_293, x_297);
x_299 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_299, 0, x_244);
lean_ctor_set(x_299, 1, x_298);
lean_ctor_set(x_234, 0, x_299);
return x_234;
}
else
{
lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; 
lean_dec(x_258);
x_300 = lean_ctor_get(x_259, 0);
lean_inc(x_300);
lean_dec(x_259);
x_301 = lean_mk_string("quotedName");
x_302 = lean_name_mk_string(x_242, x_301);
x_303 = lean_mk_string(".");
x_304 = l_String_intercalate(x_303, x_300);
x_305 = lean_mk_string("`");
x_306 = lean_string_append(x_305, x_304);
lean_dec(x_304);
x_307 = l_Lean_nameLitKind;
x_308 = lean_box(2);
x_309 = l_Lean_Syntax_mkLit(x_307, x_306, x_308);
x_310 = lean_array_push(x_269, x_309);
x_311 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_311, 0, x_302);
lean_ctor_set(x_311, 1, x_310);
x_312 = lean_array_push(x_281, x_311);
x_313 = lean_array_push(x_312, x_292);
x_314 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_314, 0, x_257);
lean_ctor_set(x_314, 1, x_313);
x_315 = lean_array_push(x_293, x_314);
x_316 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_316, 0, x_244);
lean_ctor_set(x_316, 1, x_315);
lean_ctor_set(x_234, 0, x_316);
return x_234;
}
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; 
x_317 = lean_ctor_get(x_234, 0);
x_318 = lean_ctor_get(x_234, 1);
lean_inc(x_318);
lean_inc(x_317);
lean_dec(x_234);
x_319 = lean_ctor_get(x_2, 2);
lean_inc(x_319);
x_320 = lean_ctor_get(x_2, 1);
lean_inc(x_320);
lean_dec(x_2);
x_321 = lean_mk_string("Parser");
lean_inc(x_6);
x_322 = lean_name_mk_string(x_6, x_321);
x_323 = lean_mk_string("Term");
x_324 = lean_name_mk_string(x_322, x_323);
x_325 = lean_mk_string("app");
lean_inc(x_324);
x_326 = lean_name_mk_string(x_324, x_325);
x_327 = lean_mk_string("Lean.trace");
x_328 = lean_string_utf8_byte_size(x_327);
x_329 = lean_unsigned_to_nat(0u);
x_330 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_330, 0, x_327);
lean_ctor_set(x_330, 1, x_329);
lean_ctor_set(x_330, 2, x_328);
x_331 = lean_mk_string("trace");
lean_inc(x_6);
x_332 = lean_name_mk_string(x_6, x_331);
lean_inc(x_332);
x_333 = l_Lean_addMacroScope(x_320, x_332, x_319);
x_334 = lean_box(0);
x_335 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_335, 0, x_332);
lean_ctor_set(x_335, 1, x_334);
x_336 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_336, 0, x_335);
lean_ctor_set(x_336, 1, x_334);
lean_inc(x_317);
x_337 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_337, 0, x_317);
lean_ctor_set(x_337, 1, x_330);
lean_ctor_set(x_337, 2, x_333);
lean_ctor_set(x_337, 3, x_336);
x_338 = lean_mk_string("null");
x_339 = lean_name_mk_string(x_4, x_338);
x_340 = l_Lean_Syntax_getId(x_13);
lean_dec(x_13);
lean_inc(x_340);
x_341 = l___private_Init_Meta_0__Lean_getEscapedNameParts_x3f(x_334, x_340);
x_342 = lean_mk_string("fun");
lean_inc(x_342);
lean_inc(x_324);
x_343 = lean_name_mk_string(x_324, x_342);
lean_inc(x_317);
x_344 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_344, 0, x_317);
lean_ctor_set(x_344, 1, x_342);
x_345 = lean_mk_string("basicFun");
lean_inc(x_324);
x_346 = lean_name_mk_string(x_324, x_345);
x_347 = lean_mk_string("hole");
lean_inc(x_324);
x_348 = lean_name_mk_string(x_324, x_347);
x_349 = lean_mk_string("_");
lean_inc(x_317);
x_350 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_350, 0, x_317);
lean_ctor_set(x_350, 1, x_349);
x_351 = lean_mk_empty_array_with_capacity(x_12);
lean_inc(x_351);
x_352 = lean_array_push(x_351, x_350);
x_353 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_353, 0, x_348);
lean_ctor_set(x_353, 1, x_352);
lean_inc(x_351);
x_354 = lean_array_push(x_351, x_353);
lean_inc(x_339);
x_355 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_355, 0, x_339);
lean_ctor_set(x_355, 1, x_354);
x_356 = lean_mk_string("=>");
lean_inc(x_317);
x_357 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_357, 0, x_317);
lean_ctor_set(x_357, 1, x_356);
x_358 = lean_mk_string("termM!_");
x_359 = lean_name_mk_string(x_6, x_358);
x_360 = lean_mk_string("m!");
x_361 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_361, 0, x_317);
lean_ctor_set(x_361, 1, x_360);
x_362 = lean_unsigned_to_nat(2u);
x_363 = lean_mk_empty_array_with_capacity(x_362);
lean_inc(x_363);
x_364 = lean_array_push(x_363, x_361);
x_365 = lean_array_push(x_364, x_15);
x_366 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_366, 0, x_359);
lean_ctor_set(x_366, 1, x_365);
x_367 = lean_mk_empty_array_with_capacity(x_14);
x_368 = lean_array_push(x_367, x_355);
x_369 = lean_array_push(x_368, x_357);
x_370 = lean_array_push(x_369, x_366);
x_371 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_371, 0, x_346);
lean_ctor_set(x_371, 1, x_370);
lean_inc(x_363);
x_372 = lean_array_push(x_363, x_344);
x_373 = lean_array_push(x_372, x_371);
x_374 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_374, 0, x_343);
lean_ctor_set(x_374, 1, x_373);
lean_inc(x_363);
x_375 = lean_array_push(x_363, x_337);
if (lean_obj_tag(x_341) == 0)
{
lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; 
lean_dec(x_351);
lean_dec(x_324);
x_376 = l___private_Init_Meta_0__Lean_quoteNameMk(x_340);
x_377 = lean_array_push(x_363, x_376);
x_378 = lean_array_push(x_377, x_374);
x_379 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_379, 0, x_339);
lean_ctor_set(x_379, 1, x_378);
x_380 = lean_array_push(x_375, x_379);
x_381 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_381, 0, x_326);
lean_ctor_set(x_381, 1, x_380);
x_382 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_382, 0, x_381);
lean_ctor_set(x_382, 1, x_318);
return x_382;
}
else
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; 
lean_dec(x_340);
x_383 = lean_ctor_get(x_341, 0);
lean_inc(x_383);
lean_dec(x_341);
x_384 = lean_mk_string("quotedName");
x_385 = lean_name_mk_string(x_324, x_384);
x_386 = lean_mk_string(".");
x_387 = l_String_intercalate(x_386, x_383);
x_388 = lean_mk_string("`");
x_389 = lean_string_append(x_388, x_387);
lean_dec(x_387);
x_390 = l_Lean_nameLitKind;
x_391 = lean_box(2);
x_392 = l_Lean_Syntax_mkLit(x_390, x_389, x_391);
x_393 = lean_array_push(x_351, x_392);
x_394 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_394, 0, x_385);
lean_ctor_set(x_394, 1, x_393);
x_395 = lean_array_push(x_363, x_394);
x_396 = lean_array_push(x_395, x_374);
x_397 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_397, 0, x_339);
lean_ctor_set(x_397, 1, x_396);
x_398 = lean_array_push(x_375, x_397);
x_399 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_399, 0, x_326);
lean_ctor_set(x_399, 1, x_398);
x_400 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_400, 0, x_399);
lean_ctor_set(x_400, 1, x_318);
return x_400;
}
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__4(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__3(x_6, x_4);
lean_dec(x_6);
x_8 = 1;
x_9 = x_2 + x_8;
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Lean_MessageData_isNil(x_4);
x_8 = 1;
x_9 = x_2 + x_8;
if (x_7 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_mk_string("");
x_11 = l_Lean_stringToMessageData(x_10);
lean_dec(x_10);
lean_inc(x_11);
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_4);
x_13 = lean_mk_string("\n");
x_14 = l_Lean_stringToMessageData(x_13);
lean_dec(x_13);
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_ctor_get(x_6, 1);
lean_inc(x_16);
lean_dec(x_6);
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_11);
x_2 = x_9;
x_4 = x_18;
goto _start;
}
else
{
lean_object* x_20; 
lean_dec(x_4);
x_20 = lean_ctor_get(x_6, 1);
lean_inc(x_20);
lean_dec(x_6);
x_2 = x_9;
x_4 = x_20;
goto _start;
}
}
else
{
return x_4;
}
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
return x_2;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_4, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
return x_2;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__4(x_3, x_8, x_9, x_2);
return x_10;
}
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_array_get_size(x_11);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_lt(x_13, x_12);
if (x_14 == 0)
{
lean_dec(x_12);
return x_2;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_le(x_12, x_12);
if (x_15 == 0)
{
lean_dec(x_12);
return x_2;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_12);
lean_dec(x_12);
x_18 = l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5(x_11, x_16, x_17, x_2);
return x_18;
}
}
}
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__2(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; size_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; size_t x_10; size_t x_11; size_t x_12; size_t x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = x_2 >> x_3 % (sizeof(size_t) * 8);
x_7 = lean_usize_to_nat(x_6);
x_8 = l_Std_instInhabitedPersistentArrayNode(lean_box(0));
x_9 = lean_array_get(x_8, x_5, x_7);
x_10 = 1;
x_11 = x_10 << x_3 % (sizeof(size_t) * 8);
x_12 = x_11 - x_10;
x_13 = x_2 & x_12;
x_14 = 5;
x_15 = x_3 - x_14;
x_16 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__2(x_9, x_13, x_15, x_4);
lean_dec(x_9);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_7, x_17);
lean_dec(x_7);
x_19 = lean_array_get_size(x_5);
x_20 = lean_nat_dec_lt(x_18, x_19);
if (x_20 == 0)
{
lean_dec(x_19);
lean_dec(x_18);
return x_16;
}
else
{
uint8_t x_21; 
x_21 = lean_nat_dec_le(x_19, x_19);
if (x_21 == 0)
{
lean_dec(x_19);
lean_dec(x_18);
return x_16;
}
else
{
size_t x_22; size_t x_23; lean_object* x_24; 
x_22 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_23 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_24 = l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__4(x_5, x_22, x_23, x_16);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_25 = lean_ctor_get(x_1, 0);
x_26 = lean_usize_to_nat(x_2);
x_27 = lean_array_get_size(x_25);
x_28 = lean_nat_dec_lt(x_26, x_27);
if (x_28 == 0)
{
lean_dec(x_27);
lean_dec(x_26);
return x_4;
}
else
{
uint8_t x_29; 
x_29 = lean_nat_dec_le(x_27, x_27);
if (x_29 == 0)
{
lean_dec(x_27);
lean_dec(x_26);
return x_4;
}
else
{
size_t x_30; size_t x_31; lean_object* x_32; 
x_30 = lean_usize_of_nat(x_26);
lean_dec(x_26);
x_31 = lean_usize_of_nat(x_27);
lean_dec(x_27);
x_32 = l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5(x_25, x_30, x_31, x_4);
return x_32;
}
}
}
}
}
lean_object* l_Std_PersistentArray_foldlM___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_3, x_4);
if (x_5 == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_1, 3);
x_7 = lean_nat_dec_le(x_6, x_3);
if (x_7 == 0)
{
lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_usize_of_nat(x_3);
x_10 = lean_ctor_get_usize(x_1, 4);
x_11 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__2(x_8, x_9, x_10, x_2);
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_array_get_size(x_12);
x_14 = lean_nat_dec_lt(x_4, x_13);
if (x_14 == 0)
{
lean_dec(x_13);
return x_11;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_le(x_13, x_13);
if (x_15 == 0)
{
lean_dec(x_13);
return x_11;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_18 = l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5(x_12, x_16, x_17, x_11);
return x_18;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_1, 1);
x_20 = lean_nat_sub(x_3, x_6);
x_21 = lean_array_get_size(x_19);
x_22 = lean_nat_dec_lt(x_20, x_21);
if (x_22 == 0)
{
lean_dec(x_21);
lean_dec(x_20);
return x_2;
}
else
{
uint8_t x_23; 
x_23 = lean_nat_dec_le(x_21, x_21);
if (x_23 == 0)
{
lean_dec(x_21);
lean_dec(x_20);
return x_2;
}
else
{
size_t x_24; size_t x_25; lean_object* x_26; 
x_24 = lean_usize_of_nat(x_20);
lean_dec(x_20);
x_25 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_26 = l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5(x_19, x_24, x_25, x_2);
return x_26;
}
}
}
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_ctor_get(x_1, 0);
x_28 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__3(x_27, x_2);
x_29 = lean_ctor_get(x_1, 1);
x_30 = lean_array_get_size(x_29);
x_31 = lean_nat_dec_lt(x_4, x_30);
if (x_31 == 0)
{
lean_dec(x_30);
return x_28;
}
else
{
uint8_t x_32; 
x_32 = lean_nat_dec_le(x_30, x_30);
if (x_32 == 0)
{
lean_dec(x_30);
return x_28;
}
else
{
size_t x_33; size_t x_34; lean_object* x_35; 
x_33 = 0;
x_34 = lean_usize_of_nat(x_30);
lean_dec(x_30);
x_35 = l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5(x_29, x_33, x_34, x_28);
return x_35;
}
}
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 2);
lean_inc(x_6);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_6, x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_dec_eq(x_6, x_9);
lean_dec(x_6);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = l_Lean_MessageData_nil;
x_12 = l_Std_PersistentArray_foldlM___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__1(x_5, x_11, x_7);
lean_dec(x_5);
x_13 = lean_unsigned_to_nat(2u);
x_14 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Std_PersistentArray_push___rarg(x_2, x_15);
lean_ctor_set(x_3, 0, x_16);
return x_3;
}
else
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_inc(x_5);
x_17 = l_Std_PersistentArray_get_x21___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__1(x_5, x_7);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
lean_dec(x_17);
x_19 = l_Lean_MessageData_isNest(x_18);
lean_dec(x_18);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = l_Lean_MessageData_nil;
x_21 = l_Std_PersistentArray_foldlM___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__1(x_5, x_20, x_7);
lean_dec(x_5);
x_22 = lean_unsigned_to_nat(2u);
x_23 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_1);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Std_PersistentArray_push___rarg(x_2, x_24);
lean_ctor_set(x_3, 0, x_25);
return x_3;
}
else
{
lean_object* x_26; 
lean_dec(x_1);
x_26 = l_Std_PersistentArray_append___rarg(x_2, x_5);
lean_dec(x_5);
lean_ctor_set(x_3, 0, x_26);
return x_3;
}
}
}
else
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
else
{
uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_27 = lean_ctor_get_uint8(x_3, sizeof(void*)*1);
x_28 = lean_ctor_get(x_3, 0);
lean_inc(x_28);
lean_dec(x_3);
x_29 = lean_ctor_get(x_28, 2);
lean_inc(x_29);
x_30 = lean_unsigned_to_nat(0u);
x_31 = lean_nat_dec_eq(x_29, x_30);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_dec_eq(x_29, x_32);
lean_dec(x_29);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_34 = l_Lean_MessageData_nil;
x_35 = l_Std_PersistentArray_foldlM___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__1(x_28, x_34, x_30);
lean_dec(x_28);
x_36 = lean_unsigned_to_nat(2u);
x_37 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_1);
lean_ctor_set(x_38, 1, x_37);
x_39 = l_Std_PersistentArray_push___rarg(x_2, x_38);
x_40 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set_uint8(x_40, sizeof(void*)*1, x_27);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; 
lean_inc(x_28);
x_41 = l_Std_PersistentArray_get_x21___at___private_Lean_Util_Trace_0__Lean_TraceState_toFormat___spec__1(x_28, x_30);
x_42 = lean_ctor_get(x_41, 1);
lean_inc(x_42);
lean_dec(x_41);
x_43 = l_Lean_MessageData_isNest(x_42);
lean_dec(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_44 = l_Lean_MessageData_nil;
x_45 = l_Std_PersistentArray_foldlM___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__1(x_28, x_44, x_30);
lean_dec(x_28);
x_46 = lean_unsigned_to_nat(2u);
x_47 = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_1);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_Std_PersistentArray_push___rarg(x_2, x_48);
x_50 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set_uint8(x_50, sizeof(void*)*1, x_27);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; 
lean_dec(x_1);
x_51 = l_Std_PersistentArray_append___rarg(x_2, x_28);
lean_dec(x_28);
x_52 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set_uint8(x_52, sizeof(void*)*1, x_27);
return x_52;
}
}
}
else
{
lean_object* x_53; 
lean_dec(x_29);
lean_dec(x_28);
lean_dec(x_1);
x_53 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_53, 0, x_2);
lean_ctor_set_uint8(x_53, sizeof(void*)*1, x_27);
return x_53;
}
}
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___rarg___lambda__1), 3, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_3);
x_6 = lean_apply_1(x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__4(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__5(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__3___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlMAux___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__3(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l___private_Std_Data_PersistentArray_0__Std_PersistentArray_foldlFromMAux___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__2(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Std_PersistentArray_foldlM___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_PersistentArray_foldlM___at___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Lean_withNestedTraces___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l___private_Lean_Util_Trace_0__Lean_withNestedTracesFinalizer___rarg(x_2, x_6, x_3);
x_10 = lean_alloc_closure((void*)(l_Monad_seqRight___default___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_10, 0, x_9);
x_11 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_5, x_10);
x_12 = lean_ctor_get(x_8, 0);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_alloc_closure((void*)(l_tryFinally___rarg___lambda__1___boxed), 1, 0);
x_14 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_13, x_11);
return x_14;
}
}
lean_object* l_Lean_withNestedTraces___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_alloc_closure((void*)(l_Lean_withNestedTraces___rarg___lambda__1), 6, 5);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_3);
lean_closure_set(x_10, 2, x_4);
lean_closure_set(x_10, 3, x_5);
lean_closure_set(x_10, 4, x_6);
x_11 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_withNestedTraces___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_getResetTraces___rarg___lambda__1), 1, 0);
x_10 = lean_apply_1(x_8, x_9);
lean_inc(x_6);
x_11 = lean_alloc_closure((void*)(l_Lean_withNestedTraces___rarg___lambda__2___boxed), 8, 7);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_3);
lean_closure_set(x_11, 2, x_1);
lean_closure_set(x_11, 3, x_7);
lean_closure_set(x_11, 4, x_4);
lean_closure_set(x_11, 5, x_5);
lean_closure_set(x_11, 6, x_6);
x_12 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_10, x_11);
return x_12;
}
}
lean_object* l_Lean_withNestedTraces___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_getTraces___rarg___lambda__1), 2, 1);
lean_closure_set(x_8, 0, x_1);
lean_inc(x_6);
x_9 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_7, x_8);
lean_inc(x_6);
x_10 = lean_alloc_closure((void*)(l_Lean_withNestedTraces___rarg___lambda__3), 7, 6);
lean_closure_set(x_10, 0, x_3);
lean_closure_set(x_10, 1, x_4);
lean_closure_set(x_10, 2, x_1);
lean_closure_set(x_10, 3, x_2);
lean_closure_set(x_10, 4, x_5);
lean_closure_set(x_10, 5, x_6);
x_11 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_withNestedTraces(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_withNestedTraces___rarg), 5, 0);
return x_3;
}
}
lean_object* l_Lean_withNestedTraces___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_withNestedTraces___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
return x_9;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Message(lean_object*);
lean_object* initialize_Lean_MonadEnv(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Util_Trace(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Message(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_MonadEnv(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedTraceElem = _init_l_Lean_instInhabitedTraceElem();
lean_mark_persistent(l_Lean_instInhabitedTraceElem);
l_Lean_TraceState_enabled___default = _init_l_Lean_TraceState_enabled___default();
l_Lean_TraceState_traces___default = _init_l_Lean_TraceState_traces___default();
lean_mark_persistent(l_Lean_TraceState_traces___default);
l_Lean_instInhabitedTraceState = _init_l_Lean_instInhabitedTraceState();
lean_mark_persistent(l_Lean_instInhabitedTraceState);
l_Lean_termTrace_x5b_____x5d____ = _init_l_Lean_termTrace_x5b_____x5d____();
lean_mark_persistent(l_Lean_termTrace_x5b_____x5d____);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
