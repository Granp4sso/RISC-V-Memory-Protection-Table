// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmtt_top__Syms.h"


void Vmtt_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vmtt_top__Syms* __restrict vlSymsp = static_cast<Vmtt_top__Syms*>(userp);
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vmtt_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vmtt_top__Syms* __restrict vlSymsp = static_cast<Vmtt_top__Syms*>(userp);
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk_i));
        tracep->chgBit(oldp+1,(vlTOPp->rst_ni));
        tracep->chgBit(oldp+2,(vlTOPp->toggle_o));
        tracep->chgBit(oldp+3,(vlTOPp->mtt_top__DOT__toggle));
    }
}

void Vmtt_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vmtt_top__Syms* __restrict vlSymsp = static_cast<Vmtt_top__Syms*>(userp);
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
