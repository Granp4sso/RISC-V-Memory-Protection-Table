// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmptw_top__pch.h"
#include "Vmptw_top.h"
#include "Vmptw_top___024root.h"
#include "Vmptw_top___024unit.h"
#include "Vmptw_top_memory_read_stage__pi8.h"

// FUNCTIONS
Vmptw_top__Syms::~Vmptw_top__Syms()
{
}

Vmptw_top__Syms::Vmptw_top__Syms(VerilatedContext* contextp, const char* namep, Vmptw_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u{this, Verilated::catName(namep, "mptw_top.gen_walking_stages[0].walking_stage_u.mem_stage_u")}
    , TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u{this, Verilated::catName(namep, "mptw_top.gen_walking_stages[1].walking_stage_u.mem_stage_u")}
    , TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u{this, Verilated::catName(namep, "mptw_top.gen_walking_stages[2].walking_stage_u.mem_stage_u")}
    , TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u{this, Verilated::catName(namep, "mptw_top.gen_walking_stages[3].walking_stage_u.mem_stage_u")}
    , TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u{this, Verilated::catName(namep, "mptw_top.plb_lookup_stage_u.mem_stage_u")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u = &TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    TOP.__PVT__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u = &TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    TOP.__PVT__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u = &TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    TOP.__PVT__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u = &TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u;
    TOP.__PVT__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u = &TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vconfigure(true);
    TOP__mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vconfigure(false);
    TOP__mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vconfigure(false);
    TOP__mptw_top__DOT__gen_walking_stages__BRA__3__KET____DOT__walking_stage_u__DOT__mem_stage_u.__Vconfigure(false);
    TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u.__Vconfigure(false);
}
