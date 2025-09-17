// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMPTW_TOP__SYMS_H_
#define VERILATED_VMPTW_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vmptw_top.h"

// INCLUDE MODULE CLASSES
#include "Vmptw_top___024root.h"
#include "Vmptw_top___024unit.h"
#include "Vmptw_top_memory_read_stage__pi8.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vmptw_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmptw_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmptw_top___024root            TOP;
    Vmptw_top_memory_read_stage__pi8 TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    Vmptw_top_memory_read_stage__pi8 TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    Vmptw_top_memory_read_stage__pi8 TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    Vmptw_top_memory_read_stage__pi8 TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    Vmptw_top_memory_read_stage__pi8 TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u;

    // CONSTRUCTORS
    Vmptw_top__Syms(VerilatedContext* contextp, const char* namep, Vmptw_top* modelp);
    ~Vmptw_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
