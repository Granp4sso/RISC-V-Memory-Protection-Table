// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top__pch.h"
#include "Vmptw_top__Syms.h"
#include "Vmptw_top_memory_read_stage__pi8.h"

void Vmptw_top_memory_read_stage__pi8___ctor_var_reset(Vmptw_top_memory_read_stage__pi8* vlSelf);

Vmptw_top_memory_read_stage__pi8::Vmptw_top_memory_read_stage__pi8(Vmptw_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmptw_top_memory_read_stage__pi8___ctor_var_reset(this);
}

void Vmptw_top_memory_read_stage__pi8::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmptw_top_memory_read_stage__pi8::~Vmptw_top_memory_read_stage__pi8() {
}
