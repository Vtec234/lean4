/*
Copyright (c) 2021 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Wojciech Nawrocki

This file exposes functions for using Lean as a library from WebAssembly. */

#ifndef LEAN_EMSCRIPTEN
#error "This file should only be included in the Emscripten build."
#endif

#include <emscripten.h>

#include <lean/object.h>
#include "util/io.h"
#include "initialize/init.h"

using namespace lean;

static lean::initializer * g_init = nullptr;

extern "C" object* lean_init_search_path(object* opt_path, object* w);
EMSCRIPTEN_KEEPALIVE extern "C" void lean_wasm_initialize(const char* searchPath) {
    g_init = new lean::initializer();
    try {
        get_io_scalar_result<unsigned>(lean_init_search_path(mk_option_some(mk_string(searchPath)), io_mk_world()));
    } catch (lean::throwable & ex) {
        std::cerr << "init_search_path error: " << ex.what() << std::endl;
    }
}

extern "C" object* lean_wasm_test_lean(object* w);
EMSCRIPTEN_KEEPALIVE extern "C" void lean_wasm_testStuff() {
    try {
        get_io_scalar_result<unsigned>(lean_wasm_test_lean(io_mk_world()));
    } catch (lean::throwable & ex) {
        std::cerr << "test_lean error: " << ex.what() << std::endl;
    }
}

extern "C" object* lean_wasm_elab_header(obj_arg s, object* w);
EMSCRIPTEN_KEEPALIVE extern "C" void lean_wasm_import(const char* hdr) {
    try {
        get_io_scalar_result<unsigned>(lean_wasm_elab_header(mk_string(hdr), io_mk_world()));
    } catch (lean::throwable & ex) {
        std::cerr << "elab_header error: " << ex.what() << std::endl;
    }
}

EMSCRIPTEN_KEEPALIVE extern "C" void lean_wasm_finalize() {
    delete g_init;
}