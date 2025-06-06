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
            VL_FATAL_MT("/home/stefano/Desktop/Work/Projects/smmtt/b_pipelining/rtl/mptw_top.sv", 23, "",
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
            VL_FATAL_MT("/home/stefano/Desktop/Work/Projects/smmtt/b_pipelining/rtl/mptw_top.sv", 23, "",
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
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U]) 
           | (0xfffffff0U & ((IData)(vlTOPp->walking_mem_master_mem_rdata
                                     [0U]) << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[7U] 
        = ((0xfU & ((IData)(vlTOPp->walking_mem_master_mem_rdata
                            [0U]) >> 0x1cU)) | (0xfffffff0U 
                                                & ((IData)(
                                                           (vlTOPp->walking_mem_master_mem_rdata
                                                            [0U] 
                                                            >> 0x20U)) 
                                                   << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U] 
        = ((0x3f0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U]) 
           | (0xfU & ((IData)((vlTOPp->walking_mem_master_mem_rdata
                               [0U] >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U]) 
           | (0xfffffff0U & ((IData)(vlTOPp->walking_mem_master_mem_rdata
                                     [1U]) << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[7U] 
        = ((0xfU & ((IData)(vlTOPp->walking_mem_master_mem_rdata
                            [1U]) >> 0x1cU)) | (0xfffffff0U 
                                                & ((IData)(
                                                           (vlTOPp->walking_mem_master_mem_rdata
                                                            [1U] 
                                                            >> 0x20U)) 
                                                   << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U] 
        = ((0x3f0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U]) 
           | (0xfU & ((IData)((vlTOPp->walking_mem_master_mem_rdata
                               [1U] >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U]) 
           | (0xfffffff0U & ((IData)(vlTOPp->walking_mem_master_mem_rdata
                                     [2U]) << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[7U] 
        = ((0xfU & ((IData)(vlTOPp->walking_mem_master_mem_rdata
                            [2U]) >> 0x1cU)) | (0xfffffff0U 
                                                & ((IData)(
                                                           (vlTOPp->walking_mem_master_mem_rdata
                                                            [2U] 
                                                            >> 0x20U)) 
                                                   << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U] 
        = ((0x3f0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U]) 
           | (0xfU & ((IData)((vlTOPp->walking_mem_master_mem_rdata
                               [2U] >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__input_transaction[0U] = (IData)(vlTOPp->mmpt_reg_i);
    vlTOPp->mptw_top__DOT__input_transaction[1U] = (IData)(
                                                           (vlTOPp->mmpt_reg_i 
                                                            >> 0x20U));
    vlTOPp->mptw_top__DOT__input_transaction[2U] = (IData)(vlTOPp->spa_i);
    vlTOPp->mptw_top__DOT__input_transaction[3U] = (IData)(
                                                           (vlTOPp->spa_i 
                                                            >> 0x20U));
    vlTOPp->mptw_top__DOT__input_transaction[4U] = 
        ((0xfffffffcU & vlTOPp->mptw_top__DOT__input_transaction[4U]) 
         | (IData)(vlTOPp->access_type_i));
    vlTOPp->mptw_top__DOT__input_transaction[8U] = 
        ((0x1ffU & vlTOPp->mptw_top__DOT__input_transaction[8U]) 
         | (0xfffffe00U & ((IData)(vlTOPp->mptw_transaction_valid_i) 
                           << 9U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U]) 
           | (0xfffffff0U & ((IData)(vlTOPp->plb_master_mem_rdata) 
                             << 4U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[7U] 
        = ((0xfU & ((IData)(vlTOPp->plb_master_mem_rdata) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         (vlTOPp->plb_master_mem_rdata 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U] 
        = ((0x3f0U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U]) 
           | (0xfU & ((IData)((vlTOPp->plb_master_mem_rdata 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[0U]))));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[1U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[0U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[3U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[2U]))));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[2U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__input_transaction[4U]));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__input_transaction[8U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__input_transaction[7U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                        >> 4U)))) << 4U)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[8U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__input_transaction[7U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                              >> 4U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__input_transaction[8U])) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__input_transaction[7U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                                                 >> 4U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0x3f0U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[8U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__input_transaction[7U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                                 >> 4U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0x1ffU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & vlTOPp->mptw_top__DOT__input_transaction[8U]));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__input_transaction[5U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                        >> 4U)))) << 4U)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[5U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__input_transaction[5U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                              >> 4U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__input_transaction[5U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                                                 >> 4U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__input_transaction[6U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__input_transaction[5U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__input_transaction[4U])) 
                                                 >> 4U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0x3efU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
           | (0x10U & vlTOPp->mptw_top__DOT__input_transaction[8U]));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0x31fU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x200U & vlTOPp->mptw_top__DOT__input_transaction[8U])
                               ? (7U & (vlTOPp->mptw_top__DOT__input_transaction[8U] 
                                        >> 5U)) : 0U) 
                             << 5U)));
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U] 
        = ((0x2ffU & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__input_transaction[8U] 
                         >> 1U) & vlTOPp->mptw_top__DOT__input_transaction[8U])));
    vlTOPp->mptw_top__DOT__fetch_exception_cause = 0U;
    if (((IData)(vlTOPp->mptw_transaction_valid_i) 
         & (vlTOPp->mptw_top__DOT__input_transaction[8U] 
            >> 9U))) {
        if ((0x80000000U & vlTOPp->mptw_top__DOT__input_transaction[1U])) {
            vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
        } else {
            if ((0x40000000U & vlTOPp->mptw_top__DOT__input_transaction[1U])) {
                vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
            } else {
                if ((0x20000000U & vlTOPp->mptw_top__DOT__input_transaction[1U])) {
                    if ((0x10000000U & vlTOPp->mptw_top__DOT__input_transaction[1U])) {
                        vlTOPp->mptw_top__DOT__fetch_exception_cause = 0U;
                    } else {
                        if ((0U != (0xfffU & ((vlTOPp->mptw_top__DOT__input_transaction[4U] 
                                               << 0xcU) 
                                              | (vlTOPp->mptw_top__DOT__input_transaction[3U] 
                                                 >> 0x14U))))) {
                            vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
                        }
                    }
                } else {
                    if ((0x10000000U & vlTOPp->mptw_top__DOT__input_transaction[1U])) {
                        if ((0U != (0x1fffffU & ((vlTOPp->mptw_top__DOT__input_transaction[4U] 
                                                  << 0x15U) 
                                                 | (vlTOPp->mptw_top__DOT__input_transaction[3U] 
                                                    >> 0xbU))))) {
                            vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
                        }
                    } else {
                        vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
                    }
                }
            }
        }
    }
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & (((0U != (IData)(vlTOPp->mptw_top__DOT__fetch_exception_cause))
                               ? 3U : 0U) << 2U)));
}

VL_INLINE_OPT void Vmptw_top::_sequent__TOP__4(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_sequent__TOP__4\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state) 
               & 1U);
    } else {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state = 0U;
    }
    vlTOPp->plb_master_mem_addr = (((QData)((IData)(
                                                    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U])));
    vlTOPp->walking_mem_master_mem_addr[2U] = (((QData)((IData)(
                                                                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U])));
    vlTOPp->walking_mem_master_mem_addr[1U] = (((QData)((IData)(
                                                                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U])));
    vlTOPp->walking_mem_master_mem_addr[0U] = (((QData)((IData)(
                                                                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U])));
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__commit_to_output_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__commit_to_output_valid = 0U;
    }
    vlTOPp->mptw_top__DOT__walking_stage_data[0U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__walking_stage_data[1U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__walking_stage_data[2U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__walking_stage_data[3U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__walking_stage_data[4U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__walking_stage_data[5U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__walking_stage_data[6U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__walking_stage_data[7U] = 
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__walking_stage_data[8U] = 
        ((0xfffffc00U & vlTOPp->mptw_top__DOT__walking_stage_data[8U]) 
         | vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U]);
    vlTOPp->mptw_top__DOT__walking_stage_data[0x18U] 
        = ((0x3fffffffU & vlTOPp->mptw_top__DOT__walking_stage_data[0x18U]) 
           | (0xc0000000U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                             << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x19U] 
        = ((0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                                       << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU] 
        = ((0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                                       << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
        = ((0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                       << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x1cU] 
        = ((0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                                       << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU] 
        = ((0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                                       << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x1eU] 
        = ((0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                                       << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x1fU] 
        = ((0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                                       << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x20U] 
        = ((0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                           >> 2U)) | (0xc0000000U & 
                                      (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                                       << 0x1eU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x21U] 
        = (0x3fffffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                          >> 2U));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
        = ((0xfffffU & vlTOPp->mptw_top__DOT__walking_stage_data[0x10U]) 
           | (0xfff00000U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                             << 0x14U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
        = ((0xfffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                                      << 0x14U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
        = ((0xfffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                                      << 0x14U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
        = ((0xfffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                      << 0x14U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
        = ((0xfffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                                      << 0x14U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x15U] 
        = ((0xfffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                                      << 0x14U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x16U] 
        = ((0xfffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                                      << 0x14U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x17U] 
        = ((0xfffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                                      << 0x14U)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x18U] 
        = ((0xc0000000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x18U]) 
           | ((0xfffffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                           >> 0xcU)) | (0xfff00000U 
                                        & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                                           << 0x14U))));
    vlTOPp->mptw_top__DOT__walking_stage_data[8U] = 
        ((0x3ffU & vlTOPp->mptw_top__DOT__walking_stage_data[8U]) 
         | (0xfffffc00U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                           << 0xaU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[9U] = 
        ((0x3ffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U] 
                    >> 0x16U)) | (0xfffffc00U & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                                                 << 0xaU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
        = ((0x3ffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U] 
                      >> 0x16U)) | (0xfffffc00U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                                                   << 0xaU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
        = ((0x3ffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U] 
                      >> 0x16U)) | (0xfffffc00U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                                                   << 0xaU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
        = ((0x3ffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U] 
                      >> 0x16U)) | (0xfffffc00U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                                                   << 0xaU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
        = ((0x3ffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U] 
                      >> 0x16U)) | (0xfffffc00U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                                                   << 0xaU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
        = ((0x3ffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U] 
                      >> 0x16U)) | (0xfffffc00U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                                                   << 0xaU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
        = ((0x3ffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U] 
                      >> 0x16U)) | (0xfffffc00U & (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                                                   << 0xaU)));
    vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
        = ((0xfff00000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x10U]) 
           | ((0x3ffU & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U] 
                         >> 0x16U)) | (0xfffffc00U 
                                       & (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U] 
                                          << 0xaU))));
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid = 0U;
    }
    if ((8U & vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
                             << 6U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU] 
                                       >> 0x1aU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
                                 << 6U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU] 
                                           >> 0x1aU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
                                     << 6U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU] 
                                               >> 0x1aU))))) {
                    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
                             << 6U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU] 
                                       >> 0x1aU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
                                 << 6U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU] 
                                           >> 0x1aU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
                                     << 6U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU] 
                                               >> 0x1aU))))) {
                    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data[4U])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                             << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                       >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                 << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                           >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                     << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                               >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                             << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                       >> 0x1cU))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                 << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                           >> 0x1cU))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                     << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                               >> 0x1cU))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    if ((0x8000U & vlTOPp->mptw_top__DOT__walking_stage_data[0xcU])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                             << 0x1aU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                          >> 6U))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                 << 0x1aU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                              >> 6U))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                     << 0x1aU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                                  >> 6U))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                             << 0x1aU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                          >> 6U))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                 << 0x1aU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                              >> 6U))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                     << 0x1aU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                                  >> 6U))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    if ((0x2000000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x14U])) {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                             << 0x10U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                          >> 0x10U))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                 << 0x10U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                              >> 0x10U))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                     << 0x10U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                                  >> 0x10U))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    } else {
        if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                             << 0x10U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                          >> 0x10U))))) {
            if ((2U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                 << 0x10U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                              >> 0x10U))))) {
                if ((3U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                     << 0x10U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                                  >> 0x10U))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o = 6U;
                }
            }
        }
    }
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU])) 
                    << 0x22U) | (((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x19U])) 
                                  << 2U) | ((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0x18U])) 
                                            >> 0x1eU))));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU])) 
                     << 0x22U) | (((QData)((IData)(
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[0x19U])) 
                                   << 2U) | ((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__walking_stage_data[0x18U])) 
                                             >> 0x1eU))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x1cU])) 
                    << 0x22U) | (((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU])) 
                                  << 2U) | ((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU])) 
                                            >> 0x1eU))));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x1cU])) 
                     << 0x22U) | (((QData)((IData)(
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU])) 
                                   << 2U) | ((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU])) 
                                             >> 0x1eU))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[4U]) 
           | (3U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU] 
                     << 2U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1cU] 
                               >> 0x1eU))));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__walking_stage_data[0x21U])) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data[0x20U])) 
                                        << 0x1eU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data[0x1fU])) 
                                        >> 2U)))) << 4U)));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x21U])) 
                              << 0x3eU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0x20U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data[0x1fU])) 
                                              >> 2U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0x21U])) 
                                                            << 0x3eU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0x20U])) 
                                                               << 0x1eU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__walking_stage_data[0x1fU])) 
                                                                 >> 2U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U] 
        = ((0x3f0U & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x21U])) 
                                 << 0x3eU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0x20U])) 
                                               << 0x1eU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data[0x1fU])) 
                                                 >> 2U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U] 
        = ((0x1ffU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & (vlTOPp->mptw_top__DOT__walking_stage_data[0x21U] 
                        << 2U)));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U] 
        = ((0x3efU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U]) 
           | (0x10U & (vlTOPp->mptw_top__DOT__walking_stage_data[0x21U] 
                       << 2U)));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U] 
        = ((0x31fU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x80U & vlTOPp->mptw_top__DOT__walking_stage_data[0x21U])
                               ? (7U & (vlTOPp->mptw_top__DOT__walking_stage_data[0x21U] 
                                        >> 3U)) : 0U) 
                             << 5U)));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U] 
        = ((0x2ffU & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x21U] 
                         << 1U) & (vlTOPp->mptw_top__DOT__walking_stage_data[0x21U] 
                                   << 2U))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[1U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[3U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[2U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[2U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__walking_stage_data[4U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__walking_stage_data[8U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data[7U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data[6U])) 
                                        >> 4U)))) << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[8U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data[7U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data[6U])) 
                                              >> 4U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__walking_stage_data[8U])) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__walking_stage_data[7U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__walking_stage_data[6U])) 
                                                                 >> 4U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x3f0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[8U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[7U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data[6U])) 
                                                 >> 4U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x1ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & vlTOPp->mptw_top__DOT__walking_stage_data[8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x3efU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x10U & vlTOPp->mptw_top__DOT__walking_stage_data[8U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x31fU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x200U & vlTOPp->mptw_top__DOT__walking_stage_data[8U])
                               ? (7U & ((vlTOPp->mptw_top__DOT__walking_stage_data[9U] 
                                         << 0x1bU) 
                                        | (vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                                           >> 5U)))
                               : 0U) << 5U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x2ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__walking_stage_data[8U] 
                         >> 1U) & vlTOPp->mptw_top__DOT__walking_stage_data[8U])));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0xaU])) 
                    << 0x36U) | (((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[9U])) 
                                  << 0x16U) | ((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[8U])) 
                                               >> 0xaU))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0xaU])) 
                     << 0x36U) | (((QData)((IData)(
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[9U])) 
                                   << 0x16U) | ((QData)((IData)(
                                                                vlTOPp->mptw_top__DOT__walking_stage_data[8U])) 
                                                >> 0xaU))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0xcU])) 
                    << 0x36U) | (((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0xbU])) 
                                  << 0x16U) | ((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0xaU])) 
                                               >> 0xaU))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0xcU])) 
                     << 0x36U) | (((QData)((IData)(
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[0xbU])) 
                                   << 0x16U) | ((QData)((IData)(
                                                                vlTOPp->mptw_top__DOT__walking_stage_data[0xaU])) 
                                                >> 0xaU))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (3U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                     << 0x16U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                  >> 0xaU))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__walking_stage_data[0x10U])) 
                                       << 0x32U) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data[0xfU])) 
                                        << 0x12U) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data[0xeU])) 
                                        >> 0xeU)))) 
                             << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x10U])) 
                              << 0x32U) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0xfU])) 
                                            << 0x12U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data[0xeU])) 
                                              >> 0xeU)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0x10U])) 
                                                            << 0x32U) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0xfU])) 
                                                               << 0x12U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__walking_stage_data[0xeU])) 
                                                                 >> 0xeU))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x3f0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x10U])) 
                                 << 0x32U) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0xfU])) 
                                               << 0x12U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data[0xeU])) 
                                                 >> 0xeU))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x1ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & (vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                        >> 0xaU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x3efU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x10U & (vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                       >> 0xaU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x31fU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x80000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x10U])
                               ? (7U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x11U] 
                                         << 0x11U) 
                                        | (vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                                           >> 0xfU)))
                               : 0U) << 5U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x2ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                         >> 0xbU) & (vlTOPp->mptw_top__DOT__walking_stage_data[0x10U] 
                                     >> 0xaU))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x12U])) 
                    << 0x2cU) | (((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x11U])) 
                                  << 0xcU) | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data[0x10U])) 
                                              >> 0x14U))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x12U])) 
                     << 0x2cU) | (((QData)((IData)(
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[0x11U])) 
                                   << 0xcU) | ((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0x10U])) 
                                               >> 0x14U))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x14U])) 
                    << 0x2cU) | (((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x13U])) 
                                  << 0xcU) | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data[0x12U])) 
                                              >> 0x14U))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x14U])) 
                     << 0x2cU) | (((QData)((IData)(
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[0x13U])) 
                                   << 0xcU) | ((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0x12U])) 
                                               >> 0x14U))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (3U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x15U] 
                     << 0xcU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                                 >> 0x14U))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__walking_stage_data[0x18U])) 
                                       << 0x28U) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__walking_stage_data[0x17U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlTOPp->mptw_top__DOT__walking_stage_data[0x16U])) 
                                                  >> 0x18U)))) 
                             << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x18U])) 
                              << 0x28U) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0x17U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data[0x16U])) 
                                              >> 0x18U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0x18U])) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0x17U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__walking_stage_data[0x16U])) 
                                                                 >> 0x18U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x3f0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__walking_stage_data[0x18U])) 
                                 << 0x28U) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0x17U])) 
                                               << 8U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data[0x16U])) 
                                                 >> 0x18U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x1ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x200U & (vlTOPp->mptw_top__DOT__walking_stage_data[0x18U] 
                        >> 0x14U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x3efU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x10U & (vlTOPp->mptw_top__DOT__walking_stage_data[0x18U] 
                       >> 0x14U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x31fU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0xffffffe0U & (((0x20000000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x18U])
                               ? (7U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x19U] 
                                         << 7U) | (
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[0x18U] 
                                                   >> 0x19U)))
                               : 0U) << 5U)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U] 
        = ((0x2ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U]) 
           | (0x100U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x18U] 
                         >> 0x15U) & (vlTOPp->mptw_top__DOT__walking_stage_data[0x18U] 
                                      >> 0x14U))));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__spa_current_page_number = 0U;
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__base_phyisical_address = 0ULL;
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU] 
                  >> 3U)))) {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__base_phyisical_address 
            = (0xfffffffffffff000ULL & (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__walking_stage_data[0x1eU])) 
                                         << 0x20U) 
                                        | (0xfffffffffffff000ULL 
                                           & (QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU])))));
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__spa_current_page_number = 0U;
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr 
            = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__base_phyisical_address;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = 0U;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = 0ULL;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data[4U] 
                  >> 5U)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
            = ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                          >> 0x1cU))))
                ? (0xfffffffffffff000ULL & (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__walking_stage_data[1U])) 
                                             << 0x2cU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__walking_stage_data[0U])) 
                                               << 0xcU)))
                : (0xfffffffffffff000ULL & (((QData)((IData)(
                                                             vlTOPp->mptw_top__DOT__walking_stage_data[6U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlTOPp->mptw_top__DOT__walking_stage_data[5U])) 
                                                << 0x1eU) 
                                               | (0x3ffffffffffff000ULL 
                                                  & ((QData)((IData)(
                                                                     vlTOPp->mptw_top__DOT__walking_stage_data[4U])) 
                                                     >> 2U))))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
            = (0x1ffU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                          << 4U) | 
                                         (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                          >> 0x1cU))))
                          ? ((vlTOPp->mptw_top__DOT__walking_stage_data[4U] 
                              << 0x1eU) | (vlTOPp->mptw_top__DOT__walking_stage_data[3U] 
                                           >> 2U)) : 
                         ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                           << 4U) | 
                                          (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                           >> 0x1cU))))
                           ? ((vlTOPp->mptw_top__DOT__walking_stage_data[4U] 
                               << 0x1eU) | (vlTOPp->mptw_top__DOT__walking_stage_data[3U] 
                                            >> 2U))
                           : ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                               << 4U) 
                                              | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                                 >> 0x1cU))))
                               ? ((vlTOPp->mptw_top__DOT__walking_stage_data[4U] 
                                   << 0x1eU) | (vlTOPp->mptw_top__DOT__walking_stage_data[3U] 
                                                >> 2U))
                               : 0U))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
            = (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
               + ((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number)) 
                  << 3U));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = 0U;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = 0ULL;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                  >> 0xfU)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
            = (0xfffffffffffff000ULL & (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__walking_stage_data[0xeU])) 
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__walking_stage_data[0xdU])) 
                                            << 0x14U) 
                                           | (0xffffffffff000ULL 
                                              & ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__walking_stage_data[0xcU])) 
                                                 >> 0xcU)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
            = (0x1ffU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                          << 0x1aU) 
                                         | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                            >> 6U))))
                          ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                              << 0x1dU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                           >> 3U)) : 
                         ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                           << 0x1aU) 
                                          | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                             >> 6U))))
                           ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                               << 0x1dU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                            >> 3U))
                           : ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                               << 0x1aU) 
                                              | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                                 >> 6U))))
                               ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                   << 0x1dU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                                >> 3U))
                               : 0U))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
            = (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
               + ((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number)) 
                  << 3U));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number = 0U;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address = 0ULL;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr = 0ULL;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                  >> 0x19U)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
            = (0xfffffffffffff000ULL & (((QData)((IData)(
                                                         vlTOPp->mptw_top__DOT__walking_stage_data[0x16U])) 
                                         << 0x2aU) 
                                        | (0xfffffffffffff000ULL 
                                           & ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__walking_stage_data[0x15U])) 
                                              << 0xaU))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number 
            = (0x1ffU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                          << 0x10U) 
                                         | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                            >> 0x10U))))
                          ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                              << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                           >> 4U)) : 
                         ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                           << 0x10U) 
                                          | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                             >> 0x10U))))
                           ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                               << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                            >> 4U))
                           : ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                               << 0x10U) 
                                              | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                                 >> 0x10U))))
                               ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                                   << 0x1cU) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                                >> 4U))
                               : 0U))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
            = (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__base_phyisical_address 
               + ((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__spa_current_page_number)) 
                  << 3U));
    }
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__format_error_cause = 0U;
    if ((4U & vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU])) {
        if ((1U & (((0U != (0xffU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1eU] 
                                      << 0x1cU) | (
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU] 
                                                   >> 4U)))) 
                    | ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU] 
                        >> 3U) & (0U != (0x1fU & ((
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[0x1fU] 
                                                   << 4U) 
                                                  | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1eU] 
                                                     >> 0x1cU)))))) 
                   | ((~ (vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU] 
                          >> 3U)) & vlTOPp->mptw_top__DOT__walking_stage_data[0x1fU])))) {
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__format_error_cause = 1U;
        } else {
            if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU] 
                          >> 3U)))) {
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__format_error_cause = 4U;
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__format_error_cause = 2U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause = 0U;
    if ((1U != (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                         << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                   >> 0x1cU))))) {
        if ((0x10U & vlTOPp->mptw_top__DOT__walking_stage_data[4U])) {
            if ((1U & (((0U != (0xffU & ((vlTOPp->mptw_top__DOT__walking_stage_data[5U] 
                                          << 0x1aU) 
                                         | (vlTOPp->mptw_top__DOT__walking_stage_data[4U] 
                                            >> 6U)))) 
                        | ((vlTOPp->mptw_top__DOT__walking_stage_data[4U] 
                            >> 5U) & (0U != (0x1fU 
                                             & ((vlTOPp->mptw_top__DOT__walking_stage_data[6U] 
                                                 << 2U) 
                                                | (vlTOPp->mptw_top__DOT__walking_stage_data[5U] 
                                                   >> 0x1eU)))))) 
                       | ((~ (vlTOPp->mptw_top__DOT__walking_stage_data[4U] 
                              >> 5U)) & (vlTOPp->mptw_top__DOT__walking_stage_data[6U] 
                                         >> 2U))))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause = 1U;
            } else {
                if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data[4U] 
                              >> 5U)))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause = 4U;
                }
            }
        } else {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause = 2U;
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause = 0U;
    if ((0x4000U & vlTOPp->mptw_top__DOT__walking_stage_data[0xcU])) {
        if ((1U & (((0U != (0xffU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                                      << 0x10U) | (
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                                   >> 0x10U)))) 
                    | ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                        >> 0xfU) & (0U != (0x1fU & 
                                           ((vlTOPp->mptw_top__DOT__walking_stage_data[0xfU] 
                                             << 0x18U) 
                                            | (vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
                                               >> 8U)))))) 
                   | ((~ (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                          >> 0xfU)) & (vlTOPp->mptw_top__DOT__walking_stage_data[0xeU] 
                                       >> 0xcU))))) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause = 1U;
        } else {
            if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                          >> 0xfU)))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause = 4U;
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause = 2U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause = 0U;
    if ((0x1000000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x14U])) {
        if ((1U & (((0U != (0xffU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x15U] 
                                      << 6U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                                                >> 0x1aU)))) 
                    | ((vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                        >> 0x19U) & (0U != (0x1fU & 
                                            ((vlTOPp->mptw_top__DOT__walking_stage_data[0x17U] 
                                              << 0xeU) 
                                             | (vlTOPp->mptw_top__DOT__walking_stage_data[0x16U] 
                                                >> 0x12U)))))) 
                   | ((~ (vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                          >> 0x19U)) & (vlTOPp->mptw_top__DOT__walking_stage_data[0x16U] 
                                        >> 0x16U))))) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause = 1U;
        } else {
            if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                          >> 0x19U)))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause = 4U;
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause = 2U;
    }
    if ((8U & vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU])) {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset 
            = ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
                                << 6U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1aU] 
                                          >> 0x1aU))))
                ? (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1cU] 
                            << 0x16U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x1bU] 
                                         >> 0xaU)))
                : 0U);
    }
    if ((0x20U & vlTOPp->mptw_top__DOT__walking_stage_data[4U])) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                << 4U) | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                          >> 0x1cU))))
                ? 0U : (0xfU & ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                                 << 4U) 
                                                | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                                   >> 0x1cU))))
                                 ? ((vlTOPp->mptw_top__DOT__walking_stage_data[4U] 
                                     << 0x19U) | (vlTOPp->mptw_top__DOT__walking_stage_data[3U] 
                                                  >> 7U))
                                 : ((3U == (0xfU & 
                                            ((vlTOPp->mptw_top__DOT__walking_stage_data[2U] 
                                              << 4U) 
                                             | (vlTOPp->mptw_top__DOT__walking_stage_data[1U] 
                                                >> 0x1cU))))
                                     ? ((vlTOPp->mptw_top__DOT__walking_stage_data[4U] 
                                         << 0x19U) 
                                        | (vlTOPp->mptw_top__DOT__walking_stage_data[3U] 
                                           >> 7U)) : 0U))));
    }
    if ((0x8000U & vlTOPp->mptw_top__DOT__walking_stage_data[0xcU])) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = (0xfU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                        << 0x1aU) | 
                                       (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                        >> 6U)))) ? 
                       ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                         << 0x18U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                      >> 8U)) : ((2U 
                                                  == 
                                                  (0xfU 
                                                   & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                                       << 0x1aU) 
                                                      | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                                         >> 6U))))
                                                  ? 
                                                 ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                                   << 0x18U) 
                                                  | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                                     >> 8U))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0xfU 
                                                    & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                                        << 0x1aU) 
                                                       | (vlTOPp->mptw_top__DOT__walking_stage_data[0xaU] 
                                                          >> 6U))))
                                                   ? 
                                                  ((vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                                    << 0x18U) 
                                                   | (vlTOPp->mptw_top__DOT__walking_stage_data[0xbU] 
                                                      >> 8U))
                                                   : 0U))));
    }
    if ((0x2000000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x14U])) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset 
            = (0xfU & ((1U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                        << 0x10U) | 
                                       (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                        >> 0x10U))))
                        ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                            << 0x17U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                         >> 9U)) : 
                       ((2U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                         << 0x10U) 
                                        | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                           >> 0x10U))))
                         ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                             << 0x17U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                          >> 9U)) : 
                        ((3U == (0xfU & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                          << 0x10U) 
                                         | (vlTOPp->mptw_top__DOT__walking_stage_data[0x12U] 
                                            >> 0x10U))))
                          ? ((vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                              << 0x17U) | (vlTOPp->mptw_top__DOT__walking_stage_data[0x13U] 
                                           >> 9U)) : 0U))));
    }
    vlTOPp->mptw_top__DOT__walking_stage_valid = ((0xeU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                                  | (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_valid));
    vlTOPp->mptw_top__DOT__walking_stage_valid = ((7U 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__stage_master_valid) 
                                                     << 3U));
    vlTOPp->mptw_top__DOT__walking_stage_valid = ((0xbU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__stage_master_valid) 
                                                     << 2U));
    vlTOPp->mptw_top__DOT__walking_stage_valid = ((0xdU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT____Vcellout__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__stage_master_valid) 
                                                     << 1U));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__format_error_cause_o 
        = ((0x80U & vlTOPp->mptw_top__DOT__walking_stage_data[0x21U])
            ? (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__format_error_cause)
            : 0U);
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__format_error_cause_o 
        = ((0x200U & vlTOPp->mptw_top__DOT__walking_stage_data[8U])
            ? (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause)
            : 0U);
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__format_error_cause_o 
        = ((0x80000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x10U])
            ? (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause)
            : 0U);
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__format_error_cause_o 
        = ((0x20000000U & vlTOPp->mptw_top__DOT__walking_stage_data[0x18U])
            ? (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause)
            : 0U);
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__mpte_permissions = 0U;
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__access_page_fault = 0U;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU] 
                  >> 3U)))) {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x3acU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset))))))
                           ? 0U : (vlTOPp->mptw_top__DOT__walking_stage_data[
                                   ((IData)(1U) + (
                                                   ((IData)(0x3acU) 
                                                    + 
                                                    (0x3fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x3acU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset)))))))) 
                         | (vlTOPp->mptw_top__DOT__walking_stage_data[
                            (((IData)(0x3acU) + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset)))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x3acU) 
                                                  + 
                                                  (0x3fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__range_offset))))))))
                : 0U);
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__access_page_fault 
            = (1U & (~ ((((1U == (3U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU] 
                                         << 2U) | (
                                                   vlTOPp->mptw_top__DOT__walking_stage_data[0x1cU] 
                                                   >> 0x1eU)))) 
                          & ((((1U == (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__mpte_permissions)) 
                               | (3U == (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__mpte_permissions))) 
                              | (5U == (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__mpte_permissions))) 
                             | (7U == (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__mpte_permissions)))) 
                         | ((2U == (3U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU] 
                                           << 2U) | 
                                          (vlTOPp->mptw_top__DOT__walking_stage_data[0x1cU] 
                                           >> 0x1eU)))) 
                            & ((3U == (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__mpte_permissions)) 
                               | (7U == (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__mpte_permissions))))) 
                        | ((3U == (3U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x1dU] 
                                          << 2U) | 
                                         (vlTOPp->mptw_top__DOT__walking_stage_data[0x1cU] 
                                          >> 0x1eU)))) 
                           & (((4U == (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__mpte_permissions)) 
                               | (5U == (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__mpte_permissions))) 
                              | (7U == (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__mpte_permissions)))))));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__access_page_fault = 0U;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data[4U] 
                  >> 5U)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x8eU) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (vlTOPp->mptw_top__DOT__walking_stage_data[
                                   ((IData)(1U) + (
                                                   ((IData)(0x8eU) 
                                                    + 
                                                    (0x3fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x8eU) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))))) 
                         | (vlTOPp->mptw_top__DOT__walking_stage_data[
                            (((IData)(0x8eU) + (0x3fU 
                                                & ((IData)(3U) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x8eU) 
                                                  + 
                                                  (0x3fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__access_page_fault 
            = (1U & (~ ((((1U == (3U & vlTOPp->mptw_top__DOT__walking_stage_data[4U])) 
                          & ((((1U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions)) 
                               | (3U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions))) 
                              | (5U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions))) 
                             | (7U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions)))) 
                         | ((2U == (3U & vlTOPp->mptw_top__DOT__walking_stage_data[4U])) 
                            & ((3U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions)) 
                               | (7U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions))))) 
                        | ((3U == (3U & vlTOPp->mptw_top__DOT__walking_stage_data[4U])) 
                           & (((4U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions)) 
                               | (5U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions))) 
                              | (7U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions)))))));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__access_page_fault = 0U;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                  >> 0xfU)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x198U) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (vlTOPp->mptw_top__DOT__walking_stage_data[
                                   ((IData)(1U) + (
                                                   ((IData)(0x198U) 
                                                    + 
                                                    (0x3fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x198U) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))))) 
                         | (vlTOPp->mptw_top__DOT__walking_stage_data[
                            (((IData)(0x198U) + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x198U) 
                                                  + 
                                                  (0x3fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__access_page_fault 
            = (1U & (~ ((((1U == (3U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                                         << 0x16U) 
                                        | (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                           >> 0xaU)))) 
                          & ((((1U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions)) 
                               | (3U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions))) 
                              | (5U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions))) 
                             | (7U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions)))) 
                         | ((2U == (3U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                                           << 0x16U) 
                                          | (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                             >> 0xaU)))) 
                            & ((3U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions)) 
                               | (7U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions))))) 
                        | ((3U == (3U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0xdU] 
                                          << 0x16U) 
                                         | (vlTOPp->mptw_top__DOT__walking_stage_data[0xcU] 
                                            >> 0xaU)))) 
                           & (((4U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions)) 
                               | (5U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions))) 
                              | (7U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions)))))));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions = 0U;
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__access_page_fault = 0U;
    if ((1U & (~ (vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                  >> 0x19U)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions 
            = ((0x3fU >= ((IData)(0xaU) + (0x3fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))
                ? (7U & (((0U == (0x1fU & ((IData)(0x2a2U) 
                                           + (0x3fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))
                           ? 0U : (vlTOPp->mptw_top__DOT__walking_stage_data[
                                   ((IData)(1U) + (
                                                   ((IData)(0x2a2U) 
                                                    + 
                                                    (0x3fU 
                                                     & ((IData)(3U) 
                                                        * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                                                   >> 5U))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x2a2U) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))))))) 
                         | (vlTOPp->mptw_top__DOT__walking_stage_data[
                            (((IData)(0x2a2U) + (0x3fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset)))) 
                             >> 5U)] >> (0x1fU & ((IData)(0x2a2U) 
                                                  + 
                                                  (0x3fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__range_offset))))))))
                : 0U);
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__access_page_fault 
            = (1U & (~ ((((1U == (3U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x15U] 
                                         << 0xcU) | 
                                        (vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                                         >> 0x14U)))) 
                          & ((((1U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions)) 
                               | (3U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions))) 
                              | (5U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions))) 
                             | (7U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions)))) 
                         | ((2U == (3U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x15U] 
                                           << 0xcU) 
                                          | (vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                                             >> 0x14U)))) 
                            & ((3U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions)) 
                               | (7U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions))))) 
                        | ((3U == (3U & ((vlTOPp->mptw_top__DOT__walking_stage_data[0x15U] 
                                          << 0xcU) 
                                         | (vlTOPp->mptw_top__DOT__walking_stage_data[0x14U] 
                                            >> 0x14U)))) 
                           & (((4U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions)) 
                               | (5U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions))) 
                              | (7U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__mpte_permissions)))))));
    }
    if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                         >> 3U));
        }
    } else {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__next_state 
            = (1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                     >> 3U));
    }
    if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                          >> 3U)))) {
                if ((8U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
                    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__commit_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[4U] 
        = ((3U & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & ((0xfffffff0U & ((IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr) 
                                             << 4U)) 
                             | ((((0U != (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__format_error_cause)) 
                                  | (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__access_page_fault))
                                  ? 3U : 0U) << 2U))));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[5U] 
        = ((3U & ((3U & ((IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr) 
                         >> 0x1cU)) | ((((0U != (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__format_error_cause)) 
                                         | (IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__access_page_fault))
                                         ? 3U : 0U) 
                                       >> 0x1eU))) 
           | (0xfffffffcU & ((0xcU & ((IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr) 
                                      >> 0x1cU)) | 
                             (0xfffffff0U & ((IData)(
                                                     (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr 
                                                      >> 0x20U)) 
                                             << 4U)))));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[6U]) 
           | ((3U & ((IData)((vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr 
                              >> 0x20U)) >> 0x1cU)) 
              | (0xcU & ((IData)((vlTOPp->mptw_top__DOT__commit_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) >> 0x1cU))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & ((0xfffffff0U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                                             << 4U)) 
                             | ((((0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause)) 
                                  | (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__access_page_fault))
                                  ? 3U : 0U) << 2U))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = ((3U & ((3U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                         >> 0x1cU)) | ((((0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause)) 
                                         | (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__access_page_fault))
                                         ? 3U : 0U) 
                                       >> 0x1eU))) 
           | (0xfffffffcU & ((0xcU & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                                      >> 0x1cU)) | 
                             (0xfffffff0U & ((IData)(
                                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                                      >> 0x20U)) 
                                             << 4U)))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | ((3U & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                              >> 0x20U)) >> 0x1cU)) 
              | (0xcU & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) >> 0x1cU))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & ((0xfffffff0U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                                             << 4U)) 
                             | ((((0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause)) 
                                  | (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__access_page_fault))
                                  ? 3U : 0U) << 2U))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = ((3U & ((3U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                         >> 0x1cU)) | ((((0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause)) 
                                         | (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__access_page_fault))
                                         ? 3U : 0U) 
                                       >> 0x1eU))) 
           | (0xfffffffcU & ((0xcU & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                                      >> 0x1cU)) | 
                             (0xfffffff0U & ((IData)(
                                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                                      >> 0x20U)) 
                                             << 4U)))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | ((3U & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                              >> 0x20U)) >> 0x1cU)) 
              | (0xcU & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) >> 0x1cU))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U] 
        = ((3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U]) 
           | (0xfffffffcU & ((0xfffffff0U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                                             << 4U)) 
                             | ((((0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause)) 
                                  | (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__access_page_fault))
                                  ? 3U : 0U) << 2U))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U] 
        = ((3U & ((3U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                         >> 0x1cU)) | ((((0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__format_error_cause)) 
                                         | (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__access_page_fault))
                                         ? 3U : 0U) 
                                       >> 0x1eU))) 
           | (0xfffffffcU & ((0xcU & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr) 
                                      >> 0x1cU)) | 
                             (0xfffffff0U & ((IData)(
                                                     (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                                      >> 0x20U)) 
                                             << 4U)))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U]) 
           | ((3U & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                              >> 0x20U)) >> 0x1cU)) 
              | (0xcU & ((IData)((vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__next_mpte_addr 
                                  >> 0x20U)) >> 0x1cU))));
    vlTOPp->mptw_top__DOT__walking_stage_ready = ((7U 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT__commit_stage_u__DOT__slave_to_reg_bus_ready) 
                                                     << 3U));
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__current_state) {
            if ((8U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        if ((8U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__commit_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__commit_stage_u__DOT__output_transaction[8U];
        }
    }
}

VL_INLINE_OPT void Vmptw_top::_sequent__TOP__5(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_sequent__TOP__5\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n;
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock)))) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[8U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[9U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[9U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xaU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xaU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xbU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xbU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xcU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xcU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xdU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xdU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xeU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xeU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xfU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xfU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x10U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x10U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x11U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x11U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x12U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x12U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x13U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x13U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x14U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x14U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x15U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x15U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x16U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x16U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x17U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x17U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x18U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x18U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x19U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x19U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1aU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1aU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1bU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1bU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1cU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1cU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1dU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1dU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1eU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1eU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1fU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1fU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x20U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x20U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x21U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x21U];
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[9U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xaU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xbU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xcU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xdU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xeU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xfU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x10U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x11U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x12U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x13U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x14U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x15U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x16U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x17U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x18U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x19U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1aU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1bU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1cU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1dU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1eU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1fU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x20U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x21U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock)))) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[8U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[9U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[9U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xaU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xaU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xbU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xbU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xcU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xcU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xdU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xdU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xeU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xeU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xfU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xfU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x10U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x10U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x11U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x11U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x12U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x12U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x13U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x13U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x14U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x14U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x15U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x15U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x16U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x16U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x17U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x17U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x18U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x18U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x19U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x19U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1aU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1aU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1bU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1bU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1cU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1cU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1dU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1dU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1eU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1eU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1fU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1fU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x20U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x20U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x21U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x21U];
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[9U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xaU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xbU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xcU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xdU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xeU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xfU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x10U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x11U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x12U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x13U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x14U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x15U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x16U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x17U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x18U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x19U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1aU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1bU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1cU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1dU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1eU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1fU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x20U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x21U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock)))) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[8U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[9U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[9U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xaU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xaU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xbU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xbU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xcU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xcU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xdU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xdU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xeU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xeU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xfU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xfU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x10U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x10U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x11U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x11U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x12U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x12U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x13U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x13U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x14U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x14U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x15U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x15U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x16U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x16U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x17U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x17U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x18U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x18U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x19U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x19U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1aU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1aU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1bU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1bU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1cU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1cU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1dU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1dU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1eU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1eU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1fU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1fU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x20U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x20U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x21U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x21U];
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[9U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xaU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xbU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xcU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xdU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xeU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xfU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x10U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x11U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x12U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x13U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x14U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x15U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x16U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x17U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x18U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x19U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1aU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1bU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1cU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1dU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1eU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1fU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x20U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x21U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n;
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock)))) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[8U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[9U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[9U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xaU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xaU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xbU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xbU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xcU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xcU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xdU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xdU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xeU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xeU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xfU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xfU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x10U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x10U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x11U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x11U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x12U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x12U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x13U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x13U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x14U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x14U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x15U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x15U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x16U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x16U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x17U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x17U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x18U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x18U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x19U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x19U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1aU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1aU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1bU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1bU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1cU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1cU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1dU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1dU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1eU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1eU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1fU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1fU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x20U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x20U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x21U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x21U];
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[9U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xaU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xbU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xcU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xdU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xeU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xfU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x10U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x11U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x12U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x13U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x14U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x15U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x16U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x17U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x18U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x19U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1aU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1bU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1cU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1dU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1eU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1fU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x20U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x21U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock)))) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[8U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[9U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[9U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xaU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xaU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xbU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xbU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xcU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xcU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xdU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xdU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xeU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xeU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xfU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xfU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x10U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x10U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x11U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x11U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x12U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x12U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x13U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x13U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x14U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x14U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x15U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x15U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x16U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x16U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x17U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x17U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x18U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x18U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x19U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x19U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1aU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1aU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1bU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1bU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1cU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1cU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1dU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1dU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1eU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1eU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1fU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1fU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x20U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x20U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x21U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x21U];
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[9U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xaU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xbU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xcU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xdU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xeU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xfU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x10U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x11U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x12U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x13U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x14U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x15U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x16U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x17U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x18U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x19U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1aU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1bU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1cU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1dU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1eU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1fU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x20U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x21U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock)))) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[8U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[9U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[9U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xaU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xaU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xbU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xbU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xcU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xcU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xdU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xdU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xeU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xeU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xfU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xfU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x10U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x10U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x11U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x11U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x12U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x12U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x13U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x13U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x14U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x14U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x15U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x15U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x16U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x16U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x17U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x17U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x18U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x18U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x19U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x19U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1aU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1aU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1bU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1bU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1cU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1cU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1dU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1dU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1eU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1eU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1fU] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1fU];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x20U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x20U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x21U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x21U];
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[8U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[9U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xaU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xbU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xcU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xdU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xeU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xfU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x10U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x11U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x12U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x13U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x14U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x15U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x16U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x17U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x18U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x19U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1aU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1bU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1cU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1dU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1eU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1fU] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x20U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x21U] = 0U;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q 
        = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n)
            : 0U);
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
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x19U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x19U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1aU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1aU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1bU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1bU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1cU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1cU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1dU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1dU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1eU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1eU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1fU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1fU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x20U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x20U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x21U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x21U];
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
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x19U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1aU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1bU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1cU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1dU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1eU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1fU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x20U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x21U] = 0U;
    }
    if (vlTOPp->rst_ni) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n;
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q = 0U;
    }
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
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x19U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x19U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1aU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1aU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1bU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1bU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1cU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1cU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1dU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1dU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1eU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1eU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1fU] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1fU];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x20U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x20U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x21U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x21U];
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
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x19U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1aU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1bU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1cU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1dU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1eU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1fU] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x20U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x21U] = 0U;
    }
    if ((0x427U >= (0x7ffU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  (0x3fU & (((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[8U] 
            = (0x3ffU & (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                           ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                   ((IData)(9U) + (0x3fU 
                                                   & (((IData)(0x10aU) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                            ((IData)(8U) + (0x3fU & 
                                            (((IData)(0x10aU) 
                                              * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[8U] = 0U;
    }
    if ((0x427U >= (0x7ffU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  (0x3fU & (((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[8U] 
            = (0x3ffU & (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                           ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                   ((IData)(9U) + (0x3fU 
                                                   & (((IData)(0x10aU) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                            ((IData)(8U) + (0x3fU & 
                                            (((IData)(0x10aU) 
                                              * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[8U] = 0U;
    }
    if ((0x427U >= (0x7ffU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  (0x3fU & (((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[8U] 
            = (0x3ffU & (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                           ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                   ((IData)(9U) + (0x3fU 
                                                   & (((IData)(0x10aU) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                            ((IData)(8U) + (0x3fU & 
                                            (((IData)(0x10aU) 
                                              * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[7U] = 0U;
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[8U] = 0U;
    }
    if ((0x427U >= (0x7ffU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(1U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  (0x3fU & (((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(2U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(1U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(3U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(2U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(4U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(3U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(5U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(4U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(6U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(5U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(7U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(6U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[7U] 
            = (((0U == (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                 ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                         ((IData)(8U) + (0x3fU & (((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
               | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                  ((IData)(7U) + (0x3fU & (((IData)(0x10aU) 
                                            * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))));
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[8U] 
            = (0x3ffU & (((0U == (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))
                           ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                                   ((IData)(9U) + (0x3fU 
                                                   & (((IData)(0x10aU) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)))))) 
                         | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[
                            ((IData)(8U) + (0x3fU & 
                                            (((IData)(0x10aU) 
                                              * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0x10aU) 
                                         * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q))))));
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[5U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[6U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[7U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[8U] = 0U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U]) 
           | (0xcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U]) 
           | (0xcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U]))));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U]));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U]) 
           | (0xcU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U]))));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[1U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[0U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U]))));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[2U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U]) 
           | (0xcU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT____Vcellout__grant_fifo_u__data_o[4U]));
}

VL_INLINE_OPT void Vmptw_top::_combo__TOP__6(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_combo__TOP__6\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_valid) 
                          & (IData)(vlTOPp->plb_master_mem_gnt)) 
                         | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_valid)) 
                               & (IData)(vlTOPp->plb_master_mem_gnt)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_valid;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_valid) 
                 & (IData)(vlTOPp->plb_master_mem_gnt))) {
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U];
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_valid) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U];
        }
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_valid) 
                          & (IData)(vlTOPp->plb_master_mem_gnt))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_valid)) 
                              & (IData)(vlTOPp->plb_master_mem_gnt))))) {
                    vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                          & vlTOPp->walking_mem_master_mem_gnt
                          [2U]) | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid)) 
                                      & vlTOPp->walking_mem_master_mem_gnt
                                      [2U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                 & vlTOPp->walking_mem_master_mem_gnt
                 [2U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                          & vlTOPp->walking_mem_master_mem_gnt
                          [2U])))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid)) 
                              & vlTOPp->walking_mem_master_mem_gnt
                              [2U])))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                          & vlTOPp->walking_mem_master_mem_gnt
                          [1U]) | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid)) 
                                      & vlTOPp->walking_mem_master_mem_gnt
                                      [1U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                 & vlTOPp->walking_mem_master_mem_gnt
                 [1U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                          & vlTOPp->walking_mem_master_mem_gnt
                          [1U])))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid)) 
                              & vlTOPp->walking_mem_master_mem_gnt
                              [1U])))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                          & vlTOPp->walking_mem_master_mem_gnt
                          [0U]) | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid)) 
                                      & vlTOPp->walking_mem_master_mem_gnt
                                      [0U]))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                 & vlTOPp->walking_mem_master_mem_gnt
                 [0U])) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid) 
                          & vlTOPp->walking_mem_master_mem_gnt
                          [0U])))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_valid)) 
                              & vlTOPp->walking_mem_master_mem_gnt
                              [0U])))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(vlTOPp->plb_master_mem_gnt) & (4U 
                                                != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q;
    if (((IData)(vlTOPp->plb_master_mem_gnt) & (4U 
                                                != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    if (((IData)(vlTOPp->plb_master_mem_gnt) & (4U 
                                                != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(vlTOPp->plb_master_mem_valid) & (0U 
                                                  != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlTOPp->plb_master_mem_gnt) & (IData)(vlTOPp->plb_master_mem_valid)) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 1U;
    if ((vlTOPp->walking_mem_master_mem_gnt[2U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q;
    if ((vlTOPp->walking_mem_master_mem_gnt[2U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    if ((vlTOPp->walking_mem_master_mem_gnt[2U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if ((vlTOPp->walking_mem_master_mem_valid[2U] & 
         (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((vlTOPp->walking_mem_master_mem_gnt[2U] & 
           vlTOPp->walking_mem_master_mem_valid[2U]) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 1U;
    if ((vlTOPp->walking_mem_master_mem_gnt[1U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q;
    if ((vlTOPp->walking_mem_master_mem_gnt[1U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    if ((vlTOPp->walking_mem_master_mem_gnt[1U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if ((vlTOPp->walking_mem_master_mem_valid[1U] & 
         (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((vlTOPp->walking_mem_master_mem_gnt[1U] & 
           vlTOPp->walking_mem_master_mem_valid[1U]) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 1U;
    if ((vlTOPp->walking_mem_master_mem_gnt[0U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q;
    if ((vlTOPp->walking_mem_master_mem_gnt[0U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    if ((vlTOPp->walking_mem_master_mem_gnt[0U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)));
    }
    if ((vlTOPp->walking_mem_master_mem_valid[0U] & 
         (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((vlTOPp->walking_mem_master_mem_gnt[0U] & 
           vlTOPp->walking_mem_master_mem_valid[0U]) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->walking_mem_master_mem_req[2U] = ((((4U 
                                                 > 
                                                 (7U 
                                                  & (((3U 
                                                       & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)) 
                                                      + 
                                                      vlTOPp->walking_mem_master_mem_gnt
                                                      [2U]) 
                                                     + 
                                                     (3U 
                                                      & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))))) 
                                                & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
                                               & (4U 
                                                  != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
                                              & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid));
    vlTOPp->walking_mem_master_mem_req[1U] = ((((4U 
                                                 > 
                                                 (7U 
                                                  & (((3U 
                                                       & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)) 
                                                      + 
                                                      vlTOPp->walking_mem_master_mem_gnt
                                                      [1U]) 
                                                     + 
                                                     (3U 
                                                      & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))))) 
                                                & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
                                               & (4U 
                                                  != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
                                              & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid));
    vlTOPp->walking_mem_master_mem_req[0U] = ((((4U 
                                                 > 
                                                 (7U 
                                                  & (((3U 
                                                       & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)) 
                                                      + 
                                                      vlTOPp->walking_mem_master_mem_gnt
                                                      [0U]) 
                                                     + 
                                                     (3U 
                                                      & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))))) 
                                                & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
                                               & (4U 
                                                  != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
                                              & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_bus_valid));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q;
    if ((vlTOPp->walking_mem_master_mem_valid[2U] & 
         (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q;
    if ((vlTOPp->walking_mem_master_mem_valid[1U] & 
         (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q;
    if ((vlTOPp->walking_mem_master_mem_valid[0U] & 
         (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[9U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[9U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xaU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xaU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xbU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xbU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xcU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xcU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xdU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xdU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xeU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xeU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xfU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xfU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x10U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x10U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x11U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x11U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x12U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x12U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x13U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x13U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x14U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x14U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x15U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x15U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x16U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x16U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x17U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x17U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x18U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x18U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x19U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x19U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1aU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1aU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1bU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1bU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1cU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1cU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1dU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1dU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1eU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1eU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1fU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1fU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x20U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x20U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x21U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x21U];
    if ((vlTOPp->walking_mem_master_mem_gnt[2U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[8U];
        if ((0x427U >= (0x7ffU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(266,(0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1);
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[9U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[9U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xaU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xaU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xbU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xbU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xcU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xcU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xdU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xdU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xeU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xeU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xfU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xfU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x10U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x10U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x11U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x11U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x12U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x12U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x13U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x13U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x14U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x14U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x15U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x15U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x16U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x16U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x17U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x17U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x18U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x18U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x19U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x19U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1aU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1aU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1bU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1bU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1cU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1cU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1dU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1dU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1eU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1eU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1fU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1fU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x20U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x20U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x21U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x21U];
    if ((vlTOPp->walking_mem_master_mem_gnt[1U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[8U];
        if ((0x427U >= (0x7ffU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(266,(0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1);
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[9U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[9U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xaU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xaU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xbU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xbU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xcU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xcU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xdU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xdU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xeU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xeU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0xfU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0xfU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x10U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x10U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x11U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x11U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x12U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x12U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x13U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x13U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x14U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x14U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x15U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x15U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x16U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x16U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x17U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x17U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x18U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x18U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x19U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x19U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1aU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1aU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1bU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1bU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1cU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1cU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1dU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1dU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1eU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1eU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1fU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1fU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x20U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x20U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x21U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x21U];
    if ((vlTOPp->walking_mem_master_mem_gnt[0U] & (4U 
                                                   != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[8U];
        if ((0x427U >= (0x7ffU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(266,(0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1);
        }
    }
    vlTOPp->plb_master_mem_req = ((((4U > (7U & (((3U 
                                                   & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)) 
                                                  + (IData)(vlTOPp->plb_master_mem_gnt)) 
                                                 + 
                                                 (3U 
                                                  & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))))) 
                                    & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q))) 
                                   & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
                                  & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_bus_valid));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q;
    if (((IData)(vlTOPp->plb_master_mem_valid) & (0U 
                                                  != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__read_pointer_q)));
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
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x19U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x19U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1aU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1aU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1bU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1bU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1cU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1cU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1dU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1dU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1eU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1eU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x1fU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x1fU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x20U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x20U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n[0x21U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_q[0x21U];
    if (((IData)(vlTOPp->plb_master_mem_gnt) & (4U 
                                                != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[0U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[1U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[2U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[3U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[4U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[5U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[6U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[7U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[7U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1[8U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__req_reg__DOT__reg_data_q[8U];
        if ((0x427U >= (0x7ffU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(266,(0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_u__DOT____Vlvbound1);
        }
    }
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
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[7U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[7U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[8U] 
            = (0x3ffU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U]);
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[0U] 
            = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(1U) + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      (0x3fU & (((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                >> 5U))] >> (0x1fU 
                                             & ((IData)(0x10aU) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[1U] 
            = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(2U) + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      ((IData)(1U) + (0x3fU & (((IData)(0x10aU) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0x10aU) 
                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[2U] 
            = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(3U) + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      ((IData)(2U) + (0x3fU & (((IData)(0x10aU) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0x10aU) 
                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[3U] 
            = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(4U) + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      ((IData)(3U) + (0x3fU & (((IData)(0x10aU) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0x10aU) 
                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[4U] 
            = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(5U) + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      ((IData)(4U) + (0x3fU & (((IData)(0x10aU) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0x10aU) 
                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[5U] 
            = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(6U) + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      ((IData)(5U) + (0x3fU & (((IData)(0x10aU) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0x10aU) 
                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[6U] 
            = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(7U) + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      ((IData)(6U) + (0x3fU & (((IData)(0x10aU) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0x10aU) 
                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[7U] 
            = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                     * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                     ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                             ((IData)(8U) + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                   | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                      ((IData)(7U) + (0x3fU & (((IData)(0x10aU) 
                                                * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0x10aU) 
                                   * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                : 0U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[8U] 
            = (0x3ffU & ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                          ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                               ? 0U : (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                       ((IData)(9U) 
                                        + (0x3fU & 
                                           (((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U)))] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                             | (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                ((IData)(8U) + (0x3fU 
                                                & (((IData)(0x10aU) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                >> (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                          : 0U));
    }
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_transaction_valid_i) 
                          & (IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_ready)) 
                         | (~ ((~ (IData)(vlTOPp->mptw_transaction_valid_i)) 
                               & (IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__next_state 
            = vlTOPp->mptw_transaction_valid_i;
    }
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_transaction_valid_i) 
                 & (IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_ready))) {
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        if (vlTOPp->mptw_transaction_valid_i) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__output_transaction[8U];
        }
    }
    if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__fetch_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_transaction_valid_i) 
                          & (IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_transaction_valid_i)) 
                              & (IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_ready))))) {
                    vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                           >> 2U) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready)) 
                         | (~ ((~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                   >> 2U)) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = (1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                     >> 2U));
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                           >> 2U) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready))))) {
                if ((1U & (~ ((~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                  >> 2U)) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            if ((((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                  >> 2U) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        if ((4U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & ((((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                           >> 1U) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready)) 
                         | (~ ((~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                   >> 1U)) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = (1U & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                     >> 1U));
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ (((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                           >> 1U) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready))))) {
                if ((1U & (~ ((~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                                  >> 1U)) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            if ((((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                  >> 1U) & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
        }
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                          & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready)) 
                         | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                               & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__next_state 
            = (1U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid));
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                          & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid)) 
                              & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__walking_stage_valid) 
                 & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_to_walking_ready))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
            }
        }
    } else {
        if ((1U & (IData)(vlTOPp->mptw_top__DOT__walking_stage_valid))) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[0U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[1U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[2U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[3U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[4U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[5U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[6U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[7U];
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__parsing_reg__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__output_transaction[8U];
        }
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[1U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[0U]))));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[1U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[0U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[2U] 
        = (IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[3U])) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[2U]))));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[3U])) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[2U]))) 
                   >> 0x20U));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U] 
        = ((0xfffffffcU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U]) 
           | (3U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[4U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U]) 
           | (0xfffffffcU & (((0U != (((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[8U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[7U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[6U])) 
                                        >> 4U)))) ? 3U
                               : 0U) << 2U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U] 
        = ((0x31fU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U]) 
           | (0xe0U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[8U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U] 
        = ((0x2ffU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U]) 
           | (0x100U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[8U]));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U] 
        = ((0x3efU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U]) 
           | (0xfffffff0U & ((IData)((0U != (((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[8U])) 
                                              << 0x3cU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[7U])) 
                                                 << 0x1cU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[6U])) 
                                                   >> 4U))))) 
                             << 4U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[6U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[5U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[4U])) 
                                        >> 4U)))) << 4U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[5U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[6U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[5U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[4U])) 
                                              >> 4U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[6U])) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[5U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[4U])) 
                                                                 >> 4U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[6U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[6U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[6U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[5U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[4U])) 
                                                 >> 4U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U] 
        = ((0x1ffU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U]) 
           | (0x200U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_to_master[8U]));
    vlTOPp->mptw_ready_o = vlTOPp->mptw_top__DOT__fetch_stage_u__DOT__slave_to_reg_bus_ready;
    vlTOPp->mptw_top__DOT__walking_stage_ready = ((0xbU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready) 
                                                     << 2U));
    vlTOPp->mptw_top__DOT__walking_stage_ready = ((0xdU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                                                  | ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready) 
                                                     << 1U));
    vlTOPp->mptw_top__DOT__walking_stage_ready = ((0xeU 
                                                   & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                                                  | (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__parsing_stage_u__DOT__slave_to_reg_bus_ready));
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid) 
                          & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)) 
                         | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid)) 
                               & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__next_state 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 1U)) | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid)) 
                                           & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                              >> 1U)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 2U)) | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid)) 
                                           & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                              >> 2U)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 3U)) | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid)) 
                                           & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                              >> 3U)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid) 
                 & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready))) {
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[0U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[1U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[2U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[3U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[5U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[6U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[7U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U];
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[0U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[1U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[2U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[3U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[4U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[5U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[5U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[6U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[6U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[7U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[7U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__reg_data_d[8U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__post_local_transaction[8U];
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                 & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                    >> 1U))) {
                if ((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[7U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                        = (0x3ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U]);
                } else {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  (0x3fU & (((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(1U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(2U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(3U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(4U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(5U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(7U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(6U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(8U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(7U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                        = (0x3ffU & ((0x427U >= (0x7ffU 
                                                 & ((IData)(0x10aU) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                      ? (((0U == (0x1fU 
                                                  & ((IData)(0x10aU) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                           ? 0U : (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                   ((IData)(9U) 
                                                    + 
                                                    (0x3fU 
                                                     & (((IData)(0x10aU) 
                                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x10aU) 
                                                        * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(8U) 
                                             + (0x3fU 
                                                & (((IData)(0x10aU) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                      : 0U));
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) {
            if ((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = (0x3ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U]);
            } else {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(1U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              (0x3fU & (((IData)(0x10aU) 
                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                        >> 5U))] >> 
                              (0x1fU & ((IData)(0x10aU) 
                                        * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(2U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(1U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(3U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(2U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(4U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(3U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(5U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(4U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(6U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(5U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(7U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(6U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(8U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(7U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = (0x3ffU & ((0x427U >= (0x7ffU 
                                             & ((IData)(0x10aU) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                  ? (((0U == (0x1fU 
                                              & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                       ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                               ((IData)(9U) 
                                                + (0x3fU 
                                                   & (((IData)(0x10aU) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10aU) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                        ((IData)(8U) 
                                         + (0x3fU & 
                                            (((IData)(0x10aU) 
                                              * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                                        >> (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                  : 0U));
            }
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                 & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                    >> 2U))) {
                if ((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[7U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                        = (0x3ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U]);
                } else {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  (0x3fU & (((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(1U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(2U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(3U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(4U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(5U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(7U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(6U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(8U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(7U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                        = (0x3ffU & ((0x427U >= (0x7ffU 
                                                 & ((IData)(0x10aU) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                      ? (((0U == (0x1fU 
                                                  & ((IData)(0x10aU) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                           ? 0U : (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                   ((IData)(9U) 
                                                    + 
                                                    (0x3fU 
                                                     & (((IData)(0x10aU) 
                                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x10aU) 
                                                        * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(8U) 
                                             + (0x3fU 
                                                & (((IData)(0x10aU) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                      : 0U));
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) {
            if ((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = (0x3ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U]);
            } else {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(1U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              (0x3fU & (((IData)(0x10aU) 
                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                        >> 5U))] >> 
                              (0x1fU & ((IData)(0x10aU) 
                                        * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(2U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(1U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(3U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(2U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(4U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(3U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(5U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(4U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(6U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(5U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(7U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(6U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(8U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(7U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = (0x3ffU & ((0x427U >= (0x7ffU 
                                             & ((IData)(0x10aU) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                  ? (((0U == (0x1fU 
                                              & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                       ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                               ((IData)(9U) 
                                                + (0x3fU 
                                                   & (((IData)(0x10aU) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10aU) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                        ((IData)(8U) 
                                         + (0x3fU & 
                                            (((IData)(0x10aU) 
                                              * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                                        >> (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                  : 0U));
            }
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_q[8U];
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                 & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                    >> 3U))) {
                if ((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[7U];
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                        = (0x3ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U]);
                } else {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(1U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  (0x3fU & (((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                            >> 5U))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(2U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(1U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(3U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(2U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(4U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(3U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(5U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(4U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(6U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(5U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(7U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(6U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                        = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                            ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                 ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                         ((IData)(8U) 
                                          + (0x3fU 
                                             & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                               | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                  ((IData)(7U) + (0x3fU 
                                                  & (((IData)(0x10aU) 
                                                      * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                     >> 5U)))] 
                                  >> (0x1fU & ((IData)(0x10aU) 
                                               * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                            : 0U);
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                        = (0x3ffU & ((0x427U >= (0x7ffU 
                                                 & ((IData)(0x10aU) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                      ? (((0U == (0x1fU 
                                                  & ((IData)(0x10aU) 
                                                     * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                           ? 0U : (
                                                   vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                                   ((IData)(9U) 
                                                    + 
                                                    (0x3fU 
                                                     & (((IData)(0x10aU) 
                                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                        >> 5U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x10aU) 
                                                        * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                         | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                            ((IData)(8U) 
                                             + (0x3fU 
                                                & (((IData)(0x10aU) 
                                                    * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                   >> 5U)))] 
                                            >> (0x1fU 
                                                & ((IData)(0x10aU) 
                                                   * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                      : 0U));
                }
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) {
            if ((0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[7U];
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = (0x3ffU & vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U]);
            } else {
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[0U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(1U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              (0x3fU & (((IData)(0x10aU) 
                                         * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                        >> 5U))] >> 
                              (0x1fU & ((IData)(0x10aU) 
                                        * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[1U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(2U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(1U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[2U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(3U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(2U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[3U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(4U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(3U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[4U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(5U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(4U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[5U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(6U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(5U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[6U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(7U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(6U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[7U] 
                    = ((0x427U >= (0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                        ? (((0U == (0x1fU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                             ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                     ((IData)(8U) + 
                                      (0x3fU & (((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                           | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                              ((IData)(7U) + (0x3fU 
                                              & (((IData)(0x10aU) 
                                                  * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x10aU) 
                                           * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                        : 0U);
                vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__reg_data_d[8U] 
                    = (0x3ffU & ((0x427U >= (0x7ffU 
                                             & ((IData)(0x10aU) 
                                                * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                  ? (((0U == (0x1fU 
                                              & ((IData)(0x10aU) 
                                                 * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q))))
                                       ? 0U : (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                               ((IData)(9U) 
                                                + (0x3fU 
                                                   & (((IData)(0x10aU) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                                      >> 5U)))] 
                                               << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x10aU) 
                                                       * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))) 
                                     | (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[
                                        ((IData)(8U) 
                                         + (0x3fU & 
                                            (((IData)(0x10aU) 
                                              * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)) 
                                             >> 5U)))] 
                                        >> (0x1fU & 
                                            ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)))))
                                  : 0U));
            }
        }
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid) 
                          & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid)) 
                              & (IData)(vlTOPp->mptw_top__DOT__walking_stage_ready))))) {
                    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 1U))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid)) 
                              & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                 >> 1U))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 2U))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid)) 
                              & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                 >> 2U))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
    }
    if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid) 
                          & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                             >> 3U))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid)) 
                              & ((IData)(vlTOPp->mptw_top__DOT__walking_stage_ready) 
                                 >> 3U))))) {
                    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop 
        = ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready) 
           & (0U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push 
        = (((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready)) 
            | ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready) 
               & (0U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) 
           & (IData)(vlTOPp->plb_master_mem_valid));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop 
        = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
           & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push 
        = (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
            | ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
               & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) 
           & vlTOPp->walking_mem_master_mem_valid[0U]);
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop 
        = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
           & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push 
        = (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
            | ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
               & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) 
           & vlTOPp->walking_mem_master_mem_valid[1U]);
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop 
        = ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
           & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push 
        = (((~ (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready)) 
            | ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
               & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) 
           & vlTOPp->walking_mem_master_mem_valid[2U]);
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_to_local_bus_valid 
        = (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__local_to_reg_bus_ready) 
            & (0U == (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))
            ? (IData)(vlTOPp->plb_master_mem_valid)
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
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x19U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x19U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1aU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1aU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1bU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1bU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1cU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1cU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1dU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1dU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1eU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1eU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1fU] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1fU];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x20U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x20U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x21U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x21U];
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[7U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[7U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[8U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U];
        if ((0x427U >= (0x7ffU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(266,(0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1);
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid 
        = (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
            & (0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))
            ? vlTOPp->walking_mem_master_mem_valid[0U]
            : (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
           & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop)) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[9U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[9U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xaU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xaU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xbU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xbU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xcU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xcU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xdU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xdU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xeU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xeU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xfU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xfU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x10U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x10U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x11U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x11U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x12U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x12U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x13U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x13U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x14U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x14U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x15U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x15U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x16U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x16U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x17U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x17U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x18U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x18U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x19U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x19U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1aU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1aU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1bU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1bU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1cU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1cU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1dU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1dU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1eU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1eU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1fU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1fU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x20U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x20U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x21U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x21U];
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U];
        if ((0x427U >= (0x7ffU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(266,(0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__0__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1);
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid 
        = (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
            & (0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))
            ? vlTOPp->walking_mem_master_mem_valid[1U]
            : (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
           & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop)) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[9U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[9U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xaU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xaU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xbU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xbU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xcU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xcU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xdU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xdU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xeU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xeU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xfU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xfU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x10U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x10U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x11U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x11U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x12U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x12U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x13U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x13U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x14U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x14U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x15U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x15U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x16U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x16U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x17U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x17U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x18U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x18U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x19U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x19U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1aU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1aU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1bU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1bU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1cU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1cU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1dU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1dU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1eU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1eU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1fU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1fU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x20U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x20U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x21U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x21U];
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U];
        if ((0x427U >= (0x7ffU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(266,(0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__1__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1);
        }
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_valid 
        = (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__walking_to_pipe_ready) 
            & (0U == (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))
            ? vlTOPp->walking_mem_master_mem_valid[2U]
            : (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop));
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__read_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = 1U;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__gate_clock = 0U;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q)));
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q;
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)));
    }
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = (7U & ((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
           & (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_pop)) 
          & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q))) 
         & (0U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_n 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q;
    }
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[1U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[1U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[2U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[2U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[3U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[3U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[4U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[4U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[5U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[5U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[6U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[6U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[7U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[7U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[8U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[8U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[9U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[9U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xaU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xaU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xbU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xbU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xcU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xcU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xdU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xdU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xeU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xeU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0xfU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0xfU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x10U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x10U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x11U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x11U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x12U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x12U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x13U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x13U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x14U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x14U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x15U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x15U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x16U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x16U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x17U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x17U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x18U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x18U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x19U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x19U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1aU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1aU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1bU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1bU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1cU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1cU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1dU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1dU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1eU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1eU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x1fU] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x1fU];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x20U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x20U];
    vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n[0x21U] 
        = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_q[0x21U];
    if (((IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_push) 
         & (4U != (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__status_cnt_q)))) {
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[0U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[0U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[1U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[1U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[2U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[2U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[3U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[3U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[4U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[4U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[5U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[5U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[6U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[6U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[7U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[7U];
        vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1[8U] 
            = vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__grant_fifo_to_valid_fifo[8U];
        if ((0x427U >= (0x7ffU & ((IData)(0x10aU) * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WIIW(266,(0x7ffU & ((IData)(0x10aU) 
                                             * (IData)(vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__write_pointer_q))), vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT__mem_n, vlTOPp->mptw_top__DOT__gen_walking_stages__BRA__2__KET____DOT__walking_stage_u__DOT__mem_stage_u__DOT__valid_fifo_u__DOT____Vlvbound1);
        }
    }
}
