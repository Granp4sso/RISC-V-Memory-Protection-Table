// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline_register.h for the primary calling header

#include "Vpipeline_register.h"
#include "Vpipeline_register__Syms.h"

//==========

VL_CTOR_IMP(Vpipeline_register) {
    Vpipeline_register__Syms* __restrict vlSymsp = __VlSymsp = new Vpipeline_register__Syms(this, name());
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vpipeline_register::__Vconfigure(Vpipeline_register__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vpipeline_register::~Vpipeline_register() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vpipeline_register::_settle__TOP__2(Vpipeline_register__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_register::_settle__TOP__2\n"); );
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->pipeline_register__DOT__stall = (1U & ((IData)(vlTOPp->s_ctrl_stall) 
                                                   | (~ (IData)(vlTOPp->m_data_ready))));
    vlTOPp->m_data_rdata = ((IData)(vlTOPp->s_ctrl_flush)
                             ? 0U : vlTOPp->pipeline_register__DOT__reg_data_q);
    vlTOPp->m_data_valid = ((~ (IData)(vlTOPp->s_ctrl_flush)) 
                            & (IData)(vlTOPp->pipeline_register__DOT__valid_q));
    vlTOPp->s_data_ready = (1U & (~ (IData)(vlTOPp->pipeline_register__DOT__stall)));
}

void Vpipeline_register::_eval_initial(Vpipeline_register__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_register::_eval_initial\n"); );
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

void Vpipeline_register::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_register::final\n"); );
    // Variables
    Vpipeline_register__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vpipeline_register::_eval_settle(Vpipeline_register__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_register::_eval_settle\n"); );
    Vpipeline_register* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vpipeline_register::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_register::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_ni = VL_RAND_RESET_I(1);
    s_data_rdata = VL_RAND_RESET_I(32);
    s_data_valid = VL_RAND_RESET_I(1);
    s_data_ready = VL_RAND_RESET_I(1);
    m_data_rdata = VL_RAND_RESET_I(32);
    m_data_valid = VL_RAND_RESET_I(1);
    m_data_ready = VL_RAND_RESET_I(1);
    s_ctrl_flush = VL_RAND_RESET_I(1);
    s_ctrl_stall = VL_RAND_RESET_I(1);
    pipeline_register__DOT__reg_data_q = VL_RAND_RESET_I(32);
    pipeline_register__DOT__ready_d = VL_RAND_RESET_I(1);
    pipeline_register__DOT__ready_q = VL_RAND_RESET_I(1);
    pipeline_register__DOT__valid_q = VL_RAND_RESET_I(1);
    pipeline_register__DOT__stall = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
