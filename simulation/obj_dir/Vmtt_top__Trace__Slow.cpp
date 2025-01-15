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
        tracep->declBit(c+1,"clk_i", false,-1);
        tracep->declBit(c+2,"rst_ni", false,-1);
        tracep->declBit(c+3,"toggle_o", false,-1);
        tracep->declBit(c+1,"mtt_top clk_i", false,-1);
        tracep->declBit(c+2,"mtt_top rst_ni", false,-1);
        tracep->declBit(c+3,"mtt_top toggle_o", false,-1);
        tracep->declBit(c+4,"mtt_top toggle", false,-1);
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
        tracep->fullBit(oldp+1,(vlTOPp->clk_i));
        tracep->fullBit(oldp+2,(vlTOPp->rst_ni));
        tracep->fullBit(oldp+3,(vlTOPp->toggle_o));
        tracep->fullBit(oldp+4,(vlTOPp->mtt_top__DOT__toggle));
    }
}
