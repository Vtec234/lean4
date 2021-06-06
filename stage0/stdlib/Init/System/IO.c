// Lean compiler output
// Module: Init.System.IO
// Imports: Init.Control.EState Init.Control.Reader Init.Data.String Init.Data.ByteArray Init.System.IOError Init.System.FilePath Init.System.ST Init.Data.ToString.Macro Init.Data.Ord
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
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_tryFinally___rarg___lambda__1___boxed(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_IO_cancel___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_Buffer_pos___default;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_readBinToEnd_loop___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_MonadExcept_orelse___at_instOrElseEIO___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_putStrLn___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_getStdout(lean_object*);
lean_object* lean_io_get_num_heartbeats(lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_reprSystemTime____x40_Init_System_IO___hyg_1952_(lean_object*, lean_object*);
lean_object* l_IO_FS_withIsolatedStreams___rarg(lean_object*, lean_object*);
lean_object* l_IO_createDirAll___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_allocprof___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instEvalUnit___rarg(uint8_t, lean_object*);
lean_object* l_System_FilePath_isDir___boxed(lean_object*, lean_object*);
lean_object* l_IO_mkRef___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_get_stdin(lean_object*);
extern uint8_t l_System_Platform_isWindows;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_io_prim_handle_get_line(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_readToEnd_read___at_IO_Process_output___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_ms_now(lean_object*);
lean_object* lean_io_timeit(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_is_eof(lean_object*, lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* lean_get_set_stdout(lean_object*, lean_object*);
lean_object* lean_chmod(lean_object*, uint32_t, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_IO_FS_Stream_ofHandle___elambda__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_runEval(lean_object*);
uint8_t l_UInt8_decEq(uint8_t, uint8_t);
lean_object* l_IO_Prim_getEnv___boxed(lean_object*, lean_object*);
lean_object* l_IO_Prim_fopenFlags_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_wait_any(lean_object*, lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_beqFileType____x40_Init_System_IO___hyg_1855__match__1___rarg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_IO_bindTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_println(lean_object*);
lean_object* l_IO_Prim_fopenFlags_match__1(lean_object*);
lean_object* l_IO_Prim_getStderr___boxed(lean_object*);
lean_object* l_MonadExcept_orelse___at_instOrElseEIO___spec__1(lean_object*, lean_object*);
lean_object* l_IO_hasFinished___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_ofHandle___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l___private_Init_System_IO_0__IO_FS_beqSystemTime____x40_Init_System_IO___hyg_2016__match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_setStdout___at_IO_FS_withIsolatedStreams___spec__6(lean_object*, lean_object*);
lean_object* l_IO_FS_withFile___rarg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
uint8_t l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097_(lean_object*, lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_reprDirEntry____x40_Init_System_IO___hyg_1641____boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_putStr___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadFinallyEIO(lean_object*);
lean_object* l_IO_instMonadLiftSTRealWorldEIO_match__2(lean_object*, lean_object*);
lean_object* l_IO_setStdin___at_IO_FS_withIsolatedStreams___spec__8(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer___elambda__2(lean_object*, lean_object*);
lean_object* lean_io_cancel(lean_object*, lean_object*);
lean_object* l_Lean_instEval___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_lines_read___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_putStrLn___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Init_System_IO_0__IO_FS_beqSystemTime____x40_Init_System_IO___hyg_2016_(lean_object*, lean_object*);
lean_object* l_EStateM_tryCatch___at_IO_FS_withIsolatedStreams___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_put_str(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_waitAny___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_getEnv___rarg(lean_object*, lean_object*);
lean_object* l_IO_appDir___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instEval___rarg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_IO_toEIO(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_getLine___rarg(lean_object*, lean_object*);
lean_object* l_Lean_instEvalIO___rarg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_IO_Prim_getStdout___boxed(lean_object*);
lean_object* l_IO_removeFile___rarg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Monad_seqRight___default___rarg___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_writeBinFile___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeIO___rarg(lean_object*);
lean_object* l_EIO_toIO_x27(lean_object*, lean_object*);
lean_object* lean_get_stderr(lean_object*);
uint32_t l_UInt32_shiftLeft(uint32_t, uint32_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_write(lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_reprFileType____x40_Init_System_IO___hyg_1737__match__1(lean_object*);
lean_object* l_IO_print(lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer___elambda__5(lean_object*);
lean_object* l_Lean_instEvalUnit(lean_object*);
lean_object* l_IO_FS_instInhabitedSystemTime;
lean_object* l_IO_FS_Handle_flush___rarg(lean_object*, lean_object*);
lean_object* l_Lean_instEvalUnit___rarg___boxed(lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_withStdin___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Prim_Handle_mk___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_readToEnd(lean_object*);
lean_object* l_IO_withStdin___at_IO_FS_withIsolatedStreams___spec__7___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FileRight_user___default;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_IO_withStderr___at_IO_FS_withIsolatedStreams___spec__3(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* l_Lean_interpolatedStrKind;
lean_object* l_IO_Process_SpawnArgs_args___default;
lean_object* l_IO_FS_Handle_readToEnd___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_ofExcept_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_instMonadLiftSTRealWorldEIO_match__1___boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_readBinToEnd_loop___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_sleep(uint32_t, lean_object*);
lean_object* l_IO_monoMsNow___boxed(lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*);
lean_object* l_IO_Prim_setStdout___boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_instBEqFileType;
lean_object* l_EIO_catchExceptions_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Prim_setStderr___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_reprMetadata____x40_Init_System_IO___hyg_2280____boxed(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_instEval(lean_object*);
lean_object* l_IO_FS_lines___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_process_spawn(lean_object*, lean_object*);
lean_object* lean_io_getenv(lean_object*, lean_object*);
lean_object* l_IO_Process_SpawnArgs_cwd___default;
lean_object* l_Lean_instEvalUnit___boxed(lean_object*);
lean_object* l_IO_instMonadLiftSTRealWorldEIO_match__1(lean_object*, uint8_t);
lean_object* l_Lean_instEval__1(lean_object*);
lean_object* l_IO_createDirAll___boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_getLine___at_IO_Process_output___spec__2(lean_object*, lean_object*);
lean_object* l_IO_setAccessRights(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_setStdout(lean_object*);
lean_object* l_IO_withStdin(lean_object*);
lean_object* lean_io_map_task(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_eprintln(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer___lambda__1(lean_object*, lean_object*);
lean_object* l_IO_withStdin___at_IO_FS_withIsolatedStreams___spec__7(lean_object*);
lean_object* l_IO_createDirAll(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_ofHandle___elambda__5(lean_object*, lean_object*);
lean_object* l_IO_Prim_Handle_isEof___boxed(lean_object*, lean_object*);
lean_object* l_IO_instMonadLiftSTRealWorldEIO(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer(lean_object*);
lean_object* l_IO_FS_Stream_ofHandle___elambda__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_create_dir(lean_object*, lean_object*);
lean_object* l_IO_setStderr(lean_object*);
lean_object* lean_io_bind_task(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_pathExists(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_readBinToEnd_loop___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_instReprMetadata;
lean_object* l_IO_createDirAll___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_eprint___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_getStderr___at_IO_eprint___spec__1(lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_IO_lazyPure___rarg(lean_object*, lean_object*);
lean_object* l_IO_FS_withIsolatedStreams___rarg___lambda__1(lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_AccessRight_flags___boxed(lean_object*);
lean_object* l_IO_mapTasks_go_match__1(lean_object*, lean_object*);
lean_object* l_IO_Prim_realPath___boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer___elambda__2___boxed(lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* l___private_Init_System_IO_0__IO_FS_reprMetadata____x40_Init_System_IO___hyg_2280_(lean_object*, lean_object*);
lean_object* l_IO_appDir(lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_reprFileType____x40_Init_System_IO___hyg_1737____boxed(lean_object*, lean_object*);
lean_object* lean_io_eprintln(lean_object*, lean_object*);
lean_object* l_EIO_toIO___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Prim_removeFile___boxed(lean_object*, lean_object*);
lean_object* l_IO_appPath___rarg(lean_object*);
lean_object* l_IO_FS_Handle_readBinToEnd(lean_object*);
lean_object* l_IO_createDirAll___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_IO_sleep___lambda__1(lean_object*, lean_object*);
lean_object* l_IO_Process_SpawnArgs_env___default;
lean_object* l_IO_FS_instLTSystemTime;
lean_object* l___private_Init_System_IO_0__IO_FS_reprFileType____x40_Init_System_IO___hyg_1737_(uint8_t, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_IO_mapTasks___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_bind___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Task_Priority_dedicated;
lean_object* l_IO_eprintln___at___private_Init_System_IO_0__IO_eprintlnAux___spec__1(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer___lambda__1___boxed(lean_object*, lean_object*);
lean_object* lean_get_set_stderr(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_read___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_withStdout___at_IO_FS_withIsolatedStreams___spec__5___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_read_dir(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer___elambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_current_dir(lean_object*);
lean_object* l_ByteArray_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_instMonadExceptOfEIO(lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer_match__1(lean_object*);
lean_object* l_IO_FS_Handle_readBinToEnd_loop___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Process_run___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_putStrLn(lean_object*);
lean_object* l_IO_withStderr___at_IO_FS_withIsolatedStreams___spec__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_beqSystemTime____x40_Init_System_IO___hyg_2016__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_wait(lean_object*, lean_object*);
lean_object* l_IO_print___at_IO_println___spec__1(lean_object*, lean_object*);
uint8_t l_UInt32_decLt(uint32_t, uint32_t);
lean_object* l_IO_FS_Handle_write___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_readToEnd_read___at_IO_Process_output___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_readDir___boxed(lean_object*, lean_object*);
lean_object* l_EStateM_tryCatch___at_IO_FS_withIsolatedStreams___spec__2(lean_object*);
lean_object* l_IO_getStderr___rarg(lean_object*);
lean_object* lean_io_realpath(lean_object*, lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_beqFileType____x40_Init_System_IO___hyg_1855____boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_readBinToEnd_loop___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_getStdout___rarg(lean_object*);
lean_object* lean_dbg_sleep(uint32_t, lean_object*);
lean_object* l_IO_FS_writeFile___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_mapTasks(lean_object*, lean_object*);
lean_object* l_IO_Prim_fopenFlags(uint8_t, uint8_t);
lean_object* l_IO_eprintln___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_IO_FS_Handle_readToEnd_read___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*);
uint32_t l_String_back(lean_object*);
lean_object* l_IO_Prim_Handle_write___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_allocprof(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_getLine(lean_object*);
lean_object* l_IO_getNumHeartbeats___boxed(lean_object*, lean_object*);
lean_object* l_IO_eprint(lean_object*);
lean_object* l_EIO_toIO_x27___rarg(lean_object*, lean_object*);
lean_object* lean_format_pretty(lean_object*, lean_object*);
lean_object* l_EStateM_instMonadFinallyEStateM(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_ofHandle___elambda__2___boxed(lean_object*, lean_object*);
lean_object* l_IO_initializing___boxed(lean_object*);
lean_object* lean_stream_of_handle(lean_object*);
lean_object* l_IO_Prim_iterate(lean_object*, lean_object*);
lean_object* l_IO_Prim_iterate___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_instReprSystemTime;
lean_object* l_IO_FS_Handle_readBinToEnd___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* l_IO_FS_Handle_mk(lean_object*);
lean_object* l_EIO_toIO(lean_object*, lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097__match__1(lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer___elambda__4___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_lines_read(lean_object*);
lean_object* l_IO_Prim_Handle_getLine___boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_lines_read___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_mk___rarg(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_IO_sleep___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_IO_println___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Process_spawn___boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_ofHandle___elambda__5___boxed(lean_object*, lean_object*);
lean_object* l_IO_getStdin___rarg(lean_object*);
lean_object* l_IO_FS_Handle_readToEnd_read(lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_reprFileType____x40_Init_System_IO___hyg_1737__match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Init_System_IO_0__IO_FS_beqFileType____x40_Init_System_IO___hyg_1855_(uint8_t, uint8_t);
lean_object* l_IO_FS_Handle_isEof(lean_object*);
lean_object* l_IO_realPath___rarg(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_Buffer_data___default;
lean_object* l_IO_Prim_appPath___boxed(lean_object*);
lean_object* l_IO_setStdin___rarg(lean_object*, lean_object*);
lean_object* l_IO_FileRight_flags___boxed(lean_object*);
lean_object* l_instInhabitedEIO(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_read(lean_object*);
lean_object* lean_io_has_finished(lean_object*, lean_object*);
lean_object* l_String_dropRight(lean_object*, lean_object*);
lean_object* l_EIO_catchExceptions(lean_object*, lean_object*);
lean_object* l_IO_setAccessRights___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_instBEqSystemTime;
size_t lean_usize_of_nat(lean_object*);
lean_object* l_IO_appDir_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_reprDirEntry____x40_Init_System_IO___hyg_1641_(lean_object*, lean_object*);
lean_object* l_IO_setStderr___at_IO_FS_withIsolatedStreams___spec__4(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_setStdout___rarg(lean_object*, lean_object*);
lean_object* l_termPrintln_x21____;
lean_object* l_IO_FS_Stream_ofHandle___elambda__2(lean_object*, lean_object*);
lean_object* l_EStateM_instMonadEStateM(lean_object*, lean_object*);
lean_object* l_IO_Process_run(lean_object*, lean_object*);
uint8_t l_IO_AccessRight_write___default;
lean_object* l_IO_FS_DirEntry_path(lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer___elambda__6(lean_object*, lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097__match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097__match__2(lean_object*);
lean_object* l_IO_ofExcept___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Init_System_IO___hyg_4276_(lean_object*, lean_object*, lean_object*);
uint8_t l_IO_Process_StdioConfig_stdout___default;
lean_object* l_IO_mapTasks_go(lean_object*, lean_object*);
lean_object* l_IO_Process_Stdio_toHandleType_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_readToEnd_read___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_realPath(lean_object*);
lean_object* lean_io_prim_handle_write(lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_throw___rarg(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer___elambda__3___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_ofExcept(lean_object*, lean_object*);
lean_object* l_IO_appDir_match__1(lean_object*);
lean_object* l_EStateM_nonBacktrackable(lean_object*);
uint8_t l_UInt32_decEq(uint32_t, uint32_t);
lean_object* lean_io_check_canceled(lean_object*);
lean_object* l_IO_FS_Stream_ofHandle___elambda__4(lean_object*, size_t, lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer___elambda__4(lean_object*, size_t, lean_object*);
lean_object* l_IO_currentDir(lean_object*);
lean_object* l_IO_FS_writeBinFile(lean_object*);
lean_object* l_IO_FS_Handle_putStr(lean_object*);
lean_object* l_IO_Prim_setAccessRights___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_getEnv(lean_object*);
lean_object* l_Lean_instEvalIO___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_sleep___boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_ofHandle___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeEIO___rarg(lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097__match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_IO_FS_instOrdSystemTime;
lean_object* l_ByteArray_findIdx_x3f_loop___at_IO_FS_Stream_ofBuffer___elambda__2___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_IO_ofExcept_match__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_IO_lazyPure(lean_object*);
lean_object* l_IO_setStderr___rarg(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_mk___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_wait___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer___elambda__3(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Prim_currentDir___boxed(lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_beqSystemTime____x40_Init_System_IO___hyg_2016__match__1(lean_object*);
lean_object* l_IO_createDirAll___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_get_stdout(lean_object*);
lean_object* l_IO_FS_Stream_ofHandle___elambda__3(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Prim_iterate_match__1(lean_object*, lean_object*, lean_object*);
lean_object* l_EStateM_instMonadExceptOfEStateM___rarg(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_IO_ofExcept___at_IO_Process_output___spec__3(lean_object*, lean_object*);
lean_object* l_System_FilePath_pathExists___boxed(lean_object*, lean_object*);
lean_object* l_IO_withStderr___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_mapTasks_go___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_instReprFileType;
lean_object* l_IO_Process_Stdio_toHandleType_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_readFile___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_withStdout___at_IO_FS_withIsolatedStreams___spec__5(lean_object*);
lean_object* l_IO_FileRight_other___default;
lean_object* l___private_Init_System_IO_0__IO_FS_beqFileType____x40_Init_System_IO___hyg_1855__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_readToEnd_read___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t l_IO_AccessRight_flags(lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_beqFileType____x40_Init_System_IO___hyg_1855__match__1(lean_object*);
lean_object* l_unsafeIO(lean_object*);
lean_object* l_IO_appDir___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Prim_fopenFlags_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_metadata___boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_withIsolatedStreams___rarg___lambda__2(lean_object*, lean_object*);
lean_object* l_System_FilePath_isDir(lean_object*, lean_object*);
lean_object* l_IO_withStdin___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_checkCanceled___boxed(lean_object*);
lean_object* l_IO_FS_instLESystemTime;
lean_object* l_IO_FileRight_group___default;
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_toEIO___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_putStrLn(lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Init_System_IO_0__IO_FS_beqSystemTime____x40_Init_System_IO___hyg_2016____boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_lines___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Process_Stdio_toHandleType_match__1(lean_object*);
lean_object* l_IO_FS_withIsolatedStreams(lean_object*);
lean_object* l_IO_println___at_Lean_instEval__1___spec__1(lean_object*, lean_object*);
lean_object* l_instInhabitedEIO___rarg(lean_object*);
lean_object* lean_get_set_stdin(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_getLine___at_IO_Process_output___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_EStateM_instInhabitedEStateM___rarg(lean_object*, lean_object*);
lean_object* l_instOrElseEIO(lean_object*, lean_object*);
lean_object* l_IO_eprint___at_IO_eprintln___spec__1(lean_object*, lean_object*);
lean_object* l_IO_appDir___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_writeFile___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_read___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeEIO(lean_object*, lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l___private_Init_System_IO_0__IO_FS_reprFileType____x40_Init_System_IO___hyg_1737__match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ByteArray_append(lean_object*, lean_object*);
lean_object* l_IO_asTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_IO_removeFile(lean_object*);
lean_object* lean_io_prim_handle_flush(lean_object*, lean_object*);
lean_object* lean_io_remove_file(lean_object*, lean_object*);
uint32_t l_UInt32_lor(uint32_t, uint32_t);
lean_object* l_IO_appPath(lean_object*);
lean_object* lean_io_initializing(lean_object*);
lean_object* l_IO_FS_writeBinFile___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_ofHandle___elambda__6___boxed(lean_object*, lean_object*);
lean_object* lean_io_metadata(lean_object*, lean_object*);
lean_object* l_IO_withStderr(lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_IO_mapTasks_go___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_mkRef(lean_object*, lean_object*, lean_object*);
uint8_t l_IO_Process_StdioConfig_stderr___default;
uint8_t lean_byte_array_get(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_readBinToEnd_loop(lean_object*);
lean_object* l_IO_getStderr(lean_object*);
lean_object* l_IO_createDir___boxed(lean_object*, lean_object*);
lean_object* l_IO_println___at_Lean_instEval___spec__1(lean_object*, lean_object*);
uint8_t l_IO_Process_StdioConfig_stdin___default;
lean_object* l_System_FilePath_parent(lean_object*);
lean_object* l_IO_Prim_Handle_putStr___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_IO_withStdout(lean_object*);
lean_object* l_timeit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_app_path(lean_object*);
lean_object* l_IO_FS_Handle_isEof___rarg(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_flush(lean_object*);
lean_object* l_IO_Prim_fopenFlags___boxed(lean_object*, lean_object*);
lean_object* l_IO_mkRef___rarg(lean_object*, lean_object*);
lean_object* l_IO_getStdin(lean_object*);
lean_object* l_IO_mapTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_ofHandle___elambda__6(lean_object*, lean_object*);
lean_object* l_IO_instMonadLiftSTRealWorldEIO_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Process_run___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_withFile___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instEval__1___rarg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* lean_io_prim_handle_read(lean_object*, size_t, lean_object*);
lean_object* l_IO_instMonadLiftSTRealWorldEIO___rarg(lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_instEval__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_IO_FS_lines(lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
lean_object* l_Lean_runEval___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Prim_iterate_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_withStderr___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_print___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_EIO_catchExceptions_match__1(lean_object*, lean_object*, lean_object*);
uint8_t l_IO_AccessRight_execution___default;
lean_object* l_Lean_instEvalIO(lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097____boxed(lean_object*, lean_object*);
lean_object* l_IO_withStdout___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_IO_withStdout___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_System_IO_0__IO_FS_reprSystemTime____x40_Init_System_IO___hyg_1952____boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_readBinFile___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_getStdout___at_IO_print___spec__1(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_IO_appDir___rarg(lean_object*, lean_object*);
lean_object* l_IO_currentDir___rarg(lean_object*);
lean_object* l_IO_FS_instReprDirEntry;
lean_object* lean_task_get_own(lean_object*);
uint32_t l_IO_FileRight_flags(lean_object*);
lean_object* l_IO_Process_Child_wait___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_setStdin(lean_object*);
lean_object* l_EIO_catchExceptions___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Prim_setStdin___boxed(lean_object*, lean_object*);
lean_object* l_IO_Prim_Handle_read___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ByteArray_findIdx_x3f_loop___at_IO_FS_Stream_ofBuffer___elambda__2___spec__1(lean_object*, lean_object*);
lean_object* l_IO_mapTasks_go_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_withFile(lean_object*);
lean_object* l_IO_Prim_getStdin___boxed(lean_object*);
lean_object* l_IO_Prim_Handle_flush___boxed(lean_object*, lean_object*);
lean_object* l_IO_Process_output(lean_object*, lean_object*);
lean_object* l_IO_mkRef___at_IO_FS_withIsolatedStreams___spec__1(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t l_IO_AccessRight_read___default;
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_EIO_catchExceptions_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
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
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l_EIO_catchExceptions_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_EIO_catchExceptions_match__1___rarg), 3, 0);
return x_4;
}
}
lean_object* l_EIO_catchExceptions___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
lean_dec(x_2);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_4, 1);
lean_inc(x_10);
lean_dec(x_4);
x_11 = lean_apply_2(x_2, x_9, x_10);
return x_11;
}
}
}
lean_object* l_EIO_catchExceptions(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_EIO_catchExceptions___rarg), 3, 0);
return x_3;
}
}
lean_object* l_instMonadEIO(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_EStateM_instMonadEStateM(lean_box(0), lean_box(0));
return x_2;
}
}
lean_object* l_instMonadFinallyEIO(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_EStateM_instMonadFinallyEStateM), 4, 2);
lean_closure_set(x_2, 0, lean_box(0));
lean_closure_set(x_2, 1, lean_box(0));
return x_2;
}
}
lean_object* l_instMonadExceptOfEIO(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_EStateM_nonBacktrackable(lean_box(0));
x_3 = l_EStateM_instMonadExceptOfEStateM___rarg(x_2);
return x_3;
}
}
lean_object* l_MonadExcept_orelse___at_instOrElseEIO___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_2);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_MonadExcept_orelse___at_instOrElseEIO___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonadExcept_orelse___at_instOrElseEIO___spec__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_instOrElseEIO(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_MonadExcept_orelse___at_instOrElseEIO___spec__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_instInhabitedEIO___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_EStateM_instInhabitedEStateM___rarg), 2, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_instInhabitedEIO(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instInhabitedEIO___rarg), 1, 0);
return x_3;
}
}
lean_object* l_EIO_toIO___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
lean_dec(x_1);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_apply_1(x_1, x_10);
lean_ctor_set(x_4, 0, x_11);
return x_4;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_4, 0);
x_13 = lean_ctor_get(x_4, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_4);
x_14 = lean_apply_1(x_1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
}
lean_object* l_EIO_toIO(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_EIO_toIO___rarg), 3, 0);
return x_3;
}
}
lean_object* l_EIO_toIO_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_3, 0, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 0, x_13);
return x_3;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get(x_3, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_3);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
}
}
lean_object* l_EIO_toIO_x27(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_EIO_toIO_x27___rarg), 2, 0);
return x_3;
}
}
lean_object* l_IO_toEIO___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
lean_dec(x_1);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_4);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_6);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_apply_1(x_1, x_10);
lean_ctor_set(x_4, 0, x_11);
return x_4;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_4, 0);
x_13 = lean_ctor_get(x_4, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_4);
x_14 = lean_apply_1(x_1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
}
lean_object* l_IO_toEIO(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IO_toEIO___rarg), 3, 0);
return x_3;
}
}
lean_object* l_unsafeEIO___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_apply_1(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
lean_object* l_unsafeEIO(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_unsafeEIO___rarg), 1, 0);
return x_3;
}
}
lean_object* l_unsafeIO___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = lean_apply_1(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
lean_object* l_unsafeIO(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_unsafeIO___rarg), 1, 0);
return x_2;
}
}
lean_object* l_timeit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_io_timeit(x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_allocprof___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_io_allocprof(x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_IO_initializing___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_io_initializing(x_1);
return x_2;
}
}
lean_object* l_IO_ofExcept_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_IO_ofExcept_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IO_ofExcept_match__1___rarg), 3, 0);
return x_4;
}
}
lean_object* l_IO_ofExcept___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_6, 0, x_5);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_1);
x_8 = lean_ctor_get(x_2, 0);
lean_inc(x_8);
lean_dec(x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
}
}
lean_object* l_IO_ofExcept(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IO_ofExcept___rarg), 3, 0);
return x_3;
}
}
lean_object* l_IO_lazyPure___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_box(0);
x_4 = lean_apply_1(x_1, x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
}
lean_object* l_IO_lazyPure(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_lazyPure___rarg), 2, 0);
return x_2;
}
}
lean_object* l_IO_monoMsNow___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_io_mono_ms_now(x_1);
return x_2;
}
}
lean_object* l_IO_sleep___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box(0);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_1);
return x_4;
}
}
lean_object* l_IO_sleep(uint32_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_IO_sleep___lambda__1___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_dbg_sleep(x_1, x_3);
return x_4;
}
}
lean_object* l_IO_sleep___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_sleep___lambda__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_IO_sleep___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; 
x_3 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_4 = l_IO_sleep(x_3, x_2);
return x_4;
}
}
lean_object* l_IO_asTask___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_io_as_task(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_IO_mapTask___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_io_map_task(x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_IO_bindTask___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_io_bind_task(x_3, x_4, x_5, x_6);
return x_7;
}
}
lean_object* l_IO_mapTasks_go_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_apply_1(x_4, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_4);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_3(x_3, x_6, x_7, x_2);
return x_8;
}
}
}
lean_object* l_IO_mapTasks_go_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IO_mapTasks_go_match__1___rarg), 4, 0);
return x_3;
}
}
lean_object* l_IO_mapTasks_go___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_1);
x_8 = l_IO_mapTasks_go___rarg(x_2, x_3, x_4, x_7, x_6);
return x_8;
}
}
lean_object* l_IO_mapTasks_go___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_List_reverse___rarg(x_4);
x_7 = lean_apply_1(x_1, x_6);
x_8 = lean_io_as_task(x_7, x_2, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_3, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_dec(x_3);
lean_inc(x_2);
x_11 = lean_alloc_closure((void*)(l_IO_mapTasks_go___rarg___lambda__1), 6, 4);
lean_closure_set(x_11, 0, x_4);
lean_closure_set(x_11, 1, x_1);
lean_closure_set(x_11, 2, x_2);
lean_closure_set(x_11, 3, x_10);
x_12 = lean_io_bind_task(x_9, x_11, x_2, x_5);
return x_12;
}
}
}
lean_object* l_IO_mapTasks_go(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IO_mapTasks_go___rarg), 5, 0);
return x_3;
}
}
lean_object* l_IO_mapTasks___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_IO_mapTasks_go___rarg(x_1, x_3, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_IO_mapTasks(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IO_mapTasks___rarg), 4, 0);
return x_3;
}
}
lean_object* l_IO_checkCanceled___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_io_check_canceled(x_1);
return x_2;
}
}
lean_object* l_IO_cancel___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_io_cancel(x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_IO_hasFinished___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_io_has_finished(x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_IO_wait___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_io_wait(x_2, x_3);
return x_4;
}
}
lean_object* l_IO_waitAny___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_io_wait_any(x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_IO_getNumHeartbeats___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_get_num_heartbeats(x_2);
return x_3;
}
}
lean_object* l_IO_Prim_getStdin___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_get_stdin(x_1);
return x_2;
}
}
lean_object* l_IO_Prim_getStdout___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_get_stdout(x_1);
return x_2;
}
}
lean_object* l_IO_Prim_getStderr___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_get_stderr(x_1);
return x_2;
}
}
lean_object* l_IO_Prim_setStdin___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_get_set_stdin(x_1, x_2);
return x_3;
}
}
lean_object* l_IO_Prim_setStdout___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_get_set_stdout(x_1, x_2);
return x_3;
}
}
lean_object* l_IO_Prim_setStderr___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_get_set_stderr(x_1, x_2);
return x_3;
}
}
lean_object* l_IO_Prim_iterate_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_IO_Prim_iterate_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IO_Prim_iterate_match__1___rarg), 3, 0);
return x_4;
}
}
lean_object* l_IO_Prim_iterate___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
lean_inc(x_2);
x_4 = lean_apply_2(x_2, x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_1 = x_7;
x_3 = x_6;
goto _start;
}
else
{
uint8_t x_9; 
lean_dec(x_2);
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_4, 0);
lean_dec(x_10);
x_11 = lean_ctor_get(x_5, 0);
lean_inc(x_11);
lean_dec(x_5);
lean_ctor_set(x_4, 0, x_11);
return x_4;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_dec(x_4);
x_13 = lean_ctor_get(x_5, 0);
lean_inc(x_13);
lean_dec(x_5);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
}
else
{
uint8_t x_15; 
lean_dec(x_2);
x_15 = !lean_is_exclusive(x_4);
if (x_15 == 0)
{
return x_4;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_4, 0);
x_17 = lean_ctor_get(x_4, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_4);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* l_IO_Prim_iterate(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IO_Prim_iterate___rarg), 3, 0);
return x_3;
}
}
lean_object* l_IO_Prim_fopenFlags_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
lean_object* l_IO_Prim_fopenFlags_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_Prim_fopenFlags_match__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l_IO_Prim_fopenFlags_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_IO_Prim_fopenFlags_match__1___rarg(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l_IO_Prim_fopenFlags(uint8_t x_1, uint8_t x_2) {
_start:
{
switch (x_1) {
case 0:
{
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_mk_string("r");
x_4 = lean_mk_string("t");
x_5 = lean_string_append(x_3, x_4);
lean_dec(x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_mk_string("r");
x_7 = lean_mk_string("b");
x_8 = lean_string_append(x_6, x_7);
lean_dec(x_7);
return x_8;
}
}
case 1:
{
if (x_2 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_mk_string("w");
x_10 = lean_mk_string("t");
x_11 = lean_string_append(x_9, x_10);
lean_dec(x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_mk_string("w");
x_13 = lean_mk_string("b");
x_14 = lean_string_append(x_12, x_13);
lean_dec(x_13);
return x_14;
}
}
case 2:
{
if (x_2 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_mk_string("r+");
x_16 = lean_mk_string("t");
x_17 = lean_string_append(x_15, x_16);
lean_dec(x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_mk_string("r+");
x_19 = lean_mk_string("b");
x_20 = lean_string_append(x_18, x_19);
lean_dec(x_19);
return x_20;
}
}
default: 
{
if (x_2 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_mk_string("a");
x_22 = lean_mk_string("t");
x_23 = lean_string_append(x_21, x_22);
lean_dec(x_22);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_mk_string("a");
x_25 = lean_mk_string("b");
x_26 = lean_string_append(x_24, x_25);
lean_dec(x_25);
return x_26;
}
}
}
}
}
lean_object* l_IO_Prim_fopenFlags___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_IO_Prim_fopenFlags(x_3, x_4);
return x_5;
}
}
lean_object* l_IO_Prim_Handle_mk___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_io_prim_handle_mk(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_IO_Prim_Handle_isEof___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_prim_handle_is_eof(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_IO_Prim_Handle_flush___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_prim_handle_flush(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_IO_Prim_Handle_read___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_io_prim_handle_read(x_1, x_4, x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_IO_Prim_Handle_write___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_io_prim_handle_write(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_IO_Prim_Handle_getLine___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_prim_handle_get_line(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_IO_Prim_Handle_putStr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_io_prim_handle_put_str(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_IO_Prim_getEnv___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_getenv(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_IO_Prim_realPath___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_realpath(x_1, x_2);
return x_3;
}
}
lean_object* l_IO_Prim_removeFile___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_remove_file(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_IO_Prim_appPath___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_io_app_path(x_1);
return x_2;
}
}
lean_object* l_IO_Prim_currentDir___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_io_current_dir(x_1);
return x_2;
}
}
lean_object* l_IO_FS_Handle_mk___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_IO_Prim_fopenFlags(x_3, x_4);
x_6 = lean_alloc_closure((void*)(l_IO_Prim_Handle_mk___boxed), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_apply_2(x_1, lean_box(0), x_6);
return x_7;
}
}
lean_object* l_IO_FS_Handle_mk(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Handle_mk___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_IO_FS_Handle_mk___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = lean_unbox(x_4);
lean_dec(x_4);
x_7 = l_IO_FS_Handle_mk___rarg(x_1, x_2, x_5, x_6);
return x_7;
}
}
lean_object* l_IO_FS_withFile___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = 1;
x_9 = l_IO_FS_Handle_mk___rarg(x_2, x_4, x_5, x_8);
x_10 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_9, x_6);
return x_10;
}
}
lean_object* l_IO_FS_withFile(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_withFile___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_IO_FS_withFile___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_5);
lean_dec(x_5);
x_8 = l_IO_FS_withFile___rarg(x_1, x_2, x_3, x_4, x_7, x_6);
return x_8;
}
}
lean_object* l_IO_FS_Handle_isEof___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_IO_Prim_Handle_isEof___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_IO_FS_Handle_isEof(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Handle_isEof___rarg), 2, 0);
return x_2;
}
}
lean_object* l_IO_FS_Handle_flush___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_IO_Prim_Handle_flush___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_IO_FS_Handle_flush(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Handle_flush___rarg), 2, 0);
return x_2;
}
}
lean_object* l_IO_FS_Handle_read___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_usize_of_nat(x_3);
x_5 = lean_box_usize(x_4);
x_6 = lean_alloc_closure((void*)(l_IO_Prim_Handle_read___boxed), 3, 2);
lean_closure_set(x_6, 0, x_2);
lean_closure_set(x_6, 1, x_5);
x_7 = lean_apply_2(x_1, lean_box(0), x_6);
return x_7;
}
}
lean_object* l_IO_FS_Handle_read(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Handle_read___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_IO_FS_Handle_read___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Handle_read___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_IO_FS_Handle_write___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_IO_Prim_Handle_write___boxed), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_apply_2(x_1, lean_box(0), x_4);
return x_5;
}
}
lean_object* l_IO_FS_Handle_write(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Handle_write___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_FS_Handle_getLine___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_IO_Prim_Handle_getLine___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_IO_FS_Handle_getLine(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Handle_getLine___rarg), 2, 0);
return x_2;
}
}
lean_object* l_IO_FS_Handle_putStr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_closure((void*)(l_IO_Prim_Handle_putStr___boxed), 3, 2);
lean_closure_set(x_4, 0, x_2);
lean_closure_set(x_4, 1, x_3);
x_5 = lean_apply_2(x_1, lean_box(0), x_4);
return x_5;
}
}
lean_object* l_IO_FS_Handle_putStr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Handle_putStr___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_FS_Handle_putStrLn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; lean_object* x_6; 
x_4 = 10;
x_5 = lean_string_push(x_3, x_4);
x_6 = l_IO_FS_Handle_putStr___rarg(x_1, x_2, x_5);
return x_6;
}
}
lean_object* l_IO_FS_Handle_putStrLn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Handle_putStrLn___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_FS_Handle_readBinToEnd_loop___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = l_ByteArray_append(x_1, x_5);
x_7 = l_IO_FS_Handle_readBinToEnd_loop___rarg(x_2, x_3, x_4, x_6);
return x_7;
}
}
lean_object* l_IO_FS_Handle_readBinToEnd_loop___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6) {
_start:
{
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_unsigned_to_nat(1024u);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_IO_FS_Handle_read___rarg(x_1, x_2, x_7);
x_9 = lean_alloc_closure((void*)(l_IO_FS_Handle_readBinToEnd_loop___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_9, 0, x_3);
lean_closure_set(x_9, 1, x_4);
lean_closure_set(x_9, 2, x_1);
lean_closure_set(x_9, 3, x_2);
x_10 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_apply_2(x_12, lean_box(0), x_3);
return x_13;
}
}
}
lean_object* l_IO_FS_Handle_readBinToEnd_loop___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
x_6 = l_IO_FS_Handle_isEof___rarg(x_2, x_3);
lean_inc(x_5);
x_7 = lean_alloc_closure((void*)(l_IO_FS_Handle_readBinToEnd_loop___rarg___lambda__2___boxed), 6, 5);
lean_closure_set(x_7, 0, x_2);
lean_closure_set(x_7, 1, x_3);
lean_closure_set(x_7, 2, x_4);
lean_closure_set(x_7, 3, x_1);
lean_closure_set(x_7, 4, x_5);
x_8 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_IO_FS_Handle_readBinToEnd_loop(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Handle_readBinToEnd_loop___rarg), 4, 0);
return x_2;
}
}
lean_object* l_IO_FS_Handle_readBinToEnd_loop___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IO_FS_Handle_readBinToEnd_loop___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_IO_FS_Handle_readBinToEnd_loop___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; lean_object* x_8; 
x_7 = lean_unbox(x_6);
lean_dec(x_6);
x_8 = l_IO_FS_Handle_readBinToEnd_loop___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_7);
return x_8;
}
}
lean_object* l_IO_FS_Handle_readBinToEnd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = l_ByteArray_empty;
x_5 = l_IO_FS_Handle_readBinToEnd_loop___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_IO_FS_Handle_readBinToEnd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Handle_readBinToEnd___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_FS_Handle_readToEnd_read___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_string_length(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_string_append(x_1, x_5);
x_10 = l_IO_FS_Handle_readToEnd_read___rarg(x_2, x_3, x_4, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_3);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_apply_2(x_12, lean_box(0), x_1);
return x_13;
}
}
}
lean_object* l_IO_FS_Handle_readToEnd_read___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
x_6 = l_IO_FS_Handle_getLine___rarg(x_2, x_3);
x_7 = lean_alloc_closure((void*)(l_IO_FS_Handle_readToEnd_read___rarg___lambda__1___boxed), 5, 4);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_1);
lean_closure_set(x_7, 2, x_2);
lean_closure_set(x_7, 3, x_3);
x_8 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_IO_FS_Handle_readToEnd_read(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Handle_readToEnd_read___rarg), 4, 0);
return x_2;
}
}
lean_object* l_IO_FS_Handle_readToEnd_read___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_IO_FS_Handle_readToEnd_read___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_IO_FS_Handle_readToEnd___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_mk_string("");
x_5 = l_IO_FS_Handle_readToEnd_read___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_IO_FS_Handle_readToEnd(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Handle_readToEnd___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_FS_readBinFile___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = 0;
x_6 = 1;
lean_inc(x_2);
x_7 = l_IO_FS_Handle_mk___rarg(x_2, x_3, x_5, x_6);
x_8 = lean_alloc_closure((void*)(l_IO_FS_Handle_readBinToEnd___rarg), 3, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
x_9 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_7, x_8);
return x_9;
}
}
lean_object* l_IO_FS_readBinFile(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_readBinFile___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_FS_readFile___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = 0;
x_6 = 0;
lean_inc(x_2);
x_7 = l_IO_FS_Handle_mk___rarg(x_2, x_3, x_5, x_6);
x_8 = lean_alloc_closure((void*)(l_IO_FS_Handle_readToEnd___rarg), 3, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
x_9 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_7, x_8);
return x_9;
}
}
lean_object* l_IO_FS_readFile(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_readFile___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_FS_lines_read___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_string_length(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_6, x_7);
lean_dec(x_6);
if (x_8 == 0)
{
uint32_t x_9; uint32_t x_10; uint8_t x_11; 
x_9 = l_String_back(x_5);
x_10 = 10;
x_11 = x_9 == x_10;
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
lean_dec(x_3);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_array_push(x_2, x_5);
x_15 = lean_apply_2(x_13, lean_box(0), x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = l_String_dropRight(x_5, x_16);
x_18 = l_System_Platform_isWindows;
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_array_push(x_2, x_17);
x_20 = l_IO_FS_lines_read___rarg(x_1, x_3, x_4, x_19);
return x_20;
}
else
{
uint32_t x_21; uint32_t x_22; uint8_t x_23; 
x_21 = l_String_back(x_17);
x_22 = 13;
x_23 = x_21 == x_22;
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_array_push(x_2, x_17);
x_25 = l_IO_FS_lines_read___rarg(x_1, x_3, x_4, x_24);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = l_String_dropRight(x_17, x_16);
x_27 = lean_array_push(x_2, x_26);
x_28 = l_IO_FS_lines_read___rarg(x_1, x_3, x_4, x_27);
return x_28;
}
}
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_29 = lean_ctor_get(x_1, 0);
lean_inc(x_29);
lean_dec(x_1);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = lean_apply_2(x_30, lean_box(0), x_2);
return x_31;
}
}
}
lean_object* l_IO_FS_lines_read___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
x_6 = l_IO_FS_Handle_getLine___rarg(x_2, x_3);
x_7 = lean_alloc_closure((void*)(l_IO_FS_lines_read___rarg___lambda__1), 5, 4);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_4);
lean_closure_set(x_7, 2, x_2);
lean_closure_set(x_7, 3, x_3);
x_8 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_6, x_7);
return x_8;
}
}
lean_object* l_IO_FS_lines_read(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_lines_read___rarg), 4, 0);
return x_2;
}
}
lean_object* l_IO_FS_lines___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_mk_empty_array_with_capacity(x_4);
x_6 = l_IO_FS_lines_read___rarg(x_1, x_2, x_3, x_5);
return x_6;
}
}
lean_object* l_IO_FS_lines___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = 0;
x_6 = 0;
lean_inc(x_2);
x_7 = l_IO_FS_Handle_mk___rarg(x_2, x_3, x_5, x_6);
x_8 = lean_alloc_closure((void*)(l_IO_FS_lines___rarg___lambda__1), 3, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
x_9 = lean_apply_4(x_4, lean_box(0), lean_box(0), x_7, x_8);
return x_9;
}
}
lean_object* l_IO_FS_lines(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_lines___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_FS_writeBinFile___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Handle_write___rarg(x_1, x_3, x_2);
return x_4;
}
}
lean_object* l_IO_FS_writeBinFile___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = 1;
x_7 = 1;
lean_inc(x_2);
x_8 = l_IO_FS_Handle_mk___rarg(x_2, x_3, x_6, x_7);
x_9 = lean_alloc_closure((void*)(l_IO_FS_writeBinFile___rarg___lambda__1), 3, 2);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_4);
x_10 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_IO_FS_writeBinFile(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_writeBinFile___rarg), 4, 0);
return x_2;
}
}
lean_object* l_IO_FS_writeFile___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Handle_putStr___rarg(x_1, x_3, x_2);
return x_4;
}
}
lean_object* l_IO_FS_writeFile___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = 1;
x_7 = 0;
lean_inc(x_2);
x_8 = l_IO_FS_Handle_mk___rarg(x_2, x_3, x_6, x_7);
x_9 = lean_alloc_closure((void*)(l_IO_FS_writeFile___rarg___lambda__1), 3, 2);
lean_closure_set(x_9, 0, x_2);
lean_closure_set(x_9, 1, x_4);
x_10 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_IO_FS_writeFile(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_writeFile___rarg), 4, 0);
return x_2;
}
}
lean_object* l_IO_FS_Stream_putStrLn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint32_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 5);
lean_inc(x_4);
lean_dec(x_2);
x_5 = 10;
x_6 = lean_string_push(x_3, x_5);
x_7 = lean_apply_1(x_4, x_6);
x_8 = lean_apply_2(x_1, lean_box(0), x_7);
return x_8;
}
}
lean_object* l_IO_FS_Stream_putStrLn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Stream_putStrLn___rarg), 3, 0);
return x_2;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_reprDirEntry____x40_Init_System_IO___hyg_1641_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; 
x_3 = lean_mk_string("root");
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_mk_string(" := ");
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
lean_inc(x_8);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_ctor_get(x_1, 0);
x_11 = l_String_quote(x_10);
x_12 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_mk_string("FilePath.mk ");
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Repr_addAppParen(x_15, x_16);
x_18 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_18, 0, x_9);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_mk_string(",");
x_20 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_box(1);
x_23 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_mk_string("fileName");
x_25 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_8);
x_28 = lean_ctor_get(x_1, 1);
x_29 = l_String_quote(x_28);
x_30 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_31, 0, x_27);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_mk_string("{ ");
x_33 = lean_string_length(x_32);
x_34 = lean_nat_to_int(x_33);
x_35 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_35, 0, x_32);
x_36 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_31);
x_37 = lean_mk_string(" }");
x_38 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_38, 0, x_37);
x_39 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_39, 0, x_36);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_40, 0, x_34);
lean_ctor_set(x_40, 1, x_39);
x_41 = 0;
x_42 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set_uint8(x_42, sizeof(void*)*1, x_41);
return x_42;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_reprDirEntry____x40_Init_System_IO___hyg_1641____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_System_IO_0__IO_FS_reprDirEntry____x40_Init_System_IO___hyg_1641_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_IO_FS_instReprDirEntry() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_System_IO_0__IO_FS_reprDirEntry____x40_Init_System_IO___hyg_1641____boxed), 2, 0);
return x_1;
}
}
lean_object* l_IO_FS_DirEntry_path(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec(x_1);
x_4 = l_System_FilePath_join(x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_reprFileType____x40_Init_System_IO___hyg_1737__match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
lean_object* l___private_Init_System_IO_0__IO_FS_reprFileType____x40_Init_System_IO___hyg_1737__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_System_IO_0__IO_FS_reprFileType____x40_Init_System_IO___hyg_1737__match__1___rarg___boxed), 5, 0);
return x_2;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_reprFileType____x40_Init_System_IO___hyg_1737__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l___private_Init_System_IO_0__IO_FS_reprFileType____x40_Init_System_IO___hyg_1737__match__1___rarg(x_6, x_2, x_3, x_4, x_5);
return x_7;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_reprFileType____x40_Init_System_IO___hyg_1737_(uint8_t x_1, lean_object* x_2) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_unsigned_to_nat(1024u);
x_4 = lean_nat_dec_le(x_3, x_2);
x_5 = lean_mk_string("IO.FS.FileType.dir");
x_6 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_6, 0, x_5);
if (x_4 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_unsigned_to_nat(2u);
x_8 = lean_nat_to_int(x_7);
x_9 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
x_10 = 0;
x_11 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set_uint8(x_11, sizeof(void*)*1, x_10);
x_12 = l_Repr_addAppParen(x_11, x_2);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_to_int(x_13);
x_15 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_6);
x_16 = 0;
x_17 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set_uint8(x_17, sizeof(void*)*1, x_16);
x_18 = l_Repr_addAppParen(x_17, x_2);
return x_18;
}
}
case 1:
{
lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_unsigned_to_nat(1024u);
x_20 = lean_nat_dec_le(x_19, x_2);
x_21 = lean_mk_string("IO.FS.FileType.file");
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
if (x_20 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_unsigned_to_nat(2u);
x_24 = lean_nat_to_int(x_23);
x_25 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
x_26 = 0;
x_27 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set_uint8(x_27, sizeof(void*)*1, x_26);
x_28 = l_Repr_addAppParen(x_27, x_2);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_to_int(x_29);
x_31 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_22);
x_32 = 0;
x_33 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set_uint8(x_33, sizeof(void*)*1, x_32);
x_34 = l_Repr_addAppParen(x_33, x_2);
return x_34;
}
}
case 2:
{
lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_unsigned_to_nat(1024u);
x_36 = lean_nat_dec_le(x_35, x_2);
x_37 = lean_mk_string("IO.FS.FileType.symlink");
x_38 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_38, 0, x_37);
if (x_36 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_unsigned_to_nat(2u);
x_40 = lean_nat_to_int(x_39);
x_41 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_38);
x_42 = 0;
x_43 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set_uint8(x_43, sizeof(void*)*1, x_42);
x_44 = l_Repr_addAppParen(x_43, x_2);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; 
x_45 = lean_unsigned_to_nat(1u);
x_46 = lean_nat_to_int(x_45);
x_47 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_38);
x_48 = 0;
x_49 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set_uint8(x_49, sizeof(void*)*1, x_48);
x_50 = l_Repr_addAppParen(x_49, x_2);
return x_50;
}
}
default: 
{
lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_unsigned_to_nat(1024u);
x_52 = lean_nat_dec_le(x_51, x_2);
x_53 = lean_mk_string("IO.FS.FileType.other");
x_54 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_54, 0, x_53);
if (x_52 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; 
x_55 = lean_unsigned_to_nat(2u);
x_56 = lean_nat_to_int(x_55);
x_57 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_54);
x_58 = 0;
x_59 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set_uint8(x_59, sizeof(void*)*1, x_58);
x_60 = l_Repr_addAppParen(x_59, x_2);
return x_60;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; lean_object* x_65; lean_object* x_66; 
x_61 = lean_unsigned_to_nat(1u);
x_62 = lean_nat_to_int(x_61);
x_63 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_54);
x_64 = 0;
x_65 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set_uint8(x_65, sizeof(void*)*1, x_64);
x_66 = l_Repr_addAppParen(x_65, x_2);
return x_66;
}
}
}
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_reprFileType____x40_Init_System_IO___hyg_1737____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l___private_Init_System_IO_0__IO_FS_reprFileType____x40_Init_System_IO___hyg_1737_(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l_IO_FS_instReprFileType() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_System_IO_0__IO_FS_reprFileType____x40_Init_System_IO___hyg_1737____boxed), 2, 0);
return x_1;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_beqFileType____x40_Init_System_IO___hyg_1855__match__1___rarg(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
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
lean_object* l___private_Init_System_IO_0__IO_FS_beqFileType____x40_Init_System_IO___hyg_1855__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_System_IO_0__IO_FS_beqFileType____x40_Init_System_IO___hyg_1855__match__1___rarg___boxed), 7, 0);
return x_2;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_beqFileType____x40_Init_System_IO___hyg_1855__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; uint8_t x_9; lean_object* x_10; 
x_8 = lean_unbox(x_1);
lean_dec(x_1);
x_9 = lean_unbox(x_2);
lean_dec(x_2);
x_10 = l___private_Init_System_IO_0__IO_FS_beqFileType____x40_Init_System_IO___hyg_1855__match__1___rarg(x_8, x_9, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
}
uint8_t l___private_Init_System_IO_0__IO_FS_beqFileType____x40_Init_System_IO___hyg_1855_(uint8_t x_1, uint8_t x_2) {
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
lean_object* l___private_Init_System_IO_0__IO_FS_beqFileType____x40_Init_System_IO___hyg_1855____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l___private_Init_System_IO_0__IO_FS_beqFileType____x40_Init_System_IO___hyg_1855_(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
static lean_object* _init_l_IO_FS_instBEqFileType() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_System_IO_0__IO_FS_beqFileType____x40_Init_System_IO___hyg_1855____boxed), 2, 0);
return x_1;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_reprSystemTime____x40_Init_System_IO___hyg_1952_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint32_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_3 = lean_mk_string("sec");
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_mk_string(" := ");
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
lean_inc(x_8);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_ctor_get(x_1, 0);
x_11 = l_Int_repr(x_10);
x_12 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_mk_string(",");
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_box(1);
x_18 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_mk_string("nsec");
x_20 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_8);
x_23 = lean_ctor_get_uint32(x_1, sizeof(void*)*1);
x_24 = lean_uint32_to_nat(x_23);
x_25 = l_Nat_repr(x_24);
x_26 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_22);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_mk_string("{ ");
x_29 = lean_string_length(x_28);
x_30 = lean_nat_to_int(x_29);
x_31 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_31, 0, x_28);
x_32 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_27);
x_33 = lean_mk_string(" }");
x_34 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_35, 0, x_32);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_35);
x_37 = 0;
x_38 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set_uint8(x_38, sizeof(void*)*1, x_37);
return x_38;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_reprSystemTime____x40_Init_System_IO___hyg_1952____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_System_IO_0__IO_FS_reprSystemTime____x40_Init_System_IO___hyg_1952_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_IO_FS_instReprSystemTime() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_System_IO_0__IO_FS_reprSystemTime____x40_Init_System_IO___hyg_1952____boxed), 2, 0);
return x_1;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_beqSystemTime____x40_Init_System_IO___hyg_2016__match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint32_t x_6; lean_object* x_7; uint32_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get_uint32(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
x_8 = lean_ctor_get_uint32(x_2, sizeof(void*)*1);
lean_dec(x_2);
x_9 = lean_box_uint32(x_6);
x_10 = lean_box_uint32(x_8);
x_11 = lean_apply_4(x_3, x_5, x_9, x_7, x_10);
return x_11;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_beqSystemTime____x40_Init_System_IO___hyg_2016__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_System_IO_0__IO_FS_beqSystemTime____x40_Init_System_IO___hyg_2016__match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_beqSystemTime____x40_Init_System_IO___hyg_2016__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Init_System_IO_0__IO_FS_beqSystemTime____x40_Init_System_IO___hyg_2016__match__1___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
uint8_t l___private_Init_System_IO_0__IO_FS_beqSystemTime____x40_Init_System_IO___hyg_2016_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint32_t x_4; lean_object* x_5; uint32_t x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get_uint32(x_1, sizeof(void*)*1);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get_uint32(x_2, sizeof(void*)*1);
x_7 = lean_int_dec_eq(x_3, x_5);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = x_4 == x_6;
return x_9;
}
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_beqSystemTime____x40_Init_System_IO___hyg_2016____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Init_System_IO_0__IO_FS_beqSystemTime____x40_Init_System_IO___hyg_2016_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_IO_FS_instBEqSystemTime() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_System_IO_0__IO_FS_beqSystemTime____x40_Init_System_IO___hyg_2016____boxed), 2, 0);
return x_1;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097__match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097__match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097__match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097__match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097__match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint32_t x_5; lean_object* x_6; uint32_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint32(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
x_7 = lean_ctor_get_uint32(x_2, sizeof(void*)*1);
lean_dec(x_2);
x_8 = lean_box_uint32(x_5);
x_9 = lean_box_uint32(x_7);
x_10 = lean_apply_4(x_3, x_4, x_8, x_6, x_9);
return x_10;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097__match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097__match__2___rarg), 3, 0);
return x_2;
}
}
uint8_t l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint32_t x_4; lean_object* x_5; uint32_t x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get_uint32(x_1, sizeof(void*)*1);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get_uint32(x_2, sizeof(void*)*1);
x_7 = lean_int_dec_lt(x_3, x_5);
if (x_7 == 0)
{
uint8_t x_8; 
x_8 = lean_int_dec_eq(x_3, x_5);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 2;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = x_4 < x_6;
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = x_4 == x_6;
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = 2;
return x_12;
}
else
{
uint8_t x_13; 
x_13 = 1;
return x_13;
}
}
else
{
uint8_t x_14; 
x_14 = 0;
return x_14;
}
}
}
else
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_IO_FS_instOrdSystemTime() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_System_IO_0__IO_FS_ordSystemTime____x40_Init_System_IO___hyg_2097____boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_IO_FS_instInhabitedSystemTime() {
_start:
{
lean_object* x_1; lean_object* x_2; uint32_t x_3; lean_object* x_4; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
x_3 = lean_uint32_of_nat(x_1);
x_4 = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set_uint32(x_4, sizeof(void*)*1, x_3);
return x_4;
}
}
static lean_object* _init_l_IO_FS_instLTSystemTime() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_IO_FS_instLESystemTime() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_reprMetadata____x40_Init_System_IO___hyg_2280_(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint64_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; 
x_3 = lean_mk_string("accessed");
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_mk_string(" := ");
x_8 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_8, 0, x_7);
lean_inc(x_8);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l___private_Init_System_IO_0__IO_FS_reprSystemTime____x40_Init_System_IO___hyg_1952_(x_10, x_11);
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_mk_string(",");
x_15 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_15, 0, x_14);
lean_inc(x_15);
x_16 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_box(1);
x_18 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_mk_string("modified");
x_20 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
lean_inc(x_8);
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_8);
x_23 = lean_ctor_get(x_1, 1);
x_24 = l___private_Init_System_IO_0__IO_FS_reprSystemTime____x40_Init_System_IO___hyg_1952_(x_23, x_11);
x_25 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
lean_inc(x_15);
x_26 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_15);
x_27 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_17);
x_28 = lean_mk_string("byteSize");
x_29 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
lean_inc(x_8);
x_31 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_8);
x_32 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
x_33 = lean_uint64_to_nat(x_32);
x_34 = l_Nat_repr(x_33);
x_35 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_15);
x_38 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_17);
x_39 = lean_mk_string("type");
x_40 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_41, 0, x_38);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_8);
x_43 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 8);
x_44 = l___private_Init_System_IO_0__IO_FS_reprFileType____x40_Init_System_IO___hyg_1737_(x_43, x_11);
x_45 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_45, 0, x_42);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_mk_string("{ ");
x_47 = lean_string_length(x_46);
x_48 = lean_nat_to_int(x_47);
x_49 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_49, 0, x_46);
x_50 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_45);
x_51 = lean_mk_string(" }");
x_52 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_54, 0, x_48);
lean_ctor_set(x_54, 1, x_53);
x_55 = 0;
x_56 = lean_alloc_ctor(5, 1, 1);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set_uint8(x_56, sizeof(void*)*1, x_55);
return x_56;
}
}
lean_object* l___private_Init_System_IO_0__IO_FS_reprMetadata____x40_Init_System_IO___hyg_2280____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Init_System_IO_0__IO_FS_reprMetadata____x40_Init_System_IO___hyg_2280_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_IO_FS_instReprMetadata() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Init_System_IO_0__IO_FS_reprMetadata____x40_Init_System_IO___hyg_2280____boxed), 2, 0);
return x_1;
}
}
lean_object* l_System_FilePath_readDir___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_read_dir(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_System_FilePath_metadata___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_metadata(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_System_FilePath_isDir(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_metadata(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; uint8_t x_7; uint8_t x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get_uint8(x_5, sizeof(void*)*2 + 8);
lean_dec(x_5);
x_7 = 0;
x_8 = l___private_Init_System_IO_0__IO_FS_beqFileType____x40_Init_System_IO___hyg_1855_(x_6, x_7);
x_9 = lean_box(x_8);
lean_ctor_set(x_3, 0, x_9);
return x_3;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_3, 0);
x_11 = lean_ctor_get(x_3, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_3);
x_12 = lean_ctor_get_uint8(x_10, sizeof(void*)*2 + 8);
lean_dec(x_10);
x_13 = 0;
x_14 = l___private_Init_System_IO_0__IO_FS_beqFileType____x40_Init_System_IO___hyg_1855_(x_12, x_13);
x_15 = lean_box(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_11);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_3);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_3, 0);
lean_dec(x_18);
x_19 = 0;
x_20 = lean_box(x_19);
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 0, x_20);
return x_3;
}
else
{
lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_3, 1);
lean_inc(x_21);
lean_dec(x_3);
x_22 = 0;
x_23 = lean_box(x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_21);
return x_24;
}
}
}
}
lean_object* l_System_FilePath_isDir___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_System_FilePath_isDir(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_System_FilePath_pathExists(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_metadata(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
lean_dec(x_5);
x_6 = 1;
x_7 = lean_box(x_6);
lean_ctor_set(x_3, 0, x_7);
return x_3;
}
else
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_dec(x_3);
x_9 = 1;
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_3);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_3, 0);
lean_dec(x_13);
x_14 = 0;
x_15 = lean_box(x_14);
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 0, x_15);
return x_3;
}
else
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_3, 1);
lean_inc(x_16);
lean_dec(x_3);
x_17 = 0;
x_18 = lean_box(x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
}
}
}
lean_object* l_System_FilePath_pathExists___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_System_FilePath_pathExists(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_IO_getStdin___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_IO_Prim_getStdin___boxed), 1, 0);
x_3 = lean_apply_2(x_1, lean_box(0), x_2);
return x_3;
}
}
lean_object* l_IO_getStdin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_getStdin___rarg), 1, 0);
return x_2;
}
}
lean_object* l_IO_getStdout___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_IO_Prim_getStdout___boxed), 1, 0);
x_3 = lean_apply_2(x_1, lean_box(0), x_2);
return x_3;
}
}
lean_object* l_IO_getStdout(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_getStdout___rarg), 1, 0);
return x_2;
}
}
lean_object* l_IO_getStderr___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_IO_Prim_getStderr___boxed), 1, 0);
x_3 = lean_apply_2(x_1, lean_box(0), x_2);
return x_3;
}
}
lean_object* l_IO_getStderr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_getStderr___rarg), 1, 0);
return x_2;
}
}
lean_object* l_IO_setStdin___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_IO_Prim_setStdin___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_IO_setStdin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_setStdin___rarg), 2, 0);
return x_2;
}
}
lean_object* l_IO_setStdout___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_IO_Prim_setStdout___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_IO_setStdout(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_setStdout___rarg), 2, 0);
return x_2;
}
}
lean_object* l_IO_setStderr___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_IO_Prim_setStderr___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_IO_setStderr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_setStderr___rarg), 2, 0);
return x_2;
}
}
lean_object* l_IO_withStdin___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_IO_setStdin___rarg(x_2, x_5);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
x_10 = lean_box(0);
x_11 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_10, x_8);
x_12 = lean_alloc_closure((void*)(l_Monad_seqRight___default___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_4, x_12);
x_14 = lean_ctor_get(x_7, 0);
lean_inc(x_14);
lean_dec(x_7);
x_15 = lean_alloc_closure((void*)(l_tryFinally___rarg___lambda__1___boxed), 1, 0);
x_16 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_15, x_13);
return x_16;
}
}
lean_object* l_IO_withStdin___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_inc(x_2);
x_8 = l_IO_setStdin___rarg(x_2, x_5);
x_9 = lean_alloc_closure((void*)(l_IO_withStdin___rarg___lambda__1), 5, 4);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_4);
lean_closure_set(x_9, 3, x_6);
x_10 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_IO_withStdin(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_withStdin___rarg), 6, 0);
return x_2;
}
}
lean_object* l_IO_withStdout___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_IO_setStdout___rarg(x_2, x_5);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
x_10 = lean_box(0);
x_11 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_10, x_8);
x_12 = lean_alloc_closure((void*)(l_Monad_seqRight___default___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_4, x_12);
x_14 = lean_ctor_get(x_7, 0);
lean_inc(x_14);
lean_dec(x_7);
x_15 = lean_alloc_closure((void*)(l_tryFinally___rarg___lambda__1___boxed), 1, 0);
x_16 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_15, x_13);
return x_16;
}
}
lean_object* l_IO_withStdout___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_inc(x_2);
x_8 = l_IO_setStdout___rarg(x_2, x_5);
x_9 = lean_alloc_closure((void*)(l_IO_withStdout___rarg___lambda__1), 5, 4);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_4);
lean_closure_set(x_9, 3, x_6);
x_10 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_IO_withStdout(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_withStdout___rarg), 6, 0);
return x_2;
}
}
lean_object* l_IO_withStderr___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_IO_setStderr___rarg(x_2, x_5);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
x_10 = lean_box(0);
x_11 = lean_apply_4(x_9, lean_box(0), lean_box(0), x_10, x_8);
x_12 = lean_alloc_closure((void*)(l_Monad_seqRight___default___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_12, 0, x_11);
x_13 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_4, x_12);
x_14 = lean_ctor_get(x_7, 0);
lean_inc(x_14);
lean_dec(x_7);
x_15 = lean_alloc_closure((void*)(l_tryFinally___rarg___lambda__1___boxed), 1, 0);
x_16 = lean_apply_4(x_14, lean_box(0), lean_box(0), x_15, x_13);
return x_16;
}
}
lean_object* l_IO_withStderr___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_inc(x_2);
x_8 = l_IO_setStderr___rarg(x_2, x_5);
x_9 = lean_alloc_closure((void*)(l_IO_withStderr___rarg___lambda__1), 5, 4);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_2);
lean_closure_set(x_9, 2, x_4);
lean_closure_set(x_9, 3, x_6);
x_10 = lean_apply_4(x_7, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_IO_withStderr(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_withStderr___rarg), 6, 0);
return x_2;
}
}
lean_object* l_IO_getStdout___at_IO_print___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_get_stdout(x_1);
return x_2;
}
}
lean_object* l_IO_print___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_get_stdout(x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_5, 5);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_1(x_1, x_2);
x_9 = lean_apply_2(x_7, x_8, x_6);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_4);
if (x_10 == 0)
{
return x_4;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_IO_print(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_print___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_print___at_IO_println___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_get_stdout(x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_ctor_get(x_4, 5);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_apply_2(x_6, x_1, x_5);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_1);
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_3);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
}
lean_object* l_IO_println___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint32_t x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_apply_1(x_1, x_2);
x_5 = 10;
x_6 = lean_string_push(x_4, x_5);
x_7 = l_IO_print___at_IO_println___spec__1(x_6, x_3);
return x_7;
}
}
lean_object* l_IO_println(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_println___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_getStderr___at_IO_eprint___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_get_stderr(x_1);
return x_2;
}
}
lean_object* l_IO_eprint___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_get_stderr(x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_5, 5);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_apply_1(x_1, x_2);
x_9 = lean_apply_2(x_7, x_8, x_6);
return x_9;
}
else
{
uint8_t x_10; 
lean_dec(x_2);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_4);
if (x_10 == 0)
{
return x_4;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_IO_eprint(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_eprint___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_eprint___at_IO_eprintln___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_get_stderr(x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_ctor_get(x_4, 5);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_apply_2(x_6, x_1, x_5);
return x_7;
}
else
{
uint8_t x_8; 
lean_dec(x_1);
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_3);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
}
lean_object* l_IO_eprintln___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint32_t x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_apply_1(x_1, x_2);
x_5 = 10;
x_6 = lean_string_push(x_4, x_5);
x_7 = l_IO_eprint___at_IO_eprintln___spec__1(x_6, x_3);
return x_7;
}
}
lean_object* l_IO_eprintln(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_eprintln___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_eprintln___at___private_Init_System_IO_0__IO_eprintlnAux___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = 10;
x_4 = lean_string_push(x_1, x_3);
x_5 = l_IO_eprint___at_IO_eprintln___spec__1(x_4, x_2);
return x_5;
}
}
lean_object* lean_io_eprintln(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_eprintln___at___private_Init_System_IO_0__IO_eprintlnAux___spec__1(x_1, x_2);
return x_3;
}
}
lean_object* l_IO_getEnv___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_IO_Prim_getEnv___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_IO_getEnv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_getEnv___rarg), 2, 0);
return x_2;
}
}
lean_object* l_IO_realPath___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_IO_Prim_realPath___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_IO_realPath(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_realPath___rarg), 2, 0);
return x_2;
}
}
lean_object* l_IO_removeFile___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_IO_Prim_removeFile___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_IO_removeFile(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_removeFile___rarg), 2, 0);
return x_2;
}
}
lean_object* l_IO_appPath___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_IO_Prim_appPath___boxed), 1, 0);
x_3 = lean_apply_2(x_1, lean_box(0), x_2);
return x_3;
}
}
lean_object* l_IO_appPath(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_appPath___rarg), 1, 0);
return x_2;
}
}
lean_object* l_IO_appDir_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_IO_appDir_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_appDir_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_appDir___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_4 = lean_mk_string("System.IO.appDir: unexpected filename '");
x_5 = lean_string_append(x_4, x_1);
x_6 = lean_mk_string("'");
x_7 = lean_string_append(x_5, x_6);
lean_dec(x_6);
x_8 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_closure((void*)(l_EStateM_throw___rarg), 2, 1);
lean_closure_set(x_9, 0, x_8);
x_10 = lean_apply_2(x_2, lean_box(0), x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
lean_dec(x_3);
x_12 = l_IO_realPath___rarg(x_2, x_11);
return x_12;
}
}
}
lean_object* l_IO_appDir___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_System_FilePath_parent(x_4);
x_8 = lean_apply_2(x_6, lean_box(0), x_7);
x_9 = lean_alloc_closure((void*)(l_IO_appDir___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_9, 0, x_4);
lean_closure_set(x_9, 1, x_2);
x_10 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_8, x_9);
return x_10;
}
}
lean_object* l_IO_appDir___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_alloc_closure((void*)(l_IO_Prim_appPath___boxed), 1, 0);
lean_inc(x_2);
x_5 = lean_apply_2(x_2, lean_box(0), x_4);
lean_inc(x_3);
x_6 = lean_alloc_closure((void*)(l_IO_appDir___rarg___lambda__2), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_2);
lean_closure_set(x_6, 2, x_3);
x_7 = lean_apply_4(x_3, lean_box(0), lean_box(0), x_5, x_6);
return x_7;
}
}
lean_object* l_IO_appDir(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_appDir___rarg), 2, 0);
return x_2;
}
}
lean_object* l_IO_appDir___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_appDir___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_IO_currentDir___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_alloc_closure((void*)(l_IO_Prim_currentDir___boxed), 1, 0);
x_3 = lean_apply_2(x_1, lean_box(0), x_2);
return x_3;
}
}
lean_object* l_IO_currentDir(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_currentDir___rarg), 1, 0);
return x_2;
}
}
lean_object* l_IO_createDir___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_create_dir(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_IO_createDirAll___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_io_create_dir(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = l_System_FilePath_isDir(x_1, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_7, 0);
lean_dec(x_11);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_5);
return x_7;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
lean_dec(x_5);
x_14 = !lean_is_exclusive(x_7);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_7, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_7, 0, x_16);
return x_7;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_7, 1);
lean_inc(x_17);
lean_dec(x_7);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
}
}
lean_object* l_IO_createDirAll___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_System_FilePath_parent(x_1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = l_IO_createDirAll___lambda__1(x_1, x_5, x_3);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = l_IO_createDirAll(x_7, x_3);
lean_dec(x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_IO_createDirAll___lambda__1(x_1, x_9, x_10);
lean_dec(x_9);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_8);
if (x_12 == 0)
{
return x_8;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_8, 0);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_8);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
}
lean_object* l_IO_createDirAll(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_System_FilePath_isDir(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = l_IO_createDirAll___lambda__2(x_1, x_7, x_6);
return x_8;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_3);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_3, 0);
lean_dec(x_10);
x_11 = lean_box(0);
lean_ctor_set(x_3, 0, x_11);
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
}
}
lean_object* l_IO_createDirAll___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_createDirAll___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_IO_createDirAll___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_createDirAll___lambda__2(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_IO_createDirAll___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_createDirAll(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_IO_Process_Stdio_toHandleType_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
lean_object* l_IO_Process_Stdio_toHandleType_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_Process_Stdio_toHandleType_match__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_IO_Process_Stdio_toHandleType_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_IO_Process_Stdio_toHandleType_match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
static uint8_t _init_l_IO_Process_StdioConfig_stdin___default() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static uint8_t _init_l_IO_Process_StdioConfig_stdout___default() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static uint8_t _init_l_IO_Process_StdioConfig_stderr___default() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static lean_object* _init_l_IO_Process_SpawnArgs_args___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_IO_Process_SpawnArgs_cwd___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_IO_Process_SpawnArgs_env___default() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_IO_Process_spawn___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_process_spawn(x_1, x_2);
return x_3;
}
}
lean_object* l_IO_Process_Child_wait___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_io_process_child_wait(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_IO_FS_Handle_getLine___at_IO_Process_output___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_prim_handle_get_line(x_1, x_2);
return x_3;
}
}
lean_object* l_IO_FS_Handle_readToEnd_read___at_IO_Process_output___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_io_prim_handle_get_line(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_4, 0);
x_7 = lean_ctor_get(x_4, 1);
x_8 = lean_string_length(x_6);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; 
lean_free_object(x_4);
x_11 = lean_string_append(x_2, x_6);
lean_dec(x_6);
x_2 = x_11;
x_3 = x_7;
goto _start;
}
else
{
lean_dec(x_6);
lean_ctor_set(x_4, 0, x_2);
return x_4;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_4, 0);
x_14 = lean_ctor_get(x_4, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_4);
x_15 = lean_string_length(x_13);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_nat_dec_eq(x_15, x_16);
lean_dec(x_15);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_string_append(x_2, x_13);
lean_dec(x_13);
x_2 = x_18;
x_3 = x_14;
goto _start;
}
else
{
lean_object* x_20; 
lean_dec(x_13);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_2);
lean_ctor_set(x_20, 1, x_14);
return x_20;
}
}
}
else
{
uint8_t x_21; 
lean_dec(x_2);
x_21 = !lean_is_exclusive(x_4);
if (x_21 == 0)
{
return x_4;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_4, 0);
x_23 = lean_ctor_get(x_4, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_4);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_IO_ofExcept___at_IO_Process_output___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_io_error_to_string(x_3);
x_5 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_5, 0, x_4);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_2);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_2);
return x_8;
}
}
}
lean_object* l_IO_Process_output(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = !lean_is_exclusive(x_4);
if (x_5 == 0)
{
uint8_t x_6; lean_object* x_7; 
x_6 = 0;
lean_ctor_set_uint8(x_4, 1, x_6);
lean_ctor_set_uint8(x_4, 2, x_6);
lean_inc(x_4);
x_7 = lean_io_process_spawn(x_1, x_2);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
x_11 = lean_mk_string("");
lean_inc(x_11);
x_12 = lean_alloc_closure((void*)(l_IO_FS_Handle_readToEnd_read___at_IO_Process_output___spec__1___boxed), 3, 2);
lean_closure_set(x_12, 0, x_10);
lean_closure_set(x_12, 1, x_11);
x_13 = l_Task_Priority_dedicated;
x_14 = lean_io_as_task(x_12, x_13, x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_8, 2);
lean_inc(x_17);
x_18 = l_IO_FS_Handle_readToEnd_read___at_IO_Process_output___spec__1(x_17, x_11, x_16);
lean_dec(x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_io_process_child_wait(x_4, x_8, x_20);
lean_dec(x_8);
lean_dec(x_4);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_task_get_own(x_15);
x_25 = l_IO_ofExcept___at_IO_Process_output___spec__3(x_24, x_23);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; uint32_t x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_19);
x_29 = lean_unbox_uint32(x_22);
lean_dec(x_22);
lean_ctor_set_uint32(x_28, sizeof(void*)*2, x_29);
lean_ctor_set(x_25, 0, x_28);
return x_25;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint32_t x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_25, 0);
x_31 = lean_ctor_get(x_25, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_25);
x_32 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_19);
x_33 = lean_unbox_uint32(x_22);
lean_dec(x_22);
lean_ctor_set_uint32(x_32, sizeof(void*)*2, x_33);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_31);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_22);
lean_dec(x_19);
x_35 = !lean_is_exclusive(x_25);
if (x_35 == 0)
{
return x_25;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_25, 0);
x_37 = lean_ctor_get(x_25, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_25);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_19);
lean_dec(x_15);
x_39 = !lean_is_exclusive(x_21);
if (x_39 == 0)
{
return x_21;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_21, 0);
x_41 = lean_ctor_get(x_21, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_21);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_4);
x_43 = !lean_is_exclusive(x_18);
if (x_43 == 0)
{
return x_18;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_18, 0);
x_45 = lean_ctor_get(x_18, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_18);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_4);
x_47 = !lean_is_exclusive(x_14);
if (x_47 == 0)
{
return x_14;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_14, 0);
x_49 = lean_ctor_get(x_14, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_14);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_4);
x_51 = !lean_is_exclusive(x_7);
if (x_51 == 0)
{
return x_7;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_7, 0);
x_53 = lean_ctor_get(x_7, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_7);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
uint8_t x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; 
x_55 = lean_ctor_get_uint8(x_4, 0);
lean_dec(x_4);
x_56 = 0;
x_57 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_57, 0, x_55);
lean_ctor_set_uint8(x_57, 1, x_56);
lean_ctor_set_uint8(x_57, 2, x_56);
lean_inc(x_57);
lean_ctor_set(x_1, 0, x_57);
x_58 = lean_io_process_spawn(x_1, x_2);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
x_62 = lean_mk_string("");
lean_inc(x_62);
x_63 = lean_alloc_closure((void*)(l_IO_FS_Handle_readToEnd_read___at_IO_Process_output___spec__1___boxed), 3, 2);
lean_closure_set(x_63, 0, x_61);
lean_closure_set(x_63, 1, x_62);
x_64 = l_Task_Priority_dedicated;
x_65 = lean_io_as_task(x_63, x_64, x_60);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = lean_ctor_get(x_59, 2);
lean_inc(x_68);
x_69 = l_IO_FS_Handle_readToEnd_read___at_IO_Process_output___spec__1(x_68, x_62, x_67);
lean_dec(x_68);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
x_72 = lean_io_process_child_wait(x_57, x_59, x_71);
lean_dec(x_59);
lean_dec(x_57);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_task_get_own(x_66);
x_76 = l_IO_ofExcept___at_IO_Process_output___spec__3(x_75, x_74);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint32_t x_81; lean_object* x_82; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_79 = x_76;
} else {
 lean_dec_ref(x_76);
 x_79 = lean_box(0);
}
x_80 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_70);
x_81 = lean_unbox_uint32(x_73);
lean_dec(x_73);
lean_ctor_set_uint32(x_80, sizeof(void*)*2, x_81);
if (lean_is_scalar(x_79)) {
 x_82 = lean_alloc_ctor(0, 2, 0);
} else {
 x_82 = x_79;
}
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_78);
return x_82;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_73);
lean_dec(x_70);
x_83 = lean_ctor_get(x_76, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_76, 1);
lean_inc(x_84);
if (lean_is_exclusive(x_76)) {
 lean_ctor_release(x_76, 0);
 lean_ctor_release(x_76, 1);
 x_85 = x_76;
} else {
 lean_dec_ref(x_76);
 x_85 = lean_box(0);
}
if (lean_is_scalar(x_85)) {
 x_86 = lean_alloc_ctor(1, 2, 0);
} else {
 x_86 = x_85;
}
lean_ctor_set(x_86, 0, x_83);
lean_ctor_set(x_86, 1, x_84);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_70);
lean_dec(x_66);
x_87 = lean_ctor_get(x_72, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_72, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_89 = x_72;
} else {
 lean_dec_ref(x_72);
 x_89 = lean_box(0);
}
if (lean_is_scalar(x_89)) {
 x_90 = lean_alloc_ctor(1, 2, 0);
} else {
 x_90 = x_89;
}
lean_ctor_set(x_90, 0, x_87);
lean_ctor_set(x_90, 1, x_88);
return x_90;
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_66);
lean_dec(x_59);
lean_dec(x_57);
x_91 = lean_ctor_get(x_69, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_69, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_69)) {
 lean_ctor_release(x_69, 0);
 lean_ctor_release(x_69, 1);
 x_93 = x_69;
} else {
 lean_dec_ref(x_69);
 x_93 = lean_box(0);
}
if (lean_is_scalar(x_93)) {
 x_94 = lean_alloc_ctor(1, 2, 0);
} else {
 x_94 = x_93;
}
lean_ctor_set(x_94, 0, x_91);
lean_ctor_set(x_94, 1, x_92);
return x_94;
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_62);
lean_dec(x_59);
lean_dec(x_57);
x_95 = lean_ctor_get(x_65, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_65, 1);
lean_inc(x_96);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_97 = x_65;
} else {
 lean_dec_ref(x_65);
 x_97 = lean_box(0);
}
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(1, 2, 0);
} else {
 x_98 = x_97;
}
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_96);
return x_98;
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_57);
x_99 = lean_ctor_get(x_58, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_58, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_101 = x_58;
} else {
 lean_dec_ref(x_58);
 x_101 = lean_box(0);
}
if (lean_is_scalar(x_101)) {
 x_102 = lean_alloc_ctor(1, 2, 0);
} else {
 x_102 = x_101;
}
lean_ctor_set(x_102, 0, x_99);
lean_ctor_set(x_102, 1, x_100);
return x_102;
}
}
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; lean_object* x_109; uint8_t x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_103 = lean_ctor_get(x_1, 0);
x_104 = lean_ctor_get(x_1, 1);
x_105 = lean_ctor_get(x_1, 2);
x_106 = lean_ctor_get(x_1, 3);
x_107 = lean_ctor_get(x_1, 4);
lean_inc(x_107);
lean_inc(x_106);
lean_inc(x_105);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_1);
x_108 = lean_ctor_get_uint8(x_103, 0);
if (lean_is_exclusive(x_103)) {
 x_109 = x_103;
} else {
 lean_dec_ref(x_103);
 x_109 = lean_box(0);
}
x_110 = 0;
if (lean_is_scalar(x_109)) {
 x_111 = lean_alloc_ctor(0, 0, 3);
} else {
 x_111 = x_109;
}
lean_ctor_set_uint8(x_111, 0, x_108);
lean_ctor_set_uint8(x_111, 1, x_110);
lean_ctor_set_uint8(x_111, 2, x_110);
lean_inc(x_111);
x_112 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_104);
lean_ctor_set(x_112, 2, x_105);
lean_ctor_set(x_112, 3, x_106);
lean_ctor_set(x_112, 4, x_107);
x_113 = lean_io_process_spawn(x_112, x_2);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_113, 1);
lean_inc(x_115);
lean_dec(x_113);
x_116 = lean_ctor_get(x_114, 1);
lean_inc(x_116);
x_117 = lean_mk_string("");
lean_inc(x_117);
x_118 = lean_alloc_closure((void*)(l_IO_FS_Handle_readToEnd_read___at_IO_Process_output___spec__1___boxed), 3, 2);
lean_closure_set(x_118, 0, x_116);
lean_closure_set(x_118, 1, x_117);
x_119 = l_Task_Priority_dedicated;
x_120 = lean_io_as_task(x_118, x_119, x_115);
if (lean_obj_tag(x_120) == 0)
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_123 = lean_ctor_get(x_114, 2);
lean_inc(x_123);
x_124 = l_IO_FS_Handle_readToEnd_read___at_IO_Process_output___spec__1(x_123, x_117, x_122);
lean_dec(x_123);
if (lean_obj_tag(x_124) == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_124, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_124, 1);
lean_inc(x_126);
lean_dec(x_124);
x_127 = lean_io_process_child_wait(x_111, x_114, x_126);
lean_dec(x_114);
lean_dec(x_111);
if (lean_obj_tag(x_127) == 0)
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
lean_dec(x_127);
x_130 = lean_task_get_own(x_121);
x_131 = l_IO_ofExcept___at_IO_Process_output___spec__3(x_130, x_129);
if (lean_obj_tag(x_131) == 0)
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; uint32_t x_136; lean_object* x_137; 
x_132 = lean_ctor_get(x_131, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_131, 1);
lean_inc(x_133);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 x_134 = x_131;
} else {
 lean_dec_ref(x_131);
 x_134 = lean_box(0);
}
x_135 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_135, 0, x_132);
lean_ctor_set(x_135, 1, x_125);
x_136 = lean_unbox_uint32(x_128);
lean_dec(x_128);
lean_ctor_set_uint32(x_135, sizeof(void*)*2, x_136);
if (lean_is_scalar(x_134)) {
 x_137 = lean_alloc_ctor(0, 2, 0);
} else {
 x_137 = x_134;
}
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_133);
return x_137;
}
else
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
lean_dec(x_128);
lean_dec(x_125);
x_138 = lean_ctor_get(x_131, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_131, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 x_140 = x_131;
} else {
 lean_dec_ref(x_131);
 x_140 = lean_box(0);
}
if (lean_is_scalar(x_140)) {
 x_141 = lean_alloc_ctor(1, 2, 0);
} else {
 x_141 = x_140;
}
lean_ctor_set(x_141, 0, x_138);
lean_ctor_set(x_141, 1, x_139);
return x_141;
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_125);
lean_dec(x_121);
x_142 = lean_ctor_get(x_127, 0);
lean_inc(x_142);
x_143 = lean_ctor_get(x_127, 1);
lean_inc(x_143);
if (lean_is_exclusive(x_127)) {
 lean_ctor_release(x_127, 0);
 lean_ctor_release(x_127, 1);
 x_144 = x_127;
} else {
 lean_dec_ref(x_127);
 x_144 = lean_box(0);
}
if (lean_is_scalar(x_144)) {
 x_145 = lean_alloc_ctor(1, 2, 0);
} else {
 x_145 = x_144;
}
lean_ctor_set(x_145, 0, x_142);
lean_ctor_set(x_145, 1, x_143);
return x_145;
}
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
lean_dec(x_121);
lean_dec(x_114);
lean_dec(x_111);
x_146 = lean_ctor_get(x_124, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_124, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_124)) {
 lean_ctor_release(x_124, 0);
 lean_ctor_release(x_124, 1);
 x_148 = x_124;
} else {
 lean_dec_ref(x_124);
 x_148 = lean_box(0);
}
if (lean_is_scalar(x_148)) {
 x_149 = lean_alloc_ctor(1, 2, 0);
} else {
 x_149 = x_148;
}
lean_ctor_set(x_149, 0, x_146);
lean_ctor_set(x_149, 1, x_147);
return x_149;
}
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
lean_dec(x_117);
lean_dec(x_114);
lean_dec(x_111);
x_150 = lean_ctor_get(x_120, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_120, 1);
lean_inc(x_151);
if (lean_is_exclusive(x_120)) {
 lean_ctor_release(x_120, 0);
 lean_ctor_release(x_120, 1);
 x_152 = x_120;
} else {
 lean_dec_ref(x_120);
 x_152 = lean_box(0);
}
if (lean_is_scalar(x_152)) {
 x_153 = lean_alloc_ctor(1, 2, 0);
} else {
 x_153 = x_152;
}
lean_ctor_set(x_153, 0, x_150);
lean_ctor_set(x_153, 1, x_151);
return x_153;
}
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_dec(x_111);
x_154 = lean_ctor_get(x_113, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_113, 1);
lean_inc(x_155);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_156 = x_113;
} else {
 lean_dec_ref(x_113);
 x_156 = lean_box(0);
}
if (lean_is_scalar(x_156)) {
 x_157 = lean_alloc_ctor(1, 2, 0);
} else {
 x_157 = x_156;
}
lean_ctor_set(x_157, 0, x_154);
lean_ctor_set(x_157, 1, x_155);
return x_157;
}
}
}
}
lean_object* l_IO_FS_Handle_getLine___at_IO_Process_output___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_FS_Handle_getLine___at_IO_Process_output___spec__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_IO_FS_Handle_readToEnd_read___at_IO_Process_output___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Handle_readToEnd_read___at_IO_Process_output___spec__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_IO_Process_run___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
}
lean_object* l_IO_Process_run(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_1);
x_3 = l_IO_Process_output(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; uint32_t x_7; uint32_t x_8; uint8_t x_9; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get_uint32(x_5, sizeof(void*)*2);
x_8 = 0;
x_9 = x_7 == x_8;
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_5);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_mk_string("process '");
x_12 = lean_string_append(x_11, x_10);
lean_dec(x_10);
x_13 = lean_mk_string("' exited with code ");
x_14 = lean_string_append(x_12, x_13);
lean_dec(x_13);
x_15 = lean_uint32_to_nat(x_7);
x_16 = l_Nat_repr(x_15);
x_17 = lean_string_append(x_14, x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set_tag(x_3, 1);
lean_ctor_set(x_3, 0, x_18);
return x_3;
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_free_object(x_3);
lean_dec(x_1);
x_19 = lean_box(0);
x_20 = l_IO_Process_run___lambda__1(x_5, x_19, x_6);
lean_dec(x_5);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; uint32_t x_23; uint32_t x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_3, 0);
x_22 = lean_ctor_get(x_3, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_3);
x_23 = lean_ctor_get_uint32(x_21, sizeof(void*)*2);
x_24 = 0;
x_25 = x_23 == x_24;
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
lean_dec(x_21);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_mk_string("process '");
x_28 = lean_string_append(x_27, x_26);
lean_dec(x_26);
x_29 = lean_mk_string("' exited with code ");
x_30 = lean_string_append(x_28, x_29);
lean_dec(x_29);
x_31 = lean_uint32_to_nat(x_23);
x_32 = l_Nat_repr(x_31);
x_33 = lean_string_append(x_30, x_32);
lean_dec(x_32);
x_34 = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_22);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_1);
x_36 = lean_box(0);
x_37 = l_IO_Process_run___lambda__1(x_21, x_36, x_22);
lean_dec(x_21);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_3);
if (x_38 == 0)
{
return x_3;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_3, 0);
x_40 = lean_ctor_get(x_3, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_3);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
lean_object* l_IO_Process_run___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_Process_run___lambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
static uint8_t _init_l_IO_AccessRight_read___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_IO_AccessRight_write___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
static uint8_t _init_l_IO_AccessRight_execution___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
uint32_t l_IO_AccessRight_flags(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = lean_ctor_get_uint8(x_1, 0);
if (x_2 == 0)
{
uint8_t x_3; uint8_t x_4; uint32_t x_5; 
x_3 = lean_ctor_get_uint8(x_1, 1);
x_4 = lean_ctor_get_uint8(x_1, 2);
x_5 = 0;
if (x_3 == 0)
{
if (x_4 == 0)
{
uint32_t x_6; uint32_t x_7; 
x_6 = x_5 | x_5;
x_7 = x_5 | x_6;
return x_7;
}
else
{
uint32_t x_8; uint32_t x_9; uint32_t x_10; 
x_8 = 1;
x_9 = x_5 | x_8;
x_10 = x_5 | x_9;
return x_10;
}
}
else
{
uint32_t x_11; 
x_11 = 2;
if (x_4 == 0)
{
uint32_t x_12; uint32_t x_13; 
x_12 = x_11 | x_5;
x_13 = x_5 | x_12;
return x_13;
}
else
{
uint32_t x_14; uint32_t x_15; uint32_t x_16; 
x_14 = 1;
x_15 = x_11 | x_14;
x_16 = x_5 | x_15;
return x_16;
}
}
}
else
{
uint8_t x_17; uint8_t x_18; uint32_t x_19; 
x_17 = lean_ctor_get_uint8(x_1, 1);
x_18 = lean_ctor_get_uint8(x_1, 2);
x_19 = 4;
if (x_17 == 0)
{
uint32_t x_20; 
x_20 = 0;
if (x_18 == 0)
{
uint32_t x_21; uint32_t x_22; 
x_21 = x_20 | x_20;
x_22 = x_19 | x_21;
return x_22;
}
else
{
uint32_t x_23; uint32_t x_24; uint32_t x_25; 
x_23 = 1;
x_24 = x_20 | x_23;
x_25 = x_19 | x_24;
return x_25;
}
}
else
{
uint32_t x_26; 
x_26 = 2;
if (x_18 == 0)
{
uint32_t x_27; uint32_t x_28; uint32_t x_29; 
x_27 = 0;
x_28 = x_26 | x_27;
x_29 = x_19 | x_28;
return x_29;
}
else
{
uint32_t x_30; uint32_t x_31; uint32_t x_32; 
x_30 = 1;
x_31 = x_26 | x_30;
x_32 = x_19 | x_31;
return x_32;
}
}
}
}
}
lean_object* l_IO_AccessRight_flags___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = l_IO_AccessRight_flags(x_1);
lean_dec(x_1);
x_3 = lean_box_uint32(x_2);
return x_3;
}
}
static lean_object* _init_l_IO_FileRight_user___default() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_2, 0, x_1);
lean_ctor_set_uint8(x_2, 1, x_1);
lean_ctor_set_uint8(x_2, 2, x_1);
return x_2;
}
}
static lean_object* _init_l_IO_FileRight_group___default() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_2, 0, x_1);
lean_ctor_set_uint8(x_2, 1, x_1);
lean_ctor_set_uint8(x_2, 2, x_1);
return x_2;
}
}
static lean_object* _init_l_IO_FileRight_other___default() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_2, 0, x_1);
lean_ctor_set_uint8(x_2, 1, x_1);
lean_ctor_set_uint8(x_2, 2, x_1);
return x_2;
}
}
uint32_t l_IO_FileRight_flags(lean_object* x_1) {
_start:
{
lean_object* x_2; uint32_t x_3; uint32_t x_4; uint32_t x_5; lean_object* x_6; uint32_t x_7; uint32_t x_8; uint32_t x_9; lean_object* x_10; uint32_t x_11; uint32_t x_12; uint32_t x_13; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = l_IO_AccessRight_flags(x_2);
x_4 = 6;
x_5 = x_3 << x_4 % 32;
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_IO_AccessRight_flags(x_6);
x_8 = 3;
x_9 = x_7 << x_8 % 32;
x_10 = lean_ctor_get(x_1, 2);
x_11 = l_IO_AccessRight_flags(x_10);
x_12 = x_9 | x_11;
x_13 = x_5 | x_12;
return x_13;
}
}
lean_object* l_IO_FileRight_flags___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = l_IO_FileRight_flags(x_1);
lean_dec(x_1);
x_3 = lean_box_uint32(x_2);
return x_3;
}
}
lean_object* l_IO_Prim_setAccessRights___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; 
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = lean_chmod(x_1, x_4, x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_IO_setAccessRights(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; 
x_4 = l_IO_FileRight_flags(x_2);
x_5 = lean_chmod(x_1, x_4, x_3);
return x_5;
}
}
lean_object* l_IO_setAccessRights___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_setAccessRights(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_IO_instMonadLiftSTRealWorldEIO_match__1(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_internal_panic_unreachable();
}
}
lean_object* l_IO_instMonadLiftSTRealWorldEIO_match__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_IO_instMonadLiftSTRealWorldEIO_match__1(x_1, x_3);
return x_4;
}
}
lean_object* l_IO_instMonadLiftSTRealWorldEIO_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
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
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l_IO_instMonadLiftSTRealWorldEIO_match__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IO_instMonadLiftSTRealWorldEIO_match__2___rarg), 3, 0);
return x_3;
}
}
lean_object* l_IO_instMonadLiftSTRealWorldEIO___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_apply_1(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
lean_object* l_IO_instMonadLiftSTRealWorldEIO(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_IO_instMonadLiftSTRealWorldEIO___rarg), 2, 0);
return x_3;
}
}
lean_object* l_IO_mkRef___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(x_3, 0, lean_box(0));
lean_closure_set(x_3, 1, lean_box(0));
lean_closure_set(x_3, 2, x_2);
x_4 = lean_apply_2(x_1, lean_box(0), x_3);
return x_4;
}
}
lean_object* l_IO_mkRef(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_IO_mkRef___rarg), 2, 0);
return x_4;
}
}
lean_object* l_IO_mkRef___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_mkRef(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_IO_FS_Stream_ofHandle___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_io_prim_handle_put_str(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_IO_FS_Stream_ofHandle___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_prim_handle_get_line(x_1, x_2);
return x_3;
}
}
lean_object* l_IO_FS_Stream_ofHandle___elambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_io_prim_handle_write(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_IO_FS_Stream_ofHandle___elambda__4(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_io_prim_handle_read(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_IO_FS_Stream_ofHandle___elambda__5(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_prim_handle_flush(x_1, x_2);
return x_3;
}
}
lean_object* l_IO_FS_Stream_ofHandle___elambda__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_io_prim_handle_is_eof(x_1, x_2);
return x_3;
}
}
lean_object* lean_stream_of_handle(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_IO_FS_Stream_ofHandle___elambda__6___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_IO_FS_Stream_ofHandle___elambda__5___boxed), 2, 1);
lean_closure_set(x_3, 0, x_1);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_IO_FS_Stream_ofHandle___elambda__4___boxed), 3, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_IO_FS_Stream_ofHandle___elambda__3___boxed), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_IO_FS_Stream_ofHandle___elambda__2___boxed), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_IO_FS_Stream_ofHandle___elambda__1___boxed), 3, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_8, 0, x_2);
lean_ctor_set(x_8, 1, x_3);
lean_ctor_set(x_8, 2, x_4);
lean_ctor_set(x_8, 3, x_5);
lean_ctor_set(x_8, 4, x_6);
lean_ctor_set(x_8, 5, x_7);
return x_8;
}
}
lean_object* l_IO_FS_Stream_ofHandle___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Stream_ofHandle___elambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_IO_FS_Stream_ofHandle___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_FS_Stream_ofHandle___elambda__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_IO_FS_Stream_ofHandle___elambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Stream_ofHandle___elambda__3(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_IO_FS_Stream_ofHandle___elambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_IO_FS_Stream_ofHandle___elambda__4(x_1, x_4, x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_IO_FS_Stream_ofHandle___elambda__5___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_FS_Stream_ofHandle___elambda__5(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_IO_FS_Stream_ofHandle___elambda__6___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_FS_Stream_ofHandle___elambda__6(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_IO_FS_Stream_Buffer_data___default() {
_start:
{
lean_object* x_1; 
x_1 = l_ByteArray_empty;
return x_1;
}
}
static lean_object* _init_l_IO_FS_Stream_Buffer_pos___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
lean_object* l_IO_FS_Stream_ofBuffer_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_IO_FS_Stream_ofBuffer_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_Stream_ofBuffer_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_FS_Stream_ofBuffer___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_4 = lean_st_ref_take(x_1, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_string_to_utf8(x_2);
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_dec(x_5);
x_10 = lean_byte_array_size(x_7);
x_11 = lean_unsigned_to_nat(0u);
x_12 = 0;
lean_inc(x_10);
lean_inc(x_9);
x_13 = lean_byte_array_copy_slice(x_7, x_11, x_8, x_9, x_10, x_12);
lean_dec(x_7);
x_14 = lean_nat_add(x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_st_ref_set(x_1, x_15, x_6);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
lean_object* l_ByteArray_findIdx_x3f_loop___at_IO_FS_Stream_ofBuffer___elambda__2___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_byte_array_size(x_1);
x_4 = lean_nat_dec_lt(x_2, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_box(0);
return x_5;
}
else
{
uint8_t x_6; uint8_t x_7; uint8_t x_8; 
x_6 = lean_byte_array_get(x_1, x_2);
x_7 = 0;
x_8 = x_6 == x_7;
if (x_8 == 0)
{
uint8_t x_9; uint8_t x_10; 
x_9 = 10;
x_10 = x_6 == x_9;
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_2, x_11);
lean_dec(x_2);
x_2 = x_12;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_2);
return x_14;
}
}
else
{
lean_object* x_15; 
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_2);
return x_15;
}
}
}
}
lean_object* l_IO_FS_Stream_ofBuffer___elambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_st_ref_take(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = !lean_is_exclusive(x_4);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
x_9 = l_ByteArray_findIdx_x3f_loop___at_IO_FS_Stream_ofBuffer___elambda__2___spec__1(x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_byte_array_size(x_7);
x_11 = l_ByteArray_extract(x_7, x_8, x_10);
x_12 = lean_string_from_utf8_unchecked(x_11);
lean_dec(x_11);
lean_ctor_set(x_4, 1, x_10);
x_13 = lean_st_ref_set(x_1, x_4, x_5);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_dec(x_15);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_12);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
else
{
lean_object* x_18; uint8_t x_19; uint8_t x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_9, 0);
lean_inc(x_18);
lean_dec(x_9);
x_19 = lean_byte_array_get(x_7, x_18);
x_20 = 0;
x_21 = x_19 == x_20;
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_18, x_22);
lean_dec(x_18);
x_24 = l_ByteArray_extract(x_7, x_8, x_23);
x_25 = lean_string_from_utf8_unchecked(x_24);
lean_dec(x_24);
lean_ctor_set(x_4, 1, x_23);
x_26 = lean_st_ref_set(x_1, x_4, x_5);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_26, 0);
lean_dec(x_28);
lean_ctor_set(x_26, 0, x_25);
return x_26;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = l_ByteArray_extract(x_7, x_8, x_18);
x_32 = lean_string_from_utf8_unchecked(x_31);
lean_dec(x_31);
lean_ctor_set(x_4, 1, x_18);
x_33 = lean_st_ref_set(x_1, x_4, x_5);
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_33, 0);
lean_dec(x_35);
lean_ctor_set(x_33, 0, x_32);
return x_33;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_32);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_4, 0);
x_39 = lean_ctor_get(x_4, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_4);
lean_inc(x_39);
x_40 = l_ByteArray_findIdx_x3f_loop___at_IO_FS_Stream_ofBuffer___elambda__2___spec__1(x_38, x_39);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_41 = lean_byte_array_size(x_38);
x_42 = l_ByteArray_extract(x_38, x_39, x_41);
x_43 = lean_string_from_utf8_unchecked(x_42);
lean_dec(x_42);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_38);
lean_ctor_set(x_44, 1, x_41);
x_45 = lean_st_ref_set(x_1, x_44, x_5);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_43);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
else
{
lean_object* x_49; uint8_t x_50; uint8_t x_51; uint8_t x_52; 
x_49 = lean_ctor_get(x_40, 0);
lean_inc(x_49);
lean_dec(x_40);
x_50 = lean_byte_array_get(x_38, x_49);
x_51 = 0;
x_52 = x_50 == x_51;
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_53 = lean_unsigned_to_nat(1u);
x_54 = lean_nat_add(x_49, x_53);
lean_dec(x_49);
x_55 = l_ByteArray_extract(x_38, x_39, x_54);
x_56 = lean_string_from_utf8_unchecked(x_55);
lean_dec(x_55);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_38);
lean_ctor_set(x_57, 1, x_54);
x_58 = lean_st_ref_set(x_1, x_57, x_5);
x_59 = lean_ctor_get(x_58, 1);
lean_inc(x_59);
if (lean_is_exclusive(x_58)) {
 lean_ctor_release(x_58, 0);
 lean_ctor_release(x_58, 1);
 x_60 = x_58;
} else {
 lean_dec_ref(x_58);
 x_60 = lean_box(0);
}
if (lean_is_scalar(x_60)) {
 x_61 = lean_alloc_ctor(0, 2, 0);
} else {
 x_61 = x_60;
}
lean_ctor_set(x_61, 0, x_56);
lean_ctor_set(x_61, 1, x_59);
return x_61;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_62 = l_ByteArray_extract(x_38, x_39, x_49);
x_63 = lean_string_from_utf8_unchecked(x_62);
lean_dec(x_62);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_38);
lean_ctor_set(x_64, 1, x_49);
x_65 = lean_st_ref_set(x_1, x_64, x_5);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_67 = x_65;
} else {
 lean_dec_ref(x_65);
 x_67 = lean_box(0);
}
if (lean_is_scalar(x_67)) {
 x_68 = lean_alloc_ctor(0, 2, 0);
} else {
 x_68 = x_67;
}
lean_ctor_set(x_68, 0, x_63);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
}
}
}
lean_object* l_IO_FS_Stream_ofBuffer___elambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_4 = lean_st_ref_take(x_1, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_byte_array_size(x_2);
x_10 = lean_unsigned_to_nat(0u);
x_11 = 0;
lean_inc(x_9);
lean_inc(x_8);
x_12 = lean_byte_array_copy_slice(x_2, x_10, x_7, x_8, x_9, x_11);
x_13 = lean_nat_add(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_st_ref_set(x_1, x_14, x_6);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
lean_object* l_IO_FS_Stream_ofBuffer___elambda__4(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_st_ref_take(x_1, x_3);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_ctor_get(x_5, 1);
x_10 = lean_usize_to_nat(x_2);
x_11 = lean_nat_add(x_9, x_10);
lean_dec(x_10);
lean_inc(x_9);
x_12 = l_ByteArray_extract(x_8, x_9, x_11);
lean_dec(x_11);
x_13 = lean_byte_array_size(x_12);
x_14 = lean_nat_add(x_9, x_13);
lean_dec(x_13);
lean_dec(x_9);
lean_ctor_set(x_5, 1, x_14);
x_15 = lean_st_ref_set(x_1, x_5, x_6);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
lean_ctor_set(x_15, 0, x_12);
return x_15;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_12);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_20 = lean_ctor_get(x_5, 0);
x_21 = lean_ctor_get(x_5, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_5);
x_22 = lean_usize_to_nat(x_2);
x_23 = lean_nat_add(x_21, x_22);
lean_dec(x_22);
lean_inc(x_21);
x_24 = l_ByteArray_extract(x_20, x_21, x_23);
lean_dec(x_23);
x_25 = lean_byte_array_size(x_24);
x_26 = lean_nat_add(x_21, x_25);
lean_dec(x_25);
lean_dec(x_21);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_20);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_st_ref_set(x_1, x_27, x_6);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_30 = x_28;
} else {
 lean_dec_ref(x_28);
 x_30 = lean_box(0);
}
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_24);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
}
lean_object* l_IO_FS_Stream_ofBuffer___elambda__5(lean_object* x_1) {
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
lean_object* l_IO_FS_Stream_ofBuffer___elambda__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_byte_array_size(x_6);
lean_dec(x_6);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_nat_dec_le(x_7, x_8);
lean_dec(x_8);
lean_dec(x_7);
x_10 = lean_box(x_9);
lean_ctor_set(x_3, 0, x_10);
return x_3;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
x_14 = lean_byte_array_size(x_13);
lean_dec(x_13);
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = lean_nat_dec_le(x_14, x_15);
lean_dec(x_15);
lean_dec(x_14);
x_17 = lean_box(x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_12);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_3);
if (x_19 == 0)
{
return x_3;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_3, 0);
x_21 = lean_ctor_get(x_3, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_3);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
lean_object* l_IO_FS_Stream_ofBuffer___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_st_ref_get(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
lean_object* l_IO_FS_Stream_ofBuffer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_IO_FS_Stream_ofBuffer___lambda__1___boxed), 2, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_IO_FS_Stream_ofBuffer___elambda__6), 2, 1);
lean_closure_set(x_3, 0, x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_IO_FS_Stream_ofBuffer___elambda__4___boxed), 3, 1);
lean_closure_set(x_4, 0, x_1);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_IO_FS_Stream_ofBuffer___elambda__3___boxed), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_IO_FS_Stream_ofBuffer___elambda__2___boxed), 2, 1);
lean_closure_set(x_6, 0, x_1);
x_7 = lean_alloc_closure((void*)(l_IO_FS_Stream_ofBuffer___elambda__1___boxed), 3, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = lean_alloc_closure((void*)(l_IO_FS_Stream_ofBuffer___elambda__5), 1, 0);
x_9 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set(x_9, 2, x_4);
lean_ctor_set(x_9, 3, x_5);
lean_ctor_set(x_9, 4, x_6);
lean_ctor_set(x_9, 5, x_7);
return x_9;
}
}
lean_object* l_IO_FS_Stream_ofBuffer___elambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Stream_ofBuffer___elambda__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_ByteArray_findIdx_x3f_loop___at_IO_FS_Stream_ofBuffer___elambda__2___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_ByteArray_findIdx_x3f_loop___at_IO_FS_Stream_ofBuffer___elambda__2___spec__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_IO_FS_Stream_ofBuffer___elambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_FS_Stream_ofBuffer___elambda__2(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_IO_FS_Stream_ofBuffer___elambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_IO_FS_Stream_ofBuffer___elambda__3(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_IO_FS_Stream_ofBuffer___elambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_IO_FS_Stream_ofBuffer___elambda__4(x_1, x_4, x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_IO_FS_Stream_ofBuffer___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_IO_FS_Stream_ofBuffer___lambda__1(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_IO_mkRef___at_IO_FS_withIsolatedStreams___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_st_mk_ref(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_3);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
}
lean_object* l_EStateM_tryCatch___at_IO_FS_withIsolatedStreams___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_dec(x_2);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_apply_2(x_2, x_5, x_6);
return x_7;
}
}
}
lean_object* l_EStateM_tryCatch___at_IO_FS_withIsolatedStreams___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_EStateM_tryCatch___at_IO_FS_withIsolatedStreams___spec__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_setStderr___at_IO_FS_withIsolatedStreams___spec__4(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_get_set_stderr(x_1, x_2);
return x_3;
}
}
lean_object* l_IO_withStderr___at_IO_FS_withIsolatedStreams___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_get_set_stderr(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_apply_1(x_2, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_get_set_stderr(x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_8);
return x_10;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
lean_dec(x_8);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_7, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_7, 1);
lean_inc(x_20);
lean_dec(x_7);
x_21 = lean_get_set_stderr(x_5, x_20);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set_tag(x_21, 1);
lean_ctor_set(x_21, 0, x_19);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_19);
x_26 = !lean_is_exclusive(x_21);
if (x_26 == 0)
{
return x_21;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_21, 0);
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_21);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_4);
if (x_30 == 0)
{
return x_4;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_4, 0);
x_32 = lean_ctor_get(x_4, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_4);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l_IO_withStderr___at_IO_FS_withIsolatedStreams___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_withStderr___at_IO_FS_withIsolatedStreams___spec__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_setStdout___at_IO_FS_withIsolatedStreams___spec__6(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_get_set_stdout(x_1, x_2);
return x_3;
}
}
lean_object* l_IO_withStdout___at_IO_FS_withIsolatedStreams___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_get_set_stdout(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_apply_1(x_2, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_get_set_stdout(x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_8);
return x_10;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
lean_dec(x_8);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_7, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_7, 1);
lean_inc(x_20);
lean_dec(x_7);
x_21 = lean_get_set_stdout(x_5, x_20);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set_tag(x_21, 1);
lean_ctor_set(x_21, 0, x_19);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_19);
x_26 = !lean_is_exclusive(x_21);
if (x_26 == 0)
{
return x_21;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_21, 0);
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_21);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_4);
if (x_30 == 0)
{
return x_4;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_4, 0);
x_32 = lean_ctor_get(x_4, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_4);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l_IO_withStdout___at_IO_FS_withIsolatedStreams___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_withStdout___at_IO_FS_withIsolatedStreams___spec__5___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_setStdin___at_IO_FS_withIsolatedStreams___spec__8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_get_set_stdin(x_1, x_2);
return x_3;
}
}
lean_object* l_IO_withStdin___at_IO_FS_withIsolatedStreams___spec__7___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_get_set_stdin(x_1, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_apply_1(x_2, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_get_set_stdin(x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_8);
return x_10;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_dec(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8_t x_15; 
lean_dec(x_8);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_7, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_7, 1);
lean_inc(x_20);
lean_dec(x_7);
x_21 = lean_get_set_stdin(x_5, x_20);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set_tag(x_21, 1);
lean_ctor_set(x_21, 0, x_19);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_19);
x_26 = !lean_is_exclusive(x_21);
if (x_26 == 0)
{
return x_21;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_21, 0);
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_21);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_4);
if (x_30 == 0)
{
return x_4;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_4, 0);
x_32 = lean_ctor_get(x_4, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_4);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l_IO_withStdin___at_IO_FS_withIsolatedStreams___spec__7(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_withStdin___at_IO_FS_withIsolatedStreams___spec__7___rarg), 3, 0);
return x_2;
}
}
lean_object* l_IO_FS_withIsolatedStreams___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* l_IO_FS_withIsolatedStreams___rarg___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
lean_object* l_IO_FS_withIsolatedStreams___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_3 = l_ByteArray_empty;
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
lean_inc(x_5);
x_6 = l_IO_mkRef___at_IO_FS_withIsolatedStreams___spec__1(x_5, x_2);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_IO_mkRef___at_IO_FS_withIsolatedStreams___spec__1(x_5, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_IO_FS_Stream_ofBuffer(x_7);
lean_inc(x_10);
x_13 = l_IO_FS_Stream_ofBuffer(x_10);
x_14 = lean_alloc_closure((void*)(l_IO_FS_withIsolatedStreams___rarg___lambda__1), 2, 0);
x_15 = lean_alloc_closure((void*)(l_EStateM_bind___rarg), 3, 2);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_14);
x_16 = lean_alloc_closure((void*)(l_IO_FS_withIsolatedStreams___rarg___lambda__2), 2, 0);
x_17 = lean_alloc_closure((void*)(l_EStateM_tryCatch___at_IO_FS_withIsolatedStreams___spec__2___rarg), 3, 2);
lean_closure_set(x_17, 0, x_15);
lean_closure_set(x_17, 1, x_16);
lean_inc(x_13);
x_18 = lean_alloc_closure((void*)(l_IO_withStderr___at_IO_FS_withIsolatedStreams___spec__3___rarg), 3, 2);
lean_closure_set(x_18, 0, x_13);
lean_closure_set(x_18, 1, x_17);
x_19 = lean_alloc_closure((void*)(l_IO_withStdout___at_IO_FS_withIsolatedStreams___spec__5___rarg), 3, 2);
lean_closure_set(x_19, 0, x_13);
lean_closure_set(x_19, 1, x_18);
x_20 = l_IO_withStdin___at_IO_FS_withIsolatedStreams___spec__7___rarg(x_12, x_19, x_11);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_st_ref_get(x_10, x_22);
lean_dec(x_10);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
lean_dec(x_25);
x_27 = lean_string_from_utf8_unchecked(x_26);
lean_dec(x_26);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_21);
lean_ctor_set(x_23, 0, x_28);
return x_23;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_23, 0);
x_30 = lean_ctor_get(x_23, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_23);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_string_from_utf8_unchecked(x_31);
lean_dec(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_21);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_30);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_10);
x_35 = !lean_is_exclusive(x_20);
if (x_35 == 0)
{
return x_20;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_20, 0);
x_37 = lean_ctor_get(x_20, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_20);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* l_IO_FS_withIsolatedStreams(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_IO_FS_withIsolatedStreams___rarg), 2, 0);
return x_2;
}
}
lean_object* l_IO_println___at_Lean_instEval___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = 10;
x_4 = lean_string_push(x_1, x_3);
x_5 = l_IO_print___at_IO_println___spec__1(x_4, x_2);
return x_5;
}
}
lean_object* l_Lean_instEval___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
x_7 = lean_apply_1(x_1, x_6);
x_8 = l_IO_println___at_Lean_instEval___spec__1(x_7, x_4);
return x_8;
}
}
lean_object* l_Lean_instEval(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_instEval___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_instEval___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_Lean_instEval___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_IO_println___at_Lean_instEval__1___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint32_t x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_Std_Format_defWidth;
x_4 = lean_format_pretty(x_1, x_3);
x_5 = 10;
x_6 = lean_string_push(x_4, x_5);
x_7 = l_IO_print___at_IO_println___spec__1(x_6, x_2);
return x_7;
}
}
lean_object* l_Lean_instEval__1___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_apply_2(x_1, x_6, x_7);
x_9 = l_IO_println___at_Lean_instEval__1___spec__1(x_8, x_4);
return x_9;
}
}
lean_object* l_Lean_instEval__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_instEval__1___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_instEval__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_Lean_instEval__1___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Lean_instEvalUnit___rarg(uint8_t x_1, lean_object* x_2) {
_start:
{
if (x_1 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_mk_string("()");
x_4 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_4, 0, x_3);
x_5 = l_IO_println___at_Lean_instEval__1___spec__1(x_4, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_2);
return x_7;
}
}
}
lean_object* l_Lean_instEvalUnit(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_instEvalUnit___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_Lean_instEvalUnit___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_Lean_instEvalUnit___rarg(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_instEvalUnit___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_instEvalUnit(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_instEvalIO___rarg(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_box(0);
x_6 = lean_apply_2(x_2, x_5, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_alloc_closure((void*)(l_Monad_seqRight___default___rarg___lambda__1___boxed), 2, 1);
lean_closure_set(x_9, 0, x_7);
x_10 = 1;
x_11 = lean_box(x_10);
x_12 = lean_apply_3(x_1, x_9, x_11, x_8);
return x_12;
}
else
{
uint8_t x_13; 
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_6);
if (x_13 == 0)
{
return x_6;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_instEvalIO(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_instEvalIO___rarg___boxed), 4, 0);
return x_2;
}
}
lean_object* l_Lean_instEvalIO___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
lean_dec(x_3);
x_6 = l_Lean_instEvalIO___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
lean_object* l_Lean_runEval___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = 0;
x_5 = lean_box(x_4);
x_6 = lean_apply_2(x_1, x_2, x_5);
x_7 = l_IO_FS_withIsolatedStreams___rarg(x_6, x_3);
return x_7;
}
}
lean_object* l_Lean_runEval(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_runEval___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_termPrintln_x21____() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_1 = lean_box(0);
x_2 = lean_mk_string("termPrintln!__");
x_3 = lean_name_mk_string(x_1, x_2);
x_4 = lean_mk_string("andthen");
x_5 = lean_name_mk_string(x_1, x_4);
x_6 = lean_mk_string("println! ");
x_7 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = lean_mk_string("orelse");
x_9 = lean_name_mk_string(x_1, x_8);
x_10 = lean_mk_string("interpolatedStr");
x_11 = lean_name_mk_string(x_1, x_10);
x_12 = lean_mk_string("term");
x_13 = lean_name_mk_string(x_1, x_12);
x_14 = lean_unsigned_to_nat(0u);
x_15 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
lean_inc(x_15);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_17, 0, x_9);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set(x_17, 2, x_15);
x_18 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_18, 0, x_5);
lean_ctor_set(x_18, 1, x_7);
lean_ctor_set(x_18, 2, x_17);
x_19 = lean_unsigned_to_nat(1022u);
x_20 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_20, 0, x_3);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_20, 2, x_18);
return x_20;
}
}
lean_object* l_myMacro____x40_Init_System_IO___hyg_4276_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_box(0);
x_5 = lean_mk_string("termPrintln!__");
x_6 = lean_name_mk_string(x_4, x_5);
lean_inc(x_1);
x_7 = l_Lean_Syntax_isOfKind(x_1, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
lean_dec(x_1);
x_8 = lean_box(1);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_3);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_dec(x_1);
lean_inc(x_11);
x_12 = l_Lean_Syntax_getKind(x_11);
x_13 = l_Lean_interpolatedStrKind;
x_14 = lean_name_eq(x_12, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_2, 2);
lean_inc(x_18);
x_19 = lean_ctor_get(x_2, 1);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_mk_string("Lean");
x_21 = lean_name_mk_string(x_4, x_20);
x_22 = lean_mk_string("Parser");
x_23 = lean_name_mk_string(x_21, x_22);
x_24 = lean_mk_string("Term");
x_25 = lean_name_mk_string(x_23, x_24);
x_26 = lean_mk_string("paren");
lean_inc(x_25);
x_27 = lean_name_mk_string(x_25, x_26);
x_28 = lean_mk_string("(");
lean_inc(x_17);
x_29 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_29, 0, x_17);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_mk_string("null");
x_31 = lean_name_mk_string(x_4, x_30);
x_32 = lean_mk_string("app");
lean_inc(x_25);
x_33 = lean_name_mk_string(x_25, x_32);
x_34 = lean_mk_string("IO.println");
x_35 = lean_string_utf8_byte_size(x_34);
x_36 = lean_unsigned_to_nat(0u);
x_37 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
lean_ctor_set(x_37, 2, x_35);
x_38 = lean_mk_string("IO");
lean_inc(x_38);
x_39 = lean_name_mk_string(x_4, x_38);
x_40 = lean_mk_string("println");
lean_inc(x_39);
x_41 = lean_name_mk_string(x_39, x_40);
lean_inc(x_18);
lean_inc(x_41);
lean_inc(x_19);
x_42 = l_Lean_addMacroScope(x_19, x_41, x_18);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
lean_inc(x_17);
x_46 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_46, 0, x_17);
lean_ctor_set(x_46, 1, x_37);
lean_ctor_set(x_46, 2, x_42);
lean_ctor_set(x_46, 3, x_45);
x_47 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_47);
x_48 = lean_array_push(x_47, x_11);
lean_inc(x_31);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_31);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_unsigned_to_nat(2u);
x_51 = lean_mk_empty_array_with_capacity(x_50);
lean_inc(x_51);
x_52 = lean_array_push(x_51, x_46);
x_53 = lean_array_push(x_52, x_49);
lean_inc(x_33);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_33);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_mk_string("typeAscription");
x_56 = lean_name_mk_string(x_25, x_55);
x_57 = lean_mk_string(":");
lean_inc(x_17);
x_58 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_58, 0, x_17);
lean_ctor_set(x_58, 1, x_57);
x_59 = lean_string_utf8_byte_size(x_38);
x_60 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_60, 0, x_38);
lean_ctor_set(x_60, 1, x_36);
lean_ctor_set(x_60, 2, x_59);
lean_inc(x_18);
lean_inc(x_39);
lean_inc(x_19);
x_61 = l_Lean_addMacroScope(x_19, x_39, x_18);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_39);
lean_ctor_set(x_62, 1, x_43);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_43);
lean_inc(x_17);
x_64 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_64, 0, x_17);
lean_ctor_set(x_64, 1, x_60);
lean_ctor_set(x_64, 2, x_61);
lean_ctor_set(x_64, 3, x_63);
x_65 = lean_mk_string("Unit");
x_66 = lean_string_utf8_byte_size(x_65);
lean_inc(x_65);
x_67 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_36);
lean_ctor_set(x_67, 2, x_66);
x_68 = lean_name_mk_string(x_4, x_65);
lean_inc(x_68);
x_69 = l_Lean_addMacroScope(x_19, x_68, x_18);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_68);
lean_ctor_set(x_70, 1, x_43);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_43);
lean_inc(x_17);
x_72 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_72, 0, x_17);
lean_ctor_set(x_72, 1, x_67);
lean_ctor_set(x_72, 2, x_69);
lean_ctor_set(x_72, 3, x_71);
lean_inc(x_47);
x_73 = lean_array_push(x_47, x_72);
lean_inc(x_31);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_31);
lean_ctor_set(x_74, 1, x_73);
lean_inc(x_51);
x_75 = lean_array_push(x_51, x_64);
x_76 = lean_array_push(x_75, x_74);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_33);
lean_ctor_set(x_77, 1, x_76);
lean_inc(x_51);
x_78 = lean_array_push(x_51, x_58);
x_79 = lean_array_push(x_78, x_77);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_56);
lean_ctor_set(x_80, 1, x_79);
x_81 = lean_array_push(x_47, x_80);
lean_inc(x_31);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_31);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_array_push(x_51, x_54);
x_84 = lean_array_push(x_83, x_82);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_31);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_mk_string(")");
x_87 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_87, 0, x_17);
lean_ctor_set(x_87, 1, x_86);
x_88 = lean_unsigned_to_nat(3u);
x_89 = lean_mk_empty_array_with_capacity(x_88);
x_90 = lean_array_push(x_89, x_29);
x_91 = lean_array_push(x_90, x_85);
x_92 = lean_array_push(x_91, x_87);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_27);
lean_ctor_set(x_93, 1, x_92);
lean_ctor_set(x_15, 0, x_93);
return x_15;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
x_94 = lean_ctor_get(x_15, 0);
x_95 = lean_ctor_get(x_15, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_15);
x_96 = lean_ctor_get(x_2, 2);
lean_inc(x_96);
x_97 = lean_ctor_get(x_2, 1);
lean_inc(x_97);
lean_dec(x_2);
x_98 = lean_mk_string("Lean");
x_99 = lean_name_mk_string(x_4, x_98);
x_100 = lean_mk_string("Parser");
x_101 = lean_name_mk_string(x_99, x_100);
x_102 = lean_mk_string("Term");
x_103 = lean_name_mk_string(x_101, x_102);
x_104 = lean_mk_string("paren");
lean_inc(x_103);
x_105 = lean_name_mk_string(x_103, x_104);
x_106 = lean_mk_string("(");
lean_inc(x_94);
x_107 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_107, 0, x_94);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_mk_string("null");
x_109 = lean_name_mk_string(x_4, x_108);
x_110 = lean_mk_string("app");
lean_inc(x_103);
x_111 = lean_name_mk_string(x_103, x_110);
x_112 = lean_mk_string("IO.println");
x_113 = lean_string_utf8_byte_size(x_112);
x_114 = lean_unsigned_to_nat(0u);
x_115 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_115, 0, x_112);
lean_ctor_set(x_115, 1, x_114);
lean_ctor_set(x_115, 2, x_113);
x_116 = lean_mk_string("IO");
lean_inc(x_116);
x_117 = lean_name_mk_string(x_4, x_116);
x_118 = lean_mk_string("println");
lean_inc(x_117);
x_119 = lean_name_mk_string(x_117, x_118);
lean_inc(x_96);
lean_inc(x_119);
lean_inc(x_97);
x_120 = l_Lean_addMacroScope(x_97, x_119, x_96);
x_121 = lean_box(0);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_119);
lean_ctor_set(x_122, 1, x_121);
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_121);
lean_inc(x_94);
x_124 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_124, 0, x_94);
lean_ctor_set(x_124, 1, x_115);
lean_ctor_set(x_124, 2, x_120);
lean_ctor_set(x_124, 3, x_123);
x_125 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_125);
x_126 = lean_array_push(x_125, x_11);
lean_inc(x_109);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_109);
lean_ctor_set(x_127, 1, x_126);
x_128 = lean_unsigned_to_nat(2u);
x_129 = lean_mk_empty_array_with_capacity(x_128);
lean_inc(x_129);
x_130 = lean_array_push(x_129, x_124);
x_131 = lean_array_push(x_130, x_127);
lean_inc(x_111);
x_132 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_132, 0, x_111);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_mk_string("typeAscription");
x_134 = lean_name_mk_string(x_103, x_133);
x_135 = lean_mk_string(":");
lean_inc(x_94);
x_136 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_136, 0, x_94);
lean_ctor_set(x_136, 1, x_135);
x_137 = lean_string_utf8_byte_size(x_116);
x_138 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_138, 0, x_116);
lean_ctor_set(x_138, 1, x_114);
lean_ctor_set(x_138, 2, x_137);
lean_inc(x_96);
lean_inc(x_117);
lean_inc(x_97);
x_139 = l_Lean_addMacroScope(x_97, x_117, x_96);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_117);
lean_ctor_set(x_140, 1, x_121);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_140);
lean_ctor_set(x_141, 1, x_121);
lean_inc(x_94);
x_142 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_142, 0, x_94);
lean_ctor_set(x_142, 1, x_138);
lean_ctor_set(x_142, 2, x_139);
lean_ctor_set(x_142, 3, x_141);
x_143 = lean_mk_string("Unit");
x_144 = lean_string_utf8_byte_size(x_143);
lean_inc(x_143);
x_145 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_145, 0, x_143);
lean_ctor_set(x_145, 1, x_114);
lean_ctor_set(x_145, 2, x_144);
x_146 = lean_name_mk_string(x_4, x_143);
lean_inc(x_146);
x_147 = l_Lean_addMacroScope(x_97, x_146, x_96);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_146);
lean_ctor_set(x_148, 1, x_121);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_148);
lean_ctor_set(x_149, 1, x_121);
lean_inc(x_94);
x_150 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_150, 0, x_94);
lean_ctor_set(x_150, 1, x_145);
lean_ctor_set(x_150, 2, x_147);
lean_ctor_set(x_150, 3, x_149);
lean_inc(x_125);
x_151 = lean_array_push(x_125, x_150);
lean_inc(x_109);
x_152 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_152, 0, x_109);
lean_ctor_set(x_152, 1, x_151);
lean_inc(x_129);
x_153 = lean_array_push(x_129, x_142);
x_154 = lean_array_push(x_153, x_152);
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_111);
lean_ctor_set(x_155, 1, x_154);
lean_inc(x_129);
x_156 = lean_array_push(x_129, x_136);
x_157 = lean_array_push(x_156, x_155);
x_158 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_158, 0, x_134);
lean_ctor_set(x_158, 1, x_157);
x_159 = lean_array_push(x_125, x_158);
lean_inc(x_109);
x_160 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_160, 0, x_109);
lean_ctor_set(x_160, 1, x_159);
x_161 = lean_array_push(x_129, x_132);
x_162 = lean_array_push(x_161, x_160);
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_109);
lean_ctor_set(x_163, 1, x_162);
x_164 = lean_mk_string(")");
x_165 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_165, 0, x_94);
lean_ctor_set(x_165, 1, x_164);
x_166 = lean_unsigned_to_nat(3u);
x_167 = lean_mk_empty_array_with_capacity(x_166);
x_168 = lean_array_push(x_167, x_107);
x_169 = lean_array_push(x_168, x_163);
x_170 = lean_array_push(x_169, x_165);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_105);
lean_ctor_set(x_171, 1, x_170);
x_172 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_172, 0, x_171);
lean_ctor_set(x_172, 1, x_95);
return x_172;
}
}
else
{
lean_object* x_173; uint8_t x_174; 
x_173 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_71____spec__1(x_2, x_3);
x_174 = !lean_is_exclusive(x_173);
if (x_174 == 0)
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_175 = lean_ctor_get(x_173, 0);
x_176 = lean_ctor_get(x_2, 2);
lean_inc(x_176);
x_177 = lean_ctor_get(x_2, 1);
lean_inc(x_177);
lean_dec(x_2);
x_178 = lean_mk_string("Lean");
x_179 = lean_name_mk_string(x_4, x_178);
x_180 = lean_mk_string("Parser");
x_181 = lean_name_mk_string(x_179, x_180);
x_182 = lean_mk_string("Term");
x_183 = lean_name_mk_string(x_181, x_182);
x_184 = lean_mk_string("paren");
lean_inc(x_183);
x_185 = lean_name_mk_string(x_183, x_184);
x_186 = lean_mk_string("(");
lean_inc(x_175);
x_187 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_187, 0, x_175);
lean_ctor_set(x_187, 1, x_186);
x_188 = lean_mk_string("null");
x_189 = lean_name_mk_string(x_4, x_188);
x_190 = lean_mk_string("app");
lean_inc(x_183);
x_191 = lean_name_mk_string(x_183, x_190);
x_192 = lean_mk_string("IO.println");
x_193 = lean_string_utf8_byte_size(x_192);
x_194 = lean_unsigned_to_nat(0u);
x_195 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_195, 0, x_192);
lean_ctor_set(x_195, 1, x_194);
lean_ctor_set(x_195, 2, x_193);
x_196 = lean_mk_string("IO");
lean_inc(x_196);
x_197 = lean_name_mk_string(x_4, x_196);
x_198 = lean_mk_string("println");
lean_inc(x_197);
x_199 = lean_name_mk_string(x_197, x_198);
lean_inc(x_176);
lean_inc(x_199);
lean_inc(x_177);
x_200 = l_Lean_addMacroScope(x_177, x_199, x_176);
x_201 = lean_box(0);
x_202 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_202, 0, x_199);
lean_ctor_set(x_202, 1, x_201);
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_202);
lean_ctor_set(x_203, 1, x_201);
lean_inc(x_175);
x_204 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_204, 0, x_175);
lean_ctor_set(x_204, 1, x_195);
lean_ctor_set(x_204, 2, x_200);
lean_ctor_set(x_204, 3, x_203);
x_205 = lean_mk_string("termS!_");
x_206 = lean_name_mk_string(x_4, x_205);
x_207 = lean_mk_string("s!");
lean_inc(x_175);
x_208 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_208, 0, x_175);
lean_ctor_set(x_208, 1, x_207);
x_209 = lean_unsigned_to_nat(2u);
x_210 = lean_mk_empty_array_with_capacity(x_209);
lean_inc(x_210);
x_211 = lean_array_push(x_210, x_208);
x_212 = lean_array_push(x_211, x_11);
x_213 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_213, 0, x_206);
lean_ctor_set(x_213, 1, x_212);
x_214 = lean_mk_empty_array_with_capacity(x_194);
lean_inc(x_189);
x_215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_215, 0, x_189);
lean_ctor_set(x_215, 1, x_214);
lean_inc(x_210);
x_216 = lean_array_push(x_210, x_213);
x_217 = lean_array_push(x_216, x_215);
lean_inc(x_189);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_189);
lean_ctor_set(x_218, 1, x_217);
x_219 = lean_mk_string(")");
lean_inc(x_175);
x_220 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_220, 0, x_175);
lean_ctor_set(x_220, 1, x_219);
x_221 = lean_unsigned_to_nat(3u);
x_222 = lean_mk_empty_array_with_capacity(x_221);
x_223 = lean_array_push(x_222, x_187);
lean_inc(x_223);
x_224 = lean_array_push(x_223, x_218);
lean_inc(x_220);
x_225 = lean_array_push(x_224, x_220);
lean_inc(x_185);
x_226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_226, 0, x_185);
lean_ctor_set(x_226, 1, x_225);
x_227 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_227);
x_228 = lean_array_push(x_227, x_226);
lean_inc(x_189);
x_229 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_229, 0, x_189);
lean_ctor_set(x_229, 1, x_228);
lean_inc(x_210);
x_230 = lean_array_push(x_210, x_204);
x_231 = lean_array_push(x_230, x_229);
lean_inc(x_191);
x_232 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_232, 0, x_191);
lean_ctor_set(x_232, 1, x_231);
x_233 = lean_mk_string("typeAscription");
x_234 = lean_name_mk_string(x_183, x_233);
x_235 = lean_mk_string(":");
lean_inc(x_175);
x_236 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_236, 0, x_175);
lean_ctor_set(x_236, 1, x_235);
x_237 = lean_string_utf8_byte_size(x_196);
x_238 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_238, 0, x_196);
lean_ctor_set(x_238, 1, x_194);
lean_ctor_set(x_238, 2, x_237);
lean_inc(x_176);
lean_inc(x_197);
lean_inc(x_177);
x_239 = l_Lean_addMacroScope(x_177, x_197, x_176);
x_240 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_240, 0, x_197);
lean_ctor_set(x_240, 1, x_201);
x_241 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_241, 0, x_240);
lean_ctor_set(x_241, 1, x_201);
lean_inc(x_175);
x_242 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_242, 0, x_175);
lean_ctor_set(x_242, 1, x_238);
lean_ctor_set(x_242, 2, x_239);
lean_ctor_set(x_242, 3, x_241);
x_243 = lean_mk_string("Unit");
x_244 = lean_string_utf8_byte_size(x_243);
lean_inc(x_243);
x_245 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_245, 0, x_243);
lean_ctor_set(x_245, 1, x_194);
lean_ctor_set(x_245, 2, x_244);
x_246 = lean_name_mk_string(x_4, x_243);
lean_inc(x_246);
x_247 = l_Lean_addMacroScope(x_177, x_246, x_176);
x_248 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_248, 0, x_246);
lean_ctor_set(x_248, 1, x_201);
x_249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_201);
x_250 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_250, 0, x_175);
lean_ctor_set(x_250, 1, x_245);
lean_ctor_set(x_250, 2, x_247);
lean_ctor_set(x_250, 3, x_249);
lean_inc(x_227);
x_251 = lean_array_push(x_227, x_250);
lean_inc(x_189);
x_252 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_252, 0, x_189);
lean_ctor_set(x_252, 1, x_251);
lean_inc(x_210);
x_253 = lean_array_push(x_210, x_242);
x_254 = lean_array_push(x_253, x_252);
x_255 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_255, 0, x_191);
lean_ctor_set(x_255, 1, x_254);
lean_inc(x_210);
x_256 = lean_array_push(x_210, x_236);
x_257 = lean_array_push(x_256, x_255);
x_258 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_258, 0, x_234);
lean_ctor_set(x_258, 1, x_257);
x_259 = lean_array_push(x_227, x_258);
lean_inc(x_189);
x_260 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_260, 0, x_189);
lean_ctor_set(x_260, 1, x_259);
x_261 = lean_array_push(x_210, x_232);
x_262 = lean_array_push(x_261, x_260);
x_263 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_263, 0, x_189);
lean_ctor_set(x_263, 1, x_262);
x_264 = lean_array_push(x_223, x_263);
x_265 = lean_array_push(x_264, x_220);
x_266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_266, 0, x_185);
lean_ctor_set(x_266, 1, x_265);
lean_ctor_set(x_173, 0, x_266);
return x_173;
}
else
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; 
x_267 = lean_ctor_get(x_173, 0);
x_268 = lean_ctor_get(x_173, 1);
lean_inc(x_268);
lean_inc(x_267);
lean_dec(x_173);
x_269 = lean_ctor_get(x_2, 2);
lean_inc(x_269);
x_270 = lean_ctor_get(x_2, 1);
lean_inc(x_270);
lean_dec(x_2);
x_271 = lean_mk_string("Lean");
x_272 = lean_name_mk_string(x_4, x_271);
x_273 = lean_mk_string("Parser");
x_274 = lean_name_mk_string(x_272, x_273);
x_275 = lean_mk_string("Term");
x_276 = lean_name_mk_string(x_274, x_275);
x_277 = lean_mk_string("paren");
lean_inc(x_276);
x_278 = lean_name_mk_string(x_276, x_277);
x_279 = lean_mk_string("(");
lean_inc(x_267);
x_280 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_280, 0, x_267);
lean_ctor_set(x_280, 1, x_279);
x_281 = lean_mk_string("null");
x_282 = lean_name_mk_string(x_4, x_281);
x_283 = lean_mk_string("app");
lean_inc(x_276);
x_284 = lean_name_mk_string(x_276, x_283);
x_285 = lean_mk_string("IO.println");
x_286 = lean_string_utf8_byte_size(x_285);
x_287 = lean_unsigned_to_nat(0u);
x_288 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_288, 0, x_285);
lean_ctor_set(x_288, 1, x_287);
lean_ctor_set(x_288, 2, x_286);
x_289 = lean_mk_string("IO");
lean_inc(x_289);
x_290 = lean_name_mk_string(x_4, x_289);
x_291 = lean_mk_string("println");
lean_inc(x_290);
x_292 = lean_name_mk_string(x_290, x_291);
lean_inc(x_269);
lean_inc(x_292);
lean_inc(x_270);
x_293 = l_Lean_addMacroScope(x_270, x_292, x_269);
x_294 = lean_box(0);
x_295 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_295, 0, x_292);
lean_ctor_set(x_295, 1, x_294);
x_296 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_296, 0, x_295);
lean_ctor_set(x_296, 1, x_294);
lean_inc(x_267);
x_297 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_297, 0, x_267);
lean_ctor_set(x_297, 1, x_288);
lean_ctor_set(x_297, 2, x_293);
lean_ctor_set(x_297, 3, x_296);
x_298 = lean_mk_string("termS!_");
x_299 = lean_name_mk_string(x_4, x_298);
x_300 = lean_mk_string("s!");
lean_inc(x_267);
x_301 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_301, 0, x_267);
lean_ctor_set(x_301, 1, x_300);
x_302 = lean_unsigned_to_nat(2u);
x_303 = lean_mk_empty_array_with_capacity(x_302);
lean_inc(x_303);
x_304 = lean_array_push(x_303, x_301);
x_305 = lean_array_push(x_304, x_11);
x_306 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_306, 0, x_299);
lean_ctor_set(x_306, 1, x_305);
x_307 = lean_mk_empty_array_with_capacity(x_287);
lean_inc(x_282);
x_308 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_308, 0, x_282);
lean_ctor_set(x_308, 1, x_307);
lean_inc(x_303);
x_309 = lean_array_push(x_303, x_306);
x_310 = lean_array_push(x_309, x_308);
lean_inc(x_282);
x_311 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_311, 0, x_282);
lean_ctor_set(x_311, 1, x_310);
x_312 = lean_mk_string(")");
lean_inc(x_267);
x_313 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_313, 0, x_267);
lean_ctor_set(x_313, 1, x_312);
x_314 = lean_unsigned_to_nat(3u);
x_315 = lean_mk_empty_array_with_capacity(x_314);
x_316 = lean_array_push(x_315, x_280);
lean_inc(x_316);
x_317 = lean_array_push(x_316, x_311);
lean_inc(x_313);
x_318 = lean_array_push(x_317, x_313);
lean_inc(x_278);
x_319 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_319, 0, x_278);
lean_ctor_set(x_319, 1, x_318);
x_320 = lean_mk_empty_array_with_capacity(x_10);
lean_inc(x_320);
x_321 = lean_array_push(x_320, x_319);
lean_inc(x_282);
x_322 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_322, 0, x_282);
lean_ctor_set(x_322, 1, x_321);
lean_inc(x_303);
x_323 = lean_array_push(x_303, x_297);
x_324 = lean_array_push(x_323, x_322);
lean_inc(x_284);
x_325 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_325, 0, x_284);
lean_ctor_set(x_325, 1, x_324);
x_326 = lean_mk_string("typeAscription");
x_327 = lean_name_mk_string(x_276, x_326);
x_328 = lean_mk_string(":");
lean_inc(x_267);
x_329 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_329, 0, x_267);
lean_ctor_set(x_329, 1, x_328);
x_330 = lean_string_utf8_byte_size(x_289);
x_331 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_331, 0, x_289);
lean_ctor_set(x_331, 1, x_287);
lean_ctor_set(x_331, 2, x_330);
lean_inc(x_269);
lean_inc(x_290);
lean_inc(x_270);
x_332 = l_Lean_addMacroScope(x_270, x_290, x_269);
x_333 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_333, 0, x_290);
lean_ctor_set(x_333, 1, x_294);
x_334 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_334, 0, x_333);
lean_ctor_set(x_334, 1, x_294);
lean_inc(x_267);
x_335 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_335, 0, x_267);
lean_ctor_set(x_335, 1, x_331);
lean_ctor_set(x_335, 2, x_332);
lean_ctor_set(x_335, 3, x_334);
x_336 = lean_mk_string("Unit");
x_337 = lean_string_utf8_byte_size(x_336);
lean_inc(x_336);
x_338 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_338, 0, x_336);
lean_ctor_set(x_338, 1, x_287);
lean_ctor_set(x_338, 2, x_337);
x_339 = lean_name_mk_string(x_4, x_336);
lean_inc(x_339);
x_340 = l_Lean_addMacroScope(x_270, x_339, x_269);
x_341 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_341, 0, x_339);
lean_ctor_set(x_341, 1, x_294);
x_342 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_342, 0, x_341);
lean_ctor_set(x_342, 1, x_294);
x_343 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_343, 0, x_267);
lean_ctor_set(x_343, 1, x_338);
lean_ctor_set(x_343, 2, x_340);
lean_ctor_set(x_343, 3, x_342);
lean_inc(x_320);
x_344 = lean_array_push(x_320, x_343);
lean_inc(x_282);
x_345 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_345, 0, x_282);
lean_ctor_set(x_345, 1, x_344);
lean_inc(x_303);
x_346 = lean_array_push(x_303, x_335);
x_347 = lean_array_push(x_346, x_345);
x_348 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_348, 0, x_284);
lean_ctor_set(x_348, 1, x_347);
lean_inc(x_303);
x_349 = lean_array_push(x_303, x_329);
x_350 = lean_array_push(x_349, x_348);
x_351 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_351, 0, x_327);
lean_ctor_set(x_351, 1, x_350);
x_352 = lean_array_push(x_320, x_351);
lean_inc(x_282);
x_353 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_353, 0, x_282);
lean_ctor_set(x_353, 1, x_352);
x_354 = lean_array_push(x_303, x_325);
x_355 = lean_array_push(x_354, x_353);
x_356 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_356, 0, x_282);
lean_ctor_set(x_356, 1, x_355);
x_357 = lean_array_push(x_316, x_356);
x_358 = lean_array_push(x_357, x_313);
x_359 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_359, 0, x_278);
lean_ctor_set(x_359, 1, x_358);
x_360 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_360, 0, x_359);
lean_ctor_set(x_360, 1, x_268);
return x_360;
}
}
}
}
}
lean_object* initialize_Init_Control_EState(lean_object*);
lean_object* initialize_Init_Control_Reader(lean_object*);
lean_object* initialize_Init_Data_String(lean_object*);
lean_object* initialize_Init_Data_ByteArray(lean_object*);
lean_object* initialize_Init_System_IOError(lean_object*);
lean_object* initialize_Init_System_FilePath(lean_object*);
lean_object* initialize_Init_System_ST(lean_object*);
lean_object* initialize_Init_Data_ToString_Macro(lean_object*);
lean_object* initialize_Init_Data_Ord(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_System_IO(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_EState(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Reader(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ByteArray(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_IOError(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_FilePath(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_ST(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Ord(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_IO_FS_instReprDirEntry = _init_l_IO_FS_instReprDirEntry();
lean_mark_persistent(l_IO_FS_instReprDirEntry);
l_IO_FS_instReprFileType = _init_l_IO_FS_instReprFileType();
lean_mark_persistent(l_IO_FS_instReprFileType);
l_IO_FS_instBEqFileType = _init_l_IO_FS_instBEqFileType();
lean_mark_persistent(l_IO_FS_instBEqFileType);
l_IO_FS_instReprSystemTime = _init_l_IO_FS_instReprSystemTime();
lean_mark_persistent(l_IO_FS_instReprSystemTime);
l_IO_FS_instBEqSystemTime = _init_l_IO_FS_instBEqSystemTime();
lean_mark_persistent(l_IO_FS_instBEqSystemTime);
l_IO_FS_instOrdSystemTime = _init_l_IO_FS_instOrdSystemTime();
lean_mark_persistent(l_IO_FS_instOrdSystemTime);
l_IO_FS_instInhabitedSystemTime = _init_l_IO_FS_instInhabitedSystemTime();
lean_mark_persistent(l_IO_FS_instInhabitedSystemTime);
l_IO_FS_instLTSystemTime = _init_l_IO_FS_instLTSystemTime();
lean_mark_persistent(l_IO_FS_instLTSystemTime);
l_IO_FS_instLESystemTime = _init_l_IO_FS_instLESystemTime();
lean_mark_persistent(l_IO_FS_instLESystemTime);
l_IO_FS_instReprMetadata = _init_l_IO_FS_instReprMetadata();
lean_mark_persistent(l_IO_FS_instReprMetadata);
l_IO_Process_StdioConfig_stdin___default = _init_l_IO_Process_StdioConfig_stdin___default();
l_IO_Process_StdioConfig_stdout___default = _init_l_IO_Process_StdioConfig_stdout___default();
l_IO_Process_StdioConfig_stderr___default = _init_l_IO_Process_StdioConfig_stderr___default();
l_IO_Process_SpawnArgs_args___default = _init_l_IO_Process_SpawnArgs_args___default();
lean_mark_persistent(l_IO_Process_SpawnArgs_args___default);
l_IO_Process_SpawnArgs_cwd___default = _init_l_IO_Process_SpawnArgs_cwd___default();
lean_mark_persistent(l_IO_Process_SpawnArgs_cwd___default);
l_IO_Process_SpawnArgs_env___default = _init_l_IO_Process_SpawnArgs_env___default();
lean_mark_persistent(l_IO_Process_SpawnArgs_env___default);
l_IO_AccessRight_read___default = _init_l_IO_AccessRight_read___default();
l_IO_AccessRight_write___default = _init_l_IO_AccessRight_write___default();
l_IO_AccessRight_execution___default = _init_l_IO_AccessRight_execution___default();
l_IO_FileRight_user___default = _init_l_IO_FileRight_user___default();
lean_mark_persistent(l_IO_FileRight_user___default);
l_IO_FileRight_group___default = _init_l_IO_FileRight_group___default();
lean_mark_persistent(l_IO_FileRight_group___default);
l_IO_FileRight_other___default = _init_l_IO_FileRight_other___default();
lean_mark_persistent(l_IO_FileRight_other___default);
l_IO_FS_Stream_Buffer_data___default = _init_l_IO_FS_Stream_Buffer_data___default();
lean_mark_persistent(l_IO_FS_Stream_Buffer_data___default);
l_IO_FS_Stream_Buffer_pos___default = _init_l_IO_FS_Stream_Buffer_pos___default();
lean_mark_persistent(l_IO_FS_Stream_Buffer_pos___default);
l_termPrintln_x21____ = _init_l_termPrintln_x21____();
lean_mark_persistent(l_termPrintln_x21____);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
