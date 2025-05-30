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

VL_INLINE_OPT void Vmptw_top::_combo__TOP__2(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_combo__TOP__2\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void Vmptw_top::_sequent__TOP__3(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_sequent__TOP__3\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_q;
    CData/*0:0*/ __Vdly__mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q;
    // Body
    __Vdly__mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_q 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_q;
    __Vdly__mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q;
    if (vlTOPp->rst_ni) {
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
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[0U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[0U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[1U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[1U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[2U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[2U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[3U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[3U];
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[4U] 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[4U];
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
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__next_state) 
               & 1U);
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state 
            = ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__next_state) 
               & 1U);
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[0U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[1U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[2U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[3U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[4U] = 0U;
        vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__current_state = 0U;
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state = 0U;
    }
    if (vlTOPp->rst_ni) {
        if (((IData)(vlTOPp->plb_cache_mem_valid) & 
             (~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready)))) {
            __Vdly__mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_q 
                = (1U & (IData)(vlTOPp->plb_cache_mem_rdata));
            __Vdly__mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q 
                = vlTOPp->plb_cache_mem_valid;
        } else {
            if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q) {
                __Vdly__mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_q 
                    = ((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready)) 
                       & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_q));
                __Vdly__mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q 
                    = ((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready)) 
                       & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q));
            } else {
                __Vdly__mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_q = 0U;
                __Vdly__mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q = 0U;
            }
        }
    } else {
        __Vdly__mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_q = 0U;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_q 
        = __Vdly__mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_q;
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q 
        = __Vdly__mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q;
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
    if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_valid = 0U;
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__pipe_to_walking_valid = 1U;
        }
    } else {
        vlTOPp->mptw_top__DOT__pipe_to_walking_valid = 0U;
    }
}

VL_INLINE_OPT void Vmptw_top::_combo__TOP__4(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_combo__TOP__4\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced 
        = ((IData)(vlTOPp->plb_cache_mem_valid) | (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_hit_valid_q));
    if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__next_state 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced;
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__next_state 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced;
    }
    if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready = 1U;
            if ((1U & (~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced)))) {
                if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced) {
                    vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready = 1U;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_ready 
        = ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced) 
           & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_to_pipe_ready));
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__next_state 
                = (1U & (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid) 
                          & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_ready)) 
                         | (~ ((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid)) 
                               & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_ready)))));
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__next_state 
            = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid;
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[0U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[0U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[1U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[1U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[2U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[2U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[3U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[3U];
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[4U] 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_q[4U];
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__current_state) {
            if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid) 
                 & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_ready))) {
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[0U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[1U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[2U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[3U];
                vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[4U];
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[0U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[1U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[2U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[3U];
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__fetch_to_plb_lookup_reg_u__DOT__reg_data_q[4U];
        }
    }
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
    if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__current_state) {
            vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_ready = 1U;
            if ((1U & (~ ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid) 
                          & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_ready))))) {
                if ((1U & (~ ((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid)) 
                              & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_ready))))) {
                    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_ready = 0U;
                }
            }
        }
    } else {
        vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_ready = 1U;
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
    if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
        if (vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__current_state) {
            if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced) {
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[0U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[0U];
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[1U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[1U];
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[2U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[2U];
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[3U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[3U];
                vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[4U] 
                    = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[4U];
            }
        }
    } else {
        if (vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__hit_produced) {
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[0U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[0U];
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[1U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[1U];
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[2U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[2U];
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[3U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[3U];
            vlTOPp->mptw_top__DOT__plb_lookup_to_walking_reg_u__DOT__reg_data_d[4U] 
                = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__valid_stage_post_hit_transaction[4U];
        }
    }
    vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid 
        = (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_ready) 
            & (IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid)) 
           & (IData)(vlTOPp->plb_cache_mem_gnt));
    vlTOPp->plb_cache_mem_req = 0U;
    vlTOPp->plb_cache_mem_req = ((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_ready) 
                                 & (IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid));
    vlTOPp->plb_cache_mem_addr[0U] = 0U;
    vlTOPp->plb_cache_mem_addr[1U] = 0U;
    vlTOPp->plb_cache_mem_addr[2U] = 0U;
    if (((IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_ready) 
         & (IData)(vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_valid))) {
        vlTOPp->plb_cache_mem_addr[0U] = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req[0U];
        vlTOPp->plb_cache_mem_addr[1U] = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req[1U];
        vlTOPp->plb_cache_mem_addr[2U] = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__plb_tag_req[2U];
    } else {
        vlTOPp->plb_cache_mem_addr[0U] = 0U;
        vlTOPp->plb_cache_mem_addr[1U] = 0U;
        vlTOPp->plb_cache_mem_addr[2U] = 0U;
    }
    vlTOPp->mptw_top__DOT__pipe_to_plb_lookup_ready 
        = (1U & ((~ (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_reg__DOT__current_state)) 
                 | ((IData)(vlTOPp->plb_cache_mem_gnt) 
                    & (IData)(vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_ready))));
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
    vlTOPp->mptw_ready_o = vlTOPp->mptw_top__DOT__fetch_to_pipe_ready;
}

void Vmptw_top::_eval(Vmptw_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmptw_top::_eval\n"); );
    Vmptw_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
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
    __req |= ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid));
    VL_DEBUG_IF( if(__req && ((vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid ^ vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid))) VL_DBG_MSGF("        CHANGE: /home/stefano/Desktop/Work/Projects/smmtt/b_pipelining/rtl/plb_lookup_stage.sv:69: mptw_top.plb_lookup_stage_u.grant_to_valid_valid\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid 
        = vlTOPp->mptw_top__DOT__plb_lookup_stage_u__DOT__grant_to_valid_valid;
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
    if (VL_UNLIKELY((plb_cache_mem_gnt & 0xfeU))) {
        Verilated::overWidthError("plb_cache_mem_gnt");}
    if (VL_UNLIKELY((plb_cache_mem_valid & 0xfeU))) {
        Verilated::overWidthError("plb_cache_mem_valid");}
    if (VL_UNLIKELY((plb_cache_mem_error & 0xfeU))) {
        Verilated::overWidthError("plb_cache_mem_error");}
}
#endif  // VL_DEBUG
