// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmptw_top.h for the primary calling header

#include "Vmptw_top.h"
#include "Vmptw_top__Syms.h"

//==========

VL_CTOR_IMP(Vmptw_top) {
    Vmptw_top__Syms* __restrict vlSymsp = __VlSymsp = new Vmptw_top__Syms(this, name());
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmptw_top::__Vconfigure(Vmptw_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vmptw_top::~Vmptw_top() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vmptw_top::_settle__TOP__1(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_settle__TOP__1\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->plb_cache_mem_we = 0U;
    vlTOPp->plb_cache_mem_wdata = 0U;
    vlTOPp->plb_cache_mem_be = 0U;
    vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready 
        = (1U & ((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__first_valid_q)) 
                 | (IData)(vlTOPp->plb_cache_mem_gnt)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced 
        = ((IData)(vlTOPp->plb_cache_mem_valid) | (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q));
    vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__stall 
        = ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__first_valid_q) 
           & (~ (IData)(vlTOPp->mptw_top__DOT__pipe_to_walking_ready)));
    vlTOPp->mptw_top__DOT__input_transaction[0U] = 
        ((0xfffffff0U & ((IData)(vlTOPp->spa_i) << 4U)) 
         | ((IData)(vlTOPp->access_type_i) << 2U));
    vlTOPp->mptw_top__DOT__input_transaction[1U] = 
        ((0xfU & ((IData)(vlTOPp->spa_i) >> 0x1cU)) 
         | (0xfffffff0U & ((IData)((vlTOPp->spa_i >> 0x20U)) 
                           << 4U)));
    vlTOPp->mptw_top__DOT__input_transaction[2U] = 
        ((0xfU & ((IData)((vlTOPp->spa_i >> 0x20U)) 
                  >> 0x1cU)) | (0xfffffff0U & ((IData)(vlTOPp->mmpt_reg_i) 
                                               << 4U)));
    vlTOPp->mptw_top__DOT__input_transaction[3U] = 
        ((0xfU & ((IData)(vlTOPp->mmpt_reg_i) >> 0x1cU)) 
         | (0xfffffff0U & ((IData)((vlTOPp->mmpt_reg_i 
                                    >> 0x20U)) << 4U)));
    vlTOPp->mptw_top__DOT__input_transaction[4U] = 
        (0xfU & ((IData)((vlTOPp->mmpt_reg_i >> 0x20U)) 
                 >> 0x1cU));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req[0U] 
        = ((vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[1U] 
            << 0x1eU) | (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[0U] 
                         >> 2U));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req[1U] 
        = ((vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[2U] 
            << 0x1eU) | (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[1U] 
                         >> 2U));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req[2U] 
        = ((0xfcU & ((vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[4U] 
                      << 8U) | (0xfcU & (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[3U] 
                                         >> 0x18U)))) 
           | (3U & ((vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[3U] 
                     << 0x1eU) | (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[2U] 
                                  >> 2U))));
    vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__stall 
        = ((IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__first_valid_q) 
           & (~ (IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_ready 
        = ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced) 
           & (~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__stall)));
    vlTOPp->mptw_top__DOT__fetch_exception_cause = 0U;
    if (vlTOPp->mptw_transaction_valid_i) {
        if ((8U & vlTOPp->mptw_top__DOT__input_transaction[4U])) {
            vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
        } else {
            if ((4U & vlTOPp->mptw_top__DOT__input_transaction[4U])) {
                vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
            } else {
                if ((2U & vlTOPp->mptw_top__DOT__input_transaction[4U])) {
                    if ((1U & vlTOPp->mptw_top__DOT__input_transaction[4U])) {
                        vlTOPp->mptw_top__DOT__fetch_exception_cause = 0U;
                    } else {
                        if ((0U != (0xfffU & ((vlTOPp->mptw_top__DOT__input_transaction[2U] 
                                               << 8U) 
                                              | (vlTOPp->mptw_top__DOT__input_transaction[1U] 
                                                 >> 0x18U))))) {
                            vlTOPp->mptw_top__DOT__fetch_exception_cause = 3U;
                        }
                    }
                } else {
                    if ((1U & vlTOPp->mptw_top__DOT__input_transaction[4U])) {
                        if ((0U != (0x1fffffU & ((vlTOPp->mptw_top__DOT__input_transaction[2U] 
                                                  << 0x11U) 
                                                 | (vlTOPp->mptw_top__DOT__input_transaction[1U] 
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
    vlTOPp->mptw_ready_o = (1U & (~ (IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__stall)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[2U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[2U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[4U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[3U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[2U])) 
                                        >> 4U)))) << 4U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[3U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[4U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[3U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[2U])) 
                                              >> 4U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[4U])) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[3U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[2U])) 
                                                                 >> 4U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[4U] 
        = (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[4U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[3U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[2U])) 
                                              >> 4U))) 
                            >> 0x20U)) >> 0x1cU));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[0U] 
        = ((0xfU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[0U]) 
           | (0xfffffff0U & ((IData)((((QData)((IData)(
                                                       vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[2U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[1U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[0U])) 
                                        >> 4U)))) << 4U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[1U] 
        = ((0xfU & ((IData)((((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[2U])) 
                              << 0x3cU) | (((QData)((IData)(
                                                            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[1U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[0U])) 
                                              >> 4U)))) 
                    >> 0x1cU)) | (0xfffffff0U & ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[2U])) 
                                                            << 0x3cU) 
                                                           | (((QData)((IData)(
                                                                               vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[1U])) 
                                                               << 0x1cU) 
                                                              | ((QData)((IData)(
                                                                                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[0U])) 
                                                                 >> 4U))) 
                                                          >> 0x20U)) 
                                                 << 4U)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[2U] 
        = ((0xfffffff0U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[2U]) 
           | (0xfU & ((IData)(((((QData)((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[2U])) 
                                 << 0x3cU) | (((QData)((IData)(
                                                               vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[1U])) 
                                               << 0x1cU) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[0U])) 
                                                 >> 4U))) 
                               >> 0x20U)) >> 0x1cU)));
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[0U] 
        = ((0xfffffff3U & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[0U]) 
           | (0xcU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[0U]));
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_ready) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[0U] 
            = ((0xfffffffcU & vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[0U]) 
               | ((1U & ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_q) 
                         | (IData)(vlTOPp->plb_cache_mem_rdata)))
                   ? 3U : 0U));
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__stall 
        = ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__first_valid_q) 
           & (~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_ready)));
    vlTOPp->plb_cache_mem_req = 0U;
    if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__stall)))) {
        vlTOPp->plb_cache_mem_req = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__valid_q;
    }
    vlTOPp->plb_cache_mem_addr[0U] = 0U;
    vlTOPp->plb_cache_mem_addr[1U] = 0U;
    vlTOPp->plb_cache_mem_addr[2U] = 0U;
    if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__stall)))) {
        vlTOPp->plb_cache_mem_addr[0U] = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req[0U];
        vlTOPp->plb_cache_mem_addr[1U] = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req[1U];
        vlTOPp->plb_cache_mem_addr[2U] = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req[2U];
    }
    if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__stall)))) {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid 
            = vlTOPp->plb_cache_mem_gnt;
    }
}

