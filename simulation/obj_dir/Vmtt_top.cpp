// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmtt_top.h for the primary calling header

#include "Vmtt_top.h"
#include "Vmtt_top__Syms.h"

//==========

void Vmtt_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmtt_top::eval\n"); );
    Vmtt_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/valerio/Desktop/RISC-V-Memory-Protection-Table/rtl/mtt_top.sv", 17, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmtt_top::_eval_initial_loop(Vmtt_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/valerio/Desktop/RISC-V-Memory-Protection-Table/rtl/mtt_top.sv", 17, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vmtt_top::_sequent__TOP__2(Vmtt_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmtt_top::_sequent__TOP__2\n"); );
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__mtt_top__DOT__curr_state;
    // Body
    __Vdly__mtt_top__DOT__curr_state = vlTOPp->mtt_top__DOT__curr_state;
    vlTOPp->mtt_top__DOT__curr_lookup_state = ((IData)(vlTOPp->rst_ni)
                                                ? (IData)(vlTOPp->mtt_top__DOT__next_lookup_state)
                                                : 0U);
    if (vlTOPp->rst_ni) {
        __Vdly__mtt_top__DOT__curr_state = vlTOPp->mtt_top__DOT__next_state;
        if ((0U == (IData)(vlTOPp->mtt_top__DOT__curr_state))) {
            if (vlTOPp->addr_valid_i) {
                vlTOPp->mtt_top__DOT__paddr = vlTOPp->paddr_i;
            }
        } else {
            __Vdly__mtt_top__DOT__curr_state = 0U;
        }
    } else {
        __Vdly__mtt_top__DOT__curr_state = 0U;
        vlTOPp->mtt_top__DOT__paddr = 0ULL;
    }
    vlTOPp->mtt_top__DOT__curr_state = __Vdly__mtt_top__DOT__curr_state;
    vlTOPp->mtt_top__DOT__next_lookup_state = vlTOPp->mtt_top__DOT__curr_lookup_state;
}

VL_INLINE_OPT void Vmtt_top::_combo__TOP__3(Vmtt_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmtt_top::_combo__TOP__3\n"); );
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mtt_top__DOT__next_state = vlTOPp->mtt_top__DOT__curr_state;
    if ((0U == (IData)(vlTOPp->mtt_top__DOT__curr_state))) {
        if (((IData)(vlTOPp->ptw_enable_i) & (IData)(vlTOPp->addr_valid_i))) {
            vlTOPp->mtt_top__DOT__next_state = 1U;
        }
    } else {
        vlTOPp->mtt_top__DOT__next_state = 0U;
    }
}

void Vmtt_top::_eval(Vmtt_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmtt_top::_eval\n"); );
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

VL_INLINE_OPT QData Vmtt_top::_change_request(Vmtt_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmtt_top::_change_request\n"); );
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vmtt_top::_change_request_1(Vmtt_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmtt_top::_change_request_1\n"); );
    Vmtt_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmtt_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmtt_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((flush_i & 0xfeU))) {
        Verilated::overWidthError("flush_i");}
    if (VL_UNLIKELY((ptw_enable_i & 0xfeU))) {
        Verilated::overWidthError("ptw_enable_i");}
    if (VL_UNLIKELY((paddr_i & 0ULL))) {
        Verilated::overWidthError("paddr_i");}
    if (VL_UNLIKELY((addr_valid_i & 0xfeU))) {
        Verilated::overWidthError("addr_valid_i");}
    if (VL_UNLIKELY((access_type_i & 0xfcU))) {
        Verilated::overWidthError("access_type_i");}
}
#endif  // VL_DEBUG
