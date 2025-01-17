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

void Vmtt_top::_settle__TOP__1(Vmtt_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmtt_top::_settle__TOP__1\n"); );
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->tlb_entry_o = 0ULL;
    vlTOPp->access_page_fault_o = 0U;
    vlTOPp->format_error_o = 0U;
    vlTOPp->ptw_busy_o = 0U;
    vlTOPp->ptw_valid_o = 0U;
    vlTOPp->allow_o = 0U;
    vlTOPp->mtt_top__DOT__next_lookup_state = vlTOPp->mtt_top__DOT__curr_lookup_state;
    vlTOPp->mtt_top__DOT__next_state = vlTOPp->mtt_top__DOT__curr_state;
    if ((0U == (IData)(vlTOPp->mtt_top__DOT__curr_state))) {
        if (((IData)(vlTOPp->ptw_enable_i) & (IData)(vlTOPp->addr_valid_i))) {
            vlTOPp->mtt_top__DOT__next_state = 1U;
        }
    } else {
        vlTOPp->mtt_top__DOT__next_state = 0U;
    }
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
    vlTOPp->_settle__TOP__1(vlSymsp);
}

void Vmtt_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmtt_top::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_ni = VL_RAND_RESET_I(1);
    flush_i = VL_RAND_RESET_I(1);
    ptw_enable_i = VL_RAND_RESET_I(1);
    paddr_i = VL_RAND_RESET_Q(56);
    addr_valid_i = VL_RAND_RESET_I(1);
    mmpt_reg_i = VL_RAND_RESET_Q(64);
    access_page_fault_o = VL_RAND_RESET_I(1);
    format_error_o = VL_RAND_RESET_I(3);
    ptw_busy_o = VL_RAND_RESET_I(1);
    ptw_valid_o = VL_RAND_RESET_I(1);
    access_type_i = VL_RAND_RESET_I(2);
    tlb_entry_o = VL_RAND_RESET_Q(64);
    allow_o = VL_RAND_RESET_I(1);
    mtt_top__DOT__curr_state = VL_RAND_RESET_I(3);
    mtt_top__DOT__next_state = VL_RAND_RESET_I(3);
    mtt_top__DOT__curr_lookup_state = VL_RAND_RESET_I(2);
    mtt_top__DOT__next_lookup_state = VL_RAND_RESET_I(2);
    mtt_top__DOT__paddr = VL_RAND_RESET_Q(56);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
