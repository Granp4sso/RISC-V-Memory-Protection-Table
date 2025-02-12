// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmpt64_top__Syms.h"


void Vmpt64_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vmpt64_top__Syms* __restrict vlSymsp = static_cast<Vmpt64_top__Syms*>(userp);
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vmpt64_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vmpt64_top__Syms* __restrict vlSymsp = static_cast<Vmpt64_top__Syms*>(userp);
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->mpt64_top__DOT__curr_state_q),3);
            tracep->chgCData(oldp+1,(vlTOPp->mpt64_top__DOT__curr_lookup_state_q),2);
            tracep->chgQData(oldp+2,(vlTOPp->mpt64_top__DOT__spa_q),56);
            tracep->chgQData(oldp+4,(vlTOPp->mpt64_top__DOT__mmpt_q),64);
            tracep->chgCData(oldp+6,(vlTOPp->mpt64_top__DOT__access_type_q),2);
            tracep->chgQData(oldp+7,(vlTOPp->mpt64_top__DOT__mptl_entry_q),64);
            tracep->chgQData(oldp+9,(vlTOPp->mpt64_top__DOT__plb_entry_q),64);
            tracep->chgBit(oldp+11,(vlTOPp->mpt64_top__DOT__access_page_fault_q));
            tracep->chgCData(oldp+12,(vlTOPp->mpt64_top__DOT__format_error_cause_q),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+13,(vlTOPp->mpt64_top__DOT__next_state_d),3);
            tracep->chgCData(oldp+14,(vlTOPp->mpt64_top__DOT__next_lookup_state_d),2);
            tracep->chgQData(oldp+15,(vlTOPp->mpt64_top__DOT__plb_entry_d),64);
            tracep->chgBit(oldp+17,(vlTOPp->mpt64_top__DOT__access_page_fault_d));
            tracep->chgCData(oldp+18,(vlTOPp->mpt64_top__DOT__format_error_cause_d),3);
            tracep->chgQData(oldp+19,(vlTOPp->mpt64_top__DOT__next_look_up_addr),44);
            tracep->chgQData(oldp+21,(vlTOPp->mpt64_top__DOT__mptl3_entry),64);
            tracep->chgQData(oldp+23,(vlTOPp->mpt64_top__DOT__mptl2_entry),64);
            tracep->chgQData(oldp+25,(vlTOPp->mpt64_top__DOT__mptl1_entry),64);
            tracep->chgCData(oldp+27,(vlTOPp->mpt64_top__DOT__permissions),2);
        }
        tracep->chgBit(oldp+28,(vlTOPp->clk_i));
        tracep->chgBit(oldp+29,(vlTOPp->rst_ni));
        tracep->chgBit(oldp+30,(vlTOPp->flush_i));
        tracep->chgBit(oldp+31,(vlTOPp->ptw_enable_i));
        tracep->chgQData(oldp+32,(vlTOPp->spa_i),56);
        tracep->chgBit(oldp+34,(vlTOPp->addr_valid_i));
        tracep->chgQData(oldp+35,(vlTOPp->mmpt_reg_i),64);
        tracep->chgBit(oldp+37,(vlTOPp->access_page_fault_o));
        tracep->chgCData(oldp+38,(vlTOPp->format_error_o),3);
        tracep->chgBit(oldp+39,(vlTOPp->m_mem_req));
        tracep->chgBit(oldp+40,(vlTOPp->m_mem_gnt));
        tracep->chgBit(oldp+41,(vlTOPp->m_mem_valid));
        tracep->chgQData(oldp+42,(vlTOPp->m_mem_addr),64);
        tracep->chgQData(oldp+44,(vlTOPp->m_mem_rdata),64);
        tracep->chgQData(oldp+46,(vlTOPp->m_mem_wdata),64);
        tracep->chgBit(oldp+48,(vlTOPp->m_mem_we));
        tracep->chgCData(oldp+49,(vlTOPp->m_mem_be),8);
        tracep->chgBit(oldp+50,(vlTOPp->m_mem_error));
        tracep->chgBit(oldp+51,(vlTOPp->ptw_busy_o));
        tracep->chgBit(oldp+52,(vlTOPp->ptw_valid_o));
        tracep->chgCData(oldp+53,(vlTOPp->access_type_i),2);
        tracep->chgQData(oldp+54,(vlTOPp->plb_entry_o),64);
        tracep->chgBit(oldp+56,(vlTOPp->allow_o));
    }
}

void Vmpt64_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vmpt64_top__Syms* __restrict vlSymsp = static_cast<Vmpt64_top__Syms*>(userp);
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
