// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline_register__Syms.h"


void Vpipeline_register::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vpipeline_register__Syms* __restrict vlSymsp = static_cast<Vpipeline_register__Syms*>(userp);
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vpipeline_register::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vpipeline_register__Syms* __restrict vlSymsp = static_cast<Vpipeline_register__Syms*>(userp);
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlTOPp->clk_i));
        tracep->chgBit(oldp+1,(vlTOPp->rst_ni));
        tracep->chgIData(oldp+2,(vlTOPp->s_data_rdata),32);
        tracep->chgBit(oldp+3,(vlTOPp->s_data_valid));
        tracep->chgBit(oldp+4,(vlTOPp->s_data_ready));
        tracep->chgIData(oldp+5,(vlTOPp->m_data_rdata),32);
        tracep->chgBit(oldp+6,(vlTOPp->m_data_valid));
        tracep->chgBit(oldp+7,(vlTOPp->m_data_ready));
        tracep->chgBit(oldp+8,(vlTOPp->s_ctrl_flush));
        tracep->chgBit(oldp+9,(vlTOPp->s_ctrl_stall));
        tracep->chgIData(oldp+10,(((IData)(vlTOPp->s_ctrl_flush)
                                    ? 0U : vlTOPp->s_data_rdata)),32);
        tracep->chgIData(oldp+11,(vlTOPp->pipeline_register__DOT__reg_data_q),32);
        tracep->chgBit(oldp+12,((1U & ((~ (IData)(vlTOPp->s_ctrl_flush)) 
                                       & (~ (IData)(vlTOPp->pipeline_register__DOT__stall))))));
        tracep->chgBit(oldp+13,(vlTOPp->pipeline_register__DOT__valid_q));
        tracep->chgBit(oldp+14,(vlTOPp->pipeline_register__DOT__stall));
    }
}

void Vpipeline_register::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vpipeline_register__Syms* __restrict vlSymsp = static_cast<Vpipeline_register__Syms*>(userp);
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