void Vmptw_top::_eval_initial(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_eval_initial\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

void Vmptw_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::final\n"); );
    // Variables
    Vmptw_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmptw_top::_eval_settle(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_eval_settle\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vmptw_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_ni = VL_RAND_RESET_I(1);
    flush_i = VL_RAND_RESET_I(1);
    mptw_enable_i = VL_RAND_RESET_I(1);
    spa_i = VL_RAND_RESET_Q(64);
    mmpt_reg_i = VL_RAND_RESET_Q(64);
    access_type_i = VL_RAND_RESET_I(2);
    mptw_transaction_valid_i = VL_RAND_RESET_I(1);
    mptw_ready_o = VL_RAND_RESET_I(1);
    access_page_fault_o = VL_RAND_RESET_I(1);
    format_error_o = VL_RAND_RESET_I(3);
    plb_cache_mem_req = VL_RAND_RESET_I(1);
    plb_cache_mem_gnt = VL_RAND_RESET_I(1);
    plb_cache_mem_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, plb_cache_mem_addr);
    plb_cache_mem_rdata = VL_RAND_RESET_I(8);
    plb_cache_mem_wdata = VL_RAND_RESET_I(8);
    plb_cache_mem_we = VL_RAND_RESET_I(1);
    plb_cache_mem_be = VL_RAND_RESET_I(1);
    plb_cache_mem_error = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, mptw_top__DOT__input_transaction);
    mptw_top__DOT__fetch_exception_cause = VL_RAND_RESET_I(3);
    mptw_top__DOT__pipe_to_plb_lookup_ready = VL_RAND_RESET_I(1);
    mptw_top__DOT__pipe_to_walking_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, mptw_top__DOT__fetch_stage_u__DOT__transaction_o);
    VL_RAND_RESET_W(132, mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q);
    mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__valid_q = VL_RAND_RESET_I(1);
    mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__first_valid_q = VL_RAND_RESET_I(1);
    mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__stall = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req);
    VL_RAND_RESET_W(132, mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction);
    mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_q = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q);
    mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__valid_q = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__first_valid_q = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__stall = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q);
    mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__valid_q = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__first_valid_q = VL_RAND_RESET_I(1);
    mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__stall = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
