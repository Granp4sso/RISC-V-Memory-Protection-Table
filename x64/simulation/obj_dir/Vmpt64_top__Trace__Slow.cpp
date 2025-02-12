// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmpt64_top__Syms.h"


//======================

void Vmpt64_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vmpt64_top::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmpt64_top__Syms* __restrict vlSymsp = static_cast<Vmpt64_top__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vmpt64_top::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vmpt64_top::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vmpt64_top__Syms* __restrict vlSymsp = static_cast<Vmpt64_top__Syms*>(userp);
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vmpt64_top::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vmpt64_top__Syms* __restrict vlSymsp = static_cast<Vmpt64_top__Syms*>(userp);
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+29,"clk_i", false,-1);
        tracep->declBit(c+30,"rst_ni", false,-1);
        tracep->declBit(c+31,"flush_i", false,-1);
        tracep->declBit(c+32,"ptw_enable_i", false,-1);
        tracep->declQuad(c+33,"spa_i", false,-1, 55,0);
        tracep->declBit(c+35,"addr_valid_i", false,-1);
        tracep->declQuad(c+36,"mmpt_reg_i", false,-1, 63,0);
        tracep->declBit(c+38,"access_page_fault_o", false,-1);
        tracep->declBus(c+39,"format_error_o", false,-1, 2,0);
        tracep->declBit(c+40,"m_mem_req", false,-1);
        tracep->declBit(c+41,"m_mem_gnt", false,-1);
        tracep->declBit(c+42,"m_mem_valid", false,-1);
        tracep->declQuad(c+43,"m_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+45,"m_mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+47,"m_mem_wdata", false,-1, 63,0);
        tracep->declBit(c+49,"m_mem_we", false,-1);
        tracep->declBus(c+50,"m_mem_be", false,-1, 7,0);
        tracep->declBit(c+51,"m_mem_error", false,-1);
        tracep->declBit(c+52,"ptw_busy_o", false,-1);
        tracep->declBit(c+53,"ptw_valid_o", false,-1);
        tracep->declBus(c+54,"access_type_i", false,-1, 1,0);
        tracep->declQuad(c+55,"plb_entry_o", false,-1, 63,0);
        tracep->declBit(c+57,"allow_o", false,-1);
        tracep->declBit(c+29,"mpt64_top clk_i", false,-1);
        tracep->declBit(c+30,"mpt64_top rst_ni", false,-1);
        tracep->declBit(c+31,"mpt64_top flush_i", false,-1);
        tracep->declBit(c+32,"mpt64_top ptw_enable_i", false,-1);
        tracep->declQuad(c+33,"mpt64_top spa_i", false,-1, 55,0);
        tracep->declBit(c+35,"mpt64_top addr_valid_i", false,-1);
        tracep->declQuad(c+36,"mpt64_top mmpt_reg_i", false,-1, 63,0);
        tracep->declBit(c+38,"mpt64_top access_page_fault_o", false,-1);
        tracep->declBus(c+39,"mpt64_top format_error_o", false,-1, 2,0);
        tracep->declBit(c+40,"mpt64_top m_mem_req", false,-1);
        tracep->declBit(c+41,"mpt64_top m_mem_gnt", false,-1);
        tracep->declBit(c+42,"mpt64_top m_mem_valid", false,-1);
        tracep->declQuad(c+43,"mpt64_top m_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+45,"mpt64_top m_mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+47,"mpt64_top m_mem_wdata", false,-1, 63,0);
        tracep->declBit(c+49,"mpt64_top m_mem_we", false,-1);
        tracep->declBus(c+50,"mpt64_top m_mem_be", false,-1, 7,0);
        tracep->declBit(c+51,"mpt64_top m_mem_error", false,-1);
        tracep->declBit(c+52,"mpt64_top ptw_busy_o", false,-1);
        tracep->declBit(c+53,"mpt64_top ptw_valid_o", false,-1);
        tracep->declBus(c+54,"mpt64_top access_type_i", false,-1, 1,0);
        tracep->declQuad(c+55,"mpt64_top plb_entry_o", false,-1, 63,0);
        tracep->declBit(c+57,"mpt64_top allow_o", false,-1);
        tracep->declBus(c+14,"mpt64_top next_state_d", false,-1, 2,0);
        tracep->declBus(c+1,"mpt64_top curr_state_q", false,-1, 2,0);
        tracep->declBus(c+15,"mpt64_top next_lookup_state_d", false,-1, 1,0);
        tracep->declBus(c+2,"mpt64_top curr_lookup_state_q", false,-1, 1,0);
        tracep->declQuad(c+3,"mpt64_top spa_q", false,-1, 55,0);
        tracep->declQuad(c+5,"mpt64_top mmpt_q", false,-1, 63,0);
        tracep->declBus(c+7,"mpt64_top access_type_q", false,-1, 1,0);
        tracep->declQuad(c+8,"mpt64_top mptl_entry_q", false,-1, 63,0);
        tracep->declQuad(c+16,"mpt64_top plb_entry_d", false,-1, 63,0);
        tracep->declQuad(c+10,"mpt64_top plb_entry_q", false,-1, 63,0);
        tracep->declBit(c+18,"mpt64_top access_page_fault_d", false,-1);
        tracep->declBit(c+12,"mpt64_top access_page_fault_q", false,-1);
        tracep->declBus(c+19,"mpt64_top format_error_cause_d", false,-1, 2,0);
        tracep->declBus(c+13,"mpt64_top format_error_cause_q", false,-1, 2,0);
        tracep->declQuad(c+20,"mpt64_top next_look_up_addr", false,-1, 43,0);
        tracep->declQuad(c+22,"mpt64_top mptl3_entry", false,-1, 63,0);
        tracep->declQuad(c+24,"mpt64_top mptl2_entry", false,-1, 63,0);
        tracep->declQuad(c+26,"mpt64_top mptl1_entry", false,-1, 63,0);
        tracep->declBus(c+28,"mpt64_top permissions", false,-1, 1,0);
        tracep->declBus(c+58,"$unit AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+58,"$unit AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+59,"$unit AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+60,"$unit AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+61,"$unit AXI_LEN_WIDTH", false,-1, 31,0);
        tracep->declBus(c+62,"$unit AXI_SIZE_WIDTH", false,-1, 31,0);
        tracep->declBus(c+60,"$unit AXI_BURST_WIDTH", false,-1, 31,0);
        tracep->declBus(c+63,"$unit AXI_LOCK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+59,"$unit AXI_CACHE_WIDTH", false,-1, 31,0);
        tracep->declBus(c+62,"$unit AXI_PROT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+59,"$unit AXI_QOS_WIDTH", false,-1, 31,0);
        tracep->declBus(c+63,"$unit AXI_VALID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+63,"$unit AXI_READY_WIDTH", false,-1, 31,0);
        tracep->declBus(c+63,"$unit AXI_LAST_WIDTH", false,-1, 31,0);
        tracep->declBus(c+60,"$unit AXI_RESP_WIDTH", false,-1, 31,0);
        tracep->declBus(c+59,"$unit AXI_REGION_WIDTH", false,-1, 31,0);
        tracep->declBus(c+64,"mpt64_pkg XLEN", false,-1, 31,0);
        tracep->declBus(c+65,"mpt64_pkg PLEN", false,-1, 31,0);
        tracep->declBus(c+66,"mpt64_pkg MPTL2_INFO_LEN", false,-1, 31,0);
        tracep->declBus(c+66,"mpt64_pkg MMPT_PPN_LEN", false,-1, 31,0);
        tracep->declBus(c+67,"mpt64_pkg MMPT_MODE_LEN", false,-1, 31,0);
        tracep->declBus(c+68,"mpt64_pkg WPRI_BITS_LEN", false,-1, 31,0);
        tracep->declBus(c+64,"mpt64_pkg PLB_ENTRY_LEN", false,-1, 31,0);
        tracep->declBus(c+66,"mpt64_pkg MPTL2_PPN_LEN", false,-1, 31,0);
        tracep->declBus(c+69,"mpt64_pkg SDID_LEN", false,-1, 31,0);
        tracep->declBus(c+70,"mpt64_pkg BARE_MODE", false,-1, 3,0);
        tracep->declBus(c+71,"mpt64_pkg SMMPT46_MODE", false,-1, 3,0);
        tracep->declBus(c+72,"mpt64_pkg SMMPT56_MODE", false,-1, 3,0);
    }
}

void Vmpt64_top::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vmpt64_top::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vmpt64_top__Syms* __restrict vlSymsp = static_cast<Vmpt64_top__Syms*>(userp);
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vmpt64_top::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vmpt64_top__Syms* __restrict vlSymsp = static_cast<Vmpt64_top__Syms*>(userp);
    Vmpt64_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->mpt64_top__DOT__curr_state_q),3);
        tracep->fullCData(oldp+2,(vlTOPp->mpt64_top__DOT__curr_lookup_state_q),2);
        tracep->fullQData(oldp+3,(vlTOPp->mpt64_top__DOT__spa_q),56);
        tracep->fullQData(oldp+5,(vlTOPp->mpt64_top__DOT__mmpt_q),64);
        tracep->fullCData(oldp+7,(vlTOPp->mpt64_top__DOT__access_type_q),2);
        tracep->fullQData(oldp+8,(vlTOPp->mpt64_top__DOT__mptl_entry_q),64);
        tracep->fullQData(oldp+10,(vlTOPp->mpt64_top__DOT__plb_entry_q),64);
        tracep->fullBit(oldp+12,(vlTOPp->mpt64_top__DOT__access_page_fault_q));
        tracep->fullCData(oldp+13,(vlTOPp->mpt64_top__DOT__format_error_cause_q),3);
        tracep->fullCData(oldp+14,(vlTOPp->mpt64_top__DOT__next_state_d),3);
        tracep->fullCData(oldp+15,(vlTOPp->mpt64_top__DOT__next_lookup_state_d),2);
        tracep->fullQData(oldp+16,(vlTOPp->mpt64_top__DOT__plb_entry_d),64);
        tracep->fullBit(oldp+18,(vlTOPp->mpt64_top__DOT__access_page_fault_d));
        tracep->fullCData(oldp+19,(vlTOPp->mpt64_top__DOT__format_error_cause_d),3);
        tracep->fullQData(oldp+20,(vlTOPp->mpt64_top__DOT__next_look_up_addr),44);
        tracep->fullQData(oldp+22,(vlTOPp->mpt64_top__DOT__mptl3_entry),64);
        tracep->fullQData(oldp+24,(vlTOPp->mpt64_top__DOT__mptl2_entry),64);
        tracep->fullQData(oldp+26,(vlTOPp->mpt64_top__DOT__mptl1_entry),64);
        tracep->fullCData(oldp+28,(vlTOPp->mpt64_top__DOT__permissions),2);
        tracep->fullBit(oldp+29,(vlTOPp->clk_i));
        tracep->fullBit(oldp+30,(vlTOPp->rst_ni));
        tracep->fullBit(oldp+31,(vlTOPp->flush_i));
        tracep->fullBit(oldp+32,(vlTOPp->ptw_enable_i));
        tracep->fullQData(oldp+33,(vlTOPp->spa_i),56);
        tracep->fullBit(oldp+35,(vlTOPp->addr_valid_i));
        tracep->fullQData(oldp+36,(vlTOPp->mmpt_reg_i),64);
        tracep->fullBit(oldp+38,(vlTOPp->access_page_fault_o));
        tracep->fullCData(oldp+39,(vlTOPp->format_error_o),3);
        tracep->fullBit(oldp+40,(vlTOPp->m_mem_req));
        tracep->fullBit(oldp+41,(vlTOPp->m_mem_gnt));
        tracep->fullBit(oldp+42,(vlTOPp->m_mem_valid));
        tracep->fullQData(oldp+43,(vlTOPp->m_mem_addr),64);
        tracep->fullQData(oldp+45,(vlTOPp->m_mem_rdata),64);
        tracep->fullQData(oldp+47,(vlTOPp->m_mem_wdata),64);
        tracep->fullBit(oldp+49,(vlTOPp->m_mem_we));
        tracep->fullCData(oldp+50,(vlTOPp->m_mem_be),8);
        tracep->fullBit(oldp+51,(vlTOPp->m_mem_error));
        tracep->fullBit(oldp+52,(vlTOPp->ptw_busy_o));
        tracep->fullBit(oldp+53,(vlTOPp->ptw_valid_o));
        tracep->fullCData(oldp+54,(vlTOPp->access_type_i),2);
        tracep->fullQData(oldp+55,(vlTOPp->plb_entry_o),64);
        tracep->fullBit(oldp+57,(vlTOPp->allow_o));
        tracep->fullIData(oldp+58,(0x40U),32);
        tracep->fullIData(oldp+59,(4U),32);
        tracep->fullIData(oldp+60,(2U),32);
        tracep->fullIData(oldp+61,(8U),32);
        tracep->fullIData(oldp+62,(3U),32);
        tracep->fullIData(oldp+63,(1U),32);
        tracep->fullIData(oldp+64,(0x40U),32);
        tracep->fullIData(oldp+65,(0x38U),32);
        tracep->fullIData(oldp+66,(0x2cU),32);
        tracep->fullIData(oldp+67,(4U),32);
        tracep->fullIData(oldp+68,(0xaU),32);
        tracep->fullIData(oldp+69,(6U),32);
        tracep->fullCData(oldp+70,(0U),4);
        tracep->fullCData(oldp+71,(1U),4);
        tracep->fullCData(oldp+72,(2U),4);
    }
}
