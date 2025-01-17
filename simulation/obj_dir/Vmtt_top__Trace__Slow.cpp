// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmtt_top__Syms.h"


//======================

void Vmtt_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vmtt_top::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmtt_top__Syms* __restrict vlSymsp = static_cast<Vmtt_top__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vmtt_top::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vmtt_top::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vmtt_top__Syms* __restrict vlSymsp = static_cast<Vmtt_top__Syms*>(userp);
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vmtt_top::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vmtt_top__Syms* __restrict vlSymsp = static_cast<Vmtt_top__Syms*>(userp);
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+5,"clk_i", false,-1);
        tracep->declBit(c+6,"rst_ni", false,-1);
        tracep->declBit(c+7,"flush_i", false,-1);
        tracep->declBit(c+8,"ptw_enable_i", false,-1);
        tracep->declQuad(c+9,"paddr_i", false,-1, 55,0);
        tracep->declBit(c+11,"addr_valid_i", false,-1);
        tracep->declQuad(c+12,"mmpt_reg_i", false,-1, 63,0);
        tracep->declBit(c+14,"access_page_fault_o", false,-1);
        tracep->declBus(c+15,"format_error_o", false,-1, 2,0);
        tracep->declBit(c+16,"ptw_busy_o", false,-1);
        tracep->declBit(c+17,"ptw_valid_o", false,-1);
        tracep->declBus(c+18,"access_type_i", false,-1, 1,0);
        tracep->declQuad(c+19,"tlb_entry_o", false,-1, 63,0);
        tracep->declBit(c+21,"allow_o", false,-1);
        tracep->declBit(c+5,"mtt_top clk_i", false,-1);
        tracep->declBit(c+6,"mtt_top rst_ni", false,-1);
        tracep->declBit(c+7,"mtt_top flush_i", false,-1);
        tracep->declBit(c+8,"mtt_top ptw_enable_i", false,-1);
        tracep->declQuad(c+9,"mtt_top paddr_i", false,-1, 55,0);
        tracep->declBit(c+11,"mtt_top addr_valid_i", false,-1);
        tracep->declQuad(c+12,"mtt_top mmpt_reg_i", false,-1, 63,0);
        tracep->declBit(c+14,"mtt_top access_page_fault_o", false,-1);
        tracep->declBus(c+15,"mtt_top format_error_o", false,-1, 2,0);
        tracep->declBit(c+16,"mtt_top ptw_busy_o", false,-1);
        tracep->declBit(c+17,"mtt_top ptw_valid_o", false,-1);
        tracep->declBus(c+18,"mtt_top access_type_i", false,-1, 1,0);
        tracep->declQuad(c+19,"mtt_top tlb_entry_o", false,-1, 63,0);
        tracep->declBit(c+21,"mtt_top allow_o", false,-1);
        tracep->declBus(c+1,"mtt_top curr_state", false,-1, 2,0);
        tracep->declBus(c+22,"mtt_top next_state", false,-1, 2,0);
        tracep->declBus(c+2,"mtt_top curr_lookup_state", false,-1, 1,0);
        tracep->declBus(c+2,"mtt_top next_lookup_state", false,-1, 1,0);
        tracep->declQuad(c+3,"mtt_top paddr", false,-1, 55,0);
        tracep->declBus(c+23,"mpt_pkg XLEN", false,-1, 31,0);
        tracep->declBus(c+24,"mpt_pkg PLEN", false,-1, 31,0);
        tracep->declBus(c+25,"mpt_pkg MPTL2_INFO_LEN", false,-1, 31,0);
        tracep->declBus(c+25,"mpt_pkg MMPT_PPN_LEN", false,-1, 31,0);
        tracep->declBus(c+26,"mpt_pkg MMPT_MODE_LEN", false,-1, 31,0);
        tracep->declBus(c+27,"mpt_pkg WPRI_BITS_LEN", false,-1, 31,0);
        tracep->declBus(c+25,"mpt_pkg MPTL2_PPN_LEN", false,-1, 31,0);
        tracep->declBus(c+28,"mpt_pkg SDID_LEN", false,-1, 31,0);
    }
}

void Vmtt_top::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vmtt_top::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vmtt_top__Syms* __restrict vlSymsp = static_cast<Vmtt_top__Syms*>(userp);
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vmtt_top::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vmtt_top__Syms* __restrict vlSymsp = static_cast<Vmtt_top__Syms*>(userp);
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->mtt_top__DOT__curr_state),3);
        tracep->fullCData(oldp+2,(vlTOPp->mtt_top__DOT__curr_lookup_state),2);
        tracep->fullQData(oldp+3,(vlTOPp->mtt_top__DOT__paddr),56);
        tracep->fullBit(oldp+5,(vlTOPp->clk_i));
        tracep->fullBit(oldp+6,(vlTOPp->rst_ni));
        tracep->fullBit(oldp+7,(vlTOPp->flush_i));
        tracep->fullBit(oldp+8,(vlTOPp->ptw_enable_i));
        tracep->fullQData(oldp+9,(vlTOPp->paddr_i),56);
        tracep->fullBit(oldp+11,(vlTOPp->addr_valid_i));
        tracep->fullQData(oldp+12,(vlTOPp->mmpt_reg_i),64);
        tracep->fullBit(oldp+14,(vlTOPp->access_page_fault_o));
        tracep->fullCData(oldp+15,(vlTOPp->format_error_o),3);
        tracep->fullBit(oldp+16,(vlTOPp->ptw_busy_o));
        tracep->fullBit(oldp+17,(vlTOPp->ptw_valid_o));
        tracep->fullCData(oldp+18,(vlTOPp->access_type_i),2);
        tracep->fullQData(oldp+19,(vlTOPp->tlb_entry_o),64);
        tracep->fullBit(oldp+21,(vlTOPp->allow_o));
        tracep->fullCData(oldp+22,(vlTOPp->mtt_top__DOT__next_state),3);
        tracep->fullIData(oldp+23,(0x40U),32);
        tracep->fullIData(oldp+24,(0x38U),32);
        tracep->fullIData(oldp+25,(0x2cU),32);
        tracep->fullIData(oldp+26,(4U),32);
        tracep->fullIData(oldp+27,(0xaU),32);
        tracep->fullIData(oldp+28,(6U),32);
    }
}
