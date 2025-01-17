// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmtt_top.h for the primary calling header

#include "Vmtt_top.h"
#include "Vmtt_top__Syms.h"

//==========

VL_CTOR_IMP(Vmtt_top) {
    Vmtt_top__Syms* __restrict vlSymsp = __VlSymsp = new Vmtt_top__Syms(this, name());
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmtt_top::__Vconfigure(Vmtt_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vmtt_top::~Vmtt_top() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vmtt_top::_settle__TOP__2(Vmtt_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmtt_top::_settle__TOP__2\n"); );
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->toggle_o = vlTOPp->mtt_top__DOT__toggle;
}

void Vmtt_top::_eval_initial(Vmtt_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmtt_top::_eval_initial\n"); );
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

void Vmtt_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmtt_top::final\n"); );
    // Variables
    Vmtt_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmtt_top::_eval_settle(Vmtt_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmtt_top::_eval_settle\n"); );
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vmtt_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmtt_top::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_ni = VL_RAND_RESET_I(1);
    toggle_o = VL_RAND_RESET_I(1);
    mtt_top__DOT__toggle = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
