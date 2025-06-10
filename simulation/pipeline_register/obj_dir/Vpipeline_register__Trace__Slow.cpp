// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline_register__Syms.h"


//======================

void Vpipeline_register::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vpipeline_register::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpipeline_register__Syms* __restrict vlSymsp = static_cast<Vpipeline_register__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vpipeline_register::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vpipeline_register::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vpipeline_register__Syms* __restrict vlSymsp = static_cast<Vpipeline_register__Syms*>(userp);
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vpipeline_register::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vpipeline_register__Syms* __restrict vlSymsp = static_cast<Vpipeline_register__Syms*>(userp);
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk_i", false,-1);
        tracep->declBit(c+2,"rst_ni", false,-1);
        tracep->declBus(c+3,"s_data_rdata", false,-1, 31,0);
        tracep->declBit(c+4,"s_data_valid", false,-1);
        tracep->declBit(c+5,"s_data_ready", false,-1);
        tracep->declBus(c+6,"m_data_rdata", false,-1, 31,0);
        tracep->declBit(c+7,"m_data_valid", false,-1);
        tracep->declBit(c+8,"m_data_ready", false,-1);
        tracep->declBit(c+9,"s_ctrl_flush", false,-1);
        tracep->declBit(c+10,"s_ctrl_stall", false,-1);
        tracep->declBus(c+16,"pipeline_register DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1,"pipeline_register clk_i", false,-1);
        tracep->declBit(c+2,"pipeline_register rst_ni", false,-1);
        tracep->declBus(c+3,"pipeline_register s_data_rdata", false,-1, 31,0);
        tracep->declBit(c+4,"pipeline_register s_data_valid", false,-1);
        tracep->declBit(c+5,"pipeline_register s_data_ready", false,-1);
        tracep->declBus(c+6,"pipeline_register m_data_rdata", false,-1, 31,0);
        tracep->declBit(c+7,"pipeline_register m_data_valid", false,-1);
        tracep->declBit(c+8,"pipeline_register m_data_ready", false,-1);
        tracep->declBit(c+9,"pipeline_register s_ctrl_flush", false,-1);
        tracep->declBit(c+10,"pipeline_register s_ctrl_stall", false,-1);
        tracep->declBus(c+11,"pipeline_register reg_data_d", false,-1, 31,0);
        tracep->declBus(c+12,"pipeline_register reg_data_q", false,-1, 31,0);
        tracep->declBit(c+17,"pipeline_register ready_d", false,-1);
        tracep->declBit(c+18,"pipeline_register ready_q", false,-1);
        tracep->declBit(c+13,"pipeline_register valid_d", false,-1);
        tracep->declBit(c+14,"pipeline_register valid_q", false,-1);
        tracep->declBit(c+15,"pipeline_register stall", false,-1);
        tracep->declBit(c+9,"pipeline_register flush", false,-1);
        tracep->declBus(c+19,"mpt_pkg PPN_LEN", false,-1, 31,0);
        tracep->declBus(c+20,"mpt_pkg MMPT_MODE_LEN", false,-1, 31,0);
        tracep->declBus(c+21,"mpt_pkg MPTSIZE", false,-1, 31,0);
        tracep->declBus(c+20,"mpt_pkg NUMPGINRANGE", false,-1, 31,0);
        tracep->declBus(c+22,"mpt_pkg SDID_LEN", false,-1, 31,0);
        tracep->declBus(c+23,"mpt_pkg WPRI_BITS_LEN", false,-1, 31,0);
        tracep->declBus(c+24,"mpt_pkg PAGESIZE", false,-1, 31,0);
        tracep->declBus(c+25,"mpt_pkg BARE_MODE", false,-1, 3,0);
        tracep->declBus(c+26,"mpt_pkg XLEN", false,-1, 31,0);
        tracep->declBus(c+27,"mpt_pkg SMMPT43_MODE", false,-1, 3,0);
        tracep->declBus(c+28,"mpt_pkg SMMPT52_MODE", false,-1, 3,0);
        tracep->declBus(c+29,"mpt_pkg SMMPT64_MODE", false,-1, 3,0);
    }
}

void Vpipeline_register::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vpipeline_register::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vpipeline_register__Syms* __restrict vlSymsp = static_cast<Vpipeline_register__Syms*>(userp);
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vpipeline_register::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vpipeline_register__Syms* __restrict vlSymsp = static_cast<Vpipeline_register__Syms*>(userp);
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->clk_i));
        tracep->fullBit(oldp+2,(vlTOPp->rst_ni));
        tracep->fullIData(oldp+3,(vlTOPp->s_data_rdata),32);
        tracep->fullBit(oldp+4,(vlTOPp->s_data_valid));
        tracep->fullBit(oldp+5,(vlTOPp->s_data_ready));
        tracep->fullIData(oldp+6,(vlTOPp->m_data_rdata),32);
        tracep->fullBit(oldp+7,(vlTOPp->m_data_valid));
        tracep->fullBit(oldp+8,(vlTOPp->m_data_ready));
        tracep->fullBit(oldp+9,(vlTOPp->s_ctrl_flush));
        tracep->fullBit(oldp+10,(vlTOPp->s_ctrl_stall));
        tracep->fullIData(oldp+11,(((IData)(vlTOPp->s_ctrl_flush)
                                     ? 0U : vlTOPp->s_data_rdata)),32);
        tracep->fullIData(oldp+12,(vlTOPp->pipeline_register__DOT__reg_data_q),32);
        tracep->fullBit(oldp+13,((1U & ((~ (IData)(vlTOPp->s_ctrl_flush)) 
                                        & (~ (IData)(vlTOPp->pipeline_register__DOT__stall))))));
        tracep->fullBit(oldp+14,(vlTOPp->pipeline_register__DOT__valid_q));
        tracep->fullBit(oldp+15,(vlTOPp->pipeline_register__DOT__stall));
        tracep->fullIData(oldp+16,(0x20U),32);
        tracep->fullBit(oldp+17,(vlTOPp->pipeline_register__DOT__ready_d));
        tracep->fullBit(oldp+18,(vlTOPp->pipeline_register__DOT__ready_q));
        tracep->fullIData(oldp+19,(0x34U),32);
        tracep->fullIData(oldp+20,(4U),32);
        tracep->fullIData(oldp+21,(8U),32);
        tracep->fullIData(oldp+22,(6U),32);
        tracep->fullIData(oldp+23,(2U),32);
        tracep->fullIData(oldp+24,(0x1000U),32);
        tracep->fullCData(oldp+25,(0U),4);
        tracep->fullIData(oldp+26,(0x40U),32);
        tracep->fullCData(oldp+27,(1U),4);
        tracep->fullCData(oldp+28,(2U),4);
        tracep->fullCData(oldp+29,(3U),4);
    }
}
