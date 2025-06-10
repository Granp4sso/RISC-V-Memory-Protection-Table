// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VMPTW_TOP__SYMS_H_
#define _VMPTW_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vmptw_top.h"
#include "Vmptw_top___024unit.h"
#include "Vmptw_top_memory_read_stage__pi5.h"

// SYMS CLASS
class Vmptw_top__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vmptw_top*                     TOPp;
    Vmptw_top_memory_read_stage__pi5 TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    Vmptw_top_memory_read_stage__pi5 TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    Vmptw_top_memory_read_stage__pi5 TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    Vmptw_top_memory_read_stage__pi5 TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u;
    
    // CREATORS
    Vmptw_top__Syms(Vmptw_top* topp, const char* namep);
    ~Vmptw_top__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
