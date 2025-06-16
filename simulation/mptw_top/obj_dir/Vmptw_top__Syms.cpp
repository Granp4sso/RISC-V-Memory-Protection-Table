// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmptw_top__Syms.h"
#include "Vmptw_top.h"
#include "Vmptw_top___024unit.h"
#include "Vmptw_top_memory_read_stage__pi7.h"



// FUNCTIONS
Vmptw_top__Syms::Vmptw_top__Syms(Vmptw_top* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u(Verilated::catName(topp->name(), "mptw_top.gen_walking_stages[0].walking_stage_u.mem_stage_u"))
    , TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u(Verilated::catName(topp->name(), "mptw_top.gen_walking_stages[1].walking_stage_u.mem_stage_u"))
    , TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u(Verilated::catName(topp->name(), "mptw_top.gen_walking_stages[2].walking_stage_u.mem_stage_u"))
    , TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u(Verilated::catName(topp->name(), "mptw_top.gen_walking_stages[3].walking_stage_u.mem_stage_u"))
    , TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u(Verilated::catName(topp->name(), "mptw_top.plb_lookup_stage_u.mem_stage_u"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u = &TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    TOPp->__PVT__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u = &TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    TOPp->__PVT__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u = &TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    TOPp->__PVT__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u = &TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    TOPp->__PVT__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u = &TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vconfigure(this, true);
    TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vconfigure(this, false);
    TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vconfigure(this, false);
    TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vconfigure(this, false);
    TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__Vconfigure(this, false);
}
