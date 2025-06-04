// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top.h"
#include "Vmptw_top__Syms.h"

//==========

void Vmptw_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmptw_top::eval\n"); );
    Vmptw_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/stefano/Desktop/Work/Projects/smmtt/b_pipelining/rtl/mptw_top.sv", 21, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmptw_top::_eval_initial_loop(Vmptw_top__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/stefano/Desktop/Work/Projects/smmtt/b_pipelining/rtl/mptw_top.sv", 21, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vmptw_top::_combo__TOP__3(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_combo__TOP__3\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mptw_top__DOT__input_transaction[2U] = 
        ((0xfffffff0U & ((IData)(vlTOPp->spa_i) << 4U)) 
         | ((IData)(vlTOPp->access_type_i) << 2U));
    vlTOPp->mptw_top__DOT__input_transaction[3U] = 
        ((0xfU & ((IData)(vlTOPp->spa_i) >> 0x1cU)) 
         | (0xfffffff0U & ((IData)((vlTOPp->spa_i >> 0x20U)) 
                           << 4U)));
    vlTOPp->mptw_top__DOT__input_transaction[4U] = 
        ((0xfU & ((IData)((vlTOPp->spa_i >> 0x20U)) 
                  >> 0x1cU)) | (0xfffffff0U & ((IData)(vlTOPp->mmpt_reg_i) 
                                               << 4U)));
    vlTOPp->mptw_top__DOT__input_transaction[5U] = 
        ((0xfU & ((IData)(vlTOPp->mmpt_reg_i) >> 0x1cU)) 
         | (0xfffffff0U & ((IData)((vlTOPp->mmpt_reg_i 
                                    >> 0x20U)) << 4U)));
    vlTOPp->mptw_top__DOT__input_transaction[6U] = 
        (0xfU & ((IData)((vlTOPp->mmpt_reg_i >> 0x20U)) 
                 >> 0x1cU));
    vlTOPp->mptw_top__DOT__fetch_exception_cause = 0U;
    if (vlTOPp->mptw_transaction_valid_i) {
        if ((8U & vlTOPp->mptw_top__DOT__input_transaction[6U])) {
            vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
        } else {
            if ((4U & vlTOPp->mptw_top__DOT__input_transaction[6U])) {
                vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
            } else {
                if ((2U & vlTOPp->mptw_top__DOT__input_transaction[6U])) {
                    if ((1U & vlTOPp->mptw_top__DOT__input_transaction[6U])) {
                        vlTOPp->mptw_top__DOT__fetch_exception_cause = 0U;
                    } else {
                        if ((0U != (0xfffU & ((vlTOPp->mptw_top__DOT__input_transaction[4U] 
                                               << 8U) 
                                              | (vlTOPp->mptw_top__DOT__input_transaction[3U] 
                                                 >> 0x18U))))) {
                            vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
                        }
                    }
                } else {
                    if ((1U & vlTOPp->mptw_top__DOT__input_transaction[6U])) {
                        if ((0U != (0x1fffffU & ((vlTOPp->mptw_top__DOT__input_transaction[4U] 
                                                  << 0x11U) 
                                                 | (vlTOPp->mptw_top__DOT__input_transaction[3U] 
                                                    >> 0xfU))))) {
                            vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
                        }
                    } else {
                        vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vmptw_top::_sequent__TOP__4(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_sequent__TOP__4\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n;
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock)))) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[1U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[1U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[2U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[2U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[3U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[3U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[4U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[4U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[5U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[5U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[6U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[6U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[7U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[7U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[8U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[8U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[9U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[9U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xaU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xaU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xbU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xbU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xcU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xcU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xdU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xdU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xeU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xeU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xfU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xfU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x10U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x10U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x11U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x11U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x12U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x12U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x13U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x13U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x14U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x14U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x15U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x15U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x16U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x16U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x17U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x17U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x18U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x18U];
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[9U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xaU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xbU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xcU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xdU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xeU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xfU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x10U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x11U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x12U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x13U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x14U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x15U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x16U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x17U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x18U] = 0U;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q 
        = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n)
            : 0U);
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock)))) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[1U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[1U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[2U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[2U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[3U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[3U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[4U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[4U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[5U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[5U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[6U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[6U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[7U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[7U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[8U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[8U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[9U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[9U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xaU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xaU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xbU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xbU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xcU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xcU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xdU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xdU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xeU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xeU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xfU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xfU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x10U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x10U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x11U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x11U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x12U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x12U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x13U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x13U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x14U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x14U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x15U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x15U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x16U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x16U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x17U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x17U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x18U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x18U];
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[9U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xaU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xbU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xcU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xdU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xeU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xfU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x10U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x11U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x12U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x13U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x14U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x15U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x16U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x17U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x18U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n;
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q = 0U;
    }
}

VL_INLINE_OPT void Vmptw_top::_sequent__TOP__5(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_sequent__TOP__5\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__next_state) 
               & 1U);
    } else {
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state = 0U;
    }
    vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
        = ((0xfffU & vlTOPp->mptw_top__DOT__walking_stage_data[0x12U]) 
           | (0xfffff000U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[0U] 
                             << 0xcU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
        = ((0xfffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[0U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[1U] 
                                                   << 0xcU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
        = ((0xfffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[1U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[2U] 
                                                   << 0xcU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x15U] 
        = ((0xfffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[2U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[3U] 
                                                   << 0xcU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x16U] 
        = ((0xfffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[3U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[4U] 
                                                   << 0xcU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x17U] 
        = ((0xfffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[4U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[5U] 
                                                   << 0xcU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x18U] 
        = ((0xfffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[5U] 
                      >> 0x14U)) | (0xfffff000U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[6U] 
                                                   << 0xcU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
        = ((0xffU & vlTOPp->mptw_top__DOT__walking_stage_data[0xcU]) 
           | (0xffffff00U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[0U] 
                             << 8U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
        = ((0xffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[0U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[1U] 
                                                  << 8U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
        = ((0xffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[1U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[2U] 
                                                  << 8U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
        = ((0xffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[2U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[3U] 
                                                  << 8U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
        = ((0xffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[3U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[4U] 
                                                  << 8U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
        = ((0xffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[4U] 
                     >> 0x18U)) | (0xffffff00U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[5U] 
                                                  << 8U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
        = ((0xfffff000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x12U]) 
           | ((0xffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[5U] 
                        >> 0x18U)) | (0xffffff00U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[6U] 
                                       << 8U))));
    vlTOPp->mptw_top__DOT__walking_stage_data[6U] = 
        ((0xfU & vlTOPp->mptw_top__DOT__walking_stage_data[6U]) 
         | (0xfffffff0U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[0U] 
                           << 4U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[7U] = 
        ((0xfU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[0U] 
                  >> 0x1cU)) | (0xfffffff0U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[1U] 
                                               << 4U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[8U] = 
        ((0xfU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[1U] 
                  >> 0x1cU)) | (0xfffffff0U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[2U] 
                                               << 4U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[9U] = 
        ((0xfU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[2U] 
                  >> 0x1cU)) | (0xfffffff0U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[3U] 
                                               << 4U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
        = ((0xfU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[3U] 
                    >> 0x1cU)) | (0xfffffff0U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[4U] 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
        = ((0xfU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[4U] 
                    >> 0x1cU)) | (0xfffffff0U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[5U] 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
        = ((0xffffff00U & vlTOPp->mptw_top__DOT__walking_stage_data[0xcU]) 
           | ((0xfU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[5U] 
                       >> 0x1cU)) | (0xfffffff0U & 
                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[6U] 
                                      << 4U))));
    vlTOPp->mptw_top__DOT__walking_stage_data[0U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__walking_stage_data[1U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__walking_stage_data[2U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__walking_stage_data[3U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__walking_stage_data[4U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__walking_stage_data[5U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__walking_stage_data[6U] = 
        ((0xfffffff0U & vlTOPp->mptw_top__DOT__walking_stage_data[6U]) 
         | vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[6U]);
    if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_reg__m_data_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_reg__m_data_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_reg__m_data_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_reg__m_data_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_reg__m_data_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_reg__m_data_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__pipe_to_walking_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__pipe_to_walking_valid = 0U;
    }
    vlTOPp->mptw_top__DOT__walking_stage_valid = ((7U 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_reg__m_data_valid) 
                                                     << 3U));
    vlTOPp->mptw_top__DOT__walking_stage_valid = ((0xbU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_reg__m_data_valid) 
                                                     << 2U));
    vlTOPp->mptw_top__DOT__walking_stage_valid = ((0xdU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_reg__m_data_valid) 
                                                     << 1U));
    vlTOPp->mptw_top__DOT__walking_stage_valid = ((0xeU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                                  | (IData)(vlTOPp->mptw_top__DOT__pipe_to_walking_valid));
}

VL_INLINE_OPT void Vmptw_top::_combo__TOP__6(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_combo__TOP__6\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_pop = 0U;
    if ((((IData)(vlTOPp->plb_master_mem_valid) & (0U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_pop = 1U;
    }
    vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready 
        = ((4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)) 
           & ((4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)) 
              & (IData)(vlTOPp->plb_master_mem_gnt)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U] = 0U;
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U] = 0U;
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U] = 0U;
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U] = 0U;
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U] = 0U;
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U] = 0U;
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U] = 0U;
    if ((((IData)(vlTOPp->plb_master_mem_valid) & (0U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U] 
            = (IData)(vlTOPp->plb_master_mem_rdata);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U] 
            = (IData)((vlTOPp->plb_master_mem_rdata 
                       >> 0x20U));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U] 
            = ((0xfU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U]) 
               | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                           ((0x30fU 
                                                             >= 
                                                             (0x3ffU 
                                                              & ((IData)(0xc4U) 
                                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                             ? 
                                                            (0xfU 
                                                             & (((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((IData)(0xc4U) 
                                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                  ? 0U
                                                                  : 
                                                                 (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                  ((IData)(7U) 
                                                                   + 
                                                                   (0x1fU 
                                                                    & (((IData)(0xc4U) 
                                                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                       >> 5U)))] 
                                                                  << 
                                                                  ((IData)(0x20U) 
                                                                   - 
                                                                   (0x1fU 
                                                                    & ((IData)(0xc4U) 
                                                                       * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                   ((IData)(6U) 
                                                                    + 
                                                                    (0x1fU 
                                                                     & (((IData)(0xc4U) 
                                                                         * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                        >> 5U)))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & ((IData)(0xc4U) 
                                                                       * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))))
                                                             : 0U))) 
                                           << 0x3cU) 
                                          | (((QData)((IData)(
                                                              ((0x30fU 
                                                                >= 
                                                                (0x3ffU 
                                                                 & ((IData)(0xc4U) 
                                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                ? 
                                                               (((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((IData)(0xc4U) 
                                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                  ? 0U
                                                                  : 
                                                                 (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                  ((IData)(6U) 
                                                                   + 
                                                                   (0x1fU 
                                                                    & (((IData)(0xc4U) 
                                                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                       >> 5U)))] 
                                                                  << 
                                                                  ((IData)(0x20U) 
                                                                   - 
                                                                   (0x1fU 
                                                                    & ((IData)(0xc4U) 
                                                                       * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                   ((IData)(5U) 
                                                                    + 
                                                                    (0x1fU 
                                                                     & (((IData)(0xc4U) 
                                                                         * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                        >> 5U)))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & ((IData)(0xc4U) 
                                                                       * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                                : 0U))) 
                                              << 0x1cU) 
                                             | ((QData)((IData)(
                                                                ((0x30fU 
                                                                  >= 
                                                                  (0x3ffU 
                                                                   & ((IData)(0xc4U) 
                                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                  ? 
                                                                 (((0U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((IData)(0xc4U) 
                                                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                    ? 0U
                                                                    : 
                                                                   (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                    ((IData)(5U) 
                                                                     + 
                                                                     (0x1fU 
                                                                      & (((IData)(0xc4U) 
                                                                          * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                         >> 5U)))] 
                                                                    << 
                                                                    ((IData)(0x20U) 
                                                                     - 
                                                                     (0x1fU 
                                                                      & ((IData)(0xc4U) 
                                                                         * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                     ((IData)(4U) 
                                                                      + 
                                                                      (0x1fU 
                                                                       & (((IData)(0xc4U) 
                                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                          >> 5U)))] 
                                                                     >> 
                                                                     (0x1fU 
                                                                      & ((IData)(0xc4U) 
                                                                         * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                                  : 0U))) 
                                                >> 4U)))) 
                                 << 4U)));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U] 
            = ((0xfU & ((IData)((((QData)((IData)((
                                                   (0x30fU 
                                                    >= 
                                                    (0x3ffU 
                                                     & ((IData)(0xc4U) 
                                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                    ? 
                                                   (0xfU 
                                                    & (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0xc4U) 
                                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                         ? 0U
                                                         : 
                                                        (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                         ((IData)(7U) 
                                                          + 
                                                          (0x1fU 
                                                           & (((IData)(0xc4U) 
                                                               * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                              >> 5U)))] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0xc4U) 
                                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                       | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                          ((IData)(6U) 
                                                           + 
                                                           (0x1fU 
                                                            & (((IData)(0xc4U) 
                                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                               >> 5U)))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0xc4U) 
                                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))))
                                                    : 0U))) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                ((0x30fU 
                                                                  >= 
                                                                  (0x3ffU 
                                                                   & ((IData)(0xc4U) 
                                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                  ? 
                                                                 (((0U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((IData)(0xc4U) 
                                                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                    ? 0U
                                                                    : 
                                                                   (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                    ((IData)(6U) 
                                                                     + 
                                                                     (0x1fU 
                                                                      & (((IData)(0xc4U) 
                                                                          * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                         >> 5U)))] 
                                                                    << 
                                                                    ((IData)(0x20U) 
                                                                     - 
                                                                     (0x1fU 
                                                                      & ((IData)(0xc4U) 
                                                                         * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                     ((IData)(5U) 
                                                                      + 
                                                                      (0x1fU 
                                                                       & (((IData)(0xc4U) 
                                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                          >> 5U)))] 
                                                                     >> 
                                                                     (0x1fU 
                                                                      & ((IData)(0xc4U) 
                                                                         * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                                  : 0U))) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  ((0x30fU 
                                                                    >= 
                                                                    (0x3ffU 
                                                                     & ((IData)(0xc4U) 
                                                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                    ? 
                                                                   (((0U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((IData)(0xc4U) 
                                                                          * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                      ? 0U
                                                                      : 
                                                                     (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                      ((IData)(5U) 
                                                                       + 
                                                                       (0x1fU 
                                                                        & (((IData)(0xc4U) 
                                                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                           >> 5U)))] 
                                                                      << 
                                                                      ((IData)(0x20U) 
                                                                       - 
                                                                       (0x1fU 
                                                                        & ((IData)(0xc4U) 
                                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                    | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                       ((IData)(4U) 
                                                                        + 
                                                                        (0x1fU 
                                                                         & (((IData)(0xc4U) 
                                                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                            >> 5U)))] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(0xc4U) 
                                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                                    : 0U))) 
                                                  >> 4U)))) 
                        >> 0x1cU)) | (0xfffffff0U & 
                                      ((IData)(((((QData)((IData)(
                                                                  ((0x30fU 
                                                                    >= 
                                                                    (0x3ffU 
                                                                     & ((IData)(0xc4U) 
                                                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                    ? 
                                                                   (0xfU 
                                                                    & (((0U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & ((IData)(0xc4U) 
                                                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                         ? 0U
                                                                         : 
                                                                        (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                         ((IData)(7U) 
                                                                          + 
                                                                          (0x1fU 
                                                                           & (((IData)(0xc4U) 
                                                                               * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                              >> 5U)))] 
                                                                         << 
                                                                         ((IData)(0x20U) 
                                                                          - 
                                                                          (0x1fU 
                                                                           & ((IData)(0xc4U) 
                                                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                       | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                          ((IData)(6U) 
                                                                           + 
                                                                           (0x1fU 
                                                                            & (((IData)(0xc4U) 
                                                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                               >> 5U)))] 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & ((IData)(0xc4U) 
                                                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))))
                                                                    : 0U))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     ((0x30fU 
                                                                       >= 
                                                                       (0x3ffU 
                                                                        & ((IData)(0xc4U) 
                                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                       ? 
                                                                      (((0U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & ((IData)(0xc4U) 
                                                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                         ? 0U
                                                                         : 
                                                                        (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                         ((IData)(6U) 
                                                                          + 
                                                                          (0x1fU 
                                                                           & (((IData)(0xc4U) 
                                                                               * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                              >> 5U)))] 
                                                                         << 
                                                                         ((IData)(0x20U) 
                                                                          - 
                                                                          (0x1fU 
                                                                           & ((IData)(0xc4U) 
                                                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                       | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                          ((IData)(5U) 
                                                                           + 
                                                                           (0x1fU 
                                                                            & (((IData)(0xc4U) 
                                                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                               >> 5U)))] 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & ((IData)(0xc4U) 
                                                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                                       : 0U))) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       ((0x30fU 
                                                                         >= 
                                                                         (0x3ffU 
                                                                          & ((IData)(0xc4U) 
                                                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                         ? 
                                                                        (((0U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & ((IData)(0xc4U) 
                                                                               * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                           ? 0U
                                                                           : 
                                                                          (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                           ((IData)(5U) 
                                                                            + 
                                                                            (0x1fU 
                                                                             & (((IData)(0xc4U) 
                                                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                                >> 5U)))] 
                                                                           << 
                                                                           ((IData)(0x20U) 
                                                                            - 
                                                                            (0x1fU 
                                                                             & ((IData)(0xc4U) 
                                                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                         | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                            ((IData)(4U) 
                                                                             + 
                                                                             (0x1fU 
                                                                              & (((IData)(0xc4U) 
                                                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                                >> 5U)))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0xc4U) 
                                                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                                         : 0U))) 
                                                       >> 4U))) 
                                                >> 0x20U)) 
                                       << 4U)));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U] 
            = (0xfU & ((IData)(((((QData)((IData)((
                                                   (0x30fU 
                                                    >= 
                                                    (0x3ffU 
                                                     & ((IData)(0xc4U) 
                                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                    ? 
                                                   (0xfU 
                                                    & (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0xc4U) 
                                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                         ? 0U
                                                         : 
                                                        (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                         ((IData)(7U) 
                                                          + 
                                                          (0x1fU 
                                                           & (((IData)(0xc4U) 
                                                               * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                              >> 5U)))] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0xc4U) 
                                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                       | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                          ((IData)(6U) 
                                                           + 
                                                           (0x1fU 
                                                            & (((IData)(0xc4U) 
                                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                               >> 5U)))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0xc4U) 
                                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))))
                                                    : 0U))) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                ((0x30fU 
                                                                  >= 
                                                                  (0x3ffU 
                                                                   & ((IData)(0xc4U) 
                                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                  ? 
                                                                 (((0U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((IData)(0xc4U) 
                                                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                    ? 0U
                                                                    : 
                                                                   (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                    ((IData)(6U) 
                                                                     + 
                                                                     (0x1fU 
                                                                      & (((IData)(0xc4U) 
                                                                          * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                         >> 5U)))] 
                                                                    << 
                                                                    ((IData)(0x20U) 
                                                                     - 
                                                                     (0x1fU 
                                                                      & ((IData)(0xc4U) 
                                                                         * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                     ((IData)(5U) 
                                                                      + 
                                                                      (0x1fU 
                                                                       & (((IData)(0xc4U) 
                                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                          >> 5U)))] 
                                                                     >> 
                                                                     (0x1fU 
                                                                      & ((IData)(0xc4U) 
                                                                         * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                                  : 0U))) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  ((0x30fU 
                                                                    >= 
                                                                    (0x3ffU 
                                                                     & ((IData)(0xc4U) 
                                                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                    ? 
                                                                   (((0U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((IData)(0xc4U) 
                                                                          * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                      ? 0U
                                                                      : 
                                                                     (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                      ((IData)(5U) 
                                                                       + 
                                                                       (0x1fU 
                                                                        & (((IData)(0xc4U) 
                                                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                           >> 5U)))] 
                                                                      << 
                                                                      ((IData)(0x20U) 
                                                                       - 
                                                                       (0x1fU 
                                                                        & ((IData)(0xc4U) 
                                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                    | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                       ((IData)(4U) 
                                                                        + 
                                                                        (0x1fU 
                                                                         & (((IData)(0xc4U) 
                                                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                            >> 5U)))] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(0xc4U) 
                                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                                    : 0U))) 
                                                  >> 4U))) 
                                >> 0x20U)) >> 0x1cU));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U] 
            = ((0xfU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U]) 
               | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                           ((0x30fU 
                                                             >= 
                                                             (0x3ffU 
                                                              & ((IData)(0xc4U) 
                                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                             ? 
                                                            (((0U 
                                                               == 
                                                               (0x1fU 
                                                                & ((IData)(0xc4U) 
                                                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                               ? 0U
                                                               : 
                                                              (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                               ((IData)(5U) 
                                                                + 
                                                                (0x1fU 
                                                                 & (((IData)(0xc4U) 
                                                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                    >> 5U)))] 
                                                               << 
                                                               ((IData)(0x20U) 
                                                                - 
                                                                (0x1fU 
                                                                 & ((IData)(0xc4U) 
                                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                             | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                ((IData)(4U) 
                                                                 + 
                                                                 (0x1fU 
                                                                  & (((IData)(0xc4U) 
                                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                     >> 5U)))] 
                                                                >> 
                                                                (0x1fU 
                                                                 & ((IData)(0xc4U) 
                                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                             : 0U))) 
                                           << 0x3cU) 
                                          | (((QData)((IData)(
                                                              ((0x30fU 
                                                                >= 
                                                                (0x3ffU 
                                                                 & ((IData)(0xc4U) 
                                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                ? 
                                                               (((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((IData)(0xc4U) 
                                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                  ? 0U
                                                                  : 
                                                                 (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                  ((IData)(4U) 
                                                                   + 
                                                                   (0x1fU 
                                                                    & (((IData)(0xc4U) 
                                                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                       >> 5U)))] 
                                                                  << 
                                                                  ((IData)(0x20U) 
                                                                   - 
                                                                   (0x1fU 
                                                                    & ((IData)(0xc4U) 
                                                                       * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                   ((IData)(3U) 
                                                                    + 
                                                                    (0x1fU 
                                                                     & (((IData)(0xc4U) 
                                                                         * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                        >> 5U)))] 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & ((IData)(0xc4U) 
                                                                       * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                                : 0U))) 
                                              << 0x1cU) 
                                             | ((QData)((IData)(
                                                                ((0x30fU 
                                                                  >= 
                                                                  (0x3ffU 
                                                                   & ((IData)(0xc4U) 
                                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                  ? 
                                                                 (((0U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((IData)(0xc4U) 
                                                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                    ? 0U
                                                                    : 
                                                                   (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                    ((IData)(3U) 
                                                                     + 
                                                                     (0x1fU 
                                                                      & (((IData)(0xc4U) 
                                                                          * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                         >> 5U)))] 
                                                                    << 
                                                                    ((IData)(0x20U) 
                                                                     - 
                                                                     (0x1fU 
                                                                      & ((IData)(0xc4U) 
                                                                         * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                     ((IData)(2U) 
                                                                      + 
                                                                      (0x1fU 
                                                                       & (((IData)(0xc4U) 
                                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                          >> 5U)))] 
                                                                     >> 
                                                                     (0x1fU 
                                                                      & ((IData)(0xc4U) 
                                                                         * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                                  : 0U))) 
                                                >> 4U)))) 
                                 << 4U)));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U] 
            = ((0xfU & ((IData)((((QData)((IData)((
                                                   (0x30fU 
                                                    >= 
                                                    (0x3ffU 
                                                     & ((IData)(0xc4U) 
                                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0xc4U) 
                                                          * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                      ? 0U
                                                      : 
                                                     (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                      ((IData)(5U) 
                                                       + 
                                                       (0x1fU 
                                                        & (((IData)(0xc4U) 
                                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                           >> 5U)))] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0xc4U) 
                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                    | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                       ((IData)(4U) 
                                                        + 
                                                        (0x1fU 
                                                         & (((IData)(0xc4U) 
                                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                            >> 5U)))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0xc4U) 
                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                    : 0U))) 
                                  << 0x3cU) | (((QData)((IData)(
                                                                ((0x30fU 
                                                                  >= 
                                                                  (0x3ffU 
                                                                   & ((IData)(0xc4U) 
                                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                  ? 
                                                                 (((0U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & ((IData)(0xc4U) 
                                                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                    ? 0U
                                                                    : 
                                                                   (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                    ((IData)(4U) 
                                                                     + 
                                                                     (0x1fU 
                                                                      & (((IData)(0xc4U) 
                                                                          * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                         >> 5U)))] 
                                                                    << 
                                                                    ((IData)(0x20U) 
                                                                     - 
                                                                     (0x1fU 
                                                                      & ((IData)(0xc4U) 
                                                                         * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                  | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                     ((IData)(3U) 
                                                                      + 
                                                                      (0x1fU 
                                                                       & (((IData)(0xc4U) 
                                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                          >> 5U)))] 
                                                                     >> 
                                                                     (0x1fU 
                                                                      & ((IData)(0xc4U) 
                                                                         * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                                  : 0U))) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  ((0x30fU 
                                                                    >= 
                                                                    (0x3ffU 
                                                                     & ((IData)(0xc4U) 
                                                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                    ? 
                                                                   (((0U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((IData)(0xc4U) 
                                                                          * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                      ? 0U
                                                                      : 
                                                                     (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                      ((IData)(3U) 
                                                                       + 
                                                                       (0x1fU 
                                                                        & (((IData)(0xc4U) 
                                                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                           >> 5U)))] 
                                                                      << 
                                                                      ((IData)(0x20U) 
                                                                       - 
                                                                       (0x1fU 
                                                                        & ((IData)(0xc4U) 
                                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                    | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                       ((IData)(2U) 
                                                                        + 
                                                                        (0x1fU 
                                                                         & (((IData)(0xc4U) 
                                                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                            >> 5U)))] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(0xc4U) 
                                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                                    : 0U))) 
                                                  >> 4U)))) 
                        >> 0x1cU)) | (0xfffffff0U & 
                                      ((IData)(((((QData)((IData)(
                                                                  ((0x30fU 
                                                                    >= 
                                                                    (0x3ffU 
                                                                     & ((IData)(0xc4U) 
                                                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                    ? 
                                                                   (((0U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & ((IData)(0xc4U) 
                                                                          * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                      ? 0U
                                                                      : 
                                                                     (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                      ((IData)(5U) 
                                                                       + 
                                                                       (0x1fU 
                                                                        & (((IData)(0xc4U) 
                                                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                           >> 5U)))] 
                                                                      << 
                                                                      ((IData)(0x20U) 
                                                                       - 
                                                                       (0x1fU 
                                                                        & ((IData)(0xc4U) 
                                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                    | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                       ((IData)(4U) 
                                                                        + 
                                                                        (0x1fU 
                                                                         & (((IData)(0xc4U) 
                                                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                            >> 5U)))] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & ((IData)(0xc4U) 
                                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                                    : 0U))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     ((0x30fU 
                                                                       >= 
                                                                       (0x3ffU 
                                                                        & ((IData)(0xc4U) 
                                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                       ? 
                                                                      (((0U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & ((IData)(0xc4U) 
                                                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                         ? 0U
                                                                         : 
                                                                        (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                         ((IData)(4U) 
                                                                          + 
                                                                          (0x1fU 
                                                                           & (((IData)(0xc4U) 
                                                                               * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                              >> 5U)))] 
                                                                         << 
                                                                         ((IData)(0x20U) 
                                                                          - 
                                                                          (0x1fU 
                                                                           & ((IData)(0xc4U) 
                                                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                       | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                          ((IData)(3U) 
                                                                           + 
                                                                           (0x1fU 
                                                                            & (((IData)(0xc4U) 
                                                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                               >> 5U)))] 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & ((IData)(0xc4U) 
                                                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                                       : 0U))) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       ((0x30fU 
                                                                         >= 
                                                                         (0x3ffU 
                                                                          & ((IData)(0xc4U) 
                                                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                         ? 
                                                                        (((0U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & ((IData)(0xc4U) 
                                                                               * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                           ? 0U
                                                                           : 
                                                                          (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                           ((IData)(3U) 
                                                                            + 
                                                                            (0x1fU 
                                                                             & (((IData)(0xc4U) 
                                                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                                >> 5U)))] 
                                                                           << 
                                                                           ((IData)(0x20U) 
                                                                            - 
                                                                            (0x1fU 
                                                                             & ((IData)(0xc4U) 
                                                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                         | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                            ((IData)(2U) 
                                                                             + 
                                                                             (0x1fU 
                                                                              & (((IData)(0xc4U) 
                                                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                                >> 5U)))] 
                                                                            >> 
                                                                            (0x1fU 
                                                                             & ((IData)(0xc4U) 
                                                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                                         : 0U))) 
                                                       >> 4U))) 
                                                >> 0x20U)) 
                                       << 4U)));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U] 
            = ((0xfffffff0U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U]) 
               | (0xfU & ((IData)(((((QData)((IData)(
                                                     ((0x30fU 
                                                       >= 
                                                       (0x3ffU 
                                                        & ((IData)(0xc4U) 
                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0xc4U) 
                                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                         ? 0U
                                                         : 
                                                        (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                         ((IData)(5U) 
                                                          + 
                                                          (0x1fU 
                                                           & (((IData)(0xc4U) 
                                                               * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                              >> 5U)))] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0xc4U) 
                                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                       | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                          ((IData)(4U) 
                                                           + 
                                                           (0x1fU 
                                                            & (((IData)(0xc4U) 
                                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                               >> 5U)))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0xc4U) 
                                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                       : 0U))) 
                                     << 0x3cU) | (((QData)((IData)(
                                                                   ((0x30fU 
                                                                     >= 
                                                                     (0x3ffU 
                                                                      & ((IData)(0xc4U) 
                                                                         * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                     ? 
                                                                    (((0U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & ((IData)(0xc4U) 
                                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                       ? 0U
                                                                       : 
                                                                      (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                       ((IData)(4U) 
                                                                        + 
                                                                        (0x1fU 
                                                                         & (((IData)(0xc4U) 
                                                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                            >> 5U)))] 
                                                                       << 
                                                                       ((IData)(0x20U) 
                                                                        - 
                                                                        (0x1fU 
                                                                         & ((IData)(0xc4U) 
                                                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                     | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                        ((IData)(3U) 
                                                                         + 
                                                                         (0x1fU 
                                                                          & (((IData)(0xc4U) 
                                                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                             >> 5U)))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & ((IData)(0xc4U) 
                                                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                                     : 0U))) 
                                                   << 0x1cU) 
                                                  | ((QData)((IData)(
                                                                     ((0x30fU 
                                                                       >= 
                                                                       (0x3ffU 
                                                                        & ((IData)(0xc4U) 
                                                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                       ? 
                                                                      (((0U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & ((IData)(0xc4U) 
                                                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                                                         ? 0U
                                                                         : 
                                                                        (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                         ((IData)(3U) 
                                                                          + 
                                                                          (0x1fU 
                                                                           & (((IData)(0xc4U) 
                                                                               * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                              >> 5U)))] 
                                                                         << 
                                                                         ((IData)(0x20U) 
                                                                          - 
                                                                          (0x1fU 
                                                                           & ((IData)(0xc4U) 
                                                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                                                                       | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                                                          ((IData)(2U) 
                                                                           + 
                                                                           (0x1fU 
                                                                            & (((IData)(0xc4U) 
                                                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                                               >> 5U)))] 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & ((IData)(0xc4U) 
                                                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))
                                                                       : 0U))) 
                                                     >> 4U))) 
                                   >> 0x20U)) >> 0x1cU)));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U] 
            = ((0xfffffff3U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U]) 
               | ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                   ? (0xcU & (((0U == (0x1fU & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                                ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                        ((IData)(3U) 
                                         + (0x1fU & 
                                            (((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                                        << ((IData)(0x20U) 
                                            - (0x1fU 
                                               & ((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                              | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                 ((IData)(2U) + (0x1fU 
                                                 & (((IData)(0xc4U) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                    >> 5U)))] 
                                 >> (0x1fU & ((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))))
                   : 0U));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U] 
            = ((0xfffffffcU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U]) 
               | ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                        * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                   ? (3U & (((0U == (0x1fU & ((IData)(0xc4U) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                              ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                      ((IData)(3U) 
                                       + (0x1fU & (
                                                   ((IData)(0xc4U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                            | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                               ((IData)(2U) + (0x1fU 
                                               & (((IData)(0xc4U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                               >> (0x1fU & ((IData)(0xc4U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))))
                   : 0U));
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid) 
                          & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                         | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid)) 
                               & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__next_state 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid;
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid) 
                          & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid)) 
                              & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready))))) {
                    vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_push = 0U;
    if ((((IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        if (vlTOPp->plb_master_mem_gnt) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_push = 1U;
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 1U)) | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                           & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                              >> 1U)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__next_state 
            = (1U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid));
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__next_state 
                = (1U & ((((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                           >> 1U) & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                     >> 2U)) | (~ (
                                                   (~ 
                                                    ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                                     >> 1U)) 
                                                   & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                                      >> 2U)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__next_state 
            = (1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                     >> 1U));
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__next_state 
                = (1U & ((((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                           >> 2U) & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                     >> 3U)) | (~ (
                                                   (~ 
                                                    ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                                     >> 2U)) 
                                                   & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                                      >> 3U)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__next_state 
            = (1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                     >> 2U));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_q[6U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__current_state) {
            if ((1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                       & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                          >> 1U)))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__walking_stage_data[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__walking_stage_data[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__walking_stage_data[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__walking_stage_data[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__walking_stage_data[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__walking_stage_data[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[6U] 
                    = (0xfU & vlTOPp->mptw_top__DOT__walking_stage_data[6U]);
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__walking_stage_data[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__walking_stage_data[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__walking_stage_data[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__walking_stage_data[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__walking_stage_data[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__walking_stage_data[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__reg_data_d[6U] 
                = (0xfU & vlTOPp->mptw_top__DOT__walking_stage_data[6U]);
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_q[6U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__current_state) {
            if ((1U & (((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                        >> 1U) & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                  >> 2U)))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[0U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[7U] 
                        << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[6U] 
                                     >> 4U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[1U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                        << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[7U] 
                                     >> 4U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[2U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[9U] 
                        << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                                     >> 4U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[3U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                        << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[9U] 
                                     >> 4U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[4U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                        << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                     >> 4U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[5U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                        << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                     >> 4U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[6U] 
                    = (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                                << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                             >> 4U)));
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[0U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[7U] 
                    << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[6U] 
                                 >> 4U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[1U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                    << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[7U] 
                                 >> 4U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[2U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[9U] 
                    << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                                 >> 4U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[3U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                    << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[9U] 
                                 >> 4U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[4U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                    << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                 >> 4U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[5U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                    << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                 >> 4U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__reg_data_d[6U] 
                = (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                            << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                         >> 4U)));
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_q[6U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__current_state) {
            if ((1U & (((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                        >> 2U) & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                  >> 3U)))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[0U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                        << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                     >> 8U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[1U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
                        << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                                     >> 8U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[2U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
                        << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
                                     >> 8U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[3U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                        << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
                                     >> 8U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[4U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
                        << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                                     >> 8U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[5U] 
                    = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                        << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
                                     >> 8U));
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[6U] 
                    = (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                             >> 8U)));
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[0U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                    << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                 >> 8U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[1U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
                    << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                                 >> 8U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[2U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
                    << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
                                 >> 8U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[3U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                    << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
                                 >> 8U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[4U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
                    << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                                 >> 8U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[5U] 
                = ((vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                    << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
                                 >> 8U));
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__reg_data_d[6U] 
                = (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                            << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                         >> 8U)));
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_reg__s_data_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 1U))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                              & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                 >> 1U))))) {
                    vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_reg__s_data_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_reg__s_data_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_reg__s_data_ready = 1U;
            if ((1U & (~ (((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                           >> 1U) & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                     >> 2U))))) {
                if ((1U & (~ ((~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                  >> 1U)) & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                             >> 2U))))) {
                    vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_reg__s_data_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_reg__s_data_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_reg__s_data_ready = 1U;
            if ((1U & (~ (((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                           >> 2U) & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                     >> 3U))))) {
                if ((1U & (~ ((~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                  >> 2U)) & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                             >> 3U))))) {
                    vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_reg__s_data_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_reg__s_data_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)));
    }
    if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_transaction_valid_i) 
                          & (IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready)) 
                         | (~ ((~ (IData)(vlTOPp->mptw_transaction_valid_i)) 
                               & (IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__next_state 
            = vlTOPp->mptw_transaction_valid_i;
    }
    vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[6U];
    if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_transaction_valid_i) 
                 & (IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready))) {
                vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__input_transaction[0U];
                vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__input_transaction[1U];
                vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__input_transaction[2U];
                vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__input_transaction[3U];
                vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__input_transaction[4U];
                vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__input_transaction[5U];
                vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__input_transaction[6U];
            }
        }
    } else {
        if (vlTOPp->mptw_transaction_valid_i) {
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__input_transaction[0U];
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__input_transaction[1U];
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__input_transaction[2U];
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__input_transaction[3U];
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__input_transaction[4U];
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__input_transaction[5U];
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__input_transaction[6U];
        }
    }
    if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_transaction_valid_i) 
                          & (IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_transaction_valid_i)) 
                              & (IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready))))) {
                    vlTOPp->mptw_top__DOT__fetch_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_to_pipe_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_data_in[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_data_in[1U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_data_in[2U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_data_in[3U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_data_in[4U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_data_in[5U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_data_in[6U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U];
    if ((0U == (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[0U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[1U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[2U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[3U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[4U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[5U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[6U] 
            = (0xfU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U]);
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[0U] 
            = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(1U) + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      (0x1fU & (((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                >> 5U))] >> (0x1fU 
                                             & ((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[1U] 
            = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(2U) + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      ((IData)(1U) + (0x1fU & (((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[2U] 
            = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(3U) + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      ((IData)(2U) + (0x1fU & (((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[3U] 
            = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(4U) + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      ((IData)(3U) + (0x1fU & (((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[4U] 
            = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(5U) + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      ((IData)(4U) + (0x1fU & (((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[5U] 
            = ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(6U) + (0x1fU 
                                             & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0xc4U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      ((IData)(5U) + (0x1fU & (((IData)(0xc4U) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[6U] 
            = (0xfU & ((0x30fU >= (0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(7U) + 
                                      (0x1fU & (((IData)(0xc4U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(6U) + (0x1fU 
                                              & (((IData)(0xc4U) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0xc4U) 
                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U));
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop = 0U;
    if (vlTOPp->plb_master_mem_valid) {
        if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready) 
             & (0U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop = 1U;
        }
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push = 0U;
    if (vlTOPp->plb_master_mem_valid) {
        if ((((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready)) 
              | (0U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
             & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push = 1U;
        }
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_push) 
           & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_pop)) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[1U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[1U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[2U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[2U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[3U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[3U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[4U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[4U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[5U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[5U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[6U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[6U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[7U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[7U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[8U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[8U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[9U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[9U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xaU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xaU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xbU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xbU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xcU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xcU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xdU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xdU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xeU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xeU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xfU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xfU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x10U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x10U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x11U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x11U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x12U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x12U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x13U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x13U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x14U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x14U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x15U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x15U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x16U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x16U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x17U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x17U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x18U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x18U];
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[0U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[1U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[2U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[3U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[4U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[5U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[6U];
        if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(196,(0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1);
        }
    }
    vlTOPp->mptw_top__DOT__walking_stage_ready = ((0xeU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                                                  | (IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_reg__s_data_ready));
    vlTOPp->mptw_top__DOT__walking_stage_ready = ((0xdU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_reg__s_data_ready) 
                                                     << 1U));
    vlTOPp->mptw_top__DOT__walking_stage_ready = ((0xbU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_reg__s_data_ready) 
                                                     << 2U));
    vlTOPp->mptw_ready_o = vlTOPp->mptw_top__DOT__fetch_to_pipe_ready;
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[0U] = 0U;
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[1U] = 0U;
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[2U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[2U]) 
           | ((0U != (((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[0U]))))
               ? 3U : 0U));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[3U] 
        = ((3U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[3U]) 
           | (0xfffffffcU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[3U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U] 
        = ((3U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[4U]) 
           | (0xfffffffcU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[4U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[5U] 
        = ((3U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[5U]) 
           | (0xfffffffcU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[5U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[6U] 
        = ((3U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[6U]) 
           | (0xcU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[6U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid 
        = (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready) 
            & (0U == (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))
            ? (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_pop)
            : (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
           & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop)) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[1U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[1U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[2U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[2U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[3U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[3U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[4U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[4U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[5U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[5U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[6U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[6U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[7U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[7U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[8U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[8U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[9U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[9U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xaU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xaU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xbU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xbU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xcU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xcU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xdU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xdU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xeU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xeU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xfU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xfU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x10U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x10U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x11U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x11U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x12U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x12U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x13U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x13U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x14U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x14U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x15U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x15U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x16U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x16U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x17U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x17U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x18U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x18U];
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_data_in[0U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_data_in[1U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_data_in[2U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_data_in[3U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_data_in[4U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_data_in[5U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_data_in[6U];
        if ((0x30fU >= (0x3ffU & ((IData)(0xc4U) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(196,(0x3ffU & ((IData)(0xc4U) 
                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1);
        }
    }
    vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[6U];
    if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid) 
                 & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready))) {
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[0U];
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[1U];
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[2U];
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[3U];
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U];
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[5U];
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[6U];
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid) {
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[0U];
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[1U];
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[2U];
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[3U];
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U];
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[5U];
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[6U];
        }
    }
}

VL_INLINE_OPT void Vmptw_top::_sequent__TOP__7(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_sequent__TOP__7\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->plb_master_mem_req = 0U;
    if ((((IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->plb_master_mem_req = 1U;
    }
    vlTOPp->plb_master_mem_addr = 0ULL;
    if ((((IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->plb_master_mem_addr = (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[4U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[3U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[2U])) 
                                           >> 4U)));
    }
}

void Vmptw_top::_eval(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_eval\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
    vlTOPp->__Vclklast__TOP__rst_ni = vlTOPp->rst_ni;
}

VL_INLINE_OPT QData Vmptw_top::_change_request(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_change_request\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vmptw_top::_change_request_1(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_change_request_1\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->mptw_top__DOT__walking_stage_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__walking_stage_ready)
         | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid));
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__walking_stage_ready ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__walking_stage_ready))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_pipelining/rtl/mptw_top.sv:250: mptw_top.walking_stage_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_pipelining/rtl/plb_lookup_stage.sv:68: mptw_top.plb_lookup_stage_u.mem_to_local_bus_valid\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__walking_stage_ready 
        = vlTOPp->mptw_top__DOT__walking_stage_ready;
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid;
    return __req;
}

#ifdef VL_DEBUG
void Vmptw_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((flush_i & 0xfeU))) {
        Verilated::overWidthError("flush_i");}
    if (VL_UNLIKELY((mptw_enable_i & 0xfeU))) {
        Verilated::overWidthError("mptw_enable_i");}
    if (VL_UNLIKELY((access_type_i & 0xfcU))) {
        Verilated::overWidthError("access_type_i");}
    if (VL_UNLIKELY((mptw_transaction_valid_i & 0xfeU))) {
        Verilated::overWidthError("mptw_transaction_valid_i");}
    if (VL_UNLIKELY((plb_master_mem_gnt & 0xfeU))) {
        Verilated::overWidthError("plb_master_mem_gnt");}
    if (VL_UNLIKELY((plb_master_mem_valid & 0xfeU))) {
        Verilated::overWidthError("plb_master_mem_valid");}
    if (VL_UNLIKELY((plb_master_mem_error & 0xfeU))) {
        Verilated::overWidthError("plb_master_mem_error");}
}
#endif  // VL_DEBUG
