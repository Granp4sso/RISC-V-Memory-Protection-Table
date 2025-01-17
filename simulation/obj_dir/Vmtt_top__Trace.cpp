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
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->mtt_top__DOT__curr_state),3);
            tracep->chgCData(oldp+1,(vlTOPp->mtt_top__DOT__curr_lookup_state),2);
            tracep->chgQData(oldp+2,(vlTOPp->mtt_top__DOT__paddr),56);
        }
        tracep->chgBit(oldp+4,(vlTOPp->clk_i));
        tracep->chgBit(oldp+5,(vlTOPp->rst_ni));
        tracep->chgBit(oldp+6,(vlTOPp->flush_i));
        tracep->chgBit(oldp+7,(vlTOPp->ptw_enable_i));
        tracep->chgQData(oldp+8,(vlTOPp->paddr_i),56);
        tracep->chgBit(oldp+10,(vlTOPp->addr_valid_i));
        tracep->chgQData(oldp+11,(vlTOPp->mmpt_reg_i),64);
        tracep->chgBit(oldp+13,(vlTOPp->access_page_fault_o));
        tracep->chgCData(oldp+14,(vlTOPp->format_error_o),3);
        tracep->chgBit(oldp+15,(vlTOPp->ptw_busy_o));
        tracep->chgBit(oldp+16,(vlTOPp->ptw_valid_o));
        tracep->chgCData(oldp+17,(vlTOPp->access_type_i),2);
        tracep->chgQData(oldp+18,(vlTOPp->tlb_entry_o),64);
        tracep->chgBit(oldp+20,(vlTOPp->allow_o));
        tracep->chgCData(oldp+21,(vlTOPp->mtt_top__DOT__next_state),3);
    }
}

void Vmtt_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vmtt_top__Syms* __restrict vlSymsp = static_cast<Vmtt_top__Syms*>(userp);
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
