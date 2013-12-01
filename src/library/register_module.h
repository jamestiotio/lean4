/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "util/script_state.h"
#include "library/kernel_bindings.h"
#include "library/io_state.h"
#include "library/type_inferer.h"
#include "library/hidden_defs.h"

namespace lean {
inline void open_core_module(lua_State * L) {
    open_kernel_module(L);
    open_io_state(L);
    open_type_inferer(L);
    open_hidden_defs(L);
}
inline void register_core_module() {
    script_state::register_module(open_core_module);
}
}
